// DolRecomp output
#include "../generated.h"

static void loop_7F27E3C4(CPUState* ctx) {
label_7F27E3C4:
    ctx->downcount -= 5;
    ctx->pc = 0x7F27E3C4u;
    // 7F27E3C4: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F27E3C8u;
    // 7F27E3C8: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F27E3CCu;
    // 7F27E3CC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F27E3D0u;
    // 7F27E3D0: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F27E3D4: bc    16, 0, 0x7F27E3C4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27E3C4u;
                return;
            }
            goto label_7F27E3C4;
        }
    }

    ctx->pc = 0x7F27E3D8u;
}

static void loop_7F27F5CC(CPUState* ctx) {
label_7F27F5CC:
    ctx->downcount -= 4;
    // 7F27F5CC: addi    r0, r3, 12
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(12);

    // 7F27F5D0: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

    ctx->pc = 0x7F27F5D4u;
    // 7F27F5D4: stwx    r31, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    // 7F27F5D8: bc    16, 0, 0x7F27F5CC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27F5CCu;
                return;
            }
            goto label_7F27F5CC;
        }
    }

    ctx->pc = 0x7F27F5DCu;
}

static void loop_7F27F6B4(CPUState* ctx) {
label_7F27F6B4:
    ctx->downcount -= 6;
    // 7F27F6B4: addi    r4, r3, 4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(4);

    // 7F27F6B8: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

    ctx->pc = 0x7F27F6BCu;
    // 7F27F6BC: lwzx    r0, r5, r4
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[4];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 7F27F6C0: add   r0, r0, r31
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

    ctx->pc = 0x7F27F6C4u;
    // 7F27F6C4: stwx    r0, r5, r4
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 7F27F6C8: bc    16, 0, 0x7F27F6B4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27F6B4u;
                return;
            }
            goto label_7F27F6B4;
        }
    }

    ctx->pc = 0x7F27F6CCu;
}

void func_7F27C0EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F27C0ECu: goto label_7F27C0EC;
    case 0x7F27C0F0u: goto label_7F27C0F0;
    case 0x7F27C0F4u: goto label_7F27C0F4;
    case 0x7F27C0F8u: goto label_7F27C0F8;
    case 0x7F27C0FCu: goto label_7F27C0FC;
    case 0x7F27C100u: goto label_7F27C100;
    case 0x7F27C104u: goto label_7F27C104;
    case 0x7F27C108u: goto label_7F27C108;
    case 0x7F27C10Cu: goto label_7F27C10C;
    case 0x7F27C110u: goto label_7F27C110;
    case 0x7F27C114u: goto label_7F27C114;
    case 0x7F27C118u: goto label_7F27C118;
    case 0x7F27C11Cu: goto label_7F27C11C;
    case 0x7F27C120u: goto label_7F27C120;
    case 0x7F27C124u: goto label_7F27C124;
    case 0x7F27C128u: goto label_7F27C128;
    case 0x7F27C12Cu: goto label_7F27C12C;
    case 0x7F27C130u: goto label_7F27C130;
    case 0x7F27C134u: goto label_7F27C134;
    case 0x7F27C138u: goto label_7F27C138;
    case 0x7F27C13Cu: goto label_7F27C13C;
    case 0x7F27C140u: goto label_7F27C140;
    case 0x7F27C144u: goto label_7F27C144;
    case 0x7F27C148u: goto label_7F27C148;
    case 0x7F27C14Cu: goto label_7F27C14C;
    case 0x7F27C150u: goto label_7F27C150;
    case 0x7F27C154u: goto label_7F27C154;
    case 0x7F27C158u: goto label_7F27C158;
    case 0x7F27C15Cu: goto label_7F27C15C;
    case 0x7F27C160u: goto label_7F27C160;
    case 0x7F27C164u: goto label_7F27C164;
    case 0x7F27C168u: goto label_7F27C168;
    case 0x7F27C16Cu: goto label_7F27C16C;
    case 0x7F27C170u: goto label_7F27C170;
    case 0x7F27C174u: goto label_7F27C174;
    case 0x7F27C178u: goto label_7F27C178;
    case 0x7F27C17Cu: goto label_7F27C17C;
    case 0x7F27C180u: goto label_7F27C180;
    case 0x7F27C184u: goto label_7F27C184;
    case 0x7F27C188u: goto label_7F27C188;
    case 0x7F27C18Cu: goto label_7F27C18C;
    case 0x7F27C190u: goto label_7F27C190;
    case 0x7F27C194u: goto label_7F27C194;
    case 0x7F27C198u: goto label_7F27C198;
    case 0x7F27C19Cu: goto label_7F27C19C;
    case 0x7F27C1A0u: goto label_7F27C1A0;
    case 0x7F27C1A4u: goto label_7F27C1A4;
    case 0x7F27C1A8u: goto label_7F27C1A8;
    case 0x7F27C1ACu: goto label_7F27C1AC;
    case 0x7F27C1B0u: goto label_7F27C1B0;
    case 0x7F27C1B4u: goto label_7F27C1B4;
    case 0x7F27C1B8u: goto label_7F27C1B8;
    case 0x7F27C1BCu: goto label_7F27C1BC;
    case 0x7F27C1C0u: goto label_7F27C1C0;
    case 0x7F27C1C4u: goto label_7F27C1C4;
    case 0x7F27C1C8u: goto label_7F27C1C8;
    case 0x7F27C1CCu: goto label_7F27C1CC;
    case 0x7F27C1D0u: goto label_7F27C1D0;
    case 0x7F27C1D4u: goto label_7F27C1D4;
    case 0x7F27C1D8u: goto label_7F27C1D8;
    case 0x7F27C1DCu: goto label_7F27C1DC;
    case 0x7F27C1E0u: goto label_7F27C1E0;
    case 0x7F27C1E4u: goto label_7F27C1E4;
    case 0x7F27C1E8u: goto label_7F27C1E8;
    case 0x7F27C1ECu: goto label_7F27C1EC;
    case 0x7F27C1F0u: goto label_7F27C1F0;
    case 0x7F27C1F4u: goto label_7F27C1F4;
    case 0x7F27C1F8u: goto label_7F27C1F8;
    case 0x7F27C1FCu: goto label_7F27C1FC;
    case 0x7F27C200u: goto label_7F27C200;
    case 0x7F27C204u: goto label_7F27C204;
    case 0x7F27C208u: goto label_7F27C208;
    case 0x7F27C20Cu: goto label_7F27C20C;
    case 0x7F27C210u: goto label_7F27C210;
    case 0x7F27C214u: goto label_7F27C214;
    case 0x7F27C218u: goto label_7F27C218;
    case 0x7F27C21Cu: goto label_7F27C21C;
    case 0x7F27C220u: goto label_7F27C220;
    case 0x7F27C224u: goto label_7F27C224;
    case 0x7F27C228u: goto label_7F27C228;
    case 0x7F27C22Cu: goto label_7F27C22C;
    case 0x7F27C230u: goto label_7F27C230;
    case 0x7F27C234u: goto label_7F27C234;
    case 0x7F27C238u: goto label_7F27C238;
    case 0x7F27C23Cu: goto label_7F27C23C;
    case 0x7F27C240u: goto label_7F27C240;
    case 0x7F27C244u: goto label_7F27C244;
    case 0x7F27C248u: goto label_7F27C248;
    case 0x7F27C24Cu: goto label_7F27C24C;
    case 0x7F27C250u: goto label_7F27C250;
    case 0x7F27C254u: goto label_7F27C254;
    case 0x7F27C258u: goto label_7F27C258;
    case 0x7F27C25Cu: goto label_7F27C25C;
    case 0x7F27C260u: goto label_7F27C260;
    case 0x7F27C264u: goto label_7F27C264;
    case 0x7F27C268u: goto label_7F27C268;
    case 0x7F27C26Cu: goto label_7F27C26C;
    case 0x7F27C270u: goto label_7F27C270;
    case 0x7F27C274u: goto label_7F27C274;
    case 0x7F27C278u: goto label_7F27C278;
    case 0x7F27C27Cu: goto label_7F27C27C;
    case 0x7F27C280u: goto label_7F27C280;
    case 0x7F27C284u: goto label_7F27C284;
    case 0x7F27C288u: goto label_7F27C288;
    case 0x7F27C28Cu: goto label_7F27C28C;
    case 0x7F27C290u: goto label_7F27C290;
    case 0x7F27C294u: goto label_7F27C294;
    case 0x7F27C298u: goto label_7F27C298;
    case 0x7F27C29Cu: goto label_7F27C29C;
    case 0x7F27C2A0u: goto label_7F27C2A0;
    case 0x7F27C2A4u: goto label_7F27C2A4;
    case 0x7F27C2A8u: goto label_7F27C2A8;
    case 0x7F27C2ACu: goto label_7F27C2AC;
    case 0x7F27C2B0u: goto label_7F27C2B0;
    case 0x7F27C2B4u: goto label_7F27C2B4;
    case 0x7F27C2B8u: goto label_7F27C2B8;
    case 0x7F27C2BCu: goto label_7F27C2BC;
    case 0x7F27C2C0u: goto label_7F27C2C0;
    case 0x7F27C2C4u: goto label_7F27C2C4;
    case 0x7F27C2C8u: goto label_7F27C2C8;
    case 0x7F27C2CCu: goto label_7F27C2CC;
    case 0x7F27C2D0u: goto label_7F27C2D0;
    case 0x7F27C2D4u: goto label_7F27C2D4;
    case 0x7F27C2D8u: goto label_7F27C2D8;
    case 0x7F27C2DCu: goto label_7F27C2DC;
    case 0x7F27C2E0u: goto label_7F27C2E0;
    case 0x7F27C2E4u: goto label_7F27C2E4;
    case 0x7F27C2E8u: goto label_7F27C2E8;
    case 0x7F27C2ECu: goto label_7F27C2EC;
    case 0x7F27C2F0u: goto label_7F27C2F0;
    case 0x7F27C2F4u: goto label_7F27C2F4;
    case 0x7F27C2F8u: goto label_7F27C2F8;
    case 0x7F27C2FCu: goto label_7F27C2FC;
    case 0x7F27C300u: goto label_7F27C300;
    case 0x7F27C304u: goto label_7F27C304;
    case 0x7F27C308u: goto label_7F27C308;
    case 0x7F27C30Cu: goto label_7F27C30C;
    case 0x7F27C310u: goto label_7F27C310;
    case 0x7F27C314u: goto label_7F27C314;
    case 0x7F27C318u: goto label_7F27C318;
    case 0x7F27C31Cu: goto label_7F27C31C;
    case 0x7F27C320u: goto label_7F27C320;
    case 0x7F27C324u: goto label_7F27C324;
    case 0x7F27C328u: goto label_7F27C328;
    case 0x7F27C32Cu: goto label_7F27C32C;
    case 0x7F27C330u: goto label_7F27C330;
    case 0x7F27C334u: goto label_7F27C334;
    case 0x7F27C338u: goto label_7F27C338;
    case 0x7F27C33Cu: goto label_7F27C33C;
    case 0x7F27C340u: goto label_7F27C340;
    case 0x7F27C344u: goto label_7F27C344;
    case 0x7F27C348u: goto label_7F27C348;
    case 0x7F27C34Cu: goto label_7F27C34C;
    case 0x7F27C350u: goto label_7F27C350;
    case 0x7F27C354u: goto label_7F27C354;
    case 0x7F27C358u: goto label_7F27C358;
    case 0x7F27C35Cu: goto label_7F27C35C;
    case 0x7F27C360u: goto label_7F27C360;
    case 0x7F27C364u: goto label_7F27C364;
    case 0x7F27C368u: goto label_7F27C368;
    case 0x7F27C36Cu: goto label_7F27C36C;
    case 0x7F27C370u: goto label_7F27C370;
    case 0x7F27C374u: goto label_7F27C374;
    case 0x7F27C378u: goto label_7F27C378;
    case 0x7F27C37Cu: goto label_7F27C37C;
    case 0x7F27C380u: goto label_7F27C380;
    case 0x7F27C384u: goto label_7F27C384;
    case 0x7F27C388u: goto label_7F27C388;
    case 0x7F27C38Cu: goto label_7F27C38C;
    case 0x7F27C390u: goto label_7F27C390;
    case 0x7F27C394u: goto label_7F27C394;
    case 0x7F27C398u: goto label_7F27C398;
    case 0x7F27C39Cu: goto label_7F27C39C;
    case 0x7F27C3A0u: goto label_7F27C3A0;
    case 0x7F27C3A4u: goto label_7F27C3A4;
    case 0x7F27C3A8u: goto label_7F27C3A8;
    case 0x7F27C3ACu: goto label_7F27C3AC;
    case 0x7F27C3B0u: goto label_7F27C3B0;
    case 0x7F27C3B4u: goto label_7F27C3B4;
    case 0x7F27C3B8u: goto label_7F27C3B8;
    case 0x7F27C3BCu: goto label_7F27C3BC;
    case 0x7F27C3C0u: goto label_7F27C3C0;
    case 0x7F27C3C4u: goto label_7F27C3C4;
    case 0x7F27C3C8u: goto label_7F27C3C8;
    case 0x7F27C3CCu: goto label_7F27C3CC;
    case 0x7F27C3D0u: goto label_7F27C3D0;
    case 0x7F27C3D4u: goto label_7F27C3D4;
    case 0x7F27C3D8u: goto label_7F27C3D8;
    case 0x7F27C3DCu: goto label_7F27C3DC;
    case 0x7F27C3E0u: goto label_7F27C3E0;
    case 0x7F27C3E4u: goto label_7F27C3E4;
    case 0x7F27C3E8u: goto label_7F27C3E8;
    case 0x7F27C3ECu: goto label_7F27C3EC;
    case 0x7F27C3F0u: goto label_7F27C3F0;
    case 0x7F27C3F4u: goto label_7F27C3F4;
    case 0x7F27C3F8u: goto label_7F27C3F8;
    case 0x7F27C3FCu: goto label_7F27C3FC;
    case 0x7F27C400u: goto label_7F27C400;
    case 0x7F27C404u: goto label_7F27C404;
    case 0x7F27C408u: goto label_7F27C408;
    case 0x7F27C40Cu: goto label_7F27C40C;
    case 0x7F27C410u: goto label_7F27C410;
    case 0x7F27C414u: goto label_7F27C414;
    case 0x7F27C418u: goto label_7F27C418;
    case 0x7F27C41Cu: goto label_7F27C41C;
    case 0x7F27C420u: goto label_7F27C420;
    case 0x7F27C424u: goto label_7F27C424;
    case 0x7F27C428u: goto label_7F27C428;
    case 0x7F27C42Cu: goto label_7F27C42C;
    case 0x7F27C430u: goto label_7F27C430;
    case 0x7F27C434u: goto label_7F27C434;
    case 0x7F27C438u: goto label_7F27C438;
    case 0x7F27C43Cu: goto label_7F27C43C;
    case 0x7F27C440u: goto label_7F27C440;
    case 0x7F27C444u: goto label_7F27C444;
    case 0x7F27C448u: goto label_7F27C448;
    case 0x7F27C44Cu: goto label_7F27C44C;
    case 0x7F27C450u: goto label_7F27C450;
    case 0x7F27C454u: goto label_7F27C454;
    case 0x7F27C458u: goto label_7F27C458;
    case 0x7F27C45Cu: goto label_7F27C45C;
    case 0x7F27C460u: goto label_7F27C460;
    case 0x7F27C464u: goto label_7F27C464;
    case 0x7F27C468u: goto label_7F27C468;
    case 0x7F27C46Cu: goto label_7F27C46C;
    case 0x7F27C470u: goto label_7F27C470;
    case 0x7F27C474u: goto label_7F27C474;
    case 0x7F27C478u: goto label_7F27C478;
    case 0x7F27C47Cu: goto label_7F27C47C;
    case 0x7F27C480u: goto label_7F27C480;
    case 0x7F27C484u: goto label_7F27C484;
    case 0x7F27C488u: goto label_7F27C488;
    case 0x7F27C48Cu: goto label_7F27C48C;
    case 0x7F27C490u: goto label_7F27C490;
    case 0x7F27C494u: goto label_7F27C494;
    case 0x7F27C498u: goto label_7F27C498;
    case 0x7F27C49Cu: goto label_7F27C49C;
    case 0x7F27C4A0u: goto label_7F27C4A0;
    case 0x7F27C4A4u: goto label_7F27C4A4;
    case 0x7F27C4A8u: goto label_7F27C4A8;
    case 0x7F27C4ACu: goto label_7F27C4AC;
    case 0x7F27C4B0u: goto label_7F27C4B0;
    case 0x7F27C4B4u: goto label_7F27C4B4;
    case 0x7F27C4B8u: goto label_7F27C4B8;
    case 0x7F27C4BCu: goto label_7F27C4BC;
    case 0x7F27C4C0u: goto label_7F27C4C0;
    case 0x7F27C4C4u: goto label_7F27C4C4;
    case 0x7F27C4C8u: goto label_7F27C4C8;
    case 0x7F27C4CCu: goto label_7F27C4CC;
    case 0x7F27C4D0u: goto label_7F27C4D0;
    case 0x7F27C4D4u: goto label_7F27C4D4;
    case 0x7F27C4D8u: goto label_7F27C4D8;
    case 0x7F27C4DCu: goto label_7F27C4DC;
    case 0x7F27C4E0u: goto label_7F27C4E0;
    case 0x7F27C4E4u: goto label_7F27C4E4;
    case 0x7F27C4E8u: goto label_7F27C4E8;
    case 0x7F27C4ECu: goto label_7F27C4EC;
    case 0x7F27C4F0u: goto label_7F27C4F0;
    case 0x7F27C4F4u: goto label_7F27C4F4;
    case 0x7F27C4F8u: goto label_7F27C4F8;
    case 0x7F27C4FCu: goto label_7F27C4FC;
    case 0x7F27C500u: goto label_7F27C500;
    case 0x7F27C504u: goto label_7F27C504;
    case 0x7F27C508u: goto label_7F27C508;
    case 0x7F27C50Cu: goto label_7F27C50C;
    case 0x7F27C510u: goto label_7F27C510;
    case 0x7F27C514u: goto label_7F27C514;
    case 0x7F27C518u: goto label_7F27C518;
    case 0x7F27C51Cu: goto label_7F27C51C;
    case 0x7F27C520u: goto label_7F27C520;
    case 0x7F27C524u: goto label_7F27C524;
    case 0x7F27C528u: goto label_7F27C528;
    case 0x7F27C52Cu: goto label_7F27C52C;
    case 0x7F27C530u: goto label_7F27C530;
    case 0x7F27C534u: goto label_7F27C534;
    case 0x7F27C538u: goto label_7F27C538;
    case 0x7F27C53Cu: goto label_7F27C53C;
    case 0x7F27C540u: goto label_7F27C540;
    case 0x7F27C544u: goto label_7F27C544;
    case 0x7F27C548u: goto label_7F27C548;
    case 0x7F27C54Cu: goto label_7F27C54C;
    case 0x7F27C550u: goto label_7F27C550;
    case 0x7F27C554u: goto label_7F27C554;
    case 0x7F27C558u: goto label_7F27C558;
    case 0x7F27C55Cu: goto label_7F27C55C;
    case 0x7F27C560u: goto label_7F27C560;
    case 0x7F27C564u: goto label_7F27C564;
    case 0x7F27C568u: goto label_7F27C568;
    case 0x7F27C56Cu: goto label_7F27C56C;
    case 0x7F27C570u: goto label_7F27C570;
    case 0x7F27C574u: goto label_7F27C574;
    case 0x7F27C578u: goto label_7F27C578;
    case 0x7F27C57Cu: goto label_7F27C57C;
    case 0x7F27C580u: goto label_7F27C580;
    case 0x7F27C584u: goto label_7F27C584;
    case 0x7F27C588u: goto label_7F27C588;
    case 0x7F27C58Cu: goto label_7F27C58C;
    case 0x7F27C590u: goto label_7F27C590;
    case 0x7F27C594u: goto label_7F27C594;
    case 0x7F27C598u: goto label_7F27C598;
    case 0x7F27C59Cu: goto label_7F27C59C;
    case 0x7F27C5A0u: goto label_7F27C5A0;
    case 0x7F27C5A4u: goto label_7F27C5A4;
    case 0x7F27C5A8u: goto label_7F27C5A8;
    case 0x7F27C5ACu: goto label_7F27C5AC;
    case 0x7F27C5B0u: goto label_7F27C5B0;
    case 0x7F27C5B4u: goto label_7F27C5B4;
    case 0x7F27C5B8u: goto label_7F27C5B8;
    case 0x7F27C5BCu: goto label_7F27C5BC;
    case 0x7F27C5C0u: goto label_7F27C5C0;
    case 0x7F27C5C4u: goto label_7F27C5C4;
    case 0x7F27C5C8u: goto label_7F27C5C8;
    case 0x7F27C5CCu: goto label_7F27C5CC;
    case 0x7F27C5D0u: goto label_7F27C5D0;
    case 0x7F27C5D4u: goto label_7F27C5D4;
    case 0x7F27C5D8u: goto label_7F27C5D8;
    case 0x7F27C5DCu: goto label_7F27C5DC;
    case 0x7F27C5E0u: goto label_7F27C5E0;
    case 0x7F27C5E4u: goto label_7F27C5E4;
    case 0x7F27C5E8u: goto label_7F27C5E8;
    case 0x7F27C5ECu: goto label_7F27C5EC;
    case 0x7F27C5F0u: goto label_7F27C5F0;
    case 0x7F27C5F4u: goto label_7F27C5F4;
    case 0x7F27C5F8u: goto label_7F27C5F8;
    case 0x7F27C5FCu: goto label_7F27C5FC;
    case 0x7F27C600u: goto label_7F27C600;
    case 0x7F27C604u: goto label_7F27C604;
    case 0x7F27C608u: goto label_7F27C608;
    case 0x7F27C60Cu: goto label_7F27C60C;
    case 0x7F27C610u: goto label_7F27C610;
    case 0x7F27C614u: goto label_7F27C614;
    case 0x7F27C618u: goto label_7F27C618;
    case 0x7F27C61Cu: goto label_7F27C61C;
    case 0x7F27C620u: goto label_7F27C620;
    case 0x7F27C624u: goto label_7F27C624;
    case 0x7F27C628u: goto label_7F27C628;
    case 0x7F27C62Cu: goto label_7F27C62C;
    case 0x7F27C630u: goto label_7F27C630;
    case 0x7F27C634u: goto label_7F27C634;
    case 0x7F27C638u: goto label_7F27C638;
    case 0x7F27C63Cu: goto label_7F27C63C;
    case 0x7F27C640u: goto label_7F27C640;
    case 0x7F27C644u: goto label_7F27C644;
    case 0x7F27C648u: goto label_7F27C648;
    case 0x7F27C64Cu: goto label_7F27C64C;
    case 0x7F27C650u: goto label_7F27C650;
    case 0x7F27C654u: goto label_7F27C654;
    case 0x7F27C658u: goto label_7F27C658;
    case 0x7F27C65Cu: goto label_7F27C65C;
    case 0x7F27C660u: goto label_7F27C660;
    case 0x7F27C664u: goto label_7F27C664;
    case 0x7F27C668u: goto label_7F27C668;
    case 0x7F27C66Cu: goto label_7F27C66C;
    case 0x7F27C670u: goto label_7F27C670;
    case 0x7F27C674u: goto label_7F27C674;
    case 0x7F27C678u: goto label_7F27C678;
    case 0x7F27C67Cu: goto label_7F27C67C;
    case 0x7F27C680u: goto label_7F27C680;
    case 0x7F27C684u: goto label_7F27C684;
    case 0x7F27C688u: goto label_7F27C688;
    case 0x7F27C68Cu: goto label_7F27C68C;
    case 0x7F27C690u: goto label_7F27C690;
    case 0x7F27C694u: goto label_7F27C694;
    case 0x7F27C698u: goto label_7F27C698;
    case 0x7F27C69Cu: goto label_7F27C69C;
    case 0x7F27C6A0u: goto label_7F27C6A0;
    case 0x7F27C6A4u: goto label_7F27C6A4;
    case 0x7F27C6A8u: goto label_7F27C6A8;
    case 0x7F27C6ACu: goto label_7F27C6AC;
    case 0x7F27C6B0u: goto label_7F27C6B0;
    case 0x7F27C6B4u: goto label_7F27C6B4;
    case 0x7F27C6B8u: goto label_7F27C6B8;
    case 0x7F27C6BCu: goto label_7F27C6BC;
    case 0x7F27C6C0u: goto label_7F27C6C0;
    case 0x7F27C6C4u: goto label_7F27C6C4;
    case 0x7F27C6C8u: goto label_7F27C6C8;
    case 0x7F27C6CCu: goto label_7F27C6CC;
    case 0x7F27C6D0u: goto label_7F27C6D0;
    case 0x7F27C6D4u: goto label_7F27C6D4;
    case 0x7F27C6D8u: goto label_7F27C6D8;
    case 0x7F27C6DCu: goto label_7F27C6DC;
    case 0x7F27C6E0u: goto label_7F27C6E0;
    case 0x7F27C6E4u: goto label_7F27C6E4;
    case 0x7F27C6E8u: goto label_7F27C6E8;
    case 0x7F27C6ECu: goto label_7F27C6EC;
    case 0x7F27C6F0u: goto label_7F27C6F0;
    case 0x7F27C6F4u: goto label_7F27C6F4;
    case 0x7F27C6F8u: goto label_7F27C6F8;
    case 0x7F27C6FCu: goto label_7F27C6FC;
    case 0x7F27C700u: goto label_7F27C700;
    case 0x7F27C704u: goto label_7F27C704;
    case 0x7F27C708u: goto label_7F27C708;
    case 0x7F27C70Cu: goto label_7F27C70C;
    case 0x7F27C710u: goto label_7F27C710;
    case 0x7F27C714u: goto label_7F27C714;
    case 0x7F27C718u: goto label_7F27C718;
    case 0x7F27C71Cu: goto label_7F27C71C;
    case 0x7F27C720u: goto label_7F27C720;
    case 0x7F27C724u: goto label_7F27C724;
    case 0x7F27C728u: goto label_7F27C728;
    case 0x7F27C72Cu: goto label_7F27C72C;
    case 0x7F27C730u: goto label_7F27C730;
    case 0x7F27C734u: goto label_7F27C734;
    case 0x7F27C738u: goto label_7F27C738;
    case 0x7F27C73Cu: goto label_7F27C73C;
    case 0x7F27C740u: goto label_7F27C740;
    case 0x7F27C744u: goto label_7F27C744;
    case 0x7F27C748u: goto label_7F27C748;
    case 0x7F27C74Cu: goto label_7F27C74C;
    case 0x7F27C750u: goto label_7F27C750;
    case 0x7F27C754u: goto label_7F27C754;
    case 0x7F27C758u: goto label_7F27C758;
    case 0x7F27C75Cu: goto label_7F27C75C;
    case 0x7F27C760u: goto label_7F27C760;
    case 0x7F27C764u: goto label_7F27C764;
    case 0x7F27C768u: goto label_7F27C768;
    case 0x7F27C76Cu: goto label_7F27C76C;
    case 0x7F27C770u: goto label_7F27C770;
    case 0x7F27C774u: goto label_7F27C774;
    case 0x7F27C778u: goto label_7F27C778;
    case 0x7F27C77Cu: goto label_7F27C77C;
    case 0x7F27C780u: goto label_7F27C780;
    case 0x7F27C784u: goto label_7F27C784;
    case 0x7F27C788u: goto label_7F27C788;
    case 0x7F27C78Cu: goto label_7F27C78C;
    case 0x7F27C790u: goto label_7F27C790;
    case 0x7F27C794u: goto label_7F27C794;
    case 0x7F27C798u: goto label_7F27C798;
    case 0x7F27C79Cu: goto label_7F27C79C;
    case 0x7F27C7A0u: goto label_7F27C7A0;
    case 0x7F27C7A4u: goto label_7F27C7A4;
    case 0x7F27C7A8u: goto label_7F27C7A8;
    case 0x7F27C7ACu: goto label_7F27C7AC;
    case 0x7F27C7B0u: goto label_7F27C7B0;
    case 0x7F27C7B4u: goto label_7F27C7B4;
    case 0x7F27C7B8u: goto label_7F27C7B8;
    case 0x7F27C7BCu: goto label_7F27C7BC;
    case 0x7F27C7C0u: goto label_7F27C7C0;
    case 0x7F27C7C4u: goto label_7F27C7C4;
    case 0x7F27C7C8u: goto label_7F27C7C8;
    case 0x7F27C7CCu: goto label_7F27C7CC;
    case 0x7F27C7D0u: goto label_7F27C7D0;
    case 0x7F27C7D4u: goto label_7F27C7D4;
    case 0x7F27C7D8u: goto label_7F27C7D8;
    case 0x7F27C7DCu: goto label_7F27C7DC;
    case 0x7F27C7E0u: goto label_7F27C7E0;
    case 0x7F27C7E4u: goto label_7F27C7E4;
    case 0x7F27C7E8u: goto label_7F27C7E8;
    case 0x7F27C7ECu: goto label_7F27C7EC;
    case 0x7F27C7F0u: goto label_7F27C7F0;
    case 0x7F27C7F4u: goto label_7F27C7F4;
    case 0x7F27C7F8u: goto label_7F27C7F8;
    case 0x7F27C7FCu: goto label_7F27C7FC;
    case 0x7F27C800u: goto label_7F27C800;
    case 0x7F27C804u: goto label_7F27C804;
    case 0x7F27C808u: goto label_7F27C808;
    case 0x7F27C80Cu: goto label_7F27C80C;
    case 0x7F27C810u: goto label_7F27C810;
    case 0x7F27C814u: goto label_7F27C814;
    case 0x7F27C818u: goto label_7F27C818;
    case 0x7F27C81Cu: goto label_7F27C81C;
    case 0x7F27C820u: goto label_7F27C820;
    case 0x7F27C824u: goto label_7F27C824;
    case 0x7F27C828u: goto label_7F27C828;
    case 0x7F27C82Cu: goto label_7F27C82C;
    case 0x7F27C830u: goto label_7F27C830;
    case 0x7F27C834u: goto label_7F27C834;
    case 0x7F27C838u: goto label_7F27C838;
    case 0x7F27C83Cu: goto label_7F27C83C;
    case 0x7F27C840u: goto label_7F27C840;
    case 0x7F27C844u: goto label_7F27C844;
    case 0x7F27C848u: goto label_7F27C848;
    case 0x7F27C84Cu: goto label_7F27C84C;
    case 0x7F27C850u: goto label_7F27C850;
    case 0x7F27C854u: goto label_7F27C854;
    case 0x7F27C858u: goto label_7F27C858;
    case 0x7F27C85Cu: goto label_7F27C85C;
    case 0x7F27C860u: goto label_7F27C860;
    case 0x7F27C864u: goto label_7F27C864;
    case 0x7F27C868u: goto label_7F27C868;
    case 0x7F27C86Cu: goto label_7F27C86C;
    case 0x7F27C870u: goto label_7F27C870;
    case 0x7F27C874u: goto label_7F27C874;
    case 0x7F27C878u: goto label_7F27C878;
    case 0x7F27C87Cu: goto label_7F27C87C;
    case 0x7F27C880u: goto label_7F27C880;
    case 0x7F27C884u: goto label_7F27C884;
    case 0x7F27C888u: goto label_7F27C888;
    case 0x7F27C88Cu: goto label_7F27C88C;
    case 0x7F27C890u: goto label_7F27C890;
    case 0x7F27C894u: goto label_7F27C894;
    case 0x7F27C898u: goto label_7F27C898;
    case 0x7F27C89Cu: goto label_7F27C89C;
    case 0x7F27C8A0u: goto label_7F27C8A0;
    case 0x7F27C8A4u: goto label_7F27C8A4;
    case 0x7F27C8A8u: goto label_7F27C8A8;
    case 0x7F27C8ACu: goto label_7F27C8AC;
    case 0x7F27C8B0u: goto label_7F27C8B0;
    case 0x7F27C8B4u: goto label_7F27C8B4;
    case 0x7F27C8B8u: goto label_7F27C8B8;
    case 0x7F27C8BCu: goto label_7F27C8BC;
    case 0x7F27C8C0u: goto label_7F27C8C0;
    case 0x7F27C8C4u: goto label_7F27C8C4;
    case 0x7F27C8C8u: goto label_7F27C8C8;
    case 0x7F27C8CCu: goto label_7F27C8CC;
    case 0x7F27C8D0u: goto label_7F27C8D0;
    case 0x7F27C8D4u: goto label_7F27C8D4;
    case 0x7F27C8D8u: goto label_7F27C8D8;
    case 0x7F27C8DCu: goto label_7F27C8DC;
    case 0x7F27C8E0u: goto label_7F27C8E0;
    case 0x7F27C8E4u: goto label_7F27C8E4;
    case 0x7F27C8E8u: goto label_7F27C8E8;
    case 0x7F27C8ECu: goto label_7F27C8EC;
    case 0x7F27C8F0u: goto label_7F27C8F0;
    case 0x7F27C8F4u: goto label_7F27C8F4;
    case 0x7F27C8F8u: goto label_7F27C8F8;
    case 0x7F27C8FCu: goto label_7F27C8FC;
    case 0x7F27C900u: goto label_7F27C900;
    case 0x7F27C904u: goto label_7F27C904;
    case 0x7F27C908u: goto label_7F27C908;
    case 0x7F27C90Cu: goto label_7F27C90C;
    case 0x7F27C910u: goto label_7F27C910;
    case 0x7F27C914u: goto label_7F27C914;
    case 0x7F27C918u: goto label_7F27C918;
    case 0x7F27C91Cu: goto label_7F27C91C;
    case 0x7F27C920u: goto label_7F27C920;
    case 0x7F27C924u: goto label_7F27C924;
    case 0x7F27C928u: goto label_7F27C928;
    case 0x7F27C92Cu: goto label_7F27C92C;
    case 0x7F27C930u: goto label_7F27C930;
    case 0x7F27C934u: goto label_7F27C934;
    case 0x7F27C938u: goto label_7F27C938;
    case 0x7F27C93Cu: goto label_7F27C93C;
    case 0x7F27C940u: goto label_7F27C940;
    case 0x7F27C944u: goto label_7F27C944;
    case 0x7F27C948u: goto label_7F27C948;
    case 0x7F27C94Cu: goto label_7F27C94C;
    case 0x7F27C950u: goto label_7F27C950;
    case 0x7F27C954u: goto label_7F27C954;
    case 0x7F27C958u: goto label_7F27C958;
    case 0x7F27C95Cu: goto label_7F27C95C;
    case 0x7F27C960u: goto label_7F27C960;
    case 0x7F27C964u: goto label_7F27C964;
    case 0x7F27C968u: goto label_7F27C968;
    case 0x7F27C96Cu: goto label_7F27C96C;
    case 0x7F27C970u: goto label_7F27C970;
    case 0x7F27C974u: goto label_7F27C974;
    case 0x7F27C978u: goto label_7F27C978;
    case 0x7F27C97Cu: goto label_7F27C97C;
    case 0x7F27C980u: goto label_7F27C980;
    case 0x7F27C984u: goto label_7F27C984;
    case 0x7F27C988u: goto label_7F27C988;
    case 0x7F27C98Cu: goto label_7F27C98C;
    case 0x7F27C990u: goto label_7F27C990;
    case 0x7F27C994u: goto label_7F27C994;
    case 0x7F27C998u: goto label_7F27C998;
    case 0x7F27C99Cu: goto label_7F27C99C;
    case 0x7F27C9A0u: goto label_7F27C9A0;
    case 0x7F27C9A4u: goto label_7F27C9A4;
    case 0x7F27C9A8u: goto label_7F27C9A8;
    case 0x7F27C9ACu: goto label_7F27C9AC;
    case 0x7F27C9B0u: goto label_7F27C9B0;
    case 0x7F27C9B4u: goto label_7F27C9B4;
    case 0x7F27C9B8u: goto label_7F27C9B8;
    case 0x7F27C9BCu: goto label_7F27C9BC;
    case 0x7F27C9C0u: goto label_7F27C9C0;
    case 0x7F27C9C4u: goto label_7F27C9C4;
    case 0x7F27C9C8u: goto label_7F27C9C8;
    case 0x7F27C9CCu: goto label_7F27C9CC;
    case 0x7F27C9D0u: goto label_7F27C9D0;
    case 0x7F27C9D4u: goto label_7F27C9D4;
    case 0x7F27C9D8u: goto label_7F27C9D8;
    case 0x7F27C9DCu: goto label_7F27C9DC;
    case 0x7F27C9E0u: goto label_7F27C9E0;
    case 0x7F27C9E4u: goto label_7F27C9E4;
    case 0x7F27C9E8u: goto label_7F27C9E8;
    case 0x7F27C9ECu: goto label_7F27C9EC;
    case 0x7F27C9F0u: goto label_7F27C9F0;
    case 0x7F27C9F4u: goto label_7F27C9F4;
    case 0x7F27C9F8u: goto label_7F27C9F8;
    case 0x7F27C9FCu: goto label_7F27C9FC;
    case 0x7F27CA00u: goto label_7F27CA00;
    case 0x7F27CA04u: goto label_7F27CA04;
    case 0x7F27CA08u: goto label_7F27CA08;
    case 0x7F27CA0Cu: goto label_7F27CA0C;
    case 0x7F27CA10u: goto label_7F27CA10;
    case 0x7F27CA14u: goto label_7F27CA14;
    case 0x7F27CA18u: goto label_7F27CA18;
    case 0x7F27CA1Cu: goto label_7F27CA1C;
    case 0x7F27CA20u: goto label_7F27CA20;
    case 0x7F27CA24u: goto label_7F27CA24;
    case 0x7F27CA28u: goto label_7F27CA28;
    case 0x7F27CA2Cu: goto label_7F27CA2C;
    case 0x7F27CA30u: goto label_7F27CA30;
    case 0x7F27CA34u: goto label_7F27CA34;
    case 0x7F27CA38u: goto label_7F27CA38;
    case 0x7F27CA3Cu: goto label_7F27CA3C;
    case 0x7F27CA40u: goto label_7F27CA40;
    case 0x7F27CA44u: goto label_7F27CA44;
    case 0x7F27CA48u: goto label_7F27CA48;
    case 0x7F27CA4Cu: goto label_7F27CA4C;
    case 0x7F27CA50u: goto label_7F27CA50;
    case 0x7F27CA54u: goto label_7F27CA54;
    case 0x7F27CA58u: goto label_7F27CA58;
    case 0x7F27CA5Cu: goto label_7F27CA5C;
    case 0x7F27CA60u: goto label_7F27CA60;
    case 0x7F27CA64u: goto label_7F27CA64;
    case 0x7F27CA68u: goto label_7F27CA68;
    case 0x7F27CA6Cu: goto label_7F27CA6C;
    case 0x7F27CA70u: goto label_7F27CA70;
    case 0x7F27CA74u: goto label_7F27CA74;
    case 0x7F27CA78u: goto label_7F27CA78;
    case 0x7F27CA7Cu: goto label_7F27CA7C;
    case 0x7F27CA80u: goto label_7F27CA80;
    case 0x7F27CA84u: goto label_7F27CA84;
    case 0x7F27CA88u: goto label_7F27CA88;
    case 0x7F27CA8Cu: goto label_7F27CA8C;
    case 0x7F27CA90u: goto label_7F27CA90;
    case 0x7F27CA94u: goto label_7F27CA94;
    case 0x7F27CA98u: goto label_7F27CA98;
    case 0x7F27CA9Cu: goto label_7F27CA9C;
    case 0x7F27CAA0u: goto label_7F27CAA0;
    case 0x7F27CAA4u: goto label_7F27CAA4;
    case 0x7F27CAA8u: goto label_7F27CAA8;
    case 0x7F27CAACu: goto label_7F27CAAC;
    case 0x7F27CAB0u: goto label_7F27CAB0;
    case 0x7F27CAB4u: goto label_7F27CAB4;
    case 0x7F27CAB8u: goto label_7F27CAB8;
    case 0x7F27CABCu: goto label_7F27CABC;
    case 0x7F27CAC0u: goto label_7F27CAC0;
    case 0x7F27CAC4u: goto label_7F27CAC4;
    case 0x7F27CAC8u: goto label_7F27CAC8;
    case 0x7F27CACCu: goto label_7F27CACC;
    case 0x7F27CAD0u: goto label_7F27CAD0;
    case 0x7F27CAD4u: goto label_7F27CAD4;
    case 0x7F27CAD8u: goto label_7F27CAD8;
    case 0x7F27CADCu: goto label_7F27CADC;
    case 0x7F27CAE0u: goto label_7F27CAE0;
    case 0x7F27CAE4u: goto label_7F27CAE4;
    case 0x7F27CAE8u: goto label_7F27CAE8;
    case 0x7F27CAECu: goto label_7F27CAEC;
    case 0x7F27CAF0u: goto label_7F27CAF0;
    case 0x7F27CAF4u: goto label_7F27CAF4;
    case 0x7F27CAF8u: goto label_7F27CAF8;
    case 0x7F27CAFCu: goto label_7F27CAFC;
    case 0x7F27CB00u: goto label_7F27CB00;
    case 0x7F27CB04u: goto label_7F27CB04;
    case 0x7F27CB08u: goto label_7F27CB08;
    case 0x7F27CB0Cu: goto label_7F27CB0C;
    case 0x7F27CB10u: goto label_7F27CB10;
    case 0x7F27CB14u: goto label_7F27CB14;
    case 0x7F27CB18u: goto label_7F27CB18;
    case 0x7F27CB1Cu: goto label_7F27CB1C;
    case 0x7F27CB20u: goto label_7F27CB20;
    case 0x7F27CB24u: goto label_7F27CB24;
    case 0x7F27CB28u: goto label_7F27CB28;
    case 0x7F27CB2Cu: goto label_7F27CB2C;
    case 0x7F27CB30u: goto label_7F27CB30;
    case 0x7F27CB34u: goto label_7F27CB34;
    case 0x7F27CB38u: goto label_7F27CB38;
    case 0x7F27CB3Cu: goto label_7F27CB3C;
    case 0x7F27CB40u: goto label_7F27CB40;
    case 0x7F27CB44u: goto label_7F27CB44;
    case 0x7F27CB48u: goto label_7F27CB48;
    case 0x7F27CB4Cu: goto label_7F27CB4C;
    case 0x7F27CB50u: goto label_7F27CB50;
    case 0x7F27CB54u: goto label_7F27CB54;
    case 0x7F27CB58u: goto label_7F27CB58;
    case 0x7F27CB5Cu: goto label_7F27CB5C;
    case 0x7F27CB60u: goto label_7F27CB60;
    case 0x7F27CB64u: goto label_7F27CB64;
    case 0x7F27CB68u: goto label_7F27CB68;
    case 0x7F27CB6Cu: goto label_7F27CB6C;
    case 0x7F27CB70u: goto label_7F27CB70;
    case 0x7F27CB74u: goto label_7F27CB74;
    case 0x7F27CB78u: goto label_7F27CB78;
    case 0x7F27CB7Cu: goto label_7F27CB7C;
    case 0x7F27CB80u: goto label_7F27CB80;
    case 0x7F27CB84u: goto label_7F27CB84;
    case 0x7F27CB88u: goto label_7F27CB88;
    case 0x7F27CB8Cu: goto label_7F27CB8C;
    case 0x7F27CB90u: goto label_7F27CB90;
    case 0x7F27CB94u: goto label_7F27CB94;
    case 0x7F27CB98u: goto label_7F27CB98;
    case 0x7F27CB9Cu: goto label_7F27CB9C;
    case 0x7F27CBA0u: goto label_7F27CBA0;
    case 0x7F27CBA4u: goto label_7F27CBA4;
    case 0x7F27CBA8u: goto label_7F27CBA8;
    case 0x7F27CBACu: goto label_7F27CBAC;
    case 0x7F27CBB0u: goto label_7F27CBB0;
    case 0x7F27CBB4u: goto label_7F27CBB4;
    case 0x7F27CBB8u: goto label_7F27CBB8;
    case 0x7F27CBBCu: goto label_7F27CBBC;
    case 0x7F27CBC0u: goto label_7F27CBC0;
    case 0x7F27CBC4u: goto label_7F27CBC4;
    case 0x7F27CBC8u: goto label_7F27CBC8;
    case 0x7F27CBCCu: goto label_7F27CBCC;
    case 0x7F27CBD0u: goto label_7F27CBD0;
    case 0x7F27CBD4u: goto label_7F27CBD4;
    case 0x7F27CBD8u: goto label_7F27CBD8;
    case 0x7F27CBDCu: goto label_7F27CBDC;
    case 0x7F27CBE0u: goto label_7F27CBE0;
    case 0x7F27CBE4u: goto label_7F27CBE4;
    case 0x7F27CBE8u: goto label_7F27CBE8;
    case 0x7F27CBECu: goto label_7F27CBEC;
    case 0x7F27CBF0u: goto label_7F27CBF0;
    case 0x7F27CBF4u: goto label_7F27CBF4;
    case 0x7F27CBF8u: goto label_7F27CBF8;
    case 0x7F27CBFCu: goto label_7F27CBFC;
    case 0x7F27CC00u: goto label_7F27CC00;
    case 0x7F27CC04u: goto label_7F27CC04;
    case 0x7F27CC08u: goto label_7F27CC08;
    case 0x7F27CC0Cu: goto label_7F27CC0C;
    case 0x7F27CC10u: goto label_7F27CC10;
    case 0x7F27CC14u: goto label_7F27CC14;
    case 0x7F27CC18u: goto label_7F27CC18;
    case 0x7F27CC1Cu: goto label_7F27CC1C;
    case 0x7F27CC20u: goto label_7F27CC20;
    case 0x7F27CC24u: goto label_7F27CC24;
    case 0x7F27CC28u: goto label_7F27CC28;
    case 0x7F27CC2Cu: goto label_7F27CC2C;
    case 0x7F27CC30u: goto label_7F27CC30;
    case 0x7F27CC34u: goto label_7F27CC34;
    case 0x7F27CC38u: goto label_7F27CC38;
    case 0x7F27CC3Cu: goto label_7F27CC3C;
    case 0x7F27CC40u: goto label_7F27CC40;
    case 0x7F27CC44u: goto label_7F27CC44;
    case 0x7F27CC48u: goto label_7F27CC48;
    case 0x7F27CC4Cu: goto label_7F27CC4C;
    case 0x7F27CC50u: goto label_7F27CC50;
    case 0x7F27CC54u: goto label_7F27CC54;
    case 0x7F27CC58u: goto label_7F27CC58;
    case 0x7F27CC5Cu: goto label_7F27CC5C;
    case 0x7F27CC60u: goto label_7F27CC60;
    case 0x7F27CC64u: goto label_7F27CC64;
    case 0x7F27CC68u: goto label_7F27CC68;
    case 0x7F27CC6Cu: goto label_7F27CC6C;
    case 0x7F27CC70u: goto label_7F27CC70;
    case 0x7F27CC74u: goto label_7F27CC74;
    case 0x7F27CC78u: goto label_7F27CC78;
    case 0x7F27CC7Cu: goto label_7F27CC7C;
    case 0x7F27CC80u: goto label_7F27CC80;
    case 0x7F27CC84u: goto label_7F27CC84;
    case 0x7F27CC88u: goto label_7F27CC88;
    case 0x7F27CC8Cu: goto label_7F27CC8C;
    case 0x7F27CC90u: goto label_7F27CC90;
    case 0x7F27CC94u: goto label_7F27CC94;
    case 0x7F27CC98u: goto label_7F27CC98;
    case 0x7F27CC9Cu: goto label_7F27CC9C;
    case 0x7F27CCA0u: goto label_7F27CCA0;
    case 0x7F27CCA4u: goto label_7F27CCA4;
    case 0x7F27CCA8u: goto label_7F27CCA8;
    case 0x7F27CCACu: goto label_7F27CCAC;
    case 0x7F27CCB0u: goto label_7F27CCB0;
    case 0x7F27CCB4u: goto label_7F27CCB4;
    case 0x7F27CCB8u: goto label_7F27CCB8;
    case 0x7F27CCBCu: goto label_7F27CCBC;
    case 0x7F27CCC0u: goto label_7F27CCC0;
    case 0x7F27CCC4u: goto label_7F27CCC4;
    case 0x7F27CCC8u: goto label_7F27CCC8;
    case 0x7F27CCCCu: goto label_7F27CCCC;
    case 0x7F27CCD0u: goto label_7F27CCD0;
    case 0x7F27CCD4u: goto label_7F27CCD4;
    case 0x7F27CCD8u: goto label_7F27CCD8;
    case 0x7F27CCDCu: goto label_7F27CCDC;
    case 0x7F27CCE0u: goto label_7F27CCE0;
    case 0x7F27CCE4u: goto label_7F27CCE4;
    case 0x7F27CCE8u: goto label_7F27CCE8;
    case 0x7F27CCECu: goto label_7F27CCEC;
    case 0x7F27CCF0u: goto label_7F27CCF0;
    case 0x7F27CCF4u: goto label_7F27CCF4;
    case 0x7F27CCF8u: goto label_7F27CCF8;
    case 0x7F27CCFCu: goto label_7F27CCFC;
    case 0x7F27CD00u: goto label_7F27CD00;
    case 0x7F27CD04u: goto label_7F27CD04;
    case 0x7F27CD08u: goto label_7F27CD08;
    case 0x7F27CD0Cu: goto label_7F27CD0C;
    case 0x7F27CD10u: goto label_7F27CD10;
    case 0x7F27CD14u: goto label_7F27CD14;
    case 0x7F27CD18u: goto label_7F27CD18;
    case 0x7F27CD1Cu: goto label_7F27CD1C;
    case 0x7F27CD20u: goto label_7F27CD20;
    case 0x7F27CD24u: goto label_7F27CD24;
    case 0x7F27CD28u: goto label_7F27CD28;
    case 0x7F27CD2Cu: goto label_7F27CD2C;
    case 0x7F27CD30u: goto label_7F27CD30;
    case 0x7F27CD34u: goto label_7F27CD34;
    case 0x7F27CD38u: goto label_7F27CD38;
    case 0x7F27CD3Cu: goto label_7F27CD3C;
    case 0x7F27CD40u: goto label_7F27CD40;
    case 0x7F27CD44u: goto label_7F27CD44;
    case 0x7F27CD48u: goto label_7F27CD48;
    case 0x7F27CD4Cu: goto label_7F27CD4C;
    case 0x7F27CD50u: goto label_7F27CD50;
    case 0x7F27CD54u: goto label_7F27CD54;
    case 0x7F27CD58u: goto label_7F27CD58;
    case 0x7F27CD5Cu: goto label_7F27CD5C;
    case 0x7F27CD60u: goto label_7F27CD60;
    case 0x7F27CD64u: goto label_7F27CD64;
    case 0x7F27CD68u: goto label_7F27CD68;
    case 0x7F27CD6Cu: goto label_7F27CD6C;
    case 0x7F27CD70u: goto label_7F27CD70;
    case 0x7F27CD74u: goto label_7F27CD74;
    case 0x7F27CD78u: goto label_7F27CD78;
    case 0x7F27CD7Cu: goto label_7F27CD7C;
    case 0x7F27CD80u: goto label_7F27CD80;
    case 0x7F27CD84u: goto label_7F27CD84;
    case 0x7F27CD88u: goto label_7F27CD88;
    case 0x7F27CD8Cu: goto label_7F27CD8C;
    case 0x7F27CD90u: goto label_7F27CD90;
    case 0x7F27CD94u: goto label_7F27CD94;
    case 0x7F27CD98u: goto label_7F27CD98;
    case 0x7F27CD9Cu: goto label_7F27CD9C;
    case 0x7F27CDA0u: goto label_7F27CDA0;
    case 0x7F27CDA4u: goto label_7F27CDA4;
    case 0x7F27CDA8u: goto label_7F27CDA8;
    case 0x7F27CDACu: goto label_7F27CDAC;
    case 0x7F27CDB0u: goto label_7F27CDB0;
    case 0x7F27CDB4u: goto label_7F27CDB4;
    case 0x7F27CDB8u: goto label_7F27CDB8;
    case 0x7F27CDBCu: goto label_7F27CDBC;
    case 0x7F27CDC0u: goto label_7F27CDC0;
    case 0x7F27CDC4u: goto label_7F27CDC4;
    case 0x7F27CDC8u: goto label_7F27CDC8;
    case 0x7F27CDCCu: goto label_7F27CDCC;
    case 0x7F27CDD0u: goto label_7F27CDD0;
    case 0x7F27CDD4u: goto label_7F27CDD4;
    case 0x7F27CDD8u: goto label_7F27CDD8;
    case 0x7F27CDDCu: goto label_7F27CDDC;
    case 0x7F27CDE0u: goto label_7F27CDE0;
    case 0x7F27CDE4u: goto label_7F27CDE4;
    case 0x7F27CDE8u: goto label_7F27CDE8;
    case 0x7F27CDECu: goto label_7F27CDEC;
    case 0x7F27CDF0u: goto label_7F27CDF0;
    case 0x7F27CDF4u: goto label_7F27CDF4;
    case 0x7F27CDF8u: goto label_7F27CDF8;
    case 0x7F27CDFCu: goto label_7F27CDFC;
    case 0x7F27CE00u: goto label_7F27CE00;
    case 0x7F27CE04u: goto label_7F27CE04;
    case 0x7F27CE08u: goto label_7F27CE08;
    case 0x7F27CE0Cu: goto label_7F27CE0C;
    case 0x7F27CE10u: goto label_7F27CE10;
    case 0x7F27CE14u: goto label_7F27CE14;
    case 0x7F27CE18u: goto label_7F27CE18;
    case 0x7F27CE1Cu: goto label_7F27CE1C;
    case 0x7F27CE20u: goto label_7F27CE20;
    case 0x7F27CE24u: goto label_7F27CE24;
    case 0x7F27CE28u: goto label_7F27CE28;
    case 0x7F27CE2Cu: goto label_7F27CE2C;
    case 0x7F27CE30u: goto label_7F27CE30;
    case 0x7F27CE34u: goto label_7F27CE34;
    case 0x7F27CE38u: goto label_7F27CE38;
    case 0x7F27CE3Cu: goto label_7F27CE3C;
    case 0x7F27CE40u: goto label_7F27CE40;
    case 0x7F27CE44u: goto label_7F27CE44;
    case 0x7F27CE48u: goto label_7F27CE48;
    case 0x7F27CE4Cu: goto label_7F27CE4C;
    case 0x7F27CE50u: goto label_7F27CE50;
    case 0x7F27CE54u: goto label_7F27CE54;
    case 0x7F27CE58u: goto label_7F27CE58;
    case 0x7F27CE5Cu: goto label_7F27CE5C;
    case 0x7F27CE60u: goto label_7F27CE60;
    case 0x7F27CE64u: goto label_7F27CE64;
    case 0x7F27CE68u: goto label_7F27CE68;
    case 0x7F27CE6Cu: goto label_7F27CE6C;
    case 0x7F27CE70u: goto label_7F27CE70;
    case 0x7F27CE74u: goto label_7F27CE74;
    case 0x7F27CE78u: goto label_7F27CE78;
    case 0x7F27CE7Cu: goto label_7F27CE7C;
    case 0x7F27CE80u: goto label_7F27CE80;
    case 0x7F27CE84u: goto label_7F27CE84;
    case 0x7F27CE88u: goto label_7F27CE88;
    case 0x7F27CE8Cu: goto label_7F27CE8C;
    case 0x7F27CE90u: goto label_7F27CE90;
    case 0x7F27CE94u: goto label_7F27CE94;
    case 0x7F27CE98u: goto label_7F27CE98;
    case 0x7F27CE9Cu: goto label_7F27CE9C;
    case 0x7F27CEA0u: goto label_7F27CEA0;
    case 0x7F27CEA4u: goto label_7F27CEA4;
    case 0x7F27CEA8u: goto label_7F27CEA8;
    case 0x7F27CEACu: goto label_7F27CEAC;
    case 0x7F27CEB0u: goto label_7F27CEB0;
    case 0x7F27CEB4u: goto label_7F27CEB4;
    case 0x7F27CEB8u: goto label_7F27CEB8;
    case 0x7F27CEBCu: goto label_7F27CEBC;
    case 0x7F27CEC0u: goto label_7F27CEC0;
    case 0x7F27CEC4u: goto label_7F27CEC4;
    case 0x7F27CEC8u: goto label_7F27CEC8;
    case 0x7F27CECCu: goto label_7F27CECC;
    case 0x7F27CED0u: goto label_7F27CED0;
    case 0x7F27CED4u: goto label_7F27CED4;
    case 0x7F27CED8u: goto label_7F27CED8;
    case 0x7F27CEDCu: goto label_7F27CEDC;
    case 0x7F27CEE0u: goto label_7F27CEE0;
    case 0x7F27CEE4u: goto label_7F27CEE4;
    case 0x7F27CEE8u: goto label_7F27CEE8;
    case 0x7F27CEECu: goto label_7F27CEEC;
    case 0x7F27CEF0u: goto label_7F27CEF0;
    case 0x7F27CEF4u: goto label_7F27CEF4;
    case 0x7F27CEF8u: goto label_7F27CEF8;
    case 0x7F27CEFCu: goto label_7F27CEFC;
    case 0x7F27CF00u: goto label_7F27CF00;
    case 0x7F27CF04u: goto label_7F27CF04;
    case 0x7F27CF08u: goto label_7F27CF08;
    case 0x7F27CF0Cu: goto label_7F27CF0C;
    case 0x7F27CF10u: goto label_7F27CF10;
    case 0x7F27CF14u: goto label_7F27CF14;
    case 0x7F27CF18u: goto label_7F27CF18;
    case 0x7F27CF1Cu: goto label_7F27CF1C;
    case 0x7F27CF20u: goto label_7F27CF20;
    case 0x7F27CF24u: goto label_7F27CF24;
    case 0x7F27CF28u: goto label_7F27CF28;
    case 0x7F27CF2Cu: goto label_7F27CF2C;
    case 0x7F27CF30u: goto label_7F27CF30;
    case 0x7F27CF34u: goto label_7F27CF34;
    case 0x7F27CF38u: goto label_7F27CF38;
    case 0x7F27CF3Cu: goto label_7F27CF3C;
    case 0x7F27CF40u: goto label_7F27CF40;
    case 0x7F27CF44u: goto label_7F27CF44;
    case 0x7F27CF48u: goto label_7F27CF48;
    case 0x7F27CF4Cu: goto label_7F27CF4C;
    case 0x7F27CF50u: goto label_7F27CF50;
    case 0x7F27CF54u: goto label_7F27CF54;
    case 0x7F27CF58u: goto label_7F27CF58;
    case 0x7F27CF5Cu: goto label_7F27CF5C;
    case 0x7F27CF60u: goto label_7F27CF60;
    case 0x7F27CF64u: goto label_7F27CF64;
    case 0x7F27CF68u: goto label_7F27CF68;
    case 0x7F27CF6Cu: goto label_7F27CF6C;
    case 0x7F27CF70u: goto label_7F27CF70;
    case 0x7F27CF74u: goto label_7F27CF74;
    case 0x7F27CF78u: goto label_7F27CF78;
    case 0x7F27CF7Cu: goto label_7F27CF7C;
    case 0x7F27CF80u: goto label_7F27CF80;
    case 0x7F27CF84u: goto label_7F27CF84;
    case 0x7F27CF88u: goto label_7F27CF88;
    case 0x7F27CF8Cu: goto label_7F27CF8C;
    case 0x7F27CF90u: goto label_7F27CF90;
    case 0x7F27CF94u: goto label_7F27CF94;
    case 0x7F27CF98u: goto label_7F27CF98;
    case 0x7F27CF9Cu: goto label_7F27CF9C;
    case 0x7F27CFA0u: goto label_7F27CFA0;
    case 0x7F27CFA4u: goto label_7F27CFA4;
    case 0x7F27CFA8u: goto label_7F27CFA8;
    case 0x7F27CFACu: goto label_7F27CFAC;
    case 0x7F27CFB0u: goto label_7F27CFB0;
    case 0x7F27CFB4u: goto label_7F27CFB4;
    case 0x7F27CFB8u: goto label_7F27CFB8;
    case 0x7F27CFBCu: goto label_7F27CFBC;
    case 0x7F27CFC0u: goto label_7F27CFC0;
    case 0x7F27CFC4u: goto label_7F27CFC4;
    case 0x7F27CFC8u: goto label_7F27CFC8;
    case 0x7F27CFCCu: goto label_7F27CFCC;
    case 0x7F27CFD0u: goto label_7F27CFD0;
    case 0x7F27CFD4u: goto label_7F27CFD4;
    case 0x7F27CFD8u: goto label_7F27CFD8;
    case 0x7F27CFDCu: goto label_7F27CFDC;
    case 0x7F27CFE0u: goto label_7F27CFE0;
    case 0x7F27CFE4u: goto label_7F27CFE4;
    case 0x7F27CFE8u: goto label_7F27CFE8;
    case 0x7F27CFECu: goto label_7F27CFEC;
    case 0x7F27CFF0u: goto label_7F27CFF0;
    case 0x7F27CFF4u: goto label_7F27CFF4;
    case 0x7F27CFF8u: goto label_7F27CFF8;
    case 0x7F27CFFCu: goto label_7F27CFFC;
    case 0x7F27D000u: goto label_7F27D000;
    case 0x7F27D004u: goto label_7F27D004;
    case 0x7F27D008u: goto label_7F27D008;
    case 0x7F27D00Cu: goto label_7F27D00C;
    case 0x7F27D010u: goto label_7F27D010;
    case 0x7F27D014u: goto label_7F27D014;
    case 0x7F27D018u: goto label_7F27D018;
    case 0x7F27D01Cu: goto label_7F27D01C;
    case 0x7F27D020u: goto label_7F27D020;
    case 0x7F27D024u: goto label_7F27D024;
    case 0x7F27D028u: goto label_7F27D028;
    case 0x7F27D02Cu: goto label_7F27D02C;
    case 0x7F27D030u: goto label_7F27D030;
    case 0x7F27D034u: goto label_7F27D034;
    case 0x7F27D038u: goto label_7F27D038;
    case 0x7F27D03Cu: goto label_7F27D03C;
    case 0x7F27D040u: goto label_7F27D040;
    case 0x7F27D044u: goto label_7F27D044;
    case 0x7F27D048u: goto label_7F27D048;
    case 0x7F27D04Cu: goto label_7F27D04C;
    case 0x7F27D050u: goto label_7F27D050;
    case 0x7F27D054u: goto label_7F27D054;
    case 0x7F27D058u: goto label_7F27D058;
    case 0x7F27D05Cu: goto label_7F27D05C;
    case 0x7F27D060u: goto label_7F27D060;
    case 0x7F27D064u: goto label_7F27D064;
    case 0x7F27D068u: goto label_7F27D068;
    case 0x7F27D06Cu: goto label_7F27D06C;
    case 0x7F27D070u: goto label_7F27D070;
    case 0x7F27D074u: goto label_7F27D074;
    case 0x7F27D078u: goto label_7F27D078;
    case 0x7F27D07Cu: goto label_7F27D07C;
    case 0x7F27D080u: goto label_7F27D080;
    case 0x7F27D084u: goto label_7F27D084;
    case 0x7F27D088u: goto label_7F27D088;
    case 0x7F27D08Cu: goto label_7F27D08C;
    case 0x7F27D090u: goto label_7F27D090;
    case 0x7F27D094u: goto label_7F27D094;
    case 0x7F27D098u: goto label_7F27D098;
    case 0x7F27D09Cu: goto label_7F27D09C;
    case 0x7F27D0A0u: goto label_7F27D0A0;
    case 0x7F27D0A4u: goto label_7F27D0A4;
    case 0x7F27D0A8u: goto label_7F27D0A8;
    case 0x7F27D0ACu: goto label_7F27D0AC;
    case 0x7F27D0B0u: goto label_7F27D0B0;
    case 0x7F27D0B4u: goto label_7F27D0B4;
    case 0x7F27D0B8u: goto label_7F27D0B8;
    case 0x7F27D0BCu: goto label_7F27D0BC;
    case 0x7F27D0C0u: goto label_7F27D0C0;
    case 0x7F27D0C4u: goto label_7F27D0C4;
    case 0x7F27D0C8u: goto label_7F27D0C8;
    case 0x7F27D0CCu: goto label_7F27D0CC;
    case 0x7F27D0D0u: goto label_7F27D0D0;
    case 0x7F27D0D4u: goto label_7F27D0D4;
    case 0x7F27D0D8u: goto label_7F27D0D8;
    case 0x7F27D0DCu: goto label_7F27D0DC;
    case 0x7F27D0E0u: goto label_7F27D0E0;
    case 0x7F27D0E4u: goto label_7F27D0E4;
    case 0x7F27D0E8u: goto label_7F27D0E8;
    case 0x7F27D0ECu: goto label_7F27D0EC;
    case 0x7F27D0F0u: goto label_7F27D0F0;
    case 0x7F27D0F4u: goto label_7F27D0F4;
    case 0x7F27D0F8u: goto label_7F27D0F8;
    case 0x7F27D0FCu: goto label_7F27D0FC;
    case 0x7F27D100u: goto label_7F27D100;
    case 0x7F27D104u: goto label_7F27D104;
    case 0x7F27D108u: goto label_7F27D108;
    case 0x7F27D10Cu: goto label_7F27D10C;
    case 0x7F27D110u: goto label_7F27D110;
    case 0x7F27D114u: goto label_7F27D114;
    case 0x7F27D118u: goto label_7F27D118;
    case 0x7F27D11Cu: goto label_7F27D11C;
    case 0x7F27D120u: goto label_7F27D120;
    case 0x7F27D124u: goto label_7F27D124;
    case 0x7F27D128u: goto label_7F27D128;
    case 0x7F27D12Cu: goto label_7F27D12C;
    case 0x7F27D130u: goto label_7F27D130;
    case 0x7F27D134u: goto label_7F27D134;
    case 0x7F27D138u: goto label_7F27D138;
    case 0x7F27D13Cu: goto label_7F27D13C;
    case 0x7F27D140u: goto label_7F27D140;
    case 0x7F27D144u: goto label_7F27D144;
    case 0x7F27D148u: goto label_7F27D148;
    case 0x7F27D14Cu: goto label_7F27D14C;
    case 0x7F27D150u: goto label_7F27D150;
    case 0x7F27D154u: goto label_7F27D154;
    case 0x7F27D158u: goto label_7F27D158;
    case 0x7F27D15Cu: goto label_7F27D15C;
    case 0x7F27D160u: goto label_7F27D160;
    case 0x7F27D164u: goto label_7F27D164;
    case 0x7F27D168u: goto label_7F27D168;
    case 0x7F27D16Cu: goto label_7F27D16C;
    case 0x7F27D170u: goto label_7F27D170;
    case 0x7F27D174u: goto label_7F27D174;
    case 0x7F27D178u: goto label_7F27D178;
    case 0x7F27D17Cu: goto label_7F27D17C;
    case 0x7F27D180u: goto label_7F27D180;
    case 0x7F27D184u: goto label_7F27D184;
    case 0x7F27D188u: goto label_7F27D188;
    case 0x7F27D18Cu: goto label_7F27D18C;
    case 0x7F27D190u: goto label_7F27D190;
    case 0x7F27D194u: goto label_7F27D194;
    case 0x7F27D198u: goto label_7F27D198;
    case 0x7F27D19Cu: goto label_7F27D19C;
    case 0x7F27D1A0u: goto label_7F27D1A0;
    case 0x7F27D1A4u: goto label_7F27D1A4;
    case 0x7F27D1A8u: goto label_7F27D1A8;
    case 0x7F27D1ACu: goto label_7F27D1AC;
    case 0x7F27D1B0u: goto label_7F27D1B0;
    case 0x7F27D1B4u: goto label_7F27D1B4;
    case 0x7F27D1B8u: goto label_7F27D1B8;
    case 0x7F27D1BCu: goto label_7F27D1BC;
    case 0x7F27D1C0u: goto label_7F27D1C0;
    case 0x7F27D1C4u: goto label_7F27D1C4;
    case 0x7F27D1C8u: goto label_7F27D1C8;
    case 0x7F27D1CCu: goto label_7F27D1CC;
    case 0x7F27D1D0u: goto label_7F27D1D0;
    case 0x7F27D1D4u: goto label_7F27D1D4;
    case 0x7F27D1D8u: goto label_7F27D1D8;
    case 0x7F27D1DCu: goto label_7F27D1DC;
    case 0x7F27D1E0u: goto label_7F27D1E0;
    case 0x7F27D1E4u: goto label_7F27D1E4;
    case 0x7F27D1E8u: goto label_7F27D1E8;
    case 0x7F27D1ECu: goto label_7F27D1EC;
    case 0x7F27D1F0u: goto label_7F27D1F0;
    case 0x7F27D1F4u: goto label_7F27D1F4;
    case 0x7F27D1F8u: goto label_7F27D1F8;
    case 0x7F27D1FCu: goto label_7F27D1FC;
    case 0x7F27D200u: goto label_7F27D200;
    case 0x7F27D204u: goto label_7F27D204;
    case 0x7F27D208u: goto label_7F27D208;
    case 0x7F27D20Cu: goto label_7F27D20C;
    case 0x7F27D210u: goto label_7F27D210;
    case 0x7F27D214u: goto label_7F27D214;
    case 0x7F27D218u: goto label_7F27D218;
    case 0x7F27D21Cu: goto label_7F27D21C;
    case 0x7F27D220u: goto label_7F27D220;
    case 0x7F27D224u: goto label_7F27D224;
    case 0x7F27D228u: goto label_7F27D228;
    case 0x7F27D22Cu: goto label_7F27D22C;
    case 0x7F27D230u: goto label_7F27D230;
    case 0x7F27D234u: goto label_7F27D234;
    case 0x7F27D238u: goto label_7F27D238;
    case 0x7F27D23Cu: goto label_7F27D23C;
    case 0x7F27D240u: goto label_7F27D240;
    case 0x7F27D244u: goto label_7F27D244;
    case 0x7F27D248u: goto label_7F27D248;
    case 0x7F27D24Cu: goto label_7F27D24C;
    case 0x7F27D250u: goto label_7F27D250;
    case 0x7F27D254u: goto label_7F27D254;
    case 0x7F27D258u: goto label_7F27D258;
    case 0x7F27D25Cu: goto label_7F27D25C;
    case 0x7F27D260u: goto label_7F27D260;
    case 0x7F27D264u: goto label_7F27D264;
    case 0x7F27D268u: goto label_7F27D268;
    case 0x7F27D26Cu: goto label_7F27D26C;
    case 0x7F27D270u: goto label_7F27D270;
    case 0x7F27D274u: goto label_7F27D274;
    case 0x7F27D278u: goto label_7F27D278;
    case 0x7F27D27Cu: goto label_7F27D27C;
    case 0x7F27D280u: goto label_7F27D280;
    case 0x7F27D284u: goto label_7F27D284;
    case 0x7F27D288u: goto label_7F27D288;
    case 0x7F27D28Cu: goto label_7F27D28C;
    case 0x7F27D290u: goto label_7F27D290;
    case 0x7F27D294u: goto label_7F27D294;
    case 0x7F27D298u: goto label_7F27D298;
    case 0x7F27D29Cu: goto label_7F27D29C;
    case 0x7F27D2A0u: goto label_7F27D2A0;
    case 0x7F27D2A4u: goto label_7F27D2A4;
    case 0x7F27D2A8u: goto label_7F27D2A8;
    case 0x7F27D2ACu: goto label_7F27D2AC;
    case 0x7F27D2B0u: goto label_7F27D2B0;
    case 0x7F27D2B4u: goto label_7F27D2B4;
    case 0x7F27D2B8u: goto label_7F27D2B8;
    case 0x7F27D2BCu: goto label_7F27D2BC;
    case 0x7F27D2C0u: goto label_7F27D2C0;
    case 0x7F27D2C4u: goto label_7F27D2C4;
    case 0x7F27D2C8u: goto label_7F27D2C8;
    case 0x7F27D2CCu: goto label_7F27D2CC;
    case 0x7F27D2D0u: goto label_7F27D2D0;
    case 0x7F27D2D4u: goto label_7F27D2D4;
    case 0x7F27D2D8u: goto label_7F27D2D8;
    case 0x7F27D2DCu: goto label_7F27D2DC;
    case 0x7F27D2E0u: goto label_7F27D2E0;
    case 0x7F27D2E4u: goto label_7F27D2E4;
    case 0x7F27D2E8u: goto label_7F27D2E8;
    case 0x7F27D2ECu: goto label_7F27D2EC;
    case 0x7F27D2F0u: goto label_7F27D2F0;
    case 0x7F27D2F4u: goto label_7F27D2F4;
    case 0x7F27D2F8u: goto label_7F27D2F8;
    case 0x7F27D2FCu: goto label_7F27D2FC;
    case 0x7F27D300u: goto label_7F27D300;
    case 0x7F27D304u: goto label_7F27D304;
    case 0x7F27D308u: goto label_7F27D308;
    case 0x7F27D30Cu: goto label_7F27D30C;
    case 0x7F27D310u: goto label_7F27D310;
    case 0x7F27D314u: goto label_7F27D314;
    case 0x7F27D318u: goto label_7F27D318;
    case 0x7F27D31Cu: goto label_7F27D31C;
    case 0x7F27D320u: goto label_7F27D320;
    case 0x7F27D324u: goto label_7F27D324;
    case 0x7F27D328u: goto label_7F27D328;
    case 0x7F27D32Cu: goto label_7F27D32C;
    case 0x7F27D330u: goto label_7F27D330;
    case 0x7F27D334u: goto label_7F27D334;
    case 0x7F27D338u: goto label_7F27D338;
    case 0x7F27D33Cu: goto label_7F27D33C;
    case 0x7F27D340u: goto label_7F27D340;
    case 0x7F27D344u: goto label_7F27D344;
    case 0x7F27D348u: goto label_7F27D348;
    case 0x7F27D34Cu: goto label_7F27D34C;
    case 0x7F27D350u: goto label_7F27D350;
    case 0x7F27D354u: goto label_7F27D354;
    case 0x7F27D358u: goto label_7F27D358;
    case 0x7F27D35Cu: goto label_7F27D35C;
    case 0x7F27D360u: goto label_7F27D360;
    case 0x7F27D364u: goto label_7F27D364;
    case 0x7F27D368u: goto label_7F27D368;
    case 0x7F27D36Cu: goto label_7F27D36C;
    case 0x7F27D370u: goto label_7F27D370;
    case 0x7F27D374u: goto label_7F27D374;
    case 0x7F27D378u: goto label_7F27D378;
    case 0x7F27D37Cu: goto label_7F27D37C;
    case 0x7F27D380u: goto label_7F27D380;
    case 0x7F27D384u: goto label_7F27D384;
    case 0x7F27D388u: goto label_7F27D388;
    case 0x7F27D38Cu: goto label_7F27D38C;
    case 0x7F27D390u: goto label_7F27D390;
    case 0x7F27D394u: goto label_7F27D394;
    case 0x7F27D398u: goto label_7F27D398;
    case 0x7F27D39Cu: goto label_7F27D39C;
    case 0x7F27D3A0u: goto label_7F27D3A0;
    case 0x7F27D3A4u: goto label_7F27D3A4;
    case 0x7F27D3A8u: goto label_7F27D3A8;
    case 0x7F27D3ACu: goto label_7F27D3AC;
    case 0x7F27D3B0u: goto label_7F27D3B0;
    case 0x7F27D3B4u: goto label_7F27D3B4;
    case 0x7F27D3B8u: goto label_7F27D3B8;
    case 0x7F27D3BCu: goto label_7F27D3BC;
    case 0x7F27D3C0u: goto label_7F27D3C0;
    case 0x7F27D3C4u: goto label_7F27D3C4;
    case 0x7F27D3C8u: goto label_7F27D3C8;
    case 0x7F27D3CCu: goto label_7F27D3CC;
    case 0x7F27D3D0u: goto label_7F27D3D0;
    case 0x7F27D3D4u: goto label_7F27D3D4;
    case 0x7F27D3D8u: goto label_7F27D3D8;
    case 0x7F27D3DCu: goto label_7F27D3DC;
    case 0x7F27D3E0u: goto label_7F27D3E0;
    case 0x7F27D3E4u: goto label_7F27D3E4;
    case 0x7F27D3E8u: goto label_7F27D3E8;
    case 0x7F27D3ECu: goto label_7F27D3EC;
    case 0x7F27D3F0u: goto label_7F27D3F0;
    case 0x7F27D3F4u: goto label_7F27D3F4;
    case 0x7F27D3F8u: goto label_7F27D3F8;
    case 0x7F27D3FCu: goto label_7F27D3FC;
    case 0x7F27D400u: goto label_7F27D400;
    case 0x7F27D404u: goto label_7F27D404;
    case 0x7F27D408u: goto label_7F27D408;
    case 0x7F27D40Cu: goto label_7F27D40C;
    case 0x7F27D410u: goto label_7F27D410;
    case 0x7F27D414u: goto label_7F27D414;
    case 0x7F27D418u: goto label_7F27D418;
    case 0x7F27D41Cu: goto label_7F27D41C;
    case 0x7F27D420u: goto label_7F27D420;
    case 0x7F27D424u: goto label_7F27D424;
    case 0x7F27D428u: goto label_7F27D428;
    case 0x7F27D42Cu: goto label_7F27D42C;
    case 0x7F27D430u: goto label_7F27D430;
    case 0x7F27D434u: goto label_7F27D434;
    case 0x7F27D438u: goto label_7F27D438;
    case 0x7F27D43Cu: goto label_7F27D43C;
    case 0x7F27D440u: goto label_7F27D440;
    case 0x7F27D444u: goto label_7F27D444;
    case 0x7F27D448u: goto label_7F27D448;
    case 0x7F27D44Cu: goto label_7F27D44C;
    case 0x7F27D450u: goto label_7F27D450;
    case 0x7F27D454u: goto label_7F27D454;
    case 0x7F27D458u: goto label_7F27D458;
    case 0x7F27D45Cu: goto label_7F27D45C;
    case 0x7F27D460u: goto label_7F27D460;
    case 0x7F27D464u: goto label_7F27D464;
    case 0x7F27D468u: goto label_7F27D468;
    case 0x7F27D46Cu: goto label_7F27D46C;
    case 0x7F27D470u: goto label_7F27D470;
    case 0x7F27D474u: goto label_7F27D474;
    case 0x7F27D478u: goto label_7F27D478;
    case 0x7F27D47Cu: goto label_7F27D47C;
    case 0x7F27D480u: goto label_7F27D480;
    case 0x7F27D484u: goto label_7F27D484;
    case 0x7F27D488u: goto label_7F27D488;
    case 0x7F27D48Cu: goto label_7F27D48C;
    case 0x7F27D490u: goto label_7F27D490;
    case 0x7F27D494u: goto label_7F27D494;
    case 0x7F27D498u: goto label_7F27D498;
    case 0x7F27D49Cu: goto label_7F27D49C;
    case 0x7F27D4A0u: goto label_7F27D4A0;
    case 0x7F27D4A4u: goto label_7F27D4A4;
    case 0x7F27D4A8u: goto label_7F27D4A8;
    case 0x7F27D4ACu: goto label_7F27D4AC;
    case 0x7F27D4B0u: goto label_7F27D4B0;
    case 0x7F27D4B4u: goto label_7F27D4B4;
    case 0x7F27D4B8u: goto label_7F27D4B8;
    case 0x7F27D4BCu: goto label_7F27D4BC;
    case 0x7F27D4C0u: goto label_7F27D4C0;
    case 0x7F27D4C4u: goto label_7F27D4C4;
    case 0x7F27D4C8u: goto label_7F27D4C8;
    case 0x7F27D4CCu: goto label_7F27D4CC;
    case 0x7F27D4D0u: goto label_7F27D4D0;
    case 0x7F27D4D4u: goto label_7F27D4D4;
    case 0x7F27D4D8u: goto label_7F27D4D8;
    case 0x7F27D4DCu: goto label_7F27D4DC;
    case 0x7F27D4E0u: goto label_7F27D4E0;
    case 0x7F27D4E4u: goto label_7F27D4E4;
    case 0x7F27D4E8u: goto label_7F27D4E8;
    case 0x7F27D4ECu: goto label_7F27D4EC;
    case 0x7F27D4F0u: goto label_7F27D4F0;
    case 0x7F27D4F4u: goto label_7F27D4F4;
    case 0x7F27D4F8u: goto label_7F27D4F8;
    case 0x7F27D4FCu: goto label_7F27D4FC;
    case 0x7F27D500u: goto label_7F27D500;
    case 0x7F27D504u: goto label_7F27D504;
    case 0x7F27D508u: goto label_7F27D508;
    case 0x7F27D50Cu: goto label_7F27D50C;
    case 0x7F27D510u: goto label_7F27D510;
    case 0x7F27D514u: goto label_7F27D514;
    case 0x7F27D518u: goto label_7F27D518;
    case 0x7F27D51Cu: goto label_7F27D51C;
    case 0x7F27D520u: goto label_7F27D520;
    case 0x7F27D524u: goto label_7F27D524;
    case 0x7F27D528u: goto label_7F27D528;
    case 0x7F27D52Cu: goto label_7F27D52C;
    case 0x7F27D530u: goto label_7F27D530;
    case 0x7F27D534u: goto label_7F27D534;
    case 0x7F27D538u: goto label_7F27D538;
    case 0x7F27D53Cu: goto label_7F27D53C;
    case 0x7F27D540u: goto label_7F27D540;
    case 0x7F27D544u: goto label_7F27D544;
    case 0x7F27D548u: goto label_7F27D548;
    case 0x7F27D54Cu: goto label_7F27D54C;
    case 0x7F27D550u: goto label_7F27D550;
    case 0x7F27D554u: goto label_7F27D554;
    case 0x7F27D558u: goto label_7F27D558;
    case 0x7F27D55Cu: goto label_7F27D55C;
    case 0x7F27D560u: goto label_7F27D560;
    case 0x7F27D564u: goto label_7F27D564;
    case 0x7F27D568u: goto label_7F27D568;
    case 0x7F27D56Cu: goto label_7F27D56C;
    case 0x7F27D570u: goto label_7F27D570;
    case 0x7F27D574u: goto label_7F27D574;
    case 0x7F27D578u: goto label_7F27D578;
    case 0x7F27D57Cu: goto label_7F27D57C;
    case 0x7F27D580u: goto label_7F27D580;
    case 0x7F27D584u: goto label_7F27D584;
    case 0x7F27D588u: goto label_7F27D588;
    case 0x7F27D58Cu: goto label_7F27D58C;
    case 0x7F27D590u: goto label_7F27D590;
    case 0x7F27D594u: goto label_7F27D594;
    case 0x7F27D598u: goto label_7F27D598;
    case 0x7F27D59Cu: goto label_7F27D59C;
    case 0x7F27D5A0u: goto label_7F27D5A0;
    case 0x7F27D5A4u: goto label_7F27D5A4;
    case 0x7F27D5A8u: goto label_7F27D5A8;
    case 0x7F27D5ACu: goto label_7F27D5AC;
    case 0x7F27D5B0u: goto label_7F27D5B0;
    case 0x7F27D5B4u: goto label_7F27D5B4;
    case 0x7F27D5B8u: goto label_7F27D5B8;
    case 0x7F27D5BCu: goto label_7F27D5BC;
    case 0x7F27D5C0u: goto label_7F27D5C0;
    case 0x7F27D5C4u: goto label_7F27D5C4;
    case 0x7F27D5C8u: goto label_7F27D5C8;
    case 0x7F27D5CCu: goto label_7F27D5CC;
    case 0x7F27D5D0u: goto label_7F27D5D0;
    case 0x7F27D5D4u: goto label_7F27D5D4;
    case 0x7F27D5D8u: goto label_7F27D5D8;
    case 0x7F27D5DCu: goto label_7F27D5DC;
    case 0x7F27D5E0u: goto label_7F27D5E0;
    case 0x7F27D5E4u: goto label_7F27D5E4;
    case 0x7F27D5E8u: goto label_7F27D5E8;
    case 0x7F27D5ECu: goto label_7F27D5EC;
    case 0x7F27D5F0u: goto label_7F27D5F0;
    case 0x7F27D5F4u: goto label_7F27D5F4;
    case 0x7F27D5F8u: goto label_7F27D5F8;
    case 0x7F27D5FCu: goto label_7F27D5FC;
    case 0x7F27D600u: goto label_7F27D600;
    case 0x7F27D604u: goto label_7F27D604;
    case 0x7F27D608u: goto label_7F27D608;
    case 0x7F27D60Cu: goto label_7F27D60C;
    case 0x7F27D610u: goto label_7F27D610;
    case 0x7F27D614u: goto label_7F27D614;
    case 0x7F27D618u: goto label_7F27D618;
    case 0x7F27D61Cu: goto label_7F27D61C;
    case 0x7F27D620u: goto label_7F27D620;
    case 0x7F27D624u: goto label_7F27D624;
    case 0x7F27D628u: goto label_7F27D628;
    case 0x7F27D62Cu: goto label_7F27D62C;
    case 0x7F27D630u: goto label_7F27D630;
    case 0x7F27D634u: goto label_7F27D634;
    case 0x7F27D638u: goto label_7F27D638;
    case 0x7F27D63Cu: goto label_7F27D63C;
    case 0x7F27D640u: goto label_7F27D640;
    case 0x7F27D644u: goto label_7F27D644;
    case 0x7F27D648u: goto label_7F27D648;
    case 0x7F27D64Cu: goto label_7F27D64C;
    case 0x7F27D650u: goto label_7F27D650;
    case 0x7F27D654u: goto label_7F27D654;
    case 0x7F27D658u: goto label_7F27D658;
    case 0x7F27D65Cu: goto label_7F27D65C;
    case 0x7F27D660u: goto label_7F27D660;
    case 0x7F27D664u: goto label_7F27D664;
    case 0x7F27D668u: goto label_7F27D668;
    case 0x7F27D66Cu: goto label_7F27D66C;
    case 0x7F27D670u: goto label_7F27D670;
    case 0x7F27D674u: goto label_7F27D674;
    case 0x7F27D678u: goto label_7F27D678;
    case 0x7F27D67Cu: goto label_7F27D67C;
    case 0x7F27D680u: goto label_7F27D680;
    case 0x7F27D684u: goto label_7F27D684;
    case 0x7F27D688u: goto label_7F27D688;
    case 0x7F27D68Cu: goto label_7F27D68C;
    case 0x7F27D690u: goto label_7F27D690;
    case 0x7F27D694u: goto label_7F27D694;
    case 0x7F27D698u: goto label_7F27D698;
    case 0x7F27D69Cu: goto label_7F27D69C;
    case 0x7F27D6A0u: goto label_7F27D6A0;
    case 0x7F27D6A4u: goto label_7F27D6A4;
    case 0x7F27D6A8u: goto label_7F27D6A8;
    case 0x7F27D6ACu: goto label_7F27D6AC;
    case 0x7F27D6B0u: goto label_7F27D6B0;
    case 0x7F27D6B4u: goto label_7F27D6B4;
    case 0x7F27D6B8u: goto label_7F27D6B8;
    case 0x7F27D6BCu: goto label_7F27D6BC;
    case 0x7F27D6C0u: goto label_7F27D6C0;
    case 0x7F27D6C4u: goto label_7F27D6C4;
    case 0x7F27D6C8u: goto label_7F27D6C8;
    case 0x7F27D6CCu: goto label_7F27D6CC;
    case 0x7F27D6D0u: goto label_7F27D6D0;
    case 0x7F27D6D4u: goto label_7F27D6D4;
    case 0x7F27D6D8u: goto label_7F27D6D8;
    case 0x7F27D6DCu: goto label_7F27D6DC;
    case 0x7F27D6E0u: goto label_7F27D6E0;
    case 0x7F27D6E4u: goto label_7F27D6E4;
    case 0x7F27D6E8u: goto label_7F27D6E8;
    case 0x7F27D6ECu: goto label_7F27D6EC;
    case 0x7F27D6F0u: goto label_7F27D6F0;
    case 0x7F27D6F4u: goto label_7F27D6F4;
    case 0x7F27D6F8u: goto label_7F27D6F8;
    case 0x7F27D6FCu: goto label_7F27D6FC;
    case 0x7F27D700u: goto label_7F27D700;
    case 0x7F27D704u: goto label_7F27D704;
    case 0x7F27D708u: goto label_7F27D708;
    case 0x7F27D70Cu: goto label_7F27D70C;
    case 0x7F27D710u: goto label_7F27D710;
    case 0x7F27D714u: goto label_7F27D714;
    case 0x7F27D718u: goto label_7F27D718;
    case 0x7F27D71Cu: goto label_7F27D71C;
    case 0x7F27D720u: goto label_7F27D720;
    case 0x7F27D724u: goto label_7F27D724;
    case 0x7F27D728u: goto label_7F27D728;
    case 0x7F27D72Cu: goto label_7F27D72C;
    case 0x7F27D730u: goto label_7F27D730;
    case 0x7F27D734u: goto label_7F27D734;
    case 0x7F27D738u: goto label_7F27D738;
    case 0x7F27D73Cu: goto label_7F27D73C;
    case 0x7F27D740u: goto label_7F27D740;
    case 0x7F27D744u: goto label_7F27D744;
    case 0x7F27D748u: goto label_7F27D748;
    case 0x7F27D74Cu: goto label_7F27D74C;
    case 0x7F27D750u: goto label_7F27D750;
    case 0x7F27D754u: goto label_7F27D754;
    case 0x7F27D758u: goto label_7F27D758;
    case 0x7F27D75Cu: goto label_7F27D75C;
    case 0x7F27D760u: goto label_7F27D760;
    case 0x7F27D764u: goto label_7F27D764;
    case 0x7F27D768u: goto label_7F27D768;
    case 0x7F27D76Cu: goto label_7F27D76C;
    case 0x7F27D770u: goto label_7F27D770;
    case 0x7F27D774u: goto label_7F27D774;
    case 0x7F27D778u: goto label_7F27D778;
    case 0x7F27D77Cu: goto label_7F27D77C;
    case 0x7F27D780u: goto label_7F27D780;
    case 0x7F27D784u: goto label_7F27D784;
    case 0x7F27D788u: goto label_7F27D788;
    case 0x7F27D78Cu: goto label_7F27D78C;
    case 0x7F27D790u: goto label_7F27D790;
    case 0x7F27D794u: goto label_7F27D794;
    case 0x7F27D798u: goto label_7F27D798;
    case 0x7F27D79Cu: goto label_7F27D79C;
    case 0x7F27D7A0u: goto label_7F27D7A0;
    case 0x7F27D7A4u: goto label_7F27D7A4;
    case 0x7F27D7A8u: goto label_7F27D7A8;
    case 0x7F27D7ACu: goto label_7F27D7AC;
    case 0x7F27D7B0u: goto label_7F27D7B0;
    case 0x7F27D7B4u: goto label_7F27D7B4;
    case 0x7F27D7B8u: goto label_7F27D7B8;
    case 0x7F27D7BCu: goto label_7F27D7BC;
    case 0x7F27D7C0u: goto label_7F27D7C0;
    case 0x7F27D7C4u: goto label_7F27D7C4;
    case 0x7F27D7C8u: goto label_7F27D7C8;
    case 0x7F27D7CCu: goto label_7F27D7CC;
    case 0x7F27D7D0u: goto label_7F27D7D0;
    case 0x7F27D7D4u: goto label_7F27D7D4;
    case 0x7F27D7D8u: goto label_7F27D7D8;
    case 0x7F27D7DCu: goto label_7F27D7DC;
    case 0x7F27D7E0u: goto label_7F27D7E0;
    case 0x7F27D7E4u: goto label_7F27D7E4;
    case 0x7F27D7E8u: goto label_7F27D7E8;
    case 0x7F27D7ECu: goto label_7F27D7EC;
    case 0x7F27D7F0u: goto label_7F27D7F0;
    case 0x7F27D7F4u: goto label_7F27D7F4;
    case 0x7F27D7F8u: goto label_7F27D7F8;
    case 0x7F27D7FCu: goto label_7F27D7FC;
    case 0x7F27D800u: goto label_7F27D800;
    case 0x7F27D804u: goto label_7F27D804;
    case 0x7F27D808u: goto label_7F27D808;
    case 0x7F27D80Cu: goto label_7F27D80C;
    case 0x7F27D810u: goto label_7F27D810;
    case 0x7F27D814u: goto label_7F27D814;
    case 0x7F27D818u: goto label_7F27D818;
    case 0x7F27D81Cu: goto label_7F27D81C;
    case 0x7F27D820u: goto label_7F27D820;
    case 0x7F27D824u: goto label_7F27D824;
    case 0x7F27D828u: goto label_7F27D828;
    case 0x7F27D82Cu: goto label_7F27D82C;
    case 0x7F27D830u: goto label_7F27D830;
    case 0x7F27D834u: goto label_7F27D834;
    case 0x7F27D838u: goto label_7F27D838;
    case 0x7F27D83Cu: goto label_7F27D83C;
    case 0x7F27D840u: goto label_7F27D840;
    case 0x7F27D844u: goto label_7F27D844;
    case 0x7F27D848u: goto label_7F27D848;
    case 0x7F27D84Cu: goto label_7F27D84C;
    case 0x7F27D850u: goto label_7F27D850;
    case 0x7F27D854u: goto label_7F27D854;
    case 0x7F27D858u: goto label_7F27D858;
    case 0x7F27D85Cu: goto label_7F27D85C;
    case 0x7F27D860u: goto label_7F27D860;
    case 0x7F27D864u: goto label_7F27D864;
    case 0x7F27D868u: goto label_7F27D868;
    case 0x7F27D86Cu: goto label_7F27D86C;
    case 0x7F27D870u: goto label_7F27D870;
    case 0x7F27D874u: goto label_7F27D874;
    case 0x7F27D878u: goto label_7F27D878;
    case 0x7F27D87Cu: goto label_7F27D87C;
    case 0x7F27D880u: goto label_7F27D880;
    case 0x7F27D884u: goto label_7F27D884;
    case 0x7F27D888u: goto label_7F27D888;
    case 0x7F27D88Cu: goto label_7F27D88C;
    case 0x7F27D890u: goto label_7F27D890;
    case 0x7F27D894u: goto label_7F27D894;
    case 0x7F27D898u: goto label_7F27D898;
    case 0x7F27D89Cu: goto label_7F27D89C;
    case 0x7F27D8A0u: goto label_7F27D8A0;
    case 0x7F27D8A4u: goto label_7F27D8A4;
    case 0x7F27D8A8u: goto label_7F27D8A8;
    case 0x7F27D8ACu: goto label_7F27D8AC;
    case 0x7F27D8B0u: goto label_7F27D8B0;
    case 0x7F27D8B4u: goto label_7F27D8B4;
    case 0x7F27D8B8u: goto label_7F27D8B8;
    case 0x7F27D8BCu: goto label_7F27D8BC;
    case 0x7F27D8C0u: goto label_7F27D8C0;
    case 0x7F27D8C4u: goto label_7F27D8C4;
    case 0x7F27D8C8u: goto label_7F27D8C8;
    case 0x7F27D8CCu: goto label_7F27D8CC;
    case 0x7F27D8D0u: goto label_7F27D8D0;
    case 0x7F27D8D4u: goto label_7F27D8D4;
    case 0x7F27D8D8u: goto label_7F27D8D8;
    case 0x7F27D8DCu: goto label_7F27D8DC;
    case 0x7F27D8E0u: goto label_7F27D8E0;
    case 0x7F27D8E4u: goto label_7F27D8E4;
    case 0x7F27D8E8u: goto label_7F27D8E8;
    case 0x7F27D8ECu: goto label_7F27D8EC;
    case 0x7F27D8F0u: goto label_7F27D8F0;
    case 0x7F27D8F4u: goto label_7F27D8F4;
    case 0x7F27D8F8u: goto label_7F27D8F8;
    case 0x7F27D8FCu: goto label_7F27D8FC;
    case 0x7F27D900u: goto label_7F27D900;
    case 0x7F27D904u: goto label_7F27D904;
    case 0x7F27D908u: goto label_7F27D908;
    case 0x7F27D90Cu: goto label_7F27D90C;
    case 0x7F27D910u: goto label_7F27D910;
    case 0x7F27D914u: goto label_7F27D914;
    case 0x7F27D918u: goto label_7F27D918;
    case 0x7F27D91Cu: goto label_7F27D91C;
    case 0x7F27D920u: goto label_7F27D920;
    case 0x7F27D924u: goto label_7F27D924;
    case 0x7F27D928u: goto label_7F27D928;
    case 0x7F27D92Cu: goto label_7F27D92C;
    case 0x7F27D930u: goto label_7F27D930;
    case 0x7F27D934u: goto label_7F27D934;
    case 0x7F27D938u: goto label_7F27D938;
    case 0x7F27D93Cu: goto label_7F27D93C;
    case 0x7F27D940u: goto label_7F27D940;
    case 0x7F27D944u: goto label_7F27D944;
    case 0x7F27D948u: goto label_7F27D948;
    case 0x7F27D94Cu: goto label_7F27D94C;
    case 0x7F27D950u: goto label_7F27D950;
    case 0x7F27D954u: goto label_7F27D954;
    case 0x7F27D958u: goto label_7F27D958;
    case 0x7F27D95Cu: goto label_7F27D95C;
    case 0x7F27D960u: goto label_7F27D960;
    case 0x7F27D964u: goto label_7F27D964;
    case 0x7F27D968u: goto label_7F27D968;
    case 0x7F27D96Cu: goto label_7F27D96C;
    case 0x7F27D970u: goto label_7F27D970;
    case 0x7F27D974u: goto label_7F27D974;
    case 0x7F27D978u: goto label_7F27D978;
    case 0x7F27D97Cu: goto label_7F27D97C;
    case 0x7F27D980u: goto label_7F27D980;
    case 0x7F27D984u: goto label_7F27D984;
    case 0x7F27D988u: goto label_7F27D988;
    case 0x7F27D98Cu: goto label_7F27D98C;
    case 0x7F27D990u: goto label_7F27D990;
    case 0x7F27D994u: goto label_7F27D994;
    case 0x7F27D998u: goto label_7F27D998;
    case 0x7F27D99Cu: goto label_7F27D99C;
    case 0x7F27D9A0u: goto label_7F27D9A0;
    case 0x7F27D9A4u: goto label_7F27D9A4;
    case 0x7F27D9A8u: goto label_7F27D9A8;
    case 0x7F27D9ACu: goto label_7F27D9AC;
    case 0x7F27D9B0u: goto label_7F27D9B0;
    case 0x7F27D9B4u: goto label_7F27D9B4;
    case 0x7F27D9B8u: goto label_7F27D9B8;
    case 0x7F27D9BCu: goto label_7F27D9BC;
    case 0x7F27D9C0u: goto label_7F27D9C0;
    case 0x7F27D9C4u: goto label_7F27D9C4;
    case 0x7F27D9C8u: goto label_7F27D9C8;
    case 0x7F27D9CCu: goto label_7F27D9CC;
    case 0x7F27D9D0u: goto label_7F27D9D0;
    case 0x7F27D9D4u: goto label_7F27D9D4;
    case 0x7F27D9D8u: goto label_7F27D9D8;
    case 0x7F27D9DCu: goto label_7F27D9DC;
    case 0x7F27D9E0u: goto label_7F27D9E0;
    case 0x7F27D9E4u: goto label_7F27D9E4;
    case 0x7F27D9E8u: goto label_7F27D9E8;
    case 0x7F27D9ECu: goto label_7F27D9EC;
    case 0x7F27D9F0u: goto label_7F27D9F0;
    case 0x7F27D9F4u: goto label_7F27D9F4;
    case 0x7F27D9F8u: goto label_7F27D9F8;
    case 0x7F27D9FCu: goto label_7F27D9FC;
    case 0x7F27DA00u: goto label_7F27DA00;
    case 0x7F27DA04u: goto label_7F27DA04;
    case 0x7F27DA08u: goto label_7F27DA08;
    case 0x7F27DA0Cu: goto label_7F27DA0C;
    case 0x7F27DA10u: goto label_7F27DA10;
    case 0x7F27DA14u: goto label_7F27DA14;
    case 0x7F27DA18u: goto label_7F27DA18;
    case 0x7F27DA1Cu: goto label_7F27DA1C;
    case 0x7F27DA20u: goto label_7F27DA20;
    case 0x7F27DA24u: goto label_7F27DA24;
    case 0x7F27DA28u: goto label_7F27DA28;
    case 0x7F27DA2Cu: goto label_7F27DA2C;
    case 0x7F27DA30u: goto label_7F27DA30;
    case 0x7F27DA34u: goto label_7F27DA34;
    case 0x7F27DA38u: goto label_7F27DA38;
    case 0x7F27DA3Cu: goto label_7F27DA3C;
    case 0x7F27DA40u: goto label_7F27DA40;
    case 0x7F27DA44u: goto label_7F27DA44;
    case 0x7F27DA48u: goto label_7F27DA48;
    case 0x7F27DA4Cu: goto label_7F27DA4C;
    case 0x7F27DA50u: goto label_7F27DA50;
    case 0x7F27DA54u: goto label_7F27DA54;
    case 0x7F27DA58u: goto label_7F27DA58;
    case 0x7F27DA5Cu: goto label_7F27DA5C;
    case 0x7F27DA60u: goto label_7F27DA60;
    case 0x7F27DA64u: goto label_7F27DA64;
    case 0x7F27DA68u: goto label_7F27DA68;
    case 0x7F27DA6Cu: goto label_7F27DA6C;
    case 0x7F27DA70u: goto label_7F27DA70;
    case 0x7F27DA74u: goto label_7F27DA74;
    case 0x7F27DA78u: goto label_7F27DA78;
    case 0x7F27DA7Cu: goto label_7F27DA7C;
    case 0x7F27DA80u: goto label_7F27DA80;
    case 0x7F27DA84u: goto label_7F27DA84;
    case 0x7F27DA88u: goto label_7F27DA88;
    case 0x7F27DA8Cu: goto label_7F27DA8C;
    case 0x7F27DA90u: goto label_7F27DA90;
    case 0x7F27DA94u: goto label_7F27DA94;
    case 0x7F27DA98u: goto label_7F27DA98;
    case 0x7F27DA9Cu: goto label_7F27DA9C;
    case 0x7F27DAA0u: goto label_7F27DAA0;
    case 0x7F27DAA4u: goto label_7F27DAA4;
    case 0x7F27DAA8u: goto label_7F27DAA8;
    case 0x7F27DAACu: goto label_7F27DAAC;
    case 0x7F27DAB0u: goto label_7F27DAB0;
    case 0x7F27DAB4u: goto label_7F27DAB4;
    case 0x7F27DAB8u: goto label_7F27DAB8;
    case 0x7F27DABCu: goto label_7F27DABC;
    case 0x7F27DAC0u: goto label_7F27DAC0;
    case 0x7F27DAC4u: goto label_7F27DAC4;
    case 0x7F27DAC8u: goto label_7F27DAC8;
    case 0x7F27DACCu: goto label_7F27DACC;
    case 0x7F27DAD0u: goto label_7F27DAD0;
    case 0x7F27DAD4u: goto label_7F27DAD4;
    case 0x7F27DAD8u: goto label_7F27DAD8;
    case 0x7F27DADCu: goto label_7F27DADC;
    case 0x7F27DAE0u: goto label_7F27DAE0;
    case 0x7F27DAE4u: goto label_7F27DAE4;
    case 0x7F27DAE8u: goto label_7F27DAE8;
    case 0x7F27DAECu: goto label_7F27DAEC;
    case 0x7F27DAF0u: goto label_7F27DAF0;
    case 0x7F27DAF4u: goto label_7F27DAF4;
    case 0x7F27DAF8u: goto label_7F27DAF8;
    case 0x7F27DAFCu: goto label_7F27DAFC;
    case 0x7F27DB00u: goto label_7F27DB00;
    case 0x7F27DB04u: goto label_7F27DB04;
    case 0x7F27DB08u: goto label_7F27DB08;
    case 0x7F27DB0Cu: goto label_7F27DB0C;
    case 0x7F27DB10u: goto label_7F27DB10;
    case 0x7F27DB14u: goto label_7F27DB14;
    case 0x7F27DB18u: goto label_7F27DB18;
    case 0x7F27DB1Cu: goto label_7F27DB1C;
    case 0x7F27DB20u: goto label_7F27DB20;
    case 0x7F27DB24u: goto label_7F27DB24;
    case 0x7F27DB28u: goto label_7F27DB28;
    case 0x7F27DB2Cu: goto label_7F27DB2C;
    case 0x7F27DB30u: goto label_7F27DB30;
    case 0x7F27DB34u: goto label_7F27DB34;
    case 0x7F27DB38u: goto label_7F27DB38;
    case 0x7F27DB3Cu: goto label_7F27DB3C;
    case 0x7F27DB40u: goto label_7F27DB40;
    case 0x7F27DB44u: goto label_7F27DB44;
    case 0x7F27DB48u: goto label_7F27DB48;
    case 0x7F27DB4Cu: goto label_7F27DB4C;
    case 0x7F27DB50u: goto label_7F27DB50;
    case 0x7F27DB54u: goto label_7F27DB54;
    case 0x7F27DB58u: goto label_7F27DB58;
    case 0x7F27DB5Cu: goto label_7F27DB5C;
    case 0x7F27DB60u: goto label_7F27DB60;
    case 0x7F27DB64u: goto label_7F27DB64;
    case 0x7F27DB68u: goto label_7F27DB68;
    case 0x7F27DB6Cu: goto label_7F27DB6C;
    case 0x7F27DB70u: goto label_7F27DB70;
    case 0x7F27DB74u: goto label_7F27DB74;
    case 0x7F27DB78u: goto label_7F27DB78;
    case 0x7F27DB7Cu: goto label_7F27DB7C;
    case 0x7F27DB80u: goto label_7F27DB80;
    case 0x7F27DB84u: goto label_7F27DB84;
    case 0x7F27DB88u: goto label_7F27DB88;
    case 0x7F27DB8Cu: goto label_7F27DB8C;
    case 0x7F27DB90u: goto label_7F27DB90;
    case 0x7F27DB94u: goto label_7F27DB94;
    case 0x7F27DB98u: goto label_7F27DB98;
    case 0x7F27DB9Cu: goto label_7F27DB9C;
    case 0x7F27DBA0u: goto label_7F27DBA0;
    case 0x7F27DBA4u: goto label_7F27DBA4;
    case 0x7F27DBA8u: goto label_7F27DBA8;
    case 0x7F27DBACu: goto label_7F27DBAC;
    case 0x7F27DBB0u: goto label_7F27DBB0;
    case 0x7F27DBB4u: goto label_7F27DBB4;
    case 0x7F27DBB8u: goto label_7F27DBB8;
    case 0x7F27DBBCu: goto label_7F27DBBC;
    case 0x7F27DBC0u: goto label_7F27DBC0;
    case 0x7F27DBC4u: goto label_7F27DBC4;
    case 0x7F27DBC8u: goto label_7F27DBC8;
    case 0x7F27DBCCu: goto label_7F27DBCC;
    case 0x7F27DBD0u: goto label_7F27DBD0;
    case 0x7F27DBD4u: goto label_7F27DBD4;
    case 0x7F27DBD8u: goto label_7F27DBD8;
    case 0x7F27DBDCu: goto label_7F27DBDC;
    case 0x7F27DBE0u: goto label_7F27DBE0;
    case 0x7F27DBE4u: goto label_7F27DBE4;
    case 0x7F27DBE8u: goto label_7F27DBE8;
    case 0x7F27DBECu: goto label_7F27DBEC;
    case 0x7F27DBF0u: goto label_7F27DBF0;
    case 0x7F27DBF4u: goto label_7F27DBF4;
    case 0x7F27DBF8u: goto label_7F27DBF8;
    case 0x7F27DBFCu: goto label_7F27DBFC;
    case 0x7F27DC00u: goto label_7F27DC00;
    case 0x7F27DC04u: goto label_7F27DC04;
    case 0x7F27DC08u: goto label_7F27DC08;
    case 0x7F27DC0Cu: goto label_7F27DC0C;
    case 0x7F27DC10u: goto label_7F27DC10;
    case 0x7F27DC14u: goto label_7F27DC14;
    case 0x7F27DC18u: goto label_7F27DC18;
    case 0x7F27DC1Cu: goto label_7F27DC1C;
    case 0x7F27DC20u: goto label_7F27DC20;
    case 0x7F27DC24u: goto label_7F27DC24;
    case 0x7F27DC28u: goto label_7F27DC28;
    case 0x7F27DC2Cu: goto label_7F27DC2C;
    case 0x7F27DC30u: goto label_7F27DC30;
    case 0x7F27DC34u: goto label_7F27DC34;
    case 0x7F27DC38u: goto label_7F27DC38;
    case 0x7F27DC3Cu: goto label_7F27DC3C;
    case 0x7F27DC40u: goto label_7F27DC40;
    case 0x7F27DC44u: goto label_7F27DC44;
    case 0x7F27DC48u: goto label_7F27DC48;
    case 0x7F27DC4Cu: goto label_7F27DC4C;
    case 0x7F27DC50u: goto label_7F27DC50;
    case 0x7F27DC54u: goto label_7F27DC54;
    case 0x7F27DC58u: goto label_7F27DC58;
    case 0x7F27DC5Cu: goto label_7F27DC5C;
    case 0x7F27DC60u: goto label_7F27DC60;
    case 0x7F27DC64u: goto label_7F27DC64;
    case 0x7F27DC68u: goto label_7F27DC68;
    case 0x7F27DC6Cu: goto label_7F27DC6C;
    case 0x7F27DC70u: goto label_7F27DC70;
    case 0x7F27DC74u: goto label_7F27DC74;
    case 0x7F27DC78u: goto label_7F27DC78;
    case 0x7F27DC7Cu: goto label_7F27DC7C;
    case 0x7F27DC80u: goto label_7F27DC80;
    case 0x7F27DC84u: goto label_7F27DC84;
    case 0x7F27DC88u: goto label_7F27DC88;
    case 0x7F27DC8Cu: goto label_7F27DC8C;
    case 0x7F27DC90u: goto label_7F27DC90;
    case 0x7F27DC94u: goto label_7F27DC94;
    case 0x7F27DC98u: goto label_7F27DC98;
    case 0x7F27DC9Cu: goto label_7F27DC9C;
    case 0x7F27DCA0u: goto label_7F27DCA0;
    case 0x7F27DCA4u: goto label_7F27DCA4;
    case 0x7F27DCA8u: goto label_7F27DCA8;
    case 0x7F27DCACu: goto label_7F27DCAC;
    case 0x7F27DCB0u: goto label_7F27DCB0;
    case 0x7F27DCB4u: goto label_7F27DCB4;
    case 0x7F27DCB8u: goto label_7F27DCB8;
    case 0x7F27DCBCu: goto label_7F27DCBC;
    case 0x7F27DCC0u: goto label_7F27DCC0;
    case 0x7F27DCC4u: goto label_7F27DCC4;
    case 0x7F27DCC8u: goto label_7F27DCC8;
    case 0x7F27DCCCu: goto label_7F27DCCC;
    case 0x7F27DCD0u: goto label_7F27DCD0;
    case 0x7F27DCD4u: goto label_7F27DCD4;
    case 0x7F27DCD8u: goto label_7F27DCD8;
    case 0x7F27DCDCu: goto label_7F27DCDC;
    case 0x7F27DCE0u: goto label_7F27DCE0;
    case 0x7F27DCE4u: goto label_7F27DCE4;
    case 0x7F27DCE8u: goto label_7F27DCE8;
    case 0x7F27DCECu: goto label_7F27DCEC;
    case 0x7F27DCF0u: goto label_7F27DCF0;
    case 0x7F27DCF4u: goto label_7F27DCF4;
    case 0x7F27DCF8u: goto label_7F27DCF8;
    case 0x7F27DCFCu: goto label_7F27DCFC;
    case 0x7F27DD00u: goto label_7F27DD00;
    case 0x7F27DD04u: goto label_7F27DD04;
    case 0x7F27DD08u: goto label_7F27DD08;
    case 0x7F27DD0Cu: goto label_7F27DD0C;
    case 0x7F27DD10u: goto label_7F27DD10;
    case 0x7F27DD14u: goto label_7F27DD14;
    case 0x7F27DD18u: goto label_7F27DD18;
    case 0x7F27DD1Cu: goto label_7F27DD1C;
    case 0x7F27DD20u: goto label_7F27DD20;
    case 0x7F27DD24u: goto label_7F27DD24;
    case 0x7F27DD28u: goto label_7F27DD28;
    case 0x7F27DD2Cu: goto label_7F27DD2C;
    case 0x7F27DD30u: goto label_7F27DD30;
    case 0x7F27DD34u: goto label_7F27DD34;
    case 0x7F27DD38u: goto label_7F27DD38;
    case 0x7F27DD3Cu: goto label_7F27DD3C;
    case 0x7F27DD40u: goto label_7F27DD40;
    case 0x7F27DD44u: goto label_7F27DD44;
    case 0x7F27DD48u: goto label_7F27DD48;
    case 0x7F27DD4Cu: goto label_7F27DD4C;
    case 0x7F27DD50u: goto label_7F27DD50;
    case 0x7F27DD54u: goto label_7F27DD54;
    case 0x7F27DD58u: goto label_7F27DD58;
    case 0x7F27DD5Cu: goto label_7F27DD5C;
    case 0x7F27DD60u: goto label_7F27DD60;
    case 0x7F27DD64u: goto label_7F27DD64;
    case 0x7F27DD68u: goto label_7F27DD68;
    case 0x7F27DD6Cu: goto label_7F27DD6C;
    case 0x7F27DD70u: goto label_7F27DD70;
    case 0x7F27DD74u: goto label_7F27DD74;
    case 0x7F27DD78u: goto label_7F27DD78;
    case 0x7F27DD7Cu: goto label_7F27DD7C;
    case 0x7F27DD80u: goto label_7F27DD80;
    case 0x7F27DD84u: goto label_7F27DD84;
    case 0x7F27DD88u: goto label_7F27DD88;
    case 0x7F27DD8Cu: goto label_7F27DD8C;
    case 0x7F27DD90u: goto label_7F27DD90;
    case 0x7F27DD94u: goto label_7F27DD94;
    case 0x7F27DD98u: goto label_7F27DD98;
    case 0x7F27DD9Cu: goto label_7F27DD9C;
    case 0x7F27DDA0u: goto label_7F27DDA0;
    case 0x7F27DDA4u: goto label_7F27DDA4;
    case 0x7F27DDA8u: goto label_7F27DDA8;
    case 0x7F27DDACu: goto label_7F27DDAC;
    case 0x7F27DDB0u: goto label_7F27DDB0;
    case 0x7F27DDB4u: goto label_7F27DDB4;
    case 0x7F27DDB8u: goto label_7F27DDB8;
    case 0x7F27DDBCu: goto label_7F27DDBC;
    case 0x7F27DDC0u: goto label_7F27DDC0;
    case 0x7F27DDC4u: goto label_7F27DDC4;
    case 0x7F27DDC8u: goto label_7F27DDC8;
    case 0x7F27DDCCu: goto label_7F27DDCC;
    case 0x7F27DDD0u: goto label_7F27DDD0;
    case 0x7F27DDD4u: goto label_7F27DDD4;
    case 0x7F27DDD8u: goto label_7F27DDD8;
    case 0x7F27DDDCu: goto label_7F27DDDC;
    case 0x7F27DDE0u: goto label_7F27DDE0;
    case 0x7F27DDE4u: goto label_7F27DDE4;
    case 0x7F27DDE8u: goto label_7F27DDE8;
    case 0x7F27DDECu: goto label_7F27DDEC;
    case 0x7F27DDF0u: goto label_7F27DDF0;
    case 0x7F27DDF4u: goto label_7F27DDF4;
    case 0x7F27DDF8u: goto label_7F27DDF8;
    case 0x7F27DDFCu: goto label_7F27DDFC;
    case 0x7F27DE00u: goto label_7F27DE00;
    case 0x7F27DE04u: goto label_7F27DE04;
    case 0x7F27DE08u: goto label_7F27DE08;
    case 0x7F27DE0Cu: goto label_7F27DE0C;
    case 0x7F27DE10u: goto label_7F27DE10;
    case 0x7F27DE14u: goto label_7F27DE14;
    case 0x7F27DE18u: goto label_7F27DE18;
    case 0x7F27DE1Cu: goto label_7F27DE1C;
    case 0x7F27DE20u: goto label_7F27DE20;
    case 0x7F27DE24u: goto label_7F27DE24;
    case 0x7F27DE28u: goto label_7F27DE28;
    case 0x7F27DE2Cu: goto label_7F27DE2C;
    case 0x7F27DE30u: goto label_7F27DE30;
    case 0x7F27DE34u: goto label_7F27DE34;
    case 0x7F27DE38u: goto label_7F27DE38;
    case 0x7F27DE3Cu: goto label_7F27DE3C;
    case 0x7F27DE40u: goto label_7F27DE40;
    case 0x7F27DE44u: goto label_7F27DE44;
    case 0x7F27DE48u: goto label_7F27DE48;
    case 0x7F27DE4Cu: goto label_7F27DE4C;
    case 0x7F27DE50u: goto label_7F27DE50;
    case 0x7F27DE54u: goto label_7F27DE54;
    case 0x7F27DE58u: goto label_7F27DE58;
    case 0x7F27DE5Cu: goto label_7F27DE5C;
    case 0x7F27DE60u: goto label_7F27DE60;
    case 0x7F27DE64u: goto label_7F27DE64;
    case 0x7F27DE68u: goto label_7F27DE68;
    case 0x7F27DE6Cu: goto label_7F27DE6C;
    case 0x7F27DE70u: goto label_7F27DE70;
    case 0x7F27DE74u: goto label_7F27DE74;
    case 0x7F27DE78u: goto label_7F27DE78;
    case 0x7F27DE7Cu: goto label_7F27DE7C;
    case 0x7F27DE80u: goto label_7F27DE80;
    case 0x7F27DE84u: goto label_7F27DE84;
    case 0x7F27DE88u: goto label_7F27DE88;
    case 0x7F27DE8Cu: goto label_7F27DE8C;
    case 0x7F27DE90u: goto label_7F27DE90;
    case 0x7F27DE94u: goto label_7F27DE94;
    case 0x7F27DE98u: goto label_7F27DE98;
    case 0x7F27DE9Cu: goto label_7F27DE9C;
    case 0x7F27DEA0u: goto label_7F27DEA0;
    case 0x7F27DEA4u: goto label_7F27DEA4;
    case 0x7F27DEA8u: goto label_7F27DEA8;
    case 0x7F27DEACu: goto label_7F27DEAC;
    case 0x7F27DEB0u: goto label_7F27DEB0;
    case 0x7F27DEB4u: goto label_7F27DEB4;
    case 0x7F27DEB8u: goto label_7F27DEB8;
    case 0x7F27DEBCu: goto label_7F27DEBC;
    case 0x7F27DEC0u: goto label_7F27DEC0;
    case 0x7F27DEC4u: goto label_7F27DEC4;
    case 0x7F27DEC8u: goto label_7F27DEC8;
    case 0x7F27DECCu: goto label_7F27DECC;
    case 0x7F27DED0u: goto label_7F27DED0;
    case 0x7F27DED4u: goto label_7F27DED4;
    case 0x7F27DED8u: goto label_7F27DED8;
    case 0x7F27DEDCu: goto label_7F27DEDC;
    case 0x7F27DEE0u: goto label_7F27DEE0;
    case 0x7F27DEE4u: goto label_7F27DEE4;
    case 0x7F27DEE8u: goto label_7F27DEE8;
    case 0x7F27DEECu: goto label_7F27DEEC;
    case 0x7F27DEF0u: goto label_7F27DEF0;
    case 0x7F27DEF4u: goto label_7F27DEF4;
    case 0x7F27DEF8u: goto label_7F27DEF8;
    case 0x7F27DEFCu: goto label_7F27DEFC;
    case 0x7F27DF00u: goto label_7F27DF00;
    case 0x7F27DF04u: goto label_7F27DF04;
    case 0x7F27DF08u: goto label_7F27DF08;
    case 0x7F27DF0Cu: goto label_7F27DF0C;
    case 0x7F27DF10u: goto label_7F27DF10;
    case 0x7F27DF14u: goto label_7F27DF14;
    case 0x7F27DF18u: goto label_7F27DF18;
    case 0x7F27DF1Cu: goto label_7F27DF1C;
    case 0x7F27DF20u: goto label_7F27DF20;
    case 0x7F27DF24u: goto label_7F27DF24;
    case 0x7F27DF28u: goto label_7F27DF28;
    case 0x7F27DF2Cu: goto label_7F27DF2C;
    case 0x7F27DF30u: goto label_7F27DF30;
    case 0x7F27DF34u: goto label_7F27DF34;
    case 0x7F27DF38u: goto label_7F27DF38;
    case 0x7F27DF3Cu: goto label_7F27DF3C;
    case 0x7F27DF40u: goto label_7F27DF40;
    case 0x7F27DF44u: goto label_7F27DF44;
    case 0x7F27DF48u: goto label_7F27DF48;
    case 0x7F27DF4Cu: goto label_7F27DF4C;
    case 0x7F27DF50u: goto label_7F27DF50;
    case 0x7F27DF54u: goto label_7F27DF54;
    case 0x7F27DF58u: goto label_7F27DF58;
    case 0x7F27DF5Cu: goto label_7F27DF5C;
    case 0x7F27DF60u: goto label_7F27DF60;
    case 0x7F27DF64u: goto label_7F27DF64;
    case 0x7F27DF68u: goto label_7F27DF68;
    case 0x7F27DF6Cu: goto label_7F27DF6C;
    case 0x7F27DF70u: goto label_7F27DF70;
    case 0x7F27DF74u: goto label_7F27DF74;
    case 0x7F27DF78u: goto label_7F27DF78;
    case 0x7F27DF7Cu: goto label_7F27DF7C;
    case 0x7F27DF80u: goto label_7F27DF80;
    case 0x7F27DF84u: goto label_7F27DF84;
    case 0x7F27DF88u: goto label_7F27DF88;
    case 0x7F27DF8Cu: goto label_7F27DF8C;
    case 0x7F27DF90u: goto label_7F27DF90;
    case 0x7F27DF94u: goto label_7F27DF94;
    case 0x7F27DF98u: goto label_7F27DF98;
    case 0x7F27DF9Cu: goto label_7F27DF9C;
    case 0x7F27DFA0u: goto label_7F27DFA0;
    case 0x7F27DFA4u: goto label_7F27DFA4;
    case 0x7F27DFA8u: goto label_7F27DFA8;
    case 0x7F27DFACu: goto label_7F27DFAC;
    case 0x7F27DFB0u: goto label_7F27DFB0;
    case 0x7F27DFB4u: goto label_7F27DFB4;
    case 0x7F27DFB8u: goto label_7F27DFB8;
    case 0x7F27DFBCu: goto label_7F27DFBC;
    case 0x7F27DFC0u: goto label_7F27DFC0;
    case 0x7F27DFC4u: goto label_7F27DFC4;
    case 0x7F27DFC8u: goto label_7F27DFC8;
    case 0x7F27DFCCu: goto label_7F27DFCC;
    case 0x7F27DFD0u: goto label_7F27DFD0;
    case 0x7F27DFD4u: goto label_7F27DFD4;
    case 0x7F27DFD8u: goto label_7F27DFD8;
    case 0x7F27DFDCu: goto label_7F27DFDC;
    case 0x7F27DFE0u: goto label_7F27DFE0;
    case 0x7F27DFE4u: goto label_7F27DFE4;
    case 0x7F27DFE8u: goto label_7F27DFE8;
    case 0x7F27DFECu: goto label_7F27DFEC;
    case 0x7F27DFF0u: goto label_7F27DFF0;
    case 0x7F27DFF4u: goto label_7F27DFF4;
    case 0x7F27DFF8u: goto label_7F27DFF8;
    case 0x7F27DFFCu: goto label_7F27DFFC;
    case 0x7F27E000u: goto label_7F27E000;
    case 0x7F27E004u: goto label_7F27E004;
    case 0x7F27E008u: goto label_7F27E008;
    case 0x7F27E00Cu: goto label_7F27E00C;
    case 0x7F27E010u: goto label_7F27E010;
    case 0x7F27E014u: goto label_7F27E014;
    case 0x7F27E018u: goto label_7F27E018;
    case 0x7F27E01Cu: goto label_7F27E01C;
    case 0x7F27E020u: goto label_7F27E020;
    case 0x7F27E024u: goto label_7F27E024;
    case 0x7F27E028u: goto label_7F27E028;
    case 0x7F27E02Cu: goto label_7F27E02C;
    case 0x7F27E030u: goto label_7F27E030;
    case 0x7F27E034u: goto label_7F27E034;
    case 0x7F27E038u: goto label_7F27E038;
    case 0x7F27E03Cu: goto label_7F27E03C;
    case 0x7F27E040u: goto label_7F27E040;
    case 0x7F27E044u: goto label_7F27E044;
    case 0x7F27E048u: goto label_7F27E048;
    case 0x7F27E04Cu: goto label_7F27E04C;
    case 0x7F27E050u: goto label_7F27E050;
    case 0x7F27E054u: goto label_7F27E054;
    case 0x7F27E058u: goto label_7F27E058;
    case 0x7F27E05Cu: goto label_7F27E05C;
    case 0x7F27E060u: goto label_7F27E060;
    case 0x7F27E064u: goto label_7F27E064;
    case 0x7F27E068u: goto label_7F27E068;
    case 0x7F27E06Cu: goto label_7F27E06C;
    case 0x7F27E070u: goto label_7F27E070;
    case 0x7F27E074u: goto label_7F27E074;
    case 0x7F27E078u: goto label_7F27E078;
    case 0x7F27E07Cu: goto label_7F27E07C;
    case 0x7F27E080u: goto label_7F27E080;
    case 0x7F27E084u: goto label_7F27E084;
    case 0x7F27E088u: goto label_7F27E088;
    case 0x7F27E08Cu: goto label_7F27E08C;
    case 0x7F27E090u: goto label_7F27E090;
    case 0x7F27E094u: goto label_7F27E094;
    case 0x7F27E098u: goto label_7F27E098;
    case 0x7F27E09Cu: goto label_7F27E09C;
    case 0x7F27E0A0u: goto label_7F27E0A0;
    case 0x7F27E0A4u: goto label_7F27E0A4;
    case 0x7F27E0A8u: goto label_7F27E0A8;
    case 0x7F27E0ACu: goto label_7F27E0AC;
    case 0x7F27E0B0u: goto label_7F27E0B0;
    case 0x7F27E0B4u: goto label_7F27E0B4;
    case 0x7F27E0B8u: goto label_7F27E0B8;
    case 0x7F27E0BCu: goto label_7F27E0BC;
    case 0x7F27E0C0u: goto label_7F27E0C0;
    case 0x7F27E0C4u: goto label_7F27E0C4;
    case 0x7F27E0C8u: goto label_7F27E0C8;
    case 0x7F27E0CCu: goto label_7F27E0CC;
    case 0x7F27E0D0u: goto label_7F27E0D0;
    case 0x7F27E0D4u: goto label_7F27E0D4;
    case 0x7F27E0D8u: goto label_7F27E0D8;
    case 0x7F27E0DCu: goto label_7F27E0DC;
    case 0x7F27E0E0u: goto label_7F27E0E0;
    case 0x7F27E0E4u: goto label_7F27E0E4;
    case 0x7F27E0E8u: goto label_7F27E0E8;
    case 0x7F27E0ECu: goto label_7F27E0EC;
    case 0x7F27E0F0u: goto label_7F27E0F0;
    case 0x7F27E0F4u: goto label_7F27E0F4;
    case 0x7F27E0F8u: goto label_7F27E0F8;
    case 0x7F27E0FCu: goto label_7F27E0FC;
    case 0x7F27E100u: goto label_7F27E100;
    case 0x7F27E104u: goto label_7F27E104;
    case 0x7F27E108u: goto label_7F27E108;
    case 0x7F27E10Cu: goto label_7F27E10C;
    case 0x7F27E110u: goto label_7F27E110;
    case 0x7F27E114u: goto label_7F27E114;
    case 0x7F27E118u: goto label_7F27E118;
    case 0x7F27E11Cu: goto label_7F27E11C;
    case 0x7F27E120u: goto label_7F27E120;
    case 0x7F27E124u: goto label_7F27E124;
    case 0x7F27E128u: goto label_7F27E128;
    case 0x7F27E12Cu: goto label_7F27E12C;
    case 0x7F27E130u: goto label_7F27E130;
    case 0x7F27E134u: goto label_7F27E134;
    case 0x7F27E138u: goto label_7F27E138;
    case 0x7F27E13Cu: goto label_7F27E13C;
    case 0x7F27E140u: goto label_7F27E140;
    case 0x7F27E144u: goto label_7F27E144;
    case 0x7F27E148u: goto label_7F27E148;
    case 0x7F27E14Cu: goto label_7F27E14C;
    case 0x7F27E150u: goto label_7F27E150;
    case 0x7F27E154u: goto label_7F27E154;
    case 0x7F27E158u: goto label_7F27E158;
    case 0x7F27E15Cu: goto label_7F27E15C;
    case 0x7F27E160u: goto label_7F27E160;
    case 0x7F27E164u: goto label_7F27E164;
    case 0x7F27E168u: goto label_7F27E168;
    case 0x7F27E16Cu: goto label_7F27E16C;
    case 0x7F27E170u: goto label_7F27E170;
    case 0x7F27E174u: goto label_7F27E174;
    case 0x7F27E178u: goto label_7F27E178;
    case 0x7F27E17Cu: goto label_7F27E17C;
    case 0x7F27E180u: goto label_7F27E180;
    case 0x7F27E184u: goto label_7F27E184;
    case 0x7F27E188u: goto label_7F27E188;
    case 0x7F27E18Cu: goto label_7F27E18C;
    case 0x7F27E190u: goto label_7F27E190;
    case 0x7F27E194u: goto label_7F27E194;
    case 0x7F27E198u: goto label_7F27E198;
    case 0x7F27E19Cu: goto label_7F27E19C;
    case 0x7F27E1A0u: goto label_7F27E1A0;
    case 0x7F27E1A4u: goto label_7F27E1A4;
    case 0x7F27E1A8u: goto label_7F27E1A8;
    case 0x7F27E1ACu: goto label_7F27E1AC;
    case 0x7F27E1B0u: goto label_7F27E1B0;
    case 0x7F27E1B4u: goto label_7F27E1B4;
    case 0x7F27E1B8u: goto label_7F27E1B8;
    case 0x7F27E1BCu: goto label_7F27E1BC;
    case 0x7F27E1C0u: goto label_7F27E1C0;
    case 0x7F27E1C4u: goto label_7F27E1C4;
    case 0x7F27E1C8u: goto label_7F27E1C8;
    case 0x7F27E1CCu: goto label_7F27E1CC;
    case 0x7F27E1D0u: goto label_7F27E1D0;
    case 0x7F27E1D4u: goto label_7F27E1D4;
    case 0x7F27E1D8u: goto label_7F27E1D8;
    case 0x7F27E1DCu: goto label_7F27E1DC;
    case 0x7F27E1E0u: goto label_7F27E1E0;
    case 0x7F27E1E4u: goto label_7F27E1E4;
    case 0x7F27E1E8u: goto label_7F27E1E8;
    case 0x7F27E1ECu: goto label_7F27E1EC;
    case 0x7F27E1F0u: goto label_7F27E1F0;
    case 0x7F27E1F4u: goto label_7F27E1F4;
    case 0x7F27E1F8u: goto label_7F27E1F8;
    case 0x7F27E1FCu: goto label_7F27E1FC;
    case 0x7F27E200u: goto label_7F27E200;
    case 0x7F27E204u: goto label_7F27E204;
    case 0x7F27E208u: goto label_7F27E208;
    case 0x7F27E20Cu: goto label_7F27E20C;
    case 0x7F27E210u: goto label_7F27E210;
    case 0x7F27E214u: goto label_7F27E214;
    case 0x7F27E218u: goto label_7F27E218;
    case 0x7F27E21Cu: goto label_7F27E21C;
    case 0x7F27E220u: goto label_7F27E220;
    case 0x7F27E224u: goto label_7F27E224;
    case 0x7F27E228u: goto label_7F27E228;
    case 0x7F27E22Cu: goto label_7F27E22C;
    case 0x7F27E230u: goto label_7F27E230;
    case 0x7F27E234u: goto label_7F27E234;
    case 0x7F27E238u: goto label_7F27E238;
    case 0x7F27E23Cu: goto label_7F27E23C;
    case 0x7F27E240u: goto label_7F27E240;
    case 0x7F27E244u: goto label_7F27E244;
    case 0x7F27E248u: goto label_7F27E248;
    case 0x7F27E24Cu: goto label_7F27E24C;
    case 0x7F27E250u: goto label_7F27E250;
    case 0x7F27E254u: goto label_7F27E254;
    case 0x7F27E258u: goto label_7F27E258;
    case 0x7F27E25Cu: goto label_7F27E25C;
    case 0x7F27E260u: goto label_7F27E260;
    case 0x7F27E264u: goto label_7F27E264;
    case 0x7F27E268u: goto label_7F27E268;
    case 0x7F27E26Cu: goto label_7F27E26C;
    case 0x7F27E270u: goto label_7F27E270;
    case 0x7F27E274u: goto label_7F27E274;
    case 0x7F27E278u: goto label_7F27E278;
    case 0x7F27E27Cu: goto label_7F27E27C;
    case 0x7F27E280u: goto label_7F27E280;
    case 0x7F27E284u: goto label_7F27E284;
    case 0x7F27E288u: goto label_7F27E288;
    case 0x7F27E28Cu: goto label_7F27E28C;
    case 0x7F27E290u: goto label_7F27E290;
    case 0x7F27E294u: goto label_7F27E294;
    case 0x7F27E298u: goto label_7F27E298;
    case 0x7F27E29Cu: goto label_7F27E29C;
    case 0x7F27E2A0u: goto label_7F27E2A0;
    case 0x7F27E2A4u: goto label_7F27E2A4;
    case 0x7F27E2A8u: goto label_7F27E2A8;
    case 0x7F27E2ACu: goto label_7F27E2AC;
    case 0x7F27E2B0u: goto label_7F27E2B0;
    case 0x7F27E2B4u: goto label_7F27E2B4;
    case 0x7F27E2B8u: goto label_7F27E2B8;
    case 0x7F27E2BCu: goto label_7F27E2BC;
    case 0x7F27E2C0u: goto label_7F27E2C0;
    case 0x7F27E2C4u: goto label_7F27E2C4;
    case 0x7F27E2C8u: goto label_7F27E2C8;
    case 0x7F27E2CCu: goto label_7F27E2CC;
    case 0x7F27E2D0u: goto label_7F27E2D0;
    case 0x7F27E2D4u: goto label_7F27E2D4;
    case 0x7F27E2D8u: goto label_7F27E2D8;
    case 0x7F27E2DCu: goto label_7F27E2DC;
    case 0x7F27E2E0u: goto label_7F27E2E0;
    case 0x7F27E2E4u: goto label_7F27E2E4;
    case 0x7F27E2E8u: goto label_7F27E2E8;
    case 0x7F27E2ECu: goto label_7F27E2EC;
    case 0x7F27E2F0u: goto label_7F27E2F0;
    case 0x7F27E2F4u: goto label_7F27E2F4;
    case 0x7F27E2F8u: goto label_7F27E2F8;
    case 0x7F27E2FCu: goto label_7F27E2FC;
    case 0x7F27E300u: goto label_7F27E300;
    case 0x7F27E304u: goto label_7F27E304;
    case 0x7F27E308u: goto label_7F27E308;
    case 0x7F27E30Cu: goto label_7F27E30C;
    case 0x7F27E310u: goto label_7F27E310;
    case 0x7F27E314u: goto label_7F27E314;
    case 0x7F27E318u: goto label_7F27E318;
    case 0x7F27E31Cu: goto label_7F27E31C;
    case 0x7F27E320u: goto label_7F27E320;
    case 0x7F27E324u: goto label_7F27E324;
    case 0x7F27E328u: goto label_7F27E328;
    case 0x7F27E32Cu: goto label_7F27E32C;
    case 0x7F27E330u: goto label_7F27E330;
    case 0x7F27E334u: goto label_7F27E334;
    case 0x7F27E338u: goto label_7F27E338;
    case 0x7F27E33Cu: goto label_7F27E33C;
    case 0x7F27E340u: goto label_7F27E340;
    case 0x7F27E344u: goto label_7F27E344;
    case 0x7F27E348u: goto label_7F27E348;
    case 0x7F27E34Cu: goto label_7F27E34C;
    case 0x7F27E350u: goto label_7F27E350;
    case 0x7F27E354u: goto label_7F27E354;
    case 0x7F27E358u: goto label_7F27E358;
    case 0x7F27E35Cu: goto label_7F27E35C;
    case 0x7F27E360u: goto label_7F27E360;
    case 0x7F27E364u: goto label_7F27E364;
    case 0x7F27E368u: goto label_7F27E368;
    case 0x7F27E36Cu: goto label_7F27E36C;
    case 0x7F27E370u: goto label_7F27E370;
    case 0x7F27E374u: goto label_7F27E374;
    case 0x7F27E378u: goto label_7F27E378;
    case 0x7F27E37Cu: goto label_7F27E37C;
    case 0x7F27E380u: goto label_7F27E380;
    case 0x7F27E384u: goto label_7F27E384;
    case 0x7F27E388u: goto label_7F27E388;
    case 0x7F27E38Cu: goto label_7F27E38C;
    case 0x7F27E390u: goto label_7F27E390;
    case 0x7F27E394u: goto label_7F27E394;
    case 0x7F27E398u: goto label_7F27E398;
    case 0x7F27E39Cu: goto label_7F27E39C;
    case 0x7F27E3A0u: goto label_7F27E3A0;
    case 0x7F27E3A4u: goto label_7F27E3A4;
    case 0x7F27E3A8u: goto label_7F27E3A8;
    case 0x7F27E3ACu: goto label_7F27E3AC;
    case 0x7F27E3B0u: goto label_7F27E3B0;
    case 0x7F27E3B4u: goto label_7F27E3B4;
    case 0x7F27E3B8u: goto label_7F27E3B8;
    case 0x7F27E3BCu: goto label_7F27E3BC;
    case 0x7F27E3C0u: goto label_7F27E3C0;
    case 0x7F27E3C4u: goto label_7F27E3C4;
    case 0x7F27E3C8u: goto label_7F27E3C8;
    case 0x7F27E3CCu: goto label_7F27E3CC;
    case 0x7F27E3D0u: goto label_7F27E3D0;
    case 0x7F27E3D4u: goto label_7F27E3D4;
    case 0x7F27E3D8u: goto label_7F27E3D8;
    case 0x7F27E3DCu: goto label_7F27E3DC;
    case 0x7F27E3E0u: goto label_7F27E3E0;
    case 0x7F27E3E4u: goto label_7F27E3E4;
    case 0x7F27E3E8u: goto label_7F27E3E8;
    case 0x7F27E3ECu: goto label_7F27E3EC;
    case 0x7F27E3F0u: goto label_7F27E3F0;
    case 0x7F27E3F4u: goto label_7F27E3F4;
    case 0x7F27E3F8u: goto label_7F27E3F8;
    case 0x7F27E3FCu: goto label_7F27E3FC;
    case 0x7F27E400u: goto label_7F27E400;
    case 0x7F27E404u: goto label_7F27E404;
    case 0x7F27E408u: goto label_7F27E408;
    case 0x7F27E40Cu: goto label_7F27E40C;
    case 0x7F27E410u: goto label_7F27E410;
    case 0x7F27E414u: goto label_7F27E414;
    case 0x7F27E418u: goto label_7F27E418;
    case 0x7F27E41Cu: goto label_7F27E41C;
    case 0x7F27E420u: goto label_7F27E420;
    case 0x7F27E424u: goto label_7F27E424;
    case 0x7F27E428u: goto label_7F27E428;
    case 0x7F27E42Cu: goto label_7F27E42C;
    case 0x7F27E430u: goto label_7F27E430;
    case 0x7F27E434u: goto label_7F27E434;
    case 0x7F27E438u: goto label_7F27E438;
    case 0x7F27E43Cu: goto label_7F27E43C;
    case 0x7F27E440u: goto label_7F27E440;
    case 0x7F27E444u: goto label_7F27E444;
    case 0x7F27E448u: goto label_7F27E448;
    case 0x7F27E44Cu: goto label_7F27E44C;
    case 0x7F27E450u: goto label_7F27E450;
    case 0x7F27E454u: goto label_7F27E454;
    case 0x7F27E458u: goto label_7F27E458;
    case 0x7F27E45Cu: goto label_7F27E45C;
    case 0x7F27E460u: goto label_7F27E460;
    case 0x7F27E464u: goto label_7F27E464;
    case 0x7F27E468u: goto label_7F27E468;
    case 0x7F27E46Cu: goto label_7F27E46C;
    case 0x7F27E470u: goto label_7F27E470;
    case 0x7F27E474u: goto label_7F27E474;
    case 0x7F27E478u: goto label_7F27E478;
    case 0x7F27E47Cu: goto label_7F27E47C;
    case 0x7F27E480u: goto label_7F27E480;
    case 0x7F27E484u: goto label_7F27E484;
    case 0x7F27E488u: goto label_7F27E488;
    case 0x7F27E48Cu: goto label_7F27E48C;
    case 0x7F27E490u: goto label_7F27E490;
    case 0x7F27E494u: goto label_7F27E494;
    case 0x7F27E498u: goto label_7F27E498;
    case 0x7F27E49Cu: goto label_7F27E49C;
    case 0x7F27E4A0u: goto label_7F27E4A0;
    case 0x7F27E4A4u: goto label_7F27E4A4;
    case 0x7F27E4A8u: goto label_7F27E4A8;
    case 0x7F27E4ACu: goto label_7F27E4AC;
    case 0x7F27E4B0u: goto label_7F27E4B0;
    case 0x7F27E4B4u: goto label_7F27E4B4;
    case 0x7F27E4B8u: goto label_7F27E4B8;
    case 0x7F27E4BCu: goto label_7F27E4BC;
    case 0x7F27E4C0u: goto label_7F27E4C0;
    case 0x7F27E4C4u: goto label_7F27E4C4;
    case 0x7F27E4C8u: goto label_7F27E4C8;
    case 0x7F27E4CCu: goto label_7F27E4CC;
    case 0x7F27E4D0u: goto label_7F27E4D0;
    case 0x7F27E4D4u: goto label_7F27E4D4;
    case 0x7F27E4D8u: goto label_7F27E4D8;
    case 0x7F27E4DCu: goto label_7F27E4DC;
    case 0x7F27E4E0u: goto label_7F27E4E0;
    case 0x7F27E4E4u: goto label_7F27E4E4;
    case 0x7F27E4E8u: goto label_7F27E4E8;
    case 0x7F27E4ECu: goto label_7F27E4EC;
    case 0x7F27E4F0u: goto label_7F27E4F0;
    case 0x7F27E4F4u: goto label_7F27E4F4;
    case 0x7F27E4F8u: goto label_7F27E4F8;
    case 0x7F27E4FCu: goto label_7F27E4FC;
    case 0x7F27E500u: goto label_7F27E500;
    case 0x7F27E504u: goto label_7F27E504;
    case 0x7F27E508u: goto label_7F27E508;
    case 0x7F27E50Cu: goto label_7F27E50C;
    case 0x7F27E510u: goto label_7F27E510;
    case 0x7F27E514u: goto label_7F27E514;
    case 0x7F27E518u: goto label_7F27E518;
    case 0x7F27E51Cu: goto label_7F27E51C;
    case 0x7F27E520u: goto label_7F27E520;
    case 0x7F27E524u: goto label_7F27E524;
    case 0x7F27E528u: goto label_7F27E528;
    case 0x7F27E52Cu: goto label_7F27E52C;
    case 0x7F27E530u: goto label_7F27E530;
    case 0x7F27E534u: goto label_7F27E534;
    case 0x7F27E538u: goto label_7F27E538;
    case 0x7F27E53Cu: goto label_7F27E53C;
    case 0x7F27E540u: goto label_7F27E540;
    case 0x7F27E544u: goto label_7F27E544;
    case 0x7F27E548u: goto label_7F27E548;
    case 0x7F27E54Cu: goto label_7F27E54C;
    case 0x7F27E550u: goto label_7F27E550;
    case 0x7F27E554u: goto label_7F27E554;
    case 0x7F27E558u: goto label_7F27E558;
    case 0x7F27E55Cu: goto label_7F27E55C;
    case 0x7F27E560u: goto label_7F27E560;
    case 0x7F27E564u: goto label_7F27E564;
    case 0x7F27E568u: goto label_7F27E568;
    case 0x7F27E56Cu: goto label_7F27E56C;
    case 0x7F27E570u: goto label_7F27E570;
    case 0x7F27E574u: goto label_7F27E574;
    case 0x7F27E578u: goto label_7F27E578;
    case 0x7F27E57Cu: goto label_7F27E57C;
    case 0x7F27E580u: goto label_7F27E580;
    case 0x7F27E584u: goto label_7F27E584;
    case 0x7F27E588u: goto label_7F27E588;
    case 0x7F27E58Cu: goto label_7F27E58C;
    case 0x7F27E590u: goto label_7F27E590;
    case 0x7F27E594u: goto label_7F27E594;
    case 0x7F27E598u: goto label_7F27E598;
    case 0x7F27E59Cu: goto label_7F27E59C;
    case 0x7F27E5A0u: goto label_7F27E5A0;
    case 0x7F27E5A4u: goto label_7F27E5A4;
    case 0x7F27E5A8u: goto label_7F27E5A8;
    case 0x7F27E5ACu: goto label_7F27E5AC;
    case 0x7F27E5B0u: goto label_7F27E5B0;
    case 0x7F27E5B4u: goto label_7F27E5B4;
    case 0x7F27E5B8u: goto label_7F27E5B8;
    case 0x7F27E5BCu: goto label_7F27E5BC;
    case 0x7F27E5C0u: goto label_7F27E5C0;
    case 0x7F27E5C4u: goto label_7F27E5C4;
    case 0x7F27E5C8u: goto label_7F27E5C8;
    case 0x7F27E5CCu: goto label_7F27E5CC;
    case 0x7F27E5D0u: goto label_7F27E5D0;
    case 0x7F27E5D4u: goto label_7F27E5D4;
    case 0x7F27E5D8u: goto label_7F27E5D8;
    case 0x7F27E5DCu: goto label_7F27E5DC;
    case 0x7F27E5E0u: goto label_7F27E5E0;
    case 0x7F27E5E4u: goto label_7F27E5E4;
    case 0x7F27E5E8u: goto label_7F27E5E8;
    case 0x7F27E5ECu: goto label_7F27E5EC;
    case 0x7F27E5F0u: goto label_7F27E5F0;
    case 0x7F27E5F4u: goto label_7F27E5F4;
    case 0x7F27E5F8u: goto label_7F27E5F8;
    case 0x7F27E5FCu: goto label_7F27E5FC;
    case 0x7F27E600u: goto label_7F27E600;
    case 0x7F27E604u: goto label_7F27E604;
    case 0x7F27E608u: goto label_7F27E608;
    case 0x7F27E60Cu: goto label_7F27E60C;
    case 0x7F27E610u: goto label_7F27E610;
    case 0x7F27E614u: goto label_7F27E614;
    case 0x7F27E618u: goto label_7F27E618;
    case 0x7F27E61Cu: goto label_7F27E61C;
    case 0x7F27E620u: goto label_7F27E620;
    case 0x7F27E624u: goto label_7F27E624;
    case 0x7F27E628u: goto label_7F27E628;
    case 0x7F27E62Cu: goto label_7F27E62C;
    case 0x7F27E630u: goto label_7F27E630;
    case 0x7F27E634u: goto label_7F27E634;
    case 0x7F27E638u: goto label_7F27E638;
    case 0x7F27E63Cu: goto label_7F27E63C;
    case 0x7F27E640u: goto label_7F27E640;
    case 0x7F27E644u: goto label_7F27E644;
    case 0x7F27E648u: goto label_7F27E648;
    case 0x7F27E64Cu: goto label_7F27E64C;
    case 0x7F27E650u: goto label_7F27E650;
    case 0x7F27E654u: goto label_7F27E654;
    case 0x7F27E658u: goto label_7F27E658;
    case 0x7F27E65Cu: goto label_7F27E65C;
    case 0x7F27E660u: goto label_7F27E660;
    case 0x7F27E664u: goto label_7F27E664;
    case 0x7F27E668u: goto label_7F27E668;
    case 0x7F27E66Cu: goto label_7F27E66C;
    case 0x7F27E670u: goto label_7F27E670;
    case 0x7F27E674u: goto label_7F27E674;
    case 0x7F27E678u: goto label_7F27E678;
    case 0x7F27E67Cu: goto label_7F27E67C;
    case 0x7F27E680u: goto label_7F27E680;
    case 0x7F27E684u: goto label_7F27E684;
    case 0x7F27E688u: goto label_7F27E688;
    case 0x7F27E68Cu: goto label_7F27E68C;
    case 0x7F27E690u: goto label_7F27E690;
    case 0x7F27E694u: goto label_7F27E694;
    case 0x7F27E698u: goto label_7F27E698;
    case 0x7F27E69Cu: goto label_7F27E69C;
    case 0x7F27E6A0u: goto label_7F27E6A0;
    case 0x7F27E6A4u: goto label_7F27E6A4;
    case 0x7F27E6A8u: goto label_7F27E6A8;
    case 0x7F27E6ACu: goto label_7F27E6AC;
    case 0x7F27E6B0u: goto label_7F27E6B0;
    case 0x7F27E6B4u: goto label_7F27E6B4;
    case 0x7F27E6B8u: goto label_7F27E6B8;
    case 0x7F27E6BCu: goto label_7F27E6BC;
    case 0x7F27E6C0u: goto label_7F27E6C0;
    case 0x7F27E6C4u: goto label_7F27E6C4;
    case 0x7F27E6C8u: goto label_7F27E6C8;
    case 0x7F27E6CCu: goto label_7F27E6CC;
    case 0x7F27E6D0u: goto label_7F27E6D0;
    case 0x7F27E6D4u: goto label_7F27E6D4;
    case 0x7F27E6D8u: goto label_7F27E6D8;
    case 0x7F27E6DCu: goto label_7F27E6DC;
    case 0x7F27E6E0u: goto label_7F27E6E0;
    case 0x7F27E6E4u: goto label_7F27E6E4;
    case 0x7F27E6E8u: goto label_7F27E6E8;
    case 0x7F27E6ECu: goto label_7F27E6EC;
    case 0x7F27E6F0u: goto label_7F27E6F0;
    case 0x7F27E6F4u: goto label_7F27E6F4;
    case 0x7F27E6F8u: goto label_7F27E6F8;
    case 0x7F27E6FCu: goto label_7F27E6FC;
    case 0x7F27E700u: goto label_7F27E700;
    case 0x7F27E704u: goto label_7F27E704;
    case 0x7F27E708u: goto label_7F27E708;
    case 0x7F27E70Cu: goto label_7F27E70C;
    case 0x7F27E710u: goto label_7F27E710;
    case 0x7F27E714u: goto label_7F27E714;
    case 0x7F27E718u: goto label_7F27E718;
    case 0x7F27E71Cu: goto label_7F27E71C;
    case 0x7F27E720u: goto label_7F27E720;
    case 0x7F27E724u: goto label_7F27E724;
    case 0x7F27E728u: goto label_7F27E728;
    case 0x7F27E72Cu: goto label_7F27E72C;
    case 0x7F27E730u: goto label_7F27E730;
    case 0x7F27E734u: goto label_7F27E734;
    case 0x7F27E738u: goto label_7F27E738;
    case 0x7F27E73Cu: goto label_7F27E73C;
    case 0x7F27E740u: goto label_7F27E740;
    case 0x7F27E744u: goto label_7F27E744;
    case 0x7F27E748u: goto label_7F27E748;
    case 0x7F27E74Cu: goto label_7F27E74C;
    case 0x7F27E750u: goto label_7F27E750;
    case 0x7F27E754u: goto label_7F27E754;
    case 0x7F27E758u: goto label_7F27E758;
    case 0x7F27E75Cu: goto label_7F27E75C;
    case 0x7F27E760u: goto label_7F27E760;
    case 0x7F27E764u: goto label_7F27E764;
    case 0x7F27E768u: goto label_7F27E768;
    case 0x7F27E76Cu: goto label_7F27E76C;
    case 0x7F27E770u: goto label_7F27E770;
    case 0x7F27E774u: goto label_7F27E774;
    case 0x7F27E778u: goto label_7F27E778;
    case 0x7F27E77Cu: goto label_7F27E77C;
    case 0x7F27E780u: goto label_7F27E780;
    case 0x7F27E784u: goto label_7F27E784;
    case 0x7F27E788u: goto label_7F27E788;
    case 0x7F27E78Cu: goto label_7F27E78C;
    case 0x7F27E790u: goto label_7F27E790;
    case 0x7F27E794u: goto label_7F27E794;
    case 0x7F27E798u: goto label_7F27E798;
    case 0x7F27E79Cu: goto label_7F27E79C;
    case 0x7F27E7A0u: goto label_7F27E7A0;
    case 0x7F27E7A4u: goto label_7F27E7A4;
    case 0x7F27E7A8u: goto label_7F27E7A8;
    case 0x7F27E7ACu: goto label_7F27E7AC;
    case 0x7F27E7B0u: goto label_7F27E7B0;
    case 0x7F27E7B4u: goto label_7F27E7B4;
    case 0x7F27E7B8u: goto label_7F27E7B8;
    case 0x7F27E7BCu: goto label_7F27E7BC;
    case 0x7F27E7C0u: goto label_7F27E7C0;
    case 0x7F27E7C4u: goto label_7F27E7C4;
    case 0x7F27E7C8u: goto label_7F27E7C8;
    case 0x7F27E7CCu: goto label_7F27E7CC;
    case 0x7F27E7D0u: goto label_7F27E7D0;
    case 0x7F27E7D4u: goto label_7F27E7D4;
    case 0x7F27E7D8u: goto label_7F27E7D8;
    case 0x7F27E7DCu: goto label_7F27E7DC;
    case 0x7F27E7E0u: goto label_7F27E7E0;
    case 0x7F27E7E4u: goto label_7F27E7E4;
    case 0x7F27E7E8u: goto label_7F27E7E8;
    case 0x7F27E7ECu: goto label_7F27E7EC;
    case 0x7F27E7F0u: goto label_7F27E7F0;
    case 0x7F27E7F4u: goto label_7F27E7F4;
    case 0x7F27E7F8u: goto label_7F27E7F8;
    case 0x7F27E7FCu: goto label_7F27E7FC;
    case 0x7F27E800u: goto label_7F27E800;
    case 0x7F27E804u: goto label_7F27E804;
    case 0x7F27E808u: goto label_7F27E808;
    case 0x7F27E80Cu: goto label_7F27E80C;
    case 0x7F27E810u: goto label_7F27E810;
    case 0x7F27E814u: goto label_7F27E814;
    case 0x7F27E818u: goto label_7F27E818;
    case 0x7F27E81Cu: goto label_7F27E81C;
    case 0x7F27E820u: goto label_7F27E820;
    case 0x7F27E824u: goto label_7F27E824;
    case 0x7F27E828u: goto label_7F27E828;
    case 0x7F27E82Cu: goto label_7F27E82C;
    case 0x7F27E830u: goto label_7F27E830;
    case 0x7F27E834u: goto label_7F27E834;
    case 0x7F27E838u: goto label_7F27E838;
    case 0x7F27E83Cu: goto label_7F27E83C;
    case 0x7F27E840u: goto label_7F27E840;
    case 0x7F27E844u: goto label_7F27E844;
    case 0x7F27E848u: goto label_7F27E848;
    case 0x7F27E84Cu: goto label_7F27E84C;
    case 0x7F27E850u: goto label_7F27E850;
    case 0x7F27E854u: goto label_7F27E854;
    case 0x7F27E858u: goto label_7F27E858;
    case 0x7F27E85Cu: goto label_7F27E85C;
    case 0x7F27E860u: goto label_7F27E860;
    case 0x7F27E864u: goto label_7F27E864;
    case 0x7F27E868u: goto label_7F27E868;
    case 0x7F27E86Cu: goto label_7F27E86C;
    case 0x7F27E870u: goto label_7F27E870;
    case 0x7F27E874u: goto label_7F27E874;
    case 0x7F27E878u: goto label_7F27E878;
    case 0x7F27E87Cu: goto label_7F27E87C;
    case 0x7F27E880u: goto label_7F27E880;
    case 0x7F27E884u: goto label_7F27E884;
    case 0x7F27E888u: goto label_7F27E888;
    case 0x7F27E88Cu: goto label_7F27E88C;
    case 0x7F27E890u: goto label_7F27E890;
    case 0x7F27E894u: goto label_7F27E894;
    case 0x7F27E898u: goto label_7F27E898;
    case 0x7F27E89Cu: goto label_7F27E89C;
    case 0x7F27E8A0u: goto label_7F27E8A0;
    case 0x7F27E8A4u: goto label_7F27E8A4;
    case 0x7F27E8A8u: goto label_7F27E8A8;
    case 0x7F27E8ACu: goto label_7F27E8AC;
    case 0x7F27E8B0u: goto label_7F27E8B0;
    case 0x7F27E8B4u: goto label_7F27E8B4;
    case 0x7F27E8B8u: goto label_7F27E8B8;
    case 0x7F27E8BCu: goto label_7F27E8BC;
    case 0x7F27E8C0u: goto label_7F27E8C0;
    case 0x7F27E8C4u: goto label_7F27E8C4;
    case 0x7F27E8C8u: goto label_7F27E8C8;
    case 0x7F27E8CCu: goto label_7F27E8CC;
    case 0x7F27E8D0u: goto label_7F27E8D0;
    case 0x7F27E8D4u: goto label_7F27E8D4;
    case 0x7F27E8D8u: goto label_7F27E8D8;
    case 0x7F27E8DCu: goto label_7F27E8DC;
    case 0x7F27E8E0u: goto label_7F27E8E0;
    case 0x7F27E8E4u: goto label_7F27E8E4;
    case 0x7F27E8E8u: goto label_7F27E8E8;
    case 0x7F27E8ECu: goto label_7F27E8EC;
    case 0x7F27E8F0u: goto label_7F27E8F0;
    case 0x7F27E8F4u: goto label_7F27E8F4;
    case 0x7F27E8F8u: goto label_7F27E8F8;
    case 0x7F27E8FCu: goto label_7F27E8FC;
    case 0x7F27E900u: goto label_7F27E900;
    case 0x7F27E904u: goto label_7F27E904;
    case 0x7F27E908u: goto label_7F27E908;
    case 0x7F27E90Cu: goto label_7F27E90C;
    case 0x7F27E910u: goto label_7F27E910;
    case 0x7F27E914u: goto label_7F27E914;
    case 0x7F27E918u: goto label_7F27E918;
    case 0x7F27E91Cu: goto label_7F27E91C;
    case 0x7F27E920u: goto label_7F27E920;
    case 0x7F27E924u: goto label_7F27E924;
    case 0x7F27E928u: goto label_7F27E928;
    case 0x7F27E92Cu: goto label_7F27E92C;
    case 0x7F27E930u: goto label_7F27E930;
    case 0x7F27E934u: goto label_7F27E934;
    case 0x7F27E938u: goto label_7F27E938;
    case 0x7F27E93Cu: goto label_7F27E93C;
    case 0x7F27E940u: goto label_7F27E940;
    case 0x7F27E944u: goto label_7F27E944;
    case 0x7F27E948u: goto label_7F27E948;
    case 0x7F27E94Cu: goto label_7F27E94C;
    case 0x7F27E950u: goto label_7F27E950;
    case 0x7F27E954u: goto label_7F27E954;
    case 0x7F27E958u: goto label_7F27E958;
    case 0x7F27E95Cu: goto label_7F27E95C;
    case 0x7F27E960u: goto label_7F27E960;
    case 0x7F27E964u: goto label_7F27E964;
    case 0x7F27E968u: goto label_7F27E968;
    case 0x7F27E96Cu: goto label_7F27E96C;
    case 0x7F27E970u: goto label_7F27E970;
    case 0x7F27E974u: goto label_7F27E974;
    case 0x7F27E978u: goto label_7F27E978;
    case 0x7F27E97Cu: goto label_7F27E97C;
    case 0x7F27E980u: goto label_7F27E980;
    case 0x7F27E984u: goto label_7F27E984;
    case 0x7F27E988u: goto label_7F27E988;
    case 0x7F27E98Cu: goto label_7F27E98C;
    case 0x7F27E990u: goto label_7F27E990;
    case 0x7F27E994u: goto label_7F27E994;
    case 0x7F27E998u: goto label_7F27E998;
    case 0x7F27E99Cu: goto label_7F27E99C;
    case 0x7F27E9A0u: goto label_7F27E9A0;
    case 0x7F27E9A4u: goto label_7F27E9A4;
    case 0x7F27E9A8u: goto label_7F27E9A8;
    case 0x7F27E9ACu: goto label_7F27E9AC;
    case 0x7F27E9B0u: goto label_7F27E9B0;
    case 0x7F27E9B4u: goto label_7F27E9B4;
    case 0x7F27E9B8u: goto label_7F27E9B8;
    case 0x7F27E9BCu: goto label_7F27E9BC;
    case 0x7F27E9C0u: goto label_7F27E9C0;
    case 0x7F27E9C4u: goto label_7F27E9C4;
    case 0x7F27E9C8u: goto label_7F27E9C8;
    case 0x7F27E9CCu: goto label_7F27E9CC;
    case 0x7F27E9D0u: goto label_7F27E9D0;
    case 0x7F27E9D4u: goto label_7F27E9D4;
    case 0x7F27E9D8u: goto label_7F27E9D8;
    case 0x7F27E9DCu: goto label_7F27E9DC;
    case 0x7F27E9E0u: goto label_7F27E9E0;
    case 0x7F27E9E4u: goto label_7F27E9E4;
    case 0x7F27E9E8u: goto label_7F27E9E8;
    case 0x7F27E9ECu: goto label_7F27E9EC;
    case 0x7F27E9F0u: goto label_7F27E9F0;
    case 0x7F27E9F4u: goto label_7F27E9F4;
    case 0x7F27E9F8u: goto label_7F27E9F8;
    case 0x7F27E9FCu: goto label_7F27E9FC;
    case 0x7F27EA00u: goto label_7F27EA00;
    case 0x7F27EA04u: goto label_7F27EA04;
    case 0x7F27EA08u: goto label_7F27EA08;
    case 0x7F27EA0Cu: goto label_7F27EA0C;
    case 0x7F27EA10u: goto label_7F27EA10;
    case 0x7F27EA14u: goto label_7F27EA14;
    case 0x7F27EA18u: goto label_7F27EA18;
    case 0x7F27EA1Cu: goto label_7F27EA1C;
    case 0x7F27EA20u: goto label_7F27EA20;
    case 0x7F27EA24u: goto label_7F27EA24;
    case 0x7F27EA28u: goto label_7F27EA28;
    case 0x7F27EA2Cu: goto label_7F27EA2C;
    case 0x7F27EA30u: goto label_7F27EA30;
    case 0x7F27EA34u: goto label_7F27EA34;
    case 0x7F27EA38u: goto label_7F27EA38;
    case 0x7F27EA3Cu: goto label_7F27EA3C;
    case 0x7F27EA40u: goto label_7F27EA40;
    case 0x7F27EA44u: goto label_7F27EA44;
    case 0x7F27EA48u: goto label_7F27EA48;
    case 0x7F27EA4Cu: goto label_7F27EA4C;
    case 0x7F27EA50u: goto label_7F27EA50;
    case 0x7F27EA54u: goto label_7F27EA54;
    case 0x7F27EA58u: goto label_7F27EA58;
    case 0x7F27EA5Cu: goto label_7F27EA5C;
    case 0x7F27EA60u: goto label_7F27EA60;
    case 0x7F27EA64u: goto label_7F27EA64;
    case 0x7F27EA68u: goto label_7F27EA68;
    case 0x7F27EA6Cu: goto label_7F27EA6C;
    case 0x7F27EA70u: goto label_7F27EA70;
    case 0x7F27EA74u: goto label_7F27EA74;
    case 0x7F27EA78u: goto label_7F27EA78;
    case 0x7F27EA7Cu: goto label_7F27EA7C;
    case 0x7F27EA80u: goto label_7F27EA80;
    case 0x7F27EA84u: goto label_7F27EA84;
    case 0x7F27EA88u: goto label_7F27EA88;
    case 0x7F27EA8Cu: goto label_7F27EA8C;
    case 0x7F27EA90u: goto label_7F27EA90;
    case 0x7F27EA94u: goto label_7F27EA94;
    case 0x7F27EA98u: goto label_7F27EA98;
    case 0x7F27EA9Cu: goto label_7F27EA9C;
    case 0x7F27EAA0u: goto label_7F27EAA0;
    case 0x7F27EAA4u: goto label_7F27EAA4;
    case 0x7F27EAA8u: goto label_7F27EAA8;
    case 0x7F27EAACu: goto label_7F27EAAC;
    case 0x7F27EAB0u: goto label_7F27EAB0;
    case 0x7F27EAB4u: goto label_7F27EAB4;
    case 0x7F27EAB8u: goto label_7F27EAB8;
    case 0x7F27EABCu: goto label_7F27EABC;
    case 0x7F27EAC0u: goto label_7F27EAC0;
    case 0x7F27EAC4u: goto label_7F27EAC4;
    case 0x7F27EAC8u: goto label_7F27EAC8;
    case 0x7F27EACCu: goto label_7F27EACC;
    case 0x7F27EAD0u: goto label_7F27EAD0;
    case 0x7F27EAD4u: goto label_7F27EAD4;
    case 0x7F27EAD8u: goto label_7F27EAD8;
    case 0x7F27EADCu: goto label_7F27EADC;
    case 0x7F27EAE0u: goto label_7F27EAE0;
    case 0x7F27EAE4u: goto label_7F27EAE4;
    case 0x7F27EAE8u: goto label_7F27EAE8;
    case 0x7F27EAECu: goto label_7F27EAEC;
    case 0x7F27EAF0u: goto label_7F27EAF0;
    case 0x7F27EAF4u: goto label_7F27EAF4;
    case 0x7F27EAF8u: goto label_7F27EAF8;
    case 0x7F27EAFCu: goto label_7F27EAFC;
    case 0x7F27EB00u: goto label_7F27EB00;
    case 0x7F27EB04u: goto label_7F27EB04;
    case 0x7F27EB08u: goto label_7F27EB08;
    case 0x7F27EB0Cu: goto label_7F27EB0C;
    case 0x7F27EB10u: goto label_7F27EB10;
    case 0x7F27EB14u: goto label_7F27EB14;
    case 0x7F27EB18u: goto label_7F27EB18;
    case 0x7F27EB1Cu: goto label_7F27EB1C;
    case 0x7F27EB20u: goto label_7F27EB20;
    case 0x7F27EB24u: goto label_7F27EB24;
    case 0x7F27EB28u: goto label_7F27EB28;
    case 0x7F27EB2Cu: goto label_7F27EB2C;
    case 0x7F27EB30u: goto label_7F27EB30;
    case 0x7F27EB34u: goto label_7F27EB34;
    case 0x7F27EB38u: goto label_7F27EB38;
    case 0x7F27EB3Cu: goto label_7F27EB3C;
    case 0x7F27EB40u: goto label_7F27EB40;
    case 0x7F27EB44u: goto label_7F27EB44;
    case 0x7F27EB48u: goto label_7F27EB48;
    case 0x7F27EB4Cu: goto label_7F27EB4C;
    case 0x7F27EB50u: goto label_7F27EB50;
    case 0x7F27EB54u: goto label_7F27EB54;
    case 0x7F27EB58u: goto label_7F27EB58;
    case 0x7F27EB5Cu: goto label_7F27EB5C;
    case 0x7F27EB60u: goto label_7F27EB60;
    case 0x7F27EB64u: goto label_7F27EB64;
    case 0x7F27EB68u: goto label_7F27EB68;
    case 0x7F27EB6Cu: goto label_7F27EB6C;
    case 0x7F27EB70u: goto label_7F27EB70;
    case 0x7F27EB74u: goto label_7F27EB74;
    case 0x7F27EB78u: goto label_7F27EB78;
    case 0x7F27EB7Cu: goto label_7F27EB7C;
    case 0x7F27EB80u: goto label_7F27EB80;
    case 0x7F27EB84u: goto label_7F27EB84;
    case 0x7F27EB88u: goto label_7F27EB88;
    case 0x7F27EB8Cu: goto label_7F27EB8C;
    case 0x7F27EB90u: goto label_7F27EB90;
    case 0x7F27EB94u: goto label_7F27EB94;
    case 0x7F27EB98u: goto label_7F27EB98;
    case 0x7F27EB9Cu: goto label_7F27EB9C;
    case 0x7F27EBA0u: goto label_7F27EBA0;
    case 0x7F27EBA4u: goto label_7F27EBA4;
    case 0x7F27EBA8u: goto label_7F27EBA8;
    case 0x7F27EBACu: goto label_7F27EBAC;
    case 0x7F27EBB0u: goto label_7F27EBB0;
    case 0x7F27EBB4u: goto label_7F27EBB4;
    case 0x7F27EBB8u: goto label_7F27EBB8;
    case 0x7F27EBBCu: goto label_7F27EBBC;
    case 0x7F27EBC0u: goto label_7F27EBC0;
    case 0x7F27EBC4u: goto label_7F27EBC4;
    case 0x7F27EBC8u: goto label_7F27EBC8;
    case 0x7F27EBCCu: goto label_7F27EBCC;
    case 0x7F27EBD0u: goto label_7F27EBD0;
    case 0x7F27EBD4u: goto label_7F27EBD4;
    case 0x7F27EBD8u: goto label_7F27EBD8;
    case 0x7F27EBDCu: goto label_7F27EBDC;
    case 0x7F27EBE0u: goto label_7F27EBE0;
    case 0x7F27EBE4u: goto label_7F27EBE4;
    case 0x7F27EBE8u: goto label_7F27EBE8;
    case 0x7F27EBECu: goto label_7F27EBEC;
    case 0x7F27EBF0u: goto label_7F27EBF0;
    case 0x7F27EBF4u: goto label_7F27EBF4;
    case 0x7F27EBF8u: goto label_7F27EBF8;
    case 0x7F27EBFCu: goto label_7F27EBFC;
    case 0x7F27EC00u: goto label_7F27EC00;
    case 0x7F27EC04u: goto label_7F27EC04;
    case 0x7F27EC08u: goto label_7F27EC08;
    case 0x7F27EC0Cu: goto label_7F27EC0C;
    case 0x7F27EC10u: goto label_7F27EC10;
    case 0x7F27EC14u: goto label_7F27EC14;
    case 0x7F27EC18u: goto label_7F27EC18;
    case 0x7F27EC1Cu: goto label_7F27EC1C;
    case 0x7F27EC20u: goto label_7F27EC20;
    case 0x7F27EC24u: goto label_7F27EC24;
    case 0x7F27EC28u: goto label_7F27EC28;
    case 0x7F27EC2Cu: goto label_7F27EC2C;
    case 0x7F27EC30u: goto label_7F27EC30;
    case 0x7F27EC34u: goto label_7F27EC34;
    case 0x7F27EC38u: goto label_7F27EC38;
    case 0x7F27EC3Cu: goto label_7F27EC3C;
    case 0x7F27EC40u: goto label_7F27EC40;
    case 0x7F27EC44u: goto label_7F27EC44;
    case 0x7F27EC48u: goto label_7F27EC48;
    case 0x7F27EC4Cu: goto label_7F27EC4C;
    case 0x7F27EC50u: goto label_7F27EC50;
    case 0x7F27EC54u: goto label_7F27EC54;
    case 0x7F27EC58u: goto label_7F27EC58;
    case 0x7F27EC5Cu: goto label_7F27EC5C;
    case 0x7F27EC60u: goto label_7F27EC60;
    case 0x7F27EC64u: goto label_7F27EC64;
    case 0x7F27EC68u: goto label_7F27EC68;
    case 0x7F27EC6Cu: goto label_7F27EC6C;
    case 0x7F27EC70u: goto label_7F27EC70;
    case 0x7F27EC74u: goto label_7F27EC74;
    case 0x7F27EC78u: goto label_7F27EC78;
    case 0x7F27EC7Cu: goto label_7F27EC7C;
    case 0x7F27EC80u: goto label_7F27EC80;
    case 0x7F27EC84u: goto label_7F27EC84;
    case 0x7F27EC88u: goto label_7F27EC88;
    case 0x7F27EC8Cu: goto label_7F27EC8C;
    case 0x7F27EC90u: goto label_7F27EC90;
    case 0x7F27EC94u: goto label_7F27EC94;
    case 0x7F27EC98u: goto label_7F27EC98;
    case 0x7F27EC9Cu: goto label_7F27EC9C;
    case 0x7F27ECA0u: goto label_7F27ECA0;
    case 0x7F27ECA4u: goto label_7F27ECA4;
    case 0x7F27ECA8u: goto label_7F27ECA8;
    case 0x7F27ECACu: goto label_7F27ECAC;
    case 0x7F27ECB0u: goto label_7F27ECB0;
    case 0x7F27ECB4u: goto label_7F27ECB4;
    case 0x7F27ECB8u: goto label_7F27ECB8;
    case 0x7F27ECBCu: goto label_7F27ECBC;
    case 0x7F27ECC0u: goto label_7F27ECC0;
    case 0x7F27ECC4u: goto label_7F27ECC4;
    case 0x7F27ECC8u: goto label_7F27ECC8;
    case 0x7F27ECCCu: goto label_7F27ECCC;
    case 0x7F27ECD0u: goto label_7F27ECD0;
    case 0x7F27ECD4u: goto label_7F27ECD4;
    case 0x7F27ECD8u: goto label_7F27ECD8;
    case 0x7F27ECDCu: goto label_7F27ECDC;
    case 0x7F27ECE0u: goto label_7F27ECE0;
    case 0x7F27ECE4u: goto label_7F27ECE4;
    case 0x7F27ECE8u: goto label_7F27ECE8;
    case 0x7F27ECECu: goto label_7F27ECEC;
    case 0x7F27ECF0u: goto label_7F27ECF0;
    case 0x7F27ECF4u: goto label_7F27ECF4;
    case 0x7F27ECF8u: goto label_7F27ECF8;
    case 0x7F27ECFCu: goto label_7F27ECFC;
    case 0x7F27ED00u: goto label_7F27ED00;
    case 0x7F27ED04u: goto label_7F27ED04;
    case 0x7F27ED08u: goto label_7F27ED08;
    case 0x7F27ED0Cu: goto label_7F27ED0C;
    case 0x7F27ED10u: goto label_7F27ED10;
    case 0x7F27ED14u: goto label_7F27ED14;
    case 0x7F27ED18u: goto label_7F27ED18;
    case 0x7F27ED1Cu: goto label_7F27ED1C;
    case 0x7F27ED20u: goto label_7F27ED20;
    case 0x7F27ED24u: goto label_7F27ED24;
    case 0x7F27ED28u: goto label_7F27ED28;
    case 0x7F27ED2Cu: goto label_7F27ED2C;
    case 0x7F27ED30u: goto label_7F27ED30;
    case 0x7F27ED34u: goto label_7F27ED34;
    case 0x7F27ED38u: goto label_7F27ED38;
    case 0x7F27ED3Cu: goto label_7F27ED3C;
    case 0x7F27ED40u: goto label_7F27ED40;
    case 0x7F27ED44u: goto label_7F27ED44;
    case 0x7F27ED48u: goto label_7F27ED48;
    case 0x7F27ED4Cu: goto label_7F27ED4C;
    case 0x7F27ED50u: goto label_7F27ED50;
    case 0x7F27ED54u: goto label_7F27ED54;
    case 0x7F27ED58u: goto label_7F27ED58;
    case 0x7F27ED5Cu: goto label_7F27ED5C;
    case 0x7F27ED60u: goto label_7F27ED60;
    case 0x7F27ED64u: goto label_7F27ED64;
    case 0x7F27ED68u: goto label_7F27ED68;
    case 0x7F27ED6Cu: goto label_7F27ED6C;
    case 0x7F27ED70u: goto label_7F27ED70;
    case 0x7F27ED74u: goto label_7F27ED74;
    case 0x7F27ED78u: goto label_7F27ED78;
    case 0x7F27ED7Cu: goto label_7F27ED7C;
    case 0x7F27ED80u: goto label_7F27ED80;
    case 0x7F27ED84u: goto label_7F27ED84;
    case 0x7F27ED88u: goto label_7F27ED88;
    case 0x7F27ED8Cu: goto label_7F27ED8C;
    case 0x7F27ED90u: goto label_7F27ED90;
    case 0x7F27ED94u: goto label_7F27ED94;
    case 0x7F27ED98u: goto label_7F27ED98;
    case 0x7F27ED9Cu: goto label_7F27ED9C;
    case 0x7F27EDA0u: goto label_7F27EDA0;
    case 0x7F27EDA4u: goto label_7F27EDA4;
    case 0x7F27EDA8u: goto label_7F27EDA8;
    case 0x7F27EDACu: goto label_7F27EDAC;
    case 0x7F27EDB0u: goto label_7F27EDB0;
    case 0x7F27EDB4u: goto label_7F27EDB4;
    case 0x7F27EDB8u: goto label_7F27EDB8;
    case 0x7F27EDBCu: goto label_7F27EDBC;
    case 0x7F27EDC0u: goto label_7F27EDC0;
    case 0x7F27EDC4u: goto label_7F27EDC4;
    case 0x7F27EDC8u: goto label_7F27EDC8;
    case 0x7F27EDCCu: goto label_7F27EDCC;
    case 0x7F27EDD0u: goto label_7F27EDD0;
    case 0x7F27EDD4u: goto label_7F27EDD4;
    case 0x7F27EDD8u: goto label_7F27EDD8;
    case 0x7F27EDDCu: goto label_7F27EDDC;
    case 0x7F27EDE0u: goto label_7F27EDE0;
    case 0x7F27EDE4u: goto label_7F27EDE4;
    case 0x7F27EDE8u: goto label_7F27EDE8;
    case 0x7F27EDECu: goto label_7F27EDEC;
    case 0x7F27EDF0u: goto label_7F27EDF0;
    case 0x7F27EDF4u: goto label_7F27EDF4;
    case 0x7F27EDF8u: goto label_7F27EDF8;
    case 0x7F27EDFCu: goto label_7F27EDFC;
    case 0x7F27EE00u: goto label_7F27EE00;
    case 0x7F27EE04u: goto label_7F27EE04;
    case 0x7F27EE08u: goto label_7F27EE08;
    case 0x7F27EE0Cu: goto label_7F27EE0C;
    case 0x7F27EE10u: goto label_7F27EE10;
    case 0x7F27EE14u: goto label_7F27EE14;
    case 0x7F27EE18u: goto label_7F27EE18;
    case 0x7F27EE1Cu: goto label_7F27EE1C;
    case 0x7F27EE20u: goto label_7F27EE20;
    case 0x7F27EE24u: goto label_7F27EE24;
    case 0x7F27EE28u: goto label_7F27EE28;
    case 0x7F27EE2Cu: goto label_7F27EE2C;
    case 0x7F27EE30u: goto label_7F27EE30;
    case 0x7F27EE34u: goto label_7F27EE34;
    case 0x7F27EE38u: goto label_7F27EE38;
    case 0x7F27EE3Cu: goto label_7F27EE3C;
    case 0x7F27EE40u: goto label_7F27EE40;
    case 0x7F27EE44u: goto label_7F27EE44;
    case 0x7F27EE48u: goto label_7F27EE48;
    case 0x7F27EE4Cu: goto label_7F27EE4C;
    case 0x7F27EE50u: goto label_7F27EE50;
    case 0x7F27EE54u: goto label_7F27EE54;
    case 0x7F27EE58u: goto label_7F27EE58;
    case 0x7F27EE5Cu: goto label_7F27EE5C;
    case 0x7F27EE60u: goto label_7F27EE60;
    case 0x7F27EE64u: goto label_7F27EE64;
    case 0x7F27EE68u: goto label_7F27EE68;
    case 0x7F27EE6Cu: goto label_7F27EE6C;
    case 0x7F27EE70u: goto label_7F27EE70;
    case 0x7F27EE74u: goto label_7F27EE74;
    case 0x7F27EE78u: goto label_7F27EE78;
    case 0x7F27EE7Cu: goto label_7F27EE7C;
    case 0x7F27EE80u: goto label_7F27EE80;
    case 0x7F27EE84u: goto label_7F27EE84;
    case 0x7F27EE88u: goto label_7F27EE88;
    case 0x7F27EE8Cu: goto label_7F27EE8C;
    case 0x7F27EE90u: goto label_7F27EE90;
    case 0x7F27EE94u: goto label_7F27EE94;
    case 0x7F27EE98u: goto label_7F27EE98;
    case 0x7F27EE9Cu: goto label_7F27EE9C;
    case 0x7F27EEA0u: goto label_7F27EEA0;
    case 0x7F27EEA4u: goto label_7F27EEA4;
    case 0x7F27EEA8u: goto label_7F27EEA8;
    case 0x7F27EEACu: goto label_7F27EEAC;
    case 0x7F27EEB0u: goto label_7F27EEB0;
    case 0x7F27EEB4u: goto label_7F27EEB4;
    case 0x7F27EEB8u: goto label_7F27EEB8;
    case 0x7F27EEBCu: goto label_7F27EEBC;
    case 0x7F27EEC0u: goto label_7F27EEC0;
    case 0x7F27EEC4u: goto label_7F27EEC4;
    case 0x7F27EEC8u: goto label_7F27EEC8;
    case 0x7F27EECCu: goto label_7F27EECC;
    case 0x7F27EED0u: goto label_7F27EED0;
    case 0x7F27EED4u: goto label_7F27EED4;
    case 0x7F27EED8u: goto label_7F27EED8;
    case 0x7F27EEDCu: goto label_7F27EEDC;
    case 0x7F27EEE0u: goto label_7F27EEE0;
    case 0x7F27EEE4u: goto label_7F27EEE4;
    case 0x7F27EEE8u: goto label_7F27EEE8;
    case 0x7F27EEECu: goto label_7F27EEEC;
    case 0x7F27EEF0u: goto label_7F27EEF0;
    case 0x7F27EEF4u: goto label_7F27EEF4;
    case 0x7F27EEF8u: goto label_7F27EEF8;
    case 0x7F27EEFCu: goto label_7F27EEFC;
    case 0x7F27EF00u: goto label_7F27EF00;
    case 0x7F27EF04u: goto label_7F27EF04;
    case 0x7F27EF08u: goto label_7F27EF08;
    case 0x7F27EF0Cu: goto label_7F27EF0C;
    case 0x7F27EF10u: goto label_7F27EF10;
    case 0x7F27EF14u: goto label_7F27EF14;
    case 0x7F27EF18u: goto label_7F27EF18;
    case 0x7F27EF1Cu: goto label_7F27EF1C;
    case 0x7F27EF20u: goto label_7F27EF20;
    case 0x7F27EF24u: goto label_7F27EF24;
    case 0x7F27EF28u: goto label_7F27EF28;
    case 0x7F27EF2Cu: goto label_7F27EF2C;
    case 0x7F27EF30u: goto label_7F27EF30;
    case 0x7F27EF34u: goto label_7F27EF34;
    case 0x7F27EF38u: goto label_7F27EF38;
    case 0x7F27EF3Cu: goto label_7F27EF3C;
    case 0x7F27EF40u: goto label_7F27EF40;
    case 0x7F27EF44u: goto label_7F27EF44;
    case 0x7F27EF48u: goto label_7F27EF48;
    case 0x7F27EF4Cu: goto label_7F27EF4C;
    case 0x7F27EF50u: goto label_7F27EF50;
    case 0x7F27EF54u: goto label_7F27EF54;
    case 0x7F27EF58u: goto label_7F27EF58;
    case 0x7F27EF5Cu: goto label_7F27EF5C;
    case 0x7F27EF60u: goto label_7F27EF60;
    case 0x7F27EF64u: goto label_7F27EF64;
    case 0x7F27EF68u: goto label_7F27EF68;
    case 0x7F27EF6Cu: goto label_7F27EF6C;
    case 0x7F27EF70u: goto label_7F27EF70;
    case 0x7F27EF74u: goto label_7F27EF74;
    case 0x7F27EF78u: goto label_7F27EF78;
    case 0x7F27EF7Cu: goto label_7F27EF7C;
    case 0x7F27EF80u: goto label_7F27EF80;
    case 0x7F27EF84u: goto label_7F27EF84;
    case 0x7F27EF88u: goto label_7F27EF88;
    case 0x7F27EF8Cu: goto label_7F27EF8C;
    case 0x7F27EF90u: goto label_7F27EF90;
    case 0x7F27EF94u: goto label_7F27EF94;
    case 0x7F27EF98u: goto label_7F27EF98;
    case 0x7F27EF9Cu: goto label_7F27EF9C;
    case 0x7F27EFA0u: goto label_7F27EFA0;
    case 0x7F27EFA4u: goto label_7F27EFA4;
    case 0x7F27EFA8u: goto label_7F27EFA8;
    case 0x7F27EFACu: goto label_7F27EFAC;
    case 0x7F27EFB0u: goto label_7F27EFB0;
    case 0x7F27EFB4u: goto label_7F27EFB4;
    case 0x7F27EFB8u: goto label_7F27EFB8;
    case 0x7F27EFBCu: goto label_7F27EFBC;
    case 0x7F27EFC0u: goto label_7F27EFC0;
    case 0x7F27EFC4u: goto label_7F27EFC4;
    case 0x7F27EFC8u: goto label_7F27EFC8;
    case 0x7F27EFCCu: goto label_7F27EFCC;
    case 0x7F27EFD0u: goto label_7F27EFD0;
    case 0x7F27EFD4u: goto label_7F27EFD4;
    case 0x7F27EFD8u: goto label_7F27EFD8;
    case 0x7F27EFDCu: goto label_7F27EFDC;
    case 0x7F27EFE0u: goto label_7F27EFE0;
    case 0x7F27EFE4u: goto label_7F27EFE4;
    case 0x7F27EFE8u: goto label_7F27EFE8;
    case 0x7F27EFECu: goto label_7F27EFEC;
    case 0x7F27EFF0u: goto label_7F27EFF0;
    case 0x7F27EFF4u: goto label_7F27EFF4;
    case 0x7F27EFF8u: goto label_7F27EFF8;
    case 0x7F27EFFCu: goto label_7F27EFFC;
    case 0x7F27F000u: goto label_7F27F000;
    case 0x7F27F004u: goto label_7F27F004;
    case 0x7F27F008u: goto label_7F27F008;
    case 0x7F27F00Cu: goto label_7F27F00C;
    case 0x7F27F010u: goto label_7F27F010;
    case 0x7F27F014u: goto label_7F27F014;
    case 0x7F27F018u: goto label_7F27F018;
    case 0x7F27F01Cu: goto label_7F27F01C;
    case 0x7F27F020u: goto label_7F27F020;
    case 0x7F27F024u: goto label_7F27F024;
    case 0x7F27F028u: goto label_7F27F028;
    case 0x7F27F02Cu: goto label_7F27F02C;
    case 0x7F27F030u: goto label_7F27F030;
    case 0x7F27F034u: goto label_7F27F034;
    case 0x7F27F038u: goto label_7F27F038;
    case 0x7F27F03Cu: goto label_7F27F03C;
    case 0x7F27F040u: goto label_7F27F040;
    case 0x7F27F044u: goto label_7F27F044;
    case 0x7F27F048u: goto label_7F27F048;
    case 0x7F27F04Cu: goto label_7F27F04C;
    case 0x7F27F050u: goto label_7F27F050;
    case 0x7F27F054u: goto label_7F27F054;
    case 0x7F27F058u: goto label_7F27F058;
    case 0x7F27F05Cu: goto label_7F27F05C;
    case 0x7F27F060u: goto label_7F27F060;
    case 0x7F27F064u: goto label_7F27F064;
    case 0x7F27F068u: goto label_7F27F068;
    case 0x7F27F06Cu: goto label_7F27F06C;
    case 0x7F27F070u: goto label_7F27F070;
    case 0x7F27F074u: goto label_7F27F074;
    case 0x7F27F078u: goto label_7F27F078;
    case 0x7F27F07Cu: goto label_7F27F07C;
    case 0x7F27F080u: goto label_7F27F080;
    case 0x7F27F084u: goto label_7F27F084;
    case 0x7F27F088u: goto label_7F27F088;
    case 0x7F27F08Cu: goto label_7F27F08C;
    case 0x7F27F090u: goto label_7F27F090;
    case 0x7F27F094u: goto label_7F27F094;
    case 0x7F27F098u: goto label_7F27F098;
    case 0x7F27F09Cu: goto label_7F27F09C;
    case 0x7F27F0A0u: goto label_7F27F0A0;
    case 0x7F27F0A4u: goto label_7F27F0A4;
    case 0x7F27F0A8u: goto label_7F27F0A8;
    case 0x7F27F0ACu: goto label_7F27F0AC;
    case 0x7F27F0B0u: goto label_7F27F0B0;
    case 0x7F27F0B4u: goto label_7F27F0B4;
    case 0x7F27F0B8u: goto label_7F27F0B8;
    case 0x7F27F0BCu: goto label_7F27F0BC;
    case 0x7F27F0C0u: goto label_7F27F0C0;
    case 0x7F27F0C4u: goto label_7F27F0C4;
    case 0x7F27F0C8u: goto label_7F27F0C8;
    case 0x7F27F0CCu: goto label_7F27F0CC;
    case 0x7F27F0D0u: goto label_7F27F0D0;
    case 0x7F27F0D4u: goto label_7F27F0D4;
    case 0x7F27F0D8u: goto label_7F27F0D8;
    case 0x7F27F0DCu: goto label_7F27F0DC;
    case 0x7F27F0E0u: goto label_7F27F0E0;
    case 0x7F27F0E4u: goto label_7F27F0E4;
    case 0x7F27F0E8u: goto label_7F27F0E8;
    case 0x7F27F0ECu: goto label_7F27F0EC;
    case 0x7F27F0F0u: goto label_7F27F0F0;
    case 0x7F27F0F4u: goto label_7F27F0F4;
    case 0x7F27F0F8u: goto label_7F27F0F8;
    case 0x7F27F0FCu: goto label_7F27F0FC;
    case 0x7F27F100u: goto label_7F27F100;
    case 0x7F27F104u: goto label_7F27F104;
    case 0x7F27F108u: goto label_7F27F108;
    case 0x7F27F10Cu: goto label_7F27F10C;
    case 0x7F27F110u: goto label_7F27F110;
    case 0x7F27F114u: goto label_7F27F114;
    case 0x7F27F118u: goto label_7F27F118;
    case 0x7F27F11Cu: goto label_7F27F11C;
    case 0x7F27F120u: goto label_7F27F120;
    case 0x7F27F124u: goto label_7F27F124;
    case 0x7F27F128u: goto label_7F27F128;
    case 0x7F27F12Cu: goto label_7F27F12C;
    case 0x7F27F130u: goto label_7F27F130;
    case 0x7F27F134u: goto label_7F27F134;
    case 0x7F27F138u: goto label_7F27F138;
    case 0x7F27F13Cu: goto label_7F27F13C;
    case 0x7F27F140u: goto label_7F27F140;
    case 0x7F27F144u: goto label_7F27F144;
    case 0x7F27F148u: goto label_7F27F148;
    case 0x7F27F14Cu: goto label_7F27F14C;
    case 0x7F27F150u: goto label_7F27F150;
    case 0x7F27F154u: goto label_7F27F154;
    case 0x7F27F158u: goto label_7F27F158;
    case 0x7F27F15Cu: goto label_7F27F15C;
    case 0x7F27F160u: goto label_7F27F160;
    case 0x7F27F164u: goto label_7F27F164;
    case 0x7F27F168u: goto label_7F27F168;
    case 0x7F27F16Cu: goto label_7F27F16C;
    case 0x7F27F170u: goto label_7F27F170;
    case 0x7F27F174u: goto label_7F27F174;
    case 0x7F27F178u: goto label_7F27F178;
    case 0x7F27F17Cu: goto label_7F27F17C;
    case 0x7F27F180u: goto label_7F27F180;
    case 0x7F27F184u: goto label_7F27F184;
    case 0x7F27F188u: goto label_7F27F188;
    case 0x7F27F18Cu: goto label_7F27F18C;
    case 0x7F27F190u: goto label_7F27F190;
    case 0x7F27F194u: goto label_7F27F194;
    case 0x7F27F198u: goto label_7F27F198;
    case 0x7F27F19Cu: goto label_7F27F19C;
    case 0x7F27F1A0u: goto label_7F27F1A0;
    case 0x7F27F1A4u: goto label_7F27F1A4;
    case 0x7F27F1A8u: goto label_7F27F1A8;
    case 0x7F27F1ACu: goto label_7F27F1AC;
    case 0x7F27F1B0u: goto label_7F27F1B0;
    case 0x7F27F1B4u: goto label_7F27F1B4;
    case 0x7F27F1B8u: goto label_7F27F1B8;
    case 0x7F27F1BCu: goto label_7F27F1BC;
    case 0x7F27F1C0u: goto label_7F27F1C0;
    case 0x7F27F1C4u: goto label_7F27F1C4;
    case 0x7F27F1C8u: goto label_7F27F1C8;
    case 0x7F27F1CCu: goto label_7F27F1CC;
    case 0x7F27F1D0u: goto label_7F27F1D0;
    case 0x7F27F1D4u: goto label_7F27F1D4;
    case 0x7F27F1D8u: goto label_7F27F1D8;
    case 0x7F27F1DCu: goto label_7F27F1DC;
    case 0x7F27F1E0u: goto label_7F27F1E0;
    case 0x7F27F1E4u: goto label_7F27F1E4;
    case 0x7F27F1E8u: goto label_7F27F1E8;
    case 0x7F27F1ECu: goto label_7F27F1EC;
    case 0x7F27F1F0u: goto label_7F27F1F0;
    case 0x7F27F1F4u: goto label_7F27F1F4;
    case 0x7F27F1F8u: goto label_7F27F1F8;
    case 0x7F27F1FCu: goto label_7F27F1FC;
    case 0x7F27F200u: goto label_7F27F200;
    case 0x7F27F204u: goto label_7F27F204;
    case 0x7F27F208u: goto label_7F27F208;
    case 0x7F27F20Cu: goto label_7F27F20C;
    case 0x7F27F210u: goto label_7F27F210;
    case 0x7F27F214u: goto label_7F27F214;
    case 0x7F27F218u: goto label_7F27F218;
    case 0x7F27F21Cu: goto label_7F27F21C;
    case 0x7F27F220u: goto label_7F27F220;
    case 0x7F27F224u: goto label_7F27F224;
    case 0x7F27F228u: goto label_7F27F228;
    case 0x7F27F22Cu: goto label_7F27F22C;
    case 0x7F27F230u: goto label_7F27F230;
    case 0x7F27F234u: goto label_7F27F234;
    case 0x7F27F238u: goto label_7F27F238;
    case 0x7F27F23Cu: goto label_7F27F23C;
    case 0x7F27F240u: goto label_7F27F240;
    case 0x7F27F244u: goto label_7F27F244;
    case 0x7F27F248u: goto label_7F27F248;
    case 0x7F27F24Cu: goto label_7F27F24C;
    case 0x7F27F250u: goto label_7F27F250;
    case 0x7F27F254u: goto label_7F27F254;
    case 0x7F27F258u: goto label_7F27F258;
    case 0x7F27F25Cu: goto label_7F27F25C;
    case 0x7F27F260u: goto label_7F27F260;
    case 0x7F27F264u: goto label_7F27F264;
    case 0x7F27F268u: goto label_7F27F268;
    case 0x7F27F26Cu: goto label_7F27F26C;
    case 0x7F27F270u: goto label_7F27F270;
    case 0x7F27F274u: goto label_7F27F274;
    case 0x7F27F278u: goto label_7F27F278;
    case 0x7F27F27Cu: goto label_7F27F27C;
    case 0x7F27F280u: goto label_7F27F280;
    case 0x7F27F284u: goto label_7F27F284;
    case 0x7F27F288u: goto label_7F27F288;
    case 0x7F27F28Cu: goto label_7F27F28C;
    case 0x7F27F290u: goto label_7F27F290;
    case 0x7F27F294u: goto label_7F27F294;
    case 0x7F27F298u: goto label_7F27F298;
    case 0x7F27F29Cu: goto label_7F27F29C;
    case 0x7F27F2A0u: goto label_7F27F2A0;
    case 0x7F27F2A4u: goto label_7F27F2A4;
    case 0x7F27F2A8u: goto label_7F27F2A8;
    case 0x7F27F2ACu: goto label_7F27F2AC;
    case 0x7F27F2B0u: goto label_7F27F2B0;
    case 0x7F27F2B4u: goto label_7F27F2B4;
    case 0x7F27F2B8u: goto label_7F27F2B8;
    case 0x7F27F2BCu: goto label_7F27F2BC;
    case 0x7F27F2C0u: goto label_7F27F2C0;
    case 0x7F27F2C4u: goto label_7F27F2C4;
    case 0x7F27F2C8u: goto label_7F27F2C8;
    case 0x7F27F2CCu: goto label_7F27F2CC;
    case 0x7F27F2D0u: goto label_7F27F2D0;
    case 0x7F27F2D4u: goto label_7F27F2D4;
    case 0x7F27F2D8u: goto label_7F27F2D8;
    case 0x7F27F2DCu: goto label_7F27F2DC;
    case 0x7F27F2E0u: goto label_7F27F2E0;
    case 0x7F27F2E4u: goto label_7F27F2E4;
    case 0x7F27F2E8u: goto label_7F27F2E8;
    case 0x7F27F2ECu: goto label_7F27F2EC;
    case 0x7F27F2F0u: goto label_7F27F2F0;
    case 0x7F27F2F4u: goto label_7F27F2F4;
    case 0x7F27F2F8u: goto label_7F27F2F8;
    case 0x7F27F2FCu: goto label_7F27F2FC;
    case 0x7F27F300u: goto label_7F27F300;
    case 0x7F27F304u: goto label_7F27F304;
    case 0x7F27F308u: goto label_7F27F308;
    case 0x7F27F30Cu: goto label_7F27F30C;
    case 0x7F27F310u: goto label_7F27F310;
    case 0x7F27F314u: goto label_7F27F314;
    case 0x7F27F318u: goto label_7F27F318;
    case 0x7F27F31Cu: goto label_7F27F31C;
    case 0x7F27F320u: goto label_7F27F320;
    case 0x7F27F324u: goto label_7F27F324;
    case 0x7F27F328u: goto label_7F27F328;
    case 0x7F27F32Cu: goto label_7F27F32C;
    case 0x7F27F330u: goto label_7F27F330;
    case 0x7F27F334u: goto label_7F27F334;
    case 0x7F27F338u: goto label_7F27F338;
    case 0x7F27F33Cu: goto label_7F27F33C;
    case 0x7F27F340u: goto label_7F27F340;
    case 0x7F27F344u: goto label_7F27F344;
    case 0x7F27F348u: goto label_7F27F348;
    case 0x7F27F34Cu: goto label_7F27F34C;
    case 0x7F27F350u: goto label_7F27F350;
    case 0x7F27F354u: goto label_7F27F354;
    case 0x7F27F358u: goto label_7F27F358;
    case 0x7F27F35Cu: goto label_7F27F35C;
    case 0x7F27F360u: goto label_7F27F360;
    case 0x7F27F364u: goto label_7F27F364;
    case 0x7F27F368u: goto label_7F27F368;
    case 0x7F27F36Cu: goto label_7F27F36C;
    case 0x7F27F370u: goto label_7F27F370;
    case 0x7F27F374u: goto label_7F27F374;
    case 0x7F27F378u: goto label_7F27F378;
    case 0x7F27F37Cu: goto label_7F27F37C;
    case 0x7F27F380u: goto label_7F27F380;
    case 0x7F27F384u: goto label_7F27F384;
    case 0x7F27F388u: goto label_7F27F388;
    case 0x7F27F38Cu: goto label_7F27F38C;
    case 0x7F27F390u: goto label_7F27F390;
    case 0x7F27F394u: goto label_7F27F394;
    case 0x7F27F398u: goto label_7F27F398;
    case 0x7F27F39Cu: goto label_7F27F39C;
    case 0x7F27F3A0u: goto label_7F27F3A0;
    case 0x7F27F3A4u: goto label_7F27F3A4;
    case 0x7F27F3A8u: goto label_7F27F3A8;
    case 0x7F27F3ACu: goto label_7F27F3AC;
    case 0x7F27F3B0u: goto label_7F27F3B0;
    case 0x7F27F3B4u: goto label_7F27F3B4;
    case 0x7F27F3B8u: goto label_7F27F3B8;
    case 0x7F27F3BCu: goto label_7F27F3BC;
    case 0x7F27F3C0u: goto label_7F27F3C0;
    case 0x7F27F3C4u: goto label_7F27F3C4;
    case 0x7F27F3C8u: goto label_7F27F3C8;
    case 0x7F27F3CCu: goto label_7F27F3CC;
    case 0x7F27F3D0u: goto label_7F27F3D0;
    case 0x7F27F3D4u: goto label_7F27F3D4;
    case 0x7F27F3D8u: goto label_7F27F3D8;
    case 0x7F27F3DCu: goto label_7F27F3DC;
    case 0x7F27F3E0u: goto label_7F27F3E0;
    case 0x7F27F3E4u: goto label_7F27F3E4;
    case 0x7F27F3E8u: goto label_7F27F3E8;
    case 0x7F27F3ECu: goto label_7F27F3EC;
    case 0x7F27F3F0u: goto label_7F27F3F0;
    case 0x7F27F3F4u: goto label_7F27F3F4;
    case 0x7F27F3F8u: goto label_7F27F3F8;
    case 0x7F27F3FCu: goto label_7F27F3FC;
    case 0x7F27F400u: goto label_7F27F400;
    case 0x7F27F404u: goto label_7F27F404;
    case 0x7F27F408u: goto label_7F27F408;
    case 0x7F27F40Cu: goto label_7F27F40C;
    case 0x7F27F410u: goto label_7F27F410;
    case 0x7F27F414u: goto label_7F27F414;
    case 0x7F27F418u: goto label_7F27F418;
    case 0x7F27F41Cu: goto label_7F27F41C;
    case 0x7F27F420u: goto label_7F27F420;
    case 0x7F27F424u: goto label_7F27F424;
    case 0x7F27F428u: goto label_7F27F428;
    case 0x7F27F42Cu: goto label_7F27F42C;
    case 0x7F27F430u: goto label_7F27F430;
    case 0x7F27F434u: goto label_7F27F434;
    case 0x7F27F438u: goto label_7F27F438;
    case 0x7F27F43Cu: goto label_7F27F43C;
    case 0x7F27F440u: goto label_7F27F440;
    case 0x7F27F444u: goto label_7F27F444;
    case 0x7F27F448u: goto label_7F27F448;
    case 0x7F27F44Cu: goto label_7F27F44C;
    case 0x7F27F450u: goto label_7F27F450;
    case 0x7F27F454u: goto label_7F27F454;
    case 0x7F27F458u: goto label_7F27F458;
    case 0x7F27F45Cu: goto label_7F27F45C;
    case 0x7F27F460u: goto label_7F27F460;
    case 0x7F27F464u: goto label_7F27F464;
    case 0x7F27F468u: goto label_7F27F468;
    case 0x7F27F46Cu: goto label_7F27F46C;
    case 0x7F27F470u: goto label_7F27F470;
    case 0x7F27F474u: goto label_7F27F474;
    case 0x7F27F478u: goto label_7F27F478;
    case 0x7F27F47Cu: goto label_7F27F47C;
    case 0x7F27F480u: goto label_7F27F480;
    case 0x7F27F484u: goto label_7F27F484;
    case 0x7F27F488u: goto label_7F27F488;
    case 0x7F27F48Cu: goto label_7F27F48C;
    case 0x7F27F490u: goto label_7F27F490;
    case 0x7F27F494u: goto label_7F27F494;
    case 0x7F27F498u: goto label_7F27F498;
    case 0x7F27F49Cu: goto label_7F27F49C;
    case 0x7F27F4A0u: goto label_7F27F4A0;
    case 0x7F27F4A4u: goto label_7F27F4A4;
    case 0x7F27F4A8u: goto label_7F27F4A8;
    case 0x7F27F4ACu: goto label_7F27F4AC;
    case 0x7F27F4B0u: goto label_7F27F4B0;
    case 0x7F27F4B4u: goto label_7F27F4B4;
    case 0x7F27F4B8u: goto label_7F27F4B8;
    case 0x7F27F4BCu: goto label_7F27F4BC;
    case 0x7F27F4C0u: goto label_7F27F4C0;
    case 0x7F27F4C4u: goto label_7F27F4C4;
    case 0x7F27F4C8u: goto label_7F27F4C8;
    case 0x7F27F4CCu: goto label_7F27F4CC;
    case 0x7F27F4D0u: goto label_7F27F4D0;
    case 0x7F27F4D4u: goto label_7F27F4D4;
    case 0x7F27F4D8u: goto label_7F27F4D8;
    case 0x7F27F4DCu: goto label_7F27F4DC;
    case 0x7F27F4E0u: goto label_7F27F4E0;
    case 0x7F27F4E4u: goto label_7F27F4E4;
    case 0x7F27F4E8u: goto label_7F27F4E8;
    case 0x7F27F4ECu: goto label_7F27F4EC;
    case 0x7F27F4F0u: goto label_7F27F4F0;
    case 0x7F27F4F4u: goto label_7F27F4F4;
    case 0x7F27F4F8u: goto label_7F27F4F8;
    case 0x7F27F4FCu: goto label_7F27F4FC;
    case 0x7F27F500u: goto label_7F27F500;
    case 0x7F27F504u: goto label_7F27F504;
    case 0x7F27F508u: goto label_7F27F508;
    case 0x7F27F50Cu: goto label_7F27F50C;
    case 0x7F27F510u: goto label_7F27F510;
    case 0x7F27F514u: goto label_7F27F514;
    case 0x7F27F518u: goto label_7F27F518;
    case 0x7F27F51Cu: goto label_7F27F51C;
    case 0x7F27F520u: goto label_7F27F520;
    case 0x7F27F524u: goto label_7F27F524;
    case 0x7F27F528u: goto label_7F27F528;
    case 0x7F27F52Cu: goto label_7F27F52C;
    case 0x7F27F530u: goto label_7F27F530;
    case 0x7F27F534u: goto label_7F27F534;
    case 0x7F27F538u: goto label_7F27F538;
    case 0x7F27F53Cu: goto label_7F27F53C;
    case 0x7F27F540u: goto label_7F27F540;
    case 0x7F27F544u: goto label_7F27F544;
    case 0x7F27F548u: goto label_7F27F548;
    case 0x7F27F54Cu: goto label_7F27F54C;
    case 0x7F27F550u: goto label_7F27F550;
    case 0x7F27F554u: goto label_7F27F554;
    case 0x7F27F558u: goto label_7F27F558;
    case 0x7F27F55Cu: goto label_7F27F55C;
    case 0x7F27F560u: goto label_7F27F560;
    case 0x7F27F564u: goto label_7F27F564;
    case 0x7F27F568u: goto label_7F27F568;
    case 0x7F27F56Cu: goto label_7F27F56C;
    case 0x7F27F570u: goto label_7F27F570;
    case 0x7F27F574u: goto label_7F27F574;
    case 0x7F27F578u: goto label_7F27F578;
    case 0x7F27F57Cu: goto label_7F27F57C;
    case 0x7F27F580u: goto label_7F27F580;
    case 0x7F27F584u: goto label_7F27F584;
    case 0x7F27F588u: goto label_7F27F588;
    case 0x7F27F58Cu: goto label_7F27F58C;
    case 0x7F27F590u: goto label_7F27F590;
    case 0x7F27F594u: goto label_7F27F594;
    case 0x7F27F598u: goto label_7F27F598;
    case 0x7F27F59Cu: goto label_7F27F59C;
    case 0x7F27F5A0u: goto label_7F27F5A0;
    case 0x7F27F5A4u: goto label_7F27F5A4;
    case 0x7F27F5A8u: goto label_7F27F5A8;
    case 0x7F27F5ACu: goto label_7F27F5AC;
    case 0x7F27F5B0u: goto label_7F27F5B0;
    case 0x7F27F5B4u: goto label_7F27F5B4;
    case 0x7F27F5B8u: goto label_7F27F5B8;
    case 0x7F27F5BCu: goto label_7F27F5BC;
    case 0x7F27F5C0u: goto label_7F27F5C0;
    case 0x7F27F5C4u: goto label_7F27F5C4;
    case 0x7F27F5C8u: goto label_7F27F5C8;
    case 0x7F27F5CCu: goto label_7F27F5CC;
    case 0x7F27F5D0u: goto label_7F27F5D0;
    case 0x7F27F5D4u: goto label_7F27F5D4;
    case 0x7F27F5D8u: goto label_7F27F5D8;
    case 0x7F27F5DCu: goto label_7F27F5DC;
    case 0x7F27F5E0u: goto label_7F27F5E0;
    case 0x7F27F5E4u: goto label_7F27F5E4;
    case 0x7F27F5E8u: goto label_7F27F5E8;
    case 0x7F27F5ECu: goto label_7F27F5EC;
    case 0x7F27F5F0u: goto label_7F27F5F0;
    case 0x7F27F5F4u: goto label_7F27F5F4;
    case 0x7F27F5F8u: goto label_7F27F5F8;
    case 0x7F27F5FCu: goto label_7F27F5FC;
    case 0x7F27F600u: goto label_7F27F600;
    case 0x7F27F604u: goto label_7F27F604;
    case 0x7F27F608u: goto label_7F27F608;
    case 0x7F27F60Cu: goto label_7F27F60C;
    case 0x7F27F610u: goto label_7F27F610;
    case 0x7F27F614u: goto label_7F27F614;
    case 0x7F27F618u: goto label_7F27F618;
    case 0x7F27F61Cu: goto label_7F27F61C;
    case 0x7F27F620u: goto label_7F27F620;
    case 0x7F27F624u: goto label_7F27F624;
    case 0x7F27F628u: goto label_7F27F628;
    case 0x7F27F62Cu: goto label_7F27F62C;
    case 0x7F27F630u: goto label_7F27F630;
    case 0x7F27F634u: goto label_7F27F634;
    case 0x7F27F638u: goto label_7F27F638;
    case 0x7F27F63Cu: goto label_7F27F63C;
    case 0x7F27F640u: goto label_7F27F640;
    case 0x7F27F644u: goto label_7F27F644;
    case 0x7F27F648u: goto label_7F27F648;
    case 0x7F27F64Cu: goto label_7F27F64C;
    case 0x7F27F650u: goto label_7F27F650;
    case 0x7F27F654u: goto label_7F27F654;
    case 0x7F27F658u: goto label_7F27F658;
    case 0x7F27F65Cu: goto label_7F27F65C;
    case 0x7F27F660u: goto label_7F27F660;
    case 0x7F27F664u: goto label_7F27F664;
    case 0x7F27F668u: goto label_7F27F668;
    case 0x7F27F66Cu: goto label_7F27F66C;
    case 0x7F27F670u: goto label_7F27F670;
    case 0x7F27F674u: goto label_7F27F674;
    case 0x7F27F678u: goto label_7F27F678;
    case 0x7F27F67Cu: goto label_7F27F67C;
    case 0x7F27F680u: goto label_7F27F680;
    case 0x7F27F684u: goto label_7F27F684;
    case 0x7F27F688u: goto label_7F27F688;
    case 0x7F27F68Cu: goto label_7F27F68C;
    case 0x7F27F690u: goto label_7F27F690;
    case 0x7F27F694u: goto label_7F27F694;
    case 0x7F27F698u: goto label_7F27F698;
    case 0x7F27F69Cu: goto label_7F27F69C;
    case 0x7F27F6A0u: goto label_7F27F6A0;
    case 0x7F27F6A4u: goto label_7F27F6A4;
    case 0x7F27F6A8u: goto label_7F27F6A8;
    case 0x7F27F6ACu: goto label_7F27F6AC;
    case 0x7F27F6B0u: goto label_7F27F6B0;
    case 0x7F27F6B4u: goto label_7F27F6B4;
    case 0x7F27F6B8u: goto label_7F27F6B8;
    case 0x7F27F6BCu: goto label_7F27F6BC;
    case 0x7F27F6C0u: goto label_7F27F6C0;
    case 0x7F27F6C4u: goto label_7F27F6C4;
    case 0x7F27F6C8u: goto label_7F27F6C8;
    case 0x7F27F6CCu: goto label_7F27F6CC;
    case 0x7F27F6D0u: goto label_7F27F6D0;
    case 0x7F27F6D4u: goto label_7F27F6D4;
    case 0x7F27F6D8u: goto label_7F27F6D8;
    case 0x7F27F6DCu: goto label_7F27F6DC;
    case 0x7F27F6E0u: goto label_7F27F6E0;
    case 0x7F27F6E4u: goto label_7F27F6E4;
    case 0x7F27F6E8u: goto label_7F27F6E8;
    case 0x7F27F6ECu: goto label_7F27F6EC;
    case 0x7F27F6F0u: goto label_7F27F6F0;
    case 0x7F27F6F4u: goto label_7F27F6F4;
    case 0x7F27F6F8u: goto label_7F27F6F8;
    case 0x7F27F6FCu: goto label_7F27F6FC;
    case 0x7F27F700u: goto label_7F27F700;
    case 0x7F27F704u: goto label_7F27F704;
    case 0x7F27F708u: goto label_7F27F708;
    case 0x7F27F70Cu: goto label_7F27F70C;
    case 0x7F27F710u: goto label_7F27F710;
    case 0x7F27F714u: goto label_7F27F714;
    case 0x7F27F718u: goto label_7F27F718;
    case 0x7F27F71Cu: goto label_7F27F71C;
    case 0x7F27F720u: goto label_7F27F720;
    case 0x7F27F724u: goto label_7F27F724;
    case 0x7F27F728u: goto label_7F27F728;
    case 0x7F27F72Cu: goto label_7F27F72C;
    case 0x7F27F730u: goto label_7F27F730;
    case 0x7F27F734u: goto label_7F27F734;
    case 0x7F27F738u: goto label_7F27F738;
    case 0x7F27F73Cu: goto label_7F27F73C;
    case 0x7F27F740u: goto label_7F27F740;
    case 0x7F27F744u: goto label_7F27F744;
    case 0x7F27F748u: goto label_7F27F748;
    case 0x7F27F74Cu: goto label_7F27F74C;
    case 0x7F27F750u: goto label_7F27F750;
    case 0x7F27F754u: goto label_7F27F754;
    case 0x7F27F758u: goto label_7F27F758;
    case 0x7F27F75Cu: goto label_7F27F75C;
    case 0x7F27F760u: goto label_7F27F760;
    case 0x7F27F764u: goto label_7F27F764;
    case 0x7F27F768u: goto label_7F27F768;
    case 0x7F27F76Cu: goto label_7F27F76C;
    case 0x7F27F770u: goto label_7F27F770;
    case 0x7F27F774u: goto label_7F27F774;
    case 0x7F27F778u: goto label_7F27F778;
    case 0x7F27F77Cu: goto label_7F27F77C;
    case 0x7F27F780u: goto label_7F27F780;
    case 0x7F27F784u: goto label_7F27F784;
    case 0x7F27F788u: goto label_7F27F788;
    case 0x7F27F78Cu: goto label_7F27F78C;
    case 0x7F27F790u: goto label_7F27F790;
    case 0x7F27F794u: goto label_7F27F794;
    case 0x7F27F798u: goto label_7F27F798;
    case 0x7F27F79Cu: goto label_7F27F79C;
    case 0x7F27F7A0u: goto label_7F27F7A0;
    case 0x7F27F7A4u: goto label_7F27F7A4;
    case 0x7F27F7A8u: goto label_7F27F7A8;
    case 0x7F27F7ACu: goto label_7F27F7AC;
    case 0x7F27F7B0u: goto label_7F27F7B0;
    case 0x7F27F7B4u: goto label_7F27F7B4;
    case 0x7F27F7B8u: goto label_7F27F7B8;
    case 0x7F27F7BCu: goto label_7F27F7BC;
    case 0x7F27F7C0u: goto label_7F27F7C0;
    case 0x7F27F7C4u: goto label_7F27F7C4;
    case 0x7F27F7C8u: goto label_7F27F7C8;
    case 0x7F27F7CCu: goto label_7F27F7CC;
    case 0x7F27F7D0u: goto label_7F27F7D0;
    case 0x7F27F7D4u: goto label_7F27F7D4;
    case 0x7F27F7D8u: goto label_7F27F7D8;
    case 0x7F27F7DCu: goto label_7F27F7DC;
    case 0x7F27F7E0u: goto label_7F27F7E0;
    case 0x7F27F7E4u: goto label_7F27F7E4;
    case 0x7F27F7E8u: goto label_7F27F7E8;
    case 0x7F27F7ECu: goto label_7F27F7EC;
    case 0x7F27F7F0u: goto label_7F27F7F0;
    case 0x7F27F7F4u: goto label_7F27F7F4;
    case 0x7F27F7F8u: goto label_7F27F7F8;
    case 0x7F27F7FCu: goto label_7F27F7FC;
    case 0x7F27F800u: goto label_7F27F800;
    case 0x7F27F804u: goto label_7F27F804;
    case 0x7F27F808u: goto label_7F27F808;
    case 0x7F27F80Cu: goto label_7F27F80C;
    case 0x7F27F810u: goto label_7F27F810;
    case 0x7F27F814u: goto label_7F27F814;
    case 0x7F27F818u: goto label_7F27F818;
    case 0x7F27F81Cu: goto label_7F27F81C;
    case 0x7F27F820u: goto label_7F27F820;
    case 0x7F27F824u: goto label_7F27F824;
    case 0x7F27F828u: goto label_7F27F828;
    case 0x7F27F82Cu: goto label_7F27F82C;
    case 0x7F27F830u: goto label_7F27F830;
    case 0x7F27F834u: goto label_7F27F834;
    case 0x7F27F838u: goto label_7F27F838;
    case 0x7F27F83Cu: goto label_7F27F83C;
    case 0x7F27F840u: goto label_7F27F840;
    case 0x7F27F844u: goto label_7F27F844;
    case 0x7F27F848u: goto label_7F27F848;
    case 0x7F27F84Cu: goto label_7F27F84C;
    case 0x7F27F850u: goto label_7F27F850;
    case 0x7F27F854u: goto label_7F27F854;
    case 0x7F27F858u: goto label_7F27F858;
    case 0x7F27F85Cu: goto label_7F27F85C;
    case 0x7F27F860u: goto label_7F27F860;
    case 0x7F27F864u: goto label_7F27F864;
    case 0x7F27F868u: goto label_7F27F868;
    case 0x7F27F86Cu: goto label_7F27F86C;
    case 0x7F27F870u: goto label_7F27F870;
    case 0x7F27F874u: goto label_7F27F874;
    case 0x7F27F878u: goto label_7F27F878;
    case 0x7F27F87Cu: goto label_7F27F87C;
    case 0x7F27F880u: goto label_7F27F880;
    case 0x7F27F884u: goto label_7F27F884;
    case 0x7F27F888u: goto label_7F27F888;
    case 0x7F27F88Cu: goto label_7F27F88C;
    case 0x7F27F890u: goto label_7F27F890;
    case 0x7F27F894u: goto label_7F27F894;
    case 0x7F27F898u: goto label_7F27F898;
    case 0x7F27F89Cu: goto label_7F27F89C;
    case 0x7F27F8A0u: goto label_7F27F8A0;
    case 0x7F27F8A4u: goto label_7F27F8A4;
    case 0x7F27F8A8u: goto label_7F27F8A8;
    case 0x7F27F8ACu: goto label_7F27F8AC;
    case 0x7F27F8B0u: goto label_7F27F8B0;
    case 0x7F27F8B4u: goto label_7F27F8B4;
    case 0x7F27F8B8u: goto label_7F27F8B8;
    case 0x7F27F8BCu: goto label_7F27F8BC;
    case 0x7F27F8C0u: goto label_7F27F8C0;
    case 0x7F27F8C4u: goto label_7F27F8C4;
    case 0x7F27F8C8u: goto label_7F27F8C8;
    case 0x7F27F8CCu: goto label_7F27F8CC;
    case 0x7F27F8D0u: goto label_7F27F8D0;
    case 0x7F27F8D4u: goto label_7F27F8D4;
    case 0x7F27F8D8u: goto label_7F27F8D8;
    case 0x7F27F8DCu: goto label_7F27F8DC;
    case 0x7F27F8E0u: goto label_7F27F8E0;
    case 0x7F27F8E4u: goto label_7F27F8E4;
    case 0x7F27F8E8u: goto label_7F27F8E8;
    case 0x7F27F8ECu: goto label_7F27F8EC;
    case 0x7F27F8F0u: goto label_7F27F8F0;
    case 0x7F27F8F4u: goto label_7F27F8F4;
    case 0x7F27F8F8u: goto label_7F27F8F8;
    case 0x7F27F8FCu: goto label_7F27F8FC;
    case 0x7F27F900u: goto label_7F27F900;
    case 0x7F27F904u: goto label_7F27F904;
    case 0x7F27F908u: goto label_7F27F908;
    case 0x7F27F90Cu: goto label_7F27F90C;
    case 0x7F27F910u: goto label_7F27F910;
    case 0x7F27F914u: goto label_7F27F914;
    case 0x7F27F918u: goto label_7F27F918;
    case 0x7F27F91Cu: goto label_7F27F91C;
    case 0x7F27F920u: goto label_7F27F920;
    case 0x7F27F924u: goto label_7F27F924;
    case 0x7F27F928u: goto label_7F27F928;
    case 0x7F27F92Cu: goto label_7F27F92C;
    case 0x7F27F930u: goto label_7F27F930;
    case 0x7F27F934u: goto label_7F27F934;
    case 0x7F27F938u: goto label_7F27F938;
    case 0x7F27F93Cu: goto label_7F27F93C;
    case 0x7F27F940u: goto label_7F27F940;
    case 0x7F27F944u: goto label_7F27F944;
    case 0x7F27F948u: goto label_7F27F948;
    case 0x7F27F94Cu: goto label_7F27F94C;
    case 0x7F27F950u: goto label_7F27F950;
    case 0x7F27F954u: goto label_7F27F954;
    case 0x7F27F958u: goto label_7F27F958;
    case 0x7F27F95Cu: goto label_7F27F95C;
    case 0x7F27F960u: goto label_7F27F960;
    case 0x7F27F964u: goto label_7F27F964;
    case 0x7F27F968u: goto label_7F27F968;
    case 0x7F27F96Cu: goto label_7F27F96C;
    case 0x7F27F970u: goto label_7F27F970;
    case 0x7F27F974u: goto label_7F27F974;
    case 0x7F27F978u: goto label_7F27F978;
    case 0x7F27F97Cu: goto label_7F27F97C;
    case 0x7F27F980u: goto label_7F27F980;
    case 0x7F27F984u: goto label_7F27F984;
    case 0x7F27F988u: goto label_7F27F988;
    case 0x7F27F98Cu: goto label_7F27F98C;
    case 0x7F27F990u: goto label_7F27F990;
    case 0x7F27F994u: goto label_7F27F994;
    case 0x7F27F998u: goto label_7F27F998;
    case 0x7F27F99Cu: goto label_7F27F99C;
    case 0x7F27F9A0u: goto label_7F27F9A0;
    case 0x7F27F9A4u: goto label_7F27F9A4;
    case 0x7F27F9A8u: goto label_7F27F9A8;
    case 0x7F27F9ACu: goto label_7F27F9AC;
    case 0x7F27F9B0u: goto label_7F27F9B0;
    case 0x7F27F9B4u: goto label_7F27F9B4;
    case 0x7F27F9B8u: goto label_7F27F9B8;
    case 0x7F27F9BCu: goto label_7F27F9BC;
    case 0x7F27F9C0u: goto label_7F27F9C0;
    case 0x7F27F9C4u: goto label_7F27F9C4;
    case 0x7F27F9C8u: goto label_7F27F9C8;
    case 0x7F27F9CCu: goto label_7F27F9CC;
    case 0x7F27F9D0u: goto label_7F27F9D0;
    case 0x7F27F9D4u: goto label_7F27F9D4;
    case 0x7F27F9D8u: goto label_7F27F9D8;
    case 0x7F27F9DCu: goto label_7F27F9DC;
    case 0x7F27F9E0u: goto label_7F27F9E0;
    case 0x7F27F9E4u: goto label_7F27F9E4;
    case 0x7F27F9E8u: goto label_7F27F9E8;
    case 0x7F27F9ECu: goto label_7F27F9EC;
    case 0x7F27F9F0u: goto label_7F27F9F0;
    case 0x7F27F9F4u: goto label_7F27F9F4;
    case 0x7F27F9F8u: goto label_7F27F9F8;
    case 0x7F27F9FCu: goto label_7F27F9FC;
    case 0x7F27FA00u: goto label_7F27FA00;
    case 0x7F27FA04u: goto label_7F27FA04;
    case 0x7F27FA08u: goto label_7F27FA08;
    case 0x7F27FA0Cu: goto label_7F27FA0C;
    case 0x7F27FA10u: goto label_7F27FA10;
    case 0x7F27FA14u: goto label_7F27FA14;
    case 0x7F27FA18u: goto label_7F27FA18;
    case 0x7F27FA1Cu: goto label_7F27FA1C;
    case 0x7F27FA20u: goto label_7F27FA20;
    case 0x7F27FA24u: goto label_7F27FA24;
    case 0x7F27FA28u: goto label_7F27FA28;
    case 0x7F27FA2Cu: goto label_7F27FA2C;
    case 0x7F27FA30u: goto label_7F27FA30;
    case 0x7F27FA34u: goto label_7F27FA34;
    case 0x7F27FA38u: goto label_7F27FA38;
    case 0x7F27FA3Cu: goto label_7F27FA3C;
    case 0x7F27FA40u: goto label_7F27FA40;
    case 0x7F27FA44u: goto label_7F27FA44;
    case 0x7F27FA48u: goto label_7F27FA48;
    case 0x7F27FA4Cu: goto label_7F27FA4C;
    case 0x7F27FA50u: goto label_7F27FA50;
    case 0x7F27FA54u: goto label_7F27FA54;
    case 0x7F27FA58u: goto label_7F27FA58;
    case 0x7F27FA5Cu: goto label_7F27FA5C;
    case 0x7F27FA60u: goto label_7F27FA60;
    case 0x7F27FA64u: goto label_7F27FA64;
    case 0x7F27FA68u: goto label_7F27FA68;
    case 0x7F27FA6Cu: goto label_7F27FA6C;
    case 0x7F27FA70u: goto label_7F27FA70;
    case 0x7F27FA74u: goto label_7F27FA74;
    case 0x7F27FA78u: goto label_7F27FA78;
    case 0x7F27FA7Cu: goto label_7F27FA7C;
    case 0x7F27FA80u: goto label_7F27FA80;
    case 0x7F27FA84u: goto label_7F27FA84;
    case 0x7F27FA88u: goto label_7F27FA88;
    case 0x7F27FA8Cu: goto label_7F27FA8C;
    case 0x7F27FA90u: goto label_7F27FA90;
    case 0x7F27FA94u: goto label_7F27FA94;
    case 0x7F27FA98u: goto label_7F27FA98;
    case 0x7F27FA9Cu: goto label_7F27FA9C;
    case 0x7F27FAA0u: goto label_7F27FAA0;
    case 0x7F27FAA4u: goto label_7F27FAA4;
    case 0x7F27FAA8u: goto label_7F27FAA8;
    case 0x7F27FAACu: goto label_7F27FAAC;
    case 0x7F27FAB0u: goto label_7F27FAB0;
    case 0x7F27FAB4u: goto label_7F27FAB4;
    case 0x7F27FAB8u: goto label_7F27FAB8;
    case 0x7F27FABCu: goto label_7F27FABC;
    case 0x7F27FAC0u: goto label_7F27FAC0;
    case 0x7F27FAC4u: goto label_7F27FAC4;
    case 0x7F27FAC8u: goto label_7F27FAC8;
    case 0x7F27FACCu: goto label_7F27FACC;
    case 0x7F27FAD0u: goto label_7F27FAD0;
    case 0x7F27FAD4u: goto label_7F27FAD4;
    case 0x7F27FAD8u: goto label_7F27FAD8;
    case 0x7F27FADCu: goto label_7F27FADC;
    case 0x7F27FAE0u: goto label_7F27FAE0;
    case 0x7F27FAE4u: goto label_7F27FAE4;
    case 0x7F27FAE8u: goto label_7F27FAE8;
    case 0x7F27FAECu: goto label_7F27FAEC;
    case 0x7F27FAF0u: goto label_7F27FAF0;
    case 0x7F27FAF4u: goto label_7F27FAF4;
    case 0x7F27FAF8u: goto label_7F27FAF8;
    case 0x7F27FAFCu: goto label_7F27FAFC;
    case 0x7F27FB00u: goto label_7F27FB00;
    case 0x7F27FB04u: goto label_7F27FB04;
    case 0x7F27FB08u: goto label_7F27FB08;
    case 0x7F27FB0Cu: goto label_7F27FB0C;
    case 0x7F27FB10u: goto label_7F27FB10;
    case 0x7F27FB14u: goto label_7F27FB14;
    case 0x7F27FB18u: goto label_7F27FB18;
    case 0x7F27FB1Cu: goto label_7F27FB1C;
    case 0x7F27FB20u: goto label_7F27FB20;
    case 0x7F27FB24u: goto label_7F27FB24;
    case 0x7F27FB28u: goto label_7F27FB28;
    case 0x7F27FB2Cu: goto label_7F27FB2C;
    case 0x7F27FB30u: goto label_7F27FB30;
    case 0x7F27FB34u: goto label_7F27FB34;
    case 0x7F27FB38u: goto label_7F27FB38;
    case 0x7F27FB3Cu: goto label_7F27FB3C;
    case 0x7F27FB40u: goto label_7F27FB40;
    case 0x7F27FB44u: goto label_7F27FB44;
    case 0x7F27FB48u: goto label_7F27FB48;
    case 0x7F27FB4Cu: goto label_7F27FB4C;
    case 0x7F27FB50u: goto label_7F27FB50;
    case 0x7F27FB54u: goto label_7F27FB54;
    case 0x7F27FB58u: goto label_7F27FB58;
    case 0x7F27FB5Cu: goto label_7F27FB5C;
    case 0x7F27FB60u: goto label_7F27FB60;
    case 0x7F27FB64u: goto label_7F27FB64;
    case 0x7F27FB68u: goto label_7F27FB68;
    case 0x7F27FB6Cu: goto label_7F27FB6C;
    case 0x7F27FB70u: goto label_7F27FB70;
    case 0x7F27FB74u: goto label_7F27FB74;
    case 0x7F27FB78u: goto label_7F27FB78;
    case 0x7F27FB7Cu: goto label_7F27FB7C;
    case 0x7F27FB80u: goto label_7F27FB80;
    case 0x7F27FB84u: goto label_7F27FB84;
    case 0x7F27FB88u: goto label_7F27FB88;
    case 0x7F27FB8Cu: goto label_7F27FB8C;
    case 0x7F27FB90u: goto label_7F27FB90;
    case 0x7F27FB94u: goto label_7F27FB94;
    case 0x7F27FB98u: goto label_7F27FB98;
    case 0x7F27FB9Cu: goto label_7F27FB9C;
    case 0x7F27FBA0u: goto label_7F27FBA0;
    case 0x7F27FBA4u: goto label_7F27FBA4;
    case 0x7F27FBA8u: goto label_7F27FBA8;
    case 0x7F27FBACu: goto label_7F27FBAC;
    case 0x7F27FBB0u: goto label_7F27FBB0;
    case 0x7F27FBB4u: goto label_7F27FBB4;
    case 0x7F27FBB8u: goto label_7F27FBB8;
    case 0x7F27FBBCu: goto label_7F27FBBC;
    case 0x7F27FBC0u: goto label_7F27FBC0;
    case 0x7F27FBC4u: goto label_7F27FBC4;
    case 0x7F27FBC8u: goto label_7F27FBC8;
    case 0x7F27FBCCu: goto label_7F27FBCC;
    case 0x7F27FBD0u: goto label_7F27FBD0;
    case 0x7F27FBD4u: goto label_7F27FBD4;
    case 0x7F27FBD8u: goto label_7F27FBD8;
    case 0x7F27FBDCu: goto label_7F27FBDC;
    case 0x7F27FBE0u: goto label_7F27FBE0;
    case 0x7F27FBE4u: goto label_7F27FBE4;
    case 0x7F27FBE8u: goto label_7F27FBE8;
    case 0x7F27FBECu: goto label_7F27FBEC;
    case 0x7F27FBF0u: goto label_7F27FBF0;
    case 0x7F27FBF4u: goto label_7F27FBF4;
    case 0x7F27FBF8u: goto label_7F27FBF8;
    case 0x7F27FBFCu: goto label_7F27FBFC;
    case 0x7F27FC00u: goto label_7F27FC00;
    case 0x7F27FC04u: goto label_7F27FC04;
    case 0x7F27FC08u: goto label_7F27FC08;
    case 0x7F27FC0Cu: goto label_7F27FC0C;
    case 0x7F27FC10u: goto label_7F27FC10;
    case 0x7F27FC14u: goto label_7F27FC14;
    case 0x7F27FC18u: goto label_7F27FC18;
    case 0x7F27FC1Cu: goto label_7F27FC1C;
    case 0x7F27FC20u: goto label_7F27FC20;
    case 0x7F27FC24u: goto label_7F27FC24;
    case 0x7F27FC28u: goto label_7F27FC28;
    case 0x7F27FC2Cu: goto label_7F27FC2C;
    case 0x7F27FC30u: goto label_7F27FC30;
    case 0x7F27FC34u: goto label_7F27FC34;
    case 0x7F27FC38u: goto label_7F27FC38;
    case 0x7F27FC3Cu: goto label_7F27FC3C;
    case 0x7F27FC40u: goto label_7F27FC40;
    case 0x7F27FC44u: goto label_7F27FC44;
    case 0x7F27FC48u: goto label_7F27FC48;
    case 0x7F27FC4Cu: goto label_7F27FC4C;
    case 0x7F27FC50u: goto label_7F27FC50;
    case 0x7F27FC54u: goto label_7F27FC54;
    case 0x7F27FC58u: goto label_7F27FC58;
    case 0x7F27FC5Cu: goto label_7F27FC5C;
    case 0x7F27FC60u: goto label_7F27FC60;
    case 0x7F27FC64u: goto label_7F27FC64;
    case 0x7F27FC68u: goto label_7F27FC68;
    case 0x7F27FC6Cu: goto label_7F27FC6C;
    case 0x7F27FC70u: goto label_7F27FC70;
    case 0x7F27FC74u: goto label_7F27FC74;
    case 0x7F27FC78u: goto label_7F27FC78;
    case 0x7F27FC7Cu: goto label_7F27FC7C;
    case 0x7F27FC80u: goto label_7F27FC80;
    case 0x7F27FC84u: goto label_7F27FC84;
    case 0x7F27FC88u: goto label_7F27FC88;
    case 0x7F27FC8Cu: goto label_7F27FC8C;
    case 0x7F27FC90u: goto label_7F27FC90;
    case 0x7F27FC94u: goto label_7F27FC94;
    case 0x7F27FC98u: goto label_7F27FC98;
    case 0x7F27FC9Cu: goto label_7F27FC9C;
    case 0x7F27FCA0u: goto label_7F27FCA0;
    case 0x7F27FCA4u: goto label_7F27FCA4;
    case 0x7F27FCA8u: goto label_7F27FCA8;
    case 0x7F27FCACu: goto label_7F27FCAC;
    case 0x7F27FCB0u: goto label_7F27FCB0;
    case 0x7F27FCB4u: goto label_7F27FCB4;
    case 0x7F27FCB8u: goto label_7F27FCB8;
    case 0x7F27FCBCu: goto label_7F27FCBC;
    case 0x7F27FCC0u: goto label_7F27FCC0;
    case 0x7F27FCC4u: goto label_7F27FCC4;
    case 0x7F27FCC8u: goto label_7F27FCC8;
    case 0x7F27FCCCu: goto label_7F27FCCC;
    case 0x7F27FCD0u: goto label_7F27FCD0;
    case 0x7F27FCD4u: goto label_7F27FCD4;
    case 0x7F27FCD8u: goto label_7F27FCD8;
    case 0x7F27FCDCu: goto label_7F27FCDC;
    case 0x7F27FCE0u: goto label_7F27FCE0;
    case 0x7F27FCE4u: goto label_7F27FCE4;
    case 0x7F27FCE8u: goto label_7F27FCE8;
    case 0x7F27FCECu: goto label_7F27FCEC;
    case 0x7F27FCF0u: goto label_7F27FCF0;
    case 0x7F27FCF4u: goto label_7F27FCF4;
    case 0x7F27FCF8u: goto label_7F27FCF8;
    case 0x7F27FCFCu: goto label_7F27FCFC;
    case 0x7F27FD00u: goto label_7F27FD00;
    case 0x7F27FD04u: goto label_7F27FD04;
    case 0x7F27FD08u: goto label_7F27FD08;
    case 0x7F27FD0Cu: goto label_7F27FD0C;
    case 0x7F27FD10u: goto label_7F27FD10;
    case 0x7F27FD14u: goto label_7F27FD14;
    case 0x7F27FD18u: goto label_7F27FD18;
    case 0x7F27FD1Cu: goto label_7F27FD1C;
    case 0x7F27FD20u: goto label_7F27FD20;
    case 0x7F27FD24u: goto label_7F27FD24;
    case 0x7F27FD28u: goto label_7F27FD28;
    case 0x7F27FD2Cu: goto label_7F27FD2C;
    case 0x7F27FD30u: goto label_7F27FD30;
    case 0x7F27FD34u: goto label_7F27FD34;
    case 0x7F27FD38u: goto label_7F27FD38;
    case 0x7F27FD3Cu: goto label_7F27FD3C;
    case 0x7F27FD40u: goto label_7F27FD40;
    case 0x7F27FD44u: goto label_7F27FD44;
    case 0x7F27FD48u: goto label_7F27FD48;
    case 0x7F27FD4Cu: goto label_7F27FD4C;
    case 0x7F27FD50u: goto label_7F27FD50;
    case 0x7F27FD54u: goto label_7F27FD54;
    case 0x7F27FD58u: goto label_7F27FD58;
    case 0x7F27FD5Cu: goto label_7F27FD5C;
    case 0x7F27FD60u: goto label_7F27FD60;
    case 0x7F27FD64u: goto label_7F27FD64;
    case 0x7F27FD68u: goto label_7F27FD68;
    case 0x7F27FD6Cu: goto label_7F27FD6C;
    case 0x7F27FD70u: goto label_7F27FD70;
    case 0x7F27FD74u: goto label_7F27FD74;
    case 0x7F27FD78u: goto label_7F27FD78;
    case 0x7F27FD7Cu: goto label_7F27FD7C;
    case 0x7F27FD80u: goto label_7F27FD80;
    case 0x7F27FD84u: goto label_7F27FD84;
    case 0x7F27FD88u: goto label_7F27FD88;
    case 0x7F27FD8Cu: goto label_7F27FD8C;
    case 0x7F27FD90u: goto label_7F27FD90;
    case 0x7F27FD94u: goto label_7F27FD94;
    case 0x7F27FD98u: goto label_7F27FD98;
    case 0x7F27FD9Cu: goto label_7F27FD9C;
    case 0x7F27FDA0u: goto label_7F27FDA0;
    case 0x7F27FDA4u: goto label_7F27FDA4;
    case 0x7F27FDA8u: goto label_7F27FDA8;
    case 0x7F27FDACu: goto label_7F27FDAC;
    case 0x7F27FDB0u: goto label_7F27FDB0;
    case 0x7F27FDB4u: goto label_7F27FDB4;
    case 0x7F27FDB8u: goto label_7F27FDB8;
    case 0x7F27FDBCu: goto label_7F27FDBC;
    case 0x7F27FDC0u: goto label_7F27FDC0;
    case 0x7F27FDC4u: goto label_7F27FDC4;
    case 0x7F27FDC8u: goto label_7F27FDC8;
    case 0x7F27FDCCu: goto label_7F27FDCC;
    case 0x7F27FDD0u: goto label_7F27FDD0;
    case 0x7F27FDD4u: goto label_7F27FDD4;
    case 0x7F27FDD8u: goto label_7F27FDD8;
    case 0x7F27FDDCu: goto label_7F27FDDC;
    case 0x7F27FDE0u: goto label_7F27FDE0;
    case 0x7F27FDE4u: goto label_7F27FDE4;
    case 0x7F27FDE8u: goto label_7F27FDE8;
    case 0x7F27FDECu: goto label_7F27FDEC;
    case 0x7F27FDF0u: goto label_7F27FDF0;
    case 0x7F27FDF4u: goto label_7F27FDF4;
    case 0x7F27FDF8u: goto label_7F27FDF8;
    case 0x7F27FDFCu: goto label_7F27FDFC;
    case 0x7F27FE00u: goto label_7F27FE00;
    case 0x7F27FE04u: goto label_7F27FE04;
    case 0x7F27FE08u: goto label_7F27FE08;
    case 0x7F27FE0Cu: goto label_7F27FE0C;
    case 0x7F27FE10u: goto label_7F27FE10;
    case 0x7F27FE14u: goto label_7F27FE14;
    case 0x7F27FE18u: goto label_7F27FE18;
    case 0x7F27FE1Cu: goto label_7F27FE1C;
    case 0x7F27FE20u: goto label_7F27FE20;
    case 0x7F27FE24u: goto label_7F27FE24;
    case 0x7F27FE28u: goto label_7F27FE28;
    case 0x7F27FE2Cu: goto label_7F27FE2C;
    case 0x7F27FE30u: goto label_7F27FE30;
    case 0x7F27FE34u: goto label_7F27FE34;
    case 0x7F27FE38u: goto label_7F27FE38;
    case 0x7F27FE3Cu: goto label_7F27FE3C;
    case 0x7F27FE40u: goto label_7F27FE40;
    case 0x7F27FE44u: goto label_7F27FE44;
    case 0x7F27FE48u: goto label_7F27FE48;
    case 0x7F27FE4Cu: goto label_7F27FE4C;
    case 0x7F27FE50u: goto label_7F27FE50;
    case 0x7F27FE54u: goto label_7F27FE54;
    case 0x7F27FE58u: goto label_7F27FE58;
    case 0x7F27FE5Cu: goto label_7F27FE5C;
    case 0x7F27FE60u: goto label_7F27FE60;
    case 0x7F27FE64u: goto label_7F27FE64;
    case 0x7F27FE68u: goto label_7F27FE68;
    case 0x7F27FE6Cu: goto label_7F27FE6C;
    case 0x7F27FE70u: goto label_7F27FE70;
    case 0x7F27FE74u: goto label_7F27FE74;
    case 0x7F27FE78u: goto label_7F27FE78;
    case 0x7F27FE7Cu: goto label_7F27FE7C;
    case 0x7F27FE80u: goto label_7F27FE80;
    case 0x7F27FE84u: goto label_7F27FE84;
    case 0x7F27FE88u: goto label_7F27FE88;
    case 0x7F27FE8Cu: goto label_7F27FE8C;
    case 0x7F27FE90u: goto label_7F27FE90;
    case 0x7F27FE94u: goto label_7F27FE94;
    case 0x7F27FE98u: goto label_7F27FE98;
    case 0x7F27FE9Cu: goto label_7F27FE9C;
    case 0x7F27FEA0u: goto label_7F27FEA0;
    case 0x7F27FEA4u: goto label_7F27FEA4;
    case 0x7F27FEA8u: goto label_7F27FEA8;
    case 0x7F27FEACu: goto label_7F27FEAC;
    case 0x7F27FEB0u: goto label_7F27FEB0;
    case 0x7F27FEB4u: goto label_7F27FEB4;
    case 0x7F27FEB8u: goto label_7F27FEB8;
    case 0x7F27FEBCu: goto label_7F27FEBC;
    case 0x7F27FEC0u: goto label_7F27FEC0;
    case 0x7F27FEC4u: goto label_7F27FEC4;
    case 0x7F27FEC8u: goto label_7F27FEC8;
    case 0x7F27FECCu: goto label_7F27FECC;
    case 0x7F27FED0u: goto label_7F27FED0;
    case 0x7F27FED4u: goto label_7F27FED4;
    case 0x7F27FED8u: goto label_7F27FED8;
    case 0x7F27FEDCu: goto label_7F27FEDC;
    case 0x7F27FEE0u: goto label_7F27FEE0;
    case 0x7F27FEE4u: goto label_7F27FEE4;
    case 0x7F27FEE8u: goto label_7F27FEE8;
    case 0x7F27FEECu: goto label_7F27FEEC;
    case 0x7F27FEF0u: goto label_7F27FEF0;
    case 0x7F27FEF4u: goto label_7F27FEF4;
    case 0x7F27FEF8u: goto label_7F27FEF8;
    case 0x7F27FEFCu: goto label_7F27FEFC;
    case 0x7F27FF00u: goto label_7F27FF00;
    case 0x7F27FF04u: goto label_7F27FF04;
    case 0x7F27FF08u: goto label_7F27FF08;
    case 0x7F27FF0Cu: goto label_7F27FF0C;
    case 0x7F27FF10u: goto label_7F27FF10;
    case 0x7F27FF14u: goto label_7F27FF14;
    case 0x7F27FF18u: goto label_7F27FF18;
    case 0x7F27FF1Cu: goto label_7F27FF1C;
    case 0x7F27FF20u: goto label_7F27FF20;
    case 0x7F27FF24u: goto label_7F27FF24;
    case 0x7F27FF28u: goto label_7F27FF28;
    case 0x7F27FF2Cu: goto label_7F27FF2C;
    case 0x7F27FF30u: goto label_7F27FF30;
    case 0x7F27FF34u: goto label_7F27FF34;
    case 0x7F27FF38u: goto label_7F27FF38;
    case 0x7F27FF3Cu: goto label_7F27FF3C;
    case 0x7F27FF40u: goto label_7F27FF40;
    case 0x7F27FF44u: goto label_7F27FF44;
    case 0x7F27FF48u: goto label_7F27FF48;
    case 0x7F27FF4Cu: goto label_7F27FF4C;
    case 0x7F27FF50u: goto label_7F27FF50;
    case 0x7F27FF54u: goto label_7F27FF54;
    case 0x7F27FF58u: goto label_7F27FF58;
    case 0x7F27FF5Cu: goto label_7F27FF5C;
    case 0x7F27FF60u: goto label_7F27FF60;
    case 0x7F27FF64u: goto label_7F27FF64;
    case 0x7F27FF68u: goto label_7F27FF68;
    case 0x7F27FF6Cu: goto label_7F27FF6C;
    case 0x7F27FF70u: goto label_7F27FF70;
    case 0x7F27FF74u: goto label_7F27FF74;
    case 0x7F27FF78u: goto label_7F27FF78;
    case 0x7F27FF7Cu: goto label_7F27FF7C;
    case 0x7F27FF80u: goto label_7F27FF80;
    case 0x7F27FF84u: goto label_7F27FF84;
    case 0x7F27FF88u: goto label_7F27FF88;
    case 0x7F27FF8Cu: goto label_7F27FF8C;
    case 0x7F27FF90u: goto label_7F27FF90;
    case 0x7F27FF94u: goto label_7F27FF94;
    case 0x7F27FF98u: goto label_7F27FF98;
    case 0x7F27FF9Cu: goto label_7F27FF9C;
    case 0x7F27FFA0u: goto label_7F27FFA0;
    case 0x7F27FFA4u: goto label_7F27FFA4;
    case 0x7F27FFA8u: goto label_7F27FFA8;
    case 0x7F27FFACu: goto label_7F27FFAC;
    case 0x7F27FFB0u: goto label_7F27FFB0;
    case 0x7F27FFB4u: goto label_7F27FFB4;
    case 0x7F27FFB8u: goto label_7F27FFB8;
    case 0x7F27FFBCu: goto label_7F27FFBC;
    case 0x7F27FFC0u: goto label_7F27FFC0;
    case 0x7F27FFC4u: goto label_7F27FFC4;
    case 0x7F27FFC8u: goto label_7F27FFC8;
    case 0x7F27FFCCu: goto label_7F27FFCC;
    case 0x7F27FFD0u: goto label_7F27FFD0;
    case 0x7F27FFD4u: goto label_7F27FFD4;
    case 0x7F27FFD8u: goto label_7F27FFD8;
    case 0x7F27FFDCu: goto label_7F27FFDC;
    case 0x7F27FFE0u: goto label_7F27FFE0;
    case 0x7F27FFE4u: goto label_7F27FFE4;
    case 0x7F27FFE8u: goto label_7F27FFE8;
    case 0x7F27FFECu: goto label_7F27FFEC;
    case 0x7F27FFF0u: goto label_7F27FFF0;
    case 0x7F27FFF4u: goto label_7F27FFF4;
    case 0x7F27FFF8u: goto label_7F27FFF8;
    case 0x7F27FFFCu: goto label_7F27FFFC;
    case 0x7F280000u: goto label_7F280000;
    case 0x7F280004u: goto label_7F280004;
    case 0x7F280008u: goto label_7F280008;
    case 0x7F28000Cu: goto label_7F28000C;
    case 0x7F280010u: goto label_7F280010;
    case 0x7F280014u: goto label_7F280014;
    case 0x7F280018u: goto label_7F280018;
    case 0x7F28001Cu: goto label_7F28001C;
    case 0x7F280020u: goto label_7F280020;
    case 0x7F280024u: goto label_7F280024;
    case 0x7F280028u: goto label_7F280028;
    case 0x7F28002Cu: goto label_7F28002C;
    case 0x7F280030u: goto label_7F280030;
    case 0x7F280034u: goto label_7F280034;
    case 0x7F280038u: goto label_7F280038;
    case 0x7F28003Cu: goto label_7F28003C;
    case 0x7F280040u: goto label_7F280040;
    case 0x7F280044u: goto label_7F280044;
    case 0x7F280048u: goto label_7F280048;
    case 0x7F28004Cu: goto label_7F28004C;
    case 0x7F280050u: goto label_7F280050;
    case 0x7F280054u: goto label_7F280054;
    case 0x7F280058u: goto label_7F280058;
    case 0x7F28005Cu: goto label_7F28005C;
    case 0x7F280060u: goto label_7F280060;
    case 0x7F280064u: goto label_7F280064;
    case 0x7F280068u: goto label_7F280068;
    case 0x7F28006Cu: goto label_7F28006C;
    case 0x7F280070u: goto label_7F280070;
    case 0x7F280074u: goto label_7F280074;
    case 0x7F280078u: goto label_7F280078;
    case 0x7F28007Cu: goto label_7F28007C;
    case 0x7F280080u: goto label_7F280080;
    case 0x7F280084u: goto label_7F280084;
    case 0x7F280088u: goto label_7F280088;
    case 0x7F28008Cu: goto label_7F28008C;
    case 0x7F280090u: goto label_7F280090;
    case 0x7F280094u: goto label_7F280094;
    case 0x7F280098u: goto label_7F280098;
    case 0x7F28009Cu: goto label_7F28009C;
    case 0x7F2800A0u: goto label_7F2800A0;
    case 0x7F2800A4u: goto label_7F2800A4;
    case 0x7F2800A8u: goto label_7F2800A8;
    case 0x7F2800ACu: goto label_7F2800AC;
    case 0x7F2800B0u: goto label_7F2800B0;
    case 0x7F2800B4u: goto label_7F2800B4;
    case 0x7F2800B8u: goto label_7F2800B8;
    case 0x7F2800BCu: goto label_7F2800BC;
    case 0x7F2800C0u: goto label_7F2800C0;
    case 0x7F2800C4u: goto label_7F2800C4;
    case 0x7F2800C8u: goto label_7F2800C8;
    case 0x7F2800CCu: goto label_7F2800CC;
    case 0x7F2800D0u: goto label_7F2800D0;
    case 0x7F2800D4u: goto label_7F2800D4;
    case 0x7F2800D8u: goto label_7F2800D8;
    case 0x7F2800DCu: goto label_7F2800DC;
    case 0x7F2800E0u: goto label_7F2800E0;
    case 0x7F2800E4u: goto label_7F2800E4;
    case 0x7F2800E8u: goto label_7F2800E8;
    default: return;
    }
label_7F27C0EC:
    ctx->pc = 0x7F27C0ECu;
    ctx->downcount -= 6;
    // 7F27C0EC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27C0F0:
    ctx->pc = 0x7F27C0F0u;
    // 7F27C0F0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27C0F4:
    ctx->pc = 0x7F27C0F4u;
    // 7F27C0F4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27C0F8:
    ctx->pc = 0x7F27C0F8u;
    // 7F27C0F8: lwz     r0, 380(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(380);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C0FC:
    ctx->pc = 0x7F27C0FCu;
    // 7F27C0FC: cmpwi   r0, 0
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

label_7F27C100:
    ctx->pc = 0x7F27C100u;
    // 7F27C100: bc    4, 1, 0x7F27C124
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27C124;
        }
    }

label_7F27C104:
    ctx->pc = 0x7F27C104u;
    ctx->downcount -= 8;
    // 7F27C104: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F27C108:
    ctx->pc = 0x7F27C108u;
    // 7F27C108: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27C10C:
    ctx->pc = 0x7F27C10Cu;
    // 7F27C10C: lwz     r6, 13880(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(13880);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F27C110:
    ctx->pc = 0x7F27C110u;
    // 7F27C110: lha     r5, 7008(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(7008);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27C114:
    ctx->pc = 0x7F27C114u;
    // 7F27C114: addi    r0, r5, 1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(1);

label_7F27C118:
    ctx->pc = 0x7F27C118u;
    // 7F27C118: sth     r0, 7008(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(7008);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27C11C:
    ctx->pc = 0x7F27C11Cu;
    // 7F27C11C: lwz     r3, 380(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(380);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27C120:
    ctx->pc = 0x7F27C120u;
    // 7F27C120: bl      0x7F01FA88
    {
            ctx->lr = 0x7F27C124u;
            ctx->pc = 0x7F01FA88u;
            return;
    }

label_7F27C124:
    ctx->pc = 0x7F27C124u;
    ctx->downcount -= 5;
    // 7F27C124: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C128:
    ctx->pc = 0x7F27C128u;
    // 7F27C128: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27C12C:
    ctx->pc = 0x7F27C12Cu;
    // 7F27C12C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F27C130:
    ctx->pc = 0x7F27C130u;
    // 7F27C130: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27C134:
    ctx->pc = 0x7F27C134u;
    ctx->downcount -= 6;
    // 7F27C134: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27C138:
    ctx->pc = 0x7F27C138u;
    // 7F27C138: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27C13C:
    ctx->pc = 0x7F27C13Cu;
    // 7F27C13C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27C140:
    ctx->pc = 0x7F27C140u;
    // 7F27C140: lwz     r3, 384(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(384);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27C144:
    ctx->pc = 0x7F27C144u;
    // 7F27C144: cmpwi   r3, 0
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

label_7F27C148:
    ctx->pc = 0x7F27C148u;
    // 7F27C148: bc    4, 1, 0x7F27C154
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27C154;
        }
    }

label_7F27C14C:
    ctx->pc = 0x7F27C14Cu;
    ctx->downcount -= 2;
    // 7F27C14C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27C150:
    ctx->pc = 0x7F27C150u;
    // 7F27C150: bl      0x7F01FA88
    {
            ctx->lr = 0x7F27C154u;
            ctx->pc = 0x7F01FA88u;
            return;
    }

label_7F27C154:
    ctx->pc = 0x7F27C154u;
    ctx->downcount -= 5;
    // 7F27C154: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C158:
    ctx->pc = 0x7F27C158u;
    // 7F27C158: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27C15C:
    ctx->pc = 0x7F27C15Cu;
    // 7F27C15C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F27C160:
    ctx->pc = 0x7F27C160u;
    // 7F27C160: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27C164:
    ctx->pc = 0x7F27C164u;
    ctx->downcount -= 8;
    // 7F27C164: lha     r0, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27C168:
    ctx->pc = 0x7F27C168u;
    // 7F27C168: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F27C16C:
    ctx->pc = 0x7F27C16Cu;
    // 7F27C16C: lfs     f1, 25264(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F27C16Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(25264);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F27C170:
    ctx->pc = 0x7F27C170u;
    // 7F27C170: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27C174:
    ctx->pc = 0x7F27C174u;
    // 7F27C174: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F27C178:
    ctx->pc = 0x7F27C178u;
    // 7F27C178: cmpwi   r0, 0
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

label_7F27C17C:
    ctx->pc = 0x7F27C17Cu;
    // 7F27C17C: bclr  4, 1
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27C180:
    ctx->downcount -= 4;
    // 7F27C180: addi    r0, r4, 496
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(496);

label_7F27C184:
    ctx->pc = 0x7F27C184u;
    // 7F27C184: lfsx    f0, r3, r0
    if (!ppc_fp_available_inline(ctx, 0x7F27C184u)) return;
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27C188:
    ctx->pc = 0x7F27C188u;
    // 7F27C188: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F27C188u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F27C18C:
    // 7F27C18C: bc    4, 0, 0x7F27C194
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27C194;
        }
    }

label_7F27C190:
    ctx->pc = 0x7F27C190u;
    ctx->downcount -= 1;
    // 7F27C190: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27C190u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_7F27C194:
    ctx->downcount -= 2;
    // 7F27C194: addi    r4, r4, 324
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(324);

label_7F27C198:
    // 7F27C198: bc    16, 0, 0x7F27C180
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27C180u;
                return;
            }
            goto label_7F27C180;
        }
    }

label_7F27C19C:
    ctx->pc = 0x7F27C19Cu;
    ctx->downcount -= 1;
    // 7F27C19C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27C1A0:
    ctx->pc = 0x7F27C1A0u;
    ctx->downcount -= 26;
    // 7F27C1A0: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27C1A4:
    ctx->pc = 0x7F27C1A4u;
    // 7F27C1A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27C1A8:
    ctx->pc = 0x7F27C1A8u;
    // 7F27C1A8: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27C1AC:
    ctx->pc = 0x7F27C1ACu;
    // 7F27C1AC: stfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27C1ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F27C1B0:
    ctx->pc = 0x7F27C1B0u;
    // 7F27C1B0: psq_st   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F27C1B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F27C1B0u);
        if (ctx->exception) return;
    }

label_7F27C1B4:
    ctx->pc = 0x7F27C1B4u;
    // 7F27C1B4: stmw     r23, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F27C1B8:
    ctx->pc = 0x7F27C1B8u;
    // 7F27C1B8: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F27C1BC:
    ctx->pc = 0x7F27C1BCu;
    // 7F27C1BC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F27C1C0:
    ctx->pc = 0x7F27C1C0u;
    // 7F27C1C0: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27C1C4:
    ctx->pc = 0x7F27C1C4u;
    // 7F27C1C4: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F27C1C8:
    ctx->pc = 0x7F27C1C8u;
    // 7F27C1C8: addi    r31, r5, 20080
    ctx->gpr[31] = ctx->gpr[5] + (u32)(s32)(20080);

label_7F27C1CC:
    ctx->pc = 0x7F27C1CCu;
    // 7F27C1CC: addi    r24, r4, 21616
    ctx->gpr[24] = ctx->gpr[4] + (u32)(s32)(21616);

label_7F27C1D0:
    ctx->pc = 0x7F27C1D0u;
    // 7F27C1D0: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F27C1D4:
    ctx->pc = 0x7F27C1D4u;
    // 7F27C1D4: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F27C1D8:
    ctx->pc = 0x7F27C1D8u;
    // 7F27C1D8: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F27C1DC:
    ctx->pc = 0x7F27C1DCu;
    // 7F27C1DC: b       0x7F27C2E0
    {
            goto label_7F27C2E0;
    }

label_7F27C1E0:
    ctx->pc = 0x7F27C1E0u;
    ctx->downcount -= 4;
    // 7F27C1E0: lwzx    r30, r31, r25
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[25];
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F27C1E4:
    ctx->pc = 0x7F27C1E4u;
    // 7F27C1E4: lwz     r0, 212(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(212);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C1E8:
    // 7F27C1E8: rlwinm. r0, r0, 0, 29, 29
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

label_7F27C1EC:
    // 7F27C1EC: bc    12, 2, 0x7F27C2D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27C2D8;
        }
    }

label_7F27C1F0:
    ctx->pc = 0x7F27C1F0u;
    ctx->downcount -= 3;
    // 7F27C1F0: lhz     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F27C1F4:
    // 7F27C1F4: rlwinm. r0, r0, 0, 30, 30
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

label_7F27C1F8:
    // 7F27C1F8: bc    4, 2, 0x7F27C2D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27C2D8;
        }
    }

label_7F27C1FC:
    ctx->pc = 0x7F27C1FCu;
    ctx->downcount -= 3;
    // 7F27C1FC: lbz     r0, 154(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(154);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F27C200:
    // 7F27C200: rlwinm. r0, r0, 0, 31, 31
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

label_7F27C204:
    // 7F27C204: bc    12, 2, 0x7F27C2D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27C2D8;
        }
    }

label_7F27C208:
    ctx->pc = 0x7F27C208u;
    ctx->downcount -= 4;
    // 7F27C208: lwz     r4, 688(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(688);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27C20C:
    ctx->pc = 0x7F27C20Cu;
    // 7F27C20C: lwz     r23, 136(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(136);
        ctx->gpr[23] = mem_read32(ctx, ea);
    }

label_7F27C210:
    // 7F27C210: cmpwi   r4, -1
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F27C214:
    // 7F27C214: bc    12, 2, 0x7F27C224
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27C224;
        }
    }

label_7F27C218:
    ctx->downcount -= 2;
    // 7F27C218: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F27C21C:
    // 7F27C21C: bl      0x7F03C214
    {
            ctx->lr = 0x7F27C220u;
            ctx->pc = 0x7F03C214u;
            return;
    }

label_7F27C220:
    ctx->downcount -= 1;
    // 7F27C220: b       0x7F27C238
    {
            goto label_7F27C238;
    }

label_7F27C224:
    ctx->pc = 0x7F27C224u;
    ctx->downcount -= 5;
    // 7F27C224: lwz     r3, 64(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27C228:
    ctx->pc = 0x7F27C228u;
    // 7F27C228: lwz     r0, 352(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(352);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C22C:
    // 7F27C22C: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F27C230:
    // 7F27C230: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_7F27C234:
    // 7F27C234: rlwinm r3, r0, 27, 5, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_7F27C238:
    ctx->downcount -= 2;
    // 7F27C238: cmplwi  r23, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[23]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F27C23C:
    // 7F27C23C: bc    12, 2, 0x7F27C2D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27C2D8;
        }
    }

label_7F27C240:
    ctx->pc = 0x7F27C240u;
    ctx->downcount -= 3;
    // 7F27C240: lwz     r0, 68(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C244:
    // 7F27C244: rlwinm. r0, r0, 0, 7, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x01000000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F27C248:
    // 7F27C248: bc    12, 2, 0x7F27C2D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27C2D8;
        }
    }

label_7F27C24C:
    ctx->downcount -= 2;
    // 7F27C24C: cmpwi   r3, 0
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

label_7F27C250:
    // 7F27C250: bc    12, 2, 0x7F27C2D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27C2D8;
        }
    }

label_7F27C254:
    ctx->downcount -= 2;
    // 7F27C254: cmpwi   r29, 0
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

label_7F27C258:
    // 7F27C258: bc    4, 2, 0x7F27C2D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27C2D0;
        }
    }

label_7F27C25C:
    ctx->downcount -= 5;
    // 7F27C25C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27C260:
    // 7F27C260: lis     r3, 16
    ctx->gpr[3] = ((u32)(s32)(16) << 16);

label_7F27C264:
    // 7F27C264: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F27C268:
    // 7F27C268: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F27C26C:
    // 7F27C26C: bl      0x7F012018
    {
            ctx->lr = 0x7F27C270u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F27C270:
    ctx->downcount -= 5;
    // 7F27C270: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F27C274:
    // 7F27C274: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F27C278:
    // 7F27C278: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F27C27C:
    // 7F27C27C: or.   r0, r4, r0
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

label_7F27C280:
    // 7F27C280: bc    12, 2, 0x7F27C2C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27C2C8;
        }
    }

label_7F27C284:
    ctx->pc = 0x7F27C284u;
    ctx->downcount -= 4;
    // 7F27C284: lwz     r3, 208(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27C288:
    ctx->pc = 0x7F27C288u;
    // 7F27C288: lfs     f31, 144(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F27C288u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F27C28C:
    ctx->pc = 0x7F27C28Cu;
    // 7F27C28C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27C290:
    // 7F27C290: bl      0x7F27C164
    {
            ctx->lr = 0x7F27C294u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27C164u;
                return;
            }
            goto label_7F27C164;
    }

label_7F27C294:
    ctx->downcount -= 5;
    // 7F27C294: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27C298:
    ctx->pc = 0x7F27C298u;
    // 7F27C298: lfs     f0, 25260(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27C298u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25260);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27C29C:
    ctx->pc = 0x7F27C29Cu;
    // 7F27C29C: fadds   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F27C29Cu)) return;
    ppc_fadds(ctx, 0, 0, 31);

label_7F27C2A0:
    ctx->pc = 0x7F27C2A0u;
    // 7F27C2A0: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27C2A0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F27C2A4:
    // 7F27C2A4: bc    4, 0, 0x7F27C2D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27C2D8;
        }
    }

label_7F27C2A8:
    ctx->pc = 0x7F27C2A8u;
    ctx->downcount -= 6;
    // 7F27C2A8: lwz     r3, 392(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(392);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27C2AC:
    // 7F27C2AC: li      r27, 1
    ctx->gpr[27] = (u32)(s32)(1);

label_7F27C2B0:
    // 7F27C2B0: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F27C2B4:
    // 7F27C2B4: cmpwi   r0, 8
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

label_7F27C2B8:
    ctx->pc = 0x7F27C2B8u;
    // 7F27C2B8: stw     r0, 392(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(392);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27C2BC:
    // 7F27C2BC: bc    4, 1, 0x7F27C2D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27C2D8;
        }
    }

label_7F27C2C0:
    ctx->downcount -= 2;
    // 7F27C2C0: li      r28, 1
    ctx->gpr[28] = (u32)(s32)(1);

label_7F27C2C4:
    // 7F27C2C4: b       0x7F27C2EC
    {
            goto label_7F27C2EC;
    }

label_7F27C2C8:
    ctx->downcount -= 2;
    // 7F27C2C8: li      r28, 1
    ctx->gpr[28] = (u32)(s32)(1);

label_7F27C2CC:
    // 7F27C2CC: b       0x7F27C2EC
    {
            goto label_7F27C2EC;
    }

label_7F27C2D0:
    ctx->downcount -= 2;
    // 7F27C2D0: li      r28, 2
    ctx->gpr[28] = (u32)(s32)(2);

label_7F27C2D4:
    // 7F27C2D4: b       0x7F27C2EC
    {
            goto label_7F27C2EC;
    }

label_7F27C2D8:
    ctx->downcount -= 2;
    // 7F27C2D8: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F27C2DC:
    // 7F27C2DC: addi    r25, r25, 4
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(4);

label_7F27C2E0:
    ctx->pc = 0x7F27C2E0u;
    ctx->downcount -= 3;
    // 7F27C2E0: lwz     r0, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C2E4:
    // 7F27C2E4: cmpw    r29, r0
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

label_7F27C2E8:
    // 7F27C2E8: bc    12, 0, 0x7F27C1E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27C1E0u;
                return;
            }
            goto label_7F27C1E0;
        }
    }

label_7F27C2EC:
    ctx->pc = 0x7F27C2ECu;
    ctx->downcount -= 2;
    // 7F27C2EC: cmpwi   r27, 0
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

label_7F27C2F0:
    ctx->pc = 0x7F27C2F0u;
    // 7F27C2F0: bc    4, 2, 0x7F27C2FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27C2FC;
        }
    }

label_7F27C2F4:
    ctx->pc = 0x7F27C2F4u;
    ctx->downcount -= 2;
    // 7F27C2F4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F27C2F8:
    ctx->pc = 0x7F27C2F8u;
    // 7F27C2F8: stw     r0, 392(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(392);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27C2FC:
    ctx->pc = 0x7F27C2FCu;
    ctx->downcount -= 19;
    // 7F27C2FC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F27C300:
    ctx->pc = 0x7F27C300u;
    // 7F27C300: psq_l   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F27C300u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F27C300u);
        if (ctx->exception) return;
    }

label_7F27C304:
    ctx->pc = 0x7F27C304u;
    // 7F27C304: lfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27C304u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27C308:
    ctx->pc = 0x7F27C308u;
    // 7F27C308: lmw     r23, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F27C30C:
    ctx->pc = 0x7F27C30Cu;
    // 7F27C30C: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C310:
    ctx->pc = 0x7F27C310u;
    // 7F27C310: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27C314:
    ctx->pc = 0x7F27C314u;
    // 7F27C314: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F27C318:
    ctx->pc = 0x7F27C318u;
    // 7F27C318: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27C31C:
    ctx->pc = 0x7F27C31Cu;
    ctx->downcount -= 27;
    // 7F27C31C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27C320:
    ctx->pc = 0x7F27C320u;
    // 7F27C320: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27C324:
    ctx->pc = 0x7F27C324u;
    // 7F27C324: lis     r6, 2
    ctx->gpr[6] = ((u32)(s32)(2) << 16);

label_7F27C328:
    ctx->pc = 0x7F27C328u;
    // 7F27C328: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F27C32C:
    ctx->pc = 0x7F27C32Cu;
    // 7F27C32C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27C330:
    ctx->pc = 0x7F27C330u;
    // 7F27C330: addi    r0, r6, 992
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(992);

label_7F27C334:
    ctx->pc = 0x7F27C334u;
    // 7F27C334: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F27C338:
    ctx->pc = 0x7F27C338u;
    // 7F27C338: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F27C33C:
    ctx->pc = 0x7F27C33Cu;
    // 7F27C33C: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F27C340:
    ctx->pc = 0x7F27C340u;
    // 7F27C340: lwz     r8, 144(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(144);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F27C344:
    ctx->pc = 0x7F27C344u;
    // 7F27C344: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27C348:
    ctx->pc = 0x7F27C348u;
    // 7F27C348: and   r3, r3, r0
    {
        ctx->gpr[3] = ctx->gpr[3] & ctx->gpr[0];
    }

label_7F27C34C:
    ctx->pc = 0x7F27C34Cu;
    // 7F27C34C: and   r0, r8, r7
    {
        ctx->gpr[0] = ctx->gpr[8] & ctx->gpr[7];
    }

label_7F27C350:
    ctx->pc = 0x7F27C350u;
    // 7F27C350: xor   r3, r3, r7
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[7];
    }

label_7F27C354:
    ctx->pc = 0x7F27C354u;
    // 7F27C354: xor   r0, r0, r7
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[7];
    }

label_7F27C358:
    ctx->pc = 0x7F27C358u;
    // 7F27C358: or.   r0, r3, r0
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

label_7F27C35C:
    ctx->pc = 0x7F27C35Cu;
    // 7F27C35C: bc    12, 2, 0x7F27C39C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27C39C;
        }
    }

label_7F27C360:
    ctx->pc = 0x7F27C360u;
    ctx->downcount -= 3;
    // 7F27C360: lwz     r0, 364(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(364);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C364:
    ctx->pc = 0x7F27C364u;
    // 7F27C364: cmpwi   r0, 2
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

label_7F27C368:
    ctx->pc = 0x7F27C368u;
    // 7F27C368: bc    12, 2, 0x7F27C39C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27C39C;
        }
    }

label_7F27C36C:
    ctx->pc = 0x7F27C36Cu;
    ctx->downcount -= 4;
    // 7F27C36C: lwz     r5, 372(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(372);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F27C370:
    ctx->pc = 0x7F27C370u;
    // 7F27C370: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27C374:
    ctx->pc = 0x7F27C374u;
    // 7F27C374: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F27C378:
    ctx->pc = 0x7F27C378u;
    // 7F27C378: bl      0x7F3C7FF8
    {
            ctx->lr = 0x7F27C37Cu;
            ctx->pc = 0x7F3C7FF8u;
            return;
    }

label_7F27C37C:
    ctx->pc = 0x7F27C37Cu;
    ctx->downcount -= 2;
    // 7F27C37C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27C380:
    ctx->pc = 0x7F27C380u;
    // 7F27C380: bl      0x7F27C134
    {
            ctx->lr = 0x7F27C384u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27C134u;
                return;
            }
            goto label_7F27C134;
    }

label_7F27C384:
    ctx->pc = 0x7F27C384u;
    ctx->downcount -= 6;
    // 7F27C384: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F27C388:
    ctx->pc = 0x7F27C388u;
    // 7F27C388: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F27C38C:
    ctx->pc = 0x7F27C38Cu;
    // 7F27C38C: stw     r3, 364(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(364);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27C390:
    ctx->pc = 0x7F27C390u;
    // 7F27C390: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F27C394:
    ctx->pc = 0x7F27C394u;
    // 7F27C394: stw     r0, 368(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(368);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27C398:
    ctx->pc = 0x7F27C398u;
    // 7F27C398: bl      0x7F015180
    {
            ctx->lr = 0x7F27C39Cu;
            ctx->pc = 0x7F015180u;
            return;
    }

label_7F27C39C:
    ctx->pc = 0x7F27C39Cu;
    ctx->downcount -= 2;
    // 7F27C39C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F27C3A0:
    ctx->pc = 0x7F27C3A0u;
    // 7F27C3A0: bl      0x7F0150C0
    {
            ctx->lr = 0x7F27C3A4u;
            ctx->pc = 0x7F0150C0u;
            return;
    }

label_7F27C3A4:
    ctx->pc = 0x7F27C3A4u;
    ctx->downcount -= 16;
    // 7F27C3A4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F27C3A8:
    ctx->pc = 0x7F27C3A8u;
    // 7F27C3A8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C3AC:
    ctx->pc = 0x7F27C3ACu;
    // 7F27C3AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27C3B0:
    ctx->pc = 0x7F27C3B0u;
    // 7F27C3B0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F27C3B4:
    ctx->pc = 0x7F27C3B4u;
    // 7F27C3B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27C3B8:
    ctx->pc = 0x7F27C3B8u;
    ctx->downcount -= 8;
    // 7F27C3B8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27C3BC:
    ctx->pc = 0x7F27C3BCu;
    // 7F27C3BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27C3C0:
    ctx->pc = 0x7F27C3C0u;
    // 7F27C3C0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27C3C4:
    ctx->pc = 0x7F27C3C4u;
    // 7F27C3C4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F27C3C8:
    ctx->pc = 0x7F27C3C8u;
    // 7F27C3C8: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F27C3CC:
    ctx->pc = 0x7F27C3CCu;
    // 7F27C3CC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27C3D0:
    ctx->pc = 0x7F27C3D0u;
    // 7F27C3D0: lwz     r3, 376(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(376);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27C3D4:
    ctx->pc = 0x7F27C3D4u;
    // 7F27C3D4: bl      0x7F3C9624
    {
            ctx->lr = 0x7F27C3D8u;
            ctx->pc = 0x7F3C9624u;
            return;
    }

label_7F27C3D8:
    ctx->pc = 0x7F27C3D8u;
    ctx->downcount -= 1;
    // 7F27C3D8: b       0x7F27C44C
    {
            goto label_7F27C44C;
    }

label_7F27C3DC:
    ctx->pc = 0x7F27C3DCu;
    ctx->downcount -= 5;
    // 7F27C3DC: lwz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27C3E0:
    ctx->pc = 0x7F27C3E0u;
    // 7F27C3E0: lwz     r4, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27C3E4:
    ctx->pc = 0x7F27C3E4u;
    // 7F27C3E4: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C3E8:
    // 7F27C3E8: cmpwi   r0, 0
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

label_7F27C3EC:
    // 7F27C3EC: bc    4, 2, 0x7F27C440
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27C440;
        }
    }

label_7F27C3F0:
    ctx->pc = 0x7F27C3F0u;
    ctx->downcount -= 3;
    // 7F27C3F0: lwz     r0, 364(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(364);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C3F4:
    // 7F27C3F4: cmpwi   r0, 2
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

label_7F27C3F8:
    // 7F27C3F8: bc    12, 2, 0x7F27C440
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27C440;
        }
    }

label_7F27C3FC:
    ctx->downcount -= 2;
    // 7F27C3FC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27C400:
    // 7F27C400: bl      0x7F27C1A0
    {
            ctx->lr = 0x7F27C404u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27C1A0u;
                return;
            }
            goto label_7F27C1A0;
    }

label_7F27C404:
    ctx->downcount -= 2;
    // 7F27C404: cmpwi   r3, 1
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

label_7F27C408:
    // 7F27C408: bc    4, 2, 0x7F27C414
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27C414;
        }
    }

label_7F27C40C:
    ctx->downcount -= 2;
    // 7F27C40C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27C410:
    // 7F27C410: bl      0x7F27C0EC
    {
            ctx->lr = 0x7F27C414u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27C0ECu;
                return;
            }
            goto label_7F27C0EC;
    }

label_7F27C414:
    ctx->downcount -= 8;
    // 7F27C414: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F27C418:
    // 7F27C418: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F27C41C:
    ctx->pc = 0x7F27C41Cu;
    // 7F27C41C: stw     r3, 364(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(364);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27C420:
    // 7F27C420: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27C424:
    // 7F27C424: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F27C428:
    ctx->pc = 0x7F27C428u;
    // 7F27C428: stw     r0, 368(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(368);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27C42C:
    ctx->pc = 0x7F27C42Cu;
    // 7F27C42C: lwz     r5, 396(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(396);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F27C430:
    // 7F27C430: bl      0x7F3C7FF8
    {
            ctx->lr = 0x7F27C434u;
            ctx->pc = 0x7F3C7FF8u;
            return;
    }

label_7F27C434:
    ctx->downcount -= 2;
    // 7F27C434: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27C438:
    // 7F27C438: bl      0x7F27C134
    {
            ctx->lr = 0x7F27C43Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27C134u;
                return;
            }
            goto label_7F27C134;
    }

label_7F27C43C:
    ctx->downcount -= 1;
    // 7F27C43C: b       0x7F27C454
    {
            goto label_7F27C454;
    }

label_7F27C440:
    ctx->pc = 0x7F27C440u;
    ctx->downcount -= 3;
    // 7F27C440: lwz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27C444:
    // 7F27C444: addi    r0, r4, 16
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(16);

label_7F27C448:
    ctx->pc = 0x7F27C448u;
    // 7F27C448: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27C44C:
    ctx->downcount -= 2;
    // 7F27C44C: addic.  r3, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[3] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F27C450:
    // 7F27C450: bc    4, 0, 0x7F27C3DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27C3DCu;
                return;
            }
            goto label_7F27C3DC;
        }
    }

label_7F27C454:
    ctx->pc = 0x7F27C454u;
    ctx->downcount -= 6;
    // 7F27C454: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C458:
    ctx->pc = 0x7F27C458u;
    // 7F27C458: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F27C45C:
    ctx->pc = 0x7F27C45Cu;
    // 7F27C45C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27C460:
    ctx->pc = 0x7F27C460u;
    // 7F27C460: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F27C464:
    ctx->pc = 0x7F27C464u;
    // 7F27C464: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27C468:
    ctx->pc = 0x7F27C468u;
    ctx->downcount -= 19;
    // 7F27C468: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27C46C:
    ctx->pc = 0x7F27C46Cu;
    // 7F27C46C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27C470:
    ctx->pc = 0x7F27C470u;
    // 7F27C470: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27C474:
    ctx->pc = 0x7F27C474u;
    // 7F27C474: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F27C478:
    ctx->pc = 0x7F27C478u;
    // 7F27C478: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27C47C:
    ctx->pc = 0x7F27C47Cu;
    // 7F27C47C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F27C480:
    ctx->pc = 0x7F27C480u;
    // 7F27C480: lbz     r0, 696(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(696);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F27C484:
    ctx->pc = 0x7F27C484u;
    // 7F27C484: cmplwi  r0, 0x0000
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

label_7F27C488:
    ctx->pc = 0x7F27C488u;
    // 7F27C488: bc    4, 2, 0x7F27C510
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27C510;
        }
    }

label_7F27C48C:
    ctx->pc = 0x7F27C48Cu;
    ctx->downcount -= 3;
    // 7F27C48C: lwz     r0, 688(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(688);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C490:
    ctx->pc = 0x7F27C490u;
    // 7F27C490: cmpwi   r0, -1
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

label_7F27C494:
    ctx->pc = 0x7F27C494u;
    // 7F27C494: bc    12, 2, 0x7F27C510
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27C510;
        }
    }

label_7F27C498:
    ctx->pc = 0x7F27C498u;
    ctx->downcount -= 17;
    // 7F27C498: lwz     r5, 352(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(352);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F27C49C:
    ctx->pc = 0x7F27C49Cu;
    // 7F27C49C: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_7F27C4A0:
    ctx->pc = 0x7F27C4A0u;
    // 7F27C4A0: lwz     r0, 396(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(396);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C4A4:
    ctx->pc = 0x7F27C4A4u;
    // 7F27C4A4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F27C4A8:
    ctx->pc = 0x7F27C4A8u;
    // 7F27C4A8: lwz     r6, 128(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(128);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F27C4AC:
    ctx->pc = 0x7F27C4ACu;
    // 7F27C4AC: lwz     r5, 144(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(144);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F27C4B0:
    ctx->pc = 0x7F27C4B0u;
    // 7F27C4B0: cmpwi   r0, 7
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

label_7F27C4B4:
    ctx->pc = 0x7F27C4B4u;
    // 7F27C4B4: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27C4B8:
    ctx->pc = 0x7F27C4B8u;
    // 7F27C4B8: subf   r0, r6, r5
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F27C4BC:
    ctx->pc = 0x7F27C4BCu;
    // 7F27C4BC: lfd     f1, 25192(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F27C4BCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(25192);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27C4C0:
    ctx->pc = 0x7F27C4C0u;
    // 7F27C4C0: srawi r0, r0, 2
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

label_7F27C4C4:
    ctx->pc = 0x7F27C4C4u;
    // 7F27C4C4: addze  r0, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F27C4C8:
    ctx->pc = 0x7F27C4C8u;
    // 7F27C4C8: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F27C4CC:
    ctx->pc = 0x7F27C4CCu;
    // 7F27C4CC: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27C4D0:
    ctx->pc = 0x7F27C4D0u;
    // 7F27C4D0: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27C4D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27C4D4:
    ctx->pc = 0x7F27C4D4u;
    // 7F27C4D4: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F27C4D4u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F27C4D8:
    ctx->pc = 0x7F27C4D8u;
    // 7F27C4D8: bc    4, 2, 0x7F27C4EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27C4EC;
        }
    }

label_7F27C4DC:
    ctx->pc = 0x7F27C4DCu;
    ctx->downcount -= 4;
    // 7F27C4DC: lwz     r3, 692(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(692);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27C4E0:
    ctx->pc = 0x7F27C4E0u;
    // 7F27C4E0: lfs     f0, 80(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27C4E0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27C4E4:
    ctx->pc = 0x7F27C4E4u;
    // 7F27C4E4: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F27C4E4u)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_7F27C4E8:
    ctx->pc = 0x7F27C4E8u;
    // 7F27C4E8: stfs     f0, 80(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27C4E8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F27C4EC:
    ctx->pc = 0x7F27C4ECu;
    ctx->downcount -= 3;
    // 7F27C4EC: lwz     r0, 396(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(396);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C4F0:
    ctx->pc = 0x7F27C4F0u;
    // 7F27C4F0: cmpwi   r0, 4
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

label_7F27C4F4:
    ctx->pc = 0x7F27C4F4u;
    // 7F27C4F4: bc    4, 2, 0x7F27C508
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27C508;
        }
    }

label_7F27C4F8:
    ctx->pc = 0x7F27C4F8u;
    ctx->downcount -= 4;
    // 7F27C4F8: lwz     r3, 692(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(692);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27C4FC:
    ctx->pc = 0x7F27C4FCu;
    // 7F27C4FC: lfs     f0, 80(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27C4FCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27C500:
    ctx->pc = 0x7F27C500u;
    // 7F27C500: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F27C500u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F27C504:
    ctx->pc = 0x7F27C504u;
    // 7F27C504: stfs     f0, 80(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27C504u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F27C508:
    ctx->pc = 0x7F27C508u;
    ctx->downcount -= 2;
    // 7F27C508: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F27C50C:
    ctx->pc = 0x7F27C50Cu;
    // 7F27C50C: stb     r0, 696(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(696);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F27C510:
    ctx->pc = 0x7F27C510u;
    ctx->downcount -= 3;
    // 7F27C510: lwz     r0, 364(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(364);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C514:
    ctx->pc = 0x7F27C514u;
    // 7F27C514: cmpwi   r0, 0
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

label_7F27C518:
    ctx->pc = 0x7F27C518u;
    // 7F27C518: bc    4, 2, 0x7F27C590
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27C590;
        }
    }

label_7F27C51C:
    ctx->pc = 0x7F27C51Cu;
    ctx->downcount -= 2;
    // 7F27C51C: cmpwi   r31, 0
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

label_7F27C520:
    ctx->pc = 0x7F27C520u;
    // 7F27C520: bc    12, 2, 0x7F27C620
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27C620;
        }
    }

label_7F27C524:
    ctx->pc = 0x7F27C524u;
    ctx->downcount -= 6;
    // 7F27C524: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F27C528:
    ctx->pc = 0x7F27C528u;
    // 7F27C528: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F27C52C:
    ctx->pc = 0x7F27C52Cu;
    // 7F27C52C: stw     r0, 364(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(364);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27C530:
    ctx->pc = 0x7F27C530u;
    // 7F27C530: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F27C534:
    ctx->pc = 0x7F27C534u;
    // 7F27C534: lwz     r5, 372(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(372);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F27C538:
    ctx->pc = 0x7F27C538u;
    // 7F27C538: bl      0x7F3C7FF8
    {
            ctx->lr = 0x7F27C53Cu;
            ctx->pc = 0x7F3C7FF8u;
            return;
    }

label_7F27C53C:
    ctx->pc = 0x7F27C53Cu;
    ctx->downcount -= 2;
    // 7F27C53C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F27C540:
    ctx->pc = 0x7F27C540u;
    // 7F27C540: bl      0x7F27C134
    {
            ctx->lr = 0x7F27C544u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27C134u;
                return;
            }
            goto label_7F27C134;
    }

label_7F27C544:
    ctx->pc = 0x7F27C544u;
    ctx->downcount -= 12;
    // 7F27C544: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27C548:
    ctx->pc = 0x7F27C548u;
    // 7F27C548: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F27C54C:
    ctx->pc = 0x7F27C54Cu;
    // 7F27C54C: addi    r5, r3, 25268
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(25268);

label_7F27C550:
    ctx->pc = 0x7F27C550u;
    // 7F27C550: lfs     f0, 25272(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F27C550u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(25272);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27C554:
    ctx->pc = 0x7F27C554u;
    // 7F27C554: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F27C554u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F27C558:
    ctx->pc = 0x7F27C558u;
    // 7F27C558: addi    r3, r30, 320
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(320);

label_7F27C55C:
    ctx->pc = 0x7F27C55Cu;
    // 7F27C55C: addi    r4, r30, 356
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(356);

label_7F27C560:
    ctx->pc = 0x7F27C560u;
    // 7F27C560: stfs     f1, 308(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F27C560u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(308);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F27C564:
    ctx->pc = 0x7F27C564u;
    // 7F27C564: lfs     f1, 324(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F27C564u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F27C568:
    ctx->pc = 0x7F27C568u;
    // 7F27C568: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27C568u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F27C56C:
    ctx->pc = 0x7F27C56Cu;
    // 7F27C56C: stfs     f0, 324(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F27C56Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F27C570:
    ctx->pc = 0x7F27C570u;
    // 7F27C570: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F27C574u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F27C574:
    ctx->pc = 0x7F27C574u;
    ctx->downcount -= 2;
    // 7F27C574: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27C578:
    ctx->pc = 0x7F27C578u;
    // 7F27C578: bl      0x7F3B35CC
    {
            ctx->lr = 0x7F27C57Cu;
            ctx->pc = 0x7F3B35CCu;
            return;
    }

label_7F27C57C:
    ctx->pc = 0x7F27C57Cu;
    ctx->downcount -= 2;
    // 7F27C57C: cmpwi   r31, 2
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F27C580:
    ctx->pc = 0x7F27C580u;
    // 7F27C580: bc    4, 2, 0x7F27C620
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27C620;
        }
    }

label_7F27C584:
    ctx->pc = 0x7F27C584u;
    ctx->downcount -= 3;
    // 7F27C584: lwz     r0, 372(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(372);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C588:
    ctx->pc = 0x7F27C588u;
    // 7F27C588: stw     r0, 368(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(368);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27C58C:
    ctx->pc = 0x7F27C58Cu;
    // 7F27C58C: b       0x7F27C620
    {
            goto label_7F27C620;
    }

label_7F27C590:
    ctx->pc = 0x7F27C590u;
    ctx->downcount -= 2;
    // 7F27C590: cmpwi   r31, 2
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F27C594:
    ctx->pc = 0x7F27C594u;
    // 7F27C594: bc    4, 2, 0x7F27C5A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27C5A0;
        }
    }

label_7F27C598:
    ctx->pc = 0x7F27C598u;
    ctx->downcount -= 2;
    // 7F27C598: lwz     r0, 372(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(372);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C59C:
    ctx->pc = 0x7F27C59Cu;
    // 7F27C59C: stw     r0, 368(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(368);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27C5A0:
    ctx->pc = 0x7F27C5A0u;
    ctx->downcount -= 13;
    // 7F27C5A0: lwz     r4, 368(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(368);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27C5A4:
    ctx->pc = 0x7F27C5A4u;
    // 7F27C5A4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27C5A8:
    ctx->pc = 0x7F27C5A8u;
    // 7F27C5A8: lfs     f2, 25276(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27C5A8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25276);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F27C5AC:
    ctx->pc = 0x7F27C5ACu;
    // 7F27C5AC: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F27C5B0:
    ctx->pc = 0x7F27C5B0u;
    // 7F27C5B0: stw     r0, 368(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(368);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27C5B4:
    ctx->pc = 0x7F27C5B4u;
    // 7F27C5B4: lfs     f0, 308(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F27C5B4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(308);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27C5B8:
    ctx->pc = 0x7F27C5B8u;
    // 7F27C5B8: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F27C5B8u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F27C5BC:
    ctx->pc = 0x7F27C5BCu;
    // 7F27C5BC: stfs     f0, 308(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F27C5BCu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(308);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F27C5C0:
    ctx->pc = 0x7F27C5C0u;
    // 7F27C5C0: lfs     f1, 324(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F27C5C0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F27C5C4:
    ctx->pc = 0x7F27C5C4u;
    // 7F27C5C4: lfs     f0, 308(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F27C5C4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(308);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27C5C8:
    ctx->pc = 0x7F27C5C8u;
    // 7F27C5C8: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27C5C8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F27C5CC:
    ctx->pc = 0x7F27C5CCu;
    // 7F27C5CC: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F27C5D0:
    ctx->pc = 0x7F27C5D0u;
    // 7F27C5D0: bc    4, 2, 0x7F27C5DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27C5DC;
        }
    }

label_7F27C5D4:
    ctx->pc = 0x7F27C5D4u;
    ctx->downcount -= 2;
    // 7F27C5D4: fsubs   f0, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F27C5D4u)) return;
    ppc_fsubs(ctx, 0, 1, 2);

label_7F27C5D8:
    ctx->pc = 0x7F27C5D8u;
    // 7F27C5D8: stfs     f0, 324(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F27C5D8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F27C5DC:
    ctx->pc = 0x7F27C5DCu;
    ctx->downcount -= 3;
    // 7F27C5DC: addi    r3, r30, 320
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(320);

label_7F27C5E0:
    ctx->pc = 0x7F27C5E0u;
    // 7F27C5E0: addi    r4, r30, 356
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(356);

label_7F27C5E4:
    ctx->pc = 0x7F27C5E4u;
    // 7F27C5E4: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F27C5E8u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F27C5E8:
    ctx->pc = 0x7F27C5E8u;
    ctx->downcount -= 2;
    // 7F27C5E8: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27C5EC:
    ctx->pc = 0x7F27C5ECu;
    // 7F27C5EC: bl      0x7F3B35CC
    {
            ctx->lr = 0x7F27C5F0u;
            ctx->pc = 0x7F3B35CCu;
            return;
    }

label_7F27C5F0:
    ctx->pc = 0x7F27C5F0u;
    ctx->downcount -= 4;
    // 7F27C5F0: lwz     r3, 368(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(368);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27C5F4:
    ctx->pc = 0x7F27C5F4u;
    // 7F27C5F4: lwz     r0, 372(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(372);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C5F8:
    ctx->pc = 0x7F27C5F8u;
    // 7F27C5F8: cmpw    r3, r0
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

label_7F27C5FC:
    ctx->pc = 0x7F27C5FCu;
    // 7F27C5FC: bc    12, 0, 0x7F27C620
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27C620;
        }
    }

label_7F27C600:
    ctx->pc = 0x7F27C600u;
    ctx->downcount -= 2;
    // 7F27C600: cmpwi   r31, 1
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F27C604:
    ctx->pc = 0x7F27C604u;
    // 7F27C604: bc    4, 2, 0x7F27C610
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27C610;
        }
    }

label_7F27C608:
    ctx->pc = 0x7F27C608u;
    ctx->downcount -= 2;
    // 7F27C608: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F27C60C:
    ctx->pc = 0x7F27C60Cu;
    // 7F27C60C: bl      0x7F27C0EC
    {
            ctx->lr = 0x7F27C610u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27C0ECu;
                return;
            }
            goto label_7F27C0EC;
    }

label_7F27C610:
    ctx->pc = 0x7F27C610u;
    ctx->downcount -= 4;
    // 7F27C610: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F27C614:
    ctx->pc = 0x7F27C614u;
    // 7F27C614: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F27C618:
    ctx->pc = 0x7F27C618u;
    // 7F27C618: stw     r3, 364(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(364);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27C61C:
    ctx->pc = 0x7F27C61Cu;
    // 7F27C61C: stw     r0, 368(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(368);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27C620:
    ctx->pc = 0x7F27C620u;
    ctx->downcount -= 16;
    // 7F27C620: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F27C624:
    ctx->pc = 0x7F27C624u;
    // 7F27C624: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C628:
    ctx->pc = 0x7F27C628u;
    // 7F27C628: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27C62C:
    ctx->pc = 0x7F27C62Cu;
    // 7F27C62C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F27C630:
    ctx->pc = 0x7F27C630u;
    // 7F27C630: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27C634:
    ctx->pc = 0x7F27C634u;
    ctx->downcount -= 10;
    // 7F27C634: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27C638:
    ctx->pc = 0x7F27C638u;
    // 7F27C638: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27C63C:
    ctx->pc = 0x7F27C63Cu;
    // 7F27C63C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27C640:
    ctx->pc = 0x7F27C640u;
    // 7F27C640: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F27C644:
    ctx->pc = 0x7F27C644u;
    // 7F27C644: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27C648:
    ctx->pc = 0x7F27C648u;
    // 7F27C648: lwz     r4, 368(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(368);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27C64C:
    ctx->pc = 0x7F27C64Cu;
    // 7F27C64C: addi    r3, r31, 96
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(96);

label_7F27C650:
    ctx->pc = 0x7F27C650u;
    // 7F27C650: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F27C654:
    ctx->pc = 0x7F27C654u;
    // 7F27C654: stw     r0, 368(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(368);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27C658:
    ctx->pc = 0x7F27C658u;
    // 7F27C658: bl      0x7F015180
    {
            ctx->lr = 0x7F27C65Cu;
            ctx->pc = 0x7F015180u;
            return;
    }

label_7F27C65C:
    ctx->pc = 0x7F27C65Cu;
    ctx->downcount -= 3;
    // 7F27C65C: lwz     r0, 368(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(368);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C660:
    ctx->pc = 0x7F27C660u;
    // 7F27C660: cmpwi   r0, 60
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

label_7F27C664:
    ctx->pc = 0x7F27C664u;
    // 7F27C664: bc    4, 2, 0x7F27C67C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27C67C;
        }
    }

label_7F27C668:
    ctx->pc = 0x7F27C668u;
    ctx->downcount -= 5;
    // 7F27C668: lwz     r3, 352(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(352);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27C66C:
    ctx->pc = 0x7F27C66Cu;
    // 7F27C66C: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C670:
    ctx->pc = 0x7F27C670u;
    // 7F27C670: oris    r4, r0, 0x0201
    ctx->gpr[4] = ctx->gpr[0] | (0x0201u << 16);

label_7F27C674:
    ctx->pc = 0x7F27C674u;
    // 7F27C674: ori     r4, r4, 0x27C0
    ctx->gpr[4] = ctx->gpr[4] | 0x27C0u;

label_7F27C678:
    ctx->pc = 0x7F27C678u;
    // 7F27C678: bl      0x7F27C6E4
    {
            ctx->lr = 0x7F27C67Cu;
            goto label_7F27C6E4;
    }

label_7F27C67C:
    ctx->pc = 0x7F27C67Cu;
    ctx->downcount -= 3;
    // 7F27C67C: lwz     r0, 368(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(368);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C680:
    ctx->pc = 0x7F27C680u;
    // 7F27C680: cmpwi   r0, 6
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

label_7F27C684:
    ctx->pc = 0x7F27C684u;
    // 7F27C684: bc    4, 2, 0x7F27C6A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27C6A4;
        }
    }

label_7F27C688:
    ctx->pc = 0x7F27C688u;
    ctx->downcount -= 4;
    // 7F27C688: lwz     r3, 352(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(352);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27C68C:
    ctx->pc = 0x7F27C68Cu;
    // 7F27C68C: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C690:
    ctx->pc = 0x7F27C690u;
    // 7F27C690: ori     r4, r0, 0x0480
    ctx->gpr[4] = ctx->gpr[0] | 0x0480u;

label_7F27C694:
    ctx->pc = 0x7F27C694u;
    // 7F27C694: bl      0x7F27C6E4
    {
            ctx->lr = 0x7F27C698u;
            goto label_7F27C6E4;
    }

label_7F27C698:
    ctx->pc = 0x7F27C698u;
    ctx->downcount -= 3;
    // 7F27C698: lwz     r3, 352(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(352);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27C69C:
    ctx->pc = 0x7F27C69Cu;
    // 7F27C69C: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F27C6A0:
    ctx->pc = 0x7F27C6A0u;
    // 7F27C6A0: bl      0x7F10B970
    {
            ctx->lr = 0x7F27C6A4u;
            ctx->pc = 0x7F10B970u;
            return;
    }

label_7F27C6A4:
    ctx->pc = 0x7F27C6A4u;
    ctx->downcount -= 2;
    // 7F27C6A4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27C6A8:
    ctx->pc = 0x7F27C6A8u;
    // 7F27C6A8: bl      0x7F27C1A0
    {
            ctx->lr = 0x7F27C6ACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27C1A0u;
                return;
            }
            goto label_7F27C1A0;
    }

label_7F27C6AC:
    ctx->pc = 0x7F27C6ACu;
    ctx->downcount -= 2;
    // 7F27C6AC: cmpwi   r3, 1
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

label_7F27C6B0:
    ctx->pc = 0x7F27C6B0u;
    // 7F27C6B0: bc    4, 2, 0x7F27C6BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27C6BC;
        }
    }

label_7F27C6B4:
    ctx->pc = 0x7F27C6B4u;
    ctx->downcount -= 2;
    // 7F27C6B4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27C6B8:
    ctx->pc = 0x7F27C6B8u;
    // 7F27C6B8: bl      0x7F27C0EC
    {
            ctx->lr = 0x7F27C6BCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27C0ECu;
                return;
            }
            goto label_7F27C0EC;
    }

label_7F27C6BC:
    ctx->pc = 0x7F27C6BCu;
    ctx->downcount -= 3;
    // 7F27C6BC: lwz     r0, 368(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(368);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C6C0:
    ctx->pc = 0x7F27C6C0u;
    // 7F27C6C0: cmpwi   r0, 240
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

label_7F27C6C4:
    ctx->pc = 0x7F27C6C4u;
    // 7F27C6C4: bc    4, 0, 0x7F27C6D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27C6D0;
        }
    }

label_7F27C6C8:
    ctx->pc = 0x7F27C6C8u;
    ctx->downcount -= 2;
    // 7F27C6C8: addi    r3, r31, 400
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(400);

label_7F27C6CC:
    ctx->pc = 0x7F27C6CCu;
    // 7F27C6CC: bl      0x7F27BA64
    {
            ctx->lr = 0x7F27C6D0u;
            ctx->pc = 0x7F27BA64u;
            return;
    }

label_7F27C6D0:
    ctx->pc = 0x7F27C6D0u;
    ctx->downcount -= 6;
    // 7F27C6D0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C6D4:
    ctx->pc = 0x7F27C6D4u;
    // 7F27C6D4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F27C6D8:
    ctx->pc = 0x7F27C6D8u;
    // 7F27C6D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27C6DC:
    ctx->pc = 0x7F27C6DCu;
    // 7F27C6DC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F27C6E0:
    ctx->pc = 0x7F27C6E0u;
    // 7F27C6E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27C6E4:
    ctx->pc = 0x7F27C6E4u;
    ctx->downcount -= 4;
    // 7F27C6E4: oris    r0, r4, 0x0100
    ctx->gpr[0] = ctx->gpr[4] | (0x0100u << 16);

label_7F27C6E8:
    ctx->pc = 0x7F27C6E8u;
    // 7F27C6E8: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27C6EC:
    ctx->pc = 0x7F27C6ECu;
    // 7F27C6EC: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27C6F0:
    ctx->pc = 0x7F27C6F0u;
    // 7F27C6F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27C6F4:
    ctx->pc = 0x7F27C6F4u;
    ctx->downcount -= 6;
    // 7F27C6F4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27C6F8:
    ctx->pc = 0x7F27C6F8u;
    // 7F27C6F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27C6FC:
    ctx->pc = 0x7F27C6FCu;
    // 7F27C6FC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27C700:
    ctx->pc = 0x7F27C700u;
    // 7F27C700: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F27C704:
    ctx->pc = 0x7F27C704u;
    // 7F27C704: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27C708:
    ctx->pc = 0x7F27C708u;
    // 7F27C708: bl      0x7F27C3B8
    {
            ctx->lr = 0x7F27C70Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27C3B8u;
                return;
            }
            goto label_7F27C3B8;
    }

label_7F27C70C:
    ctx->pc = 0x7F27C70Cu;
    ctx->downcount -= 3;
    // 7F27C70C: lwz     r0, 364(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(364);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C710:
    ctx->pc = 0x7F27C710u;
    // 7F27C710: cmpwi   r0, 2
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

label_7F27C714:
    ctx->pc = 0x7F27C714u;
    // 7F27C714: bc    12, 2, 0x7F27C744
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27C744;
        }
    }

label_7F27C718:
    ctx->pc = 0x7F27C718u;
    ctx->downcount -= 1;
    // 7F27C718: bc    4, 0, 0x7F27C74C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27C74C;
        }
    }

label_7F27C71C:
    ctx->pc = 0x7F27C71Cu;
    ctx->downcount -= 2;
    // 7F27C71C: cmpwi   r0, 0
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

label_7F27C720:
    ctx->pc = 0x7F27C720u;
    // 7F27C720: bc    4, 0, 0x7F27C728
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27C728;
        }
    }

label_7F27C724:
    ctx->pc = 0x7F27C724u;
    ctx->downcount -= 1;
    // 7F27C724: b       0x7F27C74C
    {
            goto label_7F27C74C;
    }

label_7F27C728:
    ctx->pc = 0x7F27C728u;
    ctx->downcount -= 2;
    // 7F27C728: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27C72C:
    ctx->pc = 0x7F27C72Cu;
    // 7F27C72C: bl      0x7F27C1A0
    {
            ctx->lr = 0x7F27C730u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27C1A0u;
                return;
            }
            goto label_7F27C1A0;
    }

label_7F27C730:
    ctx->pc = 0x7F27C730u;
    ctx->downcount -= 4;
    // 7F27C730: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27C734:
    ctx->pc = 0x7F27C734u;
    // 7F27C734: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27C738:
    ctx->pc = 0x7F27C738u;
    // 7F27C738: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F27C73C:
    ctx->pc = 0x7F27C73Cu;
    // 7F27C73C: bl      0x7F27C468
    {
            ctx->lr = 0x7F27C740u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27C468u;
                return;
            }
            goto label_7F27C468;
    }

label_7F27C740:
    ctx->pc = 0x7F27C740u;
    ctx->downcount -= 1;
    // 7F27C740: b       0x7F27C74C
    {
            goto label_7F27C74C;
    }

label_7F27C744:
    ctx->pc = 0x7F27C744u;
    ctx->downcount -= 2;
    // 7F27C744: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27C748:
    ctx->pc = 0x7F27C748u;
    // 7F27C748: bl      0x7F27C634
    {
            ctx->lr = 0x7F27C74Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27C634u;
                return;
            }
            goto label_7F27C634;
    }

label_7F27C74C:
    ctx->pc = 0x7F27C74Cu;
    ctx->downcount -= 6;
    // 7F27C74C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C750:
    ctx->pc = 0x7F27C750u;
    // 7F27C750: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F27C754:
    ctx->pc = 0x7F27C754u;
    // 7F27C754: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27C758:
    ctx->pc = 0x7F27C758u;
    // 7F27C758: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F27C75C:
    ctx->pc = 0x7F27C75Cu;
    // 7F27C75C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27C760:
    ctx->pc = 0x7F27C760u;
    ctx->downcount -= 11;
    // 7F27C760: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27C764:
    ctx->pc = 0x7F27C764u;
    // 7F27C764: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27C768:
    ctx->pc = 0x7F27C768u;
    // 7F27C768: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27C76C:
    ctx->pc = 0x7F27C76Cu;
    // 7F27C76C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F27C770:
    ctx->pc = 0x7F27C770u;
    // 7F27C770: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27C774:
    ctx->pc = 0x7F27C774u;
    // 7F27C774: lwz     r4, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27C778:
    ctx->pc = 0x7F27C778u;
    // 7F27C778: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F27C77C:
    ctx->pc = 0x7F27C77Cu;
    // 7F27C77C: lwz     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C780:
    ctx->pc = 0x7F27C780u;
    // 7F27C780: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F27C784:
    ctx->pc = 0x7F27C784u;
    // 7F27C784: stw     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27C788:
    ctx->pc = 0x7F27C788u;
    // 7F27C788: bl      0x7F042AAC
    {
            ctx->lr = 0x7F27C78Cu;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F27C78C:
    ctx->pc = 0x7F27C78Cu;
    ctx->downcount -= 2;
    // 7F27C78C: addi    r3, r31, 96
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(96);

label_7F27C790:
    ctx->pc = 0x7F27C790u;
    // 7F27C790: bl      0x7F0146B0
    {
            ctx->lr = 0x7F27C794u;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F27C794:
    ctx->pc = 0x7F27C794u;
    ctx->downcount -= 2;
    // 7F27C794: lwz     r3, 352(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(352);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27C798:
    ctx->pc = 0x7F27C798u;
    // 7F27C798: bl      0x7F10D51C
    {
            ctx->lr = 0x7F27C79Cu;
            ctx->pc = 0x7F10D51Cu;
            return;
    }

label_7F27C79C:
    ctx->pc = 0x7F27C79Cu;
    ctx->downcount -= 11;
    // 7F27C79C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27C7A0:
    ctx->pc = 0x7F27C7A0u;
    // 7F27C7A0: addi    r4, r3, -7600
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-7600);

label_7F27C7A4:
    ctx->pc = 0x7F27C7A4u;
    // 7F27C7A4: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27C7A8:
    ctx->pc = 0x7F27C7A8u;
    // 7F27C7A8: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F27C7AC:
    ctx->pc = 0x7F27C7ACu;
    // 7F27C7AC: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27C7B0:
    ctx->pc = 0x7F27C7B0u;
    // 7F27C7B0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F27C7B4:
    ctx->pc = 0x7F27C7B4u;
    // 7F27C7B4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C7B8:
    ctx->pc = 0x7F27C7B8u;
    // 7F27C7B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27C7BC:
    ctx->pc = 0x7F27C7BCu;
    // 7F27C7BC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F27C7C0:
    ctx->pc = 0x7F27C7C0u;
    // 7F27C7C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27C7C4:
    ctx->pc = 0x7F27C7C4u;
    ctx->downcount -= 19;
    // 7F27C7C4: stwu     r1, -160(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-160);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27C7C8:
    ctx->pc = 0x7F27C7C8u;
    // 7F27C7C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27C7CC:
    ctx->pc = 0x7F27C7CCu;
    // 7F27C7CC: stw     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27C7D0:
    ctx->pc = 0x7F27C7D0u;
    // 7F27C7D0: stmw     r26, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F27C7D4:
    ctx->pc = 0x7F27C7D4u;
    // 7F27C7D4: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27C7D8:
    ctx->pc = 0x7F27C7D8u;
    // 7F27C7D8: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F27C7DC:
    ctx->pc = 0x7F27C7DCu;
    // 7F27C7DC: stw     r4, 376(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(376);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27C7E0:
    ctx->pc = 0x7F27C7E0u;
    // 7F27C7E0: li      r3, 65
    ctx->gpr[3] = (u32)(s32)(65);

label_7F27C7E4:
    ctx->pc = 0x7F27C7E4u;
    // 7F27C7E4: bl      0x7F3C664C
    {
            ctx->lr = 0x7F27C7E8u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F27C7E8:
    ctx->pc = 0x7F27C7E8u;
    ctx->downcount -= 2;
    // 7F27C7E8: cmplwi  r3, 0x0000
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

label_7F27C7EC:
    ctx->pc = 0x7F27C7ECu;
    // 7F27C7EC: bc    12, 2, 0x7F27C7FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27C7FC;
        }
    }

label_7F27C7F0:
    ctx->pc = 0x7F27C7F0u;
    ctx->downcount -= 1;
    // 7F27C7F0: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F27C7F4u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F27C7F4:
    ctx->pc = 0x7F27C7F4u;
    ctx->downcount -= 1;
    // 7F27C7F4: bl      0x7F01B788
    {
            ctx->lr = 0x7F27C7F8u;
            ctx->pc = 0x7F01B788u;
            return;
    }

label_7F27C7F8:
    ctx->pc = 0x7F27C7F8u;
    ctx->downcount -= 1;
    // 7F27C7F8: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27C7FC:
    ctx->pc = 0x7F27C7FCu;
    ctx->downcount -= 3;
    // 7F27C7FC: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_7F27C800:
    ctx->pc = 0x7F27C800u;
    // 7F27C800: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F27C804:
    ctx->pc = 0x7F27C804u;
    // 7F27C804: bl      0x7F28F770
    {
            ctx->lr = 0x7F27C808u;
            ctx->pc = 0x7F28F770u;
            return;
    }

label_7F27C808:
    ctx->pc = 0x7F27C808u;
    ctx->downcount -= 3;
    // 7F27C808: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F27C80C:
    ctx->pc = 0x7F27C80Cu;
    // 7F27C80C: li      r3, 114
    ctx->gpr[3] = (u32)(s32)(114);

label_7F27C810:
    ctx->pc = 0x7F27C810u;
    // 7F27C810: bl      0x7F28F800
    {
            ctx->lr = 0x7F27C814u;
            ctx->pc = 0x7F28F800u;
            return;
    }

label_7F27C814:
    ctx->pc = 0x7F27C814u;
    ctx->downcount -= 30;
    // 7F27C814: lwz     r4, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27C818:
    ctx->pc = 0x7F27C818u;
    // 7F27C818: li      r3, 109
    ctx->gpr[3] = (u32)(s32)(109);

label_7F27C81C:
    ctx->pc = 0x7F27C81Cu;
    // 7F27C81C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C820:
    ctx->pc = 0x7F27C820u;
    // 7F27C820: stw     r4, 320(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(320);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27C824:
    ctx->pc = 0x7F27C824u;
    // 7F27C824: stw     r0, 324(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27C828:
    ctx->pc = 0x7F27C828u;
    // 7F27C828: lwz     r4, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27C82C:
    ctx->pc = 0x7F27C82Cu;
    // 7F27C82C: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C830:
    ctx->pc = 0x7F27C830u;
    // 7F27C830: stw     r4, 328(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(328);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27C834:
    ctx->pc = 0x7F27C834u;
    // 7F27C834: stw     r0, 332(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(332);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27C838:
    ctx->pc = 0x7F27C838u;
    // 7F27C838: lwz     r4, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27C83C:
    ctx->pc = 0x7F27C83Cu;
    // 7F27C83C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C840:
    ctx->pc = 0x7F27C840u;
    // 7F27C840: stw     r4, 288(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27C844:
    ctx->pc = 0x7F27C844u;
    // 7F27C844: stw     r0, 292(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27C848:
    ctx->pc = 0x7F27C848u;
    // 7F27C848: lwz     r4, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27C84C:
    ctx->pc = 0x7F27C84Cu;
    // 7F27C84C: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C850:
    ctx->pc = 0x7F27C850u;
    // 7F27C850: stw     r4, 296(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(296);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27C854:
    ctx->pc = 0x7F27C854u;
    // 7F27C854: stw     r0, 300(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27C858:
    ctx->pc = 0x7F27C858u;
    // 7F27C858: lwz     r4, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27C85C:
    ctx->pc = 0x7F27C85Cu;
    // 7F27C85C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C860:
    ctx->pc = 0x7F27C860u;
    // 7F27C860: stw     r4, 304(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27C864:
    ctx->pc = 0x7F27C864u;
    // 7F27C864: stw     r0, 308(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(308);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27C868:
    ctx->pc = 0x7F27C868u;
    // 7F27C868: lwz     r4, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27C86C:
    ctx->pc = 0x7F27C86Cu;
    // 7F27C86C: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C870:
    ctx->pc = 0x7F27C870u;
    // 7F27C870: stw     r4, 312(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(312);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27C874:
    ctx->pc = 0x7F27C874u;
    // 7F27C874: stw     r0, 316(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(316);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27C878:
    ctx->pc = 0x7F27C878u;
    // 7F27C878: lwz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27C87C:
    ctx->pc = 0x7F27C87Cu;
    // 7F27C87C: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C880:
    ctx->pc = 0x7F27C880u;
    // 7F27C880: stw     r4, 356(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(356);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27C884:
    ctx->pc = 0x7F27C884u;
    // 7F27C884: stw     r0, 360(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(360);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27C888:
    ctx->pc = 0x7F27C888u;
    // 7F27C888: bl      0x7F3C664C
    {
            ctx->lr = 0x7F27C88Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F27C88C:
    ctx->pc = 0x7F27C88Cu;
    ctx->downcount -= 2;
    // 7F27C88C: cmplwi  r3, 0x0000
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

label_7F27C890:
    ctx->pc = 0x7F27C890u;
    // 7F27C890: bc    4, 2, 0x7F27C89C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27C89C;
        }
    }

label_7F27C894:
    ctx->pc = 0x7F27C894u;
    ctx->downcount -= 2;
    // 7F27C894: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F27C898:
    ctx->pc = 0x7F27C898u;
    // 7F27C898: b       0x7F27CC34
    {
            goto label_7F27CC34;
    }

label_7F27C89C:
    ctx->pc = 0x7F27C89Cu;
    ctx->downcount -= 1;
    // 7F27C89C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F27C8A0u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F27C8A0:
    ctx->pc = 0x7F27C8A0u;
    ctx->downcount -= 2;
    // 7F27C8A0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27C8A4:
    ctx->pc = 0x7F27C8A4u;
    // 7F27C8A4: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F27C8A8u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F27C8A8:
    ctx->pc = 0x7F27C8A8u;
    ctx->downcount -= 2;
    // 7F27C8A8: cmplwi  r3, 0x0000
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

label_7F27C8AC:
    ctx->pc = 0x7F27C8ACu;
    // 7F27C8AC: bc    12, 2, 0x7F27C8B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27C8B8;
        }
    }

label_7F27C8B0:
    ctx->pc = 0x7F27C8B0u;
    ctx->downcount -= 1;
    // 7F27C8B0: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F27C8B4u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F27C8B4:
    ctx->pc = 0x7F27C8B4u;
    ctx->downcount -= 1;
    // 7F27C8B4: b       0x7F27C8BC
    {
            goto label_7F27C8BC;
    }

label_7F27C8B8:
    ctx->pc = 0x7F27C8B8u;
    ctx->downcount -= 1;
    // 7F27C8B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27C8BC:
    ctx->pc = 0x7F27C8BCu;
    ctx->downcount -= 4;
    // 7F27C8BC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27C8C0:
    ctx->pc = 0x7F27C8C0u;
    // 7F27C8C0: li      r3, 79
    ctx->gpr[3] = (u32)(s32)(79);

label_7F27C8C4:
    ctx->pc = 0x7F27C8C4u;
    // 7F27C8C4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27C8C8:
    ctx->pc = 0x7F27C8C8u;
    // 7F27C8C8: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F27C8CCu;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F27C8CC:
    ctx->pc = 0x7F27C8CCu;
    ctx->downcount -= 3;
    // 7F27C8CC: li      r3, 102
    ctx->gpr[3] = (u32)(s32)(102);

label_7F27C8D0:
    ctx->pc = 0x7F27C8D0u;
    // 7F27C8D0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27C8D4:
    ctx->pc = 0x7F27C8D4u;
    // 7F27C8D4: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F27C8D8u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F27C8D8:
    ctx->pc = 0x7F27C8D8u;
    ctx->downcount -= 4;
    // 7F27C8D8: stw     r3, 372(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(372);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27C8DC:
    ctx->pc = 0x7F27C8DCu;
    // 7F27C8DC: li      r3, 82
    ctx->gpr[3] = (u32)(s32)(82);

label_7F27C8E0:
    ctx->pc = 0x7F27C8E0u;
    // 7F27C8E0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27C8E4:
    ctx->pc = 0x7F27C8E4u;
    // 7F27C8E4: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F27C8E8u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F27C8E8:
    ctx->pc = 0x7F27C8E8u;
    ctx->downcount -= 4;
    // 7F27C8E8: stw     r3, 380(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(380);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27C8EC:
    ctx->pc = 0x7F27C8ECu;
    // 7F27C8EC: li      r3, 76
    ctx->gpr[3] = (u32)(s32)(76);

label_7F27C8F0:
    ctx->pc = 0x7F27C8F0u;
    // 7F27C8F0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27C8F4:
    ctx->pc = 0x7F27C8F4u;
    // 7F27C8F4: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F27C8F8u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F27C8F8:
    ctx->pc = 0x7F27C8F8u;
    ctx->downcount -= 5;
    // 7F27C8F8: stw     r3, 384(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(384);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27C8FC:
    ctx->pc = 0x7F27C8FCu;
    // 7F27C8FC: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27C900:
    ctx->pc = 0x7F27C900u;
    // 7F27C900: addi    r3, r28, 48
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(48);

label_7F27C904:
    ctx->pc = 0x7F27C904u;
    // 7F27C904: li      r5, 281
    ctx->gpr[5] = (u32)(s32)(281);

label_7F27C908:
    ctx->pc = 0x7F27C908u;
    // 7F27C908: bl      0x7F04272C
    {
            ctx->lr = 0x7F27C90Cu;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F27C90C:
    ctx->pc = 0x7F27C90Cu;
    ctx->downcount -= 3;
    // 7F27C90C: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F27C910:
    ctx->pc = 0x7F27C910u;
    // 7F27C910: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F27C914:
    ctx->pc = 0x7F27C914u;
    // 7F27C914: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F27C918u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F27C918:
    ctx->pc = 0x7F27C918u;
    ctx->downcount -= 2;
    // 7F27C918: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F27C91C:
    ctx->pc = 0x7F27C91Cu;
    // 7F27C91C: bl      0x7F27CC48
    {
            ctx->lr = 0x7F27C920u;
            goto label_7F27CC48;
    }

label_7F27C920:
    ctx->pc = 0x7F27C920u;
    ctx->downcount -= 2;
    // 7F27C920: addi    r3, r28, 48
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(48);

label_7F27C924:
    ctx->pc = 0x7F27C924u;
    // 7F27C924: bl      0x7F0427FC
    {
            ctx->lr = 0x7F27C928u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F27C928:
    ctx->pc = 0x7F27C928u;
    ctx->downcount -= 6;
    // 7F27C928: lwz     r4, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27C92C:
    ctx->pc = 0x7F27C92Cu;
    // 7F27C92C: li      r3, 104
    ctx->gpr[3] = (u32)(s32)(104);

label_7F27C930:
    ctx->pc = 0x7F27C930u;
    // 7F27C930: lwz     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27C934:
    ctx->pc = 0x7F27C934u;
    // 7F27C934: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F27C938:
    ctx->pc = 0x7F27C938u;
    // 7F27C938: stw     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27C93C:
    ctx->pc = 0x7F27C93Cu;
    // 7F27C93C: bl      0x7F3C664C
    {
            ctx->lr = 0x7F27C940u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F27C940:
    ctx->pc = 0x7F27C940u;
    ctx->downcount -= 3;
    // 7F27C940: addi    r27, r1, 48
    ctx->gpr[27] = ctx->gpr[1] + (u32)(s32)(48);

label_7F27C944:
    ctx->pc = 0x7F27C944u;
    // 7F27C944: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F27C948:
    ctx->pc = 0x7F27C948u;
    // 7F27C948: b       0x7F27C96C
    {
            goto label_7F27C96C;
    }

label_7F27C94C:
    ctx->downcount -= 1;
    // 7F27C94C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F27C950u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F27C950:
    ctx->pc = 0x7F27C950u;
    ctx->downcount -= 2;
    // 7F27C950: stw     r3, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27C954:
    // 7F27C954: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F27C958u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F27C958:
    ctx->pc = 0x7F27C958u;
    ctx->downcount -= 2;
    // 7F27C958: stw     r3, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27C95C:
    // 7F27C95C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F27C960u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F27C960:
    ctx->pc = 0x7F27C960u;
    ctx->downcount -= 3;
    // 7F27C960: stw     r3, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27C964:
    // 7F27C964: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_7F27C968:
    // 7F27C968: addi    r27, r27, 16
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(16);

label_7F27C96C:
    ctx->downcount -= 1;
    // 7F27C96C: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F27C970u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F27C970:
    ctx->downcount -= 2;
    // 7F27C970: cmplwi  r3, 0x0000
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

label_7F27C974:
    // 7F27C974: bc    4, 2, 0x7F27C94C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27C94Cu;
                return;
            }
            goto label_7F27C94C;
        }
    }

label_7F27C978:
    ctx->pc = 0x7F27C978u;
    ctx->downcount -= 3;
    // 7F27C978: li      r3, 78
    ctx->gpr[3] = (u32)(s32)(78);

label_7F27C97C:
    ctx->pc = 0x7F27C97Cu;
    // 7F27C97C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27C980:
    ctx->pc = 0x7F27C980u;
    // 7F27C980: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F27C984u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F27C984:
    ctx->pc = 0x7F27C984u;
    ctx->downcount -= 3;
    // 7F27C984: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27C988:
    ctx->pc = 0x7F27C988u;
    // 7F27C988: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F27C98C:
    ctx->pc = 0x7F27C98Cu;
    // 7F27C98C: bl      0x7F01B1CC
    {
            ctx->lr = 0x7F27C990u;
            ctx->pc = 0x7F01B1CCu;
            return;
    }

label_7F27C990:
    ctx->pc = 0x7F27C990u;
    ctx->downcount -= 9;
    // 7F27C990: rlwinm r0, r27, 28, 0, 3
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[27], 28u) & 0xF0000000u;
    }

label_7F27C994:
    ctx->pc = 0x7F27C994u;
    // 7F27C994: or   r8, r26, r26
    {
        ctx->gpr[8] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F27C998:
    ctx->pc = 0x7F27C998u;
    // 7F27C998: oris    r9, r0, 0x0002
    ctx->gpr[9] = ctx->gpr[0] | (0x0002u << 16);

label_7F27C99C:
    ctx->pc = 0x7F27C99Cu;
    // 7F27C99C: addi    r4, r1, 48
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(48);

label_7F27C9A0:
    ctx->pc = 0x7F27C9A0u;
    // 7F27C9A0: addi    r5, r1, 64
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(64);

label_7F27C9A4:
    ctx->pc = 0x7F27C9A4u;
    // 7F27C9A4: addi    r6, r1, 80
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(80);

label_7F27C9A8:
    ctx->pc = 0x7F27C9A8u;
    // 7F27C9A8: addi    r7, r1, 96
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(96);

label_7F27C9AC:
    ctx->pc = 0x7F27C9ACu;
    // 7F27C9AC: ori     r9, r9, 0x1800
    ctx->gpr[9] = ctx->gpr[9] | 0x1800u;

label_7F27C9B0:
    ctx->pc = 0x7F27C9B0u;
    // 7F27C9B0: bl      0x7F10D22C
    {
            ctx->lr = 0x7F27C9B4u;
            ctx->pc = 0x7F10D22Cu;
            return;
    }

label_7F27C9B4:
    ctx->pc = 0x7F27C9B4u;
    ctx->downcount -= 64;
    // 7F27C9B4: stw     r3, 352(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(352);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27C9B8:
    ctx->pc = 0x7F27C9B8u;
    // 7F27C9B8: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F27C9BC:
    ctx->pc = 0x7F27C9BCu;
    // 7F27C9BC: addi    r4, r28, 48
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(48);

label_7F27C9C0:
    ctx->pc = 0x7F27C9C0u;
    // 7F27C9C0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27C9C4:
    ctx->pc = 0x7F27C9C4u;
    // 7F27C9C4: stw     r4, 640(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(640);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27C9C8:
    ctx->pc = 0x7F27C9C8u;
    // 7F27C9C8: addi    r6, r3, 25192
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(25192);

label_7F27C9CC:
    ctx->pc = 0x7F27C9CCu;
    // 7F27C9CC: addi    r4, r28, 320
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(320);

label_7F27C9D0:
    ctx->pc = 0x7F27C9D0u;
    // 7F27C9D0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27C9D4:
    ctx->pc = 0x7F27C9D4u;
    // 7F27C9D4: stw     r4, 644(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(644);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27C9D8:
    ctx->pc = 0x7F27C9D8u;
    // 7F27C9D8: addi    r5, r3, 25260
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(25260);

label_7F27C9DC:
    ctx->pc = 0x7F27C9DCu;
    // 7F27C9DC: addi    r4, r28, 356
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(356);

label_7F27C9E0:
    ctx->pc = 0x7F27C9E0u;
    // 7F27C9E0: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F27C9E0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27C9E4:
    ctx->pc = 0x7F27C9E4u;
    // 7F27C9E4: stw     r4, 648(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(648);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27C9E8:
    ctx->pc = 0x7F27C9E8u;
    // 7F27C9E8: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F27C9EC:
    ctx->pc = 0x7F27C9ECu;
    // 7F27C9EC: lfd     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F27C9ECu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27C9F0:
    ctx->pc = 0x7F27C9F0u;
    // 7F27C9F0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F27C9F4:
    ctx->pc = 0x7F27C9F4u;
    // 7F27C9F4: stw     r10, 652(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(652);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F27C9F8:
    ctx->pc = 0x7F27C9F8u;
    // 7F27C9F8: lis     r4, 512
    ctx->gpr[4] = ((u32)(s32)(512) << 16);

label_7F27C9FC:
    ctx->pc = 0x7F27C9FCu;
    // 7F27C9FC: li      r9, 1
    ctx->gpr[9] = (u32)(s32)(1);

label_7F27CA00:
    ctx->pc = 0x7F27CA00u;
    // 7F27CA00: addi    r29, r28, 96
    ctx->gpr[29] = ctx->gpr[28] + (u32)(s32)(96);

label_7F27CA04:
    ctx->pc = 0x7F27CA04u;
    // 7F27CA04: stw     r10, 656(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(656);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F27CA08:
    ctx->pc = 0x7F27CA08u;
    // 7F27CA08: addi    r8, r3, 12832
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F27CA0C:
    ctx->pc = 0x7F27CA0Cu;
    // 7F27CA0C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F27CA10:
    ctx->pc = 0x7F27CA10u;
    // 7F27CA10: addi    r4, r4, 4097
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4097);

label_7F27CA14:
    ctx->pc = 0x7F27CA14u;
    // 7F27CA14: stw     r10, 664(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(664);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F27CA18:
    ctx->pc = 0x7F27CA18u;
    // 7F27CA18: addi    r7, r1, 16
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(16);

label_7F27CA1C:
    ctx->pc = 0x7F27CA1Cu;
    // 7F27CA1C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F27CA20:
    ctx->pc = 0x7F27CA20u;
    // 7F27CA20: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F27CA24:
    ctx->pc = 0x7F27CA24u;
    // 7F27CA24: stw     r10, 660(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(660);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F27CA28:
    ctx->pc = 0x7F27CA28u;
    // 7F27CA28: lwz     r12, 644(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(644);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F27CA2C:
    ctx->pc = 0x7F27CA2Cu;
    // 7F27CA2C: stw     r0, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27CA30:
    ctx->pc = 0x7F27CA30u;
    // 7F27CA30: lwz     r11, 0(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F27CA34:
    ctx->pc = 0x7F27CA34u;
    // 7F27CA34: lwz     r10, 4(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(4);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F27CA38:
    ctx->pc = 0x7F27CA38u;
    // 7F27CA38: stw     r0, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27CA3C:
    ctx->pc = 0x7F27CA3Cu;
    // 7F27CA3C: stw     r11, 400(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(400);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F27CA40:
    ctx->pc = 0x7F27CA40u;
    // 7F27CA40: stw     r10, 404(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(404);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F27CA44:
    ctx->pc = 0x7F27CA44u;
    // 7F27CA44: lwz     r10, 8(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(8);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F27CA48:
    ctx->pc = 0x7F27CA48u;
    // 7F27CA48: lwz     r0, 12(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27CA4C:
    ctx->pc = 0x7F27CA4Cu;
    // 7F27CA4C: stw     r10, 408(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(408);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F27CA50:
    ctx->pc = 0x7F27CA50u;
    // 7F27CA50: stw     r0, 412(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(412);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27CA54:
    ctx->pc = 0x7F27CA54u;
    // 7F27CA54: stw     r9, 672(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(672);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F27CA58:
    ctx->pc = 0x7F27CA58u;
    // 7F27CA58: lwz     r10, 352(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(352);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F27CA5C:
    ctx->pc = 0x7F27CA5Cu;
    // 7F27CA5C: lwz     r9, 128(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(128);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F27CA60:
    ctx->pc = 0x7F27CA60u;
    // 7F27CA60: lwz     r0, 144(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(144);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27CA64:
    ctx->pc = 0x7F27CA64u;
    // 7F27CA64: subf   r0, r9, r0
    {
        u32 a = ~ctx->gpr[9];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F27CA68:
    ctx->pc = 0x7F27CA68u;
    // 7F27CA68: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27CA68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F27CA6C:
    ctx->pc = 0x7F27CA6Cu;
    // 7F27CA6C: srawi r0, r0, 1
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

label_7F27CA70:
    ctx->pc = 0x7F27CA70u;
    // 7F27CA70: addze  r0, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F27CA74:
    ctx->pc = 0x7F27CA74u;
    // 7F27CA74: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F27CA78:
    ctx->pc = 0x7F27CA78u;
    // 7F27CA78: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27CA7C:
    ctx->pc = 0x7F27CA7Cu;
    // 7F27CA7C: lfd     f0, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27CA7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27CA80:
    ctx->pc = 0x7F27CA80u;
    // 7F27CA80: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F27CA80u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F27CA84:
    ctx->pc = 0x7F27CA84u;
    // 7F27CA84: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27CA84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F27CA88:
    ctx->pc = 0x7F27CA88u;
    // 7F27CA88: lwz     r9, 136(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(136);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F27CA8C:
    ctx->pc = 0x7F27CA8Cu;
    // 7F27CA8C: lwz     r0, 152(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(152);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27CA90:
    ctx->pc = 0x7F27CA90u;
    // 7F27CA90: subf   r0, r9, r0
    {
        u32 a = ~ctx->gpr[9];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F27CA94:
    ctx->pc = 0x7F27CA94u;
    // 7F27CA94: srawi r0, r0, 1
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

label_7F27CA98:
    ctx->pc = 0x7F27CA98u;
    // 7F27CA98: addze  r0, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F27CA9C:
    ctx->pc = 0x7F27CA9Cu;
    // 7F27CA9C: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F27CAA0:
    ctx->pc = 0x7F27CAA0u;
    // 7F27CAA0: stw     r0, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27CAA4:
    ctx->pc = 0x7F27CAA4u;
    // 7F27CAA4: lfd     f0, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27CAA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27CAA8:
    ctx->pc = 0x7F27CAA8u;
    // 7F27CAA8: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F27CAA8u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F27CAAC:
    ctx->pc = 0x7F27CAACu;
    // 7F27CAAC: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27CAACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F27CAB0:
    ctx->pc = 0x7F27CAB0u;
    // 7F27CAB0: bl      0x7F014788
    {
            ctx->lr = 0x7F27CAB4u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F27CAB4:
    ctx->pc = 0x7F27CAB4u;
    ctx->downcount -= 7;
    // 7F27CAB4: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F27CAB8:
    ctx->pc = 0x7F27CAB8u;
    // 7F27CAB8: lwz     r6, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F27CABC:
    ctx->pc = 0x7F27CABCu;
    // 7F27CABC: addi    r4, r3, 18312
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18312);

label_7F27CAC0:
    ctx->pc = 0x7F27CAC0u;
    // 7F27CAC0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F27CAC4:
    ctx->pc = 0x7F27CAC4u;
    // 7F27CAC4: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F27CAC8:
    ctx->pc = 0x7F27CAC8u;
    // 7F27CAC8: addi    r4, r6, 4
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(4);

label_7F27CACC:
    ctx->pc = 0x7F27CACCu;
    // 7F27CACC: bl      0x7F0149BC
    {
            ctx->lr = 0x7F27CAD0u;
            ctx->pc = 0x7F0149BCu;
            return;
    }

label_7F27CAD0:
    ctx->pc = 0x7F27CAD0u;
    ctx->downcount -= 5;
    // 7F27CAD0: lis     r4, 32552
    ctx->gpr[4] = ((u32)(s32)(32552) << 16);

label_7F27CAD4:
    ctx->pc = 0x7F27CAD4u;
    // 7F27CAD4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F27CAD8:
    ctx->pc = 0x7F27CAD8u;
    // 7F27CAD8: addi    r4, r4, -15588
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-15588);

label_7F27CADC:
    ctx->pc = 0x7F27CADCu;
    // 7F27CADC: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F27CAE0:
    ctx->pc = 0x7F27CAE0u;
    // 7F27CAE0: bl      0x7F014B6C
    {
            ctx->lr = 0x7F27CAE4u;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F27CAE4:
    ctx->pc = 0x7F27CAE4u;
    ctx->downcount -= 2;
    // 7F27CAE4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F27CAE8:
    ctx->pc = 0x7F27CAE8u;
    // 7F27CAE8: bl      0x7F0148A0
    {
            ctx->lr = 0x7F27CAECu;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F27CAEC:
    ctx->pc = 0x7F27CAECu;
    ctx->downcount -= 11;
    // 7F27CAEC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27CAF0:
    ctx->pc = 0x7F27CAF0u;
    // 7F27CAF0: lfs     f1, 84(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F27CAF0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F27CAF4:
    ctx->pc = 0x7F27CAF4u;
    // 7F27CAF4: lfs     f0, 25280(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27CAF4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25280);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27CAF8:
    ctx->pc = 0x7F27CAF8u;
    // 7F27CAF8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F27CAFC:
    ctx->pc = 0x7F27CAFCu;
    // 7F27CAFC: li      r3, 115
    ctx->gpr[3] = (u32)(s32)(115);

label_7F27CB00:
    ctx->pc = 0x7F27CB00u;
    // 7F27CB00: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27CB04:
    ctx->pc = 0x7F27CB04u;
    // 7F27CB04: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27CB04u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F27CB08:
    ctx->pc = 0x7F27CB08u;
    // 7F27CB08: stfs     f0, 84(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F27CB08u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F27CB0C:
    ctx->pc = 0x7F27CB0Cu;
    // 7F27CB0C: stw     r29, 692(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(692);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F27CB10:
    ctx->pc = 0x7F27CB10u;
    // 7F27CB10: stb     r0, 696(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(696);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F27CB14:
    ctx->pc = 0x7F27CB14u;
    // 7F27CB14: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F27CB18u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F27CB18:
    ctx->pc = 0x7F27CB18u;
    ctx->downcount -= 2;
    // 7F27CB18: cmpwi   r3, 0
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

label_7F27CB1C:
    ctx->pc = 0x7F27CB1Cu;
    // 7F27CB1C: bc    4, 1, 0x7F27CB60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27CB60;
        }
    }

label_7F27CB20:
    ctx->pc = 0x7F27CB20u;
    ctx->downcount -= 6;
    // 7F27CB20: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F27CB24:
    ctx->pc = 0x7F27CB24u;
    // 7F27CB24: li      r0, 240
    ctx->gpr[0] = (u32)(s32)(240);

label_7F27CB28:
    ctx->pc = 0x7F27CB28u;
    // 7F27CB28: stw     r3, 364(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(364);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27CB2C:
    ctx->pc = 0x7F27CB2Cu;
    // 7F27CB2C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F27CB30:
    ctx->pc = 0x7F27CB30u;
    // 7F27CB30: stw     r0, 368(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(368);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27CB34:
    ctx->pc = 0x7F27CB34u;
    // 7F27CB34: bl      0x7F015180
    {
            ctx->lr = 0x7F27CB38u;
            ctx->pc = 0x7F015180u;
            return;
    }

label_7F27CB38:
    ctx->pc = 0x7F27CB38u;
    ctx->downcount -= 9;
    // 7F27CB38: lwz     r3, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27CB3C:
    ctx->pc = 0x7F27CB3Cu;
    // 7F27CB3C: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27CB40:
    ctx->pc = 0x7F27CB40u;
    // 7F27CB40: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F27CB44:
    ctx->pc = 0x7F27CB44u;
    // 7F27CB44: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27CB48:
    ctx->pc = 0x7F27CB48u;
    // 7F27CB48: lwz     r3, 352(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(352);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27CB4C:
    ctx->pc = 0x7F27CB4Cu;
    // 7F27CB4C: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27CB50:
    ctx->pc = 0x7F27CB50u;
    // 7F27CB50: oris    r4, r0, 0x0201
    ctx->gpr[4] = ctx->gpr[0] | (0x0201u << 16);

label_7F27CB54:
    ctx->pc = 0x7F27CB54u;
    // 7F27CB54: ori     r4, r4, 0x27C0
    ctx->gpr[4] = ctx->gpr[4] | 0x27C0u;

label_7F27CB58:
    ctx->pc = 0x7F27CB58u;
    // 7F27CB58: bl      0x7F27C6E4
    {
            ctx->lr = 0x7F27CB5Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27C6E4u;
                return;
            }
            goto label_7F27C6E4;
    }

label_7F27CB5C:
    ctx->pc = 0x7F27CB5Cu;
    ctx->downcount -= 1;
    // 7F27CB5C: b       0x7F27CB68
    {
            goto label_7F27CB68;
    }

label_7F27CB60:
    ctx->pc = 0x7F27CB60u;
    ctx->downcount -= 2;
    // 7F27CB60: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F27CB64:
    ctx->pc = 0x7F27CB64u;
    // 7F27CB64: stw     r0, 364(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(364);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27CB68:
    ctx->pc = 0x7F27CB68u;
    ctx->downcount -= 3;
    // 7F27CB68: li      r3, 84
    ctx->gpr[3] = (u32)(s32)(84);

label_7F27CB6C:
    ctx->pc = 0x7F27CB6Cu;
    // 7F27CB6C: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F27CB70:
    ctx->pc = 0x7F27CB70u;
    // 7F27CB70: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F27CB74u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F27CB74:
    ctx->pc = 0x7F27CB74u;
    ctx->downcount -= 4;
    // 7F27CB74: stw     r3, 396(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(396);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27CB78:
    ctx->pc = 0x7F27CB78u;
    // 7F27CB78: lwz     r0, 396(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(396);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27CB7C:
    ctx->pc = 0x7F27CB7Cu;
    // 7F27CB7C: cmpwi   r0, 0
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

label_7F27CB80:
    ctx->pc = 0x7F27CB80u;
    // 7F27CB80: bc    12, 0, 0x7F27CB8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27CB8C;
        }
    }

label_7F27CB84:
    ctx->pc = 0x7F27CB84u;
    ctx->downcount -= 2;
    // 7F27CB84: cmpwi   r0, 7
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

label_7F27CB88:
    ctx->pc = 0x7F27CB88u;
    // 7F27CB88: bc    4, 1, 0x7F27CB98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27CB98;
        }
    }

label_7F27CB8C:
    ctx->pc = 0x7F27CB8Cu;
    ctx->downcount -= 1;
    // 7F27CB8C: bl      0x7F27C0A8
    {
            ctx->lr = 0x7F27CB90u;
            ctx->pc = 0x7F27C0A8u;
            return;
    }

label_7F27CB90:
    ctx->pc = 0x7F27CB90u;
    ctx->downcount -= 2;
    // 7F27CB90: rlwinm r0, r3, 0, 29, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000007u;
    }

label_7F27CB94:
    ctx->pc = 0x7F27CB94u;
    // 7F27CB94: stw     r0, 396(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(396);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27CB98:
    ctx->pc = 0x7F27CB98u;
    ctx->downcount -= 3;
    // 7F27CB98: lwz     r0, 364(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(364);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27CB9C:
    ctx->pc = 0x7F27CB9Cu;
    // 7F27CB9C: cmpwi   r0, 0
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

label_7F27CBA0:
    ctx->pc = 0x7F27CBA0u;
    // 7F27CBA0: bc    4, 2, 0x7F27CBF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27CBF0;
        }
    }

label_7F27CBA4:
    ctx->pc = 0x7F27CBA4u;
    ctx->downcount -= 5;
    // 7F27CBA4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27CBA8:
    ctx->pc = 0x7F27CBA8u;
    // 7F27CBA8: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F27CBAC:
    ctx->pc = 0x7F27CBACu;
    // 7F27CBAC: addi    r5, r28, 320
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(320);

label_7F27CBB0:
    ctx->pc = 0x7F27CBB0u;
    // 7F27CBB0: addi    r6, r28, 356
    ctx->gpr[6] = ctx->gpr[28] + (u32)(s32)(356);

label_7F27CBB4:
    ctx->pc = 0x7F27CBB4u;
    // 7F27CBB4: bl      0x7F339A6C
    {
            ctx->lr = 0x7F27CBB8u;
            ctx->pc = 0x7F339A6Cu;
            return;
    }

label_7F27CBB8:
    ctx->pc = 0x7F27CBB8u;
    ctx->downcount -= 3;
    // 7F27CBB8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27CBBC:
    ctx->pc = 0x7F27CBBCu;
    // 7F27CBBC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F27CBC0:
    ctx->pc = 0x7F27CBC0u;
    // 7F27CBC0: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F27CBC4u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F27CBC4:
    ctx->pc = 0x7F27CBC4u;
    ctx->downcount -= 3;
    // 7F27CBC4: li      r3, 80
    ctx->gpr[3] = (u32)(s32)(80);

label_7F27CBC8:
    ctx->pc = 0x7F27CBC8u;
    // 7F27CBC8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27CBCC:
    ctx->pc = 0x7F27CBCCu;
    // 7F27CBCC: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F27CBD0u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F27CBD0:
    ctx->pc = 0x7F27CBD0u;
    ctx->downcount -= 4;
    // 7F27CBD0: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27CBD4:
    ctx->pc = 0x7F27CBD4u;
    // 7F27CBD4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F27CBD8:
    ctx->pc = 0x7F27CBD8u;
    // 7F27CBD8: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_7F27CBDC:
    ctx->pc = 0x7F27CBDCu;
    // 7F27CBDC: bl      0x7F3C7FF8
    {
            ctx->lr = 0x7F27CBE0u;
            ctx->pc = 0x7F3C7FF8u;
            return;
    }

label_7F27CBE0:
    ctx->pc = 0x7F27CBE0u;
    ctx->downcount -= 4;
    // 7F27CBE0: lwz     r5, 396(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(396);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F27CBE4:
    ctx->pc = 0x7F27CBE4u;
    // 7F27CBE4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F27CBE8:
    ctx->pc = 0x7F27CBE8u;
    // 7F27CBE8: li      r4, 11
    ctx->gpr[4] = (u32)(s32)(11);

label_7F27CBEC:
    ctx->pc = 0x7F27CBECu;
    // 7F27CBEC: bl      0x7F3C7FF8
    {
            ctx->lr = 0x7F27CBF0u;
            ctx->pc = 0x7F3C7FF8u;
            return;
    }

label_7F27CBF0:
    ctx->pc = 0x7F27CBF0u;
    ctx->downcount -= 3;
    // 7F27CBF0: li      r3, 99
    ctx->gpr[3] = (u32)(s32)(99);

label_7F27CBF4:
    ctx->pc = 0x7F27CBF4u;
    // 7F27CBF4: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F27CBF8:
    ctx->pc = 0x7F27CBF8u;
    // 7F27CBF8: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F27CBFCu;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F27CBFC:
    ctx->pc = 0x7F27CBFCu;
    ctx->downcount -= 14;
    // 7F27CBFC: stw     r3, 688(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(688);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27CC00:
    ctx->pc = 0x7F27CC00u;
    // 7F27CC00: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27CC04:
    ctx->pc = 0x7F27CC04u;
    // 7F27CC04: addi    r7, r3, -7600
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(-7600);

label_7F27CC08:
    ctx->pc = 0x7F27CC08u;
    // 7F27CC08: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F27CC0C:
    ctx->pc = 0x7F27CC0Cu;
    // 7F27CC0C: lwz     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27CC10:
    ctx->pc = 0x7F27CC10u;
    // 7F27CC10: addi    r5, r3, 18456
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(18456);

label_7F27CC14:
    ctx->pc = 0x7F27CC14u;
    // 7F27CC14: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27CC18:
    ctx->pc = 0x7F27CC18u;
    // 7F27CC18: stw     r0, 388(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(388);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27CC1C:
    ctx->pc = 0x7F27CC1Cu;
    // 7F27CC1C: lwz     r0, 388(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(388);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27CC20:
    ctx->pc = 0x7F27CC20u;
    // 7F27CC20: lwz     r4, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27CC24:
    ctx->pc = 0x7F27CC24u;
    // 7F27CC24: rlwinm r6, r0, 2, 0, 29
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F27CC28:
    ctx->pc = 0x7F27CC28u;
    // 7F27CC28: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F27CC2C:
    ctx->pc = 0x7F27CC2Cu;
    // 7F27CC2C: stwx    r28, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F27CC30:
    ctx->pc = 0x7F27CC30u;
    // 7F27CC30: stw     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27CC34:
    ctx->pc = 0x7F27CC34u;
    ctx->downcount -= 16;
    // 7F27CC34: lmw     r26, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F27CC38:
    ctx->pc = 0x7F27CC38u;
    // 7F27CC38: lwz     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27CC3C:
    ctx->pc = 0x7F27CC3Cu;
    // 7F27CC3C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27CC40:
    ctx->pc = 0x7F27CC40u;
    // 7F27CC40: addi    r1, r1, 160
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(160);

label_7F27CC44:
    ctx->pc = 0x7F27CC44u;
    // 7F27CC44: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27CC48:
    ctx->pc = 0x7F27CC48u;
    ctx->downcount -= 3;
    // 7F27CC48: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F27CC4C:
    ctx->pc = 0x7F27CC4Cu;
    // 7F27CC4C: stw     r3, 18312(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18312);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27CC50:
    ctx->pc = 0x7F27CC50u;
    // 7F27CC50: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27CC54:
    ctx->pc = 0x7F27CC54u;
    ctx->downcount -= 21;
    // 7F27CC54: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27CC58:
    ctx->pc = 0x7F27CC58u;
    // 7F27CC58: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27CC5C:
    ctx->pc = 0x7F27CC5Cu;
    // 7F27CC5C: li      r5, 704
    ctx->gpr[5] = (u32)(s32)(704);

label_7F27CC60:
    ctx->pc = 0x7F27CC60u;
    // 7F27CC60: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F27CC64:
    ctx->pc = 0x7F27CC64u;
    // 7F27CC64: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27CC68:
    ctx->pc = 0x7F27CC68u;
    // 7F27CC68: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F27CC6C:
    ctx->pc = 0x7F27CC6Cu;
    // 7F27CC6C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27CC70:
    ctx->pc = 0x7F27CC70u;
    // 7F27CC70: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F27CC74:
    ctx->pc = 0x7F27CC74u;
    // 7F27CC74: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F27CC78:
    ctx->pc = 0x7F27CC78u;
    // 7F27CC78: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F27CC7C:
    ctx->pc = 0x7F27CC7Cu;
    // 7F27CC7C: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F27CC80u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F27CC80:
    ctx->pc = 0x7F27CC80u;
    ctx->downcount -= 2;
    // 7F27CC80: or.   r31, r3, r3
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

label_7F27CC84:
    ctx->pc = 0x7F27CC84u;
    // 7F27CC84: bc    4, 2, 0x7F27CC90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27CC90;
        }
    }

label_7F27CC88:
    ctx->pc = 0x7F27CC88u;
    ctx->downcount -= 2;
    // 7F27CC88: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27CC8C:
    ctx->pc = 0x7F27CC8Cu;
    // 7F27CC8C: b       0x7F27CCF8
    {
            goto label_7F27CCF8;
    }

label_7F27CC90:
    ctx->pc = 0x7F27CC90u;
    ctx->downcount -= 5;
    // 7F27CC90: lis     r4, 32552
    ctx->gpr[4] = ((u32)(s32)(32552) << 16);

label_7F27CC94:
    ctx->pc = 0x7F27CC94u;
    // 7F27CC94: lis     r5, 32552
    ctx->gpr[5] = ((u32)(s32)(32552) << 16);

label_7F27CC98:
    ctx->pc = 0x7F27CC98u;
    // 7F27CC98: addi    r4, r4, -14604
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14604);

label_7F27CC9C:
    ctx->pc = 0x7F27CC9Cu;
    // 7F27CC9C: addi    r5, r5, -14496
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-14496);

label_7F27CCA0:
    ctx->pc = 0x7F27CCA0u;
    // 7F27CCA0: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F27CCA4u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F27CCA4:
    ctx->pc = 0x7F27CCA4u;
    ctx->downcount -= 14;
    // 7F27CCA4: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27CCA8:
    ctx->pc = 0x7F27CCA8u;
    // 7F27CCA8: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F27CCAC:
    ctx->pc = 0x7F27CCACu;
    // 7F27CCAC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F27CCB0:
    ctx->pc = 0x7F27CCB0u;
    // 7F27CCB0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27CCB4:
    ctx->pc = 0x7F27CCB4u;
    // 7F27CCB4: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F27CCB8:
    ctx->pc = 0x7F27CCB8u;
    // 7F27CCB8: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F27CCBC:
    ctx->pc = 0x7F27CCBCu;
    // 7F27CCBC: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F27CCC0:
    ctx->pc = 0x7F27CCC0u;
    // 7F27CCC0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F27CCC4:
    ctx->pc = 0x7F27CCC4u;
    // 7F27CCC4: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F27CCC8:
    ctx->pc = 0x7F27CCC8u;
    // 7F27CCC8: stw     r6, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F27CCCC:
    ctx->pc = 0x7F27CCCCu;
    // 7F27CCCC: stw     r6, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F27CCD0:
    ctx->pc = 0x7F27CCD0u;
    // 7F27CCD0: stw     r6, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F27CCD4:
    ctx->pc = 0x7F27CCD4u;
    // 7F27CCD4: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27CCD8:
    ctx->pc = 0x7F27CCD8u;
    // 7F27CCD8: bl      0x7F27C7C4
    {
            ctx->lr = 0x7F27CCDCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27C7C4u;
                return;
            }
            goto label_7F27C7C4;
    }

label_7F27CCDC:
    ctx->pc = 0x7F27CCDCu;
    ctx->downcount -= 2;
    // 7F27CCDC: cmpwi   r3, 0
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

label_7F27CCE0:
    ctx->pc = 0x7F27CCE0u;
    // 7F27CCE0: bc    4, 0, 0x7F27CCF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27CCF4;
        }
    }

label_7F27CCE4:
    ctx->pc = 0x7F27CCE4u;
    ctx->downcount -= 2;
    // 7F27CCE4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27CCE8:
    ctx->pc = 0x7F27CCE8u;
    // 7F27CCE8: bl      0x7F3C8210
    {
            ctx->lr = 0x7F27CCECu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F27CCEC:
    ctx->pc = 0x7F27CCECu;
    ctx->downcount -= 2;
    // 7F27CCEC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27CCF0:
    ctx->pc = 0x7F27CCF0u;
    // 7F27CCF0: b       0x7F27CCF8
    {
            goto label_7F27CCF8;
    }

label_7F27CCF4:
    ctx->pc = 0x7F27CCF4u;
    ctx->downcount -= 1;
    // 7F27CCF4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27CCF8:
    ctx->pc = 0x7F27CCF8u;
    ctx->downcount -= 16;
    // 7F27CCF8: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F27CCFC:
    ctx->pc = 0x7F27CCFCu;
    // 7F27CCFC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27CD00:
    ctx->pc = 0x7F27CD00u;
    // 7F27CD00: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27CD04:
    ctx->pc = 0x7F27CD04u;
    // 7F27CD04: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F27CD08:
    ctx->pc = 0x7F27CD08u;
    // 7F27CD08: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27CD0C:
    ctx->pc = 0x7F27CD0Cu;
    ctx->downcount -= 9;
    // 7F27CD0C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27CD10:
    ctx->pc = 0x7F27CD10u;
    // 7F27CD10: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27CD14:
    ctx->pc = 0x7F27CD14u;
    // 7F27CD14: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F27CD18:
    ctx->pc = 0x7F27CD18u;
    // 7F27CD18: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27CD1C:
    ctx->pc = 0x7F27CD1Cu;
    // 7F27CD1C: addi    r5, r4, -7568
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-7568);

label_7F27CD20:
    ctx->pc = 0x7F27CD20u;
    // 7F27CD20: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27CD24:
    ctx->pc = 0x7F27CD24u;
    // 7F27CD24: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27CD28:
    ctx->pc = 0x7F27CD28u;
    // 7F27CD28: cmplwi  r0, 0x0000
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

label_7F27CD2C:
    ctx->pc = 0x7F27CD2Cu;
    // 7F27CD2C: bc    12, 2, 0x7F27CD38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27CD38;
        }
    }

label_7F27CD30:
    ctx->pc = 0x7F27CD30u;
    ctx->downcount -= 2;
    // 7F27CD30: or   r3, r5, r5
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F27CD34:
    ctx->pc = 0x7F27CD34u;
    // 7F27CD34: bl      0x7F2EA6F0
    {
            ctx->lr = 0x7F27CD38u;
            ctx->pc = 0x7F2EA6F0u;
            return;
    }

label_7F27CD38:
    ctx->pc = 0x7F27CD38u;
    ctx->downcount -= 5;
    // 7F27CD38: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27CD3C:
    ctx->pc = 0x7F27CD3Cu;
    // 7F27CD3C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27CD40:
    ctx->pc = 0x7F27CD40u;
    // 7F27CD40: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F27CD44:
    ctx->pc = 0x7F27CD44u;
    // 7F27CD44: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27CD48:
    ctx->pc = 0x7F27CD48u;
    ctx->downcount -= 17;
    // 7F27CD48: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27CD4C:
    ctx->pc = 0x7F27CD4Cu;
    // 7F27CD4C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27CD50:
    ctx->pc = 0x7F27CD50u;
    // 7F27CD50: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27CD54:
    ctx->pc = 0x7F27CD54u;
    // 7F27CD54: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F27CD58:
    ctx->pc = 0x7F27CD58u;
    // 7F27CD58: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27CD5C:
    ctx->pc = 0x7F27CD5Cu;
    // 7F27CD5C: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_7F27CD60:
    ctx->pc = 0x7F27CD60u;
    // 7F27CD60: bl      0x7F3C9148
    {
            ctx->lr = 0x7F27CD64u;
            ctx->pc = 0x7F3C9148u;
            return;
    }

label_7F27CD64:
    ctx->pc = 0x7F27CD64u;
    ctx->downcount -= 2;
    // 7F27CD64: or.   r31, r3, r3
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

label_7F27CD68:
    ctx->pc = 0x7F27CD68u;
    // 7F27CD68: bc    12, 2, 0x7F27CDAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27CDAC;
        }
    }

label_7F27CD6C:
    ctx->pc = 0x7F27CD6Cu;
    ctx->downcount -= 2;
    // 7F27CD6C: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_7F27CD70:
    ctx->pc = 0x7F27CD70u;
    // 7F27CD70: bl      0x7F3C9120
    {
            ctx->lr = 0x7F27CD74u;
            ctx->pc = 0x7F3C9120u;
            return;
    }

label_7F27CD74:
    ctx->pc = 0x7F27CD74u;
    ctx->downcount -= 8;
    // 7F27CD74: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F27CD78:
    ctx->pc = 0x7F27CD78u;
    // 7F27CD78: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F27CD7C:
    ctx->pc = 0x7F27CD7Cu;
    // 7F27CD7C: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27CD80:
    ctx->pc = 0x7F27CD80u;
    // 7F27CD80: li      r0, 240
    ctx->gpr[0] = (u32)(s32)(240);

label_7F27CD84:
    ctx->pc = 0x7F27CD84u;
    // 7F27CD84: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27CD88:
    ctx->pc = 0x7F27CD88u;
    // 7F27CD88: sth     r4, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F27CD8C:
    ctx->pc = 0x7F27CD8Cu;
    // 7F27CD8C: sth     r0, 6(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27CD90:
    ctx->pc = 0x7F27CD90u;
    // 7F27CD90: bl      0x7F3BA260
    {
            ctx->lr = 0x7F27CD94u;
            ctx->pc = 0x7F3BA260u;
            return;
    }

label_7F27CD94:
    ctx->pc = 0x7F27CD94u;
    ctx->downcount -= 6;
    // 7F27CD94: lis     r3, 32552
    ctx->gpr[3] = ((u32)(s32)(32552) << 16);

label_7F27CD98:
    ctx->pc = 0x7F27CD98u;
    // 7F27CD98: stw     r31, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F27CD9C:
    ctx->pc = 0x7F27CD9Cu;
    // 7F27CD9C: addi    r4, r3, -13044
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-13044);

label_7F27CDA0:
    ctx->pc = 0x7F27CDA0u;
    // 7F27CDA0: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F27CDA4:
    ctx->pc = 0x7F27CDA4u;
    // 7F27CDA4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27CDA8:
    ctx->pc = 0x7F27CDA8u;
    // 7F27CDA8: bl      0x7F3BA254
    {
            ctx->lr = 0x7F27CDACu;
            ctx->pc = 0x7F3BA254u;
            return;
    }

label_7F27CDAC:
    ctx->pc = 0x7F27CDACu;
    ctx->downcount -= 16;
    // 7F27CDAC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F27CDB0:
    ctx->pc = 0x7F27CDB0u;
    // 7F27CDB0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27CDB4:
    ctx->pc = 0x7F27CDB4u;
    // 7F27CDB4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27CDB8:
    ctx->pc = 0x7F27CDB8u;
    // 7F27CDB8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F27CDBC:
    ctx->pc = 0x7F27CDBCu;
    // 7F27CDBC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27CDC0:
    ctx->pc = 0x7F27CDC0u;
    ctx->downcount -= 22;
    // 7F27CDC0: stwu     r1, -144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-144);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27CDC4:
    ctx->pc = 0x7F27CDC4u;
    // 7F27CDC4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27CDC8:
    ctx->pc = 0x7F27CDC8u;
    // 7F27CDC8: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F27CDCC:
    ctx->pc = 0x7F27CDCCu;
    // 7F27CDCC: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27CDD0:
    ctx->pc = 0x7F27CDD0u;
    // 7F27CDD0: stmw     r15, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        for (u32 r = 15; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F27CDD4:
    ctx->pc = 0x7F27CDD4u;
    // 7F27CDD4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27CDD8:
    ctx->pc = 0x7F27CDD8u;
    // 7F27CDD8: lwz     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27CDDC:
    ctx->pc = 0x7F27CDDCu;
    // 7F27CDDC: lhz     r5, 38(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(38);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_7F27CDE0:
    ctx->pc = 0x7F27CDE0u;
    // 7F27CDE0: cmplwi  r0, 0x0000
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

label_7F27CDE4:
    ctx->pc = 0x7F27CDE4u;
    // 7F27CDE4: lwz     r23, -7536(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7536);
        ctx->gpr[23] = mem_read32(ctx, ea);
    }

label_7F27CDE8:
    ctx->pc = 0x7F27CDE8u;
    // 7F27CDE8: rlwinm r28, r5, 27, 31, 31
    {
        ctx->gpr[28] = dolrecomp_rotl32(ctx->gpr[5], 27u) & 0x00000001u;
    }

label_7F27CDEC:
    ctx->pc = 0x7F27CDECu;
    // 7F27CDEC: bc    4, 2, 0x7F27CDF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27CDF4;
        }
    }

label_7F27CDF0:
    ctx->pc = 0x7F27CDF0u;
    ctx->downcount -= 1;
    // 7F27CDF0: bl      0x7F27CD48
    {
            ctx->lr = 0x7F27CDF4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27CD48u;
                return;
            }
            goto label_7F27CD48;
    }

label_7F27CDF4:
    ctx->pc = 0x7F27CDF4u;
    ctx->downcount -= 3;
    // 7F27CDF4: lwz     r0, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27CDF8:
    ctx->pc = 0x7F27CDF8u;
    // 7F27CDF8: cmplwi  r0, 0x0000
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

label_7F27CDFC:
    ctx->pc = 0x7F27CDFCu;
    // 7F27CDFC: bc    12, 2, 0x7F27DA88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27DA88;
        }
    }

label_7F27CE00:
    ctx->pc = 0x7F27CE00u;
    ctx->downcount -= 23;
    // 7F27CE00: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F27CE04:
    ctx->pc = 0x7F27CE04u;
    // 7F27CE04: subfic  r4, r28, 0
    {
        u64 res = (u64)(u32)(s32)(0) + (u64)(~ctx->gpr[28]) + 1u;
        ctx->gpr[4] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F27CE08:
    ctx->pc = 0x7F27CE08u;
    // 7F27CE08: addi    r3, r3, 18520
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(18520);

label_7F27CE0C:
    ctx->pc = 0x7F27CE0Cu;
    // 7F27CE0C: lhz     r0, 22(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(22);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F27CE10:
    ctx->pc = 0x7F27CE10u;
    // 7F27CE10: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27CE14:
    ctx->pc = 0x7F27CE14u;
    // 7F27CE14: subfe   r5, r4, r4
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[4];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[5] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F27CE18:
    ctx->pc = 0x7F27CE18u;
    // 7F27CE18: rlwinm r0, r0, 31, 1, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 31u) & 0x7FFFFFFFu;
    }

label_7F27CE1C:
    ctx->pc = 0x7F27CE1Cu;
    // 7F27CE1C: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F27CE20:
    ctx->pc = 0x7F27CE20u;
    // 7F27CE20: mulli   r3, r3, 11
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)11);

label_7F27CE24:
    ctx->pc = 0x7F27CE24u;
    // 7F27CE24: lhz     r6, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_7F27CE28:
    ctx->pc = 0x7F27CE28u;
    // 7F27CE28: add   r0, r23, r0
    {
        u32 a = ctx->gpr[23];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F27CE2C:
    ctx->pc = 0x7F27CE2Cu;
    // 7F27CE2C: and   r7, r4, r5
    {
        ctx->gpr[7] = ctx->gpr[4] & ctx->gpr[5];
    }

label_7F27CE30:
    ctx->pc = 0x7F27CE30u;
    // 7F27CE30: srawi r3, r3, 1
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

label_7F27CE34:
    ctx->pc = 0x7F27CE34u;
    // 7F27CE34: addi    r4, r6, 2
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(2);

label_7F27CE38:
    ctx->pc = 0x7F27CE38u;
    // 7F27CE38: addze  r5, r3
    {
        u32 a = ctx->gpr[3];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[5] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F27CE3C:
    ctx->pc = 0x7F27CE3Cu;
    // 7F27CE3C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F27CE40:
    ctx->pc = 0x7F27CE40u;
    // 7F27CE40: subf   r0, r5, r0
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F27CE44:
    ctx->pc = 0x7F27CE44u;
    // 7F27CE44: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F27CE48:
    ctx->pc = 0x7F27CE48u;
    // 7F27CE48: add   r5, r0, r7
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F27CE4C:
    ctx->pc = 0x7F27CE4Cu;
    // 7F27CE4C: addi    r5, r5, 9
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9);

label_7F27CE50:
    ctx->pc = 0x7F27CE50u;
    // 7F27CE50: bl      0x7F0B9990
    {
            ctx->lr = 0x7F27CE54u;
            ctx->pc = 0x7F0B9990u;
            return;
    }

label_7F27CE54:
    ctx->pc = 0x7F27CE54u;
    ctx->downcount -= 6;
    // 7F27CE54: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F27CE58:
    ctx->pc = 0x7F27CE58u;
    // 7F27CE58: li      r4, 196
    ctx->gpr[4] = (u32)(s32)(196);

label_7F27CE5C:
    ctx->pc = 0x7F27CE5Cu;
    // 7F27CE5C: li      r5, 196
    ctx->gpr[5] = (u32)(s32)(196);

label_7F27CE60:
    ctx->pc = 0x7F27CE60u;
    // 7F27CE60: li      r6, 196
    ctx->gpr[6] = (u32)(s32)(196);

label_7F27CE64:
    ctx->pc = 0x7F27CE64u;
    // 7F27CE64: li      r7, 128
    ctx->gpr[7] = (u32)(s32)(128);

label_7F27CE68:
    ctx->pc = 0x7F27CE68u;
    // 7F27CE68: bl      0x7F0B98C4
    {
            ctx->lr = 0x7F27CE6Cu;
            ctx->pc = 0x7F0B98C4u;
            return;
    }

label_7F27CE6C:
    ctx->pc = 0x7F27CE6Cu;
    ctx->downcount -= 5;
    // 7F27CE6C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F27CE70:
    ctx->pc = 0x7F27CE70u;
    // 7F27CE70: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F27CE74:
    ctx->pc = 0x7F27CE74u;
    // 7F27CE74: addi    r3, r3, 18524
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(18524);

label_7F27CE78:
    ctx->pc = 0x7F27CE78u;
    // 7F27CE78: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F27CE7C:
    ctx->pc = 0x7F27CE7Cu;
    // 7F27CE7C: bl      0x7F0BA1C0
    {
            ctx->lr = 0x7F27CE80u;
            ctx->pc = 0x7F0BA1C0u;
            return;
    }

label_7F27CE80:
    ctx->pc = 0x7F27CE80u;
    ctx->downcount -= 9;
    // 7F27CE80: lha     r0, 26(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(26);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27CE84:
    ctx->pc = 0x7F27CE84u;
    // 7F27CE84: lha     r22, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        ctx->gpr[22] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27CE88:
    ctx->pc = 0x7F27CE88u;
    // 7F27CE88: lhz     r3, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_7F27CE8C:
    ctx->pc = 0x7F27CE8Cu;
    // 7F27CE8C: lha     r4, 28(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(28);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27CE90:
    ctx->pc = 0x7F27CE90u;
    // 7F27CE90: cmpw    r22, r0
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

label_7F27CE94:
    ctx->pc = 0x7F27CE94u;
    // 7F27CE94: lhz     r5, 66(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(66);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_7F27CE98:
    ctx->pc = 0x7F27CE98u;
    // 7F27CE98: addi    r21, r3, -6
    ctx->gpr[21] = ctx->gpr[3] + (u32)(s32)(-6);

label_7F27CE9C:
    ctx->pc = 0x7F27CE9Cu;
    // 7F27CE9C: subf   r20, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[20] = res;
    }

label_7F27CEA0:
    ctx->pc = 0x7F27CEA0u;
    // 7F27CEA0: bc    4, 1, 0x7F27CEAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27CEAC;
        }
    }

label_7F27CEA4:
    ctx->pc = 0x7F27CEA4u;
    ctx->downcount -= 2;
    // 7F27CEA4: or   r22, r0, r0
    {
        ctx->gpr[22] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F27CEA8:
    ctx->pc = 0x7F27CEA8u;
    // 7F27CEA8: b       0x7F27CEB8
    {
            goto label_7F27CEB8;
    }

label_7F27CEAC:
    ctx->pc = 0x7F27CEACu;
    ctx->downcount -= 2;
    // 7F27CEAC: cmpw    r22, r4
    {
        s32 val_a = (s32)(ctx->gpr[22]);
        s32 val_b = (s32)(ctx->gpr[4]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F27CEB0:
    ctx->pc = 0x7F27CEB0u;
    // 7F27CEB0: bc    4, 0, 0x7F27CEB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27CEB8;
        }
    }

label_7F27CEB4:
    ctx->pc = 0x7F27CEB4u;
    ctx->downcount -= 1;
    // 7F27CEB4: or   r22, r4, r4
    {
        ctx->gpr[22] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F27CEB8:
    ctx->pc = 0x7F27CEB8u;
    ctx->downcount -= 2;
    // 7F27CEB8: cmpw    r5, r22
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(ctx->gpr[22]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F27CEBC:
    ctx->pc = 0x7F27CEBCu;
    // 7F27CEBC: bc    4, 1, 0x7F27CECC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27CECC;
        }
    }

label_7F27CEC0:
    ctx->pc = 0x7F27CEC0u;
    ctx->downcount -= 3;
    // 7F27CEC0: lhz     r0, 30(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(30);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F27CEC4:
    ctx->pc = 0x7F27CEC4u;
    // 7F27CEC4: sth     r0, 68(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27CEC8:
    ctx->pc = 0x7F27CEC8u;
    // 7F27CEC8: sth     r5, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F27CECC:
    ctx->pc = 0x7F27CECCu;
    ctx->downcount -= 3;
    // 7F27CECC: lhz     r0, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F27CED0:
    ctx->pc = 0x7F27CED0u;
    // 7F27CED0: cmpw    r0, r22
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(ctx->gpr[22]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F27CED4:
    ctx->pc = 0x7F27CED4u;
    // 7F27CED4: bc    4, 0, 0x7F27CEE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27CEE4;
        }
    }

label_7F27CED8:
    ctx->pc = 0x7F27CED8u;
    ctx->downcount -= 3;
    // 7F27CED8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F27CEDC:
    ctx->pc = 0x7F27CEDCu;
    // 7F27CEDC: sth     r0, 68(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27CEE0:
    ctx->pc = 0x7F27CEE0u;
    // 7F27CEE0: sth     r22, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        mem_write16(ctx, ea, (u16)ctx->gpr[22]);
    }

label_7F27CEE4:
    ctx->pc = 0x7F27CEE4u;
    ctx->downcount -= 51;
    // 7F27CEE4: mullw   r4, r22, r21
    {
        s64 product = (s64)(s32)ctx->gpr[22] * (s64)(s32)ctx->gpr[21];
        ctx->gpr[4] = (u32)product;
    }

label_7F27CEE8:
    ctx->pc = 0x7F27CEE8u;
    // 7F27CEE8: lhz     r0, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F27CEEC:
    ctx->pc = 0x7F27CEECu;
    // 7F27CEEC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27CEF0:
    ctx->pc = 0x7F27CEF0u;
    // 7F27CEF0: stw     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27CEF4:
    ctx->pc = 0x7F27CEF4u;
    // 7F27CEF4: addi    r3, r3, -7568
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7568);

label_7F27CEF8:
    ctx->pc = 0x7F27CEF8u;
    // 7F27CEF8: sth     r22, 66(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(66);
        mem_write16(ctx, ea, (u16)ctx->gpr[22]);
    }

label_7F27CEFC:
    ctx->pc = 0x7F27CEFCu;
    // 7F27CEFC: divw   r19, r4, r20
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[20];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[19] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F27CF00:
    ctx->pc = 0x7F27CF00u;
    // 7F27CF00: bl      0x7F2EA4A0
    {
            ctx->lr = 0x7F27CF04u;
            ctx->pc = 0x7F2EA4A0u;
            return;
    }

label_7F27CF04:
    ctx->pc = 0x7F27CF04u;
    ctx->downcount -= 6;
    // 7F27CF04: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F27CF08:
    ctx->pc = 0x7F27CF08u;
    // 7F27CF08: stw     r3, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27CF0C:
    ctx->pc = 0x7F27CF0Cu;
    // 7F27CF0C: addi    r0, r4, -7568
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-7568);

label_7F27CF10:
    ctx->pc = 0x7F27CF10u;
    // 7F27CF10: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F27CF14:
    ctx->pc = 0x7F27CF14u;
    // 7F27CF14: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F27CF18:
    ctx->pc = 0x7F27CF18u;
    // 7F27CF18: bl      0x7F2EA58C
    {
            ctx->lr = 0x7F27CF1Cu;
            ctx->pc = 0x7F2EA58Cu;
            return;
    }

label_7F27CF1C:
    ctx->pc = 0x7F27CF1Cu;
    ctx->downcount -= 5;
    // 7F27CF1C: subfic  r3, r28, 0
    {
        u64 res = (u64)(u32)(s32)(0) + (u64)(~ctx->gpr[28]) + 1u;
        ctx->gpr[3] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F27CF20:
    ctx->pc = 0x7F27CF20u;
    // 7F27CF20: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F27CF24:
    ctx->pc = 0x7F27CF24u;
    // 7F27CF24: subfe   r3, r3, r3
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F27CF28:
    ctx->pc = 0x7F27CF28u;
    // 7F27CF28: and   r16, r0, r3
    {
        ctx->gpr[16] = ctx->gpr[0] & ctx->gpr[3];
    }

label_7F27CF2C:
    ctx->pc = 0x7F27CF2Cu;
    // 7F27CF2C: bl      0x7F2EA8C0
    {
            ctx->lr = 0x7F27CF30u;
            ctx->pc = 0x7F2EA8C0u;
            return;
    }

label_7F27CF30:
    ctx->pc = 0x7F27CF30u;
    ctx->downcount -= 1;
    // 7F27CF30: bl      0x7F2EA944
    {
            ctx->lr = 0x7F27CF34u;
            ctx->pc = 0x7F2EA944u;
            return;
    }

label_7F27CF34:
    ctx->pc = 0x7F27CF34u;
    ctx->downcount -= 7;
    // 7F27CF34: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27CF38:
    ctx->pc = 0x7F27CF38u;
    // 7F27CF38: addi    r4, r1, 36
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(36);

label_7F27CF3C:
    ctx->pc = 0x7F27CF3Cu;
    // 7F27CF3C: addi    r5, r3, 25288
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(25288);

label_7F27CF40:
    ctx->pc = 0x7F27CF40u;
    // 7F27CF40: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F27CF44:
    ctx->pc = 0x7F27CF44u;
    // 7F27CF44: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27CF48:
    ctx->pc = 0x7F27CF48u;
    // 7F27CF48: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27CF4C:
    ctx->pc = 0x7F27CF4Cu;
    // 7F27CF4C: bl      0x80045970
    {
            ctx->lr = 0x7F27CF50u;
            ctx->pc = 0x80045970u;
            return;
    }

label_7F27CF50:
    ctx->pc = 0x7F27CF50u;
    ctx->downcount -= 14;
    // 7F27CF50: lhz     r0, 22(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(22);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F27CF54:
    ctx->pc = 0x7F27CF54u;
    // 7F27CF54: rlwinm r24, r23, 4, 0, 27
    {
        ctx->gpr[24] = dolrecomp_rotl32(ctx->gpr[23], 4u) & 0xFFFFFFF0u;
    }

label_7F27CF58:
    ctx->pc = 0x7F27CF58u;
    // 7F27CF58: lhz     r17, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[17] = mem_read16(ctx, ea);
    }

label_7F27CF5C:
    ctx->pc = 0x7F27CF5Cu;
    // 7F27CF5C: extsh r15, r24
    {
        ctx->gpr[15] = (u32)(s32)(s16)ctx->gpr[24];
    }

label_7F27CF60:
    ctx->pc = 0x7F27CF60u;
    // 7F27CF60: add   r0, r0, r16
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[16];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F27CF64:
    ctx->pc = 0x7F27CF64u;
    // 7F27CF64: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_7F27CF68:
    ctx->pc = 0x7F27CF68u;
    // 7F27CF68: add   r0, r23, r0
    {
        u32 a = ctx->gpr[23];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F27CF6C:
    ctx->pc = 0x7F27CF6Cu;
    // 7F27CF6C: rlwinm r5, r17, 4, 0, 27
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[17], 4u) & 0xFFFFFFF0u;
    }

label_7F27CF70:
    ctx->pc = 0x7F27CF70u;
    // 7F27CF70: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F27CF74:
    ctx->pc = 0x7F27CF74u;
    // 7F27CF74: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F27CF78:
    ctx->pc = 0x7F27CF78u;
    // 7F27CF78: extsh r18, r5
    {
        ctx->gpr[18] = (u32)(s32)(s16)ctx->gpr[5];
    }

label_7F27CF7C:
    ctx->pc = 0x7F27CF7Cu;
    // 7F27CF7C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F27CF80:
    ctx->pc = 0x7F27CF80u;
    // 7F27CF80: extsh r25, r0
    {
        ctx->gpr[25] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F27CF84:
    ctx->pc = 0x7F27CF84u;
    // 7F27CF84: bl      0x80042E0C
    {
            ctx->lr = 0x7F27CF88u;
            ctx->pc = 0x80042E0Cu;
            return;
    }

label_7F27CF88:
    ctx->pc = 0x7F27CF88u;
    ctx->downcount -= 3;
    // 7F27CF88: or   r3, r18, r18
    {
        ctx->gpr[3] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F27CF8C:
    ctx->pc = 0x7F27CF8Cu;
    // 7F27CF8C: or   r4, r15, r15
    {
        ctx->gpr[4] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F27CF90:
    ctx->pc = 0x7F27CF90u;
    // 7F27CF90: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27CF94u;
            goto label_7F27DAC8;
    }

label_7F27CF94:
    ctx->pc = 0x7F27CF94u;
    ctx->downcount -= 3;
    // 7F27CF94: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27CF98:
    ctx->pc = 0x7F27CF98u;
    // 7F27CF98: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27CF9C:
    ctx->pc = 0x7F27CF9Cu;
    // 7F27CF9C: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27CFA0u;
            goto label_7F27DAB8;
    }

label_7F27CFA0:
    ctx->pc = 0x7F27CFA0u;
    ctx->downcount -= 6;
    // 7F27CFA0: addi    r0, r17, 4
    ctx->gpr[0] = ctx->gpr[17] + (u32)(s32)(4);

label_7F27CFA4:
    ctx->pc = 0x7F27CFA4u;
    // 7F27CFA4: or   r4, r15, r15
    {
        ctx->gpr[4] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F27CFA8:
    ctx->pc = 0x7F27CFA8u;
    // 7F27CFA8: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F27CFAC:
    ctx->pc = 0x7F27CFACu;
    // 7F27CFAC: extsh r15, r0
    {
        ctx->gpr[15] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F27CFB0:
    ctx->pc = 0x7F27CFB0u;
    // 7F27CFB0: or   r3, r15, r15
    {
        ctx->gpr[3] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F27CFB4:
    ctx->pc = 0x7F27CFB4u;
    // 7F27CFB4: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27CFB8u;
            goto label_7F27DAC8;
    }

label_7F27CFB8:
    ctx->pc = 0x7F27CFB8u;
    ctx->downcount -= 3;
    // 7F27CFB8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27CFBC:
    ctx->pc = 0x7F27CFBCu;
    // 7F27CFBC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27CFC0:
    ctx->pc = 0x7F27CFC0u;
    // 7F27CFC0: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27CFC4u;
            goto label_7F27DAB8;
    }

label_7F27CFC4:
    ctx->pc = 0x7F27CFC4u;
    ctx->downcount -= 3;
    // 7F27CFC4: or   r3, r15, r15
    {
        ctx->gpr[3] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F27CFC8:
    ctx->pc = 0x7F27CFC8u;
    // 7F27CFC8: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F27CFCC:
    ctx->pc = 0x7F27CFCCu;
    // 7F27CFCC: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27CFD0u;
            goto label_7F27DAC8;
    }

label_7F27CFD0:
    ctx->pc = 0x7F27CFD0u;
    ctx->downcount -= 3;
    // 7F27CFD0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27CFD4:
    ctx->pc = 0x7F27CFD4u;
    // 7F27CFD4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27CFD8:
    ctx->pc = 0x7F27CFD8u;
    // 7F27CFD8: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27CFDCu;
            goto label_7F27DAB8;
    }

label_7F27CFDC:
    ctx->pc = 0x7F27CFDCu;
    ctx->downcount -= 3;
    // 7F27CFDC: or   r3, r18, r18
    {
        ctx->gpr[3] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F27CFE0:
    ctx->pc = 0x7F27CFE0u;
    // 7F27CFE0: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F27CFE4:
    ctx->pc = 0x7F27CFE4u;
    // 7F27CFE4: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27CFE8u;
            goto label_7F27DAC8;
    }

label_7F27CFE8:
    ctx->pc = 0x7F27CFE8u;
    ctx->downcount -= 3;
    // 7F27CFE8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27CFEC:
    ctx->pc = 0x7F27CFECu;
    // 7F27CFEC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27CFF0:
    ctx->pc = 0x7F27CFF0u;
    // 7F27CFF0: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27CFF4u;
            goto label_7F27DAB8;
    }

label_7F27CFF4:
    ctx->pc = 0x7F27CFF4u;
    ctx->downcount -= 1;
    // 7F27CFF4: bl      0x7F27DAB4
    {
            ctx->lr = 0x7F27CFF8u;
            goto label_7F27DAB4;
    }

label_7F27CFF8:
    ctx->pc = 0x7F27CFF8u;
    ctx->downcount -= 22;
    // 7F27CFF8: lhz     r4, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_7F27CFFC:
    ctx->pc = 0x7F27CFFCu;
    // 7F27CFFC: addi    r0, r23, 1
    ctx->gpr[0] = ctx->gpr[23] + (u32)(s32)(1);

label_7F27D000:
    ctx->pc = 0x7F27D000u;
    // 7F27D000: lhz     r3, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_7F27D004:
    ctx->pc = 0x7F27D004u;
    // 7F27D004: rlwinm r25, r0, 4, 0, 27
    {
        ctx->gpr[25] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F27D008:
    ctx->pc = 0x7F27D008u;
    // 7F27D008: lhz     r0, 22(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(22);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F27D00C:
    ctx->pc = 0x7F27D00Cu;
    // 7F27D00C: rlwinm r15, r4, 4, 0, 27
    {
        ctx->gpr[15] = dolrecomp_rotl32(ctx->gpr[4], 4u) & 0xFFFFFFF0u;
    }

label_7F27D010:
    ctx->pc = 0x7F27D010u;
    // 7F27D010: add   r3, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F27D014:
    ctx->pc = 0x7F27D014u;
    // 7F27D014: extsh r30, r25
    {
        ctx->gpr[30] = (u32)(s32)(s16)ctx->gpr[25];
    }

label_7F27D018:
    ctx->pc = 0x7F27D018u;
    // 7F27D018: add   r26, r23, r0
    {
        u32 a = ctx->gpr[23];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[26] = res;
    }

label_7F27D01C:
    ctx->pc = 0x7F27D01Cu;
    // 7F27D01C: extsh r31, r15
    {
        ctx->gpr[31] = (u32)(s32)(s16)ctx->gpr[15];
    }

label_7F27D020:
    ctx->pc = 0x7F27D020u;
    // 7F27D020: addi    r4, r3, 1
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(1);

label_7F27D024:
    ctx->pc = 0x7F27D024u;
    // 7F27D024: rlwinm r5, r3, 4, 0, 27
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[3], 4u) & 0xFFFFFFF0u;
    }

label_7F27D028:
    ctx->pc = 0x7F27D028u;
    // 7F27D028: add   r0, r16, r26
    {
        u32 a = ctx->gpr[16];
        u32 b = ctx->gpr[26];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F27D02C:
    ctx->pc = 0x7F27D02Cu;
    // 7F27D02C: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_7F27D030:
    ctx->pc = 0x7F27D030u;
    // 7F27D030: rlwinm r27, r4, 4, 0, 27
    {
        ctx->gpr[27] = dolrecomp_rotl32(ctx->gpr[4], 4u) & 0xFFFFFFF0u;
    }

label_7F27D034:
    ctx->pc = 0x7F27D034u;
    // 7F27D034: extsh r18, r5
    {
        ctx->gpr[18] = (u32)(s32)(s16)ctx->gpr[5];
    }

label_7F27D038:
    ctx->pc = 0x7F27D038u;
    // 7F27D038: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F27D03C:
    ctx->pc = 0x7F27D03Cu;
    // 7F27D03C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F27D040:
    ctx->pc = 0x7F27D040u;
    // 7F27D040: extsh r17, r27
    {
        ctx->gpr[17] = (u32)(s32)(s16)ctx->gpr[27];
    }

label_7F27D044:
    ctx->pc = 0x7F27D044u;
    // 7F27D044: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_7F27D048:
    ctx->pc = 0x7F27D048u;
    // 7F27D048: extsh r16, r0
    {
        ctx->gpr[16] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F27D04C:
    ctx->pc = 0x7F27D04Cu;
    // 7F27D04C: bl      0x80042E0C
    {
            ctx->lr = 0x7F27D050u;
            ctx->pc = 0x80042E0Cu;
            return;
    }

label_7F27D050:
    ctx->pc = 0x7F27D050u;
    ctx->downcount -= 4;
    // 7F27D050: extsh r24, r24
    {
        ctx->gpr[24] = (u32)(s32)(s16)ctx->gpr[24];
    }

label_7F27D054:
    ctx->pc = 0x7F27D054u;
    // 7F27D054: or   r3, r18, r18
    {
        ctx->gpr[3] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F27D058:
    ctx->pc = 0x7F27D058u;
    // 7F27D058: or   r4, r24, r24
    {
        ctx->gpr[4] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F27D05C:
    ctx->pc = 0x7F27D05Cu;
    // 7F27D05C: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27D060u;
            goto label_7F27DAC8;
    }

label_7F27D060:
    ctx->pc = 0x7F27D060u;
    ctx->downcount -= 3;
    // 7F27D060: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D064:
    ctx->pc = 0x7F27D064u;
    // 7F27D064: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D068:
    ctx->pc = 0x7F27D068u;
    // 7F27D068: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27D06Cu;
            goto label_7F27DAB8;
    }

label_7F27D06C:
    ctx->pc = 0x7F27D06Cu;
    ctx->downcount -= 3;
    // 7F27D06C: or   r3, r17, r17
    {
        ctx->gpr[3] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F27D070:
    ctx->pc = 0x7F27D070u;
    // 7F27D070: or   r4, r24, r24
    {
        ctx->gpr[4] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F27D074:
    ctx->pc = 0x7F27D074u;
    // 7F27D074: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27D078u;
            goto label_7F27DAC8;
    }

label_7F27D078:
    ctx->pc = 0x7F27D078u;
    ctx->downcount -= 3;
    // 7F27D078: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D07C:
    ctx->pc = 0x7F27D07Cu;
    // 7F27D07C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D080:
    ctx->pc = 0x7F27D080u;
    // 7F27D080: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27D084u;
            goto label_7F27DAB8;
    }

label_7F27D084:
    ctx->pc = 0x7F27D084u;
    ctx->downcount -= 3;
    // 7F27D084: or   r3, r17, r17
    {
        ctx->gpr[3] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F27D088:
    ctx->pc = 0x7F27D088u;
    // 7F27D088: or   r4, r16, r16
    {
        ctx->gpr[4] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F27D08C:
    ctx->pc = 0x7F27D08Cu;
    // 7F27D08C: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27D090u;
            goto label_7F27DAC8;
    }

label_7F27D090:
    ctx->pc = 0x7F27D090u;
    ctx->downcount -= 3;
    // 7F27D090: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D094:
    ctx->pc = 0x7F27D094u;
    // 7F27D094: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D098:
    ctx->pc = 0x7F27D098u;
    // 7F27D098: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27D09Cu;
            goto label_7F27DAB8;
    }

label_7F27D09C:
    ctx->pc = 0x7F27D09Cu;
    ctx->downcount -= 3;
    // 7F27D09C: or   r3, r18, r18
    {
        ctx->gpr[3] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F27D0A0:
    ctx->pc = 0x7F27D0A0u;
    // 7F27D0A0: or   r4, r16, r16
    {
        ctx->gpr[4] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F27D0A4:
    ctx->pc = 0x7F27D0A4u;
    // 7F27D0A4: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27D0A8u;
            goto label_7F27DAC8;
    }

label_7F27D0A8:
    ctx->pc = 0x7F27D0A8u;
    ctx->downcount -= 3;
    // 7F27D0A8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D0AC:
    ctx->pc = 0x7F27D0ACu;
    // 7F27D0AC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D0B0:
    ctx->pc = 0x7F27D0B0u;
    // 7F27D0B0: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27D0B4u;
            goto label_7F27DAB8;
    }

label_7F27D0B4:
    ctx->pc = 0x7F27D0B4u;
    ctx->downcount -= 3;
    // 7F27D0B4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27D0B8:
    ctx->pc = 0x7F27D0B8u;
    // 7F27D0B8: or   r4, r24, r24
    {
        ctx->gpr[4] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F27D0BC:
    ctx->pc = 0x7F27D0BCu;
    // 7F27D0BC: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27D0C0u;
            goto label_7F27DAC8;
    }

label_7F27D0C0:
    ctx->pc = 0x7F27D0C0u;
    ctx->downcount -= 3;
    // 7F27D0C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D0C4:
    ctx->pc = 0x7F27D0C4u;
    // 7F27D0C4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D0C8:
    ctx->pc = 0x7F27D0C8u;
    // 7F27D0C8: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27D0CCu;
            goto label_7F27DAB8;
    }

label_7F27D0CC:
    ctx->pc = 0x7F27D0CCu;
    ctx->downcount -= 4;
    // 7F27D0CC: or   r16, r17, r17
    {
        ctx->gpr[16] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F27D0D0:
    ctx->pc = 0x7F27D0D0u;
    // 7F27D0D0: or   r4, r24, r24
    {
        ctx->gpr[4] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F27D0D4:
    ctx->pc = 0x7F27D0D4u;
    // 7F27D0D4: or   r3, r16, r16
    {
        ctx->gpr[3] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F27D0D8:
    ctx->pc = 0x7F27D0D8u;
    // 7F27D0D8: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27D0DCu;
            goto label_7F27DAC8;
    }

label_7F27D0DC:
    ctx->pc = 0x7F27D0DCu;
    ctx->downcount -= 3;
    // 7F27D0DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D0E0:
    ctx->pc = 0x7F27D0E0u;
    // 7F27D0E0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D0E4:
    ctx->pc = 0x7F27D0E4u;
    // 7F27D0E4: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27D0E8u;
            goto label_7F27DAB8;
    }

label_7F27D0E8:
    ctx->pc = 0x7F27D0E8u;
    ctx->downcount -= 3;
    // 7F27D0E8: or   r3, r16, r16
    {
        ctx->gpr[3] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F27D0EC:
    ctx->pc = 0x7F27D0ECu;
    // 7F27D0EC: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F27D0F0:
    ctx->pc = 0x7F27D0F0u;
    // 7F27D0F0: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27D0F4u;
            goto label_7F27DAC8;
    }

label_7F27D0F4:
    ctx->pc = 0x7F27D0F4u;
    ctx->downcount -= 3;
    // 7F27D0F4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D0F8:
    ctx->pc = 0x7F27D0F8u;
    // 7F27D0F8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D0FC:
    ctx->pc = 0x7F27D0FCu;
    // 7F27D0FC: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27D100u;
            goto label_7F27DAB8;
    }

label_7F27D100:
    ctx->pc = 0x7F27D100u;
    ctx->downcount -= 3;
    // 7F27D100: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27D104:
    ctx->pc = 0x7F27D104u;
    // 7F27D104: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F27D108:
    ctx->pc = 0x7F27D108u;
    // 7F27D108: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27D10Cu;
            goto label_7F27DAC8;
    }

label_7F27D10C:
    ctx->pc = 0x7F27D10Cu;
    ctx->downcount -= 3;
    // 7F27D10C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D110:
    ctx->pc = 0x7F27D110u;
    // 7F27D110: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D114:
    ctx->pc = 0x7F27D114u;
    // 7F27D114: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27D118u;
            goto label_7F27DAB8;
    }

label_7F27D118:
    ctx->pc = 0x7F27D118u;
    ctx->downcount -= 7;
    // 7F27D118: addi    r0, r26, -1
    ctx->gpr[0] = ctx->gpr[26] + (u32)(s32)(-1);

label_7F27D11C:
    ctx->pc = 0x7F27D11Cu;
    // 7F27D11C: or   r17, r31, r31
    {
        ctx->gpr[17] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27D120:
    ctx->pc = 0x7F27D120u;
    // 7F27D120: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F27D124:
    ctx->pc = 0x7F27D124u;
    // 7F27D124: extsh r15, r0
    {
        ctx->gpr[15] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F27D128:
    ctx->pc = 0x7F27D128u;
    // 7F27D128: or   r3, r17, r17
    {
        ctx->gpr[3] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F27D12C:
    ctx->pc = 0x7F27D12Cu;
    // 7F27D12C: or   r4, r15, r15
    {
        ctx->gpr[4] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F27D130:
    ctx->pc = 0x7F27D130u;
    // 7F27D130: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27D134u;
            goto label_7F27DAC8;
    }

label_7F27D134:
    ctx->pc = 0x7F27D134u;
    ctx->downcount -= 3;
    // 7F27D134: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D138:
    ctx->pc = 0x7F27D138u;
    // 7F27D138: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D13C:
    ctx->pc = 0x7F27D13Cu;
    // 7F27D13C: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27D140u;
            goto label_7F27DAB8;
    }

label_7F27D140:
    ctx->pc = 0x7F27D140u;
    ctx->downcount -= 3;
    // 7F27D140: or   r3, r16, r16
    {
        ctx->gpr[3] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F27D144:
    ctx->pc = 0x7F27D144u;
    // 7F27D144: or   r4, r15, r15
    {
        ctx->gpr[4] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F27D148:
    ctx->pc = 0x7F27D148u;
    // 7F27D148: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27D14Cu;
            goto label_7F27DAC8;
    }

label_7F27D14C:
    ctx->pc = 0x7F27D14Cu;
    ctx->downcount -= 3;
    // 7F27D14C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D150:
    ctx->pc = 0x7F27D150u;
    // 7F27D150: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D154:
    ctx->pc = 0x7F27D154u;
    // 7F27D154: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27D158u;
            goto label_7F27DAB8;
    }

label_7F27D158:
    ctx->pc = 0x7F27D158u;
    ctx->downcount -= 5;
    // 7F27D158: rlwinm r0, r26, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[26], 4u) & 0xFFFFFFF0u;
    }

label_7F27D15C:
    ctx->pc = 0x7F27D15Cu;
    // 7F27D15C: or   r3, r16, r16
    {
        ctx->gpr[3] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F27D160:
    ctx->pc = 0x7F27D160u;
    // 7F27D160: extsh r15, r0
    {
        ctx->gpr[15] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F27D164:
    ctx->pc = 0x7F27D164u;
    // 7F27D164: or   r4, r15, r15
    {
        ctx->gpr[4] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F27D168:
    ctx->pc = 0x7F27D168u;
    // 7F27D168: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27D16Cu;
            goto label_7F27DAC8;
    }

label_7F27D16C:
    ctx->pc = 0x7F27D16Cu;
    ctx->downcount -= 3;
    // 7F27D16C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D170:
    ctx->pc = 0x7F27D170u;
    // 7F27D170: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D174:
    ctx->pc = 0x7F27D174u;
    // 7F27D174: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27D178u;
            goto label_7F27DAB8;
    }

label_7F27D178:
    ctx->pc = 0x7F27D178u;
    ctx->downcount -= 3;
    // 7F27D178: or   r3, r17, r17
    {
        ctx->gpr[3] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F27D17C:
    ctx->pc = 0x7F27D17Cu;
    // 7F27D17C: or   r4, r15, r15
    {
        ctx->gpr[4] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F27D180:
    ctx->pc = 0x7F27D180u;
    // 7F27D180: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27D184u;
            goto label_7F27DAC8;
    }

label_7F27D184:
    ctx->pc = 0x7F27D184u;
    ctx->downcount -= 3;
    // 7F27D184: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D188:
    ctx->pc = 0x7F27D188u;
    // 7F27D188: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D18C:
    ctx->pc = 0x7F27D18Cu;
    // 7F27D18C: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27D190u;
            goto label_7F27DAB8;
    }

label_7F27D190:
    ctx->pc = 0x7F27D190u;
    ctx->downcount -= 1;
    // 7F27D190: bl      0x7F27DAB4
    {
            ctx->lr = 0x7F27D194u;
            goto label_7F27DAB4;
    }

label_7F27D194:
    ctx->pc = 0x7F27D194u;
    ctx->downcount -= 24;
    // 7F27D194: lhz     r5, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_7F27D198:
    ctx->pc = 0x7F27D198u;
    // 7F27D198: subfic  r6, r28, 0
    {
        u64 res = (u64)(u32)(s32)(0) + (u64)(~ctx->gpr[28]) + 1u;
        ctx->gpr[6] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F27D19C:
    ctx->pc = 0x7F27D19Cu;
    // 7F27D19C: lhz     r9, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[9] = mem_read16(ctx, ea);
    }

label_7F27D1A0:
    ctx->pc = 0x7F27D1A0u;
    // 7F27D1A0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27D1A4:
    ctx->pc = 0x7F27D1A4u;
    // 7F27D1A4: lhz     r4, 22(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(22);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_7F27D1A8:
    ctx->pc = 0x7F27D1A8u;
    // 7F27D1A8: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_7F27D1AC:
    ctx->pc = 0x7F27D1ACu;
    // 7F27D1AC: lwz     r0, 25292(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25292);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27D1B0:
    ctx->pc = 0x7F27D1B0u;
    // 7F27D1B0: add   r3, r9, r5
    {
        u32 a = ctx->gpr[9];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F27D1B4:
    ctx->pc = 0x7F27D1B4u;
    // 7F27D1B4: rlwinm r5, r3, 4, 0, 27
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[3], 4u) & 0xFFFFFFF0u;
    }

label_7F27D1B8:
    ctx->pc = 0x7F27D1B8u;
    // 7F27D1B8: subfe   r8, r6, r6
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[6];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[8] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F27D1BC:
    ctx->pc = 0x7F27D1BCu;
    // 7F27D1BC: li      r7, 6
    ctx->gpr[7] = (u32)(s32)(6);

label_7F27D1C0:
    ctx->pc = 0x7F27D1C0u;
    // 7F27D1C0: addi    r3, r4, -1
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F27D1C4:
    ctx->pc = 0x7F27D1C4u;
    // 7F27D1C4: and   r4, r7, r8
    {
        ctx->gpr[4] = ctx->gpr[7] & ctx->gpr[8];
    }

label_7F27D1C8:
    ctx->pc = 0x7F27D1C8u;
    // 7F27D1C8: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27D1CC:
    ctx->pc = 0x7F27D1CCu;
    // 7F27D1CC: add   r0, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F27D1D0:
    ctx->pc = 0x7F27D1D0u;
    // 7F27D1D0: rlwinm r6, r9, 4, 0, 27
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[9], 4u) & 0xFFFFFFF0u;
    }

label_7F27D1D4:
    ctx->pc = 0x7F27D1D4u;
    // 7F27D1D4: add   r0, r23, r0
    {
        u32 a = ctx->gpr[23];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F27D1D8:
    ctx->pc = 0x7F27D1D8u;
    // 7F27D1D8: extsh r16, r5
    {
        ctx->gpr[16] = (u32)(s32)(s16)ctx->gpr[5];
    }

label_7F27D1DC:
    ctx->pc = 0x7F27D1DCu;
    // 7F27D1DC: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F27D1E0:
    ctx->pc = 0x7F27D1E0u;
    // 7F27D1E0: extsh r15, r6
    {
        ctx->gpr[15] = (u32)(s32)(s16)ctx->gpr[6];
    }

label_7F27D1E4:
    ctx->pc = 0x7F27D1E4u;
    // 7F27D1E4: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_7F27D1E8:
    ctx->pc = 0x7F27D1E8u;
    // 7F27D1E8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F27D1EC:
    ctx->pc = 0x7F27D1ECu;
    // 7F27D1EC: extsh r17, r0
    {
        ctx->gpr[17] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F27D1F0:
    ctx->pc = 0x7F27D1F0u;
    // 7F27D1F0: bl      0x80045970
    {
            ctx->lr = 0x7F27D1F4u;
            ctx->pc = 0x80045970u;
            return;
    }

label_7F27D1F4:
    ctx->pc = 0x7F27D1F4u;
    ctx->downcount -= 4;
    // 7F27D1F4: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_7F27D1F8:
    ctx->pc = 0x7F27D1F8u;
    // 7F27D1F8: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F27D1FC:
    ctx->pc = 0x7F27D1FCu;
    // 7F27D1FC: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F27D200:
    ctx->pc = 0x7F27D200u;
    // 7F27D200: bl      0x80042E0C
    {
            ctx->lr = 0x7F27D204u;
            ctx->pc = 0x80042E0Cu;
            return;
    }

label_7F27D204:
    ctx->pc = 0x7F27D204u;
    ctx->downcount -= 3;
    // 7F27D204: or   r3, r15, r15
    {
        ctx->gpr[3] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F27D208:
    ctx->pc = 0x7F27D208u;
    // 7F27D208: or   r4, r24, r24
    {
        ctx->gpr[4] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F27D20C:
    ctx->pc = 0x7F27D20Cu;
    // 7F27D20C: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27D210u;
            goto label_7F27DAC8;
    }

label_7F27D210:
    ctx->pc = 0x7F27D210u;
    ctx->downcount -= 3;
    // 7F27D210: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D214:
    ctx->pc = 0x7F27D214u;
    // 7F27D214: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D218:
    ctx->pc = 0x7F27D218u;
    // 7F27D218: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27D21Cu;
            goto label_7F27DAB8;
    }

label_7F27D21C:
    ctx->pc = 0x7F27D21Cu;
    ctx->downcount -= 3;
    // 7F27D21C: or   r3, r16, r16
    {
        ctx->gpr[3] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F27D220:
    ctx->pc = 0x7F27D220u;
    // 7F27D220: or   r4, r24, r24
    {
        ctx->gpr[4] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F27D224:
    ctx->pc = 0x7F27D224u;
    // 7F27D224: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27D228u;
            goto label_7F27DAC8;
    }

label_7F27D228:
    ctx->pc = 0x7F27D228u;
    ctx->downcount -= 3;
    // 7F27D228: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D22C:
    ctx->pc = 0x7F27D22Cu;
    // 7F27D22C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D230:
    ctx->pc = 0x7F27D230u;
    // 7F27D230: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27D234u;
            goto label_7F27DAB8;
    }

label_7F27D234:
    ctx->pc = 0x7F27D234u;
    ctx->downcount -= 3;
    // 7F27D234: or   r3, r16, r16
    {
        ctx->gpr[3] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F27D238:
    ctx->pc = 0x7F27D238u;
    // 7F27D238: or   r4, r17, r17
    {
        ctx->gpr[4] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F27D23C:
    ctx->pc = 0x7F27D23Cu;
    // 7F27D23C: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27D240u;
            goto label_7F27DAC8;
    }

label_7F27D240:
    ctx->pc = 0x7F27D240u;
    ctx->downcount -= 3;
    // 7F27D240: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D244:
    ctx->pc = 0x7F27D244u;
    // 7F27D244: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D248:
    ctx->pc = 0x7F27D248u;
    // 7F27D248: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27D24Cu;
            goto label_7F27DAB8;
    }

label_7F27D24C:
    ctx->pc = 0x7F27D24Cu;
    ctx->downcount -= 3;
    // 7F27D24C: or   r3, r15, r15
    {
        ctx->gpr[3] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F27D250:
    ctx->pc = 0x7F27D250u;
    // 7F27D250: or   r4, r17, r17
    {
        ctx->gpr[4] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F27D254:
    ctx->pc = 0x7F27D254u;
    // 7F27D254: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27D258u;
            goto label_7F27DAC8;
    }

label_7F27D258:
    ctx->pc = 0x7F27D258u;
    ctx->downcount -= 3;
    // 7F27D258: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D25C:
    ctx->pc = 0x7F27D25Cu;
    // 7F27D25C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D260:
    ctx->pc = 0x7F27D260u;
    // 7F27D260: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27D264u;
            goto label_7F27DAB8;
    }

label_7F27D264:
    ctx->pc = 0x7F27D264u;
    ctx->downcount -= 1;
    // 7F27D264: bl      0x7F27DAB4
    {
            ctx->lr = 0x7F27D268u;
            goto label_7F27DAB4;
    }

label_7F27D268:
    ctx->pc = 0x7F27D268u;
    ctx->downcount -= 24;
    // 7F27D268: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27D26C:
    ctx->pc = 0x7F27D26Cu;
    // 7F27D26C: lhz     r5, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_7F27D270:
    ctx->pc = 0x7F27D270u;
    // 7F27D270: lwz     r0, 25296(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25296);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27D274:
    ctx->pc = 0x7F27D274u;
    // 7F27D274: lhz     r4, 22(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(22);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_7F27D278:
    ctx->pc = 0x7F27D278u;
    // 7F27D278: addi    r15, r5, 4
    ctx->gpr[15] = ctx->gpr[5] + (u32)(s32)(4);

label_7F27D27C:
    ctx->pc = 0x7F27D27Cu;
    // 7F27D27C: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27D280:
    ctx->pc = 0x7F27D280u;
    // 7F27D280: add   r6, r19, r15
    {
        u32 a = ctx->gpr[19];
        u32 b = ctx->gpr[15];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F27D284:
    ctx->pc = 0x7F27D284u;
    // 7F27D284: add   r5, r23, r4
    {
        u32 a = ctx->gpr[23];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F27D288:
    ctx->pc = 0x7F27D288u;
    // 7F27D288: lbz     r4, 75(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(75);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F27D28C:
    ctx->pc = 0x7F27D28Cu;
    // 7F27D28C: lbz     r3, 79(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(79);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F27D290:
    ctx->pc = 0x7F27D290u;
    // 7F27D290: addi    r5, r5, -1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1);

label_7F27D294:
    ctx->pc = 0x7F27D294u;
    // 7F27D294: lbz     r0, 83(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(83);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F27D298:
    ctx->pc = 0x7F27D298u;
    // 7F27D298: rlwinm r6, r6, 4, 0, 27
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 4u) & 0xFFFFFFF0u;
    }

label_7F27D29C:
    ctx->pc = 0x7F27D29Cu;
    // 7F27D29C: stb     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F27D2A0:
    ctx->pc = 0x7F27D2A0u;
    // 7F27D2A0: rlwinm r5, r5, 4, 0, 27
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 4u) & 0xFFFFFFF0u;
    }

label_7F27D2A4:
    ctx->pc = 0x7F27D2A4u;
    // 7F27D2A4: extsh r16, r6
    {
        ctx->gpr[16] = (u32)(s32)(s16)ctx->gpr[6];
    }

label_7F27D2A8:
    ctx->pc = 0x7F27D2A8u;
    // 7F27D2A8: addi    r4, r1, 28
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(28);

label_7F27D2AC:
    ctx->pc = 0x7F27D2ACu;
    // 7F27D2AC: stb     r3, 25(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(25);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F27D2B0:
    ctx->pc = 0x7F27D2B0u;
    // 7F27D2B0: extsh r17, r5
    {
        ctx->gpr[17] = (u32)(s32)(s16)ctx->gpr[5];
    }

label_7F27D2B4:
    ctx->pc = 0x7F27D2B4u;
    // 7F27D2B4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F27D2B8:
    ctx->pc = 0x7F27D2B8u;
    // 7F27D2B8: stb     r0, 26(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(26);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F27D2BC:
    ctx->pc = 0x7F27D2BCu;
    // 7F27D2BC: lwz     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27D2C0:
    ctx->pc = 0x7F27D2C0u;
    // 7F27D2C0: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27D2C4:
    ctx->pc = 0x7F27D2C4u;
    // 7F27D2C4: bl      0x80045970
    {
            ctx->lr = 0x7F27D2C8u;
            ctx->pc = 0x80045970u;
            return;
    }

label_7F27D2C8:
    ctx->pc = 0x7F27D2C8u;
    ctx->downcount -= 4;
    // 7F27D2C8: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_7F27D2CC:
    ctx->pc = 0x7F27D2CCu;
    // 7F27D2CC: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F27D2D0:
    ctx->pc = 0x7F27D2D0u;
    // 7F27D2D0: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F27D2D4:
    ctx->pc = 0x7F27D2D4u;
    // 7F27D2D4: bl      0x80042E0C
    {
            ctx->lr = 0x7F27D2D8u;
            ctx->pc = 0x80042E0Cu;
            return;
    }

label_7F27D2D8:
    ctx->pc = 0x7F27D2D8u;
    ctx->downcount -= 4;
    // 7F27D2D8: or   r18, r30, r30
    {
        ctx->gpr[18] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F27D2DC:
    ctx->pc = 0x7F27D2DCu;
    // 7F27D2DC: or   r3, r16, r16
    {
        ctx->gpr[3] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F27D2E0:
    ctx->pc = 0x7F27D2E0u;
    // 7F27D2E0: or   r4, r18, r18
    {
        ctx->gpr[4] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F27D2E4:
    ctx->pc = 0x7F27D2E4u;
    // 7F27D2E4: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27D2E8u;
            goto label_7F27DAC8;
    }

label_7F27D2E8:
    ctx->pc = 0x7F27D2E8u;
    ctx->downcount -= 3;
    // 7F27D2E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D2EC:
    ctx->pc = 0x7F27D2ECu;
    // 7F27D2EC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D2F0:
    ctx->pc = 0x7F27D2F0u;
    // 7F27D2F0: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27D2F4u;
            goto label_7F27DAB8;
    }

label_7F27D2F4:
    ctx->pc = 0x7F27D2F4u;
    ctx->downcount -= 52;
    // 7F27D2F4: lwz     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27D2F8:
    ctx->pc = 0x7F27D2F8u;
    // 7F27D2F8: or   r4, r18, r18
    {
        ctx->gpr[4] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F27D2FC:
    ctx->pc = 0x7F27D2FCu;
    // 7F27D2FC: mullw   r0, r0, r21
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[21];
        ctx->gpr[0] = (u32)product;
    }

label_7F27D300:
    ctx->pc = 0x7F27D300u;
    // 7F27D300: divw   r0, r0, r20
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[20];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F27D304:
    ctx->pc = 0x7F27D304u;
    // 7F27D304: add   r0, r0, r15
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[15];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F27D308:
    ctx->pc = 0x7F27D308u;
    // 7F27D308: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F27D30C:
    ctx->pc = 0x7F27D30Cu;
    // 7F27D30C: extsh r15, r0
    {
        ctx->gpr[15] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F27D310:
    ctx->pc = 0x7F27D310u;
    // 7F27D310: or   r3, r15, r15
    {
        ctx->gpr[3] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F27D314:
    ctx->pc = 0x7F27D314u;
    // 7F27D314: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27D318u;
            goto label_7F27DAC8;
    }

label_7F27D318:
    ctx->pc = 0x7F27D318u;
    ctx->downcount -= 3;
    // 7F27D318: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D31C:
    ctx->pc = 0x7F27D31Cu;
    // 7F27D31C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D320:
    ctx->pc = 0x7F27D320u;
    // 7F27D320: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27D324u;
            goto label_7F27DAB8;
    }

label_7F27D324:
    ctx->pc = 0x7F27D324u;
    ctx->downcount -= 3;
    // 7F27D324: or   r3, r15, r15
    {
        ctx->gpr[3] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F27D328:
    ctx->pc = 0x7F27D328u;
    // 7F27D328: or   r4, r17, r17
    {
        ctx->gpr[4] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F27D32C:
    ctx->pc = 0x7F27D32Cu;
    // 7F27D32C: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27D330u;
            goto label_7F27DAC8;
    }

label_7F27D330:
    ctx->pc = 0x7F27D330u;
    ctx->downcount -= 3;
    // 7F27D330: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D334:
    ctx->pc = 0x7F27D334u;
    // 7F27D334: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D338:
    ctx->pc = 0x7F27D338u;
    // 7F27D338: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27D33Cu;
            goto label_7F27DAB8;
    }

label_7F27D33C:
    ctx->pc = 0x7F27D33Cu;
    ctx->downcount -= 3;
    // 7F27D33C: or   r3, r16, r16
    {
        ctx->gpr[3] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F27D340:
    ctx->pc = 0x7F27D340u;
    // 7F27D340: or   r4, r17, r17
    {
        ctx->gpr[4] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F27D344:
    ctx->pc = 0x7F27D344u;
    // 7F27D344: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27D348u;
            goto label_7F27DAC8;
    }

label_7F27D348:
    ctx->pc = 0x7F27D348u;
    ctx->downcount -= 3;
    // 7F27D348: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D34C:
    ctx->pc = 0x7F27D34Cu;
    // 7F27D34C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D350:
    ctx->pc = 0x7F27D350u;
    // 7F27D350: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27D354u;
            goto label_7F27DAB8;
    }

label_7F27D354:
    ctx->pc = 0x7F27D354u;
    ctx->downcount -= 1;
    // 7F27D354: bl      0x7F27DAB4
    {
            ctx->lr = 0x7F27D358u;
            goto label_7F27DAB4;
    }

label_7F27D358:
    ctx->pc = 0x7F27D358u;
    ctx->downcount -= 1;
    // 7F27D358: bl      0x7F2EA87C
    {
            ctx->lr = 0x7F27D35Cu;
            ctx->pc = 0x7F2EA87Cu;
            return;
    }

label_7F27D35C:
    ctx->pc = 0x7F27D35Cu;
    ctx->downcount -= 1;
    // 7F27D35C: bl      0x7F2EA990
    {
            ctx->lr = 0x7F27D360u;
            ctx->pc = 0x7F2EA990u;
            return;
    }

label_7F27D360:
    ctx->pc = 0x7F27D360u;
    ctx->downcount -= 16;
    // 7F27D360: lhz     r4, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_7F27D364:
    ctx->pc = 0x7F27D364u;
    // 7F27D364: or   r16, r30, r30
    {
        ctx->gpr[16] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F27D368:
    ctx->pc = 0x7F27D368u;
    // 7F27D368: lhz     r3, 22(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(22);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_7F27D36C:
    ctx->pc = 0x7F27D36Cu;
    // 7F27D36C: lhz     r0, 38(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(38);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F27D370:
    ctx->pc = 0x7F27D370u;
    // 7F27D370: addi    r5, r4, 4
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(4);

label_7F27D374:
    ctx->pc = 0x7F27D374u;
    // 7F27D374: add   r4, r19, r5
    {
        u32 a = ctx->gpr[19];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F27D378:
    ctx->pc = 0x7F27D378u;
    // 7F27D378: add   r3, r23, r3
    {
        u32 a = ctx->gpr[23];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F27D37C:
    ctx->pc = 0x7F27D37Cu;
    // 7F27D37C: rlwinm r5, r5, 4, 0, 27
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 4u) & 0xFFFFFFF0u;
    }

label_7F27D380:
    ctx->pc = 0x7F27D380u;
    // 7F27D380: rlwinm. r0, r0, 0, 27, 27
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

label_7F27D384:
    ctx->pc = 0x7F27D384u;
    // 7F27D384: addi    r3, r3, -1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F27D388:
    ctx->pc = 0x7F27D388u;
    // 7F27D388: rlwinm r4, r4, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 4u) & 0xFFFFFFF0u;
    }

label_7F27D38C:
    ctx->pc = 0x7F27D38Cu;
    // 7F27D38C: rlwinm r0, r3, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 4u) & 0xFFFFFFF0u;
    }

label_7F27D390:
    ctx->pc = 0x7F27D390u;
    // 7F27D390: extsh r15, r5
    {
        ctx->gpr[15] = (u32)(s32)(s16)ctx->gpr[5];
    }

label_7F27D394:
    ctx->pc = 0x7F27D394u;
    // 7F27D394: extsh r17, r4
    {
        ctx->gpr[17] = (u32)(s32)(s16)ctx->gpr[4];
    }

label_7F27D398:
    ctx->pc = 0x7F27D398u;
    // 7F27D398: extsh r18, r0
    {
        ctx->gpr[18] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F27D39C:
    ctx->pc = 0x7F27D39Cu;
    // 7F27D39C: bc    12, 2, 0x7F27D3E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27D3E0;
        }
    }

label_7F27D3A0:
    ctx->pc = 0x7F27D3A0u;
    ctx->downcount -= 16;
    // 7F27D3A0: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F27D3A4:
    ctx->pc = 0x7F27D3A4u;
    // 7F27D3A4: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F27D3A8:
    ctx->pc = 0x7F27D3A8u;
    // 7F27D3A8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F27D3AC:
    ctx->pc = 0x7F27D3ACu;
    // 7F27D3AC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27D3B0:
    ctx->pc = 0x7F27D3B0u;
    // 7F27D3B0: addi    r6, r6, 25300
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(25300);

label_7F27D3B4:
    ctx->pc = 0x7F27D3B4u;
    // 7F27D3B4: addi    r5, r5, 25304
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25304);

label_7F27D3B8:
    ctx->pc = 0x7F27D3B8u;
    // 7F27D3B8: addi    r4, r4, 25308
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25308);

label_7F27D3BC:
    ctx->pc = 0x7F27D3BCu;
    // 7F27D3BC: lwz     r6, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F27D3C0:
    ctx->pc = 0x7F27D3C0u;
    // 7F27D3C0: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F27D3C4:
    ctx->pc = 0x7F27D3C4u;
    // 7F27D3C4: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27D3C8:
    ctx->pc = 0x7F27D3C8u;
    // 7F27D3C8: lwz     r0, 25312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25312);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27D3CC:
    ctx->pc = 0x7F27D3CCu;
    // 7F27D3CC: stw     r6, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F27D3D0:
    ctx->pc = 0x7F27D3D0u;
    // 7F27D3D0: stw     r5, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F27D3D4:
    ctx->pc = 0x7F27D3D4u;
    // 7F27D3D4: stw     r4, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27D3D8:
    ctx->pc = 0x7F27D3D8u;
    // 7F27D3D8: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27D3DC:
    ctx->pc = 0x7F27D3DCu;
    // 7F27D3DC: b       0x7F27D4B8
    {
            goto label_7F27D4B8;
    }

label_7F27D3E0:
    ctx->pc = 0x7F27D3E0u;
    ctx->downcount -= 183;
    // 7F27D3E0: lbz     r4, 73(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(73);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F27D3E4:
    ctx->pc = 0x7F27D3E4u;
    // 7F27D3E4: lis     r10, 32582
    ctx->gpr[10] = ((u32)(s32)(32582) << 16);

label_7F27D3E8:
    ctx->pc = 0x7F27D3E8u;
    // 7F27D3E8: lbz     r0, 74(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(74);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F27D3EC:
    ctx->pc = 0x7F27D3ECu;
    // 7F27D3EC: addi    r10, r10, 25316
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(25316);

label_7F27D3F0:
    ctx->pc = 0x7F27D3F0u;
    // 7F27D3F0: lwz     r10, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F27D3F4:
    ctx->pc = 0x7F27D3F4u;
    // 7F27D3F4: lis     r9, 32582
    ctx->gpr[9] = ((u32)(s32)(32582) << 16);

label_7F27D3F8:
    ctx->pc = 0x7F27D3F8u;
    // 7F27D3F8: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F27D3FC:
    ctx->pc = 0x7F27D3FCu;
    // 7F27D3FC: lis     r8, 32582
    ctx->gpr[8] = ((u32)(s32)(32582) << 16);

label_7F27D400:
    ctx->pc = 0x7F27D400u;
    // 7F27D400: mullw   r3, r22, r0
    {
        s64 product = (s64)(s32)ctx->gpr[22] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F27D404:
    ctx->pc = 0x7F27D404u;
    // 7F27D404: stw     r10, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F27D408:
    ctx->pc = 0x7F27D408u;
    // 7F27D408: lbz     r5, 77(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(77);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F27D40C:
    ctx->pc = 0x7F27D40Cu;
    // 7F27D40C: addi    r9, r9, 25320
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(25320);

label_7F27D410:
    ctx->pc = 0x7F27D410u;
    // 7F27D410: lbz     r7, 78(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(78);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_7F27D414:
    ctx->pc = 0x7F27D414u;
    // 7F27D414: addi    r8, r8, 25324
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(25324);

label_7F27D418:
    ctx->pc = 0x7F27D418u;
    // 7F27D418: divw   r3, r3, r20
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[20];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[3] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F27D41C:
    ctx->pc = 0x7F27D41Cu;
    // 7F27D41C: lbz     r6, 81(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(81);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F27D420:
    ctx->pc = 0x7F27D420u;
    // 7F27D420: lbz     r0, 82(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(82);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F27D424:
    ctx->pc = 0x7F27D424u;
    // 7F27D424: subf   r12, r5, r7
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[7];
        u32 res = a + b + 1u;
        ctx->gpr[12] = res;
    }

label_7F27D428:
    ctx->pc = 0x7F27D428u;
    // 7F27D428: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F27D42C:
    ctx->pc = 0x7F27D42Cu;
    // 7F27D42C: lwz     r9, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F27D430:
    ctx->pc = 0x7F27D430u;
    // 7F27D430: subf   r11, r6, r0
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[11] = res;
    }

label_7F27D434:
    ctx->pc = 0x7F27D434u;
    // 7F27D434: addi    r7, r7, 25328
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(25328);

label_7F27D438:
    ctx->pc = 0x7F27D438u;
    // 7F27D438: mullw   r0, r22, r12
    {
        s64 product = (s64)(s32)ctx->gpr[22] * (s64)(s32)ctx->gpr[12];
        ctx->gpr[0] = (u32)product;
    }

label_7F27D43C:
    ctx->pc = 0x7F27D43Cu;
    // 7F27D43C: lwz     r7, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F27D440:
    ctx->pc = 0x7F27D440u;
    // 7F27D440: stb     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F27D444:
    ctx->pc = 0x7F27D444u;
    // 7F27D444: lwz     r8, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F27D448:
    ctx->pc = 0x7F27D448u;
    // 7F27D448: stw     r7, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F27D44C:
    ctx->pc = 0x7F27D44Cu;
    // 7F27D44C: add   r7, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F27D450:
    ctx->pc = 0x7F27D450u;
    // 7F27D450: mullw   r11, r22, r11
    {
        s64 product = (s64)(s32)ctx->gpr[22] * (s64)(s32)ctx->gpr[11];
        ctx->gpr[11] = (u32)product;
    }

label_7F27D454:
    ctx->pc = 0x7F27D454u;
    // 7F27D454: stb     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F27D458:
    ctx->pc = 0x7F27D458u;
    // 7F27D458: stw     r9, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F27D45C:
    ctx->pc = 0x7F27D45Cu;
    // 7F27D45C: stw     r8, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F27D460:
    ctx->pc = 0x7F27D460u;
    // 7F27D460: divw   r0, r0, r20
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[20];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F27D464:
    ctx->pc = 0x7F27D464u;
    // 7F27D464: stb     r5, 21(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(21);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F27D468:
    ctx->pc = 0x7F27D468u;
    // 7F27D468: stb     r6, 22(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(22);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F27D46C:
    ctx->pc = 0x7F27D46Cu;
    // 7F27D46C: lwz     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27D470:
    ctx->pc = 0x7F27D470u;
    // 7F27D470: stb     r5, 9(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F27D474:
    ctx->pc = 0x7F27D474u;
    // 7F27D474: stb     r6, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F27D478:
    ctx->pc = 0x7F27D478u;
    // 7F27D478: add   r5, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F27D47C:
    ctx->pc = 0x7F27D47Cu;
    // 7F27D47C: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27D480:
    ctx->pc = 0x7F27D480u;
    // 7F27D480: divw   r4, r11, r20
    {
        s32 dividend = (s32)ctx->gpr[11];
        s32 divisor = (s32)ctx->gpr[20];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[4] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F27D484:
    ctx->pc = 0x7F27D484u;
    // 7F27D484: stw     r3, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27D488:
    ctx->pc = 0x7F27D488u;
    // 7F27D488: stb     r7, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F27D48C:
    ctx->pc = 0x7F27D48Cu;
    // 7F27D48C: stb     r7, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F27D490:
    ctx->pc = 0x7F27D490u;
    // 7F27D490: stb     r5, 17(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(17);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F27D494:
    ctx->pc = 0x7F27D494u;
    // 7F27D494: stb     r5, 13(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F27D498:
    ctx->pc = 0x7F27D498u;
    // 7F27D498: add   r3, r6, r4
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F27D49C:
    ctx->pc = 0x7F27D49Cu;
    // 7F27D49C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27D4A0:
    ctx->pc = 0x7F27D4A0u;
    // 7F27D4A0: stb     r3, 14(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F27D4A4:
    ctx->pc = 0x7F27D4A4u;
    // 7F27D4A4: stb     r3, 18(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(18);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F27D4A8:
    ctx->pc = 0x7F27D4A8u;
    // 7F27D4A8: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27D4AC:
    ctx->pc = 0x7F27D4ACu;
    // 7F27D4AC: lwz     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27D4B0:
    ctx->pc = 0x7F27D4B0u;
    // 7F27D4B0: stw     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27D4B4:
    ctx->pc = 0x7F27D4B4u;
    // 7F27D4B4: stw     r3, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27D4B8:
    ctx->pc = 0x7F27D4B8u;
    ctx->downcount -= 4;
    // 7F27D4B8: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_7F27D4BC:
    ctx->pc = 0x7F27D4BCu;
    // 7F27D4BC: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F27D4C0:
    ctx->pc = 0x7F27D4C0u;
    // 7F27D4C0: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F27D4C4:
    ctx->pc = 0x7F27D4C4u;
    // 7F27D4C4: bl      0x80042E0C
    {
            ctx->lr = 0x7F27D4C8u;
            ctx->pc = 0x80042E0Cu;
            return;
    }

label_7F27D4C8:
    ctx->pc = 0x7F27D4C8u;
    ctx->downcount -= 3;
    // 7F27D4C8: or   r3, r15, r15
    {
        ctx->gpr[3] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F27D4CC:
    ctx->pc = 0x7F27D4CCu;
    // 7F27D4CC: or   r4, r16, r16
    {
        ctx->gpr[4] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F27D4D0:
    ctx->pc = 0x7F27D4D0u;
    // 7F27D4D0: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27D4D4u;
            goto label_7F27DAC8;
    }

label_7F27D4D4:
    ctx->pc = 0x7F27D4D4u;
    ctx->downcount -= 5;
    // 7F27D4D4: lbz     r3, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F27D4D8:
    ctx->pc = 0x7F27D4D8u;
    // 7F27D4D8: lbz     r4, 41(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(41);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F27D4DC:
    ctx->pc = 0x7F27D4DCu;
    // 7F27D4DC: lbz     r5, 42(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(42);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F27D4E0:
    ctx->pc = 0x7F27D4E0u;
    // 7F27D4E0: lbz     r6, 43(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(43);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F27D4E4:
    ctx->pc = 0x7F27D4E4u;
    // 7F27D4E4: bl      0x7F27DA9C
    {
            ctx->lr = 0x7F27D4E8u;
            goto label_7F27DA9C;
    }

label_7F27D4E8:
    ctx->pc = 0x7F27D4E8u;
    ctx->downcount -= 3;
    // 7F27D4E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D4EC:
    ctx->pc = 0x7F27D4ECu;
    // 7F27D4EC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D4F0:
    ctx->pc = 0x7F27D4F0u;
    // 7F27D4F0: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27D4F4u;
            goto label_7F27DAB8;
    }

label_7F27D4F4:
    ctx->pc = 0x7F27D4F4u;
    ctx->downcount -= 3;
    // 7F27D4F4: or   r3, r17, r17
    {
        ctx->gpr[3] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F27D4F8:
    ctx->pc = 0x7F27D4F8u;
    // 7F27D4F8: or   r4, r16, r16
    {
        ctx->gpr[4] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F27D4FC:
    ctx->pc = 0x7F27D4FCu;
    // 7F27D4FC: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27D500u;
            goto label_7F27DAC8;
    }

label_7F27D500:
    ctx->pc = 0x7F27D500u;
    ctx->downcount -= 5;
    // 7F27D500: lbz     r3, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F27D504:
    ctx->pc = 0x7F27D504u;
    // 7F27D504: lbz     r4, 45(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(45);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F27D508:
    ctx->pc = 0x7F27D508u;
    // 7F27D508: lbz     r5, 46(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(46);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F27D50C:
    ctx->pc = 0x7F27D50Cu;
    // 7F27D50C: lbz     r6, 47(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(47);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F27D510:
    ctx->pc = 0x7F27D510u;
    // 7F27D510: bl      0x7F27DA9C
    {
            ctx->lr = 0x7F27D514u;
            goto label_7F27DA9C;
    }

label_7F27D514:
    ctx->pc = 0x7F27D514u;
    ctx->downcount -= 3;
    // 7F27D514: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D518:
    ctx->pc = 0x7F27D518u;
    // 7F27D518: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D51C:
    ctx->pc = 0x7F27D51Cu;
    // 7F27D51C: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27D520u;
            goto label_7F27DAB8;
    }

label_7F27D520:
    ctx->pc = 0x7F27D520u;
    ctx->downcount -= 3;
    // 7F27D520: or   r3, r17, r17
    {
        ctx->gpr[3] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F27D524:
    ctx->pc = 0x7F27D524u;
    // 7F27D524: or   r4, r18, r18
    {
        ctx->gpr[4] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F27D528:
    ctx->pc = 0x7F27D528u;
    // 7F27D528: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27D52Cu;
            goto label_7F27DAC8;
    }

label_7F27D52C:
    ctx->pc = 0x7F27D52Cu;
    ctx->downcount -= 5;
    // 7F27D52C: lbz     r3, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F27D530:
    ctx->pc = 0x7F27D530u;
    // 7F27D530: lbz     r4, 49(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(49);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F27D534:
    ctx->pc = 0x7F27D534u;
    // 7F27D534: lbz     r5, 50(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(50);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F27D538:
    ctx->pc = 0x7F27D538u;
    // 7F27D538: lbz     r6, 51(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(51);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F27D53C:
    ctx->pc = 0x7F27D53Cu;
    // 7F27D53C: bl      0x7F27DA9C
    {
            ctx->lr = 0x7F27D540u;
            goto label_7F27DA9C;
    }

label_7F27D540:
    ctx->pc = 0x7F27D540u;
    ctx->downcount -= 3;
    // 7F27D540: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D544:
    ctx->pc = 0x7F27D544u;
    // 7F27D544: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D548:
    ctx->pc = 0x7F27D548u;
    // 7F27D548: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27D54Cu;
            goto label_7F27DAB8;
    }

label_7F27D54C:
    ctx->pc = 0x7F27D54Cu;
    ctx->downcount -= 3;
    // 7F27D54C: or   r3, r15, r15
    {
        ctx->gpr[3] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F27D550:
    ctx->pc = 0x7F27D550u;
    // 7F27D550: or   r4, r18, r18
    {
        ctx->gpr[4] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F27D554:
    ctx->pc = 0x7F27D554u;
    // 7F27D554: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27D558u;
            goto label_7F27DAC8;
    }

label_7F27D558:
    ctx->pc = 0x7F27D558u;
    ctx->downcount -= 5;
    // 7F27D558: lbz     r3, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F27D55C:
    ctx->pc = 0x7F27D55Cu;
    // 7F27D55C: lbz     r4, 53(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(53);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F27D560:
    ctx->pc = 0x7F27D560u;
    // 7F27D560: lbz     r5, 54(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(54);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F27D564:
    ctx->pc = 0x7F27D564u;
    // 7F27D564: lbz     r6, 55(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(55);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F27D568:
    ctx->pc = 0x7F27D568u;
    // 7F27D568: bl      0x7F27DA9C
    {
            ctx->lr = 0x7F27D56Cu;
            goto label_7F27DA9C;
    }

label_7F27D56C:
    ctx->pc = 0x7F27D56Cu;
    ctx->downcount -= 3;
    // 7F27D56C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D570:
    ctx->pc = 0x7F27D570u;
    // 7F27D570: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D574:
    ctx->pc = 0x7F27D574u;
    // 7F27D574: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27D578u;
            goto label_7F27DAB8;
    }

label_7F27D578:
    ctx->pc = 0x7F27D578u;
    ctx->downcount -= 1;
    // 7F27D578: bl      0x7F27DAB4
    {
            ctx->lr = 0x7F27D57Cu;
            goto label_7F27DAB4;
    }

label_7F27D57C:
    ctx->pc = 0x7F27D57Cu;
    ctx->downcount -= 15;
    // 7F27D57C: lhz     r7, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[7] = mem_read16(ctx, ea);
    }

label_7F27D580:
    ctx->pc = 0x7F27D580u;
    // 7F27D580: subfic  r3, r28, 0
    {
        u64 res = (u64)(u32)(s32)(0) + (u64)(~ctx->gpr[28]) + 1u;
        ctx->gpr[3] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F27D584:
    ctx->pc = 0x7F27D584u;
    // 7F27D584: lwz     r0, 84(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27D588:
    ctx->pc = 0x7F27D588u;
    // 7F27D588: subfe   r6, r3, r3
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[6] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F27D58C:
    ctx->pc = 0x7F27D58Cu;
    // 7F27D58C: rlwinm r4, r7, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[7], 4u) & 0xFFFFFFF0u;
    }

label_7F27D590:
    ctx->pc = 0x7F27D590u;
    // 7F27D590: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_7F27D594:
    ctx->pc = 0x7F27D594u;
    // 7F27D594: add   r0, r7, r0
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F27D598:
    ctx->pc = 0x7F27D598u;
    // 7F27D598: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_7F27D59C:
    ctx->pc = 0x7F27D59Cu;
    // 7F27D59C: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F27D5A0:
    ctx->pc = 0x7F27D5A0u;
    // 7F27D5A0: and   r15, r5, r6
    {
        ctx->gpr[15] = ctx->gpr[5] & ctx->gpr[6];
    }

label_7F27D5A4:
    ctx->pc = 0x7F27D5A4u;
    // 7F27D5A4: extsh r17, r4
    {
        ctx->gpr[17] = (u32)(s32)(s16)ctx->gpr[4];
    }

label_7F27D5A8:
    ctx->pc = 0x7F27D5A8u;
    // 7F27D5A8: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F27D5AC:
    ctx->pc = 0x7F27D5ACu;
    // 7F27D5AC: extsh r18, r0
    {
        ctx->gpr[18] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F27D5B0:
    ctx->pc = 0x7F27D5B0u;
    // 7F27D5B0: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F27D5B4:
    ctx->pc = 0x7F27D5B4u;
    // 7F27D5B4: bl      0x80042E0C
    {
            ctx->lr = 0x7F27D5B8u;
            ctx->pc = 0x80042E0Cu;
            return;
    }

label_7F27D5B8:
    ctx->pc = 0x7F27D5B8u;
    ctx->downcount -= 7;
    // 7F27D5B8: add   r3, r23, r15
    {
        u32 a = ctx->gpr[23];
        u32 b = ctx->gpr[15];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F27D5BC:
    ctx->pc = 0x7F27D5BCu;
    // 7F27D5BC: addi    r0, r3, 4
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(4);

label_7F27D5C0:
    ctx->pc = 0x7F27D5C0u;
    // 7F27D5C0: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F27D5C4:
    ctx->pc = 0x7F27D5C4u;
    // 7F27D5C4: or   r3, r17, r17
    {
        ctx->gpr[3] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F27D5C8:
    ctx->pc = 0x7F27D5C8u;
    // 7F27D5C8: extsh r16, r0
    {
        ctx->gpr[16] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F27D5CC:
    ctx->pc = 0x7F27D5CCu;
    // 7F27D5CC: or   r4, r16, r16
    {
        ctx->gpr[4] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F27D5D0:
    ctx->pc = 0x7F27D5D0u;
    // 7F27D5D0: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27D5D4u;
            goto label_7F27DAC8;
    }

label_7F27D5D4:
    ctx->pc = 0x7F27D5D4u;
    ctx->downcount -= 5;
    // 7F27D5D4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D5D8:
    ctx->pc = 0x7F27D5D8u;
    // 7F27D5D8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D5DC:
    ctx->pc = 0x7F27D5DCu;
    // 7F27D5DC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F27D5E0:
    ctx->pc = 0x7F27D5E0u;
    // 7F27D5E0: li      r6, 192
    ctx->gpr[6] = (u32)(s32)(192);

label_7F27D5E4:
    ctx->pc = 0x7F27D5E4u;
    // 7F27D5E4: bl      0x7F27DA9C
    {
            ctx->lr = 0x7F27D5E8u;
            goto label_7F27DA9C;
    }

label_7F27D5E8:
    ctx->pc = 0x7F27D5E8u;
    ctx->downcount -= 3;
    // 7F27D5E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D5EC:
    ctx->pc = 0x7F27D5ECu;
    // 7F27D5EC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D5F0:
    ctx->pc = 0x7F27D5F0u;
    // 7F27D5F0: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27D5F4u;
            goto label_7F27DAB8;
    }

label_7F27D5F4:
    ctx->pc = 0x7F27D5F4u;
    ctx->downcount -= 3;
    // 7F27D5F4: or   r3, r18, r18
    {
        ctx->gpr[3] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F27D5F8:
    ctx->pc = 0x7F27D5F8u;
    // 7F27D5F8: or   r4, r16, r16
    {
        ctx->gpr[4] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F27D5FC:
    ctx->pc = 0x7F27D5FCu;
    // 7F27D5FC: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27D600u;
            goto label_7F27DAC8;
    }

label_7F27D600:
    ctx->pc = 0x7F27D600u;
    ctx->downcount -= 5;
    // 7F27D600: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D604:
    ctx->pc = 0x7F27D604u;
    // 7F27D604: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D608:
    ctx->pc = 0x7F27D608u;
    // 7F27D608: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F27D60C:
    ctx->pc = 0x7F27D60Cu;
    // 7F27D60C: li      r6, 192
    ctx->gpr[6] = (u32)(s32)(192);

label_7F27D610:
    ctx->pc = 0x7F27D610u;
    // 7F27D610: bl      0x7F27DA9C
    {
            ctx->lr = 0x7F27D614u;
            goto label_7F27DA9C;
    }

label_7F27D614:
    ctx->pc = 0x7F27D614u;
    ctx->downcount -= 3;
    // 7F27D614: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D618:
    ctx->pc = 0x7F27D618u;
    // 7F27D618: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D61C:
    ctx->pc = 0x7F27D61Cu;
    // 7F27D61C: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27D620u;
            goto label_7F27DAB8;
    }

label_7F27D620:
    ctx->pc = 0x7F27D620u;
    ctx->downcount -= 7;
    // 7F27D620: add   r4, r23, r15
    {
        u32 a = ctx->gpr[23];
        u32 b = ctx->gpr[15];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F27D624:
    ctx->pc = 0x7F27D624u;
    // 7F27D624: or   r3, r18, r18
    {
        ctx->gpr[3] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F27D628:
    ctx->pc = 0x7F27D628u;
    // 7F27D628: addi    r0, r4, 15
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(15);

label_7F27D62C:
    ctx->pc = 0x7F27D62Cu;
    // 7F27D62C: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F27D630:
    ctx->pc = 0x7F27D630u;
    // 7F27D630: extsh r15, r0
    {
        ctx->gpr[15] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F27D634:
    ctx->pc = 0x7F27D634u;
    // 7F27D634: or   r4, r15, r15
    {
        ctx->gpr[4] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F27D638:
    ctx->pc = 0x7F27D638u;
    // 7F27D638: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27D63Cu;
            goto label_7F27DAC8;
    }

label_7F27D63C:
    ctx->pc = 0x7F27D63Cu;
    ctx->downcount -= 5;
    // 7F27D63C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D640:
    ctx->pc = 0x7F27D640u;
    // 7F27D640: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D644:
    ctx->pc = 0x7F27D644u;
    // 7F27D644: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F27D648:
    ctx->pc = 0x7F27D648u;
    // 7F27D648: li      r6, 192
    ctx->gpr[6] = (u32)(s32)(192);

label_7F27D64C:
    ctx->pc = 0x7F27D64Cu;
    // 7F27D64C: bl      0x7F27DA9C
    {
            ctx->lr = 0x7F27D650u;
            goto label_7F27DA9C;
    }

label_7F27D650:
    ctx->pc = 0x7F27D650u;
    ctx->downcount -= 3;
    // 7F27D650: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D654:
    ctx->pc = 0x7F27D654u;
    // 7F27D654: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D658:
    ctx->pc = 0x7F27D658u;
    // 7F27D658: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27D65Cu;
            goto label_7F27DAB8;
    }

label_7F27D65C:
    ctx->pc = 0x7F27D65Cu;
    ctx->downcount -= 3;
    // 7F27D65C: or   r3, r17, r17
    {
        ctx->gpr[3] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F27D660:
    ctx->pc = 0x7F27D660u;
    // 7F27D660: or   r4, r15, r15
    {
        ctx->gpr[4] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F27D664:
    ctx->pc = 0x7F27D664u;
    // 7F27D664: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27D668u;
            goto label_7F27DAC8;
    }

label_7F27D668:
    ctx->pc = 0x7F27D668u;
    ctx->downcount -= 5;
    // 7F27D668: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D66C:
    ctx->pc = 0x7F27D66Cu;
    // 7F27D66C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D670:
    ctx->pc = 0x7F27D670u;
    // 7F27D670: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F27D674:
    ctx->pc = 0x7F27D674u;
    // 7F27D674: li      r6, 192
    ctx->gpr[6] = (u32)(s32)(192);

label_7F27D678:
    ctx->pc = 0x7F27D678u;
    // 7F27D678: bl      0x7F27DA9C
    {
            ctx->lr = 0x7F27D67Cu;
            goto label_7F27DA9C;
    }

label_7F27D67C:
    ctx->pc = 0x7F27D67Cu;
    ctx->downcount -= 3;
    // 7F27D67C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D680:
    ctx->pc = 0x7F27D680u;
    // 7F27D680: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D684:
    ctx->pc = 0x7F27D684u;
    // 7F27D684: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27D688u;
            goto label_7F27DAB8;
    }

label_7F27D688:
    ctx->pc = 0x7F27D688u;
    ctx->downcount -= 1;
    // 7F27D688: bl      0x7F27DAB4
    {
            ctx->lr = 0x7F27D68Cu;
            goto label_7F27DAB4;
    }

label_7F27D68C:
    ctx->pc = 0x7F27D68Cu;
    ctx->downcount -= 3;
    // 7F27D68C: lhz     r4, 68(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(68);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_7F27D690:
    ctx->pc = 0x7F27D690u;
    // 7F27D690: cmplwi  r4, 0x0000
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

label_7F27D694:
    ctx->pc = 0x7F27D694u;
    // 7F27D694: bc    12, 2, 0x7F27D6A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27D6A0;
        }
    }

label_7F27D698:
    ctx->pc = 0x7F27D698u;
    ctx->downcount -= 2;
    // 7F27D698: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F27D69C:
    ctx->pc = 0x7F27D69Cu;
    // 7F27D69C: sth     r0, 68(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27D6A0:
    ctx->pc = 0x7F27D6A0u;
    ctx->downcount -= 2;
    // 7F27D6A0: cmpwi   r4, 0
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

label_7F27D6A4:
    ctx->pc = 0x7F27D6A4u;
    // 7F27D6A4: bc    4, 2, 0x7F27D6B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27D6B0;
        }
    }

label_7F27D6A8:
    ctx->pc = 0x7F27D6A8u;
    ctx->downcount -= 2;
    // 7F27D6A8: sth     r22, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        mem_write16(ctx, ea, (u16)ctx->gpr[22]);
    }

label_7F27D6AC:
    ctx->pc = 0x7F27D6ACu;
    // 7F27D6AC: b       0x7F27D6C8
    {
            goto label_7F27D6C8;
    }

label_7F27D6B0:
    ctx->pc = 0x7F27D6B0u;
    ctx->downcount -= 45;
    // 7F27D6B0: lwz     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27D6B4:
    ctx->pc = 0x7F27D6B4u;
    // 7F27D6B4: subf   r3, r22, r0
    {
        u32 a = ~ctx->gpr[22];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F27D6B8:
    ctx->pc = 0x7F27D6B8u;
    // 7F27D6B8: lhz     r0, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F27D6BC:
    ctx->pc = 0x7F27D6BCu;
    // 7F27D6BC: divw   r3, r3, r4
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[4];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[3] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F27D6C0:
    ctx->pc = 0x7F27D6C0u;
    // 7F27D6C0: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F27D6C4:
    ctx->pc = 0x7F27D6C4u;
    // 7F27D6C4: sth     r0, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27D6C8:
    ctx->pc = 0x7F27D6C8u;
    ctx->downcount -= 2;
    // 7F27D6C8: cmpwi   r28, 0
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

label_7F27D6CC:
    ctx->pc = 0x7F27D6CCu;
    // 7F27D6CC: bc    4, 2, 0x7F27D6E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27D6E4;
        }
    }

label_7F27D6D0:
    ctx->pc = 0x7F27D6D0u;
    ctx->downcount -= 4;
    // 7F27D6D0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27D6D4:
    ctx->pc = 0x7F27D6D4u;
    // 7F27D6D4: lwz     r4, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27D6D8:
    ctx->pc = 0x7F27D6D8u;
    // 7F27D6D8: addi    r3, r3, -7568
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7568);

label_7F27D6DC:
    ctx->pc = 0x7F27D6DCu;
    // 7F27D6DC: bl      0x7F2EA688
    {
            ctx->lr = 0x7F27D6E0u;
            ctx->pc = 0x7F2EA688u;
            return;
    }

label_7F27D6E0:
    ctx->pc = 0x7F27D6E0u;
    ctx->downcount -= 1;
    // 7F27D6E0: b       0x7F27DA88
    {
            goto label_7F27DA88;
    }

label_7F27D6E4:
    ctx->pc = 0x7F27D6E4u;
    ctx->downcount -= 17;
    // 7F27D6E4: lhz     r6, 22(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(22);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_7F27D6E8:
    ctx->pc = 0x7F27D6E8u;
    // 7F27D6E8: li      r3, 168
    ctx->gpr[3] = (u32)(s32)(168);

label_7F27D6EC:
    ctx->pc = 0x7F27D6ECu;
    // 7F27D6EC: lhz     r5, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_7F27D6F0:
    ctx->pc = 0x7F27D6F0u;
    // 7F27D6F0: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F27D6F4:
    ctx->pc = 0x7F27D6F4u;
    // 7F27D6F4: lhz     r8, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[8] = mem_read16(ctx, ea);
    }

label_7F27D6F8:
    ctx->pc = 0x7F27D6F8u;
    // 7F27D6F8: addi    r6, r6, 4
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(4);

label_7F27D6FC:
    ctx->pc = 0x7F27D6FCu;
    // 7F27D6FC: addi    r0, r5, 1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(1);

label_7F27D700:
    ctx->pc = 0x7F27D700u;
    // 7F27D700: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F27D704:
    ctx->pc = 0x7F27D704u;
    // 7F27D704: add   r6, r23, r6
    {
        u32 a = ctx->gpr[23];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F27D708:
    ctx->pc = 0x7F27D708u;
    // 7F27D708: rlwinm r7, r8, 4, 0, 27
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[8], 4u) & 0xFFFFFFF0u;
    }

label_7F27D70C:
    ctx->pc = 0x7F27D70Cu;
    // 7F27D70C: add   r0, r8, r0
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F27D710:
    ctx->pc = 0x7F27D710u;
    // 7F27D710: rlwinm r6, r6, 4, 0, 27
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 4u) & 0xFFFFFFF0u;
    }

label_7F27D714:
    ctx->pc = 0x7F27D714u;
    // 7F27D714: extsh r15, r7
    {
        ctx->gpr[15] = (u32)(s32)(s16)ctx->gpr[7];
    }

label_7F27D718:
    ctx->pc = 0x7F27D718u;
    // 7F27D718: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F27D71C:
    ctx->pc = 0x7F27D71Cu;
    // 7F27D71C: extsh r16, r6
    {
        ctx->gpr[16] = (u32)(s32)(s16)ctx->gpr[6];
    }

label_7F27D720:
    ctx->pc = 0x7F27D720u;
    // 7F27D720: extsh r17, r0
    {
        ctx->gpr[17] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F27D724:
    ctx->pc = 0x7F27D724u;
    // 7F27D724: bl      0x80042E0C
    {
            ctx->lr = 0x7F27D728u;
            ctx->pc = 0x80042E0Cu;
            return;
    }

label_7F27D728:
    ctx->pc = 0x7F27D728u;
    ctx->downcount -= 3;
    // 7F27D728: or   r3, r15, r15
    {
        ctx->gpr[3] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F27D72C:
    ctx->pc = 0x7F27D72Cu;
    // 7F27D72C: or   r4, r16, r16
    {
        ctx->gpr[4] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F27D730:
    ctx->pc = 0x7F27D730u;
    // 7F27D730: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27D734u;
            goto label_7F27DAC8;
    }

label_7F27D734:
    ctx->pc = 0x7F27D734u;
    ctx->downcount -= 5;
    // 7F27D734: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D738:
    ctx->pc = 0x7F27D738u;
    // 7F27D738: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D73C:
    ctx->pc = 0x7F27D73Cu;
    // 7F27D73C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F27D740:
    ctx->pc = 0x7F27D740u;
    // 7F27D740: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F27D744:
    ctx->pc = 0x7F27D744u;
    // 7F27D744: bl      0x7F27DA9C
    {
            ctx->lr = 0x7F27D748u;
            goto label_7F27DA9C;
    }

label_7F27D748:
    ctx->pc = 0x7F27D748u;
    ctx->downcount -= 3;
    // 7F27D748: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D74C:
    ctx->pc = 0x7F27D74Cu;
    // 7F27D74C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D750:
    ctx->pc = 0x7F27D750u;
    // 7F27D750: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27D754u;
            goto label_7F27DAB8;
    }

label_7F27D754:
    ctx->pc = 0x7F27D754u;
    ctx->downcount -= 3;
    // 7F27D754: or   r3, r17, r17
    {
        ctx->gpr[3] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F27D758:
    ctx->pc = 0x7F27D758u;
    // 7F27D758: or   r4, r16, r16
    {
        ctx->gpr[4] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F27D75C:
    ctx->pc = 0x7F27D75Cu;
    // 7F27D75C: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27D760u;
            goto label_7F27DAC8;
    }

label_7F27D760:
    ctx->pc = 0x7F27D760u;
    ctx->downcount -= 5;
    // 7F27D760: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D764:
    ctx->pc = 0x7F27D764u;
    // 7F27D764: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D768:
    ctx->pc = 0x7F27D768u;
    // 7F27D768: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F27D76C:
    ctx->pc = 0x7F27D76Cu;
    // 7F27D76C: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F27D770:
    ctx->pc = 0x7F27D770u;
    // 7F27D770: bl      0x7F27DA9C
    {
            ctx->lr = 0x7F27D774u;
            goto label_7F27DA9C;
    }

label_7F27D774:
    ctx->pc = 0x7F27D774u;
    ctx->downcount -= 3;
    // 7F27D774: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D778:
    ctx->pc = 0x7F27D778u;
    // 7F27D778: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D77C:
    ctx->pc = 0x7F27D77Cu;
    // 7F27D77C: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27D780u;
            goto label_7F27DAB8;
    }

label_7F27D780:
    ctx->pc = 0x7F27D780u;
    ctx->downcount -= 1;
    // 7F27D780: bl      0x7F27DAB4
    {
            ctx->lr = 0x7F27D784u;
            goto label_7F27DAB4;
    }

label_7F27D784:
    ctx->pc = 0x7F27D784u;
    ctx->downcount -= 7;
    // 7F27D784: lha     r0, 42(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(42);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27D788:
    ctx->pc = 0x7F27D788u;
    // 7F27D788: lha     r18, 40(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
        ctx->gpr[18] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27D78C:
    ctx->pc = 0x7F27D78Cu;
    // 7F27D78C: lha     r3, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27D790:
    ctx->pc = 0x7F27D790u;
    // 7F27D790: cmpw    r18, r0
    {
        s32 val_a = (s32)(ctx->gpr[18]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F27D794:
    ctx->pc = 0x7F27D794u;
    // 7F27D794: lhz     r4, 50(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(50);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_7F27D798:
    ctx->pc = 0x7F27D798u;
    // 7F27D798: subf   r17, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[17] = res;
    }

label_7F27D79C:
    ctx->pc = 0x7F27D79Cu;
    // 7F27D79C: bc    4, 1, 0x7F27D7A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27D7A8;
        }
    }

label_7F27D7A0:
    ctx->pc = 0x7F27D7A0u;
    ctx->downcount -= 2;
    // 7F27D7A0: or   r18, r0, r0
    {
        ctx->gpr[18] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F27D7A4:
    ctx->pc = 0x7F27D7A4u;
    // 7F27D7A4: b       0x7F27D7B4
    {
            goto label_7F27D7B4;
    }

label_7F27D7A8:
    ctx->pc = 0x7F27D7A8u;
    ctx->downcount -= 2;
    // 7F27D7A8: cmpw    r18, r3
    {
        s32 val_a = (s32)(ctx->gpr[18]);
        s32 val_b = (s32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F27D7AC:
    ctx->pc = 0x7F27D7ACu;
    // 7F27D7AC: bc    4, 0, 0x7F27D7B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27D7B4;
        }
    }

label_7F27D7B0:
    ctx->pc = 0x7F27D7B0u;
    ctx->downcount -= 1;
    // 7F27D7B0: or   r18, r3, r3
    {
        ctx->gpr[18] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27D7B4:
    ctx->pc = 0x7F27D7B4u;
    ctx->downcount -= 2;
    // 7F27D7B4: cmpw    r4, r18
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(ctx->gpr[18]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F27D7B8:
    ctx->pc = 0x7F27D7B8u;
    // 7F27D7B8: bc    4, 1, 0x7F27D7C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27D7C8;
        }
    }

label_7F27D7BC:
    ctx->pc = 0x7F27D7BCu;
    ctx->downcount -= 3;
    // 7F27D7BC: lhz     r0, 46(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(46);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F27D7C0:
    ctx->pc = 0x7F27D7C0u;
    // 7F27D7C0: sth     r0, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27D7C4:
    ctx->pc = 0x7F27D7C4u;
    // 7F27D7C4: sth     r4, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F27D7C8:
    ctx->pc = 0x7F27D7C8u;
    ctx->downcount -= 3;
    // 7F27D7C8: lhz     r0, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F27D7CC:
    ctx->pc = 0x7F27D7CCu;
    // 7F27D7CC: cmpw    r0, r18
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(ctx->gpr[18]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F27D7D0:
    ctx->pc = 0x7F27D7D0u;
    // 7F27D7D0: bc    4, 0, 0x7F27D7E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27D7E0;
        }
    }

label_7F27D7D4:
    ctx->pc = 0x7F27D7D4u;
    ctx->downcount -= 3;
    // 7F27D7D4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F27D7D8:
    ctx->pc = 0x7F27D7D8u;
    // 7F27D7D8: sth     r0, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27D7DC:
    ctx->pc = 0x7F27D7DCu;
    // 7F27D7DC: sth     r18, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        mem_write16(ctx, ea, (u16)ctx->gpr[18]);
    }

label_7F27D7E0:
    ctx->pc = 0x7F27D7E0u;
    ctx->downcount -= 207;
    // 7F27D7E0: lhz     r19, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[19] = mem_read16(ctx, ea);
    }

label_7F27D7E4:
    ctx->pc = 0x7F27D7E4u;
    // 7F27D7E4: mullw   r5, r18, r21
    {
        s64 product = (s64)(s32)ctx->gpr[18] * (s64)(s32)ctx->gpr[21];
        ctx->gpr[5] = (u32)product;
    }

label_7F27D7E8:
    ctx->pc = 0x7F27D7E8u;
    // 7F27D7E8: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_7F27D7EC:
    ctx->pc = 0x7F27D7ECu;
    // 7F27D7EC: sth     r18, 50(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(50);
        mem_write16(ctx, ea, (u16)ctx->gpr[18]);
    }

label_7F27D7F0:
    ctx->pc = 0x7F27D7F0u;
    // 7F27D7F0: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F27D7F4:
    ctx->pc = 0x7F27D7F4u;
    // 7F27D7F4: lbz     r0, 88(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F27D7F8:
    ctx->pc = 0x7F27D7F8u;
    // 7F27D7F8: lbz     r7, 91(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(91);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_7F27D7FC:
    ctx->pc = 0x7F27D7FCu;
    // 7F27D7FC: divw   r20, r5, r17
    {
        s32 dividend = (s32)ctx->gpr[5];
        s32 divisor = (s32)ctx->gpr[17];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[20] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F27D800:
    ctx->pc = 0x7F27D800u;
    // 7F27D800: lhz     r11, 22(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(22);
        ctx->gpr[11] = mem_read16(ctx, ea);
    }

label_7F27D804:
    ctx->pc = 0x7F27D804u;
    // 7F27D804: subf   r10, r0, r7
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[7];
        u32 res = a + b + 1u;
        ctx->gpr[10] = res;
    }

label_7F27D808:
    ctx->pc = 0x7F27D808u;
    // 7F27D808: lhz     r12, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[12] = mem_read16(ctx, ea);
    }

label_7F27D80C:
    ctx->pc = 0x7F27D80Cu;
    // 7F27D80C: add   r16, r23, r11
    {
        u32 a = ctx->gpr[23];
        u32 b = ctx->gpr[11];
        u32 res = a + b;
        ctx->gpr[16] = res;
    }

label_7F27D810:
    ctx->pc = 0x7F27D810u;
    // 7F27D810: lbz     r6, 89(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(89);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F27D814:
    ctx->pc = 0x7F27D814u;
    // 7F27D814: mullw   r10, r18, r10
    {
        s64 product = (s64)(s32)ctx->gpr[18] * (s64)(s32)ctx->gpr[10];
        ctx->gpr[10] = (u32)product;
    }

label_7F27D818:
    ctx->pc = 0x7F27D818u;
    // 7F27D818: lbz     r9, 92(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(92);
        ctx->gpr[9] = mem_read8(ctx, ea);
    }

label_7F27D81C:
    ctx->pc = 0x7F27D81Cu;
    // 7F27D81C: lbz     r7, 90(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(90);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_7F27D820:
    ctx->pc = 0x7F27D820u;
    // 7F27D820: addi    r15, r12, 4
    ctx->gpr[15] = ctx->gpr[12] + (u32)(s32)(4);

label_7F27D824:
    ctx->pc = 0x7F27D824u;
    // 7F27D824: lbz     r8, 93(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(93);
        ctx->gpr[8] = mem_read8(ctx, ea);
    }

label_7F27D828:
    ctx->pc = 0x7F27D828u;
    // 7F27D828: subf   r9, r6, r9
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[9];
        u32 res = a + b + 1u;
        ctx->gpr[9] = res;
    }

label_7F27D82C:
    ctx->pc = 0x7F27D82Cu;
    // 7F27D82C: divw   r10, r10, r17
    {
        s32 dividend = (s32)ctx->gpr[10];
        s32 divisor = (s32)ctx->gpr[17];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[10] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F27D830:
    ctx->pc = 0x7F27D830u;
    // 7F27D830: subf   r8, r7, r8
    {
        u32 a = ~ctx->gpr[7];
        u32 b = ctx->gpr[8];
        u32 res = a + b + 1u;
        ctx->gpr[8] = res;
    }

label_7F27D834:
    ctx->pc = 0x7F27D834u;
    // 7F27D834: addi    r11, r16, 1
    ctx->gpr[11] = ctx->gpr[16] + (u32)(s32)(1);

label_7F27D838:
    ctx->pc = 0x7F27D838u;
    // 7F27D838: rlwinm r12, r15, 4, 0, 27
    {
        ctx->gpr[12] = dolrecomp_rotl32(ctx->gpr[15], 4u) & 0xFFFFFFF0u;
    }

label_7F27D83C:
    ctx->pc = 0x7F27D83Cu;
    // 7F27D83C: rlwinm r11, r11, 4, 0, 27
    {
        ctx->gpr[11] = dolrecomp_rotl32(ctx->gpr[11], 4u) & 0xFFFFFFF0u;
    }

label_7F27D840:
    ctx->pc = 0x7F27D840u;
    // 7F27D840: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F27D844:
    ctx->pc = 0x7F27D844u;
    // 7F27D844: mullw   r9, r18, r9
    {
        s64 product = (s64)(s32)ctx->gpr[18] * (s64)(s32)ctx->gpr[9];
        ctx->gpr[9] = (u32)product;
    }

label_7F27D848:
    ctx->pc = 0x7F27D848u;
    // 7F27D848: add   r22, r0, r10
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[10];
        u32 res = a + b;
        ctx->gpr[22] = res;
    }

label_7F27D84C:
    ctx->pc = 0x7F27D84Cu;
    // 7F27D84C: extsh r26, r12
    {
        ctx->gpr[26] = (u32)(s32)(s16)ctx->gpr[12];
    }

label_7F27D850:
    ctx->pc = 0x7F27D850u;
    // 7F27D850: extsh r27, r11
    {
        ctx->gpr[27] = (u32)(s32)(s16)ctx->gpr[11];
    }

label_7F27D854:
    ctx->pc = 0x7F27D854u;
    // 7F27D854: mullw   r8, r18, r8
    {
        s64 product = (s64)(s32)ctx->gpr[18] * (s64)(s32)ctx->gpr[8];
        ctx->gpr[8] = (u32)product;
    }

label_7F27D858:
    ctx->pc = 0x7F27D858u;
    // 7F27D858: divw   r9, r9, r17
    {
        s32 dividend = (s32)ctx->gpr[9];
        s32 divisor = (s32)ctx->gpr[17];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[9] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F27D85C:
    ctx->pc = 0x7F27D85Cu;
    // 7F27D85C: divw   r0, r8, r17
    {
        s32 dividend = (s32)ctx->gpr[8];
        s32 divisor = (s32)ctx->gpr[17];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F27D860:
    ctx->pc = 0x7F27D860u;
    // 7F27D860: add   r24, r6, r9
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[24] = res;
    }

label_7F27D864:
    ctx->pc = 0x7F27D864u;
    // 7F27D864: add   r25, r7, r0
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[25] = res;
    }

label_7F27D868:
    ctx->pc = 0x7F27D868u;
    // 7F27D868: bl      0x80042E0C
    {
            ctx->lr = 0x7F27D86Cu;
            ctx->pc = 0x80042E0Cu;
            return;
    }

label_7F27D86C:
    ctx->pc = 0x7F27D86Cu;
    ctx->downcount -= 3;
    // 7F27D86C: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F27D870:
    ctx->pc = 0x7F27D870u;
    // 7F27D870: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F27D874:
    ctx->pc = 0x7F27D874u;
    // 7F27D874: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27D878u;
            goto label_7F27DAC8;
    }

label_7F27D878:
    ctx->pc = 0x7F27D878u;
    ctx->downcount -= 5;
    // 7F27D878: lbz     r3, 88(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(88);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F27D87C:
    ctx->pc = 0x7F27D87Cu;
    // 7F27D87C: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F27D880:
    ctx->pc = 0x7F27D880u;
    // 7F27D880: lbz     r4, 89(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(89);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F27D884:
    ctx->pc = 0x7F27D884u;
    // 7F27D884: lbz     r5, 90(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(90);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F27D888:
    ctx->pc = 0x7F27D888u;
    // 7F27D888: bl      0x7F27DA9C
    {
            ctx->lr = 0x7F27D88Cu;
            goto label_7F27DA9C;
    }

label_7F27D88C:
    ctx->pc = 0x7F27D88Cu;
    ctx->downcount -= 3;
    // 7F27D88C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D890:
    ctx->pc = 0x7F27D890u;
    // 7F27D890: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D894:
    ctx->pc = 0x7F27D894u;
    // 7F27D894: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27D898u;
            goto label_7F27DAB8;
    }

label_7F27D898:
    ctx->pc = 0x7F27D898u;
    ctx->downcount -= 6;
    // 7F27D898: add   r0, r20, r15
    {
        u32 a = ctx->gpr[20];
        u32 b = ctx->gpr[15];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F27D89C:
    ctx->pc = 0x7F27D89Cu;
    // 7F27D89C: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F27D8A0:
    ctx->pc = 0x7F27D8A0u;
    // 7F27D8A0: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F27D8A4:
    ctx->pc = 0x7F27D8A4u;
    // 7F27D8A4: extsh r15, r0
    {
        ctx->gpr[15] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F27D8A8:
    ctx->pc = 0x7F27D8A8u;
    // 7F27D8A8: or   r3, r15, r15
    {
        ctx->gpr[3] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F27D8AC:
    ctx->pc = 0x7F27D8ACu;
    // 7F27D8AC: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27D8B0u;
            goto label_7F27DAC8;
    }

label_7F27D8B0:
    ctx->pc = 0x7F27D8B0u;
    ctx->downcount -= 5;
    // 7F27D8B0: rlwinm r3, r22, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[22], 0u) & 0x000000FFu;
    }

label_7F27D8B4:
    ctx->pc = 0x7F27D8B4u;
    // 7F27D8B4: rlwinm r4, r24, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[24], 0u) & 0x000000FFu;
    }

label_7F27D8B8:
    ctx->pc = 0x7F27D8B8u;
    // 7F27D8B8: rlwinm r5, r25, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[25], 0u) & 0x000000FFu;
    }

label_7F27D8BC:
    ctx->pc = 0x7F27D8BCu;
    // 7F27D8BC: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F27D8C0:
    ctx->pc = 0x7F27D8C0u;
    // 7F27D8C0: bl      0x7F27DA9C
    {
            ctx->lr = 0x7F27D8C4u;
            goto label_7F27DA9C;
    }

label_7F27D8C4:
    ctx->pc = 0x7F27D8C4u;
    ctx->downcount -= 3;
    // 7F27D8C4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D8C8:
    ctx->pc = 0x7F27D8C8u;
    // 7F27D8C8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D8CC:
    ctx->pc = 0x7F27D8CCu;
    // 7F27D8CC: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27D8D0u;
            goto label_7F27DAB8;
    }

label_7F27D8D0:
    ctx->pc = 0x7F27D8D0u;
    ctx->downcount -= 6;
    // 7F27D8D0: addi    r0, r16, 4
    ctx->gpr[0] = ctx->gpr[16] + (u32)(s32)(4);

label_7F27D8D4:
    ctx->pc = 0x7F27D8D4u;
    // 7F27D8D4: or   r3, r15, r15
    {
        ctx->gpr[3] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F27D8D8:
    ctx->pc = 0x7F27D8D8u;
    // 7F27D8D8: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F27D8DC:
    ctx->pc = 0x7F27D8DCu;
    // 7F27D8DC: extsh r15, r0
    {
        ctx->gpr[15] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F27D8E0:
    ctx->pc = 0x7F27D8E0u;
    // 7F27D8E0: or   r4, r15, r15
    {
        ctx->gpr[4] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F27D8E4:
    ctx->pc = 0x7F27D8E4u;
    // 7F27D8E4: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27D8E8u;
            goto label_7F27DAC8;
    }

label_7F27D8E8:
    ctx->pc = 0x7F27D8E8u;
    ctx->downcount -= 5;
    // 7F27D8E8: rlwinm r3, r22, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[22], 0u) & 0x000000FFu;
    }

label_7F27D8EC:
    ctx->pc = 0x7F27D8ECu;
    // 7F27D8EC: rlwinm r4, r24, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[24], 0u) & 0x000000FFu;
    }

label_7F27D8F0:
    ctx->pc = 0x7F27D8F0u;
    // 7F27D8F0: rlwinm r5, r25, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[25], 0u) & 0x000000FFu;
    }

label_7F27D8F4:
    ctx->pc = 0x7F27D8F4u;
    // 7F27D8F4: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F27D8F8:
    ctx->pc = 0x7F27D8F8u;
    // 7F27D8F8: bl      0x7F27DA9C
    {
            ctx->lr = 0x7F27D8FCu;
            goto label_7F27DA9C;
    }

label_7F27D8FC:
    ctx->pc = 0x7F27D8FCu;
    ctx->downcount -= 3;
    // 7F27D8FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D900:
    ctx->pc = 0x7F27D900u;
    // 7F27D900: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D904:
    ctx->pc = 0x7F27D904u;
    // 7F27D904: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27D908u;
            goto label_7F27DAB8;
    }

label_7F27D908:
    ctx->pc = 0x7F27D908u;
    ctx->downcount -= 3;
    // 7F27D908: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F27D90C:
    ctx->pc = 0x7F27D90Cu;
    // 7F27D90C: or   r4, r15, r15
    {
        ctx->gpr[4] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F27D910:
    ctx->pc = 0x7F27D910u;
    // 7F27D910: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27D914u;
            goto label_7F27DAC8;
    }

label_7F27D914:
    ctx->pc = 0x7F27D914u;
    ctx->downcount -= 5;
    // 7F27D914: lbz     r3, 88(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(88);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F27D918:
    ctx->pc = 0x7F27D918u;
    // 7F27D918: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F27D91C:
    ctx->pc = 0x7F27D91Cu;
    // 7F27D91C: lbz     r4, 89(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(89);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F27D920:
    ctx->pc = 0x7F27D920u;
    // 7F27D920: lbz     r5, 90(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(90);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F27D924:
    ctx->pc = 0x7F27D924u;
    // 7F27D924: bl      0x7F27DA9C
    {
            ctx->lr = 0x7F27D928u;
            goto label_7F27DA9C;
    }

label_7F27D928:
    ctx->pc = 0x7F27D928u;
    ctx->downcount -= 3;
    // 7F27D928: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D92C:
    ctx->pc = 0x7F27D92Cu;
    // 7F27D92C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D930:
    ctx->pc = 0x7F27D930u;
    // 7F27D930: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27D934u;
            goto label_7F27DAB8;
    }

label_7F27D934:
    ctx->pc = 0x7F27D934u;
    ctx->downcount -= 1;
    // 7F27D934: bl      0x7F27DAB4
    {
            ctx->lr = 0x7F27D938u;
            goto label_7F27DAB4;
    }

label_7F27D938:
    ctx->pc = 0x7F27D938u;
    ctx->downcount -= 13;
    // 7F27D938: lhz     r5, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_7F27D93C:
    ctx->pc = 0x7F27D93Cu;
    // 7F27D93C: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_7F27D940:
    ctx->pc = 0x7F27D940u;
    // 7F27D940: lhz     r0, 22(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(22);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F27D944:
    ctx->pc = 0x7F27D944u;
    // 7F27D944: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F27D948:
    ctx->pc = 0x7F27D948u;
    // 7F27D948: addi    r15, r5, 4
    ctx->gpr[15] = ctx->gpr[5] + (u32)(s32)(4);

label_7F27D94C:
    ctx->pc = 0x7F27D94Cu;
    // 7F27D94C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F27D950:
    ctx->pc = 0x7F27D950u;
    // 7F27D950: add   r6, r20, r15
    {
        u32 a = ctx->gpr[20];
        u32 b = ctx->gpr[15];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F27D954:
    ctx->pc = 0x7F27D954u;
    // 7F27D954: add   r16, r23, r0
    {
        u32 a = ctx->gpr[23];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[16] = res;
    }

label_7F27D958:
    ctx->pc = 0x7F27D958u;
    // 7F27D958: rlwinm r6, r6, 4, 0, 27
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 4u) & 0xFFFFFFF0u;
    }

label_7F27D95C:
    ctx->pc = 0x7F27D95Cu;
    // 7F27D95C: rlwinm r0, r16, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[16], 4u) & 0xFFFFFFF0u;
    }

label_7F27D960:
    ctx->pc = 0x7F27D960u;
    // 7F27D960: extsh r20, r6
    {
        ctx->gpr[20] = (u32)(s32)(s16)ctx->gpr[6];
    }

label_7F27D964:
    ctx->pc = 0x7F27D964u;
    // 7F27D964: extsh r22, r0
    {
        ctx->gpr[22] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F27D968:
    ctx->pc = 0x7F27D968u;
    // 7F27D968: bl      0x80042E0C
    {
            ctx->lr = 0x7F27D96Cu;
            ctx->pc = 0x80042E0Cu;
            return;
    }

label_7F27D96C:
    ctx->pc = 0x7F27D96Cu;
    ctx->downcount -= 3;
    // 7F27D96C: or   r3, r20, r20
    {
        ctx->gpr[3] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F27D970:
    ctx->pc = 0x7F27D970u;
    // 7F27D970: or   r4, r22, r22
    {
        ctx->gpr[4] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F27D974:
    ctx->pc = 0x7F27D974u;
    // 7F27D974: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27D978u;
            goto label_7F27DAC8;
    }

label_7F27D978:
    ctx->pc = 0x7F27D978u;
    ctx->downcount -= 5;
    // 7F27D978: lbz     r3, 94(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(94);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F27D97C:
    ctx->pc = 0x7F27D97Cu;
    // 7F27D97C: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F27D980:
    ctx->pc = 0x7F27D980u;
    // 7F27D980: lbz     r4, 95(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(95);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F27D984:
    ctx->pc = 0x7F27D984u;
    // 7F27D984: lbz     r5, 96(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(96);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F27D988:
    ctx->pc = 0x7F27D988u;
    // 7F27D988: bl      0x7F27DA9C
    {
            ctx->lr = 0x7F27D98Cu;
            goto label_7F27DA9C;
    }

label_7F27D98C:
    ctx->pc = 0x7F27D98Cu;
    ctx->downcount -= 3;
    // 7F27D98C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D990:
    ctx->pc = 0x7F27D990u;
    // 7F27D990: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D994:
    ctx->pc = 0x7F27D994u;
    // 7F27D994: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27D998u;
            goto label_7F27DAB8;
    }

label_7F27D998:
    ctx->pc = 0x7F27D998u;
    ctx->downcount -= 51;
    // 7F27D998: mullw   r0, r19, r21
    {
        s64 product = (s64)(s32)ctx->gpr[19] * (s64)(s32)ctx->gpr[21];
        ctx->gpr[0] = (u32)product;
    }

label_7F27D99C:
    ctx->pc = 0x7F27D99Cu;
    // 7F27D99C: or   r4, r22, r22
    {
        ctx->gpr[4] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F27D9A0:
    ctx->pc = 0x7F27D9A0u;
    // 7F27D9A0: divw   r0, r0, r17
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[17];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F27D9A4:
    ctx->pc = 0x7F27D9A4u;
    // 7F27D9A4: add   r0, r0, r15
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[15];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F27D9A8:
    ctx->pc = 0x7F27D9A8u;
    // 7F27D9A8: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F27D9AC:
    ctx->pc = 0x7F27D9ACu;
    // 7F27D9AC: extsh r15, r0
    {
        ctx->gpr[15] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F27D9B0:
    ctx->pc = 0x7F27D9B0u;
    // 7F27D9B0: or   r3, r15, r15
    {
        ctx->gpr[3] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F27D9B4:
    ctx->pc = 0x7F27D9B4u;
    // 7F27D9B4: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27D9B8u;
            goto label_7F27DAC8;
    }

label_7F27D9B8:
    ctx->pc = 0x7F27D9B8u;
    ctx->downcount -= 5;
    // 7F27D9B8: lbz     r3, 97(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(97);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F27D9BC:
    ctx->pc = 0x7F27D9BCu;
    // 7F27D9BC: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F27D9C0:
    ctx->pc = 0x7F27D9C0u;
    // 7F27D9C0: lbz     r4, 98(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(98);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F27D9C4:
    ctx->pc = 0x7F27D9C4u;
    // 7F27D9C4: lbz     r5, 99(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(99);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F27D9C8:
    ctx->pc = 0x7F27D9C8u;
    // 7F27D9C8: bl      0x7F27DA9C
    {
            ctx->lr = 0x7F27D9CCu;
            goto label_7F27DA9C;
    }

label_7F27D9CC:
    ctx->pc = 0x7F27D9CCu;
    ctx->downcount -= 3;
    // 7F27D9CC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27D9D0:
    ctx->pc = 0x7F27D9D0u;
    // 7F27D9D0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27D9D4:
    ctx->pc = 0x7F27D9D4u;
    // 7F27D9D4: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27D9D8u;
            goto label_7F27DAB8;
    }

label_7F27D9D8:
    ctx->pc = 0x7F27D9D8u;
    ctx->downcount -= 6;
    // 7F27D9D8: addi    r0, r16, 4
    ctx->gpr[0] = ctx->gpr[16] + (u32)(s32)(4);

label_7F27D9DC:
    ctx->pc = 0x7F27D9DCu;
    // 7F27D9DC: or   r3, r15, r15
    {
        ctx->gpr[3] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F27D9E0:
    ctx->pc = 0x7F27D9E0u;
    // 7F27D9E0: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F27D9E4:
    ctx->pc = 0x7F27D9E4u;
    // 7F27D9E4: extsh r15, r0
    {
        ctx->gpr[15] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F27D9E8:
    ctx->pc = 0x7F27D9E8u;
    // 7F27D9E8: or   r4, r15, r15
    {
        ctx->gpr[4] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F27D9EC:
    ctx->pc = 0x7F27D9ECu;
    // 7F27D9EC: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27D9F0u;
            goto label_7F27DAC8;
    }

label_7F27D9F0:
    ctx->pc = 0x7F27D9F0u;
    ctx->downcount -= 5;
    // 7F27D9F0: lbz     r3, 97(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(97);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F27D9F4:
    ctx->pc = 0x7F27D9F4u;
    // 7F27D9F4: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F27D9F8:
    ctx->pc = 0x7F27D9F8u;
    // 7F27D9F8: lbz     r4, 98(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(98);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F27D9FC:
    ctx->pc = 0x7F27D9FCu;
    // 7F27D9FC: lbz     r5, 99(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(99);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F27DA00:
    ctx->pc = 0x7F27DA00u;
    // 7F27DA00: bl      0x7F27DA9C
    {
            ctx->lr = 0x7F27DA04u;
            goto label_7F27DA9C;
    }

label_7F27DA04:
    ctx->pc = 0x7F27DA04u;
    ctx->downcount -= 3;
    // 7F27DA04: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27DA08:
    ctx->pc = 0x7F27DA08u;
    // 7F27DA08: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27DA0C:
    ctx->pc = 0x7F27DA0Cu;
    // 7F27DA0C: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27DA10u;
            goto label_7F27DAB8;
    }

label_7F27DA10:
    ctx->pc = 0x7F27DA10u;
    ctx->downcount -= 3;
    // 7F27DA10: or   r3, r20, r20
    {
        ctx->gpr[3] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F27DA14:
    ctx->pc = 0x7F27DA14u;
    // 7F27DA14: or   r4, r15, r15
    {
        ctx->gpr[4] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F27DA18:
    ctx->pc = 0x7F27DA18u;
    // 7F27DA18: bl      0x7F27DAC8
    {
            ctx->lr = 0x7F27DA1Cu;
            goto label_7F27DAC8;
    }

label_7F27DA1C:
    ctx->pc = 0x7F27DA1Cu;
    ctx->downcount -= 5;
    // 7F27DA1C: lbz     r3, 94(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(94);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F27DA20:
    ctx->pc = 0x7F27DA20u;
    // 7F27DA20: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F27DA24:
    ctx->pc = 0x7F27DA24u;
    // 7F27DA24: lbz     r4, 95(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(95);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F27DA28:
    ctx->pc = 0x7F27DA28u;
    // 7F27DA28: lbz     r5, 96(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(96);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F27DA2C:
    ctx->pc = 0x7F27DA2Cu;
    // 7F27DA2C: bl      0x7F27DA9C
    {
            ctx->lr = 0x7F27DA30u;
            goto label_7F27DA9C;
    }

label_7F27DA30:
    ctx->pc = 0x7F27DA30u;
    ctx->downcount -= 3;
    // 7F27DA30: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27DA34:
    ctx->pc = 0x7F27DA34u;
    // 7F27DA34: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27DA38:
    ctx->pc = 0x7F27DA38u;
    // 7F27DA38: bl      0x7F27DAB8
    {
            ctx->lr = 0x7F27DA3Cu;
            goto label_7F27DAB8;
    }

label_7F27DA3C:
    ctx->pc = 0x7F27DA3Cu;
    ctx->downcount -= 1;
    // 7F27DA3C: bl      0x7F27DAB4
    {
            ctx->lr = 0x7F27DA40u;
            goto label_7F27DAB4;
    }

label_7F27DA40:
    ctx->pc = 0x7F27DA40u;
    ctx->downcount -= 3;
    // 7F27DA40: lhz     r4, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_7F27DA44:
    ctx->pc = 0x7F27DA44u;
    // 7F27DA44: cmplwi  r4, 0x0000
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

label_7F27DA48:
    ctx->pc = 0x7F27DA48u;
    // 7F27DA48: bc    12, 2, 0x7F27DA54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27DA54;
        }
    }

label_7F27DA4C:
    ctx->pc = 0x7F27DA4Cu;
    ctx->downcount -= 2;
    // 7F27DA4C: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F27DA50:
    ctx->pc = 0x7F27DA50u;
    // 7F27DA50: sth     r0, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27DA54:
    ctx->pc = 0x7F27DA54u;
    ctx->downcount -= 2;
    // 7F27DA54: cmpwi   r4, 0
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

label_7F27DA58:
    ctx->pc = 0x7F27DA58u;
    // 7F27DA58: bc    4, 2, 0x7F27DA64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27DA64;
        }
    }

label_7F27DA5C:
    ctx->pc = 0x7F27DA5Cu;
    ctx->downcount -= 2;
    // 7F27DA5C: sth     r18, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        mem_write16(ctx, ea, (u16)ctx->gpr[18]);
    }

label_7F27DA60:
    ctx->pc = 0x7F27DA60u;
    // 7F27DA60: b       0x7F27DA78
    {
            goto label_7F27DA78;
    }

label_7F27DA64:
    ctx->pc = 0x7F27DA64u;
    ctx->downcount -= 44;
    // 7F27DA64: subf   r3, r18, r19
    {
        u32 a = ~ctx->gpr[18];
        u32 b = ctx->gpr[19];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F27DA68:
    ctx->pc = 0x7F27DA68u;
    // 7F27DA68: lhz     r0, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F27DA6C:
    ctx->pc = 0x7F27DA6Cu;
    // 7F27DA6C: divw   r3, r3, r4
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[4];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[3] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F27DA70:
    ctx->pc = 0x7F27DA70u;
    // 7F27DA70: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F27DA74:
    ctx->pc = 0x7F27DA74u;
    // 7F27DA74: sth     r0, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27DA78:
    ctx->pc = 0x7F27DA78u;
    ctx->downcount -= 4;
    // 7F27DA78: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27DA7C:
    ctx->pc = 0x7F27DA7Cu;
    // 7F27DA7C: lwz     r4, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27DA80:
    ctx->pc = 0x7F27DA80u;
    // 7F27DA80: addi    r3, r3, -7568
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7568);

label_7F27DA84:
    ctx->pc = 0x7F27DA84u;
    // 7F27DA84: bl      0x7F2EA688
    {
            ctx->lr = 0x7F27DA88u;
            ctx->pc = 0x7F2EA688u;
            return;
    }

label_7F27DA88:
    ctx->pc = 0x7F27DA88u;
    ctx->downcount -= 16;
    // 7F27DA88: lmw     r15, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        for (u32 r = 15; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F27DA8C:
    ctx->pc = 0x7F27DA8Cu;
    // 7F27DA8C: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27DA90:
    ctx->pc = 0x7F27DA90u;
    // 7F27DA90: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27DA94:
    ctx->pc = 0x7F27DA94u;
    // 7F27DA94: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_7F27DA98:
    ctx->pc = 0x7F27DA98u;
    // 7F27DA98: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27DA9C:
    ctx->pc = 0x7F27DA9Cu;
    ctx->downcount -= 6;
    // 7F27DA9C: lis     r7, -13311
    ctx->gpr[7] = ((u32)(s32)(-13311) << 16);

label_7F27DAA0:
    ctx->pc = 0x7F27DAA0u;
    // 7F27DAA0: stb     r3, -32768(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F27DAA4:
    ctx->pc = 0x7F27DAA4u;
    // 7F27DAA4: stb     r4, -32768(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F27DAA8:
    ctx->pc = 0x7F27DAA8u;
    // 7F27DAA8: stb     r5, -32768(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F27DAAC:
    ctx->pc = 0x7F27DAACu;
    // 7F27DAAC: stb     r6, -32768(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F27DAB0:
    ctx->pc = 0x7F27DAB0u;
    // 7F27DAB0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27DAB4:
    ctx->pc = 0x7F27DAB4u;
    ctx->downcount -= 1;
    // 7F27DAB4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27DAB8:
    ctx->pc = 0x7F27DAB8u;
    ctx->downcount -= 4;
    // 7F27DAB8: lis     r5, -13311
    ctx->gpr[5] = ((u32)(s32)(-13311) << 16);

label_7F27DABC:
    ctx->pc = 0x7F27DABCu;
    // 7F27DABC: sth     r3, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F27DAC0:
    ctx->pc = 0x7F27DAC0u;
    // 7F27DAC0: sth     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F27DAC4:
    ctx->pc = 0x7F27DAC4u;
    // 7F27DAC4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27DAC8:
    ctx->pc = 0x7F27DAC8u;
    ctx->downcount -= 4;
    // 7F27DAC8: lis     r5, -13311
    ctx->gpr[5] = ((u32)(s32)(-13311) << 16);

label_7F27DACC:
    ctx->pc = 0x7F27DACCu;
    // 7F27DACC: sth     r3, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F27DAD0:
    ctx->pc = 0x7F27DAD0u;
    // 7F27DAD0: sth     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F27DAD4:
    ctx->pc = 0x7F27DAD4u;
    // 7F27DAD4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27DAD8:
    ctx->pc = 0x7F27DAD8u;
    ctx->downcount -= 25;
    // 7F27DAD8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27DADC:
    ctx->pc = 0x7F27DADCu;
    // 7F27DADC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27DAE0:
    ctx->pc = 0x7F27DAE0u;
    // 7F27DAE0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27DAE4:
    ctx->pc = 0x7F27DAE4u;
    // 7F27DAE4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F27DAE8:
    ctx->pc = 0x7F27DAE8u;
    // 7F27DAE8: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F27DAEC:
    ctx->pc = 0x7F27DAECu;
    // 7F27DAEC: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F27DAF0:
    ctx->pc = 0x7F27DAF0u;
    // 7F27DAF0: lhz     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F27DAF4:
    ctx->pc = 0x7F27DAF4u;
    // 7F27DAF4: sth     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27DAF8:
    ctx->pc = 0x7F27DAF8u;
    // 7F27DAF8: lhz     r0, 22(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F27DAFC:
    ctx->pc = 0x7F27DAFCu;
    // 7F27DAFC: sth     r0, 22(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27DB00:
    ctx->pc = 0x7F27DB00u;
    // 7F27DB00: lha     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27DB04:
    ctx->pc = 0x7F27DB04u;
    // 7F27DB04: sth     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27DB08:
    ctx->pc = 0x7F27DB08u;
    // 7F27DB08: lwz     r0, 28056(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28056);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27DB0C:
    ctx->pc = 0x7F27DB0Cu;
    // 7F27DB0C: cmpwi   r0, 0
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

label_7F27DB10:
    ctx->pc = 0x7F27DB10u;
    // 7F27DB10: bc    12, 2, 0x7F27DB28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27DB28;
        }
    }

label_7F27DB14:
    ctx->pc = 0x7F27DB14u;
    ctx->downcount -= 5;
    // 7F27DB14: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F27DB18:
    ctx->pc = 0x7F27DB18u;
    // 7F27DB18: lha     r5, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27DB1C:
    ctx->pc = 0x7F27DB1Cu;
    // 7F27DB1C: lwz     r0, -6212(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6212);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27DB20:
    ctx->pc = 0x7F27DB20u;
    // 7F27DB20: add   r0, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F27DB24:
    ctx->pc = 0x7F27DB24u;
    // 7F27DB24: sth     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27DB28:
    ctx->pc = 0x7F27DB28u;
    ctx->downcount -= 15;
    // 7F27DB28: lhz     r0, 66(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(66);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F27DB2C:
    ctx->pc = 0x7F27DB2Cu;
    // 7F27DB2C: lis     r4, 256
    ctx->gpr[4] = ((u32)(s32)(256) << 16);

label_7F27DB30:
    ctx->pc = 0x7F27DB30u;
    // 7F27DB30: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F27DB34:
    ctx->pc = 0x7F27DB34u;
    // 7F27DB34: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F27DB38:
    ctx->pc = 0x7F27DB38u;
    // 7F27DB38: sth     r0, 66(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(66);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27DB3C:
    ctx->pc = 0x7F27DB3Cu;
    // 7F27DB3C: lhz     r0, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F27DB40:
    ctx->pc = 0x7F27DB40u;
    // 7F27DB40: sth     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27DB44:
    ctx->pc = 0x7F27DB44u;
    // 7F27DB44: lha     r0, 26(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(26);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27DB48:
    ctx->pc = 0x7F27DB48u;
    // 7F27DB48: sth     r0, 26(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(26);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27DB4C:
    ctx->pc = 0x7F27DB4Cu;
    // 7F27DB4C: lha     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27DB50:
    ctx->pc = 0x7F27DB50u;
    // 7F27DB50: sth     r0, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27DB54:
    ctx->pc = 0x7F27DB54u;
    // 7F27DB54: lhz     r0, 30(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(30);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F27DB58:
    ctx->pc = 0x7F27DB58u;
    // 7F27DB58: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27DB5C:
    ctx->pc = 0x7F27DB5Cu;
    // 7F27DB5C: sth     r0, 30(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(30);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27DB60:
    ctx->pc = 0x7F27DB60u;
    // 7F27DB60: bl      0x7F012018
    {
            ctx->lr = 0x7F27DB64u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F27DB64:
    ctx->pc = 0x7F27DB64u;
    ctx->downcount -= 5;
    // 7F27DB64: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F27DB68:
    ctx->pc = 0x7F27DB68u;
    // 7F27DB68: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F27DB6C:
    ctx->pc = 0x7F27DB6Cu;
    // 7F27DB6C: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F27DB70:
    ctx->pc = 0x7F27DB70u;
    // 7F27DB70: or.   r0, r4, r0
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

label_7F27DB74:
    ctx->pc = 0x7F27DB74u;
    // 7F27DB74: bc    12, 2, 0x7F27DB88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27DB88;
        }
    }

label_7F27DB78:
    ctx->pc = 0x7F27DB78u;
    ctx->downcount -= 4;
    // 7F27DB78: lhz     r0, 38(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(38);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F27DB7C:
    ctx->pc = 0x7F27DB7Cu;
    // 7F27DB7C: ori     r0, r0, 0x0010
    ctx->gpr[0] = ctx->gpr[0] | 0x0010u;

label_7F27DB80:
    ctx->pc = 0x7F27DB80u;
    // 7F27DB80: sth     r0, 38(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(38);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27DB84:
    ctx->pc = 0x7F27DB84u;
    // 7F27DB84: b       0x7F27DB94
    {
            goto label_7F27DB94;
    }

label_7F27DB88:
    ctx->pc = 0x7F27DB88u;
    ctx->downcount -= 3;
    // 7F27DB88: lhz     r0, 38(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(38);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F27DB8C:
    ctx->pc = 0x7F27DB8Cu;
    // 7F27DB8C: rlwinm r0, r0, 0, 28, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFEFu;
    }

label_7F27DB90:
    ctx->pc = 0x7F27DB90u;
    // 7F27DB90: sth     r0, 38(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(38);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27DB94:
    ctx->pc = 0x7F27DB94u;
    ctx->downcount -= 3;
    // 7F27DB94: lhz     r0, 38(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(38);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F27DB98:
    ctx->pc = 0x7F27DB98u;
    // 7F27DB98: rlwinm. r0, r0, 0, 31, 31
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

label_7F27DB9C:
    ctx->pc = 0x7F27DB9Cu;
    // 7F27DB9C: bc    4, 2, 0x7F27DBB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27DBB0;
        }
    }

label_7F27DBA0:
    ctx->pc = 0x7F27DBA0u;
    ctx->downcount -= 2;
    // 7F27DBA0: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F27DBA4:
    ctx->pc = 0x7F27DBA4u;
    // 7F27DBA4: bl      0x7F018418
    {
            ctx->lr = 0x7F27DBA8u;
            ctx->pc = 0x7F018418u;
            return;
    }

label_7F27DBA8:
    ctx->pc = 0x7F27DBA8u;
    ctx->downcount -= 2;
    // 7F27DBA8: cmpwi   r3, 0
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

label_7F27DBAC:
    ctx->pc = 0x7F27DBACu;
    // 7F27DBAC: bc    12, 2, 0x7F27DBCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27DBCC;
        }
    }

label_7F27DBB0:
    ctx->pc = 0x7F27DBB0u;
    ctx->downcount -= 3;
    // 7F27DBB0: lwz     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27DBB4:
    ctx->pc = 0x7F27DBB4u;
    // 7F27DBB4: cmplwi  r3, 0x0000
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

label_7F27DBB8:
    ctx->pc = 0x7F27DBB8u;
    // 7F27DBB8: bc    12, 2, 0x7F27DC88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27DC88;
        }
    }

label_7F27DBBC:
    ctx->pc = 0x7F27DBBCu;
    ctx->downcount -= 4;
    // 7F27DBBC: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27DBC0:
    ctx->pc = 0x7F27DBC0u;
    // 7F27DBC0: ori     r0, r0, 0x0100
    ctx->gpr[0] = ctx->gpr[0] | 0x0100u;

label_7F27DBC4:
    ctx->pc = 0x7F27DBC4u;
    // 7F27DBC4: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27DBC8:
    ctx->pc = 0x7F27DBC8u;
    // 7F27DBC8: b       0x7F27DC88
    {
            goto label_7F27DC88;
    }

label_7F27DBCC:
    ctx->pc = 0x7F27DBCCu;
    ctx->downcount -= 8;
    // 7F27DBCC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F27DBD0:
    ctx->pc = 0x7F27DBD0u;
    // 7F27DBD0: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F27DBD4:
    ctx->pc = 0x7F27DBD4u;
    // 7F27DBD4: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F27DBD8:
    ctx->pc = 0x7F27DBD8u;
    // 7F27DBD8: lwz     r31, -7536(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7536);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F27DBDC:
    ctx->pc = 0x7F27DBDCu;
    // 7F27DBDC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27DBE0:
    ctx->pc = 0x7F27DBE0u;
    // 7F27DBE0: lha     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27DBE4:
    ctx->pc = 0x7F27DBE4u;
    // 7F27DBE4: rlwinm. r0, r0, 0, 24, 24
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

label_7F27DBE8:
    ctx->pc = 0x7F27DBE8u;
    // 7F27DBE8: bc    12, 2, 0x7F27DC28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27DC28;
        }
    }

label_7F27DBEC:
    ctx->pc = 0x7F27DBECu;
    ctx->downcount -= 2;
    // 7F27DBEC: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F27DBF0:
    ctx->pc = 0x7F27DBF0u;
    // 7F27DBF0: bl      0x7F018418
    {
            ctx->lr = 0x7F27DBF4u;
            ctx->pc = 0x7F018418u;
            return;
    }

label_7F27DBF4:
    ctx->pc = 0x7F27DBF4u;
    ctx->downcount -= 2;
    // 7F27DBF4: cmpwi   r3, 0
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

label_7F27DBF8:
    ctx->pc = 0x7F27DBF8u;
    // 7F27DBF8: bc    12, 2, 0x7F27DC08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27DC08;
        }
    }

label_7F27DBFC:
    ctx->pc = 0x7F27DBFCu;
    ctx->downcount -= 3;
    // 7F27DBFC: li      r0, 128
    ctx->gpr[0] = (u32)(s32)(128);

label_7F27DC00:
    ctx->pc = 0x7F27DC00u;
    // 7F27DC00: sth     r0, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27DC04:
    ctx->pc = 0x7F27DC04u;
    // 7F27DC04: b       0x7F27DC10
    {
            goto label_7F27DC10;
    }

label_7F27DC08:
    ctx->pc = 0x7F27DC08u;
    ctx->downcount -= 2;
    // 7F27DC08: li      r0, 64
    ctx->gpr[0] = (u32)(s32)(64);

label_7F27DC0C:
    ctx->pc = 0x7F27DC0Cu;
    // 7F27DC0C: sth     r0, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27DC10:
    ctx->pc = 0x7F27DC10u;
    ctx->downcount -= 8;
    // 7F27DC10: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F27DC14:
    ctx->pc = 0x7F27DC14u;
    // 7F27DC14: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27DC18:
    ctx->pc = 0x7F27DC18u;
    // 7F27DC18: lwz     r0, 18520(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18520);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27DC1C:
    ctx->pc = 0x7F27DC1Cu;
    // 7F27DC1C: mulli   r0, r0, 40
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)40);

label_7F27DC20:
    ctx->pc = 0x7F27DC20u;
    // 7F27DC20: stw     r0, -7536(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7536);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27DC24:
    ctx->pc = 0x7F27DC24u;
    // 7F27DC24: b       0x7F27DC60
    {
            goto label_7F27DC60;
    }

label_7F27DC28:
    ctx->pc = 0x7F27DC28u;
    ctx->downcount -= 2;
    // 7F27DC28: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F27DC2C:
    ctx->pc = 0x7F27DC2Cu;
    // 7F27DC2C: bl      0x7F018418
    {
            ctx->lr = 0x7F27DC30u;
            ctx->pc = 0x7F018418u;
            return;
    }

label_7F27DC30:
    ctx->pc = 0x7F27DC30u;
    ctx->downcount -= 2;
    // 7F27DC30: cmpwi   r3, 0
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

label_7F27DC34:
    ctx->pc = 0x7F27DC34u;
    // 7F27DC34: bc    12, 2, 0x7F27DC44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27DC44;
        }
    }

label_7F27DC38:
    ctx->pc = 0x7F27DC38u;
    ctx->downcount -= 3;
    // 7F27DC38: li      r0, 140
    ctx->gpr[0] = (u32)(s32)(140);

label_7F27DC3C:
    ctx->pc = 0x7F27DC3Cu;
    // 7F27DC3C: sth     r0, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27DC40:
    ctx->pc = 0x7F27DC40u;
    // 7F27DC40: b       0x7F27DC4C
    {
            goto label_7F27DC4C;
    }

label_7F27DC44:
    ctx->pc = 0x7F27DC44u;
    ctx->downcount -= 2;
    // 7F27DC44: li      r0, 52
    ctx->gpr[0] = (u32)(s32)(52);

label_7F27DC48:
    ctx->pc = 0x7F27DC48u;
    // 7F27DC48: sth     r0, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27DC4C:
    ctx->pc = 0x7F27DC4Cu;
    ctx->downcount -= 7;
    // 7F27DC4C: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F27DC50:
    ctx->pc = 0x7F27DC50u;
    // 7F27DC50: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27DC54:
    ctx->pc = 0x7F27DC54u;
    // 7F27DC54: lwz     r0, 18520(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18520);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27DC58:
    ctx->pc = 0x7F27DC58u;
    // 7F27DC58: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_7F27DC5C:
    ctx->pc = 0x7F27DC5Cu;
    // 7F27DC5C: stw     r0, -7536(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7536);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27DC60:
    ctx->pc = 0x7F27DC60u;
    ctx->downcount -= 3;
    // 7F27DC60: lwz     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27DC64:
    ctx->pc = 0x7F27DC64u;
    // 7F27DC64: cmplwi  r3, 0x0000
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

label_7F27DC68:
    ctx->pc = 0x7F27DC68u;
    // 7F27DC68: bc    12, 2, 0x7F27DC78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27DC78;
        }
    }

label_7F27DC6C:
    ctx->pc = 0x7F27DC6Cu;
    ctx->downcount -= 3;
    // 7F27DC6C: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27DC70:
    ctx->pc = 0x7F27DC70u;
    // 7F27DC70: rlwinm r0, r0, 0, 24, 22
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFEFFu;
    }

label_7F27DC74:
    ctx->pc = 0x7F27DC74u;
    // 7F27DC74: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27DC78:
    ctx->pc = 0x7F27DC78u;
    ctx->downcount -= 2;
    // 7F27DC78: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F27DC7C:
    ctx->pc = 0x7F27DC7Cu;
    // 7F27DC7C: bl      0x7F27CDC0
    {
            ctx->lr = 0x7F27DC80u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27CDC0u;
                return;
            }
            goto label_7F27CDC0;
    }

label_7F27DC80:
    ctx->pc = 0x7F27DC80u;
    ctx->downcount -= 2;
    // 7F27DC80: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27DC84:
    ctx->pc = 0x7F27DC84u;
    // 7F27DC84: stw     r31, -7536(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7536);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F27DC88:
    ctx->pc = 0x7F27DC88u;
    ctx->downcount -= 16;
    // 7F27DC88: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F27DC8C:
    ctx->pc = 0x7F27DC8Cu;
    // 7F27DC8C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27DC90:
    ctx->pc = 0x7F27DC90u;
    // 7F27DC90: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27DC94:
    ctx->pc = 0x7F27DC94u;
    // 7F27DC94: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F27DC98:
    ctx->pc = 0x7F27DC98u;
    // 7F27DC98: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27DC9C:
    ctx->pc = 0x7F27DC9Cu;
    ctx->downcount -= 20;
    // 7F27DC9C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27DCA0:
    ctx->pc = 0x7F27DCA0u;
    // 7F27DCA0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27DCA4:
    ctx->pc = 0x7F27DCA4u;
    // 7F27DCA4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27DCA8:
    ctx->pc = 0x7F27DCA8u;
    // 7F27DCA8: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F27DCAC:
    ctx->pc = 0x7F27DCACu;
    // 7F27DCAC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27DCB0:
    ctx->pc = 0x7F27DCB0u;
    // 7F27DCB0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F27DCB4:
    ctx->pc = 0x7F27DCB4u;
    // 7F27DCB4: lwzu     r0, -7568(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7568);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_7F27DCB8:
    ctx->pc = 0x7F27DCB8u;
    // 7F27DCB8: lwz     r31, -7416(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7416);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F27DCBC:
    ctx->pc = 0x7F27DCBCu;
    // 7F27DCBC: cmplwi  r0, 0x0000
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

label_7F27DCC0:
    ctx->pc = 0x7F27DCC0u;
    // 7F27DCC0: bc    12, 2, 0x7F27DF44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27DF44;
        }
    }

label_7F27DCC4:
    ctx->pc = 0x7F27DCC4u;
    ctx->downcount -= 1;
    // 7F27DCC4: bl      0x7F2EA428
    {
            ctx->lr = 0x7F27DCC8u;
            ctx->pc = 0x7F2EA428u;
            return;
    }

label_7F27DCC8:
    ctx->pc = 0x7F27DCC8u;
    ctx->downcount -= 2;
    // 7F27DCC8: li      r3, 4096
    ctx->gpr[3] = (u32)(s32)(4096);

label_7F27DCCC:
    ctx->pc = 0x7F27DCCCu;
    // 7F27DCCC: bl      0x7F01808C
    {
            ctx->lr = 0x7F27DCD0u;
            ctx->pc = 0x7F01808Cu;
            return;
    }

label_7F27DCD0:
    ctx->pc = 0x7F27DCD0u;
    ctx->downcount -= 11;
    // 7F27DCD0: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F27DCD4:
    ctx->pc = 0x7F27DCD4u;
    // 7F27DCD4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27DCD8:
    ctx->pc = 0x7F27DCD8u;
    // 7F27DCD8: addi    r5, r4, 18520
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(18520);

label_7F27DCDC:
    ctx->pc = 0x7F27DCDCu;
    // 7F27DCDC: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27DCE0:
    ctx->pc = 0x7F27DCE0u;
    // 7F27DCE0: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F27DCE4:
    ctx->pc = 0x7F27DCE4u;
    // 7F27DCE4: lwz     r5, -7584(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7584);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F27DCE8:
    ctx->pc = 0x7F27DCE8u;
    // 7F27DCE8: addi    r3, r4, -7536
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-7536);

label_7F27DCEC:
    ctx->pc = 0x7F27DCECu;
    // 7F27DCEC: rlwinm r4, r0, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F27DCF0:
    ctx->pc = 0x7F27DCF0u;
    // 7F27DCF0: cmpwi   r5, 2
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

label_7F27DCF4:
    ctx->pc = 0x7F27DCF4u;
    // 7F27DCF4: stw     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27DCF8:
    ctx->pc = 0x7F27DCF8u;
    // 7F27DCF8: bc    4, 2, 0x7F27DD70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27DD70;
        }
    }

label_7F27DCFC:
    ctx->pc = 0x7F27DCFCu;
    ctx->downcount -= 5;
    // 7F27DCFC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27DD00:
    ctx->pc = 0x7F27DD00u;
    // 7F27DD00: addi    r3, r3, -7540
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7540);

label_7F27DD04:
    ctx->pc = 0x7F27DD04u;
    // 7F27DD04: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27DD08:
    ctx->pc = 0x7F27DD08u;
    // 7F27DD08: cmpwi   r3, 1
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

label_7F27DD0C:
    ctx->pc = 0x7F27DD0Cu;
    // 7F27DD0C: bc    4, 2, 0x7F27DD1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27DD1C;
        }
    }

label_7F27DD10:
    ctx->pc = 0x7F27DD10u;
    ctx->downcount -= 3;
    // 7F27DD10: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27DD14:
    ctx->pc = 0x7F27DD14u;
    // 7F27DD14: li      r4, 20
    ctx->gpr[4] = (u32)(s32)(20);

label_7F27DD18:
    ctx->pc = 0x7F27DD18u;
    // 7F27DD18: stw     r4, -7572(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7572);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27DD1C:
    ctx->pc = 0x7F27DD1Cu;
    ctx->downcount -= 5;
    // 7F27DD1C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27DD20:
    ctx->pc = 0x7F27DD20u;
    // 7F27DD20: addi    r4, r3, -7572
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-7572);

label_7F27DD24:
    ctx->pc = 0x7F27DD24u;
    // 7F27DD24: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27DD28:
    ctx->pc = 0x7F27DD28u;
    // 7F27DD28: cmpwi   r3, 0
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

label_7F27DD2C:
    ctx->pc = 0x7F27DD2Cu;
    // 7F27DD2C: bc    4, 1, 0x7F27DD3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27DD3C;
        }
    }

label_7F27DD30:
    ctx->pc = 0x7F27DD30u;
    ctx->downcount -= 3;
    // 7F27DD30: addi    r3, r3, -1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F27DD34:
    ctx->pc = 0x7F27DD34u;
    // 7F27DD34: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27DD38:
    ctx->pc = 0x7F27DD38u;
    // 7F27DD38: b       0x7F27DD48
    {
            goto label_7F27DD48;
    }

label_7F27DD3C:
    ctx->pc = 0x7F27DD3Cu;
    ctx->downcount -= 3;
    // 7F27DD3C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27DD40:
    ctx->pc = 0x7F27DD40u;
    // 7F27DD40: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27DD44:
    ctx->pc = 0x7F27DD44u;
    // 7F27DD44: stw     r4, -7584(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7584);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27DD48:
    ctx->pc = 0x7F27DD48u;
    ctx->downcount -= 14;
    // 7F27DD48: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F27DD4C:
    ctx->pc = 0x7F27DD4Cu;
    // 7F27DD4C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27DD50:
    ctx->pc = 0x7F27DD50u;
    // 7F27DD50: lwz     r5, -7572(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7572);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F27DD54:
    ctx->pc = 0x7F27DD54u;
    // 7F27DD54: addi    r4, r3, -7536
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-7536);

label_7F27DD58:
    ctx->pc = 0x7F27DD58u;
    // 7F27DD58: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27DD5C:
    ctx->pc = 0x7F27DD5Cu;
    // 7F27DD5C: rlwinm r5, r5, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_7F27DD60:
    ctx->pc = 0x7F27DD60u;
    // 7F27DD60: mullw   r0, r0, r5
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[0] = (u32)product;
    }

label_7F27DD64:
    ctx->pc = 0x7F27DD64u;
    // 7F27DD64: subf   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F27DD68:
    ctx->pc = 0x7F27DD68u;
    // 7F27DD68: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27DD6C:
    ctx->pc = 0x7F27DD6Cu;
    // 7F27DD6C: b       0x7F27DE00
    {
            goto label_7F27DE00;
    }

label_7F27DD70:
    ctx->pc = 0x7F27DD70u;
    ctx->downcount -= 2;
    // 7F27DD70: cmpwi   r5, 3
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F27DD74:
    ctx->pc = 0x7F27DD74u;
    // 7F27DD74: bc    4, 2, 0x7F27DE00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27DE00;
        }
    }

label_7F27DD78:
    ctx->pc = 0x7F27DD78u;
    ctx->downcount -= 5;
    // 7F27DD78: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27DD7C:
    ctx->pc = 0x7F27DD7Cu;
    // 7F27DD7C: addi    r3, r3, -7540
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7540);

label_7F27DD80:
    ctx->pc = 0x7F27DD80u;
    // 7F27DD80: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27DD84:
    ctx->pc = 0x7F27DD84u;
    // 7F27DD84: cmpwi   r3, 0
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

label_7F27DD88:
    ctx->pc = 0x7F27DD88u;
    // 7F27DD88: bc    4, 2, 0x7F27DD98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27DD98;
        }
    }

label_7F27DD8C:
    ctx->pc = 0x7F27DD8Cu;
    ctx->downcount -= 3;
    // 7F27DD8C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27DD90:
    ctx->pc = 0x7F27DD90u;
    // 7F27DD90: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27DD94:
    ctx->pc = 0x7F27DD94u;
    // 7F27DD94: stw     r4, -7572(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7572);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27DD98:
    ctx->pc = 0x7F27DD98u;
    ctx->downcount -= 10;
    // 7F27DD98: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27DD9C:
    ctx->pc = 0x7F27DD9Cu;
    // 7F27DD9C: li      r5, 20
    ctx->gpr[5] = (u32)(s32)(20);

label_7F27DDA0:
    ctx->pc = 0x7F27DDA0u;
    // 7F27DDA0: addi    r7, r3, -7572
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(-7572);

label_7F27DDA4:
    ctx->pc = 0x7F27DDA4u;
    // 7F27DDA4: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F27DDA8:
    ctx->pc = 0x7F27DDA8u;
    // 7F27DDA8: xor   r3, r5, r6
    {
        ctx->gpr[3] = ctx->gpr[5] ^ ctx->gpr[6];
    }

label_7F27DDAC:
    ctx->pc = 0x7F27DDACu;
    // 7F27DDAC: srawi r4, r3, 1
    {
        u32 sh = 1u;
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

label_7F27DDB0:
    ctx->pc = 0x7F27DDB0u;
    // 7F27DDB0: and   r3, r3, r5
    {
        ctx->gpr[3] = ctx->gpr[3] & ctx->gpr[5];
    }

label_7F27DDB4:
    ctx->pc = 0x7F27DDB4u;
    // 7F27DDB4: subf   r3, r3, r4
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F27DDB8:
    ctx->pc = 0x7F27DDB8u;
    // 7F27DDB8: rlwinm. r4, r3, 1, 31, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 1u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[4];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F27DDBC:
    ctx->pc = 0x7F27DDBCu;
    // 7F27DDBC: bc    12, 2, 0x7F27DDC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27DDC8;
        }
    }

label_7F27DDC0:
    ctx->pc = 0x7F27DDC0u;
    ctx->downcount -= 2;
    // 7F27DDC0: addi    r3, r6, 1
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(1);

label_7F27DDC4:
    ctx->pc = 0x7F27DDC4u;
    // 7F27DDC4: stw     r3, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27DDC8:
    ctx->pc = 0x7F27DDC8u;
    ctx->downcount -= 2;
    // 7F27DDC8: cmpwi   r4, 0
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

label_7F27DDCC:
    ctx->pc = 0x7F27DDCCu;
    // 7F27DDCC: bc    4, 2, 0x7F27DDDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27DDDC;
        }
    }

label_7F27DDD0:
    ctx->pc = 0x7F27DDD0u;
    ctx->downcount -= 3;
    // 7F27DDD0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27DDD4:
    ctx->pc = 0x7F27DDD4u;
    // 7F27DDD4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F27DDD8:
    ctx->pc = 0x7F27DDD8u;
    // 7F27DDD8: stw     r4, -7584(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7584);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27DDDC:
    ctx->pc = 0x7F27DDDCu;
    ctx->downcount -= 13;
    // 7F27DDDC: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F27DDE0:
    ctx->pc = 0x7F27DDE0u;
    // 7F27DDE0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27DDE4:
    ctx->pc = 0x7F27DDE4u;
    // 7F27DDE4: lwz     r5, -7572(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7572);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F27DDE8:
    ctx->pc = 0x7F27DDE8u;
    // 7F27DDE8: addi    r4, r3, -7536
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-7536);

label_7F27DDEC:
    ctx->pc = 0x7F27DDECu;
    // 7F27DDEC: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27DDF0:
    ctx->pc = 0x7F27DDF0u;
    // 7F27DDF0: rlwinm r5, r5, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_7F27DDF4:
    ctx->pc = 0x7F27DDF4u;
    // 7F27DDF4: mullw   r0, r0, r5
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[0] = (u32)product;
    }

label_7F27DDF8:
    ctx->pc = 0x7F27DDF8u;
    // 7F27DDF8: subf   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F27DDFC:
    ctx->pc = 0x7F27DDFCu;
    // 7F27DDFC: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27DE00:
    ctx->pc = 0x7F27DE00u;
    ctx->downcount -= 8;
    // 7F27DE00: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27DE04:
    ctx->pc = 0x7F27DE04u;
    // 7F27DE04: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F27DE08:
    ctx->pc = 0x7F27DE08u;
    // 7F27DE08: addi    r5, r3, -7584
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-7584);

label_7F27DE0C:
    ctx->pc = 0x7F27DE0Cu;
    // 7F27DE0C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F27DE10:
    ctx->pc = 0x7F27DE10u;
    // 7F27DE10: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F27DE14:
    ctx->pc = 0x7F27DE14u;
    // 7F27DE14: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27DE18:
    ctx->pc = 0x7F27DE18u;
    // 7F27DE18: stw     r0, -7580(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7580);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27DE1C:
    ctx->pc = 0x7F27DE1Cu;
    // 7F27DE1C: stw     r5, -7540(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7540);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F27DE20:
    ctx->downcount -= 2;
    // 7F27DE20: cmplwi  r31, 0x0000
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

label_7F27DE24:
    // 7F27DE24: bc    12, 2, 0x7F27DF44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27DF44;
        }
    }

label_7F27DE28:
    ctx->pc = 0x7F27DE28u;
    ctx->downcount -= 4;
    // 7F27DE28: lha     r0, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27DE2C:
    ctx->pc = 0x7F27DE2Cu;
    // 7F27DE2C: lhz     r30, 38(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(38);
        ctx->gpr[30] = mem_read16(ctx, ea);
    }

label_7F27DE30:
    // 7F27DE30: cmpwi   r0, 0
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

label_7F27DE34:
    // 7F27DE34: bc    4, 2, 0x7F27DE48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27DE48;
        }
    }

label_7F27DE38:
    ctx->downcount -= 4;
    // 7F27DE38: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F27DE3C:
    // 7F27DE3C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27DE40:
    // 7F27DE40: addi    r4, r4, -7520
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7520);

label_7F27DE44:
    // 7F27DE44: bl      0x7F27DAD8
    {
            ctx->lr = 0x7F27DE48u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27DAD8u;
                return;
            }
            goto label_7F27DAD8;
    }

label_7F27DE48:
    ctx->downcount -= 2;
    // 7F27DE48: rlwinm. r5, r30, 0, 31, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F27DE4C:
    // 7F27DE4C: bc    4, 2, 0x7F27DE64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27DE64;
        }
    }

label_7F27DE50:
    ctx->downcount -= 5;
    // 7F27DE50: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27DE54:
    // 7F27DE54: addi    r4, r3, -7580
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-7580);

label_7F27DE58:
    ctx->pc = 0x7F27DE58u;
    // 7F27DE58: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27DE5C:
    // 7F27DE5C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F27DE60:
    ctx->pc = 0x7F27DE60u;
    // 7F27DE60: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27DE64:
    ctx->downcount -= 2;
    // 7F27DE64: cmpwi   r5, 0
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

label_7F27DE68:
    // 7F27DE68: bc    4, 2, 0x7F27DE9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27DE9C;
        }
    }

label_7F27DE6C:
    ctx->downcount -= 4;
    // 7F27DE6C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27DE70:
    ctx->pc = 0x7F27DE70u;
    // 7F27DE70: lwz     r0, -7584(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7584);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27DE74:
    // 7F27DE74: cmpwi   r0, 1
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

label_7F27DE78:
    // 7F27DE78: bc    12, 2, 0x7F27DE9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27DE9C;
        }
    }

label_7F27DE7C:
    ctx->downcount -= 2;
    // 7F27DE7C: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F27DE80:
    // 7F27DE80: bl      0x7F018418
    {
            ctx->lr = 0x7F27DE84u;
            ctx->pc = 0x7F018418u;
            return;
    }

label_7F27DE84:
    ctx->downcount -= 2;
    // 7F27DE84: cmpwi   r3, 0
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

label_7F27DE88:
    // 7F27DE88: bc    4, 2, 0x7F27DE9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27DE9C;
        }
    }

label_7F27DE8C:
    ctx->downcount -= 4;
    // 7F27DE8C: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F27DE90:
    ctx->pc = 0x7F27DE90u;
    // 7F27DE90: lwz     r0, 28056(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28056);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27DE94:
    // 7F27DE94: rlwinm. r0, r0, 0, 30, 30
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

label_7F27DE98:
    // 7F27DE98: bc    12, 2, 0x7F27DEDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27DEDC;
        }
    }

label_7F27DE9C:
    ctx->pc = 0x7F27DE9Cu;
    ctx->downcount -= 3;
    // 7F27DE9C: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27DEA0:
    // 7F27DEA0: cmplwi  r3, 0x0000
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

label_7F27DEA4:
    // 7F27DEA4: bc    12, 2, 0x7F27DEB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27DEB4;
        }
    }

label_7F27DEA8:
    ctx->pc = 0x7F27DEA8u;
    ctx->downcount -= 3;
    // 7F27DEA8: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27DEAC:
    // 7F27DEAC: ori     r0, r0, 0x0100
    ctx->gpr[0] = ctx->gpr[0] | 0x0100u;

label_7F27DEB0:
    ctx->pc = 0x7F27DEB0u;
    // 7F27DEB0: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27DEB4:
    ctx->pc = 0x7F27DEB4u;
    ctx->downcount -= 10;
    // 7F27DEB4: lha     r3, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27DEB8:
    // 7F27DEB8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F27DEBC:
    ctx->pc = 0x7F27DEBCu;
    // 7F27DEBC: sth     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F27DEC0:
    ctx->pc = 0x7F27DEC0u;
    // 7F27DEC0: sth     r3, 66(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(66);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F27DEC4:
    ctx->pc = 0x7F27DEC4u;
    // 7F27DEC4: lha     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27DEC8:
    ctx->pc = 0x7F27DEC8u;
    // 7F27DEC8: sth     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F27DECC:
    ctx->pc = 0x7F27DECCu;
    // 7F27DECC: sth     r3, 50(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(50);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F27DED0:
    ctx->pc = 0x7F27DED0u;
    // 7F27DED0: sth     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27DED4:
    ctx->pc = 0x7F27DED4u;
    // 7F27DED4: sth     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27DED8:
    // 7F27DED8: b       0x7F27DF3C
    {
            goto label_7F27DF3C;
    }

label_7F27DEDC:
    ctx->downcount -= 2;
    // 7F27DEDC: li      r3, 4096
    ctx->gpr[3] = (u32)(s32)(4096);

label_7F27DEE0:
    // 7F27DEE0: bl      0x7F0180A0
    {
            ctx->lr = 0x7F27DEE4u;
            ctx->pc = 0x7F0180A0u;
            return;
    }

label_7F27DEE4:
    ctx->pc = 0x7F27DEE4u;
    ctx->downcount -= 3;
    // 7F27DEE4: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27DEE8:
    // 7F27DEE8: cmplwi  r3, 0x0000
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

label_7F27DEEC:
    // 7F27DEEC: bc    12, 2, 0x7F27DEFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27DEFC;
        }
    }

label_7F27DEF0:
    ctx->pc = 0x7F27DEF0u;
    ctx->downcount -= 3;
    // 7F27DEF0: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27DEF4:
    // 7F27DEF4: rlwinm r0, r0, 0, 24, 22
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFEFFu;
    }

label_7F27DEF8:
    ctx->pc = 0x7F27DEF8u;
    // 7F27DEF8: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27DEFC:
    ctx->downcount -= 2;
    // 7F27DEFC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27DF00:
    // 7F27DF00: bl      0x7F27CDC0
    {
            ctx->lr = 0x7F27DF04u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27CDC0u;
                return;
            }
            goto label_7F27CDC0;
    }

label_7F27DF04:
    ctx->downcount -= 12;
    // 7F27DF04: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F27DF08:
    // 7F27DF08: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F27DF0C:
    ctx->pc = 0x7F27DF0Cu;
    // 7F27DF0C: lwz     r0, 18520(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18520);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27DF10:
    ctx->pc = 0x7F27DF10u;
    // 7F27DF10: lwzu     r3, -7536(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-7536);
        ctx->gpr[3] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

label_7F27DF14:
    // 7F27DF14: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F27DF18:
    ctx->pc = 0x7F27DF18u;
    // 7F27DF18: lhz     r4, 22(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(22);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_7F27DF1C:
    // 7F27DF1C: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F27DF20:
    // 7F27DF20: add   r3, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F27DF24:
    ctx->pc = 0x7F27DF24u;
    // 7F27DF24: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27DF28:
    ctx->pc = 0x7F27DF28u;
    // 7F27DF28: lhz     r0, 38(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(38);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F27DF2C:
    // 7F27DF2C: rlwinm. r0, r0, 0, 26, 26
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

label_7F27DF30:
    // 7F27DF30: bc    12, 2, 0x7F27DF3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27DF3C;
        }
    }

label_7F27DF34:
    ctx->downcount -= 2;
    // 7F27DF34: addi    r0, r3, 8
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(8);

label_7F27DF38:
    ctx->pc = 0x7F27DF38u;
    // 7F27DF38: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27DF3C:
    ctx->pc = 0x7F27DF3Cu;
    ctx->downcount -= 2;
    // 7F27DF3C: lwz     r31, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F27DF40:
    // 7F27DF40: b       0x7F27DE20
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27DE20u;
                return;
            }
            goto label_7F27DE20;
    }

label_7F27DF44:
    ctx->pc = 0x7F27DF44u;
    ctx->downcount -= 16;
    // 7F27DF44: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F27DF48:
    ctx->pc = 0x7F27DF48u;
    // 7F27DF48: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27DF4C:
    ctx->pc = 0x7F27DF4Cu;
    // 7F27DF4C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27DF50:
    ctx->pc = 0x7F27DF50u;
    // 7F27DF50: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F27DF54:
    ctx->pc = 0x7F27DF54u;
    // 7F27DF54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27DF58:
    ctx->pc = 0x7F27DF58u;
    ctx->downcount -= 7;
    // 7F27DF58: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27DF5C:
    ctx->pc = 0x7F27DF5Cu;
    // 7F27DF5C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27DF60:
    ctx->pc = 0x7F27DF60u;
    // 7F27DF60: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27DF64:
    ctx->pc = 0x7F27DF64u;
    // 7F27DF64: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27DF68:
    ctx->pc = 0x7F27DF68u;
    // 7F27DF68: addi    r3, r3, -7568
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7568);

label_7F27DF6C:
    ctx->pc = 0x7F27DF6Cu;
    // 7F27DF6C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F27DF70:
    ctx->pc = 0x7F27DF70u;
    // 7F27DF70: bl      0x7F2EA3DC
    {
            ctx->lr = 0x7F27DF74u;
            ctx->pc = 0x7F2EA3DCu;
            return;
    }

label_7F27DF74:
    ctx->pc = 0x7F27DF74u;
    ctx->downcount -= 5;
    // 7F27DF74: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27DF78:
    ctx->pc = 0x7F27DF78u;
    // 7F27DF78: addi    r31, r3, -7520
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-7520);

label_7F27DF7C:
    ctx->pc = 0x7F27DF7Cu;
    // 7F27DF7C: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27DF80:
    ctx->pc = 0x7F27DF80u;
    // 7F27DF80: cmplwi  r3, 0x0000
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

label_7F27DF84:
    ctx->pc = 0x7F27DF84u;
    // 7F27DF84: bc    12, 2, 0x7F27DF9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27DF9C;
        }
    }

label_7F27DF88:
    ctx->pc = 0x7F27DF88u;
    ctx->downcount -= 1;
    // 7F27DF88: bl      0x7F3BA300
    {
            ctx->lr = 0x7F27DF8Cu;
            ctx->pc = 0x7F3BA300u;
            return;
    }

label_7F27DF8C:
    ctx->pc = 0x7F27DF8Cu;
    ctx->downcount -= 2;
    // 7F27DF8C: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27DF90:
    ctx->pc = 0x7F27DF90u;
    // 7F27DF90: bl      0x7F3BA234
    {
            ctx->lr = 0x7F27DF94u;
            ctx->pc = 0x7F3BA234u;
            return;
    }

label_7F27DF94:
    ctx->pc = 0x7F27DF94u;
    ctx->downcount -= 2;
    // 7F27DF94: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F27DF98:
    ctx->pc = 0x7F27DF98u;
    // 7F27DF98: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27DF9C:
    ctx->pc = 0x7F27DF9Cu;
    ctx->downcount -= 6;
    // 7F27DF9C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27DFA0:
    ctx->pc = 0x7F27DFA0u;
    // 7F27DFA0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F27DFA4:
    ctx->pc = 0x7F27DFA4u;
    // 7F27DFA4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27DFA8:
    ctx->pc = 0x7F27DFA8u;
    // 7F27DFA8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F27DFAC:
    ctx->pc = 0x7F27DFACu;
    // 7F27DFAC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27DFB0:
    ctx->pc = 0x7F27DFB0u;
    ctx->downcount -= 7;
    // 7F27DFB0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27DFB4:
    ctx->pc = 0x7F27DFB4u;
    // 7F27DFB4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27DFB8:
    ctx->pc = 0x7F27DFB8u;
    // 7F27DFB8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27DFBC:
    ctx->pc = 0x7F27DFBCu;
    // 7F27DFBC: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_7F27DFC0:
    ctx->pc = 0x7F27DFC0u;
    // 7F27DFC0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27DFC4:
    ctx->pc = 0x7F27DFC4u;
    // 7F27DFC4: addi    r3, r3, -7568
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7568);

label_7F27DFC8:
    ctx->pc = 0x7F27DFC8u;
    // 7F27DFC8: bl      0x7F2EA328
    {
            ctx->lr = 0x7F27DFCCu;
            ctx->pc = 0x7F2EA328u;
            return;
    }

label_7F27DFCC:
    ctx->pc = 0x7F27DFCCu;
    ctx->downcount -= 22;
    // 7F27DFCC: lis     r7, 32589
    ctx->gpr[7] = ((u32)(s32)(32589) << 16);

label_7F27DFD0:
    ctx->pc = 0x7F27DFD0u;
    // 7F27DFD0: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F27DFD4:
    ctx->pc = 0x7F27DFD4u;
    // 7F27DFD4: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F27DFD8:
    ctx->pc = 0x7F27DFD8u;
    // 7F27DFD8: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F27DFDC:
    ctx->pc = 0x7F27DFDCu;
    // 7F27DFDC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27DFE0:
    ctx->pc = 0x7F27DFE0u;
    // 7F27DFE0: addi    r8, r7, -7540
    ctx->gpr[8] = ctx->gpr[7] + (u32)(s32)(-7540);

label_7F27DFE4:
    ctx->pc = 0x7F27DFE4u;
    // 7F27DFE4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F27DFE8:
    ctx->pc = 0x7F27DFE8u;
    // 7F27DFE8: addi    r7, r6, -7584
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(-7584);

label_7F27DFEC:
    ctx->pc = 0x7F27DFECu;
    // 7F27DFEC: addi    r6, r5, -7576
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-7576);

label_7F27DFF0:
    ctx->pc = 0x7F27DFF0u;
    // 7F27DFF0: addi    r5, r4, -7580
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-7580);

label_7F27DFF4:
    ctx->pc = 0x7F27DFF4u;
    // 7F27DFF4: addi    r4, r3, -7416
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-7416);

label_7F27DFF8:
    ctx->pc = 0x7F27DFF8u;
    // 7F27DFF8: stw     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27DFFC:
    ctx->pc = 0x7F27DFFCu;
    // 7F27DFFC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27E000:
    ctx->pc = 0x7F27E000u;
    // 7F27E000: stw     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27E004:
    ctx->pc = 0x7F27E004u;
    // 7F27E004: stw     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27E008:
    ctx->pc = 0x7F27E008u;
    // 7F27E008: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27E00C:
    ctx->pc = 0x7F27E00Cu;
    // 7F27E00C: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27E010:
    ctx->pc = 0x7F27E010u;
    // 7F27E010: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27E014:
    ctx->pc = 0x7F27E014u;
    // 7F27E014: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27E018:
    ctx->pc = 0x7F27E018u;
    // 7F27E018: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F27E01C:
    ctx->pc = 0x7F27E01Cu;
    // 7F27E01C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27E020:
    ctx->pc = 0x7F27E020u;
    ctx->downcount -= 9;
    // 7F27E020: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27E024:
    ctx->pc = 0x7F27E024u;
    // 7F27E024: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27E028:
    ctx->pc = 0x7F27E028u;
    // 7F27E028: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F27E02C:
    ctx->pc = 0x7F27E02Cu;
    // 7F27E02C: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F27E030:
    ctx->pc = 0x7F27E030u;
    // 7F27E030: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27E034:
    ctx->pc = 0x7F27E034u;
    // 7F27E034: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_7F27E038:
    ctx->pc = 0x7F27E038u;
    // 7F27E038: li      r6, 248
    ctx->gpr[6] = (u32)(s32)(248);

label_7F27E03C:
    ctx->pc = 0x7F27E03Cu;
    // 7F27E03C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F27E040:
    ctx->pc = 0x7F27E040u;
    // 7F27E040: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F27E044u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F27E044:
    ctx->pc = 0x7F27E044u;
    ctx->downcount -= 3;
    // 7F27E044: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F27E048:
    ctx->pc = 0x7F27E048u;
    // 7F27E048: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27E04C:
    ctx->pc = 0x7F27E04Cu;
    // 7F27E04C: bl      0x7F3C891C
    {
            ctx->lr = 0x7F27E050u;
            ctx->pc = 0x7F3C891Cu;
            return;
    }

label_7F27E050:
    ctx->pc = 0x7F27E050u;
    ctx->downcount -= 2;
    // 7F27E050: cmplwi  r31, 0x0000
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

label_7F27E054:
    ctx->pc = 0x7F27E054u;
    // 7F27E054: bc    12, 2, 0x7F27E090
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27E090;
        }
    }

label_7F27E058:
    ctx->pc = 0x7F27E058u;
    ctx->downcount -= 6;
    // 7F27E058: lis     r3, 32552
    ctx->gpr[3] = ((u32)(s32)(32552) << 16);

label_7F27E05C:
    ctx->pc = 0x7F27E05Cu;
    // 7F27E05C: lis     r5, 32552
    ctx->gpr[5] = ((u32)(s32)(32552) << 16);

label_7F27E060:
    ctx->pc = 0x7F27E060u;
    // 7F27E060: addi    r4, r3, -9060
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-9060);

label_7F27E064:
    ctx->pc = 0x7F27E064u;
    // 7F27E064: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27E068:
    ctx->pc = 0x7F27E068u;
    // 7F27E068: addi    r5, r5, -8360
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8360);

label_7F27E06C:
    ctx->pc = 0x7F27E06Cu;
    // 7F27E06C: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F27E070u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F27E070:
    ctx->pc = 0x7F27E070u;
    ctx->downcount -= 2;
    // 7F27E070: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27E074:
    ctx->pc = 0x7F27E074u;
    // 7F27E074: bl      0x7F27DFB0
    {
            ctx->lr = 0x7F27E078u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27DFB0u;
                return;
            }
            goto label_7F27DFB0;
    }

label_7F27E078:
    ctx->pc = 0x7F27E078u;
    ctx->downcount -= 2;
    // 7F27E078: cmpwi   r3, 0
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

label_7F27E07C:
    ctx->pc = 0x7F27E07Cu;
    // 7F27E07C: bc    4, 0, 0x7F27E090
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27E090;
        }
    }

label_7F27E080:
    ctx->pc = 0x7F27E080u;
    ctx->downcount -= 2;
    // 7F27E080: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27E084:
    ctx->pc = 0x7F27E084u;
    // 7F27E084: bl      0x7F3C8210
    {
            ctx->lr = 0x7F27E088u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F27E088:
    ctx->pc = 0x7F27E088u;
    ctx->downcount -= 2;
    // 7F27E088: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27E08C:
    ctx->pc = 0x7F27E08Cu;
    // 7F27E08C: b       0x7F27E0B4
    {
            goto label_7F27E0B4;
    }

label_7F27E090:
    ctx->pc = 0x7F27E090u;
    ctx->downcount -= 9;
    // 7F27E090: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F27E094:
    ctx->pc = 0x7F27E094u;
    // 7F27E094: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27E098:
    ctx->pc = 0x7F27E098u;
    // 7F27E098: addi    r5, r4, 18520
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(18520);

label_7F27E09C:
    ctx->pc = 0x7F27E09Cu;
    // 7F27E09C: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F27E0A0:
    ctx->pc = 0x7F27E0A0u;
    // 7F27E0A0: addi    r4, r3, -7520
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-7520);

label_7F27E0A4:
    ctx->pc = 0x7F27E0A4u;
    // 7F27E0A4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F27E0A8:
    ctx->pc = 0x7F27E0A8u;
    // 7F27E0A8: stw     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F27E0AC:
    ctx->pc = 0x7F27E0ACu;
    // 7F27E0AC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27E0B0:
    ctx->pc = 0x7F27E0B0u;
    // 7F27E0B0: stw     r0, 56(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27E0B4:
    ctx->pc = 0x7F27E0B4u;
    ctx->downcount -= 6;
    // 7F27E0B4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27E0B8:
    ctx->pc = 0x7F27E0B8u;
    // 7F27E0B8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F27E0BC:
    ctx->pc = 0x7F27E0BCu;
    // 7F27E0BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27E0C0:
    ctx->pc = 0x7F27E0C0u;
    // 7F27E0C0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F27E0C4:
    ctx->pc = 0x7F27E0C4u;
    // 7F27E0C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27E0C8:
    ctx->pc = 0x7F27E0C8u;
    ctx->downcount -= 9;
    // 7F27E0C8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27E0CC:
    ctx->pc = 0x7F27E0CCu;
    // 7F27E0CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27E0D0:
    ctx->pc = 0x7F27E0D0u;
    // 7F27E0D0: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F27E0D4:
    ctx->pc = 0x7F27E0D4u;
    // 7F27E0D4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27E0D8:
    ctx->pc = 0x7F27E0D8u;
    // 7F27E0D8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F27E0DC:
    ctx->pc = 0x7F27E0DCu;
    // 7F27E0DC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27E0E0:
    ctx->pc = 0x7F27E0E0u;
    // 7F27E0E0: lwz     r0, -7576(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7576);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27E0E4:
    ctx->pc = 0x7F27E0E4u;
    // 7F27E0E4: cmpwi   r0, 0
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

label_7F27E0E8:
    ctx->pc = 0x7F27E0E8u;
    // 7F27E0E8: bc    4, 2, 0x7F27E100
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27E100;
        }
    }

label_7F27E0EC:
    ctx->pc = 0x7F27E0ECu;
    ctx->downcount -= 5;
    // 7F27E0EC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27E0F0:
    ctx->pc = 0x7F27E0F0u;
    // 7F27E0F0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F27E0F4:
    ctx->pc = 0x7F27E0F4u;
    // 7F27E0F4: stw     r31, -7416(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7416);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F27E0F8:
    ctx->pc = 0x7F27E0F8u;
    // 7F27E0F8: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27E0FC:
    ctx->pc = 0x7F27E0FCu;
    // 7F27E0FC: b       0x7F27E170
    {
            goto label_7F27E170;
    }

label_7F27E100:
    ctx->pc = 0x7F27E100u;
    ctx->downcount -= 6;
    // 7F27E100: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27E104:
    ctx->pc = 0x7F27E104u;
    // 7F27E104: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F27E108:
    ctx->pc = 0x7F27E108u;
    // 7F27E108: lwz     r4, -7416(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7416);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27E10C:
    ctx->pc = 0x7F27E10Cu;
    // 7F27E10C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F27E110:
    ctx->pc = 0x7F27E110u;
    // 7F27E110: bc    4, 1, 0x7F27E170
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27E170;
        }
    }

label_7F27E114:
    ctx->pc = 0x7F27E114u;
    ctx->downcount -= 4;
    // 7F27E114: lha     r3, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27E118:
    ctx->pc = 0x7F27E118u;
    // 7F27E118: lha     r0, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27E11C:
    // 7F27E11C: cmpw    r3, r0
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

label_7F27E120:
    // 7F27E120: bc    4, 1, 0x7F27E148
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27E148;
        }
    }

label_7F27E124:
    ctx->downcount -= 2;
    // 7F27E124: cmplwi  r5, 0x0000
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

label_7F27E128:
    // 7F27E128: bc    4, 2, 0x7F27E13C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27E13C;
        }
    }

label_7F27E12C:
    ctx->downcount -= 4;
    // 7F27E12C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27E130:
    ctx->pc = 0x7F27E130u;
    // 7F27E130: stw     r31, -7416(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7416);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F27E134:
    ctx->pc = 0x7F27E134u;
    // 7F27E134: stw     r4, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27E138:
    // 7F27E138: b       0x7F27E170
    {
            goto label_7F27E170;
    }

label_7F27E13C:
    ctx->pc = 0x7F27E13Cu;
    ctx->downcount -= 3;
    // 7F27E13C: stw     r31, 60(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F27E140:
    ctx->pc = 0x7F27E140u;
    // 7F27E140: stw     r4, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27E144:
    // 7F27E144: b       0x7F27E170
    {
            goto label_7F27E170;
    }

label_7F27E148:
    ctx->pc = 0x7F27E148u;
    ctx->downcount -= 3;
    // 7F27E148: lwz     r0, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27E14C:
    // 7F27E14C: cmplwi  r0, 0x0000
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

label_7F27E150:
    // 7F27E150: bc    4, 2, 0x7F27E164
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27E164;
        }
    }

label_7F27E154:
    ctx->pc = 0x7F27E154u;
    ctx->downcount -= 4;
    // 7F27E154: stw     r31, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F27E158:
    // 7F27E158: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F27E15C:
    ctx->pc = 0x7F27E15Cu;
    // 7F27E15C: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27E160:
    // 7F27E160: b       0x7F27E170
    {
            goto label_7F27E170;
    }

label_7F27E164:
    ctx->downcount -= 3;
    // 7F27E164: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F27E168:
    // 7F27E168: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F27E16C:
    // 7F27E16C: bc    16, 0, 0x7F27E114
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27E114u;
                return;
            }
            goto label_7F27E114;
        }
    }

label_7F27E170:
    ctx->pc = 0x7F27E170u;
    ctx->downcount -= 4;
    // 7F27E170: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F27E174:
    ctx->pc = 0x7F27E174u;
    // 7F27E174: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27E178:
    ctx->pc = 0x7F27E178u;
    // 7F27E178: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27E17C:
    ctx->pc = 0x7F27E17Cu;
    // 7F27E17C: bl      0x7F27CD48
    {
            ctx->lr = 0x7F27E180u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27CD48u;
                return;
            }
            goto label_7F27CD48;
    }

label_7F27E180:
    ctx->pc = 0x7F27E180u;
    ctx->downcount -= 3;
    // 7F27E180: lha     r0, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27E184:
    ctx->pc = 0x7F27E184u;
    // 7F27E184: cmpwi   r0, 0
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

label_7F27E188:
    ctx->pc = 0x7F27E188u;
    // 7F27E188: bc    4, 2, 0x7F27E198
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27E198;
        }
    }

label_7F27E18C:
    ctx->pc = 0x7F27E18Cu;
    ctx->downcount -= 3;
    // 7F27E18C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27E190:
    ctx->pc = 0x7F27E190u;
    // 7F27E190: addi    r3, r3, -7520
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7520);

label_7F27E194:
    ctx->pc = 0x7F27E194u;
    // 7F27E194: bl      0x7F27CD48
    {
            ctx->lr = 0x7F27E198u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27CD48u;
                return;
            }
            goto label_7F27CD48;
    }

label_7F27E198:
    ctx->pc = 0x7F27E198u;
    ctx->downcount -= 11;
    // 7F27E198: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27E19C:
    ctx->pc = 0x7F27E19Cu;
    // 7F27E19C: addi    r4, r3, -7576
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-7576);

label_7F27E1A0:
    ctx->pc = 0x7F27E1A0u;
    // 7F27E1A0: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27E1A4:
    ctx->pc = 0x7F27E1A4u;
    // 7F27E1A4: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F27E1A8:
    ctx->pc = 0x7F27E1A8u;
    // 7F27E1A8: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27E1AC:
    ctx->pc = 0x7F27E1ACu;
    // 7F27E1AC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F27E1B0:
    ctx->pc = 0x7F27E1B0u;
    // 7F27E1B0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27E1B4:
    ctx->pc = 0x7F27E1B4u;
    // 7F27E1B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27E1B8:
    ctx->pc = 0x7F27E1B8u;
    // 7F27E1B8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F27E1BC:
    ctx->pc = 0x7F27E1BCu;
    // 7F27E1BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27E1C0:
    ctx->pc = 0x7F27E1C0u;
    ctx->downcount -= 11;
    // 7F27E1C0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27E1C4:
    ctx->pc = 0x7F27E1C4u;
    // 7F27E1C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27E1C8:
    ctx->pc = 0x7F27E1C8u;
    // 7F27E1C8: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F27E1CC:
    ctx->pc = 0x7F27E1CCu;
    // 7F27E1CC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F27E1D0:
    ctx->pc = 0x7F27E1D0u;
    // 7F27E1D0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27E1D4:
    ctx->pc = 0x7F27E1D4u;
    // 7F27E1D4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F27E1D8:
    ctx->pc = 0x7F27E1D8u;
    // 7F27E1D8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27E1DC:
    ctx->pc = 0x7F27E1DCu;
    // 7F27E1DC: addi    r3, r4, -7416
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-7416);

label_7F27E1E0:
    ctx->pc = 0x7F27E1E0u;
    // 7F27E1E0: lwz     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27E1E4:
    ctx->pc = 0x7F27E1E4u;
    // 7F27E1E4: cmplw   r4, r31
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F27E1E8:
    ctx->pc = 0x7F27E1E8u;
    // 7F27E1E8: bc    4, 2, 0x7F27E1FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27E1FC;
        }
    }

label_7F27E1EC:
    ctx->pc = 0x7F27E1ECu;
    ctx->downcount -= 4;
    // 7F27E1EC: lwz     r0, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27E1F0:
    ctx->pc = 0x7F27E1F0u;
    // 7F27E1F0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F27E1F4:
    ctx->pc = 0x7F27E1F4u;
    // 7F27E1F4: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27E1F8:
    ctx->pc = 0x7F27E1F8u;
    // 7F27E1F8: b       0x7F27E234
    {
            goto label_7F27E234;
    }

label_7F27E1FC:
    ctx->pc = 0x7F27E1FCu;
    ctx->downcount -= 6;
    // 7F27E1FC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27E200:
    ctx->pc = 0x7F27E200u;
    // 7F27E200: lwz     r0, -7576(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7576);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27E204:
    ctx->pc = 0x7F27E204u;
    // 7F27E204: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F27E208:
    ctx->pc = 0x7F27E208u;
    // 7F27E208: cmpwi   r0, 0
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

label_7F27E20C:
    ctx->pc = 0x7F27E20Cu;
    // 7F27E20C: bc    4, 1, 0x7F27E234
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27E234;
        }
    }

label_7F27E210:
    ctx->pc = 0x7F27E210u;
    ctx->downcount -= 3;
    // 7F27E210: lwz     r0, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27E214:
    // 7F27E214: cmplw   r0, r31
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F27E218:
    // 7F27E218: bc    4, 2, 0x7F27E22C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27E22C;
        }
    }

label_7F27E21C:
    ctx->pc = 0x7F27E21Cu;
    ctx->downcount -= 4;
    // 7F27E21C: lwz     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27E220:
    // 7F27E220: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F27E224:
    ctx->pc = 0x7F27E224u;
    // 7F27E224: stw     r0, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27E228:
    // 7F27E228: b       0x7F27E234
    {
            goto label_7F27E234;
    }

label_7F27E22C:
    ctx->downcount -= 2;
    // 7F27E22C: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F27E230:
    // 7F27E230: bc    16, 0, 0x7F27E210
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27E210u;
                return;
            }
            goto label_7F27E210;
        }
    }

label_7F27E234:
    ctx->pc = 0x7F27E234u;
    ctx->downcount -= 2;
    // 7F27E234: cmpwi   r5, 0
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

label_7F27E238:
    ctx->pc = 0x7F27E238u;
    // 7F27E238: bc    12, 2, 0x7F27E270
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27E270;
        }
    }

label_7F27E23C:
    ctx->pc = 0x7F27E23Cu;
    ctx->downcount -= 3;
    // 7F27E23C: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27E240:
    ctx->pc = 0x7F27E240u;
    // 7F27E240: cmplwi  r3, 0x0000
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

label_7F27E244:
    ctx->pc = 0x7F27E244u;
    // 7F27E244: bc    12, 2, 0x7F27E25C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27E25C;
        }
    }

label_7F27E248:
    ctx->pc = 0x7F27E248u;
    ctx->downcount -= 1;
    // 7F27E248: bl      0x7F3BA300
    {
            ctx->lr = 0x7F27E24Cu;
            ctx->pc = 0x7F3BA300u;
            return;
    }

label_7F27E24C:
    ctx->pc = 0x7F27E24Cu;
    ctx->downcount -= 2;
    // 7F27E24C: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27E250:
    ctx->pc = 0x7F27E250u;
    // 7F27E250: bl      0x7F3BA234
    {
            ctx->lr = 0x7F27E254u;
            ctx->pc = 0x7F3BA234u;
            return;
    }

label_7F27E254:
    ctx->pc = 0x7F27E254u;
    ctx->downcount -= 2;
    // 7F27E254: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F27E258:
    ctx->pc = 0x7F27E258u;
    // 7F27E258: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27E25C:
    ctx->pc = 0x7F27E25Cu;
    ctx->downcount -= 5;
    // 7F27E25C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27E260:
    ctx->pc = 0x7F27E260u;
    // 7F27E260: addi    r4, r3, -7576
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-7576);

label_7F27E264:
    ctx->pc = 0x7F27E264u;
    // 7F27E264: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27E268:
    ctx->pc = 0x7F27E268u;
    // 7F27E268: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F27E26C:
    ctx->pc = 0x7F27E26Cu;
    // 7F27E26C: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27E270:
    ctx->pc = 0x7F27E270u;
    ctx->downcount -= 6;
    // 7F27E270: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27E274:
    ctx->pc = 0x7F27E274u;
    // 7F27E274: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F27E278:
    ctx->pc = 0x7F27E278u;
    // 7F27E278: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27E27C:
    ctx->pc = 0x7F27E27Cu;
    // 7F27E27C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F27E280:
    ctx->pc = 0x7F27E280u;
    // 7F27E280: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27E284:
    ctx->pc = 0x7F27E284u;
    ctx->downcount -= 17;
    // 7F27E284: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27E288:
    ctx->pc = 0x7F27E288u;
    // 7F27E288: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27E28C:
    ctx->pc = 0x7F27E28Cu;
    // 7F27E28C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27E290:
    ctx->pc = 0x7F27E290u;
    // 7F27E290: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F27E294:
    ctx->pc = 0x7F27E294u;
    // 7F27E294: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27E298:
    ctx->pc = 0x7F27E298u;
    // 7F27E298: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F27E29C:
    ctx->pc = 0x7F27E29Cu;
    // 7F27E29C: bl      0x80014B68
    {
            ctx->lr = 0x7F27E2A0u;
            ctx->pc = 0x80014B68u;
            return;
    }

label_7F27E2A0:
    ctx->pc = 0x7F27E2A0u;
    ctx->downcount -= 7;
    // 7F27E2A0: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F27E2A4:
    ctx->pc = 0x7F27E2A4u;
    // 7F27E2A4: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F27E2A8:
    ctx->pc = 0x7F27E2A8u;
    // 7F27E2A8: addi    r5, r5, -31376
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-31376);

label_7F27E2AC:
    ctx->pc = 0x7F27E2ACu;
    // 7F27E2AC: mtctr    r3
    ctx->ctr = ctx->gpr[3];

label_7F27E2B0:
    ctx->pc = 0x7F27E2B0u;
    // 7F27E2B0: cmpwi   r3, 0
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

label_7F27E2B4:
    ctx->pc = 0x7F27E2B4u;
    // 7F27E2B4: bc    4, 1, 0x7F27E2FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27E2FC;
        }
    }

label_7F27E2B8:
    ctx->pc = 0x7F27E2B8u;
    ctx->downcount -= 3;
    // 7F27E2B8: lbz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F27E2BC:
    // 7F27E2BC: cmplwi  r3, 0x0000
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

label_7F27E2C0:
    // 7F27E2C0: bc    12, 2, 0x7F27E2FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27E2FC;
        }
    }

label_7F27E2C4:
    ctx->downcount -= 3;
    // 7F27E2C4: rlwinm r0, r3, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_7F27E2C8:
    // 7F27E2C8: cmplwi  r0, 0x000A
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x000Au);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F27E2CC:
    // 7F27E2CC: bc    12, 2, 0x7F27E2FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27E2FC;
        }
    }

label_7F27E2D0:
    ctx->downcount -= 2;
    // 7F27E2D0: cmplwi  r0, 0x0020
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0020u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F27E2D4:
    // 7F27E2D4: bc    12, 0, 0x7F27E2F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27E2F4;
        }
    }

label_7F27E2D8:
    ctx->downcount -= 2;
    // 7F27E2D8: cmplwi  r0, 0x0080
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0080u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F27E2DC:
    // 7F27E2DC: bc    4, 0, 0x7F27E2F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27E2F4;
        }
    }

label_7F27E2E0:
    ctx->downcount -= 5;
    // 7F27E2E0: addi    r0, r3, -32
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32);

label_7F27E2E4:
    // 7F27E2E4: rlwinm r0, r0, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_7F27E2E8:
    ctx->pc = 0x7F27E2E8u;
    // 7F27E2E8: lbzx    r0, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F27E2EC:
    // 7F27E2EC: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F27E2F0:
    // 7F27E2F0: add   r31, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_7F27E2F4:
    ctx->downcount -= 2;
    // 7F27E2F4: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F27E2F8:
    // 7F27E2F8: bc    16, 0, 0x7F27E2B8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27E2B8u;
                return;
            }
            goto label_7F27E2B8;
        }
    }

label_7F27E2FC:
    ctx->pc = 0x7F27E2FCu;
    ctx->downcount -= 17;
    // 7F27E2FC: addi    r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4);

label_7F27E300:
    ctx->pc = 0x7F27E300u;
    // 7F27E300: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F27E304:
    ctx->pc = 0x7F27E304u;
    // 7F27E304: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27E308:
    ctx->pc = 0x7F27E308u;
    // 7F27E308: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27E30C:
    ctx->pc = 0x7F27E30Cu;
    // 7F27E30C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F27E310:
    ctx->pc = 0x7F27E310u;
    // 7F27E310: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27E314:
    ctx->pc = 0x7F27E314u;
    ctx->downcount -= 24;
    // 7F27E314: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27E318:
    ctx->pc = 0x7F27E318u;
    // 7F27E318: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27E31C:
    ctx->pc = 0x7F27E31Cu;
    // 7F27E31C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27E320:
    ctx->pc = 0x7F27E320u;
    // 7F27E320: stmw     r23, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F27E324:
    ctx->pc = 0x7F27E324u;
    // 7F27E324: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27E328:
    ctx->pc = 0x7F27E328u;
    // 7F27E328: lwz     r29, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F27E32C:
    ctx->pc = 0x7F27E32Cu;
    // 7F27E32C: or   r23, r4, r4
    {
        ctx->gpr[23] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F27E330:
    ctx->pc = 0x7F27E330u;
    // 7F27E330: lwz     r30, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F27E334:
    ctx->pc = 0x7F27E334u;
    // 7F27E334: or   r24, r5, r5
    {
        ctx->gpr[24] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F27E338:
    ctx->pc = 0x7F27E338u;
    // 7F27E338: or   r25, r6, r6
    {
        ctx->gpr[25] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F27E33C:
    ctx->pc = 0x7F27E33Cu;
    // 7F27E33C: or   r26, r8, r8
    {
        ctx->gpr[26] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F27E340:
    ctx->pc = 0x7F27E340u;
    // 7F27E340: or   r27, r9, r9
    {
        ctx->gpr[27] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F27E344:
    ctx->pc = 0x7F27E344u;
    // 7F27E344: or   r28, r10, r10
    {
        ctx->gpr[28] = ctx->gpr[10] | ctx->gpr[10];
    }

label_7F27E348:
    ctx->pc = 0x7F27E348u;
    // 7F27E348: bl      0x80014AB0
    {
            ctx->lr = 0x7F27E34Cu;
            ctx->pc = 0x80014AB0u;
            return;
    }

label_7F27E34C:
    ctx->pc = 0x7F27E34Cu;
    ctx->downcount -= 21;
    // 7F27E34C: sth     r24, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[24]);
    }

label_7F27E350:
    ctx->pc = 0x7F27E350u;
    // 7F27E350: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F27E354:
    ctx->pc = 0x7F27E354u;
    // 7F27E354: addi    r5, r3, 18520
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(18520);

label_7F27E358:
    ctx->pc = 0x7F27E358u;
    // 7F27E358: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27E35C:
    ctx->pc = 0x7F27E35Cu;
    // 7F27E35C: sth     r25, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[25]);
    }

label_7F27E360:
    ctx->pc = 0x7F27E360u;
    // 7F27E360: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F27E364:
    ctx->pc = 0x7F27E364u;
    // 7F27E364: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F27E368:
    ctx->pc = 0x7F27E368u;
    // 7F27E368: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F27E36C:
    ctx->pc = 0x7F27E36Cu;
    // 7F27E36C: rlwinm r5, r5, 2, 16, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0x0000FFFCu;
    }

label_7F27E370:
    ctx->pc = 0x7F27E370u;
    // 7F27E370: sth     r5, 22(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F27E374:
    ctx->pc = 0x7F27E374u;
    // 7F27E374: sth     r26, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write16(ctx, ea, (u16)ctx->gpr[26]);
    }

label_7F27E378:
    ctx->pc = 0x7F27E378u;
    // 7F27E378: sth     r26, 66(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(66);
        mem_write16(ctx, ea, (u16)ctx->gpr[26]);
    }

label_7F27E37C:
    ctx->pc = 0x7F27E37Cu;
    // 7F27E37C: sth     r26, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write16(ctx, ea, (u16)ctx->gpr[26]);
    }

label_7F27E380:
    ctx->pc = 0x7F27E380u;
    // 7F27E380: sth     r27, 26(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(26);
        mem_write16(ctx, ea, (u16)ctx->gpr[27]);
    }

label_7F27E384:
    ctx->pc = 0x7F27E384u;
    // 7F27E384: sth     r28, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write16(ctx, ea, (u16)ctx->gpr[28]);
    }

label_7F27E388:
    ctx->pc = 0x7F27E388u;
    // 7F27E388: sth     r29, 30(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(30);
        mem_write16(ctx, ea, (u16)ctx->gpr[29]);
    }

label_7F27E38C:
    ctx->pc = 0x7F27E38Cu;
    // 7F27E38C: sth     r30, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write16(ctx, ea, (u16)ctx->gpr[30]);
    }

label_7F27E390:
    ctx->pc = 0x7F27E390u;
    // 7F27E390: stw     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27E394:
    ctx->pc = 0x7F27E394u;
    // 7F27E394: stw     r4, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27E398:
    ctx->pc = 0x7F27E398u;
    // 7F27E398: sth     r0, 38(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(38);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27E39C:
    ctx->pc = 0x7F27E39Cu;
    // 7F27E39C: bl      0x7F27E284
    {
            ctx->lr = 0x7F27E3A0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27E284u;
                return;
            }
            goto label_7F27E284;
    }

label_7F27E3A0:
    ctx->pc = 0x7F27E3A0u;
    ctx->downcount -= 3;
    // 7F27E3A0: cmpwi   r30, 0
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

label_7F27E3A4:
    ctx->pc = 0x7F27E3A4u;
    // 7F27E3A4: stw     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27E3A8:
    ctx->pc = 0x7F27E3A8u;
    // 7F27E3A8: bc    4, 2, 0x7F27E3F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27E3F0;
        }
    }

label_7F27E3AC:
    ctx->pc = 0x7F27E3ACu;
    ctx->downcount -= 7;
    // 7F27E3AC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27E3B0:
    ctx->pc = 0x7F27E3B0u;
    // 7F27E3B0: li      r0, 13
    ctx->gpr[0] = (u32)(s32)(13);

label_7F27E3B4:
    ctx->pc = 0x7F27E3B4u;
    // 7F27E3B4: addi    r3, r3, -7520
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7520);

label_7F27E3B8:
    ctx->pc = 0x7F27E3B8u;
    // 7F27E3B8: addi    r4, r31, -4
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(-4);

label_7F27E3BC:
    ctx->pc = 0x7F27E3BCu;
    // 7F27E3BC: addi    r5, r3, -4
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F27E3C0:
    ctx->pc = 0x7F27E3C0u;
    // 7F27E3C0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F27E3C4:
    loop_7F27E3C4(ctx);
    if (ctx->pc == 0x7F27E3D8u) goto label_7F27E3D8;
    return;
label_7F27E3C8:
    ctx->pc = 0x7F27E3C8u;
    // 7F27E3C8: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F27E3CC:
    ctx->pc = 0x7F27E3CCu;
    // 7F27E3CC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27E3D0:
    ctx->pc = 0x7F27E3D0u;
    // 7F27E3D0: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F27E3D4:
    // 7F27E3D4: bc    16, 0, 0x7F27E3C4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27E3C4u;
                return;
            }
            goto label_7F27E3C4;
        }
    }

label_7F27E3D8:
    ctx->pc = 0x7F27E3D8u;
    ctx->downcount -= 6;
    // 7F27E3D8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27E3DC:
    ctx->pc = 0x7F27E3DCu;
    // 7F27E3DC: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F27E3E0:
    ctx->pc = 0x7F27E3E0u;
    // 7F27E3E0: addi    r3, r3, -7520
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7520);

label_7F27E3E4:
    ctx->pc = 0x7F27E3E4u;
    // 7F27E3E4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F27E3E8:
    ctx->pc = 0x7F27E3E8u;
    // 7F27E3E8: sth     r4, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F27E3EC:
    ctx->pc = 0x7F27E3ECu;
    // 7F27E3EC: sth     r0, 38(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(38);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27E3F0:
    ctx->pc = 0x7F27E3F0u;
    ctx->downcount -= 16;
    // 7F27E3F0: lmw     r23, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F27E3F4:
    ctx->pc = 0x7F27E3F4u;
    // 7F27E3F4: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27E3F8:
    ctx->pc = 0x7F27E3F8u;
    // 7F27E3F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27E3FC:
    ctx->pc = 0x7F27E3FCu;
    // 7F27E3FC: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F27E400:
    ctx->pc = 0x7F27E400u;
    // 7F27E400: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27E404:
    ctx->pc = 0x7F27E404u;
    ctx->downcount -= 25;
    // 7F27E404: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27E408:
    ctx->pc = 0x7F27E408u;
    // 7F27E408: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27E40C:
    ctx->pc = 0x7F27E40Cu;
    // 7F27E40C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27E410:
    ctx->pc = 0x7F27E410u;
    // 7F27E410: lbz     r12, 27(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(27);
        ctx->gpr[12] = mem_read8(ctx, ea);
    }

label_7F27E414:
    ctx->pc = 0x7F27E414u;
    // 7F27E414: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F27E418:
    ctx->pc = 0x7F27E418u;
    // 7F27E418: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27E41C:
    ctx->pc = 0x7F27E41Cu;
    // 7F27E41C: lbz     r11, 31(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(31);
        ctx->gpr[11] = mem_read8(ctx, ea);
    }

label_7F27E420:
    ctx->pc = 0x7F27E420u;
    // 7F27E420: stb     r4, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F27E424:
    ctx->pc = 0x7F27E424u;
    // 7F27E424: lbz     r4, 35(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(35);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F27E428:
    ctx->pc = 0x7F27E428u;
    // 7F27E428: stb     r5, 76(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(76);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F27E42C:
    ctx->pc = 0x7F27E42Cu;
    // 7F27E42C: lbz     r0, 43(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(43);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F27E430:
    ctx->pc = 0x7F27E430u;
    // 7F27E430: stb     r6, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F27E434:
    ctx->pc = 0x7F27E434u;
    // 7F27E434: lbz     r3, 39(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(39);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F27E438:
    ctx->pc = 0x7F27E438u;
    // 7F27E438: stb     r7, 73(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(73);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F27E43C:
    ctx->pc = 0x7F27E43Cu;
    // 7F27E43C: stb     r8, 77(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(77);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F27E440:
    ctx->pc = 0x7F27E440u;
    // 7F27E440: stb     r9, 81(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(81);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_7F27E444:
    ctx->pc = 0x7F27E444u;
    // 7F27E444: stb     r10, 74(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(74);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

label_7F27E448:
    ctx->pc = 0x7F27E448u;
    // 7F27E448: stb     r12, 78(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(78);
        mem_write8(ctx, ea, (u8)ctx->gpr[12]);
    }

label_7F27E44C:
    ctx->pc = 0x7F27E44Cu;
    // 7F27E44C: stb     r11, 82(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(82);
        mem_write8(ctx, ea, (u8)ctx->gpr[11]);
    }

label_7F27E450:
    ctx->pc = 0x7F27E450u;
    // 7F27E450: stb     r4, 75(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(75);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F27E454:
    ctx->pc = 0x7F27E454u;
    // 7F27E454: stb     r3, 79(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(79);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F27E458:
    ctx->pc = 0x7F27E458u;
    // 7F27E458: stb     r0, 83(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(83);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F27E45C:
    ctx->pc = 0x7F27E45Cu;
    // 7F27E45C: lha     r0, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27E460:
    ctx->pc = 0x7F27E460u;
    // 7F27E460: cmpwi   r0, 0
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

label_7F27E464:
    ctx->pc = 0x7F27E464u;
    // 7F27E464: bc    4, 2, 0x7F27E4B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27E4B0;
        }
    }

label_7F27E468:
    ctx->pc = 0x7F27E468u;
    ctx->downcount -= 6;
    // 7F27E468: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27E46C:
    ctx->pc = 0x7F27E46Cu;
    // 7F27E46C: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F27E470:
    ctx->pc = 0x7F27E470u;
    // 7F27E470: addi    r3, r3, -7520
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7520);

label_7F27E474:
    ctx->pc = 0x7F27E474u;
    // 7F27E474: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F27E478:
    ctx->pc = 0x7F27E478u;
    // 7F27E478: addi    r3, r3, 72
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(72);

label_7F27E47C:
    ctx->pc = 0x7F27E47Cu;
    // 7F27E47C: bl      0x8000519C
    {
            ctx->lr = 0x7F27E480u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F27E480:
    ctx->pc = 0x7F27E480u;
    ctx->downcount -= 6;
    // 7F27E480: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27E484:
    ctx->pc = 0x7F27E484u;
    // 7F27E484: addi    r4, r31, 76
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(76);

label_7F27E488:
    ctx->pc = 0x7F27E488u;
    // 7F27E488: addi    r3, r3, -7520
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7520);

label_7F27E48C:
    ctx->pc = 0x7F27E48Cu;
    // 7F27E48C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F27E490:
    ctx->pc = 0x7F27E490u;
    // 7F27E490: addi    r3, r3, 76
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(76);

label_7F27E494:
    ctx->pc = 0x7F27E494u;
    // 7F27E494: bl      0x8000519C
    {
            ctx->lr = 0x7F27E498u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F27E498:
    ctx->pc = 0x7F27E498u;
    ctx->downcount -= 6;
    // 7F27E498: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27E49C:
    ctx->pc = 0x7F27E49Cu;
    // 7F27E49C: addi    r4, r31, 80
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(80);

label_7F27E4A0:
    ctx->pc = 0x7F27E4A0u;
    // 7F27E4A0: addi    r3, r3, -7520
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7520);

label_7F27E4A4:
    ctx->pc = 0x7F27E4A4u;
    // 7F27E4A4: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F27E4A8:
    ctx->pc = 0x7F27E4A8u;
    // 7F27E4A8: addi    r3, r3, 80
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(80);

label_7F27E4AC:
    ctx->pc = 0x7F27E4ACu;
    // 7F27E4AC: bl      0x8000519C
    {
            ctx->lr = 0x7F27E4B0u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F27E4B0:
    ctx->pc = 0x7F27E4B0u;
    ctx->downcount -= 6;
    // 7F27E4B0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27E4B4:
    ctx->pc = 0x7F27E4B4u;
    // 7F27E4B4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F27E4B8:
    ctx->pc = 0x7F27E4B8u;
    // 7F27E4B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27E4BC:
    ctx->pc = 0x7F27E4BCu;
    // 7F27E4BC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F27E4C0:
    ctx->pc = 0x7F27E4C0u;
    // 7F27E4C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27E4C4:
    ctx->pc = 0x7F27E4C4u;
    ctx->downcount -= 5;
    // 7F27E4C4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27E4C8:
    ctx->pc = 0x7F27E4C8u;
    // 7F27E4C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27E4CC:
    ctx->pc = 0x7F27E4CCu;
    // 7F27E4CC: cmpwi   r4, 2
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

label_7F27E4D0:
    ctx->pc = 0x7F27E4D0u;
    // 7F27E4D0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27E4D4:
    ctx->pc = 0x7F27E4D4u;
    // 7F27E4D4: bc    12, 2, 0x7F27E528
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27E528;
        }
    }

label_7F27E4D8:
    ctx->pc = 0x7F27E4D8u;
    ctx->downcount -= 1;
    // 7F27E4D8: bc    4, 0, 0x7F27E544
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27E544;
        }
    }

label_7F27E4DC:
    ctx->pc = 0x7F27E4DCu;
    ctx->downcount -= 2;
    // 7F27E4DC: cmpwi   r4, 0
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

label_7F27E4E0:
    ctx->pc = 0x7F27E4E0u;
    // 7F27E4E0: bc    12, 2, 0x7F27E4F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27E4F0;
        }
    }

label_7F27E4E4:
    ctx->pc = 0x7F27E4E4u;
    ctx->downcount -= 1;
    // 7F27E4E4: bc    4, 0, 0x7F27E50C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27E50C;
        }
    }

label_7F27E4E8:
    ctx->pc = 0x7F27E4E8u;
    ctx->downcount -= 1;
    // 7F27E4E8: b       0x7F27E544
    {
            goto label_7F27E544;
    }

label_7F27E4EC:
    ctx->pc = 0x7F27E4ECu;
    ctx->downcount -= 1;
    // 7F27E4EC: b       0x7F27E544
    {
            goto label_7F27E544;
    }

label_7F27E4F0:
    ctx->pc = 0x7F27E4F0u;
    ctx->downcount -= 7;
    // 7F27E4F0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F27E4F4:
    ctx->pc = 0x7F27E4F4u;
    // 7F27E4F4: li      r8, 120
    ctx->gpr[8] = (u32)(s32)(120);

label_7F27E4F8:
    ctx->pc = 0x7F27E4F8u;
    // 7F27E4F8: li      r9, 150
    ctx->gpr[9] = (u32)(s32)(150);

label_7F27E4FC:
    ctx->pc = 0x7F27E4FCu;
    // 7F27E4FC: li      r10, 128
    ctx->gpr[10] = (u32)(s32)(128);

label_7F27E500:
    ctx->pc = 0x7F27E500u;
    // 7F27E500: li      r0, 200
    ctx->gpr[0] = (u32)(s32)(200);

label_7F27E504:
    ctx->pc = 0x7F27E504u;
    // 7F27E504: li      r5, 130
    ctx->gpr[5] = (u32)(s32)(130);

label_7F27E508:
    ctx->pc = 0x7F27E508u;
    // 7F27E508: b       0x7F27E55C
    {
            goto label_7F27E55C;
    }

label_7F27E50C:
    ctx->pc = 0x7F27E50Cu;
    ctx->downcount -= 7;
    // 7F27E50C: li      r7, 70
    ctx->gpr[7] = (u32)(s32)(70);

label_7F27E510:
    ctx->pc = 0x7F27E510u;
    // 7F27E510: li      r8, 164
    ctx->gpr[8] = (u32)(s32)(164);

label_7F27E514:
    ctx->pc = 0x7F27E514u;
    // 7F27E514: li      r9, 140
    ctx->gpr[9] = (u32)(s32)(140);

label_7F27E518:
    ctx->pc = 0x7F27E518u;
    // 7F27E518: li      r10, 70
    ctx->gpr[10] = (u32)(s32)(70);

label_7F27E51C:
    ctx->pc = 0x7F27E51Cu;
    // 7F27E51C: li      r0, 164
    ctx->gpr[0] = (u32)(s32)(164);

label_7F27E520:
    ctx->pc = 0x7F27E520u;
    // 7F27E520: li      r5, 140
    ctx->gpr[5] = (u32)(s32)(140);

label_7F27E524:
    ctx->pc = 0x7F27E524u;
    // 7F27E524: b       0x7F27E55C
    {
            goto label_7F27E55C;
    }

label_7F27E528:
    ctx->pc = 0x7F27E528u;
    ctx->downcount -= 7;
    // 7F27E528: li      r7, 128
    ctx->gpr[7] = (u32)(s32)(128);

label_7F27E52C:
    ctx->pc = 0x7F27E52Cu;
    // 7F27E52C: li      r8, 200
    ctx->gpr[8] = (u32)(s32)(200);

label_7F27E530:
    ctx->pc = 0x7F27E530u;
    // 7F27E530: li      r9, 130
    ctx->gpr[9] = (u32)(s32)(130);

label_7F27E534:
    ctx->pc = 0x7F27E534u;
    // 7F27E534: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F27E538:
    ctx->pc = 0x7F27E538u;
    // 7F27E538: li      r0, 120
    ctx->gpr[0] = (u32)(s32)(120);

label_7F27E53C:
    ctx->pc = 0x7F27E53Cu;
    // 7F27E53C: li      r5, 150
    ctx->gpr[5] = (u32)(s32)(150);

label_7F27E540:
    ctx->pc = 0x7F27E540u;
    // 7F27E540: b       0x7F27E55C
    {
            goto label_7F27E55C;
    }

label_7F27E544:
    ctx->pc = 0x7F27E544u;
    ctx->downcount -= 6;
    // 7F27E544: li      r7, 31
    ctx->gpr[7] = (u32)(s32)(31);

label_7F27E548:
    ctx->pc = 0x7F27E548u;
    // 7F27E548: li      r8, 63
    ctx->gpr[8] = (u32)(s32)(63);

label_7F27E54C:
    ctx->pc = 0x7F27E54Cu;
    // 7F27E54C: li      r9, 192
    ctx->gpr[9] = (u32)(s32)(192);

label_7F27E550:
    ctx->pc = 0x7F27E550u;
    // 7F27E550: li      r10, 31
    ctx->gpr[10] = (u32)(s32)(31);

label_7F27E554:
    ctx->pc = 0x7F27E554u;
    // 7F27E554: li      r0, 127
    ctx->gpr[0] = (u32)(s32)(127);

label_7F27E558:
    ctx->pc = 0x7F27E558u;
    // 7F27E558: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_7F27E55C:
    ctx->pc = 0x7F27E55Cu;
    ctx->downcount -= 11;
    // 7F27E55C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27E560:
    ctx->pc = 0x7F27E560u;
    // 7F27E560: li      r4, 255
    ctx->gpr[4] = (u32)(s32)(255);

label_7F27E564:
    ctx->pc = 0x7F27E564u;
    // 7F27E564: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F27E568:
    ctx->pc = 0x7F27E568u;
    // 7F27E568: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F27E56C:
    ctx->pc = 0x7F27E56Cu;
    // 7F27E56C: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F27E570:
    ctx->pc = 0x7F27E570u;
    // 7F27E570: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F27E574:
    ctx->pc = 0x7F27E574u;
    // 7F27E574: stw     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27E578:
    ctx->pc = 0x7F27E578u;
    // 7F27E578: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27E57C:
    ctx->pc = 0x7F27E57Cu;
    // 7F27E57C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27E580:
    ctx->pc = 0x7F27E580u;
    // 7F27E580: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27E584:
    ctx->pc = 0x7F27E584u;
    // 7F27E584: bl      0x7F27E404
    {
            ctx->lr = 0x7F27E588u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27E404u;
                return;
            }
            goto label_7F27E404;
    }

label_7F27E588:
    ctx->pc = 0x7F27E588u;
    ctx->downcount -= 5;
    // 7F27E588: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27E58C:
    ctx->pc = 0x7F27E58Cu;
    // 7F27E58C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27E590:
    ctx->pc = 0x7F27E590u;
    // 7F27E590: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F27E594:
    ctx->pc = 0x7F27E594u;
    // 7F27E594: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27E598:
    ctx->pc = 0x7F27E598u;
    ctx->downcount -= 21;
    // 7F27E598: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27E59C:
    ctx->pc = 0x7F27E59Cu;
    // 7F27E59C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27E5A0:
    ctx->pc = 0x7F27E5A0u;
    // 7F27E5A0: li      r9, 166
    ctx->gpr[9] = (u32)(s32)(166);

label_7F27E5A4:
    ctx->pc = 0x7F27E5A4u;
    // 7F27E5A4: li      r10, 255
    ctx->gpr[10] = (u32)(s32)(255);

label_7F27E5A8:
    ctx->pc = 0x7F27E5A8u;
    // 7F27E5A8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27E5AC:
    ctx->pc = 0x7F27E5ACu;
    // 7F27E5AC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F27E5B0:
    ctx->pc = 0x7F27E5B0u;
    // 7F27E5B0: lhz     r8, 38(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(38);
        ctx->gpr[8] = mem_read16(ctx, ea);
    }

label_7F27E5B4:
    ctx->pc = 0x7F27E5B4u;
    // 7F27E5B4: ori     r8, r8, 0x0020
    ctx->gpr[8] = ctx->gpr[8] | 0x0020u;

label_7F27E5B8:
    ctx->pc = 0x7F27E5B8u;
    // 7F27E5B8: sth     r8, 38(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(38);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F27E5BC:
    ctx->pc = 0x7F27E5BCu;
    // 7F27E5BC: li      r8, 165
    ctx->gpr[8] = (u32)(s32)(165);

label_7F27E5C0:
    ctx->pc = 0x7F27E5C0u;
    // 7F27E5C0: sth     r4, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F27E5C4:
    ctx->pc = 0x7F27E5C4u;
    // 7F27E5C4: li      r4, 72
    ctx->gpr[4] = (u32)(s32)(72);

label_7F27E5C8:
    ctx->pc = 0x7F27E5C8u;
    // 7F27E5C8: sth     r5, 42(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F27E5CC:
    ctx->pc = 0x7F27E5CCu;
    // 7F27E5CC: li      r5, 68
    ctx->gpr[5] = (u32)(s32)(68);

label_7F27E5D0:
    ctx->pc = 0x7F27E5D0u;
    // 7F27E5D0: sth     r6, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F27E5D4:
    ctx->pc = 0x7F27E5D4u;
    // 7F27E5D4: li      r6, 138
    ctx->gpr[6] = (u32)(s32)(138);

label_7F27E5D8:
    ctx->pc = 0x7F27E5D8u;
    // 7F27E5D8: sth     r7, 46(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(46);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F27E5DC:
    ctx->pc = 0x7F27E5DCu;
    // 7F27E5DC: li      r7, 178
    ctx->gpr[7] = (u32)(s32)(178);

label_7F27E5E0:
    ctx->pc = 0x7F27E5E0u;
    // 7F27E5E0: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27E5E4:
    ctx->pc = 0x7F27E5E4u;
    // 7F27E5E4: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27E5E8:
    ctx->pc = 0x7F27E5E8u;
    // 7F27E5E8: bl      0x7F27E5FC
    {
            ctx->lr = 0x7F27E5ECu;
            goto label_7F27E5FC;
    }

label_7F27E5EC:
    ctx->pc = 0x7F27E5ECu;
    ctx->downcount -= 5;
    // 7F27E5EC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27E5F0:
    ctx->pc = 0x7F27E5F0u;
    // 7F27E5F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27E5F4:
    ctx->pc = 0x7F27E5F4u;
    // 7F27E5F4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F27E5F8:
    ctx->pc = 0x7F27E5F8u;
    // 7F27E5F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27E5FC:
    ctx->pc = 0x7F27E5FCu;
    ctx->downcount -= 15;
    // 7F27E5FC: stb     r4, 88(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(88);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F27E600:
    ctx->pc = 0x7F27E600u;
    // 7F27E600: lbz     r4, 11(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(11);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F27E604:
    ctx->pc = 0x7F27E604u;
    // 7F27E604: stb     r5, 89(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(89);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F27E608:
    ctx->pc = 0x7F27E608u;
    // 7F27E608: lbz     r0, 15(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(15);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F27E60C:
    ctx->pc = 0x7F27E60Cu;
    // 7F27E60C: stb     r6, 90(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(90);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F27E610:
    ctx->pc = 0x7F27E610u;
    // 7F27E610: stb     r7, 91(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(91);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_7F27E614:
    ctx->pc = 0x7F27E614u;
    // 7F27E614: stb     r8, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F27E618:
    ctx->pc = 0x7F27E618u;
    // 7F27E618: stb     r9, 93(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(93);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_7F27E61C:
    ctx->pc = 0x7F27E61Cu;
    // 7F27E61C: stb     r10, 94(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(94);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

label_7F27E620:
    ctx->pc = 0x7F27E620u;
    // 7F27E620: stb     r4, 95(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(95);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F27E624:
    ctx->pc = 0x7F27E624u;
    // 7F27E624: stb     r0, 96(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(96);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F27E628:
    ctx->pc = 0x7F27E628u;
    // 7F27E628: stb     r10, 97(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(97);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

label_7F27E62C:
    ctx->pc = 0x7F27E62Cu;
    // 7F27E62C: stb     r4, 98(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(98);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F27E630:
    ctx->pc = 0x7F27E630u;
    // 7F27E630: stb     r0, 99(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(99);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F27E634:
    ctx->pc = 0x7F27E634u;
    // 7F27E634: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27E638:
    ctx->pc = 0x7F27E638u;
    ctx->downcount -= 4;
    // 7F27E638: lhz     r0, 38(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(38);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F27E63C:
    ctx->pc = 0x7F27E63Cu;
    // 7F27E63C: rlwinm r0, r0, 0, 16, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFEu;
    }

label_7F27E640:
    ctx->pc = 0x7F27E640u;
    // 7F27E640: sth     r0, 38(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(38);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27E644:
    ctx->pc = 0x7F27E644u;
    // 7F27E644: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27E648:
    ctx->pc = 0x7F27E648u;
    ctx->downcount -= 4;
    // 7F27E648: lhz     r0, 38(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(38);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F27E64C:
    ctx->pc = 0x7F27E64Cu;
    // 7F27E64C: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F27E650:
    ctx->pc = 0x7F27E650u;
    // 7F27E650: sth     r0, 38(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(38);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27E654:
    ctx->pc = 0x7F27E654u;
    // 7F27E654: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27E658:
    ctx->pc = 0x7F27E658u;
    ctx->downcount -= 6;
    // 7F27E658: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27E65C:
    ctx->pc = 0x7F27E65Cu;
    // 7F27E65C: addi    r3, r3, -7520
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7520);

label_7F27E660:
    ctx->pc = 0x7F27E660u;
    // 7F27E660: lhz     r0, 38(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(38);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F27E664:
    ctx->pc = 0x7F27E664u;
    // 7F27E664: rlwinm r0, r0, 0, 16, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFEu;
    }

label_7F27E668:
    ctx->pc = 0x7F27E668u;
    // 7F27E668: sth     r0, 38(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(38);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27E66C:
    ctx->pc = 0x7F27E66Cu;
    // 7F27E66C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27E670:
    ctx->pc = 0x7F27E670u;
    ctx->downcount -= 6;
    // 7F27E670: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27E674:
    ctx->pc = 0x7F27E674u;
    // 7F27E674: addi    r3, r3, -7520
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7520);

label_7F27E678:
    ctx->pc = 0x7F27E678u;
    // 7F27E678: lhz     r0, 38(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(38);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F27E67C:
    ctx->pc = 0x7F27E67Cu;
    // 7F27E67C: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F27E680:
    ctx->pc = 0x7F27E680u;
    // 7F27E680: sth     r0, 38(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(38);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27E684:
    ctx->pc = 0x7F27E684u;
    // 7F27E684: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27E688:
    ctx->pc = 0x7F27E688u;
    ctx->downcount -= 18;
    // 7F27E688: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27E68C:
    ctx->pc = 0x7F27E68Cu;
    // 7F27E68C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27E690:
    ctx->pc = 0x7F27E690u;
    // 7F27E690: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27E694:
    ctx->pc = 0x7F27E694u;
    // 7F27E694: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F27E698:
    ctx->pc = 0x7F27E698u;
    // 7F27E698: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F27E69C:
    ctx->pc = 0x7F27E69Cu;
    // 7F27E69C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27E6A0:
    ctx->pc = 0x7F27E6A0u;
    // 7F27E6A0: lwz     r3, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27E6A4:
    ctx->pc = 0x7F27E6A4u;
    // 7F27E6A4: bl      0x7F3C9624
    {
            ctx->lr = 0x7F27E6A8u;
            ctx->pc = 0x7F3C9624u;
            return;
    }

label_7F27E6A8:
    ctx->pc = 0x7F27E6A8u;
    ctx->downcount -= 7;
    // 7F27E6A8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27E6AC:
    ctx->pc = 0x7F27E6ACu;
    // 7F27E6AC: lwz     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27E6B0:
    ctx->pc = 0x7F27E6B0u;
    // 7F27E6B0: addi    r0, r31, -1
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(-1);

label_7F27E6B4:
    ctx->pc = 0x7F27E6B4u;
    // 7F27E6B4: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F27E6B8:
    ctx->pc = 0x7F27E6B8u;
    // 7F27E6B8: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F27E6BC:
    ctx->pc = 0x7F27E6BCu;
    // 7F27E6BC: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27E6C0:
    ctx->pc = 0x7F27E6C0u;
    // 7F27E6C0: b       0x7F27E7B8
    {
            goto label_7F27E7B8;
    }

label_7F27E6C4:
    ctx->pc = 0x7F27E6C4u;
    ctx->downcount -= 5;
    // 7F27E6C4: lwz     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27E6C8:
    ctx->pc = 0x7F27E6C8u;
    // 7F27E6C8: lwz     r4, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27E6CC:
    ctx->pc = 0x7F27E6CCu;
    // 7F27E6CC: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27E6D0:
    // 7F27E6D0: cmpwi   r0, 0
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

label_7F27E6D4:
    // 7F27E6D4: bc    12, 2, 0x7F27E6DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27E6DC;
        }
    }

label_7F27E6D8:
    ctx->downcount -= 1;
    // 7F27E6D8: b       0x7F27E7AC
    {
            goto label_7F27E7AC;
    }

label_7F27E6DC:
    ctx->downcount -= 10;
    // 7F27E6DC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F27E6E0:
    ctx->pc = 0x7F27E6E0u;
    // 7F27E6E0: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27E6E4:
    // 7F27E6E4: addi    r5, r3, 13880
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F27E6E8:
    ctx->pc = 0x7F27E6E8u;
    // 7F27E6E8: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27E6EC:
    // 7F27E6EC: addi    r3, r30, 48
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(48);

label_7F27E6F0:
    ctx->pc = 0x7F27E6F0u;
    // 7F27E6F0: sth     r0, 292(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(292);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27E6F4:
    ctx->pc = 0x7F27E6F4u;
    // 7F27E6F4: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27E6F8:
    ctx->pc = 0x7F27E6F8u;
    // 7F27E6F8: lha     r0, 292(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(292);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27E6FC:
    ctx->pc = 0x7F27E6FCu;
    // 7F27E6FC: sth     r0, 290(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(290);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27E700:
    // 7F27E700: bl      0x7F27E1C0
    {
            ctx->lr = 0x7F27E704u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27E1C0u;
                return;
            }
            goto label_7F27E1C0;
    }

label_7F27E704:
    ctx->downcount -= 16;
    // 7F27E704: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F27E708:
    // 7F27E708: li      r6, 30
    ctx->gpr[6] = (u32)(s32)(30);

label_7F27E70C:
    ctx->pc = 0x7F27E70Cu;
    // 7F27E70C: lwz     r5, 13880(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13880);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F27E710:
    // 7F27E710: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F27E714:
    // 7F27E714: addi    r4, r3, 18528
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18528);

label_7F27E718:
    // 7F27E718: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F27E71C:
    ctx->pc = 0x7F27E71Cu;
    // 7F27E71C: lha     r8, 292(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(292);
        ctx->gpr[8] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27E720:
    // 7F27E720: addi    r3, r30, 48
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(48);

label_7F27E724:
    // 7F27E724: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F27E728:
    // 7F27E728: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_7F27E72C:
    ctx->pc = 0x7F27E72Cu;
    // 7F27E72C: stw     r6, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F27E730:
    // 7F27E730: or   r9, r8, r8
    {
        ctx->gpr[9] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F27E734:
    // 7F27E734: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F27E738:
    ctx->pc = 0x7F27E738u;
    // 7F27E738: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27E73C:
    ctx->pc = 0x7F27E73Cu;
    // 7F27E73C: lwz     r6, 176(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(176);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F27E740:
    // 7F27E740: bl      0x7F27E314
    {
            ctx->lr = 0x7F27E744u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27E314u;
                return;
            }
            goto label_7F27E314;
    }

label_7F27E744:
    ctx->downcount -= 17;
    // 7F27E744: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F27E748:
    // 7F27E748: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F27E74C:
    // 7F27E74C: addi    r4, r3, 13880
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F27E750:
    // 7F27E750: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27E754:
    ctx->pc = 0x7F27E754u;
    // 7F27E754: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27E758:
    // 7F27E758: addi    r5, r3, 25344
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(25344);

label_7F27E75C:
    ctx->pc = 0x7F27E75Cu;
    // 7F27E75C: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27E760:
    // 7F27E760: addi    r3, r30, 48
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(48);

label_7F27E764:
    ctx->pc = 0x7F27E764u;
    // 7F27E764: lha     r0, 292(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(292);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27E768:
    // 7F27E768: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F27E76C:
    ctx->pc = 0x7F27E76Cu;
    // 7F27E76C: lfd     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F27E76Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27E770:
    // 7F27E770: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F27E774:
    ctx->pc = 0x7F27E774u;
    // 7F27E774: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27E778:
    ctx->pc = 0x7F27E778u;
    // 7F27E778: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27E778u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27E77C:
    ctx->pc = 0x7F27E77Cu;
    // 7F27E77C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F27E77Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F27E780:
    ctx->pc = 0x7F27E780u;
    // 7F27E780: stfs     f0, 168(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F27E780u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(168);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F27E784:
    // 7F27E784: bl      0x7F27E4C4
    {
            ctx->lr = 0x7F27E788u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27E4C4u;
                return;
            }
            goto label_7F27E4C4;
    }

label_7F27E788:
    ctx->downcount -= 2;
    // 7F27E788: addi    r3, r30, 48
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(48);

label_7F27E78C:
    // 7F27E78C: bl      0x7F27E0C8
    {
            ctx->lr = 0x7F27E790u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27E0C8u;
                return;
            }
            goto label_7F27E0C8;
    }

label_7F27E790:
    ctx->downcount -= 7;
    // 7F27E790: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27E794:
    // 7F27E794: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F27E798:
    // 7F27E798: addi    r5, r3, 25352
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(25352);

label_7F27E79C:
    ctx->pc = 0x7F27E79Cu;
    // 7F27E79C: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F27E79Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27E7A0:
    // 7F27E7A0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27E7A4:
    ctx->pc = 0x7F27E7A4u;
    // 7F27E7A4: stfs     f0, -7396(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F27E7A4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7396);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F27E7A8:
    ctx->pc = 0x7F27E7A8u;
    // 7F27E7A8: stfs     f0, -7400(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27E7A8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7400);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F27E7AC:
    ctx->pc = 0x7F27E7ACu;
    ctx->downcount -= 3;
    // 7F27E7AC: lwz     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27E7B0:
    // 7F27E7B0: addi    r0, r3, -16
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-16);

label_7F27E7B4:
    ctx->pc = 0x7F27E7B4u;
    // 7F27E7B4: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27E7B8:
    ctx->downcount -= 2;
    // 7F27E7B8: addic.  r31, r31, -1
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

label_7F27E7BC:
    // 7F27E7BC: bc    4, 0, 0x7F27E6C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27E6C4u;
                return;
            }
            goto label_7F27E6C4;
        }
    }

label_7F27E7C0:
    ctx->pc = 0x7F27E7C0u;
    ctx->downcount -= 16;
    // 7F27E7C0: lmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F27E7C4:
    ctx->pc = 0x7F27E7C4u;
    // 7F27E7C4: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27E7C8:
    ctx->pc = 0x7F27E7C8u;
    // 7F27E7C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27E7CC:
    ctx->pc = 0x7F27E7CCu;
    // 7F27E7CC: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F27E7D0:
    ctx->pc = 0x7F27E7D0u;
    // 7F27E7D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27E7D4:
    ctx->pc = 0x7F27E7D4u;
    ctx->downcount -= 25;
    // 7F27E7D4: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27E7D8:
    ctx->pc = 0x7F27E7D8u;
    // 7F27E7D8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27E7DC:
    ctx->pc = 0x7F27E7DCu;
    // 7F27E7DC: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27E7E0:
    ctx->pc = 0x7F27E7E0u;
    // 7F27E7E0: stfd     f31, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27E7E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F27E7E4:
    ctx->pc = 0x7F27E7E4u;
    // 7F27E7E4: psq_st   f31, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F27E7E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F27E7E4u);
        if (ctx->exception) return;
    }

label_7F27E7E8:
    ctx->pc = 0x7F27E7E8u;
    // 7F27E7E8: stfd     f30, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27E7E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F27E7EC:
    ctx->pc = 0x7F27E7ECu;
    // 7F27E7EC: psq_st   f30, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F27E7ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F27E7ECu);
        if (ctx->exception) return;
    }

label_7F27E7F0:
    ctx->pc = 0x7F27E7F0u;
    // 7F27E7F0: stfd     f29, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27E7F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F27E7F4:
    ctx->pc = 0x7F27E7F4u;
    // 7F27E7F4: psq_st   f29, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F27E7F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F27E7F4u);
        if (ctx->exception) return;
    }

label_7F27E7F8:
    ctx->pc = 0x7F27E7F8u;
    // 7F27E7F8: stfd     f28, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27E7F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F27E7FC:
    ctx->pc = 0x7F27E7FCu;
    // 7F27E7FC: psq_st   f28, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F27E7FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F27E7FCu);
        if (ctx->exception) return;
    }

label_7F27E800:
    ctx->pc = 0x7F27E800u;
    // 7F27E800: stmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F27E804:
    ctx->pc = 0x7F27E804u;
    // 7F27E804: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27E808:
    ctx->pc = 0x7F27E808u;
    // 7F27E808: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F27E80C:
    ctx->pc = 0x7F27E80Cu;
    // 7F27E80C: bl      0x7F27E688
    {
            ctx->lr = 0x7F27E810u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27E688u;
                return;
            }
            goto label_7F27E688;
    }

label_7F27E810:
    ctx->pc = 0x7F27E810u;
    ctx->downcount -= 2;
    // 7F27E810: addi    r31, r29, 48
    ctx->gpr[31] = ctx->gpr[29] + (u32)(s32)(48);

label_7F27E814:
    ctx->pc = 0x7F27E814u;
    // 7F27E814: bl      0x7F01F590
    {
            ctx->lr = 0x7F27E818u;
            ctx->pc = 0x7F01F590u;
            return;
    }

label_7F27E818:
    ctx->pc = 0x7F27E818u;
    ctx->downcount -= 2;
    // 7F27E818: cmpwi   r3, 0
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

label_7F27E81C:
    ctx->pc = 0x7F27E81Cu;
    // 7F27E81C: bc    4, 2, 0x7F27E82C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27E82C;
        }
    }

label_7F27E820:
    ctx->pc = 0x7F27E820u;
    ctx->downcount -= 3;
    // 7F27E820: lwz     r0, 164(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27E824:
    ctx->pc = 0x7F27E824u;
    // 7F27E824: rlwinm. r0, r0, 0, 31, 31
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

label_7F27E828:
    ctx->pc = 0x7F27E828u;
    // 7F27E828: bc    12, 2, 0x7F27E838
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27E838;
        }
    }

label_7F27E82C:
    ctx->pc = 0x7F27E82Cu;
    ctx->downcount -= 2;
    // 7F27E82C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27E830:
    ctx->pc = 0x7F27E830u;
    // 7F27E830: bl      0x7F27E648
    {
            ctx->lr = 0x7F27E834u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27E648u;
                return;
            }
            goto label_7F27E648;
    }

label_7F27E834:
    ctx->pc = 0x7F27E834u;
    ctx->downcount -= 1;
    // 7F27E834: b       0x7F27EE60
    {
            goto label_7F27EE60;
    }

label_7F27E838:
    ctx->pc = 0x7F27E838u;
    ctx->downcount -= 29;
    // 7F27E838: lfs     f31, 168(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F27E838u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(168);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F27E83C:
    ctx->pc = 0x7F27E83Cu;
    // 7F27E83C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F27E840:
    ctx->pc = 0x7F27E840u;
    // 7F27E840: lwz     r6, 13880(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13880);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F27E844:
    ctx->pc = 0x7F27E844u;
    // 7F27E844: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27E848:
    ctx->pc = 0x7F27E848u;
    // 7F27E848: fctiwz    f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F27E848u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[31], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F27E84C:
    ctx->pc = 0x7F27E84Cu;
    // 7F27E84C: addi    r5, r3, 25344
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(25344);

label_7F27E850:
    ctx->pc = 0x7F27E850u;
    // 7F27E850: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_7F27E854:
    ctx->pc = 0x7F27E854u;
    // 7F27E854: lhz     r0, 86(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(86);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F27E858:
    ctx->pc = 0x7F27E858u;
    // 7F27E858: stw     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27E85C:
    ctx->pc = 0x7F27E85Cu;
    // 7F27E85C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27E860:
    ctx->pc = 0x7F27E860u;
    // 7F27E860: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27E860u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F27E864:
    ctx->pc = 0x7F27E864u;
    // 7F27E864: rlwinm r0, r0, 0, 28, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFEFu;
    }

label_7F27E868:
    ctx->pc = 0x7F27E868u;
    // 7F27E868: lha     r6, 290(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(290);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27E86C:
    ctx->pc = 0x7F27E86Cu;
    // 7F27E86C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F27E870:
    ctx->pc = 0x7F27E870u;
    // 7F27E870: lwz     r7, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F27E874:
    ctx->pc = 0x7F27E874u;
    // 7F27E874: lfs     f29, 25336(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27E874u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25336);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F27E878:
    ctx->pc = 0x7F27E878u;
    // 7F27E878: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27E87C:
    ctx->pc = 0x7F27E87Cu;
    // 7F27E87C: subf   r6, r7, r6
    {
        u32 a = ~ctx->gpr[7];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[6] = res;
    }

label_7F27E880:
    ctx->pc = 0x7F27E880u;
    // 7F27E880: lfd     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F27E880u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27E884:
    ctx->pc = 0x7F27E884u;
    // 7F27E884: xoris   r5, r6, 0x8000
    ctx->gpr[5] = ctx->gpr[6] ^ (0x8000u << 16);

label_7F27E888:
    ctx->pc = 0x7F27E888u;
    // 7F27E888: sth     r0, 86(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(86);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27E88C:
    ctx->pc = 0x7F27E88Cu;
    // 7F27E88C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F27E890:
    ctx->pc = 0x7F27E890u;
    // 7F27E890: stw     r5, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F27E894:
    ctx->pc = 0x7F27E894u;
    // 7F27E894: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F27E898:
    ctx->pc = 0x7F27E898u;
    // 7F27E898: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27E898u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27E89C:
    ctx->pc = 0x7F27E89Cu;
    // 7F27E89C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F27E89Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F27E8A0:
    ctx->pc = 0x7F27E8A0u;
    // 7F27E8A0: fadds   f28, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27E8A0u)) return;
    ppc_fadds(ctx, 28, 31, 0);

label_7F27E8A4:
    ctx->pc = 0x7F27E8A4u;
    // 7F27E8A4: fsubs   f30, f31, f28
    if (!ppc_fp_available_inline(ctx, 0x7F27E8A4u)) return;
    ppc_fsubs(ctx, 30, 31, 28);

label_7F27E8A8:
    ctx->pc = 0x7F27E8A8u;
    // 7F27E8A8: bl      0x7F012018
    {
            ctx->lr = 0x7F27E8ACu;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F27E8AC:
    ctx->pc = 0x7F27E8ACu;
    ctx->downcount -= 5;
    // 7F27E8AC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F27E8B0:
    ctx->pc = 0x7F27E8B0u;
    // 7F27E8B0: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F27E8B4:
    ctx->pc = 0x7F27E8B4u;
    // 7F27E8B4: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F27E8B8:
    ctx->pc = 0x7F27E8B8u;
    // 7F27E8B8: or.   r0, r4, r0
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

label_7F27E8BC:
    ctx->pc = 0x7F27E8BCu;
    // 7F27E8BC: bc    12, 2, 0x7F27E8E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27E8E4;
        }
    }

label_7F27E8C0:
    ctx->pc = 0x7F27E8C0u;
    ctx->downcount -= 8;
    // 7F27E8C0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27E8C4:
    ctx->pc = 0x7F27E8C4u;
    // 7F27E8C4: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F27E8C8:
    ctx->pc = 0x7F27E8C8u;
    // 7F27E8C8: addi    r3, r3, -5660
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5660);

label_7F27E8CC:
    ctx->pc = 0x7F27E8CCu;
    // 7F27E8CC: lfs     f1, 19564(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F27E8CCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19564);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F27E8D0:
    ctx->pc = 0x7F27E8D0u;
    // 7F27E8D0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27E8D4:
    ctx->pc = 0x7F27E8D4u;
    // 7F27E8D4: lfs     f0, 2772(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27E8D4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2772);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27E8D8:
    ctx->pc = 0x7F27E8D8u;
    // 7F27E8D8: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27E8D8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F27E8DC:
    ctx->pc = 0x7F27E8DCu;
    // 7F27E8DC: bc    4, 1, 0x7F27E8E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27E8E4;
        }
    }

label_7F27E8E0:
    ctx->pc = 0x7F27E8E0u;
    ctx->downcount -= 1;
    // 7F27E8E0: li      r30, 1
    ctx->gpr[30] = (u32)(s32)(1);

label_7F27E8E4:
    ctx->pc = 0x7F27E8E4u;
    ctx->downcount -= 4;
    // 7F27E8E4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27E8E8:
    ctx->pc = 0x7F27E8E8u;
    // 7F27E8E8: lfs     f0, 25356(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27E8E8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25356);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27E8EC:
    ctx->pc = 0x7F27E8ECu;
    // 7F27E8EC: fcmpo   cr0, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27E8ECu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[30], ctx->fpr[0], true);

label_7F27E8F0:
    ctx->pc = 0x7F27E8F0u;
    // 7F27E8F0: bc    12, 1, 0x7F27E948
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27E948;
        }
    }

label_7F27E8F4:
    ctx->pc = 0x7F27E8F4u;
    ctx->downcount -= 5;
    // 7F27E8F4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27E8F8:
    ctx->pc = 0x7F27E8F8u;
    // 7F27E8F8: lis     r3, 8192
    ctx->gpr[3] = ((u32)(s32)(8192) << 16);

label_7F27E8FC:
    ctx->pc = 0x7F27E8FCu;
    // 7F27E8FC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F27E900:
    ctx->pc = 0x7F27E900u;
    // 7F27E900: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F27E904:
    ctx->pc = 0x7F27E904u;
    // 7F27E904: bl      0x7F012018
    {
            ctx->lr = 0x7F27E908u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F27E908:
    ctx->pc = 0x7F27E908u;
    ctx->downcount -= 5;
    // 7F27E908: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F27E90C:
    ctx->pc = 0x7F27E90Cu;
    // 7F27E90C: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F27E910:
    ctx->pc = 0x7F27E910u;
    // 7F27E910: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F27E914:
    ctx->pc = 0x7F27E914u;
    // 7F27E914: or.   r0, r4, r0
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

label_7F27E918:
    ctx->pc = 0x7F27E918u;
    // 7F27E918: bc    4, 2, 0x7F27E948
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27E948;
        }
    }

label_7F27E91C:
    ctx->pc = 0x7F27E91Cu;
    ctx->downcount -= 9;
    // 7F27E91C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F27E920:
    ctx->pc = 0x7F27E920u;
    // 7F27E920: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F27E924:
    ctx->pc = 0x7F27E924u;
    // 7F27E924: addi    r3, r3, 22156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22156);

label_7F27E928:
    ctx->pc = 0x7F27E928u;
    // 7F27E928: lfs     f1, 19564(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F27E928u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19564);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F27E92C:
    ctx->pc = 0x7F27E92Cu;
    // 7F27E92C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27E930:
    ctx->pc = 0x7F27E930u;
    // 7F27E930: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27E934:
    ctx->pc = 0x7F27E934u;
    // 7F27E934: lfs     f0, 4384(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27E934u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4384);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27E938:
    ctx->pc = 0x7F27E938u;
    // 7F27E938: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27E938u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F27E93C:
    ctx->pc = 0x7F27E93Cu;
    // 7F27E93C: bc    12, 1, 0x7F27E948
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27E948;
        }
    }

label_7F27E940:
    ctx->pc = 0x7F27E940u;
    ctx->downcount -= 2;
    // 7F27E940: cmpwi   r30, 0
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

label_7F27E944:
    ctx->pc = 0x7F27E944u;
    // 7F27E944: bc    12, 2, 0x7F27ED48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27ED48;
        }
    }

label_7F27E948:
    ctx->pc = 0x7F27E948u;
    ctx->downcount -= 4;
    // 7F27E948: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F27E94C:
    ctx->pc = 0x7F27E94Cu;
    // 7F27E94C: lwz     r0, 19248(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19248);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27E950:
    ctx->pc = 0x7F27E950u;
    // 7F27E950: rlwinm. r0, r0, 0, 4, 4
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x08000000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F27E954:
    ctx->pc = 0x7F27E954u;
    // 7F27E954: bc    4, 2, 0x7F27EE60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27EE60;
        }
    }

label_7F27E958:
    ctx->pc = 0x7F27E958u;
    ctx->downcount -= 2;
    // 7F27E958: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27E95C:
    ctx->pc = 0x7F27E95Cu;
    // 7F27E95C: bl      0x7F27E638
    {
            ctx->lr = 0x7F27E960u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27E638u;
                return;
            }
            goto label_7F27E638;
    }

label_7F27E960:
    ctx->pc = 0x7F27E960u;
    ctx->downcount -= 7;
    // 7F27E960: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F27E964:
    ctx->pc = 0x7F27E964u;
    // 7F27E964: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27E968:
    ctx->pc = 0x7F27E968u;
    // 7F27E968: stw     r0, 160(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27E96C:
    ctx->pc = 0x7F27E96Cu;
    // 7F27E96C: addi    r3, r3, -5660
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5660);

label_7F27E970:
    ctx->pc = 0x7F27E970u;
    // 7F27E970: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27E974:
    ctx->pc = 0x7F27E974u;
    // 7F27E974: cmplwi  r3, 0x0000
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

label_7F27E978:
    ctx->pc = 0x7F27E978u;
    // 7F27E978: bc    12, 2, 0x7F27E9A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27E9A8;
        }
    }

label_7F27E97C:
    ctx->pc = 0x7F27E97Cu;
    ctx->downcount -= 6;
    // 7F27E97C: lwz     r4, 2764(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2764);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27E980:
    ctx->pc = 0x7F27E980u;
    // 7F27E980: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27E984:
    ctx->pc = 0x7F27E984u;
    // 7F27E984: lwz     r0, -7404(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7404);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27E988:
    ctx->pc = 0x7F27E988u;
    // 7F27E988: lwz     r4, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27E98C:
    ctx->pc = 0x7F27E98Cu;
    // 7F27E98C: and.   r0, r4, r0
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

label_7F27E990:
    ctx->pc = 0x7F27E990u;
    // 7F27E990: bc    12, 2, 0x7F27E9A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27E9A8;
        }
    }

label_7F27E994:
    ctx->pc = 0x7F27E994u;
    ctx->downcount -= 5;
    // 7F27E994: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27E998:
    ctx->pc = 0x7F27E998u;
    // 7F27E998: lfs     f1, 156(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F27E998u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F27E99C:
    ctx->pc = 0x7F27E99Cu;
    // 7F27E99C: lfs     f0, 25336(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27E99Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25336);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27E9A0:
    ctx->pc = 0x7F27E9A0u;
    // 7F27E9A0: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27E9A0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F27E9A4:
    ctx->pc = 0x7F27E9A4u;
    // 7F27E9A4: bc    12, 0, 0x7F27E9EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27E9EC;
        }
    }

label_7F27E9A8:
    ctx->pc = 0x7F27E9A8u;
    ctx->downcount -= 5;
    // 7F27E9A8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27E9AC:
    ctx->pc = 0x7F27E9ACu;
    // 7F27E9AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27E9B0:
    ctx->pc = 0x7F27E9B0u;
    // 7F27E9B0: li      r6, 512
    ctx->gpr[6] = (u32)(s32)(512);

label_7F27E9B4:
    ctx->pc = 0x7F27E9B4u;
    // 7F27E9B4: lis     r5, -32768
    ctx->gpr[5] = ((u32)(s32)(-32768) << 16);

label_7F27E9B8:
    ctx->pc = 0x7F27E9B8u;
    // 7F27E9B8: bl      0x7F012018
    {
            ctx->lr = 0x7F27E9BCu;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F27E9BC:
    ctx->pc = 0x7F27E9BCu;
    ctx->downcount -= 5;
    // 7F27E9BC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F27E9C0:
    ctx->pc = 0x7F27E9C0u;
    // 7F27E9C0: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F27E9C4:
    ctx->pc = 0x7F27E9C4u;
    // 7F27E9C4: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F27E9C8:
    ctx->pc = 0x7F27E9C8u;
    // 7F27E9C8: or.   r0, r4, r0
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

label_7F27E9CC:
    ctx->pc = 0x7F27E9CCu;
    // 7F27E9CC: bc    12, 2, 0x7F27E9F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27E9F8;
        }
    }

label_7F27E9D0:
    ctx->pc = 0x7F27E9D0u;
    ctx->downcount -= 7;
    // 7F27E9D0: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F27E9D4:
    ctx->pc = 0x7F27E9D4u;
    // 7F27E9D4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27E9D8:
    ctx->pc = 0x7F27E9D8u;
    // 7F27E9D8: addi    r4, r4, 14080
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14080);

label_7F27E9DC:
    ctx->pc = 0x7F27E9DCu;
    // 7F27E9DC: lwz     r0, -7404(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7404);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27E9E0:
    ctx->pc = 0x7F27E9E0u;
    // 7F27E9E0: lwz     r4, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27E9E4:
    ctx->pc = 0x7F27E9E4u;
    // 7F27E9E4: and.   r0, r4, r0
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

label_7F27E9E8:
    ctx->pc = 0x7F27E9E8u;
    // 7F27E9E8: bc    12, 2, 0x7F27E9F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27E9F8;
        }
    }

label_7F27E9EC:
    ctx->pc = 0x7F27E9ECu;
    ctx->downcount -= 3;
    // 7F27E9EC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27E9F0:
    ctx->pc = 0x7F27E9F0u;
    // 7F27E9F0: lfs     f0, 25360(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27E9F0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25360);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27E9F4:
    ctx->pc = 0x7F27E9F4u;
    // 7F27E9F4: stfs     f0, 156(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F27E9F4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F27E9F8:
    ctx->pc = 0x7F27E9F8u;
    ctx->downcount -= 1;
    // 7F27E9F8: bl      0x7F2BBB3C
    {
            ctx->lr = 0x7F27E9FCu;
            ctx->pc = 0x7F2BBB3Cu;
            return;
    }

label_7F27E9FC:
    ctx->pc = 0x7F27E9FCu;
    ctx->downcount -= 2;
    // 7F27E9FC: cmpwi   r3, 0
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

label_7F27EA00:
    ctx->pc = 0x7F27EA00u;
    // 7F27EA00: bc    12, 2, 0x7F27EA44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27EA44;
        }
    }

label_7F27EA04:
    ctx->pc = 0x7F27EA04u;
    ctx->downcount -= 6;
    // 7F27EA04: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27EA08:
    ctx->pc = 0x7F27EA08u;
    // 7F27EA08: lfs     f1, 156(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F27EA08u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F27EA0C:
    ctx->pc = 0x7F27EA0Cu;
    // 7F27EA0C: lfs     f0, 25336(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27EA0Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25336);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27EA10:
    ctx->pc = 0x7F27EA10u;
    // 7F27EA10: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27EA10u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F27EA14:
    ctx->pc = 0x7F27EA14u;
    // 7F27EA14: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F27EA18:
    ctx->pc = 0x7F27EA18u;
    // 7F27EA18: bc    4, 2, 0x7F27EA44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27EA44;
        }
    }

label_7F27EA1C:
    ctx->pc = 0x7F27EA1Cu;
    ctx->downcount -= 9;
    // 7F27EA1C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F27EA20:
    ctx->pc = 0x7F27EA20u;
    // 7F27EA20: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F27EA24:
    ctx->pc = 0x7F27EA24u;
    // 7F27EA24: lwz     r5, 13880(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13880);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F27EA28:
    ctx->pc = 0x7F27EA28u;
    // 7F27EA28: lfs     f0, 25364(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F27EA28u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(25364);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27EA2C:
    ctx->pc = 0x7F27EA2Cu;
    // 7F27EA2C: lha     r3, 286(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(286);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27EA30:
    ctx->pc = 0x7F27EA30u;
    // 7F27EA30: lha     r0, 288(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(288);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27EA34:
    ctx->pc = 0x7F27EA34u;
    // 7F27EA34: fadds   f30, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27EA34u)) return;
    ppc_fadds(ctx, 30, 30, 0);

label_7F27EA38:
    ctx->pc = 0x7F27EA38u;
    // 7F27EA38: cmpw    r3, r0
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

label_7F27EA3C:
    ctx->pc = 0x7F27EA3Cu;
    // 7F27EA3C: bc    4, 0, 0x7F27EA44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27EA44;
        }
    }

label_7F27EA40:
    ctx->pc = 0x7F27EA40u;
    ctx->downcount -= 1;
    // 7F27EA40: fadds   f30, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27EA40u)) return;
    ppc_fadds(ctx, 30, 30, 0);

label_7F27EA44:
    ctx->pc = 0x7F27EA44u;
    ctx->downcount -= 6;
    // 7F27EA44: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27EA48:
    ctx->pc = 0x7F27EA48u;
    // 7F27EA48: lfs     f1, 156(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F27EA48u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F27EA4C:
    ctx->pc = 0x7F27EA4Cu;
    // 7F27EA4C: lfs     f0, 25336(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27EA4Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25336);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27EA50:
    ctx->pc = 0x7F27EA50u;
    // 7F27EA50: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27EA50u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F27EA54:
    ctx->pc = 0x7F27EA54u;
    // 7F27EA54: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F27EA58:
    ctx->pc = 0x7F27EA58u;
    // 7F27EA58: bc    4, 2, 0x7F27EAE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27EAE4;
        }
    }

label_7F27EA5C:
    ctx->pc = 0x7F27EA5Cu;
    ctx->downcount -= 4;
    // 7F27EA5C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27EA60:
    ctx->pc = 0x7F27EA60u;
    // 7F27EA60: lfs     f2, -7400(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27EA60u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7400);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F27EA64:
    ctx->pc = 0x7F27EA64u;
    // 7F27EA64: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27EA64u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F27EA68:
    ctx->pc = 0x7F27EA68u;
    // 7F27EA68: bc    4, 1, 0x7F27EA98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27EA98;
        }
    }

label_7F27EA6C:
    ctx->pc = 0x7F27EA6Cu;
    ctx->downcount -= 27;
    // 7F27EA6C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27EA70:
    ctx->pc = 0x7F27EA70u;
    // 7F27EA70: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F27EA74:
    ctx->pc = 0x7F27EA74u;
    // 7F27EA74: addi    r5, r3, 25360
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(25360);

label_7F27EA78:
    ctx->pc = 0x7F27EA78u;
    // 7F27EA78: lfs     f0, 25352(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F27EA78u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(25352);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27EA7C:
    ctx->pc = 0x7F27EA7Cu;
    // 7F27EA7C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F27EA7Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F27EA80:
    ctx->pc = 0x7F27EA80u;
    // 7F27EA80: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27EA84:
    ctx->pc = 0x7F27EA84u;
    // 7F27EA84: fmr    f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F27EA84u)) return;
    ctx->fpr[3] = ctx->fpr[2];

label_7F27EA88:
    ctx->pc = 0x7F27EA88u;
    // 7F27EA88: stfs     f0, -7396(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27EA88u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7396);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F27EA8C:
    ctx->pc = 0x7F27EA8Cu;
    // 7F27EA8C: fdivs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F27EA8Cu)) return;
    ppc_fdivs(ctx, 1, 2, 1);

label_7F27EA90:
    ctx->pc = 0x7F27EA90u;
    // 7F27EA90: fadds   f29, f29, f1
    if (!ppc_fp_available_inline(ctx, 0x7F27EA90u)) return;
    ppc_fadds(ctx, 29, 29, 1);

label_7F27EA94:
    ctx->pc = 0x7F27EA94u;
    // 7F27EA94: b       0x7F27EAB8
    {
            goto label_7F27EAB8;
    }

label_7F27EA98:
    ctx->pc = 0x7F27EA98u;
    ctx->downcount -= 4;
    // 7F27EA98: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27EA9C:
    ctx->pc = 0x7F27EA9Cu;
    // 7F27EA9C: lfs     f1, -7396(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27EA9Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7396);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F27EAA0:
    ctx->pc = 0x7F27EAA0u;
    // 7F27EAA0: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27EAA0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F27EAA4:
    ctx->pc = 0x7F27EAA4u;
    // 7F27EAA4: bc    4, 1, 0x7F27EAAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27EAAC;
        }
    }

label_7F27EAA8:
    ctx->pc = 0x7F27EAA8u;
    ctx->downcount -= 1;
    // 7F27EAA8: b       0x7F27EAB4
    {
            goto label_7F27EAB4;
    }

label_7F27EAAC:
    ctx->pc = 0x7F27EAACu;
    ctx->downcount -= 2;
    // 7F27EAAC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27EAB0:
    ctx->pc = 0x7F27EAB0u;
    // 7F27EAB0: lfs     f1, 25352(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27EAB0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25352);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F27EAB4:
    ctx->pc = 0x7F27EAB4u;
    ctx->downcount -= 1;
    // 7F27EAB4: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F27EAB4u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_7F27EAB8:
    ctx->pc = 0x7F27EAB8u;
    ctx->downcount -= 9;
    // 7F27EAB8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F27EABC:
    ctx->pc = 0x7F27EABCu;
    // 7F27EABC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27EAC0:
    ctx->pc = 0x7F27EAC0u;
    // 7F27EAC0: lfs     f2, 156(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F27EAC0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F27EAC4:
    ctx->pc = 0x7F27EAC4u;
    // 7F27EAC4: lfs     f1, 25364(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F27EAC4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(25364);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F27EAC8:
    ctx->pc = 0x7F27EAC8u;
    // 7F27EAC8: lfs     f0, 25336(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27EAC8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25336);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27EACC:
    ctx->pc = 0x7F27EACCu;
    // 7F27EACC: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F27EACCu)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_7F27EAD0:
    ctx->pc = 0x7F27EAD0u;
    // 7F27EAD0: fcmpo   cr0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27EAD0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[3], ctx->fpr[0], true);

label_7F27EAD4:
    ctx->pc = 0x7F27EAD4u;
    // 7F27EAD4: stfs     f1, 156(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F27EAD4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F27EAD8:
    ctx->pc = 0x7F27EAD8u;
    // 7F27EAD8: bc    4, 0, 0x7F27EAE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27EAE4;
        }
    }

label_7F27EADC:
    ctx->pc = 0x7F27EADCu;
    ctx->downcount -= 2;
    // 7F27EADC: fmr    f29, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27EADCu)) return;
    ctx->fpr[29] = ctx->fpr[0];

label_7F27EAE0:
    ctx->pc = 0x7F27EAE0u;
    // 7F27EAE0: fmr    f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27EAE0u)) return;
    ctx->fpr[30] = ctx->fpr[0];

label_7F27EAE4:
    ctx->pc = 0x7F27EAE4u;
    ctx->downcount -= 6;
    // 7F27EAE4: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F27EAE8:
    ctx->pc = 0x7F27EAE8u;
    // 7F27EAE8: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F27EAEC:
    ctx->pc = 0x7F27EAECu;
    // 7F27EAEC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27EAF0:
    ctx->pc = 0x7F27EAF0u;
    // 7F27EAF0: lha     r0, 298(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(298);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27EAF4:
    ctx->pc = 0x7F27EAF4u;
    // 7F27EAF4: cmpwi   r0, 11
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

label_7F27EAF8:
    ctx->pc = 0x7F27EAF8u;
    // 7F27EAF8: bc    4, 2, 0x7F27EB34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27EB34;
        }
    }

label_7F27EAFC:
    ctx->pc = 0x7F27EAFCu;
    ctx->downcount -= 10;
    // 7F27EAFC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F27EB00:
    ctx->pc = 0x7F27EB00u;
    // 7F27EB00: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F27EB04:
    ctx->pc = 0x7F27EB04u;
    // 7F27EB04: addi    r4, r4, 22156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22156);

label_7F27EB08:
    ctx->pc = 0x7F27EB08u;
    // 7F27EB08: lfs     f0, 19564(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27EB08u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19564);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27EB0C:
    ctx->pc = 0x7F27EB0Cu;
    // 7F27EB0C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27EB10:
    ctx->pc = 0x7F27EB10u;
    // 7F27EB10: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27EB14:
    ctx->pc = 0x7F27EB14u;
    // 7F27EB14: lfs     f1, 4384(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27EB14u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4384);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F27EB18:
    ctx->pc = 0x7F27EB18u;
    // 7F27EB18: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27EB18u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F27EB1C:
    ctx->pc = 0x7F27EB1Cu;
    // 7F27EB1C: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F27EB20:
    ctx->pc = 0x7F27EB20u;
    // 7F27EB20: bc    4, 2, 0x7F27EB34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27EB34;
        }
    }

label_7F27EB24:
    ctx->pc = 0x7F27EB24u;
    ctx->downcount -= 4;
    // 7F27EB24: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27EB28:
    ctx->pc = 0x7F27EB28u;
    // 7F27EB28: lfd     f0, 25368(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27EB28u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25368);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27EB2C:
    ctx->pc = 0x7F27EB2Cu;
    // 7F27EB2C: fmul   f30, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27EB2Cu)) return;
    ppc_fmul(ctx, 30, 30, 0);

label_7F27EB30:
    ctx->pc = 0x7F27EB30u;
    // 7F27EB30: frsp    f30, f30
    if (!ppc_fp_available_inline(ctx, 0x7F27EB30u)) return;
    ppc_frsp(ctx, 30, 30);

label_7F27EB34:
    ctx->pc = 0x7F27EB34u;
    ctx->downcount -= 13;
    // 7F27EB34: lha     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27EB38:
    ctx->pc = 0x7F27EB38u;
    // 7F27EB38: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_7F27EB3C:
    ctx->pc = 0x7F27EB3Cu;
    // 7F27EB3C: fsubs   f0, f31, f30
    if (!ppc_fp_available_inline(ctx, 0x7F27EB3Cu)) return;
    ppc_fsubs(ctx, 0, 31, 30);

label_7F27EB40:
    ctx->pc = 0x7F27EB40u;
    // 7F27EB40: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F27EB44:
    ctx->pc = 0x7F27EB44u;
    // 7F27EB44: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F27EB48:
    ctx->pc = 0x7F27EB48u;
    // 7F27EB48: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27EB4C:
    ctx->pc = 0x7F27EB4Cu;
    // 7F27EB4C: lfd     f1, 25344(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F27EB4Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(25344);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27EB50:
    ctx->pc = 0x7F27EB50u;
    // 7F27EB50: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27EB54:
    ctx->pc = 0x7F27EB54u;
    // 7F27EB54: fadds   f2, f29, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27EB54u)) return;
    ppc_fadds(ctx, 2, 29, 0);

label_7F27EB58:
    ctx->pc = 0x7F27EB58u;
    // 7F27EB58: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27EB58u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27EB5C:
    ctx->pc = 0x7F27EB5Cu;
    // 7F27EB5C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F27EB5Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F27EB60:
    ctx->pc = 0x7F27EB60u;
    // 7F27EB60: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27EB60u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F27EB64:
    ctx->pc = 0x7F27EB64u;
    // 7F27EB64: bc    4, 0, 0x7F27EB7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27EB7C;
        }
    }

label_7F27EB68:
    ctx->pc = 0x7F27EB68u;
    ctx->downcount -= 5;
    // 7F27EB68: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27EB6C:
    ctx->pc = 0x7F27EB6Cu;
    // 7F27EB6C: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27EB70:
    ctx->pc = 0x7F27EB70u;
    // 7F27EB70: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27EB70u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27EB74:
    ctx->pc = 0x7F27EB74u;
    // 7F27EB74: fsubs   f2, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F27EB74u)) return;
    ppc_fsubs(ctx, 2, 0, 1);

label_7F27EB78:
    ctx->pc = 0x7F27EB78u;
    // 7F27EB78: b       0x7F27EBAC
    {
            goto label_7F27EBAC;
    }

label_7F27EB7C:
    ctx->pc = 0x7F27EB7Cu;
    ctx->downcount -= 8;
    // 7F27EB7C: lha     r0, 26(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(26);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27EB80:
    ctx->pc = 0x7F27EB80u;
    // 7F27EB80: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27EB84:
    ctx->pc = 0x7F27EB84u;
    // 7F27EB84: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F27EB88:
    ctx->pc = 0x7F27EB88u;
    // 7F27EB88: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27EB8C:
    ctx->pc = 0x7F27EB8Cu;
    // 7F27EB8C: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27EB8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27EB90:
    ctx->pc = 0x7F27EB90u;
    // 7F27EB90: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F27EB90u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F27EB94:
    ctx->pc = 0x7F27EB94u;
    // 7F27EB94: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27EB94u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F27EB98:
    ctx->pc = 0x7F27EB98u;
    // 7F27EB98: bc    4, 1, 0x7F27EBAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27EBAC;
        }
    }

label_7F27EB9C:
    ctx->pc = 0x7F27EB9Cu;
    ctx->downcount -= 4;
    // 7F27EB9C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27EBA0:
    ctx->pc = 0x7F27EBA0u;
    // 7F27EBA0: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27EBA4:
    ctx->pc = 0x7F27EBA4u;
    // 7F27EBA4: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27EBA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27EBA8:
    ctx->pc = 0x7F27EBA8u;
    // 7F27EBA8: fsubs   f2, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F27EBA8u)) return;
    ppc_fsubs(ctx, 2, 0, 1);

label_7F27EBAC:
    ctx->pc = 0x7F27EBACu;
    ctx->downcount -= 9;
    // 7F27EBAC: fctiwz    f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F27EBACu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[2], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F27EBB0:
    ctx->pc = 0x7F27EBB0u;
    // 7F27EBB0: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27EBB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F27EBB4:
    ctx->pc = 0x7F27EBB4u;
    // 7F27EBB4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27EBB8:
    ctx->pc = 0x7F27EBB8u;
    // 7F27EBB8: sth     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27EBBC:
    ctx->pc = 0x7F27EBBCu;
    // 7F27EBBC: stfs     f2, 168(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F27EBBCu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(168);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F27EBC0:
    ctx->pc = 0x7F27EBC0u;
    // 7F27EBC0: lha     r4, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27EBC4:
    ctx->pc = 0x7F27EBC4u;
    // 7F27EBC4: lha     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27EBC8:
    ctx->pc = 0x7F27EBC8u;
    // 7F27EBC8: cmpw    r4, r0
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

label_7F27EBCC:
    ctx->pc = 0x7F27EBCCu;
    // 7F27EBCC: bc    4, 2, 0x7F27ECCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27ECCC;
        }
    }

label_7F27EBD0:
    ctx->pc = 0x7F27EBD0u;
    ctx->downcount -= 6;
    // 7F27EBD0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27EBD4:
    ctx->pc = 0x7F27EBD4u;
    // 7F27EBD4: lfs     f1, 156(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F27EBD4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F27EBD8:
    ctx->pc = 0x7F27EBD8u;
    // 7F27EBD8: lfs     f0, 25336(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27EBD8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25336);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27EBDC:
    ctx->pc = 0x7F27EBDCu;
    // 7F27EBDC: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27EBDCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F27EBE0:
    ctx->pc = 0x7F27EBE0u;
    // 7F27EBE0: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F27EBE4:
    ctx->pc = 0x7F27EBE4u;
    // 7F27EBE4: bc    4, 2, 0x7F27EC50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27EC50;
        }
    }

label_7F27EBE8:
    ctx->pc = 0x7F27EBE8u;
    ctx->downcount -= 1;
    // 7F27EBE8: bl      0x7F2BBB3C
    {
            ctx->lr = 0x7F27EBECu;
            ctx->pc = 0x7F2BBB3Cu;
            return;
    }

label_7F27EBEC:
    ctx->pc = 0x7F27EBECu;
    ctx->downcount -= 2;
    // 7F27EBEC: cmpwi   r3, 0
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

label_7F27EBF0:
    ctx->pc = 0x7F27EBF0u;
    // 7F27EBF0: bc    4, 2, 0x7F27EC1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27EC1C;
        }
    }

label_7F27EBF4:
    ctx->pc = 0x7F27EBF4u;
    ctx->downcount -= 5;
    // 7F27EBF4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27EBF8:
    ctx->pc = 0x7F27EBF8u;
    // 7F27EBF8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27EBFC:
    ctx->pc = 0x7F27EBFCu;
    // 7F27EBFC: li      r6, 512
    ctx->gpr[6] = (u32)(s32)(512);

label_7F27EC00:
    ctx->pc = 0x7F27EC00u;
    // 7F27EC00: lis     r5, -32768
    ctx->gpr[5] = ((u32)(s32)(-32768) << 16);

label_7F27EC04:
    ctx->pc = 0x7F27EC04u;
    // 7F27EC04: bl      0x7F012018
    {
            ctx->lr = 0x7F27EC08u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F27EC08:
    ctx->pc = 0x7F27EC08u;
    ctx->downcount -= 5;
    // 7F27EC08: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F27EC0C:
    ctx->pc = 0x7F27EC0Cu;
    // 7F27EC0C: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F27EC10:
    ctx->pc = 0x7F27EC10u;
    // 7F27EC10: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F27EC14:
    ctx->pc = 0x7F27EC14u;
    // 7F27EC14: or.   r0, r4, r0
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

label_7F27EC18:
    ctx->pc = 0x7F27EC18u;
    // 7F27EC18: bc    12, 2, 0x7F27EC50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27EC50;
        }
    }

label_7F27EC1C:
    ctx->pc = 0x7F27EC1Cu;
    ctx->downcount -= 51;
    // 7F27EC1C: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F27EC20:
    ctx->pc = 0x7F27EC20u;
    // 7F27EC20: li      r3, 15
    ctx->gpr[3] = (u32)(s32)(15);

label_7F27EC24:
    ctx->pc = 0x7F27EC24u;
    // 7F27EC24: addi    r4, r4, 32304
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(32304);

label_7F27EC28:
    ctx->pc = 0x7F27EC28u;
    // 7F27EC28: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27EC2C:
    ctx->pc = 0x7F27EC2Cu;
    // 7F27EC2C: divw   r0, r4, r3
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F27EC30:
    ctx->pc = 0x7F27EC30u;
    // 7F27EC30: mullw   r0, r0, r3
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[0] = (u32)product;
    }

label_7F27EC34:
    ctx->pc = 0x7F27EC34u;
    // 7F27EC34: subf.   r0, r0, r4
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

label_7F27EC38:
    ctx->pc = 0x7F27EC38u;
    // 7F27EC38: bc    4, 2, 0x7F27EC50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27EC50;
        }
    }

label_7F27EC3C:
    ctx->pc = 0x7F27EC3Cu;
    ctx->downcount -= 5;
    // 7F27EC3C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27EC40:
    ctx->pc = 0x7F27EC40u;
    // 7F27EC40: addi    r4, r3, -6212
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6212);

label_7F27EC44:
    ctx->pc = 0x7F27EC44u;
    // 7F27EC44: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27EC48:
    ctx->pc = 0x7F27EC48u;
    // 7F27EC48: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F27EC4C:
    ctx->pc = 0x7F27EC4Cu;
    // 7F27EC4C: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27EC50:
    ctx->pc = 0x7F27EC50u;
    ctx->downcount -= 51;
    // 7F27EC50: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F27EC54:
    ctx->pc = 0x7F27EC54u;
    // 7F27EC54: li      r3, 90
    ctx->gpr[3] = (u32)(s32)(90);

label_7F27EC58:
    ctx->pc = 0x7F27EC58u;
    // 7F27EC58: addi    r4, r4, 32304
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(32304);

label_7F27EC5C:
    ctx->pc = 0x7F27EC5Cu;
    // 7F27EC5C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27EC60:
    ctx->pc = 0x7F27EC60u;
    // 7F27EC60: divw   r0, r4, r3
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F27EC64:
    ctx->pc = 0x7F27EC64u;
    // 7F27EC64: mullw   r0, r0, r3
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[0] = (u32)product;
    }

label_7F27EC68:
    ctx->pc = 0x7F27EC68u;
    // 7F27EC68: subf.   r0, r0, r4
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

label_7F27EC6C:
    ctx->pc = 0x7F27EC6Cu;
    // 7F27EC6C: bc    4, 2, 0x7F27EE24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27EE24;
        }
    }

label_7F27EC70:
    ctx->pc = 0x7F27EC70u;
    ctx->downcount -= 5;
    // 7F27EC70: lis     r4, 256
    ctx->gpr[4] = ((u32)(s32)(256) << 16);

label_7F27EC74:
    ctx->pc = 0x7F27EC74u;
    // 7F27EC74: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27EC78:
    ctx->pc = 0x7F27EC78u;
    // 7F27EC78: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F27EC7C:
    ctx->pc = 0x7F27EC7Cu;
    // 7F27EC7C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F27EC80:
    ctx->pc = 0x7F27EC80u;
    // 7F27EC80: bl      0x7F012018
    {
            ctx->lr = 0x7F27EC84u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F27EC84:
    ctx->pc = 0x7F27EC84u;
    ctx->downcount -= 5;
    // 7F27EC84: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F27EC88:
    ctx->pc = 0x7F27EC88u;
    // 7F27EC88: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F27EC8C:
    ctx->pc = 0x7F27EC8Cu;
    // 7F27EC8C: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F27EC90:
    ctx->pc = 0x7F27EC90u;
    // 7F27EC90: or.   r0, r4, r0
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

label_7F27EC94:
    ctx->pc = 0x7F27EC94u;
    // 7F27EC94: bc    4, 2, 0x7F27EE24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27EE24;
        }
    }

label_7F27EC98:
    ctx->pc = 0x7F27EC98u;
    ctx->downcount -= 4;
    // 7F27EC98: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F27EC9C:
    ctx->pc = 0x7F27EC9Cu;
    // 7F27EC9C: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F27ECA0:
    ctx->pc = 0x7F27ECA0u;
    // 7F27ECA0: li      r5, 106
    ctx->gpr[5] = (u32)(s32)(106);

label_7F27ECA4:
    ctx->pc = 0x7F27ECA4u;
    // 7F27ECA4: bl      0x7F011698
    {
            ctx->lr = 0x7F27ECA8u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F27ECA8:
    ctx->pc = 0x7F27ECA8u;
    ctx->downcount -= 5;
    // 7F27ECA8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27ECAC:
    ctx->pc = 0x7F27ECACu;
    // 7F27ECAC: addi    r3, r3, -5660
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5660);

label_7F27ECB0:
    ctx->pc = 0x7F27ECB0u;
    // 7F27ECB0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27ECB4:
    ctx->pc = 0x7F27ECB4u;
    // 7F27ECB4: cmplwi  r3, 0x0000
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

label_7F27ECB8:
    ctx->pc = 0x7F27ECB8u;
    // 7F27ECB8: bc    12, 2, 0x7F27EE24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27EE24;
        }
    }

label_7F27ECBC:
    ctx->pc = 0x7F27ECBCu;
    ctx->downcount -= 4;
    // 7F27ECBC: lhz     r0, 710(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(710);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F27ECC0:
    ctx->pc = 0x7F27ECC0u;
    // 7F27ECC0: ori     r0, r0, 0x0010
    ctx->gpr[0] = ctx->gpr[0] | 0x0010u;

label_7F27ECC4:
    ctx->pc = 0x7F27ECC4u;
    // 7F27ECC4: sth     r0, 710(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(710);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27ECC8:
    ctx->pc = 0x7F27ECC8u;
    // 7F27ECC8: b       0x7F27EE24
    {
            goto label_7F27EE24;
    }

label_7F27ECCC:
    ctx->pc = 0x7F27ECCCu;
    ctx->downcount -= 44;
    // 7F27ECCC: lha     r3, 26(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(26);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27ECD0:
    ctx->pc = 0x7F27ECD0u;
    // 7F27ECD0: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F27ECD4:
    ctx->pc = 0x7F27ECD4u;
    // 7F27ECD4: divw   r0, r3, r0
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F27ECD8:
    ctx->pc = 0x7F27ECD8u;
    // 7F27ECD8: cmpw    r4, r0
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

label_7F27ECDC:
    ctx->pc = 0x7F27ECDCu;
    // 7F27ECDC: bc    4, 0, 0x7F27EE24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27EE24;
        }
    }

label_7F27ECE0:
    ctx->pc = 0x7F27ECE0u;
    ctx->downcount -= 51;
    // 7F27ECE0: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F27ECE4:
    ctx->pc = 0x7F27ECE4u;
    // 7F27ECE4: li      r3, 90
    ctx->gpr[3] = (u32)(s32)(90);

label_7F27ECE8:
    ctx->pc = 0x7F27ECE8u;
    // 7F27ECE8: addi    r4, r4, 32304
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(32304);

label_7F27ECEC:
    ctx->pc = 0x7F27ECECu;
    // 7F27ECEC: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27ECF0:
    ctx->pc = 0x7F27ECF0u;
    // 7F27ECF0: divw   r0, r4, r3
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F27ECF4:
    ctx->pc = 0x7F27ECF4u;
    // 7F27ECF4: mullw   r0, r0, r3
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[0] = (u32)product;
    }

label_7F27ECF8:
    ctx->pc = 0x7F27ECF8u;
    // 7F27ECF8: subf.   r0, r0, r4
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

label_7F27ECFC:
    ctx->pc = 0x7F27ECFCu;
    // 7F27ECFC: bc    4, 2, 0x7F27EE24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27EE24;
        }
    }

label_7F27ED00:
    ctx->pc = 0x7F27ED00u;
    ctx->downcount -= 5;
    // 7F27ED00: lis     r4, 256
    ctx->gpr[4] = ((u32)(s32)(256) << 16);

label_7F27ED04:
    ctx->pc = 0x7F27ED04u;
    // 7F27ED04: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27ED08:
    ctx->pc = 0x7F27ED08u;
    // 7F27ED08: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F27ED0C:
    ctx->pc = 0x7F27ED0Cu;
    // 7F27ED0C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F27ED10:
    ctx->pc = 0x7F27ED10u;
    // 7F27ED10: bl      0x7F012018
    {
            ctx->lr = 0x7F27ED14u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F27ED14:
    ctx->pc = 0x7F27ED14u;
    ctx->downcount -= 5;
    // 7F27ED14: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F27ED18:
    ctx->pc = 0x7F27ED18u;
    // 7F27ED18: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F27ED1C:
    ctx->pc = 0x7F27ED1Cu;
    // 7F27ED1C: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F27ED20:
    ctx->pc = 0x7F27ED20u;
    // 7F27ED20: or.   r0, r4, r0
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

label_7F27ED24:
    ctx->pc = 0x7F27ED24u;
    // 7F27ED24: bc    4, 2, 0x7F27ED38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27ED38;
        }
    }

label_7F27ED28:
    ctx->pc = 0x7F27ED28u;
    ctx->downcount -= 4;
    // 7F27ED28: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F27ED2C:
    ctx->pc = 0x7F27ED2Cu;
    // 7F27ED2C: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F27ED30:
    ctx->pc = 0x7F27ED30u;
    // 7F27ED30: li      r5, 106
    ctx->gpr[5] = (u32)(s32)(106);

label_7F27ED34:
    ctx->pc = 0x7F27ED34u;
    // 7F27ED34: bl      0x7F011698
    {
            ctx->lr = 0x7F27ED38u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F27ED38:
    ctx->pc = 0x7F27ED38u;
    ctx->downcount -= 4;
    // 7F27ED38: lhz     r0, 86(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(86);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F27ED3C:
    ctx->pc = 0x7F27ED3Cu;
    // 7F27ED3C: ori     r0, r0, 0x0010
    ctx->gpr[0] = ctx->gpr[0] | 0x0010u;

label_7F27ED40:
    ctx->pc = 0x7F27ED40u;
    // 7F27ED40: sth     r0, 86(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(86);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27ED44:
    ctx->pc = 0x7F27ED44u;
    // 7F27ED44: b       0x7F27EE24
    {
            goto label_7F27EE24;
    }

label_7F27ED48:
    ctx->pc = 0x7F27ED48u;
    ctx->downcount -= 11;
    // 7F27ED48: lha     r3, 26(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(26);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27ED4C:
    ctx->pc = 0x7F27ED4Cu;
    // 7F27ED4C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F27ED50:
    ctx->pc = 0x7F27ED50u;
    // 7F27ED50: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F27ED54:
    ctx->pc = 0x7F27ED54u;
    // 7F27ED54: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27ED58:
    ctx->pc = 0x7F27ED58u;
    // 7F27ED58: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F27ED5C:
    ctx->pc = 0x7F27ED5Cu;
    // 7F27ED5C: lfd     f1, 25344(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F27ED5Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(25344);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27ED60:
    ctx->pc = 0x7F27ED60u;
    // 7F27ED60: stw     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27ED64:
    ctx->pc = 0x7F27ED64u;
    // 7F27ED64: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27ED64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27ED68:
    ctx->pc = 0x7F27ED68u;
    // 7F27ED68: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F27ED68u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F27ED6C:
    ctx->pc = 0x7F27ED6Cu;
    // 7F27ED6C: fcmpo   cr0, f28, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27ED6Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[28], ctx->fpr[0], true);

label_7F27ED70:
    ctx->pc = 0x7F27ED70u;
    // 7F27ED70: bc    4, 0, 0x7F27EDD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27EDD0;
        }
    }

label_7F27ED74:
    ctx->pc = 0x7F27ED74u;
    ctx->downcount -= 5;
    // 7F27ED74: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27ED78:
    ctx->pc = 0x7F27ED78u;
    // 7F27ED78: li      r3, 256
    ctx->gpr[3] = (u32)(s32)(256);

label_7F27ED7C:
    ctx->pc = 0x7F27ED7Cu;
    // 7F27ED7C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F27ED80:
    ctx->pc = 0x7F27ED80u;
    // 7F27ED80: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F27ED84:
    ctx->pc = 0x7F27ED84u;
    // 7F27ED84: bl      0x7F012018
    {
            ctx->lr = 0x7F27ED88u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F27ED88:
    ctx->pc = 0x7F27ED88u;
    ctx->downcount -= 5;
    // 7F27ED88: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F27ED8C:
    ctx->pc = 0x7F27ED8Cu;
    // 7F27ED8C: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F27ED90:
    ctx->pc = 0x7F27ED90u;
    // 7F27ED90: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F27ED94:
    ctx->pc = 0x7F27ED94u;
    // 7F27ED94: or.   r0, r4, r0
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

label_7F27ED98:
    ctx->pc = 0x7F27ED98u;
    // 7F27ED98: bc    4, 2, 0x7F27EE04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27EE04;
        }
    }

label_7F27ED9C:
    ctx->pc = 0x7F27ED9Cu;
    ctx->downcount -= 13;
    // 7F27ED9C: lha     r3, 26(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(26);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27EDA0:
    ctx->pc = 0x7F27EDA0u;
    // 7F27EDA0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F27EDA4:
    ctx->pc = 0x7F27EDA4u;
    // 7F27EDA4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F27EDA8:
    ctx->pc = 0x7F27EDA8u;
    // 7F27EDA8: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F27EDAC:
    ctx->pc = 0x7F27EDACu;
    // 7F27EDAC: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F27EDB0:
    ctx->pc = 0x7F27EDB0u;
    // 7F27EDB0: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27EDB4:
    ctx->pc = 0x7F27EDB4u;
    // 7F27EDB4: lfd     f1, 25344(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F27EDB4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(25344);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27EDB8:
    ctx->pc = 0x7F27EDB8u;
    // 7F27EDB8: stw     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27EDBC:
    ctx->pc = 0x7F27EDBCu;
    // 7F27EDBC: lfs     f2, 25376(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F27EDBCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(25376);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F27EDC0:
    ctx->pc = 0x7F27EDC0u;
    // 7F27EDC0: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27EDC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27EDC4:
    ctx->pc = 0x7F27EDC4u;
    // 7F27EDC4: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F27EDC4u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F27EDC8:
    ctx->pc = 0x7F27EDC8u;
    // 7F27EDC8: fmadds f28, f2, f0, f28
    if (!ppc_fp_available_inline(ctx, 0x7F27EDC8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[0], ctx->fpr[28], true, false, false, &result))
            ctx->fpr[28] = ctx->ps1[28] = result;
    }

label_7F27EDCC:
    ctx->pc = 0x7F27EDCCu;
    // 7F27EDCC: b       0x7F27EE04
    {
            goto label_7F27EE04;
    }

label_7F27EDD0:
    ctx->pc = 0x7F27EDD0u;
    ctx->downcount -= 7;
    // 7F27EDD0: stw     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27EDD4:
    ctx->pc = 0x7F27EDD4u;
    // 7F27EDD4: lwz     r3, 160(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27EDD8:
    ctx->pc = 0x7F27EDD8u;
    // 7F27EDD8: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27EDDC:
    ctx->pc = 0x7F27EDDCu;
    // 7F27EDDC: cmpwi   r3, 240
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(240);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F27EDE0:
    ctx->pc = 0x7F27EDE0u;
    // 7F27EDE0: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27EDE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27EDE4:
    ctx->pc = 0x7F27EDE4u;
    // 7F27EDE4: fsubs   f28, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F27EDE4u)) return;
    ppc_fsubs(ctx, 28, 0, 1);

label_7F27EDE8:
    ctx->pc = 0x7F27EDE8u;
    // 7F27EDE8: bc    4, 0, 0x7F27EE04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27EE04;
        }
    }

label_7F27EDEC:
    ctx->pc = 0x7F27EDECu;
    ctx->downcount -= 4;
    // 7F27EDEC: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F27EDF0:
    ctx->pc = 0x7F27EDF0u;
    // 7F27EDF0: cmpwi   r0, 240
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

label_7F27EDF4:
    ctx->pc = 0x7F27EDF4u;
    // 7F27EDF4: stw     r0, 160(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27EDF8:
    ctx->pc = 0x7F27EDF8u;
    // 7F27EDF8: bc    12, 0, 0x7F27EE04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27EE04;
        }
    }

label_7F27EDFC:
    ctx->pc = 0x7F27EDFCu;
    ctx->downcount -= 2;
    // 7F27EDFC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27EE00:
    ctx->pc = 0x7F27EE00u;
    // 7F27EE00: bl      0x7F27E648
    {
            ctx->lr = 0x7F27EE04u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27E648u;
                return;
            }
            goto label_7F27E648;
    }

label_7F27EE04:
    ctx->pc = 0x7F27EE04u;
    ctx->downcount -= 8;
    // 7F27EE04: fctiwz    f1, f28
    if (!ppc_fp_available_inline(ctx, 0x7F27EE04u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[28], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F27EE08:
    ctx->pc = 0x7F27EE08u;
    // 7F27EE08: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27EE0C:
    ctx->pc = 0x7F27EE0Cu;
    // 7F27EE0C: lfs     f0, 25336(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27EE0Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25336);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27EE10:
    ctx->pc = 0x7F27EE10u;
    // 7F27EE10: stfd     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27EE10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F27EE14:
    ctx->pc = 0x7F27EE14u;
    // 7F27EE14: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27EE18:
    ctx->pc = 0x7F27EE18u;
    // 7F27EE18: sth     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27EE1C:
    ctx->pc = 0x7F27EE1Cu;
    // 7F27EE1C: stfs     f28, 168(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F27EE1Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(168);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[28]));
    }

label_7F27EE20:
    ctx->pc = 0x7F27EE20u;
    // 7F27EE20: stfs     f0, 156(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F27EE20u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F27EE24:
    ctx->pc = 0x7F27EE24u;
    ctx->downcount -= 1;
    // 7F27EE24: bl      0x7F2BB4C4
    {
            ctx->lr = 0x7F27EE28u;
            ctx->pc = 0x7F2BB4C4u;
            return;
    }

label_7F27EE28:
    ctx->pc = 0x7F27EE28u;
    ctx->downcount -= 2;
    // 7F27EE28: cmpwi   r3, 37
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(37);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F27EE2C:
    ctx->pc = 0x7F27EE2Cu;
    // 7F27EE2C: bc    4, 2, 0x7F27EE38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27EE38;
        }
    }

label_7F27EE30:
    ctx->pc = 0x7F27EE30u;
    ctx->downcount -= 2;
    // 7F27EE30: lha     r0, 26(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(26);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27EE34:
    ctx->pc = 0x7F27EE34u;
    // 7F27EE34: sth     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27EE38:
    ctx->pc = 0x7F27EE38u;
    ctx->downcount -= 8;
    // 7F27EE38: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F27EE3C:
    ctx->pc = 0x7F27EE3Cu;
    // 7F27EE3C: lha     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27EE40:
    ctx->pc = 0x7F27EE40u;
    // 7F27EE40: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F27EE44:
    ctx->pc = 0x7F27EE44u;
    // 7F27EE44: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27EE48:
    ctx->pc = 0x7F27EE48u;
    // 7F27EE48: sth     r0, 290(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(290);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F27EE4C:
    ctx->pc = 0x7F27EE4Cu;
    // 7F27EE4C: lwz     r0, 164(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27EE50:
    ctx->pc = 0x7F27EE50u;
    // 7F27EE50: rlwinm. r0, r0, 0, 30, 30
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

label_7F27EE54:
    ctx->pc = 0x7F27EE54u;
    // 7F27EE54: bc    12, 2, 0x7F27EE60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27EE60;
        }
    }

label_7F27EE58:
    ctx->pc = 0x7F27EE58u;
    ctx->downcount -= 2;
    // 7F27EE58: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27EE5C:
    ctx->pc = 0x7F27EE5Cu;
    // 7F27EE5C: bl      0x7F27E638
    {
            ctx->lr = 0x7F27EE60u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27E638u;
                return;
            }
            goto label_7F27E638;
    }

label_7F27EE60:
    ctx->pc = 0x7F27EE60u;
    ctx->downcount -= 24;
    // 7F27EE60: psq_l   f31, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F27EE60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F27EE60u);
        if (ctx->exception) return;
    }

label_7F27EE64:
    ctx->pc = 0x7F27EE64u;
    // 7F27EE64: lfd     f31, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27EE64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27EE68:
    ctx->pc = 0x7F27EE68u;
    // 7F27EE68: psq_l   f30, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F27EE68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F27EE68u);
        if (ctx->exception) return;
    }

label_7F27EE6C:
    ctx->pc = 0x7F27EE6Cu;
    // 7F27EE6C: lfd     f30, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27EE6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27EE70:
    ctx->pc = 0x7F27EE70u;
    // 7F27EE70: psq_l   f29, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F27EE70u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F27EE70u);
        if (ctx->exception) return;
    }

label_7F27EE74:
    ctx->pc = 0x7F27EE74u;
    // 7F27EE74: lfd     f29, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27EE74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27EE78:
    ctx->pc = 0x7F27EE78u;
    // 7F27EE78: psq_l   f28, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F27EE78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F27EE78u);
        if (ctx->exception) return;
    }

label_7F27EE7C:
    ctx->pc = 0x7F27EE7Cu;
    // 7F27EE7C: lfd     f28, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27EE7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27EE80:
    ctx->pc = 0x7F27EE80u;
    // 7F27EE80: lmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F27EE84:
    ctx->pc = 0x7F27EE84u;
    // 7F27EE84: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27EE88:
    ctx->pc = 0x7F27EE88u;
    // 7F27EE88: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27EE8C:
    ctx->pc = 0x7F27EE8Cu;
    // 7F27EE8C: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_7F27EE90:
    ctx->pc = 0x7F27EE90u;
    // 7F27EE90: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27EE94:
    ctx->pc = 0x7F27EE94u;
    ctx->downcount -= 5;
    // 7F27EE94: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27EE98:
    ctx->pc = 0x7F27EE98u;
    // 7F27EE98: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27EE9C:
    ctx->pc = 0x7F27EE9Cu;
    // 7F27EE9C: addi    r3, r3, 48
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(48);

label_7F27EEA0:
    ctx->pc = 0x7F27EEA0u;
    // 7F27EEA0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27EEA4:
    ctx->pc = 0x7F27EEA4u;
    // 7F27EEA4: bl      0x7F27E1C0
    {
            ctx->lr = 0x7F27EEA8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27E1C0u;
                return;
            }
            goto label_7F27E1C0;
    }

label_7F27EEA8:
    ctx->pc = 0x7F27EEA8u;
    ctx->downcount -= 8;
    // 7F27EEA8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27EEAC:
    ctx->pc = 0x7F27EEACu;
    // 7F27EEAC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F27EEB0:
    ctx->pc = 0x7F27EEB0u;
    // 7F27EEB0: stw     r0, -7408(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7408);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27EEB4:
    ctx->pc = 0x7F27EEB4u;
    // 7F27EEB4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27EEB8:
    ctx->pc = 0x7F27EEB8u;
    // 7F27EEB8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27EEBC:
    ctx->pc = 0x7F27EEBCu;
    // 7F27EEBC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F27EEC0:
    ctx->pc = 0x7F27EEC0u;
    // 7F27EEC0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27EEC4:
    ctx->pc = 0x7F27EEC4u;
    ctx->downcount -= 22;
    // 7F27EEC4: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27EEC8:
    ctx->pc = 0x7F27EEC8u;
    // 7F27EEC8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27EECC:
    ctx->pc = 0x7F27EECCu;
    // 7F27EECC: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27EED0:
    ctx->pc = 0x7F27EED0u;
    // 7F27EED0: stmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F27EED4:
    ctx->pc = 0x7F27EED4u;
    // 7F27EED4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27EED8:
    ctx->pc = 0x7F27EED8u;
    // 7F27EED8: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F27EEDC:
    ctx->pc = 0x7F27EEDCu;
    // 7F27EEDC: stw     r4, 172(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27EEE0:
    ctx->pc = 0x7F27EEE0u;
    // 7F27EEE0: addi    r4, r3, 13880
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F27EEE4:
    ctx->pc = 0x7F27EEE4u;
    // 7F27EEE4: li      r3, 109
    ctx->gpr[3] = (u32)(s32)(109);

label_7F27EEE8:
    ctx->pc = 0x7F27EEE8u;
    // 7F27EEE8: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27EEEC:
    ctx->pc = 0x7F27EEECu;
    // 7F27EEEC: lha     r29, 292(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(292);
        ctx->gpr[29] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27EEF0:
    ctx->pc = 0x7F27EEF0u;
    // 7F27EEF0: bl      0x7F3C664C
    {
            ctx->lr = 0x7F27EEF4u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F27EEF4:
    ctx->pc = 0x7F27EEF4u;
    ctx->downcount -= 2;
    // 7F27EEF4: cmplwi  r3, 0x0000
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

label_7F27EEF8:
    ctx->pc = 0x7F27EEF8u;
    // 7F27EEF8: bc    12, 2, 0x7F27EF04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27EF04;
        }
    }

label_7F27EEFC:
    ctx->pc = 0x7F27EEFCu;
    ctx->downcount -= 1;
    // 7F27EEFC: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F27EF00u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F27EF00:
    ctx->pc = 0x7F27EF00u;
    ctx->downcount -= 1;
    // 7F27EF00: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27EF04:
    ctx->pc = 0x7F27EF04u;
    ctx->downcount -= 20;
    // 7F27EF04: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F27EF08:
    ctx->pc = 0x7F27EF08u;
    // 7F27EF08: xoris   r3, r29, 0x8000
    ctx->gpr[3] = ctx->gpr[29] ^ (0x8000u << 16);

label_7F27EF0C:
    ctx->pc = 0x7F27EF0Cu;
    // 7F27EF0C: addi    r6, r4, 13880
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(13880);

label_7F27EF10:
    ctx->pc = 0x7F27EF10u;
    // 7F27EF10: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F27EF14:
    ctx->pc = 0x7F27EF14u;
    // 7F27EF14: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F27EF18:
    ctx->pc = 0x7F27EF18u;
    // 7F27EF18: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F27EF1C:
    ctx->pc = 0x7F27EF1Cu;
    // 7F27EF1C: stw     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27EF20:
    ctx->pc = 0x7F27EF20u;
    // 7F27EF20: addi    r31, r30, 48
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(48);

label_7F27EF24:
    ctx->pc = 0x7F27EF24u;
    // 7F27EF24: lfd     f1, 25344(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F27EF24u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(25344);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27EF28:
    ctx->pc = 0x7F27EF28u;
    // 7F27EF28: li      r3, 115
    ctx->gpr[3] = (u32)(s32)(115);

label_7F27EF2C:
    ctx->pc = 0x7F27EF2Cu;
    // 7F27EF2C: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27EF30:
    ctx->pc = 0x7F27EF30u;
    // 7F27EF30: sth     r29, 290(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(290);
        mem_write16(ctx, ea, (u16)ctx->gpr[29]);
    }

label_7F27EF34:
    ctx->pc = 0x7F27EF34u;
    // 7F27EF34: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27EF34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27EF38:
    ctx->pc = 0x7F27EF38u;
    // 7F27EF38: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27EF3C:
    ctx->pc = 0x7F27EF3Cu;
    // 7F27EF3C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F27EF3Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F27EF40:
    ctx->pc = 0x7F27EF40u;
    // 7F27EF40: sth     r29, 292(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(292);
        mem_write16(ctx, ea, (u16)ctx->gpr[29]);
    }

label_7F27EF44:
    ctx->pc = 0x7F27EF44u;
    // 7F27EF44: stfs     f0, 168(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F27EF44u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(168);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F27EF48:
    ctx->pc = 0x7F27EF48u;
    // 7F27EF48: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27EF4C:
    ctx->pc = 0x7F27EF4Cu;
    // 7F27EF4C: lha     r4, 290(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(290);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27EF50:
    ctx->pc = 0x7F27EF50u;
    // 7F27EF50: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F27EF54u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F27EF54:
    ctx->pc = 0x7F27EF54u;
    ctx->downcount -= 49;
    // 7F27EF54: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F27EF58:
    ctx->pc = 0x7F27EF58u;
    // 7F27EF58: li      r0, 15
    ctx->gpr[0] = (u32)(s32)(15);

label_7F27EF5C:
    ctx->pc = 0x7F27EF5Cu;
    // 7F27EF5C: addi    r5, r4, 13880
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(13880);

label_7F27EF60:
    ctx->pc = 0x7F27EF60u;
    // 7F27EF60: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27EF64:
    ctx->pc = 0x7F27EF64u;
    // 7F27EF64: sth     r3, 290(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(290);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F27EF68:
    ctx->pc = 0x7F27EF68u;
    // 7F27EF68: li      r3, 108
    ctx->gpr[3] = (u32)(s32)(108);

label_7F27EF6C:
    ctx->pc = 0x7F27EF6Cu;
    // 7F27EF6C: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27EF70:
    ctx->pc = 0x7F27EF70u;
    // 7F27EF70: lha     r4, 292(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(292);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27EF74:
    ctx->pc = 0x7F27EF74u;
    // 7F27EF74: divw   r4, r4, r0
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[4] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F27EF78:
    ctx->pc = 0x7F27EF78u;
    // 7F27EF78: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F27EF7Cu;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F27EF7C:
    ctx->pc = 0x7F27EF7Cu;
    ctx->downcount -= 18;
    // 7F27EF7C: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27EF80:
    ctx->pc = 0x7F27EF80u;
    // 7F27EF80: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F27EF84:
    ctx->pc = 0x7F27EF84u;
    // 7F27EF84: stw     r6, 176(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F27EF88:
    ctx->pc = 0x7F27EF88u;
    // 7F27EF88: addi    r7, r4, 13880
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(13880);

label_7F27EF8C:
    ctx->pc = 0x7F27EF8Cu;
    // 7F27EF8C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F27EF90:
    ctx->pc = 0x7F27EF90u;
    // 7F27EF90: li      r5, 30
    ctx->gpr[5] = (u32)(s32)(30);

label_7F27EF94:
    ctx->pc = 0x7F27EF94u;
    // 7F27EF94: lwz     r9, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F27EF98:
    ctx->pc = 0x7F27EF98u;
    // 7F27EF98: addi    r4, r3, 18528
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18528);

label_7F27EF9C:
    ctx->pc = 0x7F27EF9Cu;
    // 7F27EF9C: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F27EFA0:
    ctx->pc = 0x7F27EFA0u;
    // 7F27EFA0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27EFA4:
    ctx->pc = 0x7F27EFA4u;
    // 7F27EFA4: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F27EFA8:
    ctx->pc = 0x7F27EFA8u;
    // 7F27EFA8: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F27EFAC:
    ctx->pc = 0x7F27EFACu;
    // 7F27EFAC: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_7F27EFB0:
    ctx->pc = 0x7F27EFB0u;
    // 7F27EFB0: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F27EFB4:
    ctx->pc = 0x7F27EFB4u;
    // 7F27EFB4: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27EFB8:
    ctx->pc = 0x7F27EFB8u;
    // 7F27EFB8: lha     r8, 290(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(290);
        ctx->gpr[8] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27EFBC:
    ctx->pc = 0x7F27EFBCu;
    // 7F27EFBC: lha     r9, 292(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(292);
        ctx->gpr[9] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F27EFC0:
    ctx->pc = 0x7F27EFC0u;
    // 7F27EFC0: bl      0x7F27E314
    {
            ctx->lr = 0x7F27EFC4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27E314u;
                return;
            }
            goto label_7F27E314;
    }

label_7F27EFC4:
    ctx->pc = 0x7F27EFC4u;
    ctx->downcount -= 3;
    // 7F27EFC4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27EFC8:
    ctx->pc = 0x7F27EFC8u;
    // 7F27EFC8: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F27EFCC:
    ctx->pc = 0x7F27EFCCu;
    // 7F27EFCC: bl      0x7F27E4C4
    {
            ctx->lr = 0x7F27EFD0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27E4C4u;
                return;
            }
            goto label_7F27E4C4;
    }

label_7F27EFD0:
    ctx->pc = 0x7F27EFD0u;
    ctx->downcount -= 2;
    // 7F27EFD0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27EFD4:
    ctx->pc = 0x7F27EFD4u;
    // 7F27EFD4: bl      0x7F27E0C8
    {
            ctx->lr = 0x7F27EFD8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27E0C8u;
                return;
            }
            goto label_7F27E0C8;
    }

label_7F27EFD8:
    ctx->pc = 0x7F27EFD8u;
    ctx->downcount -= 30;
    // 7F27EFD8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27EFDC:
    ctx->pc = 0x7F27EFDCu;
    // 7F27EFDC: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F27EFE0:
    ctx->pc = 0x7F27EFE0u;
    // 7F27EFE0: addi    r6, r3, 25352
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(25352);

label_7F27EFE4:
    ctx->pc = 0x7F27EFE4u;
    // 7F27EFE4: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F27EFE8:
    ctx->pc = 0x7F27EFE8u;
    // 7F27EFE8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27EFEC:
    ctx->pc = 0x7F27EFECu;
    // 7F27EFEC: lfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F27EFECu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27EFF0:
    ctx->pc = 0x7F27EFF0u;
    // 7F27EFF0: addi    r6, r5, -7396
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-7396);

label_7F27EFF4:
    ctx->pc = 0x7F27EFF4u;
    // 7F27EFF4: addi    r5, r4, -7400
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-7400);

label_7F27EFF8:
    ctx->pc = 0x7F27EFF8u;
    // 7F27EFF8: addi    r4, r3, -7404
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-7404);

label_7F27EFFC:
    ctx->pc = 0x7F27EFFCu;
    // 7F27EFFC: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_7F27F000:
    ctx->pc = 0x7F27F000u;
    // 7F27F000: stfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F27F000u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F27F004:
    ctx->pc = 0x7F27F004u;
    // 7F27F004: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27F008:
    ctx->pc = 0x7F27F008u;
    // 7F27F008: stfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F27F008u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F27F00C:
    ctx->pc = 0x7F27F00Cu;
    // 7F27F00C: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F010:
    ctx->pc = 0x7F27F010u;
    // 7F27F010: lmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F27F014:
    ctx->pc = 0x7F27F014u;
    // 7F27F014: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27F018:
    ctx->pc = 0x7F27F018u;
    // 7F27F018: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27F01C:
    ctx->pc = 0x7F27F01Cu;
    // 7F27F01C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F27F020:
    ctx->pc = 0x7F27F020u;
    // 7F27F020: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27F024:
    ctx->pc = 0x7F27F024u;
    ctx->downcount -= 20;
    // 7F27F024: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27F028:
    ctx->pc = 0x7F27F028u;
    // 7F27F028: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27F02C:
    ctx->pc = 0x7F27F02Cu;
    // 7F27F02C: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F27F030:
    ctx->pc = 0x7F27F030u;
    // 7F27F030: li      r5, 192
    ctx->gpr[5] = (u32)(s32)(192);

label_7F27F034:
    ctx->pc = 0x7F27F034u;
    // 7F27F034: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F038:
    ctx->pc = 0x7F27F038u;
    // 7F27F038: li      r6, 40
    ctx->gpr[6] = (u32)(s32)(40);

label_7F27F03C:
    ctx->pc = 0x7F27F03Cu;
    // 7F27F03C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F27F040:
    ctx->pc = 0x7F27F040u;
    // 7F27F040: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27F044:
    ctx->pc = 0x7F27F044u;
    // 7F27F044: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F27F048:
    ctx->pc = 0x7F27F048u;
    // 7F27F048: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F27F04Cu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F27F04C:
    ctx->pc = 0x7F27F04Cu;
    ctx->downcount -= 2;
    // 7F27F04C: or.   r31, r3, r3
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

label_7F27F050:
    ctx->pc = 0x7F27F050u;
    // 7F27F050: bc    12, 2, 0x7F27F0B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27F0B4;
        }
    }

label_7F27F054:
    ctx->pc = 0x7F27F054u;
    ctx->downcount -= 5;
    // 7F27F054: lis     r4, 32552
    ctx->gpr[4] = ((u32)(s32)(32552) << 16);

label_7F27F058:
    ctx->pc = 0x7F27F058u;
    // 7F27F058: lis     r5, 32552
    ctx->gpr[5] = ((u32)(s32)(32552) << 16);

label_7F27F05C:
    ctx->pc = 0x7F27F05Cu;
    // 7F27F05C: addi    r4, r4, -6188
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6188);

label_7F27F060:
    ctx->pc = 0x7F27F060u;
    // 7F27F060: addi    r5, r5, -4460
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-4460);

label_7F27F064:
    ctx->pc = 0x7F27F064u;
    // 7F27F064: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F27F068u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F27F068:
    ctx->pc = 0x7F27F068u;
    ctx->downcount -= 13;
    // 7F27F068: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27F06C:
    ctx->pc = 0x7F27F06Cu;
    // 7F27F06C: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F27F070:
    ctx->pc = 0x7F27F070u;
    // 7F27F070: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F27F074:
    ctx->pc = 0x7F27F074u;
    // 7F27F074: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27F078:
    ctx->pc = 0x7F27F078u;
    // 7F27F078: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F27F07C:
    ctx->pc = 0x7F27F07Cu;
    // 7F27F07C: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F27F080:
    ctx->pc = 0x7F27F080u;
    // 7F27F080: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F27F084:
    ctx->pc = 0x7F27F084u;
    // 7F27F084: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F27F088:
    ctx->pc = 0x7F27F088u;
    // 7F27F088: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F27F08C:
    ctx->pc = 0x7F27F08Cu;
    // 7F27F08C: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F27F090:
    ctx->pc = 0x7F27F090u;
    // 7F27F090: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F27F094:
    ctx->pc = 0x7F27F094u;
    // 7F27F094: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F098:
    ctx->pc = 0x7F27F098u;
    // 7F27F098: bl      0x7F27EEC4
    {
            ctx->lr = 0x7F27F09Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27EEC4u;
                return;
            }
            goto label_7F27EEC4;
    }

label_7F27F09C:
    ctx->pc = 0x7F27F09Cu;
    ctx->downcount -= 2;
    // 7F27F09C: cmpwi   r3, 0
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

label_7F27F0A0:
    ctx->pc = 0x7F27F0A0u;
    // 7F27F0A0: bc    4, 0, 0x7F27F0B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27F0B4;
        }
    }

label_7F27F0A4:
    ctx->pc = 0x7F27F0A4u;
    ctx->downcount -= 2;
    // 7F27F0A4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27F0A8:
    ctx->pc = 0x7F27F0A8u;
    // 7F27F0A8: bl      0x7F3C8210
    {
            ctx->lr = 0x7F27F0ACu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F27F0AC:
    ctx->pc = 0x7F27F0ACu;
    ctx->downcount -= 2;
    // 7F27F0AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27F0B0:
    ctx->pc = 0x7F27F0B0u;
    // 7F27F0B0: b       0x7F27F0C0
    {
            goto label_7F27F0C0;
    }

label_7F27F0B4:
    ctx->pc = 0x7F27F0B4u;
    ctx->downcount -= 3;
    // 7F27F0B4: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F27F0B8:
    ctx->pc = 0x7F27F0B8u;
    // 7F27F0B8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27F0BC:
    ctx->pc = 0x7F27F0BCu;
    // 7F27F0BC: stw     r31, -7408(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-7408);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F27F0C0:
    ctx->pc = 0x7F27F0C0u;
    ctx->downcount -= 16;
    // 7F27F0C0: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F27F0C4:
    ctx->pc = 0x7F27F0C4u;
    // 7F27F0C4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27F0C8:
    ctx->pc = 0x7F27F0C8u;
    // 7F27F0C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27F0CC:
    ctx->pc = 0x7F27F0CCu;
    // 7F27F0CC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F27F0D0:
    ctx->pc = 0x7F27F0D0u;
    // 7F27F0D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27F0D4:
    ctx->pc = 0x7F27F0D4u;
    ctx->downcount -= 35;
    // 7F27F0D4: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27F0D8:
    ctx->pc = 0x7F27F0D8u;
    // 7F27F0D8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27F0DC:
    ctx->pc = 0x7F27F0DCu;
    // 7F27F0DC: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F0E0:
    ctx->pc = 0x7F27F0E0u;
    // 7F27F0E0: stmw     r26, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F27F0E4:
    ctx->pc = 0x7F27F0E4u;
    // 7F27F0E4: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F27F0E8:
    ctx->pc = 0x7F27F0E8u;
    // 7F27F0E8: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F27F0EC:
    ctx->pc = 0x7F27F0ECu;
    // 7F27F0EC: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27F0F0:
    ctx->pc = 0x7F27F0F0u;
    // 7F27F0F0: addi    r30, r4, 12816
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(12816);

label_7F27F0F4:
    ctx->pc = 0x7F27F0F4u;
    // 7F27F0F4: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F27F0F8:
    ctx->pc = 0x7F27F0F8u;
    // 7F27F0F8: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F27F0FC:
    ctx->pc = 0x7F27F0FCu;
    // 7F27F0FC: lfs     f0, 48(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F27F0FCu)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27F100:
    ctx->pc = 0x7F27F100u;
    // 7F27F100: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27F100u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F27F104:
    ctx->pc = 0x7F27F104u;
    // 7F27F104: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F104u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F27F108:
    ctx->pc = 0x7F27F108u;
    // 7F27F108: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27F10C:
    ctx->pc = 0x7F27F10Cu;
    // 7F27F10C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F110:
    ctx->pc = 0x7F27F110u;
    // 7F27F110: lfs     f0, 52(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F27F110u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27F114:
    ctx->pc = 0x7F27F114u;
    // 7F27F114: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27F114u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F27F118:
    ctx->pc = 0x7F27F118u;
    // 7F27F118: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F118u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F27F11C:
    ctx->pc = 0x7F27F11Cu;
    // 7F27F11C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27F120:
    ctx->pc = 0x7F27F120u;
    // 7F27F120: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F124:
    ctx->pc = 0x7F27F124u;
    // 7F27F124: lfs     f0, 56(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F27F124u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27F128:
    ctx->pc = 0x7F27F128u;
    // 7F27F128: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27F128u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F27F12C:
    ctx->pc = 0x7F27F12Cu;
    // 7F27F12C: stfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F12Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F27F130:
    ctx->pc = 0x7F27F130u;
    // 7F27F130: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27F134:
    ctx->pc = 0x7F27F134u;
    // 7F27F134: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F138:
    ctx->downcount -= 5;
    // 7F27F138: addi    r29, r31, 48
    ctx->gpr[29] = ctx->gpr[31] + (u32)(s32)(48);

label_7F27F13C:
    // 7F27F13C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F27F140:
    ctx->pc = 0x7F27F140u;
    // 7F27F140: lwzx    r3, r26, r29
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[29];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27F144:
    // 7F27F144: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F27F148:
    // 7F27F148: bl      0x7F10BF44
    {
            ctx->lr = 0x7F27F14Cu;
            ctx->pc = 0x7F10BF44u;
            return;
    }

label_7F27F14C:
    ctx->pc = 0x7F27F14Cu;
    ctx->downcount -= 3;
    // 7F27F14C: lwzx    r3, r26, r29
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[29];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27F150:
    // 7F27F150: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F27F154:
    // 7F27F154: bl      0x7F10C154
    {
            ctx->lr = 0x7F27F158u;
            ctx->pc = 0x7F10C154u;
            return;
    }

label_7F27F158:
    ctx->downcount -= 4;
    // 7F27F158: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F27F15C:
    // 7F27F15C: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F27F160:
    // 7F27F160: cmpwi   r28, 4
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

label_7F27F164:
    // 7F27F164: bc    12, 0, 0x7F27F138
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27F138u;
                return;
            }
            goto label_7F27F138;
        }
    }

label_7F27F168:
    ctx->pc = 0x7F27F168u;
    ctx->downcount -= 4;
    // 7F27F168: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F27F16C:
    ctx->pc = 0x7F27F16Cu;
    // 7F27F16C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F27F170:
    ctx->pc = 0x7F27F170u;
    // 7F27F170: addi    r30, r3, 12816
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(12816);

label_7F27F174:
    ctx->pc = 0x7F27F174u;
    // 7F27F174: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F27F178:
    ctx->downcount -= 5;
    // 7F27F178: addi    r29, r31, 64
    ctx->gpr[29] = ctx->gpr[31] + (u32)(s32)(64);

label_7F27F17C:
    // 7F27F17C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F27F180:
    ctx->pc = 0x7F27F180u;
    // 7F27F180: lwzx    r3, r26, r29
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[29];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27F184:
    // 7F27F184: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F27F188:
    // 7F27F188: bl      0x7F10CF70
    {
            ctx->lr = 0x7F27F18Cu;
            ctx->pc = 0x7F10CF70u;
            return;
    }

label_7F27F18C:
    ctx->pc = 0x7F27F18Cu;
    ctx->downcount -= 3;
    // 7F27F18C: lwzx    r3, r26, r29
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[29];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27F190:
    // 7F27F190: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F27F194:
    // 7F27F194: bl      0x7F10D198
    {
            ctx->lr = 0x7F27F198u;
            ctx->pc = 0x7F10D198u;
            return;
    }

label_7F27F198:
    ctx->downcount -= 4;
    // 7F27F198: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F27F19C:
    // 7F27F19C: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F27F1A0:
    // 7F27F1A0: cmpwi   r28, 2
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

label_7F27F1A4:
    // 7F27F1A4: bc    12, 0, 0x7F27F178
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27F178u;
                return;
            }
            goto label_7F27F178;
        }
    }

label_7F27F1A8:
    ctx->pc = 0x7F27F1A8u;
    ctx->downcount -= 16;
    // 7F27F1A8: lmw     r26, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F27F1AC:
    ctx->pc = 0x7F27F1ACu;
    // 7F27F1AC: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27F1B0:
    ctx->pc = 0x7F27F1B0u;
    // 7F27F1B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27F1B4:
    ctx->pc = 0x7F27F1B4u;
    // 7F27F1B4: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F27F1B8:
    ctx->pc = 0x7F27F1B8u;
    // 7F27F1B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27F1BC:
    ctx->pc = 0x7F27F1BCu;
    ctx->downcount -= 1;
    // 7F27F1BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27F1C0:
    ctx->pc = 0x7F27F1C0u;
    ctx->downcount -= 17;
    // 7F27F1C0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27F1C4:
    ctx->pc = 0x7F27F1C4u;
    // 7F27F1C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27F1C8:
    ctx->pc = 0x7F27F1C8u;
    // 7F27F1C8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F1CC:
    ctx->pc = 0x7F27F1CCu;
    // 7F27F1CC: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F27F1D0:
    ctx->pc = 0x7F27F1D0u;
    // 7F27F1D0: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27F1D4:
    ctx->pc = 0x7F27F1D4u;
    // 7F27F1D4: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F27F1D8:
    ctx->pc = 0x7F27F1D8u;
    // 7F27F1D8: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F27F1DC:
    ctx->downcount -= 4;
    // 7F27F1DC: addi    r0, r31, 48
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(48);

label_7F27F1E0:
    ctx->pc = 0x7F27F1E0u;
    // 7F27F1E0: lwzx    r3, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27F1E4:
    // 7F27F1E4: cmplwi  r3, 0x0000
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

label_7F27F1E8:
    // 7F27F1E8: bc    12, 2, 0x7F27F1F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27F1F0;
        }
    }

label_7F27F1EC:
    ctx->downcount -= 1;
    // 7F27F1EC: bl      0x7F10C3F0
    {
            ctx->lr = 0x7F27F1F0u;
            ctx->pc = 0x7F10C3F0u;
            return;
    }

label_7F27F1F0:
    ctx->downcount -= 4;
    // 7F27F1F0: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F27F1F4:
    // 7F27F1F4: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F27F1F8:
    // 7F27F1F8: cmpwi   r30, 4
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F27F1FC:
    // 7F27F1FC: bc    12, 0, 0x7F27F1DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27F1DCu;
                return;
            }
            goto label_7F27F1DC;
        }
    }

label_7F27F200:
    ctx->pc = 0x7F27F200u;
    ctx->downcount -= 2;
    // 7F27F200: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F27F204:
    ctx->pc = 0x7F27F204u;
    // 7F27F204: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F27F208:
    ctx->downcount -= 4;
    // 7F27F208: addi    r0, r31, 64
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(64);

label_7F27F20C:
    ctx->pc = 0x7F27F20Cu;
    // 7F27F20C: lwzx    r3, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27F210:
    // 7F27F210: cmplwi  r3, 0x0000
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

label_7F27F214:
    // 7F27F214: bc    12, 2, 0x7F27F21C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27F21C;
        }
    }

label_7F27F218:
    ctx->downcount -= 1;
    // 7F27F218: bl      0x7F10D51C
    {
            ctx->lr = 0x7F27F21Cu;
            ctx->pc = 0x7F10D51Cu;
            return;
    }

label_7F27F21C:
    ctx->downcount -= 4;
    // 7F27F21C: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F27F220:
    // 7F27F220: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F27F224:
    // 7F27F224: cmpwi   r30, 2
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

label_7F27F228:
    // 7F27F228: bc    12, 0, 0x7F27F208
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27F208u;
                return;
            }
            goto label_7F27F208;
        }
    }

label_7F27F22C:
    ctx->pc = 0x7F27F22Cu;
    ctx->downcount -= 16;
    // 7F27F22C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F27F230:
    ctx->pc = 0x7F27F230u;
    // 7F27F230: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27F234:
    ctx->pc = 0x7F27F234u;
    // 7F27F234: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27F238:
    ctx->pc = 0x7F27F238u;
    // 7F27F238: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F27F23C:
    ctx->pc = 0x7F27F23Cu;
    // 7F27F23C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27F240:
    ctx->pc = 0x7F27F240u;
    ctx->downcount -= 23;
    // 7F27F240: stwu     r1, -256(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-256);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27F244:
    ctx->pc = 0x7F27F244u;
    // 7F27F244: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27F248:
    ctx->pc = 0x7F27F248u;
    // 7F27F248: stw     r0, 260(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(260);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F24C:
    ctx->pc = 0x7F27F24Cu;
    // 7F27F24C: rlwinm. r0, r6, 0, 29, 29
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

label_7F27F250:
    ctx->pc = 0x7F27F250u;
    // 7F27F250: stmw     r22, 216(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        for (u32 r = 22; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F27F254:
    ctx->pc = 0x7F27F254u;
    // 7F27F254: or   r28, r6, r6
    {
        ctx->gpr[28] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F27F258:
    ctx->pc = 0x7F27F258u;
    // 7F27F258: or   r27, r5, r5
    {
        ctx->gpr[27] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F27F25C:
    ctx->pc = 0x7F27F25Cu;
    // 7F27F25C: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27F260:
    ctx->pc = 0x7F27F260u;
    // 7F27F260: or   r26, r4, r4
    {
        ctx->gpr[26] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F27F264:
    ctx->pc = 0x7F27F264u;
    // 7F27F264: or   r29, r7, r7
    {
        ctx->gpr[29] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F27F268:
    ctx->pc = 0x7F27F268u;
    // 7F27F268: or   r30, r8, r8
    {
        ctx->gpr[30] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F27F26C:
    ctx->pc = 0x7F27F26Cu;
    // 7F27F26C: lwz     r6, 72(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F27F270:
    ctx->pc = 0x7F27F270u;
    // 7F27F270: bc    12, 2, 0x7F27F33C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27F33C;
        }
    }

label_7F27F274:
    ctx->pc = 0x7F27F274u;
    ctx->downcount -= 50;
    // 7F27F274: lfs     f0, 700(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F27F274u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(700);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27F278:
    ctx->pc = 0x7F27F278u;
    // 7F27F278: rlwinm r28, r28, 0, 30, 28
    {
        ctx->gpr[28] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0xFFFFFFFBu;
    }

label_7F27F27C:
    ctx->pc = 0x7F27F27Cu;
    // 7F27F27C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27F27Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F27F280:
    ctx->pc = 0x7F27F280u;
    // 7F27F280: stfd     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F280u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F27F284:
    ctx->pc = 0x7F27F284u;
    // 7F27F284: lwz     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27F288:
    ctx->pc = 0x7F27F288u;
    // 7F27F288: stfd     f0, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F288u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F27F28C:
    ctx->pc = 0x7F27F28Cu;
    // 7F27F28C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F290:
    ctx->pc = 0x7F27F290u;
    // 7F27F290: lwz     r3, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27F294:
    ctx->pc = 0x7F27F294u;
    // 7F27F294: lfs     f0, 704(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F27F294u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(704);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27F298:
    ctx->pc = 0x7F27F298u;
    // 7F27F298: fctiwz    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27F298u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F27F29C:
    ctx->pc = 0x7F27F29Cu;
    // 7F27F29C: stfd     f1, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F29Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F27F2A0:
    ctx->pc = 0x7F27F2A0u;
    // 7F27F2A0: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27F2A4:
    ctx->pc = 0x7F27F2A4u;
    // 7F27F2A4: stfd     f1, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F2A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F27F2A8:
    ctx->pc = 0x7F27F2A8u;
    // 7F27F2A8: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F2AC:
    ctx->pc = 0x7F27F2ACu;
    // 7F27F2AC: lwz     r5, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F27F2B0:
    ctx->pc = 0x7F27F2B0u;
    // 7F27F2B0: lfs     f0, 708(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F27F2B0u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(708);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27F2B4:
    ctx->pc = 0x7F27F2B4u;
    // 7F27F2B4: stfd     f1, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F2B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F27F2B8:
    ctx->pc = 0x7F27F2B8u;
    // 7F27F2B8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27F2B8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F27F2BC:
    ctx->pc = 0x7F27F2BCu;
    // 7F27F2BC: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27F2C0:
    ctx->pc = 0x7F27F2C0u;
    // 7F27F2C0: stfd     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F2C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F27F2C4:
    ctx->pc = 0x7F27F2C4u;
    // 7F27F2C4: lwz     r4, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27F2C8:
    ctx->pc = 0x7F27F2C8u;
    // 7F27F2C8: stfd     f0, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F2C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F27F2CC:
    ctx->pc = 0x7F27F2CCu;
    // 7F27F2CC: stw     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27F2D0:
    ctx->pc = 0x7F27F2D0u;
    // 7F27F2D0: lwz     r4, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27F2D4:
    ctx->pc = 0x7F27F2D4u;
    // 7F27F2D4: lfs     f0, 716(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F27F2D4u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(716);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27F2D8:
    ctx->pc = 0x7F27F2D8u;
    // 7F27F2D8: fctiwz    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27F2D8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F27F2DC:
    ctx->pc = 0x7F27F2DCu;
    // 7F27F2DC: stw     r5, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F27F2E0:
    ctx->pc = 0x7F27F2E0u;
    // 7F27F2E0: stw     r4, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27F2E4:
    ctx->pc = 0x7F27F2E4u;
    // 7F27F2E4: stfd     f1, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F2E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F27F2E8:
    ctx->pc = 0x7F27F2E8u;
    // 7F27F2E8: lwz     r4, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27F2EC:
    ctx->pc = 0x7F27F2ECu;
    // 7F27F2EC: stw     r3, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27F2F0:
    ctx->pc = 0x7F27F2F0u;
    // 7F27F2F0: stw     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27F2F4:
    ctx->pc = 0x7F27F2F4u;
    // 7F27F2F4: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F2F8:
    ctx->pc = 0x7F27F2F8u;
    // 7F27F2F8: lfs     f0, 724(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F27F2F8u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(724);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27F2FC:
    ctx->pc = 0x7F27F2FCu;
    // 7F27F2FC: stfd     f1, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F2FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F27F300:
    ctx->pc = 0x7F27F300u;
    // 7F27F300: fctiwz    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27F300u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F27F304:
    ctx->pc = 0x7F27F304u;
    // 7F27F304: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27F308:
    ctx->pc = 0x7F27F308u;
    // 7F27F308: stfd     f1, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F308u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F27F30C:
    ctx->pc = 0x7F27F30Cu;
    // 7F27F30C: lwz     r3, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27F310:
    ctx->pc = 0x7F27F310u;
    // 7F27F310: stw     r0, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F314:
    ctx->pc = 0x7F27F314u;
    // 7F27F314: stw     r3, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27F318:
    ctx->pc = 0x7F27F318u;
    // 7F27F318: lfs     f0, 720(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F27F318u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(720);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27F31C:
    ctx->pc = 0x7F27F31Cu;
    // 7F27F31C: stfd     f1, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F31Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F27F320:
    ctx->pc = 0x7F27F320u;
    // 7F27F320: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27F320u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F27F324:
    ctx->pc = 0x7F27F324u;
    // 7F27F324: lwz     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27F328:
    ctx->pc = 0x7F27F328u;
    // 7F27F328: stfd     f0, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F328u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F27F32C:
    ctx->pc = 0x7F27F32Cu;
    // 7F27F32C: lwz     r3, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27F330:
    ctx->pc = 0x7F27F330u;
    // 7F27F330: stw     r0, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F334:
    ctx->pc = 0x7F27F334u;
    // 7F27F334: stw     r3, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27F338:
    ctx->pc = 0x7F27F338u;
    // 7F27F338: b       0x7F27F3FC
    {
            goto label_7F27F3FC;
    }

label_7F27F33C:
    ctx->pc = 0x7F27F33Cu;
    ctx->downcount -= 48;
    // 7F27F33C: lfs     f0, 24(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F27F33Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27F340:
    ctx->pc = 0x7F27F340u;
    // 7F27F340: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27F340u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F27F344:
    ctx->pc = 0x7F27F344u;
    // 7F27F344: stfd     f0, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F344u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F27F348:
    ctx->pc = 0x7F27F348u;
    // 7F27F348: lwz     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27F34C:
    ctx->pc = 0x7F27F34Cu;
    // 7F27F34C: stfd     f0, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F34Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F27F350:
    ctx->pc = 0x7F27F350u;
    // 7F27F350: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F354:
    ctx->pc = 0x7F27F354u;
    // 7F27F354: lwz     r3, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27F358:
    ctx->pc = 0x7F27F358u;
    // 7F27F358: lfs     f0, 28(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F27F358u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27F35C:
    ctx->pc = 0x7F27F35Cu;
    // 7F27F35C: fctiwz    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27F35Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F27F360:
    ctx->pc = 0x7F27F360u;
    // 7F27F360: stfd     f1, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F360u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F27F364:
    ctx->pc = 0x7F27F364u;
    // 7F27F364: lwz     r0, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27F368:
    ctx->pc = 0x7F27F368u;
    // 7F27F368: stfd     f1, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F368u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F27F36C:
    ctx->pc = 0x7F27F36Cu;
    // 7F27F36C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F370:
    ctx->pc = 0x7F27F370u;
    // 7F27F370: lwz     r5, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F27F374:
    ctx->pc = 0x7F27F374u;
    // 7F27F374: lfs     f0, 32(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F27F374u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27F378:
    ctx->pc = 0x7F27F378u;
    // 7F27F378: stfd     f1, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F378u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F27F37C:
    ctx->pc = 0x7F27F37Cu;
    // 7F27F37C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27F37Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F27F380:
    ctx->pc = 0x7F27F380u;
    // 7F27F380: lwz     r0, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27F384:
    ctx->pc = 0x7F27F384u;
    // 7F27F384: stfd     f0, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F384u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F27F388:
    ctx->pc = 0x7F27F388u;
    // 7F27F388: lwz     r4, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27F38C:
    ctx->pc = 0x7F27F38Cu;
    // 7F27F38C: stfd     f0, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F38Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F27F390:
    ctx->pc = 0x7F27F390u;
    // 7F27F390: stw     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27F394:
    ctx->pc = 0x7F27F394u;
    // 7F27F394: lwz     r4, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27F398:
    ctx->pc = 0x7F27F398u;
    // 7F27F398: lfs     f0, 36(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F27F398u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27F39C:
    ctx->pc = 0x7F27F39Cu;
    // 7F27F39C: fctiwz    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27F39Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F27F3A0:
    ctx->pc = 0x7F27F3A0u;
    // 7F27F3A0: stw     r5, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F27F3A4:
    ctx->pc = 0x7F27F3A4u;
    // 7F27F3A4: stw     r4, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27F3A8:
    ctx->pc = 0x7F27F3A8u;
    // 7F27F3A8: stfd     f1, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F3A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F27F3AC:
    ctx->pc = 0x7F27F3ACu;
    // 7F27F3AC: lwz     r4, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27F3B0:
    ctx->pc = 0x7F27F3B0u;
    // 7F27F3B0: stw     r3, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27F3B4:
    ctx->pc = 0x7F27F3B4u;
    // 7F27F3B4: stw     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27F3B8:
    ctx->pc = 0x7F27F3B8u;
    // 7F27F3B8: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F3BC:
    ctx->pc = 0x7F27F3BCu;
    // 7F27F3BC: lfs     f0, 44(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F27F3BCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27F3C0:
    ctx->pc = 0x7F27F3C0u;
    // 7F27F3C0: stfd     f1, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F3C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F27F3C4:
    ctx->pc = 0x7F27F3C4u;
    // 7F27F3C4: fctiwz    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27F3C4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F27F3C8:
    ctx->pc = 0x7F27F3C8u;
    // 7F27F3C8: lwz     r0, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27F3CC:
    ctx->pc = 0x7F27F3CCu;
    // 7F27F3CC: stfd     f1, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F3CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F27F3D0:
    ctx->pc = 0x7F27F3D0u;
    // 7F27F3D0: lwz     r3, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27F3D4:
    ctx->pc = 0x7F27F3D4u;
    // 7F27F3D4: stw     r0, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F3D8:
    ctx->pc = 0x7F27F3D8u;
    // 7F27F3D8: stw     r3, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27F3DC:
    ctx->pc = 0x7F27F3DCu;
    // 7F27F3DC: lfs     f0, 40(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F27F3DCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27F3E0:
    ctx->pc = 0x7F27F3E0u;
    // 7F27F3E0: stfd     f1, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F3E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F27F3E4:
    ctx->pc = 0x7F27F3E4u;
    // 7F27F3E4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27F3E4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F27F3E8:
    ctx->pc = 0x7F27F3E8u;
    // 7F27F3E8: lwz     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27F3EC:
    ctx->pc = 0x7F27F3ECu;
    // 7F27F3EC: stfd     f0, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F3ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F27F3F0:
    ctx->pc = 0x7F27F3F0u;
    // 7F27F3F0: lwz     r3, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27F3F4:
    ctx->pc = 0x7F27F3F4u;
    // 7F27F3F4: stw     r0, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F3F8:
    ctx->pc = 0x7F27F3F8u;
    // 7F27F3F8: stw     r3, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27F3FC:
    ctx->pc = 0x7F27F3FCu;
    ctx->downcount -= 2;
    // 7F27F3FC: cmplwi  r9, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[9]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F27F400:
    ctx->pc = 0x7F27F400u;
    // 7F27F400: bc    12, 2, 0x7F27F5AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27F5AC;
        }
    }

label_7F27F404:
    ctx->pc = 0x7F27F404u;
    ctx->downcount -= 106;
    // 7F27F404: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27F408:
    ctx->pc = 0x7F27F408u;
    // 7F27F408: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F27F40C:
    ctx->pc = 0x7F27F40Cu;
    // 7F27F40C: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F27F410:
    ctx->pc = 0x7F27F410u;
    // 7F27F410: lwz     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F27F414:
    ctx->pc = 0x7F27F414u;
    // 7F27F414: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F27F418:
    ctx->pc = 0x7F27F418u;
    // 7F27F418: lwz     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27F41C:
    ctx->pc = 0x7F27F41Cu;
    // 7F27F41C: stw     r3, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27F420:
    ctx->pc = 0x7F27F420u;
    // 7F27F420: addi    r8, r6, 25384
    ctx->gpr[8] = ctx->gpr[6] + (u32)(s32)(25384);

label_7F27F424:
    ctx->pc = 0x7F27F424u;
    // 7F27F424: lwz     r3, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27F428:
    ctx->pc = 0x7F27F428u;
    // 7F27F428: xoris   r7, r5, 0x8000
    ctx->gpr[7] = ctx->gpr[5] ^ (0x8000u << 16);

label_7F27F42C:
    ctx->pc = 0x7F27F42Cu;
    // 7F27F42C: stw     r0, 160(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F430:
    ctx->pc = 0x7F27F430u;
    // 7F27F430: xoris   r6, r4, 0x8000
    ctx->gpr[6] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F27F434:
    ctx->pc = 0x7F27F434u;
    // 7F27F434: lfd     f0, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F27F434u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27F438:
    ctx->pc = 0x7F27F438u;
    // 7F27F438: xoris   r5, r3, 0x8000
    ctx->gpr[5] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F27F43C:
    ctx->pc = 0x7F27F43Cu;
    // 7F27F43C: lfd     f1, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F43Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27F440:
    ctx->pc = 0x7F27F440u;
    // 7F27F440: lfs     f6, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F27F440u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_7F27F444:
    ctx->pc = 0x7F27F444u;
    // 7F27F444: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27F444u)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_7F27F448:
    ctx->pc = 0x7F27F448u;
    // 7F27F448: lwz     r4, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27F44C:
    ctx->pc = 0x7F27F44Cu;
    // 7F27F44C: lwz     r3, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27F450:
    ctx->pc = 0x7F27F450u;
    // 7F27F450: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F27F454:
    ctx->pc = 0x7F27F454u;
    // 7F27F454: stw     r7, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F27F458:
    ctx->pc = 0x7F27F458u;
    // 7F27F458: fmuls   f1, f1, f6
    if (!ppc_fp_available_inline(ctx, 0x7F27F458u)) return;
    ppc_fmuls(ctx, 1, 1, 6);

label_7F27F45C:
    ctx->pc = 0x7F27F45Cu;
    // 7F27F45C: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F27F460:
    ctx->pc = 0x7F27F460u;
    // 7F27F460: stw     r0, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F464:
    ctx->pc = 0x7F27F464u;
    // 7F27F464: fctiwz    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F27F464u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[3] = dolrecomp_f64_from_bits(result); }

label_7F27F468:
    ctx->pc = 0x7F27F468u;
    // 7F27F468: lfd     f1, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F468u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27F46C:
    ctx->pc = 0x7F27F46Cu;
    // 7F27F46C: stw     r6, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F27F470:
    ctx->pc = 0x7F27F470u;
    // 7F27F470: fsubs   f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27F470u)) return;
    ppc_fsubs(ctx, 2, 1, 0);

label_7F27F474:
    ctx->pc = 0x7F27F474u;
    // 7F27F474: stfd     f3, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F474u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[3]));
    }

label_7F27F478:
    ctx->pc = 0x7F27F478u;
    // 7F27F478: stw     r0, 128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F47C:
    ctx->pc = 0x7F27F47Cu;
    // 7F27F47C: lwz     r6, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F27F480:
    ctx->pc = 0x7F27F480u;
    // 7F27F480: lfd     f1, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F480u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27F484:
    ctx->pc = 0x7F27F484u;
    // 7F27F484: stw     r6, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F27F488:
    ctx->pc = 0x7F27F488u;
    // 7F27F488: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27F488u)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_7F27F48C:
    ctx->pc = 0x7F27F48Cu;
    // 7F27F48C: lfs     f5, 8(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F27F48Cu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F27F490:
    ctx->pc = 0x7F27F490u;
    // 7F27F490: stw     r5, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F27F494:
    ctx->pc = 0x7F27F494u;
    // 7F27F494: fmuls   f3, f2, f5
    if (!ppc_fp_available_inline(ctx, 0x7F27F494u)) return;
    ppc_fmuls(ctx, 3, 2, 5);

label_7F27F498:
    ctx->pc = 0x7F27F498u;
    // 7F27F498: stw     r0, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F49C:
    ctx->pc = 0x7F27F49Cu;
    // 7F27F49C: fmuls   f2, f1, f6
    if (!ppc_fp_available_inline(ctx, 0x7F27F49Cu)) return;
    ppc_fmuls(ctx, 2, 1, 6);

label_7F27F4A0:
    ctx->pc = 0x7F27F4A0u;
    // 7F27F4A0: lfd     f1, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F4A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27F4A4:
    ctx->pc = 0x7F27F4A4u;
    // 7F27F4A4: fctiwz    f4, f3
    if (!ppc_fp_available_inline(ctx, 0x7F27F4A4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[3], true, &result)) ctx->fpr[4] = dolrecomp_f64_from_bits(result); }

label_7F27F4A8:
    ctx->pc = 0x7F27F4A8u;
    // 7F27F4A8: fctiwz    f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F27F4A8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[2], true, &result)) ctx->fpr[3] = dolrecomp_f64_from_bits(result); }

label_7F27F4AC:
    ctx->pc = 0x7F27F4ACu;
    // 7F27F4AC: stw     r4, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27F4B0:
    ctx->pc = 0x7F27F4B0u;
    // 7F27F4B0: fsubs   f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27F4B0u)) return;
    ppc_fsubs(ctx, 2, 1, 0);

label_7F27F4B4:
    ctx->pc = 0x7F27F4B4u;
    // 7F27F4B4: stw     r0, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F4B8:
    ctx->pc = 0x7F27F4B8u;
    // 7F27F4B8: lfd     f1, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F4B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27F4BC:
    ctx->pc = 0x7F27F4BCu;
    // 7F27F4BC: fmuls   f2, f2, f5
    if (!ppc_fp_available_inline(ctx, 0x7F27F4BCu)) return;
    ppc_fmuls(ctx, 2, 2, 5);

label_7F27F4C0:
    ctx->pc = 0x7F27F4C0u;
    // 7F27F4C0: stfd     f4, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F4C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[4]));
    }

label_7F27F4C4:
    ctx->pc = 0x7F27F4C4u;
    // 7F27F4C4: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27F4C4u)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_7F27F4C8:
    ctx->pc = 0x7F27F4C8u;
    // 7F27F4C8: fctiwz    f2, f2
    if (!ppc_fp_available_inline(ctx, 0x7F27F4C8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[2], true, &result)) ctx->fpr[2] = dolrecomp_f64_from_bits(result); }

label_7F27F4CC:
    ctx->pc = 0x7F27F4CCu;
    // 7F27F4CC: stfd     f3, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F4CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[3]));
    }

label_7F27F4D0:
    ctx->pc = 0x7F27F4D0u;
    // 7F27F4D0: lwz     r6, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F27F4D4:
    ctx->pc = 0x7F27F4D4u;
    // 7F27F4D4: fmuls   f1, f1, f6
    if (!ppc_fp_available_inline(ctx, 0x7F27F4D4u)) return;
    ppc_fmuls(ctx, 1, 1, 6);

label_7F27F4D8:
    ctx->pc = 0x7F27F4D8u;
    // 7F27F4D8: lwz     r5, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F27F4DC:
    ctx->pc = 0x7F27F4DCu;
    // 7F27F4DC: stfd     f2, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F4DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[2]));
    }

label_7F27F4E0:
    ctx->pc = 0x7F27F4E0u;
    // 7F27F4E0: fctiwz    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F27F4E0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[2] = dolrecomp_f64_from_bits(result); }

label_7F27F4E4:
    ctx->pc = 0x7F27F4E4u;
    // 7F27F4E4: lwz     r4, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27F4E8:
    ctx->pc = 0x7F27F4E8u;
    // 7F27F4E8: stw     r3, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27F4EC:
    ctx->pc = 0x7F27F4ECu;
    // 7F27F4EC: stw     r0, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F4F0:
    ctx->pc = 0x7F27F4F0u;
    // 7F27F4F0: lfd     f1, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F4F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27F4F4:
    ctx->pc = 0x7F27F4F4u;
    // 7F27F4F4: stfd     f2, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F4F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[2]));
    }

label_7F27F4F8:
    ctx->pc = 0x7F27F4F8u;
    // 7F27F4F8: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27F4F8u)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_7F27F4FC:
    ctx->pc = 0x7F27F4FCu;
    // 7F27F4FC: lwz     r3, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27F500:
    ctx->pc = 0x7F27F500u;
    // 7F27F500: stw     r6, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F27F504:
    ctx->pc = 0x7F27F504u;
    // 7F27F504: fmuls   f1, f1, f5
    if (!ppc_fp_available_inline(ctx, 0x7F27F504u)) return;
    ppc_fmuls(ctx, 1, 1, 5);

label_7F27F508:
    ctx->pc = 0x7F27F508u;
    // 7F27F508: stw     r5, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F27F50C:
    ctx->pc = 0x7F27F50Cu;
    // 7F27F50C: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F27F50Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F27F510:
    ctx->pc = 0x7F27F510u;
    // 7F27F510: stw     r4, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27F514:
    ctx->pc = 0x7F27F514u;
    // 7F27F514: stw     r3, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27F518:
    ctx->pc = 0x7F27F518u;
    // 7F27F518: stfd     f1, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F518u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F27F51C:
    ctx->pc = 0x7F27F51Cu;
    // 7F27F51C: lwz     r3, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27F520:
    ctx->pc = 0x7F27F520u;
    // 7F27F520: stw     r3, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27F524:
    ctx->pc = 0x7F27F524u;
    // 7F27F524: lwz     r3, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27F528:
    ctx->pc = 0x7F27F528u;
    // 7F27F528: lwz     r4, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27F52C:
    ctx->pc = 0x7F27F52Cu;
    // 7F27F52C: xoris   r5, r3, 0x8000
    ctx->gpr[5] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F27F530:
    ctx->pc = 0x7F27F530u;
    // 7F27F530: lwz     r3, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27F534:
    ctx->pc = 0x7F27F534u;
    // 7F27F534: stw     r5, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F27F538:
    ctx->pc = 0x7F27F538u;
    // 7F27F538: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F27F53C:
    ctx->pc = 0x7F27F53Cu;
    // 7F27F53C: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F27F540:
    ctx->pc = 0x7F27F540u;
    // 7F27F540: stw     r0, 168(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F544:
    ctx->pc = 0x7F27F544u;
    // 7F27F544: lfd     f1, 168(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F544u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27F548:
    ctx->pc = 0x7F27F548u;
    // 7F27F548: stw     r4, 188(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27F54C:
    ctx->pc = 0x7F27F54Cu;
    // 7F27F54C: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27F54Cu)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_7F27F550:
    ctx->pc = 0x7F27F550u;
    // 7F27F550: stw     r0, 184(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F554:
    ctx->pc = 0x7F27F554u;
    // 7F27F554: fmuls   f3, f1, f6
    if (!ppc_fp_available_inline(ctx, 0x7F27F554u)) return;
    ppc_fmuls(ctx, 3, 1, 6);

label_7F27F558:
    ctx->pc = 0x7F27F558u;
    // 7F27F558: lfd     f1, 184(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F558u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27F55C:
    ctx->pc = 0x7F27F55Cu;
    // 7F27F55C: stw     r3, 204(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27F560:
    ctx->pc = 0x7F27F560u;
    // 7F27F560: fsubs   f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27F560u)) return;
    ppc_fsubs(ctx, 2, 1, 0);

label_7F27F564:
    ctx->pc = 0x7F27F564u;
    // 7F27F564: fctiwz    f3, f3
    if (!ppc_fp_available_inline(ctx, 0x7F27F564u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[3], true, &result)) ctx->fpr[3] = dolrecomp_f64_from_bits(result); }

label_7F27F568:
    ctx->pc = 0x7F27F568u;
    // 7F27F568: stw     r0, 200(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F56C:
    ctx->pc = 0x7F27F56Cu;
    // 7F27F56C: lfd     f1, 200(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F56Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27F570:
    ctx->pc = 0x7F27F570u;
    // 7F27F570: stfd     f3, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F570u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[3]));
    }

label_7F27F574:
    ctx->pc = 0x7F27F574u;
    // 7F27F574: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27F574u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F27F578:
    ctx->pc = 0x7F27F578u;
    // 7F27F578: lwz     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27F57C:
    ctx->pc = 0x7F27F57Cu;
    // 7F27F57C: stw     r0, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F580:
    ctx->pc = 0x7F27F580u;
    // 7F27F580: fmuls   f0, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x7F27F580u)) return;
    ppc_fmuls(ctx, 0, 0, 5);

label_7F27F584:
    ctx->pc = 0x7F27F584u;
    // 7F27F584: lfs     f1, 4(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F27F584u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F27F588:
    ctx->pc = 0x7F27F588u;
    // 7F27F588: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27F588u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F27F58C:
    ctx->pc = 0x7F27F58Cu;
    // 7F27F58C: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F27F58Cu)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F27F590:
    ctx->pc = 0x7F27F590u;
    // 7F27F590: stfd     f0, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F590u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F27F594:
    ctx->pc = 0x7F27F594u;
    // 7F27F594: fctiwz    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F27F594u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F27F598:
    ctx->pc = 0x7F27F598u;
    // 7F27F598: lwz     r0, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27F59C:
    ctx->pc = 0x7F27F59Cu;
    // 7F27F59C: stfd     f0, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F59Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F27F5A0:
    ctx->pc = 0x7F27F5A0u;
    // 7F27F5A0: lwz     r3, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27F5A4:
    ctx->pc = 0x7F27F5A4u;
    // 7F27F5A4: stw     r0, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F5A8:
    ctx->pc = 0x7F27F5A8u;
    // 7F27F5A8: stw     r3, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27F5AC:
    ctx->pc = 0x7F27F5ACu;
    ctx->downcount -= 9;
    // 7F27F5AC: lwz     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F27F5B0:
    ctx->pc = 0x7F27F5B0u;
    // 7F27F5B0: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F27F5B4:
    ctx->pc = 0x7F27F5B4u;
    // 7F27F5B4: lwz     r5, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F27F5B8:
    ctx->pc = 0x7F27F5B8u;
    // 7F27F5B8: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F27F5BC:
    ctx->pc = 0x7F27F5BCu;
    // 7F27F5BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27F5C0:
    ctx->pc = 0x7F27F5C0u;
    // 7F27F5C0: stw     r6, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F27F5C4:
    ctx->pc = 0x7F27F5C4u;
    // 7F27F5C4: subf   r31, r6, r5
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[31] = res;
    }

label_7F27F5C8:
    ctx->pc = 0x7F27F5C8u;
    // 7F27F5C8: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F27F5CC:
    loop_7F27F5CC(ctx);
    if (ctx->pc == 0x7F27F5DCu) goto label_7F27F5DC;
    return;
label_7F27F5D0:
    // 7F27F5D0: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

label_7F27F5D4:
    ctx->pc = 0x7F27F5D4u;
    // 7F27F5D4: stwx    r31, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F27F5D8:
    // 7F27F5D8: bc    16, 0, 0x7F27F5CC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27F5CCu;
                return;
            }
            goto label_7F27F5CC;
        }
    }

label_7F27F5DC:
    ctx->pc = 0x7F27F5DCu;
    ctx->downcount -= 6;
    // 7F27F5DC: addi    r24, r1, 24
    ctx->gpr[24] = ctx->gpr[1] + (u32)(s32)(24);

label_7F27F5E0:
    ctx->pc = 0x7F27F5E0u;
    // 7F27F5E0: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F27F5E4:
    ctx->pc = 0x7F27F5E4u;
    // 7F27F5E4: or   r5, r24, r24
    {
        ctx->gpr[5] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F27F5E8:
    ctx->pc = 0x7F27F5E8u;
    // 7F27F5E8: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F27F5EC:
    ctx->pc = 0x7F27F5ECu;
    // 7F27F5EC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F27F5F0:
    ctx->pc = 0x7F27F5F0u;
    // 7F27F5F0: bl      0x7F10C1C8
    {
            ctx->lr = 0x7F27F5F4u;
            ctx->pc = 0x7F10C1C8u;
            return;
    }

label_7F27F5F4:
    ctx->pc = 0x7F27F5F4u;
    ctx->downcount -= 7;
    // 7F27F5F4: stw     r3, 48(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27F5F8:
    ctx->pc = 0x7F27F5F8u;
    // 7F27F5F8: addi    r23, r1, 40
    ctx->gpr[23] = ctx->gpr[1] + (u32)(s32)(40);

label_7F27F5FC:
    ctx->pc = 0x7F27F5FCu;
    // 7F27F5FC: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F27F600:
    ctx->pc = 0x7F27F600u;
    // 7F27F600: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F27F604:
    ctx->pc = 0x7F27F604u;
    // 7F27F604: or   r5, r23, r23
    {
        ctx->gpr[5] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F27F608:
    ctx->pc = 0x7F27F608u;
    // 7F27F608: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F27F60C:
    ctx->pc = 0x7F27F60Cu;
    // 7F27F60C: bl      0x7F10C1C8
    {
            ctx->lr = 0x7F27F610u;
            ctx->pc = 0x7F10C1C8u;
            return;
    }

label_7F27F610:
    ctx->pc = 0x7F27F610u;
    ctx->downcount -= 7;
    // 7F27F610: stw     r3, 52(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27F614:
    ctx->pc = 0x7F27F614u;
    // 7F27F614: addi    r22, r1, 56
    ctx->gpr[22] = ctx->gpr[1] + (u32)(s32)(56);

label_7F27F618:
    ctx->pc = 0x7F27F618u;
    // 7F27F618: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F27F61C:
    ctx->pc = 0x7F27F61Cu;
    // 7F27F61C: or   r5, r24, r24
    {
        ctx->gpr[5] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F27F620:
    ctx->pc = 0x7F27F620u;
    // 7F27F620: or   r4, r22, r22
    {
        ctx->gpr[4] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F27F624:
    ctx->pc = 0x7F27F624u;
    // 7F27F624: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F27F628:
    ctx->pc = 0x7F27F628u;
    // 7F27F628: bl      0x7F10C1C8
    {
            ctx->lr = 0x7F27F62Cu;
            ctx->pc = 0x7F10C1C8u;
            return;
    }

label_7F27F62C:
    ctx->pc = 0x7F27F62Cu;
    ctx->downcount -= 6;
    // 7F27F62C: stw     r3, 56(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27F630:
    ctx->pc = 0x7F27F630u;
    // 7F27F630: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F27F634:
    ctx->pc = 0x7F27F634u;
    // 7F27F634: or   r4, r22, r22
    {
        ctx->gpr[4] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F27F638:
    ctx->pc = 0x7F27F638u;
    // 7F27F638: or   r5, r23, r23
    {
        ctx->gpr[5] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F27F63C:
    ctx->pc = 0x7F27F63Cu;
    // 7F27F63C: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F27F640:
    ctx->pc = 0x7F27F640u;
    // 7F27F640: bl      0x7F10C1C8
    {
            ctx->lr = 0x7F27F644u;
            ctx->pc = 0x7F10C1C8u;
            return;
    }

label_7F27F644:
    ctx->pc = 0x7F27F644u;
    ctx->downcount -= 3;
    // 7F27F644: cmplwi  r30, 0x0000
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

label_7F27F648:
    ctx->pc = 0x7F27F648u;
    // 7F27F648: stw     r3, 60(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27F64C:
    ctx->pc = 0x7F27F64Cu;
    // 7F27F64C: bc    12, 2, 0x7F27F680
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27F680;
        }
    }

label_7F27F650:
    ctx->pc = 0x7F27F650u;
    ctx->downcount -= 3;
    // 7F27F650: lwz     r3, 48(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27F654:
    ctx->pc = 0x7F27F654u;
    // 7F27F654: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F27F658:
    ctx->pc = 0x7F27F658u;
    // 7F27F658: bl      0x7F27F730
    {
            ctx->lr = 0x7F27F65Cu;
            goto label_7F27F730;
    }

label_7F27F65C:
    ctx->pc = 0x7F27F65Cu;
    ctx->downcount -= 3;
    // 7F27F65C: lwz     r3, 52(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27F660:
    ctx->pc = 0x7F27F660u;
    // 7F27F660: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F27F664:
    ctx->pc = 0x7F27F664u;
    // 7F27F664: bl      0x7F27F730
    {
            ctx->lr = 0x7F27F668u;
            goto label_7F27F730;
    }

label_7F27F668:
    ctx->pc = 0x7F27F668u;
    ctx->downcount -= 3;
    // 7F27F668: lwz     r3, 56(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27F66C:
    ctx->pc = 0x7F27F66Cu;
    // 7F27F66C: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F27F670:
    ctx->pc = 0x7F27F670u;
    // 7F27F670: bl      0x7F27F730
    {
            ctx->lr = 0x7F27F674u;
            goto label_7F27F730;
    }

label_7F27F674:
    ctx->pc = 0x7F27F674u;
    ctx->downcount -= 3;
    // 7F27F674: lwz     r3, 60(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27F678:
    ctx->pc = 0x7F27F678u;
    // 7F27F678: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F27F67C:
    ctx->pc = 0x7F27F67Cu;
    // 7F27F67C: bl      0x7F27F730
    {
            ctx->lr = 0x7F27F680u;
            goto label_7F27F730;
    }

label_7F27F680:
    ctx->pc = 0x7F27F680u;
    ctx->downcount -= 8;
    // 7F27F680: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F27F684:
    ctx->pc = 0x7F27F684u;
    // 7F27F684: or   r5, r24, r24
    {
        ctx->gpr[5] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F27F688:
    ctx->pc = 0x7F27F688u;
    // 7F27F688: or   r6, r22, r22
    {
        ctx->gpr[6] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F27F68C:
    ctx->pc = 0x7F27F68Cu;
    // 7F27F68C: or   r7, r23, r23
    {
        ctx->gpr[7] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F27F690:
    ctx->pc = 0x7F27F690u;
    // 7F27F690: or   r9, r29, r29
    {
        ctx->gpr[9] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F27F694:
    ctx->pc = 0x7F27F694u;
    // 7F27F694: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F27F698:
    ctx->pc = 0x7F27F698u;
    // 7F27F698: li      r8, 4
    ctx->gpr[8] = (u32)(s32)(4);

label_7F27F69C:
    ctx->pc = 0x7F27F69Cu;
    // 7F27F69C: bl      0x7F10D22C
    {
            ctx->lr = 0x7F27F6A0u;
            ctx->pc = 0x7F10D22Cu;
            return;
    }

label_7F27F6A0:
    ctx->pc = 0x7F27F6A0u;
    ctx->downcount -= 6;
    // 7F27F6A0: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F27F6A4:
    ctx->pc = 0x7F27F6A4u;
    // 7F27F6A4: stw     r3, 64(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27F6A8:
    ctx->pc = 0x7F27F6A8u;
    // 7F27F6A8: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F27F6AC:
    ctx->pc = 0x7F27F6ACu;
    // 7F27F6AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27F6B0:
    ctx->pc = 0x7F27F6B0u;
    // 7F27F6B0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F27F6B4:
    loop_7F27F6B4(ctx);
    if (ctx->pc == 0x7F27F6CCu) goto label_7F27F6CC;
    return;
label_7F27F6B8:
    // 7F27F6B8: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

label_7F27F6BC:
    ctx->pc = 0x7F27F6BCu;
    // 7F27F6BC: lwzx    r0, r5, r4
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[4];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27F6C0:
    // 7F27F6C0: add   r0, r0, r31
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F27F6C4:
    ctx->pc = 0x7F27F6C4u;
    // 7F27F6C4: stwx    r0, r5, r4
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F6C8:
    // 7F27F6C8: bc    16, 0, 0x7F27F6B4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27F6B4u;
                return;
            }
            goto label_7F27F6B4;
        }
    }

label_7F27F6CC:
    ctx->pc = 0x7F27F6CCu;
    ctx->downcount -= 8;
    // 7F27F6CC: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F27F6D0:
    ctx->pc = 0x7F27F6D0u;
    // 7F27F6D0: or   r5, r24, r24
    {
        ctx->gpr[5] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F27F6D4:
    ctx->pc = 0x7F27F6D4u;
    // 7F27F6D4: or   r6, r22, r22
    {
        ctx->gpr[6] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F27F6D8:
    ctx->pc = 0x7F27F6D8u;
    // 7F27F6D8: or   r7, r23, r23
    {
        ctx->gpr[7] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F27F6DC:
    ctx->pc = 0x7F27F6DCu;
    // 7F27F6DC: or   r9, r29, r29
    {
        ctx->gpr[9] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F27F6E0:
    ctx->pc = 0x7F27F6E0u;
    // 7F27F6E0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F27F6E4:
    ctx->pc = 0x7F27F6E4u;
    // 7F27F6E4: li      r8, 4
    ctx->gpr[8] = (u32)(s32)(4);

label_7F27F6E8:
    ctx->pc = 0x7F27F6E8u;
    // 7F27F6E8: bl      0x7F10D22C
    {
            ctx->lr = 0x7F27F6ECu;
            ctx->pc = 0x7F10D22Cu;
            return;
    }

label_7F27F6EC:
    ctx->pc = 0x7F27F6ECu;
    ctx->downcount -= 4;
    // 7F27F6EC: stw     r3, 68(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27F6F0:
    ctx->pc = 0x7F27F6F0u;
    // 7F27F6F0: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F27F6F4:
    ctx->pc = 0x7F27F6F4u;
    // 7F27F6F4: addi    r4, r27, 4
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(4);

label_7F27F6F8:
    ctx->pc = 0x7F27F6F8u;
    // 7F27F6F8: bl      0x7F27F0D4
    {
            ctx->lr = 0x7F27F6FCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27F0D4u;
                return;
            }
            goto label_7F27F0D4;
    }

label_7F27F6FC:
    ctx->pc = 0x7F27F6FCu;
    ctx->downcount -= 7;
    // 7F27F6FC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F27F700:
    ctx->pc = 0x7F27F700u;
    // 7F27F700: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F27F704:
    ctx->pc = 0x7F27F704u;
    // 7F27F704: addi    r5, r4, 18312
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(18312);

label_7F27F708:
    ctx->pc = 0x7F27F708u;
    // 7F27F708: lis     r4, 15
    ctx->gpr[4] = ((u32)(s32)(15) << 16);

label_7F27F70C:
    ctx->pc = 0x7F27F70Cu;
    // 7F27F70C: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27F710:
    ctx->pc = 0x7F27F710u;
    // 7F27F710: stw     r0, 76(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F714:
    ctx->pc = 0x7F27F714u;
    // 7F27F714: bl      0x7F3C8998
    {
            ctx->lr = 0x7F27F718u;
            ctx->pc = 0x7F3C8998u;
            return;
    }

label_7F27F718:
    ctx->pc = 0x7F27F718u;
    ctx->downcount -= 17;
    // 7F27F718: lmw     r22, 216(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        for (u32 r = 22; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F27F71C:
    ctx->pc = 0x7F27F71Cu;
    // 7F27F71C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27F720:
    ctx->pc = 0x7F27F720u;
    // 7F27F720: lwz     r0, 260(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(260);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27F724:
    ctx->pc = 0x7F27F724u;
    // 7F27F724: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27F728:
    ctx->pc = 0x7F27F728u;
    // 7F27F728: addi    r1, r1, 256
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(256);

label_7F27F72C:
    ctx->pc = 0x7F27F72Cu;
    // 7F27F72C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27F730:
    ctx->pc = 0x7F27F730u;
    ctx->downcount -= 4;
    // 7F27F730: oris    r0, r4, 0x0100
    ctx->gpr[0] = ctx->gpr[4] | (0x0100u << 16);

label_7F27F734:
    ctx->pc = 0x7F27F734u;
    // 7F27F734: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F738:
    ctx->pc = 0x7F27F738u;
    // 7F27F738: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F73C:
    ctx->pc = 0x7F27F73Cu;
    // 7F27F73C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27F740:
    ctx->pc = 0x7F27F740u;
    ctx->downcount -= 25;
    // 7F27F740: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27F744:
    ctx->pc = 0x7F27F744u;
    // 7F27F744: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27F748:
    ctx->pc = 0x7F27F748u;
    // 7F27F748: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F74C:
    ctx->pc = 0x7F27F74Cu;
    // 7F27F74C: stmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F27F750:
    ctx->pc = 0x7F27F750u;
    // 7F27F750: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27F754:
    ctx->pc = 0x7F27F754u;
    // 7F27F754: or   r26, r4, r4
    {
        ctx->gpr[26] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F27F758:
    ctx->pc = 0x7F27F758u;
    // 7F27F758: or   r27, r5, r5
    {
        ctx->gpr[27] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F27F75C:
    ctx->pc = 0x7F27F75Cu;
    // 7F27F75C: or   r28, r6, r6
    {
        ctx->gpr[28] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F27F760:
    ctx->pc = 0x7F27F760u;
    // 7F27F760: or   r29, r7, r7
    {
        ctx->gpr[29] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F27F764:
    ctx->pc = 0x7F27F764u;
    // 7F27F764: or   r30, r8, r8
    {
        ctx->gpr[30] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F27F768:
    ctx->pc = 0x7F27F768u;
    // 7F27F768: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F27F76C:
    ctx->pc = 0x7F27F76Cu;
    // 7F27F76C: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F27F770:
    ctx->pc = 0x7F27F770u;
    // 7F27F770: li      r5, 80
    ctx->gpr[5] = (u32)(s32)(80);

label_7F27F774:
    ctx->pc = 0x7F27F774u;
    // 7F27F774: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F27F778:
    ctx->pc = 0x7F27F778u;
    // 7F27F778: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F27F77Cu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F27F77C:
    ctx->pc = 0x7F27F77Cu;
    ctx->downcount -= 2;
    // 7F27F77C: or.   r31, r3, r3
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

label_7F27F780:
    ctx->pc = 0x7F27F780u;
    // 7F27F780: bc    12, 2, 0x7F27F7F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27F7F8;
        }
    }

label_7F27F784:
    ctx->pc = 0x7F27F784u;
    ctx->downcount -= 5;
    // 7F27F784: lis     r4, 32552
    ctx->gpr[4] = ((u32)(s32)(32552) << 16);

label_7F27F788:
    ctx->pc = 0x7F27F788u;
    // 7F27F788: lis     r5, 32552
    ctx->gpr[5] = ((u32)(s32)(32552) << 16);

label_7F27F78C:
    ctx->pc = 0x7F27F78Cu;
    // 7F27F78C: addi    r4, r4, -3652
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3652);

label_7F27F790:
    ctx->pc = 0x7F27F790u;
    // 7F27F790: addi    r5, r5, -3648
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3648);

label_7F27F794:
    ctx->pc = 0x7F27F794u;
    // 7F27F794: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F27F798u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F27F798:
    ctx->pc = 0x7F27F798u;
    ctx->downcount -= 18;
    // 7F27F798: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27F79C:
    ctx->pc = 0x7F27F79Cu;
    // 7F27F79C: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F27F7A0:
    ctx->pc = 0x7F27F7A0u;
    // 7F27F7A0: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F27F7A4:
    ctx->pc = 0x7F27F7A4u;
    // 7F27F7A4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27F7A8:
    ctx->pc = 0x7F27F7A8u;
    // 7F27F7A8: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F27F7AC:
    ctx->pc = 0x7F27F7ACu;
    // 7F27F7AC: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F27F7B0:
    ctx->pc = 0x7F27F7B0u;
    // 7F27F7B0: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F27F7B4:
    ctx->pc = 0x7F27F7B4u;
    // 7F27F7B4: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F27F7B8:
    ctx->pc = 0x7F27F7B8u;
    // 7F27F7B8: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F27F7BC:
    ctx->pc = 0x7F27F7BCu;
    // 7F27F7BC: or   r6, r27, r27
    {
        ctx->gpr[6] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F27F7C0:
    ctx->pc = 0x7F27F7C0u;
    // 7F27F7C0: stw     r10, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F27F7C4:
    ctx->pc = 0x7F27F7C4u;
    // 7F27F7C4: or   r7, r28, r28
    {
        ctx->gpr[7] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F27F7C8:
    ctx->pc = 0x7F27F7C8u;
    // 7F27F7C8: or   r8, r29, r29
    {
        ctx->gpr[8] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F27F7CC:
    ctx->pc = 0x7F27F7CCu;
    // 7F27F7CC: or   r9, r30, r30
    {
        ctx->gpr[9] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F27F7D0:
    ctx->pc = 0x7F27F7D0u;
    // 7F27F7D0: stw     r10, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F27F7D4:
    ctx->pc = 0x7F27F7D4u;
    // 7F27F7D4: stw     r10, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F27F7D8:
    ctx->pc = 0x7F27F7D8u;
    // 7F27F7D8: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F7DC:
    ctx->pc = 0x7F27F7DCu;
    // 7F27F7DC: bl      0x7F27F240
    {
            ctx->lr = 0x7F27F7E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27F240u;
                return;
            }
            goto label_7F27F240;
    }

label_7F27F7E0:
    ctx->pc = 0x7F27F7E0u;
    ctx->downcount -= 2;
    // 7F27F7E0: cmpwi   r3, 0
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

label_7F27F7E4:
    ctx->pc = 0x7F27F7E4u;
    // 7F27F7E4: bc    4, 0, 0x7F27F7F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27F7F8;
        }
    }

label_7F27F7E8:
    ctx->pc = 0x7F27F7E8u;
    ctx->downcount -= 2;
    // 7F27F7E8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27F7EC:
    ctx->pc = 0x7F27F7ECu;
    // 7F27F7EC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F27F7F0u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F27F7F0:
    ctx->pc = 0x7F27F7F0u;
    ctx->downcount -= 2;
    // 7F27F7F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27F7F4:
    ctx->pc = 0x7F27F7F4u;
    // 7F27F7F4: b       0x7F27F7FC
    {
            goto label_7F27F7FC;
    }

label_7F27F7F8:
    ctx->pc = 0x7F27F7F8u;
    ctx->downcount -= 1;
    // 7F27F7F8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27F7FC:
    ctx->pc = 0x7F27F7FCu;
    ctx->downcount -= 16;
    // 7F27F7FC: lmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F27F800:
    ctx->pc = 0x7F27F800u;
    // 7F27F800: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27F804:
    ctx->pc = 0x7F27F804u;
    // 7F27F804: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27F808:
    ctx->pc = 0x7F27F808u;
    // 7F27F808: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F27F80C:
    ctx->pc = 0x7F27F80Cu;
    // 7F27F80C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27F810:
    ctx->pc = 0x7F27F810u;
    ctx->downcount -= 6;
    // 7F27F810: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27F814:
    ctx->pc = 0x7F27F814u;
    // 7F27F814: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27F818:
    ctx->pc = 0x7F27F818u;
    // 7F27F818: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F27F81C:
    ctx->pc = 0x7F27F81Cu;
    // 7F27F81C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F27F820:
    ctx->pc = 0x7F27F820u;
    // 7F27F820: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F824:
    ctx->pc = 0x7F27F824u;
    // 7F27F824: bl      0x7F27F740
    {
            ctx->lr = 0x7F27F828u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27F740u;
                return;
            }
            goto label_7F27F740;
    }

label_7F27F828:
    ctx->pc = 0x7F27F828u;
    ctx->downcount -= 5;
    // 7F27F828: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27F82C:
    ctx->pc = 0x7F27F82Cu;
    // 7F27F82C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27F830:
    ctx->pc = 0x7F27F830u;
    // 7F27F830: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F27F834:
    ctx->pc = 0x7F27F834u;
    // 7F27F834: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27F838:
    ctx->pc = 0x7F27F838u;
    ctx->downcount -= 5;
    // 7F27F838: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27F83C:
    ctx->pc = 0x7F27F83Cu;
    // 7F27F83C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27F840:
    ctx->pc = 0x7F27F840u;
    // 7F27F840: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F27F844:
    ctx->pc = 0x7F27F844u;
    // 7F27F844: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F848:
    ctx->pc = 0x7F27F848u;
    // 7F27F848: bl      0x7F27F740
    {
            ctx->lr = 0x7F27F84Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27F740u;
                return;
            }
            goto label_7F27F740;
    }

label_7F27F84C:
    ctx->pc = 0x7F27F84Cu;
    ctx->downcount -= 5;
    // 7F27F84C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27F850:
    ctx->pc = 0x7F27F850u;
    // 7F27F850: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27F854:
    ctx->pc = 0x7F27F854u;
    // 7F27F854: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F27F858:
    ctx->pc = 0x7F27F858u;
    // 7F27F858: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27F85C:
    ctx->pc = 0x7F27F85Cu;
    ctx->downcount -= 4;
    // 7F27F85C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27F860:
    ctx->pc = 0x7F27F860u;
    // 7F27F860: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27F864:
    ctx->pc = 0x7F27F864u;
    // 7F27F864: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F868:
    ctx->pc = 0x7F27F868u;
    // 7F27F868: bl      0x7F27F0D4
    {
            ctx->lr = 0x7F27F86Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27F0D4u;
                return;
            }
            goto label_7F27F0D4;
    }

label_7F27F86C:
    ctx->pc = 0x7F27F86Cu;
    ctx->downcount -= 5;
    // 7F27F86C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27F870:
    ctx->pc = 0x7F27F870u;
    // 7F27F870: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27F874:
    ctx->pc = 0x7F27F874u;
    // 7F27F874: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F27F878:
    ctx->pc = 0x7F27F878u;
    // 7F27F878: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27F87C:
    ctx->pc = 0x7F27F87Cu;
    ctx->downcount -= 18;
    // 7F27F87C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27F880:
    ctx->pc = 0x7F27F880u;
    // 7F27F880: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27F884:
    ctx->pc = 0x7F27F884u;
    // 7F27F884: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F888:
    ctx->pc = 0x7F27F888u;
    // 7F27F888: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F27F88C:
    ctx->pc = 0x7F27F88Cu;
    // 7F27F88C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27F890:
    ctx->pc = 0x7F27F890u;
    // 7F27F890: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F27F894:
    ctx->pc = 0x7F27F894u;
    // 7F27F894: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F27F898:
    ctx->pc = 0x7F27F898u;
    // 7F27F898: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F27F89C:
    ctx->downcount -= 5;
    // 7F27F89C: addi    r0, r31, 48
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(48);

label_7F27F8A0:
    // 7F27F8A0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F27F8A4:
    ctx->pc = 0x7F27F8A4u;
    // 7F27F8A4: lwzx    r3, r28, r0
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27F8A8:
    // 7F27F8A8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F27F8AC:
    // 7F27F8AC: bl      0x7F0171DC
    {
            ctx->lr = 0x7F27F8B0u;
            ctx->pc = 0x7F0171DCu;
            return;
    }

label_7F27F8B0:
    ctx->downcount -= 4;
    // 7F27F8B0: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F27F8B4:
    // 7F27F8B4: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F27F8B8:
    // 7F27F8B8: cmpwi   r30, 4
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F27F8BC:
    // 7F27F8BC: bc    12, 0, 0x7F27F89C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27F89Cu;
                return;
            }
            goto label_7F27F89C;
        }
    }

label_7F27F8C0:
    ctx->pc = 0x7F27F8C0u;
    ctx->downcount -= 2;
    // 7F27F8C0: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F27F8C4:
    ctx->pc = 0x7F27F8C4u;
    // 7F27F8C4: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F27F8C8:
    ctx->downcount -= 5;
    // 7F27F8C8: addi    r0, r31, 64
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(64);

label_7F27F8CC:
    // 7F27F8CC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F27F8D0:
    ctx->pc = 0x7F27F8D0u;
    // 7F27F8D0: lwzx    r3, r28, r0
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27F8D4:
    // 7F27F8D4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F27F8D8:
    // 7F27F8D8: bl      0x7F0171DC
    {
            ctx->lr = 0x7F27F8DCu;
            ctx->pc = 0x7F0171DCu;
            return;
    }

label_7F27F8DC:
    ctx->downcount -= 4;
    // 7F27F8DC: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F27F8E0:
    // 7F27F8E0: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F27F8E4:
    // 7F27F8E4: cmpwi   r30, 2
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

label_7F27F8E8:
    // 7F27F8E8: bc    12, 0, 0x7F27F8C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27F8C8u;
                return;
            }
            goto label_7F27F8C8;
        }
    }

label_7F27F8EC:
    ctx->pc = 0x7F27F8ECu;
    ctx->downcount -= 16;
    // 7F27F8EC: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F27F8F0:
    ctx->pc = 0x7F27F8F0u;
    // 7F27F8F0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27F8F4:
    ctx->pc = 0x7F27F8F4u;
    // 7F27F8F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27F8F8:
    ctx->pc = 0x7F27F8F8u;
    // 7F27F8F8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F27F8FC:
    ctx->pc = 0x7F27F8FCu;
    // 7F27F8FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27F900:
    ctx->pc = 0x7F27F900u;
    ctx->downcount -= 9;
    // 7F27F900: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27F904:
    ctx->pc = 0x7F27F904u;
    // 7F27F904: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27F908:
    ctx->pc = 0x7F27F908u;
    // 7F27F908: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F90C:
    ctx->pc = 0x7F27F90Cu;
    // 7F27F90C: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F27F910:
    ctx->pc = 0x7F27F910u;
    // 7F27F910: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27F914:
    ctx->pc = 0x7F27F914u;
    // 7F27F914: lwz     r4, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27F918:
    ctx->pc = 0x7F27F918u;
    // 7F27F918: addic.  r0, r4, -1
    {
        u64 a = ctx->gpr[4];
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

label_7F27F91C:
    ctx->pc = 0x7F27F91Cu;
    // 7F27F91C: stw     r0, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F920:
    ctx->pc = 0x7F27F920u;
    // 7F27F920: bc    12, 1, 0x7F27F92C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27F92C;
        }
    }

label_7F27F924:
    ctx->pc = 0x7F27F924u;
    ctx->downcount -= 1;
    // 7F27F924: bl      0x7F3C8210
    {
            ctx->lr = 0x7F27F928u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F27F928:
    ctx->pc = 0x7F27F928u;
    ctx->downcount -= 1;
    // 7F27F928: b       0x7F27F9F8
    {
            goto label_7F27F9F8;
    }

label_7F27F92C:
    ctx->pc = 0x7F27F92Cu;
    ctx->downcount -= 3;
    // 7F27F92C: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27F930:
    ctx->pc = 0x7F27F930u;
    // 7F27F930: cmpwi   r0, 0
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

label_7F27F934:
    ctx->pc = 0x7F27F934u;
    // 7F27F934: bc    4, 1, 0x7F27F96C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27F96C;
        }
    }

label_7F27F938:
    ctx->pc = 0x7F27F938u;
    ctx->downcount -= 1;
    // 7F27F938: bl      0x7F27FA0C
    {
            ctx->lr = 0x7F27F93Cu;
            goto label_7F27FA0C;
    }

label_7F27F93C:
    ctx->pc = 0x7F27F93Cu;
    ctx->downcount -= 55;
    // 7F27F93C: lwz     r5, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F27F940:
    ctx->pc = 0x7F27F940u;
    // 7F27F940: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F27F944:
    ctx->pc = 0x7F27F944u;
    // 7F27F944: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F948:
    ctx->pc = 0x7F27F948u;
    // 7F27F948: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F27F94C:
    ctx->pc = 0x7F27F94Cu;
    // 7F27F94C: divwu   r0, r3, r5
    {
        u32 divisor = ctx->gpr[5];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F27F950:
    ctx->pc = 0x7F27F950u;
    // 7F27F950: lfd     f1, 25400(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F27F950u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(25400);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27F954:
    ctx->pc = 0x7F27F954u;
    // 7F27F954: mullw   r0, r0, r5
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[0] = (u32)product;
    }

label_7F27F958:
    ctx->pc = 0x7F27F958u;
    // 7F27F958: subf   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F27F95C:
    ctx->pc = 0x7F27F95Cu;
    // 7F27F95C: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F960:
    ctx->pc = 0x7F27F960u;
    // 7F27F960: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F960u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27F964:
    ctx->pc = 0x7F27F964u;
    // 7F27F964: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F27F964u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F27F968:
    ctx->pc = 0x7F27F968u;
    // 7F27F968: b       0x7F27F974
    {
            goto label_7F27F974;
    }

label_7F27F96C:
    ctx->pc = 0x7F27F96Cu;
    ctx->downcount -= 2;
    // 7F27F96C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27F970:
    ctx->pc = 0x7F27F970u;
    // 7F27F970: lfs     f0, 25392(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27F970u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25392);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27F974:
    ctx->pc = 0x7F27F974u;
    ctx->downcount -= 4;
    // 7F27F974: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F974u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F27F978:
    ctx->pc = 0x7F27F978u;
    // 7F27F978: lwz     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27F97C:
    ctx->pc = 0x7F27F97Cu;
    // 7F27F97C: cmpwi   r0, 0
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

label_7F27F980:
    ctx->pc = 0x7F27F980u;
    // 7F27F980: bc    4, 1, 0x7F27F9BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27F9BC;
        }
    }

label_7F27F984:
    ctx->pc = 0x7F27F984u;
    ctx->downcount -= 1;
    // 7F27F984: bl      0x7F27FA0C
    {
            ctx->lr = 0x7F27F988u;
            goto label_7F27FA0C;
    }

label_7F27F988:
    ctx->pc = 0x7F27F988u;
    ctx->downcount -= 56;
    // 7F27F988: lwz     r5, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F27F98C:
    ctx->pc = 0x7F27F98Cu;
    // 7F27F98C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F27F990:
    ctx->pc = 0x7F27F990u;
    // 7F27F990: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F994:
    ctx->pc = 0x7F27F994u;
    // 7F27F994: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F27F998:
    ctx->pc = 0x7F27F998u;
    // 7F27F998: divwu   r0, r3, r5
    {
        u32 divisor = ctx->gpr[5];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F27F99C:
    ctx->pc = 0x7F27F99Cu;
    // 7F27F99C: lfd     f1, 25400(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F27F99Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(25400);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27F9A0:
    ctx->pc = 0x7F27F9A0u;
    // 7F27F9A0: mullw   r0, r0, r5
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[0] = (u32)product;
    }

label_7F27F9A4:
    ctx->pc = 0x7F27F9A4u;
    // 7F27F9A4: subf   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F27F9A8:
    ctx->pc = 0x7F27F9A8u;
    // 7F27F9A8: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F9AC:
    ctx->pc = 0x7F27F9ACu;
    // 7F27F9AC: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F9ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27F9B0:
    ctx->pc = 0x7F27F9B0u;
    // 7F27F9B0: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F27F9B0u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F27F9B4:
    ctx->pc = 0x7F27F9B4u;
    // 7F27F9B4: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F9B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F27F9B8:
    ctx->pc = 0x7F27F9B8u;
    // 7F27F9B8: b       0x7F27F9C8
    {
            goto label_7F27F9C8;
    }

label_7F27F9BC:
    ctx->pc = 0x7F27F9BCu;
    ctx->downcount -= 3;
    // 7F27F9BC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27F9C0:
    ctx->pc = 0x7F27F9C0u;
    // 7F27F9C0: lfs     f0, 25392(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27F9C0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25392);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27F9C4:
    ctx->pc = 0x7F27F9C4u;
    // 7F27F9C4: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27F9C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F27F9C8:
    ctx->pc = 0x7F27F9C8u;
    ctx->downcount -= 3;
    // 7F27F9C8: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F27F9CC:
    ctx->pc = 0x7F27F9CCu;
    // 7F27F9CC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27F9D0:
    ctx->pc = 0x7F27F9D0u;
    // 7F27F9D0: bl      0x7F013490
    {
            ctx->lr = 0x7F27F9D4u;
            ctx->pc = 0x7F013490u;
            return;
    }

label_7F27F9D4:
    ctx->pc = 0x7F27F9D4u;
    ctx->downcount -= 3;
    // 7F27F9D4: lwz     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27F9D8:
    ctx->pc = 0x7F27F9D8u;
    // 7F27F9D8: cmpwi   r0, 1
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

label_7F27F9DC:
    ctx->pc = 0x7F27F9DCu;
    // 7F27F9DC: bc    4, 2, 0x7F27F9F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27F9F8;
        }
    }

label_7F27F9E0:
    ctx->pc = 0x7F27F9E0u;
    ctx->downcount -= 6;
    // 7F27F9E0: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27F9E4:
    ctx->pc = 0x7F27F9E4u;
    // 7F27F9E4: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F27F9E8:
    ctx->pc = 0x7F27F9E8u;
    // 7F27F9E8: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F9EC:
    ctx->pc = 0x7F27F9ECu;
    // 7F27F9EC: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27F9F0:
    ctx->pc = 0x7F27F9F0u;
    // 7F27F9F0: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F27F9F4:
    ctx->pc = 0x7F27F9F4u;
    // 7F27F9F4: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27F9F8:
    ctx->pc = 0x7F27F9F8u;
    ctx->downcount -= 6;
    // 7F27F9F8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27F9FC:
    ctx->pc = 0x7F27F9FCu;
    // 7F27F9FC: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F27FA00:
    ctx->pc = 0x7F27FA00u;
    // 7F27FA00: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27FA04:
    ctx->pc = 0x7F27FA04u;
    // 7F27FA04: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F27FA08:
    ctx->pc = 0x7F27FA08u;
    // 7F27FA08: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27FA0C:
    ctx->pc = 0x7F27FA0Cu;
    ctx->downcount -= 13;
    // 7F27FA0C: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F27FA10:
    ctx->pc = 0x7F27FA10u;
    // 7F27FA10: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F27FA14:
    ctx->pc = 0x7F27FA14u;
    // 7F27FA14: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F27FA18:
    ctx->pc = 0x7F27FA18u;
    // 7F27FA18: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27FA1C:
    ctx->pc = 0x7F27FA1Cu;
    // 7F27FA1C: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F27FA20:
    ctx->pc = 0x7F27FA20u;
    // 7F27FA20: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F27FA24:
    ctx->pc = 0x7F27FA24u;
    // 7F27FA24: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F27FA28:
    ctx->pc = 0x7F27FA28u;
    // 7F27FA28: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27FA2C:
    ctx->pc = 0x7F27FA2Cu;
    // 7F27FA2C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27FA30:
    ctx->pc = 0x7F27FA30u;
    ctx->downcount -= 9;
    // 7F27FA30: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27FA34:
    ctx->pc = 0x7F27FA34u;
    // 7F27FA34: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27FA38:
    ctx->pc = 0x7F27FA38u;
    // 7F27FA38: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F27FA3C:
    ctx->pc = 0x7F27FA3Cu;
    // 7F27FA3C: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F27FA40:
    ctx->pc = 0x7F27FA40u;
    // 7F27FA40: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27FA44:
    ctx->pc = 0x7F27FA44u;
    // 7F27FA44: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_7F27FA48:
    ctx->pc = 0x7F27FA48u;
    // 7F27FA48: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F27FA4C:
    ctx->pc = 0x7F27FA4Cu;
    // 7F27FA4C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F27FA50:
    ctx->pc = 0x7F27FA50u;
    // 7F27FA50: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F27FA54u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F27FA54:
    ctx->pc = 0x7F27FA54u;
    ctx->downcount -= 2;
    // 7F27FA54: or.   r31, r3, r3
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

label_7F27FA58:
    ctx->pc = 0x7F27FA58u;
    // 7F27FA58: bc    4, 2, 0x7F27FA64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27FA64;
        }
    }

label_7F27FA5C:
    ctx->pc = 0x7F27FA5Cu;
    ctx->downcount -= 2;
    // 7F27FA5C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27FA60:
    ctx->pc = 0x7F27FA60u;
    // 7F27FA60: b       0x7F27FAE0
    {
            goto label_7F27FAE0;
    }

label_7F27FA64:
    ctx->pc = 0x7F27FA64u;
    ctx->downcount -= 4;
    // 7F27FA64: lis     r4, 32552
    ctx->gpr[4] = ((u32)(s32)(32552) << 16);

label_7F27FA68:
    ctx->pc = 0x7F27FA68u;
    // 7F27FA68: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F27FA6C:
    ctx->pc = 0x7F27FA6Cu;
    // 7F27FA6C: addi    r4, r4, -1792
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1792);

label_7F27FA70:
    ctx->pc = 0x7F27FA70u;
    // 7F27FA70: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F27FA74u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F27FA74:
    ctx->pc = 0x7F27FA74u;
    ctx->downcount -= 13;
    // 7F27FA74: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27FA78:
    ctx->pc = 0x7F27FA78u;
    // 7F27FA78: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F27FA7C:
    ctx->pc = 0x7F27FA7Cu;
    // 7F27FA7C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F27FA80:
    ctx->pc = 0x7F27FA80u;
    // 7F27FA80: li      r3, 116
    ctx->gpr[3] = (u32)(s32)(116);

label_7F27FA84:
    ctx->pc = 0x7F27FA84u;
    // 7F27FA84: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F27FA88:
    ctx->pc = 0x7F27FA88u;
    // 7F27FA88: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F27FA8C:
    ctx->pc = 0x7F27FA8Cu;
    // 7F27FA8C: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F27FA90:
    ctx->pc = 0x7F27FA90u;
    // 7F27FA90: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27FA94:
    ctx->pc = 0x7F27FA94u;
    // 7F27FA94: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F27FA98:
    ctx->pc = 0x7F27FA98u;
    // 7F27FA98: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F27FA9C:
    ctx->pc = 0x7F27FA9Cu;
    // 7F27FA9C: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F27FAA0:
    ctx->pc = 0x7F27FAA0u;
    // 7F27FAA0: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27FAA4:
    ctx->pc = 0x7F27FAA4u;
    // 7F27FAA4: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F27FAA8u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F27FAA8:
    ctx->pc = 0x7F27FAA8u;
    ctx->downcount -= 4;
    // 7F27FAA8: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27FAAC:
    ctx->pc = 0x7F27FAACu;
    // 7F27FAAC: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_7F27FAB0:
    ctx->pc = 0x7F27FAB0u;
    // 7F27FAB0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27FAB4:
    ctx->pc = 0x7F27FAB4u;
    // 7F27FAB4: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F27FAB8u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F27FAB8:
    ctx->pc = 0x7F27FAB8u;
    ctx->downcount -= 4;
    // 7F27FAB8: stw     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27FABC:
    ctx->pc = 0x7F27FABCu;
    // 7F27FABC: li      r3, 121
    ctx->gpr[3] = (u32)(s32)(121);

label_7F27FAC0:
    ctx->pc = 0x7F27FAC0u;
    // 7F27FAC0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27FAC4:
    ctx->pc = 0x7F27FAC4u;
    // 7F27FAC4: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F27FAC8u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F27FAC8:
    ctx->pc = 0x7F27FAC8u;
    ctx->downcount -= 4;
    // 7F27FAC8: stw     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27FACC:
    ctx->pc = 0x7F27FACCu;
    // 7F27FACC: li      r3, 109
    ctx->gpr[3] = (u32)(s32)(109);

label_7F27FAD0:
    ctx->pc = 0x7F27FAD0u;
    // 7F27FAD0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F27FAD4:
    ctx->pc = 0x7F27FAD4u;
    // 7F27FAD4: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F27FAD8u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F27FAD8:
    ctx->pc = 0x7F27FAD8u;
    ctx->downcount -= 2;
    // 7F27FAD8: stw     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27FADC:
    ctx->pc = 0x7F27FADCu;
    // 7F27FADC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27FAE0:
    ctx->pc = 0x7F27FAE0u;
    ctx->downcount -= 6;
    // 7F27FAE0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27FAE4:
    ctx->pc = 0x7F27FAE4u;
    // 7F27FAE4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F27FAE8:
    ctx->pc = 0x7F27FAE8u;
    // 7F27FAE8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27FAEC:
    ctx->pc = 0x7F27FAECu;
    // 7F27FAEC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F27FAF0:
    ctx->pc = 0x7F27FAF0u;
    // 7F27FAF0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27FAF4:
    ctx->pc = 0x7F27FAF4u;
    ctx->downcount -= 23;
    // 7F27FAF4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27FAF8:
    ctx->pc = 0x7F27FAF8u;
    // 7F27FAF8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27FAFC:
    ctx->pc = 0x7F27FAFCu;
    // 7F27FAFC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27FB00:
    ctx->pc = 0x7F27FB00u;
    // 7F27FB00: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F27FB04:
    ctx->pc = 0x7F27FB04u;
    // 7F27FB04: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27FB08:
    ctx->pc = 0x7F27FB08u;
    // 7F27FB08: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F27FB0C:
    ctx->pc = 0x7F27FB0Cu;
    // 7F27FB0C: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F27FB10:
    ctx->pc = 0x7F27FB10u;
    // 7F27FB10: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F27FB14:
    ctx->pc = 0x7F27FB14u;
    // 7F27FB14: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F27FB18:
    ctx->pc = 0x7F27FB18u;
    // 7F27FB18: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F27FB1C:
    ctx->pc = 0x7F27FB1Cu;
    // 7F27FB1C: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_7F27FB20:
    ctx->pc = 0x7F27FB20u;
    // 7F27FB20: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F27FB24:
    ctx->pc = 0x7F27FB24u;
    // 7F27FB24: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F27FB28u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F27FB28:
    ctx->pc = 0x7F27FB28u;
    ctx->downcount -= 2;
    // 7F27FB28: or.   r31, r3, r3
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

label_7F27FB2C:
    ctx->pc = 0x7F27FB2Cu;
    // 7F27FB2C: bc    4, 2, 0x7F27FB38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27FB38;
        }
    }

label_7F27FB30:
    ctx->pc = 0x7F27FB30u;
    ctx->downcount -= 2;
    // 7F27FB30: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27FB34:
    ctx->pc = 0x7F27FB34u;
    // 7F27FB34: b       0x7F27FB84
    {
            goto label_7F27FB84;
    }

label_7F27FB38:
    ctx->pc = 0x7F27FB38u;
    ctx->downcount -= 4;
    // 7F27FB38: lis     r4, 32552
    ctx->gpr[4] = ((u32)(s32)(32552) << 16);

label_7F27FB3C:
    ctx->pc = 0x7F27FB3Cu;
    // 7F27FB3C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F27FB40:
    ctx->pc = 0x7F27FB40u;
    // 7F27FB40: addi    r4, r4, -1792
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1792);

label_7F27FB44:
    ctx->pc = 0x7F27FB44u;
    // 7F27FB44: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F27FB48u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F27FB48:
    ctx->pc = 0x7F27FB48u;
    ctx->downcount -= 15;
    // 7F27FB48: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27FB4C:
    ctx->pc = 0x7F27FB4Cu;
    // 7F27FB4C: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F27FB50:
    ctx->pc = 0x7F27FB50u;
    // 7F27FB50: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F27FB54:
    ctx->pc = 0x7F27FB54u;
    // 7F27FB54: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27FB58:
    ctx->pc = 0x7F27FB58u;
    // 7F27FB58: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F27FB5C:
    ctx->pc = 0x7F27FB5Cu;
    // 7F27FB5C: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F27FB60:
    ctx->pc = 0x7F27FB60u;
    // 7F27FB60: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F27FB64:
    ctx->pc = 0x7F27FB64u;
    // 7F27FB64: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F27FB68:
    ctx->pc = 0x7F27FB68u;
    // 7F27FB68: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F27FB6C:
    ctx->pc = 0x7F27FB6Cu;
    // 7F27FB6C: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F27FB70:
    ctx->pc = 0x7F27FB70u;
    // 7F27FB70: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27FB74:
    ctx->pc = 0x7F27FB74u;
    // 7F27FB74: stw     r27, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F27FB78:
    ctx->pc = 0x7F27FB78u;
    // 7F27FB78: stw     r28, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F27FB7C:
    ctx->pc = 0x7F27FB7Cu;
    // 7F27FB7C: stw     r29, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F27FB80:
    ctx->pc = 0x7F27FB80u;
    // 7F27FB80: stw     r30, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F27FB84:
    ctx->pc = 0x7F27FB84u;
    ctx->downcount -= 16;
    // 7F27FB84: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F27FB88:
    ctx->pc = 0x7F27FB88u;
    // 7F27FB88: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27FB8C:
    ctx->pc = 0x7F27FB8Cu;
    // 7F27FB8C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27FB90:
    ctx->pc = 0x7F27FB90u;
    // 7F27FB90: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F27FB94:
    ctx->pc = 0x7F27FB94u;
    // 7F27FB94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27FB98:
    ctx->pc = 0x7F27FB98u;
    ctx->downcount -= 3;
    // 7F27FB98: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27FB9C:
    ctx->pc = 0x7F27FB9Cu;
    // 7F27FB9C: stfs     f1, -7392(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27FB9Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7392);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F27FBA0:
    ctx->pc = 0x7F27FBA0u;
    // 7F27FBA0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27FBA4:
    ctx->pc = 0x7F27FBA4u;
    ctx->downcount -= 5;
    // 7F27FBA4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F27FBA8:
    ctx->pc = 0x7F27FBA8u;
    // 7F27FBA8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27FBAC:
    ctx->pc = 0x7F27FBACu;
    // 7F27FBAC: lfs     f0, 25408(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F27FBACu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(25408);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27FBB0:
    ctx->pc = 0x7F27FBB0u;
    // 7F27FBB0: stfs     f0, -7392(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27FBB0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7392);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F27FBB4:
    ctx->pc = 0x7F27FBB4u;
    // 7F27FBB4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27FBB8:
    ctx->pc = 0x7F27FBB8u;
    ctx->downcount -= 23;
    // 7F27FBB8: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27FBBC:
    ctx->pc = 0x7F27FBBCu;
    // 7F27FBBC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27FBC0:
    ctx->pc = 0x7F27FBC0u;
    // 7F27FBC0: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27FBC4:
    ctx->pc = 0x7F27FBC4u;
    // 7F27FBC4: stfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27FBC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F27FBC8:
    ctx->pc = 0x7F27FBC8u;
    // 7F27FBC8: psq_st   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F27FBC8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F27FBC8u);
        if (ctx->exception) return;
    }

label_7F27FBCC:
    ctx->pc = 0x7F27FBCCu;
    // 7F27FBCC: stfd     f30, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27FBCCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F27FBD0:
    ctx->pc = 0x7F27FBD0u;
    // 7F27FBD0: psq_st   f30, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F27FBD0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F27FBD0u);
        if (ctx->exception) return;
    }

label_7F27FBD4:
    ctx->pc = 0x7F27FBD4u;
    // 7F27FBD4: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F27FBD8:
    ctx->pc = 0x7F27FBD8u;
    // 7F27FBD8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27FBDC:
    ctx->pc = 0x7F27FBDCu;
    // 7F27FBDC: lwz     r5, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F27FBE0:
    ctx->pc = 0x7F27FBE0u;
    // 7F27FBE0: lwz     r0, 44(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27FBE4:
    ctx->pc = 0x7F27FBE4u;
    // 7F27FBE4: cmplwi  r0, 0x0000
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

label_7F27FBE8:
    ctx->pc = 0x7F27FBE8u;
    // 7F27FBE8: bc    12, 2, 0x7F27FE80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27FE80;
        }
    }

label_7F27FBEC:
    ctx->pc = 0x7F27FBECu;
    ctx->downcount -= 4;
    // 7F27FBEC: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F27FBF0:
    ctx->pc = 0x7F27FBF0u;
    // 7F27FBF0: lwz     r0, 28056(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28056);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27FBF4:
    ctx->pc = 0x7F27FBF4u;
    // 7F27FBF4: cmpwi   r0, 0
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

label_7F27FBF8:
    ctx->pc = 0x7F27FBF8u;
    // 7F27FBF8: bc    4, 2, 0x7F27FE80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27FE80;
        }
    }

label_7F27FBFC:
    ctx->pc = 0x7F27FBFCu;
    ctx->downcount -= 35;
    // 7F27FBFC: lwz     r31, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F27FC00:
    ctx->pc = 0x7F27FC00u;
    // 7F27FC00: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27FC04:
    ctx->pc = 0x7F27FC04u;
    // 7F27FC04: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27FC08:
    ctx->pc = 0x7F27FC08u;
    // 7F27FC08: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27FC0C:
    ctx->pc = 0x7F27FC0Cu;
    // 7F27FC0C: lfs     f0, 25408(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27FC0Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25408);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27FC10:
    ctx->pc = 0x7F27FC10u;
    // 7F27FC10: stw     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27FC14:
    ctx->pc = 0x7F27FC14u;
    // 7F27FC14: stw     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27FC18:
    ctx->pc = 0x7F27FC18u;
    // 7F27FC18: lwz     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27FC1C:
    ctx->pc = 0x7F27FC1Cu;
    // 7F27FC1C: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27FC20:
    ctx->pc = 0x7F27FC20u;
    // 7F27FC20: stw     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27FC24:
    ctx->pc = 0x7F27FC24u;
    // 7F27FC24: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27FC28:
    ctx->pc = 0x7F27FC28u;
    // 7F27FC28: lwz     r4, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27FC2C:
    ctx->pc = 0x7F27FC2Cu;
    // 7F27FC2C: lwz     r3, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27FC30:
    ctx->pc = 0x7F27FC30u;
    // 7F27FC30: lwz     r0, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27FC34:
    ctx->pc = 0x7F27FC34u;
    // 7F27FC34: stw     r3, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27FC38:
    ctx->pc = 0x7F27FC38u;
    // 7F27FC38: stw     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27FC3C:
    ctx->pc = 0x7F27FC3Cu;
    // 7F27FC3C: lwz     r3, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27FC40:
    ctx->pc = 0x7F27FC40u;
    // 7F27FC40: lwz     r0, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27FC44:
    ctx->pc = 0x7F27FC44u;
    // 7F27FC44: stw     r3, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27FC48:
    ctx->pc = 0x7F27FC48u;
    // 7F27FC48: stw     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27FC4C:
    ctx->pc = 0x7F27FC4Cu;
    // 7F27FC4C: lwz     r4, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27FC50:
    ctx->pc = 0x7F27FC50u;
    // 7F27FC50: lwz     r3, 128(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(128);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27FC54:
    ctx->pc = 0x7F27FC54u;
    // 7F27FC54: lwz     r0, 132(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27FC58:
    ctx->pc = 0x7F27FC58u;
    // 7F27FC58: stw     r3, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F27FC5C:
    ctx->pc = 0x7F27FC5Cu;
    // 7F27FC5C: stw     r0, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27FC60:
    ctx->pc = 0x7F27FC60u;
    // 7F27FC60: lwz     r3, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27FC64:
    ctx->pc = 0x7F27FC64u;
    // 7F27FC64: lwz     r0, 136(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(136);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27FC68:
    ctx->pc = 0x7F27FC68u;
    // 7F27FC68: stw     r0, 136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27FC6C:
    ctx->pc = 0x7F27FC6Cu;
    // 7F27FC6C: lwz     r4, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27FC70:
    ctx->pc = 0x7F27FC70u;
    // 7F27FC70: lfs     f31, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F27FC70u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F27FC74:
    ctx->pc = 0x7F27FC74u;
    // 7F27FC74: lfs     f1, 80(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F27FC74u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F27FC78:
    ctx->pc = 0x7F27FC78u;
    // 7F27FC78: lwz     r5, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F27FC7C:
    ctx->pc = 0x7F27FC7Cu;
    // 7F27FC7C: fsubs   f2, f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F27FC7Cu)) return;
    ppc_fsubs(ctx, 2, 1, 31);

label_7F27FC80:
    ctx->pc = 0x7F27FC80u;
    // 7F27FC80: fcmpu   cr0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F27FC80u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[2], false);

label_7F27FC84:
    ctx->pc = 0x7F27FC84u;
    // 7F27FC84: bc    4, 2, 0x7F27FC90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27FC90;
        }
    }

label_7F27FC88:
    ctx->pc = 0x7F27FC88u;
    ctx->downcount -= 2;
    // 7F27FC88: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27FC8C:
    ctx->pc = 0x7F27FC8Cu;
    // 7F27FC8C: lfs     f2, 25412(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27FC8Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25412);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F27FC90:
    ctx->pc = 0x7F27FC90u;
    ctx->downcount -= 22;
    // 7F27FC90: lfs     f1, 88(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F27FC90u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(88);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F27FC94:
    ctx->pc = 0x7F27FC94u;
    // 7F27FC94: rlwinm. r0, r5, 0, 26, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x00000020u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F27FC98:
    ctx->pc = 0x7F27FC98u;
    // 7F27FC98: lfs     f0, 84(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F27FC98u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27FC9C:
    ctx->pc = 0x7F27FC9Cu;
    // 7F27FC9C: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27FC9Cu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F27FCA0:
    ctx->pc = 0x7F27FCA0u;
    // 7F27FCA0: fdivs   f30, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F27FCA0u)) return;
    ppc_fdivs(ctx, 30, 0, 2);

label_7F27FCA4:
    ctx->pc = 0x7F27FCA4u;
    // 7F27FCA4: bc    12, 2, 0x7F27FD0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27FD0C;
        }
    }

label_7F27FCA8:
    ctx->pc = 0x7F27FCA8u;
    ctx->downcount -= 2;
    // 7F27FCA8: lbz     r3, 29(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(29);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F27FCAC:
    ctx->pc = 0x7F27FCACu;
    // 7F27FCAC: bl      0x7F27FEA4
    {
            ctx->lr = 0x7F27FCB0u;
            goto label_7F27FEA4;
    }

label_7F27FCB0:
    ctx->pc = 0x7F27FCB0u;
    ctx->downcount -= 12;
    // 7F27FCB0: xoris   r4, r3, 0x8000
    ctx->gpr[4] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F27FCB4:
    ctx->pc = 0x7F27FCB4u;
    // 7F27FCB4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F27FCB8:
    ctx->pc = 0x7F27FCB8u;
    // 7F27FCB8: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27FCBC:
    ctx->pc = 0x7F27FCBCu;
    // 7F27FCBC: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F27FCC0:
    ctx->pc = 0x7F27FCC0u;
    // 7F27FCC0: lfd     f2, 25440(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F27FCC0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(25440);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27FCC4:
    ctx->pc = 0x7F27FCC4u;
    // 7F27FCC4: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27FCC8:
    ctx->pc = 0x7F27FCC8u;
    // 7F27FCC8: lfs     f0, 80(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F27FCC8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27FCCC:
    ctx->pc = 0x7F27FCCCu;
    // 7F27FCCC: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27FCCCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27FCD0:
    ctx->pc = 0x7F27FCD0u;
    // 7F27FCD0: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F27FCD0u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F27FCD4:
    ctx->pc = 0x7F27FCD4u;
    // 7F27FCD4: fmadds f31, f30, f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F27FCD4u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[30], ctx->fpr[1], ctx->fpr[31], true, false, false, &result))
            ctx->fpr[31] = ctx->ps1[31] = result;
    }

label_7F27FCD8:
    ctx->pc = 0x7F27FCD8u;
    // 7F27FCD8: fcmpo   cr0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27FCD8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[0], true);

label_7F27FCDC:
    ctx->pc = 0x7F27FCDCu;
    // 7F27FCDC: bc    4, 0, 0x7F27FD74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27FD74;
        }
    }

label_7F27FCE0:
    ctx->pc = 0x7F27FCE0u;
    ctx->downcount -= 4;
    // 7F27FCE0: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F27FCE4:
    ctx->pc = 0x7F27FCE4u;
    // 7F27FCE4: lwz     r0, 32304(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32304);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27FCE8:
    ctx->pc = 0x7F27FCE8u;
    // 7F27FCE8: rlwinm. r0, r0, 0, 29, 30
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

label_7F27FCEC:
    ctx->pc = 0x7F27FCECu;
    // 7F27FCEC: bc    4, 2, 0x7F27FD74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27FD74;
        }
    }

label_7F27FCF0:
    ctx->pc = 0x7F27FCF0u;
    ctx->downcount -= 2;
    // 7F27FCF0: cmpwi   r3, 0
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

label_7F27FCF4:
    ctx->pc = 0x7F27FCF4u;
    // 7F27FCF4: bc    12, 2, 0x7F27FD74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27FD74;
        }
    }

label_7F27FCF8:
    ctx->pc = 0x7F27FCF8u;
    ctx->downcount -= 4;
    // 7F27FCF8: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F27FCFC:
    ctx->pc = 0x7F27FCFCu;
    // 7F27FCFC: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F27FD00:
    ctx->pc = 0x7F27FD00u;
    // 7F27FD00: li      r5, 36
    ctx->gpr[5] = (u32)(s32)(36);

label_7F27FD04:
    ctx->pc = 0x7F27FD04u;
    // 7F27FD04: bl      0x7F011698
    {
            ctx->lr = 0x7F27FD08u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F27FD08:
    ctx->pc = 0x7F27FD08u;
    ctx->downcount -= 1;
    // 7F27FD08: b       0x7F27FD74
    {
            goto label_7F27FD74;
    }

label_7F27FD0C:
    ctx->pc = 0x7F27FD0Cu;
    ctx->downcount -= 2;
    // 7F27FD0C: rlwinm. r0, r5, 0, 25, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x00000040u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F27FD10:
    ctx->pc = 0x7F27FD10u;
    // 7F27FD10: bc    12, 2, 0x7F27FD74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27FD74;
        }
    }

label_7F27FD14:
    ctx->pc = 0x7F27FD14u;
    ctx->downcount -= 2;
    // 7F27FD14: lbz     r3, 30(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(30);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F27FD18:
    ctx->pc = 0x7F27FD18u;
    // 7F27FD18: bl      0x7F27FEA4
    {
            ctx->lr = 0x7F27FD1Cu;
            goto label_7F27FEA4;
    }

label_7F27FD1C:
    ctx->pc = 0x7F27FD1Cu;
    ctx->downcount -= 12;
    // 7F27FD1C: xoris   r4, r3, 0x8000
    ctx->gpr[4] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F27FD20:
    ctx->pc = 0x7F27FD20u;
    // 7F27FD20: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F27FD24:
    ctx->pc = 0x7F27FD24u;
    // 7F27FD24: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F27FD28:
    ctx->pc = 0x7F27FD28u;
    // 7F27FD28: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F27FD2C:
    ctx->pc = 0x7F27FD2Cu;
    // 7F27FD2C: lfd     f2, 25440(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F27FD2Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(25440);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27FD30:
    ctx->pc = 0x7F27FD30u;
    // 7F27FD30: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27FD34:
    ctx->pc = 0x7F27FD34u;
    // 7F27FD34: lfs     f0, 76(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F27FD34u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(76);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27FD38:
    ctx->pc = 0x7F27FD38u;
    // 7F27FD38: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27FD38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27FD3C:
    ctx->pc = 0x7F27FD3Cu;
    // 7F27FD3C: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F27FD3Cu)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F27FD40:
    ctx->pc = 0x7F27FD40u;
    // 7F27FD40: fnmsubs f31, f30, f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F27FD40u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[30], ctx->fpr[1], ctx->fpr[31], true, true, true, &result))
            ctx->fpr[31] = ctx->ps1[31] = result;
    }

label_7F27FD44:
    ctx->pc = 0x7F27FD44u;
    // 7F27FD44: fcmpo   cr0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27FD44u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[0], true);

label_7F27FD48:
    ctx->pc = 0x7F27FD48u;
    // 7F27FD48: bc    4, 1, 0x7F27FD74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27FD74;
        }
    }

label_7F27FD4C:
    ctx->pc = 0x7F27FD4Cu;
    ctx->downcount -= 4;
    // 7F27FD4C: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F27FD50:
    ctx->pc = 0x7F27FD50u;
    // 7F27FD50: lwz     r0, 32304(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32304);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27FD54:
    ctx->pc = 0x7F27FD54u;
    // 7F27FD54: rlwinm. r0, r0, 0, 29, 30
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

label_7F27FD58:
    ctx->pc = 0x7F27FD58u;
    // 7F27FD58: bc    4, 2, 0x7F27FD74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27FD74;
        }
    }

label_7F27FD5C:
    ctx->pc = 0x7F27FD5Cu;
    ctx->downcount -= 2;
    // 7F27FD5C: cmpwi   r3, 0
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

label_7F27FD60:
    ctx->pc = 0x7F27FD60u;
    // 7F27FD60: bc    12, 2, 0x7F27FD74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27FD74;
        }
    }

label_7F27FD64:
    ctx->pc = 0x7F27FD64u;
    ctx->downcount -= 4;
    // 7F27FD64: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F27FD68:
    ctx->pc = 0x7F27FD68u;
    // 7F27FD68: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F27FD6C:
    ctx->pc = 0x7F27FD6Cu;
    // 7F27FD6C: li      r5, 36
    ctx->gpr[5] = (u32)(s32)(36);

label_7F27FD70:
    ctx->pc = 0x7F27FD70u;
    // 7F27FD70: bl      0x7F011698
    {
            ctx->lr = 0x7F27FD74u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F27FD74:
    ctx->pc = 0x7F27FD74u;
    ctx->downcount -= 3;
    // 7F27FD74: lfs     f0, 80(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F27FD74u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27FD78:
    ctx->pc = 0x7F27FD78u;
    // 7F27FD78: fcmpo   cr0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27FD78u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[0], true);

label_7F27FD7C:
    ctx->pc = 0x7F27FD7Cu;
    // 7F27FD7C: bc    4, 1, 0x7F27FD84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27FD84;
        }
    }

label_7F27FD80:
    ctx->pc = 0x7F27FD80u;
    ctx->downcount -= 1;
    // 7F27FD80: fmr    f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27FD80u)) return;
    ctx->fpr[31] = ctx->fpr[0];

label_7F27FD84:
    ctx->pc = 0x7F27FD84u;
    ctx->downcount -= 3;
    // 7F27FD84: lfs     f0, 76(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F27FD84u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(76);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27FD88:
    ctx->pc = 0x7F27FD88u;
    // 7F27FD88: fcmpo   cr0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27FD88u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[0], true);

label_7F27FD8C:
    ctx->pc = 0x7F27FD8Cu;
    // 7F27FD8C: bc    4, 0, 0x7F27FD94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27FD94;
        }
    }

label_7F27FD90:
    ctx->pc = 0x7F27FD90u;
    ctx->downcount -= 1;
    // 7F27FD90: fmr    f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27FD90u)) return;
    ctx->fpr[31] = ctx->fpr[0];

label_7F27FD94:
    ctx->pc = 0x7F27FD94u;
    ctx->downcount -= 6;
    // 7F27FD94: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F27FD98:
    ctx->pc = 0x7F27FD98u;
    // 7F27FD98: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F27FD9C:
    ctx->pc = 0x7F27FD9Cu;
    // 7F27FD9C: lfs     f0, 25408(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F27FD9Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(25408);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27FDA0:
    ctx->pc = 0x7F27FDA0u;
    // 7F27FDA0: lfs     f1, -7392(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27FDA0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7392);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F27FDA4:
    ctx->pc = 0x7F27FDA4u;
    // 7F27FDA4: fcmpu   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F27FDA4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], false);

label_7F27FDA8:
    ctx->pc = 0x7F27FDA8u;
    // 7F27FDA8: bc    12, 2, 0x7F27FDB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27FDB4;
        }
    }

label_7F27FDAC:
    ctx->pc = 0x7F27FDACu;
    ctx->downcount -= 2;
    // 7F27FDAC: stfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F27FDACu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F27FDB0:
    ctx->pc = 0x7F27FDB0u;
    // 7F27FDB0: b       0x7F27FDB8
    {
            goto label_7F27FDB8;
    }

label_7F27FDB4:
    ctx->pc = 0x7F27FDB4u;
    ctx->downcount -= 1;
    // 7F27FDB4: stfs     f31, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F27FDB4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F27FDB8:
    ctx->pc = 0x7F27FDB8u;
    ctx->downcount -= 3;
    // 7F27FDB8: lwz     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27FDBC:
    ctx->pc = 0x7F27FDBCu;
    // 7F27FDBC: cmpwi   r0, 0
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

label_7F27FDC0:
    ctx->pc = 0x7F27FDC0u;
    // 7F27FDC0: bc    4, 2, 0x7F27FE80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27FE80;
        }
    }

label_7F27FDC4:
    ctx->pc = 0x7F27FDC4u;
    ctx->downcount -= 27;
    // 7F27FDC4: lfs     f0, 76(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F27FDC4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(76);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27FDC8:
    ctx->pc = 0x7F27FDC8u;
    // 7F27FDC8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F27FDCC:
    ctx->pc = 0x7F27FDCCu;
    // 7F27FDCC: lfs     f1, 84(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F27FDCCu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F27FDD0:
    ctx->pc = 0x7F27FDD0u;
    // 7F27FDD0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27FDD4:
    ctx->pc = 0x7F27FDD4u;
    // 7F27FDD4: fsubs   f2, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27FDD4u)) return;
    ppc_fsubs(ctx, 2, 31, 0);

label_7F27FDD8:
    ctx->pc = 0x7F27FDD8u;
    // 7F27FDD8: lfs     f0, 25420(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27FDD8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25420);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27FDDC:
    ctx->pc = 0x7F27FDDCu;
    // 7F27FDDC: lfs     f3, 25416(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F27FDDCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(25416);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F27FDE0:
    ctx->pc = 0x7F27FDE0u;
    // 7F27FDE0: fcmpo   cr0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27FDE0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[0], true);

label_7F27FDE4:
    ctx->pc = 0x7F27FDE4u;
    // 7F27FDE4: fdivs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F27FDE4u)) return;
    ppc_fdivs(ctx, 1, 2, 1);

label_7F27FDE8:
    ctx->pc = 0x7F27FDE8u;
    // 7F27FDE8: fnmsubs f1, f3, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F27FDE8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[1], ctx->fpr[3], true, true, true, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F27FDEC:
    ctx->pc = 0x7F27FDECu;
    // 7F27FDEC: bc    4, 1, 0x7F27FE00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27FE00;
        }
    }

label_7F27FDF0:
    ctx->pc = 0x7F27FDF0u;
    ctx->downcount -= 20;
    // 7F27FDF0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27FDF4:
    ctx->pc = 0x7F27FDF4u;
    // 7F27FDF4: lfs     f0, 25424(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27FDF4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25424);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27FDF8:
    ctx->pc = 0x7F27FDF8u;
    // 7F27FDF8: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27FDF8u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F27FDFC:
    ctx->pc = 0x7F27FDFCu;
    // 7F27FDFC: b       0x7F27FE1C
    {
            goto label_7F27FE1C;
    }

label_7F27FE00:
    ctx->pc = 0x7F27FE00u;
    ctx->downcount -= 4;
    // 7F27FE00: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27FE04:
    ctx->pc = 0x7F27FE04u;
    // 7F27FE04: lfs     f0, 25428(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27FE04u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25428);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27FE08:
    ctx->pc = 0x7F27FE08u;
    // 7F27FE08: fcmpo   cr0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27FE08u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[0], true);

label_7F27FE0C:
    ctx->pc = 0x7F27FE0Cu;
    // 7F27FE0C: bc    4, 1, 0x7F27FE1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27FE1C;
        }
    }

label_7F27FE10:
    ctx->pc = 0x7F27FE10u;
    ctx->downcount -= 3;
    // 7F27FE10: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27FE14:
    ctx->pc = 0x7F27FE14u;
    // 7F27FE14: lfs     f0, 25432(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27FE14u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25432);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27FE18:
    ctx->pc = 0x7F27FE18u;
    // 7F27FE18: fmuls   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27FE18u)) return;
    ppc_fmuls(ctx, 1, 1, 0);

label_7F27FE1C:
    ctx->pc = 0x7F27FE1Cu;
    ctx->downcount -= 4;
    // 7F27FE1C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F27FE20:
    ctx->pc = 0x7F27FE20u;
    // 7F27FE20: lfs     f0, 25412(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F27FE20u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25412);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F27FE24:
    ctx->pc = 0x7F27FE24u;
    // 7F27FE24: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F27FE24u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F27FE28:
    ctx->pc = 0x7F27FE28u;
    // 7F27FE28: bc    4, 0, 0x7F27FE5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27FE5C;
        }
    }

label_7F27FE2C:
    ctx->pc = 0x7F27FE2Cu;
    ctx->downcount -= 4;
    // 7F27FE2C: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F27FE30:
    ctx->pc = 0x7F27FE30u;
    // 7F27FE30: lwz     r0, 32304(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32304);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27FE34:
    ctx->pc = 0x7F27FE34u;
    // 7F27FE34: rlwinm. r0, r0, 0, 31, 31
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

label_7F27FE38:
    ctx->pc = 0x7F27FE38u;
    // 7F27FE38: bc    12, 2, 0x7F27FE4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27FE4C;
        }
    }

label_7F27FE3C:
    ctx->pc = 0x7F27FE3Cu;
    ctx->downcount -= 4;
    // 7F27FE3C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F27FE40:
    ctx->pc = 0x7F27FE40u;
    // 7F27FE40: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F27FE44:
    ctx->pc = 0x7F27FE44u;
    // 7F27FE44: stw     r0, 24788(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24788);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27FE48:
    ctx->pc = 0x7F27FE48u;
    // 7F27FE48: b       0x7F27FE70
    {
            goto label_7F27FE70;
    }

label_7F27FE4C:
    ctx->pc = 0x7F27FE4Cu;
    ctx->downcount -= 4;
    // 7F27FE4C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F27FE50:
    ctx->pc = 0x7F27FE50u;
    // 7F27FE50: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F27FE54:
    ctx->pc = 0x7F27FE54u;
    // 7F27FE54: stw     r0, 24788(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24788);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27FE58:
    ctx->pc = 0x7F27FE58u;
    // 7F27FE58: b       0x7F27FE70
    {
            goto label_7F27FE70;
    }

label_7F27FE5C:
    ctx->pc = 0x7F27FE5Cu;
    ctx->downcount -= 5;
    // 7F27FE5C: fctiwz    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F27FE5Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F27FE60:
    ctx->pc = 0x7F27FE60u;
    // 7F27FE60: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F27FE64:
    ctx->pc = 0x7F27FE64u;
    // 7F27FE64: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27FE64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F27FE68:
    ctx->pc = 0x7F27FE68u;
    // 7F27FE68: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27FE6C:
    ctx->pc = 0x7F27FE6Cu;
    // 7F27FE6C: stw     r0, 24788(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24788);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27FE70:
    ctx->pc = 0x7F27FE70u;
    ctx->downcount -= 4;
    // 7F27FE70: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F27FE74:
    ctx->pc = 0x7F27FE74u;
    // 7F27FE74: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F27FE78:
    ctx->pc = 0x7F27FE78u;
    // 7F27FE78: lwz     r0, 24788(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24788);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27FE7C:
    ctx->pc = 0x7F27FE7Cu;
    // 7F27FE7C: stw     r0, 24792(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24792);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27FE80:
    ctx->pc = 0x7F27FE80u;
    ctx->downcount -= 20;
    // 7F27FE80: psq_l   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F27FE80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F27FE80u);
        if (ctx->exception) return;
    }

label_7F27FE84:
    ctx->pc = 0x7F27FE84u;
    // 7F27FE84: lfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27FE84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27FE88:
    ctx->pc = 0x7F27FE88u;
    // 7F27FE88: psq_l   f30, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F27FE88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F27FE88u);
        if (ctx->exception) return;
    }

label_7F27FE8C:
    ctx->pc = 0x7F27FE8Cu;
    // 7F27FE8C: lfd     f30, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27FE8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F27FE90:
    ctx->pc = 0x7F27FE90u;
    // 7F27FE90: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F27FE94:
    ctx->pc = 0x7F27FE94u;
    // 7F27FE94: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27FE98:
    ctx->pc = 0x7F27FE98u;
    // 7F27FE98: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27FE9C:
    ctx->pc = 0x7F27FE9Cu;
    // 7F27FE9C: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F27FEA0:
    ctx->pc = 0x7F27FEA0u;
    // 7F27FEA0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27FEA4:
    ctx->pc = 0x7F27FEA4u;
    ctx->downcount -= 2;
    // 7F27FEA4: cmpwi   r3, 90
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(90);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F27FEA8:
    ctx->pc = 0x7F27FEA8u;
    // 7F27FEA8: bc    12, 0, 0x7F27FEB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27FEB8;
        }
    }

label_7F27FEAC:
    ctx->pc = 0x7F27FEACu;
    ctx->downcount -= 42;
    // 7F27FEAC: li      r0, 90
    ctx->gpr[0] = (u32)(s32)(90);

label_7F27FEB0:
    ctx->pc = 0x7F27FEB0u;
    // 7F27FEB0: divw   r3, r3, r0
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[3] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F27FEB4:
    ctx->pc = 0x7F27FEB4u;
    // 7F27FEB4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27FEB8:
    ctx->pc = 0x7F27FEB8u;
    ctx->downcount -= 2;
    // 7F27FEB8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F27FEBC:
    ctx->pc = 0x7F27FEBCu;
    // 7F27FEBC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27FEC0:
    ctx->pc = 0x7F27FEC0u;
    ctx->downcount -= 7;
    // 7F27FEC0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27FEC4:
    ctx->pc = 0x7F27FEC4u;
    // 7F27FEC4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27FEC8:
    ctx->pc = 0x7F27FEC8u;
    // 7F27FEC8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27FECC:
    ctx->pc = 0x7F27FECCu;
    // 7F27FECC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F27FED0:
    ctx->pc = 0x7F27FED0u;
    // 7F27FED0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27FED4:
    ctx->pc = 0x7F27FED4u;
    // 7F27FED4: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27FED8:
    ctx->pc = 0x7F27FED8u;
    // 7F27FED8: bl      0x7F0259FC
    {
            ctx->lr = 0x7F27FEDCu;
            ctx->pc = 0x7F0259FCu;
            return;
    }

label_7F27FEDC:
    ctx->pc = 0x7F27FEDCu;
    ctx->downcount -= 3;
    // 7F27FEDC: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27FEE0:
    ctx->pc = 0x7F27FEE0u;
    // 7F27FEE0: cmplwi  r3, 0x0000
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

label_7F27FEE4:
    ctx->pc = 0x7F27FEE4u;
    // 7F27FEE4: bc    12, 2, 0x7F27FEF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F27FEF0;
        }
    }

label_7F27FEE8:
    ctx->pc = 0x7F27FEE8u;
    ctx->downcount -= 2;
    // 7F27FEE8: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27FEEC:
    ctx->pc = 0x7F27FEECu;
    // 7F27FEEC: bl      0x7F026B18
    {
            ctx->lr = 0x7F27FEF0u;
            ctx->pc = 0x7F026B18u;
            return;
    }

label_7F27FEF0:
    ctx->pc = 0x7F27FEF0u;
    ctx->downcount -= 6;
    // 7F27FEF0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27FEF4:
    ctx->pc = 0x7F27FEF4u;
    // 7F27FEF4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F27FEF8:
    ctx->pc = 0x7F27FEF8u;
    // 7F27FEF8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27FEFC:
    ctx->pc = 0x7F27FEFCu;
    // 7F27FEFC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F27FF00:
    ctx->pc = 0x7F27FF00u;
    // 7F27FF00: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27FF04:
    ctx->pc = 0x7F27FF04u;
    ctx->downcount -= 21;
    // 7F27FF04: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27FF08:
    ctx->pc = 0x7F27FF08u;
    // 7F27FF08: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27FF0C:
    ctx->pc = 0x7F27FF0Cu;
    // 7F27FF0C: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F27FF10:
    ctx->pc = 0x7F27FF10u;
    // 7F27FF10: li      r6, 16
    ctx->gpr[6] = (u32)(s32)(16);

label_7F27FF14:
    ctx->pc = 0x7F27FF14u;
    // 7F27FF14: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27FF18:
    ctx->pc = 0x7F27FF18u;
    // 7F27FF18: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F27FF1C:
    ctx->pc = 0x7F27FF1Cu;
    // 7F27FF1C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27FF20:
    ctx->pc = 0x7F27FF20u;
    // 7F27FF20: lwz     r7, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F27FF24:
    ctx->pc = 0x7F27FF24u;
    // 7F27FF24: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F27FF28:
    ctx->pc = 0x7F27FF28u;
    // 7F27FF28: lwz     r4, 148(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(148);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27FF2C:
    ctx->pc = 0x7F27FF2Cu;
    // 7F27FF2C: bl      0x7F03ABC8
    {
            ctx->lr = 0x7F27FF30u;
            ctx->pc = 0x7F03ABC8u;
            return;
    }

label_7F27FF30:
    ctx->pc = 0x7F27FF30u;
    ctx->downcount -= 3;
    // 7F27FF30: or.   r31, r3, r3
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

label_7F27FF34:
    ctx->pc = 0x7F27FF34u;
    // 7F27FF34: stw     r31, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F27FF38:
    ctx->pc = 0x7F27FF38u;
    // 7F27FF38: bc    4, 2, 0x7F27FF44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F27FF44;
        }
    }

label_7F27FF3C:
    ctx->pc = 0x7F27FF3Cu;
    ctx->downcount -= 2;
    // 7F27FF3C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F27FF40:
    ctx->pc = 0x7F27FF40u;
    // 7F27FF40: b       0x7F27FF88
    {
            goto label_7F27FF88;
    }

label_7F27FF44:
    ctx->pc = 0x7F27FF44u;
    ctx->downcount -= 3;
    // 7F27FF44: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F27FF48:
    ctx->pc = 0x7F27FF48u;
    // 7F27FF48: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F27FF4C:
    ctx->pc = 0x7F27FF4Cu;
    // 7F27FF4C: bl      0x7F026EBC
    {
            ctx->lr = 0x7F27FF50u;
            ctx->pc = 0x7F026EBCu;
            return;
    }

label_7F27FF50:
    ctx->pc = 0x7F27FF50u;
    ctx->downcount -= 6;
    // 7F27FF50: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27FF54:
    ctx->pc = 0x7F27FF54u;
    // 7F27FF54: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_7F27FF58:
    ctx->pc = 0x7F27FF58u;
    // 7F27FF58: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F27FF5C:
    ctx->pc = 0x7F27FF5Cu;
    // 7F27FF5C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F27FF60:
    ctx->pc = 0x7F27FF60u;
    // 7F27FF60: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F27FF64:
    ctx->pc = 0x7F27FF64u;
    // 7F27FF64: bl      0x7F026928
    {
            ctx->lr = 0x7F27FF68u;
            ctx->pc = 0x7F026928u;
            return;
    }

label_7F27FF68:
    ctx->pc = 0x7F27FF68u;
    ctx->downcount -= 3;
    // 7F27FF68: lwz     r4, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F27FF6C:
    ctx->pc = 0x7F27FF6Cu;
    // 7F27FF6C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F27FF70:
    ctx->pc = 0x7F27FF70u;
    // 7F27FF70: bl      0x7F026FF8
    {
            ctx->lr = 0x7F27FF74u;
            ctx->pc = 0x7F026FF8u;
            return;
    }

label_7F27FF74:
    ctx->pc = 0x7F27FF74u;
    ctx->downcount -= 4;
    // 7F27FF74: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F27FF78:
    ctx->pc = 0x7F27FF78u;
    // 7F27FF78: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27FF7C:
    ctx->pc = 0x7F27FF7Cu;
    // 7F27FF7C: lwz     r3, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F27FF80:
    ctx->pc = 0x7F27FF80u;
    // 7F27FF80: bl      0x7F026B18
    {
            ctx->lr = 0x7F27FF84u;
            ctx->pc = 0x7F026B18u;
            return;
    }

label_7F27FF84:
    ctx->pc = 0x7F27FF84u;
    ctx->downcount -= 1;
    // 7F27FF84: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F27FF88:
    ctx->pc = 0x7F27FF88u;
    ctx->downcount -= 16;
    // 7F27FF88: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F27FF8C:
    ctx->pc = 0x7F27FF8Cu;
    // 7F27FF8C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F27FF90:
    ctx->pc = 0x7F27FF90u;
    // 7F27FF90: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F27FF94:
    ctx->pc = 0x7F27FF94u;
    // 7F27FF94: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F27FF98:
    ctx->pc = 0x7F27FF98u;
    // 7F27FF98: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F27FF9C:
    ctx->pc = 0x7F27FF9Cu;
    ctx->downcount -= 33;
    // 7F27FF9C: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F27FFA0:
    ctx->pc = 0x7F27FFA0u;
    // 7F27FFA0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F27FFA4:
    ctx->pc = 0x7F27FFA4u;
    // 7F27FFA4: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F27FFA8:
    ctx->pc = 0x7F27FFA8u;
    // 7F27FFA8: stfd     f31, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27FFA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F27FFAC:
    ctx->pc = 0x7F27FFACu;
    // 7F27FFAC: psq_st   f31, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F27FFACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F27FFACu);
        if (ctx->exception) return;
    }

label_7F27FFB0:
    ctx->pc = 0x7F27FFB0u;
    // 7F27FFB0: stfd     f30, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27FFB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F27FFB4:
    ctx->pc = 0x7F27FFB4u;
    // 7F27FFB4: psq_st   f30, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F27FFB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F27FFB4u);
        if (ctx->exception) return;
    }

label_7F27FFB8:
    ctx->pc = 0x7F27FFB8u;
    // 7F27FFB8: stfd     f29, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F27FFB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F27FFBC:
    ctx->pc = 0x7F27FFBCu;
    // 7F27FFBC: psq_st   f29, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F27FFBCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F27FFBCu);
        if (ctx->exception) return;
    }

label_7F27FFC0:
    ctx->pc = 0x7F27FFC0u;
    // 7F27FFC0: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F27FFC4:
    ctx->pc = 0x7F27FFC4u;
    // 7F27FFC4: fmr    f29, f1
    if (!ppc_fp_available_inline(ctx, 0x7F27FFC4u)) return;
    ctx->fpr[29] = ctx->fpr[1];

label_7F27FFC8:
    ctx->pc = 0x7F27FFC8u;
    // 7F27FFC8: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F27FFCC:
    ctx->pc = 0x7F27FFCCu;
    // 7F27FFCC: fmr    f30, f2
    if (!ppc_fp_available_inline(ctx, 0x7F27FFCCu)) return;
    ctx->fpr[30] = ctx->fpr[2];

label_7F27FFD0:
    ctx->pc = 0x7F27FFD0u;
    // 7F27FFD0: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F27FFD4:
    ctx->pc = 0x7F27FFD4u;
    // 7F27FFD4: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F27FFD8:
    ctx->pc = 0x7F27FFD8u;
    // 7F27FFD8: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F27FFDC:
    ctx->pc = 0x7F27FFDCu;
    // 7F27FFDC: fmr    f31, f3
    if (!ppc_fp_available_inline(ctx, 0x7F27FFDCu)) return;
    ctx->fpr[31] = ctx->fpr[3];

label_7F27FFE0:
    ctx->pc = 0x7F27FFE0u;
    // 7F27FFE0: or   r30, r7, r7
    {
        ctx->gpr[30] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F27FFE4:
    ctx->pc = 0x7F27FFE4u;
    // 7F27FFE4: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_7F27FFE8:
    ctx->pc = 0x7F27FFE8u;
    // 7F27FFE8: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F27FFEC:
    ctx->pc = 0x7F27FFECu;
    // 7F27FFEC: li      r5, 92
    ctx->gpr[5] = (u32)(s32)(92);

label_7F27FFF0:
    ctx->pc = 0x7F27FFF0u;
    // 7F27FFF0: li      r6, 160
    ctx->gpr[6] = (u32)(s32)(160);

label_7F27FFF4:
    ctx->pc = 0x7F27FFF4u;
    // 7F27FFF4: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F27FFF8u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F27FFF8:
    ctx->pc = 0x7F27FFF8u;
    ctx->downcount -= 2;
    // 7F27FFF8: or.   r31, r3, r3
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

label_7F27FFFC:
    ctx->pc = 0x7F27FFFCu;
    // 7F27FFFC: bc    12, 2, 0x7F280090
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F280090;
        }
    }

label_7F280000:
    ctx->pc = 0x7F280000u;
    ctx->downcount -= 5;
    // 7F280000: lis     r4, 32552
    ctx->gpr[4] = ((u32)(s32)(32552) << 16);

label_7F280004:
    ctx->pc = 0x7F280004u;
    // 7F280004: lis     r5, 32552
    ctx->gpr[5] = ((u32)(s32)(32552) << 16);

label_7F280008:
    ctx->pc = 0x7F280008u;
    // 7F280008: addi    r4, r4, -1096
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1096);

label_7F28000C:
    ctx->pc = 0x7F28000Cu;
    // 7F28000C: addi    r5, r5, -320
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-320);

label_7F280010:
    ctx->pc = 0x7F280010u;
    // 7F280010: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F280014u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F280014:
    ctx->pc = 0x7F280014u;
    ctx->downcount -= 23;
    // 7F280014: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F280018:
    ctx->pc = 0x7F280018u;
    // 7F280018: lis     r3, 32572
    ctx->gpr[3] = ((u32)(s32)(32572) << 16);

label_7F28001C:
    ctx->pc = 0x7F28001Cu;
    // 7F28001C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F280020:
    ctx->pc = 0x7F280020u;
    // 7F280020: fsubs   f0, f30, f29
    if (!ppc_fp_available_inline(ctx, 0x7F280020u)) return;
    ppc_fsubs(ctx, 0, 30, 29);

label_7F280024:
    ctx->pc = 0x7F280024u;
    // 7F280024: ori     r4, r0, 0x0080
    ctx->gpr[4] = ctx->gpr[0] | 0x0080u;

label_7F280028:
    ctx->pc = 0x7F280028u;
    // 7F280028: addi    r0, r3, 32548
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32548);

label_7F28002C:
    ctx->pc = 0x7F28002Cu;
    // 7F28002C: stw     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F280030:
    ctx->pc = 0x7F280030u;
    // 7F280030: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F280034:
    ctx->pc = 0x7F280034u;
    // 7F280034: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F280038:
    ctx->pc = 0x7F280038u;
    // 7F280038: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F28003C:
    ctx->pc = 0x7F28003Cu;
    // 7F28003C: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F280040:
    ctx->pc = 0x7F280040u;
    // 7F280040: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F280044:
    ctx->pc = 0x7F280044u;
    // 7F280044: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F280048:
    ctx->pc = 0x7F280048u;
    // 7F280048: stw     r29, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F28004C:
    ctx->pc = 0x7F28004Cu;
    // 7F28004C: stw     r27, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F280050:
    ctx->pc = 0x7F280050u;
    // 7F280050: lwz     r0, 140(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(140);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F280054:
    ctx->pc = 0x7F280054u;
    // 7F280054: stw     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F280058:
    ctx->pc = 0x7F280058u;
    // 7F280058: stw     r28, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F28005C:
    ctx->pc = 0x7F28005Cu;
    // 7F28005C: stfs     f29, 76(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F28005Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

label_7F280060:
    ctx->pc = 0x7F280060u;
    // 7F280060: stfs     f30, 80(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F280060u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

label_7F280064:
    ctx->pc = 0x7F280064u;
    // 7F280064: stfs     f31, 88(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F280064u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F280068:
    ctx->pc = 0x7F280068u;
    // 7F280068: stfs     f0, 84(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F280068u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F28006C:
    ctx->pc = 0x7F28006Cu;
    // 7F28006C: bl      0x7F27FF04
    {
            ctx->lr = 0x7F280070u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F27FF04u;
                return;
            }
            goto label_7F27FF04;
    }

label_7F280070:
    ctx->pc = 0x7F280070u;
    ctx->downcount -= 2;
    // 7F280070: cmpwi   r3, 0
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

label_7F280074:
    ctx->pc = 0x7F280074u;
    // 7F280074: bc    4, 0, 0x7F280088
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F280088;
        }
    }

label_7F280078:
    ctx->pc = 0x7F280078u;
    ctx->downcount -= 2;
    // 7F280078: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F28007C:
    ctx->pc = 0x7F28007Cu;
    // 7F28007C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F280080u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F280080:
    ctx->pc = 0x7F280080u;
    ctx->downcount -= 2;
    // 7F280080: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F280084:
    ctx->pc = 0x7F280084u;
    // 7F280084: b       0x7F280094
    {
            goto label_7F280094;
    }

label_7F280088:
    ctx->pc = 0x7F280088u;
    ctx->downcount -= 2;
    // 7F280088: lwz     r0, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F28008C:
    ctx->pc = 0x7F28008Cu;
    // 7F28008C: stw     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F280090:
    ctx->pc = 0x7F280090u;
    ctx->downcount -= 1;
    // 7F280090: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F280094:
    ctx->pc = 0x7F280094u;
    ctx->downcount -= 22;
    // 7F280094: psq_l   f31, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F280094u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F280094u);
        if (ctx->exception) return;
    }

label_7F280098:
    ctx->pc = 0x7F280098u;
    // 7F280098: lfd     f31, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F280098u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F28009C:
    ctx->pc = 0x7F28009Cu;
    // 7F28009C: psq_l   f30, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F28009Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F28009Cu);
        if (ctx->exception) return;
    }

label_7F2800A0:
    ctx->pc = 0x7F2800A0u;
    // 7F2800A0: lfd     f30, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2800A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2800A4:
    ctx->pc = 0x7F2800A4u;
    // 7F2800A4: psq_l   f29, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2800A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F2800A4u);
        if (ctx->exception) return;
    }

label_7F2800A8:
    ctx->pc = 0x7F2800A8u;
    // 7F2800A8: lfd     f29, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2800A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2800AC:
    ctx->pc = 0x7F2800ACu;
    // 7F2800AC: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2800B0:
    ctx->pc = 0x7F2800B0u;
    // 7F2800B0: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2800B4:
    ctx->pc = 0x7F2800B4u;
    // 7F2800B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2800B8:
    ctx->pc = 0x7F2800B8u;
    // 7F2800B8: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F2800BC:
    ctx->pc = 0x7F2800BCu;
    // 7F2800BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F27C0EC;
        }
    }

label_7F2800C0:
    ctx->pc = 0x7F2800C0u;
    ctx->downcount -= 8;
    // 7F2800C0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2800C4:
    ctx->pc = 0x7F2800C4u;
    // 7F2800C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2800C8:
    ctx->pc = 0x7F2800C8u;
    // 7F2800C8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2800CC:
    ctx->pc = 0x7F2800CCu;
    // 7F2800CC: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2800D0:
    ctx->pc = 0x7F2800D0u;
    // 7F2800D0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2800D4:
    ctx->pc = 0x7F2800D4u;
    // 7F2800D4: stw     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2800D8:
    ctx->pc = 0x7F2800D8u;
    // 7F2800D8: stw     r5, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2800DC:
    ctx->pc = 0x7F2800DCu;
    // 7F2800DC: bl      0x7F3C9494
    {
            ctx->lr = 0x7F2800E0u;
            ctx->pc = 0x7F3C9494u;
            return;
    }

label_7F2800E0:
    ctx->pc = 0x7F2800E0u;
    ctx->downcount -= 4;
    // 7F2800E0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2800E4:
    ctx->pc = 0x7F2800E4u;
    // 7F2800E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2800E8:
    ctx->pc = 0x7F2800E8u;
    // 7F2800E8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

    ctx->pc = 0x7F2800ECu;
    return;
return_dispatch_7F27C0EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F27C124u: goto label_7F27C124;
    case 0x7F27C154u: goto label_7F27C154;
    case 0x7F27C220u: goto label_7F27C220;
    case 0x7F27C270u: goto label_7F27C270;
    case 0x7F27C294u: goto label_7F27C294;
    case 0x7F27C37Cu: goto label_7F27C37C;
    case 0x7F27C384u: goto label_7F27C384;
    case 0x7F27C39Cu: goto label_7F27C39C;
    case 0x7F27C3A4u: goto label_7F27C3A4;
    case 0x7F27C3D8u: goto label_7F27C3D8;
    case 0x7F27C404u: goto label_7F27C404;
    case 0x7F27C414u: goto label_7F27C414;
    case 0x7F27C434u: goto label_7F27C434;
    case 0x7F27C43Cu: goto label_7F27C43C;
    case 0x7F27C53Cu: goto label_7F27C53C;
    case 0x7F27C544u: goto label_7F27C544;
    case 0x7F27C574u: goto label_7F27C574;
    case 0x7F27C57Cu: goto label_7F27C57C;
    case 0x7F27C5E8u: goto label_7F27C5E8;
    case 0x7F27C5F0u: goto label_7F27C5F0;
    case 0x7F27C610u: goto label_7F27C610;
    case 0x7F27C65Cu: goto label_7F27C65C;
    case 0x7F27C67Cu: goto label_7F27C67C;
    case 0x7F27C698u: goto label_7F27C698;
    case 0x7F27C6A4u: goto label_7F27C6A4;
    case 0x7F27C6ACu: goto label_7F27C6AC;
    case 0x7F27C6BCu: goto label_7F27C6BC;
    case 0x7F27C6D0u: goto label_7F27C6D0;
    case 0x7F27C70Cu: goto label_7F27C70C;
    case 0x7F27C730u: goto label_7F27C730;
    case 0x7F27C740u: goto label_7F27C740;
    case 0x7F27C74Cu: goto label_7F27C74C;
    case 0x7F27C78Cu: goto label_7F27C78C;
    case 0x7F27C794u: goto label_7F27C794;
    case 0x7F27C79Cu: goto label_7F27C79C;
    case 0x7F27C7E8u: goto label_7F27C7E8;
    case 0x7F27C7F4u: goto label_7F27C7F4;
    case 0x7F27C7F8u: goto label_7F27C7F8;
    case 0x7F27C808u: goto label_7F27C808;
    case 0x7F27C814u: goto label_7F27C814;
    case 0x7F27C88Cu: goto label_7F27C88C;
    case 0x7F27C8A0u: goto label_7F27C8A0;
    case 0x7F27C8A8u: goto label_7F27C8A8;
    case 0x7F27C8B4u: goto label_7F27C8B4;
    case 0x7F27C8CCu: goto label_7F27C8CC;
    case 0x7F27C8D8u: goto label_7F27C8D8;
    case 0x7F27C8E8u: goto label_7F27C8E8;
    case 0x7F27C8F8u: goto label_7F27C8F8;
    case 0x7F27C90Cu: goto label_7F27C90C;
    case 0x7F27C918u: goto label_7F27C918;
    case 0x7F27C920u: goto label_7F27C920;
    case 0x7F27C928u: goto label_7F27C928;
    case 0x7F27C940u: goto label_7F27C940;
    case 0x7F27C950u: goto label_7F27C950;
    case 0x7F27C958u: goto label_7F27C958;
    case 0x7F27C960u: goto label_7F27C960;
    case 0x7F27C970u: goto label_7F27C970;
    case 0x7F27C984u: goto label_7F27C984;
    case 0x7F27C990u: goto label_7F27C990;
    case 0x7F27C9B4u: goto label_7F27C9B4;
    case 0x7F27CAB4u: goto label_7F27CAB4;
    case 0x7F27CAD0u: goto label_7F27CAD0;
    case 0x7F27CAE4u: goto label_7F27CAE4;
    case 0x7F27CAECu: goto label_7F27CAEC;
    case 0x7F27CB18u: goto label_7F27CB18;
    case 0x7F27CB38u: goto label_7F27CB38;
    case 0x7F27CB5Cu: goto label_7F27CB5C;
    case 0x7F27CB74u: goto label_7F27CB74;
    case 0x7F27CB90u: goto label_7F27CB90;
    case 0x7F27CBB8u: goto label_7F27CBB8;
    case 0x7F27CBC4u: goto label_7F27CBC4;
    case 0x7F27CBD0u: goto label_7F27CBD0;
    case 0x7F27CBE0u: goto label_7F27CBE0;
    case 0x7F27CBF0u: goto label_7F27CBF0;
    case 0x7F27CBFCu: goto label_7F27CBFC;
    case 0x7F27CC80u: goto label_7F27CC80;
    case 0x7F27CCA4u: goto label_7F27CCA4;
    case 0x7F27CCDCu: goto label_7F27CCDC;
    case 0x7F27CCECu: goto label_7F27CCEC;
    case 0x7F27CD38u: goto label_7F27CD38;
    case 0x7F27CD64u: goto label_7F27CD64;
    case 0x7F27CD74u: goto label_7F27CD74;
    case 0x7F27CD94u: goto label_7F27CD94;
    case 0x7F27CDACu: goto label_7F27CDAC;
    case 0x7F27CDF4u: goto label_7F27CDF4;
    case 0x7F27CE54u: goto label_7F27CE54;
    case 0x7F27CE6Cu: goto label_7F27CE6C;
    case 0x7F27CE80u: goto label_7F27CE80;
    case 0x7F27CF04u: goto label_7F27CF04;
    case 0x7F27CF1Cu: goto label_7F27CF1C;
    case 0x7F27CF30u: goto label_7F27CF30;
    case 0x7F27CF34u: goto label_7F27CF34;
    case 0x7F27CF50u: goto label_7F27CF50;
    case 0x7F27CF88u: goto label_7F27CF88;
    case 0x7F27CF94u: goto label_7F27CF94;
    case 0x7F27CFA0u: goto label_7F27CFA0;
    case 0x7F27CFB8u: goto label_7F27CFB8;
    case 0x7F27CFC4u: goto label_7F27CFC4;
    case 0x7F27CFD0u: goto label_7F27CFD0;
    case 0x7F27CFDCu: goto label_7F27CFDC;
    case 0x7F27CFE8u: goto label_7F27CFE8;
    case 0x7F27CFF4u: goto label_7F27CFF4;
    case 0x7F27CFF8u: goto label_7F27CFF8;
    case 0x7F27D050u: goto label_7F27D050;
    case 0x7F27D060u: goto label_7F27D060;
    case 0x7F27D06Cu: goto label_7F27D06C;
    case 0x7F27D078u: goto label_7F27D078;
    case 0x7F27D084u: goto label_7F27D084;
    case 0x7F27D090u: goto label_7F27D090;
    case 0x7F27D09Cu: goto label_7F27D09C;
    case 0x7F27D0A8u: goto label_7F27D0A8;
    case 0x7F27D0B4u: goto label_7F27D0B4;
    case 0x7F27D0C0u: goto label_7F27D0C0;
    case 0x7F27D0CCu: goto label_7F27D0CC;
    case 0x7F27D0DCu: goto label_7F27D0DC;
    case 0x7F27D0E8u: goto label_7F27D0E8;
    case 0x7F27D0F4u: goto label_7F27D0F4;
    case 0x7F27D100u: goto label_7F27D100;
    case 0x7F27D10Cu: goto label_7F27D10C;
    case 0x7F27D118u: goto label_7F27D118;
    case 0x7F27D134u: goto label_7F27D134;
    case 0x7F27D140u: goto label_7F27D140;
    case 0x7F27D14Cu: goto label_7F27D14C;
    case 0x7F27D158u: goto label_7F27D158;
    case 0x7F27D16Cu: goto label_7F27D16C;
    case 0x7F27D178u: goto label_7F27D178;
    case 0x7F27D184u: goto label_7F27D184;
    case 0x7F27D190u: goto label_7F27D190;
    case 0x7F27D194u: goto label_7F27D194;
    case 0x7F27D1F4u: goto label_7F27D1F4;
    case 0x7F27D204u: goto label_7F27D204;
    case 0x7F27D210u: goto label_7F27D210;
    case 0x7F27D21Cu: goto label_7F27D21C;
    case 0x7F27D228u: goto label_7F27D228;
    case 0x7F27D234u: goto label_7F27D234;
    case 0x7F27D240u: goto label_7F27D240;
    case 0x7F27D24Cu: goto label_7F27D24C;
    case 0x7F27D258u: goto label_7F27D258;
    case 0x7F27D264u: goto label_7F27D264;
    case 0x7F27D268u: goto label_7F27D268;
    case 0x7F27D2C8u: goto label_7F27D2C8;
    case 0x7F27D2D8u: goto label_7F27D2D8;
    case 0x7F27D2E8u: goto label_7F27D2E8;
    case 0x7F27D2F4u: goto label_7F27D2F4;
    case 0x7F27D318u: goto label_7F27D318;
    case 0x7F27D324u: goto label_7F27D324;
    case 0x7F27D330u: goto label_7F27D330;
    case 0x7F27D33Cu: goto label_7F27D33C;
    case 0x7F27D348u: goto label_7F27D348;
    case 0x7F27D354u: goto label_7F27D354;
    case 0x7F27D358u: goto label_7F27D358;
    case 0x7F27D35Cu: goto label_7F27D35C;
    case 0x7F27D360u: goto label_7F27D360;
    case 0x7F27D4C8u: goto label_7F27D4C8;
    case 0x7F27D4D4u: goto label_7F27D4D4;
    case 0x7F27D4E8u: goto label_7F27D4E8;
    case 0x7F27D4F4u: goto label_7F27D4F4;
    case 0x7F27D500u: goto label_7F27D500;
    case 0x7F27D514u: goto label_7F27D514;
    case 0x7F27D520u: goto label_7F27D520;
    case 0x7F27D52Cu: goto label_7F27D52C;
    case 0x7F27D540u: goto label_7F27D540;
    case 0x7F27D54Cu: goto label_7F27D54C;
    case 0x7F27D558u: goto label_7F27D558;
    case 0x7F27D56Cu: goto label_7F27D56C;
    case 0x7F27D578u: goto label_7F27D578;
    case 0x7F27D57Cu: goto label_7F27D57C;
    case 0x7F27D5B8u: goto label_7F27D5B8;
    case 0x7F27D5D4u: goto label_7F27D5D4;
    case 0x7F27D5E8u: goto label_7F27D5E8;
    case 0x7F27D5F4u: goto label_7F27D5F4;
    case 0x7F27D600u: goto label_7F27D600;
    case 0x7F27D614u: goto label_7F27D614;
    case 0x7F27D620u: goto label_7F27D620;
    case 0x7F27D63Cu: goto label_7F27D63C;
    case 0x7F27D650u: goto label_7F27D650;
    case 0x7F27D65Cu: goto label_7F27D65C;
    case 0x7F27D668u: goto label_7F27D668;
    case 0x7F27D67Cu: goto label_7F27D67C;
    case 0x7F27D688u: goto label_7F27D688;
    case 0x7F27D68Cu: goto label_7F27D68C;
    case 0x7F27D6E0u: goto label_7F27D6E0;
    case 0x7F27D728u: goto label_7F27D728;
    case 0x7F27D734u: goto label_7F27D734;
    case 0x7F27D748u: goto label_7F27D748;
    case 0x7F27D754u: goto label_7F27D754;
    case 0x7F27D760u: goto label_7F27D760;
    case 0x7F27D774u: goto label_7F27D774;
    case 0x7F27D780u: goto label_7F27D780;
    case 0x7F27D784u: goto label_7F27D784;
    case 0x7F27D86Cu: goto label_7F27D86C;
    case 0x7F27D878u: goto label_7F27D878;
    case 0x7F27D88Cu: goto label_7F27D88C;
    case 0x7F27D898u: goto label_7F27D898;
    case 0x7F27D8B0u: goto label_7F27D8B0;
    case 0x7F27D8C4u: goto label_7F27D8C4;
    case 0x7F27D8D0u: goto label_7F27D8D0;
    case 0x7F27D8E8u: goto label_7F27D8E8;
    case 0x7F27D8FCu: goto label_7F27D8FC;
    case 0x7F27D908u: goto label_7F27D908;
    case 0x7F27D914u: goto label_7F27D914;
    case 0x7F27D928u: goto label_7F27D928;
    case 0x7F27D934u: goto label_7F27D934;
    case 0x7F27D938u: goto label_7F27D938;
    case 0x7F27D96Cu: goto label_7F27D96C;
    case 0x7F27D978u: goto label_7F27D978;
    case 0x7F27D98Cu: goto label_7F27D98C;
    case 0x7F27D998u: goto label_7F27D998;
    case 0x7F27D9B8u: goto label_7F27D9B8;
    case 0x7F27D9CCu: goto label_7F27D9CC;
    case 0x7F27D9D8u: goto label_7F27D9D8;
    case 0x7F27D9F0u: goto label_7F27D9F0;
    case 0x7F27DA04u: goto label_7F27DA04;
    case 0x7F27DA10u: goto label_7F27DA10;
    case 0x7F27DA1Cu: goto label_7F27DA1C;
    case 0x7F27DA30u: goto label_7F27DA30;
    case 0x7F27DA3Cu: goto label_7F27DA3C;
    case 0x7F27DA40u: goto label_7F27DA40;
    case 0x7F27DA88u: goto label_7F27DA88;
    case 0x7F27DB64u: goto label_7F27DB64;
    case 0x7F27DBA8u: goto label_7F27DBA8;
    case 0x7F27DBF4u: goto label_7F27DBF4;
    case 0x7F27DC30u: goto label_7F27DC30;
    case 0x7F27DC80u: goto label_7F27DC80;
    case 0x7F27DCC8u: goto label_7F27DCC8;
    case 0x7F27DCD0u: goto label_7F27DCD0;
    case 0x7F27DE48u: goto label_7F27DE48;
    case 0x7F27DE84u: goto label_7F27DE84;
    case 0x7F27DEE4u: goto label_7F27DEE4;
    case 0x7F27DF04u: goto label_7F27DF04;
    case 0x7F27DF74u: goto label_7F27DF74;
    case 0x7F27DF8Cu: goto label_7F27DF8C;
    case 0x7F27DF94u: goto label_7F27DF94;
    case 0x7F27DFCCu: goto label_7F27DFCC;
    case 0x7F27E044u: goto label_7F27E044;
    case 0x7F27E050u: goto label_7F27E050;
    case 0x7F27E070u: goto label_7F27E070;
    case 0x7F27E078u: goto label_7F27E078;
    case 0x7F27E088u: goto label_7F27E088;
    case 0x7F27E180u: goto label_7F27E180;
    case 0x7F27E198u: goto label_7F27E198;
    case 0x7F27E24Cu: goto label_7F27E24C;
    case 0x7F27E254u: goto label_7F27E254;
    case 0x7F27E2A0u: goto label_7F27E2A0;
    case 0x7F27E34Cu: goto label_7F27E34C;
    case 0x7F27E3A0u: goto label_7F27E3A0;
    case 0x7F27E480u: goto label_7F27E480;
    case 0x7F27E498u: goto label_7F27E498;
    case 0x7F27E4B0u: goto label_7F27E4B0;
    case 0x7F27E588u: goto label_7F27E588;
    case 0x7F27E5ECu: goto label_7F27E5EC;
    case 0x7F27E6A8u: goto label_7F27E6A8;
    case 0x7F27E704u: goto label_7F27E704;
    case 0x7F27E744u: goto label_7F27E744;
    case 0x7F27E788u: goto label_7F27E788;
    case 0x7F27E790u: goto label_7F27E790;
    case 0x7F27E810u: goto label_7F27E810;
    case 0x7F27E818u: goto label_7F27E818;
    case 0x7F27E834u: goto label_7F27E834;
    case 0x7F27E8ACu: goto label_7F27E8AC;
    case 0x7F27E908u: goto label_7F27E908;
    case 0x7F27E960u: goto label_7F27E960;
    case 0x7F27E9BCu: goto label_7F27E9BC;
    case 0x7F27E9FCu: goto label_7F27E9FC;
    case 0x7F27EBECu: goto label_7F27EBEC;
    case 0x7F27EC08u: goto label_7F27EC08;
    case 0x7F27EC84u: goto label_7F27EC84;
    case 0x7F27ECA8u: goto label_7F27ECA8;
    case 0x7F27ED14u: goto label_7F27ED14;
    case 0x7F27ED38u: goto label_7F27ED38;
    case 0x7F27ED88u: goto label_7F27ED88;
    case 0x7F27EE04u: goto label_7F27EE04;
    case 0x7F27EE28u: goto label_7F27EE28;
    case 0x7F27EE60u: goto label_7F27EE60;
    case 0x7F27EEA8u: goto label_7F27EEA8;
    case 0x7F27EEF4u: goto label_7F27EEF4;
    case 0x7F27EF00u: goto label_7F27EF00;
    case 0x7F27EF54u: goto label_7F27EF54;
    case 0x7F27EF7Cu: goto label_7F27EF7C;
    case 0x7F27EFC4u: goto label_7F27EFC4;
    case 0x7F27EFD0u: goto label_7F27EFD0;
    case 0x7F27EFD8u: goto label_7F27EFD8;
    case 0x7F27F04Cu: goto label_7F27F04C;
    case 0x7F27F068u: goto label_7F27F068;
    case 0x7F27F09Cu: goto label_7F27F09C;
    case 0x7F27F0ACu: goto label_7F27F0AC;
    case 0x7F27F14Cu: goto label_7F27F14C;
    case 0x7F27F158u: goto label_7F27F158;
    case 0x7F27F18Cu: goto label_7F27F18C;
    case 0x7F27F198u: goto label_7F27F198;
    case 0x7F27F1F0u: goto label_7F27F1F0;
    case 0x7F27F21Cu: goto label_7F27F21C;
    case 0x7F27F5F4u: goto label_7F27F5F4;
    case 0x7F27F610u: goto label_7F27F610;
    case 0x7F27F62Cu: goto label_7F27F62C;
    case 0x7F27F644u: goto label_7F27F644;
    case 0x7F27F65Cu: goto label_7F27F65C;
    case 0x7F27F668u: goto label_7F27F668;
    case 0x7F27F674u: goto label_7F27F674;
    case 0x7F27F680u: goto label_7F27F680;
    case 0x7F27F6A0u: goto label_7F27F6A0;
    case 0x7F27F6ECu: goto label_7F27F6EC;
    case 0x7F27F6FCu: goto label_7F27F6FC;
    case 0x7F27F718u: goto label_7F27F718;
    case 0x7F27F77Cu: goto label_7F27F77C;
    case 0x7F27F798u: goto label_7F27F798;
    case 0x7F27F7E0u: goto label_7F27F7E0;
    case 0x7F27F7F0u: goto label_7F27F7F0;
    case 0x7F27F828u: goto label_7F27F828;
    case 0x7F27F84Cu: goto label_7F27F84C;
    case 0x7F27F86Cu: goto label_7F27F86C;
    case 0x7F27F8B0u: goto label_7F27F8B0;
    case 0x7F27F8DCu: goto label_7F27F8DC;
    case 0x7F27F928u: goto label_7F27F928;
    case 0x7F27F93Cu: goto label_7F27F93C;
    case 0x7F27F988u: goto label_7F27F988;
    case 0x7F27F9D4u: goto label_7F27F9D4;
    case 0x7F27FA54u: goto label_7F27FA54;
    case 0x7F27FA74u: goto label_7F27FA74;
    case 0x7F27FAA8u: goto label_7F27FAA8;
    case 0x7F27FAB8u: goto label_7F27FAB8;
    case 0x7F27FAC8u: goto label_7F27FAC8;
    case 0x7F27FAD8u: goto label_7F27FAD8;
    case 0x7F27FB28u: goto label_7F27FB28;
    case 0x7F27FB48u: goto label_7F27FB48;
    case 0x7F27FCB0u: goto label_7F27FCB0;
    case 0x7F27FD08u: goto label_7F27FD08;
    case 0x7F27FD1Cu: goto label_7F27FD1C;
    case 0x7F27FD74u: goto label_7F27FD74;
    case 0x7F27FEDCu: goto label_7F27FEDC;
    case 0x7F27FEF0u: goto label_7F27FEF0;
    case 0x7F27FF30u: goto label_7F27FF30;
    case 0x7F27FF50u: goto label_7F27FF50;
    case 0x7F27FF68u: goto label_7F27FF68;
    case 0x7F27FF74u: goto label_7F27FF74;
    case 0x7F27FF84u: goto label_7F27FF84;
    case 0x7F27FFF8u: goto label_7F27FFF8;
    case 0x7F280014u: goto label_7F280014;
    case 0x7F280070u: goto label_7F280070;
    case 0x7F280080u: goto label_7F280080;
    case 0x7F2800E0u: goto label_7F2800E0;
    default: return;
    }
}

