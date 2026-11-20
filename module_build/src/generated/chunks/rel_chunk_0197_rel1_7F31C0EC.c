// DolRecomp output
#include "../generated.h"

static void loop_7F31C344(CPUState* ctx) {
label_7F31C344:
    ctx->downcount -= 2;
    // 7F31C344: addi    r4, r4, 16
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16);

    // 7F31C348: bc    16, 0, 0x7F31C344
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31C344u;
                return;
            }
            goto label_7F31C344;
        }
    }

    ctx->pc = 0x7F31C34Cu;
}

static void loop_7F31D924(CPUState* ctx) {
label_7F31D924:
    ctx->downcount -= 6;
    // 7F31D924: addi    r0, r3, 259
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(259);

    // 7F31D928: addi    r3, r3, 108
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(108);

    ctx->pc = 0x7F31D92Cu;
    // 7F31D92C: lbzx    r0, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    // 7F31D930: or   r0, r28, r0
    {
        ctx->gpr[0] = ctx->gpr[28] | ctx->gpr[0];
    }

    // 7F31D934: rlwinm r28, r0, 0, 24, 31
    {
        ctx->gpr[28] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

    // 7F31D938: bc    16, 0, 0x7F31D924
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31D924u;
                return;
            }
            goto label_7F31D924;
        }
    }

    ctx->pc = 0x7F31D93Cu;
}

static void loop_7F31F854(CPUState* ctx) {
label_7F31F854:
    ctx->downcount -= 8;
    ctx->pc = 0x7F31F854u;
    // 7F31F854: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F31F858u;
    // 7F31F858: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F31F85Cu;
    // 7F31F85C: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F31F860u;
    // 7F31F860: stw     r0, 644(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(644);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x7F31F864u;
    // 7F31F864: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    // 7F31F868: addi    r0, r3, 16
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16);

    ctx->pc = 0x7F31F86Cu;
    // 7F31F86C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 7F31F870: bc    16, 0, 0x7F31F854
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31F854u;
                return;
            }
            goto label_7F31F854;
        }
    }

    ctx->pc = 0x7F31F874u;
}

void func_7F31C0EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F31C0ECu: goto label_7F31C0EC;
    case 0x7F31C0F0u: goto label_7F31C0F0;
    case 0x7F31C0F4u: goto label_7F31C0F4;
    case 0x7F31C0F8u: goto label_7F31C0F8;
    case 0x7F31C0FCu: goto label_7F31C0FC;
    case 0x7F31C100u: goto label_7F31C100;
    case 0x7F31C104u: goto label_7F31C104;
    case 0x7F31C108u: goto label_7F31C108;
    case 0x7F31C10Cu: goto label_7F31C10C;
    case 0x7F31C110u: goto label_7F31C110;
    case 0x7F31C114u: goto label_7F31C114;
    case 0x7F31C118u: goto label_7F31C118;
    case 0x7F31C11Cu: goto label_7F31C11C;
    case 0x7F31C120u: goto label_7F31C120;
    case 0x7F31C124u: goto label_7F31C124;
    case 0x7F31C128u: goto label_7F31C128;
    case 0x7F31C12Cu: goto label_7F31C12C;
    case 0x7F31C130u: goto label_7F31C130;
    case 0x7F31C134u: goto label_7F31C134;
    case 0x7F31C138u: goto label_7F31C138;
    case 0x7F31C13Cu: goto label_7F31C13C;
    case 0x7F31C140u: goto label_7F31C140;
    case 0x7F31C144u: goto label_7F31C144;
    case 0x7F31C148u: goto label_7F31C148;
    case 0x7F31C14Cu: goto label_7F31C14C;
    case 0x7F31C150u: goto label_7F31C150;
    case 0x7F31C154u: goto label_7F31C154;
    case 0x7F31C158u: goto label_7F31C158;
    case 0x7F31C15Cu: goto label_7F31C15C;
    case 0x7F31C160u: goto label_7F31C160;
    case 0x7F31C164u: goto label_7F31C164;
    case 0x7F31C168u: goto label_7F31C168;
    case 0x7F31C16Cu: goto label_7F31C16C;
    case 0x7F31C170u: goto label_7F31C170;
    case 0x7F31C174u: goto label_7F31C174;
    case 0x7F31C178u: goto label_7F31C178;
    case 0x7F31C17Cu: goto label_7F31C17C;
    case 0x7F31C180u: goto label_7F31C180;
    case 0x7F31C184u: goto label_7F31C184;
    case 0x7F31C188u: goto label_7F31C188;
    case 0x7F31C18Cu: goto label_7F31C18C;
    case 0x7F31C190u: goto label_7F31C190;
    case 0x7F31C194u: goto label_7F31C194;
    case 0x7F31C198u: goto label_7F31C198;
    case 0x7F31C19Cu: goto label_7F31C19C;
    case 0x7F31C1A0u: goto label_7F31C1A0;
    case 0x7F31C1A4u: goto label_7F31C1A4;
    case 0x7F31C1A8u: goto label_7F31C1A8;
    case 0x7F31C1ACu: goto label_7F31C1AC;
    case 0x7F31C1B0u: goto label_7F31C1B0;
    case 0x7F31C1B4u: goto label_7F31C1B4;
    case 0x7F31C1B8u: goto label_7F31C1B8;
    case 0x7F31C1BCu: goto label_7F31C1BC;
    case 0x7F31C1C0u: goto label_7F31C1C0;
    case 0x7F31C1C4u: goto label_7F31C1C4;
    case 0x7F31C1C8u: goto label_7F31C1C8;
    case 0x7F31C1CCu: goto label_7F31C1CC;
    case 0x7F31C1D0u: goto label_7F31C1D0;
    case 0x7F31C1D4u: goto label_7F31C1D4;
    case 0x7F31C1D8u: goto label_7F31C1D8;
    case 0x7F31C1DCu: goto label_7F31C1DC;
    case 0x7F31C1E0u: goto label_7F31C1E0;
    case 0x7F31C1E4u: goto label_7F31C1E4;
    case 0x7F31C1E8u: goto label_7F31C1E8;
    case 0x7F31C1ECu: goto label_7F31C1EC;
    case 0x7F31C1F0u: goto label_7F31C1F0;
    case 0x7F31C1F4u: goto label_7F31C1F4;
    case 0x7F31C1F8u: goto label_7F31C1F8;
    case 0x7F31C1FCu: goto label_7F31C1FC;
    case 0x7F31C200u: goto label_7F31C200;
    case 0x7F31C204u: goto label_7F31C204;
    case 0x7F31C208u: goto label_7F31C208;
    case 0x7F31C20Cu: goto label_7F31C20C;
    case 0x7F31C210u: goto label_7F31C210;
    case 0x7F31C214u: goto label_7F31C214;
    case 0x7F31C218u: goto label_7F31C218;
    case 0x7F31C21Cu: goto label_7F31C21C;
    case 0x7F31C220u: goto label_7F31C220;
    case 0x7F31C224u: goto label_7F31C224;
    case 0x7F31C228u: goto label_7F31C228;
    case 0x7F31C22Cu: goto label_7F31C22C;
    case 0x7F31C230u: goto label_7F31C230;
    case 0x7F31C234u: goto label_7F31C234;
    case 0x7F31C238u: goto label_7F31C238;
    case 0x7F31C23Cu: goto label_7F31C23C;
    case 0x7F31C240u: goto label_7F31C240;
    case 0x7F31C244u: goto label_7F31C244;
    case 0x7F31C248u: goto label_7F31C248;
    case 0x7F31C24Cu: goto label_7F31C24C;
    case 0x7F31C250u: goto label_7F31C250;
    case 0x7F31C254u: goto label_7F31C254;
    case 0x7F31C258u: goto label_7F31C258;
    case 0x7F31C25Cu: goto label_7F31C25C;
    case 0x7F31C260u: goto label_7F31C260;
    case 0x7F31C264u: goto label_7F31C264;
    case 0x7F31C268u: goto label_7F31C268;
    case 0x7F31C26Cu: goto label_7F31C26C;
    case 0x7F31C270u: goto label_7F31C270;
    case 0x7F31C274u: goto label_7F31C274;
    case 0x7F31C278u: goto label_7F31C278;
    case 0x7F31C27Cu: goto label_7F31C27C;
    case 0x7F31C280u: goto label_7F31C280;
    case 0x7F31C284u: goto label_7F31C284;
    case 0x7F31C288u: goto label_7F31C288;
    case 0x7F31C28Cu: goto label_7F31C28C;
    case 0x7F31C290u: goto label_7F31C290;
    case 0x7F31C294u: goto label_7F31C294;
    case 0x7F31C298u: goto label_7F31C298;
    case 0x7F31C29Cu: goto label_7F31C29C;
    case 0x7F31C2A0u: goto label_7F31C2A0;
    case 0x7F31C2A4u: goto label_7F31C2A4;
    case 0x7F31C2A8u: goto label_7F31C2A8;
    case 0x7F31C2ACu: goto label_7F31C2AC;
    case 0x7F31C2B0u: goto label_7F31C2B0;
    case 0x7F31C2B4u: goto label_7F31C2B4;
    case 0x7F31C2B8u: goto label_7F31C2B8;
    case 0x7F31C2BCu: goto label_7F31C2BC;
    case 0x7F31C2C0u: goto label_7F31C2C0;
    case 0x7F31C2C4u: goto label_7F31C2C4;
    case 0x7F31C2C8u: goto label_7F31C2C8;
    case 0x7F31C2CCu: goto label_7F31C2CC;
    case 0x7F31C2D0u: goto label_7F31C2D0;
    case 0x7F31C2D4u: goto label_7F31C2D4;
    case 0x7F31C2D8u: goto label_7F31C2D8;
    case 0x7F31C2DCu: goto label_7F31C2DC;
    case 0x7F31C2E0u: goto label_7F31C2E0;
    case 0x7F31C2E4u: goto label_7F31C2E4;
    case 0x7F31C2E8u: goto label_7F31C2E8;
    case 0x7F31C2ECu: goto label_7F31C2EC;
    case 0x7F31C2F0u: goto label_7F31C2F0;
    case 0x7F31C2F4u: goto label_7F31C2F4;
    case 0x7F31C2F8u: goto label_7F31C2F8;
    case 0x7F31C2FCu: goto label_7F31C2FC;
    case 0x7F31C300u: goto label_7F31C300;
    case 0x7F31C304u: goto label_7F31C304;
    case 0x7F31C308u: goto label_7F31C308;
    case 0x7F31C30Cu: goto label_7F31C30C;
    case 0x7F31C310u: goto label_7F31C310;
    case 0x7F31C314u: goto label_7F31C314;
    case 0x7F31C318u: goto label_7F31C318;
    case 0x7F31C31Cu: goto label_7F31C31C;
    case 0x7F31C320u: goto label_7F31C320;
    case 0x7F31C324u: goto label_7F31C324;
    case 0x7F31C328u: goto label_7F31C328;
    case 0x7F31C32Cu: goto label_7F31C32C;
    case 0x7F31C330u: goto label_7F31C330;
    case 0x7F31C334u: goto label_7F31C334;
    case 0x7F31C338u: goto label_7F31C338;
    case 0x7F31C33Cu: goto label_7F31C33C;
    case 0x7F31C340u: goto label_7F31C340;
    case 0x7F31C344u: goto label_7F31C344;
    case 0x7F31C348u: goto label_7F31C348;
    case 0x7F31C34Cu: goto label_7F31C34C;
    case 0x7F31C350u: goto label_7F31C350;
    case 0x7F31C354u: goto label_7F31C354;
    case 0x7F31C358u: goto label_7F31C358;
    case 0x7F31C35Cu: goto label_7F31C35C;
    case 0x7F31C360u: goto label_7F31C360;
    case 0x7F31C364u: goto label_7F31C364;
    case 0x7F31C368u: goto label_7F31C368;
    case 0x7F31C36Cu: goto label_7F31C36C;
    case 0x7F31C370u: goto label_7F31C370;
    case 0x7F31C374u: goto label_7F31C374;
    case 0x7F31C378u: goto label_7F31C378;
    case 0x7F31C37Cu: goto label_7F31C37C;
    case 0x7F31C380u: goto label_7F31C380;
    case 0x7F31C384u: goto label_7F31C384;
    case 0x7F31C388u: goto label_7F31C388;
    case 0x7F31C38Cu: goto label_7F31C38C;
    case 0x7F31C390u: goto label_7F31C390;
    case 0x7F31C394u: goto label_7F31C394;
    case 0x7F31C398u: goto label_7F31C398;
    case 0x7F31C39Cu: goto label_7F31C39C;
    case 0x7F31C3A0u: goto label_7F31C3A0;
    case 0x7F31C3A4u: goto label_7F31C3A4;
    case 0x7F31C3A8u: goto label_7F31C3A8;
    case 0x7F31C3ACu: goto label_7F31C3AC;
    case 0x7F31C3B0u: goto label_7F31C3B0;
    case 0x7F31C3B4u: goto label_7F31C3B4;
    case 0x7F31C3B8u: goto label_7F31C3B8;
    case 0x7F31C3BCu: goto label_7F31C3BC;
    case 0x7F31C3C0u: goto label_7F31C3C0;
    case 0x7F31C3C4u: goto label_7F31C3C4;
    case 0x7F31C3C8u: goto label_7F31C3C8;
    case 0x7F31C3CCu: goto label_7F31C3CC;
    case 0x7F31C3D0u: goto label_7F31C3D0;
    case 0x7F31C3D4u: goto label_7F31C3D4;
    case 0x7F31C3D8u: goto label_7F31C3D8;
    case 0x7F31C3DCu: goto label_7F31C3DC;
    case 0x7F31C3E0u: goto label_7F31C3E0;
    case 0x7F31C3E4u: goto label_7F31C3E4;
    case 0x7F31C3E8u: goto label_7F31C3E8;
    case 0x7F31C3ECu: goto label_7F31C3EC;
    case 0x7F31C3F0u: goto label_7F31C3F0;
    case 0x7F31C3F4u: goto label_7F31C3F4;
    case 0x7F31C3F8u: goto label_7F31C3F8;
    case 0x7F31C3FCu: goto label_7F31C3FC;
    case 0x7F31C400u: goto label_7F31C400;
    case 0x7F31C404u: goto label_7F31C404;
    case 0x7F31C408u: goto label_7F31C408;
    case 0x7F31C40Cu: goto label_7F31C40C;
    case 0x7F31C410u: goto label_7F31C410;
    case 0x7F31C414u: goto label_7F31C414;
    case 0x7F31C418u: goto label_7F31C418;
    case 0x7F31C41Cu: goto label_7F31C41C;
    case 0x7F31C420u: goto label_7F31C420;
    case 0x7F31C424u: goto label_7F31C424;
    case 0x7F31C428u: goto label_7F31C428;
    case 0x7F31C42Cu: goto label_7F31C42C;
    case 0x7F31C430u: goto label_7F31C430;
    case 0x7F31C434u: goto label_7F31C434;
    case 0x7F31C438u: goto label_7F31C438;
    case 0x7F31C43Cu: goto label_7F31C43C;
    case 0x7F31C440u: goto label_7F31C440;
    case 0x7F31C444u: goto label_7F31C444;
    case 0x7F31C448u: goto label_7F31C448;
    case 0x7F31C44Cu: goto label_7F31C44C;
    case 0x7F31C450u: goto label_7F31C450;
    case 0x7F31C454u: goto label_7F31C454;
    case 0x7F31C458u: goto label_7F31C458;
    case 0x7F31C45Cu: goto label_7F31C45C;
    case 0x7F31C460u: goto label_7F31C460;
    case 0x7F31C464u: goto label_7F31C464;
    case 0x7F31C468u: goto label_7F31C468;
    case 0x7F31C46Cu: goto label_7F31C46C;
    case 0x7F31C470u: goto label_7F31C470;
    case 0x7F31C474u: goto label_7F31C474;
    case 0x7F31C478u: goto label_7F31C478;
    case 0x7F31C47Cu: goto label_7F31C47C;
    case 0x7F31C480u: goto label_7F31C480;
    case 0x7F31C484u: goto label_7F31C484;
    case 0x7F31C488u: goto label_7F31C488;
    case 0x7F31C48Cu: goto label_7F31C48C;
    case 0x7F31C490u: goto label_7F31C490;
    case 0x7F31C494u: goto label_7F31C494;
    case 0x7F31C498u: goto label_7F31C498;
    case 0x7F31C49Cu: goto label_7F31C49C;
    case 0x7F31C4A0u: goto label_7F31C4A0;
    case 0x7F31C4A4u: goto label_7F31C4A4;
    case 0x7F31C4A8u: goto label_7F31C4A8;
    case 0x7F31C4ACu: goto label_7F31C4AC;
    case 0x7F31C4B0u: goto label_7F31C4B0;
    case 0x7F31C4B4u: goto label_7F31C4B4;
    case 0x7F31C4B8u: goto label_7F31C4B8;
    case 0x7F31C4BCu: goto label_7F31C4BC;
    case 0x7F31C4C0u: goto label_7F31C4C0;
    case 0x7F31C4C4u: goto label_7F31C4C4;
    case 0x7F31C4C8u: goto label_7F31C4C8;
    case 0x7F31C4CCu: goto label_7F31C4CC;
    case 0x7F31C4D0u: goto label_7F31C4D0;
    case 0x7F31C4D4u: goto label_7F31C4D4;
    case 0x7F31C4D8u: goto label_7F31C4D8;
    case 0x7F31C4DCu: goto label_7F31C4DC;
    case 0x7F31C4E0u: goto label_7F31C4E0;
    case 0x7F31C4E4u: goto label_7F31C4E4;
    case 0x7F31C4E8u: goto label_7F31C4E8;
    case 0x7F31C4ECu: goto label_7F31C4EC;
    case 0x7F31C4F0u: goto label_7F31C4F0;
    case 0x7F31C4F4u: goto label_7F31C4F4;
    case 0x7F31C4F8u: goto label_7F31C4F8;
    case 0x7F31C4FCu: goto label_7F31C4FC;
    case 0x7F31C500u: goto label_7F31C500;
    case 0x7F31C504u: goto label_7F31C504;
    case 0x7F31C508u: goto label_7F31C508;
    case 0x7F31C50Cu: goto label_7F31C50C;
    case 0x7F31C510u: goto label_7F31C510;
    case 0x7F31C514u: goto label_7F31C514;
    case 0x7F31C518u: goto label_7F31C518;
    case 0x7F31C51Cu: goto label_7F31C51C;
    case 0x7F31C520u: goto label_7F31C520;
    case 0x7F31C524u: goto label_7F31C524;
    case 0x7F31C528u: goto label_7F31C528;
    case 0x7F31C52Cu: goto label_7F31C52C;
    case 0x7F31C530u: goto label_7F31C530;
    case 0x7F31C534u: goto label_7F31C534;
    case 0x7F31C538u: goto label_7F31C538;
    case 0x7F31C53Cu: goto label_7F31C53C;
    case 0x7F31C540u: goto label_7F31C540;
    case 0x7F31C544u: goto label_7F31C544;
    case 0x7F31C548u: goto label_7F31C548;
    case 0x7F31C54Cu: goto label_7F31C54C;
    case 0x7F31C550u: goto label_7F31C550;
    case 0x7F31C554u: goto label_7F31C554;
    case 0x7F31C558u: goto label_7F31C558;
    case 0x7F31C55Cu: goto label_7F31C55C;
    case 0x7F31C560u: goto label_7F31C560;
    case 0x7F31C564u: goto label_7F31C564;
    case 0x7F31C568u: goto label_7F31C568;
    case 0x7F31C56Cu: goto label_7F31C56C;
    case 0x7F31C570u: goto label_7F31C570;
    case 0x7F31C574u: goto label_7F31C574;
    case 0x7F31C578u: goto label_7F31C578;
    case 0x7F31C57Cu: goto label_7F31C57C;
    case 0x7F31C580u: goto label_7F31C580;
    case 0x7F31C584u: goto label_7F31C584;
    case 0x7F31C588u: goto label_7F31C588;
    case 0x7F31C58Cu: goto label_7F31C58C;
    case 0x7F31C590u: goto label_7F31C590;
    case 0x7F31C594u: goto label_7F31C594;
    case 0x7F31C598u: goto label_7F31C598;
    case 0x7F31C59Cu: goto label_7F31C59C;
    case 0x7F31C5A0u: goto label_7F31C5A0;
    case 0x7F31C5A4u: goto label_7F31C5A4;
    case 0x7F31C5A8u: goto label_7F31C5A8;
    case 0x7F31C5ACu: goto label_7F31C5AC;
    case 0x7F31C5B0u: goto label_7F31C5B0;
    case 0x7F31C5B4u: goto label_7F31C5B4;
    case 0x7F31C5B8u: goto label_7F31C5B8;
    case 0x7F31C5BCu: goto label_7F31C5BC;
    case 0x7F31C5C0u: goto label_7F31C5C0;
    case 0x7F31C5C4u: goto label_7F31C5C4;
    case 0x7F31C5C8u: goto label_7F31C5C8;
    case 0x7F31C5CCu: goto label_7F31C5CC;
    case 0x7F31C5D0u: goto label_7F31C5D0;
    case 0x7F31C5D4u: goto label_7F31C5D4;
    case 0x7F31C5D8u: goto label_7F31C5D8;
    case 0x7F31C5DCu: goto label_7F31C5DC;
    case 0x7F31C5E0u: goto label_7F31C5E0;
    case 0x7F31C5E4u: goto label_7F31C5E4;
    case 0x7F31C5E8u: goto label_7F31C5E8;
    case 0x7F31C5ECu: goto label_7F31C5EC;
    case 0x7F31C5F0u: goto label_7F31C5F0;
    case 0x7F31C5F4u: goto label_7F31C5F4;
    case 0x7F31C5F8u: goto label_7F31C5F8;
    case 0x7F31C5FCu: goto label_7F31C5FC;
    case 0x7F31C600u: goto label_7F31C600;
    case 0x7F31C604u: goto label_7F31C604;
    case 0x7F31C608u: goto label_7F31C608;
    case 0x7F31C60Cu: goto label_7F31C60C;
    case 0x7F31C610u: goto label_7F31C610;
    case 0x7F31C614u: goto label_7F31C614;
    case 0x7F31C618u: goto label_7F31C618;
    case 0x7F31C61Cu: goto label_7F31C61C;
    case 0x7F31C620u: goto label_7F31C620;
    case 0x7F31C624u: goto label_7F31C624;
    case 0x7F31C628u: goto label_7F31C628;
    case 0x7F31C62Cu: goto label_7F31C62C;
    case 0x7F31C630u: goto label_7F31C630;
    case 0x7F31C634u: goto label_7F31C634;
    case 0x7F31C638u: goto label_7F31C638;
    case 0x7F31C63Cu: goto label_7F31C63C;
    case 0x7F31C640u: goto label_7F31C640;
    case 0x7F31C644u: goto label_7F31C644;
    case 0x7F31C648u: goto label_7F31C648;
    case 0x7F31C64Cu: goto label_7F31C64C;
    case 0x7F31C650u: goto label_7F31C650;
    case 0x7F31C654u: goto label_7F31C654;
    case 0x7F31C658u: goto label_7F31C658;
    case 0x7F31C65Cu: goto label_7F31C65C;
    case 0x7F31C660u: goto label_7F31C660;
    case 0x7F31C664u: goto label_7F31C664;
    case 0x7F31C668u: goto label_7F31C668;
    case 0x7F31C66Cu: goto label_7F31C66C;
    case 0x7F31C670u: goto label_7F31C670;
    case 0x7F31C674u: goto label_7F31C674;
    case 0x7F31C678u: goto label_7F31C678;
    case 0x7F31C67Cu: goto label_7F31C67C;
    case 0x7F31C680u: goto label_7F31C680;
    case 0x7F31C684u: goto label_7F31C684;
    case 0x7F31C688u: goto label_7F31C688;
    case 0x7F31C68Cu: goto label_7F31C68C;
    case 0x7F31C690u: goto label_7F31C690;
    case 0x7F31C694u: goto label_7F31C694;
    case 0x7F31C698u: goto label_7F31C698;
    case 0x7F31C69Cu: goto label_7F31C69C;
    case 0x7F31C6A0u: goto label_7F31C6A0;
    case 0x7F31C6A4u: goto label_7F31C6A4;
    case 0x7F31C6A8u: goto label_7F31C6A8;
    case 0x7F31C6ACu: goto label_7F31C6AC;
    case 0x7F31C6B0u: goto label_7F31C6B0;
    case 0x7F31C6B4u: goto label_7F31C6B4;
    case 0x7F31C6B8u: goto label_7F31C6B8;
    case 0x7F31C6BCu: goto label_7F31C6BC;
    case 0x7F31C6C0u: goto label_7F31C6C0;
    case 0x7F31C6C4u: goto label_7F31C6C4;
    case 0x7F31C6C8u: goto label_7F31C6C8;
    case 0x7F31C6CCu: goto label_7F31C6CC;
    case 0x7F31C6D0u: goto label_7F31C6D0;
    case 0x7F31C6D4u: goto label_7F31C6D4;
    case 0x7F31C6D8u: goto label_7F31C6D8;
    case 0x7F31C6DCu: goto label_7F31C6DC;
    case 0x7F31C6E0u: goto label_7F31C6E0;
    case 0x7F31C6E4u: goto label_7F31C6E4;
    case 0x7F31C6E8u: goto label_7F31C6E8;
    case 0x7F31C6ECu: goto label_7F31C6EC;
    case 0x7F31C6F0u: goto label_7F31C6F0;
    case 0x7F31C6F4u: goto label_7F31C6F4;
    case 0x7F31C6F8u: goto label_7F31C6F8;
    case 0x7F31C6FCu: goto label_7F31C6FC;
    case 0x7F31C700u: goto label_7F31C700;
    case 0x7F31C704u: goto label_7F31C704;
    case 0x7F31C708u: goto label_7F31C708;
    case 0x7F31C70Cu: goto label_7F31C70C;
    case 0x7F31C710u: goto label_7F31C710;
    case 0x7F31C714u: goto label_7F31C714;
    case 0x7F31C718u: goto label_7F31C718;
    case 0x7F31C71Cu: goto label_7F31C71C;
    case 0x7F31C720u: goto label_7F31C720;
    case 0x7F31C724u: goto label_7F31C724;
    case 0x7F31C728u: goto label_7F31C728;
    case 0x7F31C72Cu: goto label_7F31C72C;
    case 0x7F31C730u: goto label_7F31C730;
    case 0x7F31C734u: goto label_7F31C734;
    case 0x7F31C738u: goto label_7F31C738;
    case 0x7F31C73Cu: goto label_7F31C73C;
    case 0x7F31C740u: goto label_7F31C740;
    case 0x7F31C744u: goto label_7F31C744;
    case 0x7F31C748u: goto label_7F31C748;
    case 0x7F31C74Cu: goto label_7F31C74C;
    case 0x7F31C750u: goto label_7F31C750;
    case 0x7F31C754u: goto label_7F31C754;
    case 0x7F31C758u: goto label_7F31C758;
    case 0x7F31C75Cu: goto label_7F31C75C;
    case 0x7F31C760u: goto label_7F31C760;
    case 0x7F31C764u: goto label_7F31C764;
    case 0x7F31C768u: goto label_7F31C768;
    case 0x7F31C76Cu: goto label_7F31C76C;
    case 0x7F31C770u: goto label_7F31C770;
    case 0x7F31C774u: goto label_7F31C774;
    case 0x7F31C778u: goto label_7F31C778;
    case 0x7F31C77Cu: goto label_7F31C77C;
    case 0x7F31C780u: goto label_7F31C780;
    case 0x7F31C784u: goto label_7F31C784;
    case 0x7F31C788u: goto label_7F31C788;
    case 0x7F31C78Cu: goto label_7F31C78C;
    case 0x7F31C790u: goto label_7F31C790;
    case 0x7F31C794u: goto label_7F31C794;
    case 0x7F31C798u: goto label_7F31C798;
    case 0x7F31C79Cu: goto label_7F31C79C;
    case 0x7F31C7A0u: goto label_7F31C7A0;
    case 0x7F31C7A4u: goto label_7F31C7A4;
    case 0x7F31C7A8u: goto label_7F31C7A8;
    case 0x7F31C7ACu: goto label_7F31C7AC;
    case 0x7F31C7B0u: goto label_7F31C7B0;
    case 0x7F31C7B4u: goto label_7F31C7B4;
    case 0x7F31C7B8u: goto label_7F31C7B8;
    case 0x7F31C7BCu: goto label_7F31C7BC;
    case 0x7F31C7C0u: goto label_7F31C7C0;
    case 0x7F31C7C4u: goto label_7F31C7C4;
    case 0x7F31C7C8u: goto label_7F31C7C8;
    case 0x7F31C7CCu: goto label_7F31C7CC;
    case 0x7F31C7D0u: goto label_7F31C7D0;
    case 0x7F31C7D4u: goto label_7F31C7D4;
    case 0x7F31C7D8u: goto label_7F31C7D8;
    case 0x7F31C7DCu: goto label_7F31C7DC;
    case 0x7F31C7E0u: goto label_7F31C7E0;
    case 0x7F31C7E4u: goto label_7F31C7E4;
    case 0x7F31C7E8u: goto label_7F31C7E8;
    case 0x7F31C7ECu: goto label_7F31C7EC;
    case 0x7F31C7F0u: goto label_7F31C7F0;
    case 0x7F31C7F4u: goto label_7F31C7F4;
    case 0x7F31C7F8u: goto label_7F31C7F8;
    case 0x7F31C7FCu: goto label_7F31C7FC;
    case 0x7F31C800u: goto label_7F31C800;
    case 0x7F31C804u: goto label_7F31C804;
    case 0x7F31C808u: goto label_7F31C808;
    case 0x7F31C80Cu: goto label_7F31C80C;
    case 0x7F31C810u: goto label_7F31C810;
    case 0x7F31C814u: goto label_7F31C814;
    case 0x7F31C818u: goto label_7F31C818;
    case 0x7F31C81Cu: goto label_7F31C81C;
    case 0x7F31C820u: goto label_7F31C820;
    case 0x7F31C824u: goto label_7F31C824;
    case 0x7F31C828u: goto label_7F31C828;
    case 0x7F31C82Cu: goto label_7F31C82C;
    case 0x7F31C830u: goto label_7F31C830;
    case 0x7F31C834u: goto label_7F31C834;
    case 0x7F31C838u: goto label_7F31C838;
    case 0x7F31C83Cu: goto label_7F31C83C;
    case 0x7F31C840u: goto label_7F31C840;
    case 0x7F31C844u: goto label_7F31C844;
    case 0x7F31C848u: goto label_7F31C848;
    case 0x7F31C84Cu: goto label_7F31C84C;
    case 0x7F31C850u: goto label_7F31C850;
    case 0x7F31C854u: goto label_7F31C854;
    case 0x7F31C858u: goto label_7F31C858;
    case 0x7F31C85Cu: goto label_7F31C85C;
    case 0x7F31C860u: goto label_7F31C860;
    case 0x7F31C864u: goto label_7F31C864;
    case 0x7F31C868u: goto label_7F31C868;
    case 0x7F31C86Cu: goto label_7F31C86C;
    case 0x7F31C870u: goto label_7F31C870;
    case 0x7F31C874u: goto label_7F31C874;
    case 0x7F31C878u: goto label_7F31C878;
    case 0x7F31C87Cu: goto label_7F31C87C;
    case 0x7F31C880u: goto label_7F31C880;
    case 0x7F31C884u: goto label_7F31C884;
    case 0x7F31C888u: goto label_7F31C888;
    case 0x7F31C88Cu: goto label_7F31C88C;
    case 0x7F31C890u: goto label_7F31C890;
    case 0x7F31C894u: goto label_7F31C894;
    case 0x7F31C898u: goto label_7F31C898;
    case 0x7F31C89Cu: goto label_7F31C89C;
    case 0x7F31C8A0u: goto label_7F31C8A0;
    case 0x7F31C8A4u: goto label_7F31C8A4;
    case 0x7F31C8A8u: goto label_7F31C8A8;
    case 0x7F31C8ACu: goto label_7F31C8AC;
    case 0x7F31C8B0u: goto label_7F31C8B0;
    case 0x7F31C8B4u: goto label_7F31C8B4;
    case 0x7F31C8B8u: goto label_7F31C8B8;
    case 0x7F31C8BCu: goto label_7F31C8BC;
    case 0x7F31C8C0u: goto label_7F31C8C0;
    case 0x7F31C8C4u: goto label_7F31C8C4;
    case 0x7F31C8C8u: goto label_7F31C8C8;
    case 0x7F31C8CCu: goto label_7F31C8CC;
    case 0x7F31C8D0u: goto label_7F31C8D0;
    case 0x7F31C8D4u: goto label_7F31C8D4;
    case 0x7F31C8D8u: goto label_7F31C8D8;
    case 0x7F31C8DCu: goto label_7F31C8DC;
    case 0x7F31C8E0u: goto label_7F31C8E0;
    case 0x7F31C8E4u: goto label_7F31C8E4;
    case 0x7F31C8E8u: goto label_7F31C8E8;
    case 0x7F31C8ECu: goto label_7F31C8EC;
    case 0x7F31C8F0u: goto label_7F31C8F0;
    case 0x7F31C8F4u: goto label_7F31C8F4;
    case 0x7F31C8F8u: goto label_7F31C8F8;
    case 0x7F31C8FCu: goto label_7F31C8FC;
    case 0x7F31C900u: goto label_7F31C900;
    case 0x7F31C904u: goto label_7F31C904;
    case 0x7F31C908u: goto label_7F31C908;
    case 0x7F31C90Cu: goto label_7F31C90C;
    case 0x7F31C910u: goto label_7F31C910;
    case 0x7F31C914u: goto label_7F31C914;
    case 0x7F31C918u: goto label_7F31C918;
    case 0x7F31C91Cu: goto label_7F31C91C;
    case 0x7F31C920u: goto label_7F31C920;
    case 0x7F31C924u: goto label_7F31C924;
    case 0x7F31C928u: goto label_7F31C928;
    case 0x7F31C92Cu: goto label_7F31C92C;
    case 0x7F31C930u: goto label_7F31C930;
    case 0x7F31C934u: goto label_7F31C934;
    case 0x7F31C938u: goto label_7F31C938;
    case 0x7F31C93Cu: goto label_7F31C93C;
    case 0x7F31C940u: goto label_7F31C940;
    case 0x7F31C944u: goto label_7F31C944;
    case 0x7F31C948u: goto label_7F31C948;
    case 0x7F31C94Cu: goto label_7F31C94C;
    case 0x7F31C950u: goto label_7F31C950;
    case 0x7F31C954u: goto label_7F31C954;
    case 0x7F31C958u: goto label_7F31C958;
    case 0x7F31C95Cu: goto label_7F31C95C;
    case 0x7F31C960u: goto label_7F31C960;
    case 0x7F31C964u: goto label_7F31C964;
    case 0x7F31C968u: goto label_7F31C968;
    case 0x7F31C96Cu: goto label_7F31C96C;
    case 0x7F31C970u: goto label_7F31C970;
    case 0x7F31C974u: goto label_7F31C974;
    case 0x7F31C978u: goto label_7F31C978;
    case 0x7F31C97Cu: goto label_7F31C97C;
    case 0x7F31C980u: goto label_7F31C980;
    case 0x7F31C984u: goto label_7F31C984;
    case 0x7F31C988u: goto label_7F31C988;
    case 0x7F31C98Cu: goto label_7F31C98C;
    case 0x7F31C990u: goto label_7F31C990;
    case 0x7F31C994u: goto label_7F31C994;
    case 0x7F31C998u: goto label_7F31C998;
    case 0x7F31C99Cu: goto label_7F31C99C;
    case 0x7F31C9A0u: goto label_7F31C9A0;
    case 0x7F31C9A4u: goto label_7F31C9A4;
    case 0x7F31C9A8u: goto label_7F31C9A8;
    case 0x7F31C9ACu: goto label_7F31C9AC;
    case 0x7F31C9B0u: goto label_7F31C9B0;
    case 0x7F31C9B4u: goto label_7F31C9B4;
    case 0x7F31C9B8u: goto label_7F31C9B8;
    case 0x7F31C9BCu: goto label_7F31C9BC;
    case 0x7F31C9C0u: goto label_7F31C9C0;
    case 0x7F31C9C4u: goto label_7F31C9C4;
    case 0x7F31C9C8u: goto label_7F31C9C8;
    case 0x7F31C9CCu: goto label_7F31C9CC;
    case 0x7F31C9D0u: goto label_7F31C9D0;
    case 0x7F31C9D4u: goto label_7F31C9D4;
    case 0x7F31C9D8u: goto label_7F31C9D8;
    case 0x7F31C9DCu: goto label_7F31C9DC;
    case 0x7F31C9E0u: goto label_7F31C9E0;
    case 0x7F31C9E4u: goto label_7F31C9E4;
    case 0x7F31C9E8u: goto label_7F31C9E8;
    case 0x7F31C9ECu: goto label_7F31C9EC;
    case 0x7F31C9F0u: goto label_7F31C9F0;
    case 0x7F31C9F4u: goto label_7F31C9F4;
    case 0x7F31C9F8u: goto label_7F31C9F8;
    case 0x7F31C9FCu: goto label_7F31C9FC;
    case 0x7F31CA00u: goto label_7F31CA00;
    case 0x7F31CA04u: goto label_7F31CA04;
    case 0x7F31CA08u: goto label_7F31CA08;
    case 0x7F31CA0Cu: goto label_7F31CA0C;
    case 0x7F31CA10u: goto label_7F31CA10;
    case 0x7F31CA14u: goto label_7F31CA14;
    case 0x7F31CA18u: goto label_7F31CA18;
    case 0x7F31CA1Cu: goto label_7F31CA1C;
    case 0x7F31CA20u: goto label_7F31CA20;
    case 0x7F31CA24u: goto label_7F31CA24;
    case 0x7F31CA28u: goto label_7F31CA28;
    case 0x7F31CA2Cu: goto label_7F31CA2C;
    case 0x7F31CA30u: goto label_7F31CA30;
    case 0x7F31CA34u: goto label_7F31CA34;
    case 0x7F31CA38u: goto label_7F31CA38;
    case 0x7F31CA3Cu: goto label_7F31CA3C;
    case 0x7F31CA40u: goto label_7F31CA40;
    case 0x7F31CA44u: goto label_7F31CA44;
    case 0x7F31CA48u: goto label_7F31CA48;
    case 0x7F31CA4Cu: goto label_7F31CA4C;
    case 0x7F31CA50u: goto label_7F31CA50;
    case 0x7F31CA54u: goto label_7F31CA54;
    case 0x7F31CA58u: goto label_7F31CA58;
    case 0x7F31CA5Cu: goto label_7F31CA5C;
    case 0x7F31CA60u: goto label_7F31CA60;
    case 0x7F31CA64u: goto label_7F31CA64;
    case 0x7F31CA68u: goto label_7F31CA68;
    case 0x7F31CA6Cu: goto label_7F31CA6C;
    case 0x7F31CA70u: goto label_7F31CA70;
    case 0x7F31CA74u: goto label_7F31CA74;
    case 0x7F31CA78u: goto label_7F31CA78;
    case 0x7F31CA7Cu: goto label_7F31CA7C;
    case 0x7F31CA80u: goto label_7F31CA80;
    case 0x7F31CA84u: goto label_7F31CA84;
    case 0x7F31CA88u: goto label_7F31CA88;
    case 0x7F31CA8Cu: goto label_7F31CA8C;
    case 0x7F31CA90u: goto label_7F31CA90;
    case 0x7F31CA94u: goto label_7F31CA94;
    case 0x7F31CA98u: goto label_7F31CA98;
    case 0x7F31CA9Cu: goto label_7F31CA9C;
    case 0x7F31CAA0u: goto label_7F31CAA0;
    case 0x7F31CAA4u: goto label_7F31CAA4;
    case 0x7F31CAA8u: goto label_7F31CAA8;
    case 0x7F31CAACu: goto label_7F31CAAC;
    case 0x7F31CAB0u: goto label_7F31CAB0;
    case 0x7F31CAB4u: goto label_7F31CAB4;
    case 0x7F31CAB8u: goto label_7F31CAB8;
    case 0x7F31CABCu: goto label_7F31CABC;
    case 0x7F31CAC0u: goto label_7F31CAC0;
    case 0x7F31CAC4u: goto label_7F31CAC4;
    case 0x7F31CAC8u: goto label_7F31CAC8;
    case 0x7F31CACCu: goto label_7F31CACC;
    case 0x7F31CAD0u: goto label_7F31CAD0;
    case 0x7F31CAD4u: goto label_7F31CAD4;
    case 0x7F31CAD8u: goto label_7F31CAD8;
    case 0x7F31CADCu: goto label_7F31CADC;
    case 0x7F31CAE0u: goto label_7F31CAE0;
    case 0x7F31CAE4u: goto label_7F31CAE4;
    case 0x7F31CAE8u: goto label_7F31CAE8;
    case 0x7F31CAECu: goto label_7F31CAEC;
    case 0x7F31CAF0u: goto label_7F31CAF0;
    case 0x7F31CAF4u: goto label_7F31CAF4;
    case 0x7F31CAF8u: goto label_7F31CAF8;
    case 0x7F31CAFCu: goto label_7F31CAFC;
    case 0x7F31CB00u: goto label_7F31CB00;
    case 0x7F31CB04u: goto label_7F31CB04;
    case 0x7F31CB08u: goto label_7F31CB08;
    case 0x7F31CB0Cu: goto label_7F31CB0C;
    case 0x7F31CB10u: goto label_7F31CB10;
    case 0x7F31CB14u: goto label_7F31CB14;
    case 0x7F31CB18u: goto label_7F31CB18;
    case 0x7F31CB1Cu: goto label_7F31CB1C;
    case 0x7F31CB20u: goto label_7F31CB20;
    case 0x7F31CB24u: goto label_7F31CB24;
    case 0x7F31CB28u: goto label_7F31CB28;
    case 0x7F31CB2Cu: goto label_7F31CB2C;
    case 0x7F31CB30u: goto label_7F31CB30;
    case 0x7F31CB34u: goto label_7F31CB34;
    case 0x7F31CB38u: goto label_7F31CB38;
    case 0x7F31CB3Cu: goto label_7F31CB3C;
    case 0x7F31CB40u: goto label_7F31CB40;
    case 0x7F31CB44u: goto label_7F31CB44;
    case 0x7F31CB48u: goto label_7F31CB48;
    case 0x7F31CB4Cu: goto label_7F31CB4C;
    case 0x7F31CB50u: goto label_7F31CB50;
    case 0x7F31CB54u: goto label_7F31CB54;
    case 0x7F31CB58u: goto label_7F31CB58;
    case 0x7F31CB5Cu: goto label_7F31CB5C;
    case 0x7F31CB60u: goto label_7F31CB60;
    case 0x7F31CB64u: goto label_7F31CB64;
    case 0x7F31CB68u: goto label_7F31CB68;
    case 0x7F31CB6Cu: goto label_7F31CB6C;
    case 0x7F31CB70u: goto label_7F31CB70;
    case 0x7F31CB74u: goto label_7F31CB74;
    case 0x7F31CB78u: goto label_7F31CB78;
    case 0x7F31CB7Cu: goto label_7F31CB7C;
    case 0x7F31CB80u: goto label_7F31CB80;
    case 0x7F31CB84u: goto label_7F31CB84;
    case 0x7F31CB88u: goto label_7F31CB88;
    case 0x7F31CB8Cu: goto label_7F31CB8C;
    case 0x7F31CB90u: goto label_7F31CB90;
    case 0x7F31CB94u: goto label_7F31CB94;
    case 0x7F31CB98u: goto label_7F31CB98;
    case 0x7F31CB9Cu: goto label_7F31CB9C;
    case 0x7F31CBA0u: goto label_7F31CBA0;
    case 0x7F31CBA4u: goto label_7F31CBA4;
    case 0x7F31CBA8u: goto label_7F31CBA8;
    case 0x7F31CBACu: goto label_7F31CBAC;
    case 0x7F31CBB0u: goto label_7F31CBB0;
    case 0x7F31CBB4u: goto label_7F31CBB4;
    case 0x7F31CBB8u: goto label_7F31CBB8;
    case 0x7F31CBBCu: goto label_7F31CBBC;
    case 0x7F31CBC0u: goto label_7F31CBC0;
    case 0x7F31CBC4u: goto label_7F31CBC4;
    case 0x7F31CBC8u: goto label_7F31CBC8;
    case 0x7F31CBCCu: goto label_7F31CBCC;
    case 0x7F31CBD0u: goto label_7F31CBD0;
    case 0x7F31CBD4u: goto label_7F31CBD4;
    case 0x7F31CBD8u: goto label_7F31CBD8;
    case 0x7F31CBDCu: goto label_7F31CBDC;
    case 0x7F31CBE0u: goto label_7F31CBE0;
    case 0x7F31CBE4u: goto label_7F31CBE4;
    case 0x7F31CBE8u: goto label_7F31CBE8;
    case 0x7F31CBECu: goto label_7F31CBEC;
    case 0x7F31CBF0u: goto label_7F31CBF0;
    case 0x7F31CBF4u: goto label_7F31CBF4;
    case 0x7F31CBF8u: goto label_7F31CBF8;
    case 0x7F31CBFCu: goto label_7F31CBFC;
    case 0x7F31CC00u: goto label_7F31CC00;
    case 0x7F31CC04u: goto label_7F31CC04;
    case 0x7F31CC08u: goto label_7F31CC08;
    case 0x7F31CC0Cu: goto label_7F31CC0C;
    case 0x7F31CC10u: goto label_7F31CC10;
    case 0x7F31CC14u: goto label_7F31CC14;
    case 0x7F31CC18u: goto label_7F31CC18;
    case 0x7F31CC1Cu: goto label_7F31CC1C;
    case 0x7F31CC20u: goto label_7F31CC20;
    case 0x7F31CC24u: goto label_7F31CC24;
    case 0x7F31CC28u: goto label_7F31CC28;
    case 0x7F31CC2Cu: goto label_7F31CC2C;
    case 0x7F31CC30u: goto label_7F31CC30;
    case 0x7F31CC34u: goto label_7F31CC34;
    case 0x7F31CC38u: goto label_7F31CC38;
    case 0x7F31CC3Cu: goto label_7F31CC3C;
    case 0x7F31CC40u: goto label_7F31CC40;
    case 0x7F31CC44u: goto label_7F31CC44;
    case 0x7F31CC48u: goto label_7F31CC48;
    case 0x7F31CC4Cu: goto label_7F31CC4C;
    case 0x7F31CC50u: goto label_7F31CC50;
    case 0x7F31CC54u: goto label_7F31CC54;
    case 0x7F31CC58u: goto label_7F31CC58;
    case 0x7F31CC5Cu: goto label_7F31CC5C;
    case 0x7F31CC60u: goto label_7F31CC60;
    case 0x7F31CC64u: goto label_7F31CC64;
    case 0x7F31CC68u: goto label_7F31CC68;
    case 0x7F31CC6Cu: goto label_7F31CC6C;
    case 0x7F31CC70u: goto label_7F31CC70;
    case 0x7F31CC74u: goto label_7F31CC74;
    case 0x7F31CC78u: goto label_7F31CC78;
    case 0x7F31CC7Cu: goto label_7F31CC7C;
    case 0x7F31CC80u: goto label_7F31CC80;
    case 0x7F31CC84u: goto label_7F31CC84;
    case 0x7F31CC88u: goto label_7F31CC88;
    case 0x7F31CC8Cu: goto label_7F31CC8C;
    case 0x7F31CC90u: goto label_7F31CC90;
    case 0x7F31CC94u: goto label_7F31CC94;
    case 0x7F31CC98u: goto label_7F31CC98;
    case 0x7F31CC9Cu: goto label_7F31CC9C;
    case 0x7F31CCA0u: goto label_7F31CCA0;
    case 0x7F31CCA4u: goto label_7F31CCA4;
    case 0x7F31CCA8u: goto label_7F31CCA8;
    case 0x7F31CCACu: goto label_7F31CCAC;
    case 0x7F31CCB0u: goto label_7F31CCB0;
    case 0x7F31CCB4u: goto label_7F31CCB4;
    case 0x7F31CCB8u: goto label_7F31CCB8;
    case 0x7F31CCBCu: goto label_7F31CCBC;
    case 0x7F31CCC0u: goto label_7F31CCC0;
    case 0x7F31CCC4u: goto label_7F31CCC4;
    case 0x7F31CCC8u: goto label_7F31CCC8;
    case 0x7F31CCCCu: goto label_7F31CCCC;
    case 0x7F31CCD0u: goto label_7F31CCD0;
    case 0x7F31CCD4u: goto label_7F31CCD4;
    case 0x7F31CCD8u: goto label_7F31CCD8;
    case 0x7F31CCDCu: goto label_7F31CCDC;
    case 0x7F31CCE0u: goto label_7F31CCE0;
    case 0x7F31CCE4u: goto label_7F31CCE4;
    case 0x7F31CCE8u: goto label_7F31CCE8;
    case 0x7F31CCECu: goto label_7F31CCEC;
    case 0x7F31CCF0u: goto label_7F31CCF0;
    case 0x7F31CCF4u: goto label_7F31CCF4;
    case 0x7F31CCF8u: goto label_7F31CCF8;
    case 0x7F31CCFCu: goto label_7F31CCFC;
    case 0x7F31CD00u: goto label_7F31CD00;
    case 0x7F31CD04u: goto label_7F31CD04;
    case 0x7F31CD08u: goto label_7F31CD08;
    case 0x7F31CD0Cu: goto label_7F31CD0C;
    case 0x7F31CD10u: goto label_7F31CD10;
    case 0x7F31CD14u: goto label_7F31CD14;
    case 0x7F31CD18u: goto label_7F31CD18;
    case 0x7F31CD1Cu: goto label_7F31CD1C;
    case 0x7F31CD20u: goto label_7F31CD20;
    case 0x7F31CD24u: goto label_7F31CD24;
    case 0x7F31CD28u: goto label_7F31CD28;
    case 0x7F31CD2Cu: goto label_7F31CD2C;
    case 0x7F31CD30u: goto label_7F31CD30;
    case 0x7F31CD34u: goto label_7F31CD34;
    case 0x7F31CD38u: goto label_7F31CD38;
    case 0x7F31CD3Cu: goto label_7F31CD3C;
    case 0x7F31CD40u: goto label_7F31CD40;
    case 0x7F31CD44u: goto label_7F31CD44;
    case 0x7F31CD48u: goto label_7F31CD48;
    case 0x7F31CD4Cu: goto label_7F31CD4C;
    case 0x7F31CD50u: goto label_7F31CD50;
    case 0x7F31CD54u: goto label_7F31CD54;
    case 0x7F31CD58u: goto label_7F31CD58;
    case 0x7F31CD5Cu: goto label_7F31CD5C;
    case 0x7F31CD60u: goto label_7F31CD60;
    case 0x7F31CD64u: goto label_7F31CD64;
    case 0x7F31CD68u: goto label_7F31CD68;
    case 0x7F31CD6Cu: goto label_7F31CD6C;
    case 0x7F31CD70u: goto label_7F31CD70;
    case 0x7F31CD74u: goto label_7F31CD74;
    case 0x7F31CD78u: goto label_7F31CD78;
    case 0x7F31CD7Cu: goto label_7F31CD7C;
    case 0x7F31CD80u: goto label_7F31CD80;
    case 0x7F31CD84u: goto label_7F31CD84;
    case 0x7F31CD88u: goto label_7F31CD88;
    case 0x7F31CD8Cu: goto label_7F31CD8C;
    case 0x7F31CD90u: goto label_7F31CD90;
    case 0x7F31CD94u: goto label_7F31CD94;
    case 0x7F31CD98u: goto label_7F31CD98;
    case 0x7F31CD9Cu: goto label_7F31CD9C;
    case 0x7F31CDA0u: goto label_7F31CDA0;
    case 0x7F31CDA4u: goto label_7F31CDA4;
    case 0x7F31CDA8u: goto label_7F31CDA8;
    case 0x7F31CDACu: goto label_7F31CDAC;
    case 0x7F31CDB0u: goto label_7F31CDB0;
    case 0x7F31CDB4u: goto label_7F31CDB4;
    case 0x7F31CDB8u: goto label_7F31CDB8;
    case 0x7F31CDBCu: goto label_7F31CDBC;
    case 0x7F31CDC0u: goto label_7F31CDC0;
    case 0x7F31CDC4u: goto label_7F31CDC4;
    case 0x7F31CDC8u: goto label_7F31CDC8;
    case 0x7F31CDCCu: goto label_7F31CDCC;
    case 0x7F31CDD0u: goto label_7F31CDD0;
    case 0x7F31CDD4u: goto label_7F31CDD4;
    case 0x7F31CDD8u: goto label_7F31CDD8;
    case 0x7F31CDDCu: goto label_7F31CDDC;
    case 0x7F31CDE0u: goto label_7F31CDE0;
    case 0x7F31CDE4u: goto label_7F31CDE4;
    case 0x7F31CDE8u: goto label_7F31CDE8;
    case 0x7F31CDECu: goto label_7F31CDEC;
    case 0x7F31CDF0u: goto label_7F31CDF0;
    case 0x7F31CDF4u: goto label_7F31CDF4;
    case 0x7F31CDF8u: goto label_7F31CDF8;
    case 0x7F31CDFCu: goto label_7F31CDFC;
    case 0x7F31CE00u: goto label_7F31CE00;
    case 0x7F31CE04u: goto label_7F31CE04;
    case 0x7F31CE08u: goto label_7F31CE08;
    case 0x7F31CE0Cu: goto label_7F31CE0C;
    case 0x7F31CE10u: goto label_7F31CE10;
    case 0x7F31CE14u: goto label_7F31CE14;
    case 0x7F31CE18u: goto label_7F31CE18;
    case 0x7F31CE1Cu: goto label_7F31CE1C;
    case 0x7F31CE20u: goto label_7F31CE20;
    case 0x7F31CE24u: goto label_7F31CE24;
    case 0x7F31CE28u: goto label_7F31CE28;
    case 0x7F31CE2Cu: goto label_7F31CE2C;
    case 0x7F31CE30u: goto label_7F31CE30;
    case 0x7F31CE34u: goto label_7F31CE34;
    case 0x7F31CE38u: goto label_7F31CE38;
    case 0x7F31CE3Cu: goto label_7F31CE3C;
    case 0x7F31CE40u: goto label_7F31CE40;
    case 0x7F31CE44u: goto label_7F31CE44;
    case 0x7F31CE48u: goto label_7F31CE48;
    case 0x7F31CE4Cu: goto label_7F31CE4C;
    case 0x7F31CE50u: goto label_7F31CE50;
    case 0x7F31CE54u: goto label_7F31CE54;
    case 0x7F31CE58u: goto label_7F31CE58;
    case 0x7F31CE5Cu: goto label_7F31CE5C;
    case 0x7F31CE60u: goto label_7F31CE60;
    case 0x7F31CE64u: goto label_7F31CE64;
    case 0x7F31CE68u: goto label_7F31CE68;
    case 0x7F31CE6Cu: goto label_7F31CE6C;
    case 0x7F31CE70u: goto label_7F31CE70;
    case 0x7F31CE74u: goto label_7F31CE74;
    case 0x7F31CE78u: goto label_7F31CE78;
    case 0x7F31CE7Cu: goto label_7F31CE7C;
    case 0x7F31CE80u: goto label_7F31CE80;
    case 0x7F31CE84u: goto label_7F31CE84;
    case 0x7F31CE88u: goto label_7F31CE88;
    case 0x7F31CE8Cu: goto label_7F31CE8C;
    case 0x7F31CE90u: goto label_7F31CE90;
    case 0x7F31CE94u: goto label_7F31CE94;
    case 0x7F31CE98u: goto label_7F31CE98;
    case 0x7F31CE9Cu: goto label_7F31CE9C;
    case 0x7F31CEA0u: goto label_7F31CEA0;
    case 0x7F31CEA4u: goto label_7F31CEA4;
    case 0x7F31CEA8u: goto label_7F31CEA8;
    case 0x7F31CEACu: goto label_7F31CEAC;
    case 0x7F31CEB0u: goto label_7F31CEB0;
    case 0x7F31CEB4u: goto label_7F31CEB4;
    case 0x7F31CEB8u: goto label_7F31CEB8;
    case 0x7F31CEBCu: goto label_7F31CEBC;
    case 0x7F31CEC0u: goto label_7F31CEC0;
    case 0x7F31CEC4u: goto label_7F31CEC4;
    case 0x7F31CEC8u: goto label_7F31CEC8;
    case 0x7F31CECCu: goto label_7F31CECC;
    case 0x7F31CED0u: goto label_7F31CED0;
    case 0x7F31CED4u: goto label_7F31CED4;
    case 0x7F31CED8u: goto label_7F31CED8;
    case 0x7F31CEDCu: goto label_7F31CEDC;
    case 0x7F31CEE0u: goto label_7F31CEE0;
    case 0x7F31CEE4u: goto label_7F31CEE4;
    case 0x7F31CEE8u: goto label_7F31CEE8;
    case 0x7F31CEECu: goto label_7F31CEEC;
    case 0x7F31CEF0u: goto label_7F31CEF0;
    case 0x7F31CEF4u: goto label_7F31CEF4;
    case 0x7F31CEF8u: goto label_7F31CEF8;
    case 0x7F31CEFCu: goto label_7F31CEFC;
    case 0x7F31CF00u: goto label_7F31CF00;
    case 0x7F31CF04u: goto label_7F31CF04;
    case 0x7F31CF08u: goto label_7F31CF08;
    case 0x7F31CF0Cu: goto label_7F31CF0C;
    case 0x7F31CF10u: goto label_7F31CF10;
    case 0x7F31CF14u: goto label_7F31CF14;
    case 0x7F31CF18u: goto label_7F31CF18;
    case 0x7F31CF1Cu: goto label_7F31CF1C;
    case 0x7F31CF20u: goto label_7F31CF20;
    case 0x7F31CF24u: goto label_7F31CF24;
    case 0x7F31CF28u: goto label_7F31CF28;
    case 0x7F31CF2Cu: goto label_7F31CF2C;
    case 0x7F31CF30u: goto label_7F31CF30;
    case 0x7F31CF34u: goto label_7F31CF34;
    case 0x7F31CF38u: goto label_7F31CF38;
    case 0x7F31CF3Cu: goto label_7F31CF3C;
    case 0x7F31CF40u: goto label_7F31CF40;
    case 0x7F31CF44u: goto label_7F31CF44;
    case 0x7F31CF48u: goto label_7F31CF48;
    case 0x7F31CF4Cu: goto label_7F31CF4C;
    case 0x7F31CF50u: goto label_7F31CF50;
    case 0x7F31CF54u: goto label_7F31CF54;
    case 0x7F31CF58u: goto label_7F31CF58;
    case 0x7F31CF5Cu: goto label_7F31CF5C;
    case 0x7F31CF60u: goto label_7F31CF60;
    case 0x7F31CF64u: goto label_7F31CF64;
    case 0x7F31CF68u: goto label_7F31CF68;
    case 0x7F31CF6Cu: goto label_7F31CF6C;
    case 0x7F31CF70u: goto label_7F31CF70;
    case 0x7F31CF74u: goto label_7F31CF74;
    case 0x7F31CF78u: goto label_7F31CF78;
    case 0x7F31CF7Cu: goto label_7F31CF7C;
    case 0x7F31CF80u: goto label_7F31CF80;
    case 0x7F31CF84u: goto label_7F31CF84;
    case 0x7F31CF88u: goto label_7F31CF88;
    case 0x7F31CF8Cu: goto label_7F31CF8C;
    case 0x7F31CF90u: goto label_7F31CF90;
    case 0x7F31CF94u: goto label_7F31CF94;
    case 0x7F31CF98u: goto label_7F31CF98;
    case 0x7F31CF9Cu: goto label_7F31CF9C;
    case 0x7F31CFA0u: goto label_7F31CFA0;
    case 0x7F31CFA4u: goto label_7F31CFA4;
    case 0x7F31CFA8u: goto label_7F31CFA8;
    case 0x7F31CFACu: goto label_7F31CFAC;
    case 0x7F31CFB0u: goto label_7F31CFB0;
    case 0x7F31CFB4u: goto label_7F31CFB4;
    case 0x7F31CFB8u: goto label_7F31CFB8;
    case 0x7F31CFBCu: goto label_7F31CFBC;
    case 0x7F31CFC0u: goto label_7F31CFC0;
    case 0x7F31CFC4u: goto label_7F31CFC4;
    case 0x7F31CFC8u: goto label_7F31CFC8;
    case 0x7F31CFCCu: goto label_7F31CFCC;
    case 0x7F31CFD0u: goto label_7F31CFD0;
    case 0x7F31CFD4u: goto label_7F31CFD4;
    case 0x7F31CFD8u: goto label_7F31CFD8;
    case 0x7F31CFDCu: goto label_7F31CFDC;
    case 0x7F31CFE0u: goto label_7F31CFE0;
    case 0x7F31CFE4u: goto label_7F31CFE4;
    case 0x7F31CFE8u: goto label_7F31CFE8;
    case 0x7F31CFECu: goto label_7F31CFEC;
    case 0x7F31CFF0u: goto label_7F31CFF0;
    case 0x7F31CFF4u: goto label_7F31CFF4;
    case 0x7F31CFF8u: goto label_7F31CFF8;
    case 0x7F31CFFCu: goto label_7F31CFFC;
    case 0x7F31D000u: goto label_7F31D000;
    case 0x7F31D004u: goto label_7F31D004;
    case 0x7F31D008u: goto label_7F31D008;
    case 0x7F31D00Cu: goto label_7F31D00C;
    case 0x7F31D010u: goto label_7F31D010;
    case 0x7F31D014u: goto label_7F31D014;
    case 0x7F31D018u: goto label_7F31D018;
    case 0x7F31D01Cu: goto label_7F31D01C;
    case 0x7F31D020u: goto label_7F31D020;
    case 0x7F31D024u: goto label_7F31D024;
    case 0x7F31D028u: goto label_7F31D028;
    case 0x7F31D02Cu: goto label_7F31D02C;
    case 0x7F31D030u: goto label_7F31D030;
    case 0x7F31D034u: goto label_7F31D034;
    case 0x7F31D038u: goto label_7F31D038;
    case 0x7F31D03Cu: goto label_7F31D03C;
    case 0x7F31D040u: goto label_7F31D040;
    case 0x7F31D044u: goto label_7F31D044;
    case 0x7F31D048u: goto label_7F31D048;
    case 0x7F31D04Cu: goto label_7F31D04C;
    case 0x7F31D050u: goto label_7F31D050;
    case 0x7F31D054u: goto label_7F31D054;
    case 0x7F31D058u: goto label_7F31D058;
    case 0x7F31D05Cu: goto label_7F31D05C;
    case 0x7F31D060u: goto label_7F31D060;
    case 0x7F31D064u: goto label_7F31D064;
    case 0x7F31D068u: goto label_7F31D068;
    case 0x7F31D06Cu: goto label_7F31D06C;
    case 0x7F31D070u: goto label_7F31D070;
    case 0x7F31D074u: goto label_7F31D074;
    case 0x7F31D078u: goto label_7F31D078;
    case 0x7F31D07Cu: goto label_7F31D07C;
    case 0x7F31D080u: goto label_7F31D080;
    case 0x7F31D084u: goto label_7F31D084;
    case 0x7F31D088u: goto label_7F31D088;
    case 0x7F31D08Cu: goto label_7F31D08C;
    case 0x7F31D090u: goto label_7F31D090;
    case 0x7F31D094u: goto label_7F31D094;
    case 0x7F31D098u: goto label_7F31D098;
    case 0x7F31D09Cu: goto label_7F31D09C;
    case 0x7F31D0A0u: goto label_7F31D0A0;
    case 0x7F31D0A4u: goto label_7F31D0A4;
    case 0x7F31D0A8u: goto label_7F31D0A8;
    case 0x7F31D0ACu: goto label_7F31D0AC;
    case 0x7F31D0B0u: goto label_7F31D0B0;
    case 0x7F31D0B4u: goto label_7F31D0B4;
    case 0x7F31D0B8u: goto label_7F31D0B8;
    case 0x7F31D0BCu: goto label_7F31D0BC;
    case 0x7F31D0C0u: goto label_7F31D0C0;
    case 0x7F31D0C4u: goto label_7F31D0C4;
    case 0x7F31D0C8u: goto label_7F31D0C8;
    case 0x7F31D0CCu: goto label_7F31D0CC;
    case 0x7F31D0D0u: goto label_7F31D0D0;
    case 0x7F31D0D4u: goto label_7F31D0D4;
    case 0x7F31D0D8u: goto label_7F31D0D8;
    case 0x7F31D0DCu: goto label_7F31D0DC;
    case 0x7F31D0E0u: goto label_7F31D0E0;
    case 0x7F31D0E4u: goto label_7F31D0E4;
    case 0x7F31D0E8u: goto label_7F31D0E8;
    case 0x7F31D0ECu: goto label_7F31D0EC;
    case 0x7F31D0F0u: goto label_7F31D0F0;
    case 0x7F31D0F4u: goto label_7F31D0F4;
    case 0x7F31D0F8u: goto label_7F31D0F8;
    case 0x7F31D0FCu: goto label_7F31D0FC;
    case 0x7F31D100u: goto label_7F31D100;
    case 0x7F31D104u: goto label_7F31D104;
    case 0x7F31D108u: goto label_7F31D108;
    case 0x7F31D10Cu: goto label_7F31D10C;
    case 0x7F31D110u: goto label_7F31D110;
    case 0x7F31D114u: goto label_7F31D114;
    case 0x7F31D118u: goto label_7F31D118;
    case 0x7F31D11Cu: goto label_7F31D11C;
    case 0x7F31D120u: goto label_7F31D120;
    case 0x7F31D124u: goto label_7F31D124;
    case 0x7F31D128u: goto label_7F31D128;
    case 0x7F31D12Cu: goto label_7F31D12C;
    case 0x7F31D130u: goto label_7F31D130;
    case 0x7F31D134u: goto label_7F31D134;
    case 0x7F31D138u: goto label_7F31D138;
    case 0x7F31D13Cu: goto label_7F31D13C;
    case 0x7F31D140u: goto label_7F31D140;
    case 0x7F31D144u: goto label_7F31D144;
    case 0x7F31D148u: goto label_7F31D148;
    case 0x7F31D14Cu: goto label_7F31D14C;
    case 0x7F31D150u: goto label_7F31D150;
    case 0x7F31D154u: goto label_7F31D154;
    case 0x7F31D158u: goto label_7F31D158;
    case 0x7F31D15Cu: goto label_7F31D15C;
    case 0x7F31D160u: goto label_7F31D160;
    case 0x7F31D164u: goto label_7F31D164;
    case 0x7F31D168u: goto label_7F31D168;
    case 0x7F31D16Cu: goto label_7F31D16C;
    case 0x7F31D170u: goto label_7F31D170;
    case 0x7F31D174u: goto label_7F31D174;
    case 0x7F31D178u: goto label_7F31D178;
    case 0x7F31D17Cu: goto label_7F31D17C;
    case 0x7F31D180u: goto label_7F31D180;
    case 0x7F31D184u: goto label_7F31D184;
    case 0x7F31D188u: goto label_7F31D188;
    case 0x7F31D18Cu: goto label_7F31D18C;
    case 0x7F31D190u: goto label_7F31D190;
    case 0x7F31D194u: goto label_7F31D194;
    case 0x7F31D198u: goto label_7F31D198;
    case 0x7F31D19Cu: goto label_7F31D19C;
    case 0x7F31D1A0u: goto label_7F31D1A0;
    case 0x7F31D1A4u: goto label_7F31D1A4;
    case 0x7F31D1A8u: goto label_7F31D1A8;
    case 0x7F31D1ACu: goto label_7F31D1AC;
    case 0x7F31D1B0u: goto label_7F31D1B0;
    case 0x7F31D1B4u: goto label_7F31D1B4;
    case 0x7F31D1B8u: goto label_7F31D1B8;
    case 0x7F31D1BCu: goto label_7F31D1BC;
    case 0x7F31D1C0u: goto label_7F31D1C0;
    case 0x7F31D1C4u: goto label_7F31D1C4;
    case 0x7F31D1C8u: goto label_7F31D1C8;
    case 0x7F31D1CCu: goto label_7F31D1CC;
    case 0x7F31D1D0u: goto label_7F31D1D0;
    case 0x7F31D1D4u: goto label_7F31D1D4;
    case 0x7F31D1D8u: goto label_7F31D1D8;
    case 0x7F31D1DCu: goto label_7F31D1DC;
    case 0x7F31D1E0u: goto label_7F31D1E0;
    case 0x7F31D1E4u: goto label_7F31D1E4;
    case 0x7F31D1E8u: goto label_7F31D1E8;
    case 0x7F31D1ECu: goto label_7F31D1EC;
    case 0x7F31D1F0u: goto label_7F31D1F0;
    case 0x7F31D1F4u: goto label_7F31D1F4;
    case 0x7F31D1F8u: goto label_7F31D1F8;
    case 0x7F31D1FCu: goto label_7F31D1FC;
    case 0x7F31D200u: goto label_7F31D200;
    case 0x7F31D204u: goto label_7F31D204;
    case 0x7F31D208u: goto label_7F31D208;
    case 0x7F31D20Cu: goto label_7F31D20C;
    case 0x7F31D210u: goto label_7F31D210;
    case 0x7F31D214u: goto label_7F31D214;
    case 0x7F31D218u: goto label_7F31D218;
    case 0x7F31D21Cu: goto label_7F31D21C;
    case 0x7F31D220u: goto label_7F31D220;
    case 0x7F31D224u: goto label_7F31D224;
    case 0x7F31D228u: goto label_7F31D228;
    case 0x7F31D22Cu: goto label_7F31D22C;
    case 0x7F31D230u: goto label_7F31D230;
    case 0x7F31D234u: goto label_7F31D234;
    case 0x7F31D238u: goto label_7F31D238;
    case 0x7F31D23Cu: goto label_7F31D23C;
    case 0x7F31D240u: goto label_7F31D240;
    case 0x7F31D244u: goto label_7F31D244;
    case 0x7F31D248u: goto label_7F31D248;
    case 0x7F31D24Cu: goto label_7F31D24C;
    case 0x7F31D250u: goto label_7F31D250;
    case 0x7F31D254u: goto label_7F31D254;
    case 0x7F31D258u: goto label_7F31D258;
    case 0x7F31D25Cu: goto label_7F31D25C;
    case 0x7F31D260u: goto label_7F31D260;
    case 0x7F31D264u: goto label_7F31D264;
    case 0x7F31D268u: goto label_7F31D268;
    case 0x7F31D26Cu: goto label_7F31D26C;
    case 0x7F31D270u: goto label_7F31D270;
    case 0x7F31D274u: goto label_7F31D274;
    case 0x7F31D278u: goto label_7F31D278;
    case 0x7F31D27Cu: goto label_7F31D27C;
    case 0x7F31D280u: goto label_7F31D280;
    case 0x7F31D284u: goto label_7F31D284;
    case 0x7F31D288u: goto label_7F31D288;
    case 0x7F31D28Cu: goto label_7F31D28C;
    case 0x7F31D290u: goto label_7F31D290;
    case 0x7F31D294u: goto label_7F31D294;
    case 0x7F31D298u: goto label_7F31D298;
    case 0x7F31D29Cu: goto label_7F31D29C;
    case 0x7F31D2A0u: goto label_7F31D2A0;
    case 0x7F31D2A4u: goto label_7F31D2A4;
    case 0x7F31D2A8u: goto label_7F31D2A8;
    case 0x7F31D2ACu: goto label_7F31D2AC;
    case 0x7F31D2B0u: goto label_7F31D2B0;
    case 0x7F31D2B4u: goto label_7F31D2B4;
    case 0x7F31D2B8u: goto label_7F31D2B8;
    case 0x7F31D2BCu: goto label_7F31D2BC;
    case 0x7F31D2C0u: goto label_7F31D2C0;
    case 0x7F31D2C4u: goto label_7F31D2C4;
    case 0x7F31D2C8u: goto label_7F31D2C8;
    case 0x7F31D2CCu: goto label_7F31D2CC;
    case 0x7F31D2D0u: goto label_7F31D2D0;
    case 0x7F31D2D4u: goto label_7F31D2D4;
    case 0x7F31D2D8u: goto label_7F31D2D8;
    case 0x7F31D2DCu: goto label_7F31D2DC;
    case 0x7F31D2E0u: goto label_7F31D2E0;
    case 0x7F31D2E4u: goto label_7F31D2E4;
    case 0x7F31D2E8u: goto label_7F31D2E8;
    case 0x7F31D2ECu: goto label_7F31D2EC;
    case 0x7F31D2F0u: goto label_7F31D2F0;
    case 0x7F31D2F4u: goto label_7F31D2F4;
    case 0x7F31D2F8u: goto label_7F31D2F8;
    case 0x7F31D2FCu: goto label_7F31D2FC;
    case 0x7F31D300u: goto label_7F31D300;
    case 0x7F31D304u: goto label_7F31D304;
    case 0x7F31D308u: goto label_7F31D308;
    case 0x7F31D30Cu: goto label_7F31D30C;
    case 0x7F31D310u: goto label_7F31D310;
    case 0x7F31D314u: goto label_7F31D314;
    case 0x7F31D318u: goto label_7F31D318;
    case 0x7F31D31Cu: goto label_7F31D31C;
    case 0x7F31D320u: goto label_7F31D320;
    case 0x7F31D324u: goto label_7F31D324;
    case 0x7F31D328u: goto label_7F31D328;
    case 0x7F31D32Cu: goto label_7F31D32C;
    case 0x7F31D330u: goto label_7F31D330;
    case 0x7F31D334u: goto label_7F31D334;
    case 0x7F31D338u: goto label_7F31D338;
    case 0x7F31D33Cu: goto label_7F31D33C;
    case 0x7F31D340u: goto label_7F31D340;
    case 0x7F31D344u: goto label_7F31D344;
    case 0x7F31D348u: goto label_7F31D348;
    case 0x7F31D34Cu: goto label_7F31D34C;
    case 0x7F31D350u: goto label_7F31D350;
    case 0x7F31D354u: goto label_7F31D354;
    case 0x7F31D358u: goto label_7F31D358;
    case 0x7F31D35Cu: goto label_7F31D35C;
    case 0x7F31D360u: goto label_7F31D360;
    case 0x7F31D364u: goto label_7F31D364;
    case 0x7F31D368u: goto label_7F31D368;
    case 0x7F31D36Cu: goto label_7F31D36C;
    case 0x7F31D370u: goto label_7F31D370;
    case 0x7F31D374u: goto label_7F31D374;
    case 0x7F31D378u: goto label_7F31D378;
    case 0x7F31D37Cu: goto label_7F31D37C;
    case 0x7F31D380u: goto label_7F31D380;
    case 0x7F31D384u: goto label_7F31D384;
    case 0x7F31D388u: goto label_7F31D388;
    case 0x7F31D38Cu: goto label_7F31D38C;
    case 0x7F31D390u: goto label_7F31D390;
    case 0x7F31D394u: goto label_7F31D394;
    case 0x7F31D398u: goto label_7F31D398;
    case 0x7F31D39Cu: goto label_7F31D39C;
    case 0x7F31D3A0u: goto label_7F31D3A0;
    case 0x7F31D3A4u: goto label_7F31D3A4;
    case 0x7F31D3A8u: goto label_7F31D3A8;
    case 0x7F31D3ACu: goto label_7F31D3AC;
    case 0x7F31D3B0u: goto label_7F31D3B0;
    case 0x7F31D3B4u: goto label_7F31D3B4;
    case 0x7F31D3B8u: goto label_7F31D3B8;
    case 0x7F31D3BCu: goto label_7F31D3BC;
    case 0x7F31D3C0u: goto label_7F31D3C0;
    case 0x7F31D3C4u: goto label_7F31D3C4;
    case 0x7F31D3C8u: goto label_7F31D3C8;
    case 0x7F31D3CCu: goto label_7F31D3CC;
    case 0x7F31D3D0u: goto label_7F31D3D0;
    case 0x7F31D3D4u: goto label_7F31D3D4;
    case 0x7F31D3D8u: goto label_7F31D3D8;
    case 0x7F31D3DCu: goto label_7F31D3DC;
    case 0x7F31D3E0u: goto label_7F31D3E0;
    case 0x7F31D3E4u: goto label_7F31D3E4;
    case 0x7F31D3E8u: goto label_7F31D3E8;
    case 0x7F31D3ECu: goto label_7F31D3EC;
    case 0x7F31D3F0u: goto label_7F31D3F0;
    case 0x7F31D3F4u: goto label_7F31D3F4;
    case 0x7F31D3F8u: goto label_7F31D3F8;
    case 0x7F31D3FCu: goto label_7F31D3FC;
    case 0x7F31D400u: goto label_7F31D400;
    case 0x7F31D404u: goto label_7F31D404;
    case 0x7F31D408u: goto label_7F31D408;
    case 0x7F31D40Cu: goto label_7F31D40C;
    case 0x7F31D410u: goto label_7F31D410;
    case 0x7F31D414u: goto label_7F31D414;
    case 0x7F31D418u: goto label_7F31D418;
    case 0x7F31D41Cu: goto label_7F31D41C;
    case 0x7F31D420u: goto label_7F31D420;
    case 0x7F31D424u: goto label_7F31D424;
    case 0x7F31D428u: goto label_7F31D428;
    case 0x7F31D42Cu: goto label_7F31D42C;
    case 0x7F31D430u: goto label_7F31D430;
    case 0x7F31D434u: goto label_7F31D434;
    case 0x7F31D438u: goto label_7F31D438;
    case 0x7F31D43Cu: goto label_7F31D43C;
    case 0x7F31D440u: goto label_7F31D440;
    case 0x7F31D444u: goto label_7F31D444;
    case 0x7F31D448u: goto label_7F31D448;
    case 0x7F31D44Cu: goto label_7F31D44C;
    case 0x7F31D450u: goto label_7F31D450;
    case 0x7F31D454u: goto label_7F31D454;
    case 0x7F31D458u: goto label_7F31D458;
    case 0x7F31D45Cu: goto label_7F31D45C;
    case 0x7F31D460u: goto label_7F31D460;
    case 0x7F31D464u: goto label_7F31D464;
    case 0x7F31D468u: goto label_7F31D468;
    case 0x7F31D46Cu: goto label_7F31D46C;
    case 0x7F31D470u: goto label_7F31D470;
    case 0x7F31D474u: goto label_7F31D474;
    case 0x7F31D478u: goto label_7F31D478;
    case 0x7F31D47Cu: goto label_7F31D47C;
    case 0x7F31D480u: goto label_7F31D480;
    case 0x7F31D484u: goto label_7F31D484;
    case 0x7F31D488u: goto label_7F31D488;
    case 0x7F31D48Cu: goto label_7F31D48C;
    case 0x7F31D490u: goto label_7F31D490;
    case 0x7F31D494u: goto label_7F31D494;
    case 0x7F31D498u: goto label_7F31D498;
    case 0x7F31D49Cu: goto label_7F31D49C;
    case 0x7F31D4A0u: goto label_7F31D4A0;
    case 0x7F31D4A4u: goto label_7F31D4A4;
    case 0x7F31D4A8u: goto label_7F31D4A8;
    case 0x7F31D4ACu: goto label_7F31D4AC;
    case 0x7F31D4B0u: goto label_7F31D4B0;
    case 0x7F31D4B4u: goto label_7F31D4B4;
    case 0x7F31D4B8u: goto label_7F31D4B8;
    case 0x7F31D4BCu: goto label_7F31D4BC;
    case 0x7F31D4C0u: goto label_7F31D4C0;
    case 0x7F31D4C4u: goto label_7F31D4C4;
    case 0x7F31D4C8u: goto label_7F31D4C8;
    case 0x7F31D4CCu: goto label_7F31D4CC;
    case 0x7F31D4D0u: goto label_7F31D4D0;
    case 0x7F31D4D4u: goto label_7F31D4D4;
    case 0x7F31D4D8u: goto label_7F31D4D8;
    case 0x7F31D4DCu: goto label_7F31D4DC;
    case 0x7F31D4E0u: goto label_7F31D4E0;
    case 0x7F31D4E4u: goto label_7F31D4E4;
    case 0x7F31D4E8u: goto label_7F31D4E8;
    case 0x7F31D4ECu: goto label_7F31D4EC;
    case 0x7F31D4F0u: goto label_7F31D4F0;
    case 0x7F31D4F4u: goto label_7F31D4F4;
    case 0x7F31D4F8u: goto label_7F31D4F8;
    case 0x7F31D4FCu: goto label_7F31D4FC;
    case 0x7F31D500u: goto label_7F31D500;
    case 0x7F31D504u: goto label_7F31D504;
    case 0x7F31D508u: goto label_7F31D508;
    case 0x7F31D50Cu: goto label_7F31D50C;
    case 0x7F31D510u: goto label_7F31D510;
    case 0x7F31D514u: goto label_7F31D514;
    case 0x7F31D518u: goto label_7F31D518;
    case 0x7F31D51Cu: goto label_7F31D51C;
    case 0x7F31D520u: goto label_7F31D520;
    case 0x7F31D524u: goto label_7F31D524;
    case 0x7F31D528u: goto label_7F31D528;
    case 0x7F31D52Cu: goto label_7F31D52C;
    case 0x7F31D530u: goto label_7F31D530;
    case 0x7F31D534u: goto label_7F31D534;
    case 0x7F31D538u: goto label_7F31D538;
    case 0x7F31D53Cu: goto label_7F31D53C;
    case 0x7F31D540u: goto label_7F31D540;
    case 0x7F31D544u: goto label_7F31D544;
    case 0x7F31D548u: goto label_7F31D548;
    case 0x7F31D54Cu: goto label_7F31D54C;
    case 0x7F31D550u: goto label_7F31D550;
    case 0x7F31D554u: goto label_7F31D554;
    case 0x7F31D558u: goto label_7F31D558;
    case 0x7F31D55Cu: goto label_7F31D55C;
    case 0x7F31D560u: goto label_7F31D560;
    case 0x7F31D564u: goto label_7F31D564;
    case 0x7F31D568u: goto label_7F31D568;
    case 0x7F31D56Cu: goto label_7F31D56C;
    case 0x7F31D570u: goto label_7F31D570;
    case 0x7F31D574u: goto label_7F31D574;
    case 0x7F31D578u: goto label_7F31D578;
    case 0x7F31D57Cu: goto label_7F31D57C;
    case 0x7F31D580u: goto label_7F31D580;
    case 0x7F31D584u: goto label_7F31D584;
    case 0x7F31D588u: goto label_7F31D588;
    case 0x7F31D58Cu: goto label_7F31D58C;
    case 0x7F31D590u: goto label_7F31D590;
    case 0x7F31D594u: goto label_7F31D594;
    case 0x7F31D598u: goto label_7F31D598;
    case 0x7F31D59Cu: goto label_7F31D59C;
    case 0x7F31D5A0u: goto label_7F31D5A0;
    case 0x7F31D5A4u: goto label_7F31D5A4;
    case 0x7F31D5A8u: goto label_7F31D5A8;
    case 0x7F31D5ACu: goto label_7F31D5AC;
    case 0x7F31D5B0u: goto label_7F31D5B0;
    case 0x7F31D5B4u: goto label_7F31D5B4;
    case 0x7F31D5B8u: goto label_7F31D5B8;
    case 0x7F31D5BCu: goto label_7F31D5BC;
    case 0x7F31D5C0u: goto label_7F31D5C0;
    case 0x7F31D5C4u: goto label_7F31D5C4;
    case 0x7F31D5C8u: goto label_7F31D5C8;
    case 0x7F31D5CCu: goto label_7F31D5CC;
    case 0x7F31D5D0u: goto label_7F31D5D0;
    case 0x7F31D5D4u: goto label_7F31D5D4;
    case 0x7F31D5D8u: goto label_7F31D5D8;
    case 0x7F31D5DCu: goto label_7F31D5DC;
    case 0x7F31D5E0u: goto label_7F31D5E0;
    case 0x7F31D5E4u: goto label_7F31D5E4;
    case 0x7F31D5E8u: goto label_7F31D5E8;
    case 0x7F31D5ECu: goto label_7F31D5EC;
    case 0x7F31D5F0u: goto label_7F31D5F0;
    case 0x7F31D5F4u: goto label_7F31D5F4;
    case 0x7F31D5F8u: goto label_7F31D5F8;
    case 0x7F31D5FCu: goto label_7F31D5FC;
    case 0x7F31D600u: goto label_7F31D600;
    case 0x7F31D604u: goto label_7F31D604;
    case 0x7F31D608u: goto label_7F31D608;
    case 0x7F31D60Cu: goto label_7F31D60C;
    case 0x7F31D610u: goto label_7F31D610;
    case 0x7F31D614u: goto label_7F31D614;
    case 0x7F31D618u: goto label_7F31D618;
    case 0x7F31D61Cu: goto label_7F31D61C;
    case 0x7F31D620u: goto label_7F31D620;
    case 0x7F31D624u: goto label_7F31D624;
    case 0x7F31D628u: goto label_7F31D628;
    case 0x7F31D62Cu: goto label_7F31D62C;
    case 0x7F31D630u: goto label_7F31D630;
    case 0x7F31D634u: goto label_7F31D634;
    case 0x7F31D638u: goto label_7F31D638;
    case 0x7F31D63Cu: goto label_7F31D63C;
    case 0x7F31D640u: goto label_7F31D640;
    case 0x7F31D644u: goto label_7F31D644;
    case 0x7F31D648u: goto label_7F31D648;
    case 0x7F31D64Cu: goto label_7F31D64C;
    case 0x7F31D650u: goto label_7F31D650;
    case 0x7F31D654u: goto label_7F31D654;
    case 0x7F31D658u: goto label_7F31D658;
    case 0x7F31D65Cu: goto label_7F31D65C;
    case 0x7F31D660u: goto label_7F31D660;
    case 0x7F31D664u: goto label_7F31D664;
    case 0x7F31D668u: goto label_7F31D668;
    case 0x7F31D66Cu: goto label_7F31D66C;
    case 0x7F31D670u: goto label_7F31D670;
    case 0x7F31D674u: goto label_7F31D674;
    case 0x7F31D678u: goto label_7F31D678;
    case 0x7F31D67Cu: goto label_7F31D67C;
    case 0x7F31D680u: goto label_7F31D680;
    case 0x7F31D684u: goto label_7F31D684;
    case 0x7F31D688u: goto label_7F31D688;
    case 0x7F31D68Cu: goto label_7F31D68C;
    case 0x7F31D690u: goto label_7F31D690;
    case 0x7F31D694u: goto label_7F31D694;
    case 0x7F31D698u: goto label_7F31D698;
    case 0x7F31D69Cu: goto label_7F31D69C;
    case 0x7F31D6A0u: goto label_7F31D6A0;
    case 0x7F31D6A4u: goto label_7F31D6A4;
    case 0x7F31D6A8u: goto label_7F31D6A8;
    case 0x7F31D6ACu: goto label_7F31D6AC;
    case 0x7F31D6B0u: goto label_7F31D6B0;
    case 0x7F31D6B4u: goto label_7F31D6B4;
    case 0x7F31D6B8u: goto label_7F31D6B8;
    case 0x7F31D6BCu: goto label_7F31D6BC;
    case 0x7F31D6C0u: goto label_7F31D6C0;
    case 0x7F31D6C4u: goto label_7F31D6C4;
    case 0x7F31D6C8u: goto label_7F31D6C8;
    case 0x7F31D6CCu: goto label_7F31D6CC;
    case 0x7F31D6D0u: goto label_7F31D6D0;
    case 0x7F31D6D4u: goto label_7F31D6D4;
    case 0x7F31D6D8u: goto label_7F31D6D8;
    case 0x7F31D6DCu: goto label_7F31D6DC;
    case 0x7F31D6E0u: goto label_7F31D6E0;
    case 0x7F31D6E4u: goto label_7F31D6E4;
    case 0x7F31D6E8u: goto label_7F31D6E8;
    case 0x7F31D6ECu: goto label_7F31D6EC;
    case 0x7F31D6F0u: goto label_7F31D6F0;
    case 0x7F31D6F4u: goto label_7F31D6F4;
    case 0x7F31D6F8u: goto label_7F31D6F8;
    case 0x7F31D6FCu: goto label_7F31D6FC;
    case 0x7F31D700u: goto label_7F31D700;
    case 0x7F31D704u: goto label_7F31D704;
    case 0x7F31D708u: goto label_7F31D708;
    case 0x7F31D70Cu: goto label_7F31D70C;
    case 0x7F31D710u: goto label_7F31D710;
    case 0x7F31D714u: goto label_7F31D714;
    case 0x7F31D718u: goto label_7F31D718;
    case 0x7F31D71Cu: goto label_7F31D71C;
    case 0x7F31D720u: goto label_7F31D720;
    case 0x7F31D724u: goto label_7F31D724;
    case 0x7F31D728u: goto label_7F31D728;
    case 0x7F31D72Cu: goto label_7F31D72C;
    case 0x7F31D730u: goto label_7F31D730;
    case 0x7F31D734u: goto label_7F31D734;
    case 0x7F31D738u: goto label_7F31D738;
    case 0x7F31D73Cu: goto label_7F31D73C;
    case 0x7F31D740u: goto label_7F31D740;
    case 0x7F31D744u: goto label_7F31D744;
    case 0x7F31D748u: goto label_7F31D748;
    case 0x7F31D74Cu: goto label_7F31D74C;
    case 0x7F31D750u: goto label_7F31D750;
    case 0x7F31D754u: goto label_7F31D754;
    case 0x7F31D758u: goto label_7F31D758;
    case 0x7F31D75Cu: goto label_7F31D75C;
    case 0x7F31D760u: goto label_7F31D760;
    case 0x7F31D764u: goto label_7F31D764;
    case 0x7F31D768u: goto label_7F31D768;
    case 0x7F31D76Cu: goto label_7F31D76C;
    case 0x7F31D770u: goto label_7F31D770;
    case 0x7F31D774u: goto label_7F31D774;
    case 0x7F31D778u: goto label_7F31D778;
    case 0x7F31D77Cu: goto label_7F31D77C;
    case 0x7F31D780u: goto label_7F31D780;
    case 0x7F31D784u: goto label_7F31D784;
    case 0x7F31D788u: goto label_7F31D788;
    case 0x7F31D78Cu: goto label_7F31D78C;
    case 0x7F31D790u: goto label_7F31D790;
    case 0x7F31D794u: goto label_7F31D794;
    case 0x7F31D798u: goto label_7F31D798;
    case 0x7F31D79Cu: goto label_7F31D79C;
    case 0x7F31D7A0u: goto label_7F31D7A0;
    case 0x7F31D7A4u: goto label_7F31D7A4;
    case 0x7F31D7A8u: goto label_7F31D7A8;
    case 0x7F31D7ACu: goto label_7F31D7AC;
    case 0x7F31D7B0u: goto label_7F31D7B0;
    case 0x7F31D7B4u: goto label_7F31D7B4;
    case 0x7F31D7B8u: goto label_7F31D7B8;
    case 0x7F31D7BCu: goto label_7F31D7BC;
    case 0x7F31D7C0u: goto label_7F31D7C0;
    case 0x7F31D7C4u: goto label_7F31D7C4;
    case 0x7F31D7C8u: goto label_7F31D7C8;
    case 0x7F31D7CCu: goto label_7F31D7CC;
    case 0x7F31D7D0u: goto label_7F31D7D0;
    case 0x7F31D7D4u: goto label_7F31D7D4;
    case 0x7F31D7D8u: goto label_7F31D7D8;
    case 0x7F31D7DCu: goto label_7F31D7DC;
    case 0x7F31D7E0u: goto label_7F31D7E0;
    case 0x7F31D7E4u: goto label_7F31D7E4;
    case 0x7F31D7E8u: goto label_7F31D7E8;
    case 0x7F31D7ECu: goto label_7F31D7EC;
    case 0x7F31D7F0u: goto label_7F31D7F0;
    case 0x7F31D7F4u: goto label_7F31D7F4;
    case 0x7F31D7F8u: goto label_7F31D7F8;
    case 0x7F31D7FCu: goto label_7F31D7FC;
    case 0x7F31D800u: goto label_7F31D800;
    case 0x7F31D804u: goto label_7F31D804;
    case 0x7F31D808u: goto label_7F31D808;
    case 0x7F31D80Cu: goto label_7F31D80C;
    case 0x7F31D810u: goto label_7F31D810;
    case 0x7F31D814u: goto label_7F31D814;
    case 0x7F31D818u: goto label_7F31D818;
    case 0x7F31D81Cu: goto label_7F31D81C;
    case 0x7F31D820u: goto label_7F31D820;
    case 0x7F31D824u: goto label_7F31D824;
    case 0x7F31D828u: goto label_7F31D828;
    case 0x7F31D82Cu: goto label_7F31D82C;
    case 0x7F31D830u: goto label_7F31D830;
    case 0x7F31D834u: goto label_7F31D834;
    case 0x7F31D838u: goto label_7F31D838;
    case 0x7F31D83Cu: goto label_7F31D83C;
    case 0x7F31D840u: goto label_7F31D840;
    case 0x7F31D844u: goto label_7F31D844;
    case 0x7F31D848u: goto label_7F31D848;
    case 0x7F31D84Cu: goto label_7F31D84C;
    case 0x7F31D850u: goto label_7F31D850;
    case 0x7F31D854u: goto label_7F31D854;
    case 0x7F31D858u: goto label_7F31D858;
    case 0x7F31D85Cu: goto label_7F31D85C;
    case 0x7F31D860u: goto label_7F31D860;
    case 0x7F31D864u: goto label_7F31D864;
    case 0x7F31D868u: goto label_7F31D868;
    case 0x7F31D86Cu: goto label_7F31D86C;
    case 0x7F31D870u: goto label_7F31D870;
    case 0x7F31D874u: goto label_7F31D874;
    case 0x7F31D878u: goto label_7F31D878;
    case 0x7F31D87Cu: goto label_7F31D87C;
    case 0x7F31D880u: goto label_7F31D880;
    case 0x7F31D884u: goto label_7F31D884;
    case 0x7F31D888u: goto label_7F31D888;
    case 0x7F31D88Cu: goto label_7F31D88C;
    case 0x7F31D890u: goto label_7F31D890;
    case 0x7F31D894u: goto label_7F31D894;
    case 0x7F31D898u: goto label_7F31D898;
    case 0x7F31D89Cu: goto label_7F31D89C;
    case 0x7F31D8A0u: goto label_7F31D8A0;
    case 0x7F31D8A4u: goto label_7F31D8A4;
    case 0x7F31D8A8u: goto label_7F31D8A8;
    case 0x7F31D8ACu: goto label_7F31D8AC;
    case 0x7F31D8B0u: goto label_7F31D8B0;
    case 0x7F31D8B4u: goto label_7F31D8B4;
    case 0x7F31D8B8u: goto label_7F31D8B8;
    case 0x7F31D8BCu: goto label_7F31D8BC;
    case 0x7F31D8C0u: goto label_7F31D8C0;
    case 0x7F31D8C4u: goto label_7F31D8C4;
    case 0x7F31D8C8u: goto label_7F31D8C8;
    case 0x7F31D8CCu: goto label_7F31D8CC;
    case 0x7F31D8D0u: goto label_7F31D8D0;
    case 0x7F31D8D4u: goto label_7F31D8D4;
    case 0x7F31D8D8u: goto label_7F31D8D8;
    case 0x7F31D8DCu: goto label_7F31D8DC;
    case 0x7F31D8E0u: goto label_7F31D8E0;
    case 0x7F31D8E4u: goto label_7F31D8E4;
    case 0x7F31D8E8u: goto label_7F31D8E8;
    case 0x7F31D8ECu: goto label_7F31D8EC;
    case 0x7F31D8F0u: goto label_7F31D8F0;
    case 0x7F31D8F4u: goto label_7F31D8F4;
    case 0x7F31D8F8u: goto label_7F31D8F8;
    case 0x7F31D8FCu: goto label_7F31D8FC;
    case 0x7F31D900u: goto label_7F31D900;
    case 0x7F31D904u: goto label_7F31D904;
    case 0x7F31D908u: goto label_7F31D908;
    case 0x7F31D90Cu: goto label_7F31D90C;
    case 0x7F31D910u: goto label_7F31D910;
    case 0x7F31D914u: goto label_7F31D914;
    case 0x7F31D918u: goto label_7F31D918;
    case 0x7F31D91Cu: goto label_7F31D91C;
    case 0x7F31D920u: goto label_7F31D920;
    case 0x7F31D924u: goto label_7F31D924;
    case 0x7F31D928u: goto label_7F31D928;
    case 0x7F31D92Cu: goto label_7F31D92C;
    case 0x7F31D930u: goto label_7F31D930;
    case 0x7F31D934u: goto label_7F31D934;
    case 0x7F31D938u: goto label_7F31D938;
    case 0x7F31D93Cu: goto label_7F31D93C;
    case 0x7F31D940u: goto label_7F31D940;
    case 0x7F31D944u: goto label_7F31D944;
    case 0x7F31D948u: goto label_7F31D948;
    case 0x7F31D94Cu: goto label_7F31D94C;
    case 0x7F31D950u: goto label_7F31D950;
    case 0x7F31D954u: goto label_7F31D954;
    case 0x7F31D958u: goto label_7F31D958;
    case 0x7F31D95Cu: goto label_7F31D95C;
    case 0x7F31D960u: goto label_7F31D960;
    case 0x7F31D964u: goto label_7F31D964;
    case 0x7F31D968u: goto label_7F31D968;
    case 0x7F31D96Cu: goto label_7F31D96C;
    case 0x7F31D970u: goto label_7F31D970;
    case 0x7F31D974u: goto label_7F31D974;
    case 0x7F31D978u: goto label_7F31D978;
    case 0x7F31D97Cu: goto label_7F31D97C;
    case 0x7F31D980u: goto label_7F31D980;
    case 0x7F31D984u: goto label_7F31D984;
    case 0x7F31D988u: goto label_7F31D988;
    case 0x7F31D98Cu: goto label_7F31D98C;
    case 0x7F31D990u: goto label_7F31D990;
    case 0x7F31D994u: goto label_7F31D994;
    case 0x7F31D998u: goto label_7F31D998;
    case 0x7F31D99Cu: goto label_7F31D99C;
    case 0x7F31D9A0u: goto label_7F31D9A0;
    case 0x7F31D9A4u: goto label_7F31D9A4;
    case 0x7F31D9A8u: goto label_7F31D9A8;
    case 0x7F31D9ACu: goto label_7F31D9AC;
    case 0x7F31D9B0u: goto label_7F31D9B0;
    case 0x7F31D9B4u: goto label_7F31D9B4;
    case 0x7F31D9B8u: goto label_7F31D9B8;
    case 0x7F31D9BCu: goto label_7F31D9BC;
    case 0x7F31D9C0u: goto label_7F31D9C0;
    case 0x7F31D9C4u: goto label_7F31D9C4;
    case 0x7F31D9C8u: goto label_7F31D9C8;
    case 0x7F31D9CCu: goto label_7F31D9CC;
    case 0x7F31D9D0u: goto label_7F31D9D0;
    case 0x7F31D9D4u: goto label_7F31D9D4;
    case 0x7F31D9D8u: goto label_7F31D9D8;
    case 0x7F31D9DCu: goto label_7F31D9DC;
    case 0x7F31D9E0u: goto label_7F31D9E0;
    case 0x7F31D9E4u: goto label_7F31D9E4;
    case 0x7F31D9E8u: goto label_7F31D9E8;
    case 0x7F31D9ECu: goto label_7F31D9EC;
    case 0x7F31D9F0u: goto label_7F31D9F0;
    case 0x7F31D9F4u: goto label_7F31D9F4;
    case 0x7F31D9F8u: goto label_7F31D9F8;
    case 0x7F31D9FCu: goto label_7F31D9FC;
    case 0x7F31DA00u: goto label_7F31DA00;
    case 0x7F31DA04u: goto label_7F31DA04;
    case 0x7F31DA08u: goto label_7F31DA08;
    case 0x7F31DA0Cu: goto label_7F31DA0C;
    case 0x7F31DA10u: goto label_7F31DA10;
    case 0x7F31DA14u: goto label_7F31DA14;
    case 0x7F31DA18u: goto label_7F31DA18;
    case 0x7F31DA1Cu: goto label_7F31DA1C;
    case 0x7F31DA20u: goto label_7F31DA20;
    case 0x7F31DA24u: goto label_7F31DA24;
    case 0x7F31DA28u: goto label_7F31DA28;
    case 0x7F31DA2Cu: goto label_7F31DA2C;
    case 0x7F31DA30u: goto label_7F31DA30;
    case 0x7F31DA34u: goto label_7F31DA34;
    case 0x7F31DA38u: goto label_7F31DA38;
    case 0x7F31DA3Cu: goto label_7F31DA3C;
    case 0x7F31DA40u: goto label_7F31DA40;
    case 0x7F31DA44u: goto label_7F31DA44;
    case 0x7F31DA48u: goto label_7F31DA48;
    case 0x7F31DA4Cu: goto label_7F31DA4C;
    case 0x7F31DA50u: goto label_7F31DA50;
    case 0x7F31DA54u: goto label_7F31DA54;
    case 0x7F31DA58u: goto label_7F31DA58;
    case 0x7F31DA5Cu: goto label_7F31DA5C;
    case 0x7F31DA60u: goto label_7F31DA60;
    case 0x7F31DA64u: goto label_7F31DA64;
    case 0x7F31DA68u: goto label_7F31DA68;
    case 0x7F31DA6Cu: goto label_7F31DA6C;
    case 0x7F31DA70u: goto label_7F31DA70;
    case 0x7F31DA74u: goto label_7F31DA74;
    case 0x7F31DA78u: goto label_7F31DA78;
    case 0x7F31DA7Cu: goto label_7F31DA7C;
    case 0x7F31DA80u: goto label_7F31DA80;
    case 0x7F31DA84u: goto label_7F31DA84;
    case 0x7F31DA88u: goto label_7F31DA88;
    case 0x7F31DA8Cu: goto label_7F31DA8C;
    case 0x7F31DA90u: goto label_7F31DA90;
    case 0x7F31DA94u: goto label_7F31DA94;
    case 0x7F31DA98u: goto label_7F31DA98;
    case 0x7F31DA9Cu: goto label_7F31DA9C;
    case 0x7F31DAA0u: goto label_7F31DAA0;
    case 0x7F31DAA4u: goto label_7F31DAA4;
    case 0x7F31DAA8u: goto label_7F31DAA8;
    case 0x7F31DAACu: goto label_7F31DAAC;
    case 0x7F31DAB0u: goto label_7F31DAB0;
    case 0x7F31DAB4u: goto label_7F31DAB4;
    case 0x7F31DAB8u: goto label_7F31DAB8;
    case 0x7F31DABCu: goto label_7F31DABC;
    case 0x7F31DAC0u: goto label_7F31DAC0;
    case 0x7F31DAC4u: goto label_7F31DAC4;
    case 0x7F31DAC8u: goto label_7F31DAC8;
    case 0x7F31DACCu: goto label_7F31DACC;
    case 0x7F31DAD0u: goto label_7F31DAD0;
    case 0x7F31DAD4u: goto label_7F31DAD4;
    case 0x7F31DAD8u: goto label_7F31DAD8;
    case 0x7F31DADCu: goto label_7F31DADC;
    case 0x7F31DAE0u: goto label_7F31DAE0;
    case 0x7F31DAE4u: goto label_7F31DAE4;
    case 0x7F31DAE8u: goto label_7F31DAE8;
    case 0x7F31DAECu: goto label_7F31DAEC;
    case 0x7F31DAF0u: goto label_7F31DAF0;
    case 0x7F31DAF4u: goto label_7F31DAF4;
    case 0x7F31DAF8u: goto label_7F31DAF8;
    case 0x7F31DAFCu: goto label_7F31DAFC;
    case 0x7F31DB00u: goto label_7F31DB00;
    case 0x7F31DB04u: goto label_7F31DB04;
    case 0x7F31DB08u: goto label_7F31DB08;
    case 0x7F31DB0Cu: goto label_7F31DB0C;
    case 0x7F31DB10u: goto label_7F31DB10;
    case 0x7F31DB14u: goto label_7F31DB14;
    case 0x7F31DB18u: goto label_7F31DB18;
    case 0x7F31DB1Cu: goto label_7F31DB1C;
    case 0x7F31DB20u: goto label_7F31DB20;
    case 0x7F31DB24u: goto label_7F31DB24;
    case 0x7F31DB28u: goto label_7F31DB28;
    case 0x7F31DB2Cu: goto label_7F31DB2C;
    case 0x7F31DB30u: goto label_7F31DB30;
    case 0x7F31DB34u: goto label_7F31DB34;
    case 0x7F31DB38u: goto label_7F31DB38;
    case 0x7F31DB3Cu: goto label_7F31DB3C;
    case 0x7F31DB40u: goto label_7F31DB40;
    case 0x7F31DB44u: goto label_7F31DB44;
    case 0x7F31DB48u: goto label_7F31DB48;
    case 0x7F31DB4Cu: goto label_7F31DB4C;
    case 0x7F31DB50u: goto label_7F31DB50;
    case 0x7F31DB54u: goto label_7F31DB54;
    case 0x7F31DB58u: goto label_7F31DB58;
    case 0x7F31DB5Cu: goto label_7F31DB5C;
    case 0x7F31DB60u: goto label_7F31DB60;
    case 0x7F31DB64u: goto label_7F31DB64;
    case 0x7F31DB68u: goto label_7F31DB68;
    case 0x7F31DB6Cu: goto label_7F31DB6C;
    case 0x7F31DB70u: goto label_7F31DB70;
    case 0x7F31DB74u: goto label_7F31DB74;
    case 0x7F31DB78u: goto label_7F31DB78;
    case 0x7F31DB7Cu: goto label_7F31DB7C;
    case 0x7F31DB80u: goto label_7F31DB80;
    case 0x7F31DB84u: goto label_7F31DB84;
    case 0x7F31DB88u: goto label_7F31DB88;
    case 0x7F31DB8Cu: goto label_7F31DB8C;
    case 0x7F31DB90u: goto label_7F31DB90;
    case 0x7F31DB94u: goto label_7F31DB94;
    case 0x7F31DB98u: goto label_7F31DB98;
    case 0x7F31DB9Cu: goto label_7F31DB9C;
    case 0x7F31DBA0u: goto label_7F31DBA0;
    case 0x7F31DBA4u: goto label_7F31DBA4;
    case 0x7F31DBA8u: goto label_7F31DBA8;
    case 0x7F31DBACu: goto label_7F31DBAC;
    case 0x7F31DBB0u: goto label_7F31DBB0;
    case 0x7F31DBB4u: goto label_7F31DBB4;
    case 0x7F31DBB8u: goto label_7F31DBB8;
    case 0x7F31DBBCu: goto label_7F31DBBC;
    case 0x7F31DBC0u: goto label_7F31DBC0;
    case 0x7F31DBC4u: goto label_7F31DBC4;
    case 0x7F31DBC8u: goto label_7F31DBC8;
    case 0x7F31DBCCu: goto label_7F31DBCC;
    case 0x7F31DBD0u: goto label_7F31DBD0;
    case 0x7F31DBD4u: goto label_7F31DBD4;
    case 0x7F31DBD8u: goto label_7F31DBD8;
    case 0x7F31DBDCu: goto label_7F31DBDC;
    case 0x7F31DBE0u: goto label_7F31DBE0;
    case 0x7F31DBE4u: goto label_7F31DBE4;
    case 0x7F31DBE8u: goto label_7F31DBE8;
    case 0x7F31DBECu: goto label_7F31DBEC;
    case 0x7F31DBF0u: goto label_7F31DBF0;
    case 0x7F31DBF4u: goto label_7F31DBF4;
    case 0x7F31DBF8u: goto label_7F31DBF8;
    case 0x7F31DBFCu: goto label_7F31DBFC;
    case 0x7F31DC00u: goto label_7F31DC00;
    case 0x7F31DC04u: goto label_7F31DC04;
    case 0x7F31DC08u: goto label_7F31DC08;
    case 0x7F31DC0Cu: goto label_7F31DC0C;
    case 0x7F31DC10u: goto label_7F31DC10;
    case 0x7F31DC14u: goto label_7F31DC14;
    case 0x7F31DC18u: goto label_7F31DC18;
    case 0x7F31DC1Cu: goto label_7F31DC1C;
    case 0x7F31DC20u: goto label_7F31DC20;
    case 0x7F31DC24u: goto label_7F31DC24;
    case 0x7F31DC28u: goto label_7F31DC28;
    case 0x7F31DC2Cu: goto label_7F31DC2C;
    case 0x7F31DC30u: goto label_7F31DC30;
    case 0x7F31DC34u: goto label_7F31DC34;
    case 0x7F31DC38u: goto label_7F31DC38;
    case 0x7F31DC3Cu: goto label_7F31DC3C;
    case 0x7F31DC40u: goto label_7F31DC40;
    case 0x7F31DC44u: goto label_7F31DC44;
    case 0x7F31DC48u: goto label_7F31DC48;
    case 0x7F31DC4Cu: goto label_7F31DC4C;
    case 0x7F31DC50u: goto label_7F31DC50;
    case 0x7F31DC54u: goto label_7F31DC54;
    case 0x7F31DC58u: goto label_7F31DC58;
    case 0x7F31DC5Cu: goto label_7F31DC5C;
    case 0x7F31DC60u: goto label_7F31DC60;
    case 0x7F31DC64u: goto label_7F31DC64;
    case 0x7F31DC68u: goto label_7F31DC68;
    case 0x7F31DC6Cu: goto label_7F31DC6C;
    case 0x7F31DC70u: goto label_7F31DC70;
    case 0x7F31DC74u: goto label_7F31DC74;
    case 0x7F31DC78u: goto label_7F31DC78;
    case 0x7F31DC7Cu: goto label_7F31DC7C;
    case 0x7F31DC80u: goto label_7F31DC80;
    case 0x7F31DC84u: goto label_7F31DC84;
    case 0x7F31DC88u: goto label_7F31DC88;
    case 0x7F31DC8Cu: goto label_7F31DC8C;
    case 0x7F31DC90u: goto label_7F31DC90;
    case 0x7F31DC94u: goto label_7F31DC94;
    case 0x7F31DC98u: goto label_7F31DC98;
    case 0x7F31DC9Cu: goto label_7F31DC9C;
    case 0x7F31DCA0u: goto label_7F31DCA0;
    case 0x7F31DCA4u: goto label_7F31DCA4;
    case 0x7F31DCA8u: goto label_7F31DCA8;
    case 0x7F31DCACu: goto label_7F31DCAC;
    case 0x7F31DCB0u: goto label_7F31DCB0;
    case 0x7F31DCB4u: goto label_7F31DCB4;
    case 0x7F31DCB8u: goto label_7F31DCB8;
    case 0x7F31DCBCu: goto label_7F31DCBC;
    case 0x7F31DCC0u: goto label_7F31DCC0;
    case 0x7F31DCC4u: goto label_7F31DCC4;
    case 0x7F31DCC8u: goto label_7F31DCC8;
    case 0x7F31DCCCu: goto label_7F31DCCC;
    case 0x7F31DCD0u: goto label_7F31DCD0;
    case 0x7F31DCD4u: goto label_7F31DCD4;
    case 0x7F31DCD8u: goto label_7F31DCD8;
    case 0x7F31DCDCu: goto label_7F31DCDC;
    case 0x7F31DCE0u: goto label_7F31DCE0;
    case 0x7F31DCE4u: goto label_7F31DCE4;
    case 0x7F31DCE8u: goto label_7F31DCE8;
    case 0x7F31DCECu: goto label_7F31DCEC;
    case 0x7F31DCF0u: goto label_7F31DCF0;
    case 0x7F31DCF4u: goto label_7F31DCF4;
    case 0x7F31DCF8u: goto label_7F31DCF8;
    case 0x7F31DCFCu: goto label_7F31DCFC;
    case 0x7F31DD00u: goto label_7F31DD00;
    case 0x7F31DD04u: goto label_7F31DD04;
    case 0x7F31DD08u: goto label_7F31DD08;
    case 0x7F31DD0Cu: goto label_7F31DD0C;
    case 0x7F31DD10u: goto label_7F31DD10;
    case 0x7F31DD14u: goto label_7F31DD14;
    case 0x7F31DD18u: goto label_7F31DD18;
    case 0x7F31DD1Cu: goto label_7F31DD1C;
    case 0x7F31DD20u: goto label_7F31DD20;
    case 0x7F31DD24u: goto label_7F31DD24;
    case 0x7F31DD28u: goto label_7F31DD28;
    case 0x7F31DD2Cu: goto label_7F31DD2C;
    case 0x7F31DD30u: goto label_7F31DD30;
    case 0x7F31DD34u: goto label_7F31DD34;
    case 0x7F31DD38u: goto label_7F31DD38;
    case 0x7F31DD3Cu: goto label_7F31DD3C;
    case 0x7F31DD40u: goto label_7F31DD40;
    case 0x7F31DD44u: goto label_7F31DD44;
    case 0x7F31DD48u: goto label_7F31DD48;
    case 0x7F31DD4Cu: goto label_7F31DD4C;
    case 0x7F31DD50u: goto label_7F31DD50;
    case 0x7F31DD54u: goto label_7F31DD54;
    case 0x7F31DD58u: goto label_7F31DD58;
    case 0x7F31DD5Cu: goto label_7F31DD5C;
    case 0x7F31DD60u: goto label_7F31DD60;
    case 0x7F31DD64u: goto label_7F31DD64;
    case 0x7F31DD68u: goto label_7F31DD68;
    case 0x7F31DD6Cu: goto label_7F31DD6C;
    case 0x7F31DD70u: goto label_7F31DD70;
    case 0x7F31DD74u: goto label_7F31DD74;
    case 0x7F31DD78u: goto label_7F31DD78;
    case 0x7F31DD7Cu: goto label_7F31DD7C;
    case 0x7F31DD80u: goto label_7F31DD80;
    case 0x7F31DD84u: goto label_7F31DD84;
    case 0x7F31DD88u: goto label_7F31DD88;
    case 0x7F31DD8Cu: goto label_7F31DD8C;
    case 0x7F31DD90u: goto label_7F31DD90;
    case 0x7F31DD94u: goto label_7F31DD94;
    case 0x7F31DD98u: goto label_7F31DD98;
    case 0x7F31DD9Cu: goto label_7F31DD9C;
    case 0x7F31DDA0u: goto label_7F31DDA0;
    case 0x7F31DDA4u: goto label_7F31DDA4;
    case 0x7F31DDA8u: goto label_7F31DDA8;
    case 0x7F31DDACu: goto label_7F31DDAC;
    case 0x7F31DDB0u: goto label_7F31DDB0;
    case 0x7F31DDB4u: goto label_7F31DDB4;
    case 0x7F31DDB8u: goto label_7F31DDB8;
    case 0x7F31DDBCu: goto label_7F31DDBC;
    case 0x7F31DDC0u: goto label_7F31DDC0;
    case 0x7F31DDC4u: goto label_7F31DDC4;
    case 0x7F31DDC8u: goto label_7F31DDC8;
    case 0x7F31DDCCu: goto label_7F31DDCC;
    case 0x7F31DDD0u: goto label_7F31DDD0;
    case 0x7F31DDD4u: goto label_7F31DDD4;
    case 0x7F31DDD8u: goto label_7F31DDD8;
    case 0x7F31DDDCu: goto label_7F31DDDC;
    case 0x7F31DDE0u: goto label_7F31DDE0;
    case 0x7F31DDE4u: goto label_7F31DDE4;
    case 0x7F31DDE8u: goto label_7F31DDE8;
    case 0x7F31DDECu: goto label_7F31DDEC;
    case 0x7F31DDF0u: goto label_7F31DDF0;
    case 0x7F31DDF4u: goto label_7F31DDF4;
    case 0x7F31DDF8u: goto label_7F31DDF8;
    case 0x7F31DDFCu: goto label_7F31DDFC;
    case 0x7F31DE00u: goto label_7F31DE00;
    case 0x7F31DE04u: goto label_7F31DE04;
    case 0x7F31DE08u: goto label_7F31DE08;
    case 0x7F31DE0Cu: goto label_7F31DE0C;
    case 0x7F31DE10u: goto label_7F31DE10;
    case 0x7F31DE14u: goto label_7F31DE14;
    case 0x7F31DE18u: goto label_7F31DE18;
    case 0x7F31DE1Cu: goto label_7F31DE1C;
    case 0x7F31DE20u: goto label_7F31DE20;
    case 0x7F31DE24u: goto label_7F31DE24;
    case 0x7F31DE28u: goto label_7F31DE28;
    case 0x7F31DE2Cu: goto label_7F31DE2C;
    case 0x7F31DE30u: goto label_7F31DE30;
    case 0x7F31DE34u: goto label_7F31DE34;
    case 0x7F31DE38u: goto label_7F31DE38;
    case 0x7F31DE3Cu: goto label_7F31DE3C;
    case 0x7F31DE40u: goto label_7F31DE40;
    case 0x7F31DE44u: goto label_7F31DE44;
    case 0x7F31DE48u: goto label_7F31DE48;
    case 0x7F31DE4Cu: goto label_7F31DE4C;
    case 0x7F31DE50u: goto label_7F31DE50;
    case 0x7F31DE54u: goto label_7F31DE54;
    case 0x7F31DE58u: goto label_7F31DE58;
    case 0x7F31DE5Cu: goto label_7F31DE5C;
    case 0x7F31DE60u: goto label_7F31DE60;
    case 0x7F31DE64u: goto label_7F31DE64;
    case 0x7F31DE68u: goto label_7F31DE68;
    case 0x7F31DE6Cu: goto label_7F31DE6C;
    case 0x7F31DE70u: goto label_7F31DE70;
    case 0x7F31DE74u: goto label_7F31DE74;
    case 0x7F31DE78u: goto label_7F31DE78;
    case 0x7F31DE7Cu: goto label_7F31DE7C;
    case 0x7F31DE80u: goto label_7F31DE80;
    case 0x7F31DE84u: goto label_7F31DE84;
    case 0x7F31DE88u: goto label_7F31DE88;
    case 0x7F31DE8Cu: goto label_7F31DE8C;
    case 0x7F31DE90u: goto label_7F31DE90;
    case 0x7F31DE94u: goto label_7F31DE94;
    case 0x7F31DE98u: goto label_7F31DE98;
    case 0x7F31DE9Cu: goto label_7F31DE9C;
    case 0x7F31DEA0u: goto label_7F31DEA0;
    case 0x7F31DEA4u: goto label_7F31DEA4;
    case 0x7F31DEA8u: goto label_7F31DEA8;
    case 0x7F31DEACu: goto label_7F31DEAC;
    case 0x7F31DEB0u: goto label_7F31DEB0;
    case 0x7F31DEB4u: goto label_7F31DEB4;
    case 0x7F31DEB8u: goto label_7F31DEB8;
    case 0x7F31DEBCu: goto label_7F31DEBC;
    case 0x7F31DEC0u: goto label_7F31DEC0;
    case 0x7F31DEC4u: goto label_7F31DEC4;
    case 0x7F31DEC8u: goto label_7F31DEC8;
    case 0x7F31DECCu: goto label_7F31DECC;
    case 0x7F31DED0u: goto label_7F31DED0;
    case 0x7F31DED4u: goto label_7F31DED4;
    case 0x7F31DED8u: goto label_7F31DED8;
    case 0x7F31DEDCu: goto label_7F31DEDC;
    case 0x7F31DEE0u: goto label_7F31DEE0;
    case 0x7F31DEE4u: goto label_7F31DEE4;
    case 0x7F31DEE8u: goto label_7F31DEE8;
    case 0x7F31DEECu: goto label_7F31DEEC;
    case 0x7F31DEF0u: goto label_7F31DEF0;
    case 0x7F31DEF4u: goto label_7F31DEF4;
    case 0x7F31DEF8u: goto label_7F31DEF8;
    case 0x7F31DEFCu: goto label_7F31DEFC;
    case 0x7F31DF00u: goto label_7F31DF00;
    case 0x7F31DF04u: goto label_7F31DF04;
    case 0x7F31DF08u: goto label_7F31DF08;
    case 0x7F31DF0Cu: goto label_7F31DF0C;
    case 0x7F31DF10u: goto label_7F31DF10;
    case 0x7F31DF14u: goto label_7F31DF14;
    case 0x7F31DF18u: goto label_7F31DF18;
    case 0x7F31DF1Cu: goto label_7F31DF1C;
    case 0x7F31DF20u: goto label_7F31DF20;
    case 0x7F31DF24u: goto label_7F31DF24;
    case 0x7F31DF28u: goto label_7F31DF28;
    case 0x7F31DF2Cu: goto label_7F31DF2C;
    case 0x7F31DF30u: goto label_7F31DF30;
    case 0x7F31DF34u: goto label_7F31DF34;
    case 0x7F31DF38u: goto label_7F31DF38;
    case 0x7F31DF3Cu: goto label_7F31DF3C;
    case 0x7F31DF40u: goto label_7F31DF40;
    case 0x7F31DF44u: goto label_7F31DF44;
    case 0x7F31DF48u: goto label_7F31DF48;
    case 0x7F31DF4Cu: goto label_7F31DF4C;
    case 0x7F31DF50u: goto label_7F31DF50;
    case 0x7F31DF54u: goto label_7F31DF54;
    case 0x7F31DF58u: goto label_7F31DF58;
    case 0x7F31DF5Cu: goto label_7F31DF5C;
    case 0x7F31DF60u: goto label_7F31DF60;
    case 0x7F31DF64u: goto label_7F31DF64;
    case 0x7F31DF68u: goto label_7F31DF68;
    case 0x7F31DF6Cu: goto label_7F31DF6C;
    case 0x7F31DF70u: goto label_7F31DF70;
    case 0x7F31DF74u: goto label_7F31DF74;
    case 0x7F31DF78u: goto label_7F31DF78;
    case 0x7F31DF7Cu: goto label_7F31DF7C;
    case 0x7F31DF80u: goto label_7F31DF80;
    case 0x7F31DF84u: goto label_7F31DF84;
    case 0x7F31DF88u: goto label_7F31DF88;
    case 0x7F31DF8Cu: goto label_7F31DF8C;
    case 0x7F31DF90u: goto label_7F31DF90;
    case 0x7F31DF94u: goto label_7F31DF94;
    case 0x7F31DF98u: goto label_7F31DF98;
    case 0x7F31DF9Cu: goto label_7F31DF9C;
    case 0x7F31DFA0u: goto label_7F31DFA0;
    case 0x7F31DFA4u: goto label_7F31DFA4;
    case 0x7F31DFA8u: goto label_7F31DFA8;
    case 0x7F31DFACu: goto label_7F31DFAC;
    case 0x7F31DFB0u: goto label_7F31DFB0;
    case 0x7F31DFB4u: goto label_7F31DFB4;
    case 0x7F31DFB8u: goto label_7F31DFB8;
    case 0x7F31DFBCu: goto label_7F31DFBC;
    case 0x7F31DFC0u: goto label_7F31DFC0;
    case 0x7F31DFC4u: goto label_7F31DFC4;
    case 0x7F31DFC8u: goto label_7F31DFC8;
    case 0x7F31DFCCu: goto label_7F31DFCC;
    case 0x7F31DFD0u: goto label_7F31DFD0;
    case 0x7F31DFD4u: goto label_7F31DFD4;
    case 0x7F31DFD8u: goto label_7F31DFD8;
    case 0x7F31DFDCu: goto label_7F31DFDC;
    case 0x7F31DFE0u: goto label_7F31DFE0;
    case 0x7F31DFE4u: goto label_7F31DFE4;
    case 0x7F31DFE8u: goto label_7F31DFE8;
    case 0x7F31DFECu: goto label_7F31DFEC;
    case 0x7F31DFF0u: goto label_7F31DFF0;
    case 0x7F31DFF4u: goto label_7F31DFF4;
    case 0x7F31DFF8u: goto label_7F31DFF8;
    case 0x7F31DFFCu: goto label_7F31DFFC;
    case 0x7F31E000u: goto label_7F31E000;
    case 0x7F31E004u: goto label_7F31E004;
    case 0x7F31E008u: goto label_7F31E008;
    case 0x7F31E00Cu: goto label_7F31E00C;
    case 0x7F31E010u: goto label_7F31E010;
    case 0x7F31E014u: goto label_7F31E014;
    case 0x7F31E018u: goto label_7F31E018;
    case 0x7F31E01Cu: goto label_7F31E01C;
    case 0x7F31E020u: goto label_7F31E020;
    case 0x7F31E024u: goto label_7F31E024;
    case 0x7F31E028u: goto label_7F31E028;
    case 0x7F31E02Cu: goto label_7F31E02C;
    case 0x7F31E030u: goto label_7F31E030;
    case 0x7F31E034u: goto label_7F31E034;
    case 0x7F31E038u: goto label_7F31E038;
    case 0x7F31E03Cu: goto label_7F31E03C;
    case 0x7F31E040u: goto label_7F31E040;
    case 0x7F31E044u: goto label_7F31E044;
    case 0x7F31E048u: goto label_7F31E048;
    case 0x7F31E04Cu: goto label_7F31E04C;
    case 0x7F31E050u: goto label_7F31E050;
    case 0x7F31E054u: goto label_7F31E054;
    case 0x7F31E058u: goto label_7F31E058;
    case 0x7F31E05Cu: goto label_7F31E05C;
    case 0x7F31E060u: goto label_7F31E060;
    case 0x7F31E064u: goto label_7F31E064;
    case 0x7F31E068u: goto label_7F31E068;
    case 0x7F31E06Cu: goto label_7F31E06C;
    case 0x7F31E070u: goto label_7F31E070;
    case 0x7F31E074u: goto label_7F31E074;
    case 0x7F31E078u: goto label_7F31E078;
    case 0x7F31E07Cu: goto label_7F31E07C;
    case 0x7F31E080u: goto label_7F31E080;
    case 0x7F31E084u: goto label_7F31E084;
    case 0x7F31E088u: goto label_7F31E088;
    case 0x7F31E08Cu: goto label_7F31E08C;
    case 0x7F31E090u: goto label_7F31E090;
    case 0x7F31E094u: goto label_7F31E094;
    case 0x7F31E098u: goto label_7F31E098;
    case 0x7F31E09Cu: goto label_7F31E09C;
    case 0x7F31E0A0u: goto label_7F31E0A0;
    case 0x7F31E0A4u: goto label_7F31E0A4;
    case 0x7F31E0A8u: goto label_7F31E0A8;
    case 0x7F31E0ACu: goto label_7F31E0AC;
    case 0x7F31E0B0u: goto label_7F31E0B0;
    case 0x7F31E0B4u: goto label_7F31E0B4;
    case 0x7F31E0B8u: goto label_7F31E0B8;
    case 0x7F31E0BCu: goto label_7F31E0BC;
    case 0x7F31E0C0u: goto label_7F31E0C0;
    case 0x7F31E0C4u: goto label_7F31E0C4;
    case 0x7F31E0C8u: goto label_7F31E0C8;
    case 0x7F31E0CCu: goto label_7F31E0CC;
    case 0x7F31E0D0u: goto label_7F31E0D0;
    case 0x7F31E0D4u: goto label_7F31E0D4;
    case 0x7F31E0D8u: goto label_7F31E0D8;
    case 0x7F31E0DCu: goto label_7F31E0DC;
    case 0x7F31E0E0u: goto label_7F31E0E0;
    case 0x7F31E0E4u: goto label_7F31E0E4;
    case 0x7F31E0E8u: goto label_7F31E0E8;
    case 0x7F31E0ECu: goto label_7F31E0EC;
    case 0x7F31E0F0u: goto label_7F31E0F0;
    case 0x7F31E0F4u: goto label_7F31E0F4;
    case 0x7F31E0F8u: goto label_7F31E0F8;
    case 0x7F31E0FCu: goto label_7F31E0FC;
    case 0x7F31E100u: goto label_7F31E100;
    case 0x7F31E104u: goto label_7F31E104;
    case 0x7F31E108u: goto label_7F31E108;
    case 0x7F31E10Cu: goto label_7F31E10C;
    case 0x7F31E110u: goto label_7F31E110;
    case 0x7F31E114u: goto label_7F31E114;
    case 0x7F31E118u: goto label_7F31E118;
    case 0x7F31E11Cu: goto label_7F31E11C;
    case 0x7F31E120u: goto label_7F31E120;
    case 0x7F31E124u: goto label_7F31E124;
    case 0x7F31E128u: goto label_7F31E128;
    case 0x7F31E12Cu: goto label_7F31E12C;
    case 0x7F31E130u: goto label_7F31E130;
    case 0x7F31E134u: goto label_7F31E134;
    case 0x7F31E138u: goto label_7F31E138;
    case 0x7F31E13Cu: goto label_7F31E13C;
    case 0x7F31E140u: goto label_7F31E140;
    case 0x7F31E144u: goto label_7F31E144;
    case 0x7F31E148u: goto label_7F31E148;
    case 0x7F31E14Cu: goto label_7F31E14C;
    case 0x7F31E150u: goto label_7F31E150;
    case 0x7F31E154u: goto label_7F31E154;
    case 0x7F31E158u: goto label_7F31E158;
    case 0x7F31E15Cu: goto label_7F31E15C;
    case 0x7F31E160u: goto label_7F31E160;
    case 0x7F31E164u: goto label_7F31E164;
    case 0x7F31E168u: goto label_7F31E168;
    case 0x7F31E16Cu: goto label_7F31E16C;
    case 0x7F31E170u: goto label_7F31E170;
    case 0x7F31E174u: goto label_7F31E174;
    case 0x7F31E178u: goto label_7F31E178;
    case 0x7F31E17Cu: goto label_7F31E17C;
    case 0x7F31E180u: goto label_7F31E180;
    case 0x7F31E184u: goto label_7F31E184;
    case 0x7F31E188u: goto label_7F31E188;
    case 0x7F31E18Cu: goto label_7F31E18C;
    case 0x7F31E190u: goto label_7F31E190;
    case 0x7F31E194u: goto label_7F31E194;
    case 0x7F31E198u: goto label_7F31E198;
    case 0x7F31E19Cu: goto label_7F31E19C;
    case 0x7F31E1A0u: goto label_7F31E1A0;
    case 0x7F31E1A4u: goto label_7F31E1A4;
    case 0x7F31E1A8u: goto label_7F31E1A8;
    case 0x7F31E1ACu: goto label_7F31E1AC;
    case 0x7F31E1B0u: goto label_7F31E1B0;
    case 0x7F31E1B4u: goto label_7F31E1B4;
    case 0x7F31E1B8u: goto label_7F31E1B8;
    case 0x7F31E1BCu: goto label_7F31E1BC;
    case 0x7F31E1C0u: goto label_7F31E1C0;
    case 0x7F31E1C4u: goto label_7F31E1C4;
    case 0x7F31E1C8u: goto label_7F31E1C8;
    case 0x7F31E1CCu: goto label_7F31E1CC;
    case 0x7F31E1D0u: goto label_7F31E1D0;
    case 0x7F31E1D4u: goto label_7F31E1D4;
    case 0x7F31E1D8u: goto label_7F31E1D8;
    case 0x7F31E1DCu: goto label_7F31E1DC;
    case 0x7F31E1E0u: goto label_7F31E1E0;
    case 0x7F31E1E4u: goto label_7F31E1E4;
    case 0x7F31E1E8u: goto label_7F31E1E8;
    case 0x7F31E1ECu: goto label_7F31E1EC;
    case 0x7F31E1F0u: goto label_7F31E1F0;
    case 0x7F31E1F4u: goto label_7F31E1F4;
    case 0x7F31E1F8u: goto label_7F31E1F8;
    case 0x7F31E1FCu: goto label_7F31E1FC;
    case 0x7F31E200u: goto label_7F31E200;
    case 0x7F31E204u: goto label_7F31E204;
    case 0x7F31E208u: goto label_7F31E208;
    case 0x7F31E20Cu: goto label_7F31E20C;
    case 0x7F31E210u: goto label_7F31E210;
    case 0x7F31E214u: goto label_7F31E214;
    case 0x7F31E218u: goto label_7F31E218;
    case 0x7F31E21Cu: goto label_7F31E21C;
    case 0x7F31E220u: goto label_7F31E220;
    case 0x7F31E224u: goto label_7F31E224;
    case 0x7F31E228u: goto label_7F31E228;
    case 0x7F31E22Cu: goto label_7F31E22C;
    case 0x7F31E230u: goto label_7F31E230;
    case 0x7F31E234u: goto label_7F31E234;
    case 0x7F31E238u: goto label_7F31E238;
    case 0x7F31E23Cu: goto label_7F31E23C;
    case 0x7F31E240u: goto label_7F31E240;
    case 0x7F31E244u: goto label_7F31E244;
    case 0x7F31E248u: goto label_7F31E248;
    case 0x7F31E24Cu: goto label_7F31E24C;
    case 0x7F31E250u: goto label_7F31E250;
    case 0x7F31E254u: goto label_7F31E254;
    case 0x7F31E258u: goto label_7F31E258;
    case 0x7F31E25Cu: goto label_7F31E25C;
    case 0x7F31E260u: goto label_7F31E260;
    case 0x7F31E264u: goto label_7F31E264;
    case 0x7F31E268u: goto label_7F31E268;
    case 0x7F31E26Cu: goto label_7F31E26C;
    case 0x7F31E270u: goto label_7F31E270;
    case 0x7F31E274u: goto label_7F31E274;
    case 0x7F31E278u: goto label_7F31E278;
    case 0x7F31E27Cu: goto label_7F31E27C;
    case 0x7F31E280u: goto label_7F31E280;
    case 0x7F31E284u: goto label_7F31E284;
    case 0x7F31E288u: goto label_7F31E288;
    case 0x7F31E28Cu: goto label_7F31E28C;
    case 0x7F31E290u: goto label_7F31E290;
    case 0x7F31E294u: goto label_7F31E294;
    case 0x7F31E298u: goto label_7F31E298;
    case 0x7F31E29Cu: goto label_7F31E29C;
    case 0x7F31E2A0u: goto label_7F31E2A0;
    case 0x7F31E2A4u: goto label_7F31E2A4;
    case 0x7F31E2A8u: goto label_7F31E2A8;
    case 0x7F31E2ACu: goto label_7F31E2AC;
    case 0x7F31E2B0u: goto label_7F31E2B0;
    case 0x7F31E2B4u: goto label_7F31E2B4;
    case 0x7F31E2B8u: goto label_7F31E2B8;
    case 0x7F31E2BCu: goto label_7F31E2BC;
    case 0x7F31E2C0u: goto label_7F31E2C0;
    case 0x7F31E2C4u: goto label_7F31E2C4;
    case 0x7F31E2C8u: goto label_7F31E2C8;
    case 0x7F31E2CCu: goto label_7F31E2CC;
    case 0x7F31E2D0u: goto label_7F31E2D0;
    case 0x7F31E2D4u: goto label_7F31E2D4;
    case 0x7F31E2D8u: goto label_7F31E2D8;
    case 0x7F31E2DCu: goto label_7F31E2DC;
    case 0x7F31E2E0u: goto label_7F31E2E0;
    case 0x7F31E2E4u: goto label_7F31E2E4;
    case 0x7F31E2E8u: goto label_7F31E2E8;
    case 0x7F31E2ECu: goto label_7F31E2EC;
    case 0x7F31E2F0u: goto label_7F31E2F0;
    case 0x7F31E2F4u: goto label_7F31E2F4;
    case 0x7F31E2F8u: goto label_7F31E2F8;
    case 0x7F31E2FCu: goto label_7F31E2FC;
    case 0x7F31E300u: goto label_7F31E300;
    case 0x7F31E304u: goto label_7F31E304;
    case 0x7F31E308u: goto label_7F31E308;
    case 0x7F31E30Cu: goto label_7F31E30C;
    case 0x7F31E310u: goto label_7F31E310;
    case 0x7F31E314u: goto label_7F31E314;
    case 0x7F31E318u: goto label_7F31E318;
    case 0x7F31E31Cu: goto label_7F31E31C;
    case 0x7F31E320u: goto label_7F31E320;
    case 0x7F31E324u: goto label_7F31E324;
    case 0x7F31E328u: goto label_7F31E328;
    case 0x7F31E32Cu: goto label_7F31E32C;
    case 0x7F31E330u: goto label_7F31E330;
    case 0x7F31E334u: goto label_7F31E334;
    case 0x7F31E338u: goto label_7F31E338;
    case 0x7F31E33Cu: goto label_7F31E33C;
    case 0x7F31E340u: goto label_7F31E340;
    case 0x7F31E344u: goto label_7F31E344;
    case 0x7F31E348u: goto label_7F31E348;
    case 0x7F31E34Cu: goto label_7F31E34C;
    case 0x7F31E350u: goto label_7F31E350;
    case 0x7F31E354u: goto label_7F31E354;
    case 0x7F31E358u: goto label_7F31E358;
    case 0x7F31E35Cu: goto label_7F31E35C;
    case 0x7F31E360u: goto label_7F31E360;
    case 0x7F31E364u: goto label_7F31E364;
    case 0x7F31E368u: goto label_7F31E368;
    case 0x7F31E36Cu: goto label_7F31E36C;
    case 0x7F31E370u: goto label_7F31E370;
    case 0x7F31E374u: goto label_7F31E374;
    case 0x7F31E378u: goto label_7F31E378;
    case 0x7F31E37Cu: goto label_7F31E37C;
    case 0x7F31E380u: goto label_7F31E380;
    case 0x7F31E384u: goto label_7F31E384;
    case 0x7F31E388u: goto label_7F31E388;
    case 0x7F31E38Cu: goto label_7F31E38C;
    case 0x7F31E390u: goto label_7F31E390;
    case 0x7F31E394u: goto label_7F31E394;
    case 0x7F31E398u: goto label_7F31E398;
    case 0x7F31E39Cu: goto label_7F31E39C;
    case 0x7F31E3A0u: goto label_7F31E3A0;
    case 0x7F31E3A4u: goto label_7F31E3A4;
    case 0x7F31E3A8u: goto label_7F31E3A8;
    case 0x7F31E3ACu: goto label_7F31E3AC;
    case 0x7F31E3B0u: goto label_7F31E3B0;
    case 0x7F31E3B4u: goto label_7F31E3B4;
    case 0x7F31E3B8u: goto label_7F31E3B8;
    case 0x7F31E3BCu: goto label_7F31E3BC;
    case 0x7F31E3C0u: goto label_7F31E3C0;
    case 0x7F31E3C4u: goto label_7F31E3C4;
    case 0x7F31E3C8u: goto label_7F31E3C8;
    case 0x7F31E3CCu: goto label_7F31E3CC;
    case 0x7F31E3D0u: goto label_7F31E3D0;
    case 0x7F31E3D4u: goto label_7F31E3D4;
    case 0x7F31E3D8u: goto label_7F31E3D8;
    case 0x7F31E3DCu: goto label_7F31E3DC;
    case 0x7F31E3E0u: goto label_7F31E3E0;
    case 0x7F31E3E4u: goto label_7F31E3E4;
    case 0x7F31E3E8u: goto label_7F31E3E8;
    case 0x7F31E3ECu: goto label_7F31E3EC;
    case 0x7F31E3F0u: goto label_7F31E3F0;
    case 0x7F31E3F4u: goto label_7F31E3F4;
    case 0x7F31E3F8u: goto label_7F31E3F8;
    case 0x7F31E3FCu: goto label_7F31E3FC;
    case 0x7F31E400u: goto label_7F31E400;
    case 0x7F31E404u: goto label_7F31E404;
    case 0x7F31E408u: goto label_7F31E408;
    case 0x7F31E40Cu: goto label_7F31E40C;
    case 0x7F31E410u: goto label_7F31E410;
    case 0x7F31E414u: goto label_7F31E414;
    case 0x7F31E418u: goto label_7F31E418;
    case 0x7F31E41Cu: goto label_7F31E41C;
    case 0x7F31E420u: goto label_7F31E420;
    case 0x7F31E424u: goto label_7F31E424;
    case 0x7F31E428u: goto label_7F31E428;
    case 0x7F31E42Cu: goto label_7F31E42C;
    case 0x7F31E430u: goto label_7F31E430;
    case 0x7F31E434u: goto label_7F31E434;
    case 0x7F31E438u: goto label_7F31E438;
    case 0x7F31E43Cu: goto label_7F31E43C;
    case 0x7F31E440u: goto label_7F31E440;
    case 0x7F31E444u: goto label_7F31E444;
    case 0x7F31E448u: goto label_7F31E448;
    case 0x7F31E44Cu: goto label_7F31E44C;
    case 0x7F31E450u: goto label_7F31E450;
    case 0x7F31E454u: goto label_7F31E454;
    case 0x7F31E458u: goto label_7F31E458;
    case 0x7F31E45Cu: goto label_7F31E45C;
    case 0x7F31E460u: goto label_7F31E460;
    case 0x7F31E464u: goto label_7F31E464;
    case 0x7F31E468u: goto label_7F31E468;
    case 0x7F31E46Cu: goto label_7F31E46C;
    case 0x7F31E470u: goto label_7F31E470;
    case 0x7F31E474u: goto label_7F31E474;
    case 0x7F31E478u: goto label_7F31E478;
    case 0x7F31E47Cu: goto label_7F31E47C;
    case 0x7F31E480u: goto label_7F31E480;
    case 0x7F31E484u: goto label_7F31E484;
    case 0x7F31E488u: goto label_7F31E488;
    case 0x7F31E48Cu: goto label_7F31E48C;
    case 0x7F31E490u: goto label_7F31E490;
    case 0x7F31E494u: goto label_7F31E494;
    case 0x7F31E498u: goto label_7F31E498;
    case 0x7F31E49Cu: goto label_7F31E49C;
    case 0x7F31E4A0u: goto label_7F31E4A0;
    case 0x7F31E4A4u: goto label_7F31E4A4;
    case 0x7F31E4A8u: goto label_7F31E4A8;
    case 0x7F31E4ACu: goto label_7F31E4AC;
    case 0x7F31E4B0u: goto label_7F31E4B0;
    case 0x7F31E4B4u: goto label_7F31E4B4;
    case 0x7F31E4B8u: goto label_7F31E4B8;
    case 0x7F31E4BCu: goto label_7F31E4BC;
    case 0x7F31E4C0u: goto label_7F31E4C0;
    case 0x7F31E4C4u: goto label_7F31E4C4;
    case 0x7F31E4C8u: goto label_7F31E4C8;
    case 0x7F31E4CCu: goto label_7F31E4CC;
    case 0x7F31E4D0u: goto label_7F31E4D0;
    case 0x7F31E4D4u: goto label_7F31E4D4;
    case 0x7F31E4D8u: goto label_7F31E4D8;
    case 0x7F31E4DCu: goto label_7F31E4DC;
    case 0x7F31E4E0u: goto label_7F31E4E0;
    case 0x7F31E4E4u: goto label_7F31E4E4;
    case 0x7F31E4E8u: goto label_7F31E4E8;
    case 0x7F31E4ECu: goto label_7F31E4EC;
    case 0x7F31E4F0u: goto label_7F31E4F0;
    case 0x7F31E4F4u: goto label_7F31E4F4;
    case 0x7F31E4F8u: goto label_7F31E4F8;
    case 0x7F31E4FCu: goto label_7F31E4FC;
    case 0x7F31E500u: goto label_7F31E500;
    case 0x7F31E504u: goto label_7F31E504;
    case 0x7F31E508u: goto label_7F31E508;
    case 0x7F31E50Cu: goto label_7F31E50C;
    case 0x7F31E510u: goto label_7F31E510;
    case 0x7F31E514u: goto label_7F31E514;
    case 0x7F31E518u: goto label_7F31E518;
    case 0x7F31E51Cu: goto label_7F31E51C;
    case 0x7F31E520u: goto label_7F31E520;
    case 0x7F31E524u: goto label_7F31E524;
    case 0x7F31E528u: goto label_7F31E528;
    case 0x7F31E52Cu: goto label_7F31E52C;
    case 0x7F31E530u: goto label_7F31E530;
    case 0x7F31E534u: goto label_7F31E534;
    case 0x7F31E538u: goto label_7F31E538;
    case 0x7F31E53Cu: goto label_7F31E53C;
    case 0x7F31E540u: goto label_7F31E540;
    case 0x7F31E544u: goto label_7F31E544;
    case 0x7F31E548u: goto label_7F31E548;
    case 0x7F31E54Cu: goto label_7F31E54C;
    case 0x7F31E550u: goto label_7F31E550;
    case 0x7F31E554u: goto label_7F31E554;
    case 0x7F31E558u: goto label_7F31E558;
    case 0x7F31E55Cu: goto label_7F31E55C;
    case 0x7F31E560u: goto label_7F31E560;
    case 0x7F31E564u: goto label_7F31E564;
    case 0x7F31E568u: goto label_7F31E568;
    case 0x7F31E56Cu: goto label_7F31E56C;
    case 0x7F31E570u: goto label_7F31E570;
    case 0x7F31E574u: goto label_7F31E574;
    case 0x7F31E578u: goto label_7F31E578;
    case 0x7F31E57Cu: goto label_7F31E57C;
    case 0x7F31E580u: goto label_7F31E580;
    case 0x7F31E584u: goto label_7F31E584;
    case 0x7F31E588u: goto label_7F31E588;
    case 0x7F31E58Cu: goto label_7F31E58C;
    case 0x7F31E590u: goto label_7F31E590;
    case 0x7F31E594u: goto label_7F31E594;
    case 0x7F31E598u: goto label_7F31E598;
    case 0x7F31E59Cu: goto label_7F31E59C;
    case 0x7F31E5A0u: goto label_7F31E5A0;
    case 0x7F31E5A4u: goto label_7F31E5A4;
    case 0x7F31E5A8u: goto label_7F31E5A8;
    case 0x7F31E5ACu: goto label_7F31E5AC;
    case 0x7F31E5B0u: goto label_7F31E5B0;
    case 0x7F31E5B4u: goto label_7F31E5B4;
    case 0x7F31E5B8u: goto label_7F31E5B8;
    case 0x7F31E5BCu: goto label_7F31E5BC;
    case 0x7F31E5C0u: goto label_7F31E5C0;
    case 0x7F31E5C4u: goto label_7F31E5C4;
    case 0x7F31E5C8u: goto label_7F31E5C8;
    case 0x7F31E5CCu: goto label_7F31E5CC;
    case 0x7F31E5D0u: goto label_7F31E5D0;
    case 0x7F31E5D4u: goto label_7F31E5D4;
    case 0x7F31E5D8u: goto label_7F31E5D8;
    case 0x7F31E5DCu: goto label_7F31E5DC;
    case 0x7F31E5E0u: goto label_7F31E5E0;
    case 0x7F31E5E4u: goto label_7F31E5E4;
    case 0x7F31E5E8u: goto label_7F31E5E8;
    case 0x7F31E5ECu: goto label_7F31E5EC;
    case 0x7F31E5F0u: goto label_7F31E5F0;
    case 0x7F31E5F4u: goto label_7F31E5F4;
    case 0x7F31E5F8u: goto label_7F31E5F8;
    case 0x7F31E5FCu: goto label_7F31E5FC;
    case 0x7F31E600u: goto label_7F31E600;
    case 0x7F31E604u: goto label_7F31E604;
    case 0x7F31E608u: goto label_7F31E608;
    case 0x7F31E60Cu: goto label_7F31E60C;
    case 0x7F31E610u: goto label_7F31E610;
    case 0x7F31E614u: goto label_7F31E614;
    case 0x7F31E618u: goto label_7F31E618;
    case 0x7F31E61Cu: goto label_7F31E61C;
    case 0x7F31E620u: goto label_7F31E620;
    case 0x7F31E624u: goto label_7F31E624;
    case 0x7F31E628u: goto label_7F31E628;
    case 0x7F31E62Cu: goto label_7F31E62C;
    case 0x7F31E630u: goto label_7F31E630;
    case 0x7F31E634u: goto label_7F31E634;
    case 0x7F31E638u: goto label_7F31E638;
    case 0x7F31E63Cu: goto label_7F31E63C;
    case 0x7F31E640u: goto label_7F31E640;
    case 0x7F31E644u: goto label_7F31E644;
    case 0x7F31E648u: goto label_7F31E648;
    case 0x7F31E64Cu: goto label_7F31E64C;
    case 0x7F31E650u: goto label_7F31E650;
    case 0x7F31E654u: goto label_7F31E654;
    case 0x7F31E658u: goto label_7F31E658;
    case 0x7F31E65Cu: goto label_7F31E65C;
    case 0x7F31E660u: goto label_7F31E660;
    case 0x7F31E664u: goto label_7F31E664;
    case 0x7F31E668u: goto label_7F31E668;
    case 0x7F31E66Cu: goto label_7F31E66C;
    case 0x7F31E670u: goto label_7F31E670;
    case 0x7F31E674u: goto label_7F31E674;
    case 0x7F31E678u: goto label_7F31E678;
    case 0x7F31E67Cu: goto label_7F31E67C;
    case 0x7F31E680u: goto label_7F31E680;
    case 0x7F31E684u: goto label_7F31E684;
    case 0x7F31E688u: goto label_7F31E688;
    case 0x7F31E68Cu: goto label_7F31E68C;
    case 0x7F31E690u: goto label_7F31E690;
    case 0x7F31E694u: goto label_7F31E694;
    case 0x7F31E698u: goto label_7F31E698;
    case 0x7F31E69Cu: goto label_7F31E69C;
    case 0x7F31E6A0u: goto label_7F31E6A0;
    case 0x7F31E6A4u: goto label_7F31E6A4;
    case 0x7F31E6A8u: goto label_7F31E6A8;
    case 0x7F31E6ACu: goto label_7F31E6AC;
    case 0x7F31E6B0u: goto label_7F31E6B0;
    case 0x7F31E6B4u: goto label_7F31E6B4;
    case 0x7F31E6B8u: goto label_7F31E6B8;
    case 0x7F31E6BCu: goto label_7F31E6BC;
    case 0x7F31E6C0u: goto label_7F31E6C0;
    case 0x7F31E6C4u: goto label_7F31E6C4;
    case 0x7F31E6C8u: goto label_7F31E6C8;
    case 0x7F31E6CCu: goto label_7F31E6CC;
    case 0x7F31E6D0u: goto label_7F31E6D0;
    case 0x7F31E6D4u: goto label_7F31E6D4;
    case 0x7F31E6D8u: goto label_7F31E6D8;
    case 0x7F31E6DCu: goto label_7F31E6DC;
    case 0x7F31E6E0u: goto label_7F31E6E0;
    case 0x7F31E6E4u: goto label_7F31E6E4;
    case 0x7F31E6E8u: goto label_7F31E6E8;
    case 0x7F31E6ECu: goto label_7F31E6EC;
    case 0x7F31E6F0u: goto label_7F31E6F0;
    case 0x7F31E6F4u: goto label_7F31E6F4;
    case 0x7F31E6F8u: goto label_7F31E6F8;
    case 0x7F31E6FCu: goto label_7F31E6FC;
    case 0x7F31E700u: goto label_7F31E700;
    case 0x7F31E704u: goto label_7F31E704;
    case 0x7F31E708u: goto label_7F31E708;
    case 0x7F31E70Cu: goto label_7F31E70C;
    case 0x7F31E710u: goto label_7F31E710;
    case 0x7F31E714u: goto label_7F31E714;
    case 0x7F31E718u: goto label_7F31E718;
    case 0x7F31E71Cu: goto label_7F31E71C;
    case 0x7F31E720u: goto label_7F31E720;
    case 0x7F31E724u: goto label_7F31E724;
    case 0x7F31E728u: goto label_7F31E728;
    case 0x7F31E72Cu: goto label_7F31E72C;
    case 0x7F31E730u: goto label_7F31E730;
    case 0x7F31E734u: goto label_7F31E734;
    case 0x7F31E738u: goto label_7F31E738;
    case 0x7F31E73Cu: goto label_7F31E73C;
    case 0x7F31E740u: goto label_7F31E740;
    case 0x7F31E744u: goto label_7F31E744;
    case 0x7F31E748u: goto label_7F31E748;
    case 0x7F31E74Cu: goto label_7F31E74C;
    case 0x7F31E750u: goto label_7F31E750;
    case 0x7F31E754u: goto label_7F31E754;
    case 0x7F31E758u: goto label_7F31E758;
    case 0x7F31E75Cu: goto label_7F31E75C;
    case 0x7F31E760u: goto label_7F31E760;
    case 0x7F31E764u: goto label_7F31E764;
    case 0x7F31E768u: goto label_7F31E768;
    case 0x7F31E76Cu: goto label_7F31E76C;
    case 0x7F31E770u: goto label_7F31E770;
    case 0x7F31E774u: goto label_7F31E774;
    case 0x7F31E778u: goto label_7F31E778;
    case 0x7F31E77Cu: goto label_7F31E77C;
    case 0x7F31E780u: goto label_7F31E780;
    case 0x7F31E784u: goto label_7F31E784;
    case 0x7F31E788u: goto label_7F31E788;
    case 0x7F31E78Cu: goto label_7F31E78C;
    case 0x7F31E790u: goto label_7F31E790;
    case 0x7F31E794u: goto label_7F31E794;
    case 0x7F31E798u: goto label_7F31E798;
    case 0x7F31E79Cu: goto label_7F31E79C;
    case 0x7F31E7A0u: goto label_7F31E7A0;
    case 0x7F31E7A4u: goto label_7F31E7A4;
    case 0x7F31E7A8u: goto label_7F31E7A8;
    case 0x7F31E7ACu: goto label_7F31E7AC;
    case 0x7F31E7B0u: goto label_7F31E7B0;
    case 0x7F31E7B4u: goto label_7F31E7B4;
    case 0x7F31E7B8u: goto label_7F31E7B8;
    case 0x7F31E7BCu: goto label_7F31E7BC;
    case 0x7F31E7C0u: goto label_7F31E7C0;
    case 0x7F31E7C4u: goto label_7F31E7C4;
    case 0x7F31E7C8u: goto label_7F31E7C8;
    case 0x7F31E7CCu: goto label_7F31E7CC;
    case 0x7F31E7D0u: goto label_7F31E7D0;
    case 0x7F31E7D4u: goto label_7F31E7D4;
    case 0x7F31E7D8u: goto label_7F31E7D8;
    case 0x7F31E7DCu: goto label_7F31E7DC;
    case 0x7F31E7E0u: goto label_7F31E7E0;
    case 0x7F31E7E4u: goto label_7F31E7E4;
    case 0x7F31E7E8u: goto label_7F31E7E8;
    case 0x7F31E7ECu: goto label_7F31E7EC;
    case 0x7F31E7F0u: goto label_7F31E7F0;
    case 0x7F31E7F4u: goto label_7F31E7F4;
    case 0x7F31E7F8u: goto label_7F31E7F8;
    case 0x7F31E7FCu: goto label_7F31E7FC;
    case 0x7F31E800u: goto label_7F31E800;
    case 0x7F31E804u: goto label_7F31E804;
    case 0x7F31E808u: goto label_7F31E808;
    case 0x7F31E80Cu: goto label_7F31E80C;
    case 0x7F31E810u: goto label_7F31E810;
    case 0x7F31E814u: goto label_7F31E814;
    case 0x7F31E818u: goto label_7F31E818;
    case 0x7F31E81Cu: goto label_7F31E81C;
    case 0x7F31E820u: goto label_7F31E820;
    case 0x7F31E824u: goto label_7F31E824;
    case 0x7F31E828u: goto label_7F31E828;
    case 0x7F31E82Cu: goto label_7F31E82C;
    case 0x7F31E830u: goto label_7F31E830;
    case 0x7F31E834u: goto label_7F31E834;
    case 0x7F31E838u: goto label_7F31E838;
    case 0x7F31E83Cu: goto label_7F31E83C;
    case 0x7F31E840u: goto label_7F31E840;
    case 0x7F31E844u: goto label_7F31E844;
    case 0x7F31E848u: goto label_7F31E848;
    case 0x7F31E84Cu: goto label_7F31E84C;
    case 0x7F31E850u: goto label_7F31E850;
    case 0x7F31E854u: goto label_7F31E854;
    case 0x7F31E858u: goto label_7F31E858;
    case 0x7F31E85Cu: goto label_7F31E85C;
    case 0x7F31E860u: goto label_7F31E860;
    case 0x7F31E864u: goto label_7F31E864;
    case 0x7F31E868u: goto label_7F31E868;
    case 0x7F31E86Cu: goto label_7F31E86C;
    case 0x7F31E870u: goto label_7F31E870;
    case 0x7F31E874u: goto label_7F31E874;
    case 0x7F31E878u: goto label_7F31E878;
    case 0x7F31E87Cu: goto label_7F31E87C;
    case 0x7F31E880u: goto label_7F31E880;
    case 0x7F31E884u: goto label_7F31E884;
    case 0x7F31E888u: goto label_7F31E888;
    case 0x7F31E88Cu: goto label_7F31E88C;
    case 0x7F31E890u: goto label_7F31E890;
    case 0x7F31E894u: goto label_7F31E894;
    case 0x7F31E898u: goto label_7F31E898;
    case 0x7F31E89Cu: goto label_7F31E89C;
    case 0x7F31E8A0u: goto label_7F31E8A0;
    case 0x7F31E8A4u: goto label_7F31E8A4;
    case 0x7F31E8A8u: goto label_7F31E8A8;
    case 0x7F31E8ACu: goto label_7F31E8AC;
    case 0x7F31E8B0u: goto label_7F31E8B0;
    case 0x7F31E8B4u: goto label_7F31E8B4;
    case 0x7F31E8B8u: goto label_7F31E8B8;
    case 0x7F31E8BCu: goto label_7F31E8BC;
    case 0x7F31E8C0u: goto label_7F31E8C0;
    case 0x7F31E8C4u: goto label_7F31E8C4;
    case 0x7F31E8C8u: goto label_7F31E8C8;
    case 0x7F31E8CCu: goto label_7F31E8CC;
    case 0x7F31E8D0u: goto label_7F31E8D0;
    case 0x7F31E8D4u: goto label_7F31E8D4;
    case 0x7F31E8D8u: goto label_7F31E8D8;
    case 0x7F31E8DCu: goto label_7F31E8DC;
    case 0x7F31E8E0u: goto label_7F31E8E0;
    case 0x7F31E8E4u: goto label_7F31E8E4;
    case 0x7F31E8E8u: goto label_7F31E8E8;
    case 0x7F31E8ECu: goto label_7F31E8EC;
    case 0x7F31E8F0u: goto label_7F31E8F0;
    case 0x7F31E8F4u: goto label_7F31E8F4;
    case 0x7F31E8F8u: goto label_7F31E8F8;
    case 0x7F31E8FCu: goto label_7F31E8FC;
    case 0x7F31E900u: goto label_7F31E900;
    case 0x7F31E904u: goto label_7F31E904;
    case 0x7F31E908u: goto label_7F31E908;
    case 0x7F31E90Cu: goto label_7F31E90C;
    case 0x7F31E910u: goto label_7F31E910;
    case 0x7F31E914u: goto label_7F31E914;
    case 0x7F31E918u: goto label_7F31E918;
    case 0x7F31E91Cu: goto label_7F31E91C;
    case 0x7F31E920u: goto label_7F31E920;
    case 0x7F31E924u: goto label_7F31E924;
    case 0x7F31E928u: goto label_7F31E928;
    case 0x7F31E92Cu: goto label_7F31E92C;
    case 0x7F31E930u: goto label_7F31E930;
    case 0x7F31E934u: goto label_7F31E934;
    case 0x7F31E938u: goto label_7F31E938;
    case 0x7F31E93Cu: goto label_7F31E93C;
    case 0x7F31E940u: goto label_7F31E940;
    case 0x7F31E944u: goto label_7F31E944;
    case 0x7F31E948u: goto label_7F31E948;
    case 0x7F31E94Cu: goto label_7F31E94C;
    case 0x7F31E950u: goto label_7F31E950;
    case 0x7F31E954u: goto label_7F31E954;
    case 0x7F31E958u: goto label_7F31E958;
    case 0x7F31E95Cu: goto label_7F31E95C;
    case 0x7F31E960u: goto label_7F31E960;
    case 0x7F31E964u: goto label_7F31E964;
    case 0x7F31E968u: goto label_7F31E968;
    case 0x7F31E96Cu: goto label_7F31E96C;
    case 0x7F31E970u: goto label_7F31E970;
    case 0x7F31E974u: goto label_7F31E974;
    case 0x7F31E978u: goto label_7F31E978;
    case 0x7F31E97Cu: goto label_7F31E97C;
    case 0x7F31E980u: goto label_7F31E980;
    case 0x7F31E984u: goto label_7F31E984;
    case 0x7F31E988u: goto label_7F31E988;
    case 0x7F31E98Cu: goto label_7F31E98C;
    case 0x7F31E990u: goto label_7F31E990;
    case 0x7F31E994u: goto label_7F31E994;
    case 0x7F31E998u: goto label_7F31E998;
    case 0x7F31E99Cu: goto label_7F31E99C;
    case 0x7F31E9A0u: goto label_7F31E9A0;
    case 0x7F31E9A4u: goto label_7F31E9A4;
    case 0x7F31E9A8u: goto label_7F31E9A8;
    case 0x7F31E9ACu: goto label_7F31E9AC;
    case 0x7F31E9B0u: goto label_7F31E9B0;
    case 0x7F31E9B4u: goto label_7F31E9B4;
    case 0x7F31E9B8u: goto label_7F31E9B8;
    case 0x7F31E9BCu: goto label_7F31E9BC;
    case 0x7F31E9C0u: goto label_7F31E9C0;
    case 0x7F31E9C4u: goto label_7F31E9C4;
    case 0x7F31E9C8u: goto label_7F31E9C8;
    case 0x7F31E9CCu: goto label_7F31E9CC;
    case 0x7F31E9D0u: goto label_7F31E9D0;
    case 0x7F31E9D4u: goto label_7F31E9D4;
    case 0x7F31E9D8u: goto label_7F31E9D8;
    case 0x7F31E9DCu: goto label_7F31E9DC;
    case 0x7F31E9E0u: goto label_7F31E9E0;
    case 0x7F31E9E4u: goto label_7F31E9E4;
    case 0x7F31E9E8u: goto label_7F31E9E8;
    case 0x7F31E9ECu: goto label_7F31E9EC;
    case 0x7F31E9F0u: goto label_7F31E9F0;
    case 0x7F31E9F4u: goto label_7F31E9F4;
    case 0x7F31E9F8u: goto label_7F31E9F8;
    case 0x7F31E9FCu: goto label_7F31E9FC;
    case 0x7F31EA00u: goto label_7F31EA00;
    case 0x7F31EA04u: goto label_7F31EA04;
    case 0x7F31EA08u: goto label_7F31EA08;
    case 0x7F31EA0Cu: goto label_7F31EA0C;
    case 0x7F31EA10u: goto label_7F31EA10;
    case 0x7F31EA14u: goto label_7F31EA14;
    case 0x7F31EA18u: goto label_7F31EA18;
    case 0x7F31EA1Cu: goto label_7F31EA1C;
    case 0x7F31EA20u: goto label_7F31EA20;
    case 0x7F31EA24u: goto label_7F31EA24;
    case 0x7F31EA28u: goto label_7F31EA28;
    case 0x7F31EA2Cu: goto label_7F31EA2C;
    case 0x7F31EA30u: goto label_7F31EA30;
    case 0x7F31EA34u: goto label_7F31EA34;
    case 0x7F31EA38u: goto label_7F31EA38;
    case 0x7F31EA3Cu: goto label_7F31EA3C;
    case 0x7F31EA40u: goto label_7F31EA40;
    case 0x7F31EA44u: goto label_7F31EA44;
    case 0x7F31EA48u: goto label_7F31EA48;
    case 0x7F31EA4Cu: goto label_7F31EA4C;
    case 0x7F31EA50u: goto label_7F31EA50;
    case 0x7F31EA54u: goto label_7F31EA54;
    case 0x7F31EA58u: goto label_7F31EA58;
    case 0x7F31EA5Cu: goto label_7F31EA5C;
    case 0x7F31EA60u: goto label_7F31EA60;
    case 0x7F31EA64u: goto label_7F31EA64;
    case 0x7F31EA68u: goto label_7F31EA68;
    case 0x7F31EA6Cu: goto label_7F31EA6C;
    case 0x7F31EA70u: goto label_7F31EA70;
    case 0x7F31EA74u: goto label_7F31EA74;
    case 0x7F31EA78u: goto label_7F31EA78;
    case 0x7F31EA7Cu: goto label_7F31EA7C;
    case 0x7F31EA80u: goto label_7F31EA80;
    case 0x7F31EA84u: goto label_7F31EA84;
    case 0x7F31EA88u: goto label_7F31EA88;
    case 0x7F31EA8Cu: goto label_7F31EA8C;
    case 0x7F31EA90u: goto label_7F31EA90;
    case 0x7F31EA94u: goto label_7F31EA94;
    case 0x7F31EA98u: goto label_7F31EA98;
    case 0x7F31EA9Cu: goto label_7F31EA9C;
    case 0x7F31EAA0u: goto label_7F31EAA0;
    case 0x7F31EAA4u: goto label_7F31EAA4;
    case 0x7F31EAA8u: goto label_7F31EAA8;
    case 0x7F31EAACu: goto label_7F31EAAC;
    case 0x7F31EAB0u: goto label_7F31EAB0;
    case 0x7F31EAB4u: goto label_7F31EAB4;
    case 0x7F31EAB8u: goto label_7F31EAB8;
    case 0x7F31EABCu: goto label_7F31EABC;
    case 0x7F31EAC0u: goto label_7F31EAC0;
    case 0x7F31EAC4u: goto label_7F31EAC4;
    case 0x7F31EAC8u: goto label_7F31EAC8;
    case 0x7F31EACCu: goto label_7F31EACC;
    case 0x7F31EAD0u: goto label_7F31EAD0;
    case 0x7F31EAD4u: goto label_7F31EAD4;
    case 0x7F31EAD8u: goto label_7F31EAD8;
    case 0x7F31EADCu: goto label_7F31EADC;
    case 0x7F31EAE0u: goto label_7F31EAE0;
    case 0x7F31EAE4u: goto label_7F31EAE4;
    case 0x7F31EAE8u: goto label_7F31EAE8;
    case 0x7F31EAECu: goto label_7F31EAEC;
    case 0x7F31EAF0u: goto label_7F31EAF0;
    case 0x7F31EAF4u: goto label_7F31EAF4;
    case 0x7F31EAF8u: goto label_7F31EAF8;
    case 0x7F31EAFCu: goto label_7F31EAFC;
    case 0x7F31EB00u: goto label_7F31EB00;
    case 0x7F31EB04u: goto label_7F31EB04;
    case 0x7F31EB08u: goto label_7F31EB08;
    case 0x7F31EB0Cu: goto label_7F31EB0C;
    case 0x7F31EB10u: goto label_7F31EB10;
    case 0x7F31EB14u: goto label_7F31EB14;
    case 0x7F31EB18u: goto label_7F31EB18;
    case 0x7F31EB1Cu: goto label_7F31EB1C;
    case 0x7F31EB20u: goto label_7F31EB20;
    case 0x7F31EB24u: goto label_7F31EB24;
    case 0x7F31EB28u: goto label_7F31EB28;
    case 0x7F31EB2Cu: goto label_7F31EB2C;
    case 0x7F31EB30u: goto label_7F31EB30;
    case 0x7F31EB34u: goto label_7F31EB34;
    case 0x7F31EB38u: goto label_7F31EB38;
    case 0x7F31EB3Cu: goto label_7F31EB3C;
    case 0x7F31EB40u: goto label_7F31EB40;
    case 0x7F31EB44u: goto label_7F31EB44;
    case 0x7F31EB48u: goto label_7F31EB48;
    case 0x7F31EB4Cu: goto label_7F31EB4C;
    case 0x7F31EB50u: goto label_7F31EB50;
    case 0x7F31EB54u: goto label_7F31EB54;
    case 0x7F31EB58u: goto label_7F31EB58;
    case 0x7F31EB5Cu: goto label_7F31EB5C;
    case 0x7F31EB60u: goto label_7F31EB60;
    case 0x7F31EB64u: goto label_7F31EB64;
    case 0x7F31EB68u: goto label_7F31EB68;
    case 0x7F31EB6Cu: goto label_7F31EB6C;
    case 0x7F31EB70u: goto label_7F31EB70;
    case 0x7F31EB74u: goto label_7F31EB74;
    case 0x7F31EB78u: goto label_7F31EB78;
    case 0x7F31EB7Cu: goto label_7F31EB7C;
    case 0x7F31EB80u: goto label_7F31EB80;
    case 0x7F31EB84u: goto label_7F31EB84;
    case 0x7F31EB88u: goto label_7F31EB88;
    case 0x7F31EB8Cu: goto label_7F31EB8C;
    case 0x7F31EB90u: goto label_7F31EB90;
    case 0x7F31EB94u: goto label_7F31EB94;
    case 0x7F31EB98u: goto label_7F31EB98;
    case 0x7F31EB9Cu: goto label_7F31EB9C;
    case 0x7F31EBA0u: goto label_7F31EBA0;
    case 0x7F31EBA4u: goto label_7F31EBA4;
    case 0x7F31EBA8u: goto label_7F31EBA8;
    case 0x7F31EBACu: goto label_7F31EBAC;
    case 0x7F31EBB0u: goto label_7F31EBB0;
    case 0x7F31EBB4u: goto label_7F31EBB4;
    case 0x7F31EBB8u: goto label_7F31EBB8;
    case 0x7F31EBBCu: goto label_7F31EBBC;
    case 0x7F31EBC0u: goto label_7F31EBC0;
    case 0x7F31EBC4u: goto label_7F31EBC4;
    case 0x7F31EBC8u: goto label_7F31EBC8;
    case 0x7F31EBCCu: goto label_7F31EBCC;
    case 0x7F31EBD0u: goto label_7F31EBD0;
    case 0x7F31EBD4u: goto label_7F31EBD4;
    case 0x7F31EBD8u: goto label_7F31EBD8;
    case 0x7F31EBDCu: goto label_7F31EBDC;
    case 0x7F31EBE0u: goto label_7F31EBE0;
    case 0x7F31EBE4u: goto label_7F31EBE4;
    case 0x7F31EBE8u: goto label_7F31EBE8;
    case 0x7F31EBECu: goto label_7F31EBEC;
    case 0x7F31EBF0u: goto label_7F31EBF0;
    case 0x7F31EBF4u: goto label_7F31EBF4;
    case 0x7F31EBF8u: goto label_7F31EBF8;
    case 0x7F31EBFCu: goto label_7F31EBFC;
    case 0x7F31EC00u: goto label_7F31EC00;
    case 0x7F31EC04u: goto label_7F31EC04;
    case 0x7F31EC08u: goto label_7F31EC08;
    case 0x7F31EC0Cu: goto label_7F31EC0C;
    case 0x7F31EC10u: goto label_7F31EC10;
    case 0x7F31EC14u: goto label_7F31EC14;
    case 0x7F31EC18u: goto label_7F31EC18;
    case 0x7F31EC1Cu: goto label_7F31EC1C;
    case 0x7F31EC20u: goto label_7F31EC20;
    case 0x7F31EC24u: goto label_7F31EC24;
    case 0x7F31EC28u: goto label_7F31EC28;
    case 0x7F31EC2Cu: goto label_7F31EC2C;
    case 0x7F31EC30u: goto label_7F31EC30;
    case 0x7F31EC34u: goto label_7F31EC34;
    case 0x7F31EC38u: goto label_7F31EC38;
    case 0x7F31EC3Cu: goto label_7F31EC3C;
    case 0x7F31EC40u: goto label_7F31EC40;
    case 0x7F31EC44u: goto label_7F31EC44;
    case 0x7F31EC48u: goto label_7F31EC48;
    case 0x7F31EC4Cu: goto label_7F31EC4C;
    case 0x7F31EC50u: goto label_7F31EC50;
    case 0x7F31EC54u: goto label_7F31EC54;
    case 0x7F31EC58u: goto label_7F31EC58;
    case 0x7F31EC5Cu: goto label_7F31EC5C;
    case 0x7F31EC60u: goto label_7F31EC60;
    case 0x7F31EC64u: goto label_7F31EC64;
    case 0x7F31EC68u: goto label_7F31EC68;
    case 0x7F31EC6Cu: goto label_7F31EC6C;
    case 0x7F31EC70u: goto label_7F31EC70;
    case 0x7F31EC74u: goto label_7F31EC74;
    case 0x7F31EC78u: goto label_7F31EC78;
    case 0x7F31EC7Cu: goto label_7F31EC7C;
    case 0x7F31EC80u: goto label_7F31EC80;
    case 0x7F31EC84u: goto label_7F31EC84;
    case 0x7F31EC88u: goto label_7F31EC88;
    case 0x7F31EC8Cu: goto label_7F31EC8C;
    case 0x7F31EC90u: goto label_7F31EC90;
    case 0x7F31EC94u: goto label_7F31EC94;
    case 0x7F31EC98u: goto label_7F31EC98;
    case 0x7F31EC9Cu: goto label_7F31EC9C;
    case 0x7F31ECA0u: goto label_7F31ECA0;
    case 0x7F31ECA4u: goto label_7F31ECA4;
    case 0x7F31ECA8u: goto label_7F31ECA8;
    case 0x7F31ECACu: goto label_7F31ECAC;
    case 0x7F31ECB0u: goto label_7F31ECB0;
    case 0x7F31ECB4u: goto label_7F31ECB4;
    case 0x7F31ECB8u: goto label_7F31ECB8;
    case 0x7F31ECBCu: goto label_7F31ECBC;
    case 0x7F31ECC0u: goto label_7F31ECC0;
    case 0x7F31ECC4u: goto label_7F31ECC4;
    case 0x7F31ECC8u: goto label_7F31ECC8;
    case 0x7F31ECCCu: goto label_7F31ECCC;
    case 0x7F31ECD0u: goto label_7F31ECD0;
    case 0x7F31ECD4u: goto label_7F31ECD4;
    case 0x7F31ECD8u: goto label_7F31ECD8;
    case 0x7F31ECDCu: goto label_7F31ECDC;
    case 0x7F31ECE0u: goto label_7F31ECE0;
    case 0x7F31ECE4u: goto label_7F31ECE4;
    case 0x7F31ECE8u: goto label_7F31ECE8;
    case 0x7F31ECECu: goto label_7F31ECEC;
    case 0x7F31ECF0u: goto label_7F31ECF0;
    case 0x7F31ECF4u: goto label_7F31ECF4;
    case 0x7F31ECF8u: goto label_7F31ECF8;
    case 0x7F31ECFCu: goto label_7F31ECFC;
    case 0x7F31ED00u: goto label_7F31ED00;
    case 0x7F31ED04u: goto label_7F31ED04;
    case 0x7F31ED08u: goto label_7F31ED08;
    case 0x7F31ED0Cu: goto label_7F31ED0C;
    case 0x7F31ED10u: goto label_7F31ED10;
    case 0x7F31ED14u: goto label_7F31ED14;
    case 0x7F31ED18u: goto label_7F31ED18;
    case 0x7F31ED1Cu: goto label_7F31ED1C;
    case 0x7F31ED20u: goto label_7F31ED20;
    case 0x7F31ED24u: goto label_7F31ED24;
    case 0x7F31ED28u: goto label_7F31ED28;
    case 0x7F31ED2Cu: goto label_7F31ED2C;
    case 0x7F31ED30u: goto label_7F31ED30;
    case 0x7F31ED34u: goto label_7F31ED34;
    case 0x7F31ED38u: goto label_7F31ED38;
    case 0x7F31ED3Cu: goto label_7F31ED3C;
    case 0x7F31ED40u: goto label_7F31ED40;
    case 0x7F31ED44u: goto label_7F31ED44;
    case 0x7F31ED48u: goto label_7F31ED48;
    case 0x7F31ED4Cu: goto label_7F31ED4C;
    case 0x7F31ED50u: goto label_7F31ED50;
    case 0x7F31ED54u: goto label_7F31ED54;
    case 0x7F31ED58u: goto label_7F31ED58;
    case 0x7F31ED5Cu: goto label_7F31ED5C;
    case 0x7F31ED60u: goto label_7F31ED60;
    case 0x7F31ED64u: goto label_7F31ED64;
    case 0x7F31ED68u: goto label_7F31ED68;
    case 0x7F31ED6Cu: goto label_7F31ED6C;
    case 0x7F31ED70u: goto label_7F31ED70;
    case 0x7F31ED74u: goto label_7F31ED74;
    case 0x7F31ED78u: goto label_7F31ED78;
    case 0x7F31ED7Cu: goto label_7F31ED7C;
    case 0x7F31ED80u: goto label_7F31ED80;
    case 0x7F31ED84u: goto label_7F31ED84;
    case 0x7F31ED88u: goto label_7F31ED88;
    case 0x7F31ED8Cu: goto label_7F31ED8C;
    case 0x7F31ED90u: goto label_7F31ED90;
    case 0x7F31ED94u: goto label_7F31ED94;
    case 0x7F31ED98u: goto label_7F31ED98;
    case 0x7F31ED9Cu: goto label_7F31ED9C;
    case 0x7F31EDA0u: goto label_7F31EDA0;
    case 0x7F31EDA4u: goto label_7F31EDA4;
    case 0x7F31EDA8u: goto label_7F31EDA8;
    case 0x7F31EDACu: goto label_7F31EDAC;
    case 0x7F31EDB0u: goto label_7F31EDB0;
    case 0x7F31EDB4u: goto label_7F31EDB4;
    case 0x7F31EDB8u: goto label_7F31EDB8;
    case 0x7F31EDBCu: goto label_7F31EDBC;
    case 0x7F31EDC0u: goto label_7F31EDC0;
    case 0x7F31EDC4u: goto label_7F31EDC4;
    case 0x7F31EDC8u: goto label_7F31EDC8;
    case 0x7F31EDCCu: goto label_7F31EDCC;
    case 0x7F31EDD0u: goto label_7F31EDD0;
    case 0x7F31EDD4u: goto label_7F31EDD4;
    case 0x7F31EDD8u: goto label_7F31EDD8;
    case 0x7F31EDDCu: goto label_7F31EDDC;
    case 0x7F31EDE0u: goto label_7F31EDE0;
    case 0x7F31EDE4u: goto label_7F31EDE4;
    case 0x7F31EDE8u: goto label_7F31EDE8;
    case 0x7F31EDECu: goto label_7F31EDEC;
    case 0x7F31EDF0u: goto label_7F31EDF0;
    case 0x7F31EDF4u: goto label_7F31EDF4;
    case 0x7F31EDF8u: goto label_7F31EDF8;
    case 0x7F31EDFCu: goto label_7F31EDFC;
    case 0x7F31EE00u: goto label_7F31EE00;
    case 0x7F31EE04u: goto label_7F31EE04;
    case 0x7F31EE08u: goto label_7F31EE08;
    case 0x7F31EE0Cu: goto label_7F31EE0C;
    case 0x7F31EE10u: goto label_7F31EE10;
    case 0x7F31EE14u: goto label_7F31EE14;
    case 0x7F31EE18u: goto label_7F31EE18;
    case 0x7F31EE1Cu: goto label_7F31EE1C;
    case 0x7F31EE20u: goto label_7F31EE20;
    case 0x7F31EE24u: goto label_7F31EE24;
    case 0x7F31EE28u: goto label_7F31EE28;
    case 0x7F31EE2Cu: goto label_7F31EE2C;
    case 0x7F31EE30u: goto label_7F31EE30;
    case 0x7F31EE34u: goto label_7F31EE34;
    case 0x7F31EE38u: goto label_7F31EE38;
    case 0x7F31EE3Cu: goto label_7F31EE3C;
    case 0x7F31EE40u: goto label_7F31EE40;
    case 0x7F31EE44u: goto label_7F31EE44;
    case 0x7F31EE48u: goto label_7F31EE48;
    case 0x7F31EE4Cu: goto label_7F31EE4C;
    case 0x7F31EE50u: goto label_7F31EE50;
    case 0x7F31EE54u: goto label_7F31EE54;
    case 0x7F31EE58u: goto label_7F31EE58;
    case 0x7F31EE5Cu: goto label_7F31EE5C;
    case 0x7F31EE60u: goto label_7F31EE60;
    case 0x7F31EE64u: goto label_7F31EE64;
    case 0x7F31EE68u: goto label_7F31EE68;
    case 0x7F31EE6Cu: goto label_7F31EE6C;
    case 0x7F31EE70u: goto label_7F31EE70;
    case 0x7F31EE74u: goto label_7F31EE74;
    case 0x7F31EE78u: goto label_7F31EE78;
    case 0x7F31EE7Cu: goto label_7F31EE7C;
    case 0x7F31EE80u: goto label_7F31EE80;
    case 0x7F31EE84u: goto label_7F31EE84;
    case 0x7F31EE88u: goto label_7F31EE88;
    case 0x7F31EE8Cu: goto label_7F31EE8C;
    case 0x7F31EE90u: goto label_7F31EE90;
    case 0x7F31EE94u: goto label_7F31EE94;
    case 0x7F31EE98u: goto label_7F31EE98;
    case 0x7F31EE9Cu: goto label_7F31EE9C;
    case 0x7F31EEA0u: goto label_7F31EEA0;
    case 0x7F31EEA4u: goto label_7F31EEA4;
    case 0x7F31EEA8u: goto label_7F31EEA8;
    case 0x7F31EEACu: goto label_7F31EEAC;
    case 0x7F31EEB0u: goto label_7F31EEB0;
    case 0x7F31EEB4u: goto label_7F31EEB4;
    case 0x7F31EEB8u: goto label_7F31EEB8;
    case 0x7F31EEBCu: goto label_7F31EEBC;
    case 0x7F31EEC0u: goto label_7F31EEC0;
    case 0x7F31EEC4u: goto label_7F31EEC4;
    case 0x7F31EEC8u: goto label_7F31EEC8;
    case 0x7F31EECCu: goto label_7F31EECC;
    case 0x7F31EED0u: goto label_7F31EED0;
    case 0x7F31EED4u: goto label_7F31EED4;
    case 0x7F31EED8u: goto label_7F31EED8;
    case 0x7F31EEDCu: goto label_7F31EEDC;
    case 0x7F31EEE0u: goto label_7F31EEE0;
    case 0x7F31EEE4u: goto label_7F31EEE4;
    case 0x7F31EEE8u: goto label_7F31EEE8;
    case 0x7F31EEECu: goto label_7F31EEEC;
    case 0x7F31EEF0u: goto label_7F31EEF0;
    case 0x7F31EEF4u: goto label_7F31EEF4;
    case 0x7F31EEF8u: goto label_7F31EEF8;
    case 0x7F31EEFCu: goto label_7F31EEFC;
    case 0x7F31EF00u: goto label_7F31EF00;
    case 0x7F31EF04u: goto label_7F31EF04;
    case 0x7F31EF08u: goto label_7F31EF08;
    case 0x7F31EF0Cu: goto label_7F31EF0C;
    case 0x7F31EF10u: goto label_7F31EF10;
    case 0x7F31EF14u: goto label_7F31EF14;
    case 0x7F31EF18u: goto label_7F31EF18;
    case 0x7F31EF1Cu: goto label_7F31EF1C;
    case 0x7F31EF20u: goto label_7F31EF20;
    case 0x7F31EF24u: goto label_7F31EF24;
    case 0x7F31EF28u: goto label_7F31EF28;
    case 0x7F31EF2Cu: goto label_7F31EF2C;
    case 0x7F31EF30u: goto label_7F31EF30;
    case 0x7F31EF34u: goto label_7F31EF34;
    case 0x7F31EF38u: goto label_7F31EF38;
    case 0x7F31EF3Cu: goto label_7F31EF3C;
    case 0x7F31EF40u: goto label_7F31EF40;
    case 0x7F31EF44u: goto label_7F31EF44;
    case 0x7F31EF48u: goto label_7F31EF48;
    case 0x7F31EF4Cu: goto label_7F31EF4C;
    case 0x7F31EF50u: goto label_7F31EF50;
    case 0x7F31EF54u: goto label_7F31EF54;
    case 0x7F31EF58u: goto label_7F31EF58;
    case 0x7F31EF5Cu: goto label_7F31EF5C;
    case 0x7F31EF60u: goto label_7F31EF60;
    case 0x7F31EF64u: goto label_7F31EF64;
    case 0x7F31EF68u: goto label_7F31EF68;
    case 0x7F31EF6Cu: goto label_7F31EF6C;
    case 0x7F31EF70u: goto label_7F31EF70;
    case 0x7F31EF74u: goto label_7F31EF74;
    case 0x7F31EF78u: goto label_7F31EF78;
    case 0x7F31EF7Cu: goto label_7F31EF7C;
    case 0x7F31EF80u: goto label_7F31EF80;
    case 0x7F31EF84u: goto label_7F31EF84;
    case 0x7F31EF88u: goto label_7F31EF88;
    case 0x7F31EF8Cu: goto label_7F31EF8C;
    case 0x7F31EF90u: goto label_7F31EF90;
    case 0x7F31EF94u: goto label_7F31EF94;
    case 0x7F31EF98u: goto label_7F31EF98;
    case 0x7F31EF9Cu: goto label_7F31EF9C;
    case 0x7F31EFA0u: goto label_7F31EFA0;
    case 0x7F31EFA4u: goto label_7F31EFA4;
    case 0x7F31EFA8u: goto label_7F31EFA8;
    case 0x7F31EFACu: goto label_7F31EFAC;
    case 0x7F31EFB0u: goto label_7F31EFB0;
    case 0x7F31EFB4u: goto label_7F31EFB4;
    case 0x7F31EFB8u: goto label_7F31EFB8;
    case 0x7F31EFBCu: goto label_7F31EFBC;
    case 0x7F31EFC0u: goto label_7F31EFC0;
    case 0x7F31EFC4u: goto label_7F31EFC4;
    case 0x7F31EFC8u: goto label_7F31EFC8;
    case 0x7F31EFCCu: goto label_7F31EFCC;
    case 0x7F31EFD0u: goto label_7F31EFD0;
    case 0x7F31EFD4u: goto label_7F31EFD4;
    case 0x7F31EFD8u: goto label_7F31EFD8;
    case 0x7F31EFDCu: goto label_7F31EFDC;
    case 0x7F31EFE0u: goto label_7F31EFE0;
    case 0x7F31EFE4u: goto label_7F31EFE4;
    case 0x7F31EFE8u: goto label_7F31EFE8;
    case 0x7F31EFECu: goto label_7F31EFEC;
    case 0x7F31EFF0u: goto label_7F31EFF0;
    case 0x7F31EFF4u: goto label_7F31EFF4;
    case 0x7F31EFF8u: goto label_7F31EFF8;
    case 0x7F31EFFCu: goto label_7F31EFFC;
    case 0x7F31F000u: goto label_7F31F000;
    case 0x7F31F004u: goto label_7F31F004;
    case 0x7F31F008u: goto label_7F31F008;
    case 0x7F31F00Cu: goto label_7F31F00C;
    case 0x7F31F010u: goto label_7F31F010;
    case 0x7F31F014u: goto label_7F31F014;
    case 0x7F31F018u: goto label_7F31F018;
    case 0x7F31F01Cu: goto label_7F31F01C;
    case 0x7F31F020u: goto label_7F31F020;
    case 0x7F31F024u: goto label_7F31F024;
    case 0x7F31F028u: goto label_7F31F028;
    case 0x7F31F02Cu: goto label_7F31F02C;
    case 0x7F31F030u: goto label_7F31F030;
    case 0x7F31F034u: goto label_7F31F034;
    case 0x7F31F038u: goto label_7F31F038;
    case 0x7F31F03Cu: goto label_7F31F03C;
    case 0x7F31F040u: goto label_7F31F040;
    case 0x7F31F044u: goto label_7F31F044;
    case 0x7F31F048u: goto label_7F31F048;
    case 0x7F31F04Cu: goto label_7F31F04C;
    case 0x7F31F050u: goto label_7F31F050;
    case 0x7F31F054u: goto label_7F31F054;
    case 0x7F31F058u: goto label_7F31F058;
    case 0x7F31F05Cu: goto label_7F31F05C;
    case 0x7F31F060u: goto label_7F31F060;
    case 0x7F31F064u: goto label_7F31F064;
    case 0x7F31F068u: goto label_7F31F068;
    case 0x7F31F06Cu: goto label_7F31F06C;
    case 0x7F31F070u: goto label_7F31F070;
    case 0x7F31F074u: goto label_7F31F074;
    case 0x7F31F078u: goto label_7F31F078;
    case 0x7F31F07Cu: goto label_7F31F07C;
    case 0x7F31F080u: goto label_7F31F080;
    case 0x7F31F084u: goto label_7F31F084;
    case 0x7F31F088u: goto label_7F31F088;
    case 0x7F31F08Cu: goto label_7F31F08C;
    case 0x7F31F090u: goto label_7F31F090;
    case 0x7F31F094u: goto label_7F31F094;
    case 0x7F31F098u: goto label_7F31F098;
    case 0x7F31F09Cu: goto label_7F31F09C;
    case 0x7F31F0A0u: goto label_7F31F0A0;
    case 0x7F31F0A4u: goto label_7F31F0A4;
    case 0x7F31F0A8u: goto label_7F31F0A8;
    case 0x7F31F0ACu: goto label_7F31F0AC;
    case 0x7F31F0B0u: goto label_7F31F0B0;
    case 0x7F31F0B4u: goto label_7F31F0B4;
    case 0x7F31F0B8u: goto label_7F31F0B8;
    case 0x7F31F0BCu: goto label_7F31F0BC;
    case 0x7F31F0C0u: goto label_7F31F0C0;
    case 0x7F31F0C4u: goto label_7F31F0C4;
    case 0x7F31F0C8u: goto label_7F31F0C8;
    case 0x7F31F0CCu: goto label_7F31F0CC;
    case 0x7F31F0D0u: goto label_7F31F0D0;
    case 0x7F31F0D4u: goto label_7F31F0D4;
    case 0x7F31F0D8u: goto label_7F31F0D8;
    case 0x7F31F0DCu: goto label_7F31F0DC;
    case 0x7F31F0E0u: goto label_7F31F0E0;
    case 0x7F31F0E4u: goto label_7F31F0E4;
    case 0x7F31F0E8u: goto label_7F31F0E8;
    case 0x7F31F0ECu: goto label_7F31F0EC;
    case 0x7F31F0F0u: goto label_7F31F0F0;
    case 0x7F31F0F4u: goto label_7F31F0F4;
    case 0x7F31F0F8u: goto label_7F31F0F8;
    case 0x7F31F0FCu: goto label_7F31F0FC;
    case 0x7F31F100u: goto label_7F31F100;
    case 0x7F31F104u: goto label_7F31F104;
    case 0x7F31F108u: goto label_7F31F108;
    case 0x7F31F10Cu: goto label_7F31F10C;
    case 0x7F31F110u: goto label_7F31F110;
    case 0x7F31F114u: goto label_7F31F114;
    case 0x7F31F118u: goto label_7F31F118;
    case 0x7F31F11Cu: goto label_7F31F11C;
    case 0x7F31F120u: goto label_7F31F120;
    case 0x7F31F124u: goto label_7F31F124;
    case 0x7F31F128u: goto label_7F31F128;
    case 0x7F31F12Cu: goto label_7F31F12C;
    case 0x7F31F130u: goto label_7F31F130;
    case 0x7F31F134u: goto label_7F31F134;
    case 0x7F31F138u: goto label_7F31F138;
    case 0x7F31F13Cu: goto label_7F31F13C;
    case 0x7F31F140u: goto label_7F31F140;
    case 0x7F31F144u: goto label_7F31F144;
    case 0x7F31F148u: goto label_7F31F148;
    case 0x7F31F14Cu: goto label_7F31F14C;
    case 0x7F31F150u: goto label_7F31F150;
    case 0x7F31F154u: goto label_7F31F154;
    case 0x7F31F158u: goto label_7F31F158;
    case 0x7F31F15Cu: goto label_7F31F15C;
    case 0x7F31F160u: goto label_7F31F160;
    case 0x7F31F164u: goto label_7F31F164;
    case 0x7F31F168u: goto label_7F31F168;
    case 0x7F31F16Cu: goto label_7F31F16C;
    case 0x7F31F170u: goto label_7F31F170;
    case 0x7F31F174u: goto label_7F31F174;
    case 0x7F31F178u: goto label_7F31F178;
    case 0x7F31F17Cu: goto label_7F31F17C;
    case 0x7F31F180u: goto label_7F31F180;
    case 0x7F31F184u: goto label_7F31F184;
    case 0x7F31F188u: goto label_7F31F188;
    case 0x7F31F18Cu: goto label_7F31F18C;
    case 0x7F31F190u: goto label_7F31F190;
    case 0x7F31F194u: goto label_7F31F194;
    case 0x7F31F198u: goto label_7F31F198;
    case 0x7F31F19Cu: goto label_7F31F19C;
    case 0x7F31F1A0u: goto label_7F31F1A0;
    case 0x7F31F1A4u: goto label_7F31F1A4;
    case 0x7F31F1A8u: goto label_7F31F1A8;
    case 0x7F31F1ACu: goto label_7F31F1AC;
    case 0x7F31F1B0u: goto label_7F31F1B0;
    case 0x7F31F1B4u: goto label_7F31F1B4;
    case 0x7F31F1B8u: goto label_7F31F1B8;
    case 0x7F31F1BCu: goto label_7F31F1BC;
    case 0x7F31F1C0u: goto label_7F31F1C0;
    case 0x7F31F1C4u: goto label_7F31F1C4;
    case 0x7F31F1C8u: goto label_7F31F1C8;
    case 0x7F31F1CCu: goto label_7F31F1CC;
    case 0x7F31F1D0u: goto label_7F31F1D0;
    case 0x7F31F1D4u: goto label_7F31F1D4;
    case 0x7F31F1D8u: goto label_7F31F1D8;
    case 0x7F31F1DCu: goto label_7F31F1DC;
    case 0x7F31F1E0u: goto label_7F31F1E0;
    case 0x7F31F1E4u: goto label_7F31F1E4;
    case 0x7F31F1E8u: goto label_7F31F1E8;
    case 0x7F31F1ECu: goto label_7F31F1EC;
    case 0x7F31F1F0u: goto label_7F31F1F0;
    case 0x7F31F1F4u: goto label_7F31F1F4;
    case 0x7F31F1F8u: goto label_7F31F1F8;
    case 0x7F31F1FCu: goto label_7F31F1FC;
    case 0x7F31F200u: goto label_7F31F200;
    case 0x7F31F204u: goto label_7F31F204;
    case 0x7F31F208u: goto label_7F31F208;
    case 0x7F31F20Cu: goto label_7F31F20C;
    case 0x7F31F210u: goto label_7F31F210;
    case 0x7F31F214u: goto label_7F31F214;
    case 0x7F31F218u: goto label_7F31F218;
    case 0x7F31F21Cu: goto label_7F31F21C;
    case 0x7F31F220u: goto label_7F31F220;
    case 0x7F31F224u: goto label_7F31F224;
    case 0x7F31F228u: goto label_7F31F228;
    case 0x7F31F22Cu: goto label_7F31F22C;
    case 0x7F31F230u: goto label_7F31F230;
    case 0x7F31F234u: goto label_7F31F234;
    case 0x7F31F238u: goto label_7F31F238;
    case 0x7F31F23Cu: goto label_7F31F23C;
    case 0x7F31F240u: goto label_7F31F240;
    case 0x7F31F244u: goto label_7F31F244;
    case 0x7F31F248u: goto label_7F31F248;
    case 0x7F31F24Cu: goto label_7F31F24C;
    case 0x7F31F250u: goto label_7F31F250;
    case 0x7F31F254u: goto label_7F31F254;
    case 0x7F31F258u: goto label_7F31F258;
    case 0x7F31F25Cu: goto label_7F31F25C;
    case 0x7F31F260u: goto label_7F31F260;
    case 0x7F31F264u: goto label_7F31F264;
    case 0x7F31F268u: goto label_7F31F268;
    case 0x7F31F26Cu: goto label_7F31F26C;
    case 0x7F31F270u: goto label_7F31F270;
    case 0x7F31F274u: goto label_7F31F274;
    case 0x7F31F278u: goto label_7F31F278;
    case 0x7F31F27Cu: goto label_7F31F27C;
    case 0x7F31F280u: goto label_7F31F280;
    case 0x7F31F284u: goto label_7F31F284;
    case 0x7F31F288u: goto label_7F31F288;
    case 0x7F31F28Cu: goto label_7F31F28C;
    case 0x7F31F290u: goto label_7F31F290;
    case 0x7F31F294u: goto label_7F31F294;
    case 0x7F31F298u: goto label_7F31F298;
    case 0x7F31F29Cu: goto label_7F31F29C;
    case 0x7F31F2A0u: goto label_7F31F2A0;
    case 0x7F31F2A4u: goto label_7F31F2A4;
    case 0x7F31F2A8u: goto label_7F31F2A8;
    case 0x7F31F2ACu: goto label_7F31F2AC;
    case 0x7F31F2B0u: goto label_7F31F2B0;
    case 0x7F31F2B4u: goto label_7F31F2B4;
    case 0x7F31F2B8u: goto label_7F31F2B8;
    case 0x7F31F2BCu: goto label_7F31F2BC;
    case 0x7F31F2C0u: goto label_7F31F2C0;
    case 0x7F31F2C4u: goto label_7F31F2C4;
    case 0x7F31F2C8u: goto label_7F31F2C8;
    case 0x7F31F2CCu: goto label_7F31F2CC;
    case 0x7F31F2D0u: goto label_7F31F2D0;
    case 0x7F31F2D4u: goto label_7F31F2D4;
    case 0x7F31F2D8u: goto label_7F31F2D8;
    case 0x7F31F2DCu: goto label_7F31F2DC;
    case 0x7F31F2E0u: goto label_7F31F2E0;
    case 0x7F31F2E4u: goto label_7F31F2E4;
    case 0x7F31F2E8u: goto label_7F31F2E8;
    case 0x7F31F2ECu: goto label_7F31F2EC;
    case 0x7F31F2F0u: goto label_7F31F2F0;
    case 0x7F31F2F4u: goto label_7F31F2F4;
    case 0x7F31F2F8u: goto label_7F31F2F8;
    case 0x7F31F2FCu: goto label_7F31F2FC;
    case 0x7F31F300u: goto label_7F31F300;
    case 0x7F31F304u: goto label_7F31F304;
    case 0x7F31F308u: goto label_7F31F308;
    case 0x7F31F30Cu: goto label_7F31F30C;
    case 0x7F31F310u: goto label_7F31F310;
    case 0x7F31F314u: goto label_7F31F314;
    case 0x7F31F318u: goto label_7F31F318;
    case 0x7F31F31Cu: goto label_7F31F31C;
    case 0x7F31F320u: goto label_7F31F320;
    case 0x7F31F324u: goto label_7F31F324;
    case 0x7F31F328u: goto label_7F31F328;
    case 0x7F31F32Cu: goto label_7F31F32C;
    case 0x7F31F330u: goto label_7F31F330;
    case 0x7F31F334u: goto label_7F31F334;
    case 0x7F31F338u: goto label_7F31F338;
    case 0x7F31F33Cu: goto label_7F31F33C;
    case 0x7F31F340u: goto label_7F31F340;
    case 0x7F31F344u: goto label_7F31F344;
    case 0x7F31F348u: goto label_7F31F348;
    case 0x7F31F34Cu: goto label_7F31F34C;
    case 0x7F31F350u: goto label_7F31F350;
    case 0x7F31F354u: goto label_7F31F354;
    case 0x7F31F358u: goto label_7F31F358;
    case 0x7F31F35Cu: goto label_7F31F35C;
    case 0x7F31F360u: goto label_7F31F360;
    case 0x7F31F364u: goto label_7F31F364;
    case 0x7F31F368u: goto label_7F31F368;
    case 0x7F31F36Cu: goto label_7F31F36C;
    case 0x7F31F370u: goto label_7F31F370;
    case 0x7F31F374u: goto label_7F31F374;
    case 0x7F31F378u: goto label_7F31F378;
    case 0x7F31F37Cu: goto label_7F31F37C;
    case 0x7F31F380u: goto label_7F31F380;
    case 0x7F31F384u: goto label_7F31F384;
    case 0x7F31F388u: goto label_7F31F388;
    case 0x7F31F38Cu: goto label_7F31F38C;
    case 0x7F31F390u: goto label_7F31F390;
    case 0x7F31F394u: goto label_7F31F394;
    case 0x7F31F398u: goto label_7F31F398;
    case 0x7F31F39Cu: goto label_7F31F39C;
    case 0x7F31F3A0u: goto label_7F31F3A0;
    case 0x7F31F3A4u: goto label_7F31F3A4;
    case 0x7F31F3A8u: goto label_7F31F3A8;
    case 0x7F31F3ACu: goto label_7F31F3AC;
    case 0x7F31F3B0u: goto label_7F31F3B0;
    case 0x7F31F3B4u: goto label_7F31F3B4;
    case 0x7F31F3B8u: goto label_7F31F3B8;
    case 0x7F31F3BCu: goto label_7F31F3BC;
    case 0x7F31F3C0u: goto label_7F31F3C0;
    case 0x7F31F3C4u: goto label_7F31F3C4;
    case 0x7F31F3C8u: goto label_7F31F3C8;
    case 0x7F31F3CCu: goto label_7F31F3CC;
    case 0x7F31F3D0u: goto label_7F31F3D0;
    case 0x7F31F3D4u: goto label_7F31F3D4;
    case 0x7F31F3D8u: goto label_7F31F3D8;
    case 0x7F31F3DCu: goto label_7F31F3DC;
    case 0x7F31F3E0u: goto label_7F31F3E0;
    case 0x7F31F3E4u: goto label_7F31F3E4;
    case 0x7F31F3E8u: goto label_7F31F3E8;
    case 0x7F31F3ECu: goto label_7F31F3EC;
    case 0x7F31F3F0u: goto label_7F31F3F0;
    case 0x7F31F3F4u: goto label_7F31F3F4;
    case 0x7F31F3F8u: goto label_7F31F3F8;
    case 0x7F31F3FCu: goto label_7F31F3FC;
    case 0x7F31F400u: goto label_7F31F400;
    case 0x7F31F404u: goto label_7F31F404;
    case 0x7F31F408u: goto label_7F31F408;
    case 0x7F31F40Cu: goto label_7F31F40C;
    case 0x7F31F410u: goto label_7F31F410;
    case 0x7F31F414u: goto label_7F31F414;
    case 0x7F31F418u: goto label_7F31F418;
    case 0x7F31F41Cu: goto label_7F31F41C;
    case 0x7F31F420u: goto label_7F31F420;
    case 0x7F31F424u: goto label_7F31F424;
    case 0x7F31F428u: goto label_7F31F428;
    case 0x7F31F42Cu: goto label_7F31F42C;
    case 0x7F31F430u: goto label_7F31F430;
    case 0x7F31F434u: goto label_7F31F434;
    case 0x7F31F438u: goto label_7F31F438;
    case 0x7F31F43Cu: goto label_7F31F43C;
    case 0x7F31F440u: goto label_7F31F440;
    case 0x7F31F444u: goto label_7F31F444;
    case 0x7F31F448u: goto label_7F31F448;
    case 0x7F31F44Cu: goto label_7F31F44C;
    case 0x7F31F450u: goto label_7F31F450;
    case 0x7F31F454u: goto label_7F31F454;
    case 0x7F31F458u: goto label_7F31F458;
    case 0x7F31F45Cu: goto label_7F31F45C;
    case 0x7F31F460u: goto label_7F31F460;
    case 0x7F31F464u: goto label_7F31F464;
    case 0x7F31F468u: goto label_7F31F468;
    case 0x7F31F46Cu: goto label_7F31F46C;
    case 0x7F31F470u: goto label_7F31F470;
    case 0x7F31F474u: goto label_7F31F474;
    case 0x7F31F478u: goto label_7F31F478;
    case 0x7F31F47Cu: goto label_7F31F47C;
    case 0x7F31F480u: goto label_7F31F480;
    case 0x7F31F484u: goto label_7F31F484;
    case 0x7F31F488u: goto label_7F31F488;
    case 0x7F31F48Cu: goto label_7F31F48C;
    case 0x7F31F490u: goto label_7F31F490;
    case 0x7F31F494u: goto label_7F31F494;
    case 0x7F31F498u: goto label_7F31F498;
    case 0x7F31F49Cu: goto label_7F31F49C;
    case 0x7F31F4A0u: goto label_7F31F4A0;
    case 0x7F31F4A4u: goto label_7F31F4A4;
    case 0x7F31F4A8u: goto label_7F31F4A8;
    case 0x7F31F4ACu: goto label_7F31F4AC;
    case 0x7F31F4B0u: goto label_7F31F4B0;
    case 0x7F31F4B4u: goto label_7F31F4B4;
    case 0x7F31F4B8u: goto label_7F31F4B8;
    case 0x7F31F4BCu: goto label_7F31F4BC;
    case 0x7F31F4C0u: goto label_7F31F4C0;
    case 0x7F31F4C4u: goto label_7F31F4C4;
    case 0x7F31F4C8u: goto label_7F31F4C8;
    case 0x7F31F4CCu: goto label_7F31F4CC;
    case 0x7F31F4D0u: goto label_7F31F4D0;
    case 0x7F31F4D4u: goto label_7F31F4D4;
    case 0x7F31F4D8u: goto label_7F31F4D8;
    case 0x7F31F4DCu: goto label_7F31F4DC;
    case 0x7F31F4E0u: goto label_7F31F4E0;
    case 0x7F31F4E4u: goto label_7F31F4E4;
    case 0x7F31F4E8u: goto label_7F31F4E8;
    case 0x7F31F4ECu: goto label_7F31F4EC;
    case 0x7F31F4F0u: goto label_7F31F4F0;
    case 0x7F31F4F4u: goto label_7F31F4F4;
    case 0x7F31F4F8u: goto label_7F31F4F8;
    case 0x7F31F4FCu: goto label_7F31F4FC;
    case 0x7F31F500u: goto label_7F31F500;
    case 0x7F31F504u: goto label_7F31F504;
    case 0x7F31F508u: goto label_7F31F508;
    case 0x7F31F50Cu: goto label_7F31F50C;
    case 0x7F31F510u: goto label_7F31F510;
    case 0x7F31F514u: goto label_7F31F514;
    case 0x7F31F518u: goto label_7F31F518;
    case 0x7F31F51Cu: goto label_7F31F51C;
    case 0x7F31F520u: goto label_7F31F520;
    case 0x7F31F524u: goto label_7F31F524;
    case 0x7F31F528u: goto label_7F31F528;
    case 0x7F31F52Cu: goto label_7F31F52C;
    case 0x7F31F530u: goto label_7F31F530;
    case 0x7F31F534u: goto label_7F31F534;
    case 0x7F31F538u: goto label_7F31F538;
    case 0x7F31F53Cu: goto label_7F31F53C;
    case 0x7F31F540u: goto label_7F31F540;
    case 0x7F31F544u: goto label_7F31F544;
    case 0x7F31F548u: goto label_7F31F548;
    case 0x7F31F54Cu: goto label_7F31F54C;
    case 0x7F31F550u: goto label_7F31F550;
    case 0x7F31F554u: goto label_7F31F554;
    case 0x7F31F558u: goto label_7F31F558;
    case 0x7F31F55Cu: goto label_7F31F55C;
    case 0x7F31F560u: goto label_7F31F560;
    case 0x7F31F564u: goto label_7F31F564;
    case 0x7F31F568u: goto label_7F31F568;
    case 0x7F31F56Cu: goto label_7F31F56C;
    case 0x7F31F570u: goto label_7F31F570;
    case 0x7F31F574u: goto label_7F31F574;
    case 0x7F31F578u: goto label_7F31F578;
    case 0x7F31F57Cu: goto label_7F31F57C;
    case 0x7F31F580u: goto label_7F31F580;
    case 0x7F31F584u: goto label_7F31F584;
    case 0x7F31F588u: goto label_7F31F588;
    case 0x7F31F58Cu: goto label_7F31F58C;
    case 0x7F31F590u: goto label_7F31F590;
    case 0x7F31F594u: goto label_7F31F594;
    case 0x7F31F598u: goto label_7F31F598;
    case 0x7F31F59Cu: goto label_7F31F59C;
    case 0x7F31F5A0u: goto label_7F31F5A0;
    case 0x7F31F5A4u: goto label_7F31F5A4;
    case 0x7F31F5A8u: goto label_7F31F5A8;
    case 0x7F31F5ACu: goto label_7F31F5AC;
    case 0x7F31F5B0u: goto label_7F31F5B0;
    case 0x7F31F5B4u: goto label_7F31F5B4;
    case 0x7F31F5B8u: goto label_7F31F5B8;
    case 0x7F31F5BCu: goto label_7F31F5BC;
    case 0x7F31F5C0u: goto label_7F31F5C0;
    case 0x7F31F5C4u: goto label_7F31F5C4;
    case 0x7F31F5C8u: goto label_7F31F5C8;
    case 0x7F31F5CCu: goto label_7F31F5CC;
    case 0x7F31F5D0u: goto label_7F31F5D0;
    case 0x7F31F5D4u: goto label_7F31F5D4;
    case 0x7F31F5D8u: goto label_7F31F5D8;
    case 0x7F31F5DCu: goto label_7F31F5DC;
    case 0x7F31F5E0u: goto label_7F31F5E0;
    case 0x7F31F5E4u: goto label_7F31F5E4;
    case 0x7F31F5E8u: goto label_7F31F5E8;
    case 0x7F31F5ECu: goto label_7F31F5EC;
    case 0x7F31F5F0u: goto label_7F31F5F0;
    case 0x7F31F5F4u: goto label_7F31F5F4;
    case 0x7F31F5F8u: goto label_7F31F5F8;
    case 0x7F31F5FCu: goto label_7F31F5FC;
    case 0x7F31F600u: goto label_7F31F600;
    case 0x7F31F604u: goto label_7F31F604;
    case 0x7F31F608u: goto label_7F31F608;
    case 0x7F31F60Cu: goto label_7F31F60C;
    case 0x7F31F610u: goto label_7F31F610;
    case 0x7F31F614u: goto label_7F31F614;
    case 0x7F31F618u: goto label_7F31F618;
    case 0x7F31F61Cu: goto label_7F31F61C;
    case 0x7F31F620u: goto label_7F31F620;
    case 0x7F31F624u: goto label_7F31F624;
    case 0x7F31F628u: goto label_7F31F628;
    case 0x7F31F62Cu: goto label_7F31F62C;
    case 0x7F31F630u: goto label_7F31F630;
    case 0x7F31F634u: goto label_7F31F634;
    case 0x7F31F638u: goto label_7F31F638;
    case 0x7F31F63Cu: goto label_7F31F63C;
    case 0x7F31F640u: goto label_7F31F640;
    case 0x7F31F644u: goto label_7F31F644;
    case 0x7F31F648u: goto label_7F31F648;
    case 0x7F31F64Cu: goto label_7F31F64C;
    case 0x7F31F650u: goto label_7F31F650;
    case 0x7F31F654u: goto label_7F31F654;
    case 0x7F31F658u: goto label_7F31F658;
    case 0x7F31F65Cu: goto label_7F31F65C;
    case 0x7F31F660u: goto label_7F31F660;
    case 0x7F31F664u: goto label_7F31F664;
    case 0x7F31F668u: goto label_7F31F668;
    case 0x7F31F66Cu: goto label_7F31F66C;
    case 0x7F31F670u: goto label_7F31F670;
    case 0x7F31F674u: goto label_7F31F674;
    case 0x7F31F678u: goto label_7F31F678;
    case 0x7F31F67Cu: goto label_7F31F67C;
    case 0x7F31F680u: goto label_7F31F680;
    case 0x7F31F684u: goto label_7F31F684;
    case 0x7F31F688u: goto label_7F31F688;
    case 0x7F31F68Cu: goto label_7F31F68C;
    case 0x7F31F690u: goto label_7F31F690;
    case 0x7F31F694u: goto label_7F31F694;
    case 0x7F31F698u: goto label_7F31F698;
    case 0x7F31F69Cu: goto label_7F31F69C;
    case 0x7F31F6A0u: goto label_7F31F6A0;
    case 0x7F31F6A4u: goto label_7F31F6A4;
    case 0x7F31F6A8u: goto label_7F31F6A8;
    case 0x7F31F6ACu: goto label_7F31F6AC;
    case 0x7F31F6B0u: goto label_7F31F6B0;
    case 0x7F31F6B4u: goto label_7F31F6B4;
    case 0x7F31F6B8u: goto label_7F31F6B8;
    case 0x7F31F6BCu: goto label_7F31F6BC;
    case 0x7F31F6C0u: goto label_7F31F6C0;
    case 0x7F31F6C4u: goto label_7F31F6C4;
    case 0x7F31F6C8u: goto label_7F31F6C8;
    case 0x7F31F6CCu: goto label_7F31F6CC;
    case 0x7F31F6D0u: goto label_7F31F6D0;
    case 0x7F31F6D4u: goto label_7F31F6D4;
    case 0x7F31F6D8u: goto label_7F31F6D8;
    case 0x7F31F6DCu: goto label_7F31F6DC;
    case 0x7F31F6E0u: goto label_7F31F6E0;
    case 0x7F31F6E4u: goto label_7F31F6E4;
    case 0x7F31F6E8u: goto label_7F31F6E8;
    case 0x7F31F6ECu: goto label_7F31F6EC;
    case 0x7F31F6F0u: goto label_7F31F6F0;
    case 0x7F31F6F4u: goto label_7F31F6F4;
    case 0x7F31F6F8u: goto label_7F31F6F8;
    case 0x7F31F6FCu: goto label_7F31F6FC;
    case 0x7F31F700u: goto label_7F31F700;
    case 0x7F31F704u: goto label_7F31F704;
    case 0x7F31F708u: goto label_7F31F708;
    case 0x7F31F70Cu: goto label_7F31F70C;
    case 0x7F31F710u: goto label_7F31F710;
    case 0x7F31F714u: goto label_7F31F714;
    case 0x7F31F718u: goto label_7F31F718;
    case 0x7F31F71Cu: goto label_7F31F71C;
    case 0x7F31F720u: goto label_7F31F720;
    case 0x7F31F724u: goto label_7F31F724;
    case 0x7F31F728u: goto label_7F31F728;
    case 0x7F31F72Cu: goto label_7F31F72C;
    case 0x7F31F730u: goto label_7F31F730;
    case 0x7F31F734u: goto label_7F31F734;
    case 0x7F31F738u: goto label_7F31F738;
    case 0x7F31F73Cu: goto label_7F31F73C;
    case 0x7F31F740u: goto label_7F31F740;
    case 0x7F31F744u: goto label_7F31F744;
    case 0x7F31F748u: goto label_7F31F748;
    case 0x7F31F74Cu: goto label_7F31F74C;
    case 0x7F31F750u: goto label_7F31F750;
    case 0x7F31F754u: goto label_7F31F754;
    case 0x7F31F758u: goto label_7F31F758;
    case 0x7F31F75Cu: goto label_7F31F75C;
    case 0x7F31F760u: goto label_7F31F760;
    case 0x7F31F764u: goto label_7F31F764;
    case 0x7F31F768u: goto label_7F31F768;
    case 0x7F31F76Cu: goto label_7F31F76C;
    case 0x7F31F770u: goto label_7F31F770;
    case 0x7F31F774u: goto label_7F31F774;
    case 0x7F31F778u: goto label_7F31F778;
    case 0x7F31F77Cu: goto label_7F31F77C;
    case 0x7F31F780u: goto label_7F31F780;
    case 0x7F31F784u: goto label_7F31F784;
    case 0x7F31F788u: goto label_7F31F788;
    case 0x7F31F78Cu: goto label_7F31F78C;
    case 0x7F31F790u: goto label_7F31F790;
    case 0x7F31F794u: goto label_7F31F794;
    case 0x7F31F798u: goto label_7F31F798;
    case 0x7F31F79Cu: goto label_7F31F79C;
    case 0x7F31F7A0u: goto label_7F31F7A0;
    case 0x7F31F7A4u: goto label_7F31F7A4;
    case 0x7F31F7A8u: goto label_7F31F7A8;
    case 0x7F31F7ACu: goto label_7F31F7AC;
    case 0x7F31F7B0u: goto label_7F31F7B0;
    case 0x7F31F7B4u: goto label_7F31F7B4;
    case 0x7F31F7B8u: goto label_7F31F7B8;
    case 0x7F31F7BCu: goto label_7F31F7BC;
    case 0x7F31F7C0u: goto label_7F31F7C0;
    case 0x7F31F7C4u: goto label_7F31F7C4;
    case 0x7F31F7C8u: goto label_7F31F7C8;
    case 0x7F31F7CCu: goto label_7F31F7CC;
    case 0x7F31F7D0u: goto label_7F31F7D0;
    case 0x7F31F7D4u: goto label_7F31F7D4;
    case 0x7F31F7D8u: goto label_7F31F7D8;
    case 0x7F31F7DCu: goto label_7F31F7DC;
    case 0x7F31F7E0u: goto label_7F31F7E0;
    case 0x7F31F7E4u: goto label_7F31F7E4;
    case 0x7F31F7E8u: goto label_7F31F7E8;
    case 0x7F31F7ECu: goto label_7F31F7EC;
    case 0x7F31F7F0u: goto label_7F31F7F0;
    case 0x7F31F7F4u: goto label_7F31F7F4;
    case 0x7F31F7F8u: goto label_7F31F7F8;
    case 0x7F31F7FCu: goto label_7F31F7FC;
    case 0x7F31F800u: goto label_7F31F800;
    case 0x7F31F804u: goto label_7F31F804;
    case 0x7F31F808u: goto label_7F31F808;
    case 0x7F31F80Cu: goto label_7F31F80C;
    case 0x7F31F810u: goto label_7F31F810;
    case 0x7F31F814u: goto label_7F31F814;
    case 0x7F31F818u: goto label_7F31F818;
    case 0x7F31F81Cu: goto label_7F31F81C;
    case 0x7F31F820u: goto label_7F31F820;
    case 0x7F31F824u: goto label_7F31F824;
    case 0x7F31F828u: goto label_7F31F828;
    case 0x7F31F82Cu: goto label_7F31F82C;
    case 0x7F31F830u: goto label_7F31F830;
    case 0x7F31F834u: goto label_7F31F834;
    case 0x7F31F838u: goto label_7F31F838;
    case 0x7F31F83Cu: goto label_7F31F83C;
    case 0x7F31F840u: goto label_7F31F840;
    case 0x7F31F844u: goto label_7F31F844;
    case 0x7F31F848u: goto label_7F31F848;
    case 0x7F31F84Cu: goto label_7F31F84C;
    case 0x7F31F850u: goto label_7F31F850;
    case 0x7F31F854u: goto label_7F31F854;
    case 0x7F31F858u: goto label_7F31F858;
    case 0x7F31F85Cu: goto label_7F31F85C;
    case 0x7F31F860u: goto label_7F31F860;
    case 0x7F31F864u: goto label_7F31F864;
    case 0x7F31F868u: goto label_7F31F868;
    case 0x7F31F86Cu: goto label_7F31F86C;
    case 0x7F31F870u: goto label_7F31F870;
    case 0x7F31F874u: goto label_7F31F874;
    case 0x7F31F878u: goto label_7F31F878;
    case 0x7F31F87Cu: goto label_7F31F87C;
    case 0x7F31F880u: goto label_7F31F880;
    case 0x7F31F884u: goto label_7F31F884;
    case 0x7F31F888u: goto label_7F31F888;
    case 0x7F31F88Cu: goto label_7F31F88C;
    case 0x7F31F890u: goto label_7F31F890;
    case 0x7F31F894u: goto label_7F31F894;
    case 0x7F31F898u: goto label_7F31F898;
    case 0x7F31F89Cu: goto label_7F31F89C;
    case 0x7F31F8A0u: goto label_7F31F8A0;
    case 0x7F31F8A4u: goto label_7F31F8A4;
    case 0x7F31F8A8u: goto label_7F31F8A8;
    case 0x7F31F8ACu: goto label_7F31F8AC;
    case 0x7F31F8B0u: goto label_7F31F8B0;
    case 0x7F31F8B4u: goto label_7F31F8B4;
    case 0x7F31F8B8u: goto label_7F31F8B8;
    case 0x7F31F8BCu: goto label_7F31F8BC;
    case 0x7F31F8C0u: goto label_7F31F8C0;
    case 0x7F31F8C4u: goto label_7F31F8C4;
    case 0x7F31F8C8u: goto label_7F31F8C8;
    case 0x7F31F8CCu: goto label_7F31F8CC;
    case 0x7F31F8D0u: goto label_7F31F8D0;
    case 0x7F31F8D4u: goto label_7F31F8D4;
    case 0x7F31F8D8u: goto label_7F31F8D8;
    case 0x7F31F8DCu: goto label_7F31F8DC;
    case 0x7F31F8E0u: goto label_7F31F8E0;
    case 0x7F31F8E4u: goto label_7F31F8E4;
    case 0x7F31F8E8u: goto label_7F31F8E8;
    case 0x7F31F8ECu: goto label_7F31F8EC;
    case 0x7F31F8F0u: goto label_7F31F8F0;
    case 0x7F31F8F4u: goto label_7F31F8F4;
    case 0x7F31F8F8u: goto label_7F31F8F8;
    case 0x7F31F8FCu: goto label_7F31F8FC;
    case 0x7F31F900u: goto label_7F31F900;
    case 0x7F31F904u: goto label_7F31F904;
    case 0x7F31F908u: goto label_7F31F908;
    case 0x7F31F90Cu: goto label_7F31F90C;
    case 0x7F31F910u: goto label_7F31F910;
    case 0x7F31F914u: goto label_7F31F914;
    case 0x7F31F918u: goto label_7F31F918;
    case 0x7F31F91Cu: goto label_7F31F91C;
    case 0x7F31F920u: goto label_7F31F920;
    case 0x7F31F924u: goto label_7F31F924;
    case 0x7F31F928u: goto label_7F31F928;
    case 0x7F31F92Cu: goto label_7F31F92C;
    case 0x7F31F930u: goto label_7F31F930;
    case 0x7F31F934u: goto label_7F31F934;
    case 0x7F31F938u: goto label_7F31F938;
    case 0x7F31F93Cu: goto label_7F31F93C;
    case 0x7F31F940u: goto label_7F31F940;
    case 0x7F31F944u: goto label_7F31F944;
    case 0x7F31F948u: goto label_7F31F948;
    case 0x7F31F94Cu: goto label_7F31F94C;
    case 0x7F31F950u: goto label_7F31F950;
    case 0x7F31F954u: goto label_7F31F954;
    case 0x7F31F958u: goto label_7F31F958;
    case 0x7F31F95Cu: goto label_7F31F95C;
    case 0x7F31F960u: goto label_7F31F960;
    case 0x7F31F964u: goto label_7F31F964;
    case 0x7F31F968u: goto label_7F31F968;
    case 0x7F31F96Cu: goto label_7F31F96C;
    case 0x7F31F970u: goto label_7F31F970;
    case 0x7F31F974u: goto label_7F31F974;
    case 0x7F31F978u: goto label_7F31F978;
    case 0x7F31F97Cu: goto label_7F31F97C;
    case 0x7F31F980u: goto label_7F31F980;
    case 0x7F31F984u: goto label_7F31F984;
    case 0x7F31F988u: goto label_7F31F988;
    case 0x7F31F98Cu: goto label_7F31F98C;
    case 0x7F31F990u: goto label_7F31F990;
    case 0x7F31F994u: goto label_7F31F994;
    case 0x7F31F998u: goto label_7F31F998;
    case 0x7F31F99Cu: goto label_7F31F99C;
    case 0x7F31F9A0u: goto label_7F31F9A0;
    case 0x7F31F9A4u: goto label_7F31F9A4;
    case 0x7F31F9A8u: goto label_7F31F9A8;
    case 0x7F31F9ACu: goto label_7F31F9AC;
    case 0x7F31F9B0u: goto label_7F31F9B0;
    case 0x7F31F9B4u: goto label_7F31F9B4;
    case 0x7F31F9B8u: goto label_7F31F9B8;
    case 0x7F31F9BCu: goto label_7F31F9BC;
    case 0x7F31F9C0u: goto label_7F31F9C0;
    case 0x7F31F9C4u: goto label_7F31F9C4;
    case 0x7F31F9C8u: goto label_7F31F9C8;
    case 0x7F31F9CCu: goto label_7F31F9CC;
    case 0x7F31F9D0u: goto label_7F31F9D0;
    case 0x7F31F9D4u: goto label_7F31F9D4;
    case 0x7F31F9D8u: goto label_7F31F9D8;
    case 0x7F31F9DCu: goto label_7F31F9DC;
    case 0x7F31F9E0u: goto label_7F31F9E0;
    case 0x7F31F9E4u: goto label_7F31F9E4;
    case 0x7F31F9E8u: goto label_7F31F9E8;
    case 0x7F31F9ECu: goto label_7F31F9EC;
    case 0x7F31F9F0u: goto label_7F31F9F0;
    case 0x7F31F9F4u: goto label_7F31F9F4;
    case 0x7F31F9F8u: goto label_7F31F9F8;
    case 0x7F31F9FCu: goto label_7F31F9FC;
    case 0x7F31FA00u: goto label_7F31FA00;
    case 0x7F31FA04u: goto label_7F31FA04;
    case 0x7F31FA08u: goto label_7F31FA08;
    case 0x7F31FA0Cu: goto label_7F31FA0C;
    case 0x7F31FA10u: goto label_7F31FA10;
    case 0x7F31FA14u: goto label_7F31FA14;
    case 0x7F31FA18u: goto label_7F31FA18;
    case 0x7F31FA1Cu: goto label_7F31FA1C;
    case 0x7F31FA20u: goto label_7F31FA20;
    case 0x7F31FA24u: goto label_7F31FA24;
    case 0x7F31FA28u: goto label_7F31FA28;
    case 0x7F31FA2Cu: goto label_7F31FA2C;
    case 0x7F31FA30u: goto label_7F31FA30;
    case 0x7F31FA34u: goto label_7F31FA34;
    case 0x7F31FA38u: goto label_7F31FA38;
    case 0x7F31FA3Cu: goto label_7F31FA3C;
    case 0x7F31FA40u: goto label_7F31FA40;
    case 0x7F31FA44u: goto label_7F31FA44;
    case 0x7F31FA48u: goto label_7F31FA48;
    case 0x7F31FA4Cu: goto label_7F31FA4C;
    case 0x7F31FA50u: goto label_7F31FA50;
    case 0x7F31FA54u: goto label_7F31FA54;
    case 0x7F31FA58u: goto label_7F31FA58;
    case 0x7F31FA5Cu: goto label_7F31FA5C;
    case 0x7F31FA60u: goto label_7F31FA60;
    case 0x7F31FA64u: goto label_7F31FA64;
    case 0x7F31FA68u: goto label_7F31FA68;
    case 0x7F31FA6Cu: goto label_7F31FA6C;
    case 0x7F31FA70u: goto label_7F31FA70;
    case 0x7F31FA74u: goto label_7F31FA74;
    case 0x7F31FA78u: goto label_7F31FA78;
    case 0x7F31FA7Cu: goto label_7F31FA7C;
    case 0x7F31FA80u: goto label_7F31FA80;
    case 0x7F31FA84u: goto label_7F31FA84;
    case 0x7F31FA88u: goto label_7F31FA88;
    case 0x7F31FA8Cu: goto label_7F31FA8C;
    case 0x7F31FA90u: goto label_7F31FA90;
    case 0x7F31FA94u: goto label_7F31FA94;
    case 0x7F31FA98u: goto label_7F31FA98;
    case 0x7F31FA9Cu: goto label_7F31FA9C;
    case 0x7F31FAA0u: goto label_7F31FAA0;
    case 0x7F31FAA4u: goto label_7F31FAA4;
    case 0x7F31FAA8u: goto label_7F31FAA8;
    case 0x7F31FAACu: goto label_7F31FAAC;
    case 0x7F31FAB0u: goto label_7F31FAB0;
    case 0x7F31FAB4u: goto label_7F31FAB4;
    case 0x7F31FAB8u: goto label_7F31FAB8;
    case 0x7F31FABCu: goto label_7F31FABC;
    case 0x7F31FAC0u: goto label_7F31FAC0;
    case 0x7F31FAC4u: goto label_7F31FAC4;
    case 0x7F31FAC8u: goto label_7F31FAC8;
    case 0x7F31FACCu: goto label_7F31FACC;
    case 0x7F31FAD0u: goto label_7F31FAD0;
    case 0x7F31FAD4u: goto label_7F31FAD4;
    case 0x7F31FAD8u: goto label_7F31FAD8;
    case 0x7F31FADCu: goto label_7F31FADC;
    case 0x7F31FAE0u: goto label_7F31FAE0;
    case 0x7F31FAE4u: goto label_7F31FAE4;
    case 0x7F31FAE8u: goto label_7F31FAE8;
    case 0x7F31FAECu: goto label_7F31FAEC;
    case 0x7F31FAF0u: goto label_7F31FAF0;
    case 0x7F31FAF4u: goto label_7F31FAF4;
    case 0x7F31FAF8u: goto label_7F31FAF8;
    case 0x7F31FAFCu: goto label_7F31FAFC;
    case 0x7F31FB00u: goto label_7F31FB00;
    case 0x7F31FB04u: goto label_7F31FB04;
    case 0x7F31FB08u: goto label_7F31FB08;
    case 0x7F31FB0Cu: goto label_7F31FB0C;
    case 0x7F31FB10u: goto label_7F31FB10;
    case 0x7F31FB14u: goto label_7F31FB14;
    case 0x7F31FB18u: goto label_7F31FB18;
    case 0x7F31FB1Cu: goto label_7F31FB1C;
    case 0x7F31FB20u: goto label_7F31FB20;
    case 0x7F31FB24u: goto label_7F31FB24;
    case 0x7F31FB28u: goto label_7F31FB28;
    case 0x7F31FB2Cu: goto label_7F31FB2C;
    case 0x7F31FB30u: goto label_7F31FB30;
    case 0x7F31FB34u: goto label_7F31FB34;
    case 0x7F31FB38u: goto label_7F31FB38;
    case 0x7F31FB3Cu: goto label_7F31FB3C;
    case 0x7F31FB40u: goto label_7F31FB40;
    case 0x7F31FB44u: goto label_7F31FB44;
    case 0x7F31FB48u: goto label_7F31FB48;
    case 0x7F31FB4Cu: goto label_7F31FB4C;
    case 0x7F31FB50u: goto label_7F31FB50;
    case 0x7F31FB54u: goto label_7F31FB54;
    case 0x7F31FB58u: goto label_7F31FB58;
    case 0x7F31FB5Cu: goto label_7F31FB5C;
    case 0x7F31FB60u: goto label_7F31FB60;
    case 0x7F31FB64u: goto label_7F31FB64;
    case 0x7F31FB68u: goto label_7F31FB68;
    case 0x7F31FB6Cu: goto label_7F31FB6C;
    case 0x7F31FB70u: goto label_7F31FB70;
    case 0x7F31FB74u: goto label_7F31FB74;
    case 0x7F31FB78u: goto label_7F31FB78;
    case 0x7F31FB7Cu: goto label_7F31FB7C;
    case 0x7F31FB80u: goto label_7F31FB80;
    case 0x7F31FB84u: goto label_7F31FB84;
    case 0x7F31FB88u: goto label_7F31FB88;
    case 0x7F31FB8Cu: goto label_7F31FB8C;
    case 0x7F31FB90u: goto label_7F31FB90;
    case 0x7F31FB94u: goto label_7F31FB94;
    case 0x7F31FB98u: goto label_7F31FB98;
    case 0x7F31FB9Cu: goto label_7F31FB9C;
    case 0x7F31FBA0u: goto label_7F31FBA0;
    case 0x7F31FBA4u: goto label_7F31FBA4;
    case 0x7F31FBA8u: goto label_7F31FBA8;
    case 0x7F31FBACu: goto label_7F31FBAC;
    case 0x7F31FBB0u: goto label_7F31FBB0;
    case 0x7F31FBB4u: goto label_7F31FBB4;
    case 0x7F31FBB8u: goto label_7F31FBB8;
    case 0x7F31FBBCu: goto label_7F31FBBC;
    case 0x7F31FBC0u: goto label_7F31FBC0;
    case 0x7F31FBC4u: goto label_7F31FBC4;
    case 0x7F31FBC8u: goto label_7F31FBC8;
    case 0x7F31FBCCu: goto label_7F31FBCC;
    case 0x7F31FBD0u: goto label_7F31FBD0;
    case 0x7F31FBD4u: goto label_7F31FBD4;
    case 0x7F31FBD8u: goto label_7F31FBD8;
    case 0x7F31FBDCu: goto label_7F31FBDC;
    case 0x7F31FBE0u: goto label_7F31FBE0;
    case 0x7F31FBE4u: goto label_7F31FBE4;
    case 0x7F31FBE8u: goto label_7F31FBE8;
    case 0x7F31FBECu: goto label_7F31FBEC;
    case 0x7F31FBF0u: goto label_7F31FBF0;
    case 0x7F31FBF4u: goto label_7F31FBF4;
    case 0x7F31FBF8u: goto label_7F31FBF8;
    case 0x7F31FBFCu: goto label_7F31FBFC;
    case 0x7F31FC00u: goto label_7F31FC00;
    case 0x7F31FC04u: goto label_7F31FC04;
    case 0x7F31FC08u: goto label_7F31FC08;
    case 0x7F31FC0Cu: goto label_7F31FC0C;
    case 0x7F31FC10u: goto label_7F31FC10;
    case 0x7F31FC14u: goto label_7F31FC14;
    case 0x7F31FC18u: goto label_7F31FC18;
    case 0x7F31FC1Cu: goto label_7F31FC1C;
    case 0x7F31FC20u: goto label_7F31FC20;
    case 0x7F31FC24u: goto label_7F31FC24;
    case 0x7F31FC28u: goto label_7F31FC28;
    case 0x7F31FC2Cu: goto label_7F31FC2C;
    case 0x7F31FC30u: goto label_7F31FC30;
    case 0x7F31FC34u: goto label_7F31FC34;
    case 0x7F31FC38u: goto label_7F31FC38;
    case 0x7F31FC3Cu: goto label_7F31FC3C;
    case 0x7F31FC40u: goto label_7F31FC40;
    case 0x7F31FC44u: goto label_7F31FC44;
    case 0x7F31FC48u: goto label_7F31FC48;
    case 0x7F31FC4Cu: goto label_7F31FC4C;
    case 0x7F31FC50u: goto label_7F31FC50;
    case 0x7F31FC54u: goto label_7F31FC54;
    case 0x7F31FC58u: goto label_7F31FC58;
    case 0x7F31FC5Cu: goto label_7F31FC5C;
    case 0x7F31FC60u: goto label_7F31FC60;
    case 0x7F31FC64u: goto label_7F31FC64;
    case 0x7F31FC68u: goto label_7F31FC68;
    case 0x7F31FC6Cu: goto label_7F31FC6C;
    case 0x7F31FC70u: goto label_7F31FC70;
    case 0x7F31FC74u: goto label_7F31FC74;
    case 0x7F31FC78u: goto label_7F31FC78;
    case 0x7F31FC7Cu: goto label_7F31FC7C;
    case 0x7F31FC80u: goto label_7F31FC80;
    case 0x7F31FC84u: goto label_7F31FC84;
    case 0x7F31FC88u: goto label_7F31FC88;
    case 0x7F31FC8Cu: goto label_7F31FC8C;
    case 0x7F31FC90u: goto label_7F31FC90;
    case 0x7F31FC94u: goto label_7F31FC94;
    case 0x7F31FC98u: goto label_7F31FC98;
    case 0x7F31FC9Cu: goto label_7F31FC9C;
    case 0x7F31FCA0u: goto label_7F31FCA0;
    case 0x7F31FCA4u: goto label_7F31FCA4;
    case 0x7F31FCA8u: goto label_7F31FCA8;
    case 0x7F31FCACu: goto label_7F31FCAC;
    case 0x7F31FCB0u: goto label_7F31FCB0;
    case 0x7F31FCB4u: goto label_7F31FCB4;
    case 0x7F31FCB8u: goto label_7F31FCB8;
    case 0x7F31FCBCu: goto label_7F31FCBC;
    case 0x7F31FCC0u: goto label_7F31FCC0;
    case 0x7F31FCC4u: goto label_7F31FCC4;
    case 0x7F31FCC8u: goto label_7F31FCC8;
    case 0x7F31FCCCu: goto label_7F31FCCC;
    case 0x7F31FCD0u: goto label_7F31FCD0;
    case 0x7F31FCD4u: goto label_7F31FCD4;
    case 0x7F31FCD8u: goto label_7F31FCD8;
    case 0x7F31FCDCu: goto label_7F31FCDC;
    case 0x7F31FCE0u: goto label_7F31FCE0;
    case 0x7F31FCE4u: goto label_7F31FCE4;
    case 0x7F31FCE8u: goto label_7F31FCE8;
    case 0x7F31FCECu: goto label_7F31FCEC;
    case 0x7F31FCF0u: goto label_7F31FCF0;
    case 0x7F31FCF4u: goto label_7F31FCF4;
    case 0x7F31FCF8u: goto label_7F31FCF8;
    case 0x7F31FCFCu: goto label_7F31FCFC;
    case 0x7F31FD00u: goto label_7F31FD00;
    case 0x7F31FD04u: goto label_7F31FD04;
    case 0x7F31FD08u: goto label_7F31FD08;
    case 0x7F31FD0Cu: goto label_7F31FD0C;
    case 0x7F31FD10u: goto label_7F31FD10;
    case 0x7F31FD14u: goto label_7F31FD14;
    case 0x7F31FD18u: goto label_7F31FD18;
    case 0x7F31FD1Cu: goto label_7F31FD1C;
    case 0x7F31FD20u: goto label_7F31FD20;
    case 0x7F31FD24u: goto label_7F31FD24;
    case 0x7F31FD28u: goto label_7F31FD28;
    case 0x7F31FD2Cu: goto label_7F31FD2C;
    case 0x7F31FD30u: goto label_7F31FD30;
    case 0x7F31FD34u: goto label_7F31FD34;
    case 0x7F31FD38u: goto label_7F31FD38;
    case 0x7F31FD3Cu: goto label_7F31FD3C;
    case 0x7F31FD40u: goto label_7F31FD40;
    case 0x7F31FD44u: goto label_7F31FD44;
    case 0x7F31FD48u: goto label_7F31FD48;
    case 0x7F31FD4Cu: goto label_7F31FD4C;
    case 0x7F31FD50u: goto label_7F31FD50;
    case 0x7F31FD54u: goto label_7F31FD54;
    case 0x7F31FD58u: goto label_7F31FD58;
    case 0x7F31FD5Cu: goto label_7F31FD5C;
    case 0x7F31FD60u: goto label_7F31FD60;
    case 0x7F31FD64u: goto label_7F31FD64;
    case 0x7F31FD68u: goto label_7F31FD68;
    case 0x7F31FD6Cu: goto label_7F31FD6C;
    case 0x7F31FD70u: goto label_7F31FD70;
    case 0x7F31FD74u: goto label_7F31FD74;
    case 0x7F31FD78u: goto label_7F31FD78;
    case 0x7F31FD7Cu: goto label_7F31FD7C;
    case 0x7F31FD80u: goto label_7F31FD80;
    case 0x7F31FD84u: goto label_7F31FD84;
    case 0x7F31FD88u: goto label_7F31FD88;
    case 0x7F31FD8Cu: goto label_7F31FD8C;
    case 0x7F31FD90u: goto label_7F31FD90;
    case 0x7F31FD94u: goto label_7F31FD94;
    case 0x7F31FD98u: goto label_7F31FD98;
    case 0x7F31FD9Cu: goto label_7F31FD9C;
    case 0x7F31FDA0u: goto label_7F31FDA0;
    case 0x7F31FDA4u: goto label_7F31FDA4;
    case 0x7F31FDA8u: goto label_7F31FDA8;
    case 0x7F31FDACu: goto label_7F31FDAC;
    case 0x7F31FDB0u: goto label_7F31FDB0;
    case 0x7F31FDB4u: goto label_7F31FDB4;
    case 0x7F31FDB8u: goto label_7F31FDB8;
    case 0x7F31FDBCu: goto label_7F31FDBC;
    case 0x7F31FDC0u: goto label_7F31FDC0;
    case 0x7F31FDC4u: goto label_7F31FDC4;
    case 0x7F31FDC8u: goto label_7F31FDC8;
    case 0x7F31FDCCu: goto label_7F31FDCC;
    case 0x7F31FDD0u: goto label_7F31FDD0;
    case 0x7F31FDD4u: goto label_7F31FDD4;
    case 0x7F31FDD8u: goto label_7F31FDD8;
    case 0x7F31FDDCu: goto label_7F31FDDC;
    case 0x7F31FDE0u: goto label_7F31FDE0;
    case 0x7F31FDE4u: goto label_7F31FDE4;
    case 0x7F31FDE8u: goto label_7F31FDE8;
    case 0x7F31FDECu: goto label_7F31FDEC;
    case 0x7F31FDF0u: goto label_7F31FDF0;
    case 0x7F31FDF4u: goto label_7F31FDF4;
    case 0x7F31FDF8u: goto label_7F31FDF8;
    case 0x7F31FDFCu: goto label_7F31FDFC;
    case 0x7F31FE00u: goto label_7F31FE00;
    case 0x7F31FE04u: goto label_7F31FE04;
    case 0x7F31FE08u: goto label_7F31FE08;
    case 0x7F31FE0Cu: goto label_7F31FE0C;
    case 0x7F31FE10u: goto label_7F31FE10;
    case 0x7F31FE14u: goto label_7F31FE14;
    case 0x7F31FE18u: goto label_7F31FE18;
    case 0x7F31FE1Cu: goto label_7F31FE1C;
    case 0x7F31FE20u: goto label_7F31FE20;
    case 0x7F31FE24u: goto label_7F31FE24;
    case 0x7F31FE28u: goto label_7F31FE28;
    case 0x7F31FE2Cu: goto label_7F31FE2C;
    case 0x7F31FE30u: goto label_7F31FE30;
    case 0x7F31FE34u: goto label_7F31FE34;
    case 0x7F31FE38u: goto label_7F31FE38;
    case 0x7F31FE3Cu: goto label_7F31FE3C;
    case 0x7F31FE40u: goto label_7F31FE40;
    case 0x7F31FE44u: goto label_7F31FE44;
    case 0x7F31FE48u: goto label_7F31FE48;
    case 0x7F31FE4Cu: goto label_7F31FE4C;
    case 0x7F31FE50u: goto label_7F31FE50;
    case 0x7F31FE54u: goto label_7F31FE54;
    case 0x7F31FE58u: goto label_7F31FE58;
    case 0x7F31FE5Cu: goto label_7F31FE5C;
    case 0x7F31FE60u: goto label_7F31FE60;
    case 0x7F31FE64u: goto label_7F31FE64;
    case 0x7F31FE68u: goto label_7F31FE68;
    case 0x7F31FE6Cu: goto label_7F31FE6C;
    case 0x7F31FE70u: goto label_7F31FE70;
    case 0x7F31FE74u: goto label_7F31FE74;
    case 0x7F31FE78u: goto label_7F31FE78;
    case 0x7F31FE7Cu: goto label_7F31FE7C;
    case 0x7F31FE80u: goto label_7F31FE80;
    case 0x7F31FE84u: goto label_7F31FE84;
    case 0x7F31FE88u: goto label_7F31FE88;
    case 0x7F31FE8Cu: goto label_7F31FE8C;
    case 0x7F31FE90u: goto label_7F31FE90;
    case 0x7F31FE94u: goto label_7F31FE94;
    case 0x7F31FE98u: goto label_7F31FE98;
    case 0x7F31FE9Cu: goto label_7F31FE9C;
    case 0x7F31FEA0u: goto label_7F31FEA0;
    case 0x7F31FEA4u: goto label_7F31FEA4;
    case 0x7F31FEA8u: goto label_7F31FEA8;
    case 0x7F31FEACu: goto label_7F31FEAC;
    case 0x7F31FEB0u: goto label_7F31FEB0;
    case 0x7F31FEB4u: goto label_7F31FEB4;
    case 0x7F31FEB8u: goto label_7F31FEB8;
    case 0x7F31FEBCu: goto label_7F31FEBC;
    case 0x7F31FEC0u: goto label_7F31FEC0;
    case 0x7F31FEC4u: goto label_7F31FEC4;
    case 0x7F31FEC8u: goto label_7F31FEC8;
    case 0x7F31FECCu: goto label_7F31FECC;
    case 0x7F31FED0u: goto label_7F31FED0;
    case 0x7F31FED4u: goto label_7F31FED4;
    case 0x7F31FED8u: goto label_7F31FED8;
    case 0x7F31FEDCu: goto label_7F31FEDC;
    case 0x7F31FEE0u: goto label_7F31FEE0;
    case 0x7F31FEE4u: goto label_7F31FEE4;
    case 0x7F31FEE8u: goto label_7F31FEE8;
    case 0x7F31FEECu: goto label_7F31FEEC;
    case 0x7F31FEF0u: goto label_7F31FEF0;
    case 0x7F31FEF4u: goto label_7F31FEF4;
    case 0x7F31FEF8u: goto label_7F31FEF8;
    case 0x7F31FEFCu: goto label_7F31FEFC;
    case 0x7F31FF00u: goto label_7F31FF00;
    case 0x7F31FF04u: goto label_7F31FF04;
    case 0x7F31FF08u: goto label_7F31FF08;
    case 0x7F31FF0Cu: goto label_7F31FF0C;
    case 0x7F31FF10u: goto label_7F31FF10;
    case 0x7F31FF14u: goto label_7F31FF14;
    case 0x7F31FF18u: goto label_7F31FF18;
    case 0x7F31FF1Cu: goto label_7F31FF1C;
    case 0x7F31FF20u: goto label_7F31FF20;
    case 0x7F31FF24u: goto label_7F31FF24;
    case 0x7F31FF28u: goto label_7F31FF28;
    case 0x7F31FF2Cu: goto label_7F31FF2C;
    case 0x7F31FF30u: goto label_7F31FF30;
    case 0x7F31FF34u: goto label_7F31FF34;
    case 0x7F31FF38u: goto label_7F31FF38;
    case 0x7F31FF3Cu: goto label_7F31FF3C;
    case 0x7F31FF40u: goto label_7F31FF40;
    case 0x7F31FF44u: goto label_7F31FF44;
    case 0x7F31FF48u: goto label_7F31FF48;
    case 0x7F31FF4Cu: goto label_7F31FF4C;
    case 0x7F31FF50u: goto label_7F31FF50;
    case 0x7F31FF54u: goto label_7F31FF54;
    case 0x7F31FF58u: goto label_7F31FF58;
    case 0x7F31FF5Cu: goto label_7F31FF5C;
    case 0x7F31FF60u: goto label_7F31FF60;
    case 0x7F31FF64u: goto label_7F31FF64;
    case 0x7F31FF68u: goto label_7F31FF68;
    case 0x7F31FF6Cu: goto label_7F31FF6C;
    case 0x7F31FF70u: goto label_7F31FF70;
    case 0x7F31FF74u: goto label_7F31FF74;
    case 0x7F31FF78u: goto label_7F31FF78;
    case 0x7F31FF7Cu: goto label_7F31FF7C;
    case 0x7F31FF80u: goto label_7F31FF80;
    case 0x7F31FF84u: goto label_7F31FF84;
    case 0x7F31FF88u: goto label_7F31FF88;
    case 0x7F31FF8Cu: goto label_7F31FF8C;
    case 0x7F31FF90u: goto label_7F31FF90;
    case 0x7F31FF94u: goto label_7F31FF94;
    case 0x7F31FF98u: goto label_7F31FF98;
    case 0x7F31FF9Cu: goto label_7F31FF9C;
    case 0x7F31FFA0u: goto label_7F31FFA0;
    case 0x7F31FFA4u: goto label_7F31FFA4;
    case 0x7F31FFA8u: goto label_7F31FFA8;
    case 0x7F31FFACu: goto label_7F31FFAC;
    case 0x7F31FFB0u: goto label_7F31FFB0;
    case 0x7F31FFB4u: goto label_7F31FFB4;
    case 0x7F31FFB8u: goto label_7F31FFB8;
    case 0x7F31FFBCu: goto label_7F31FFBC;
    case 0x7F31FFC0u: goto label_7F31FFC0;
    case 0x7F31FFC4u: goto label_7F31FFC4;
    case 0x7F31FFC8u: goto label_7F31FFC8;
    case 0x7F31FFCCu: goto label_7F31FFCC;
    case 0x7F31FFD0u: goto label_7F31FFD0;
    case 0x7F31FFD4u: goto label_7F31FFD4;
    case 0x7F31FFD8u: goto label_7F31FFD8;
    case 0x7F31FFDCu: goto label_7F31FFDC;
    case 0x7F31FFE0u: goto label_7F31FFE0;
    case 0x7F31FFE4u: goto label_7F31FFE4;
    case 0x7F31FFE8u: goto label_7F31FFE8;
    case 0x7F31FFECu: goto label_7F31FFEC;
    case 0x7F31FFF0u: goto label_7F31FFF0;
    case 0x7F31FFF4u: goto label_7F31FFF4;
    case 0x7F31FFF8u: goto label_7F31FFF8;
    case 0x7F31FFFCu: goto label_7F31FFFC;
    case 0x7F320000u: goto label_7F320000;
    case 0x7F320004u: goto label_7F320004;
    case 0x7F320008u: goto label_7F320008;
    case 0x7F32000Cu: goto label_7F32000C;
    case 0x7F320010u: goto label_7F320010;
    case 0x7F320014u: goto label_7F320014;
    case 0x7F320018u: goto label_7F320018;
    case 0x7F32001Cu: goto label_7F32001C;
    case 0x7F320020u: goto label_7F320020;
    case 0x7F320024u: goto label_7F320024;
    case 0x7F320028u: goto label_7F320028;
    case 0x7F32002Cu: goto label_7F32002C;
    case 0x7F320030u: goto label_7F320030;
    case 0x7F320034u: goto label_7F320034;
    case 0x7F320038u: goto label_7F320038;
    case 0x7F32003Cu: goto label_7F32003C;
    case 0x7F320040u: goto label_7F320040;
    case 0x7F320044u: goto label_7F320044;
    case 0x7F320048u: goto label_7F320048;
    case 0x7F32004Cu: goto label_7F32004C;
    case 0x7F320050u: goto label_7F320050;
    case 0x7F320054u: goto label_7F320054;
    case 0x7F320058u: goto label_7F320058;
    case 0x7F32005Cu: goto label_7F32005C;
    case 0x7F320060u: goto label_7F320060;
    case 0x7F320064u: goto label_7F320064;
    case 0x7F320068u: goto label_7F320068;
    case 0x7F32006Cu: goto label_7F32006C;
    case 0x7F320070u: goto label_7F320070;
    case 0x7F320074u: goto label_7F320074;
    case 0x7F320078u: goto label_7F320078;
    case 0x7F32007Cu: goto label_7F32007C;
    case 0x7F320080u: goto label_7F320080;
    case 0x7F320084u: goto label_7F320084;
    case 0x7F320088u: goto label_7F320088;
    case 0x7F32008Cu: goto label_7F32008C;
    case 0x7F320090u: goto label_7F320090;
    case 0x7F320094u: goto label_7F320094;
    case 0x7F320098u: goto label_7F320098;
    case 0x7F32009Cu: goto label_7F32009C;
    case 0x7F3200A0u: goto label_7F3200A0;
    case 0x7F3200A4u: goto label_7F3200A4;
    case 0x7F3200A8u: goto label_7F3200A8;
    case 0x7F3200ACu: goto label_7F3200AC;
    case 0x7F3200B0u: goto label_7F3200B0;
    case 0x7F3200B4u: goto label_7F3200B4;
    case 0x7F3200B8u: goto label_7F3200B8;
    case 0x7F3200BCu: goto label_7F3200BC;
    case 0x7F3200C0u: goto label_7F3200C0;
    case 0x7F3200C4u: goto label_7F3200C4;
    case 0x7F3200C8u: goto label_7F3200C8;
    case 0x7F3200CCu: goto label_7F3200CC;
    case 0x7F3200D0u: goto label_7F3200D0;
    case 0x7F3200D4u: goto label_7F3200D4;
    case 0x7F3200D8u: goto label_7F3200D8;
    case 0x7F3200DCu: goto label_7F3200DC;
    case 0x7F3200E0u: goto label_7F3200E0;
    case 0x7F3200E4u: goto label_7F3200E4;
    case 0x7F3200E8u: goto label_7F3200E8;
    default: return;
    }
label_7F31C0EC:
    ctx->pc = 0x7F31C0ECu;
    ctx->downcount -= 4;
    // 7F31C0EC: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F31C0F0:
    ctx->pc = 0x7F31C0F0u;
    // 7F31C0F0: addi    r3, r27, 64
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(64);

label_7F31C0F4:
    ctx->pc = 0x7F31C0F4u;
    // 7F31C0F4: addi    r6, r29, 4
    ctx->gpr[6] = ctx->gpr[29] + (u32)(s32)(4);

label_7F31C0F8:
    ctx->pc = 0x7F31C0F8u;
    // 7F31C0F8: bl      0x7F3128C4
    {
            ctx->lr = 0x7F31C0FCu;
            ctx->pc = 0x7F3128C4u;
            return;
    }

label_7F31C0FC:
    ctx->pc = 0x7F31C0FCu;
    ctx->downcount -= 5;
    // 7F31C0FC: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31C100:
    ctx->pc = 0x7F31C100u;
    // 7F31C100: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F31C104:
    ctx->pc = 0x7F31C104u;
    // 7F31C104: addi    r3, r27, 64
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(64);

label_7F31C108:
    ctx->pc = 0x7F31C108u;
    // 7F31C108: addi    r6, r29, 4
    ctx->gpr[6] = ctx->gpr[29] + (u32)(s32)(4);

label_7F31C10C:
    ctx->pc = 0x7F31C10Cu;
    // 7F31C10C: bl      0x7F3128C4
    {
            ctx->lr = 0x7F31C110u;
            ctx->pc = 0x7F3128C4u;
            return;
    }

label_7F31C110:
    ctx->pc = 0x7F31C110u;
    ctx->downcount -= 3;
    // 7F31C110: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F31C114:
    ctx->pc = 0x7F31C114u;
    // 7F31C114: cmpwi   r28, 2
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

label_7F31C118:
    ctx->pc = 0x7F31C118u;
    // 7F31C118: bc    12, 0, 0x7F31C0E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F31C0E4u;
            return;
        }
    }

label_7F31C11C:
    ctx->pc = 0x7F31C11Cu;
    ctx->downcount -= 3;
    // 7F31C11C: lbz     r0, 16456(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(16456);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31C120:
    ctx->pc = 0x7F31C120u;
    // 7F31C120: extsb. r0, r0
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

label_7F31C124:
    ctx->pc = 0x7F31C124u;
    // 7F31C124: bc    4, 1, 0x7F31C140
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31C140;
        }
    }

label_7F31C128:
    ctx->pc = 0x7F31C128u;
    ctx->downcount -= 6;
    // 7F31C128: lwz     r3, 60(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31C12C:
    ctx->pc = 0x7F31C12Cu;
    // 7F31C12C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F31C130:
    ctx->pc = 0x7F31C130u;
    // 7F31C130: stb     r0, 1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F31C134:
    ctx->pc = 0x7F31C134u;
    // 7F31C134: lbz     r0, 16456(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(16456);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31C138:
    ctx->pc = 0x7F31C138u;
    // 7F31C138: lwz     r3, 60(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31C13C:
    ctx->pc = 0x7F31C13Cu;
    // 7F31C13C: stb     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F31C140:
    ctx->pc = 0x7F31C140u;
    ctx->downcount -= 17;
    // 7F31C140: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F31C144:
    ctx->pc = 0x7F31C144u;
    // 7F31C144: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31C148:
    ctx->pc = 0x7F31C148u;
    // 7F31C148: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31C14C:
    ctx->pc = 0x7F31C14Cu;
    // 7F31C14C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31C150:
    ctx->pc = 0x7F31C150u;
    // 7F31C150: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F31C154:
    ctx->pc = 0x7F31C154u;
    // 7F31C154: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31C158:
    ctx->pc = 0x7F31C158u;
    ctx->downcount -= 17;
    // 7F31C158: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31C15C:
    ctx->pc = 0x7F31C15Cu;
    // 7F31C15C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31C160:
    ctx->pc = 0x7F31C160u;
    // 7F31C160: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C164:
    ctx->pc = 0x7F31C164u;
    // 7F31C164: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F31C168:
    ctx->pc = 0x7F31C168u;
    // 7F31C168: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31C16C:
    ctx->pc = 0x7F31C16Cu;
    // 7F31C16C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F31C170:
    ctx->pc = 0x7F31C170u;
    // 7F31C170: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F31C174:
    ctx->downcount -= 3;
    // 7F31C174: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F31C178:
    // 7F31C178: addi    r3, r29, 64
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(64);

label_7F31C17C:
    // 7F31C17C: bl      0x7F3123F0
    {
            ctx->lr = 0x7F31C180u;
            ctx->pc = 0x7F3123F0u;
            return;
    }

label_7F31C180:
    ctx->downcount -= 5;
    // 7F31C180: addi    r0, r31, 30912
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(30912);

label_7F31C184:
    ctx->pc = 0x7F31C184u;
    // 7F31C184: sthx    r3, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F31C188:
    ctx->pc = 0x7F31C188u;
    // 7F31C188: lhax    r0, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F31C18C:
    // 7F31C18C: cmpwi   r0, -1
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

label_7F31C190:
    // 7F31C190: bc    12, 2, 0x7F31C1C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31C1C0;
        }
    }

label_7F31C194:
    ctx->downcount -= 1;
    // 7F31C194: bc    4, 0, 0x7F31C1A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31C1A8;
        }
    }

label_7F31C198:
    ctx->downcount -= 2;
    // 7F31C198: cmpwi   r0, -128
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

label_7F31C19C:
    // 7F31C19C: bc    12, 2, 0x7F31C1C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31C1C8;
        }
    }

label_7F31C1A0:
    ctx->downcount -= 1;
    // 7F31C1A0: bc    12, 0, 0x7F31C1C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31C1C8;
        }
    }

label_7F31C1A4:
    ctx->downcount -= 1;
    // 7F31C1A4: b       0x7F31C1C8
    {
            goto label_7F31C1C8;
    }

label_7F31C1A8:
    ctx->downcount -= 2;
    // 7F31C1A8: cmpwi   r0, 1
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

label_7F31C1AC:
    // 7F31C1AC: bc    4, 0, 0x7F31C1C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31C1C8;
        }
    }

label_7F31C1B0:
    ctx->pc = 0x7F31C1B0u;
    ctx->downcount -= 4;
    // 7F31C1B0: lwz     r3, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31C1B4:
    // 7F31C1B4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F31C1B8:
    ctx->pc = 0x7F31C1B8u;
    // 7F31C1B8: stb     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F31C1BC:
    // 7F31C1BC: b       0x7F31C1C8
    {
            goto label_7F31C1C8;
    }

label_7F31C1C0:
    ctx->downcount -= 2;
    // 7F31C1C0: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F31C1C4:
    // 7F31C1C4: b       0x7F31C258
    {
            goto label_7F31C258;
    }

label_7F31C1C8:
    ctx->downcount -= 4;
    // 7F31C1C8: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F31C1CC:
    // 7F31C1CC: addi    r31, r31, 2
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(2);

label_7F31C1D0:
    // 7F31C1D0: cmpwi   r30, 2
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

label_7F31C1D4:
    // 7F31C1D4: bc    12, 0, 0x7F31C174
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31C174u;
                return;
            }
            goto label_7F31C174;
        }
    }

label_7F31C1D8:
    ctx->pc = 0x7F31C1D8u;
    ctx->downcount -= 1;
    // 7F31C1D8: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F31C1DC:
    ctx->pc = 0x7F31C1DCu;
    ctx->downcount -= 3;
    // 7F31C1DC: stb     r31, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        mem_write8(ctx, ea, (u8)ctx->gpr[31]);
    }

label_7F31C1E0:
    // 7F31C1E0: addi    r3, r29, 64
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(64);

label_7F31C1E4:
    // 7F31C1E4: bl      0x7F3125F4
    {
            ctx->lr = 0x7F31C1E8u;
            ctx->pc = 0x7F3125F4u;
            return;
    }

label_7F31C1E8:
    ctx->downcount -= 2;
    // 7F31C1E8: cmpwi   r3, -4
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31C1EC:
    // 7F31C1EC: bc    12, 2, 0x7F31C240
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31C240;
        }
    }

label_7F31C1F0:
    ctx->downcount -= 1;
    // 7F31C1F0: bc    4, 0, 0x7F31C210
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31C210;
        }
    }

label_7F31C1F4:
    ctx->downcount -= 2;
    // 7F31C1F4: cmpwi   r3, -13
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-13);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31C1F8:
    // 7F31C1F8: bc    12, 2, 0x7F31C240
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31C240;
        }
    }

label_7F31C1FC:
    ctx->downcount -= 1;
    // 7F31C1FC: bc    4, 0, 0x7F31C240
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31C240;
        }
    }

label_7F31C200:
    ctx->downcount -= 2;
    // 7F31C200: cmpwi   r3, -128
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-128);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31C204:
    // 7F31C204: bc    12, 2, 0x7F31C240
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31C240;
        }
    }

label_7F31C208:
    ctx->downcount -= 1;
    // 7F31C208: b       0x7F31C240
    {
            goto label_7F31C240;
    }

label_7F31C20C:
    ctx->downcount -= 1;
    // 7F31C20C: b       0x7F31C240
    {
            goto label_7F31C240;
    }

label_7F31C210:
    ctx->downcount -= 2;
    // 7F31C210: cmpwi   r3, 0
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

label_7F31C214:
    // 7F31C214: bc    12, 2, 0x7F31C228
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31C228;
        }
    }

label_7F31C218:
    ctx->downcount -= 1;
    // 7F31C218: bc    4, 0, 0x7F31C240
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31C240;
        }
    }

label_7F31C21C:
    ctx->downcount -= 2;
    // 7F31C21C: cmpwi   r3, -1
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

label_7F31C220:
    // 7F31C220: bc    4, 0, 0x7F31C238
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31C238;
        }
    }

label_7F31C224:
    ctx->downcount -= 1;
    // 7F31C224: b       0x7F31C240
    {
            goto label_7F31C240;
    }

label_7F31C228:
    ctx->pc = 0x7F31C228u;
    ctx->downcount -= 4;
    // 7F31C228: lwz     r3, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31C22C:
    // 7F31C22C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F31C230:
    ctx->pc = 0x7F31C230u;
    // 7F31C230: stb     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F31C234:
    // 7F31C234: b       0x7F31C240
    {
            goto label_7F31C240;
    }

label_7F31C238:
    ctx->downcount -= 2;
    // 7F31C238: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F31C23C:
    // 7F31C23C: b       0x7F31C258
    {
            goto label_7F31C258;
    }

label_7F31C240:
    ctx->downcount -= 2;
    // 7F31C240: addi    r3, r29, 64
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(64);

label_7F31C244:
    // 7F31C244: bl      0x7F3126D8
    {
            ctx->lr = 0x7F31C248u;
            ctx->pc = 0x7F3126D8u;
            return;
    }

label_7F31C248:
    ctx->downcount -= 3;
    // 7F31C248: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F31C24C:
    // 7F31C24C: cmpwi   r31, 2
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

label_7F31C250:
    // 7F31C250: bc    12, 0, 0x7F31C1DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31C1DCu;
                return;
            }
            goto label_7F31C1DC;
        }
    }

label_7F31C254:
    ctx->pc = 0x7F31C254u;
    ctx->downcount -= 1;
    // 7F31C254: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F31C258:
    ctx->pc = 0x7F31C258u;
    ctx->downcount -= 16;
    // 7F31C258: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F31C25C:
    ctx->pc = 0x7F31C25Cu;
    // 7F31C25C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31C260:
    ctx->pc = 0x7F31C260u;
    // 7F31C260: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31C264:
    ctx->pc = 0x7F31C264u;
    // 7F31C264: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F31C268:
    ctx->pc = 0x7F31C268u;
    // 7F31C268: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31C26C:
    ctx->pc = 0x7F31C26Cu;
    ctx->downcount -= 8;
    // 7F31C26C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31C270:
    ctx->pc = 0x7F31C270u;
    // 7F31C270: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31C274:
    ctx->pc = 0x7F31C274u;
    // 7F31C274: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C278:
    ctx->pc = 0x7F31C278u;
    // 7F31C278: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F31C27C:
    ctx->pc = 0x7F31C27Cu;
    // 7F31C27C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31C280:
    ctx->pc = 0x7F31C280u;
    // 7F31C280: lwz     r0, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31C284:
    ctx->pc = 0x7F31C284u;
    // 7F31C284: cmpwi   r0, 2
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

label_7F31C288:
    ctx->pc = 0x7F31C288u;
    // 7F31C288: bc    12, 2, 0x7F31C2E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31C2E0;
        }
    }

label_7F31C28C:
    ctx->pc = 0x7F31C28Cu;
    ctx->downcount -= 1;
    // 7F31C28C: bc    4, 0, 0x7F31C2A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31C2A0;
        }
    }

label_7F31C290:
    ctx->pc = 0x7F31C290u;
    ctx->downcount -= 2;
    // 7F31C290: cmpwi   r0, 0
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

label_7F31C294:
    ctx->pc = 0x7F31C294u;
    // 7F31C294: bc    12, 2, 0x7F31C2B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31C2B0;
        }
    }

label_7F31C298:
    ctx->pc = 0x7F31C298u;
    ctx->downcount -= 1;
    // 7F31C298: bc    4, 0, 0x7F31C2C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31C2C8;
        }
    }

label_7F31C29C:
    ctx->pc = 0x7F31C29Cu;
    ctx->downcount -= 1;
    // 7F31C29C: b       0x7F31C308
    {
            goto label_7F31C308;
    }

label_7F31C2A0:
    ctx->pc = 0x7F31C2A0u;
    ctx->downcount -= 2;
    // 7F31C2A0: cmpwi   r0, 4
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

label_7F31C2A4:
    ctx->pc = 0x7F31C2A4u;
    // 7F31C2A4: bc    12, 2, 0x7F31C300
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31C300;
        }
    }

label_7F31C2A8:
    ctx->pc = 0x7F31C2A8u;
    ctx->downcount -= 1;
    // 7F31C2A8: bc    4, 0, 0x7F31C308
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31C308;
        }
    }

label_7F31C2AC:
    ctx->pc = 0x7F31C2ACu;
    ctx->downcount -= 1;
    // 7F31C2AC: b       0x7F31C2F0
    {
            goto label_7F31C2F0;
    }

label_7F31C2B0:
    ctx->pc = 0x7F31C2B0u;
    ctx->downcount -= 6;
    // 7F31C2B0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F31C2B4:
    ctx->pc = 0x7F31C2B4u;
    // 7F31C2B4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31C2B8:
    ctx->pc = 0x7F31C2B8u;
    // 7F31C2B8: stw     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31C2BC:
    ctx->pc = 0x7F31C2BCu;
    // 7F31C2BC: lwz     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31C2C0:
    ctx->pc = 0x7F31C2C0u;
    // 7F31C2C0: stb     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F31C2C4:
    ctx->pc = 0x7F31C2C4u;
    // 7F31C2C4: b       0x7F31C308
    {
            goto label_7F31C308;
    }

label_7F31C2C8:
    ctx->pc = 0x7F31C2C8u;
    ctx->downcount -= 1;
    // 7F31C2C8: bl      0x7F31C158
    {
            ctx->lr = 0x7F31C2CCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31C158u;
                return;
            }
            goto label_7F31C158;
    }

label_7F31C2CC:
    ctx->pc = 0x7F31C2CCu;
    ctx->downcount -= 2;
    // 7F31C2CC: cmpwi   r3, -1
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

label_7F31C2D0:
    ctx->pc = 0x7F31C2D0u;
    // 7F31C2D0: bc    12, 2, 0x7F31C308
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31C308;
        }
    }

label_7F31C2D4:
    ctx->pc = 0x7F31C2D4u;
    ctx->downcount -= 3;
    // 7F31C2D4: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F31C2D8:
    ctx->pc = 0x7F31C2D8u;
    // 7F31C2D8: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C2DC:
    ctx->pc = 0x7F31C2DCu;
    // 7F31C2DC: b       0x7F31C308
    {
            goto label_7F31C308;
    }

label_7F31C2E0:
    ctx->pc = 0x7F31C2E0u;
    ctx->downcount -= 1;
    // 7F31C2E0: bl      0x7F31C0A8
    {
            ctx->lr = 0x7F31C2E4u;
            ctx->pc = 0x7F31C0A8u;
            return;
    }

label_7F31C2E4:
    ctx->pc = 0x7F31C2E4u;
    ctx->downcount -= 3;
    // 7F31C2E4: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F31C2E8:
    ctx->pc = 0x7F31C2E8u;
    // 7F31C2E8: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C2EC:
    ctx->pc = 0x7F31C2ECu;
    // 7F31C2EC: b       0x7F31C308
    {
            goto label_7F31C308;
    }

label_7F31C2F0:
    ctx->pc = 0x7F31C2F0u;
    ctx->downcount -= 1;
    // 7F31C2F0: bl      0x7F31BFB4
    {
            ctx->lr = 0x7F31C2F4u;
            ctx->pc = 0x7F31BFB4u;
            return;
    }

label_7F31C2F4:
    ctx->pc = 0x7F31C2F4u;
    ctx->downcount -= 3;
    // 7F31C2F4: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F31C2F8:
    ctx->pc = 0x7F31C2F8u;
    // 7F31C2F8: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C2FC:
    ctx->pc = 0x7F31C2FCu;
    // 7F31C2FC: b       0x7F31C308
    {
            goto label_7F31C308;
    }

label_7F31C300:
    ctx->pc = 0x7F31C300u;
    ctx->downcount -= 2;
    // 7F31C300: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31C304:
    ctx->pc = 0x7F31C304u;
    // 7F31C304: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C308:
    ctx->pc = 0x7F31C308u;
    ctx->downcount -= 6;
    // 7F31C308: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31C30C:
    ctx->pc = 0x7F31C30Cu;
    // 7F31C30C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F31C310:
    ctx->pc = 0x7F31C310u;
    // 7F31C310: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31C314:
    ctx->pc = 0x7F31C314u;
    // 7F31C314: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F31C318:
    ctx->pc = 0x7F31C318u;
    // 7F31C318: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31C31C:
    ctx->pc = 0x7F31C31Cu;
    ctx->downcount -= 6;
    // 7F31C31C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31C320:
    ctx->pc = 0x7F31C320u;
    // 7F31C320: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31C324:
    ctx->pc = 0x7F31C324u;
    // 7F31C324: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C328:
    ctx->pc = 0x7F31C328u;
    // 7F31C328: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F31C32C:
    ctx->pc = 0x7F31C32Cu;
    // 7F31C32C: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31C330:
    ctx->pc = 0x7F31C330u;
    // 7F31C330: bl      0x7F3C9624
    {
            ctx->lr = 0x7F31C334u;
            ctx->pc = 0x7F3C9624u;
            return;
    }

label_7F31C334:
    ctx->pc = 0x7F31C334u;
    ctx->downcount -= 5;
    // 7F31C334: lwz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31C338:
    ctx->pc = 0x7F31C338u;
    // 7F31C338: mtctr    r3
    ctx->ctr = ctx->gpr[3];

label_7F31C33C:
    ctx->pc = 0x7F31C33Cu;
    // 7F31C33C: cmpwi   r3, 0
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

label_7F31C340:
    ctx->pc = 0x7F31C340u;
    // 7F31C340: bc    4, 1, 0x7F31C34C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31C34C;
        }
    }

label_7F31C344:
    loop_7F31C344(ctx);
    if (ctx->pc == 0x7F31C34Cu) goto label_7F31C34C;
    return;
label_7F31C348:
    // 7F31C348: bc    16, 0, 0x7F31C344
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31C344u;
                return;
            }
            goto label_7F31C344;
        }
    }

label_7F31C34C:
    ctx->pc = 0x7F31C34Cu;
    ctx->downcount -= 6;
    // 7F31C34C: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F31C350:
    ctx->pc = 0x7F31C350u;
    // 7F31C350: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31C354:
    ctx->pc = 0x7F31C354u;
    // 7F31C354: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31C358:
    ctx->pc = 0x7F31C358u;
    // 7F31C358: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F31C35C:
    ctx->pc = 0x7F31C35Cu;
    // 7F31C35C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31C360:
    ctx->pc = 0x7F31C360u;
    ctx->downcount -= 6;
    // 7F31C360: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31C364:
    ctx->pc = 0x7F31C364u;
    // 7F31C364: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31C368:
    ctx->pc = 0x7F31C368u;
    // 7F31C368: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C36C:
    ctx->pc = 0x7F31C36Cu;
    // 7F31C36C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F31C370:
    ctx->pc = 0x7F31C370u;
    // 7F31C370: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31C374:
    ctx->pc = 0x7F31C374u;
    // 7F31C374: bl      0x7F31C31C
    {
            ctx->lr = 0x7F31C378u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31C31Cu;
                return;
            }
            goto label_7F31C31C;
    }

label_7F31C378:
    ctx->pc = 0x7F31C378u;
    ctx->downcount -= 2;
    // 7F31C378: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31C37C:
    ctx->pc = 0x7F31C37Cu;
    // 7F31C37C: bl      0x7F31C26C
    {
            ctx->lr = 0x7F31C380u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31C26Cu;
                return;
            }
            goto label_7F31C26C;
    }

label_7F31C380:
    ctx->pc = 0x7F31C380u;
    ctx->downcount -= 6;
    // 7F31C380: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31C384:
    ctx->pc = 0x7F31C384u;
    // 7F31C384: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F31C388:
    ctx->pc = 0x7F31C388u;
    // 7F31C388: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31C38C:
    ctx->pc = 0x7F31C38Cu;
    // 7F31C38C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F31C390:
    ctx->pc = 0x7F31C390u;
    // 7F31C390: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31C394:
    ctx->pc = 0x7F31C394u;
    ctx->downcount -= 4;
    // 7F31C394: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31C398:
    ctx->pc = 0x7F31C398u;
    // 7F31C398: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31C39C:
    ctx->pc = 0x7F31C39Cu;
    // 7F31C39C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C3A0:
    ctx->pc = 0x7F31C3A0u;
    // 7F31C3A0: bl      0x7F312224
    {
            ctx->lr = 0x7F31C3A4u;
            ctx->pc = 0x7F312224u;
            return;
    }

label_7F31C3A4:
    ctx->pc = 0x7F31C3A4u;
    ctx->downcount -= 5;
    // 7F31C3A4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31C3A8:
    ctx->pc = 0x7F31C3A8u;
    // 7F31C3A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31C3AC:
    ctx->pc = 0x7F31C3ACu;
    // 7F31C3AC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F31C3B0:
    ctx->pc = 0x7F31C3B0u;
    // 7F31C3B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31C3B4:
    ctx->pc = 0x7F31C3B4u;
    ctx->downcount -= 21;
    // 7F31C3B4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31C3B8:
    ctx->pc = 0x7F31C3B8u;
    // 7F31C3B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31C3BC:
    ctx->pc = 0x7F31C3BCu;
    // 7F31C3BC: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F31C3C0:
    ctx->pc = 0x7F31C3C0u;
    // 7F31C3C0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F31C3C4:
    ctx->pc = 0x7F31C3C4u;
    // 7F31C3C4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C3C8:
    ctx->pc = 0x7F31C3C8u;
    // 7F31C3C8: addi    r5, r4, 14112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(14112);

label_7F31C3CC:
    ctx->pc = 0x7F31C3CCu;
    // 7F31C3CC: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F31C3D0:
    ctx->pc = 0x7F31C3D0u;
    // 7F31C3D0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F31C3D4:
    ctx->pc = 0x7F31C3D4u;
    // 7F31C3D4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31C3D8:
    ctx->pc = 0x7F31C3D8u;
    // 7F31C3D8: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F31C3DC:
    ctx->pc = 0x7F31C3DCu;
    // 7F31C3DC: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F31C3E0u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F31C3E0:
    ctx->pc = 0x7F31C3E0u;
    ctx->downcount -= 2;
    // 7F31C3E0: or.   r31, r3, r3
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

label_7F31C3E4:
    ctx->pc = 0x7F31C3E4u;
    // 7F31C3E4: bc    12, 2, 0x7F31C43C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31C43C;
        }
    }

label_7F31C3E8:
    ctx->pc = 0x7F31C3E8u;
    ctx->downcount -= 5;
    // 7F31C3E8: lis     r4, 32562
    ctx->gpr[4] = ((u32)(s32)(32562) << 16);

label_7F31C3EC:
    ctx->pc = 0x7F31C3ECu;
    // 7F31C3EC: lis     r5, 32562
    ctx->gpr[5] = ((u32)(s32)(32562) << 16);

label_7F31C3F0:
    ctx->pc = 0x7F31C3F0u;
    // 7F31C3F0: addi    r4, r4, -15520
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-15520);

label_7F31C3F4:
    ctx->pc = 0x7F31C3F4u;
    // 7F31C3F4: addi    r5, r5, -15468
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-15468);

label_7F31C3F8:
    ctx->pc = 0x7F31C3F8u;
    // 7F31C3F8: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F31C3FCu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F31C3FC:
    ctx->pc = 0x7F31C3FCu;
    ctx->downcount -= 16;
    // 7F31C3FC: lwz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31C400:
    ctx->pc = 0x7F31C400u;
    // 7F31C400: lis     r3, 32572
    ctx->gpr[3] = ((u32)(s32)(32572) << 16);

label_7F31C404:
    ctx->pc = 0x7F31C404u;
    // 7F31C404: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F31C408:
    ctx->pc = 0x7F31C408u;
    // 7F31C408: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F31C40C:
    ctx->pc = 0x7F31C40Cu;
    // 7F31C40C: ori     r6, r4, 0x0080
    ctx->gpr[6] = ctx->gpr[4] | 0x0080u;

label_7F31C410:
    ctx->pc = 0x7F31C410u;
    // 7F31C410: addi    r4, r3, 32548
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(32548);

label_7F31C414:
    ctx->pc = 0x7F31C414u;
    // 7F31C414: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F31C418:
    ctx->pc = 0x7F31C418u;
    // 7F31C418: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F31C41C:
    ctx->pc = 0x7F31C41Cu;
    // 7F31C41C: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F31C420:
    ctx->pc = 0x7F31C420u;
    // 7F31C420: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F31C424:
    ctx->pc = 0x7F31C424u;
    // 7F31C424: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F31C428:
    ctx->pc = 0x7F31C428u;
    // 7F31C428: stw     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F31C42C:
    ctx->pc = 0x7F31C42Cu;
    // 7F31C42C: stw     r5, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F31C430:
    ctx->pc = 0x7F31C430u;
    // 7F31C430: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C434:
    ctx->pc = 0x7F31C434u;
    // 7F31C434: stw     r30, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F31C438:
    ctx->pc = 0x7F31C438u;
    // 7F31C438: bl      0x7F3121BC
    {
            ctx->lr = 0x7F31C43Cu;
            ctx->pc = 0x7F3121BCu;
            return;
    }

label_7F31C43C:
    ctx->pc = 0x7F31C43Cu;
    ctx->downcount -= 17;
    // 7F31C43C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31C440:
    ctx->pc = 0x7F31C440u;
    // 7F31C440: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F31C444:
    ctx->pc = 0x7F31C444u;
    // 7F31C444: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31C448:
    ctx->pc = 0x7F31C448u;
    // 7F31C448: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31C44C:
    ctx->pc = 0x7F31C44Cu;
    // 7F31C44C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F31C450:
    ctx->pc = 0x7F31C450u;
    // 7F31C450: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31C454:
    ctx->pc = 0x7F31C454u;
    ctx->downcount -= 8;
    // 7F31C454: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31C458:
    ctx->pc = 0x7F31C458u;
    // 7F31C458: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31C45C:
    ctx->pc = 0x7F31C45Cu;
    // 7F31C45C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C460:
    ctx->pc = 0x7F31C460u;
    // 7F31C460: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F31C464:
    ctx->pc = 0x7F31C464u;
    // 7F31C464: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31C468:
    ctx->pc = 0x7F31C468u;
    // 7F31C468: lwz     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31C46C:
    ctx->pc = 0x7F31C46Cu;
    // 7F31C46C: cmpwi   r0, 0
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

label_7F31C470:
    ctx->pc = 0x7F31C470u;
    // 7F31C470: bc    4, 1, 0x7F31C4A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31C4A0;
        }
    }

label_7F31C474:
    ctx->pc = 0x7F31C474u;
    ctx->downcount -= 8;
    // 7F31C474: addi    r0, r1, 8
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(8);

label_7F31C478:
    ctx->pc = 0x7F31C478u;
    // 7F31C478: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F31C47C:
    ctx->pc = 0x7F31C47Cu;
    // 7F31C47C: sth     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F31C480:
    ctx->pc = 0x7F31C480u;
    // 7F31C480: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31C484:
    ctx->pc = 0x7F31C484u;
    // 7F31C484: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C488:
    ctx->pc = 0x7F31C488u;
    // 7F31C488: lwz     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31C48C:
    ctx->pc = 0x7F31C48Cu;
    // 7F31C48C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C490:
    ctx->pc = 0x7F31C490u;
    // 7F31C490: bl      0x7F191328
    {
            ctx->lr = 0x7F31C494u;
            ctx->pc = 0x7F191328u;
            return;
    }

label_7F31C494:
    ctx->pc = 0x7F31C494u;
    ctx->downcount -= 3;
    // 7F31C494: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31C498:
    ctx->pc = 0x7F31C498u;
    // 7F31C498: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_7F31C49C:
    ctx->pc = 0x7F31C49Cu;
    // 7F31C49C: bl      0x7F3C7728
    {
            ctx->lr = 0x7F31C4A0u;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F31C4A0:
    ctx->pc = 0x7F31C4A0u;
    ctx->downcount -= 6;
    // 7F31C4A0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31C4A4:
    ctx->pc = 0x7F31C4A4u;
    // 7F31C4A4: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F31C4A8:
    ctx->pc = 0x7F31C4A8u;
    // 7F31C4A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31C4AC:
    ctx->pc = 0x7F31C4ACu;
    // 7F31C4AC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F31C4B0:
    ctx->pc = 0x7F31C4B0u;
    // 7F31C4B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31C4B4:
    ctx->pc = 0x7F31C4B4u;
    ctx->downcount -= 23;
    // 7F31C4B4: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31C4B8:
    ctx->pc = 0x7F31C4B8u;
    // 7F31C4B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31C4BC:
    ctx->pc = 0x7F31C4BCu;
    // 7F31C4BC: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C4C0:
    ctx->pc = 0x7F31C4C0u;
    // 7F31C4C0: stmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F31C4C4:
    ctx->pc = 0x7F31C4C4u;
    // 7F31C4C4: or.   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[30];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F31C4C8:
    ctx->pc = 0x7F31C4C8u;
    // 7F31C4C8: or   r24, r5, r5
    {
        ctx->gpr[24] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F31C4CC:
    ctx->pc = 0x7F31C4CCu;
    // 7F31C4CC: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F31C4D0:
    ctx->pc = 0x7F31C4D0u;
    // 7F31C4D0: or   r25, r7, r7
    {
        ctx->gpr[25] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F31C4D4:
    ctx->pc = 0x7F31C4D4u;
    // 7F31C4D4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31C4D8:
    ctx->pc = 0x7F31C4D8u;
    // 7F31C4D8: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31C4DC:
    ctx->pc = 0x7F31C4DCu;
    // 7F31C4DC: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F31C4E0:
    ctx->pc = 0x7F31C4E0u;
    // 7F31C4E0: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F31C4E4:
    ctx->pc = 0x7F31C4E4u;
    // 7F31C4E4: bc    12, 2, 0x7F31C4F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31C4F0;
        }
    }

label_7F31C4E8:
    ctx->pc = 0x7F31C4E8u;
    ctx->downcount -= 2;
    // 7F31C4E8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31C4EC:
    ctx->pc = 0x7F31C4ECu;
    // 7F31C4EC: stw     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C4F0:
    ctx->pc = 0x7F31C4F0u;
    ctx->downcount -= 3;
    // 7F31C4F0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31C4F4:
    ctx->pc = 0x7F31C4F4u;
    // 7F31C4F4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F31C4F8:
    ctx->pc = 0x7F31C4F8u;
    // 7F31C4F8: bl      0x7F02095C
    {
            ctx->lr = 0x7F31C4FCu;
            ctx->pc = 0x7F02095Cu;
            return;
    }

label_7F31C4FC:
    ctx->pc = 0x7F31C4FCu;
    ctx->downcount -= 1;
    // 7F31C4FC: b       0x7F31C560
    {
            goto label_7F31C560;
    }

label_7F31C500:
    ctx->downcount -= 3;
    // 7F31C500: addis   r0, r4, 0
    ctx->gpr[0] = ctx->gpr[4] + ((u32)(s32)(0) << 16);

label_7F31C504:
    // 7F31C504: cmplwi  r0, 0x800A
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x800Au);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31C508:
    // 7F31C508: bc    4, 2, 0x7F31C550
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31C550;
        }
    }

label_7F31C50C:
    ctx->downcount -= 3;
    // 7F31C50C: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F31C510:
    // 7F31C510: cmpwi   r27, 7
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(7);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31C514:
    // 7F31C514: bc    12, 0, 0x7F31C550
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31C550;
        }
    }

label_7F31C518:
    ctx->downcount -= 4;
    // 7F31C518: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_7F31C51C:
    // 7F31C51C: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F31C520:
    // 7F31C520: cmpw    r24, r26
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(ctx->gpr[26]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31C524:
    // 7F31C524: bc    4, 2, 0x7F31C54C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31C54C;
        }
    }

label_7F31C528:
    ctx->downcount -= 2;
    // 7F31C528: cmplwi  r30, 0x0000
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

label_7F31C52C:
    // 7F31C52C: bc    12, 2, 0x7F31C56C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31C56C;
        }
    }

label_7F31C530:
    ctx->pc = 0x7F31C530u;
    ctx->downcount -= 7;
    // 7F31C530: lbz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F31C534:
    // 7F31C534: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31C538:
    ctx->pc = 0x7F31C538u;
    // 7F31C538: stb     r3, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F31C53C:
    ctx->pc = 0x7F31C53Cu;
    // 7F31C53C: stw     r28, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F31C540:
    ctx->pc = 0x7F31C540u;
    // 7F31C540: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31C544:
    ctx->pc = 0x7F31C544u;
    // 7F31C544: stb     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F31C548:
    // 7F31C548: b       0x7F31C56C
    {
            goto label_7F31C56C;
    }

label_7F31C54C:
    ctx->downcount -= 1;
    // 7F31C54C: addi    r29, r28, 1
    ctx->gpr[29] = ctx->gpr[28] + (u32)(s32)(1);

label_7F31C550:
    ctx->downcount -= 4;
    // 7F31C550: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31C554:
    // 7F31C554: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31C558:
    // 7F31C558: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F31C55C:
    // 7F31C55C: bl      0x7F02095C
    {
            ctx->lr = 0x7F31C560u;
            ctx->pc = 0x7F02095Cu;
            return;
    }

label_7F31C560:
    ctx->pc = 0x7F31C560u;
    ctx->downcount -= 3;
    // 7F31C560: lwz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31C564:
    // 7F31C564: rlwinm. r0, r4, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFF7FFFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F31C568:
    // 7F31C568: bc    4, 2, 0x7F31C500
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31C500u;
                return;
            }
            goto label_7F31C500;
        }
    }

label_7F31C56C:
    ctx->pc = 0x7F31C56Cu;
    ctx->downcount -= 2;
    // 7F31C56C: cmplwi  r31, 0x0000
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

label_7F31C570:
    ctx->pc = 0x7F31C570u;
    // 7F31C570: bc    12, 2, 0x7F31C57C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31C57C;
        }
    }

label_7F31C574:
    ctx->pc = 0x7F31C574u;
    ctx->downcount -= 2;
    // 7F31C574: addi    r0, r26, 1
    ctx->gpr[0] = ctx->gpr[26] + (u32)(s32)(1);

label_7F31C578:
    ctx->pc = 0x7F31C578u;
    // 7F31C578: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C57C:
    ctx->pc = 0x7F31C57Cu;
    ctx->downcount -= 17;
    // 7F31C57C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F31C580:
    ctx->pc = 0x7F31C580u;
    // 7F31C580: lmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F31C584:
    ctx->pc = 0x7F31C584u;
    // 7F31C584: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31C588:
    ctx->pc = 0x7F31C588u;
    // 7F31C588: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31C58C:
    ctx->pc = 0x7F31C58Cu;
    // 7F31C58C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F31C590:
    ctx->pc = 0x7F31C590u;
    // 7F31C590: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31C594:
    ctx->pc = 0x7F31C594u;
    ctx->downcount -= 21;
    // 7F31C594: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31C598:
    ctx->pc = 0x7F31C598u;
    // 7F31C598: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31C59C:
    ctx->pc = 0x7F31C59Cu;
    // 7F31C59C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F31C5A0:
    ctx->pc = 0x7F31C5A0u;
    // 7F31C5A0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C5A4:
    ctx->pc = 0x7F31C5A4u;
    // 7F31C5A4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F31C5A8:
    ctx->pc = 0x7F31C5A8u;
    // 7F31C5A8: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F31C5AC:
    ctx->pc = 0x7F31C5ACu;
    // 7F31C5AC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31C5B0:
    ctx->pc = 0x7F31C5B0u;
    // 7F31C5B0: addi    r7, r30, 76
    ctx->gpr[7] = ctx->gpr[30] + (u32)(s32)(76);

label_7F31C5B4:
    ctx->pc = 0x7F31C5B4u;
    // 7F31C5B4: lwz     r3, 288(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(288);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31C5B8:
    ctx->pc = 0x7F31C5B8u;
    // 7F31C5B8: lwz     r5, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F31C5BC:
    ctx->pc = 0x7F31C5BCu;
    // 7F31C5BC: bl      0x7F31C4B4
    {
            ctx->lr = 0x7F31C5C0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31C4B4u;
                return;
            }
            goto label_7F31C4B4;
    }

label_7F31C5C0:
    ctx->pc = 0x7F31C5C0u;
    ctx->downcount -= 4;
    // 7F31C5C0: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31C5C4:
    ctx->pc = 0x7F31C5C4u;
    // 7F31C5C4: lwz     r3, 284(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(284);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31C5C8:
    ctx->pc = 0x7F31C5C8u;
    // 7F31C5C8: or   r31, r0, r0
    {
        ctx->gpr[31] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F31C5CC:
    ctx->pc = 0x7F31C5CCu;
    // 7F31C5CC: bl      0x7F19C738
    {
            ctx->lr = 0x7F31C5D0u;
            ctx->pc = 0x7F19C738u;
            return;
    }

label_7F31C5D0:
    ctx->pc = 0x7F31C5D0u;
    ctx->downcount -= 9;
    // 7F31C5D0: lwz     r3, 284(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(284);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31C5D4:
    ctx->pc = 0x7F31C5D4u;
    // 7F31C5D4: or   r10, r31, r31
    {
        ctx->gpr[10] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31C5D8:
    ctx->pc = 0x7F31C5D8u;
    // 7F31C5D8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31C5DC:
    ctx->pc = 0x7F31C5DCu;
    // 7F31C5DC: li      r5, 24
    ctx->gpr[5] = (u32)(s32)(24);

label_7F31C5E0:
    ctx->pc = 0x7F31C5E0u;
    // 7F31C5E0: li      r6, 700
    ctx->gpr[6] = (u32)(s32)(700);

label_7F31C5E4:
    ctx->pc = 0x7F31C5E4u;
    // 7F31C5E4: li      r7, 238
    ctx->gpr[7] = (u32)(s32)(238);

label_7F31C5E8:
    ctx->pc = 0x7F31C5E8u;
    // 7F31C5E8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F31C5EC:
    ctx->pc = 0x7F31C5ECu;
    // 7F31C5EC: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F31C5F0:
    ctx->pc = 0x7F31C5F0u;
    // 7F31C5F0: bl      0x7F19C814
    {
            ctx->lr = 0x7F31C5F4u;
            ctx->pc = 0x7F19C814u;
            return;
    }

label_7F31C5F4:
    ctx->pc = 0x7F31C5F4u;
    ctx->downcount -= 3;
    // 7F31C5F4: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31C5F8:
    ctx->pc = 0x7F31C5F8u;
    // 7F31C5F8: cmplwi  r3, 0x0000
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

label_7F31C5FC:
    ctx->pc = 0x7F31C5FCu;
    // 7F31C5FC: bc    12, 2, 0x7F31C608
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31C608;
        }
    }

label_7F31C600:
    ctx->pc = 0x7F31C600u;
    ctx->downcount -= 2;
    // 7F31C600: lbz     r0, 76(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31C604:
    ctx->pc = 0x7F31C604u;
    // 7F31C604: stb     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F31C608:
    ctx->pc = 0x7F31C608u;
    ctx->downcount -= 16;
    // 7F31C608: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F31C60C:
    ctx->pc = 0x7F31C60Cu;
    // 7F31C60C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31C610:
    ctx->pc = 0x7F31C610u;
    // 7F31C610: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31C614:
    ctx->pc = 0x7F31C614u;
    // 7F31C614: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F31C618:
    ctx->pc = 0x7F31C618u;
    // 7F31C618: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31C61C:
    ctx->pc = 0x7F31C61Cu;
    ctx->downcount -= 6;
    // 7F31C61C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31C620:
    ctx->pc = 0x7F31C620u;
    // 7F31C620: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31C624:
    ctx->pc = 0x7F31C624u;
    // 7F31C624: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C628:
    ctx->pc = 0x7F31C628u;
    // 7F31C628: lwz     r0, 260(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(260);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31C62C:
    ctx->pc = 0x7F31C62Cu;
    // 7F31C62C: cmpwi   r0, 0
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

label_7F31C630:
    ctx->pc = 0x7F31C630u;
    // 7F31C630: bc    12, 2, 0x7F31C674
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31C674;
        }
    }

label_7F31C634:
    ctx->pc = 0x7F31C634u;
    ctx->downcount -= 16;
    // 7F31C634: lwz     r7, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F31C638:
    ctx->pc = 0x7F31C638u;
    // 7F31C638: li      r0, 266
    ctx->gpr[0] = (u32)(s32)(266);

label_7F31C63C:
    ctx->pc = 0x7F31C63Cu;
    // 7F31C63C: lwz     r4, 268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(268);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31C640:
    ctx->pc = 0x7F31C640u;
    // 7F31C640: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F31C644:
    ctx->pc = 0x7F31C644u;
    // 7F31C644: addi    r5, r7, -24
    ctx->gpr[5] = ctx->gpr[7] + (u32)(s32)(-24);

label_7F31C648:
    ctx->pc = 0x7F31C648u;
    // 7F31C648: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F31C64C:
    ctx->pc = 0x7F31C64Cu;
    // 7F31C64C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C650:
    ctx->pc = 0x7F31C650u;
    // 7F31C650: li      r10, 601
    ctx->gpr[10] = (u32)(s32)(601);

label_7F31C654:
    ctx->pc = 0x7F31C654u;
    // 7F31C654: lwz     r0, 264(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(264);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31C658:
    ctx->pc = 0x7F31C658u;
    // 7F31C658: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C65C:
    ctx->pc = 0x7F31C65Cu;
    // 7F31C65C: lwz     r6, 276(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(276);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F31C660:
    ctx->pc = 0x7F31C660u;
    // 7F31C660: lwz     r0, 280(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(280);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31C664:
    ctx->pc = 0x7F31C664u;
    // 7F31C664: lwz     r3, 284(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(284);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31C668:
    ctx->pc = 0x7F31C668u;
    // 7F31C668: add   r6, r4, r6
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F31C66C:
    ctx->pc = 0x7F31C66Cu;
    // 7F31C66C: add   r7, r7, r0
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F31C670:
    ctx->pc = 0x7F31C670u;
    // 7F31C670: bl      0x7F19CB2C
    {
            ctx->lr = 0x7F31C674u;
            ctx->pc = 0x7F19CB2Cu;
            return;
    }

label_7F31C674:
    ctx->pc = 0x7F31C674u;
    ctx->downcount -= 5;
    // 7F31C674: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31C678:
    ctx->pc = 0x7F31C678u;
    // 7F31C678: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31C67C:
    ctx->pc = 0x7F31C67Cu;
    // 7F31C67C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F31C680:
    ctx->pc = 0x7F31C680u;
    // 7F31C680: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31C684:
    ctx->pc = 0x7F31C684u;
    ctx->downcount -= 8;
    // 7F31C684: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31C688:
    ctx->pc = 0x7F31C688u;
    // 7F31C688: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31C68C:
    ctx->pc = 0x7F31C68Cu;
    // 7F31C68C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C690:
    ctx->pc = 0x7F31C690u;
    // 7F31C690: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F31C694:
    ctx->pc = 0x7F31C694u;
    // 7F31C694: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31C698:
    ctx->pc = 0x7F31C698u;
    // 7F31C698: lwz     r0, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31C69C:
    ctx->pc = 0x7F31C69Cu;
    // 7F31C69C: cmpwi   r0, 2
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

label_7F31C6A0:
    ctx->pc = 0x7F31C6A0u;
    // 7F31C6A0: bc    12, 2, 0x7F31C91C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31C91C;
        }
    }

label_7F31C6A4:
    ctx->pc = 0x7F31C6A4u;
    ctx->downcount -= 1;
    // 7F31C6A4: bc    4, 0, 0x7F31C6B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31C6B8;
        }
    }

label_7F31C6A8:
    ctx->pc = 0x7F31C6A8u;
    ctx->downcount -= 2;
    // 7F31C6A8: cmpwi   r0, 0
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

label_7F31C6AC:
    ctx->pc = 0x7F31C6ACu;
    // 7F31C6AC: bc    12, 2, 0x7F31C6C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31C6C4;
        }
    }

label_7F31C6B0:
    ctx->pc = 0x7F31C6B0u;
    ctx->downcount -= 1;
    // 7F31C6B0: bc    4, 0, 0x7F31C8F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31C8F4;
        }
    }

label_7F31C6B4:
    ctx->pc = 0x7F31C6B4u;
    ctx->downcount -= 1;
    // 7F31C6B4: b       0x7F31C950
    {
            goto label_7F31C950;
    }

label_7F31C6B8:
    ctx->pc = 0x7F31C6B8u;
    ctx->downcount -= 2;
    // 7F31C6B8: cmpwi   r0, 4
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

label_7F31C6BC:
    ctx->pc = 0x7F31C6BCu;
    // 7F31C6BC: bc    4, 0, 0x7F31C950
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31C950;
        }
    }

label_7F31C6C0:
    ctx->pc = 0x7F31C6C0u;
    ctx->downcount -= 1;
    // 7F31C6C0: b       0x7F31C944
    {
            goto label_7F31C944;
    }

label_7F31C6C4:
    ctx->pc = 0x7F31C6C4u;
    ctx->downcount -= 3;
    // 7F31C6C4: lwz     r4, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31C6C8:
    ctx->pc = 0x7F31C6C8u;
    // 7F31C6C8: cmpwi   r4, 128
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

label_7F31C6CC:
    ctx->pc = 0x7F31C6CCu;
    // 7F31C6CC: bc    12, 2, 0x7F31C744
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31C744;
        }
    }

label_7F31C6D0:
    ctx->pc = 0x7F31C6D0u;
    ctx->downcount -= 1;
    // 7F31C6D0: bc    4, 0, 0x7F31C6F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31C6F8;
        }
    }

label_7F31C6D4:
    ctx->pc = 0x7F31C6D4u;
    ctx->downcount -= 2;
    // 7F31C6D4: cmpwi   r4, 2
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

label_7F31C6D8:
    ctx->pc = 0x7F31C6D8u;
    // 7F31C6D8: bc    12, 2, 0x7F31C8BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31C8BC;
        }
    }

label_7F31C6DC:
    ctx->pc = 0x7F31C6DCu;
    ctx->downcount -= 1;
    // 7F31C6DC: bc    4, 0, 0x7F31C6EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31C6EC;
        }
    }

label_7F31C6E0:
    ctx->pc = 0x7F31C6E0u;
    ctx->downcount -= 2;
    // 7F31C6E0: cmpwi   r4, 1
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

label_7F31C6E4:
    ctx->pc = 0x7F31C6E4u;
    // 7F31C6E4: bc    4, 0, 0x7F31C888
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31C888;
        }
    }

label_7F31C6E8:
    ctx->pc = 0x7F31C6E8u;
    ctx->downcount -= 1;
    // 7F31C6E8: b       0x7F31C950
    {
            goto label_7F31C950;
    }

label_7F31C6EC:
    ctx->pc = 0x7F31C6ECu;
    ctx->downcount -= 2;
    // 7F31C6EC: cmpwi   r4, 32
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

label_7F31C6F0:
    ctx->pc = 0x7F31C6F0u;
    // 7F31C6F0: bc    12, 2, 0x7F31C718
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31C718;
        }
    }

label_7F31C6F4:
    ctx->pc = 0x7F31C6F4u;
    ctx->downcount -= 1;
    // 7F31C6F4: b       0x7F31C950
    {
            goto label_7F31C950;
    }

label_7F31C6F8:
    ctx->pc = 0x7F31C6F8u;
    ctx->downcount -= 4;
    // 7F31C6F8: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F31C6FC:
    ctx->pc = 0x7F31C6FCu;
    // 7F31C6FC: addi    r0, r3, -32768
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32768);

label_7F31C700:
    ctx->pc = 0x7F31C700u;
    // 7F31C700: cmpw    r4, r0
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

label_7F31C704:
    ctx->pc = 0x7F31C704u;
    // 7F31C704: bc    12, 2, 0x7F31C804
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31C804;
        }
    }

label_7F31C708:
    ctx->pc = 0x7F31C708u;
    ctx->downcount -= 1;
    // 7F31C708: bc    4, 0, 0x7F31C950
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31C950;
        }
    }

label_7F31C70C:
    ctx->pc = 0x7F31C70Cu;
    ctx->downcount -= 2;
    // 7F31C70C: cmpwi   r4, 8192
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

label_7F31C710:
    ctx->pc = 0x7F31C710u;
    // 7F31C710: bc    12, 2, 0x7F31C848
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31C848;
        }
    }

label_7F31C714:
    ctx->pc = 0x7F31C714u;
    ctx->downcount -= 1;
    // 7F31C714: b       0x7F31C950
    {
            goto label_7F31C950;
    }

label_7F31C718:
    ctx->pc = 0x7F31C718u;
    ctx->downcount -= 11;
    // 7F31C718: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31C71C:
    ctx->pc = 0x7F31C71Cu;
    // 7F31C71C: lis     r3, 104
    ctx->gpr[3] = ((u32)(s32)(104) << 16);

label_7F31C720:
    ctx->pc = 0x7F31C720u;
    // 7F31C720: stw     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C724:
    ctx->pc = 0x7F31C724u;
    // 7F31C724: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F31C728:
    ctx->pc = 0x7F31C728u;
    // 7F31C728: addi    r0, r3, -13621
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-13621);

label_7F31C72C:
    ctx->pc = 0x7F31C72Cu;
    // 7F31C72C: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F31C730:
    ctx->pc = 0x7F31C730u;
    // 7F31C730: stw     r4, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F31C734:
    ctx->pc = 0x7F31C734u;
    // 7F31C734: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F31C738:
    ctx->pc = 0x7F31C738u;
    // 7F31C738: li      r5, 247
    ctx->gpr[5] = (u32)(s32)(247);

label_7F31C73C:
    ctx->pc = 0x7F31C73Cu;
    // 7F31C73C: stw     r0, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C740:
    ctx->pc = 0x7F31C740u;
    // 7F31C740: bl      0x7F011698
    {
            ctx->lr = 0x7F31C744u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F31C744:
    ctx->pc = 0x7F31C744u;
    ctx->downcount -= 3;
    // 7F31C744: lwz     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31C748:
    ctx->pc = 0x7F31C748u;
    // 7F31C748: cmpwi   r0, 2
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

label_7F31C74C:
    ctx->pc = 0x7F31C74Cu;
    // 7F31C74C: bc    12, 2, 0x7F31C7A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31C7A4;
        }
    }

label_7F31C750:
    ctx->pc = 0x7F31C750u;
    ctx->downcount -= 1;
    // 7F31C750: bc    4, 0, 0x7F31C764
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31C764;
        }
    }

label_7F31C754:
    ctx->pc = 0x7F31C754u;
    ctx->downcount -= 2;
    // 7F31C754: cmpwi   r0, 0
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

label_7F31C758:
    ctx->pc = 0x7F31C758u;
    // 7F31C758: bc    12, 2, 0x7F31C7DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31C7DC;
        }
    }

label_7F31C75C:
    ctx->pc = 0x7F31C75Cu;
    ctx->downcount -= 1;
    // 7F31C75C: bc    4, 0, 0x7F31C770
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31C770;
        }
    }

label_7F31C760:
    ctx->pc = 0x7F31C760u;
    ctx->downcount -= 1;
    // 7F31C760: b       0x7F31C950
    {
            goto label_7F31C950;
    }

label_7F31C764:
    ctx->pc = 0x7F31C764u;
    ctx->downcount -= 2;
    // 7F31C764: cmpwi   r0, 4
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

label_7F31C768:
    ctx->pc = 0x7F31C768u;
    // 7F31C768: bc    4, 0, 0x7F31C950
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31C950;
        }
    }

label_7F31C76C:
    ctx->pc = 0x7F31C76Cu;
    ctx->downcount -= 1;
    // 7F31C76C: b       0x7F31C7DC
    {
            goto label_7F31C7DC;
    }

label_7F31C770:
    ctx->pc = 0x7F31C770u;
    ctx->downcount -= 3;
    // 7F31C770: lwz     r0, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31C774:
    ctx->pc = 0x7F31C774u;
    // 7F31C774: cmpwi   r0, 1
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

label_7F31C778:
    ctx->pc = 0x7F31C778u;
    // 7F31C778: bc    4, 1, 0x7F31C950
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31C950;
        }
    }

label_7F31C77C:
    ctx->pc = 0x7F31C77Cu;
    ctx->downcount -= 9;
    // 7F31C77C: lis     r3, 34
    ctx->gpr[3] = ((u32)(s32)(34) << 16);

label_7F31C780:
    ctx->pc = 0x7F31C780u;
    // 7F31C780: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F31C784:
    ctx->pc = 0x7F31C784u;
    // 7F31C784: addi    r4, r3, -6752
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6752);

label_7F31C788:
    ctx->pc = 0x7F31C788u;
    // 7F31C788: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F31C78C:
    ctx->pc = 0x7F31C78Cu;
    // 7F31C78C: stw     r4, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F31C790:
    ctx->pc = 0x7F31C790u;
    // 7F31C790: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F31C794:
    ctx->pc = 0x7F31C794u;
    // 7F31C794: li      r5, 2179
    ctx->gpr[5] = (u32)(s32)(2179);

label_7F31C798:
    ctx->pc = 0x7F31C798u;
    // 7F31C798: stw     r0, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C79C:
    ctx->pc = 0x7F31C79Cu;
    // 7F31C79C: bl      0x7F011698
    {
            ctx->lr = 0x7F31C7A0u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F31C7A0:
    ctx->pc = 0x7F31C7A0u;
    ctx->downcount -= 1;
    // 7F31C7A0: b       0x7F31C950
    {
            goto label_7F31C950;
    }

label_7F31C7A4:
    ctx->pc = 0x7F31C7A4u;
    ctx->downcount -= 4;
    // 7F31C7A4: lwz     r3, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31C7A8:
    ctx->pc = 0x7F31C7A8u;
    // 7F31C7A8: lwz     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31C7AC:
    ctx->pc = 0x7F31C7ACu;
    // 7F31C7AC: cmpw    r3, r0
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

label_7F31C7B0:
    ctx->pc = 0x7F31C7B0u;
    // 7F31C7B0: bc    4, 0, 0x7F31C950
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31C950;
        }
    }

label_7F31C7B4:
    ctx->pc = 0x7F31C7B4u;
    ctx->downcount -= 9;
    // 7F31C7B4: lis     r3, 94
    ctx->gpr[3] = ((u32)(s32)(94) << 16);

label_7F31C7B8:
    ctx->pc = 0x7F31C7B8u;
    // 7F31C7B8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F31C7BC:
    ctx->pc = 0x7F31C7BCu;
    // 7F31C7BC: addi    r4, r3, -235
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-235);

label_7F31C7C0:
    ctx->pc = 0x7F31C7C0u;
    // 7F31C7C0: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F31C7C4:
    ctx->pc = 0x7F31C7C4u;
    // 7F31C7C4: stw     r4, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F31C7C8:
    ctx->pc = 0x7F31C7C8u;
    // 7F31C7C8: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F31C7CC:
    ctx->pc = 0x7F31C7CCu;
    // 7F31C7CC: li      r5, 2179
    ctx->gpr[5] = (u32)(s32)(2179);

label_7F31C7D0:
    ctx->pc = 0x7F31C7D0u;
    // 7F31C7D0: stw     r0, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C7D4:
    ctx->pc = 0x7F31C7D4u;
    // 7F31C7D4: bl      0x7F011698
    {
            ctx->lr = 0x7F31C7D8u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F31C7D8:
    ctx->pc = 0x7F31C7D8u;
    ctx->downcount -= 1;
    // 7F31C7D8: b       0x7F31C950
    {
            goto label_7F31C950;
    }

label_7F31C7DC:
    ctx->pc = 0x7F31C7DCu;
    ctx->downcount -= 9;
    // 7F31C7DC: lis     r3, 104
    ctx->gpr[3] = ((u32)(s32)(104) << 16);

label_7F31C7E0:
    ctx->pc = 0x7F31C7E0u;
    // 7F31C7E0: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F31C7E4:
    ctx->pc = 0x7F31C7E4u;
    // 7F31C7E4: addi    r4, r3, -13621
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-13621);

label_7F31C7E8:
    ctx->pc = 0x7F31C7E8u;
    // 7F31C7E8: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F31C7EC:
    ctx->pc = 0x7F31C7ECu;
    // 7F31C7EC: stw     r4, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F31C7F0:
    ctx->pc = 0x7F31C7F0u;
    // 7F31C7F0: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F31C7F4:
    ctx->pc = 0x7F31C7F4u;
    // 7F31C7F4: li      r5, 249
    ctx->gpr[5] = (u32)(s32)(249);

label_7F31C7F8:
    ctx->pc = 0x7F31C7F8u;
    // 7F31C7F8: stw     r0, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C7FC:
    ctx->pc = 0x7F31C7FCu;
    // 7F31C7FC: bl      0x7F011698
    {
            ctx->lr = 0x7F31C800u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F31C800:
    ctx->pc = 0x7F31C800u;
    ctx->downcount -= 1;
    // 7F31C800: b       0x7F31C950
    {
            goto label_7F31C950;
    }

label_7F31C804:
    ctx->pc = 0x7F31C804u;
    ctx->downcount -= 4;
    // 7F31C804: lwz     r3, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31C808:
    ctx->pc = 0x7F31C808u;
    // 7F31C808: lwz     r0, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31C80C:
    ctx->pc = 0x7F31C80Cu;
    // 7F31C80C: cmpw    r3, r0
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

label_7F31C810:
    ctx->pc = 0x7F31C810u;
    // 7F31C810: bc    4, 1, 0x7F31C950
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31C950;
        }
    }

label_7F31C814:
    ctx->pc = 0x7F31C814u;
    ctx->downcount -= 12;
    // 7F31C814: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F31C818:
    ctx->pc = 0x7F31C818u;
    // 7F31C818: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31C81C:
    ctx->pc = 0x7F31C81Cu;
    // 7F31C81C: stw     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C820:
    ctx->pc = 0x7F31C820u;
    // 7F31C820: addi    r6, r3, -29224
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-29224);

label_7F31C824:
    ctx->pc = 0x7F31C824u;
    // 7F31C824: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F31C828:
    ctx->pc = 0x7F31C828u;
    // 7F31C828: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F31C82C:
    ctx->pc = 0x7F31C82Cu;
    // 7F31C82C: lwz     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31C830:
    ctx->pc = 0x7F31C830u;
    // 7F31C830: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F31C834:
    ctx->pc = 0x7F31C834u;
    // 7F31C834: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F31C838:
    ctx->pc = 0x7F31C838u;
    // 7F31C838: lwzx    r0, r6, r0
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31C83C:
    ctx->pc = 0x7F31C83Cu;
    // 7F31C83C: stw     r0, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C840:
    ctx->pc = 0x7F31C840u;
    // 7F31C840: bl      0x7F011698
    {
            ctx->lr = 0x7F31C844u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F31C844:
    ctx->pc = 0x7F31C844u;
    ctx->downcount -= 1;
    // 7F31C844: b       0x7F31C950
    {
            goto label_7F31C950;
    }

label_7F31C848:
    ctx->pc = 0x7F31C848u;
    ctx->downcount -= 3;
    // 7F31C848: lwz     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31C84C:
    ctx->pc = 0x7F31C84Cu;
    // 7F31C84C: cmpwi   r0, 3
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

label_7F31C850:
    ctx->pc = 0x7F31C850u;
    // 7F31C850: bc    4, 0, 0x7F31C950
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31C950;
        }
    }

label_7F31C854:
    ctx->pc = 0x7F31C854u;
    ctx->downcount -= 12;
    // 7F31C854: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31C858:
    ctx->pc = 0x7F31C858u;
    // 7F31C858: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F31C85C:
    ctx->pc = 0x7F31C85Cu;
    // 7F31C85C: addi    r4, r3, -29212
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-29212);

label_7F31C860:
    ctx->pc = 0x7F31C860u;
    // 7F31C860: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F31C864:
    ctx->pc = 0x7F31C864u;
    // 7F31C864: lwzx    r0, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31C868:
    ctx->pc = 0x7F31C868u;
    // 7F31C868: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F31C86C:
    ctx->pc = 0x7F31C86Cu;
    // 7F31C86C: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F31C870:
    ctx->pc = 0x7F31C870u;
    // 7F31C870: stw     r0, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C874:
    ctx->pc = 0x7F31C874u;
    // 7F31C874: lwz     r6, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F31C878:
    ctx->pc = 0x7F31C878u;
    // 7F31C878: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_7F31C87C:
    ctx->pc = 0x7F31C87Cu;
    // 7F31C87C: stw     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C880:
    ctx->pc = 0x7F31C880u;
    // 7F31C880: bl      0x7F011698
    {
            ctx->lr = 0x7F31C884u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F31C884:
    ctx->pc = 0x7F31C884u;
    ctx->downcount -= 1;
    // 7F31C884: b       0x7F31C950
    {
            goto label_7F31C950;
    }

label_7F31C888:
    ctx->pc = 0x7F31C888u;
    ctx->downcount -= 3;
    // 7F31C888: lwz     r0, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31C88C:
    ctx->pc = 0x7F31C88Cu;
    // 7F31C88C: cmpwi   r0, 1
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

label_7F31C890:
    ctx->pc = 0x7F31C890u;
    // 7F31C890: bc    4, 1, 0x7F31C950
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31C950;
        }
    }

label_7F31C894:
    ctx->pc = 0x7F31C894u;
    ctx->downcount -= 9;
    // 7F31C894: lis     r3, 34
    ctx->gpr[3] = ((u32)(s32)(34) << 16);

label_7F31C898:
    ctx->pc = 0x7F31C898u;
    // 7F31C898: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F31C89C:
    ctx->pc = 0x7F31C89Cu;
    // 7F31C89C: addi    r4, r3, -6752
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6752);

label_7F31C8A0:
    ctx->pc = 0x7F31C8A0u;
    // 7F31C8A0: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F31C8A4:
    ctx->pc = 0x7F31C8A4u;
    // 7F31C8A4: stw     r4, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F31C8A8:
    ctx->pc = 0x7F31C8A8u;
    // 7F31C8A8: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F31C8AC:
    ctx->pc = 0x7F31C8ACu;
    // 7F31C8AC: li      r5, 2179
    ctx->gpr[5] = (u32)(s32)(2179);

label_7F31C8B0:
    ctx->pc = 0x7F31C8B0u;
    // 7F31C8B0: stw     r0, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C8B4:
    ctx->pc = 0x7F31C8B4u;
    // 7F31C8B4: bl      0x7F011698
    {
            ctx->lr = 0x7F31C8B8u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F31C8B8:
    ctx->pc = 0x7F31C8B8u;
    ctx->downcount -= 1;
    // 7F31C8B8: b       0x7F31C950
    {
            goto label_7F31C950;
    }

label_7F31C8BC:
    ctx->pc = 0x7F31C8BCu;
    ctx->downcount -= 4;
    // 7F31C8BC: lwz     r3, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31C8C0:
    ctx->pc = 0x7F31C8C0u;
    // 7F31C8C0: lwz     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31C8C4:
    ctx->pc = 0x7F31C8C4u;
    // 7F31C8C4: cmpw    r3, r0
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

label_7F31C8C8:
    ctx->pc = 0x7F31C8C8u;
    // 7F31C8C8: bc    4, 0, 0x7F31C950
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31C950;
        }
    }

label_7F31C8CC:
    ctx->pc = 0x7F31C8CCu;
    ctx->downcount -= 9;
    // 7F31C8CC: lis     r3, 94
    ctx->gpr[3] = ((u32)(s32)(94) << 16);

label_7F31C8D0:
    ctx->pc = 0x7F31C8D0u;
    // 7F31C8D0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F31C8D4:
    ctx->pc = 0x7F31C8D4u;
    // 7F31C8D4: addi    r4, r3, -235
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-235);

label_7F31C8D8:
    ctx->pc = 0x7F31C8D8u;
    // 7F31C8D8: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F31C8DC:
    ctx->pc = 0x7F31C8DCu;
    // 7F31C8DC: stw     r4, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F31C8E0:
    ctx->pc = 0x7F31C8E0u;
    // 7F31C8E0: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F31C8E4:
    ctx->pc = 0x7F31C8E4u;
    // 7F31C8E4: li      r5, 2179
    ctx->gpr[5] = (u32)(s32)(2179);

label_7F31C8E8:
    ctx->pc = 0x7F31C8E8u;
    // 7F31C8E8: stw     r0, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C8EC:
    ctx->pc = 0x7F31C8ECu;
    // 7F31C8EC: bl      0x7F011698
    {
            ctx->lr = 0x7F31C8F0u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F31C8F0:
    ctx->pc = 0x7F31C8F0u;
    ctx->downcount -= 1;
    // 7F31C8F0: b       0x7F31C950
    {
            goto label_7F31C950;
    }

label_7F31C8F4:
    ctx->pc = 0x7F31C8F4u;
    ctx->downcount -= 4;
    // 7F31C8F4: lwz     r4, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31C8F8:
    ctx->pc = 0x7F31C8F8u;
    // 7F31C8F8: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F31C8FC:
    ctx->pc = 0x7F31C8FCu;
    // 7F31C8FC: stw     r0, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C900:
    ctx->pc = 0x7F31C900u;
    // 7F31C900: bl      0x7F31C594
    {
            ctx->lr = 0x7F31C904u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31C594u;
                return;
            }
            goto label_7F31C594;
    }

label_7F31C904:
    ctx->pc = 0x7F31C904u;
    ctx->downcount -= 6;
    // 7F31C904: lis     r3, 193
    ctx->gpr[3] = ((u32)(s32)(193) << 16);

label_7F31C908:
    ctx->pc = 0x7F31C908u;
    // 7F31C908: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31C90C:
    ctx->pc = 0x7F31C90Cu;
    // 7F31C90C: addi    r3, r3, 21139
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(21139);

label_7F31C910:
    ctx->pc = 0x7F31C910u;
    // 7F31C910: stw     r3, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31C914:
    ctx->pc = 0x7F31C914u;
    // 7F31C914: stw     r0, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C918:
    ctx->pc = 0x7F31C918u;
    // 7F31C918: b       0x7F31C950
    {
            goto label_7F31C950;
    }

label_7F31C91C:
    ctx->pc = 0x7F31C91Cu;
    ctx->downcount -= 4;
    // 7F31C91C: lwz     r4, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31C920:
    ctx->pc = 0x7F31C920u;
    // 7F31C920: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F31C924:
    ctx->pc = 0x7F31C924u;
    // 7F31C924: stw     r0, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C928:
    ctx->pc = 0x7F31C928u;
    // 7F31C928: bl      0x7F31C594
    {
            ctx->lr = 0x7F31C92Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31C594u;
                return;
            }
            goto label_7F31C594;
    }

label_7F31C92C:
    ctx->pc = 0x7F31C92Cu;
    ctx->downcount -= 6;
    // 7F31C92C: lis     r3, 140
    ctx->gpr[3] = ((u32)(s32)(140) << 16);

label_7F31C930:
    ctx->pc = 0x7F31C930u;
    // 7F31C930: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31C934:
    ctx->pc = 0x7F31C934u;
    // 7F31C934: addi    r3, r3, 21868
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(21868);

label_7F31C938:
    ctx->pc = 0x7F31C938u;
    // 7F31C938: stw     r3, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31C93C:
    ctx->pc = 0x7F31C93Cu;
    // 7F31C93C: stw     r0, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C940:
    ctx->pc = 0x7F31C940u;
    // 7F31C940: b       0x7F31C950
    {
            goto label_7F31C950;
    }

label_7F31C944:
    ctx->pc = 0x7F31C944u;
    ctx->downcount -= 1;
    // 7F31C944: bl      0x7F31C454
    {
            ctx->lr = 0x7F31C948u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31C454u;
                return;
            }
            goto label_7F31C454;
    }

label_7F31C948:
    ctx->pc = 0x7F31C948u;
    ctx->downcount -= 2;
    // 7F31C948: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31C94C:
    ctx->pc = 0x7F31C94Cu;
    // 7F31C94C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F31C950u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F31C950:
    ctx->pc = 0x7F31C950u;
    ctx->downcount -= 6;
    // 7F31C950: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31C954:
    ctx->pc = 0x7F31C954u;
    // 7F31C954: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F31C958:
    ctx->pc = 0x7F31C958u;
    // 7F31C958: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31C95C:
    ctx->pc = 0x7F31C95Cu;
    // 7F31C95C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F31C960:
    ctx->pc = 0x7F31C960u;
    // 7F31C960: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31C964:
    ctx->pc = 0x7F31C964u;
    ctx->downcount -= 8;
    // 7F31C964: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31C968:
    ctx->pc = 0x7F31C968u;
    // 7F31C968: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31C96C:
    ctx->pc = 0x7F31C96Cu;
    // 7F31C96C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C970:
    ctx->pc = 0x7F31C970u;
    // 7F31C970: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F31C974:
    ctx->pc = 0x7F31C974u;
    // 7F31C974: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31C978:
    ctx->pc = 0x7F31C978u;
    // 7F31C978: lwz     r3, 84(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31C97C:
    ctx->pc = 0x7F31C97Cu;
    // 7F31C97C: cmpwi   r3, -1
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

label_7F31C980:
    ctx->pc = 0x7F31C980u;
    // 7F31C980: bc    12, 2, 0x7F31C9C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31C9C8;
        }
    }

label_7F31C984:
    ctx->pc = 0x7F31C984u;
    ctx->downcount -= 1;
    // 7F31C984: bl      0x7F2E50A0
    {
            ctx->lr = 0x7F31C988u;
            ctx->pc = 0x7F2E50A0u;
            return;
    }

label_7F31C988:
    ctx->pc = 0x7F31C988u;
    ctx->downcount -= 2;
    // 7F31C988: cmpwi   r3, 0
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

label_7F31C98C:
    ctx->pc = 0x7F31C98Cu;
    // 7F31C98C: bc    4, 2, 0x7F31C9C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31C9C0;
        }
    }

label_7F31C990:
    ctx->pc = 0x7F31C990u;
    ctx->downcount -= 5;
    // 7F31C990: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31C994:
    ctx->pc = 0x7F31C994u;
    // 7F31C994: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C998:
    ctx->pc = 0x7F31C998u;
    // 7F31C998: lwz     r4, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31C99C:
    ctx->pc = 0x7F31C99Cu;
    // 7F31C99C: cmpwi   r4, 0
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

label_7F31C9A0:
    ctx->pc = 0x7F31C9A0u;
    // 7F31C9A0: bc    12, 2, 0x7F31C9C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31C9C8;
        }
    }

label_7F31C9A4:
    ctx->pc = 0x7F31C9A4u;
    ctx->downcount -= 2;
    // 7F31C9A4: lwz     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31C9A8:
    ctx->pc = 0x7F31C9A8u;
    // 7F31C9A8: bl      0x7F2E4C98
    {
            ctx->lr = 0x7F31C9ACu;
            ctx->pc = 0x7F2E4C98u;
            return;
    }

label_7F31C9AC:
    ctx->pc = 0x7F31C9ACu;
    ctx->downcount -= 5;
    // 7F31C9AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31C9B0:
    ctx->pc = 0x7F31C9B0u;
    // 7F31C9B0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F31C9B4:
    ctx->pc = 0x7F31C9B4u;
    // 7F31C9B4: stw     r3, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31C9B8:
    ctx->pc = 0x7F31C9B8u;
    // 7F31C9B8: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C9BC:
    ctx->pc = 0x7F31C9BCu;
    // 7F31C9BC: b       0x7F31C9C8
    {
            goto label_7F31C9C8;
    }

label_7F31C9C0:
    ctx->pc = 0x7F31C9C0u;
    ctx->downcount -= 2;
    // 7F31C9C0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F31C9C4:
    ctx->pc = 0x7F31C9C4u;
    // 7F31C9C4: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C9C8:
    ctx->pc = 0x7F31C9C8u;
    ctx->downcount -= 5;
    // 7F31C9C8: lwz     r6, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F31C9CC:
    ctx->pc = 0x7F31C9CCu;
    // 7F31C9CC: addi    r3, r31, 116
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(116);

label_7F31C9D0:
    ctx->pc = 0x7F31C9D0u;
    // 7F31C9D0: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_7F31C9D4:
    ctx->pc = 0x7F31C9D4u;
    // 7F31C9D4: li      r5, 20
    ctx->gpr[5] = (u32)(s32)(20);

label_7F31C9D8:
    ctx->pc = 0x7F31C9D8u;
    // 7F31C9D8: bl      0x7F306FA4
    {
            ctx->lr = 0x7F31C9DCu;
            ctx->pc = 0x7F306FA4u;
            return;
    }

label_7F31C9DC:
    ctx->pc = 0x7F31C9DCu;
    ctx->downcount -= 3;
    // 7F31C9DC: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31C9E0:
    ctx->pc = 0x7F31C9E0u;
    // 7F31C9E0: cmpwi   r0, 0
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

label_7F31C9E4:
    ctx->pc = 0x7F31C9E4u;
    // 7F31C9E4: bc    4, 2, 0x7F31C9F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31C9F0;
        }
    }

label_7F31C9E8:
    ctx->pc = 0x7F31C9E8u;
    ctx->downcount -= 2;
    // 7F31C9E8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31C9EC:
    ctx->pc = 0x7F31C9ECu;
    // 7F31C9EC: bl      0x7F31C684
    {
            ctx->lr = 0x7F31C9F0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31C684u;
                return;
            }
            goto label_7F31C684;
    }

label_7F31C9F0:
    ctx->pc = 0x7F31C9F0u;
    ctx->downcount -= 2;
    // 7F31C9F0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31C9F4:
    ctx->pc = 0x7F31C9F4u;
    // 7F31C9F4: bl      0x7F31C61C
    {
            ctx->lr = 0x7F31C9F8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31C61Cu;
                return;
            }
            goto label_7F31C61C;
    }

label_7F31C9F8:
    ctx->pc = 0x7F31C9F8u;
    ctx->downcount -= 6;
    // 7F31C9F8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31C9FC:
    ctx->pc = 0x7F31C9FCu;
    // 7F31C9FC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F31CA00:
    ctx->pc = 0x7F31CA00u;
    // 7F31CA00: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31CA04:
    ctx->pc = 0x7F31CA04u;
    // 7F31CA04: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F31CA08:
    ctx->pc = 0x7F31CA08u;
    // 7F31CA08: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31CA0C:
    ctx->pc = 0x7F31CA0Cu;
    ctx->downcount -= 7;
    // 7F31CA0C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31CA10:
    ctx->pc = 0x7F31CA10u;
    // 7F31CA10: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31CA14:
    ctx->pc = 0x7F31CA14u;
    // 7F31CA14: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31CA18:
    ctx->pc = 0x7F31CA18u;
    // 7F31CA18: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F31CA1C:
    ctx->pc = 0x7F31CA1Cu;
    // 7F31CA1C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31CA20:
    ctx->pc = 0x7F31CA20u;
    // 7F31CA20: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31CA24:
    ctx->pc = 0x7F31CA24u;
    // 7F31CA24: bl      0x7F191328
    {
            ctx->lr = 0x7F31CA28u;
            ctx->pc = 0x7F191328u;
            return;
    }

label_7F31CA28:
    ctx->pc = 0x7F31CA28u;
    ctx->downcount -= 3;
    // 7F31CA28: lwz     r3, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31CA2C:
    ctx->pc = 0x7F31CA2Cu;
    // 7F31CA2C: cmplwi  r3, 0x0000
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

label_7F31CA30:
    ctx->pc = 0x7F31CA30u;
    // 7F31CA30: bc    12, 2, 0x7F31CA40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31CA40;
        }
    }

label_7F31CA34:
    ctx->pc = 0x7F31CA34u;
    ctx->downcount -= 1;
    // 7F31CA34: bl      0x7F3C82B4
    {
            ctx->lr = 0x7F31CA38u;
            ctx->pc = 0x7F3C82B4u;
            return;
    }

label_7F31CA38:
    ctx->pc = 0x7F31CA38u;
    ctx->downcount -= 2;
    // 7F31CA38: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31CA3C:
    ctx->pc = 0x7F31CA3Cu;
    // 7F31CA3C: stw     r0, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31CA40:
    ctx->pc = 0x7F31CA40u;
    ctx->downcount -= 3;
    // 7F31CA40: lwz     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31CA44:
    ctx->pc = 0x7F31CA44u;
    // 7F31CA44: cmpwi   r3, 0
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

label_7F31CA48:
    ctx->pc = 0x7F31CA48u;
    // 7F31CA48: bc    12, 0, 0x7F31CA50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31CA50;
        }
    }

label_7F31CA4C:
    ctx->pc = 0x7F31CA4Cu;
    ctx->downcount -= 1;
    // 7F31CA4C: bl      0x7F2E4F04
    {
            ctx->lr = 0x7F31CA50u;
            ctx->pc = 0x7F2E4F04u;
            return;
    }

label_7F31CA50:
    ctx->pc = 0x7F31CA50u;
    ctx->downcount -= 6;
    // 7F31CA50: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31CA54:
    ctx->pc = 0x7F31CA54u;
    // 7F31CA54: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F31CA58:
    ctx->pc = 0x7F31CA58u;
    // 7F31CA58: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31CA5C:
    ctx->pc = 0x7F31CA5Cu;
    // 7F31CA5C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F31CA60:
    ctx->pc = 0x7F31CA60u;
    // 7F31CA60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31CA64:
    ctx->pc = 0x7F31CA64u;
    ctx->downcount -= 9;
    // 7F31CA64: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31CA68:
    ctx->pc = 0x7F31CA68u;
    // 7F31CA68: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31CA6C:
    ctx->pc = 0x7F31CA6Cu;
    // 7F31CA6C: lis     r4, 60
    ctx->gpr[4] = ((u32)(s32)(60) << 16);

label_7F31CA70:
    ctx->pc = 0x7F31CA70u;
    // 7F31CA70: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31CA74:
    ctx->pc = 0x7F31CA74u;
    // 7F31CA74: addi    r4, r4, -23692
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23692);

label_7F31CA78:
    ctx->pc = 0x7F31CA78u;
    // 7F31CA78: stw     r31, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F31CA7C:
    ctx->pc = 0x7F31CA7Cu;
    // 7F31CA7C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31CA80:
    ctx->pc = 0x7F31CA80u;
    // 7F31CA80: lwz     r3, 84(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31CA84:
    ctx->pc = 0x7F31CA84u;
    // 7F31CA84: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F31CA88u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F31CA88:
    ctx->pc = 0x7F31CA88u;
    ctx->downcount -= 81;
    // 7F31CA88: lwz     r0, 140(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(140);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31CA8C:
    ctx->pc = 0x7F31CA8Cu;
    // 7F31CA8C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F31CA90:
    ctx->pc = 0x7F31CA90u;
    // 7F31CA90: addi    r6, r4, -29200
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-29200);

label_7F31CA94:
    ctx->pc = 0x7F31CA94u;
    // 7F31CA94: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31CA98:
    ctx->pc = 0x7F31CA98u;
    // 7F31CA98: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F31CA9C:
    ctx->pc = 0x7F31CA9Cu;
    // 7F31CA9C: addi    r5, r4, -29196
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-29196);

label_7F31CAA0:
    ctx->pc = 0x7F31CAA0u;
    // 7F31CAA0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F31CAA4:
    ctx->pc = 0x7F31CAA4u;
    // 7F31CAA4: lbz     r7, 9(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(9);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_7F31CAA8:
    ctx->pc = 0x7F31CAA8u;
    // 7F31CAA8: lis     r4, 94
    ctx->gpr[4] = ((u32)(s32)(94) << 16);

label_7F31CAAC:
    ctx->pc = 0x7F31CAACu;
    // 7F31CAAC: lbz     r8, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read8(ctx, ea);
    }

label_7F31CAB0:
    ctx->pc = 0x7F31CAB0u;
    // 7F31CAB0: addi    r4, r4, 3706
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3706);

label_7F31CAB4:
    ctx->pc = 0x7F31CAB4u;
    // 7F31CAB4: rlwimi r8, r7, 8, 16, 23
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[7], 8u);
        ctx->gpr[8] = (ctx->gpr[8] & ~0x0000FF00u) | (rot & 0x0000FF00u);
    }

label_7F31CAB8:
    ctx->pc = 0x7F31CAB8u;
    // 7F31CAB8: lbz     r9, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        ctx->gpr[9] = mem_read8(ctx, ea);
    }

label_7F31CABC:
    ctx->pc = 0x7F31CABCu;
    // 7F31CABC: lbz     r7, 11(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(11);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_7F31CAC0:
    ctx->pc = 0x7F31CAC0u;
    // 7F31CAC0: rlwimi r8, r9, 16, 8, 15
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[9], 16u);
        ctx->gpr[8] = (ctx->gpr[8] & ~0x00FF0000u) | (rot & 0x00FF0000u);
    }

label_7F31CAC4:
    ctx->pc = 0x7F31CAC4u;
    // 7F31CAC4: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F31CAC4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F31CAC8:
    ctx->pc = 0x7F31CAC8u;
    // 7F31CAC8: rlwimi r8, r7, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[7], 24u);
        ctx->gpr[8] = (ctx->gpr[8] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

label_7F31CACC:
    ctx->pc = 0x7F31CACCu;
    // 7F31CACC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F31CACCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31CAD0:
    ctx->pc = 0x7F31CAD0u;
    // 7F31CAD0: stw     r8, 264(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(264);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F31CAD4:
    ctx->pc = 0x7F31CAD4u;
    // 7F31CAD4: stw     r0, 260(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(260);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31CAD8:
    ctx->pc = 0x7F31CAD8u;
    // 7F31CAD8: lfs     f0, 132(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31CAD8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(132);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31CADC:
    ctx->pc = 0x7F31CADCu;
    // 7F31CADC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31CADCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F31CAE0:
    ctx->pc = 0x7F31CAE0u;
    // 7F31CAE0: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31CAE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F31CAE4:
    ctx->pc = 0x7F31CAE4u;
    // 7F31CAE4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31CAE8:
    ctx->pc = 0x7F31CAE8u;
    // 7F31CAE8: stw     r0, 268(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31CAEC:
    ctx->pc = 0x7F31CAECu;
    // 7F31CAEC: lfs     f0, 136(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31CAECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(136);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31CAF0:
    ctx->pc = 0x7F31CAF0u;
    // 7F31CAF0: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31CAF0u)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F31CAF4:
    ctx->pc = 0x7F31CAF4u;
    // 7F31CAF4: fdivs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F31CAF4u)) return;
    ppc_fdivs(ctx, 0, 0, 1);

label_7F31CAF8:
    ctx->pc = 0x7F31CAF8u;
    // 7F31CAF8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31CAF8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F31CAFC:
    ctx->pc = 0x7F31CAFCu;
    // 7F31CAFC: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31CAFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F31CB00:
    ctx->pc = 0x7F31CB00u;
    // 7F31CB00: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31CB04:
    ctx->pc = 0x7F31CB04u;
    // 7F31CB04: stw     r0, 272(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31CB08:
    ctx->pc = 0x7F31CB08u;
    // 7F31CB08: lfs     f0, 144(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31CB08u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31CB0C:
    ctx->pc = 0x7F31CB0Cu;
    // 7F31CB0C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31CB0Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F31CB10:
    ctx->pc = 0x7F31CB10u;
    // 7F31CB10: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31CB10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F31CB14:
    ctx->pc = 0x7F31CB14u;
    // 7F31CB14: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31CB18:
    ctx->pc = 0x7F31CB18u;
    // 7F31CB18: stw     r0, 276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31CB1C:
    ctx->pc = 0x7F31CB1Cu;
    // 7F31CB1C: lfs     f0, 148(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31CB1Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31CB20:
    ctx->pc = 0x7F31CB20u;
    // 7F31CB20: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31CB20u)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F31CB24:
    ctx->pc = 0x7F31CB24u;
    // 7F31CB24: fdivs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F31CB24u)) return;
    ppc_fdivs(ctx, 0, 0, 1);

label_7F31CB28:
    ctx->pc = 0x7F31CB28u;
    // 7F31CB28: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31CB28u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F31CB2C:
    ctx->pc = 0x7F31CB2Cu;
    // 7F31CB2C: stfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31CB2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F31CB30:
    ctx->pc = 0x7F31CB30u;
    // 7F31CB30: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31CB34:
    ctx->pc = 0x7F31CB34u;
    // 7F31CB34: stw     r0, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31CB38:
    ctx->pc = 0x7F31CB38u;
    // 7F31CB38: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31CB3C:
    ctx->pc = 0x7F31CB3Cu;
    // 7F31CB3C: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F31CB40:
    ctx->pc = 0x7F31CB40u;
    // 7F31CB40: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31CB44:
    ctx->pc = 0x7F31CB44u;
    // 7F31CB44: lwz     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31CB48:
    ctx->pc = 0x7F31CB48u;
    // 7F31CB48: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F31CB4Cu;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F31CB4C:
    ctx->pc = 0x7F31CB4Cu;
    ctx->downcount -= 5;
    // 7F31CB4C: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F31CB50:
    ctx->pc = 0x7F31CB50u;
    // 7F31CB50: lwz     r4, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31CB54:
    ctx->pc = 0x7F31CB54u;
    // 7F31CB54: addi    r5, r5, -31328
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-31328);

label_7F31CB58:
    ctx->pc = 0x7F31CB58u;
    // 7F31CB58: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F31CB5C:
    ctx->pc = 0x7F31CB5Cu;
    // 7F31CB5C: bl      0x7F2E28A0
    {
            ctx->lr = 0x7F31CB60u;
            ctx->pc = 0x7F2E28A0u;
            return;
    }

label_7F31CB60:
    ctx->pc = 0x7F31CB60u;
    ctx->downcount -= 4;
    // 7F31CB60: lis     r4, 187
    ctx->gpr[4] = ((u32)(s32)(187) << 16);

label_7F31CB64:
    ctx->pc = 0x7F31CB64u;
    // 7F31CB64: lwz     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31CB68:
    ctx->pc = 0x7F31CB68u;
    // 7F31CB68: addi    r4, r4, -31321
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-31321);

label_7F31CB6C:
    ctx->pc = 0x7F31CB6Cu;
    // 7F31CB6C: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F31CB70u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F31CB70:
    ctx->pc = 0x7F31CB70u;
    ctx->downcount -= 5;
    // 7F31CB70: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F31CB74:
    ctx->pc = 0x7F31CB74u;
    // 7F31CB74: lwz     r4, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31CB78:
    ctx->pc = 0x7F31CB78u;
    // 7F31CB78: addi    r5, r5, -31328
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-31328);

label_7F31CB7C:
    ctx->pc = 0x7F31CB7Cu;
    // 7F31CB7C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F31CB80:
    ctx->pc = 0x7F31CB80u;
    // 7F31CB80: bl      0x7F2E28A0
    {
            ctx->lr = 0x7F31CB84u;
            ctx->pc = 0x7F2E28A0u;
            return;
    }

label_7F31CB84:
    ctx->pc = 0x7F31CB84u;
    ctx->downcount -= 6;
    // 7F31CB84: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31CB88:
    ctx->pc = 0x7F31CB88u;
    // 7F31CB88: lwz     r31, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F31CB8C:
    ctx->pc = 0x7F31CB8Cu;
    // 7F31CB8C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31CB90:
    ctx->pc = 0x7F31CB90u;
    // 7F31CB90: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F31CB94:
    ctx->pc = 0x7F31CB94u;
    // 7F31CB94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31CB98:
    ctx->pc = 0x7F31CB98u;
    ctx->downcount -= 17;
    // 7F31CB98: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31CB9C:
    ctx->pc = 0x7F31CB9Cu;
    // 7F31CB9C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31CBA0:
    ctx->pc = 0x7F31CBA0u;
    // 7F31CBA0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31CBA4:
    ctx->pc = 0x7F31CBA4u;
    // 7F31CBA4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F31CBA8:
    ctx->pc = 0x7F31CBA8u;
    // 7F31CBA8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31CBAC:
    ctx->pc = 0x7F31CBACu;
    // 7F31CBAC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F31CBB0:
    ctx->pc = 0x7F31CBB0u;
    // 7F31CBB0: bl      0x7F191328
    {
            ctx->lr = 0x7F31CBB4u;
            ctx->pc = 0x7F191328u;
            return;
    }

label_7F31CBB4:
    ctx->pc = 0x7F31CBB4u;
    ctx->downcount -= 2;
    // 7F31CBB4: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F31CBB8:
    ctx->pc = 0x7F31CBB8u;
    // 7F31CBB8: bl      0x7F0208E4
    {
            ctx->lr = 0x7F31CBBCu;
            ctx->pc = 0x7F0208E4u;
            return;
    }

label_7F31CBBC:
    ctx->pc = 0x7F31CBBCu;
    ctx->downcount -= 3;
    // 7F31CBBC: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F31CBC0:
    ctx->pc = 0x7F31CBC0u;
    // 7F31CBC0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31CBC4:
    ctx->pc = 0x7F31CBC4u;
    // 7F31CBC4: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F31CBC8u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F31CBC8:
    ctx->pc = 0x7F31CBC8u;
    ctx->downcount -= 4;
    // 7F31CBC8: stw     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31CBCC:
    ctx->pc = 0x7F31CBCCu;
    // 7F31CBCC: li      r3, 109
    ctx->gpr[3] = (u32)(s32)(109);

label_7F31CBD0:
    ctx->pc = 0x7F31CBD0u;
    // 7F31CBD0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F31CBD4:
    ctx->pc = 0x7F31CBD4u;
    // 7F31CBD4: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F31CBD8u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F31CBD8:
    ctx->pc = 0x7F31CBD8u;
    ctx->downcount -= 3;
    // 7F31CBD8: stw     r3, 104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31CBDC:
    ctx->pc = 0x7F31CBDCu;
    // 7F31CBDC: li      r3, 98
    ctx->gpr[3] = (u32)(s32)(98);

label_7F31CBE0:
    ctx->pc = 0x7F31CBE0u;
    // 7F31CBE0: bl      0x7F3C664C
    {
            ctx->lr = 0x7F31CBE4u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F31CBE4:
    ctx->pc = 0x7F31CBE4u;
    ctx->downcount -= 2;
    // 7F31CBE4: cmplwi  r3, 0x0000
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

label_7F31CBE8:
    ctx->pc = 0x7F31CBE8u;
    // 7F31CBE8: bc    12, 2, 0x7F31CC00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31CC00;
        }
    }

label_7F31CBEC:
    ctx->pc = 0x7F31CBECu;
    ctx->downcount -= 1;
    // 7F31CBEC: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F31CBF0u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F31CBF0:
    ctx->pc = 0x7F31CBF0u;
    ctx->downcount -= 2;
    // 7F31CBF0: stw     r3, 108(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31CBF4:
    ctx->pc = 0x7F31CBF4u;
    // 7F31CBF4: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F31CBF8u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F31CBF8:
    ctx->pc = 0x7F31CBF8u;
    ctx->downcount -= 2;
    // 7F31CBF8: stw     r3, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31CBFC:
    ctx->pc = 0x7F31CBFCu;
    // 7F31CBFC: b       0x7F31CC0C
    {
            goto label_7F31CC0C;
    }

label_7F31CC00:
    ctx->pc = 0x7F31CC00u;
    ctx->downcount -= 3;
    // 7F31CC00: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F31CC04:
    ctx->pc = 0x7F31CC04u;
    // 7F31CC04: stw     r0, 108(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31CC08:
    ctx->pc = 0x7F31CC08u;
    // 7F31CC08: stw     r0, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31CC0C:
    ctx->pc = 0x7F31CC0Cu;
    ctx->downcount -= 2;
    // 7F31CC0C: li      r3, 116
    ctx->gpr[3] = (u32)(s32)(116);

label_7F31CC10:
    ctx->pc = 0x7F31CC10u;
    // 7F31CC10: bl      0x7F3C664C
    {
            ctx->lr = 0x7F31CC14u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F31CC14:
    ctx->pc = 0x7F31CC14u;
    ctx->downcount -= 2;
    // 7F31CC14: cmplwi  r3, 0x0000
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

label_7F31CC18:
    ctx->pc = 0x7F31CC18u;
    // 7F31CC18: bc    12, 2, 0x7F31CC54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31CC54;
        }
    }

label_7F31CC1C:
    ctx->pc = 0x7F31CC1Cu;
    ctx->downcount -= 1;
    // 7F31CC1C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F31CC20u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F31CC20:
    ctx->pc = 0x7F31CC20u;
    ctx->downcount -= 2;
    // 7F31CC20: stw     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31CC24:
    ctx->pc = 0x7F31CC24u;
    // 7F31CC24: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F31CC28u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F31CC28:
    ctx->pc = 0x7F31CC28u;
    ctx->downcount -= 4;
    // 7F31CC28: stw     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31CC2C:
    ctx->pc = 0x7F31CC2Cu;
    // 7F31CC2C: lwz     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31CC30:
    ctx->pc = 0x7F31CC30u;
    // 7F31CC30: lwz     r4, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31CC34:
    ctx->pc = 0x7F31CC34u;
    // 7F31CC34: bl      0x7F2FFA44
    {
            ctx->lr = 0x7F31CC38u;
            ctx->pc = 0x7F2FFA44u;
            return;
    }

label_7F31CC38:
    ctx->pc = 0x7F31CC38u;
    ctx->downcount -= 7;
    // 7F31CC38: stw     r3, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31CC3C:
    ctx->pc = 0x7F31CC3Cu;
    // 7F31CC3C: addi    r6, r31, 68
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(68);

label_7F31CC40:
    ctx->pc = 0x7F31CC40u;
    // 7F31CC40: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31CC44:
    ctx->pc = 0x7F31CC44u;
    // 7F31CC44: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_7F31CC48:
    ctx->pc = 0x7F31CC48u;
    // 7F31CC48: lwz     r3, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31CC4C:
    ctx->pc = 0x7F31CC4Cu;
    // 7F31CC4C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F31CC50:
    ctx->pc = 0x7F31CC50u;
    // 7F31CC50: bl      0x7F31C4B4
    {
            ctx->lr = 0x7F31CC54u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31C4B4u;
                return;
            }
            goto label_7F31C4B4;
    }

label_7F31CC54:
    ctx->pc = 0x7F31CC54u;
    ctx->downcount -= 6;
    // 7F31CC54: lis     r3, 147
    ctx->gpr[3] = ((u32)(s32)(147) << 16);

label_7F31CC58:
    ctx->pc = 0x7F31CC58u;
    // 7F31CC58: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F31CC5C:
    ctx->pc = 0x7F31CC5Cu;
    // 7F31CC5C: addi    r3, r3, -5115
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5115);

label_7F31CC60:
    ctx->pc = 0x7F31CC60u;
    // 7F31CC60: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F31CC64:
    ctx->pc = 0x7F31CC64u;
    // 7F31CC64: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F31CC68:
    ctx->pc = 0x7F31CC68u;
    // 7F31CC68: bl      0x7F2E4AE4
    {
            ctx->lr = 0x7F31CC6Cu;
            ctx->pc = 0x7F2E4AE4u;
            return;
    }

label_7F31CC6C:
    ctx->pc = 0x7F31CC6Cu;
    ctx->downcount -= 6;
    // 7F31CC6C: stw     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31CC70:
    ctx->pc = 0x7F31CC70u;
    // 7F31CC70: lis     r3, 32562
    ctx->gpr[3] = ((u32)(s32)(32562) << 16);

label_7F31CC74:
    ctx->pc = 0x7F31CC74u;
    // 7F31CC74: addi    r5, r3, -13724
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-13724);

label_7F31CC78:
    ctx->pc = 0x7F31CC78u;
    // 7F31CC78: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31CC7C:
    ctx->pc = 0x7F31CC7Cu;
    // 7F31CC7C: lwz     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31CC80:
    ctx->pc = 0x7F31CC80u;
    // 7F31CC80: bl      0x7F2E4B6C
    {
            ctx->lr = 0x7F31CC84u;
            ctx->pc = 0x7F2E4B6Cu;
            return;
    }

label_7F31CC84:
    ctx->pc = 0x7F31CC84u;
    ctx->downcount -= 2;
    // 7F31CC84: lwz     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31CC88:
    ctx->pc = 0x7F31CC88u;
    // 7F31CC88: bl      0x7F2E57F8
    {
            ctx->lr = 0x7F31CC8Cu;
            ctx->pc = 0x7F2E57F8u;
            return;
    }

label_7F31CC8C:
    ctx->pc = 0x7F31CC8Cu;
    ctx->downcount -= 3;
    // 7F31CC8C: lwz     r0, 108(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31CC90:
    ctx->pc = 0x7F31CC90u;
    // 7F31CC90: cmpwi   r0, -1
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

label_7F31CC94:
    ctx->pc = 0x7F31CC94u;
    // 7F31CC94: bc    12, 2, 0x7F31CCDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31CCDC;
        }
    }

label_7F31CC98:
    ctx->pc = 0x7F31CC98u;
    ctx->downcount -= 3;
    // 7F31CC98: lwz     r0, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31CC9C:
    ctx->pc = 0x7F31CC9Cu;
    // 7F31CC9C: cmpwi   r0, -1
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

label_7F31CCA0:
    ctx->pc = 0x7F31CCA0u;
    // 7F31CCA0: bc    12, 2, 0x7F31CCDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31CCDC;
        }
    }

label_7F31CCA4:
    ctx->pc = 0x7F31CCA4u;
    ctx->downcount -= 4;
    // 7F31CCA4: lis     r4, 254
    ctx->gpr[4] = ((u32)(s32)(254) << 16);

label_7F31CCA8:
    ctx->pc = 0x7F31CCA8u;
    // 7F31CCA8: lwz     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31CCAC:
    ctx->pc = 0x7F31CCACu;
    // 7F31CCAC: addi    r4, r4, -27263
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27263);

label_7F31CCB0:
    ctx->pc = 0x7F31CCB0u;
    // 7F31CCB0: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F31CCB4u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F31CCB4:
    ctx->pc = 0x7F31CCB4u;
    ctx->downcount -= 6;
    // 7F31CCB4: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31CCB8:
    ctx->pc = 0x7F31CCB8u;
    // 7F31CCB8: lwz     r3, 108(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(108);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31CCBC:
    ctx->pc = 0x7F31CCBCu;
    // 7F31CCBC: or   r30, r0, r0
    {
        ctx->gpr[30] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F31CCC0:
    ctx->pc = 0x7F31CCC0u;
    // 7F31CCC0: lwz     r4, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31CCC4:
    ctx->pc = 0x7F31CCC4u;
    // 7F31CCC4: addi    r5, r30, 36
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(36);

label_7F31CCC8:
    ctx->pc = 0x7F31CCC8u;
    // 7F31CCC8: bl      0x7F3B671C
    {
            ctx->lr = 0x7F31CCCCu;
            ctx->pc = 0x7F3B671Cu;
            return;
    }

label_7F31CCCC:
    ctx->pc = 0x7F31CCCCu;
    ctx->downcount -= 4;
    // 7F31CCCC: stw     r3, 128(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31CCD0:
    ctx->pc = 0x7F31CCD0u;
    // 7F31CCD0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F31CCD4:
    ctx->pc = 0x7F31CCD4u;
    // 7F31CCD4: addi    r4, r30, 36
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(36);

label_7F31CCD8:
    ctx->pc = 0x7F31CCD8u;
    // 7F31CCD8: bl      0x7F2E4010
    {
            ctx->lr = 0x7F31CCDCu;
            ctx->pc = 0x7F2E4010u;
            return;
    }

label_7F31CCDC:
    ctx->pc = 0x7F31CCDCu;
    ctx->downcount -= 3;
    // 7F31CCDC: lwz     r0, 104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31CCE0:
    ctx->pc = 0x7F31CCE0u;
    // 7F31CCE0: cmpwi   r0, 1
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

label_7F31CCE4:
    ctx->pc = 0x7F31CCE4u;
    // 7F31CCE4: bc    12, 2, 0x7F31CD30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31CD30;
        }
    }

label_7F31CCE8:
    ctx->pc = 0x7F31CCE8u;
    ctx->downcount -= 1;
    // 7F31CCE8: bc    4, 0, 0x7F31CCF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31CCF8;
        }
    }

label_7F31CCEC:
    ctx->pc = 0x7F31CCECu;
    ctx->downcount -= 2;
    // 7F31CCEC: cmpwi   r0, 0
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

label_7F31CCF0:
    ctx->pc = 0x7F31CCF0u;
    // 7F31CCF0: bc    4, 0, 0x7F31CD18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31CD18;
        }
    }

label_7F31CCF4:
    ctx->pc = 0x7F31CCF4u;
    ctx->downcount -= 1;
    // 7F31CCF4: b       0x7F31CD44
    {
            goto label_7F31CD44;
    }

label_7F31CCF8:
    ctx->pc = 0x7F31CCF8u;
    ctx->downcount -= 2;
    // 7F31CCF8: cmpwi   r0, 3
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

label_7F31CCFC:
    ctx->pc = 0x7F31CCFCu;
    // 7F31CCFC: bc    4, 0, 0x7F31CD44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31CD44;
        }
    }

label_7F31CD00:
    ctx->pc = 0x7F31CD00u;
    ctx->downcount -= 6;
    // 7F31CD00: lis     r3, 211
    ctx->gpr[3] = ((u32)(s32)(211) << 16);

label_7F31CD04:
    ctx->pc = 0x7F31CD04u;
    // 7F31CD04: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F31CD08:
    ctx->pc = 0x7F31CD08u;
    // 7F31CD08: addi    r3, r3, -27546
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27546);

label_7F31CD0C:
    ctx->pc = 0x7F31CD0Cu;
    // 7F31CD0C: stw     r3, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31CD10:
    ctx->pc = 0x7F31CD10u;
    // 7F31CD10: stw     r0, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31CD14:
    ctx->pc = 0x7F31CD14u;
    // 7F31CD14: b       0x7F31CD44
    {
            goto label_7F31CD44;
    }

label_7F31CD18:
    ctx->pc = 0x7F31CD18u;
    ctx->downcount -= 6;
    // 7F31CD18: lis     r3, 121
    ctx->gpr[3] = ((u32)(s32)(121) << 16);

label_7F31CD1C:
    ctx->pc = 0x7F31CD1Cu;
    // 7F31CD1C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F31CD20:
    ctx->pc = 0x7F31CD20u;
    // 7F31CD20: addi    r3, r3, 1602
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1602);

label_7F31CD24:
    ctx->pc = 0x7F31CD24u;
    // 7F31CD24: stw     r3, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31CD28:
    ctx->pc = 0x7F31CD28u;
    // 7F31CD28: stw     r0, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31CD2C:
    ctx->pc = 0x7F31CD2Cu;
    // 7F31CD2C: b       0x7F31CD44
    {
            goto label_7F31CD44;
    }

label_7F31CD30:
    ctx->pc = 0x7F31CD30u;
    ctx->downcount -= 5;
    // 7F31CD30: lis     r3, 57
    ctx->gpr[3] = ((u32)(s32)(57) << 16);

label_7F31CD34:
    ctx->pc = 0x7F31CD34u;
    // 7F31CD34: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31CD38:
    ctx->pc = 0x7F31CD38u;
    // 7F31CD38: addi    r3, r3, 19726
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(19726);

label_7F31CD3C:
    ctx->pc = 0x7F31CD3Cu;
    // 7F31CD3C: stw     r3, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31CD40:
    ctx->pc = 0x7F31CD40u;
    // 7F31CD40: stw     r0, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31CD44:
    ctx->pc = 0x7F31CD44u;
    ctx->downcount -= 18;
    // 7F31CD44: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F31CD48:
    ctx->pc = 0x7F31CD48u;
    // 7F31CD48: stw     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31CD4C:
    ctx->pc = 0x7F31CD4Cu;
    // 7F31CD4C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F31CD50:
    ctx->pc = 0x7F31CD50u;
    // 7F31CD50: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31CD54:
    ctx->pc = 0x7F31CD54u;
    // 7F31CD54: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31CD58:
    ctx->pc = 0x7F31CD58u;
    // 7F31CD58: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F31CD5C:
    ctx->pc = 0x7F31CD5Cu;
    // 7F31CD5C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31CD60:
    ctx->pc = 0x7F31CD60u;
    ctx->downcount -= 20;
    // 7F31CD60: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31CD64:
    ctx->pc = 0x7F31CD64u;
    // 7F31CD64: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31CD68:
    ctx->pc = 0x7F31CD68u;
    // 7F31CD68: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F31CD6C:
    ctx->pc = 0x7F31CD6Cu;
    // 7F31CD6C: li      r5, 292
    ctx->gpr[5] = (u32)(s32)(292);

label_7F31CD70:
    ctx->pc = 0x7F31CD70u;
    // 7F31CD70: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31CD74:
    ctx->pc = 0x7F31CD74u;
    // 7F31CD74: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F31CD78:
    ctx->pc = 0x7F31CD78u;
    // 7F31CD78: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F31CD7C:
    ctx->pc = 0x7F31CD7Cu;
    // 7F31CD7C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31CD80:
    ctx->pc = 0x7F31CD80u;
    // 7F31CD80: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F31CD84:
    ctx->pc = 0x7F31CD84u;
    // 7F31CD84: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F31CD88u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F31CD88:
    ctx->pc = 0x7F31CD88u;
    ctx->downcount -= 2;
    // 7F31CD88: or.   r31, r3, r3
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

label_7F31CD8C:
    ctx->pc = 0x7F31CD8Cu;
    // 7F31CD8C: bc    12, 2, 0x7F31CE24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31CE24;
        }
    }

label_7F31CD90:
    ctx->pc = 0x7F31CD90u;
    ctx->downcount -= 6;
    // 7F31CD90: lis     r4, 32562
    ctx->gpr[4] = ((u32)(s32)(32562) << 16);

label_7F31CD94:
    ctx->pc = 0x7F31CD94u;
    // 7F31CD94: lis     r5, 32562
    ctx->gpr[5] = ((u32)(s32)(32562) << 16);

label_7F31CD98:
    ctx->pc = 0x7F31CD98u;
    // 7F31CD98: stw     r30, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F31CD9C:
    ctx->pc = 0x7F31CD9Cu;
    // 7F31CD9C: addi    r4, r4, -13980
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13980);

label_7F31CDA0:
    ctx->pc = 0x7F31CDA0u;
    // 7F31CDA0: addi    r5, r5, -13812
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13812);

label_7F31CDA4:
    ctx->pc = 0x7F31CDA4u;
    // 7F31CDA4: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F31CDA8u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F31CDA8:
    ctx->pc = 0x7F31CDA8u;
    ctx->downcount -= 13;
    // 7F31CDA8: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31CDAC:
    ctx->pc = 0x7F31CDACu;
    // 7F31CDAC: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F31CDB0:
    ctx->pc = 0x7F31CDB0u;
    // 7F31CDB0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F31CDB4:
    ctx->pc = 0x7F31CDB4u;
    // 7F31CDB4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31CDB8:
    ctx->pc = 0x7F31CDB8u;
    // 7F31CDB8: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F31CDBC:
    ctx->pc = 0x7F31CDBCu;
    // 7F31CDBC: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F31CDC0:
    ctx->pc = 0x7F31CDC0u;
    // 7F31CDC0: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F31CDC4:
    ctx->pc = 0x7F31CDC4u;
    // 7F31CDC4: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F31CDC8:
    ctx->pc = 0x7F31CDC8u;
    // 7F31CDC8: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F31CDCC:
    ctx->pc = 0x7F31CDCCu;
    // 7F31CDCC: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F31CDD0:
    ctx->pc = 0x7F31CDD0u;
    // 7F31CDD0: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F31CDD4:
    ctx->pc = 0x7F31CDD4u;
    // 7F31CDD4: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31CDD8:
    ctx->pc = 0x7F31CDD8u;
    // 7F31CDD8: bl      0x7F3C89DC
    {
            ctx->lr = 0x7F31CDDCu;
            ctx->pc = 0x7F3C89DCu;
            return;
    }

label_7F31CDDC:
    ctx->pc = 0x7F31CDDCu;
    ctx->downcount -= 2;
    // 7F31CDDC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31CDE0:
    ctx->pc = 0x7F31CDE0u;
    // 7F31CDE0: bl      0x7F31CB98
    {
            ctx->lr = 0x7F31CDE4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31CB98u;
                return;
            }
            goto label_7F31CB98;
    }

label_7F31CDE4:
    ctx->pc = 0x7F31CDE4u;
    ctx->downcount -= 5;
    // 7F31CDE4: li      r3, 768
    ctx->gpr[3] = (u32)(s32)(768);

label_7F31CDE8:
    ctx->pc = 0x7F31CDE8u;
    // 7F31CDE8: li      r4, 512
    ctx->gpr[4] = (u32)(s32)(512);

label_7F31CDEC:
    ctx->pc = 0x7F31CDECu;
    // 7F31CDEC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F31CDF0:
    ctx->pc = 0x7F31CDF0u;
    // 7F31CDF0: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_7F31CDF4:
    ctx->pc = 0x7F31CDF4u;
    // 7F31CDF4: bl      0x7F19CDDC
    {
            ctx->lr = 0x7F31CDF8u;
            ctx->pc = 0x7F19CDDCu;
            return;
    }

label_7F31CDF8:
    ctx->pc = 0x7F31CDF8u;
    ctx->downcount -= 3;
    // 7F31CDF8: cmplwi  r3, 0x0000
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

label_7F31CDFC:
    ctx->pc = 0x7F31CDFCu;
    // 7F31CDFC: stw     r3, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31CE00:
    ctx->pc = 0x7F31CE00u;
    // 7F31CE00: bc    4, 2, 0x7F31CE14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31CE14;
        }
    }

label_7F31CE04:
    ctx->pc = 0x7F31CE04u;
    ctx->downcount -= 2;
    // 7F31CE04: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31CE08:
    ctx->pc = 0x7F31CE08u;
    // 7F31CE08: bl      0x7F3C8210
    {
            ctx->lr = 0x7F31CE0Cu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F31CE0C:
    ctx->pc = 0x7F31CE0Cu;
    ctx->downcount -= 2;
    // 7F31CE0C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31CE10:
    ctx->pc = 0x7F31CE10u;
    // 7F31CE10: b       0x7F31CE28
    {
            goto label_7F31CE28;
    }

label_7F31CE14:
    ctx->pc = 0x7F31CE14u;
    ctx->downcount -= 4;
    // 7F31CE14: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F31CE18:
    ctx->pc = 0x7F31CE18u;
    // 7F31CE18: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31CE1C:
    ctx->pc = 0x7F31CE1Cu;
    // 7F31CE1C: stw     r0, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31CE20:
    ctx->pc = 0x7F31CE20u;
    // 7F31CE20: bl      0x7F31C594
    {
            ctx->lr = 0x7F31CE24u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31C594u;
                return;
            }
            goto label_7F31C594;
    }

label_7F31CE24:
    ctx->pc = 0x7F31CE24u;
    ctx->downcount -= 1;
    // 7F31CE24: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31CE28:
    ctx->pc = 0x7F31CE28u;
    ctx->downcount -= 16;
    // 7F31CE28: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F31CE2C:
    ctx->pc = 0x7F31CE2Cu;
    // 7F31CE2C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31CE30:
    ctx->pc = 0x7F31CE30u;
    // 7F31CE30: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31CE34:
    ctx->pc = 0x7F31CE34u;
    // 7F31CE34: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F31CE38:
    ctx->pc = 0x7F31CE38u;
    // 7F31CE38: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31CE3C:
    ctx->pc = 0x7F31CE3Cu;
    ctx->downcount -= 27;
    // 7F31CE3C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31CE40:
    ctx->pc = 0x7F31CE40u;
    // 7F31CE40: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31CE44:
    ctx->pc = 0x7F31CE44u;
    // 7F31CE44: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31CE48:
    ctx->pc = 0x7F31CE48u;
    // 7F31CE48: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F31CE4C:
    ctx->pc = 0x7F31CE4Cu;
    // 7F31CE4C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31CE50:
    ctx->pc = 0x7F31CE50u;
    // 7F31CE50: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31CE54:
    ctx->pc = 0x7F31CE54u;
    // 7F31CE54: addis   r5, r31, 1
    ctx->gpr[5] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F31CE58:
    ctx->pc = 0x7F31CE58u;
    // 7F31CE58: lfs     f0, -29192(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31CE58u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29192);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31CE5C:
    ctx->pc = 0x7F31CE5Cu;
    // 7F31CE5C: lwz     r3, 14296(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(14296);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31CE60:
    ctx->pc = 0x7F31CE60u;
    // 7F31CE60: stfs     f0, 132(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31CE60u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(132);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F31CE64:
    ctx->pc = 0x7F31CE64u;
    // 7F31CE64: lwz     r4, 14292(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(14292);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31CE68:
    ctx->pc = 0x7F31CE68u;
    // 7F31CE68: lwz     r3, 14296(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(14296);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31CE6C:
    ctx->pc = 0x7F31CE6Cu;
    // 7F31CE6C: lbz     r0, 143(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(143);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31CE70:
    ctx->pc = 0x7F31CE70u;
    // 7F31CE70: stb     r0, 143(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(143);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F31CE74:
    ctx->pc = 0x7F31CE74u;
    // 7F31CE74: lbz     r0, 14300(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(14300);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31CE78:
    ctx->pc = 0x7F31CE78u;
    // 7F31CE78: cmplwi  r0, 0x0000
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

label_7F31CE7C:
    ctx->pc = 0x7F31CE7Cu;
    // 7F31CE7C: bc    4, 2, 0x7F31CE94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31CE94;
        }
    }

label_7F31CE80:
    ctx->pc = 0x7F31CE80u;
    ctx->downcount -= 5;
    // 7F31CE80: lwz     r3, 14296(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(14296);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31CE84:
    ctx->pc = 0x7F31CE84u;
    // 7F31CE84: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31CE88:
    ctx->pc = 0x7F31CE88u;
    // 7F31CE88: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F31CE8C:
    ctx->pc = 0x7F31CE8Cu;
    // 7F31CE8C: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31CE90:
    ctx->pc = 0x7F31CE90u;
    // 7F31CE90: b       0x7F31CEA8
    {
            goto label_7F31CEA8;
    }

label_7F31CE94:
    ctx->pc = 0x7F31CE94u;
    ctx->downcount -= 1;
    // 7F31CE94: bc    12, 2, 0x7F31CEA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31CEA8;
        }
    }

label_7F31CE98:
    ctx->pc = 0x7F31CE98u;
    ctx->downcount -= 4;
    // 7F31CE98: lwz     r3, 14296(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(14296);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31CE9C:
    ctx->pc = 0x7F31CE9Cu;
    // 7F31CE9C: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31CEA0:
    ctx->pc = 0x7F31CEA0u;
    // 7F31CEA0: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_7F31CEA4:
    ctx->pc = 0x7F31CEA4u;
    // 7F31CEA4: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31CEA8:
    ctx->pc = 0x7F31CEA8u;
    ctx->downcount -= 4;
    // 7F31CEA8: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F31CEAC:
    ctx->pc = 0x7F31CEACu;
    // 7F31CEAC: lwz     r0, 14308(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14308);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31CEB0:
    ctx->pc = 0x7F31CEB0u;
    // 7F31CEB0: cmpwi   r0, 0
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

label_7F31CEB4:
    ctx->pc = 0x7F31CEB4u;
    // 7F31CEB4: bc    4, 2, 0x7F31CF14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31CF14;
        }
    }

label_7F31CEB8:
    ctx->pc = 0x7F31CEB8u;
    ctx->downcount -= 23;
    // 7F31CEB8: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F31CEBC:
    ctx->pc = 0x7F31CEBCu;
    // 7F31CEBC: lwz     r4, 14296(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14296);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31CEC0:
    ctx->pc = 0x7F31CEC0u;
    // 7F31CEC0: lfs     f0, -29188(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F31CEC0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-29188);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31CEC4:
    ctx->pc = 0x7F31CEC4u;
    // 7F31CEC4: stfs     f0, 136(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F31CEC4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(136);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F31CEC8:
    ctx->pc = 0x7F31CEC8u;
    // 7F31CEC8: lwz     r4, 14292(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14292);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31CECC:
    ctx->pc = 0x7F31CECCu;
    // 7F31CECC: lbz     r0, 143(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(143);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31CED0:
    ctx->pc = 0x7F31CED0u;
    // 7F31CED0: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_7F31CED4:
    ctx->pc = 0x7F31CED4u;
    // 7F31CED4: oris    r0, r0, 0x008C
    ctx->gpr[0] = ctx->gpr[0] | (0x008Cu << 16);

label_7F31CED8:
    ctx->pc = 0x7F31CED8u;
    // 7F31CED8: ori     r0, r0, 0x8C8C
    ctx->gpr[0] = ctx->gpr[0] | 0x8C8Cu;

label_7F31CEDC:
    ctx->pc = 0x7F31CEDCu;
    // 7F31CEDC: stw     r0, 14340(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14340);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31CEE0:
    ctx->pc = 0x7F31CEE0u;
    // 7F31CEE0: lwz     r4, 14292(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14292);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31CEE4:
    ctx->pc = 0x7F31CEE4u;
    // 7F31CEE4: lbz     r0, 143(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(143);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31CEE8:
    ctx->pc = 0x7F31CEE8u;
    // 7F31CEE8: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_7F31CEEC:
    ctx->pc = 0x7F31CEECu;
    // 7F31CEEC: oris    r0, r0, 0x0032
    ctx->gpr[0] = ctx->gpr[0] | (0x0032u << 16);

label_7F31CEF0:
    ctx->pc = 0x7F31CEF0u;
    // 7F31CEF0: ori     r0, r0, 0x3232
    ctx->gpr[0] = ctx->gpr[0] | 0x3232u;

label_7F31CEF4:
    ctx->pc = 0x7F31CEF4u;
    // 7F31CEF4: stw     r0, 14344(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14344);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31CEF8:
    ctx->pc = 0x7F31CEF8u;
    // 7F31CEF8: lwz     r4, 14292(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14292);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31CEFC:
    ctx->pc = 0x7F31CEFCu;
    // 7F31CEFC: lbz     r0, 143(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(143);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31CF00:
    ctx->pc = 0x7F31CF00u;
    // 7F31CF00: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_7F31CF04:
    ctx->pc = 0x7F31CF04u;
    // 7F31CF04: oris    r0, r0, 0x0032
    ctx->gpr[0] = ctx->gpr[0] | (0x0032u << 16);

label_7F31CF08:
    ctx->pc = 0x7F31CF08u;
    // 7F31CF08: ori     r0, r0, 0x3232
    ctx->gpr[0] = ctx->gpr[0] | 0x3232u;

label_7F31CF0C:
    ctx->pc = 0x7F31CF0Cu;
    // 7F31CF0C: stw     r0, 14348(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14348);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31CF10:
    ctx->pc = 0x7F31CF10u;
    // 7F31CF10: b       0x7F31CFD8
    {
            goto label_7F31CFD8;
    }

label_7F31CF14:
    ctx->pc = 0x7F31CF14u;
    ctx->downcount -= 2;
    // 7F31CF14: cmpwi   r0, 1
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

label_7F31CF18:
    ctx->pc = 0x7F31CF18u;
    // 7F31CF18: bc    4, 2, 0x7F31CF78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31CF78;
        }
    }

label_7F31CF1C:
    ctx->pc = 0x7F31CF1Cu;
    ctx->downcount -= 23;
    // 7F31CF1C: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F31CF20:
    ctx->pc = 0x7F31CF20u;
    // 7F31CF20: lwz     r4, 14296(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14296);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31CF24:
    ctx->pc = 0x7F31CF24u;
    // 7F31CF24: lfs     f0, -29184(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F31CF24u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-29184);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31CF28:
    ctx->pc = 0x7F31CF28u;
    // 7F31CF28: stfs     f0, 136(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F31CF28u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(136);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F31CF2C:
    ctx->pc = 0x7F31CF2Cu;
    // 7F31CF2C: lwz     r4, 14292(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14292);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31CF30:
    ctx->pc = 0x7F31CF30u;
    // 7F31CF30: lbz     r0, 143(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(143);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31CF34:
    ctx->pc = 0x7F31CF34u;
    // 7F31CF34: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_7F31CF38:
    ctx->pc = 0x7F31CF38u;
    // 7F31CF38: oris    r0, r0, 0x0032
    ctx->gpr[0] = ctx->gpr[0] | (0x0032u << 16);

label_7F31CF3C:
    ctx->pc = 0x7F31CF3Cu;
    // 7F31CF3C: ori     r0, r0, 0x3232
    ctx->gpr[0] = ctx->gpr[0] | 0x3232u;

label_7F31CF40:
    ctx->pc = 0x7F31CF40u;
    // 7F31CF40: stw     r0, 14340(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14340);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31CF44:
    ctx->pc = 0x7F31CF44u;
    // 7F31CF44: lwz     r4, 14292(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14292);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31CF48:
    ctx->pc = 0x7F31CF48u;
    // 7F31CF48: lbz     r0, 143(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(143);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31CF4C:
    ctx->pc = 0x7F31CF4Cu;
    // 7F31CF4C: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_7F31CF50:
    ctx->pc = 0x7F31CF50u;
    // 7F31CF50: oris    r0, r0, 0x008C
    ctx->gpr[0] = ctx->gpr[0] | (0x008Cu << 16);

label_7F31CF54:
    ctx->pc = 0x7F31CF54u;
    // 7F31CF54: ori     r0, r0, 0x8C8C
    ctx->gpr[0] = ctx->gpr[0] | 0x8C8Cu;

label_7F31CF58:
    ctx->pc = 0x7F31CF58u;
    // 7F31CF58: stw     r0, 14344(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14344);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31CF5C:
    ctx->pc = 0x7F31CF5Cu;
    // 7F31CF5C: lwz     r4, 14292(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14292);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31CF60:
    ctx->pc = 0x7F31CF60u;
    // 7F31CF60: lbz     r0, 143(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(143);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31CF64:
    ctx->pc = 0x7F31CF64u;
    // 7F31CF64: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_7F31CF68:
    ctx->pc = 0x7F31CF68u;
    // 7F31CF68: oris    r0, r0, 0x0032
    ctx->gpr[0] = ctx->gpr[0] | (0x0032u << 16);

label_7F31CF6C:
    ctx->pc = 0x7F31CF6Cu;
    // 7F31CF6C: ori     r0, r0, 0x3232
    ctx->gpr[0] = ctx->gpr[0] | 0x3232u;

label_7F31CF70:
    ctx->pc = 0x7F31CF70u;
    // 7F31CF70: stw     r0, 14348(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14348);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31CF74:
    ctx->pc = 0x7F31CF74u;
    // 7F31CF74: b       0x7F31CFD8
    {
            goto label_7F31CFD8;
    }

label_7F31CF78:
    ctx->pc = 0x7F31CF78u;
    ctx->downcount -= 2;
    // 7F31CF78: cmpwi   r0, 2
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

label_7F31CF7C:
    ctx->pc = 0x7F31CF7Cu;
    // 7F31CF7C: bc    4, 2, 0x7F31CFD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31CFD8;
        }
    }

label_7F31CF80:
    ctx->pc = 0x7F31CF80u;
    ctx->downcount -= 22;
    // 7F31CF80: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F31CF84:
    ctx->pc = 0x7F31CF84u;
    // 7F31CF84: lwz     r4, 14296(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14296);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31CF88:
    ctx->pc = 0x7F31CF88u;
    // 7F31CF88: lfs     f0, -29180(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F31CF88u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-29180);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31CF8C:
    ctx->pc = 0x7F31CF8Cu;
    // 7F31CF8C: stfs     f0, 136(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F31CF8Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(136);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F31CF90:
    ctx->pc = 0x7F31CF90u;
    // 7F31CF90: lwz     r4, 14292(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14292);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31CF94:
    ctx->pc = 0x7F31CF94u;
    // 7F31CF94: lbz     r0, 143(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(143);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31CF98:
    ctx->pc = 0x7F31CF98u;
    // 7F31CF98: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_7F31CF9C:
    ctx->pc = 0x7F31CF9Cu;
    // 7F31CF9C: oris    r0, r0, 0x0032
    ctx->gpr[0] = ctx->gpr[0] | (0x0032u << 16);

label_7F31CFA0:
    ctx->pc = 0x7F31CFA0u;
    // 7F31CFA0: ori     r0, r0, 0x3232
    ctx->gpr[0] = ctx->gpr[0] | 0x3232u;

label_7F31CFA4:
    ctx->pc = 0x7F31CFA4u;
    // 7F31CFA4: stw     r0, 14340(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14340);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31CFA8:
    ctx->pc = 0x7F31CFA8u;
    // 7F31CFA8: lwz     r4, 14292(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14292);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31CFAC:
    ctx->pc = 0x7F31CFACu;
    // 7F31CFAC: lbz     r0, 143(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(143);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31CFB0:
    ctx->pc = 0x7F31CFB0u;
    // 7F31CFB0: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_7F31CFB4:
    ctx->pc = 0x7F31CFB4u;
    // 7F31CFB4: oris    r0, r0, 0x0032
    ctx->gpr[0] = ctx->gpr[0] | (0x0032u << 16);

label_7F31CFB8:
    ctx->pc = 0x7F31CFB8u;
    // 7F31CFB8: ori     r0, r0, 0x3232
    ctx->gpr[0] = ctx->gpr[0] | 0x3232u;

label_7F31CFBC:
    ctx->pc = 0x7F31CFBCu;
    // 7F31CFBC: stw     r0, 14344(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14344);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31CFC0:
    ctx->pc = 0x7F31CFC0u;
    // 7F31CFC0: lwz     r4, 14292(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14292);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31CFC4:
    ctx->pc = 0x7F31CFC4u;
    // 7F31CFC4: lbz     r0, 143(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(143);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31CFC8:
    ctx->pc = 0x7F31CFC8u;
    // 7F31CFC8: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_7F31CFCC:
    ctx->pc = 0x7F31CFCCu;
    // 7F31CFCC: oris    r0, r0, 0x008C
    ctx->gpr[0] = ctx->gpr[0] | (0x008Cu << 16);

label_7F31CFD0:
    ctx->pc = 0x7F31CFD0u;
    // 7F31CFD0: ori     r0, r0, 0x8C8C
    ctx->gpr[0] = ctx->gpr[0] | 0x8C8Cu;

label_7F31CFD4:
    ctx->pc = 0x7F31CFD4u;
    // 7F31CFD4: stw     r0, 14348(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14348);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31CFD8:
    ctx->pc = 0x7F31CFD8u;
    ctx->downcount -= 4;
    // 7F31CFD8: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_7F31CFDC:
    ctx->pc = 0x7F31CFDCu;
    // 7F31CFDC: lbz     r0, -32744(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32744);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31CFE0:
    ctx->pc = 0x7F31CFE0u;
    // 7F31CFE0: cmpwi   r0, 6
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

label_7F31CFE4:
    ctx->pc = 0x7F31CFE4u;
    // 7F31CFE4: bc    12, 2, 0x7F31D014
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D014;
        }
    }

label_7F31CFE8:
    ctx->pc = 0x7F31CFE8u;
    ctx->downcount -= 1;
    // 7F31CFE8: bc    4, 0, 0x7F31CFF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31CFF8;
        }
    }

label_7F31CFEC:
    ctx->pc = 0x7F31CFECu;
    ctx->downcount -= 2;
    // 7F31CFEC: cmpwi   r0, 1
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

label_7F31CFF0:
    ctx->pc = 0x7F31CFF0u;
    // 7F31CFF0: bc    4, 0, 0x7F31D004
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31D004;
        }
    }

label_7F31CFF4:
    ctx->pc = 0x7F31CFF4u;
    ctx->downcount -= 1;
    // 7F31CFF4: b       0x7F31D014
    {
            goto label_7F31D014;
    }

label_7F31CFF8:
    ctx->pc = 0x7F31CFF8u;
    ctx->downcount -= 2;
    // 7F31CFF8: cmpwi   r0, 8
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

label_7F31CFFC:
    ctx->pc = 0x7F31CFFCu;
    // 7F31CFFC: bc    4, 0, 0x7F31D014
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31D014;
        }
    }

label_7F31D000:
    ctx->pc = 0x7F31D000u;
    ctx->downcount -= 1;
    // 7F31D000: b       0x7F31D00C
    {
            goto label_7F31D00C;
    }

label_7F31D004:
    ctx->pc = 0x7F31D004u;
    ctx->downcount -= 2;
    // 7F31D004: li      r4, 210
    ctx->gpr[4] = (u32)(s32)(210);

label_7F31D008:
    ctx->pc = 0x7F31D008u;
    // 7F31D008: b       0x7F31D018
    {
            goto label_7F31D018;
    }

label_7F31D00C:
    ctx->pc = 0x7F31D00Cu;
    ctx->downcount -= 2;
    // 7F31D00C: li      r4, 230
    ctx->gpr[4] = (u32)(s32)(230);

label_7F31D010:
    ctx->pc = 0x7F31D010u;
    // 7F31D010: b       0x7F31D018
    {
            goto label_7F31D018;
    }

label_7F31D014:
    ctx->pc = 0x7F31D014u;
    ctx->downcount -= 1;
    // 7F31D014: li      r4, 210
    ctx->gpr[4] = (u32)(s32)(210);

label_7F31D018:
    ctx->pc = 0x7F31D018u;
    ctx->downcount -= 15;
    // 7F31D018: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31D01C:
    ctx->pc = 0x7F31D01Cu;
    // 7F31D01C: addis   r11, r31, 1
    ctx->gpr[11] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F31D020:
    ctx->pc = 0x7F31D020u;
    // 7F31D020: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D024:
    ctx->pc = 0x7F31D024u;
    // 7F31D024: li      r5, 45
    ctx->gpr[5] = (u32)(s32)(45);

label_7F31D028:
    ctx->pc = 0x7F31D028u;
    // 7F31D028: li      r6, 480
    ctx->gpr[6] = (u32)(s32)(480);

label_7F31D02C:
    ctx->pc = 0x7F31D02Cu;
    // 7F31D02C: li      r7, 300
    ctx->gpr[7] = (u32)(s32)(300);

label_7F31D030:
    ctx->pc = 0x7F31D030u;
    // 7F31D030: lwz     r3, 14292(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(14292);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31D034:
    ctx->pc = 0x7F31D034u;
    // 7F31D034: li      r8, 720
    ctx->gpr[8] = (u32)(s32)(720);

label_7F31D038:
    ctx->pc = 0x7F31D038u;
    // 7F31D038: li      r9, 300
    ctx->gpr[9] = (u32)(s32)(300);

label_7F31D03C:
    ctx->pc = 0x7F31D03Cu;
    // 7F31D03C: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F31D040:
    ctx->pc = 0x7F31D040u;
    // 7F31D040: lbz     r0, 143(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(143);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31D044:
    ctx->pc = 0x7F31D044u;
    // 7F31D044: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_7F31D048:
    ctx->pc = 0x7F31D048u;
    // 7F31D048: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D04C:
    ctx->pc = 0x7F31D04Cu;
    // 7F31D04C: lwz     r3, 14288(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(14288);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31D050:
    ctx->pc = 0x7F31D050u;
    // 7F31D050: bl      0x7F314524
    {
            ctx->lr = 0x7F31D054u;
            ctx->pc = 0x7F314524u;
            return;
    }

label_7F31D054:
    ctx->pc = 0x7F31D054u;
    ctx->downcount -= 4;
    // 7F31D054: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F31D058:
    ctx->pc = 0x7F31D058u;
    // 7F31D058: lwz     r0, 14304(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14304);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31D05C:
    ctx->pc = 0x7F31D05Cu;
    // 7F31D05C: cmpwi   r0, 2
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

label_7F31D060:
    ctx->pc = 0x7F31D060u;
    // 7F31D060: bc    12, 2, 0x7F31D068
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D068;
        }
    }

label_7F31D064:
    ctx->pc = 0x7F31D064u;
    ctx->downcount -= 1;
    // 7F31D064: b       0x7F31D070
    {
            goto label_7F31D070;
    }

label_7F31D068:
    ctx->pc = 0x7F31D068u;
    ctx->downcount -= 2;
    // 7F31D068: li      r7, 250
    ctx->gpr[7] = (u32)(s32)(250);

label_7F31D06C:
    ctx->pc = 0x7F31D06Cu;
    // 7F31D06C: b       0x7F31D074
    {
            goto label_7F31D074;
    }

label_7F31D070:
    ctx->pc = 0x7F31D070u;
    ctx->downcount -= 1;
    // 7F31D070: li      r7, 300
    ctx->gpr[7] = (u32)(s32)(300);

label_7F31D074:
    ctx->pc = 0x7F31D074u;
    ctx->downcount -= 2;
    // 7F31D074: cmpwi   r0, 5
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

label_7F31D078:
    ctx->pc = 0x7F31D078u;
    // 7F31D078: bc    12, 2, 0x7F31D08C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D08C;
        }
    }

label_7F31D07C:
    ctx->pc = 0x7F31D07Cu;
    ctx->downcount -= 1;
    // 7F31D07C: bc    4, 0, 0x7F31D0C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31D0C4;
        }
    }

label_7F31D080:
    ctx->pc = 0x7F31D080u;
    ctx->downcount -= 2;
    // 7F31D080: cmpwi   r0, 2
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

label_7F31D084:
    ctx->pc = 0x7F31D084u;
    // 7F31D084: bc    12, 2, 0x7F31D08C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D08C;
        }
    }

label_7F31D088:
    ctx->pc = 0x7F31D088u;
    ctx->downcount -= 1;
    // 7F31D088: b       0x7F31D0C4
    {
            goto label_7F31D0C4;
    }

label_7F31D08C:
    ctx->pc = 0x7F31D08Cu;
    ctx->downcount -= 4;
    // 7F31D08C: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_7F31D090:
    ctx->pc = 0x7F31D090u;
    // 7F31D090: lbz     r0, -32744(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32744);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31D094:
    ctx->pc = 0x7F31D094u;
    // 7F31D094: cmpwi   r0, 5
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

label_7F31D098:
    ctx->pc = 0x7F31D098u;
    // 7F31D098: bc    12, 2, 0x7F31D0AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D0AC;
        }
    }

label_7F31D09C:
    ctx->pc = 0x7F31D09Cu;
    ctx->downcount -= 1;
    // 7F31D09C: bc    4, 0, 0x7F31D0BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31D0BC;
        }
    }

label_7F31D0A0:
    ctx->pc = 0x7F31D0A0u;
    ctx->downcount -= 2;
    // 7F31D0A0: cmpwi   r0, 2
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

label_7F31D0A4:
    ctx->pc = 0x7F31D0A4u;
    // 7F31D0A4: bc    4, 0, 0x7F31D0B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31D0B4;
        }
    }

label_7F31D0A8:
    ctx->pc = 0x7F31D0A8u;
    ctx->downcount -= 1;
    // 7F31D0A8: b       0x7F31D0BC
    {
            goto label_7F31D0BC;
    }

label_7F31D0AC:
    ctx->pc = 0x7F31D0ACu;
    ctx->downcount -= 2;
    // 7F31D0AC: li      r30, 384
    ctx->gpr[30] = (u32)(s32)(384);

label_7F31D0B0:
    ctx->pc = 0x7F31D0B0u;
    // 7F31D0B0: b       0x7F31D0C8
    {
            goto label_7F31D0C8;
    }

label_7F31D0B4:
    ctx->pc = 0x7F31D0B4u;
    ctx->downcount -= 2;
    // 7F31D0B4: li      r30, 400
    ctx->gpr[30] = (u32)(s32)(400);

label_7F31D0B8:
    ctx->pc = 0x7F31D0B8u;
    // 7F31D0B8: b       0x7F31D0C8
    {
            goto label_7F31D0C8;
    }

label_7F31D0BC:
    ctx->pc = 0x7F31D0BCu;
    ctx->downcount -= 2;
    // 7F31D0BC: li      r30, 480
    ctx->gpr[30] = (u32)(s32)(480);

label_7F31D0C0:
    ctx->pc = 0x7F31D0C0u;
    // 7F31D0C0: b       0x7F31D0C8
    {
            goto label_7F31D0C8;
    }

label_7F31D0C4:
    ctx->pc = 0x7F31D0C4u;
    ctx->downcount -= 1;
    // 7F31D0C4: li      r30, 480
    ctx->gpr[30] = (u32)(s32)(480);

label_7F31D0C8:
    ctx->pc = 0x7F31D0C8u;
    ctx->downcount -= 17;
    // 7F31D0C8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31D0CC:
    ctx->pc = 0x7F31D0CCu;
    // 7F31D0CC: addis   r11, r31, 1
    ctx->gpr[11] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F31D0D0:
    ctx->pc = 0x7F31D0D0u;
    // 7F31D0D0: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D0D4:
    ctx->pc = 0x7F31D0D4u;
    // 7F31D0D4: li      r4, 90
    ctx->gpr[4] = (u32)(s32)(90);

label_7F31D0D8:
    ctx->pc = 0x7F31D0D8u;
    // 7F31D0D8: li      r5, 85
    ctx->gpr[5] = (u32)(s32)(85);

label_7F31D0DC:
    ctx->pc = 0x7F31D0DCu;
    // 7F31D0DC: li      r6, 480
    ctx->gpr[6] = (u32)(s32)(480);

label_7F31D0E0:
    ctx->pc = 0x7F31D0E0u;
    // 7F31D0E0: lwz     r3, 14292(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(14292);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31D0E4:
    ctx->pc = 0x7F31D0E4u;
    // 7F31D0E4: li      r8, 720
    ctx->gpr[8] = (u32)(s32)(720);

label_7F31D0E8:
    ctx->pc = 0x7F31D0E8u;
    // 7F31D0E8: li      r9, 300
    ctx->gpr[9] = (u32)(s32)(300);

label_7F31D0EC:
    ctx->pc = 0x7F31D0ECu;
    // 7F31D0EC: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F31D0F0:
    ctx->pc = 0x7F31D0F0u;
    // 7F31D0F0: lbz     r0, 143(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(143);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31D0F4:
    ctx->pc = 0x7F31D0F4u;
    // 7F31D0F4: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_7F31D0F8:
    ctx->pc = 0x7F31D0F8u;
    // 7F31D0F8: oris    r0, r0, 0x008C
    ctx->gpr[0] = ctx->gpr[0] | (0x008Cu << 16);

label_7F31D0FC:
    ctx->pc = 0x7F31D0FCu;
    // 7F31D0FC: ori     r0, r0, 0x8C8C
    ctx->gpr[0] = ctx->gpr[0] | 0x8C8Cu;

label_7F31D100:
    ctx->pc = 0x7F31D100u;
    // 7F31D100: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D104:
    ctx->pc = 0x7F31D104u;
    // 7F31D104: lwz     r3, 14324(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(14324);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31D108:
    ctx->pc = 0x7F31D108u;
    // 7F31D108: bl      0x7F314524
    {
            ctx->lr = 0x7F31D10Cu;
            ctx->pc = 0x7F314524u;
            return;
    }

label_7F31D10C:
    ctx->pc = 0x7F31D10Cu;
    ctx->downcount -= 14;
    // 7F31D10C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31D110:
    ctx->pc = 0x7F31D110u;
    // 7F31D110: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F31D114:
    ctx->pc = 0x7F31D114u;
    // 7F31D114: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D118:
    ctx->pc = 0x7F31D118u;
    // 7F31D118: li      r4, 110
    ctx->gpr[4] = (u32)(s32)(110);

label_7F31D11C:
    ctx->pc = 0x7F31D11Cu;
    // 7F31D11C: li      r5, 270
    ctx->gpr[5] = (u32)(s32)(270);

label_7F31D120:
    ctx->pc = 0x7F31D120u;
    // 7F31D120: li      r6, 480
    ctx->gpr[6] = (u32)(s32)(480);

label_7F31D124:
    ctx->pc = 0x7F31D124u;
    // 7F31D124: lwz     r0, 14340(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14340);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31D128:
    ctx->pc = 0x7F31D128u;
    // 7F31D128: li      r7, 32
    ctx->gpr[7] = (u32)(s32)(32);

label_7F31D12C:
    ctx->pc = 0x7F31D12Cu;
    // 7F31D12C: li      r8, 720
    ctx->gpr[8] = (u32)(s32)(720);

label_7F31D130:
    ctx->pc = 0x7F31D130u;
    // 7F31D130: li      r9, 32
    ctx->gpr[9] = (u32)(s32)(32);

label_7F31D134:
    ctx->pc = 0x7F31D134u;
    // 7F31D134: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D138:
    ctx->pc = 0x7F31D138u;
    // 7F31D138: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F31D13C:
    ctx->pc = 0x7F31D13Cu;
    // 7F31D13C: lwz     r3, 14328(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14328);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31D140:
    ctx->pc = 0x7F31D140u;
    // 7F31D140: bl      0x7F314524
    {
            ctx->lr = 0x7F31D144u;
            ctx->pc = 0x7F314524u;
            return;
    }

label_7F31D144:
    ctx->pc = 0x7F31D144u;
    ctx->downcount -= 14;
    // 7F31D144: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31D148:
    ctx->pc = 0x7F31D148u;
    // 7F31D148: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F31D14C:
    ctx->pc = 0x7F31D14Cu;
    // 7F31D14C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D150:
    ctx->pc = 0x7F31D150u;
    // 7F31D150: li      r4, 110
    ctx->gpr[4] = (u32)(s32)(110);

label_7F31D154:
    ctx->pc = 0x7F31D154u;
    // 7F31D154: li      r5, 302
    ctx->gpr[5] = (u32)(s32)(302);

label_7F31D158:
    ctx->pc = 0x7F31D158u;
    // 7F31D158: li      r6, 480
    ctx->gpr[6] = (u32)(s32)(480);

label_7F31D15C:
    ctx->pc = 0x7F31D15Cu;
    // 7F31D15C: lwz     r0, 14344(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14344);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31D160:
    ctx->pc = 0x7F31D160u;
    // 7F31D160: li      r7, 32
    ctx->gpr[7] = (u32)(s32)(32);

label_7F31D164:
    ctx->pc = 0x7F31D164u;
    // 7F31D164: li      r8, 720
    ctx->gpr[8] = (u32)(s32)(720);

label_7F31D168:
    ctx->pc = 0x7F31D168u;
    // 7F31D168: li      r9, 32
    ctx->gpr[9] = (u32)(s32)(32);

label_7F31D16C:
    ctx->pc = 0x7F31D16Cu;
    // 7F31D16C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D170:
    ctx->pc = 0x7F31D170u;
    // 7F31D170: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F31D174:
    ctx->pc = 0x7F31D174u;
    // 7F31D174: lwz     r3, 14332(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14332);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31D178:
    ctx->pc = 0x7F31D178u;
    // 7F31D178: bl      0x7F314524
    {
            ctx->lr = 0x7F31D17Cu;
            ctx->pc = 0x7F314524u;
            return;
    }

label_7F31D17C:
    ctx->pc = 0x7F31D17Cu;
    ctx->downcount -= 14;
    // 7F31D17C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31D180:
    ctx->pc = 0x7F31D180u;
    // 7F31D180: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F31D184:
    ctx->pc = 0x7F31D184u;
    // 7F31D184: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D188:
    ctx->pc = 0x7F31D188u;
    // 7F31D188: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F31D18C:
    ctx->pc = 0x7F31D18Cu;
    // 7F31D18C: li      r4, 110
    ctx->gpr[4] = (u32)(s32)(110);

label_7F31D190:
    ctx->pc = 0x7F31D190u;
    // 7F31D190: li      r5, 334
    ctx->gpr[5] = (u32)(s32)(334);

label_7F31D194:
    ctx->pc = 0x7F31D194u;
    // 7F31D194: lwz     r0, 14348(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14348);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31D198:
    ctx->pc = 0x7F31D198u;
    // 7F31D198: li      r7, 32
    ctx->gpr[7] = (u32)(s32)(32);

label_7F31D19C:
    ctx->pc = 0x7F31D19Cu;
    // 7F31D19C: li      r8, 720
    ctx->gpr[8] = (u32)(s32)(720);

label_7F31D1A0:
    ctx->pc = 0x7F31D1A0u;
    // 7F31D1A0: li      r9, 32
    ctx->gpr[9] = (u32)(s32)(32);

label_7F31D1A4:
    ctx->pc = 0x7F31D1A4u;
    // 7F31D1A4: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D1A8:
    ctx->pc = 0x7F31D1A8u;
    // 7F31D1A8: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F31D1AC:
    ctx->pc = 0x7F31D1ACu;
    // 7F31D1AC: lwz     r3, 14336(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14336);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31D1B0:
    ctx->pc = 0x7F31D1B0u;
    // 7F31D1B0: bl      0x7F314524
    {
            ctx->lr = 0x7F31D1B4u;
            ctx->pc = 0x7F314524u;
            return;
    }

label_7F31D1B4:
    ctx->pc = 0x7F31D1B4u;
    ctx->downcount -= 16;
    // 7F31D1B4: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F31D1B8:
    ctx->pc = 0x7F31D1B8u;
    // 7F31D1B8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31D1BC:
    ctx->pc = 0x7F31D1BCu;
    // 7F31D1BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31D1C0:
    ctx->pc = 0x7F31D1C0u;
    // 7F31D1C0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F31D1C4:
    ctx->pc = 0x7F31D1C4u;
    // 7F31D1C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31D1C8:
    ctx->pc = 0x7F31D1C8u;
    ctx->downcount -= 7;
    // 7F31D1C8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31D1CC:
    ctx->pc = 0x7F31D1CCu;
    // 7F31D1CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31D1D0:
    ctx->pc = 0x7F31D1D0u;
    // 7F31D1D0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D1D4:
    ctx->pc = 0x7F31D1D4u;
    // 7F31D1D4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F31D1D8:
    ctx->pc = 0x7F31D1D8u;
    // 7F31D1D8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31D1DC:
    ctx->pc = 0x7F31D1DCu;
    // 7F31D1DC: addi    r3, r31, 96
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(96);

label_7F31D1E0:
    ctx->pc = 0x7F31D1E0u;
    // 7F31D1E0: bl      0x7F312474
    {
            ctx->lr = 0x7F31D1E4u;
            ctx->pc = 0x7F312474u;
            return;
    }

label_7F31D1E4:
    ctx->pc = 0x7F31D1E4u;
    ctx->downcount -= 4;
    // 7F31D1E4: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F31D1E8:
    ctx->pc = 0x7F31D1E8u;
    // 7F31D1E8: lwz     r0, 14304(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14304);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31D1EC:
    ctx->pc = 0x7F31D1ECu;
    // 7F31D1EC: cmplwi  r0, 0x0014
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0014u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31D1F0:
    ctx->pc = 0x7F31D1F0u;
    // 7F31D1F0: bc    12, 1, 0x7F31D514
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D514;
        }
    }

label_7F31D1F4:
    ctx->pc = 0x7F31D1F4u;
    ctx->downcount -= 7;
    // 7F31D1F4: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F31D1F8:
    ctx->pc = 0x7F31D1F8u;
    // 7F31D1F8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F31D1FC:
    ctx->pc = 0x7F31D1FCu;
    // 7F31D1FC: addi    r4, r4, -25104
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25104);

label_7F31D200:
    ctx->pc = 0x7F31D200u;
    // 7F31D200: lwzx    r0, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31D204:
    ctx->pc = 0x7F31D204u;
    // 7F31D204: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F31D208:
    ctx->pc = 0x7F31D208u;
    // 7F31D208: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F31D20C:
    ctx->pc = 0x7F31D20Cu;
    ctx->downcount -= 6;
    // 7F31D20C: lbz     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31D210:
    ctx->pc = 0x7F31D210u;
    // 7F31D210: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F31D214:
    ctx->pc = 0x7F31D214u;
    // 7F31D214: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F31D218:
    ctx->pc = 0x7F31D218u;
    // 7F31D218: lbz     r0, 97(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(97);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31D21C:
    ctx->pc = 0x7F31D21Cu;
    // 7F31D21C: cmpwi   r0, 1
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

label_7F31D220:
    ctx->pc = 0x7F31D220u;
    // 7F31D220: bc    12, 2, 0x7F31D23C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D23C;
        }
    }

label_7F31D224:
    ctx->pc = 0x7F31D224u;
    ctx->downcount -= 6;
    // 7F31D224: lis     r3, 116
    ctx->gpr[3] = ((u32)(s32)(116) << 16);

label_7F31D228:
    ctx->pc = 0x7F31D228u;
    // 7F31D228: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31D22C:
    ctx->pc = 0x7F31D22Cu;
    // 7F31D22C: addi    r3, r3, -8868
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8868);

label_7F31D230:
    ctx->pc = 0x7F31D230u;
    // 7F31D230: stw     r3, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31D234:
    ctx->pc = 0x7F31D234u;
    // 7F31D234: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D238:
    ctx->pc = 0x7F31D238u;
    // 7F31D238: b       0x7F31D514
    {
            goto label_7F31D514;
    }

label_7F31D23C:
    ctx->pc = 0x7F31D23Cu;
    ctx->downcount -= 5;
    // 7F31D23C: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F31D240:
    ctx->pc = 0x7F31D240u;
    // 7F31D240: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31D244:
    ctx->pc = 0x7F31D244u;
    // 7F31D244: addi    r4, r4, 14144
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14144);

label_7F31D248:
    ctx->pc = 0x7F31D248u;
    // 7F31D248: addi    r3, r3, 14292
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14292);

label_7F31D24C:
    ctx->pc = 0x7F31D24Cu;
    // 7F31D24C: bl      0x7F315620
    {
            ctx->lr = 0x7F31D250u;
            ctx->pc = 0x7F315620u;
            return;
    }

label_7F31D250:
    ctx->pc = 0x7F31D250u;
    ctx->downcount -= 2;
    // 7F31D250: cmpwi   r3, 1
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

label_7F31D254:
    ctx->pc = 0x7F31D254u;
    // 7F31D254: bc    12, 2, 0x7F31D280
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D280;
        }
    }

label_7F31D258:
    ctx->pc = 0x7F31D258u;
    ctx->downcount -= 1;
    // 7F31D258: bc    4, 0, 0x7F31D514
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31D514;
        }
    }

label_7F31D25C:
    ctx->pc = 0x7F31D25Cu;
    ctx->downcount -= 2;
    // 7F31D25C: cmpwi   r3, 0
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

label_7F31D260:
    ctx->pc = 0x7F31D260u;
    // 7F31D260: bc    4, 0, 0x7F31D268
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31D268;
        }
    }

label_7F31D264:
    ctx->pc = 0x7F31D264u;
    ctx->downcount -= 1;
    // 7F31D264: b       0x7F31D514
    {
            goto label_7F31D514;
    }

label_7F31D268:
    ctx->pc = 0x7F31D268u;
    ctx->downcount -= 6;
    // 7F31D268: lis     r3, 116
    ctx->gpr[3] = ((u32)(s32)(116) << 16);

label_7F31D26C:
    ctx->pc = 0x7F31D26Cu;
    // 7F31D26C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31D270:
    ctx->pc = 0x7F31D270u;
    // 7F31D270: addi    r3, r3, -8868
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8868);

label_7F31D274:
    ctx->pc = 0x7F31D274u;
    // 7F31D274: stw     r3, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31D278:
    ctx->pc = 0x7F31D278u;
    // 7F31D278: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D27C:
    ctx->pc = 0x7F31D27Cu;
    // 7F31D27C: b       0x7F31D514
    {
            goto label_7F31D514;
    }

label_7F31D280:
    ctx->pc = 0x7F31D280u;
    ctx->downcount -= 6;
    // 7F31D280: lis     r3, 116
    ctx->gpr[3] = ((u32)(s32)(116) << 16);

label_7F31D284:
    ctx->pc = 0x7F31D284u;
    // 7F31D284: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F31D288:
    ctx->pc = 0x7F31D288u;
    // 7F31D288: addi    r3, r3, -8868
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8868);

label_7F31D28C:
    ctx->pc = 0x7F31D28Cu;
    // 7F31D28C: stw     r3, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31D290:
    ctx->pc = 0x7F31D290u;
    // 7F31D290: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D294:
    ctx->pc = 0x7F31D294u;
    // 7F31D294: b       0x7F31D514
    {
            goto label_7F31D514;
    }

label_7F31D298:
    ctx->pc = 0x7F31D298u;
    ctx->downcount -= 5;
    // 7F31D298: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F31D29C:
    ctx->pc = 0x7F31D29Cu;
    // 7F31D29C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31D2A0:
    ctx->pc = 0x7F31D2A0u;
    // 7F31D2A0: addi    r4, r4, 14144
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14144);

label_7F31D2A4:
    ctx->pc = 0x7F31D2A4u;
    // 7F31D2A4: addi    r3, r3, 14292
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14292);

label_7F31D2A8:
    ctx->pc = 0x7F31D2A8u;
    // 7F31D2A8: bl      0x7F315620
    {
            ctx->lr = 0x7F31D2ACu;
            ctx->pc = 0x7F315620u;
            return;
    }

label_7F31D2AC:
    ctx->pc = 0x7F31D2ACu;
    ctx->downcount -= 2;
    // 7F31D2AC: cmpwi   r3, 1
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

label_7F31D2B0:
    ctx->pc = 0x7F31D2B0u;
    // 7F31D2B0: bc    12, 2, 0x7F31D2E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D2E8;
        }
    }

label_7F31D2B4:
    ctx->pc = 0x7F31D2B4u;
    ctx->downcount -= 1;
    // 7F31D2B4: bc    4, 0, 0x7F31D2C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31D2C4;
        }
    }

label_7F31D2B8:
    ctx->pc = 0x7F31D2B8u;
    ctx->downcount -= 2;
    // 7F31D2B8: cmpwi   r3, 0
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

label_7F31D2BC:
    ctx->pc = 0x7F31D2BCu;
    // 7F31D2BC: bc    4, 0, 0x7F31D2D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31D2D0;
        }
    }

label_7F31D2C0:
    ctx->pc = 0x7F31D2C0u;
    ctx->downcount -= 1;
    // 7F31D2C0: b       0x7F31D514
    {
            goto label_7F31D514;
    }

label_7F31D2C4:
    ctx->pc = 0x7F31D2C4u;
    ctx->downcount -= 2;
    // 7F31D2C4: cmpwi   r3, 3
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31D2C8:
    ctx->pc = 0x7F31D2C8u;
    // 7F31D2C8: bc    4, 0, 0x7F31D514
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31D514;
        }
    }

label_7F31D2CC:
    ctx->pc = 0x7F31D2CCu;
    ctx->downcount -= 1;
    // 7F31D2CC: b       0x7F31D300
    {
            goto label_7F31D300;
    }

label_7F31D2D0:
    ctx->pc = 0x7F31D2D0u;
    ctx->downcount -= 6;
    // 7F31D2D0: lis     r3, 116
    ctx->gpr[3] = ((u32)(s32)(116) << 16);

label_7F31D2D4:
    ctx->pc = 0x7F31D2D4u;
    // 7F31D2D4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31D2D8:
    ctx->pc = 0x7F31D2D8u;
    // 7F31D2D8: addi    r3, r3, -8868
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8868);

label_7F31D2DC:
    ctx->pc = 0x7F31D2DCu;
    // 7F31D2DC: stw     r3, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31D2E0:
    ctx->pc = 0x7F31D2E0u;
    // 7F31D2E0: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D2E4:
    ctx->pc = 0x7F31D2E4u;
    // 7F31D2E4: b       0x7F31D514
    {
            goto label_7F31D514;
    }

label_7F31D2E8:
    ctx->pc = 0x7F31D2E8u;
    ctx->downcount -= 6;
    // 7F31D2E8: lis     r3, 116
    ctx->gpr[3] = ((u32)(s32)(116) << 16);

label_7F31D2EC:
    ctx->pc = 0x7F31D2ECu;
    // 7F31D2EC: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F31D2F0:
    ctx->pc = 0x7F31D2F0u;
    // 7F31D2F0: addi    r3, r3, -8868
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8868);

label_7F31D2F4:
    ctx->pc = 0x7F31D2F4u;
    // 7F31D2F4: stw     r3, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31D2F8:
    ctx->pc = 0x7F31D2F8u;
    // 7F31D2F8: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D2FC:
    ctx->pc = 0x7F31D2FCu;
    // 7F31D2FC: b       0x7F31D514
    {
            goto label_7F31D514;
    }

label_7F31D300:
    ctx->pc = 0x7F31D300u;
    ctx->downcount -= 1;
    // 7F31D300: bl      0x800223D4
    {
            ctx->lr = 0x7F31D304u;
            ctx->pc = 0x800223D4u;
            return;
    }

label_7F31D304:
    ctx->pc = 0x7F31D304u;
    ctx->downcount -= 4;
    // 7F31D304: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31D308:
    ctx->pc = 0x7F31D308u;
    // 7F31D308: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F31D30C:
    ctx->pc = 0x7F31D30Cu;
    // 7F31D30C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F31D310:
    ctx->pc = 0x7F31D310u;
    // 7F31D310: bl      0x8002211C
    {
            ctx->lr = 0x7F31D314u;
            ctx->pc = 0x8002211Cu;
            return;
    }

label_7F31D314:
    ctx->pc = 0x7F31D314u;
    ctx->downcount -= 1;
    // 7F31D314: b       0x7F31D514
    {
            goto label_7F31D514;
    }

label_7F31D318:
    ctx->pc = 0x7F31D318u;
    ctx->downcount -= 6;
    // 7F31D318: lbz     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31D31C:
    ctx->pc = 0x7F31D31Cu;
    // 7F31D31C: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F31D320:
    ctx->pc = 0x7F31D320u;
    // 7F31D320: add   r4, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F31D324:
    ctx->pc = 0x7F31D324u;
    // 7F31D324: lbz     r0, 97(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(97);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31D328:
    ctx->pc = 0x7F31D328u;
    // 7F31D328: cmpwi   r0, 1
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

label_7F31D32C:
    ctx->pc = 0x7F31D32Cu;
    // 7F31D32C: bc    12, 2, 0x7F31D348
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D348;
        }
    }

label_7F31D330:
    ctx->pc = 0x7F31D330u;
    ctx->downcount -= 6;
    // 7F31D330: lis     r3, 116
    ctx->gpr[3] = ((u32)(s32)(116) << 16);

label_7F31D334:
    ctx->pc = 0x7F31D334u;
    // 7F31D334: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31D338:
    ctx->pc = 0x7F31D338u;
    // 7F31D338: addi    r3, r3, -8868
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8868);

label_7F31D33C:
    ctx->pc = 0x7F31D33Cu;
    // 7F31D33C: stw     r3, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31D340:
    ctx->pc = 0x7F31D340u;
    // 7F31D340: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D344:
    ctx->pc = 0x7F31D344u;
    // 7F31D344: b       0x7F31D514
    {
            goto label_7F31D514;
    }

label_7F31D348:
    ctx->pc = 0x7F31D348u;
    ctx->downcount -= 4;
    // 7F31D348: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31D34C:
    ctx->pc = 0x7F31D34Cu;
    // 7F31D34C: addi    r3, r3, 14292
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14292);

label_7F31D350:
    ctx->pc = 0x7F31D350u;
    // 7F31D350: addi    r4, r4, 14144
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14144);

label_7F31D354:
    ctx->pc = 0x7F31D354u;
    // 7F31D354: bl      0x7F315620
    {
            ctx->lr = 0x7F31D358u;
            ctx->pc = 0x7F315620u;
            return;
    }

label_7F31D358:
    ctx->pc = 0x7F31D358u;
    ctx->downcount -= 2;
    // 7F31D358: cmpwi   r3, 1
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

label_7F31D35C:
    ctx->pc = 0x7F31D35Cu;
    // 7F31D35C: bc    12, 2, 0x7F31D394
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D394;
        }
    }

label_7F31D360:
    ctx->pc = 0x7F31D360u;
    ctx->downcount -= 1;
    // 7F31D360: bc    4, 0, 0x7F31D370
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31D370;
        }
    }

label_7F31D364:
    ctx->pc = 0x7F31D364u;
    ctx->downcount -= 2;
    // 7F31D364: cmpwi   r3, 0
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

label_7F31D368:
    ctx->pc = 0x7F31D368u;
    // 7F31D368: bc    4, 0, 0x7F31D37C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31D37C;
        }
    }

label_7F31D36C:
    ctx->pc = 0x7F31D36Cu;
    ctx->downcount -= 1;
    // 7F31D36C: b       0x7F31D514
    {
            goto label_7F31D514;
    }

label_7F31D370:
    ctx->pc = 0x7F31D370u;
    ctx->downcount -= 2;
    // 7F31D370: cmpwi   r3, 3
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31D374:
    ctx->pc = 0x7F31D374u;
    // 7F31D374: bc    4, 0, 0x7F31D514
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31D514;
        }
    }

label_7F31D378:
    ctx->pc = 0x7F31D378u;
    ctx->downcount -= 1;
    // 7F31D378: b       0x7F31D3AC
    {
            goto label_7F31D3AC;
    }

label_7F31D37C:
    ctx->pc = 0x7F31D37Cu;
    ctx->downcount -= 6;
    // 7F31D37C: lis     r3, 116
    ctx->gpr[3] = ((u32)(s32)(116) << 16);

label_7F31D380:
    ctx->pc = 0x7F31D380u;
    // 7F31D380: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31D384:
    ctx->pc = 0x7F31D384u;
    // 7F31D384: addi    r3, r3, -8868
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8868);

label_7F31D388:
    ctx->pc = 0x7F31D388u;
    // 7F31D388: stw     r3, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31D38C:
    ctx->pc = 0x7F31D38Cu;
    // 7F31D38C: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D390:
    ctx->pc = 0x7F31D390u;
    // 7F31D390: b       0x7F31D514
    {
            goto label_7F31D514;
    }

label_7F31D394:
    ctx->pc = 0x7F31D394u;
    ctx->downcount -= 6;
    // 7F31D394: lis     r3, 116
    ctx->gpr[3] = ((u32)(s32)(116) << 16);

label_7F31D398:
    ctx->pc = 0x7F31D398u;
    // 7F31D398: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F31D39C:
    ctx->pc = 0x7F31D39Cu;
    // 7F31D39C: addi    r3, r3, -8868
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8868);

label_7F31D3A0:
    ctx->pc = 0x7F31D3A0u;
    // 7F31D3A0: stw     r3, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31D3A4:
    ctx->pc = 0x7F31D3A4u;
    // 7F31D3A4: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D3A8:
    ctx->pc = 0x7F31D3A8u;
    // 7F31D3A8: b       0x7F31D514
    {
            goto label_7F31D514;
    }

label_7F31D3AC:
    ctx->pc = 0x7F31D3ACu;
    ctx->downcount -= 8;
    // 7F31D3AC: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F31D3B0:
    ctx->pc = 0x7F31D3B0u;
    // 7F31D3B0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31D3B4:
    ctx->pc = 0x7F31D3B4u;
    // 7F31D3B4: stw     r0, 14308(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14308);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D3B8:
    ctx->pc = 0x7F31D3B8u;
    // 7F31D3B8: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_7F31D3BC:
    ctx->pc = 0x7F31D3BCu;
    // 7F31D3BC: stw     r0, 14304(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D3C0:
    ctx->pc = 0x7F31D3C0u;
    // 7F31D3C0: addi    r3, r3, 14292
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14292);

label_7F31D3C4:
    ctx->pc = 0x7F31D3C4u;
    // 7F31D3C4: lbz     r4, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F31D3C8:
    ctx->pc = 0x7F31D3C8u;
    // 7F31D3C8: bl      0x7F314F54
    {
            ctx->lr = 0x7F31D3CCu;
            ctx->pc = 0x7F314F54u;
            return;
    }

label_7F31D3CC:
    ctx->pc = 0x7F31D3CCu;
    ctx->downcount -= 1;
    // 7F31D3CC: b       0x7F31D514
    {
            goto label_7F31D514;
    }

label_7F31D3D0:
    ctx->pc = 0x7F31D3D0u;
    ctx->downcount -= 6;
    // 7F31D3D0: lbz     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31D3D4:
    ctx->pc = 0x7F31D3D4u;
    // 7F31D3D4: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F31D3D8:
    ctx->pc = 0x7F31D3D8u;
    // 7F31D3D8: add   r4, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F31D3DC:
    ctx->pc = 0x7F31D3DCu;
    // 7F31D3DC: lbz     r0, 97(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(97);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31D3E0:
    ctx->pc = 0x7F31D3E0u;
    // 7F31D3E0: cmpwi   r0, 1
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

label_7F31D3E4:
    ctx->pc = 0x7F31D3E4u;
    // 7F31D3E4: bc    12, 2, 0x7F31D400
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D400;
        }
    }

label_7F31D3E8:
    ctx->pc = 0x7F31D3E8u;
    ctx->downcount -= 6;
    // 7F31D3E8: lis     r3, 116
    ctx->gpr[3] = ((u32)(s32)(116) << 16);

label_7F31D3EC:
    ctx->pc = 0x7F31D3ECu;
    // 7F31D3EC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31D3F0:
    ctx->pc = 0x7F31D3F0u;
    // 7F31D3F0: addi    r3, r3, -8868
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8868);

label_7F31D3F4:
    ctx->pc = 0x7F31D3F4u;
    // 7F31D3F4: stw     r3, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31D3F8:
    ctx->pc = 0x7F31D3F8u;
    // 7F31D3F8: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D3FC:
    ctx->pc = 0x7F31D3FCu;
    // 7F31D3FC: b       0x7F31D514
    {
            goto label_7F31D514;
    }

label_7F31D400:
    ctx->pc = 0x7F31D400u;
    ctx->downcount -= 4;
    // 7F31D400: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31D404:
    ctx->pc = 0x7F31D404u;
    // 7F31D404: addi    r3, r3, 14292
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14292);

label_7F31D408:
    ctx->pc = 0x7F31D408u;
    // 7F31D408: addi    r4, r4, 14144
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14144);

label_7F31D40C:
    ctx->pc = 0x7F31D40Cu;
    // 7F31D40C: bl      0x7F315620
    {
            ctx->lr = 0x7F31D410u;
            ctx->pc = 0x7F315620u;
            return;
    }

label_7F31D410:
    ctx->pc = 0x7F31D410u;
    ctx->downcount -= 2;
    // 7F31D410: cmpwi   r3, 1
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

label_7F31D414:
    ctx->pc = 0x7F31D414u;
    // 7F31D414: bc    12, 2, 0x7F31D44C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D44C;
        }
    }

label_7F31D418:
    ctx->pc = 0x7F31D418u;
    ctx->downcount -= 1;
    // 7F31D418: bc    4, 0, 0x7F31D514
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31D514;
        }
    }

label_7F31D41C:
    ctx->pc = 0x7F31D41Cu;
    ctx->downcount -= 2;
    // 7F31D41C: cmpwi   r3, 0
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

label_7F31D420:
    ctx->pc = 0x7F31D420u;
    // 7F31D420: bc    4, 0, 0x7F31D428
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31D428;
        }
    }

label_7F31D424:
    ctx->pc = 0x7F31D424u;
    ctx->downcount -= 1;
    // 7F31D424: b       0x7F31D514
    {
            goto label_7F31D514;
    }

label_7F31D428:
    ctx->pc = 0x7F31D428u;
    ctx->downcount -= 8;
    // 7F31D428: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F31D42C:
    ctx->pc = 0x7F31D42Cu;
    // 7F31D42C: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F31D430:
    ctx->pc = 0x7F31D430u;
    // 7F31D430: stw     r0, 14304(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D434:
    ctx->pc = 0x7F31D434u;
    // 7F31D434: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31D438:
    ctx->pc = 0x7F31D438u;
    // 7F31D438: stw     r0, 14308(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14308);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D43C:
    ctx->pc = 0x7F31D43Cu;
    // 7F31D43C: addi    r3, r3, 14292
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14292);

label_7F31D440:
    ctx->pc = 0x7F31D440u;
    // 7F31D440: lbz     r4, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F31D444:
    ctx->pc = 0x7F31D444u;
    // 7F31D444: bl      0x7F314F54
    {
            ctx->lr = 0x7F31D448u;
            ctx->pc = 0x7F314F54u;
            return;
    }

label_7F31D448:
    ctx->pc = 0x7F31D448u;
    ctx->downcount -= 1;
    // 7F31D448: b       0x7F31D514
    {
            goto label_7F31D514;
    }

label_7F31D44C:
    ctx->pc = 0x7F31D44Cu;
    ctx->downcount -= 8;
    // 7F31D44C: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F31D450:
    ctx->pc = 0x7F31D450u;
    // 7F31D450: li      r0, 7
    ctx->gpr[0] = (u32)(s32)(7);

label_7F31D454:
    ctx->pc = 0x7F31D454u;
    // 7F31D454: stw     r0, 14304(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D458:
    ctx->pc = 0x7F31D458u;
    // 7F31D458: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F31D45C:
    ctx->pc = 0x7F31D45Cu;
    // 7F31D45C: stw     r0, 14316(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14316);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D460:
    ctx->pc = 0x7F31D460u;
    // 7F31D460: addi    r3, r3, 14292
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14292);

label_7F31D464:
    ctx->pc = 0x7F31D464u;
    // 7F31D464: lbz     r4, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F31D468:
    ctx->pc = 0x7F31D468u;
    // 7F31D468: bl      0x7F314F54
    {
            ctx->lr = 0x7F31D46Cu;
            ctx->pc = 0x7F314F54u;
            return;
    }

label_7F31D46C:
    ctx->pc = 0x7F31D46Cu;
    ctx->downcount -= 4;
    // 7F31D46C: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F31D470:
    ctx->pc = 0x7F31D470u;
    // 7F31D470: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F31D474:
    ctx->pc = 0x7F31D474u;
    // 7F31D474: stw     r0, 14308(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14308);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D478:
    ctx->pc = 0x7F31D478u;
    // 7F31D478: b       0x7F31D514
    {
            goto label_7F31D514;
    }

label_7F31D47C:
    ctx->pc = 0x7F31D47Cu;
    ctx->downcount -= 6;
    // 7F31D47C: lwz     r4, 14316(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14316);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31D480:
    ctx->pc = 0x7F31D480u;
    // 7F31D480: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F31D484:
    ctx->pc = 0x7F31D484u;
    // 7F31D484: stw     r0, 14316(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14316);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D488:
    ctx->pc = 0x7F31D488u;
    // 7F31D488: lwz     r0, 14316(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14316);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31D48C:
    ctx->pc = 0x7F31D48Cu;
    // 7F31D48C: cmpwi   r0, 0
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

label_7F31D490:
    ctx->pc = 0x7F31D490u;
    // 7F31D490: bc    4, 0, 0x7F31D514
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31D514;
        }
    }

label_7F31D494:
    ctx->pc = 0x7F31D494u;
    ctx->downcount -= 2;
    // 7F31D494: addi    r3, r31, 96
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(96);

label_7F31D498:
    ctx->pc = 0x7F31D498u;
    // 7F31D498: bl      0x7F31272C
    {
            ctx->lr = 0x7F31D49Cu;
            ctx->pc = 0x7F31272Cu;
            return;
    }

label_7F31D49C:
    ctx->pc = 0x7F31D49Cu;
    ctx->downcount -= 2;
    // 7F31D49C: cmpwi   r3, 0
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

label_7F31D4A0:
    ctx->pc = 0x7F31D4A0u;
    // 7F31D4A0: bc    12, 2, 0x7F31D4A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D4A8;
        }
    }

label_7F31D4A4:
    ctx->pc = 0x7F31D4A4u;
    ctx->downcount -= 1;
    // 7F31D4A4: b       0x7F31D4B8
    {
            goto label_7F31D4B8;
    }

label_7F31D4A8:
    ctx->pc = 0x7F31D4A8u;
    ctx->downcount -= 4;
    // 7F31D4A8: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F31D4AC:
    ctx->pc = 0x7F31D4ACu;
    // 7F31D4AC: li      r0, 9
    ctx->gpr[0] = (u32)(s32)(9);

label_7F31D4B0:
    ctx->pc = 0x7F31D4B0u;
    // 7F31D4B0: stw     r0, 14304(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D4B4:
    ctx->pc = 0x7F31D4B4u;
    // 7F31D4B4: b       0x7F31D4C4
    {
            goto label_7F31D4C4;
    }

label_7F31D4B8:
    ctx->pc = 0x7F31D4B8u;
    ctx->downcount -= 3;
    // 7F31D4B8: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F31D4BC:
    ctx->pc = 0x7F31D4BCu;
    // 7F31D4BC: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F31D4C0:
    ctx->pc = 0x7F31D4C0u;
    // 7F31D4C0: stw     r0, 14304(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D4C4:
    ctx->pc = 0x7F31D4C4u;
    ctx->downcount -= 4;
    // 7F31D4C4: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F31D4C8:
    ctx->pc = 0x7F31D4C8u;
    // 7F31D4C8: lbz     r4, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F31D4CC:
    ctx->pc = 0x7F31D4CCu;
    // 7F31D4CC: addi    r3, r3, 14292
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14292);

label_7F31D4D0:
    ctx->pc = 0x7F31D4D0u;
    // 7F31D4D0: bl      0x7F314F54
    {
            ctx->lr = 0x7F31D4D4u;
            ctx->pc = 0x7F314F54u;
            return;
    }

label_7F31D4D4:
    ctx->pc = 0x7F31D4D4u;
    ctx->downcount -= 1;
    // 7F31D4D4: b       0x7F31D514
    {
            goto label_7F31D514;
    }

label_7F31D4D8:
    ctx->pc = 0x7F31D4D8u;
    ctx->downcount -= 5;
    // 7F31D4D8: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F31D4DC:
    ctx->pc = 0x7F31D4DCu;
    // 7F31D4DC: lwz     r0, 14148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31D4E0:
    ctx->pc = 0x7F31D4E0u;
    // 7F31D4E0: rlwinm r0, r0, 0, 24, 24
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000080u;
    }

label_7F31D4E4:
    ctx->pc = 0x7F31D4E4u;
    // 7F31D4E4: cmpwi   r0, 128
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

label_7F31D4E8:
    ctx->pc = 0x7F31D4E8u;
    // 7F31D4E8: bc    12, 2, 0x7F31D4F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D4F0;
        }
    }

label_7F31D4EC:
    ctx->pc = 0x7F31D4ECu;
    ctx->downcount -= 1;
    // 7F31D4EC: b       0x7F31D514
    {
            goto label_7F31D514;
    }

label_7F31D4F0:
    ctx->pc = 0x7F31D4F0u;
    ctx->downcount -= 4;
    // 7F31D4F0: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F31D4F4:
    ctx->pc = 0x7F31D4F4u;
    // 7F31D4F4: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F31D4F8:
    ctx->pc = 0x7F31D4F8u;
    // 7F31D4F8: li      r5, 249
    ctx->gpr[5] = (u32)(s32)(249);

label_7F31D4FC:
    ctx->pc = 0x7F31D4FCu;
    // 7F31D4FC: bl      0x7F011698
    {
            ctx->lr = 0x7F31D500u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F31D500:
    ctx->pc = 0x7F31D500u;
    ctx->downcount -= 5;
    // 7F31D500: lis     r3, 116
    ctx->gpr[3] = ((u32)(s32)(116) << 16);

label_7F31D504:
    ctx->pc = 0x7F31D504u;
    // 7F31D504: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31D508:
    ctx->pc = 0x7F31D508u;
    // 7F31D508: addi    r3, r3, -8868
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8868);

label_7F31D50C:
    ctx->pc = 0x7F31D50Cu;
    // 7F31D50C: stw     r3, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31D510:
    ctx->pc = 0x7F31D510u;
    // 7F31D510: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D514:
    ctx->pc = 0x7F31D514u;
    ctx->downcount -= 6;
    // 7F31D514: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31D518:
    ctx->pc = 0x7F31D518u;
    // 7F31D518: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F31D51C:
    ctx->pc = 0x7F31D51Cu;
    // 7F31D51C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31D520:
    ctx->pc = 0x7F31D520u;
    // 7F31D520: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F31D524:
    ctx->pc = 0x7F31D524u;
    // 7F31D524: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31D528:
    ctx->pc = 0x7F31D528u;
    ctx->downcount -= 6;
    // 7F31D528: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31D52C:
    ctx->pc = 0x7F31D52Cu;
    // 7F31D52C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31D530:
    ctx->pc = 0x7F31D530u;
    // 7F31D530: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D534:
    ctx->pc = 0x7F31D534u;
    // 7F31D534: lwz     r0, 76(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31D538:
    ctx->pc = 0x7F31D538u;
    // 7F31D538: cmpwi   r0, 0
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

label_7F31D53C:
    ctx->pc = 0x7F31D53Cu;
    // 7F31D53C: bc    12, 2, 0x7F31D570
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D570;
        }
    }

label_7F31D540:
    ctx->pc = 0x7F31D540u;
    ctx->downcount -= 2;
    // 7F31D540: cmpwi   r0, 1
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

label_7F31D544:
    ctx->pc = 0x7F31D544u;
    // 7F31D544: bc    12, 2, 0x7F31D570
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D570;
        }
    }

label_7F31D548:
    ctx->pc = 0x7F31D548u;
    ctx->downcount -= 10;
    // 7F31D548: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F31D54C:
    ctx->pc = 0x7F31D54Cu;
    // 7F31D54C: addi    r0, r1, 8
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(8);

label_7F31D550:
    ctx->pc = 0x7F31D550u;
    // 7F31D550: lwz     r6, -29176(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-29176);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F31D554:
    ctx->pc = 0x7F31D554u;
    // 7F31D554: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F31D558:
    ctx->pc = 0x7F31D558u;
    // 7F31D558: sth     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F31D55C:
    ctx->pc = 0x7F31D55Cu;
    // 7F31D55C: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_7F31D560:
    ctx->pc = 0x7F31D560u;
    // 7F31D560: stw     r6, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F31D564:
    ctx->pc = 0x7F31D564u;
    // 7F31D564: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D568:
    ctx->pc = 0x7F31D568u;
    // 7F31D568: lwz     r3, 76(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(76);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31D56C:
    ctx->pc = 0x7F31D56Cu;
    // 7F31D56C: bl      0x7F3C7728
    {
            ctx->lr = 0x7F31D570u;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F31D570:
    ctx->pc = 0x7F31D570u;
    ctx->downcount -= 5;
    // 7F31D570: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31D574:
    ctx->pc = 0x7F31D574u;
    // 7F31D574: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31D578:
    ctx->pc = 0x7F31D578u;
    // 7F31D578: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F31D57C:
    ctx->pc = 0x7F31D57Cu;
    // 7F31D57C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31D580:
    ctx->pc = 0x7F31D580u;
    ctx->downcount -= 3;
    // 7F31D580: lha     r0, 30848(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(30848);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F31D584:
    ctx->pc = 0x7F31D584u;
    // 7F31D584: cmpwi   r0, -3
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31D588:
    ctx->pc = 0x7F31D588u;
    // 7F31D588: bc    4, 2, 0x7F31D5A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31D5A4;
        }
    }

label_7F31D58C:
    ctx->pc = 0x7F31D58Cu;
    ctx->downcount -= 3;
    // 7F31D58C: lha     r0, 30850(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(30850);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F31D590:
    ctx->pc = 0x7F31D590u;
    // 7F31D590: cmpwi   r0, -3
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31D594:
    ctx->pc = 0x7F31D594u;
    // 7F31D594: bc    4, 2, 0x7F31D5A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31D5A4;
        }
    }

label_7F31D598:
    ctx->pc = 0x7F31D598u;
    ctx->downcount -= 3;
    // 7F31D598: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31D59C:
    ctx->pc = 0x7F31D59Cu;
    // 7F31D59C: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D5A0:
    ctx->pc = 0x7F31D5A0u;
    // 7F31D5A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31D5A4:
    ctx->pc = 0x7F31D5A4u;
    ctx->downcount -= 5;
    // 7F31D5A4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31D5A8:
    ctx->pc = 0x7F31D5A8u;
    // 7F31D5A8: stb     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F31D5AC:
    ctx->pc = 0x7F31D5ACu;
    // 7F31D5AC: lha     r0, 30848(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(30848);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F31D5B0:
    ctx->pc = 0x7F31D5B0u;
    // 7F31D5B0: cmpwi   r0, -6
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31D5B4:
    ctx->pc = 0x7F31D5B4u;
    // 7F31D5B4: bc    12, 2, 0x7F31D624
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D624;
        }
    }

label_7F31D5B8:
    ctx->pc = 0x7F31D5B8u;
    ctx->downcount -= 1;
    // 7F31D5B8: bc    4, 0, 0x7F31D5E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31D5E0;
        }
    }

label_7F31D5BC:
    ctx->pc = 0x7F31D5BCu;
    ctx->downcount -= 2;
    // 7F31D5BC: cmpwi   r0, -13
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-13);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31D5C0:
    ctx->pc = 0x7F31D5C0u;
    // 7F31D5C0: bc    12, 2, 0x7F31D618
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D618;
        }
    }

label_7F31D5C4:
    ctx->pc = 0x7F31D5C4u;
    ctx->downcount -= 1;
    // 7F31D5C4: bc    4, 0, 0x7F31D5D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31D5D4;
        }
    }

label_7F31D5C8:
    ctx->pc = 0x7F31D5C8u;
    ctx->downcount -= 2;
    // 7F31D5C8: cmpwi   r0, -128
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

label_7F31D5CC:
    ctx->pc = 0x7F31D5CCu;
    // 7F31D5CC: bc    12, 2, 0x7F31D630
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D630;
        }
    }

label_7F31D5D0:
    ctx->pc = 0x7F31D5D0u;
    ctx->downcount -= 1;
    // 7F31D5D0: b       0x7F31D63C
    {
            goto label_7F31D63C;
    }

label_7F31D5D4:
    ctx->pc = 0x7F31D5D4u;
    ctx->downcount -= 2;
    // 7F31D5D4: cmpwi   r0, -9
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-9);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31D5D8:
    ctx->pc = 0x7F31D5D8u;
    // 7F31D5D8: bc    12, 2, 0x7F31D60C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D60C;
        }
    }

label_7F31D5DC:
    ctx->pc = 0x7F31D5DCu;
    ctx->downcount -= 1;
    // 7F31D5DC: b       0x7F31D63C
    {
            goto label_7F31D63C;
    }

label_7F31D5E0:
    ctx->pc = 0x7F31D5E0u;
    ctx->downcount -= 2;
    // 7F31D5E0: cmpwi   r0, -2
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31D5E4:
    ctx->pc = 0x7F31D5E4u;
    // 7F31D5E4: bc    12, 2, 0x7F31D600
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D600;
        }
    }

label_7F31D5E8:
    ctx->pc = 0x7F31D5E8u;
    ctx->downcount -= 1;
    // 7F31D5E8: bc    4, 0, 0x7F31D63C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31D63C;
        }
    }

label_7F31D5EC:
    ctx->pc = 0x7F31D5ECu;
    ctx->downcount -= 2;
    // 7F31D5EC: cmpwi   r0, -4
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31D5F0:
    ctx->pc = 0x7F31D5F0u;
    // 7F31D5F0: bc    12, 2, 0x7F31D63C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D63C;
        }
    }

label_7F31D5F4:
    ctx->pc = 0x7F31D5F4u;
    ctx->downcount -= 1;
    // 7F31D5F4: bc    4, 0, 0x7F31D63C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31D63C;
        }
    }

label_7F31D5F8:
    ctx->pc = 0x7F31D5F8u;
    ctx->downcount -= 1;
    // 7F31D5F8: b       0x7F31D630
    {
            goto label_7F31D630;
    }

label_7F31D5FC:
    ctx->pc = 0x7F31D5FCu;
    ctx->downcount -= 1;
    // 7F31D5FC: b       0x7F31D63C
    {
            goto label_7F31D63C;
    }

label_7F31D600:
    ctx->pc = 0x7F31D600u;
    ctx->downcount -= 3;
    // 7F31D600: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F31D604:
    ctx->pc = 0x7F31D604u;
    // 7F31D604: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D608:
    ctx->pc = 0x7F31D608u;
    // 7F31D608: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31D60C:
    ctx->pc = 0x7F31D60Cu;
    ctx->downcount -= 3;
    // 7F31D60C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F31D610:
    ctx->pc = 0x7F31D610u;
    // 7F31D610: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D614:
    ctx->pc = 0x7F31D614u;
    // 7F31D614: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31D618:
    ctx->pc = 0x7F31D618u;
    ctx->downcount -= 3;
    // 7F31D618: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F31D61C:
    ctx->pc = 0x7F31D61Cu;
    // 7F31D61C: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D620:
    ctx->pc = 0x7F31D620u;
    // 7F31D620: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31D624:
    ctx->pc = 0x7F31D624u;
    ctx->downcount -= 3;
    // 7F31D624: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F31D628:
    ctx->pc = 0x7F31D628u;
    // 7F31D628: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D62C:
    ctx->pc = 0x7F31D62Cu;
    // 7F31D62C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31D630:
    ctx->pc = 0x7F31D630u;
    ctx->downcount -= 3;
    // 7F31D630: li      r0, 20
    ctx->gpr[0] = (u32)(s32)(20);

label_7F31D634:
    ctx->pc = 0x7F31D634u;
    // 7F31D634: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D638:
    ctx->pc = 0x7F31D638u;
    // 7F31D638: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31D63C:
    ctx->pc = 0x7F31D63Cu;
    ctx->downcount -= 5;
    // 7F31D63C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F31D640:
    ctx->pc = 0x7F31D640u;
    // 7F31D640: stb     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F31D644:
    ctx->pc = 0x7F31D644u;
    // 7F31D644: lha     r0, 30850(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(30850);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F31D648:
    ctx->pc = 0x7F31D648u;
    // 7F31D648: cmpwi   r0, -6
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31D64C:
    ctx->pc = 0x7F31D64Cu;
    // 7F31D64C: bc    12, 2, 0x7F31D6BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D6BC;
        }
    }

label_7F31D650:
    ctx->pc = 0x7F31D650u;
    ctx->downcount -= 1;
    // 7F31D650: bc    4, 0, 0x7F31D678
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31D678;
        }
    }

label_7F31D654:
    ctx->pc = 0x7F31D654u;
    ctx->downcount -= 2;
    // 7F31D654: cmpwi   r0, -13
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-13);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31D658:
    ctx->pc = 0x7F31D658u;
    // 7F31D658: bc    12, 2, 0x7F31D6B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D6B0;
        }
    }

label_7F31D65C:
    ctx->pc = 0x7F31D65Cu;
    ctx->downcount -= 1;
    // 7F31D65C: bc    4, 0, 0x7F31D66C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31D66C;
        }
    }

label_7F31D660:
    ctx->pc = 0x7F31D660u;
    ctx->downcount -= 2;
    // 7F31D660: cmpwi   r0, -128
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

label_7F31D664:
    ctx->pc = 0x7F31D664u;
    // 7F31D664: bc    12, 2, 0x7F31D6C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D6C8;
        }
    }

label_7F31D668:
    ctx->pc = 0x7F31D668u;
    ctx->downcount -= 1;
    // 7F31D668: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31D66C:
    ctx->pc = 0x7F31D66Cu;
    ctx->downcount -= 2;
    // 7F31D66C: cmpwi   r0, -9
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-9);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31D670:
    ctx->pc = 0x7F31D670u;
    // 7F31D670: bc    12, 2, 0x7F31D6A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D6A4;
        }
    }

label_7F31D674:
    ctx->pc = 0x7F31D674u;
    ctx->downcount -= 1;
    // 7F31D674: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31D678:
    ctx->pc = 0x7F31D678u;
    ctx->downcount -= 2;
    // 7F31D678: cmpwi   r0, -2
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31D67C:
    ctx->pc = 0x7F31D67Cu;
    // 7F31D67C: bc    12, 2, 0x7F31D698
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D698;
        }
    }

label_7F31D680:
    ctx->pc = 0x7F31D680u;
    ctx->downcount -= 1;
    // 7F31D680: bclr  4, 0
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31D684:
    ctx->pc = 0x7F31D684u;
    ctx->downcount -= 2;
    // 7F31D684: cmpwi   r0, -4
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31D688:
    ctx->pc = 0x7F31D688u;
    // 7F31D688: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31D68C:
    ctx->pc = 0x7F31D68Cu;
    ctx->downcount -= 1;
    // 7F31D68C: bclr  4, 0
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31D690:
    ctx->pc = 0x7F31D690u;
    ctx->downcount -= 1;
    // 7F31D690: b       0x7F31D6C8
    {
            goto label_7F31D6C8;
    }

label_7F31D694:
    ctx->pc = 0x7F31D694u;
    ctx->downcount -= 1;
    // 7F31D694: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31D698:
    ctx->pc = 0x7F31D698u;
    ctx->downcount -= 3;
    // 7F31D698: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F31D69C:
    ctx->pc = 0x7F31D69Cu;
    // 7F31D69C: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D6A0:
    ctx->pc = 0x7F31D6A0u;
    // 7F31D6A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31D6A4:
    ctx->pc = 0x7F31D6A4u;
    ctx->downcount -= 3;
    // 7F31D6A4: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F31D6A8:
    ctx->pc = 0x7F31D6A8u;
    // 7F31D6A8: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D6AC:
    ctx->pc = 0x7F31D6ACu;
    // 7F31D6AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31D6B0:
    ctx->pc = 0x7F31D6B0u;
    ctx->downcount -= 3;
    // 7F31D6B0: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F31D6B4:
    ctx->pc = 0x7F31D6B4u;
    // 7F31D6B4: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D6B8:
    ctx->pc = 0x7F31D6B8u;
    // 7F31D6B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31D6BC:
    ctx->pc = 0x7F31D6BCu;
    ctx->downcount -= 3;
    // 7F31D6BC: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F31D6C0:
    ctx->pc = 0x7F31D6C0u;
    // 7F31D6C0: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D6C4:
    ctx->pc = 0x7F31D6C4u;
    // 7F31D6C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31D6C8:
    ctx->pc = 0x7F31D6C8u;
    ctx->downcount -= 3;
    // 7F31D6C8: li      r0, 20
    ctx->gpr[0] = (u32)(s32)(20);

label_7F31D6CC:
    ctx->pc = 0x7F31D6CCu;
    // 7F31D6CC: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D6D0:
    ctx->pc = 0x7F31D6D0u;
    // 7F31D6D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31D6D4:
    ctx->pc = 0x7F31D6D4u;
    ctx->downcount -= 9;
    // 7F31D6D4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31D6D8:
    ctx->pc = 0x7F31D6D8u;
    // 7F31D6D8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31D6DC:
    ctx->pc = 0x7F31D6DCu;
    // 7F31D6DC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D6E0:
    ctx->pc = 0x7F31D6E0u;
    // 7F31D6E0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F31D6E4:
    ctx->pc = 0x7F31D6E4u;
    // 7F31D6E4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31D6E8:
    ctx->pc = 0x7F31D6E8u;
    // 7F31D6E8: lbz     r4, 96(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(96);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F31D6EC:
    ctx->pc = 0x7F31D6ECu;
    // 7F31D6EC: addi    r3, r31, 96
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(96);

label_7F31D6F0:
    ctx->pc = 0x7F31D6F0u;
    // 7F31D6F0: extsb r4, r4
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[4];
    }

label_7F31D6F4:
    ctx->pc = 0x7F31D6F4u;
    // 7F31D6F4: bl      0x7F3123F0
    {
            ctx->lr = 0x7F31D6F8u;
            ctx->pc = 0x7F3123F0u;
            return;
    }

label_7F31D6F8:
    ctx->pc = 0x7F31D6F8u;
    ctx->downcount -= 12;
    // 7F31D6F8: lbz     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31D6FC:
    ctx->pc = 0x7F31D6FCu;
    // 7F31D6FC: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F31D700:
    ctx->pc = 0x7F31D700u;
    // 7F31D700: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F31D704:
    ctx->pc = 0x7F31D704u;
    // 7F31D704: add   r4, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F31D708:
    ctx->pc = 0x7F31D708u;
    // 7F31D708: sth     r3, 30944(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(30944);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F31D70C:
    ctx->pc = 0x7F31D70Cu;
    // 7F31D70C: lbz     r4, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F31D710:
    ctx->pc = 0x7F31D710u;
    // 7F31D710: extsb r0, r4
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[4];
    }

label_7F31D714:
    ctx->pc = 0x7F31D714u;
    // 7F31D714: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F31D718:
    ctx->pc = 0x7F31D718u;
    // 7F31D718: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F31D71C:
    ctx->pc = 0x7F31D71Cu;
    // 7F31D71C: lha     r0, 30944(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(30944);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F31D720:
    ctx->pc = 0x7F31D720u;
    // 7F31D720: cmpwi   r0, -1
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

label_7F31D724:
    ctx->pc = 0x7F31D724u;
    // 7F31D724: bc    12, 2, 0x7F31D748
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D748;
        }
    }

label_7F31D728:
    ctx->pc = 0x7F31D728u;
    ctx->downcount -= 1;
    // 7F31D728: bc    4, 0, 0x7F31D758
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31D758;
        }
    }

label_7F31D72C:
    ctx->pc = 0x7F31D72Cu;
    ctx->downcount -= 2;
    // 7F31D72C: cmpwi   r0, -128
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

label_7F31D730:
    ctx->pc = 0x7F31D730u;
    // 7F31D730: bc    12, 2, 0x7F31D750
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D750;
        }
    }

label_7F31D734:
    ctx->pc = 0x7F31D734u;
    ctx->downcount -= 1;
    // 7F31D734: bc    12, 0, 0x7F31D758
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D758;
        }
    }

label_7F31D738:
    ctx->pc = 0x7F31D738u;
    ctx->downcount -= 2;
    // 7F31D738: cmpwi   r0, -3
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31D73C:
    ctx->pc = 0x7F31D73Cu;
    // 7F31D73C: bc    4, 0, 0x7F31D750
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31D750;
        }
    }

label_7F31D740:
    ctx->pc = 0x7F31D740u;
    ctx->downcount -= 1;
    // 7F31D740: b       0x7F31D758
    {
            goto label_7F31D758;
    }

label_7F31D744:
    ctx->pc = 0x7F31D744u;
    ctx->downcount -= 1;
    // 7F31D744: b       0x7F31D758
    {
            goto label_7F31D758;
    }

label_7F31D748:
    ctx->pc = 0x7F31D748u;
    ctx->downcount -= 2;
    // 7F31D748: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F31D74C:
    ctx->pc = 0x7F31D74Cu;
    // 7F31D74C: b       0x7F31D7E8
    {
            goto label_7F31D7E8;
    }

label_7F31D750:
    ctx->pc = 0x7F31D750u;
    ctx->downcount -= 2;
    // 7F31D750: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31D754:
    ctx->pc = 0x7F31D754u;
    // 7F31D754: b       0x7F31D7E8
    {
            goto label_7F31D7E8;
    }

label_7F31D758:
    ctx->pc = 0x7F31D758u;
    ctx->downcount -= 3;
    // 7F31D758: addi    r3, r31, 96
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(96);

label_7F31D75C:
    ctx->pc = 0x7F31D75Cu;
    // 7F31D75C: extsb r4, r4
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[4];
    }

label_7F31D760:
    ctx->pc = 0x7F31D760u;
    // 7F31D760: bl      0x7F312AE0
    {
            ctx->lr = 0x7F31D764u;
            ctx->pc = 0x7F312AE0u;
            return;
    }

label_7F31D764:
    ctx->pc = 0x7F31D764u;
    ctx->downcount -= 12;
    // 7F31D764: lbz     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31D768:
    ctx->pc = 0x7F31D768u;
    // 7F31D768: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F31D76C:
    ctx->pc = 0x7F31D76Cu;
    // 7F31D76C: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F31D770:
    ctx->pc = 0x7F31D770u;
    // 7F31D770: add   r4, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F31D774:
    ctx->pc = 0x7F31D774u;
    // 7F31D774: sth     r3, 30944(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(30944);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F31D778:
    ctx->pc = 0x7F31D778u;
    // 7F31D778: lbz     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31D77C:
    ctx->pc = 0x7F31D77Cu;
    // 7F31D77C: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F31D780:
    ctx->pc = 0x7F31D780u;
    // 7F31D780: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F31D784:
    ctx->pc = 0x7F31D784u;
    // 7F31D784: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F31D788:
    ctx->pc = 0x7F31D788u;
    // 7F31D788: lha     r0, 30944(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(30944);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F31D78C:
    ctx->pc = 0x7F31D78Cu;
    // 7F31D78C: cmpwi   r0, -6
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31D790:
    ctx->pc = 0x7F31D790u;
    // 7F31D790: bc    4, 0, 0x7F31D7B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31D7B8;
        }
    }

label_7F31D794:
    ctx->pc = 0x7F31D794u;
    ctx->downcount -= 2;
    // 7F31D794: cmpwi   r0, -13
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-13);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31D798:
    ctx->pc = 0x7F31D798u;
    // 7F31D798: bc    12, 2, 0x7F31D7DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D7DC;
        }
    }

label_7F31D79C:
    ctx->pc = 0x7F31D79Cu;
    ctx->downcount -= 1;
    // 7F31D79C: bc    4, 0, 0x7F31D7AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31D7AC;
        }
    }

label_7F31D7A0:
    ctx->pc = 0x7F31D7A0u;
    ctx->downcount -= 2;
    // 7F31D7A0: cmpwi   r0, -128
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

label_7F31D7A4:
    ctx->pc = 0x7F31D7A4u;
    // 7F31D7A4: bc    12, 2, 0x7F31D7DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D7DC;
        }
    }

label_7F31D7A8:
    ctx->pc = 0x7F31D7A8u;
    ctx->downcount -= 1;
    // 7F31D7A8: b       0x7F31D7E4
    {
            goto label_7F31D7E4;
    }

label_7F31D7AC:
    ctx->pc = 0x7F31D7ACu;
    ctx->downcount -= 2;
    // 7F31D7AC: cmpwi   r0, -9
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-9);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31D7B0:
    ctx->pc = 0x7F31D7B0u;
    // 7F31D7B0: bc    12, 2, 0x7F31D7DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D7DC;
        }
    }

label_7F31D7B4:
    ctx->pc = 0x7F31D7B4u;
    ctx->downcount -= 1;
    // 7F31D7B4: b       0x7F31D7E4
    {
            goto label_7F31D7E4;
    }

label_7F31D7B8:
    ctx->pc = 0x7F31D7B8u;
    ctx->downcount -= 2;
    // 7F31D7B8: cmpwi   r0, -1
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

label_7F31D7BC:
    ctx->pc = 0x7F31D7BCu;
    // 7F31D7BC: bc    12, 2, 0x7F31D7D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D7D4;
        }
    }

label_7F31D7C0:
    ctx->pc = 0x7F31D7C0u;
    ctx->downcount -= 1;
    // 7F31D7C0: bc    4, 0, 0x7F31D7E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31D7E4;
        }
    }

label_7F31D7C4:
    ctx->pc = 0x7F31D7C4u;
    ctx->downcount -= 2;
    // 7F31D7C4: cmpwi   r0, -4
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31D7C8:
    ctx->pc = 0x7F31D7C8u;
    // 7F31D7C8: bc    12, 2, 0x7F31D7E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D7E4;
        }
    }

label_7F31D7CC:
    ctx->pc = 0x7F31D7CCu;
    ctx->downcount -= 1;
    // 7F31D7CC: b       0x7F31D7DC
    {
            goto label_7F31D7DC;
    }

label_7F31D7D0:
    ctx->pc = 0x7F31D7D0u;
    ctx->downcount -= 1;
    // 7F31D7D0: b       0x7F31D7E4
    {
            goto label_7F31D7E4;
    }

label_7F31D7D4:
    ctx->pc = 0x7F31D7D4u;
    ctx->downcount -= 2;
    // 7F31D7D4: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F31D7D8:
    ctx->pc = 0x7F31D7D8u;
    // 7F31D7D8: b       0x7F31D7E8
    {
            goto label_7F31D7E8;
    }

label_7F31D7DC:
    ctx->pc = 0x7F31D7DCu;
    ctx->downcount -= 2;
    // 7F31D7DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31D7E0:
    ctx->pc = 0x7F31D7E0u;
    // 7F31D7E0: b       0x7F31D7E8
    {
            goto label_7F31D7E8;
    }

label_7F31D7E4:
    ctx->pc = 0x7F31D7E4u;
    ctx->downcount -= 1;
    // 7F31D7E4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F31D7E8:
    ctx->pc = 0x7F31D7E8u;
    ctx->downcount -= 6;
    // 7F31D7E8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31D7EC:
    ctx->pc = 0x7F31D7ECu;
    // 7F31D7EC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F31D7F0:
    ctx->pc = 0x7F31D7F0u;
    // 7F31D7F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31D7F4:
    ctx->pc = 0x7F31D7F4u;
    // 7F31D7F4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F31D7F8:
    ctx->pc = 0x7F31D7F8u;
    // 7F31D7F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31D7FC:
    ctx->pc = 0x7F31D7FCu;
    ctx->downcount -= 16;
    // 7F31D7FC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31D800:
    ctx->pc = 0x7F31D800u;
    // 7F31D800: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31D804:
    ctx->pc = 0x7F31D804u;
    // 7F31D804: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D808:
    ctx->pc = 0x7F31D808u;
    // 7F31D808: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F31D80C:
    ctx->pc = 0x7F31D80Cu;
    // 7F31D80C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31D810:
    ctx->pc = 0x7F31D810u;
    // 7F31D810: bl      0x8004DB8C
    {
            ctx->lr = 0x7F31D814u;
            ctx->pc = 0x8004DB8Cu;
            return;
    }

label_7F31D814:
    ctx->pc = 0x7F31D814u;
    ctx->downcount -= 4;
    // 7F31D814: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31D818:
    ctx->pc = 0x7F31D818u;
    // 7F31D818: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31D81C:
    ctx->pc = 0x7F31D81Cu;
    // 7F31D81C: cmpwi   r0, 5
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

label_7F31D820:
    ctx->pc = 0x7F31D820u;
    // 7F31D820: bc    12, 2, 0x7F31D954
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D954;
        }
    }

label_7F31D824:
    ctx->pc = 0x7F31D824u;
    ctx->downcount -= 1;
    // 7F31D824: bc    4, 0, 0x7F31D840
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31D840;
        }
    }

label_7F31D828:
    ctx->pc = 0x7F31D828u;
    ctx->downcount -= 2;
    // 7F31D828: cmpwi   r0, 0
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

label_7F31D82C:
    ctx->pc = 0x7F31D82Cu;
    // 7F31D82C: bc    12, 2, 0x7F31D850
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D850;
        }
    }

label_7F31D830:
    ctx->pc = 0x7F31D830u;
    ctx->downcount -= 1;
    // 7F31D830: bc    12, 0, 0x7F31D9E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D9E8;
        }
    }

label_7F31D834:
    ctx->pc = 0x7F31D834u;
    ctx->downcount -= 2;
    // 7F31D834: cmpwi   r0, 4
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

label_7F31D838:
    ctx->pc = 0x7F31D838u;
    // 7F31D838: bc    4, 0, 0x7F31D8A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31D8A8;
        }
    }

label_7F31D83C:
    ctx->pc = 0x7F31D83Cu;
    ctx->downcount -= 1;
    // 7F31D83C: b       0x7F31D9E8
    {
            goto label_7F31D9E8;
    }

label_7F31D840:
    ctx->pc = 0x7F31D840u;
    ctx->downcount -= 2;
    // 7F31D840: cmpwi   r0, 7
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

label_7F31D844:
    ctx->pc = 0x7F31D844u;
    // 7F31D844: bc    12, 2, 0x7F31D9D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31D9D8;
        }
    }

label_7F31D848:
    ctx->pc = 0x7F31D848u;
    ctx->downcount -= 1;
    // 7F31D848: bc    4, 0, 0x7F31D9E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31D9E8;
        }
    }

label_7F31D84C:
    ctx->pc = 0x7F31D84Cu;
    ctx->downcount -= 1;
    // 7F31D84C: b       0x7F31D9C0
    {
            goto label_7F31D9C0;
    }

label_7F31D850:
    ctx->pc = 0x7F31D850u;
    ctx->downcount -= 3;
    // 7F31D850: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F31D854:
    ctx->pc = 0x7F31D854u;
    // 7F31D854: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F31D858:
    ctx->pc = 0x7F31D858u;
    // 7F31D858: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D85C:
    ctx->pc = 0x7F31D85Cu;
    ctx->downcount -= 3;
    // 7F31D85C: stb     r29, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write8(ctx, ea, (u8)ctx->gpr[29]);
    }

label_7F31D860:
    // 7F31D860: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31D864:
    // 7F31D864: bl      0x7F31D6D4
    {
            ctx->lr = 0x7F31D868u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31D6D4u;
                return;
            }
            goto label_7F31D6D4;
    }

label_7F31D868:
    ctx->downcount -= 2;
    // 7F31D868: cmpwi   r3, 1
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

label_7F31D86C:
    // 7F31D86C: bc    4, 2, 0x7F31D87C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31D87C;
        }
    }

label_7F31D870:
    ctx->downcount -= 3;
    // 7F31D870: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F31D874:
    ctx->pc = 0x7F31D874u;
    // 7F31D874: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D878:
    // 7F31D878: b       0x7F31D89C
    {
            goto label_7F31D89C;
    }

label_7F31D87C:
    ctx->downcount -= 2;
    // 7F31D87C: cmpwi   r3, -1
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

label_7F31D880:
    // 7F31D880: bc    4, 2, 0x7F31D890
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31D890;
        }
    }

label_7F31D884:
    ctx->downcount -= 3;
    // 7F31D884: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31D888:
    ctx->pc = 0x7F31D888u;
    // 7F31D888: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D88C:
    // 7F31D88C: b       0x7F31D89C
    {
            goto label_7F31D89C;
    }

label_7F31D890:
    ctx->downcount -= 3;
    // 7F31D890: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F31D894:
    // 7F31D894: cmpwi   r29, 2
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

label_7F31D898:
    // 7F31D898: bc    12, 0, 0x7F31D85C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31D85Cu;
                return;
            }
            goto label_7F31D85C;
        }
    }

label_7F31D89C:
    ctx->pc = 0x7F31D89Cu;
    ctx->downcount -= 3;
    // 7F31D89C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31D8A0:
    ctx->pc = 0x7F31D8A0u;
    // 7F31D8A0: stb     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F31D8A4:
    ctx->pc = 0x7F31D8A4u;
    // 7F31D8A4: b       0x7F31D9E8
    {
            goto label_7F31D9E8;
    }

label_7F31D8A8:
    ctx->pc = 0x7F31D8A8u;
    ctx->downcount -= 4;
    // 7F31D8A8: li      r0, 7
    ctx->gpr[0] = (u32)(s32)(7);

label_7F31D8AC:
    ctx->pc = 0x7F31D8ACu;
    // 7F31D8AC: addi    r3, r31, 96
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(96);

label_7F31D8B0:
    ctx->pc = 0x7F31D8B0u;
    // 7F31D8B0: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D8B4:
    ctx->pc = 0x7F31D8B4u;
    // 7F31D8B4: bl      0x7F312888
    {
            ctx->lr = 0x7F31D8B8u;
            ctx->pc = 0x7F312888u;
            return;
    }

label_7F31D8B8:
    ctx->pc = 0x7F31D8B8u;
    ctx->downcount -= 3;
    // 7F31D8B8: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F31D8BC:
    ctx->pc = 0x7F31D8BCu;
    // 7F31D8BC: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F31D8C0:
    ctx->pc = 0x7F31D8C0u;
    // 7F31D8C0: addi    r30, r3, -25020
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(-25020);

label_7F31D8C4:
    ctx->pc = 0x7F31D8C4u;
    ctx->downcount -= 8;
    // 7F31D8C4: stb     r29, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write8(ctx, ea, (u8)ctx->gpr[29]);
    }

label_7F31D8C8:
    // 7F31D8C8: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F31D8CC:
    // 7F31D8CC: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F31D8D0:
    // 7F31D8D0: addi    r3, r31, 96
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(96);

label_7F31D8D4:
    ctx->pc = 0x7F31D8D4u;
    // 7F31D8D4: lbz     r7, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_7F31D8D8:
    // 7F31D8D8: addi    r6, r28, 4
    ctx->gpr[6] = ctx->gpr[28] + (u32)(s32)(4);

label_7F31D8DC:
    // 7F31D8DC: extsb r7, r7
    {
        ctx->gpr[7] = (u32)(s32)(s8)ctx->gpr[7];
    }

label_7F31D8E0:
    // 7F31D8E0: bl      0x7F3128EC
    {
            ctx->lr = 0x7F31D8E4u;
            ctx->pc = 0x7F3128ECu;
            return;
    }

label_7F31D8E4:
    ctx->downcount -= 3;
    // 7F31D8E4: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F31D8E8:
    // 7F31D8E8: cmpwi   r29, 2
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

label_7F31D8EC:
    // 7F31D8EC: bc    12, 0, 0x7F31D8C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31D8C4u;
                return;
            }
            goto label_7F31D8C4;
        }
    }

label_7F31D8F0:
    ctx->pc = 0x7F31D8F0u;
    ctx->downcount -= 3;
    // 7F31D8F0: lbz     r0, 16488(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16488);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31D8F4:
    ctx->pc = 0x7F31D8F4u;
    // 7F31D8F4: extsb. r0, r0
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

label_7F31D8F8:
    ctx->pc = 0x7F31D8F8u;
    // 7F31D8F8: bc    4, 1, 0x7F31D948
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31D948;
        }
    }

label_7F31D8FC:
    ctx->pc = 0x7F31D8FCu;
    ctx->downcount -= 1;
    // 7F31D8FC: bl      0x7F31225C
    {
            ctx->lr = 0x7F31D900u;
            ctx->pc = 0x7F31225Cu;
            return;
    }

label_7F31D900:
    ctx->pc = 0x7F31D900u;
    ctx->downcount -= 4;
    // 7F31D900: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31D904:
    ctx->pc = 0x7F31D904u;
    // 7F31D904: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F31D908:
    ctx->pc = 0x7F31D908u;
    // 7F31D908: or   r28, r0, r0
    {
        ctx->gpr[28] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F31D90C:
    ctx->pc = 0x7F31D90Cu;
    // 7F31D90C: bl      0x7F31224C
    {
            ctx->lr = 0x7F31D910u;
            ctx->pc = 0x7F31224Cu;
            return;
    }

label_7F31D910:
    ctx->pc = 0x7F31D910u;
    ctx->downcount -= 6;
    // 7F31D910: lbz     r0, 16488(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16488);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31D914:
    ctx->pc = 0x7F31D914u;
    // 7F31D914: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31D918:
    ctx->pc = 0x7F31D918u;
    // 7F31D918: extsb. r0, r0
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

label_7F31D91C:
    ctx->pc = 0x7F31D91Cu;
    // 7F31D91C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F31D920:
    ctx->pc = 0x7F31D920u;
    // 7F31D920: bc    4, 1, 0x7F31D93C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31D93C;
        }
    }

label_7F31D924:
    loop_7F31D924(ctx);
    if (ctx->pc == 0x7F31D93Cu) goto label_7F31D93C;
    return;
label_7F31D928:
    // 7F31D928: addi    r3, r3, 108
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(108);

label_7F31D92C:
    ctx->pc = 0x7F31D92Cu;
    // 7F31D92C: lbzx    r0, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31D930:
    // 7F31D930: or   r0, r28, r0
    {
        ctx->gpr[0] = ctx->gpr[28] | ctx->gpr[0];
    }

label_7F31D934:
    // 7F31D934: rlwinm r28, r0, 0, 24, 31
    {
        ctx->gpr[28] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_7F31D938:
    // 7F31D938: bc    16, 0, 0x7F31D924
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31D924u;
                return;
            }
            goto label_7F31D924;
        }
    }

label_7F31D93C:
    ctx->pc = 0x7F31D93Cu;
    ctx->downcount -= 2;
    // 7F31D93C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F31D940:
    ctx->pc = 0x7F31D940u;
    // 7F31D940: bl      0x7F31226C
    {
            ctx->lr = 0x7F31D944u;
            ctx->pc = 0x7F31226Cu;
            return;
    }

label_7F31D944:
    ctx->pc = 0x7F31D944u;
    ctx->downcount -= 1;
    // 7F31D944: b       0x7F31D9E8
    {
            goto label_7F31D9E8;
    }

label_7F31D948:
    ctx->pc = 0x7F31D948u;
    ctx->downcount -= 2;
    // 7F31D948: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31D94C:
    ctx->pc = 0x7F31D94Cu;
    // 7F31D94C: bl      0x7F31224C
    {
            ctx->lr = 0x7F31D950u;
            ctx->pc = 0x7F31224Cu;
            return;
    }

label_7F31D950:
    ctx->pc = 0x7F31D950u;
    ctx->downcount -= 1;
    // 7F31D950: b       0x7F31D9E8
    {
            goto label_7F31D9E8;
    }

label_7F31D954:
    ctx->pc = 0x7F31D954u;
    ctx->downcount -= 11;
    // 7F31D954: li      r0, 51
    ctx->gpr[0] = (u32)(s32)(51);

label_7F31D958:
    ctx->pc = 0x7F31D958u;
    // 7F31D958: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F31D95C:
    ctx->pc = 0x7F31D95Cu;
    // 7F31D95C: stb     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F31D960:
    ctx->pc = 0x7F31D960u;
    // 7F31D960: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F31D964:
    ctx->pc = 0x7F31D964u;
    // 7F31D964: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F31D968:
    ctx->pc = 0x7F31D968u;
    // 7F31D968: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F31D96C:
    ctx->pc = 0x7F31D96Cu;
    // 7F31D96C: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_7F31D970:
    ctx->pc = 0x7F31D970u;
    // 7F31D970: li      r8, 20
    ctx->gpr[8] = (u32)(s32)(20);

label_7F31D974:
    ctx->pc = 0x7F31D974u;
    // 7F31D974: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F31D978:
    ctx->pc = 0x7F31D978u;
    // 7F31D978: li      r10, 7
    ctx->gpr[10] = (u32)(s32)(7);

label_7F31D97C:
    ctx->pc = 0x7F31D97Cu;
    // 7F31D97C: bl      0x80051548
    {
            ctx->lr = 0x7F31D980u;
            ctx->pc = 0x80051548u;
            return;
    }

label_7F31D980:
    ctx->pc = 0x7F31D980u;
    ctx->downcount -= 11;
    // 7F31D980: addis   r4, r31, 1
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F31D984:
    ctx->pc = 0x7F31D984u;
    // 7F31D984: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F31D988:
    ctx->pc = 0x7F31D988u;
    // 7F31D988: stb     r0, 14301(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(14301);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F31D98C:
    ctx->pc = 0x7F31D98Cu;
    // 7F31D98C: lis     r3, 68
    ctx->gpr[3] = ((u32)(s32)(68) << 16);

label_7F31D990:
    ctx->pc = 0x7F31D990u;
    // 7F31D990: addi    r0, r3, -25056
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-25056);

label_7F31D994:
    ctx->pc = 0x7F31D994u;
    // 7F31D994: addi    r4, r4, 14304
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14304);

label_7F31D998:
    ctx->pc = 0x7F31D998u;
    // 7F31D998: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D99C:
    ctx->pc = 0x7F31D99Cu;
    // 7F31D99C: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_7F31D9A0:
    ctx->pc = 0x7F31D9A0u;
    // 7F31D9A0: addi    r3, r31, 96
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(96);

label_7F31D9A4:
    ctx->pc = 0x7F31D9A4u;
    // 7F31D9A4: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31D9A8:
    ctx->pc = 0x7F31D9A8u;
    // 7F31D9A8: bl      0x7F31D580
    {
            ctx->lr = 0x7F31D9ACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31D580u;
                return;
            }
            goto label_7F31D580;
    }

label_7F31D9AC:
    ctx->pc = 0x7F31D9ACu;
    ctx->downcount -= 4;
    // 7F31D9AC: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F31D9B0:
    ctx->pc = 0x7F31D9B0u;
    // 7F31D9B0: lbz     r4, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F31D9B4:
    ctx->pc = 0x7F31D9B4u;
    // 7F31D9B4: addi    r3, r3, 14292
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14292);

label_7F31D9B8:
    ctx->pc = 0x7F31D9B8u;
    // 7F31D9B8: bl      0x7F314F54
    {
            ctx->lr = 0x7F31D9BCu;
            ctx->pc = 0x7F314F54u;
            return;
    }

label_7F31D9BC:
    ctx->pc = 0x7F31D9BCu;
    ctx->downcount -= 1;
    // 7F31D9BC: b       0x7F31D9E8
    {
            goto label_7F31D9E8;
    }

label_7F31D9C0:
    ctx->pc = 0x7F31D9C0u;
    ctx->downcount -= 5;
    // 7F31D9C0: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F31D9C4:
    ctx->pc = 0x7F31D9C4u;
    // 7F31D9C4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F31D9C8:
    ctx->pc = 0x7F31D9C8u;
    // 7F31D9C8: stb     r0, 14301(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14301);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F31D9CC:
    ctx->pc = 0x7F31D9CCu;
    // 7F31D9CC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31D9D0:
    ctx->pc = 0x7F31D9D0u;
    // 7F31D9D0: bl      0x7F31D1C8
    {
            ctx->lr = 0x7F31D9D4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31D1C8u;
                return;
            }
            goto label_7F31D1C8;
    }

label_7F31D9D4:
    ctx->pc = 0x7F31D9D4u;
    ctx->downcount -= 1;
    // 7F31D9D4: b       0x7F31D9E8
    {
            goto label_7F31D9E8;
    }

label_7F31D9D8:
    ctx->pc = 0x7F31D9D8u;
    ctx->downcount -= 2;
    // 7F31D9D8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31D9DC:
    ctx->pc = 0x7F31D9DCu;
    // 7F31D9DC: bl      0x7F31D528
    {
            ctx->lr = 0x7F31D9E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31D528u;
                return;
            }
            goto label_7F31D528;
    }

label_7F31D9E0:
    ctx->pc = 0x7F31D9E0u;
    ctx->downcount -= 2;
    // 7F31D9E0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31D9E4:
    ctx->pc = 0x7F31D9E4u;
    // 7F31D9E4: bl      0x7F3C8210
    {
            ctx->lr = 0x7F31D9E8u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F31D9E8:
    ctx->pc = 0x7F31D9E8u;
    ctx->downcount -= 16;
    // 7F31D9E8: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F31D9EC:
    ctx->pc = 0x7F31D9ECu;
    // 7F31D9EC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31D9F0:
    ctx->pc = 0x7F31D9F0u;
    // 7F31D9F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31D9F4:
    ctx->pc = 0x7F31D9F4u;
    // 7F31D9F4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F31D9F8:
    ctx->pc = 0x7F31D9F8u;
    // 7F31D9F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31D9FC:
    ctx->pc = 0x7F31D9FCu;
    ctx->downcount -= 7;
    // 7F31D9FC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31DA00:
    ctx->pc = 0x7F31DA00u;
    // 7F31DA00: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31DA04:
    ctx->pc = 0x7F31DA04u;
    // 7F31DA04: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31DA08:
    ctx->pc = 0x7F31DA08u;
    // 7F31DA08: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F31DA0C:
    ctx->pc = 0x7F31DA0Cu;
    // 7F31DA0C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31DA10:
    ctx->pc = 0x7F31DA10u;
    // 7F31DA10: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31DA14:
    ctx->pc = 0x7F31DA14u;
    // 7F31DA14: bl      0x7F312524
    {
            ctx->lr = 0x7F31DA18u;
            ctx->pc = 0x7F312524u;
            return;
    }

label_7F31DA18:
    ctx->pc = 0x7F31DA18u;
    ctx->downcount -= 2;
    // 7F31DA18: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F31DA1C:
    ctx->pc = 0x7F31DA1Cu;
    // 7F31DA1C: bl      0x7F312524
    {
            ctx->lr = 0x7F31DA20u;
            ctx->pc = 0x7F312524u;
            return;
    }

label_7F31DA20:
    ctx->pc = 0x7F31DA20u;
    ctx->downcount -= 2;
    // 7F31DA20: lwz     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31DA24:
    ctx->pc = 0x7F31DA24u;
    // 7F31DA24: bl      0x7F2E50A0
    {
            ctx->lr = 0x7F31DA28u;
            ctx->pc = 0x7F2E50A0u;
            return;
    }

label_7F31DA28:
    ctx->pc = 0x7F31DA28u;
    ctx->downcount -= 2;
    // 7F31DA28: cmpwi   r3, 0
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

label_7F31DA2C:
    ctx->pc = 0x7F31DA2Cu;
    // 7F31DA2C: bc    4, 2, 0x7F31DA60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31DA60;
        }
    }

label_7F31DA30:
    ctx->pc = 0x7F31DA30u;
    ctx->downcount -= 5;
    // 7F31DA30: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31DA34:
    ctx->pc = 0x7F31DA34u;
    // 7F31DA34: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31DA38:
    ctx->pc = 0x7F31DA38u;
    // 7F31DA38: lwz     r4, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31DA3C:
    ctx->pc = 0x7F31DA3Cu;
    // 7F31DA3C: cmpwi   r4, 0
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

label_7F31DA40:
    ctx->pc = 0x7F31DA40u;
    // 7F31DA40: bc    12, 2, 0x7F31DA68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31DA68;
        }
    }

label_7F31DA44:
    ctx->pc = 0x7F31DA44u;
    ctx->downcount -= 2;
    // 7F31DA44: lwz     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31DA48:
    ctx->pc = 0x7F31DA48u;
    // 7F31DA48: bl      0x7F2E4C98
    {
            ctx->lr = 0x7F31DA4Cu;
            ctx->pc = 0x7F2E4C98u;
            return;
    }

label_7F31DA4C:
    ctx->pc = 0x7F31DA4Cu;
    ctx->downcount -= 5;
    // 7F31DA4C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31DA50:
    ctx->pc = 0x7F31DA50u;
    // 7F31DA50: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F31DA54:
    ctx->pc = 0x7F31DA54u;
    // 7F31DA54: stw     r3, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31DA58:
    ctx->pc = 0x7F31DA58u;
    // 7F31DA58: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31DA5C:
    ctx->pc = 0x7F31DA5Cu;
    // 7F31DA5C: b       0x7F31DA68
    {
            goto label_7F31DA68;
    }

label_7F31DA60:
    ctx->pc = 0x7F31DA60u;
    ctx->downcount -= 2;
    // 7F31DA60: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F31DA64:
    ctx->pc = 0x7F31DA64u;
    // 7F31DA64: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31DA68:
    ctx->pc = 0x7F31DA68u;
    ctx->downcount -= 6;
    // 7F31DA68: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F31DA6C:
    ctx->pc = 0x7F31DA6Cu;
    // 7F31DA6C: lwz     r6, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F31DA70:
    ctx->pc = 0x7F31DA70u;
    // 7F31DA70: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_7F31DA74:
    ctx->pc = 0x7F31DA74u;
    // 7F31DA74: li      r5, 20
    ctx->gpr[5] = (u32)(s32)(20);

label_7F31DA78:
    ctx->pc = 0x7F31DA78u;
    // 7F31DA78: addi    r3, r3, 14144
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14144);

label_7F31DA7C:
    ctx->pc = 0x7F31DA7Cu;
    // 7F31DA7C: bl      0x7F306FA4
    {
            ctx->lr = 0x7F31DA80u;
            ctx->pc = 0x7F306FA4u;
            return;
    }

label_7F31DA80:
    ctx->pc = 0x7F31DA80u;
    ctx->downcount -= 3;
    // 7F31DA80: lwz     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31DA84:
    ctx->pc = 0x7F31DA84u;
    // 7F31DA84: cmpwi   r0, 0
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

label_7F31DA88:
    ctx->pc = 0x7F31DA88u;
    // 7F31DA88: bc    4, 2, 0x7F31DA94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31DA94;
        }
    }

label_7F31DA8C:
    ctx->pc = 0x7F31DA8Cu;
    ctx->downcount -= 2;
    // 7F31DA8C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31DA90:
    ctx->pc = 0x7F31DA90u;
    // 7F31DA90: bl      0x7F31D7FC
    {
            ctx->lr = 0x7F31DA94u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31D7FCu;
                return;
            }
            goto label_7F31D7FC;
    }

label_7F31DA94:
    ctx->pc = 0x7F31DA94u;
    ctx->downcount -= 4;
    // 7F31DA94: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F31DA98:
    ctx->pc = 0x7F31DA98u;
    // 7F31DA98: lbz     r0, 14301(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14301);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31DA9C:
    ctx->pc = 0x7F31DA9Cu;
    // 7F31DA9C: cmplwi  r0, 0x0000
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

label_7F31DAA0:
    ctx->pc = 0x7F31DAA0u;
    // 7F31DAA0: bc    12, 2, 0x7F31DAB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31DAB0;
        }
    }

label_7F31DAA4:
    ctx->pc = 0x7F31DAA4u;
    ctx->downcount -= 2;
    // 7F31DAA4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31DAA8:
    ctx->pc = 0x7F31DAA8u;
    // 7F31DAA8: bl      0x7F31CE3C
    {
            ctx->lr = 0x7F31DAACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31CE3Cu;
                return;
            }
            goto label_7F31CE3C;
    }

label_7F31DAAC:
    ctx->pc = 0x7F31DAACu;
    ctx->downcount -= 1;
    // 7F31DAAC: b       0x7F31DAC0
    {
            goto label_7F31DAC0;
    }

label_7F31DAB0:
    ctx->pc = 0x7F31DAB0u;
    ctx->downcount -= 4;
    // 7F31DAB0: lwz     r3, 14296(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14296);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31DAB4:
    ctx->pc = 0x7F31DAB4u;
    // 7F31DAB4: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31DAB8:
    ctx->pc = 0x7F31DAB8u;
    // 7F31DAB8: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F31DABC:
    ctx->pc = 0x7F31DABCu;
    // 7F31DABC: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31DAC0:
    ctx->pc = 0x7F31DAC0u;
    ctx->downcount -= 6;
    // 7F31DAC0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31DAC4:
    ctx->pc = 0x7F31DAC4u;
    // 7F31DAC4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F31DAC8:
    ctx->pc = 0x7F31DAC8u;
    // 7F31DAC8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31DACC:
    ctx->pc = 0x7F31DACCu;
    // 7F31DACC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F31DAD0:
    ctx->pc = 0x7F31DAD0u;
    // 7F31DAD0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31DAD4:
    ctx->pc = 0x7F31DAD4u;
    ctx->downcount -= 6;
    // 7F31DAD4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31DAD8:
    ctx->pc = 0x7F31DAD8u;
    // 7F31DAD8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31DADC:
    ctx->pc = 0x7F31DADCu;
    // 7F31DADC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31DAE0:
    ctx->pc = 0x7F31DAE0u;
    // 7F31DAE0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F31DAE4:
    ctx->pc = 0x7F31DAE4u;
    // 7F31DAE4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31DAE8:
    ctx->pc = 0x7F31DAE8u;
    // 7F31DAE8: bl      0x7F312224
    {
            ctx->lr = 0x7F31DAECu;
            ctx->pc = 0x7F312224u;
            return;
    }

label_7F31DAEC:
    ctx->pc = 0x7F31DAECu;
    ctx->downcount -= 3;
    // 7F31DAEC: lwz     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31DAF0:
    ctx->pc = 0x7F31DAF0u;
    // 7F31DAF0: cmpwi   r3, 0
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

label_7F31DAF4:
    ctx->pc = 0x7F31DAF4u;
    // 7F31DAF4: bc    12, 0, 0x7F31DAFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31DAFC;
        }
    }

label_7F31DAF8:
    ctx->pc = 0x7F31DAF8u;
    ctx->downcount -= 1;
    // 7F31DAF8: bl      0x7F2E4F04
    {
            ctx->lr = 0x7F31DAFCu;
            ctx->pc = 0x7F2E4F04u;
            return;
    }

label_7F31DAFC:
    ctx->pc = 0x7F31DAFCu;
    ctx->downcount -= 3;
    // 7F31DAFC: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F31DB00:
    ctx->pc = 0x7F31DB00u;
    // 7F31DB00: addi    r3, r3, 14292
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14292);

label_7F31DB04:
    ctx->pc = 0x7F31DB04u;
    // 7F31DB04: bl      0x7F319298
    {
            ctx->lr = 0x7F31DB08u;
            ctx->pc = 0x7F319298u;
            return;
    }

label_7F31DB08:
    ctx->pc = 0x7F31DB08u;
    ctx->downcount -= 4;
    // 7F31DB08: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F31DB0C:
    ctx->pc = 0x7F31DB0Cu;
    // 7F31DB0C: lwz     r3, 14288(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14288);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31DB10:
    ctx->pc = 0x7F31DB10u;
    // 7F31DB10: cmplwi  r3, 0x0000
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

label_7F31DB14:
    ctx->pc = 0x7F31DB14u;
    // 7F31DB14: bc    12, 2, 0x7F31DB28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31DB28;
        }
    }

label_7F31DB18:
    ctx->pc = 0x7F31DB18u;
    ctx->downcount -= 1;
    // 7F31DB18: bl      0x7F3C82B4
    {
            ctx->lr = 0x7F31DB1Cu;
            ctx->pc = 0x7F3C82B4u;
            return;
    }

label_7F31DB1C:
    ctx->pc = 0x7F31DB1Cu;
    ctx->downcount -= 3;
    // 7F31DB1C: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F31DB20:
    ctx->pc = 0x7F31DB20u;
    // 7F31DB20: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31DB24:
    ctx->pc = 0x7F31DB24u;
    // 7F31DB24: stw     r0, 14288(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14288);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31DB28:
    ctx->pc = 0x7F31DB28u;
    ctx->downcount -= 6;
    // 7F31DB28: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31DB2C:
    ctx->pc = 0x7F31DB2Cu;
    // 7F31DB2C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F31DB30:
    ctx->pc = 0x7F31DB30u;
    // 7F31DB30: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31DB34:
    ctx->pc = 0x7F31DB34u;
    // 7F31DB34: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F31DB38:
    ctx->pc = 0x7F31DB38u;
    // 7F31DB38: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31DB3C:
    ctx->pc = 0x7F31DB3Cu;
    ctx->downcount -= 16;
    // 7F31DB3C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31DB40:
    ctx->pc = 0x7F31DB40u;
    // 7F31DB40: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31DB44:
    ctx->pc = 0x7F31DB44u;
    // 7F31DB44: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F31DB48:
    ctx->pc = 0x7F31DB48u;
    // 7F31DB48: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F31DB4C:
    ctx->pc = 0x7F31DB4Cu;
    // 7F31DB4C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31DB50:
    ctx->pc = 0x7F31DB50u;
    // 7F31DB50: li      r0, 60
    ctx->gpr[0] = (u32)(s32)(60);

label_7F31DB54:
    ctx->pc = 0x7F31DB54u;
    // 7F31DB54: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F31DB58:
    ctx->pc = 0x7F31DB58u;
    // 7F31DB58: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31DB5C:
    ctx->pc = 0x7F31DB5Cu;
    // 7F31DB5C: stw     r5, 76(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F31DB60:
    ctx->pc = 0x7F31DB60u;
    // 7F31DB60: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F31DB64:
    ctx->pc = 0x7F31DB64u;
    // 7F31DB64: stw     r3, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31DB68:
    ctx->pc = 0x7F31DB68u;
    // 7F31DB68: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F31DB6C:
    ctx->pc = 0x7F31DB6Cu;
    // 7F31DB6C: stw     r4, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F31DB70:
    ctx->pc = 0x7F31DB70u;
    // 7F31DB70: stw     r5, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F31DB74:
    ctx->pc = 0x7F31DB74u;
    // 7F31DB74: stw     r0, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31DB78:
    ctx->pc = 0x7F31DB78u;
    // 7F31DB78: bl      0x7F3C664C
    {
            ctx->lr = 0x7F31DB7Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F31DB7C:
    ctx->pc = 0x7F31DB7Cu;
    ctx->downcount -= 2;
    // 7F31DB7C: cmplwi  r3, 0x0000
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

label_7F31DB80:
    ctx->pc = 0x7F31DB80u;
    // 7F31DB80: bc    12, 2, 0x7F31DB8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31DB8C;
        }
    }

label_7F31DB84:
    ctx->pc = 0x7F31DB84u;
    ctx->downcount -= 1;
    // 7F31DB84: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F31DB88u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F31DB88:
    ctx->pc = 0x7F31DB88u;
    ctx->downcount -= 1;
    // 7F31DB88: stw     r3, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31DB8C:
    ctx->pc = 0x7F31DB8Cu;
    ctx->downcount -= 2;
    // 7F31DB8C: addi    r3, r31, 96
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(96);

label_7F31DB90:
    ctx->pc = 0x7F31DB90u;
    // 7F31DB90: bl      0x7F3121BC
    {
            ctx->lr = 0x7F31DB94u;
            ctx->pc = 0x7F3121BCu;
            return;
    }

label_7F31DB94:
    ctx->pc = 0x7F31DB94u;
    ctx->downcount -= 8;
    // 7F31DB94: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31DB98:
    ctx->pc = 0x7F31DB98u;
    // 7F31DB98: lis     r3, 145
    ctx->gpr[3] = ((u32)(s32)(145) << 16);

label_7F31DB9C:
    ctx->pc = 0x7F31DB9Cu;
    // 7F31DB9C: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31DBA0:
    ctx->pc = 0x7F31DBA0u;
    // 7F31DBA0: addi    r3, r3, 210
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(210);

label_7F31DBA4:
    ctx->pc = 0x7F31DBA4u;
    // 7F31DBA4: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F31DBA8:
    ctx->pc = 0x7F31DBA8u;
    // 7F31DBA8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F31DBAC:
    ctx->pc = 0x7F31DBACu;
    // 7F31DBAC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F31DBB0:
    ctx->pc = 0x7F31DBB0u;
    // 7F31DBB0: bl      0x7F2E4AE4
    {
            ctx->lr = 0x7F31DBB4u;
            ctx->pc = 0x7F2E4AE4u;
            return;
    }

label_7F31DBB4:
    ctx->pc = 0x7F31DBB4u;
    ctx->downcount -= 3;
    // 7F31DBB4: stw     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31DBB8:
    ctx->pc = 0x7F31DBB8u;
    // 7F31DBB8: lwz     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31DBBC:
    ctx->pc = 0x7F31DBBCu;
    // 7F31DBBC: bl      0x7F2E57F8
    {
            ctx->lr = 0x7F31DBC0u;
            ctx->pc = 0x7F2E57F8u;
            return;
    }

label_7F31DBC0:
    ctx->pc = 0x7F31DBC0u;
    ctx->downcount -= 4;
    // 7F31DBC0: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F31DBC4:
    ctx->pc = 0x7F31DBC4u;
    // 7F31DBC4: addi    r4, r31, 80
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(80);

label_7F31DBC8:
    ctx->pc = 0x7F31DBC8u;
    // 7F31DBC8: addi    r3, r3, 14292
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14292);

label_7F31DBCC:
    ctx->pc = 0x7F31DBCCu;
    // 7F31DBCC: bl      0x7F319320
    {
            ctx->lr = 0x7F31DBD0u;
            ctx->pc = 0x7F319320u;
            return;
    }

label_7F31DBD0:
    ctx->pc = 0x7F31DBD0u;
    ctx->downcount -= 2;
    // 7F31DBD0: cmpwi   r3, 0
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

label_7F31DBD4:
    ctx->pc = 0x7F31DBD4u;
    // 7F31DBD4: bc    4, 0, 0x7F31DBE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31DBE0;
        }
    }

label_7F31DBD8:
    ctx->pc = 0x7F31DBD8u;
    ctx->downcount -= 2;
    // 7F31DBD8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F31DBDC:
    ctx->pc = 0x7F31DBDCu;
    // 7F31DBDC: b       0x7F31DC6C
    {
            goto label_7F31DC6C;
    }

label_7F31DBE0:
    ctx->pc = 0x7F31DBE0u;
    ctx->downcount -= 5;
    // 7F31DBE0: addis   r4, r31, 1
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F31DBE4:
    ctx->pc = 0x7F31DBE4u;
    // 7F31DBE4: lwz     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31DBE8:
    ctx->pc = 0x7F31DBE8u;
    // 7F31DBE8: li      r5, 3239
    ctx->gpr[5] = (u32)(s32)(3239);

label_7F31DBEC:
    ctx->pc = 0x7F31DBECu;
    // 7F31DBEC: addi    r4, r4, 14292
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14292);

label_7F31DBF0:
    ctx->pc = 0x7F31DBF0u;
    // 7F31DBF0: bl      0x7F319418
    {
            ctx->lr = 0x7F31DBF4u;
            ctx->pc = 0x7F319418u;
            return;
    }

label_7F31DBF4:
    ctx->pc = 0x7F31DBF4u;
    ctx->downcount -= 2;
    // 7F31DBF4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31DBF8:
    ctx->pc = 0x7F31DBF8u;
    // 7F31DBF8: bl      0x7F312524
    {
            ctx->lr = 0x7F31DBFCu;
            ctx->pc = 0x7F312524u;
            return;
    }

label_7F31DBFC:
    ctx->pc = 0x7F31DBFCu;
    ctx->downcount -= 2;
    // 7F31DBFC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F31DC00:
    ctx->pc = 0x7F31DC00u;
    // 7F31DC00: bl      0x7F312524
    {
            ctx->lr = 0x7F31DC04u;
            ctx->pc = 0x7F312524u;
            return;
    }

label_7F31DC04:
    ctx->pc = 0x7F31DC04u;
    ctx->downcount -= 4;
    // 7F31DC04: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F31DC08:
    ctx->pc = 0x7F31DC08u;
    // 7F31DC08: li      r4, 512
    ctx->gpr[4] = (u32)(s32)(512);

label_7F31DC0C:
    ctx->pc = 0x7F31DC0Cu;
    // 7F31DC0C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F31DC10:
    ctx->pc = 0x7F31DC10u;
    // 7F31DC10: bl      0x7F19CE98
    {
            ctx->lr = 0x7F31DC14u;
            ctx->pc = 0x7F19CE98u;
            return;
    }

label_7F31DC14:
    ctx->pc = 0x7F31DC14u;
    ctx->downcount -= 13;
    // 7F31DC14: addis   r5, r31, 1
    ctx->gpr[5] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F31DC18:
    ctx->pc = 0x7F31DC18u;
    // 7F31DC18: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_7F31DC1C:
    ctx->pc = 0x7F31DC1Cu;
    // 7F31DC1C: stw     r3, 14288(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(14288);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31DC20:
    ctx->pc = 0x7F31DC20u;
    // 7F31DC20: addi    r3, r4, -32744
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-32744);

label_7F31DC24:
    ctx->pc = 0x7F31DC24u;
    // 7F31DC24: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F31DC28:
    ctx->pc = 0x7F31DC28u;
    // 7F31DC28: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F31DC2C:
    ctx->pc = 0x7F31DC2Cu;
    // 7F31DC2C: lbz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31DC30:
    ctx->pc = 0x7F31DC30u;
    // 7F31DC30: addi    r4, r4, -29500
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29500);

label_7F31DC34:
    ctx->pc = 0x7F31DC34u;
    // 7F31DC34: lwz     r3, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31DC38:
    ctx->pc = 0x7F31DC38u;
    // 7F31DC38: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F31DC3C:
    ctx->pc = 0x7F31DC3Cu;
    // 7F31DC3C: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F31DC40:
    ctx->pc = 0x7F31DC40u;
    // 7F31DC40: lwz     r4, -4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31DC44:
    ctx->pc = 0x7F31DC44u;
    // 7F31DC44: bl      0x7F314EB4
    {
            ctx->lr = 0x7F31DC48u;
            ctx->pc = 0x7F314EB4u;
            return;
    }

label_7F31DC48:
    ctx->pc = 0x7F31DC48u;
    ctx->downcount -= 8;
    // 7F31DC48: addis   r5, r31, 1
    ctx->gpr[5] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F31DC4C:
    ctx->pc = 0x7F31DC4Cu;
    // 7F31DC4C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31DC50:
    ctx->pc = 0x7F31DC50u;
    // 7F31DC50: lwz     r3, 14288(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(14288);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31DC54:
    ctx->pc = 0x7F31DC54u;
    // 7F31DC54: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F31DC58:
    ctx->pc = 0x7F31DC58u;
    // 7F31DC58: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F31DC5C:
    ctx->pc = 0x7F31DC5Cu;
    // 7F31DC5C: li      r7, 720
    ctx->gpr[7] = (u32)(s32)(720);

label_7F31DC60:
    ctx->pc = 0x7F31DC60u;
    // 7F31DC60: li      r8, 300
    ctx->gpr[8] = (u32)(s32)(300);

label_7F31DC64:
    ctx->pc = 0x7F31DC64u;
    // 7F31DC64: bl      0x7F3143B8
    {
            ctx->lr = 0x7F31DC68u;
            ctx->pc = 0x7F3143B8u;
            return;
    }

label_7F31DC68:
    ctx->pc = 0x7F31DC68u;
    ctx->downcount -= 1;
    // 7F31DC68: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F31DC6C:
    ctx->pc = 0x7F31DC6Cu;
    ctx->downcount -= 6;
    // 7F31DC6C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31DC70:
    ctx->pc = 0x7F31DC70u;
    // 7F31DC70: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F31DC74:
    ctx->pc = 0x7F31DC74u;
    // 7F31DC74: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31DC78:
    ctx->pc = 0x7F31DC78u;
    // 7F31DC78: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F31DC7C:
    ctx->pc = 0x7F31DC7Cu;
    // 7F31DC7C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31DC80:
    ctx->pc = 0x7F31DC80u;
    ctx->downcount -= 21;
    // 7F31DC80: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31DC84:
    ctx->pc = 0x7F31DC84u;
    // 7F31DC84: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31DC88:
    ctx->pc = 0x7F31DC88u;
    // 7F31DC88: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F31DC8C:
    ctx->pc = 0x7F31DC8Cu;
    // 7F31DC8C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F31DC90:
    ctx->pc = 0x7F31DC90u;
    // 7F31DC90: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31DC94:
    ctx->pc = 0x7F31DC94u;
    // 7F31DC94: addi    r5, r4, 15392
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(15392);

label_7F31DC98:
    ctx->pc = 0x7F31DC98u;
    // 7F31DC98: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F31DC9C:
    ctx->pc = 0x7F31DC9Cu;
    // 7F31DC9C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F31DCA0:
    ctx->pc = 0x7F31DCA0u;
    // 7F31DCA0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31DCA4:
    ctx->pc = 0x7F31DCA4u;
    // 7F31DCA4: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F31DCA8:
    ctx->pc = 0x7F31DCA8u;
    // 7F31DCA8: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F31DCACu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F31DCAC:
    ctx->pc = 0x7F31DCACu;
    ctx->downcount -= 2;
    // 7F31DCAC: or.   r31, r3, r3
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

label_7F31DCB0:
    ctx->pc = 0x7F31DCB0u;
    // 7F31DCB0: bc    12, 2, 0x7F31DD28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31DD28;
        }
    }

label_7F31DCB4:
    ctx->pc = 0x7F31DCB4u;
    ctx->downcount -= 5;
    // 7F31DCB4: lis     r4, 32562
    ctx->gpr[4] = ((u32)(s32)(32562) << 16);

label_7F31DCB8:
    ctx->pc = 0x7F31DCB8u;
    // 7F31DCB8: lis     r5, 32562
    ctx->gpr[5] = ((u32)(s32)(32562) << 16);

label_7F31DCBC:
    ctx->pc = 0x7F31DCBCu;
    // 7F31DCBC: addi    r4, r4, -9732
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-9732);

label_7F31DCC0:
    ctx->pc = 0x7F31DCC0u;
    // 7F31DCC0: addi    r5, r5, -9516
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-9516);

label_7F31DCC4:
    ctx->pc = 0x7F31DCC4u;
    // 7F31DCC4: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F31DCC8u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F31DCC8:
    ctx->pc = 0x7F31DCC8u;
    ctx->downcount -= 13;
    // 7F31DCC8: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31DCCC:
    ctx->pc = 0x7F31DCCCu;
    // 7F31DCCC: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F31DCD0:
    ctx->pc = 0x7F31DCD0u;
    // 7F31DCD0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F31DCD4:
    ctx->pc = 0x7F31DCD4u;
    // 7F31DCD4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31DCD8:
    ctx->pc = 0x7F31DCD8u;
    // 7F31DCD8: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F31DCDC:
    ctx->pc = 0x7F31DCDCu;
    // 7F31DCDC: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F31DCE0:
    ctx->pc = 0x7F31DCE0u;
    // 7F31DCE0: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F31DCE4:
    ctx->pc = 0x7F31DCE4u;
    // 7F31DCE4: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F31DCE8:
    ctx->pc = 0x7F31DCE8u;
    // 7F31DCE8: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F31DCEC:
    ctx->pc = 0x7F31DCECu;
    // 7F31DCEC: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F31DCF0:
    ctx->pc = 0x7F31DCF0u;
    // 7F31DCF0: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F31DCF4:
    ctx->pc = 0x7F31DCF4u;
    // 7F31DCF4: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31DCF8:
    ctx->pc = 0x7F31DCF8u;
    // 7F31DCF8: bl      0x7F3C89DC
    {
            ctx->lr = 0x7F31DCFCu;
            ctx->pc = 0x7F3C89DCu;
            return;
    }

label_7F31DCFC:
    ctx->pc = 0x7F31DCFCu;
    ctx->downcount -= 3;
    // 7F31DCFC: stw     r30, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F31DD00:
    ctx->pc = 0x7F31DD00u;
    // 7F31DD00: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31DD04:
    ctx->pc = 0x7F31DD04u;
    // 7F31DD04: bl      0x7F31DB3C
    {
            ctx->lr = 0x7F31DD08u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31DB3Cu;
                return;
            }
            goto label_7F31DB3C;
    }

label_7F31DD08:
    ctx->pc = 0x7F31DD08u;
    ctx->downcount -= 2;
    // 7F31DD08: cmpwi   r3, 0
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

label_7F31DD0C:
    ctx->pc = 0x7F31DD0Cu;
    // 7F31DD0C: bc    4, 2, 0x7F31DD20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31DD20;
        }
    }

label_7F31DD10:
    ctx->pc = 0x7F31DD10u;
    ctx->downcount -= 2;
    // 7F31DD10: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31DD14:
    ctx->pc = 0x7F31DD14u;
    // 7F31DD14: bl      0x7F3C8210
    {
            ctx->lr = 0x7F31DD18u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F31DD18:
    ctx->pc = 0x7F31DD18u;
    ctx->downcount -= 2;
    // 7F31DD18: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31DD1C:
    ctx->pc = 0x7F31DD1Cu;
    // 7F31DD1C: b       0x7F31DD2C
    {
            goto label_7F31DD2C;
    }

label_7F31DD20:
    ctx->pc = 0x7F31DD20u;
    ctx->downcount -= 2;
    // 7F31DD20: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F31DD24:
    ctx->pc = 0x7F31DD24u;
    // 7F31DD24: bl      0x7F0208E4
    {
            ctx->lr = 0x7F31DD28u;
            ctx->pc = 0x7F0208E4u;
            return;
    }

label_7F31DD28:
    ctx->pc = 0x7F31DD28u;
    ctx->downcount -= 1;
    // 7F31DD28: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31DD2C:
    ctx->pc = 0x7F31DD2Cu;
    ctx->downcount -= 16;
    // 7F31DD2C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F31DD30:
    ctx->pc = 0x7F31DD30u;
    // 7F31DD30: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31DD34:
    ctx->pc = 0x7F31DD34u;
    // 7F31DD34: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31DD38:
    ctx->pc = 0x7F31DD38u;
    // 7F31DD38: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F31DD3C:
    ctx->pc = 0x7F31DD3Cu;
    // 7F31DD3C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31DD40:
    ctx->pc = 0x7F31DD40u;
    ctx->downcount -= 23;
    // 7F31DD40: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31DD44:
    ctx->pc = 0x7F31DD44u;
    // 7F31DD44: fmuls   f1, f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F31DD44u)) return;
    ppc_fmuls(ctx, 1, 1, 1);

label_7F31DD48:
    ctx->pc = 0x7F31DD48u;
    // 7F31DD48: lfs     f0, -29144(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31DD48u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31DD4C:
    ctx->pc = 0x7F31DD4Cu;
    // 7F31DD4C: fmsubs f1, f2, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F31DD4Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[2], ctx->fpr[1], true, true, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F31DD50:
    ctx->pc = 0x7F31DD50u;
    // 7F31DD50: fmuls   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F31DD50u)) return;
    ppc_fmuls(ctx, 0, 0, 3);

label_7F31DD54:
    ctx->pc = 0x7F31DD54u;
    // 7F31DD54: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31DD54u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F31DD58:
    ctx->pc = 0x7F31DD58u;
    // 7F31DD58: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31DD5C:
    ctx->pc = 0x7F31DD5Cu;
    ctx->downcount -= 9;
    // 7F31DD5C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31DD60:
    ctx->pc = 0x7F31DD60u;
    // 7F31DD60: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31DD64:
    ctx->pc = 0x7F31DD64u;
    // 7F31DD64: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31DD68:
    ctx->pc = 0x7F31DD68u;
    // 7F31DD68: li      r5, 21
    ctx->gpr[5] = (u32)(s32)(21);

label_7F31DD6C:
    ctx->pc = 0x7F31DD6Cu;
    // 7F31DD6C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31DD70:
    ctx->pc = 0x7F31DD70u;
    // 7F31DD70: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F31DD74:
    ctx->pc = 0x7F31DD74u;
    // 7F31DD74: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31DD78:
    ctx->pc = 0x7F31DD78u;
    // 7F31DD78: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31DD7C:
    ctx->pc = 0x7F31DD7Cu;
    // 7F31DD7C: bl      0x80051BB0
    {
            ctx->lr = 0x7F31DD80u;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F31DD80:
    ctx->pc = 0x7F31DD80u;
    ctx->downcount -= 2;
    // 7F31DD80: cmpwi   r3, 0
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

label_7F31DD84:
    ctx->pc = 0x7F31DD84u;
    // 7F31DD84: bc    4, 2, 0x7F31DDD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31DDD4;
        }
    }

label_7F31DD88:
    ctx->pc = 0x7F31DD88u;
    ctx->downcount -= 4;
    // 7F31DD88: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31DD8C:
    ctx->pc = 0x7F31DD8Cu;
    // 7F31DD8C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31DD90:
    ctx->pc = 0x7F31DD90u;
    // 7F31DD90: li      r5, 58
    ctx->gpr[5] = (u32)(s32)(58);

label_7F31DD94:
    ctx->pc = 0x7F31DD94u;
    // 7F31DD94: bl      0x80051BB0
    {
            ctx->lr = 0x7F31DD98u;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F31DD98:
    ctx->pc = 0x7F31DD98u;
    ctx->downcount -= 2;
    // 7F31DD98: cmpwi   r3, 0
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

label_7F31DD9C:
    ctx->pc = 0x7F31DD9Cu;
    // 7F31DD9C: bc    4, 2, 0x7F31DDD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31DDD4;
        }
    }

label_7F31DDA0:
    ctx->pc = 0x7F31DDA0u;
    ctx->downcount -= 13;
    // 7F31DDA0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31DDA4:
    ctx->pc = 0x7F31DDA4u;
    // 7F31DDA4: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F31DDA8:
    ctx->pc = 0x7F31DDA8u;
    // 7F31DDA8: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31DDAC:
    ctx->pc = 0x7F31DDACu;
    // 7F31DDAC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F31DDB0:
    ctx->pc = 0x7F31DDB0u;
    // 7F31DDB0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F31DDB4:
    ctx->pc = 0x7F31DDB4u;
    // 7F31DDB4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F31DDB8:
    ctx->pc = 0x7F31DDB8u;
    // 7F31DDB8: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31DDBC:
    ctx->pc = 0x7F31DDBCu;
    // 7F31DDBC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F31DDC0:
    ctx->pc = 0x7F31DDC0u;
    // 7F31DDC0: li      r9, 21
    ctx->gpr[9] = (u32)(s32)(21);

label_7F31DDC4:
    ctx->pc = 0x7F31DDC4u;
    // 7F31DDC4: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F31DDC8:
    ctx->pc = 0x7F31DDC8u;
    // 7F31DDC8: lwz     r0, 1176(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1176);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31DDCC:
    ctx->pc = 0x7F31DDCCu;
    // 7F31DDCC: rlwinm r3, r0, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F31DDD0:
    ctx->pc = 0x7F31DDD0u;
    // 7F31DDD0: bl      0x800501FC
    {
            ctx->lr = 0x7F31DDD4u;
            ctx->pc = 0x800501FCu;
            return;
    }

label_7F31DDD4:
    ctx->pc = 0x7F31DDD4u;
    ctx->downcount -= 6;
    // 7F31DDD4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31DDD8:
    ctx->pc = 0x7F31DDD8u;
    // 7F31DDD8: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F31DDDC:
    ctx->pc = 0x7F31DDDCu;
    // 7F31DDDC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31DDE0:
    ctx->pc = 0x7F31DDE0u;
    // 7F31DDE0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F31DDE4:
    ctx->pc = 0x7F31DDE4u;
    // 7F31DDE4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31DDE8:
    ctx->pc = 0x7F31DDE8u;
    ctx->downcount -= 14;
    // 7F31DDE8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31DDEC:
    ctx->pc = 0x7F31DDECu;
    // 7F31DDEC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31DDF0:
    ctx->pc = 0x7F31DDF0u;
    // 7F31DDF0: or   r8, r3, r3
    {
        ctx->gpr[8] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31DDF4:
    ctx->pc = 0x7F31DDF4u;
    // 7F31DDF4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F31DDF8:
    ctx->pc = 0x7F31DDF8u;
    // 7F31DDF8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31DDFC:
    ctx->pc = 0x7F31DDFCu;
    // 7F31DDFC: li      r0, 21
    ctx->gpr[0] = (u32)(s32)(21);

label_7F31DE00:
    ctx->pc = 0x7F31DE00u;
    // 7F31DE00: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F31DE04:
    ctx->pc = 0x7F31DE04u;
    // 7F31DE04: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F31DE08:
    ctx->pc = 0x7F31DE08u;
    // 7F31DE08: stb     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F31DE0C:
    ctx->pc = 0x7F31DE0Cu;
    // 7F31DE0C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F31DE10:
    ctx->pc = 0x7F31DE10u;
    // 7F31DE10: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_7F31DE14:
    ctx->pc = 0x7F31DE14u;
    // 7F31DE14: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F31DE18:
    ctx->pc = 0x7F31DE18u;
    // 7F31DE18: li      r10, 7
    ctx->gpr[10] = (u32)(s32)(7);

label_7F31DE1C:
    ctx->pc = 0x7F31DE1Cu;
    // 7F31DE1C: bl      0x80051548
    {
            ctx->lr = 0x7F31DE20u;
            ctx->pc = 0x80051548u;
            return;
    }

label_7F31DE20:
    ctx->pc = 0x7F31DE20u;
    ctx->downcount -= 5;
    // 7F31DE20: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31DE24:
    ctx->pc = 0x7F31DE24u;
    // 7F31DE24: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31DE28:
    ctx->pc = 0x7F31DE28u;
    // 7F31DE28: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F31DE2C:
    ctx->pc = 0x7F31DE2Cu;
    // 7F31DE2C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31DE30:
    ctx->pc = 0x7F31DE30u;
    ctx->downcount -= 44;
    // 7F31DE30: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31DE34:
    ctx->pc = 0x7F31DE34u;
    // 7F31DE34: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31DE38:
    ctx->pc = 0x7F31DE38u;
    // 7F31DE38: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F31DE3C:
    ctx->pc = 0x7F31DE3Cu;
    // 7F31DE3C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31DE40:
    ctx->pc = 0x7F31DE40u;
    // 7F31DE40: addi    r7, r4, 12832
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F31DE44:
    ctx->pc = 0x7F31DE44u;
    // 7F31DE44: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F31DE48:
    ctx->pc = 0x7F31DE48u;
    // 7F31DE48: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31DE4C:
    ctx->pc = 0x7F31DE4Cu;
    // 7F31DE4C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31DE50:
    ctx->pc = 0x7F31DE50u;
    // 7F31DE50: lwz     r8, 696(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(696);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F31DE54:
    ctx->pc = 0x7F31DE54u;
    // 7F31DE54: addi    r5, r3, -29140
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-29140);

label_7F31DE58:
    ctx->pc = 0x7F31DE58u;
    // 7F31DE58: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F31DE5C:
    ctx->pc = 0x7F31DE5Cu;
    // 7F31DE5C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31DE60:
    ctx->pc = 0x7F31DE60u;
    // 7F31DE60: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31DE64:
    ctx->pc = 0x7F31DE64u;
    // 7F31DE64: addi    r4, r3, -29136
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-29136);

label_7F31DE68:
    ctx->pc = 0x7F31DE68u;
    // 7F31DE68: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31DE6C:
    ctx->pc = 0x7F31DE6Cu;
    // 7F31DE6C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F31DE6Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F31DE70:
    ctx->pc = 0x7F31DE70u;
    // 7F31DE70: stw     r6, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F31DE74:
    ctx->pc = 0x7F31DE74u;
    // 7F31DE74: lfs     f0, -29132(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31DE74u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29132);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31DE78:
    ctx->pc = 0x7F31DE78u;
    // 7F31DE78: stw     r0, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31DE7C:
    ctx->pc = 0x7F31DE7Cu;
    // 7F31DE7C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F31DE7Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31DE80:
    ctx->pc = 0x7F31DE80u;
    // 7F31DE80: lwz     r3, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31DE84:
    ctx->pc = 0x7F31DE84u;
    // 7F31DE84: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31DE88:
    ctx->pc = 0x7F31DE88u;
    // 7F31DE88: stw     r3, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31DE8C:
    ctx->pc = 0x7F31DE8Cu;
    // 7F31DE8C: stw     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31DE90:
    ctx->pc = 0x7F31DE90u;
    // 7F31DE90: lwz     r3, 696(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(696);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31DE94:
    ctx->pc = 0x7F31DE94u;
    // 7F31DE94: stfs     f2, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31DE94u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F31DE98:
    ctx->pc = 0x7F31DE98u;
    // 7F31DE98: lwz     r3, 696(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(696);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31DE9C:
    ctx->pc = 0x7F31DE9Cu;
    // 7F31DE9C: stfs     f1, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31DE9Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F31DEA0:
    ctx->pc = 0x7F31DEA0u;
    // 7F31DEA0: lwz     r4, 696(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(696);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31DEA4:
    ctx->pc = 0x7F31DEA4u;
    // 7F31DEA4: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31DEA8:
    ctx->pc = 0x7F31DEA8u;
    // 7F31DEA8: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31DEAC:
    ctx->pc = 0x7F31DEACu;
    // 7F31DEAC: stw     r3, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31DEB0:
    ctx->pc = 0x7F31DEB0u;
    // 7F31DEB0: stw     r0, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31DEB4:
    ctx->pc = 0x7F31DEB4u;
    // 7F31DEB4: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31DEB8:
    ctx->pc = 0x7F31DEB8u;
    // 7F31DEB8: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31DEBC:
    ctx->pc = 0x7F31DEBCu;
    // 7F31DEBC: stw     r3, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31DEC0:
    ctx->pc = 0x7F31DEC0u;
    // 7F31DEC0: stw     r0, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31DEC4:
    ctx->pc = 0x7F31DEC4u;
    // 7F31DEC4: lwz     r3, 696(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(696);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31DEC8:
    ctx->pc = 0x7F31DEC8u;
    // 7F31DEC8: lfs     f1, 24(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31DEC8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31DECC:
    ctx->pc = 0x7F31DECCu;
    // 7F31DECC: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31DECCu)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F31DED0:
    ctx->pc = 0x7F31DED0u;
    // 7F31DED0: stfs     f0, 24(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31DED0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F31DED4:
    ctx->pc = 0x7F31DED4u;
    // 7F31DED4: lwz     r3, 696(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(696);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31DED8:
    ctx->pc = 0x7F31DED8u;
    // 7F31DED8: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31DEDC:
    ctx->pc = 0x7F31DEDCu;
    // 7F31DEDC: bl      0x7F026B18
    {
            ctx->lr = 0x7F31DEE0u;
            ctx->pc = 0x7F026B18u;
            return;
    }

label_7F31DEE0:
    ctx->pc = 0x7F31DEE0u;
    ctx->downcount -= 3;
    // 7F31DEE0: lwz     r3, 696(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(696);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31DEE4:
    ctx->pc = 0x7F31DEE4u;
    // 7F31DEE4: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31DEE8:
    ctx->pc = 0x7F31DEE8u;
    // 7F31DEE8: bl      0x7F026B44
    {
            ctx->lr = 0x7F31DEECu;
            ctx->pc = 0x7F026B44u;
            return;
    }

label_7F31DEEC:
    ctx->pc = 0x7F31DEECu;
    ctx->downcount -= 6;
    // 7F31DEEC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31DEF0:
    ctx->pc = 0x7F31DEF0u;
    // 7F31DEF0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F31DEF4:
    ctx->pc = 0x7F31DEF4u;
    // 7F31DEF4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31DEF8:
    ctx->pc = 0x7F31DEF8u;
    // 7F31DEF8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F31DEFC:
    ctx->pc = 0x7F31DEFCu;
    // 7F31DEFC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31DF00:
    ctx->pc = 0x7F31DF00u;
    ctx->downcount -= 9;
    // 7F31DF00: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31DF04:
    ctx->pc = 0x7F31DF04u;
    // 7F31DF04: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31DF08:
    ctx->pc = 0x7F31DF08u;
    // 7F31DF08: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31DF0C:
    ctx->pc = 0x7F31DF0Cu;
    // 7F31DF0C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F31DF10:
    ctx->pc = 0x7F31DF10u;
    // 7F31DF10: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31DF14:
    ctx->pc = 0x7F31DF14u;
    // 7F31DF14: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F31DF18:
    ctx->pc = 0x7F31DF18u;
    // 7F31DF18: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31DF1C:
    ctx->pc = 0x7F31DF1Cu;
    // 7F31DF1C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31DF20:
    ctx->pc = 0x7F31DF20u;
    // 7F31DF20: bl      0x7F3BEED4
    {
            ctx->lr = 0x7F31DF24u;
            ctx->pc = 0x7F3BEED4u;
            return;
    }

label_7F31DF24:
    ctx->pc = 0x7F31DF24u;
    ctx->downcount -= 5;
    // 7F31DF24: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F31DF28:
    ctx->pc = 0x7F31DF28u;
    // 7F31DF28: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31DF2C:
    ctx->pc = 0x7F31DF2Cu;
    // 7F31DF2C: lfs     f1, -29128(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F31DF2Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-29128);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31DF30:
    ctx->pc = 0x7F31DF30u;
    // 7F31DF30: lfs     f2, -29124(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31DF30u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29124);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F31DF34:
    ctx->pc = 0x7F31DF34u;
    // 7F31DF34: bl      0x7F3BEF3C
    {
            ctx->lr = 0x7F31DF38u;
            ctx->pc = 0x7F3BEF3Cu;
            return;
    }

label_7F31DF38:
    ctx->pc = 0x7F31DF38u;
    ctx->downcount -= 32;
    // 7F31DF38: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31DF3C:
    ctx->pc = 0x7F31DF3Cu;
    // 7F31DF3C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F31DF40:
    ctx->pc = 0x7F31DF40u;
    // 7F31DF40: addi    r5, r3, -29120
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-29120);

label_7F31DF44:
    ctx->pc = 0x7F31DF44u;
    // 7F31DF44: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F31DF44u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31DF48:
    ctx->pc = 0x7F31DF48u;
    // 7F31DF48: addi    r7, r4, -29116
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(-29116);

label_7F31DF4C:
    ctx->pc = 0x7F31DF4Cu;
    // 7F31DF4C: lwz     r5, 696(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(696);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F31DF50:
    ctx->pc = 0x7F31DF50u;
    // 7F31DF50: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31DF54:
    ctx->pc = 0x7F31DF54u;
    // 7F31DF54: addi    r6, r3, -29112
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-29112);

label_7F31DF58:
    ctx->pc = 0x7F31DF58u;
    // 7F31DF58: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F31DF58u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31DF5C:
    ctx->pc = 0x7F31DF5Cu;
    // 7F31DF5C: stfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F31DF5Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F31DF60:
    ctx->pc = 0x7F31DF60u;
    // 7F31DF60: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F31DF64:
    ctx->pc = 0x7F31DF64u;
    // 7F31DF64: addi    r5, r4, -29108
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-29108);

label_7F31DF68:
    ctx->pc = 0x7F31DF68u;
    // 7F31DF68: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31DF6C:
    ctx->pc = 0x7F31DF6Cu;
    // 7F31DF6C: lwz     r7, 696(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(696);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F31DF70:
    ctx->pc = 0x7F31DF70u;
    // 7F31DF70: addi    r4, r3, -29104
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-29104);

label_7F31DF74:
    ctx->pc = 0x7F31DF74u;
    // 7F31DF74: lfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F31DF74u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31DF78:
    ctx->pc = 0x7F31DF78u;
    // 7F31DF78: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31DF7C:
    ctx->pc = 0x7F31DF7Cu;
    // 7F31DF7C: stfs     f1, 4(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F31DF7Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F31DF80:
    ctx->pc = 0x7F31DF80u;
    // 7F31DF80: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F31DF80u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F31DF84:
    ctx->pc = 0x7F31DF84u;
    // 7F31DF84: lwz     r5, 696(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(696);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F31DF88:
    ctx->pc = 0x7F31DF88u;
    // 7F31DF88: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F31DF88u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31DF8C:
    ctx->pc = 0x7F31DF8Cu;
    // 7F31DF8C: stfs     f0, 8(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F31DF8Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F31DF90:
    ctx->pc = 0x7F31DF90u;
    // 7F31DF90: lfs     f0, -29100(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31DF90u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31DF94:
    ctx->pc = 0x7F31DF94u;
    // 7F31DF94: lwz     r3, 696(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(696);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31DF98:
    ctx->pc = 0x7F31DF98u;
    // 7F31DF98: stfs     f2, 16(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31DF98u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F31DF9C:
    ctx->pc = 0x7F31DF9Cu;
    // 7F31DF9C: lwz     r3, 696(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(696);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31DFA0:
    ctx->pc = 0x7F31DFA0u;
    // 7F31DFA0: stfs     f1, 20(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31DFA0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F31DFA4:
    ctx->pc = 0x7F31DFA4u;
    // 7F31DFA4: lwz     r3, 696(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(696);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31DFA8:
    ctx->pc = 0x7F31DFA8u;
    // 7F31DFA8: stfs     f0, 24(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31DFA8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F31DFAC:
    ctx->pc = 0x7F31DFACu;
    // 7F31DFAC: lwz     r3, 696(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(696);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31DFB0:
    ctx->pc = 0x7F31DFB0u;
    // 7F31DFB0: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31DFB4:
    ctx->pc = 0x7F31DFB4u;
    // 7F31DFB4: bl      0x7F026B18
    {
            ctx->lr = 0x7F31DFB8u;
            ctx->pc = 0x7F026B18u;
            return;
    }

label_7F31DFB8:
    ctx->pc = 0x7F31DFB8u;
    ctx->downcount -= 3;
    // 7F31DFB8: lwz     r3, 696(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(696);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31DFBC:
    ctx->pc = 0x7F31DFBCu;
    // 7F31DFBC: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31DFC0:
    ctx->pc = 0x7F31DFC0u;
    // 7F31DFC0: bl      0x7F026B44
    {
            ctx->lr = 0x7F31DFC4u;
            ctx->pc = 0x7F026B44u;
            return;
    }

label_7F31DFC4:
    ctx->pc = 0x7F31DFC4u;
    ctx->downcount -= 6;
    // 7F31DFC4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31DFC8:
    ctx->pc = 0x7F31DFC8u;
    // 7F31DFC8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F31DFCC:
    ctx->pc = 0x7F31DFCCu;
    // 7F31DFCC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31DFD0:
    ctx->pc = 0x7F31DFD0u;
    // 7F31DFD0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F31DFD4:
    ctx->pc = 0x7F31DFD4u;
    // 7F31DFD4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31DFD8:
    ctx->pc = 0x7F31DFD8u;
    ctx->downcount -= 19;
    // 7F31DFD8: stw     r4, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F31DFDC:
    ctx->pc = 0x7F31DFDCu;
    // 7F31DFDC: lis     r7, 1655
    ctx->gpr[7] = ((u32)(s32)(1655) << 16);

label_7F31DFE0:
    ctx->pc = 0x7F31DFE0u;
    // 7F31DFE0: lis     r4, 803
    ctx->gpr[4] = ((u32)(s32)(803) << 16);

label_7F31DFE4:
    ctx->pc = 0x7F31DFE4u;
    // 7F31DFE4: li      r10, -1
    ctx->gpr[10] = (u32)(s32)(-1);

label_7F31DFE8:
    ctx->pc = 0x7F31DFE8u;
    // 7F31DFE8: stw     r5, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F31DFEC:
    ctx->pc = 0x7F31DFECu;
    // 7F31DFEC: li      r9, -206
    ctx->gpr[9] = (u32)(s32)(-206);

label_7F31DFF0:
    ctx->pc = 0x7F31DFF0u;
    // 7F31DFF0: addi    r8, r7, 32200
    ctx->gpr[8] = ctx->gpr[7] + (u32)(s32)(32200);

label_7F31DFF4:
    ctx->pc = 0x7F31DFF4u;
    // 7F31DFF4: addi    r5, r4, 12288
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(12288);

label_7F31DFF8:
    ctx->pc = 0x7F31DFF8u;
    // 7F31DFF8: stw     r6, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F31DFFC:
    ctx->pc = 0x7F31DFFCu;
    // 7F31DFFC: addi    r4, r7, 32090
    ctx->gpr[4] = ctx->gpr[7] + (u32)(s32)(32090);

label_7F31E000:
    ctx->pc = 0x7F31E000u;
    // 7F31E000: li      r0, 255
    ctx->gpr[0] = (u32)(s32)(255);

label_7F31E004:
    ctx->pc = 0x7F31E004u;
    // 7F31E004: stw     r10, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F31E008:
    ctx->pc = 0x7F31E008u;
    // 7F31E008: stw     r9, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F31E00C:
    ctx->pc = 0x7F31E00Cu;
    // 7F31E00C: stw     r8, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F31E010:
    ctx->pc = 0x7F31E010u;
    // 7F31E010: stw     r5, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F31E014:
    ctx->pc = 0x7F31E014u;
    // 7F31E014: stw     r4, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F31E018:
    ctx->pc = 0x7F31E018u;
    // 7F31E018: stw     r0, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31E01C:
    ctx->pc = 0x7F31E01Cu;
    // 7F31E01C: stw     r10, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F31E020:
    ctx->pc = 0x7F31E020u;
    // 7F31E020: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31E024:
    ctx->pc = 0x7F31E024u;
    ctx->downcount -= 27;
    // 7F31E024: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31E028:
    ctx->pc = 0x7F31E028u;
    // 7F31E028: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31E02C:
    ctx->pc = 0x7F31E02Cu;
    // 7F31E02C: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31E030:
    ctx->pc = 0x7F31E030u;
    // 7F31E030: stmw     r20, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 20; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F31E034:
    ctx->pc = 0x7F31E034u;
    // 7F31E034: or   r21, r3, r3
    {
        ctx->gpr[21] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31E038:
    ctx->pc = 0x7F31E038u;
    // 7F31E038: lwz     r31, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F31E03C:
    ctx->pc = 0x7F31E03Cu;
    // 7F31E03C: lwz     r30, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F31E040:
    ctx->pc = 0x7F31E040u;
    // 7F31E040: lwz     r29, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F31E044:
    ctx->pc = 0x7F31E044u;
    // 7F31E044: lwz     r20, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[20] = mem_read32(ctx, ea);
    }

label_7F31E048:
    ctx->pc = 0x7F31E048u;
    // 7F31E048: lwz     r28, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F31E04C:
    ctx->pc = 0x7F31E04Cu;
    // 7F31E04C: lwz     r27, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F31E050:
    ctx->pc = 0x7F31E050u;
    // 7F31E050: lwz     r26, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_7F31E054:
    ctx->pc = 0x7F31E054u;
    // 7F31E054: lwz     r25, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_7F31E058:
    ctx->pc = 0x7F31E058u;
    // 7F31E058: lwz     r24, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_7F31E05C:
    ctx->pc = 0x7F31E05Cu;
    // 7F31E05C: lwz     r23, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[23] = mem_read32(ctx, ea);
    }

label_7F31E060:
    ctx->pc = 0x7F31E060u;
    // 7F31E060: lwz     r3, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31E064:
    ctx->pc = 0x7F31E064u;
    // 7F31E064: bl      0x7F2EA4A0
    {
            ctx->lr = 0x7F31E068u;
            ctx->pc = 0x7F2EA4A0u;
            return;
    }

label_7F31E068:
    ctx->pc = 0x7F31E068u;
    ctx->downcount -= 5;
    // 7F31E068: lwz     r4, 28(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31E06C:
    ctx->pc = 0x7F31E06Cu;
    // 7F31E06C: or   r22, r3, r3
    {
        ctx->gpr[22] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31E070:
    ctx->pc = 0x7F31E070u;
    // 7F31E070: addi    r0, r4, -2
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-2);

label_7F31E074:
    ctx->pc = 0x7F31E074u;
    // 7F31E074: cmpw    r20, r0
    {
        s32 val_a = (s32)(ctx->gpr[20]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31E078:
    ctx->pc = 0x7F31E078u;
    // 7F31E078: bc    4, 0, 0x7F31E0EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31E0EC;
        }
    }

label_7F31E07C:
    ctx->pc = 0x7F31E07Cu;
    ctx->downcount -= 6;
    // 7F31E07C: lwz     r3, 24(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31E080:
    ctx->pc = 0x7F31E080u;
    // 7F31E080: rlwinm r0, r20, 3, 0, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[20], 3u) & 0xFFFFFFF8u;
    }

label_7F31E084:
    ctx->pc = 0x7F31E084u;
    // 7F31E084: add   r4, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F31E088:
    ctx->pc = 0x7F31E088u;
    // 7F31E088: lwz     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31E08C:
    ctx->pc = 0x7F31E08Cu;
    // 7F31E08C: cmpw    r29, r0
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

label_7F31E090:
    ctx->pc = 0x7F31E090u;
    // 7F31E090: bc    4, 0, 0x7F31E0EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31E0EC;
        }
    }

label_7F31E094:
    ctx->pc = 0x7F31E094u;
    ctx->downcount -= 18;
    // 7F31E094: lwz     r0, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31E098:
    ctx->pc = 0x7F31E098u;
    // 7F31E098: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_7F31E09C:
    ctx->pc = 0x7F31E09Cu;
    // 7F31E09C: lwz     r4, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31E0A0:
    ctx->pc = 0x7F31E0A0u;
    // 7F31E0A0: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F31E0A4:
    ctx->pc = 0x7F31E0A4u;
    // 7F31E0A4: subf   r0, r0, r29
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F31E0A8:
    ctx->pc = 0x7F31E0A8u;
    // 7F31E0A8: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31E0AC:
    ctx->pc = 0x7F31E0ACu;
    // 7F31E0AC: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F31E0B0:
    ctx->pc = 0x7F31E0B0u;
    // 7F31E0B0: lfd     f3, -29152(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F31E0B0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-29152);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31E0B4:
    ctx->pc = 0x7F31E0B4u;
    // 7F31E0B4: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F31E0B8:
    ctx->pc = 0x7F31E0B8u;
    // 7F31E0B8: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F31E0BC:
    ctx->pc = 0x7F31E0BCu;
    // 7F31E0BC: lfs     f1, 16(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F31E0BCu)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31E0C0:
    ctx->pc = 0x7F31E0C0u;
    // 7F31E0C0: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31E0C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31E0C4:
    ctx->pc = 0x7F31E0C4u;
    // 7F31E0C4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31E0C8:
    ctx->pc = 0x7F31E0C8u;
    // 7F31E0C8: fsubs   f2, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F31E0C8u)) return;
    ppc_fsubs(ctx, 2, 0, 3);

label_7F31E0CC:
    ctx->pc = 0x7F31E0CCu;
    // 7F31E0CC: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31E0D0:
    ctx->pc = 0x7F31E0D0u;
    // 7F31E0D0: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31E0D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31E0D4:
    ctx->pc = 0x7F31E0D4u;
    // 7F31E0D4: fsubs   f3, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F31E0D4u)) return;
    ppc_fsubs(ctx, 3, 0, 3);

label_7F31E0D8:
    ctx->pc = 0x7F31E0D8u;
    // 7F31E0D8: bl      0x7F31DD40
    {
            ctx->lr = 0x7F31E0DCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31DD40u;
                return;
            }
            goto label_7F31DD40;
    }

label_7F31E0DC:
    ctx->pc = 0x7F31E0DCu;
    ctx->downcount -= 4;
    // 7F31E0DC: stfs     f1, 20(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F31E0DCu)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F31E0E0:
    ctx->pc = 0x7F31E0E0u;
    // 7F31E0E0: lwz     r3, 4(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31E0E4:
    ctx->pc = 0x7F31E0E4u;
    // 7F31E0E4: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F31E0E8:
    ctx->pc = 0x7F31E0E8u;
    // 7F31E0E8: stw     r0, 4(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31E0EC:
    ctx->pc = 0x7F31E0ECu;
    ctx->downcount -= 1;
    // 7F31E0EC: bl      0x7F2EA87C
    {
            ctx->lr = 0x7F31E0F0u;
            ctx->pc = 0x7F2EA87Cu;
            return;
    }

label_7F31E0F0:
    ctx->pc = 0x7F31E0F0u;
    ctx->downcount -= 1;
    // 7F31E0F0: bl      0x7F2EA990
    {
            ctx->lr = 0x7F31E0F4u;
            ctx->pc = 0x7F2EA990u;
            return;
    }

label_7F31E0F4:
    ctx->pc = 0x7F31E0F4u;
    ctx->downcount -= 5;
    // 7F31E0F4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F31E0F8:
    ctx->pc = 0x7F31E0F8u;
    // 7F31E0F8: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F31E0FC:
    ctx->pc = 0x7F31E0FCu;
    // 7F31E0FC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F31E100:
    ctx->pc = 0x7F31E100u;
    // 7F31E100: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F31E104:
    ctx->pc = 0x7F31E104u;
    // 7F31E104: bl      0x80046238
    {
            ctx->lr = 0x7F31E108u;
            ctx->pc = 0x80046238u;
            return;
    }

label_7F31E108:
    ctx->pc = 0x7F31E108u;
    ctx->downcount -= 4;
    // 7F31E108: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_7F31E10C:
    ctx->pc = 0x7F31E10Cu;
    // 7F31E10C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F31E110:
    ctx->pc = 0x7F31E110u;
    // 7F31E110: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F31E114:
    ctx->pc = 0x7F31E114u;
    // 7F31E114: bl      0x80042E0C
    {
            ctx->lr = 0x7F31E118u;
            ctx->pc = 0x80042E0Cu;
            return;
    }

label_7F31E118:
    ctx->pc = 0x7F31E118u;
    ctx->downcount -= 3;
    // 7F31E118: extsh r4, r29
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[29];
    }

label_7F31E11C:
    ctx->pc = 0x7F31E11Cu;
    // 7F31E11C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E120:
    ctx->pc = 0x7F31E120u;
    // 7F31E120: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31E124u;
            goto label_7F31E5E4;
    }

label_7F31E124:
    ctx->pc = 0x7F31E124u;
    ctx->downcount -= 2;
    // 7F31E124: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F31E128:
    ctx->pc = 0x7F31E128u;
    // 7F31E128: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31E12Cu;
            goto label_7F31E5D8;
    }

label_7F31E12C:
    ctx->pc = 0x7F31E12Cu;
    ctx->downcount -= 3;
    // 7F31E12C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E130:
    ctx->pc = 0x7F31E130u;
    // 7F31E130: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31E134:
    ctx->pc = 0x7F31E134u;
    // 7F31E134: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31E138u;
            goto label_7F31E5C8;
    }

label_7F31E138:
    ctx->pc = 0x7F31E138u;
    ctx->downcount -= 3;
    // 7F31E138: extsh r4, r29
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[29];
    }

label_7F31E13C:
    ctx->pc = 0x7F31E13Cu;
    // 7F31E13C: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F31E140:
    ctx->pc = 0x7F31E140u;
    // 7F31E140: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31E144u;
            goto label_7F31E5E4;
    }

label_7F31E144:
    ctx->pc = 0x7F31E144u;
    ctx->downcount -= 2;
    // 7F31E144: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F31E148:
    ctx->pc = 0x7F31E148u;
    // 7F31E148: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31E14Cu;
            goto label_7F31E5D8;
    }

label_7F31E14C:
    ctx->pc = 0x7F31E14Cu;
    ctx->downcount -= 3;
    // 7F31E14C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E150:
    ctx->pc = 0x7F31E150u;
    // 7F31E150: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31E154:
    ctx->pc = 0x7F31E154u;
    // 7F31E154: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31E158u;
            goto label_7F31E5C8;
    }

label_7F31E158:
    ctx->pc = 0x7F31E158u;
    ctx->downcount -= 3;
    // 7F31E158: extsh r4, r30
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[30];
    }

label_7F31E15C:
    ctx->pc = 0x7F31E15Cu;
    // 7F31E15C: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F31E160:
    ctx->pc = 0x7F31E160u;
    // 7F31E160: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31E164u;
            goto label_7F31E5E4;
    }

label_7F31E164:
    ctx->pc = 0x7F31E164u;
    ctx->downcount -= 2;
    // 7F31E164: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F31E168:
    ctx->pc = 0x7F31E168u;
    // 7F31E168: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31E16Cu;
            goto label_7F31E5D8;
    }

label_7F31E16C:
    ctx->pc = 0x7F31E16Cu;
    ctx->downcount -= 3;
    // 7F31E16C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E170:
    ctx->pc = 0x7F31E170u;
    // 7F31E170: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31E174:
    ctx->pc = 0x7F31E174u;
    // 7F31E174: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31E178u;
            goto label_7F31E5C8;
    }

label_7F31E178:
    ctx->pc = 0x7F31E178u;
    ctx->downcount -= 3;
    // 7F31E178: extsh r4, r30
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[30];
    }

label_7F31E17C:
    ctx->pc = 0x7F31E17Cu;
    // 7F31E17C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E180:
    ctx->pc = 0x7F31E180u;
    // 7F31E180: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31E184u;
            goto label_7F31E5E4;
    }

label_7F31E184:
    ctx->pc = 0x7F31E184u;
    ctx->downcount -= 2;
    // 7F31E184: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F31E188:
    ctx->pc = 0x7F31E188u;
    // 7F31E188: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31E18Cu;
            goto label_7F31E5D8;
    }

label_7F31E18C:
    ctx->pc = 0x7F31E18Cu;
    ctx->downcount -= 3;
    // 7F31E18C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E190:
    ctx->pc = 0x7F31E190u;
    // 7F31E190: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31E194:
    ctx->pc = 0x7F31E194u;
    // 7F31E194: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31E198u;
            goto label_7F31E5C8;
    }

label_7F31E198:
    ctx->pc = 0x7F31E198u;
    ctx->downcount -= 1;
    // 7F31E198: bl      0x7F31E5C4
    {
            ctx->lr = 0x7F31E19Cu;
            goto label_7F31E5C4;
    }

label_7F31E19C:
    ctx->pc = 0x7F31E19Cu;
    ctx->downcount -= 5;
    // 7F31E19C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F31E1A0:
    ctx->pc = 0x7F31E1A0u;
    // 7F31E1A0: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F31E1A4:
    ctx->pc = 0x7F31E1A4u;
    // 7F31E1A4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F31E1A8:
    ctx->pc = 0x7F31E1A8u;
    // 7F31E1A8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F31E1AC:
    ctx->pc = 0x7F31E1ACu;
    // 7F31E1AC: bl      0x80046238
    {
            ctx->lr = 0x7F31E1B0u;
            ctx->pc = 0x80046238u;
            return;
    }

label_7F31E1B0:
    ctx->pc = 0x7F31E1B0u;
    ctx->downcount -= 4;
    // 7F31E1B0: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_7F31E1B4:
    ctx->pc = 0x7F31E1B4u;
    // 7F31E1B4: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F31E1B8:
    ctx->pc = 0x7F31E1B8u;
    // 7F31E1B8: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_7F31E1BC:
    ctx->pc = 0x7F31E1BCu;
    // 7F31E1BC: bl      0x80042E0C
    {
            ctx->lr = 0x7F31E1C0u;
            ctx->pc = 0x80042E0Cu;
            return;
    }

label_7F31E1C0:
    ctx->pc = 0x7F31E1C0u;
    ctx->downcount -= 4;
    // 7F31E1C0: addi    r0, r29, -1600
    ctx->gpr[0] = ctx->gpr[29] + (u32)(s32)(-1600);

label_7F31E1C4:
    ctx->pc = 0x7F31E1C4u;
    // 7F31E1C4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E1C8:
    ctx->pc = 0x7F31E1C8u;
    // 7F31E1C8: extsh r4, r0
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F31E1CC:
    ctx->pc = 0x7F31E1CCu;
    // 7F31E1CC: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31E1D0u;
            goto label_7F31E5E4;
    }

label_7F31E1D0:
    ctx->pc = 0x7F31E1D0u;
    ctx->downcount -= 2;
    // 7F31E1D0: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F31E1D4:
    ctx->pc = 0x7F31E1D4u;
    // 7F31E1D4: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31E1D8u;
            goto label_7F31E5D8;
    }

label_7F31E1D8:
    ctx->pc = 0x7F31E1D8u;
    ctx->downcount -= 3;
    // 7F31E1D8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E1DC:
    ctx->pc = 0x7F31E1DCu;
    // 7F31E1DC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31E1E0:
    ctx->pc = 0x7F31E1E0u;
    // 7F31E1E0: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31E1E4u;
            goto label_7F31E5C8;
    }

label_7F31E1E4:
    ctx->pc = 0x7F31E1E4u;
    ctx->downcount -= 4;
    // 7F31E1E4: addi    r0, r29, -1600
    ctx->gpr[0] = ctx->gpr[29] + (u32)(s32)(-1600);

label_7F31E1E8:
    ctx->pc = 0x7F31E1E8u;
    // 7F31E1E8: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F31E1EC:
    ctx->pc = 0x7F31E1ECu;
    // 7F31E1EC: extsh r4, r0
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F31E1F0:
    ctx->pc = 0x7F31E1F0u;
    // 7F31E1F0: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31E1F4u;
            goto label_7F31E5E4;
    }

label_7F31E1F4:
    ctx->pc = 0x7F31E1F4u;
    ctx->downcount -= 2;
    // 7F31E1F4: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F31E1F8:
    ctx->pc = 0x7F31E1F8u;
    // 7F31E1F8: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31E1FCu;
            goto label_7F31E5D8;
    }

label_7F31E1FC:
    ctx->pc = 0x7F31E1FCu;
    ctx->downcount -= 3;
    // 7F31E1FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E200:
    ctx->pc = 0x7F31E200u;
    // 7F31E200: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31E204:
    ctx->pc = 0x7F31E204u;
    // 7F31E204: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31E208u;
            goto label_7F31E5C8;
    }

label_7F31E208:
    ctx->pc = 0x7F31E208u;
    ctx->downcount -= 3;
    // 7F31E208: extsh r4, r29
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[29];
    }

label_7F31E20C:
    ctx->pc = 0x7F31E20Cu;
    // 7F31E20C: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F31E210:
    ctx->pc = 0x7F31E210u;
    // 7F31E210: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31E214u;
            goto label_7F31E5E4;
    }

label_7F31E214:
    ctx->pc = 0x7F31E214u;
    ctx->downcount -= 2;
    // 7F31E214: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F31E218:
    ctx->pc = 0x7F31E218u;
    // 7F31E218: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31E21Cu;
            goto label_7F31E5D8;
    }

label_7F31E21C:
    ctx->pc = 0x7F31E21Cu;
    ctx->downcount -= 3;
    // 7F31E21C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E220:
    ctx->pc = 0x7F31E220u;
    // 7F31E220: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31E224:
    ctx->pc = 0x7F31E224u;
    // 7F31E224: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31E228u;
            goto label_7F31E5C8;
    }

label_7F31E228:
    ctx->pc = 0x7F31E228u;
    ctx->downcount -= 3;
    // 7F31E228: extsh r4, r29
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[29];
    }

label_7F31E22C:
    ctx->pc = 0x7F31E22Cu;
    // 7F31E22C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E230:
    ctx->pc = 0x7F31E230u;
    // 7F31E230: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31E234u;
            goto label_7F31E5E4;
    }

label_7F31E234:
    ctx->pc = 0x7F31E234u;
    ctx->downcount -= 2;
    // 7F31E234: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F31E238:
    ctx->pc = 0x7F31E238u;
    // 7F31E238: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31E23Cu;
            goto label_7F31E5D8;
    }

label_7F31E23C:
    ctx->pc = 0x7F31E23Cu;
    ctx->downcount -= 3;
    // 7F31E23C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E240:
    ctx->pc = 0x7F31E240u;
    // 7F31E240: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31E244:
    ctx->pc = 0x7F31E244u;
    // 7F31E244: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31E248u;
            goto label_7F31E5C8;
    }

label_7F31E248:
    ctx->pc = 0x7F31E248u;
    ctx->downcount -= 3;
    // 7F31E248: extsh r4, r29
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[29];
    }

label_7F31E24C:
    ctx->pc = 0x7F31E24Cu;
    // 7F31E24C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E250:
    ctx->pc = 0x7F31E250u;
    // 7F31E250: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31E254u;
            goto label_7F31E5E4;
    }

label_7F31E254:
    ctx->pc = 0x7F31E254u;
    ctx->downcount -= 2;
    // 7F31E254: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F31E258:
    ctx->pc = 0x7F31E258u;
    // 7F31E258: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31E25Cu;
            goto label_7F31E5D8;
    }

label_7F31E25C:
    ctx->pc = 0x7F31E25Cu;
    ctx->downcount -= 3;
    // 7F31E25C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E260:
    ctx->pc = 0x7F31E260u;
    // 7F31E260: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31E264:
    ctx->pc = 0x7F31E264u;
    // 7F31E264: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31E268u;
            goto label_7F31E5C8;
    }

label_7F31E268:
    ctx->pc = 0x7F31E268u;
    ctx->downcount -= 3;
    // 7F31E268: extsh r4, r29
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[29];
    }

label_7F31E26C:
    ctx->pc = 0x7F31E26Cu;
    // 7F31E26C: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F31E270:
    ctx->pc = 0x7F31E270u;
    // 7F31E270: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31E274u;
            goto label_7F31E5E4;
    }

label_7F31E274:
    ctx->pc = 0x7F31E274u;
    ctx->downcount -= 2;
    // 7F31E274: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F31E278:
    ctx->pc = 0x7F31E278u;
    // 7F31E278: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31E27Cu;
            goto label_7F31E5D8;
    }

label_7F31E27C:
    ctx->pc = 0x7F31E27Cu;
    ctx->downcount -= 3;
    // 7F31E27C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E280:
    ctx->pc = 0x7F31E280u;
    // 7F31E280: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31E284:
    ctx->pc = 0x7F31E284u;
    // 7F31E284: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31E288u;
            goto label_7F31E5C8;
    }

label_7F31E288:
    ctx->pc = 0x7F31E288u;
    ctx->downcount -= 3;
    // 7F31E288: extsh r4, r31
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[31];
    }

label_7F31E28C:
    ctx->pc = 0x7F31E28Cu;
    // 7F31E28C: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F31E290:
    ctx->pc = 0x7F31E290u;
    // 7F31E290: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31E294u;
            goto label_7F31E5E4;
    }

label_7F31E294:
    ctx->pc = 0x7F31E294u;
    ctx->downcount -= 2;
    // 7F31E294: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F31E298:
    ctx->pc = 0x7F31E298u;
    // 7F31E298: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31E29Cu;
            goto label_7F31E5D8;
    }

label_7F31E29C:
    ctx->pc = 0x7F31E29Cu;
    ctx->downcount -= 3;
    // 7F31E29C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E2A0:
    ctx->pc = 0x7F31E2A0u;
    // 7F31E2A0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31E2A4:
    ctx->pc = 0x7F31E2A4u;
    // 7F31E2A4: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31E2A8u;
            goto label_7F31E5C8;
    }

label_7F31E2A8:
    ctx->pc = 0x7F31E2A8u;
    ctx->downcount -= 3;
    // 7F31E2A8: extsh r4, r31
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[31];
    }

label_7F31E2AC:
    ctx->pc = 0x7F31E2ACu;
    // 7F31E2AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E2B0:
    ctx->pc = 0x7F31E2B0u;
    // 7F31E2B0: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31E2B4u;
            goto label_7F31E5E4;
    }

label_7F31E2B4:
    ctx->pc = 0x7F31E2B4u;
    ctx->downcount -= 2;
    // 7F31E2B4: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F31E2B8:
    ctx->pc = 0x7F31E2B8u;
    // 7F31E2B8: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31E2BCu;
            goto label_7F31E5D8;
    }

label_7F31E2BC:
    ctx->pc = 0x7F31E2BCu;
    ctx->downcount -= 3;
    // 7F31E2BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E2C0:
    ctx->pc = 0x7F31E2C0u;
    // 7F31E2C0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31E2C4:
    ctx->pc = 0x7F31E2C4u;
    // 7F31E2C4: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31E2C8u;
            goto label_7F31E5C8;
    }

label_7F31E2C8:
    ctx->pc = 0x7F31E2C8u;
    ctx->downcount -= 3;
    // 7F31E2C8: extsh r4, r29
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[29];
    }

label_7F31E2CC:
    ctx->pc = 0x7F31E2CCu;
    // 7F31E2CC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E2D0:
    ctx->pc = 0x7F31E2D0u;
    // 7F31E2D0: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31E2D4u;
            goto label_7F31E5E4;
    }

label_7F31E2D4:
    ctx->pc = 0x7F31E2D4u;
    ctx->downcount -= 2;
    // 7F31E2D4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F31E2D8:
    ctx->pc = 0x7F31E2D8u;
    // 7F31E2D8: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31E2DCu;
            goto label_7F31E5D8;
    }

label_7F31E2DC:
    ctx->pc = 0x7F31E2DCu;
    ctx->downcount -= 3;
    // 7F31E2DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E2E0:
    ctx->pc = 0x7F31E2E0u;
    // 7F31E2E0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31E2E4:
    ctx->pc = 0x7F31E2E4u;
    // 7F31E2E4: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31E2E8u;
            goto label_7F31E5C8;
    }

label_7F31E2E8:
    ctx->pc = 0x7F31E2E8u;
    ctx->downcount -= 3;
    // 7F31E2E8: extsh r4, r29
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[29];
    }

label_7F31E2EC:
    ctx->pc = 0x7F31E2ECu;
    // 7F31E2EC: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F31E2F0:
    ctx->pc = 0x7F31E2F0u;
    // 7F31E2F0: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31E2F4u;
            goto label_7F31E5E4;
    }

label_7F31E2F4:
    ctx->pc = 0x7F31E2F4u;
    ctx->downcount -= 2;
    // 7F31E2F4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F31E2F8:
    ctx->pc = 0x7F31E2F8u;
    // 7F31E2F8: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31E2FCu;
            goto label_7F31E5D8;
    }

label_7F31E2FC:
    ctx->pc = 0x7F31E2FCu;
    ctx->downcount -= 3;
    // 7F31E2FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E300:
    ctx->pc = 0x7F31E300u;
    // 7F31E300: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31E304:
    ctx->pc = 0x7F31E304u;
    // 7F31E304: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31E308u;
            goto label_7F31E5C8;
    }

label_7F31E308:
    ctx->pc = 0x7F31E308u;
    ctx->downcount -= 4;
    // 7F31E308: addi    r0, r29, 80
    ctx->gpr[0] = ctx->gpr[29] + (u32)(s32)(80);

label_7F31E30C:
    ctx->pc = 0x7F31E30Cu;
    // 7F31E30C: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F31E310:
    ctx->pc = 0x7F31E310u;
    // 7F31E310: extsh r4, r0
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F31E314:
    ctx->pc = 0x7F31E314u;
    // 7F31E314: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31E318u;
            goto label_7F31E5E4;
    }

label_7F31E318:
    ctx->pc = 0x7F31E318u;
    ctx->downcount -= 2;
    // 7F31E318: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F31E31C:
    ctx->pc = 0x7F31E31Cu;
    // 7F31E31C: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31E320u;
            goto label_7F31E5D8;
    }

label_7F31E320:
    ctx->pc = 0x7F31E320u;
    ctx->downcount -= 3;
    // 7F31E320: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E324:
    ctx->pc = 0x7F31E324u;
    // 7F31E324: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31E328:
    ctx->pc = 0x7F31E328u;
    // 7F31E328: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31E32Cu;
            goto label_7F31E5C8;
    }

label_7F31E32C:
    ctx->pc = 0x7F31E32Cu;
    ctx->downcount -= 4;
    // 7F31E32C: addi    r0, r29, 80
    ctx->gpr[0] = ctx->gpr[29] + (u32)(s32)(80);

label_7F31E330:
    ctx->pc = 0x7F31E330u;
    // 7F31E330: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E334:
    ctx->pc = 0x7F31E334u;
    // 7F31E334: extsh r4, r0
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F31E338:
    ctx->pc = 0x7F31E338u;
    // 7F31E338: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31E33Cu;
            goto label_7F31E5E4;
    }

label_7F31E33C:
    ctx->pc = 0x7F31E33Cu;
    ctx->downcount -= 2;
    // 7F31E33C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F31E340:
    ctx->pc = 0x7F31E340u;
    // 7F31E340: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31E344u;
            goto label_7F31E5D8;
    }

label_7F31E344:
    ctx->pc = 0x7F31E344u;
    ctx->downcount -= 3;
    // 7F31E344: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E348:
    ctx->pc = 0x7F31E348u;
    // 7F31E348: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31E34C:
    ctx->pc = 0x7F31E34Cu;
    // 7F31E34C: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31E350u;
            goto label_7F31E5C8;
    }

label_7F31E350:
    ctx->pc = 0x7F31E350u;
    ctx->downcount -= 1;
    // 7F31E350: bl      0x7F31E5C4
    {
            ctx->lr = 0x7F31E354u;
            goto label_7F31E5C4;
    }

label_7F31E354:
    ctx->pc = 0x7F31E354u;
    ctx->downcount -= 5;
    // 7F31E354: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F31E358:
    ctx->pc = 0x7F31E358u;
    // 7F31E358: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F31E35C:
    ctx->pc = 0x7F31E35Cu;
    // 7F31E35C: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_7F31E360:
    ctx->pc = 0x7F31E360u;
    // 7F31E360: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F31E364:
    ctx->pc = 0x7F31E364u;
    // 7F31E364: bl      0x80046238
    {
            ctx->lr = 0x7F31E368u;
            ctx->pc = 0x80046238u;
            return;
    }

label_7F31E368:
    ctx->pc = 0x7F31E368u;
    ctx->downcount -= 4;
    // 7F31E368: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_7F31E36C:
    ctx->pc = 0x7F31E36Cu;
    // 7F31E36C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F31E370:
    ctx->pc = 0x7F31E370u;
    // 7F31E370: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_7F31E374:
    ctx->pc = 0x7F31E374u;
    // 7F31E374: bl      0x80042E0C
    {
            ctx->lr = 0x7F31E378u;
            ctx->pc = 0x80042E0Cu;
            return;
    }

label_7F31E378:
    ctx->pc = 0x7F31E378u;
    ctx->downcount -= 3;
    // 7F31E378: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E37C:
    ctx->pc = 0x7F31E37Cu;
    // 7F31E37C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31E380:
    ctx->pc = 0x7F31E380u;
    // 7F31E380: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31E384u;
            goto label_7F31E5E4;
    }

label_7F31E384:
    ctx->pc = 0x7F31E384u;
    ctx->downcount -= 2;
    // 7F31E384: li      r3, 200
    ctx->gpr[3] = (u32)(s32)(200);

label_7F31E388:
    ctx->pc = 0x7F31E388u;
    // 7F31E388: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31E38Cu;
            goto label_7F31E5D8;
    }

label_7F31E38C:
    ctx->pc = 0x7F31E38Cu;
    ctx->downcount -= 3;
    // 7F31E38C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E390:
    ctx->pc = 0x7F31E390u;
    // 7F31E390: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31E394:
    ctx->pc = 0x7F31E394u;
    // 7F31E394: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31E398u;
            goto label_7F31E5C8;
    }

label_7F31E398:
    ctx->pc = 0x7F31E398u;
    ctx->downcount -= 3;
    // 7F31E398: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F31E39C:
    ctx->pc = 0x7F31E39Cu;
    // 7F31E39C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31E3A0:
    ctx->pc = 0x7F31E3A0u;
    // 7F31E3A0: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31E3A4u;
            goto label_7F31E5E4;
    }

label_7F31E3A4:
    ctx->pc = 0x7F31E3A4u;
    ctx->downcount -= 2;
    // 7F31E3A4: li      r3, 200
    ctx->gpr[3] = (u32)(s32)(200);

label_7F31E3A8:
    ctx->pc = 0x7F31E3A8u;
    // 7F31E3A8: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31E3ACu;
            goto label_7F31E5D8;
    }

label_7F31E3AC:
    ctx->pc = 0x7F31E3ACu;
    ctx->downcount -= 3;
    // 7F31E3AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E3B0:
    ctx->pc = 0x7F31E3B0u;
    // 7F31E3B0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31E3B4:
    ctx->pc = 0x7F31E3B4u;
    // 7F31E3B4: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31E3B8u;
            goto label_7F31E5C8;
    }

label_7F31E3B8:
    ctx->pc = 0x7F31E3B8u;
    ctx->downcount -= 3;
    // 7F31E3B8: extsh r4, r29
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[29];
    }

label_7F31E3BC:
    ctx->pc = 0x7F31E3BCu;
    // 7F31E3BC: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F31E3C0:
    ctx->pc = 0x7F31E3C0u;
    // 7F31E3C0: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31E3C4u;
            goto label_7F31E5E4;
    }

label_7F31E3C4:
    ctx->pc = 0x7F31E3C4u;
    ctx->downcount -= 2;
    // 7F31E3C4: li      r3, 200
    ctx->gpr[3] = (u32)(s32)(200);

label_7F31E3C8:
    ctx->pc = 0x7F31E3C8u;
    // 7F31E3C8: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31E3CCu;
            goto label_7F31E5D8;
    }

label_7F31E3CC:
    ctx->pc = 0x7F31E3CCu;
    ctx->downcount -= 3;
    // 7F31E3CC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E3D0:
    ctx->pc = 0x7F31E3D0u;
    // 7F31E3D0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31E3D4:
    ctx->pc = 0x7F31E3D4u;
    // 7F31E3D4: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31E3D8u;
            goto label_7F31E5C8;
    }

label_7F31E3D8:
    ctx->pc = 0x7F31E3D8u;
    ctx->downcount -= 3;
    // 7F31E3D8: extsh r4, r29
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[29];
    }

label_7F31E3DC:
    ctx->pc = 0x7F31E3DCu;
    // 7F31E3DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E3E0:
    ctx->pc = 0x7F31E3E0u;
    // 7F31E3E0: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31E3E4u;
            goto label_7F31E5E4;
    }

label_7F31E3E4:
    ctx->pc = 0x7F31E3E4u;
    ctx->downcount -= 2;
    // 7F31E3E4: li      r3, 200
    ctx->gpr[3] = (u32)(s32)(200);

label_7F31E3E8:
    ctx->pc = 0x7F31E3E8u;
    // 7F31E3E8: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31E3ECu;
            goto label_7F31E5D8;
    }

label_7F31E3EC:
    ctx->pc = 0x7F31E3ECu;
    ctx->downcount -= 3;
    // 7F31E3EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E3F0:
    ctx->pc = 0x7F31E3F0u;
    // 7F31E3F0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31E3F4:
    ctx->pc = 0x7F31E3F4u;
    // 7F31E3F4: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31E3F8u;
            goto label_7F31E5C8;
    }

label_7F31E3F8:
    ctx->pc = 0x7F31E3F8u;
    ctx->downcount -= 3;
    // 7F31E3F8: extsh r4, r31
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[31];
    }

label_7F31E3FC:
    ctx->pc = 0x7F31E3FCu;
    // 7F31E3FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E400:
    ctx->pc = 0x7F31E400u;
    // 7F31E400: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31E404u;
            goto label_7F31E5E4;
    }

label_7F31E404:
    ctx->pc = 0x7F31E404u;
    ctx->downcount -= 2;
    // 7F31E404: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E408:
    ctx->pc = 0x7F31E408u;
    // 7F31E408: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31E40Cu;
            goto label_7F31E5D8;
    }

label_7F31E40C:
    ctx->pc = 0x7F31E40Cu;
    ctx->downcount -= 3;
    // 7F31E40C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E410:
    ctx->pc = 0x7F31E410u;
    // 7F31E410: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31E414:
    ctx->pc = 0x7F31E414u;
    // 7F31E414: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31E418u;
            goto label_7F31E5C8;
    }

label_7F31E418:
    ctx->pc = 0x7F31E418u;
    ctx->downcount -= 3;
    // 7F31E418: extsh r4, r31
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[31];
    }

label_7F31E41C:
    ctx->pc = 0x7F31E41Cu;
    // 7F31E41C: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F31E420:
    ctx->pc = 0x7F31E420u;
    // 7F31E420: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31E424u;
            goto label_7F31E5E4;
    }

label_7F31E424:
    ctx->pc = 0x7F31E424u;
    ctx->downcount -= 2;
    // 7F31E424: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E428:
    ctx->pc = 0x7F31E428u;
    // 7F31E428: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31E42Cu;
            goto label_7F31E5D8;
    }

label_7F31E42C:
    ctx->pc = 0x7F31E42Cu;
    ctx->downcount -= 3;
    // 7F31E42C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E430:
    ctx->pc = 0x7F31E430u;
    // 7F31E430: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31E434:
    ctx->pc = 0x7F31E434u;
    // 7F31E434: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31E438u;
            goto label_7F31E5C8;
    }

label_7F31E438:
    ctx->pc = 0x7F31E438u;
    ctx->downcount -= 3;
    // 7F31E438: extsh r4, r30
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[30];
    }

label_7F31E43C:
    ctx->pc = 0x7F31E43Cu;
    // 7F31E43C: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F31E440:
    ctx->pc = 0x7F31E440u;
    // 7F31E440: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31E444u;
            goto label_7F31E5E4;
    }

label_7F31E444:
    ctx->pc = 0x7F31E444u;
    ctx->downcount -= 2;
    // 7F31E444: li      r3, 255
    ctx->gpr[3] = (u32)(s32)(255);

label_7F31E448:
    ctx->pc = 0x7F31E448u;
    // 7F31E448: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31E44Cu;
            goto label_7F31E5D8;
    }

label_7F31E44C:
    ctx->pc = 0x7F31E44Cu;
    ctx->downcount -= 3;
    // 7F31E44C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E450:
    ctx->pc = 0x7F31E450u;
    // 7F31E450: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31E454:
    ctx->pc = 0x7F31E454u;
    // 7F31E454: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31E458u;
            goto label_7F31E5C8;
    }

label_7F31E458:
    ctx->pc = 0x7F31E458u;
    ctx->downcount -= 3;
    // 7F31E458: extsh r4, r30
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[30];
    }

label_7F31E45C:
    ctx->pc = 0x7F31E45Cu;
    // 7F31E45C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E460:
    ctx->pc = 0x7F31E460u;
    // 7F31E460: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31E464u;
            goto label_7F31E5E4;
    }

label_7F31E464:
    ctx->pc = 0x7F31E464u;
    ctx->downcount -= 2;
    // 7F31E464: li      r3, 255
    ctx->gpr[3] = (u32)(s32)(255);

label_7F31E468:
    ctx->pc = 0x7F31E468u;
    // 7F31E468: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31E46Cu;
            goto label_7F31E5D8;
    }

label_7F31E46C:
    ctx->pc = 0x7F31E46Cu;
    ctx->downcount -= 3;
    // 7F31E46C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E470:
    ctx->pc = 0x7F31E470u;
    // 7F31E470: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31E474:
    ctx->pc = 0x7F31E474u;
    // 7F31E474: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31E478u;
            goto label_7F31E5C8;
    }

label_7F31E478:
    ctx->pc = 0x7F31E478u;
    ctx->downcount -= 3;
    // 7F31E478: extsh r4, r30
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[30];
    }

label_7F31E47C:
    ctx->pc = 0x7F31E47Cu;
    // 7F31E47C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E480:
    ctx->pc = 0x7F31E480u;
    // 7F31E480: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31E484u;
            goto label_7F31E5E4;
    }

label_7F31E484:
    ctx->pc = 0x7F31E484u;
    ctx->downcount -= 2;
    // 7F31E484: li      r3, 255
    ctx->gpr[3] = (u32)(s32)(255);

label_7F31E488:
    ctx->pc = 0x7F31E488u;
    // 7F31E488: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31E48Cu;
            goto label_7F31E5D8;
    }

label_7F31E48C:
    ctx->pc = 0x7F31E48Cu;
    ctx->downcount -= 3;
    // 7F31E48C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E490:
    ctx->pc = 0x7F31E490u;
    // 7F31E490: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31E494:
    ctx->pc = 0x7F31E494u;
    // 7F31E494: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31E498u;
            goto label_7F31E5C8;
    }

label_7F31E498:
    ctx->pc = 0x7F31E498u;
    ctx->downcount -= 3;
    // 7F31E498: extsh r4, r30
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[30];
    }

label_7F31E49C:
    ctx->pc = 0x7F31E49Cu;
    // 7F31E49C: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F31E4A0:
    ctx->pc = 0x7F31E4A0u;
    // 7F31E4A0: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31E4A4u;
            goto label_7F31E5E4;
    }

label_7F31E4A4:
    ctx->pc = 0x7F31E4A4u;
    ctx->downcount -= 2;
    // 7F31E4A4: li      r3, 255
    ctx->gpr[3] = (u32)(s32)(255);

label_7F31E4A8:
    ctx->pc = 0x7F31E4A8u;
    // 7F31E4A8: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31E4ACu;
            goto label_7F31E5D8;
    }

label_7F31E4AC:
    ctx->pc = 0x7F31E4ACu;
    ctx->downcount -= 3;
    // 7F31E4AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E4B0:
    ctx->pc = 0x7F31E4B0u;
    // 7F31E4B0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31E4B4:
    ctx->pc = 0x7F31E4B4u;
    // 7F31E4B4: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31E4B8u;
            goto label_7F31E5C8;
    }

label_7F31E4B8:
    ctx->pc = 0x7F31E4B8u;
    ctx->downcount -= 3;
    // 7F31E4B8: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F31E4BC:
    ctx->pc = 0x7F31E4BCu;
    // 7F31E4BC: li      r4, 7168
    ctx->gpr[4] = (u32)(s32)(7168);

label_7F31E4C0:
    ctx->pc = 0x7F31E4C0u;
    // 7F31E4C0: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31E4C4u;
            goto label_7F31E5E4;
    }

label_7F31E4C4:
    ctx->pc = 0x7F31E4C4u;
    ctx->downcount -= 2;
    // 7F31E4C4: li      r3, 255
    ctx->gpr[3] = (u32)(s32)(255);

label_7F31E4C8:
    ctx->pc = 0x7F31E4C8u;
    // 7F31E4C8: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31E4CCu;
            goto label_7F31E5D8;
    }

label_7F31E4CC:
    ctx->pc = 0x7F31E4CCu;
    ctx->downcount -= 3;
    // 7F31E4CC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E4D0:
    ctx->pc = 0x7F31E4D0u;
    // 7F31E4D0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31E4D4:
    ctx->pc = 0x7F31E4D4u;
    // 7F31E4D4: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31E4D8u;
            goto label_7F31E5C8;
    }

label_7F31E4D8:
    ctx->pc = 0x7F31E4D8u;
    ctx->downcount -= 3;
    // 7F31E4D8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E4DC:
    ctx->pc = 0x7F31E4DCu;
    // 7F31E4DC: li      r4, 7168
    ctx->gpr[4] = (u32)(s32)(7168);

label_7F31E4E0:
    ctx->pc = 0x7F31E4E0u;
    // 7F31E4E0: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31E4E4u;
            goto label_7F31E5E4;
    }

label_7F31E4E4:
    ctx->pc = 0x7F31E4E4u;
    ctx->downcount -= 2;
    // 7F31E4E4: li      r3, 255
    ctx->gpr[3] = (u32)(s32)(255);

label_7F31E4E8:
    ctx->pc = 0x7F31E4E8u;
    // 7F31E4E8: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31E4ECu;
            goto label_7F31E5D8;
    }

label_7F31E4EC:
    ctx->pc = 0x7F31E4ECu;
    ctx->downcount -= 3;
    // 7F31E4EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E4F0:
    ctx->pc = 0x7F31E4F0u;
    // 7F31E4F0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31E4F4:
    ctx->pc = 0x7F31E4F4u;
    // 7F31E4F4: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31E4F8u;
            goto label_7F31E5C8;
    }

label_7F31E4F8:
    ctx->pc = 0x7F31E4F8u;
    ctx->downcount -= 1;
    // 7F31E4F8: bl      0x7F31E5C4
    {
            ctx->lr = 0x7F31E4FCu;
            goto label_7F31E5C4;
    }

label_7F31E4FC:
    ctx->pc = 0x7F31E4FCu;
    ctx->downcount -= 3;
    // 7F31E4FC: lwz     r3, 60(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31E500:
    ctx->pc = 0x7F31E500u;
    // 7F31E500: or   r4, r22, r22
    {
        ctx->gpr[4] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F31E504:
    ctx->pc = 0x7F31E504u;
    // 7F31E504: bl      0x7F2EA688
    {
            ctx->lr = 0x7F31E508u;
            ctx->pc = 0x7F2EA688u;
            return;
    }

label_7F31E508:
    ctx->pc = 0x7F31E508u;
    ctx->downcount -= 27;
    // 7F31E508: lfs     f1, 16(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F31E508u)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31E50C:
    ctx->pc = 0x7F31E50Cu;
    // 7F31E50C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F31E510:
    ctx->pc = 0x7F31E510u;
    // 7F31E510: lfs     f0, 20(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F31E510u)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31E514:
    ctx->pc = 0x7F31E514u;
    // 7F31E514: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31E518:
    ctx->pc = 0x7F31E518u;
    // 7F31E518: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31E51C:
    ctx->pc = 0x7F31E51Cu;
    // 7F31E51C: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31E51Cu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F31E520:
    ctx->pc = 0x7F31E520u;
    // 7F31E520: lfd     f2, -29152(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31E520u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29152);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31E524:
    ctx->pc = 0x7F31E524u;
    // 7F31E524: stfs     f0, 16(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F31E524u)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F31E528:
    ctx->pc = 0x7F31E528u;
    // 7F31E528: lwz     r0, 0(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31E52C:
    ctx->pc = 0x7F31E52Cu;
    // 7F31E52C: lfs     f0, 16(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F31E52Cu)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31E530:
    ctx->pc = 0x7F31E530u;
    // 7F31E530: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F31E534:
    ctx->pc = 0x7F31E534u;
    // 7F31E534: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31E538:
    ctx->pc = 0x7F31E538u;
    // 7F31E538: lfd     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31E538u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31E53C:
    ctx->pc = 0x7F31E53Cu;
    // 7F31E53C: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F31E53Cu)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F31E540:
    ctx->pc = 0x7F31E540u;
    // 7F31E540: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31E540u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F31E544:
    ctx->pc = 0x7F31E544u;
    // 7F31E544: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31E544u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F31E548:
    ctx->pc = 0x7F31E548u;
    // 7F31E548: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31E548u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F31E54C:
    ctx->pc = 0x7F31E54Cu;
    // 7F31E54C: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31E550:
    ctx->pc = 0x7F31E550u;
    // 7F31E550: stw     r0, 0(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31E554:
    ctx->pc = 0x7F31E554u;
    // 7F31E554: lwz     r3, 8(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31E558:
    ctx->pc = 0x7F31E558u;
    // 7F31E558: addi    r0, r3, -42
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-42);

label_7F31E55C:
    ctx->pc = 0x7F31E55Cu;
    // 7F31E55C: stw     r0, 8(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31E560:
    ctx->pc = 0x7F31E560u;
    // 7F31E560: lwz     r3, 0(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31E564:
    ctx->pc = 0x7F31E564u;
    // 7F31E564: lwz     r0, 8(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31E568:
    ctx->pc = 0x7F31E568u;
    // 7F31E568: addi    r3, r3, 80
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(80);

label_7F31E56C:
    ctx->pc = 0x7F31E56Cu;
    // 7F31E56C: cmpw    r0, r3
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

label_7F31E570:
    ctx->pc = 0x7F31E570u;
    // 7F31E570: bc    4, 0, 0x7F31E578
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31E578;
        }
    }

label_7F31E574:
    ctx->pc = 0x7F31E574u;
    ctx->downcount -= 1;
    // 7F31E574: stw     r3, 8(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31E578:
    ctx->pc = 0x7F31E578u;
    ctx->downcount -= 8;
    // 7F31E578: lwz     r3, 12(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31E57C:
    ctx->pc = 0x7F31E57Cu;
    // 7F31E57C: addi    r0, r3, -42
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-42);

label_7F31E580:
    ctx->pc = 0x7F31E580u;
    // 7F31E580: stw     r0, 12(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31E584:
    ctx->pc = 0x7F31E584u;
    // 7F31E584: lwz     r3, 8(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31E588:
    ctx->pc = 0x7F31E588u;
    // 7F31E588: lwz     r0, 12(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31E58C:
    ctx->pc = 0x7F31E58Cu;
    // 7F31E58C: addi    r3, r3, 80
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(80);

label_7F31E590:
    ctx->pc = 0x7F31E590u;
    // 7F31E590: cmpw    r0, r3
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

label_7F31E594:
    ctx->pc = 0x7F31E594u;
    // 7F31E594: bc    4, 0, 0x7F31E59C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31E59C;
        }
    }

label_7F31E598:
    ctx->pc = 0x7F31E598u;
    ctx->downcount -= 1;
    // 7F31E598: stw     r3, 12(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31E59C:
    ctx->pc = 0x7F31E59Cu;
    ctx->downcount -= 2;
    // 7F31E59C: cmpwi   r30, 0
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

label_7F31E5A0:
    ctx->pc = 0x7F31E5A0u;
    // 7F31E5A0: bc    12, 1, 0x7F31E5AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31E5AC;
        }
    }

label_7F31E5A4:
    ctx->pc = 0x7F31E5A4u;
    ctx->downcount -= 2;
    // 7F31E5A4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F31E5A8:
    ctx->pc = 0x7F31E5A8u;
    // 7F31E5A8: b       0x7F31E5B0
    {
            goto label_7F31E5B0;
    }

label_7F31E5AC:
    ctx->pc = 0x7F31E5ACu;
    ctx->downcount -= 1;
    // 7F31E5AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E5B0:
    ctx->pc = 0x7F31E5B0u;
    ctx->downcount -= 16;
    // 7F31E5B0: lmw     r20, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 20; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F31E5B4:
    ctx->pc = 0x7F31E5B4u;
    // 7F31E5B4: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31E5B8:
    ctx->pc = 0x7F31E5B8u;
    // 7F31E5B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31E5BC:
    ctx->pc = 0x7F31E5BCu;
    // 7F31E5BC: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F31E5C0:
    ctx->pc = 0x7F31E5C0u;
    // 7F31E5C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31E5C4:
    ctx->pc = 0x7F31E5C4u;
    ctx->downcount -= 1;
    // 7F31E5C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31E5C8:
    ctx->pc = 0x7F31E5C8u;
    ctx->downcount -= 4;
    // 7F31E5C8: lis     r5, -13311
    ctx->gpr[5] = ((u32)(s32)(-13311) << 16);

label_7F31E5CC:
    ctx->pc = 0x7F31E5CCu;
    // 7F31E5CC: sth     r3, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F31E5D0:
    ctx->pc = 0x7F31E5D0u;
    // 7F31E5D0: sth     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F31E5D4:
    ctx->pc = 0x7F31E5D4u;
    // 7F31E5D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31E5D8:
    ctx->pc = 0x7F31E5D8u;
    ctx->downcount -= 3;
    // 7F31E5D8: lis     r4, -13311
    ctx->gpr[4] = ((u32)(s32)(-13311) << 16);

label_7F31E5DC:
    ctx->pc = 0x7F31E5DCu;
    // 7F31E5DC: stw     r3, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31E5E0:
    ctx->pc = 0x7F31E5E0u;
    // 7F31E5E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31E5E4:
    ctx->pc = 0x7F31E5E4u;
    ctx->downcount -= 4;
    // 7F31E5E4: lis     r5, -13311
    ctx->gpr[5] = ((u32)(s32)(-13311) << 16);

label_7F31E5E8:
    ctx->pc = 0x7F31E5E8u;
    // 7F31E5E8: sth     r3, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F31E5EC:
    ctx->pc = 0x7F31E5ECu;
    // 7F31E5EC: sth     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F31E5F0:
    ctx->pc = 0x7F31E5F0u;
    // 7F31E5F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31E5F4:
    ctx->pc = 0x7F31E5F4u;
    ctx->downcount -= 44;
    // 7F31E5F4: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31E5F8:
    ctx->pc = 0x7F31E5F8u;
    // 7F31E5F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31E5FC:
    ctx->pc = 0x7F31E5FCu;
    // 7F31E5FC: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_7F31E600:
    ctx->pc = 0x7F31E600u;
    // 7F31E600: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31E604:
    ctx->pc = 0x7F31E604u;
    // 7F31E604: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31E608:
    ctx->pc = 0x7F31E608u;
    // 7F31E608: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F31E60C:
    ctx->pc = 0x7F31E60Cu;
    // 7F31E60C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31E610:
    ctx->pc = 0x7F31E610u;
    // 7F31E610: lwz     r6, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F31E614:
    ctx->pc = 0x7F31E614u;
    // 7F31E614: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31E618:
    ctx->pc = 0x7F31E618u;
    // 7F31E618: addi    r5, r3, -29152
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-29152);

label_7F31E61C:
    ctx->pc = 0x7F31E61Cu;
    // 7F31E61C: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F31E620:
    ctx->pc = 0x7F31E620u;
    // 7F31E620: lwz     r7, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F31E624:
    ctx->pc = 0x7F31E624u;
    // 7F31E624: li      r3, 7168
    ctx->gpr[3] = (u32)(s32)(7168);

label_7F31E628:
    ctx->pc = 0x7F31E628u;
    // 7F31E628: lwz     r6, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F31E62C:
    ctx->pc = 0x7F31E62Cu;
    // 7F31E62C: stw     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F31E630:
    ctx->pc = 0x7F31E630u;
    // 7F31E630: subf   r6, r7, r6
    {
        u32 a = ~ctx->gpr[7];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[6] = res;
    }

label_7F31E634:
    ctx->pc = 0x7F31E634u;
    // 7F31E634: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F31E634u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31E638:
    ctx->pc = 0x7F31E638u;
    // 7F31E638: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31E63C:
    ctx->pc = 0x7F31E63Cu;
    // 7F31E63C: xoris   r5, r6, 0x8000
    ctx->gpr[5] = ctx->gpr[6] ^ (0x8000u << 16);

label_7F31E640:
    ctx->pc = 0x7F31E640u;
    // 7F31E640: stw     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31E644:
    ctx->pc = 0x7F31E644u;
    // 7F31E644: lwz     r3, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31E648:
    ctx->pc = 0x7F31E648u;
    // 7F31E648: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F31E64C:
    ctx->pc = 0x7F31E64Cu;
    // 7F31E64C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31E650:
    ctx->pc = 0x7F31E650u;
    // 7F31E650: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31E650u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31E654:
    ctx->pc = 0x7F31E654u;
    // 7F31E654: addi    r0, r3, 1280
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1280);

label_7F31E658:
    ctx->pc = 0x7F31E658u;
    // 7F31E658: stw     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F31E65C:
    ctx->pc = 0x7F31E65Cu;
    // 7F31E65C: fsubs   f3, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F31E65Cu)) return;
    ppc_fsubs(ctx, 3, 0, 2);

label_7F31E660:
    ctx->pc = 0x7F31E660u;
    // 7F31E660: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31E664:
    ctx->pc = 0x7F31E664u;
    // 7F31E664: lwz     r3, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31E668:
    ctx->pc = 0x7F31E668u;
    // 7F31E668: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31E66C:
    ctx->pc = 0x7F31E66Cu;
    // 7F31E66C: addi    r0, r3, 2560
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(2560);

label_7F31E670:
    ctx->pc = 0x7F31E670u;
    // 7F31E670: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31E674:
    ctx->pc = 0x7F31E674u;
    // 7F31E674: lwz     r4, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31E678:
    ctx->pc = 0x7F31E678u;
    // 7F31E678: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31E67C:
    ctx->pc = 0x7F31E67Cu;
    // 7F31E67C: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31E680:
    ctx->pc = 0x7F31E680u;
    // 7F31E680: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F31E684:
    ctx->pc = 0x7F31E684u;
    // 7F31E684: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F31E688:
    ctx->pc = 0x7F31E688u;
    // 7F31E688: stw     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31E68C:
    ctx->pc = 0x7F31E68Cu;
    // 7F31E68C: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31E690:
    ctx->pc = 0x7F31E690u;
    // 7F31E690: lfd     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31E690u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31E694:
    ctx->pc = 0x7F31E694u;
    // 7F31E694: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31E694u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31E698:
    ctx->pc = 0x7F31E698u;
    // 7F31E698: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F31E698u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F31E69C:
    ctx->pc = 0x7F31E69Cu;
    // 7F31E69C: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F31E69Cu)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_7F31E6A0:
    ctx->pc = 0x7F31E6A0u;
    // 7F31E6A0: bl      0x7F31DD40
    {
            ctx->lr = 0x7F31E6A4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31DD40u;
                return;
            }
            goto label_7F31DD40;
    }

label_7F31E6A4:
    ctx->pc = 0x7F31E6A4u;
    ctx->downcount -= 18;
    // 7F31E6A4: stfs     f1, 20(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31E6A4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F31E6A8:
    ctx->pc = 0x7F31E6A8u;
    // 7F31E6A8: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F31E6AC:
    ctx->pc = 0x7F31E6ACu;
    // 7F31E6AC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31E6B0:
    ctx->pc = 0x7F31E6B0u;
    // 7F31E6B0: lwz     r4, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31E6B4:
    ctx->pc = 0x7F31E6B4u;
    // 7F31E6B4: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31E6B8:
    ctx->pc = 0x7F31E6B8u;
    // 7F31E6B8: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31E6BC:
    ctx->pc = 0x7F31E6BCu;
    // 7F31E6BC: lfd     f1, -29152(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31E6BCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29152);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31E6C0:
    ctx->pc = 0x7F31E6C0u;
    // 7F31E6C0: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F31E6C4:
    ctx->pc = 0x7F31E6C4u;
    // 7F31E6C4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31E6C8:
    ctx->pc = 0x7F31E6C8u;
    // 7F31E6C8: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31E6C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31E6CC:
    ctx->pc = 0x7F31E6CCu;
    // 7F31E6CC: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F31E6CCu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F31E6D0:
    ctx->pc = 0x7F31E6D0u;
    // 7F31E6D0: stfs     f0, 16(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31E6D0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F31E6D4:
    ctx->pc = 0x7F31E6D4u;
    // 7F31E6D4: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31E6D8:
    ctx->pc = 0x7F31E6D8u;
    // 7F31E6D8: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F31E6DC:
    ctx->pc = 0x7F31E6DCu;
    // 7F31E6DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31E6E0:
    ctx->pc = 0x7F31E6E0u;
    // 7F31E6E0: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F31E6E4:
    ctx->pc = 0x7F31E6E4u;
    // 7F31E6E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31E6E8:
    ctx->pc = 0x7F31E6E8u;
    ctx->downcount -= 7;
    // 7F31E6E8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31E6EC:
    ctx->pc = 0x7F31E6ECu;
    // 7F31E6EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31E6F0:
    ctx->pc = 0x7F31E6F0u;
    // 7F31E6F0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31E6F4:
    ctx->pc = 0x7F31E6F4u;
    // 7F31E6F4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F31E6F8:
    ctx->pc = 0x7F31E6F8u;
    // 7F31E6F8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31E6FC:
    ctx->pc = 0x7F31E6FCu;
    // 7F31E6FC: addi    r3, r31, 700
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(700);

label_7F31E700:
    ctx->pc = 0x7F31E700u;
    // 7F31E700: bl      0x7F31E5F4
    {
            ctx->lr = 0x7F31E704u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5F4u;
                return;
            }
            goto label_7F31E5F4;
    }

label_7F31E704:
    ctx->pc = 0x7F31E704u;
    ctx->downcount -= 8;
    // 7F31E704: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F31E708:
    ctx->pc = 0x7F31E708u;
    // 7F31E708: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31E70C:
    ctx->pc = 0x7F31E70Cu;
    // 7F31E70C: lfs     f1, -29096(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F31E70Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-29096);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31E710:
    ctx->pc = 0x7F31E710u;
    // 7F31E710: lfs     f0, -29092(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31E710u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29092);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31E714:
    ctx->pc = 0x7F31E714u;
    // 7F31E714: stfs     f1, 772(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31E714u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(772);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F31E718:
    ctx->pc = 0x7F31E718u;
    // 7F31E718: stfs     f0, 764(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31E718u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(764);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F31E71C:
    ctx->pc = 0x7F31E71Cu;
    // 7F31E71C: lwz     r3, 628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(628);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31E720:
    ctx->pc = 0x7F31E720u;
    // 7F31E720: bl      0x7F2E4C28
    {
            ctx->lr = 0x7F31E724u;
            ctx->pc = 0x7F2E4C28u;
            return;
    }

label_7F31E724:
    ctx->pc = 0x7F31E724u;
    ctx->downcount -= 3;
    // 7F31E724: lwz     r3, 628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(628);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31E728:
    ctx->pc = 0x7F31E728u;
    // 7F31E728: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31E72C:
    ctx->pc = 0x7F31E72Cu;
    // 7F31E72C: bl      0x7F2E57A0
    {
            ctx->lr = 0x7F31E730u;
            ctx->pc = 0x7F2E57A0u;
            return;
    }

label_7F31E730:
    ctx->pc = 0x7F31E730u;
    ctx->downcount -= 6;
    // 7F31E730: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31E734:
    ctx->pc = 0x7F31E734u;
    // 7F31E734: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F31E738:
    ctx->pc = 0x7F31E738u;
    // 7F31E738: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31E73C:
    ctx->pc = 0x7F31E73Cu;
    // 7F31E73C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F31E740:
    ctx->pc = 0x7F31E740u;
    // 7F31E740: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31E744:
    ctx->pc = 0x7F31E744u;
    ctx->downcount -= 9;
    // 7F31E744: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31E748:
    ctx->pc = 0x7F31E748u;
    // 7F31E748: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31E74C:
    ctx->pc = 0x7F31E74Cu;
    // 7F31E74C: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F31E750:
    ctx->pc = 0x7F31E750u;
    // 7F31E750: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_7F31E754:
    ctx->pc = 0x7F31E754u;
    // 7F31E754: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31E758:
    ctx->pc = 0x7F31E758u;
    // 7F31E758: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F31E75C:
    ctx->pc = 0x7F31E75Cu;
    // 7F31E75C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31E760:
    ctx->pc = 0x7F31E760u;
    // 7F31E760: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31E764:
    ctx->pc = 0x7F31E764u;
    // 7F31E764: bl      0x7F3BEED4
    {
            ctx->lr = 0x7F31E768u;
            ctx->pc = 0x7F3BEED4u;
            return;
    }

label_7F31E768:
    ctx->pc = 0x7F31E768u;
    ctx->downcount -= 5;
    // 7F31E768: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F31E76C:
    ctx->pc = 0x7F31E76Cu;
    // 7F31E76C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31E770:
    ctx->pc = 0x7F31E770u;
    // 7F31E770: lfs     f1, -29088(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F31E770u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-29088);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31E774:
    ctx->pc = 0x7F31E774u;
    // 7F31E774: lfs     f2, -29084(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31E774u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29084);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F31E778:
    ctx->pc = 0x7F31E778u;
    // 7F31E778: bl      0x7F3BEF3C
    {
            ctx->lr = 0x7F31E77Cu;
            ctx->pc = 0x7F3BEF3Cu;
            return;
    }

label_7F31E77C:
    ctx->pc = 0x7F31E77Cu;
    ctx->downcount -= 12;
    // 7F31E77C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31E780:
    ctx->pc = 0x7F31E780u;
    // 7F31E780: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F31E784:
    ctx->pc = 0x7F31E784u;
    // 7F31E784: addi    r4, r3, -29088
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-29088);

label_7F31E788:
    ctx->pc = 0x7F31E788u;
    // 7F31E788: lis     r3, 3
    ctx->gpr[3] = ((u32)(s32)(3) << 16);

label_7F31E78C:
    ctx->pc = 0x7F31E78Cu;
    // 7F31E78C: stw     r0, 640(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(640);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31E790:
    ctx->pc = 0x7F31E790u;
    // 7F31E790: addi    r0, r3, 3735
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(3735);

label_7F31E794:
    ctx->pc = 0x7F31E794u;
    // 7F31E794: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F31E794u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31E798:
    ctx->pc = 0x7F31E798u;
    // 7F31E798: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F31E79C:
    ctx->pc = 0x7F31E79Cu;
    // 7F31E79C: stfs     f0, 772(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31E79Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(772);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F31E7A0:
    ctx->pc = 0x7F31E7A0u;
    // 7F31E7A0: stw     r0, 632(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(632);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31E7A4:
    ctx->pc = 0x7F31E7A4u;
    // 7F31E7A4: lwz     r3, 628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(628);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31E7A8:
    ctx->pc = 0x7F31E7A8u;
    // 7F31E7A8: bl      0x7F2E57A0
    {
            ctx->lr = 0x7F31E7ACu;
            ctx->pc = 0x7F2E57A0u;
            return;
    }

label_7F31E7AC:
    ctx->pc = 0x7F31E7ACu;
    ctx->downcount -= 6;
    // 7F31E7AC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31E7B0:
    ctx->pc = 0x7F31E7B0u;
    // 7F31E7B0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F31E7B4:
    ctx->pc = 0x7F31E7B4u;
    // 7F31E7B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31E7B8:
    ctx->pc = 0x7F31E7B8u;
    // 7F31E7B8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F31E7BC:
    ctx->pc = 0x7F31E7BCu;
    // 7F31E7BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31E7C0:
    ctx->pc = 0x7F31E7C0u;
    ctx->downcount -= 18;
    // 7F31E7C0: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F31E7C4:
    ctx->pc = 0x7F31E7C4u;
    // 7F31E7C4: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31E7C8:
    ctx->pc = 0x7F31E7C8u;
    // 7F31E7C8: lfs     f0, -29092(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F31E7C8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-29092);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31E7CC:
    ctx->pc = 0x7F31E7CCu;
    // 7F31E7CC: rlwinm r8, r3, 8, 24, 31
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[3], 8u) & 0x000000FFu;
    }

label_7F31E7D0:
    ctx->pc = 0x7F31E7D0u;
    // 7F31E7D0: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F31E7D4:
    ctx->pc = 0x7F31E7D4u;
    // 7F31E7D4: rlwinm r7, r4, 8, 24, 31
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[4], 8u) & 0x000000FFu;
    }

label_7F31E7D8:
    ctx->pc = 0x7F31E7D8u;
    // 7F31E7D8: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31E7D8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F31E7DC:
    ctx->pc = 0x7F31E7DCu;
    // 7F31E7DC: rlwinm r9, r3, 16, 24, 31
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[3], 16u) & 0x000000FFu;
    }

label_7F31E7E0:
    ctx->pc = 0x7F31E7E0u;
    // 7F31E7E0: rlwinm r6, r4, 16, 24, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[4], 16u) & 0x000000FFu;
    }

label_7F31E7E4:
    ctx->pc = 0x7F31E7E4u;
    // 7F31E7E4: rlwinm r10, r3, 24, 24, 31
    {
        ctx->gpr[10] = dolrecomp_rotl32(ctx->gpr[3], 24u) & 0x000000FFu;
    }

label_7F31E7E8:
    ctx->pc = 0x7F31E7E8u;
    // 7F31E7E8: rlwinm r5, r4, 24, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[4], 24u) & 0x000000FFu;
    }

label_7F31E7EC:
    ctx->pc = 0x7F31E7ECu;
    // 7F31E7EC: rlwinm r0, r4, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x000000FFu;
    }

label_7F31E7F0:
    ctx->pc = 0x7F31E7F0u;
    // 7F31E7F0: rlwinm r11, r3, 0, 24, 31
    {
        ctx->gpr[11] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_7F31E7F4:
    ctx->pc = 0x7F31E7F4u;
    // 7F31E7F4: subf   r4, r8, r7
    {
        u32 a = ~ctx->gpr[8];
        u32 b = ctx->gpr[7];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_7F31E7F8:
    ctx->pc = 0x7F31E7F8u;
    // 7F31E7F8: subf   r7, r9, r6
    {
        u32 a = ~ctx->gpr[9];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[7] = res;
    }

label_7F31E7FC:
    ctx->pc = 0x7F31E7FCu;
    // 7F31E7FC: subf   r12, r10, r5
    {
        u32 a = ~ctx->gpr[10];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[12] = res;
    }

label_7F31E800:
    ctx->pc = 0x7F31E800u;
    // 7F31E800: subf   r31, r11, r0
    {
        u32 a = ~ctx->gpr[11];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[31] = res;
    }

label_7F31E804:
    ctx->pc = 0x7F31E804u;
    // 7F31E804: bc    4, 1, 0x7F31E810
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31E810;
        }
    }

label_7F31E808:
    ctx->pc = 0x7F31E808u;
    ctx->downcount -= 2;
    // 7F31E808: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31E808u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_7F31E80C:
    ctx->pc = 0x7F31E80Cu;
    // 7F31E80C: b       0x7F31E824
    {
            goto label_7F31E824;
    }

label_7F31E810:
    ctx->pc = 0x7F31E810u;
    ctx->downcount -= 4;
    // 7F31E810: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31E814:
    ctx->pc = 0x7F31E814u;
    // 7F31E814: lfs     f0, -29080(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31E814u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29080);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31E818:
    ctx->pc = 0x7F31E818u;
    // 7F31E818: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31E818u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F31E81C:
    ctx->pc = 0x7F31E81Cu;
    // 7F31E81C: bc    4, 0, 0x7F31E824
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31E824;
        }
    }

label_7F31E820:
    ctx->pc = 0x7F31E820u;
    ctx->downcount -= 1;
    // 7F31E820: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31E820u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_7F31E824:
    ctx->pc = 0x7F31E824u;
    ctx->downcount -= 46;
    // 7F31E824: lis     r5, 17200
    ctx->gpr[5] = ((u32)(s32)(17200) << 16);

label_7F31E828:
    ctx->pc = 0x7F31E828u;
    // 7F31E828: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F31E82C:
    ctx->pc = 0x7F31E82Cu;
    // 7F31E82C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31E830:
    ctx->pc = 0x7F31E830u;
    // 7F31E830: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31E834:
    ctx->pc = 0x7F31E834u;
    // 7F31E834: addi    r6, r3, -29152
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-29152);

label_7F31E838:
    ctx->pc = 0x7F31E838u;
    // 7F31E838: xoris   r4, r7, 0x8000
    ctx->gpr[4] = ctx->gpr[7] ^ (0x8000u << 16);

label_7F31E83C:
    ctx->pc = 0x7F31E83Cu;
    // 7F31E83C: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F31E840:
    ctx->pc = 0x7F31E840u;
    // 7F31E840: xoris   r3, r12, 0x8000
    ctx->gpr[3] = ctx->gpr[12] ^ (0x8000u << 16);

label_7F31E844:
    ctx->pc = 0x7F31E844u;
    // 7F31E844: xoris   r0, r31, 0x8000
    ctx->gpr[0] = ctx->gpr[31] ^ (0x8000u << 16);

label_7F31E848:
    ctx->pc = 0x7F31E848u;
    // 7F31E848: lfd     f4, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F31E848u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31E84C:
    ctx->pc = 0x7F31E84Cu;
    // 7F31E84C: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31E84Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31E850:
    ctx->pc = 0x7F31E850u;
    // 7F31E850: stw     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F31E854:
    ctx->pc = 0x7F31E854u;
    // 7F31E854: fsubs   f2, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F31E854u)) return;
    ppc_fsubs(ctx, 2, 0, 4);

label_7F31E858:
    ctx->pc = 0x7F31E858u;
    // 7F31E858: stw     r5, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F31E85C:
    ctx->pc = 0x7F31E85Cu;
    // 7F31E85C: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31E85Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31E860:
    ctx->pc = 0x7F31E860u;
    // 7F31E860: fmuls   f3, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F31E860u)) return;
    ppc_fmuls(ctx, 3, 2, 1);

label_7F31E864:
    ctx->pc = 0x7F31E864u;
    // 7F31E864: stw     r3, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31E868:
    ctx->pc = 0x7F31E868u;
    // 7F31E868: fsubs   f2, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F31E868u)) return;
    ppc_fsubs(ctx, 2, 0, 4);

label_7F31E86C:
    ctx->pc = 0x7F31E86Cu;
    // 7F31E86C: stw     r5, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F31E870:
    ctx->pc = 0x7F31E870u;
    // 7F31E870: fctiwz    f3, f3
    if (!ppc_fp_available_inline(ctx, 0x7F31E870u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[3], true, &result)) ctx->fpr[3] = dolrecomp_f64_from_bits(result); }

label_7F31E874:
    ctx->pc = 0x7F31E874u;
    // 7F31E874: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31E874u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31E878:
    ctx->pc = 0x7F31E878u;
    // 7F31E878: fmuls   f2, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F31E878u)) return;
    ppc_fmuls(ctx, 2, 2, 1);

label_7F31E87C:
    ctx->pc = 0x7F31E87Cu;
    // 7F31E87C: stfd     f3, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31E87Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[3]));
    }

label_7F31E880:
    ctx->pc = 0x7F31E880u;
    // 7F31E880: fsubs   f0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F31E880u)) return;
    ppc_fsubs(ctx, 0, 0, 4);

label_7F31E884:
    ctx->pc = 0x7F31E884u;
    // 7F31E884: fctiwz    f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F31E884u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[2], true, &result)) ctx->fpr[3] = dolrecomp_f64_from_bits(result); }

label_7F31E888:
    ctx->pc = 0x7F31E888u;
    // 7F31E888: lwz     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31E88C:
    ctx->pc = 0x7F31E88Cu;
    // 7F31E88C: stw     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31E890:
    ctx->pc = 0x7F31E890u;
    // 7F31E890: fmuls   f2, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F31E890u)) return;
    ppc_fmuls(ctx, 2, 0, 1);

label_7F31E894:
    ctx->pc = 0x7F31E894u;
    // 7F31E894: add   r0, r8, r4
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F31E898:
    ctx->pc = 0x7F31E898u;
    // 7F31E898: stw     r5, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F31E89C:
    ctx->pc = 0x7F31E89Cu;
    // 7F31E89C: cmpwi   r0, 255
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

label_7F31E8A0:
    ctx->pc = 0x7F31E8A0u;
    // 7F31E8A0: lfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31E8A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31E8A4:
    ctx->pc = 0x7F31E8A4u;
    // 7F31E8A4: fctiwz    f2, f2
    if (!ppc_fp_available_inline(ctx, 0x7F31E8A4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[2], true, &result)) ctx->fpr[2] = dolrecomp_f64_from_bits(result); }

label_7F31E8A8:
    ctx->pc = 0x7F31E8A8u;
    // 7F31E8A8: stfd     f3, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31E8A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[3]));
    }

label_7F31E8AC:
    ctx->pc = 0x7F31E8ACu;
    // 7F31E8AC: fsubs   f0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F31E8ACu)) return;
    ppc_fsubs(ctx, 0, 0, 4);

label_7F31E8B0:
    ctx->pc = 0x7F31E8B0u;
    // 7F31E8B0: stfd     f2, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31E8B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[2]));
    }

label_7F31E8B4:
    ctx->pc = 0x7F31E8B4u;
    // 7F31E8B4: lwz     r7, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F31E8B8:
    ctx->pc = 0x7F31E8B8u;
    // 7F31E8B8: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F31E8B8u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F31E8BC:
    ctx->pc = 0x7F31E8BCu;
    // 7F31E8BC: lwz     r12, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F31E8C0:
    ctx->pc = 0x7F31E8C0u;
    // 7F31E8C0: add   r4, r9, r7
    {
        u32 a = ctx->gpr[9];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F31E8C4:
    ctx->pc = 0x7F31E8C4u;
    // 7F31E8C4: add   r5, r10, r12
    {
        u32 a = ctx->gpr[10];
        u32 b = ctx->gpr[12];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F31E8C8:
    ctx->pc = 0x7F31E8C8u;
    // 7F31E8C8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31E8C8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F31E8CC:
    ctx->pc = 0x7F31E8CCu;
    // 7F31E8CC: stfd     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31E8CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F31E8D0:
    ctx->pc = 0x7F31E8D0u;
    // 7F31E8D0: lwz     r31, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F31E8D4:
    ctx->pc = 0x7F31E8D4u;
    // 7F31E8D4: add   r6, r11, r31
    {
        u32 a = ctx->gpr[11];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F31E8D8:
    ctx->pc = 0x7F31E8D8u;
    // 7F31E8D8: bc    4, 1, 0x7F31E8E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31E8E4;
        }
    }

label_7F31E8DC:
    ctx->pc = 0x7F31E8DCu;
    ctx->downcount -= 2;
    // 7F31E8DC: li      r0, 255
    ctx->gpr[0] = (u32)(s32)(255);

label_7F31E8E0:
    ctx->pc = 0x7F31E8E0u;
    // 7F31E8E0: b       0x7F31E8F0
    {
            goto label_7F31E8F0;
    }

label_7F31E8E4:
    ctx->pc = 0x7F31E8E4u;
    ctx->downcount -= 2;
    // 7F31E8E4: cmpwi   r0, 0
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

label_7F31E8E8:
    ctx->pc = 0x7F31E8E8u;
    // 7F31E8E8: bc    4, 0, 0x7F31E8F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31E8F0;
        }
    }

label_7F31E8EC:
    ctx->pc = 0x7F31E8ECu;
    ctx->downcount -= 1;
    // 7F31E8EC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31E8F0:
    ctx->pc = 0x7F31E8F0u;
    ctx->downcount -= 2;
    // 7F31E8F0: cmpwi   r4, 255
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

label_7F31E8F4:
    ctx->pc = 0x7F31E8F4u;
    // 7F31E8F4: bc    4, 1, 0x7F31E900
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31E900;
        }
    }

label_7F31E8F8:
    ctx->pc = 0x7F31E8F8u;
    ctx->downcount -= 2;
    // 7F31E8F8: li      r4, 255
    ctx->gpr[4] = (u32)(s32)(255);

label_7F31E8FC:
    ctx->pc = 0x7F31E8FCu;
    // 7F31E8FC: b       0x7F31E90C
    {
            goto label_7F31E90C;
    }

label_7F31E900:
    ctx->pc = 0x7F31E900u;
    ctx->downcount -= 2;
    // 7F31E900: cmpwi   r4, 0
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

label_7F31E904:
    ctx->pc = 0x7F31E904u;
    // 7F31E904: bc    4, 0, 0x7F31E90C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31E90C;
        }
    }

label_7F31E908:
    ctx->pc = 0x7F31E908u;
    ctx->downcount -= 1;
    // 7F31E908: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31E90C:
    ctx->pc = 0x7F31E90Cu;
    ctx->downcount -= 2;
    // 7F31E90C: cmpwi   r5, 255
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(255);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31E910:
    ctx->pc = 0x7F31E910u;
    // 7F31E910: bc    4, 1, 0x7F31E91C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31E91C;
        }
    }

label_7F31E914:
    ctx->pc = 0x7F31E914u;
    ctx->downcount -= 2;
    // 7F31E914: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_7F31E918:
    ctx->pc = 0x7F31E918u;
    // 7F31E918: b       0x7F31E928
    {
            goto label_7F31E928;
    }

label_7F31E91C:
    ctx->pc = 0x7F31E91Cu;
    ctx->downcount -= 2;
    // 7F31E91C: cmpwi   r5, 0
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

label_7F31E920:
    ctx->pc = 0x7F31E920u;
    // 7F31E920: bc    4, 0, 0x7F31E928
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31E928;
        }
    }

label_7F31E924:
    ctx->pc = 0x7F31E924u;
    ctx->downcount -= 1;
    // 7F31E924: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F31E928:
    ctx->pc = 0x7F31E928u;
    ctx->downcount -= 2;
    // 7F31E928: cmpwi   r6, 255
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(255);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31E92C:
    ctx->pc = 0x7F31E92Cu;
    // 7F31E92C: bc    4, 1, 0x7F31E938
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31E938;
        }
    }

label_7F31E930:
    ctx->pc = 0x7F31E930u;
    ctx->downcount -= 2;
    // 7F31E930: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F31E934:
    ctx->pc = 0x7F31E934u;
    // 7F31E934: b       0x7F31E944
    {
            goto label_7F31E944;
    }

label_7F31E938:
    ctx->pc = 0x7F31E938u;
    ctx->downcount -= 2;
    // 7F31E938: cmpwi   r6, 0
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

label_7F31E93C:
    ctx->pc = 0x7F31E93Cu;
    // 7F31E93C: bc    4, 0, 0x7F31E944
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31E944;
        }
    }

label_7F31E940:
    ctx->pc = 0x7F31E940u;
    ctx->downcount -= 1;
    // 7F31E940: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F31E944:
    ctx->pc = 0x7F31E944u;
    ctx->downcount -= 9;
    // 7F31E944: rlwinm r3, r0, 24, 0, 7
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_7F31E948:
    ctx->pc = 0x7F31E948u;
    // 7F31E948: rlwinm r0, r4, 16, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 16u) & 0xFFFF0000u;
    }

label_7F31E94C:
    ctx->pc = 0x7F31E94Cu;
    // 7F31E94C: rlwinm r4, r5, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[5], 8u) & 0xFFFFFF00u;
    }

label_7F31E950:
    ctx->pc = 0x7F31E950u;
    // 7F31E950: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_7F31E954:
    ctx->pc = 0x7F31E954u;
    // 7F31E954: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_7F31E958:
    ctx->pc = 0x7F31E958u;
    // 7F31E958: or   r3, r6, r0
    {
        ctx->gpr[3] = ctx->gpr[6] | ctx->gpr[0];
    }

label_7F31E95C:
    ctx->pc = 0x7F31E95Cu;
    // 7F31E95C: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F31E960:
    ctx->pc = 0x7F31E960u;
    // 7F31E960: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F31E964:
    ctx->pc = 0x7F31E964u;
    // 7F31E964: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31E968:
    ctx->pc = 0x7F31E968u;
    ctx->downcount -= 18;
    // 7F31E968: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31E96C:
    ctx->pc = 0x7F31E96Cu;
    // 7F31E96C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31E970:
    ctx->pc = 0x7F31E970u;
    // 7F31E970: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31E974:
    ctx->pc = 0x7F31E974u;
    // 7F31E974: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F31E978:
    ctx->pc = 0x7F31E978u;
    // 7F31E978: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31E97C:
    ctx->pc = 0x7F31E97Cu;
    // 7F31E97C: lwz     r30, 1130(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1130);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F31E980:
    ctx->pc = 0x7F31E980u;
    // 7F31E980: addi    r3, r31, 668
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(668);

label_7F31E984:
    ctx->pc = 0x7F31E984u;
    // 7F31E984: bl      0x7F2EA4A0
    {
            ctx->lr = 0x7F31E988u;
            ctx->pc = 0x7F2EA4A0u;
            return;
    }

label_7F31E988:
    ctx->pc = 0x7F31E988u;
    ctx->downcount -= 4;
    // 7F31E988: lwz     r0, 640(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(640);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31E98C:
    ctx->pc = 0x7F31E98Cu;
    // 7F31E98C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31E990:
    ctx->pc = 0x7F31E990u;
    // 7F31E990: cmpwi   r0, 9
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

label_7F31E994:
    ctx->pc = 0x7F31E994u;
    // 7F31E994: bc    4, 2, 0x7F31E9F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31E9F8;
        }
    }

label_7F31E998:
    ctx->pc = 0x7F31E998u;
    ctx->downcount -= 5;
    // 7F31E998: rlwinm r3, r30, 0, 0, 23
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0xFFFFFF00u;
    }

label_7F31E99C:
    ctx->pc = 0x7F31E99Cu;
    // 7F31E99C: lfs     f1, 764(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31E99Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(764);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31E9A0:
    ctx->pc = 0x7F31E9A0u;
    // 7F31E9A0: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31E9A4:
    ctx->pc = 0x7F31E9A4u;
    // 7F31E9A4: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F31E9A8:
    ctx->pc = 0x7F31E9A8u;
    // 7F31E9A8: bl      0x7F31E7C0
    {
            ctx->lr = 0x7F31E9ACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E7C0u;
                return;
            }
            goto label_7F31E7C0;
    }

label_7F31E9AC:
    ctx->pc = 0x7F31E9ACu;
    ctx->downcount -= 5;
    // 7F31E9AC: lfs     f1, 764(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31E9ACu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(764);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31E9B0:
    ctx->pc = 0x7F31E9B0u;
    // 7F31E9B0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31E9B4:
    ctx->pc = 0x7F31E9B4u;
    // 7F31E9B4: li      r3, -256
    ctx->gpr[3] = (u32)(s32)(-256);

label_7F31E9B8:
    ctx->pc = 0x7F31E9B8u;
    // 7F31E9B8: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F31E9BC:
    ctx->pc = 0x7F31E9BCu;
    // 7F31E9BC: bl      0x7F31E7C0
    {
            ctx->lr = 0x7F31E9C0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E7C0u;
                return;
            }
            goto label_7F31E7C0;
    }

label_7F31E9C0:
    ctx->pc = 0x7F31E9C0u;
    ctx->downcount -= 5;
    // 7F31E9C0: lis     r4, 1655
    ctx->gpr[4] = ((u32)(s32)(1655) << 16);

label_7F31E9C4:
    ctx->pc = 0x7F31E9C4u;
    // 7F31E9C4: lfs     f1, 764(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31E9C4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(764);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31E9C8:
    ctx->pc = 0x7F31E9C8u;
    // 7F31E9C8: addi    r3, r4, 32000
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(32000);

label_7F31E9CC:
    ctx->pc = 0x7F31E9CCu;
    // 7F31E9CC: addi    r4, r4, 32090
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(32090);

label_7F31E9D0:
    ctx->pc = 0x7F31E9D0u;
    // 7F31E9D0: bl      0x7F31E7C0
    {
            ctx->lr = 0x7F31E9D4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E7C0u;
                return;
            }
            goto label_7F31E7C0;
    }

label_7F31E9D4:
    ctx->pc = 0x7F31E9D4u;
    ctx->downcount -= 7;
    // 7F31E9D4: lis     r4, 803
    ctx->gpr[4] = ((u32)(s32)(803) << 16);

label_7F31E9D8:
    ctx->pc = 0x7F31E9D8u;
    // 7F31E9D8: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31E9DC:
    ctx->pc = 0x7F31E9DCu;
    // 7F31E9DC: addi    r3, r4, 12288
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(12288);

label_7F31E9E0:
    ctx->pc = 0x7F31E9E0u;
    // 7F31E9E0: lfs     f1, 764(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31E9E0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(764);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31E9E4:
    ctx->pc = 0x7F31E9E4u;
    // 7F31E9E4: or   r27, r0, r0
    {
        ctx->gpr[27] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F31E9E8:
    ctx->pc = 0x7F31E9E8u;
    // 7F31E9E8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31E9EC:
    ctx->pc = 0x7F31E9ECu;
    // 7F31E9EC: bl      0x7F31E7C0
    {
            ctx->lr = 0x7F31E9F0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E7C0u;
                return;
            }
            goto label_7F31E7C0;
    }

label_7F31E9F0:
    ctx->pc = 0x7F31E9F0u;
    ctx->downcount -= 2;
    // 7F31E9F0: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31E9F4:
    ctx->pc = 0x7F31E9F4u;
    // 7F31E9F4: b       0x7F31EA60
    {
            goto label_7F31EA60;
    }

label_7F31E9F8:
    ctx->pc = 0x7F31E9F8u;
    ctx->downcount -= 4;
    // 7F31E9F8: lfs     f1, 764(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31E9F8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(764);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31E9FC:
    ctx->pc = 0x7F31E9FCu;
    // 7F31E9FC: rlwinm r4, r30, 0, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0xFFFFFF00u;
    }

label_7F31EA00:
    ctx->pc = 0x7F31EA00u;
    // 7F31EA00: li      r3, 255
    ctx->gpr[3] = (u32)(s32)(255);

label_7F31EA04:
    ctx->pc = 0x7F31EA04u;
    // 7F31EA04: bl      0x7F31E7C0
    {
            ctx->lr = 0x7F31EA08u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E7C0u;
                return;
            }
            goto label_7F31E7C0;
    }

label_7F31EA08:
    ctx->pc = 0x7F31EA08u;
    ctx->downcount -= 5;
    // 7F31EA08: lfs     f1, 764(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31EA08u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(764);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31EA0C:
    ctx->pc = 0x7F31EA0Cu;
    // 7F31EA0C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31EA10:
    ctx->pc = 0x7F31EA10u;
    // 7F31EA10: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F31EA14:
    ctx->pc = 0x7F31EA14u;
    // 7F31EA14: li      r3, 255
    ctx->gpr[3] = (u32)(s32)(255);

label_7F31EA18:
    ctx->pc = 0x7F31EA18u;
    // 7F31EA18: bl      0x7F31E7C0
    {
            ctx->lr = 0x7F31EA1Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E7C0u;
                return;
            }
            goto label_7F31E7C0;
    }

label_7F31EA1C:
    ctx->pc = 0x7F31EA1Cu;
    ctx->downcount -= 5;
    // 7F31EA1C: lfs     f1, 764(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31EA1Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(764);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31EA20:
    ctx->pc = 0x7F31EA20u;
    // 7F31EA20: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31EA24:
    ctx->pc = 0x7F31EA24u;
    // 7F31EA24: li      r3, 255
    ctx->gpr[3] = (u32)(s32)(255);

label_7F31EA28:
    ctx->pc = 0x7F31EA28u;
    // 7F31EA28: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F31EA2C:
    ctx->pc = 0x7F31EA2Cu;
    // 7F31EA2C: bl      0x7F31E7C0
    {
            ctx->lr = 0x7F31EA30u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E7C0u;
                return;
            }
            goto label_7F31E7C0;
    }

label_7F31EA30:
    ctx->pc = 0x7F31EA30u;
    ctx->downcount -= 5;
    // 7F31EA30: lis     r3, 1655
    ctx->gpr[3] = ((u32)(s32)(1655) << 16);

label_7F31EA34:
    ctx->pc = 0x7F31EA34u;
    // 7F31EA34: lfs     f1, 764(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31EA34u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(764);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31EA38:
    ctx->pc = 0x7F31EA38u;
    // 7F31EA38: addi    r4, r3, 32090
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(32090);

label_7F31EA3C:
    ctx->pc = 0x7F31EA3Cu;
    // 7F31EA3C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31EA40:
    ctx->pc = 0x7F31EA40u;
    // 7F31EA40: bl      0x7F31E7C0
    {
            ctx->lr = 0x7F31EA44u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E7C0u;
                return;
            }
            goto label_7F31E7C0;
    }

label_7F31EA44:
    ctx->pc = 0x7F31EA44u;
    ctx->downcount -= 6;
    // 7F31EA44: lis     r4, 803
    ctx->gpr[4] = ((u32)(s32)(803) << 16);

label_7F31EA48:
    ctx->pc = 0x7F31EA48u;
    // 7F31EA48: lfs     f1, 764(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31EA48u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(764);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31EA4C:
    ctx->pc = 0x7F31EA4Cu;
    // 7F31EA4C: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31EA50:
    ctx->pc = 0x7F31EA50u;
    // 7F31EA50: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31EA54:
    ctx->pc = 0x7F31EA54u;
    // 7F31EA54: addi    r4, r4, 12288
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12288);

label_7F31EA58:
    ctx->pc = 0x7F31EA58u;
    // 7F31EA58: bl      0x7F31E7C0
    {
            ctx->lr = 0x7F31EA5Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E7C0u;
                return;
            }
            goto label_7F31E7C0;
    }

label_7F31EA5C:
    ctx->pc = 0x7F31EA5Cu;
    ctx->downcount -= 1;
    // 7F31EA5C: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31EA60:
    ctx->pc = 0x7F31EA60u;
    ctx->downcount -= 1;
    // 7F31EA60: bl      0x7F2EA87C
    {
            ctx->lr = 0x7F31EA64u;
            ctx->pc = 0x7F2EA87Cu;
            return;
    }

label_7F31EA64:
    ctx->pc = 0x7F31EA64u;
    ctx->downcount -= 1;
    // 7F31EA64: bl      0x7F2EA990
    {
            ctx->lr = 0x7F31EA68u;
            ctx->pc = 0x7F2EA990u;
            return;
    }

label_7F31EA68:
    ctx->pc = 0x7F31EA68u;
    ctx->downcount -= 5;
    // 7F31EA68: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F31EA6C:
    ctx->pc = 0x7F31EA6Cu;
    // 7F31EA6C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F31EA70:
    ctx->pc = 0x7F31EA70u;
    // 7F31EA70: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F31EA74:
    ctx->pc = 0x7F31EA74u;
    // 7F31EA74: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F31EA78:
    ctx->pc = 0x7F31EA78u;
    // 7F31EA78: bl      0x80046238
    {
            ctx->lr = 0x7F31EA7Cu;
            ctx->pc = 0x80046238u;
            return;
    }

label_7F31EA7C:
    ctx->pc = 0x7F31EA7Cu;
    ctx->downcount -= 4;
    // 7F31EA7C: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_7F31EA80:
    ctx->pc = 0x7F31EA80u;
    // 7F31EA80: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F31EA84:
    ctx->pc = 0x7F31EA84u;
    // 7F31EA84: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_7F31EA88:
    ctx->pc = 0x7F31EA88u;
    // 7F31EA88: bl      0x80042E0C
    {
            ctx->lr = 0x7F31EA8Cu;
            ctx->pc = 0x80042E0Cu;
            return;
    }

label_7F31EA8C:
    ctx->pc = 0x7F31EA8Cu;
    ctx->downcount -= 3;
    // 7F31EA8C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31EA90:
    ctx->pc = 0x7F31EA90u;
    // 7F31EA90: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31EA94:
    ctx->pc = 0x7F31EA94u;
    // 7F31EA94: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31EA98u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5E4u;
                return;
            }
            goto label_7F31E5E4;
    }

label_7F31EA98:
    ctx->pc = 0x7F31EA98u;
    ctx->downcount -= 2;
    // 7F31EA98: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F31EA9C:
    ctx->pc = 0x7F31EA9Cu;
    // 7F31EA9C: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31EAA0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5D8u;
                return;
            }
            goto label_7F31E5D8;
    }

label_7F31EAA0:
    ctx->pc = 0x7F31EAA0u;
    ctx->downcount -= 3;
    // 7F31EAA0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31EAA4:
    ctx->pc = 0x7F31EAA4u;
    // 7F31EAA4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31EAA8:
    ctx->pc = 0x7F31EAA8u;
    // 7F31EAA8: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31EAACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5C8u;
                return;
            }
            goto label_7F31E5C8;
    }

label_7F31EAAC:
    ctx->pc = 0x7F31EAACu;
    ctx->downcount -= 3;
    // 7F31EAAC: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F31EAB0:
    ctx->pc = 0x7F31EAB0u;
    // 7F31EAB0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31EAB4:
    ctx->pc = 0x7F31EAB4u;
    // 7F31EAB4: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31EAB8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5E4u;
                return;
            }
            goto label_7F31E5E4;
    }

label_7F31EAB8:
    ctx->pc = 0x7F31EAB8u;
    ctx->downcount -= 2;
    // 7F31EAB8: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F31EABC:
    ctx->pc = 0x7F31EABCu;
    // 7F31EABC: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31EAC0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5D8u;
                return;
            }
            goto label_7F31E5D8;
    }

label_7F31EAC0:
    ctx->pc = 0x7F31EAC0u;
    ctx->downcount -= 3;
    // 7F31EAC0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31EAC4:
    ctx->pc = 0x7F31EAC4u;
    // 7F31EAC4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31EAC8:
    ctx->pc = 0x7F31EAC8u;
    // 7F31EAC8: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31EACCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5C8u;
                return;
            }
            goto label_7F31E5C8;
    }

label_7F31EACC:
    ctx->pc = 0x7F31EACCu;
    ctx->downcount -= 3;
    // 7F31EACC: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F31EAD0:
    ctx->pc = 0x7F31EAD0u;
    // 7F31EAD0: li      r4, 2192
    ctx->gpr[4] = (u32)(s32)(2192);

label_7F31EAD4:
    ctx->pc = 0x7F31EAD4u;
    // 7F31EAD4: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31EAD8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5E4u;
                return;
            }
            goto label_7F31E5E4;
    }

label_7F31EAD8:
    ctx->pc = 0x7F31EAD8u;
    ctx->downcount -= 2;
    // 7F31EAD8: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F31EADC:
    ctx->pc = 0x7F31EADCu;
    // 7F31EADC: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31EAE0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5D8u;
                return;
            }
            goto label_7F31E5D8;
    }

label_7F31EAE0:
    ctx->pc = 0x7F31EAE0u;
    ctx->downcount -= 3;
    // 7F31EAE0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31EAE4:
    ctx->pc = 0x7F31EAE4u;
    // 7F31EAE4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31EAE8:
    ctx->pc = 0x7F31EAE8u;
    // 7F31EAE8: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31EAECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5C8u;
                return;
            }
            goto label_7F31E5C8;
    }

label_7F31EAEC:
    ctx->pc = 0x7F31EAECu;
    ctx->downcount -= 3;
    // 7F31EAEC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31EAF0:
    ctx->pc = 0x7F31EAF0u;
    // 7F31EAF0: li      r4, 2192
    ctx->gpr[4] = (u32)(s32)(2192);

label_7F31EAF4:
    ctx->pc = 0x7F31EAF4u;
    // 7F31EAF4: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31EAF8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5E4u;
                return;
            }
            goto label_7F31E5E4;
    }

label_7F31EAF8:
    ctx->pc = 0x7F31EAF8u;
    ctx->downcount -= 2;
    // 7F31EAF8: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F31EAFC:
    ctx->pc = 0x7F31EAFCu;
    // 7F31EAFC: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31EB00u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5D8u;
                return;
            }
            goto label_7F31E5D8;
    }

label_7F31EB00:
    ctx->pc = 0x7F31EB00u;
    ctx->downcount -= 3;
    // 7F31EB00: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31EB04:
    ctx->pc = 0x7F31EB04u;
    // 7F31EB04: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31EB08:
    ctx->pc = 0x7F31EB08u;
    // 7F31EB08: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31EB0Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5C8u;
                return;
            }
            goto label_7F31E5C8;
    }

label_7F31EB0C:
    ctx->pc = 0x7F31EB0Cu;
    ctx->downcount -= 3;
    // 7F31EB0C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31EB10:
    ctx->pc = 0x7F31EB10u;
    // 7F31EB10: li      r4, 2192
    ctx->gpr[4] = (u32)(s32)(2192);

label_7F31EB14:
    ctx->pc = 0x7F31EB14u;
    // 7F31EB14: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31EB18u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5E4u;
                return;
            }
            goto label_7F31E5E4;
    }

label_7F31EB18:
    ctx->pc = 0x7F31EB18u;
    ctx->downcount -= 2;
    // 7F31EB18: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F31EB1C:
    ctx->pc = 0x7F31EB1Cu;
    // 7F31EB1C: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31EB20u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5D8u;
                return;
            }
            goto label_7F31E5D8;
    }

label_7F31EB20:
    ctx->pc = 0x7F31EB20u;
    ctx->downcount -= 3;
    // 7F31EB20: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31EB24:
    ctx->pc = 0x7F31EB24u;
    // 7F31EB24: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31EB28:
    ctx->pc = 0x7F31EB28u;
    // 7F31EB28: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31EB2Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5C8u;
                return;
            }
            goto label_7F31E5C8;
    }

label_7F31EB2C:
    ctx->pc = 0x7F31EB2Cu;
    ctx->downcount -= 3;
    // 7F31EB2C: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F31EB30:
    ctx->pc = 0x7F31EB30u;
    // 7F31EB30: li      r4, 2192
    ctx->gpr[4] = (u32)(s32)(2192);

label_7F31EB34:
    ctx->pc = 0x7F31EB34u;
    // 7F31EB34: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31EB38u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5E4u;
                return;
            }
            goto label_7F31E5E4;
    }

label_7F31EB38:
    ctx->pc = 0x7F31EB38u;
    ctx->downcount -= 2;
    // 7F31EB38: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F31EB3C:
    ctx->pc = 0x7F31EB3Cu;
    // 7F31EB3C: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31EB40u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5D8u;
                return;
            }
            goto label_7F31E5D8;
    }

label_7F31EB40:
    ctx->pc = 0x7F31EB40u;
    ctx->downcount -= 3;
    // 7F31EB40: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31EB44:
    ctx->pc = 0x7F31EB44u;
    // 7F31EB44: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31EB48:
    ctx->pc = 0x7F31EB48u;
    // 7F31EB48: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31EB4Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5C8u;
                return;
            }
            goto label_7F31E5C8;
    }

label_7F31EB4C:
    ctx->pc = 0x7F31EB4Cu;
    ctx->downcount -= 3;
    // 7F31EB4C: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F31EB50:
    ctx->pc = 0x7F31EB50u;
    // 7F31EB50: li      r4, 4400
    ctx->gpr[4] = (u32)(s32)(4400);

label_7F31EB54:
    ctx->pc = 0x7F31EB54u;
    // 7F31EB54: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31EB58u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5E4u;
                return;
            }
            goto label_7F31E5E4;
    }

label_7F31EB58:
    ctx->pc = 0x7F31EB58u;
    ctx->downcount -= 2;
    // 7F31EB58: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F31EB5C:
    ctx->pc = 0x7F31EB5Cu;
    // 7F31EB5C: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31EB60u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5D8u;
                return;
            }
            goto label_7F31E5D8;
    }

label_7F31EB60:
    ctx->pc = 0x7F31EB60u;
    ctx->downcount -= 3;
    // 7F31EB60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31EB64:
    ctx->pc = 0x7F31EB64u;
    // 7F31EB64: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31EB68:
    ctx->pc = 0x7F31EB68u;
    // 7F31EB68: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31EB6Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5C8u;
                return;
            }
            goto label_7F31E5C8;
    }

label_7F31EB6C:
    ctx->pc = 0x7F31EB6Cu;
    ctx->downcount -= 3;
    // 7F31EB6C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31EB70:
    ctx->pc = 0x7F31EB70u;
    // 7F31EB70: li      r4, 4400
    ctx->gpr[4] = (u32)(s32)(4400);

label_7F31EB74:
    ctx->pc = 0x7F31EB74u;
    // 7F31EB74: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31EB78u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5E4u;
                return;
            }
            goto label_7F31E5E4;
    }

label_7F31EB78:
    ctx->pc = 0x7F31EB78u;
    ctx->downcount -= 2;
    // 7F31EB78: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F31EB7C:
    ctx->pc = 0x7F31EB7Cu;
    // 7F31EB7C: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31EB80u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5D8u;
                return;
            }
            goto label_7F31E5D8;
    }

label_7F31EB80:
    ctx->pc = 0x7F31EB80u;
    ctx->downcount -= 3;
    // 7F31EB80: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31EB84:
    ctx->pc = 0x7F31EB84u;
    // 7F31EB84: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31EB88:
    ctx->pc = 0x7F31EB88u;
    // 7F31EB88: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31EB8Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5C8u;
                return;
            }
            goto label_7F31E5C8;
    }

label_7F31EB8C:
    ctx->pc = 0x7F31EB8Cu;
    ctx->downcount -= 1;
    // 7F31EB8C: bl      0x7F31E5C4
    {
            ctx->lr = 0x7F31EB90u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5C4u;
                return;
            }
            goto label_7F31E5C4;
    }

label_7F31EB90:
    ctx->pc = 0x7F31EB90u;
    ctx->downcount -= 5;
    // 7F31EB90: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F31EB94:
    ctx->pc = 0x7F31EB94u;
    // 7F31EB94: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F31EB98:
    ctx->pc = 0x7F31EB98u;
    // 7F31EB98: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_7F31EB9C:
    ctx->pc = 0x7F31EB9Cu;
    // 7F31EB9C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F31EBA0:
    ctx->pc = 0x7F31EBA0u;
    // 7F31EBA0: bl      0x80046238
    {
            ctx->lr = 0x7F31EBA4u;
            ctx->pc = 0x80046238u;
            return;
    }

label_7F31EBA4:
    ctx->pc = 0x7F31EBA4u;
    ctx->downcount -= 4;
    // 7F31EBA4: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_7F31EBA8:
    ctx->pc = 0x7F31EBA8u;
    // 7F31EBA8: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F31EBAC:
    ctx->pc = 0x7F31EBACu;
    // 7F31EBAC: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_7F31EBB0:
    ctx->pc = 0x7F31EBB0u;
    // 7F31EBB0: bl      0x80042E0C
    {
            ctx->lr = 0x7F31EBB4u;
            ctx->pc = 0x80042E0Cu;
            return;
    }

label_7F31EBB4:
    ctx->pc = 0x7F31EBB4u;
    ctx->downcount -= 3;
    // 7F31EBB4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31EBB8:
    ctx->pc = 0x7F31EBB8u;
    // 7F31EBB8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31EBBC:
    ctx->pc = 0x7F31EBBCu;
    // 7F31EBBC: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31EBC0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5E4u;
                return;
            }
            goto label_7F31E5E4;
    }

label_7F31EBC0:
    ctx->pc = 0x7F31EBC0u;
    ctx->downcount -= 2;
    // 7F31EBC0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F31EBC4:
    ctx->pc = 0x7F31EBC4u;
    // 7F31EBC4: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31EBC8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5D8u;
                return;
            }
            goto label_7F31E5D8;
    }

label_7F31EBC8:
    ctx->pc = 0x7F31EBC8u;
    ctx->downcount -= 3;
    // 7F31EBC8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31EBCC:
    ctx->pc = 0x7F31EBCCu;
    // 7F31EBCC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31EBD0:
    ctx->pc = 0x7F31EBD0u;
    // 7F31EBD0: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31EBD4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5C8u;
                return;
            }
            goto label_7F31E5C8;
    }

label_7F31EBD4:
    ctx->pc = 0x7F31EBD4u;
    ctx->downcount -= 3;
    // 7F31EBD4: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F31EBD8:
    ctx->pc = 0x7F31EBD8u;
    // 7F31EBD8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31EBDC:
    ctx->pc = 0x7F31EBDCu;
    // 7F31EBDC: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31EBE0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5E4u;
                return;
            }
            goto label_7F31E5E4;
    }

label_7F31EBE0:
    ctx->pc = 0x7F31EBE0u;
    ctx->downcount -= 2;
    // 7F31EBE0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F31EBE4:
    ctx->pc = 0x7F31EBE4u;
    // 7F31EBE4: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31EBE8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5D8u;
                return;
            }
            goto label_7F31E5D8;
    }

label_7F31EBE8:
    ctx->pc = 0x7F31EBE8u;
    ctx->downcount -= 3;
    // 7F31EBE8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31EBEC:
    ctx->pc = 0x7F31EBECu;
    // 7F31EBEC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31EBF0:
    ctx->pc = 0x7F31EBF0u;
    // 7F31EBF0: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31EBF4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5C8u;
                return;
            }
            goto label_7F31E5C8;
    }

label_7F31EBF4:
    ctx->pc = 0x7F31EBF4u;
    ctx->downcount -= 3;
    // 7F31EBF4: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F31EBF8:
    ctx->pc = 0x7F31EBF8u;
    // 7F31EBF8: li      r4, 1040
    ctx->gpr[4] = (u32)(s32)(1040);

label_7F31EBFC:
    ctx->pc = 0x7F31EBFCu;
    // 7F31EBFC: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31EC00u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5E4u;
                return;
            }
            goto label_7F31E5E4;
    }

label_7F31EC00:
    ctx->pc = 0x7F31EC00u;
    ctx->downcount -= 2;
    // 7F31EC00: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F31EC04:
    ctx->pc = 0x7F31EC04u;
    // 7F31EC04: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31EC08u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5D8u;
                return;
            }
            goto label_7F31E5D8;
    }

label_7F31EC08:
    ctx->pc = 0x7F31EC08u;
    ctx->downcount -= 3;
    // 7F31EC08: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31EC0C:
    ctx->pc = 0x7F31EC0Cu;
    // 7F31EC0C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31EC10:
    ctx->pc = 0x7F31EC10u;
    // 7F31EC10: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31EC14u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5C8u;
                return;
            }
            goto label_7F31E5C8;
    }

label_7F31EC14:
    ctx->pc = 0x7F31EC14u;
    ctx->downcount -= 3;
    // 7F31EC14: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31EC18:
    ctx->pc = 0x7F31EC18u;
    // 7F31EC18: li      r4, 1040
    ctx->gpr[4] = (u32)(s32)(1040);

label_7F31EC1C:
    ctx->pc = 0x7F31EC1Cu;
    // 7F31EC1C: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31EC20u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5E4u;
                return;
            }
            goto label_7F31E5E4;
    }

label_7F31EC20:
    ctx->pc = 0x7F31EC20u;
    ctx->downcount -= 2;
    // 7F31EC20: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F31EC24:
    ctx->pc = 0x7F31EC24u;
    // 7F31EC24: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31EC28u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5D8u;
                return;
            }
            goto label_7F31E5D8;
    }

label_7F31EC28:
    ctx->pc = 0x7F31EC28u;
    ctx->downcount -= 3;
    // 7F31EC28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31EC2C:
    ctx->pc = 0x7F31EC2Cu;
    // 7F31EC2C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31EC30:
    ctx->pc = 0x7F31EC30u;
    // 7F31EC30: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31EC34u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5C8u;
                return;
            }
            goto label_7F31E5C8;
    }

label_7F31EC34:
    ctx->pc = 0x7F31EC34u;
    ctx->downcount -= 3;
    // 7F31EC34: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31EC38:
    ctx->pc = 0x7F31EC38u;
    // 7F31EC38: li      r4, 1040
    ctx->gpr[4] = (u32)(s32)(1040);

label_7F31EC3C:
    ctx->pc = 0x7F31EC3Cu;
    // 7F31EC3C: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31EC40u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5E4u;
                return;
            }
            goto label_7F31E5E4;
    }

label_7F31EC40:
    ctx->pc = 0x7F31EC40u;
    ctx->downcount -= 2;
    // 7F31EC40: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F31EC44:
    ctx->pc = 0x7F31EC44u;
    // 7F31EC44: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31EC48u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5D8u;
                return;
            }
            goto label_7F31E5D8;
    }

label_7F31EC48:
    ctx->pc = 0x7F31EC48u;
    ctx->downcount -= 3;
    // 7F31EC48: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31EC4C:
    ctx->pc = 0x7F31EC4Cu;
    // 7F31EC4C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31EC50:
    ctx->pc = 0x7F31EC50u;
    // 7F31EC50: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31EC54u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5C8u;
                return;
            }
            goto label_7F31E5C8;
    }

label_7F31EC54:
    ctx->pc = 0x7F31EC54u;
    ctx->downcount -= 3;
    // 7F31EC54: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F31EC58:
    ctx->pc = 0x7F31EC58u;
    // 7F31EC58: li      r4, 1040
    ctx->gpr[4] = (u32)(s32)(1040);

label_7F31EC5C:
    ctx->pc = 0x7F31EC5Cu;
    // 7F31EC5C: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31EC60u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5E4u;
                return;
            }
            goto label_7F31E5E4;
    }

label_7F31EC60:
    ctx->pc = 0x7F31EC60u;
    ctx->downcount -= 2;
    // 7F31EC60: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F31EC64:
    ctx->pc = 0x7F31EC64u;
    // 7F31EC64: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31EC68u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5D8u;
                return;
            }
            goto label_7F31E5D8;
    }

label_7F31EC68:
    ctx->pc = 0x7F31EC68u;
    ctx->downcount -= 3;
    // 7F31EC68: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31EC6C:
    ctx->pc = 0x7F31EC6Cu;
    // 7F31EC6C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31EC70:
    ctx->pc = 0x7F31EC70u;
    // 7F31EC70: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31EC74u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5C8u;
                return;
            }
            goto label_7F31E5C8;
    }

label_7F31EC74:
    ctx->pc = 0x7F31EC74u;
    ctx->downcount -= 3;
    // 7F31EC74: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F31EC78:
    ctx->pc = 0x7F31EC78u;
    // 7F31EC78: li      r4, 3360
    ctx->gpr[4] = (u32)(s32)(3360);

label_7F31EC7C:
    ctx->pc = 0x7F31EC7Cu;
    // 7F31EC7C: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31EC80u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5E4u;
                return;
            }
            goto label_7F31E5E4;
    }

label_7F31EC80:
    ctx->pc = 0x7F31EC80u;
    ctx->downcount -= 2;
    // 7F31EC80: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F31EC84:
    ctx->pc = 0x7F31EC84u;
    // 7F31EC84: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31EC88u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5D8u;
                return;
            }
            goto label_7F31E5D8;
    }

label_7F31EC88:
    ctx->pc = 0x7F31EC88u;
    ctx->downcount -= 3;
    // 7F31EC88: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31EC8C:
    ctx->pc = 0x7F31EC8Cu;
    // 7F31EC8C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31EC90:
    ctx->pc = 0x7F31EC90u;
    // 7F31EC90: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31EC94u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5C8u;
                return;
            }
            goto label_7F31E5C8;
    }

label_7F31EC94:
    ctx->pc = 0x7F31EC94u;
    ctx->downcount -= 3;
    // 7F31EC94: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31EC98:
    ctx->pc = 0x7F31EC98u;
    // 7F31EC98: li      r4, 3360
    ctx->gpr[4] = (u32)(s32)(3360);

label_7F31EC9C:
    ctx->pc = 0x7F31EC9Cu;
    // 7F31EC9C: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31ECA0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5E4u;
                return;
            }
            goto label_7F31E5E4;
    }

label_7F31ECA0:
    ctx->pc = 0x7F31ECA0u;
    ctx->downcount -= 2;
    // 7F31ECA0: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F31ECA4:
    ctx->pc = 0x7F31ECA4u;
    // 7F31ECA4: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31ECA8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5D8u;
                return;
            }
            goto label_7F31E5D8;
    }

label_7F31ECA8:
    ctx->pc = 0x7F31ECA8u;
    ctx->downcount -= 3;
    // 7F31ECA8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31ECAC:
    ctx->pc = 0x7F31ECACu;
    // 7F31ECAC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31ECB0:
    ctx->pc = 0x7F31ECB0u;
    // 7F31ECB0: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31ECB4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5C8u;
                return;
            }
            goto label_7F31E5C8;
    }

label_7F31ECB4:
    ctx->pc = 0x7F31ECB4u;
    ctx->downcount -= 3;
    // 7F31ECB4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31ECB8:
    ctx->pc = 0x7F31ECB8u;
    // 7F31ECB8: li      r4, 3360
    ctx->gpr[4] = (u32)(s32)(3360);

label_7F31ECBC:
    ctx->pc = 0x7F31ECBCu;
    // 7F31ECBC: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31ECC0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5E4u;
                return;
            }
            goto label_7F31E5E4;
    }

label_7F31ECC0:
    ctx->pc = 0x7F31ECC0u;
    ctx->downcount -= 2;
    // 7F31ECC0: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F31ECC4:
    ctx->pc = 0x7F31ECC4u;
    // 7F31ECC4: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31ECC8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5D8u;
                return;
            }
            goto label_7F31E5D8;
    }

label_7F31ECC8:
    ctx->pc = 0x7F31ECC8u;
    ctx->downcount -= 3;
    // 7F31ECC8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31ECCC:
    ctx->pc = 0x7F31ECCCu;
    // 7F31ECCC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31ECD0:
    ctx->pc = 0x7F31ECD0u;
    // 7F31ECD0: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31ECD4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5C8u;
                return;
            }
            goto label_7F31E5C8;
    }

label_7F31ECD4:
    ctx->pc = 0x7F31ECD4u;
    ctx->downcount -= 3;
    // 7F31ECD4: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F31ECD8:
    ctx->pc = 0x7F31ECD8u;
    // 7F31ECD8: li      r4, 3360
    ctx->gpr[4] = (u32)(s32)(3360);

label_7F31ECDC:
    ctx->pc = 0x7F31ECDCu;
    // 7F31ECDC: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31ECE0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5E4u;
                return;
            }
            goto label_7F31E5E4;
    }

label_7F31ECE0:
    ctx->pc = 0x7F31ECE0u;
    ctx->downcount -= 2;
    // 7F31ECE0: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F31ECE4:
    ctx->pc = 0x7F31ECE4u;
    // 7F31ECE4: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31ECE8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5D8u;
                return;
            }
            goto label_7F31E5D8;
    }

label_7F31ECE8:
    ctx->pc = 0x7F31ECE8u;
    ctx->downcount -= 3;
    // 7F31ECE8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31ECEC:
    ctx->pc = 0x7F31ECECu;
    // 7F31ECEC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31ECF0:
    ctx->pc = 0x7F31ECF0u;
    // 7F31ECF0: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31ECF4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5C8u;
                return;
            }
            goto label_7F31E5C8;
    }

label_7F31ECF4:
    ctx->pc = 0x7F31ECF4u;
    ctx->downcount -= 3;
    // 7F31ECF4: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F31ECF8:
    ctx->pc = 0x7F31ECF8u;
    // 7F31ECF8: li      r4, 7168
    ctx->gpr[4] = (u32)(s32)(7168);

label_7F31ECFC:
    ctx->pc = 0x7F31ECFCu;
    // 7F31ECFC: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31ED00u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5E4u;
                return;
            }
            goto label_7F31E5E4;
    }

label_7F31ED00:
    ctx->pc = 0x7F31ED00u;
    ctx->downcount -= 2;
    // 7F31ED00: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F31ED04:
    ctx->pc = 0x7F31ED04u;
    // 7F31ED04: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31ED08u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5D8u;
                return;
            }
            goto label_7F31E5D8;
    }

label_7F31ED08:
    ctx->pc = 0x7F31ED08u;
    ctx->downcount -= 3;
    // 7F31ED08: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31ED0C:
    ctx->pc = 0x7F31ED0Cu;
    // 7F31ED0C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31ED10:
    ctx->pc = 0x7F31ED10u;
    // 7F31ED10: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31ED14u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5C8u;
                return;
            }
            goto label_7F31E5C8;
    }

label_7F31ED14:
    ctx->pc = 0x7F31ED14u;
    ctx->downcount -= 3;
    // 7F31ED14: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31ED18:
    ctx->pc = 0x7F31ED18u;
    // 7F31ED18: li      r4, 7168
    ctx->gpr[4] = (u32)(s32)(7168);

label_7F31ED1C:
    ctx->pc = 0x7F31ED1Cu;
    // 7F31ED1C: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31ED20u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5E4u;
                return;
            }
            goto label_7F31E5E4;
    }

label_7F31ED20:
    ctx->pc = 0x7F31ED20u;
    ctx->downcount -= 2;
    // 7F31ED20: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F31ED24:
    ctx->pc = 0x7F31ED24u;
    // 7F31ED24: bl      0x7F31E5D8
    {
            ctx->lr = 0x7F31ED28u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5D8u;
                return;
            }
            goto label_7F31E5D8;
    }

label_7F31ED28:
    ctx->pc = 0x7F31ED28u;
    ctx->downcount -= 3;
    // 7F31ED28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31ED2C:
    ctx->pc = 0x7F31ED2Cu;
    // 7F31ED2C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31ED30:
    ctx->pc = 0x7F31ED30u;
    // 7F31ED30: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31ED34u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5C8u;
                return;
            }
            goto label_7F31E5C8;
    }

label_7F31ED34:
    ctx->pc = 0x7F31ED34u;
    ctx->downcount -= 1;
    // 7F31ED34: bl      0x7F31E5C4
    {
            ctx->lr = 0x7F31ED38u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5C4u;
                return;
            }
            goto label_7F31E5C4;
    }

label_7F31ED38:
    ctx->pc = 0x7F31ED38u;
    ctx->downcount -= 3;
    // 7F31ED38: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F31ED3C:
    ctx->pc = 0x7F31ED3Cu;
    // 7F31ED3C: addi    r3, r31, 668
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(668);

label_7F31ED40:
    ctx->pc = 0x7F31ED40u;
    // 7F31ED40: bl      0x7F2EA688
    {
            ctx->lr = 0x7F31ED44u;
            ctx->pc = 0x7F2EA688u;
            return;
    }

label_7F31ED44:
    ctx->pc = 0x7F31ED44u;
    ctx->downcount -= 16;
    // 7F31ED44: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F31ED48:
    ctx->pc = 0x7F31ED48u;
    // 7F31ED48: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31ED4C:
    ctx->pc = 0x7F31ED4Cu;
    // 7F31ED4C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31ED50:
    ctx->pc = 0x7F31ED50u;
    // 7F31ED50: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F31ED54:
    ctx->pc = 0x7F31ED54u;
    // 7F31ED54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31ED58:
    ctx->pc = 0x7F31ED58u;
    ctx->downcount -= 26;
    // 7F31ED58: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31ED5C:
    ctx->pc = 0x7F31ED5Cu;
    // 7F31ED5C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31ED60:
    ctx->pc = 0x7F31ED60u;
    // 7F31ED60: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31ED64:
    ctx->pc = 0x7F31ED64u;
    // 7F31ED64: stfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31ED64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F31ED68:
    ctx->pc = 0x7F31ED68u;
    // 7F31ED68: psq_st   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F31ED68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F31ED68u);
        if (ctx->exception) return;
    }

label_7F31ED6C:
    ctx->pc = 0x7F31ED6Cu;
    // 7F31ED6C: stfd     f30, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31ED6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F31ED70:
    ctx->pc = 0x7F31ED70u;
    // 7F31ED70: psq_st   f30, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F31ED70u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F31ED70u);
        if (ctx->exception) return;
    }

label_7F31ED74:
    ctx->pc = 0x7F31ED74u;
    // 7F31ED74: stfd     f29, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31ED74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F31ED78:
    ctx->pc = 0x7F31ED78u;
    // 7F31ED78: psq_st   f29, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F31ED78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F31ED78u);
        if (ctx->exception) return;
    }

label_7F31ED7C:
    ctx->pc = 0x7F31ED7Cu;
    // 7F31ED7C: stmw     r27, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F31ED80:
    ctx->pc = 0x7F31ED80u;
    // 7F31ED80: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F31ED84:
    ctx->pc = 0x7F31ED84u;
    // 7F31ED84: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31ED88:
    ctx->pc = 0x7F31ED88u;
    // 7F31ED88: addi    r3, r4, 14256
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(14256);

label_7F31ED8C:
    ctx->pc = 0x7F31ED8Cu;
    // 7F31ED8C: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31ED90:
    ctx->pc = 0x7F31ED90u;
    // 7F31ED90: rlwinm. r0, r0, 0, 28, 28
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

label_7F31ED94:
    ctx->pc = 0x7F31ED94u;
    // 7F31ED94: bc    12, 2, 0x7F31EDA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31EDA0;
        }
    }

label_7F31ED98:
    ctx->pc = 0x7F31ED98u;
    ctx->downcount -= 2;
    // 7F31ED98: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31ED9C:
    ctx->pc = 0x7F31ED9Cu;
    // 7F31ED9C: stw     r0, 800(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(800);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31EDA0:
    ctx->pc = 0x7F31EDA0u;
    ctx->downcount -= 3;
    // 7F31EDA0: lwz     r0, 804(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(804);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31EDA4:
    ctx->pc = 0x7F31EDA4u;
    // 7F31EDA4: cmpwi   r0, 0
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

label_7F31EDA8:
    ctx->pc = 0x7F31EDA8u;
    // 7F31EDA8: bc    4, 2, 0x7F31EFF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31EFF0;
        }
    }

label_7F31EDAC:
    ctx->pc = 0x7F31EDACu;
    ctx->downcount -= 3;
    // 7F31EDAC: lwz     r0, 640(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(640);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31EDB0:
    ctx->pc = 0x7F31EDB0u;
    // 7F31EDB0: cmpwi   r0, 0
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

label_7F31EDB4:
    ctx->pc = 0x7F31EDB4u;
    // 7F31EDB4: bc    12, 2, 0x7F31EE48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31EE48;
        }
    }

label_7F31EDB8:
    ctx->pc = 0x7F31EDB8u;
    ctx->downcount -= 3;
    // 7F31EDB8: lwz     r0, 800(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(800);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31EDBC:
    ctx->pc = 0x7F31EDBCu;
    // 7F31EDBC: cmpwi   r0, 0
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

label_7F31EDC0:
    ctx->pc = 0x7F31EDC0u;
    // 7F31EDC0: bc    4, 2, 0x7F31EE48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31EE48;
        }
    }

label_7F31EDC4:
    ctx->pc = 0x7F31EDC4u;
    ctx->downcount -= 1;
    // 7F31EDC4: bl      0x7F31F168
    {
            ctx->lr = 0x7F31EDC8u;
            goto label_7F31F168;
    }

label_7F31EDC8:
    ctx->pc = 0x7F31EDC8u;
    ctx->downcount -= 15;
    // 7F31EDC8: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F31EDCC:
    ctx->pc = 0x7F31EDCCu;
    // 7F31EDCC: li      r3, 1600
    ctx->gpr[3] = (u32)(s32)(1600);

label_7F31EDD0:
    ctx->pc = 0x7F31EDD0u;
    // 7F31EDD0: lfs     f0, -29076(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F31EDD0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-29076);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31EDD4:
    ctx->pc = 0x7F31EDD4u;
    // 7F31EDD4: li      r0, 2048
    ctx->gpr[0] = (u32)(s32)(2048);

label_7F31EDD8:
    ctx->pc = 0x7F31EDD8u;
    // 7F31EDD8: fmadds f0, f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31EDD8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[0], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F31EDDC:
    ctx->pc = 0x7F31EDDCu;
    // 7F31EDDC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31EDDCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F31EDE0:
    ctx->pc = 0x7F31EDE0u;
    // 7F31EDE0: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31EDE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F31EDE4:
    ctx->pc = 0x7F31EDE4u;
    // 7F31EDE4: lwz     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31EDE8:
    ctx->pc = 0x7F31EDE8u;
    // 7F31EDE8: stw     r4, 808(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(808);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F31EDEC:
    ctx->pc = 0x7F31EDECu;
    // 7F31EDEC: lwz     r4, 808(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(808);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31EDF0:
    ctx->pc = 0x7F31EDF0u;
    // 7F31EDF0: rlwinm r4, r4, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_7F31EDF4:
    ctx->pc = 0x7F31EDF4u;
    // 7F31EDF4: stw     r4, 804(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(804);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F31EDF8:
    ctx->pc = 0x7F31EDF8u;
    // 7F31EDF8: stw     r3, 812(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(812);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31EDFC:
    ctx->pc = 0x7F31EDFCu;
    // 7F31EDFC: stw     r0, 816(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(816);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31EE00:
    ctx->pc = 0x7F31EE00u;
    // 7F31EE00: bl      0x7F31F168
    {
            ctx->lr = 0x7F31EE04u;
            goto label_7F31F168;
    }

label_7F31EE04:
    ctx->pc = 0x7F31EE04u;
    ctx->downcount -= 5;
    // 7F31EE04: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31EE08:
    ctx->pc = 0x7F31EE08u;
    // 7F31EE08: lfs     f0, -29072(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31EE08u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29072);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31EE0C:
    ctx->pc = 0x7F31EE0Cu;
    // 7F31EE0C: fmadds f0, f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31EE0Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[0], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F31EE10:
    ctx->pc = 0x7F31EE10u;
    // 7F31EE10: stfs     f0, 824(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31EE10u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(824);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F31EE14:
    ctx->pc = 0x7F31EE14u;
    // 7F31EE14: bl      0x7F31F168
    {
            ctx->lr = 0x7F31EE18u;
            goto label_7F31F168;
    }

label_7F31EE18:
    ctx->pc = 0x7F31EE18u;
    ctx->downcount -= 12;
    // 7F31EE18: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F31EE1C:
    ctx->pc = 0x7F31EE1Cu;
    // 7F31EE1C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31EE20:
    ctx->pc = 0x7F31EE20u;
    // 7F31EE20: lfs     f2, -29064(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F31EE20u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-29064);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F31EE24:
    ctx->pc = 0x7F31EE24u;
    // 7F31EE24: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F31EE28:
    ctx->pc = 0x7F31EE28u;
    // 7F31EE28: lfs     f0, -29068(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31EE28u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29068);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31EE2C:
    ctx->pc = 0x7F31EE2Cu;
    // 7F31EE2C: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31EE2Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F31EE30:
    ctx->pc = 0x7F31EE30u;
    // 7F31EE30: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31EE30u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F31EE34:
    ctx->pc = 0x7F31EE34u;
    // 7F31EE34: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31EE34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F31EE38:
    ctx->pc = 0x7F31EE38u;
    // 7F31EE38: lwz     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31EE3C:
    ctx->pc = 0x7F31EE3Cu;
    // 7F31EE3C: stw     r3, 800(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(800);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31EE40:
    ctx->pc = 0x7F31EE40u;
    // 7F31EE40: stw     r0, 820(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(820);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31EE44:
    ctx->pc = 0x7F31EE44u;
    // 7F31EE44: b       0x7F31EF50
    {
            goto label_7F31EF50;
    }

label_7F31EE48:
    ctx->pc = 0x7F31EE48u;
    ctx->downcount -= 4;
    // 7F31EE48: lwz     r3, 800(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(800);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31EE4C:
    ctx->pc = 0x7F31EE4Cu;
    // 7F31EE4C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F31EE50:
    ctx->pc = 0x7F31EE50u;
    // 7F31EE50: stw     r0, 800(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(800);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31EE54:
    ctx->pc = 0x7F31EE54u;
    // 7F31EE54: bl      0x7F31F168
    {
            ctx->lr = 0x7F31EE58u;
            goto label_7F31F168;
    }

label_7F31EE58:
    ctx->pc = 0x7F31EE58u;
    ctx->downcount -= 94;
    // 7F31EE58: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F31EE5C:
    ctx->pc = 0x7F31EE5Cu;
    // 7F31EE5C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31EE60:
    ctx->pc = 0x7F31EE60u;
    // 7F31EE60: lfs     f0, -29060(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31EE60u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29060);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31EE64:
    ctx->pc = 0x7F31EE64u;
    // 7F31EE64: lis     r8, 17200
    ctx->gpr[8] = ((u32)(s32)(17200) << 16);

label_7F31EE68:
    ctx->pc = 0x7F31EE68u;
    // 7F31EE68: lfs     f2, -29056(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F31EE68u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-29056);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F31EE6C:
    ctx->pc = 0x7F31EE6Cu;
    // 7F31EE6C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31EE70:
    ctx->pc = 0x7F31EE70u;
    // 7F31EE70: addi    r10, r3, -29052
    ctx->gpr[10] = ctx->gpr[3] + (u32)(s32)(-29052);

label_7F31EE74:
    ctx->pc = 0x7F31EE74u;
    // 7F31EE74: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F31EE78:
    ctx->pc = 0x7F31EE78u;
    // 7F31EE78: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31EE78u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F31EE7C:
    ctx->pc = 0x7F31EE7Cu;
    // 7F31EE7C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31EE80:
    ctx->pc = 0x7F31EE80u;
    // 7F31EE80: addi    r4, r3, -29032
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-29032);

label_7F31EE84:
    ctx->pc = 0x7F31EE84u;
    // 7F31EE84: lis     r7, 32583
    ctx->gpr[7] = ((u32)(s32)(32583) << 16);

label_7F31EE88:
    ctx->pc = 0x7F31EE88u;
    // 7F31EE88: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31EE8C:
    ctx->pc = 0x7F31EE8Cu;
    // 7F31EE8C: lis     r9, 32583
    ctx->gpr[9] = ((u32)(s32)(32583) << 16);

label_7F31EE90:
    ctx->pc = 0x7F31EE90u;
    // 7F31EE90: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31EE90u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F31EE94:
    ctx->pc = 0x7F31EE94u;
    // 7F31EE94: addi    r6, r3, -29048
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-29048);

label_7F31EE98:
    ctx->pc = 0x7F31EE98u;
    // 7F31EE98: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31EE9C:
    ctx->pc = 0x7F31EE9Cu;
    // 7F31EE9C: lfd     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F31EE9Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31EEA0:
    ctx->pc = 0x7F31EEA0u;
    // 7F31EEA0: li      r12, 1600
    ctx->gpr[12] = (u32)(s32)(1600);

label_7F31EEA4:
    ctx->pc = 0x7F31EEA4u;
    // 7F31EEA4: li      r11, 2048
    ctx->gpr[11] = (u32)(s32)(2048);

label_7F31EEA8:
    ctx->pc = 0x7F31EEA8u;
    // 7F31EEA8: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31EEA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F31EEAC:
    ctx->pc = 0x7F31EEACu;
    // 7F31EEAC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31EEB0:
    ctx->pc = 0x7F31EEB0u;
    // 7F31EEB0: lfs     f0, 0(r10)
    if (!ppc_fp_available_inline(ctx, 0x7F31EEB0u)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31EEB4:
    ctx->pc = 0x7F31EEB4u;
    // 7F31EEB4: addi    r5, r5, 14256
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(14256);

label_7F31EEB8:
    ctx->pc = 0x7F31EEB8u;
    // 7F31EEB8: lwz     r10, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F31EEBC:
    ctx->pc = 0x7F31EEBCu;
    // 7F31EEBC: lfs     f1, -29044(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31EEBCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29044);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31EEC0:
    ctx->pc = 0x7F31EEC0u;
    // 7F31EEC0: stw     r10, 808(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(808);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F31EEC4:
    ctx->pc = 0x7F31EEC4u;
    // 7F31EEC4: lfs     f4, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F31EEC4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F31EEC8:
    ctx->pc = 0x7F31EEC8u;
    // 7F31EEC8: lwz     r4, 808(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(808);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31EECC:
    ctx->pc = 0x7F31EECCu;
    // 7F31EECC: stw     r8, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F31EED0:
    ctx->pc = 0x7F31EED0u;
    // 7F31EED0: rlwinm r4, r4, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_7F31EED4:
    ctx->pc = 0x7F31EED4u;
    // 7F31EED4: lfs     f5, -29092(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F31EED4u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-29092);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F31EED8:
    ctx->pc = 0x7F31EED8u;
    // 7F31EED8: stw     r4, 804(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(804);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F31EEDC:
    ctx->pc = 0x7F31EEDCu;
    // 7F31EEDC: lfd     f6, -29152(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F31EEDCu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(-29152);
        ctx->fpr[6] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31EEE0:
    ctx->pc = 0x7F31EEE0u;
    // 7F31EEE0: stw     r12, 812(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(812);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F31EEE4:
    ctx->pc = 0x7F31EEE4u;
    // 7F31EEE4: stw     r11, 816(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(816);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F31EEE8:
    ctx->pc = 0x7F31EEE8u;
    // 7F31EEE8: stfs     f0, 824(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31EEE8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(824);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F31EEEC:
    ctx->pc = 0x7F31EEECu;
    // 7F31EEEC: stw     r0, 820(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(820);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31EEF0:
    ctx->pc = 0x7F31EEF0u;
    // 7F31EEF0: lbz     r3, 38(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(38);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F31EEF4:
    ctx->pc = 0x7F31EEF4u;
    // 7F31EEF4: lbz     r0, 39(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(39);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31EEF8:
    ctx->pc = 0x7F31EEF8u;
    // 7F31EEF8: stw     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31EEFC:
    ctx->pc = 0x7F31EEFCu;
    // 7F31EEFC: lwz     r3, 816(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(816);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31EF00:
    ctx->pc = 0x7F31EF00u;
    // 7F31EF00: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31EF00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31EF04:
    ctx->pc = 0x7F31EF04u;
    // 7F31EF04: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31EF08:
    ctx->pc = 0x7F31EF08u;
    // 7F31EF08: xoris   r0, r3, 0x8000
    ctx->gpr[0] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F31EF0C:
    ctx->pc = 0x7F31EF0Cu;
    // 7F31EF0C: fsubs   f2, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F31EF0Cu)) return;
    ppc_fsubs(ctx, 2, 0, 3);

label_7F31EF10:
    ctx->pc = 0x7F31EF10u;
    // 7F31EF10: stw     r8, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F31EF14:
    ctx->pc = 0x7F31EF14u;
    // 7F31EF14: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31EF14u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31EF18:
    ctx->pc = 0x7F31EF18u;
    // 7F31EF18: fdivs   f2, f4, f2
    if (!ppc_fp_available_inline(ctx, 0x7F31EF18u)) return;
    ppc_fdivs(ctx, 2, 4, 2);

label_7F31EF1C:
    ctx->pc = 0x7F31EF1Cu;
    // 7F31EF1C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31EF20:
    ctx->pc = 0x7F31EF20u;
    // 7F31EF20: stw     r8, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F31EF24:
    ctx->pc = 0x7F31EF24u;
    // 7F31EF24: lfd     f4, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31EF24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31EF28:
    ctx->pc = 0x7F31EF28u;
    // 7F31EF28: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F31EF28u)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F31EF2C:
    ctx->pc = 0x7F31EF2Cu;
    // 7F31EF2C: fadds   f2, f5, f2
    if (!ppc_fp_available_inline(ctx, 0x7F31EF2Cu)) return;
    ppc_fadds(ctx, 2, 5, 2);

label_7F31EF30:
    ctx->pc = 0x7F31EF30u;
    // 7F31EF30: fsubs   f3, f4, f6
    if (!ppc_fp_available_inline(ctx, 0x7F31EF30u)) return;
    ppc_fsubs(ctx, 3, 4, 6);

label_7F31EF34:
    ctx->pc = 0x7F31EF34u;
    // 7F31EF34: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31EF34u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F31EF38:
    ctx->pc = 0x7F31EF38u;
    // 7F31EF38: fsubs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31EF38u)) return;
    ppc_fsubs(ctx, 0, 2, 0);

label_7F31EF3C:
    ctx->pc = 0x7F31EF3Cu;
    // 7F31EF3C: fmuls   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31EF3Cu)) return;
    ppc_fmuls(ctx, 0, 3, 0);

label_7F31EF40:
    ctx->pc = 0x7F31EF40u;
    // 7F31EF40: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31EF40u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F31EF44:
    ctx->pc = 0x7F31EF44u;
    // 7F31EF44: stfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31EF44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F31EF48:
    ctx->pc = 0x7F31EF48u;
    // 7F31EF48: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31EF4C:
    ctx->pc = 0x7F31EF4Cu;
    // 7F31EF4C: stw     r0, 816(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(816);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31EF50:
    ctx->pc = 0x7F31EF50u;
    ctx->downcount -= 72;
    // 7F31EF50: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F31EF54:
    ctx->pc = 0x7F31EF54u;
    // 7F31EF54: lis     r7, 17200
    ctx->gpr[7] = ((u32)(s32)(17200) << 16);

label_7F31EF58:
    ctx->pc = 0x7F31EF58u;
    // 7F31EF58: addi    r6, r3, 14256
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(14256);

label_7F31EF5C:
    ctx->pc = 0x7F31EF5Cu;
    // 7F31EF5C: stw     r7, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F31EF60:
    ctx->pc = 0x7F31EF60u;
    // 7F31EF60: lbz     r5, 36(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(36);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F31EF64:
    ctx->pc = 0x7F31EF64u;
    // 7F31EF64: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31EF68:
    ctx->pc = 0x7F31EF68u;
    // 7F31EF68: addi    r4, r3, -29032
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-29032);

label_7F31EF6C:
    ctx->pc = 0x7F31EF6Cu;
    // 7F31EF6C: lbz     r0, 37(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(37);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31EF70:
    ctx->pc = 0x7F31EF70u;
    // 7F31EF70: stw     r5, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F31EF74:
    ctx->pc = 0x7F31EF74u;
    // 7F31EF74: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31EF78:
    ctx->pc = 0x7F31EF78u;
    // 7F31EF78: addi    r5, r3, -29048
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-29048);

label_7F31EF7C:
    ctx->pc = 0x7F31EF7Cu;
    // 7F31EF7C: lfd     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F31EF7Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31EF80:
    ctx->pc = 0x7F31EF80u;
    // 7F31EF80: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31EF80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31EF84:
    ctx->pc = 0x7F31EF84u;
    // 7F31EF84: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31EF88:
    ctx->pc = 0x7F31EF88u;
    // 7F31EF88: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31EF8C:
    ctx->pc = 0x7F31EF8Cu;
    // 7F31EF8C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F31EF90:
    ctx->pc = 0x7F31EF90u;
    // 7F31EF90: fsubs   f2, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F31EF90u)) return;
    ppc_fsubs(ctx, 2, 0, 3);

label_7F31EF94:
    ctx->pc = 0x7F31EF94u;
    // 7F31EF94: lfs     f4, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F31EF94u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F31EF98:
    ctx->pc = 0x7F31EF98u;
    // 7F31EF98: stw     r7, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F31EF9C:
    ctx->pc = 0x7F31EF9Cu;
    // 7F31EF9C: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F31EFA0:
    ctx->pc = 0x7F31EFA0u;
    // 7F31EFA0: lwz     r6, 816(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(816);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F31EFA4:
    ctx->pc = 0x7F31EFA4u;
    // 7F31EFA4: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31EFA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31EFA8:
    ctx->pc = 0x7F31EFA8u;
    // 7F31EFA8: fdivs   f2, f4, f2
    if (!ppc_fp_available_inline(ctx, 0x7F31EFA8u)) return;
    ppc_fdivs(ctx, 2, 4, 2);

label_7F31EFAC:
    ctx->pc = 0x7F31EFACu;
    // 7F31EFAC: lfs     f1, -29044(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31EFACu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29044);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31EFB0:
    ctx->pc = 0x7F31EFB0u;
    // 7F31EFB0: xoris   r0, r6, 0x8000
    ctx->gpr[0] = ctx->gpr[6] ^ (0x8000u << 16);

label_7F31EFB4:
    ctx->pc = 0x7F31EFB4u;
    // 7F31EFB4: lfs     f4, -29092(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F31EFB4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-29092);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F31EFB8:
    ctx->pc = 0x7F31EFB8u;
    // 7F31EFB8: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31EFBC:
    ctx->pc = 0x7F31EFBCu;
    // 7F31EFBC: lfd     f6, -29152(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F31EFBCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-29152);
        ctx->fpr[6] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31EFC0:
    ctx->pc = 0x7F31EFC0u;
    // 7F31EFC0: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F31EFC0u)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F31EFC4:
    ctx->pc = 0x7F31EFC4u;
    // 7F31EFC4: stw     r7, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F31EFC8:
    ctx->pc = 0x7F31EFC8u;
    // 7F31EFC8: fadds   f2, f4, f2
    if (!ppc_fp_available_inline(ctx, 0x7F31EFC8u)) return;
    ppc_fadds(ctx, 2, 4, 2);

label_7F31EFCC:
    ctx->pc = 0x7F31EFCCu;
    // 7F31EFCC: lfd     f5, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31EFCCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[5] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31EFD0:
    ctx->pc = 0x7F31EFD0u;
    // 7F31EFD0: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31EFD0u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F31EFD4:
    ctx->pc = 0x7F31EFD4u;
    // 7F31EFD4: fsubs   f3, f5, f6
    if (!ppc_fp_available_inline(ctx, 0x7F31EFD4u)) return;
    ppc_fsubs(ctx, 3, 5, 6);

label_7F31EFD8:
    ctx->pc = 0x7F31EFD8u;
    // 7F31EFD8: fsubs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31EFD8u)) return;
    ppc_fsubs(ctx, 0, 2, 0);

label_7F31EFDC:
    ctx->pc = 0x7F31EFDCu;
    // 7F31EFDC: fmuls   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31EFDCu)) return;
    ppc_fmuls(ctx, 0, 3, 0);

label_7F31EFE0:
    ctx->pc = 0x7F31EFE0u;
    // 7F31EFE0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31EFE0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F31EFE4:
    ctx->pc = 0x7F31EFE4u;
    // 7F31EFE4: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31EFE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F31EFE8:
    ctx->pc = 0x7F31EFE8u;
    // 7F31EFE8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31EFEC:
    ctx->pc = 0x7F31EFECu;
    // 7F31EFEC: stw     r0, 816(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(816);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31EFF0:
    ctx->pc = 0x7F31EFF0u;
    ctx->downcount -= 40;
    // 7F31EFF0: lwz     r3, 808(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(808);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31EFF4:
    ctx->pc = 0x7F31EFF4u;
    // 7F31EFF4: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_7F31EFF8:
    ctx->pc = 0x7F31EFF8u;
    // 7F31EFF8: lwz     r6, 804(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(804);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F31EFFC:
    ctx->pc = 0x7F31EFFCu;
    // 7F31EFFC: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F31F000:
    ctx->pc = 0x7F31F000u;
    // 7F31F000: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_7F31F004:
    ctx->pc = 0x7F31F004u;
    // 7F31F004: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F31F008:
    ctx->pc = 0x7F31F008u;
    // 7F31F008: subf   r0, r6, r0
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F31F00C:
    ctx->pc = 0x7F31F00Cu;
    // 7F31F00C: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F31F010:
    ctx->pc = 0x7F31F010u;
    // 7F31F010: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F31F014:
    ctx->pc = 0x7F31F014u;
    // 7F31F014: stw     r4, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F31F018:
    ctx->pc = 0x7F31F018u;
    // 7F31F018: lfd     f2, -29152(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F31F018u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-29152);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31F01C:
    ctx->pc = 0x7F31F01Cu;
    // 7F31F01C: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31F020:
    ctx->pc = 0x7F31F020u;
    // 7F31F020: lwz     r0, 820(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(820);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31F024:
    ctx->pc = 0x7F31F024u;
    // 7F31F024: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31F024u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31F028:
    ctx->pc = 0x7F31F028u;
    // 7F31F028: stw     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31F02C:
    ctx->pc = 0x7F31F02Cu;
    // 7F31F02C: cmpwi   r0, 0
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

label_7F31F030:
    ctx->pc = 0x7F31F030u;
    // 7F31F030: fsubs   f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F31F030u)) return;
    ppc_fsubs(ctx, 1, 0, 2);

label_7F31F034:
    ctx->pc = 0x7F31F034u;
    // 7F31F034: lfs     f3, -29160(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F31F034u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-29160);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F31F038:
    ctx->pc = 0x7F31F038u;
    // 7F31F038: stw     r4, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F31F03C:
    ctx->pc = 0x7F31F03Cu;
    // 7F31F03C: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31F03Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31F040:
    ctx->pc = 0x7F31F040u;
    // 7F31F040: fmuls   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F31F040u)) return;
    ppc_fmuls(ctx, 1, 3, 1);

label_7F31F044:
    ctx->pc = 0x7F31F044u;
    // 7F31F044: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F31F044u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F31F048:
    ctx->pc = 0x7F31F048u;
    // 7F31F048: fdivs   f30, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31F048u)) return;
    ppc_fdivs(ctx, 30, 1, 0);

label_7F31F04C:
    ctx->pc = 0x7F31F04Cu;
    // 7F31F04C: bc    12, 2, 0x7F31F080
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31F080;
        }
    }

label_7F31F050:
    ctx->pc = 0x7F31F050u;
    ctx->downcount -= 4;
    // 7F31F050: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31F054:
    ctx->pc = 0x7F31F054u;
    // 7F31F054: lfs     f0, -29040(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31F054u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29040);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31F058:
    ctx->pc = 0x7F31F058u;
    // 7F31F058: fmuls   f1, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F31F058u)) return;
    ppc_fmuls(ctx, 1, 0, 30);

label_7F31F05C:
    ctx->pc = 0x7F31F05Cu;
    // 7F31F05C: bl      0x80018390
    {
            ctx->lr = 0x7F31F060u;
            ctx->pc = 0x80018390u;
            return;
    }

label_7F31F060:
    ctx->pc = 0x7F31F060u;
    ctx->downcount -= 5;
    // 7F31F060: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31F064:
    ctx->pc = 0x7F31F064u;
    // 7F31F064: frsp    f29, f1
    if (!ppc_fp_available_inline(ctx, 0x7F31F064u)) return;
    ppc_frsp(ctx, 29, 1);

label_7F31F068:
    ctx->pc = 0x7F31F068u;
    // 7F31F068: lfs     f0, -29092(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31F068u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29092);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31F06C:
    ctx->pc = 0x7F31F06Cu;
    // 7F31F06C: fcmpo   cr0, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31F06Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[30], ctx->fpr[0], true);

label_7F31F070:
    ctx->pc = 0x7F31F070u;
    // 7F31F070: bc    4, 1, 0x7F31F08C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31F08C;
        }
    }

label_7F31F074:
    ctx->pc = 0x7F31F074u;
    ctx->downcount -= 19;
    // 7F31F074: fdivs   f0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F31F074u)) return;
    ppc_fdivs(ctx, 0, 0, 30);

label_7F31F078:
    ctx->pc = 0x7F31F078u;
    // 7F31F078: fmuls   f29, f29, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31F078u)) return;
    ppc_fmuls(ctx, 29, 29, 0);

label_7F31F07C:
    ctx->pc = 0x7F31F07Cu;
    // 7F31F07C: b       0x7F31F08C
    {
            goto label_7F31F08C;
    }

label_7F31F080:
    ctx->pc = 0x7F31F080u;
    ctx->downcount -= 2;
    // 7F31F080: fmr    f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F31F080u)) return;
    ctx->fpr[1] = ctx->fpr[30];

label_7F31F084:
    ctx->pc = 0x7F31F084u;
    // 7F31F084: bl      0x80018390
    {
            ctx->lr = 0x7F31F088u;
            ctx->pc = 0x80018390u;
            return;
    }

label_7F31F088:
    ctx->pc = 0x7F31F088u;
    ctx->downcount -= 1;
    // 7F31F088: frsp    f29, f1
    if (!ppc_fp_available_inline(ctx, 0x7F31F088u)) return;
    ppc_frsp(ctx, 29, 1);

label_7F31F08C:
    ctx->pc = 0x7F31F08Cu;
    ctx->downcount -= 8;
    // 7F31F08C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F31F090:
    ctx->pc = 0x7F31F090u;
    // 7F31F090: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31F094:
    ctx->pc = 0x7F31F094u;
    // 7F31F094: lfd     f30, -29152(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F31F094u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-29152);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31F098:
    ctx->pc = 0x7F31F098u;
    // 7F31F098: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F31F09C:
    ctx->pc = 0x7F31F09Cu;
    // 7F31F09C: lfs     f31, -29164(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31F09Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29164);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F31F0A0:
    ctx->pc = 0x7F31F0A0u;
    // 7F31F0A0: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F31F0A4:
    ctx->pc = 0x7F31F0A4u;
    // 7F31F0A4: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F31F0A8:
    ctx->pc = 0x7F31F0A8u;
    // 7F31F0A8: lis     r28, 17200
    ctx->gpr[28] = ((u32)(s32)(17200) << 16);

label_7F31F0AC:
    ctx->downcount -= 73;
    // 7F31F0AC: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_7F31F0B0:
    ctx->pc = 0x7F31F0B0u;
    // 7F31F0B0: lwz     r0, 816(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(816);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31F0B4:
    // 7F31F0B4: divwu   r3, r29, r3
    {
        u32 divisor = ctx->gpr[3];
        ctx->gpr[3] = divisor == 0 ? 0u : ctx->gpr[29] / divisor;
    }

label_7F31F0B8:
    ctx->pc = 0x7F31F0B8u;
    // 7F31F0B8: lwz     r4, 812(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(812);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31F0BC:
    // 7F31F0BC: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F31F0C0:
    ctx->pc = 0x7F31F0C0u;
    // 7F31F0C0: stw     r28, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F31F0C4:
    ctx->pc = 0x7F31F0C4u;
    // 7F31F0C4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31F0C8:
    ctx->pc = 0x7F31F0C8u;
    // 7F31F0C8: stw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F31F0CC:
    // 7F31F0CC: subf   r0, r4, r3
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F31F0D0:
    ctx->pc = 0x7F31F0D0u;
    // 7F31F0D0: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31F0D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31F0D4:
    // 7F31F0D4: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F31F0D8:
    ctx->pc = 0x7F31F0D8u;
    // 7F31F0D8: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31F0DC:
    ctx->pc = 0x7F31F0DCu;
    // 7F31F0DC: fsubs   f0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F31F0DCu)) return;
    ppc_fsubs(ctx, 0, 0, 30);

label_7F31F0E0:
    ctx->pc = 0x7F31F0E0u;
    // 7F31F0E0: lfd     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31F0E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31F0E4:
    ctx->pc = 0x7F31F0E4u;
    // 7F31F0E4: fsubs   f1, f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F31F0E4u)) return;
    ppc_fsubs(ctx, 1, 1, 30);

label_7F31F0E8:
    ctx->pc = 0x7F31F0E8u;
    // 7F31F0E8: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31F0E8u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F31F0EC:
    ctx->pc = 0x7F31F0ECu;
    // 7F31F0EC: fmuls   f1, f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F31F0ECu)) return;
    ppc_fmuls(ctx, 1, 1, 31);

label_7F31F0F0:
    // 7F31F0F0: bl      0x7F008330
    {
            ctx->lr = 0x7F31F0F4u;
            ctx->pc = 0x7F008330u;
            return;
    }

label_7F31F0F4:
    ctx->pc = 0x7F31F0F4u;
    ctx->downcount -= 13;
    // 7F31F0F4: lfs     f0, 824(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31F0F4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(824);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31F0F8:
    // 7F31F0F8: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F31F0FC:
    // 7F31F0FC: addi    r0, r30, 828
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(828);

label_7F31F100:
    // 7F31F100: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_7F31F104:
    ctx->pc = 0x7F31F104u;
    // 7F31F104: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F31F104u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F31F108:
    // 7F31F108: cmpwi   r27, 50
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(50);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31F10C:
    // 7F31F10C: addi    r29, r29, 7168
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(7168);

label_7F31F110:
    ctx->pc = 0x7F31F110u;
    // 7F31F110: fmuls   f0, f29, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31F110u)) return;
    ppc_fmuls(ctx, 0, 29, 0);

label_7F31F114:
    ctx->pc = 0x7F31F114u;
    // 7F31F114: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31F114u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F31F118:
    ctx->pc = 0x7F31F118u;
    // 7F31F118: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31F118u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F31F11C:
    ctx->pc = 0x7F31F11Cu;
    // 7F31F11C: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31F120:
    ctx->pc = 0x7F31F120u;
    // 7F31F120: stwx    r3, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31F124:
    // 7F31F124: bc    12, 0, 0x7F31F0AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31F0ACu;
                return;
            }
            goto label_7F31F0AC;
        }
    }

label_7F31F128:
    ctx->pc = 0x7F31F128u;
    ctx->downcount -= 3;
    // 7F31F128: lwz     r3, 804(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(804);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31F12C:
    ctx->pc = 0x7F31F12Cu;
    // 7F31F12C: cmpwi   r3, 0
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

label_7F31F130:
    ctx->pc = 0x7F31F130u;
    // 7F31F130: bc    4, 1, 0x7F31F13C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31F13C;
        }
    }

label_7F31F134:
    ctx->pc = 0x7F31F134u;
    ctx->downcount -= 2;
    // 7F31F134: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F31F138:
    ctx->pc = 0x7F31F138u;
    // 7F31F138: stw     r0, 804(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(804);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31F13C:
    ctx->pc = 0x7F31F13Cu;
    ctx->downcount -= 22;
    // 7F31F13C: psq_l   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F31F13Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F31F13Cu);
        if (ctx->exception) return;
    }

label_7F31F140:
    ctx->pc = 0x7F31F140u;
    // 7F31F140: lfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31F140u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31F144:
    ctx->pc = 0x7F31F144u;
    // 7F31F144: psq_l   f30, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F31F144u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F31F144u);
        if (ctx->exception) return;
    }

label_7F31F148:
    ctx->pc = 0x7F31F148u;
    // 7F31F148: lfd     f30, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31F148u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31F14C:
    ctx->pc = 0x7F31F14Cu;
    // 7F31F14C: psq_l   f29, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F31F14Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F31F14Cu);
        if (ctx->exception) return;
    }

label_7F31F150:
    ctx->pc = 0x7F31F150u;
    // 7F31F150: lfd     f29, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31F150u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31F154:
    ctx->pc = 0x7F31F154u;
    // 7F31F154: lmw     r27, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F31F158:
    ctx->pc = 0x7F31F158u;
    // 7F31F158: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31F15C:
    ctx->pc = 0x7F31F15Cu;
    // 7F31F15C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31F160:
    ctx->pc = 0x7F31F160u;
    // 7F31F160: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_7F31F164:
    ctx->pc = 0x7F31F164u;
    // 7F31F164: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31F168:
    ctx->pc = 0x7F31F168u;
    ctx->downcount -= 4;
    // 7F31F168: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31F16C:
    ctx->pc = 0x7F31F16Cu;
    // 7F31F16C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31F170:
    ctx->pc = 0x7F31F170u;
    // 7F31F170: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31F174:
    ctx->pc = 0x7F31F174u;
    // 7F31F174: bl      0x7F31F1B0
    {
            ctx->lr = 0x7F31F178u;
            goto label_7F31F1B0;
    }

label_7F31F178:
    ctx->pc = 0x7F31F178u;
    ctx->downcount -= 31;
    // 7F31F178: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F31F17C:
    ctx->pc = 0x7F31F17Cu;
    // 7F31F17C: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31F180:
    ctx->pc = 0x7F31F180u;
    // 7F31F180: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F31F184:
    ctx->pc = 0x7F31F184u;
    // 7F31F184: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31F188:
    ctx->pc = 0x7F31F188u;
    // 7F31F188: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31F18C:
    ctx->pc = 0x7F31F18Cu;
    // 7F31F18C: lfd     f2, -29032(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F31F18Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-29032);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31F190:
    ctx->pc = 0x7F31F190u;
    // 7F31F190: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31F190u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31F194:
    ctx->pc = 0x7F31F194u;
    // 7F31F194: lfs     f0, -29024(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31F194u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29024);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31F198:
    ctx->pc = 0x7F31F198u;
    // 7F31F198: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F31F198u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F31F19C:
    ctx->pc = 0x7F31F19Cu;
    // 7F31F19C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31F1A0:
    ctx->pc = 0x7F31F1A0u;
    // 7F31F1A0: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31F1A0u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F31F1A4:
    ctx->pc = 0x7F31F1A4u;
    // 7F31F1A4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31F1A8:
    ctx->pc = 0x7F31F1A8u;
    // 7F31F1A8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F31F1AC:
    ctx->pc = 0x7F31F1ACu;
    // 7F31F1AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31F1B0:
    ctx->pc = 0x7F31F1B0u;
    ctx->downcount -= 13;
    // 7F31F1B0: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F31F1B4:
    ctx->pc = 0x7F31F1B4u;
    // 7F31F1B4: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F31F1B8:
    ctx->pc = 0x7F31F1B8u;
    // 7F31F1B8: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F31F1BC:
    ctx->pc = 0x7F31F1BCu;
    // 7F31F1BC: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31F1C0:
    ctx->pc = 0x7F31F1C0u;
    // 7F31F1C0: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F31F1C4:
    ctx->pc = 0x7F31F1C4u;
    // 7F31F1C4: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F31F1C8:
    ctx->pc = 0x7F31F1C8u;
    // 7F31F1C8: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F31F1CC:
    ctx->pc = 0x7F31F1CCu;
    // 7F31F1CC: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31F1D0:
    ctx->pc = 0x7F31F1D0u;
    // 7F31F1D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31F1D4:
    ctx->pc = 0x7F31F1D4u;
    ctx->downcount -= 9;
    // 7F31F1D4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31F1D8:
    ctx->pc = 0x7F31F1D8u;
    // 7F31F1D8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31F1DC:
    ctx->pc = 0x7F31F1DCu;
    // 7F31F1DC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31F1E0:
    ctx->pc = 0x7F31F1E0u;
    // 7F31F1E0: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F31F1E4:
    ctx->pc = 0x7F31F1E4u;
    // 7F31F1E4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31F1E8:
    ctx->pc = 0x7F31F1E8u;
    // 7F31F1E8: lfs     f1, 1148(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31F1E8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1148);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31F1EC:
    ctx->pc = 0x7F31F1ECu;
    // 7F31F1EC: lfs     f0, 1144(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31F1ECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31F1F0:
    ctx->pc = 0x7F31F1F0u;
    // 7F31F1F0: fcmpu   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31F1F0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], false);

label_7F31F1F4:
    ctx->pc = 0x7F31F1F4u;
    // 7F31F1F4: bc    12, 2, 0x7F31F250
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31F250;
        }
    }

label_7F31F1F8:
    ctx->pc = 0x7F31F1F8u;
    ctx->downcount -= 2;
    // 7F31F1F8: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31F1F8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F31F1FC:
    ctx->pc = 0x7F31F1FCu;
    // 7F31F1FC: bc    4, 1, 0x7F31F228
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31F228;
        }
    }

label_7F31F200:
    ctx->pc = 0x7F31F200u;
    ctx->downcount -= 8;
    // 7F31F200: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31F204:
    ctx->pc = 0x7F31F204u;
    // 7F31F204: lfs     f0, -29020(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31F204u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29020);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31F208:
    ctx->pc = 0x7F31F208u;
    // 7F31F208: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31F208u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F31F20C:
    ctx->pc = 0x7F31F20Cu;
    // 7F31F20C: stfs     f0, 1148(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31F20Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1148);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F31F210:
    ctx->pc = 0x7F31F210u;
    // 7F31F210: lfs     f0, 1148(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31F210u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1148);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31F214:
    ctx->pc = 0x7F31F214u;
    // 7F31F214: lfs     f1, 1144(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31F214u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31F218:
    ctx->pc = 0x7F31F218u;
    // 7F31F218: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F31F218u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F31F21C:
    ctx->pc = 0x7F31F21Cu;
    // 7F31F21C: bc    4, 0, 0x7F31F2B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31F2B4;
        }
    }

label_7F31F220:
    ctx->pc = 0x7F31F220u;
    ctx->downcount -= 2;
    // 7F31F220: stfs     f1, 1148(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31F220u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1148);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F31F224:
    ctx->pc = 0x7F31F224u;
    // 7F31F224: b       0x7F31F2B4
    {
            goto label_7F31F2B4;
    }

label_7F31F228:
    ctx->pc = 0x7F31F228u;
    ctx->downcount -= 8;
    // 7F31F228: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31F22C:
    ctx->pc = 0x7F31F22Cu;
    // 7F31F22C: lfs     f0, -29020(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31F22Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29020);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31F230:
    ctx->pc = 0x7F31F230u;
    // 7F31F230: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31F230u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F31F234:
    ctx->pc = 0x7F31F234u;
    // 7F31F234: stfs     f0, 1148(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31F234u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1148);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F31F238:
    ctx->pc = 0x7F31F238u;
    // 7F31F238: lfs     f0, 1148(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31F238u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1148);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31F23C:
    ctx->pc = 0x7F31F23Cu;
    // 7F31F23C: lfs     f1, 1144(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31F23Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31F240:
    ctx->pc = 0x7F31F240u;
    // 7F31F240: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F31F240u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F31F244:
    ctx->pc = 0x7F31F244u;
    // 7F31F244: bc    4, 1, 0x7F31F2B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31F2B4;
        }
    }

label_7F31F248:
    ctx->pc = 0x7F31F248u;
    ctx->downcount -= 2;
    // 7F31F248: stfs     f1, 1148(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31F248u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1148);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F31F24C:
    ctx->pc = 0x7F31F24Cu;
    // 7F31F24C: b       0x7F31F2B4
    {
            goto label_7F31F2B4;
    }

label_7F31F250:
    ctx->pc = 0x7F31F250u;
    ctx->downcount -= 1;
    // 7F31F250: bl      0x7F31F168
    {
            ctx->lr = 0x7F31F254u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31F168u;
                return;
            }
            goto label_7F31F168;
    }

label_7F31F254:
    ctx->pc = 0x7F31F254u;
    ctx->downcount -= 9;
    // 7F31F254: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31F258:
    ctx->pc = 0x7F31F258u;
    // 7F31F258: lwz     r0, 1140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1140);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31F25C:
    ctx->pc = 0x7F31F25Cu;
    // 7F31F25C: lfs     f0, -29064(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31F25Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29064);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31F260:
    ctx->pc = 0x7F31F260u;
    // 7F31F260: cmpwi   r0, 0
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

label_7F31F264:
    ctx->pc = 0x7F31F264u;
    // 7F31F264: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F31F264u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F31F268:
    ctx->pc = 0x7F31F268u;
    // 7F31F268: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31F268u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F31F26C:
    ctx->pc = 0x7F31F26Cu;
    // 7F31F26C: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31F26Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F31F270:
    ctx->pc = 0x7F31F270u;
    // 7F31F270: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31F274:
    ctx->pc = 0x7F31F274u;
    // 7F31F274: bc    12, 0, 0x7F31F284
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31F284;
        }
    }

label_7F31F278:
    ctx->pc = 0x7F31F278u;
    ctx->downcount -= 3;
    // 7F31F278: neg  r0, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[0] = (~a) + 1u;
    }

label_7F31F27C:
    ctx->pc = 0x7F31F27Cu;
    // 7F31F27C: stw     r0, 1140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31F280:
    ctx->pc = 0x7F31F280u;
    // 7F31F280: b       0x7F31F288
    {
            goto label_7F31F288;
    }

label_7F31F284:
    ctx->pc = 0x7F31F284u;
    ctx->downcount -= 1;
    // 7F31F284: stw     r0, 1140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31F288:
    ctx->pc = 0x7F31F288u;
    ctx->downcount -= 11;
    // 7F31F288: lwz     r4, 1140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1140);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31F28C:
    ctx->pc = 0x7F31F28Cu;
    // 7F31F28C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F31F290:
    ctx->pc = 0x7F31F290u;
    // 7F31F290: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31F294:
    ctx->pc = 0x7F31F294u;
    // 7F31F294: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31F298:
    ctx->pc = 0x7F31F298u;
    // 7F31F298: addi    r0, r4, 32
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32);

label_7F31F29C:
    ctx->pc = 0x7F31F29Cu;
    // 7F31F29C: lfd     f1, -29152(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31F29Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29152);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31F2A0:
    ctx->pc = 0x7F31F2A0u;
    // 7F31F2A0: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F31F2A4:
    ctx->pc = 0x7F31F2A4u;
    // 7F31F2A4: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31F2A8:
    ctx->pc = 0x7F31F2A8u;
    // 7F31F2A8: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31F2A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31F2AC:
    ctx->pc = 0x7F31F2ACu;
    // 7F31F2AC: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F31F2ACu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F31F2B0:
    ctx->pc = 0x7F31F2B0u;
    // 7F31F2B0: stfs     f0, 1144(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31F2B0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1144);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F31F2B4:
    ctx->pc = 0x7F31F2B4u;
    ctx->downcount -= 11;
    // 7F31F2B4: lfs     f0, 1148(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31F2B4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1148);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31F2B8:
    ctx->pc = 0x7F31F2B8u;
    // 7F31F2B8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31F2B8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F31F2BC:
    ctx->pc = 0x7F31F2BCu;
    // 7F31F2BC: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31F2BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F31F2C0:
    ctx->pc = 0x7F31F2C0u;
    // 7F31F2C0: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31F2C4:
    ctx->pc = 0x7F31F2C4u;
    // 7F31F2C4: stb     r0, 1137(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1137);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F31F2C8:
    ctx->pc = 0x7F31F2C8u;
    // 7F31F2C8: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F31F2CC:
    ctx->pc = 0x7F31F2CCu;
    // 7F31F2CC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31F2D0:
    ctx->pc = 0x7F31F2D0u;
    // 7F31F2D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31F2D4:
    ctx->pc = 0x7F31F2D4u;
    // 7F31F2D4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F31F2D8:
    ctx->pc = 0x7F31F2D8u;
    // 7F31F2D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31F2DC:
    ctx->pc = 0x7F31F2DCu;
    ctx->downcount -= 17;
    // 7F31F2DC: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31F2E0:
    ctx->pc = 0x7F31F2E0u;
    // 7F31F2E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31F2E4:
    ctx->pc = 0x7F31F2E4u;
    // 7F31F2E4: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31F2E8:
    ctx->pc = 0x7F31F2E8u;
    // 7F31F2E8: stmw     r27, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F31F2EC:
    ctx->pc = 0x7F31F2ECu;
    // 7F31F2EC: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31F2F0:
    ctx->pc = 0x7F31F2F0u;
    // 7F31F2F0: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F31F2F4:
    ctx->pc = 0x7F31F2F4u;
    // 7F31F2F4: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F31F2F8:
    ctx->downcount -= 4;
    // 7F31F2F8: add   r31, r28, r27
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[27];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_7F31F2FC:
    ctx->pc = 0x7F31F2FCu;
    // 7F31F2FC: lwz     r0, 1044(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1044);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31F300:
    // 7F31F300: cmplwi  r0, 0x0000
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

label_7F31F304:
    // 7F31F304: bc    4, 2, 0x7F31F44C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31F44C;
        }
    }

label_7F31F308:
    ctx->pc = 0x7F31F308u;
    ctx->downcount -= 6;
    // 7F31F308: lwz     r3, 1028(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1028);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31F30C:
    // 7F31F30C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F31F310:
    ctx->pc = 0x7F31F310u;
    // 7F31F310: stw     r0, 1028(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1028);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31F314:
    ctx->pc = 0x7F31F314u;
    // 7F31F314: lwz     r0, 1028(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1028);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31F318:
    // 7F31F318: cmpwi   r0, 0
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

label_7F31F31C:
    // 7F31F31C: bc    12, 1, 0x7F31F44C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31F44C;
        }
    }

label_7F31F320:
    ctx->pc = 0x7F31F320u;
    ctx->downcount -= 9;
    // 7F31F320: lwz     r3, 1060(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1060);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31F324:
    ctx->pc = 0x7F31F324u;
    // 7F31F324: lwz     r0, 1064(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1064);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31F328:
    ctx->pc = 0x7F31F328u;
    // 7F31F328: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31F32C:
    ctx->pc = 0x7F31F32Cu;
    // 7F31F32C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31F330:
    ctx->pc = 0x7F31F330u;
    // 7F31F330: lwz     r3, 1068(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1068);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31F334:
    ctx->pc = 0x7F31F334u;
    // 7F31F334: lwz     r0, 1072(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1072);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31F338:
    ctx->pc = 0x7F31F338u;
    // 7F31F338: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31F33C:
    ctx->pc = 0x7F31F33Cu;
    // 7F31F33C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31F340:
    // 7F31F340: bl      0x7F31F168
    {
            ctx->lr = 0x7F31F344u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31F168u;
                return;
            }
            goto label_7F31F168;
    }

label_7F31F344:
    ctx->downcount -= 9;
    // 7F31F344: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F31F348:
    // 7F31F348: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31F34C:
    ctx->pc = 0x7F31F34Cu;
    // 7F31F34C: lfs     f2, -29016(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F31F34Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-29016);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F31F350:
    ctx->pc = 0x7F31F350u;
    // 7F31F350: lfs     f0, -29056(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31F350u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29056);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31F354:
    ctx->pc = 0x7F31F354u;
    // 7F31F354: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31F354u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F31F358:
    ctx->pc = 0x7F31F358u;
    // 7F31F358: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31F358u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F31F35C:
    ctx->pc = 0x7F31F35Cu;
    // 7F31F35C: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31F35Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F31F360:
    ctx->pc = 0x7F31F360u;
    // 7F31F360: lwz     r29, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F31F364:
    // 7F31F364: bl      0x7F31F470
    {
            ctx->lr = 0x7F31F368u;
            goto label_7F31F470;
    }

label_7F31F368:
    ctx->pc = 0x7F31F368u;
    ctx->downcount -= 4;
    // 7F31F368: lfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31F368u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31F36C:
    ctx->pc = 0x7F31F36Cu;
    // 7F31F36C: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F31F36Cu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F31F370:
    ctx->pc = 0x7F31F370u;
    // 7F31F370: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31F370u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F31F374:
    // 7F31F374: bl      0x7F31F470
    {
            ctx->lr = 0x7F31F378u;
            goto label_7F31F470;
    }

label_7F31F378:
    ctx->pc = 0x7F31F378u;
    ctx->downcount -= 35;
    // 7F31F378: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31F378u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31F37C:
    // 7F31F37C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31F380:
    // 7F31F380: addi    r4, r3, -29092
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-29092);

label_7F31F384:
    ctx->pc = 0x7F31F384u;
    // 7F31F384: lfs     f3, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31F384u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F31F388:
    ctx->pc = 0x7F31F388u;
    // 7F31F388: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F31F388u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F31F38C:
    ctx->pc = 0x7F31F38Cu;
    // 7F31F38C: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F31F38Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F31F390:
    // 7F31F390: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31F394:
    // 7F31F394: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F31F398:
    ctx->pc = 0x7F31F398u;
    // 7F31F398: lfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31F398u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31F39C:
    ctx->pc = 0x7F31F39Cu;
    // 7F31F39C: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31F39Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F31F3A0:
    ctx->pc = 0x7F31F3A0u;
    // 7F31F3A0: lfs     f0, -29168(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31F3A0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29168);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31F3A4:
    ctx->pc = 0x7F31F3A4u;
    // 7F31F3A4: lfs     f2, 1064(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F31F3A4u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1064);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F31F3A8:
    ctx->pc = 0x7F31F3A8u;
    // 7F31F3A8: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31F3A8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F31F3AC:
    ctx->pc = 0x7F31F3ACu;
    // 7F31F3AC: fdivs   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F31F3ACu)) return;
    ppc_fdivs(ctx, 2, 3, 2);

label_7F31F3B0:
    ctx->pc = 0x7F31F3B0u;
    // 7F31F3B0: lfs     f3, -29096(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F31F3B0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-29096);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F31F3B4:
    ctx->pc = 0x7F31F3B4u;
    // 7F31F3B4: fsubs   f2, f4, f2
    if (!ppc_fp_available_inline(ctx, 0x7F31F3B4u)) return;
    ppc_fsubs(ctx, 2, 4, 2);

label_7F31F3B8:
    ctx->pc = 0x7F31F3B8u;
    // 7F31F3B8: fmuls   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F31F3B8u)) return;
    ppc_fmuls(ctx, 2, 3, 2);

label_7F31F3BC:
    // 7F31F3BC: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F31F3C0:
    // 7F31F3C0: bc    4, 2, 0x7F31F3CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31F3CC;
        }
    }

label_7F31F3C4:
    ctx->pc = 0x7F31F3C4u;
    ctx->downcount -= 2;
    // 7F31F3C4: fadds   f5, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F31F3C4u)) return;
    ppc_fadds(ctx, 5, 1, 2);

label_7F31F3C8:
    // 7F31F3C8: b       0x7F31F3D0
    {
            goto label_7F31F3D0;
    }

label_7F31F3CC:
    ctx->pc = 0x7F31F3CCu;
    ctx->downcount -= 1;
    // 7F31F3CC: fsubs   f5, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F31F3CCu)) return;
    ppc_fsubs(ctx, 5, 1, 2);

label_7F31F3D0:
    ctx->pc = 0x7F31F3D0u;
    ctx->downcount -= 47;
    // 7F31F3D0: lfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31F3D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31F3D4:
    // 7F31F3D4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31F3D8:
    // 7F31F3D8: addi    r4, r3, -29008
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-29008);

label_7F31F3DC:
    ctx->pc = 0x7F31F3DCu;
    // 7F31F3DC: lfs     f3, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31F3DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F31F3E0:
    ctx->pc = 0x7F31F3E0u;
    // 7F31F3E0: fsubs   f4, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F31F3E0u)) return;
    ppc_fsubs(ctx, 4, 0, 2);

label_7F31F3E4:
    ctx->pc = 0x7F31F3E4u;
    // 7F31F3E4: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F31F3E4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31F3E8:
    // 7F31F3E8: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F31F3EC:
    // 7F31F3EC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31F3F0:
    // 7F31F3F0: addi    r5, r4, -29092
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-29092);

label_7F31F3F4:
    ctx->pc = 0x7F31F3F4u;
    // 7F31F3F4: stfs     f5, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31F3F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F31F3F8:
    ctx->pc = 0x7F31F3F8u;
    // 7F31F3F8: fmuls   f1, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F31F3F8u)) return;
    ppc_fmuls(ctx, 1, 0, 4);

label_7F31F3FC:
    ctx->pc = 0x7F31F3FCu;
    // 7F31F3FC: lfs     f0, -29004(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31F3FCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29004);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31F400:
    // 7F31F400: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F31F404:
    ctx->pc = 0x7F31F404u;
    // 7F31F404: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F31F404u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F31F408:
    // 7F31F408: addi    r6, r4, -29012
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-29012);

label_7F31F40C:
    // 7F31F40C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F31F410:
    ctx->pc = 0x7F31F410u;
    // 7F31F410: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31F410u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F31F414:
    ctx->pc = 0x7F31F414u;
    // 7F31F414: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F31F414u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31F418:
    // 7F31F418: addi    r4, r3, 12832
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F31F41C:
    ctx->pc = 0x7F31F41Cu;
    // 7F31F41C: stfs     f4, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31F41Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F31F420:
    // 7F31F420: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F31F424:
    // 7F31F424: addi    r7, r31, 1044
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(1044);

label_7F31F428:
    ctx->pc = 0x7F31F428u;
    // 7F31F428: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31F428u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F31F42C:
    // 7F31F42C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F31F430:
    ctx->pc = 0x7F31F430u;
    // 7F31F430: fadds   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F31F430u)) return;
    ppc_fadds(ctx, 1, 3, 1);

label_7F31F434:
    ctx->pc = 0x7F31F434u;
    // 7F31F434: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31F434u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F31F438:
    ctx->pc = 0x7F31F438u;
    // 7F31F438: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31F438u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F31F43C:
    ctx->pc = 0x7F31F43Cu;
    // 7F31F43C: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31F43Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F31F440:
    ctx->pc = 0x7F31F440u;
    // 7F31F440: lwz     r5, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F31F444:
    ctx->pc = 0x7F31F444u;
    // 7F31F444: stw     r29, 1028(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1028);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F31F448:
    // 7F31F448: bl      0x7F1D766C
    {
            ctx->lr = 0x7F31F44Cu;
            ctx->pc = 0x7F1D766Cu;
            return;
    }

label_7F31F44C:
    ctx->downcount -= 4;
    // 7F31F44C: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F31F450:
    // 7F31F450: addi    r27, r27, 4
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(4);

label_7F31F454:
    // 7F31F454: cmpwi   r30, 4
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

label_7F31F458:
    // 7F31F458: bc    12, 0, 0x7F31F2F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31F2F8u;
                return;
            }
            goto label_7F31F2F8;
        }
    }

label_7F31F45C:
    ctx->pc = 0x7F31F45Cu;
    ctx->downcount -= 16;
    // 7F31F45C: lmw     r27, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F31F460:
    ctx->pc = 0x7F31F460u;
    // 7F31F460: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31F464:
    ctx->pc = 0x7F31F464u;
    // 7F31F464: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31F468:
    ctx->pc = 0x7F31F468u;
    // 7F31F468: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F31F46C:
    ctx->pc = 0x7F31F46Cu;
    // 7F31F46C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31F470:
    ctx->pc = 0x7F31F470u;
    ctx->downcount -= 4;
    // 7F31F470: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31F474:
    ctx->pc = 0x7F31F474u;
    // 7F31F474: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31F478:
    ctx->pc = 0x7F31F478u;
    // 7F31F478: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31F47C:
    ctx->pc = 0x7F31F47Cu;
    // 7F31F47C: bl      0x7F31F1B0
    {
            ctx->lr = 0x7F31F480u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31F1B0u;
                return;
            }
            goto label_7F31F1B0;
    }

label_7F31F480:
    ctx->pc = 0x7F31F480u;
    ctx->downcount -= 35;
    // 7F31F480: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F31F484:
    ctx->pc = 0x7F31F484u;
    // 7F31F484: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F31F488:
    ctx->pc = 0x7F31F488u;
    // 7F31F488: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31F48C:
    ctx->pc = 0x7F31F48Cu;
    // 7F31F48C: addi    r5, r4, -29032
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-29032);

label_7F31F490:
    ctx->pc = 0x7F31F490u;
    // 7F31F490: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F31F494:
    ctx->pc = 0x7F31F494u;
    // 7F31F494: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F31F494u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31F498:
    ctx->pc = 0x7F31F498u;
    // 7F31F498: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31F49C:
    ctx->pc = 0x7F31F49Cu;
    // 7F31F49C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31F4A0:
    ctx->pc = 0x7F31F4A0u;
    // 7F31F4A0: lfs     f1, -29000(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F31F4A0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-29000);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31F4A4:
    ctx->pc = 0x7F31F4A4u;
    // 7F31F4A4: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31F4A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31F4A8:
    ctx->pc = 0x7F31F4A8u;
    // 7F31F4A8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31F4AC:
    ctx->pc = 0x7F31F4ACu;
    // 7F31F4AC: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F31F4ACu)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_7F31F4B0:
    ctx->pc = 0x7F31F4B0u;
    // 7F31F4B0: lfs     f0, -29092(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31F4B0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29092);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31F4B4:
    ctx->pc = 0x7F31F4B4u;
    // 7F31F4B4: fdivs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F31F4B4u)) return;
    ppc_fdivs(ctx, 1, 2, 1);

label_7F31F4B8:
    ctx->pc = 0x7F31F4B8u;
    // 7F31F4B8: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31F4B8u)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_7F31F4BC:
    ctx->pc = 0x7F31F4BCu;
    // 7F31F4BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31F4C0:
    ctx->pc = 0x7F31F4C0u;
    // 7F31F4C0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F31F4C4:
    ctx->pc = 0x7F31F4C4u;
    // 7F31F4C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31F4C8:
    ctx->pc = 0x7F31F4C8u;
    ctx->downcount -= 16;
    // 7F31F4C8: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31F4CC:
    ctx->pc = 0x7F31F4CCu;
    // 7F31F4CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31F4D0:
    ctx->pc = 0x7F31F4D0u;
    // 7F31F4D0: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31F4D4:
    ctx->pc = 0x7F31F4D4u;
    // 7F31F4D4: stmw     r22, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 22; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F31F4D8:
    ctx->pc = 0x7F31F4D8u;
    // 7F31F4D8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31F4DC:
    ctx->pc = 0x7F31F4DCu;
    // 7F31F4DC: bl      0x8004C3D0
    {
            ctx->lr = 0x7F31F4E0u;
            ctx->pc = 0x8004C3D0u;
            return;
    }

label_7F31F4E0:
    ctx->pc = 0x7F31F4E0u;
    ctx->downcount -= 5;
    // 7F31F4E0: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31F4E4:
    ctx->pc = 0x7F31F4E4u;
    // 7F31F4E4: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F31F4E8:
    ctx->pc = 0x7F31F4E8u;
    // 7F31F4E8: or   r27, r0, r0
    {
        ctx->gpr[27] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F31F4EC:
    ctx->pc = 0x7F31F4ECu;
    // 7F31F4EC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F31F4F0:
    ctx->pc = 0x7F31F4F0u;
    // 7F31F4F0: bl      0x8004B588
    {
            ctx->lr = 0x7F31F4F4u;
            ctx->pc = 0x8004B588u;
            return;
    }

label_7F31F4F4:
    ctx->pc = 0x7F31F4F4u;
    ctx->downcount -= 1;
    // 7F31F4F4: bl      0x8004D870
    {
            ctx->lr = 0x7F31F4F8u;
            ctx->pc = 0x8004D870u;
            return;
    }

label_7F31F4F8:
    ctx->pc = 0x7F31F4F8u;
    ctx->downcount -= 5;
    // 7F31F4F8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31F4FC:
    ctx->pc = 0x7F31F4FCu;
    // 7F31F4FC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31F500:
    ctx->pc = 0x7F31F500u;
    // 7F31F500: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F31F504:
    ctx->pc = 0x7F31F504u;
    // 7F31F504: li      r6, 448
    ctx->gpr[6] = (u32)(s32)(448);

label_7F31F508:
    ctx->pc = 0x7F31F508u;
    // 7F31F508: bl      0x80043188
    {
            ctx->lr = 0x7F31F50Cu;
            ctx->pc = 0x80043188u;
            return;
    }

label_7F31F50C:
    ctx->pc = 0x7F31F50Cu;
    ctx->downcount -= 5;
    // 7F31F50C: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F31F510:
    ctx->pc = 0x7F31F510u;
    // 7F31F510: li      r4, 448
    ctx->gpr[4] = (u32)(s32)(448);

label_7F31F514:
    ctx->pc = 0x7F31F514u;
    // 7F31F514: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F31F518:
    ctx->pc = 0x7F31F518u;
    // 7F31F518: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F31F51C:
    ctx->pc = 0x7F31F51Cu;
    // 7F31F51C: bl      0x80043238
    {
            ctx->lr = 0x7F31F520u;
            ctx->pc = 0x80043238u;
            return;
    }

label_7F31F520:
    ctx->pc = 0x7F31F520u;
    ctx->downcount -= 3;
    // 7F31F520: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F31F524:
    ctx->pc = 0x7F31F524u;
    // 7F31F524: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31F528:
    ctx->pc = 0x7F31F528u;
    // 7F31F528: bl      0x800438AC
    {
            ctx->lr = 0x7F31F52Cu;
            ctx->pc = 0x800438ACu;
            return;
    }

label_7F31F52C:
    ctx->pc = 0x7F31F52Cu;
    ctx->downcount -= 9;
    // 7F31F52C: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F31F530:
    ctx->pc = 0x7F31F530u;
    // 7F31F530: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_7F31F534:
    ctx->pc = 0x7F31F534u;
    // 7F31F534: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F31F538:
    ctx->pc = 0x7F31F538u;
    // 7F31F538: li      r6, 448
    ctx->gpr[6] = (u32)(s32)(448);

label_7F31F53C:
    ctx->pc = 0x7F31F53Cu;
    // 7F31F53C: li      r7, 6
    ctx->gpr[7] = (u32)(s32)(6);

label_7F31F540:
    ctx->pc = 0x7F31F540u;
    // 7F31F540: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F31F544:
    ctx->pc = 0x7F31F544u;
    // 7F31F544: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F31F548:
    ctx->pc = 0x7F31F548u;
    // 7F31F548: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F31F54C:
    ctx->pc = 0x7F31F54Cu;
    // 7F31F54C: bl      0x8004439C
    {
            ctx->lr = 0x7F31F550u;
            ctx->pc = 0x8004439Cu;
            return;
    }

label_7F31F550:
    ctx->pc = 0x7F31F550u;
    ctx->downcount -= 12;
    // 7F31F550: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F31F554:
    ctx->pc = 0x7F31F554u;
    // 7F31F554: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_7F31F558:
    ctx->pc = 0x7F31F558u;
    // 7F31F558: addi    r5, r4, -29168
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-29168);

label_7F31F55C:
    ctx->pc = 0x7F31F55Cu;
    // 7F31F55C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F31F560:
    ctx->pc = 0x7F31F560u;
    // 7F31F560: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F31F560u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31F564:
    ctx->pc = 0x7F31F564u;
    // 7F31F564: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F31F568:
    ctx->pc = 0x7F31F568u;
    // 7F31F568: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F31F56C:
    ctx->pc = 0x7F31F56Cu;
    // 7F31F56C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F31F570:
    ctx->pc = 0x7F31F570u;
    // 7F31F570: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F31F570u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_7F31F574:
    ctx->pc = 0x7F31F574u;
    // 7F31F574: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F31F578:
    ctx->pc = 0x7F31F578u;
    // 7F31F578: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F31F578u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_7F31F57C:
    ctx->pc = 0x7F31F57Cu;
    // 7F31F57C: bl      0x80044630
    {
            ctx->lr = 0x7F31F580u;
            ctx->pc = 0x80044630u;
            return;
    }

label_7F31F580:
    ctx->pc = 0x7F31F580u;
    ctx->downcount -= 1;
    // 7F31F580: bl      0x80042A40
    {
            ctx->lr = 0x7F31F584u;
            ctx->pc = 0x80042A40u;
            return;
    }

label_7F31F584:
    ctx->pc = 0x7F31F584u;
    ctx->downcount -= 1;
    // 7F31F584: bl      0x7F2EA8C0
    {
            ctx->lr = 0x7F31F588u;
            ctx->pc = 0x7F2EA8C0u;
            return;
    }

label_7F31F588:
    ctx->pc = 0x7F31F588u;
    ctx->downcount -= 5;
    // 7F31F588: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F31F58C:
    ctx->pc = 0x7F31F58Cu;
    // 7F31F58C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31F590:
    ctx->pc = 0x7F31F590u;
    // 7F31F590: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F31F594:
    ctx->pc = 0x7F31F594u;
    // 7F31F594: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F31F598:
    ctx->pc = 0x7F31F598u;
    // 7F31F598: bl      0x80046238
    {
            ctx->lr = 0x7F31F59Cu;
            ctx->pc = 0x80046238u;
            return;
    }

label_7F31F59C:
    ctx->pc = 0x7F31F59Cu;
    ctx->downcount -= 6;
    // 7F31F59C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31F5A0:
    ctx->pc = 0x7F31F5A0u;
    // 7F31F5A0: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F31F5A4:
    ctx->pc = 0x7F31F5A4u;
    // 7F31F5A4: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_7F31F5A8:
    ctx->pc = 0x7F31F5A8u;
    // 7F31F5A8: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_7F31F5AC:
    ctx->pc = 0x7F31F5ACu;
    // 7F31F5AC: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F31F5B0:
    ctx->pc = 0x7F31F5B0u;
    // 7F31F5B0: bl      0x8004585C
    {
            ctx->lr = 0x7F31F5B4u;
            ctx->pc = 0x8004585Cu;
            return;
    }

label_7F31F5B4:
    ctx->pc = 0x7F31F5B4u;
    ctx->downcount -= 6;
    // 7F31F5B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31F5B8:
    ctx->pc = 0x7F31F5B8u;
    // 7F31F5B8: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_7F31F5BC:
    ctx->pc = 0x7F31F5BCu;
    // 7F31F5BC: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_7F31F5C0:
    ctx->pc = 0x7F31F5C0u;
    // 7F31F5C0: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F31F5C4:
    ctx->pc = 0x7F31F5C4u;
    // 7F31F5C4: li      r7, 15
    ctx->gpr[7] = (u32)(s32)(15);

label_7F31F5C8:
    ctx->pc = 0x7F31F5C8u;
    // 7F31F5C8: bl      0x80045818
    {
            ctx->lr = 0x7F31F5CCu;
            ctx->pc = 0x80045818u;
            return;
    }

label_7F31F5CC:
    ctx->pc = 0x7F31F5CCu;
    ctx->downcount -= 3;
    // 7F31F5CC: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_7F31F5D0:
    ctx->pc = 0x7F31F5D0u;
    // 7F31F5D0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31F5D4:
    ctx->pc = 0x7F31F5D4u;
    // 7F31F5D4: bl      0x80044978
    {
            ctx->lr = 0x7F31F5D8u;
            ctx->pc = 0x80044978u;
            return;
    }

label_7F31F5D8:
    ctx->pc = 0x7F31F5D8u;
    ctx->downcount -= 7;
    // 7F31F5D8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31F5DC:
    ctx->pc = 0x7F31F5DCu;
    // 7F31F5DC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F31F5E0:
    ctx->pc = 0x7F31F5E0u;
    // 7F31F5E0: addi    r5, r3, -28996
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-28996);

label_7F31F5E4:
    ctx->pc = 0x7F31F5E4u;
    // 7F31F5E4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F31F5E8:
    ctx->pc = 0x7F31F5E8u;
    // 7F31F5E8: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31F5EC:
    ctx->pc = 0x7F31F5ECu;
    // 7F31F5EC: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31F5F0:
    ctx->pc = 0x7F31F5F0u;
    // 7F31F5F0: bl      0x80045970
    {
            ctx->lr = 0x7F31F5F4u;
            ctx->pc = 0x80045970u;
            return;
    }

label_7F31F5F4:
    ctx->pc = 0x7F31F5F4u;
    ctx->downcount -= 4;
    // 7F31F5F4: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_7F31F5F8:
    ctx->pc = 0x7F31F5F8u;
    // 7F31F5F8: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F31F5FC:
    ctx->pc = 0x7F31F5FCu;
    // 7F31F5FC: li      r5, 196
    ctx->gpr[5] = (u32)(s32)(196);

label_7F31F600:
    ctx->pc = 0x7F31F600u;
    // 7F31F600: bl      0x80042E0C
    {
            ctx->lr = 0x7F31F604u;
            ctx->pc = 0x80042E0Cu;
            return;
    }

label_7F31F604:
    ctx->pc = 0x7F31F604u;
    ctx->downcount -= 4;
    // 7F31F604: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F31F608:
    ctx->pc = 0x7F31F608u;
    // 7F31F608: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F31F60C:
    ctx->pc = 0x7F31F60Cu;
    // 7F31F60C: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F31F610:
    ctx->pc = 0x7F31F610u;
    // 7F31F610: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F31F614:
    ctx->downcount -= 172;
    // 7F31F614: addi    r0, r26, 1
    ctx->gpr[0] = ctx->gpr[26] + (u32)(s32)(1);

label_7F31F618:
    // 7F31F618: li      r6, 50
    ctx->gpr[6] = (u32)(s32)(50);

label_7F31F61C:
    // 7F31F61C: mulli   r4, r0, 7168
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)7168);

label_7F31F620:
    // 7F31F620: add   r27, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_7F31F624:
    // 7F31F624: rlwinm r5, r0, 12, 0, 19
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 12u) & 0xFFFFF000u;
    }

label_7F31F628:
    ctx->pc = 0x7F31F628u;
    // 7F31F628: lwz     r3, 828(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(828);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31F62C:
    // 7F31F62C: divw   r25, r28, r6
    {
        s32 dividend = (s32)ctx->gpr[28];
        s32 divisor = (s32)ctx->gpr[6];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[25] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F31F630:
    // 7F31F630: addi    r0, r3, -96
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-96);

label_7F31F634:
    // 7F31F634: extsh r3, r0
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F31F638:
    // 7F31F638: divw   r24, r4, r6
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[6];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[24] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F31F63C:
    // 7F31F63C: extsh r4, r25
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[25];
    }

label_7F31F640:
    // 7F31F640: divw   r23, r29, r6
    {
        s32 dividend = (s32)ctx->gpr[29];
        s32 divisor = (s32)ctx->gpr[6];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[23] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F31F644:
    // 7F31F644: divw   r22, r5, r6
    {
        s32 dividend = (s32)ctx->gpr[5];
        s32 divisor = (s32)ctx->gpr[6];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[22] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F31F648:
    // 7F31F648: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31F64Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5E4u;
                return;
            }
            goto label_7F31E5E4;
    }

label_7F31F64C:
    ctx->downcount -= 3;
    // 7F31F64C: extsh r4, r23
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[23];
    }

label_7F31F650:
    // 7F31F650: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31F654:
    // 7F31F654: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31F658u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5C8u;
                return;
            }
            goto label_7F31E5C8;
    }

label_7F31F658:
    ctx->pc = 0x7F31F658u;
    ctx->downcount -= 5;
    // 7F31F658: lwz     r3, 828(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(828);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31F65C:
    // 7F31F65C: extsh r4, r25
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[25];
    }

label_7F31F660:
    // 7F31F660: addi    r0, r3, 8288
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(8288);

label_7F31F664:
    // 7F31F664: extsh r3, r0
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F31F668:
    // 7F31F668: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31F66Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5E4u;
                return;
            }
            goto label_7F31E5E4;
    }

label_7F31F66C:
    ctx->downcount -= 3;
    // 7F31F66C: extsh r4, r23
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[23];
    }

label_7F31F670:
    // 7F31F670: li      r3, 4096
    ctx->gpr[3] = (u32)(s32)(4096);

label_7F31F674:
    // 7F31F674: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31F678u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5C8u;
                return;
            }
            goto label_7F31E5C8;
    }

label_7F31F678:
    ctx->pc = 0x7F31F678u;
    ctx->downcount -= 5;
    // 7F31F678: lwz     r3, 832(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(832);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31F67C:
    // 7F31F67C: extsh r4, r24
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[24];
    }

label_7F31F680:
    // 7F31F680: addi    r0, r3, 8288
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(8288);

label_7F31F684:
    // 7F31F684: extsh r3, r0
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F31F688:
    // 7F31F688: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31F68Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5E4u;
                return;
            }
            goto label_7F31E5E4;
    }

label_7F31F68C:
    ctx->downcount -= 3;
    // 7F31F68C: extsh r4, r22
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[22];
    }

label_7F31F690:
    // 7F31F690: li      r3, 4096
    ctx->gpr[3] = (u32)(s32)(4096);

label_7F31F694:
    // 7F31F694: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31F698u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5C8u;
                return;
            }
            goto label_7F31E5C8;
    }

label_7F31F698:
    ctx->pc = 0x7F31F698u;
    ctx->downcount -= 5;
    // 7F31F698: lwz     r3, 832(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(832);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31F69C:
    // 7F31F69C: extsh r4, r24
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[24];
    }

label_7F31F6A0:
    // 7F31F6A0: addi    r0, r3, -96
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-96);

label_7F31F6A4:
    // 7F31F6A4: extsh r3, r0
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F31F6A8:
    // 7F31F6A8: bl      0x7F31E5E4
    {
            ctx->lr = 0x7F31F6ACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5E4u;
                return;
            }
            goto label_7F31E5E4;
    }

label_7F31F6AC:
    ctx->downcount -= 3;
    // 7F31F6AC: extsh r4, r22
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[22];
    }

label_7F31F6B0:
    // 7F31F6B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31F6B4:
    // 7F31F6B4: bl      0x7F31E5C8
    {
            ctx->lr = 0x7F31F6B8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5C8u;
                return;
            }
            goto label_7F31E5C8;
    }

label_7F31F6B8:
    ctx->downcount -= 6;
    // 7F31F6B8: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_7F31F6BC:
    // 7F31F6BC: addi    r29, r29, 4096
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4096);

label_7F31F6C0:
    // 7F31F6C0: cmpwi   r26, 49
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(49);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31F6C4:
    // 7F31F6C4: addi    r28, r28, 7168
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(7168);

label_7F31F6C8:
    // 7F31F6C8: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_7F31F6CC:
    // 7F31F6CC: bc    12, 0, 0x7F31F614
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31F614u;
                return;
            }
            goto label_7F31F614;
        }
    }

label_7F31F6D0:
    ctx->pc = 0x7F31F6D0u;
    ctx->downcount -= 1;
    // 7F31F6D0: bl      0x7F31E5C4
    {
            ctx->lr = 0x7F31F6D4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E5C4u;
                return;
            }
            goto label_7F31E5C4;
    }

label_7F31F6D4:
    ctx->pc = 0x7F31F6D4u;
    ctx->downcount -= 1;
    // 7F31F6D4: bl      0x8004D990
    {
            ctx->lr = 0x7F31F6D8u;
            ctx->pc = 0x8004D990u;
            return;
    }

label_7F31F6D8:
    ctx->pc = 0x7F31F6D8u;
    ctx->downcount -= 16;
    // 7F31F6D8: lmw     r22, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 22; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F31F6DC:
    ctx->pc = 0x7F31F6DCu;
    // 7F31F6DC: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31F6E0:
    ctx->pc = 0x7F31F6E0u;
    // 7F31F6E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31F6E4:
    ctx->pc = 0x7F31F6E4u;
    // 7F31F6E4: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F31F6E8:
    ctx->pc = 0x7F31F6E8u;
    // 7F31F6E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31F6EC:
    ctx->pc = 0x7F31F6ECu;
    ctx->downcount -= 48;
    // 7F31F6EC: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31F6F0:
    ctx->pc = 0x7F31F6F0u;
    // 7F31F6F0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31F6F4:
    ctx->pc = 0x7F31F6F4u;
    // 7F31F6F4: xoris   r5, r4, 0x8000
    ctx->gpr[5] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F31F6F8:
    ctx->pc = 0x7F31F6F8u;
    // 7F31F6F8: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F31F6FC:
    ctx->pc = 0x7F31F6FCu;
    // 7F31F6FC: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31F700:
    ctx->pc = 0x7F31F700u;
    // 7F31F700: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F31F704:
    ctx->pc = 0x7F31F704u;
    // 7F31F704: cmpwi   r4, 0
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

label_7F31F708:
    ctx->pc = 0x7F31F708u;
    // 7F31F708: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F31F70C:
    ctx->pc = 0x7F31F70Cu;
    // 7F31F70C: addi    r5, r6, -29152
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-29152);

label_7F31F710:
    ctx->pc = 0x7F31F710u;
    // 7F31F710: lfd     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F31F710u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31F714:
    ctx->pc = 0x7F31F714u;
    // 7F31F714: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F31F718:
    ctx->pc = 0x7F31F718u;
    // 7F31F718: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31F71C:
    ctx->pc = 0x7F31F71Cu;
    // 7F31F71C: lfs     f2, -29092(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F31F71Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-29092);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F31F720:
    ctx->pc = 0x7F31F720u;
    // 7F31F720: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31F720u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31F724:
    ctx->pc = 0x7F31F724u;
    // 7F31F724: stmw     r27, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F31F728:
    ctx->pc = 0x7F31F728u;
    // 7F31F728: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31F72C:
    ctx->pc = 0x7F31F72Cu;
    // 7F31F72C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F31F72Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F31F730:
    ctx->pc = 0x7F31F730u;
    // 7F31F730: fdivs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31F730u)) return;
    ppc_fdivs(ctx, 0, 2, 0);

label_7F31F734:
    ctx->pc = 0x7F31F734u;
    // 7F31F734: lfs     f1, 764(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31F734u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(764);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31F738:
    ctx->pc = 0x7F31F738u;
    // 7F31F738: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31F738u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F31F73C:
    ctx->pc = 0x7F31F73Cu;
    // 7F31F73C: stfs     f0, 764(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31F73Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(764);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F31F740:
    ctx->pc = 0x7F31F740u;
    // 7F31F740: bc    12, 0, 0x7F31F768
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31F768;
        }
    }

label_7F31F744:
    ctx->pc = 0x7F31F744u;
    ctx->downcount -= 3;
    // 7F31F744: lfs     f0, 764(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F31F744u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(764);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31F748:
    ctx->pc = 0x7F31F748u;
    // 7F31F748: fcmpo   cr0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F31F748u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[2], true);

label_7F31F74C:
    ctx->pc = 0x7F31F74Cu;
    // 7F31F74C: bc    4, 1, 0x7F31F754
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31F754;
        }
    }

label_7F31F750:
    ctx->pc = 0x7F31F750u;
    ctx->downcount -= 1;
    // 7F31F750: stfs     f2, 764(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F31F750u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(764);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F31F754:
    ctx->pc = 0x7F31F754u;
    ctx->downcount -= 5;
    // 7F31F754: lwz     r3, 184(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31F758:
    ctx->pc = 0x7F31F758u;
    // 7F31F758: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31F75C:
    ctx->pc = 0x7F31F75Cu;
    // 7F31F75C: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F31F760:
    ctx->pc = 0x7F31F760u;
    // 7F31F760: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31F764:
    ctx->pc = 0x7F31F764u;
    // 7F31F764: b       0x7F31F7C8
    {
            goto label_7F31F7C8;
    }

label_7F31F768:
    ctx->pc = 0x7F31F768u;
    ctx->downcount -= 6;
    // 7F31F768: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31F76C:
    ctx->pc = 0x7F31F76Cu;
    // 7F31F76C: lfs     f1, 764(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F31F76Cu)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(764);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31F770:
    ctx->pc = 0x7F31F770u;
    // 7F31F770: lfs     f0, -29168(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31F770u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29168);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31F774:
    ctx->pc = 0x7F31F774u;
    // 7F31F774: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31F774u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F31F778:
    ctx->pc = 0x7F31F778u;
    // 7F31F778: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F31F77C:
    ctx->pc = 0x7F31F77Cu;
    // 7F31F77C: bc    4, 2, 0x7F31F7C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31F7C8;
        }
    }

label_7F31F780:
    ctx->pc = 0x7F31F780u;
    ctx->downcount -= 8;
    // 7F31F780: stfs     f0, 764(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F31F780u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(764);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F31F784:
    ctx->pc = 0x7F31F784u;
    // 7F31F784: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F31F788:
    ctx->pc = 0x7F31F788u;
    // 7F31F788: or   r30, r31, r31
    {
        ctx->gpr[30] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31F78C:
    ctx->pc = 0x7F31F78Cu;
    // 7F31F78C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F31F790:
    ctx->pc = 0x7F31F790u;
    // 7F31F790: lwz     r3, 184(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31F794:
    ctx->pc = 0x7F31F794u;
    // 7F31F794: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31F798:
    ctx->pc = 0x7F31F798u;
    // 7F31F798: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F31F79C:
    ctx->pc = 0x7F31F79Cu;
    // 7F31F79C: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31F7A0:
    ctx->downcount -= 4;
    // 7F31F7A0: addi    r29, r31, 1044
    ctx->gpr[29] = ctx->gpr[31] + (u32)(s32)(1044);

label_7F31F7A4:
    ctx->pc = 0x7F31F7A4u;
    // 7F31F7A4: lwzx    r3, r27, r29
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[29];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31F7A8:
    // 7F31F7A8: cmplwi  r3, 0x0000
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

label_7F31F7AC:
    // 7F31F7AC: bc    12, 2, 0x7F31F7B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31F7B8;
        }
    }

label_7F31F7B0:
    ctx->downcount -= 1;
    // 7F31F7B0: bl      0x7F3C82B4
    {
            ctx->lr = 0x7F31F7B4u;
            ctx->pc = 0x7F3C82B4u;
            return;
    }

label_7F31F7B4:
    ctx->pc = 0x7F31F7B4u;
    ctx->downcount -= 1;
    // 7F31F7B4: stwx    r30, r27, r29
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[29];
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F31F7B8:
    ctx->downcount -= 4;
    // 7F31F7B8: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F31F7BC:
    // 7F31F7BC: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F31F7C0:
    // 7F31F7C0: cmpwi   r28, 4
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

label_7F31F7C4:
    // 7F31F7C4: bc    12, 0, 0x7F31F7A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31F7A0u;
                return;
            }
            goto label_7F31F7A0;
        }
    }

label_7F31F7C8:
    ctx->pc = 0x7F31F7C8u;
    ctx->downcount -= 16;
    // 7F31F7C8: lmw     r27, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F31F7CC:
    ctx->pc = 0x7F31F7CCu;
    // 7F31F7CC: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31F7D0:
    ctx->pc = 0x7F31F7D0u;
    // 7F31F7D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31F7D4:
    ctx->pc = 0x7F31F7D4u;
    // 7F31F7D4: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F31F7D8:
    ctx->pc = 0x7F31F7D8u;
    // 7F31F7D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31F7DC:
    ctx->pc = 0x7F31F7DCu;
    ctx->downcount -= 15;
    // 7F31F7DC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31F7E0:
    ctx->pc = 0x7F31F7E0u;
    // 7F31F7E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31F7E4:
    ctx->pc = 0x7F31F7E4u;
    // 7F31F7E4: lis     r5, 254
    ctx->gpr[5] = ((u32)(s32)(254) << 16);

label_7F31F7E8:
    ctx->pc = 0x7F31F7E8u;
    // 7F31F7E8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31F7EC:
    ctx->pc = 0x7F31F7ECu;
    // 7F31F7EC: addi    r6, r5, -27199
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-27199);

label_7F31F7F0:
    ctx->pc = 0x7F31F7F0u;
    // 7F31F7F0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F31F7F4:
    ctx->pc = 0x7F31F7F4u;
    // 7F31F7F4: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F31F7F8:
    ctx->pc = 0x7F31F7F8u;
    // 7F31F7F8: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F31F7FC:
    ctx->pc = 0x7F31F7FCu;
    // 7F31F7FC: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31F800:
    ctx->pc = 0x7F31F800u;
    // 7F31F800: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F31F804:
    ctx->pc = 0x7F31F804u;
    // 7F31F804: stw     r6, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F31F808:
    ctx->pc = 0x7F31F808u;
    // 7F31F808: stw     r5, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F31F80C:
    ctx->pc = 0x7F31F80Cu;
    // 7F31F80C: stw     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F31F810:
    ctx->pc = 0x7F31F810u;
    // 7F31F810: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31F814:
    ctx->pc = 0x7F31F814u;
    // 7F31F814: bl      0x7F3C9494
    {
            ctx->lr = 0x7F31F818u;
            ctx->pc = 0x7F3C9494u;
            return;
    }

label_7F31F818:
    ctx->pc = 0x7F31F818u;
    ctx->downcount -= 5;
    // 7F31F818: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31F81C:
    ctx->pc = 0x7F31F81Cu;
    // 7F31F81C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31F820:
    ctx->pc = 0x7F31F820u;
    // 7F31F820: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F31F824:
    ctx->pc = 0x7F31F824u;
    // 7F31F824: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31F828:
    ctx->pc = 0x7F31F828u;
    ctx->downcount -= 8;
    // 7F31F828: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31F82C:
    ctx->pc = 0x7F31F82Cu;
    // 7F31F82C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31F830:
    ctx->pc = 0x7F31F830u;
    // 7F31F830: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31F834:
    ctx->pc = 0x7F31F834u;
    // 7F31F834: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F31F838:
    ctx->pc = 0x7F31F838u;
    // 7F31F838: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F31F83C:
    ctx->pc = 0x7F31F83Cu;
    // 7F31F83C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31F840:
    ctx->pc = 0x7F31F840u;
    // 7F31F840: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31F844:
    ctx->pc = 0x7F31F844u;
    // 7F31F844: bl      0x7F3C9624
    {
            ctx->lr = 0x7F31F848u;
            ctx->pc = 0x7F3C9624u;
            return;
    }

label_7F31F848:
    ctx->pc = 0x7F31F848u;
    ctx->downcount -= 4;
    // 7F31F848: mtctr    r3
    ctx->ctr = ctx->gpr[3];

label_7F31F84C:
    ctx->pc = 0x7F31F84Cu;
    // 7F31F84C: cmpwi   r3, 0
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

label_7F31F850:
    ctx->pc = 0x7F31F850u;
    // 7F31F850: bc    4, 1, 0x7F31F874
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31F874;
        }
    }

label_7F31F854:
    loop_7F31F854(ctx);
    if (ctx->pc == 0x7F31F874u) goto label_7F31F874;
    return;
label_7F31F858:
    ctx->pc = 0x7F31F858u;
    // 7F31F858: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31F85C:
    ctx->pc = 0x7F31F85Cu;
    // 7F31F85C: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31F860:
    ctx->pc = 0x7F31F860u;
    // 7F31F860: stw     r0, 644(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(644);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31F864:
    ctx->pc = 0x7F31F864u;
    // 7F31F864: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31F868:
    // 7F31F868: addi    r0, r3, 16
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16);

label_7F31F86C:
    ctx->pc = 0x7F31F86Cu;
    // 7F31F86C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31F870:
    // 7F31F870: bc    16, 0, 0x7F31F854
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31F854u;
                return;
            }
            goto label_7F31F854;
        }
    }

label_7F31F874:
    ctx->pc = 0x7F31F874u;
    ctx->downcount -= 6;
    // 7F31F874: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31F878:
    ctx->pc = 0x7F31F878u;
    // 7F31F878: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F31F87C:
    ctx->pc = 0x7F31F87Cu;
    // 7F31F87C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31F880:
    ctx->pc = 0x7F31F880u;
    // 7F31F880: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F31F884:
    ctx->pc = 0x7F31F884u;
    // 7F31F884: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31F888:
    ctx->pc = 0x7F31F888u;
    ctx->downcount -= 9;
    // 7F31F888: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31F88C:
    ctx->pc = 0x7F31F88Cu;
    // 7F31F88C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31F890:
    ctx->pc = 0x7F31F890u;
    // 7F31F890: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31F894:
    ctx->pc = 0x7F31F894u;
    // 7F31F894: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F31F898:
    ctx->pc = 0x7F31F898u;
    // 7F31F898: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31F89C:
    ctx->pc = 0x7F31F89Cu;
    // 7F31F89C: lwz     r4, 644(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(644);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31F8A0:
    ctx->pc = 0x7F31F8A0u;
    // 7F31F8A0: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F31F8A4:
    ctx->pc = 0x7F31F8A4u;
    // 7F31F8A4: cmplwi  r0, 0x0008
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

label_7F31F8A8:
    ctx->pc = 0x7F31F8A8u;
    // 7F31F8A8: bc    12, 1, 0x7F31FA5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31FA5C;
        }
    }

label_7F31F8AC:
    ctx->pc = 0x7F31F8ACu;
    ctx->downcount -= 7;
    // 7F31F8AC: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F31F8B0:
    ctx->pc = 0x7F31F8B0u;
    // 7F31F8B0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F31F8B4:
    ctx->pc = 0x7F31F8B4u;
    // 7F31F8B4: addi    r4, r4, -24984
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24984);

label_7F31F8B8:
    ctx->pc = 0x7F31F8B8u;
    // 7F31F8B8: lwzx    r0, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31F8BC:
    ctx->pc = 0x7F31F8BCu;
    // 7F31F8BC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F31F8C0:
    ctx->pc = 0x7F31F8C0u;
    // 7F31F8C0: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F31F8C4:
    ctx->pc = 0x7F31F8C4u;
    ctx->downcount -= 1;
    // 7F31F8C4: bl      0x7F31DF00
    {
            ctx->lr = 0x7F31F8C8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31DF00u;
                return;
            }
            goto label_7F31DF00;
    }

label_7F31F8C8:
    ctx->pc = 0x7F31F8C8u;
    ctx->downcount -= 5;
    // 7F31F8C8: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_7F31F8CC:
    ctx->pc = 0x7F31F8CCu;
    // 7F31F8CC: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F31F8D0:
    ctx->pc = 0x7F31F8D0u;
    // 7F31F8D0: stw     r3, 640(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(640);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31F8D4:
    ctx->pc = 0x7F31F8D4u;
    // 7F31F8D4: stw     r0, 644(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(644);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31F8D8:
    ctx->pc = 0x7F31F8D8u;
    // 7F31F8D8: b       0x7F31FA5C
    {
            goto label_7F31FA5C;
    }

label_7F31F8DC:
    ctx->pc = 0x7F31F8DCu;
    ctx->downcount -= 1;
    // 7F31F8DC: bl      0x7F31DE30
    {
            ctx->lr = 0x7F31F8E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31DE30u;
                return;
            }
            goto label_7F31DE30;
    }

label_7F31F8E0:
    ctx->pc = 0x7F31F8E0u;
    ctx->downcount -= 8;
    // 7F31F8E0: lwz     r6, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F31F8E4:
    ctx->pc = 0x7F31F8E4u;
    // 7F31F8E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31F8E8:
    ctx->pc = 0x7F31F8E8u;
    // 7F31F8E8: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F31F8EC:
    ctx->pc = 0x7F31F8ECu;
    // 7F31F8EC: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_7F31F8F0:
    ctx->pc = 0x7F31F8F0u;
    // 7F31F8F0: lwz     r0, 80(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31F8F4:
    ctx->pc = 0x7F31F8F4u;
    // 7F31F8F4: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F31F8F8:
    ctx->pc = 0x7F31F8F8u;
    // 7F31F8F8: stw     r0, 80(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31F8FC:
    ctx->pc = 0x7F31F8FCu;
    // 7F31F8FC: bl      0x7F3BEED4
    {
            ctx->lr = 0x7F31F900u;
            ctx->pc = 0x7F3BEED4u;
            return;
    }

label_7F31F900:
    ctx->pc = 0x7F31F900u;
    ctx->downcount -= 5;
    // 7F31F900: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F31F904:
    ctx->pc = 0x7F31F904u;
    // 7F31F904: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31F908:
    ctx->pc = 0x7F31F908u;
    // 7F31F908: lfs     f1, -29088(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F31F908u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-29088);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31F90C:
    ctx->pc = 0x7F31F90Cu;
    // 7F31F90C: lfs     f2, -29084(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31F90Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29084);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F31F910:
    ctx->pc = 0x7F31F910u;
    // 7F31F910: bl      0x7F3BEF3C
    {
            ctx->lr = 0x7F31F914u;
            ctx->pc = 0x7F3BEF3Cu;
            return;
    }

label_7F31F914:
    ctx->pc = 0x7F31F914u;
    ctx->downcount -= 5;
    // 7F31F914: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F31F918:
    ctx->pc = 0x7F31F918u;
    // 7F31F918: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F31F91C:
    ctx->pc = 0x7F31F91Cu;
    // 7F31F91C: stw     r3, 640(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(640);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31F920:
    ctx->pc = 0x7F31F920u;
    // 7F31F920: stw     r0, 644(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(644);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31F924:
    ctx->pc = 0x7F31F924u;
    // 7F31F924: b       0x7F31FA5C
    {
            goto label_7F31FA5C;
    }

label_7F31F928:
    ctx->pc = 0x7F31F928u;
    ctx->downcount -= 8;
    // 7F31F928: lwz     r6, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F31F92C:
    ctx->pc = 0x7F31F92Cu;
    // 7F31F92C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31F930:
    ctx->pc = 0x7F31F930u;
    // 7F31F930: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F31F934:
    ctx->pc = 0x7F31F934u;
    // 7F31F934: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_7F31F938:
    ctx->pc = 0x7F31F938u;
    // 7F31F938: lwz     r0, 80(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31F93C:
    ctx->pc = 0x7F31F93Cu;
    // 7F31F93C: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F31F940:
    ctx->pc = 0x7F31F940u;
    // 7F31F940: stw     r0, 80(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31F944:
    ctx->pc = 0x7F31F944u;
    // 7F31F944: bl      0x7F3BEED4
    {
            ctx->lr = 0x7F31F948u;
            ctx->pc = 0x7F3BEED4u;
            return;
    }

label_7F31F948:
    ctx->pc = 0x7F31F948u;
    ctx->downcount -= 5;
    // 7F31F948: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F31F94C:
    ctx->pc = 0x7F31F94Cu;
    // 7F31F94C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31F950:
    ctx->pc = 0x7F31F950u;
    // 7F31F950: lfs     f1, -29088(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F31F950u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-29088);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31F954:
    ctx->pc = 0x7F31F954u;
    // 7F31F954: lfs     f2, -29084(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31F954u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29084);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F31F958:
    ctx->pc = 0x7F31F958u;
    // 7F31F958: bl      0x7F3BEF3C
    {
            ctx->lr = 0x7F31F95Cu;
            ctx->pc = 0x7F3BEF3Cu;
            return;
    }

label_7F31F95C:
    ctx->pc = 0x7F31F95Cu;
    ctx->downcount -= 8;
    // 7F31F95C: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F31F960:
    ctx->pc = 0x7F31F960u;
    // 7F31F960: lis     r3, 3
    ctx->gpr[3] = ((u32)(s32)(3) << 16);

label_7F31F964:
    ctx->pc = 0x7F31F964u;
    // 7F31F964: stw     r0, 640(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(640);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31F968:
    ctx->pc = 0x7F31F968u;
    // 7F31F968: addi    r0, r3, 3735
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(3735);

label_7F31F96C:
    ctx->pc = 0x7F31F96Cu;
    // 7F31F96C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F31F970:
    ctx->pc = 0x7F31F970u;
    // 7F31F970: stw     r0, 632(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(632);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31F974:
    ctx->pc = 0x7F31F974u;
    // 7F31F974: lwz     r3, 628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(628);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31F978:
    ctx->pc = 0x7F31F978u;
    // 7F31F978: bl      0x7F2E57A0
    {
            ctx->lr = 0x7F31F97Cu;
            ctx->pc = 0x7F2E57A0u;
            return;
    }

label_7F31F97C:
    ctx->pc = 0x7F31F97Cu;
    ctx->downcount -= 5;
    // 7F31F97C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F31F980:
    ctx->pc = 0x7F31F980u;
    // 7F31F980: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F31F984:
    ctx->pc = 0x7F31F984u;
    // 7F31F984: stw     r3, 640(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(640);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31F988:
    ctx->pc = 0x7F31F988u;
    // 7F31F988: stw     r0, 644(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(644);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31F98C:
    ctx->pc = 0x7F31F98Cu;
    // 7F31F98C: b       0x7F31FA5C
    {
            goto label_7F31FA5C;
    }

label_7F31F990:
    ctx->pc = 0x7F31F990u;
    ctx->downcount -= 5;
    // 7F31F990: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F31F994:
    ctx->pc = 0x7F31F994u;
    // 7F31F994: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F31F998:
    ctx->pc = 0x7F31F998u;
    // 7F31F998: stw     r3, 640(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(640);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31F99C:
    ctx->pc = 0x7F31F99Cu;
    // 7F31F99C: stw     r0, 644(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(644);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31F9A0:
    ctx->pc = 0x7F31F9A0u;
    // 7F31F9A0: b       0x7F31FA5C
    {
            goto label_7F31FA5C;
    }

label_7F31F9A4:
    ctx->pc = 0x7F31F9A4u;
    ctx->downcount -= 1;
    // 7F31F9A4: bl      0x7F31DE30
    {
            ctx->lr = 0x7F31F9A8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31DE30u;
                return;
            }
            goto label_7F31DE30;
    }

label_7F31F9A8:
    ctx->pc = 0x7F31F9A8u;
    ctx->downcount -= 4;
    // 7F31F9A8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31F9AC:
    ctx->pc = 0x7F31F9ACu;
    // 7F31F9AC: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F31F9B0:
    ctx->pc = 0x7F31F9B0u;
    // 7F31F9B0: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_7F31F9B4:
    ctx->pc = 0x7F31F9B4u;
    // 7F31F9B4: bl      0x7F3BEED4
    {
            ctx->lr = 0x7F31F9B8u;
            ctx->pc = 0x7F3BEED4u;
            return;
    }

label_7F31F9B8:
    ctx->pc = 0x7F31F9B8u;
    ctx->downcount -= 5;
    // 7F31F9B8: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F31F9BC:
    ctx->pc = 0x7F31F9BCu;
    // 7F31F9BC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31F9C0:
    ctx->pc = 0x7F31F9C0u;
    // 7F31F9C0: lfs     f1, -29088(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F31F9C0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-29088);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31F9C4:
    ctx->pc = 0x7F31F9C4u;
    // 7F31F9C4: lfs     f2, -29084(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31F9C4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29084);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F31F9C8:
    ctx->pc = 0x7F31F9C8u;
    // 7F31F9C8: bl      0x7F3BEF3C
    {
            ctx->lr = 0x7F31F9CCu;
            ctx->pc = 0x7F3BEF3Cu;
            return;
    }

label_7F31F9CC:
    ctx->pc = 0x7F31F9CCu;
    ctx->downcount -= 5;
    // 7F31F9CC: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F31F9D0:
    ctx->pc = 0x7F31F9D0u;
    // 7F31F9D0: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F31F9D4:
    ctx->pc = 0x7F31F9D4u;
    // 7F31F9D4: stw     r3, 640(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(640);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31F9D8:
    ctx->pc = 0x7F31F9D8u;
    // 7F31F9D8: stw     r0, 644(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(644);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31F9DC:
    ctx->pc = 0x7F31F9DCu;
    // 7F31F9DC: b       0x7F31FA5C
    {
            goto label_7F31FA5C;
    }

label_7F31F9E0:
    ctx->pc = 0x7F31F9E0u;
    ctx->downcount -= 1;
    // 7F31F9E0: bl      0x7F3C8210
    {
            ctx->lr = 0x7F31F9E4u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F31F9E4:
    ctx->pc = 0x7F31F9E4u;
    ctx->downcount -= 4;
    // 7F31F9E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31F9E8:
    ctx->pc = 0x7F31F9E8u;
    // 7F31F9E8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31F9EC:
    ctx->pc = 0x7F31F9ECu;
    // 7F31F9EC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F31F9F0:
    ctx->pc = 0x7F31F9F0u;
    // 7F31F9F0: bl      0x7F3BEED4
    {
            ctx->lr = 0x7F31F9F4u;
            ctx->pc = 0x7F3BEED4u;
            return;
    }

label_7F31F9F4:
    ctx->pc = 0x7F31F9F4u;
    ctx->downcount -= 5;
    // 7F31F9F4: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F31F9F8:
    ctx->pc = 0x7F31F9F8u;
    // 7F31F9F8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31F9FC:
    ctx->pc = 0x7F31F9FCu;
    // 7F31F9FC: lfs     f1, -29088(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F31F9FCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-29088);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31FA00:
    ctx->pc = 0x7F31FA00u;
    // 7F31FA00: lfs     f2, -29084(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31FA00u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29084);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F31FA04:
    ctx->pc = 0x7F31FA04u;
    // 7F31FA04: bl      0x7F3BEF3C
    {
            ctx->lr = 0x7F31FA08u;
            ctx->pc = 0x7F3BEF3Cu;
            return;
    }

label_7F31FA08:
    ctx->pc = 0x7F31FA08u;
    ctx->downcount -= 1;
    // 7F31FA08: b       0x7F31FA5C
    {
            goto label_7F31FA5C;
    }

label_7F31FA0C:
    ctx->pc = 0x7F31FA0Cu;
    ctx->downcount -= 2;
    // 7F31FA0C: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_7F31FA10:
    ctx->pc = 0x7F31FA10u;
    // 7F31FA10: bl      0x7F31DDE8
    {
            ctx->lr = 0x7F31FA14u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31DDE8u;
                return;
            }
            goto label_7F31DDE8;
    }

label_7F31FA14:
    ctx->pc = 0x7F31FA14u;
    ctx->downcount -= 9;
    // 7F31FA14: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31FA18:
    ctx->pc = 0x7F31FA18u;
    // 7F31FA18: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F31FA1C:
    ctx->pc = 0x7F31FA1Cu;
    // 7F31FA1C: stw     r0, 1164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31FA20:
    ctx->pc = 0x7F31FA20u;
    // 7F31FA20: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F31FA24:
    ctx->pc = 0x7F31FA24u;
    // 7F31FA24: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F31FA28:
    ctx->pc = 0x7F31FA28u;
    // 7F31FA28: stb     r4, 1180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1180);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F31FA2C:
    ctx->pc = 0x7F31FA2Cu;
    // 7F31FA2C: stw     r3, 640(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(640);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31FA30:
    ctx->pc = 0x7F31FA30u;
    // 7F31FA30: stw     r0, 644(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(644);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31FA34:
    ctx->pc = 0x7F31FA34u;
    // 7F31FA34: b       0x7F31FA5C
    {
            goto label_7F31FA5C;
    }

label_7F31FA38:
    ctx->pc = 0x7F31FA38u;
    ctx->downcount -= 2;
    // 7F31FA38: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_7F31FA3C:
    ctx->pc = 0x7F31FA3Cu;
    // 7F31FA3C: bl      0x7F31DDE8
    {
            ctx->lr = 0x7F31FA40u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31DDE8u;
                return;
            }
            goto label_7F31DDE8;
    }

label_7F31FA40:
    ctx->pc = 0x7F31FA40u;
    ctx->downcount -= 7;
    // 7F31FA40: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31FA44:
    ctx->pc = 0x7F31FA44u;
    // 7F31FA44: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F31FA48:
    ctx->pc = 0x7F31FA48u;
    // 7F31FA48: stw     r4, 1164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1164);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F31FA4C:
    ctx->pc = 0x7F31FA4Cu;
    // 7F31FA4C: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F31FA50:
    ctx->pc = 0x7F31FA50u;
    // 7F31FA50: stb     r4, 1180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1180);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F31FA54:
    ctx->pc = 0x7F31FA54u;
    // 7F31FA54: stw     r3, 640(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(640);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31FA58:
    ctx->pc = 0x7F31FA58u;
    // 7F31FA58: stw     r0, 644(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(644);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31FA5C:
    ctx->pc = 0x7F31FA5Cu;
    ctx->downcount -= 6;
    // 7F31FA5C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31FA60:
    ctx->pc = 0x7F31FA60u;
    // 7F31FA60: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F31FA64:
    ctx->pc = 0x7F31FA64u;
    // 7F31FA64: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31FA68:
    ctx->pc = 0x7F31FA68u;
    // 7F31FA68: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F31FA6C:
    ctx->pc = 0x7F31FA6Cu;
    // 7F31FA6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31FA70:
    ctx->pc = 0x7F31FA70u;
    ctx->downcount -= 35;
    // 7F31FA70: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31FA74:
    ctx->pc = 0x7F31FA74u;
    // 7F31FA74: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31FA78:
    ctx->pc = 0x7F31FA78u;
    // 7F31FA78: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31FA7C:
    ctx->pc = 0x7F31FA7Cu;
    // 7F31FA7C: stfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31FA7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F31FA80:
    ctx->pc = 0x7F31FA80u;
    // 7F31FA80: psq_st   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F31FA80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F31FA80u);
        if (ctx->exception) return;
    }

label_7F31FA84:
    ctx->pc = 0x7F31FA84u;
    // 7F31FA84: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F31FA88:
    ctx->pc = 0x7F31FA88u;
    // 7F31FA88: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F31FA8C:
    ctx->pc = 0x7F31FA8Cu;
    // 7F31FA8C: lis     r6, 17200
    ctx->gpr[6] = ((u32)(s32)(17200) << 16);

label_7F31FA90:
    ctx->pc = 0x7F31FA90u;
    // 7F31FA90: addi    r4, r4, 14256
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14256);

label_7F31FA94:
    ctx->pc = 0x7F31FA94u;
    // 7F31FA94: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31FA98:
    ctx->pc = 0x7F31FA98u;
    // 7F31FA98: lbz     r0, 34(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(34);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31FA9C:
    ctx->pc = 0x7F31FA9Cu;
    // 7F31FA9C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31FAA0:
    ctx->pc = 0x7F31FAA0u;
    // 7F31FAA0: addi    r5, r3, -29032
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-29032);

label_7F31FAA4:
    ctx->pc = 0x7F31FAA4u;
    // 7F31FAA4: lbz     r7, 35(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(35);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_7F31FAA8:
    ctx->pc = 0x7F31FAA8u;
    // 7F31FAA8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31FAAC:
    ctx->pc = 0x7F31FAACu;
    // 7F31FAAC: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F31FAB0:
    ctx->pc = 0x7F31FAB0u;
    // 7F31FAB0: lfs     f2, -28992(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F31FAB0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-28992);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F31FAB4:
    ctx->pc = 0x7F31FAB4u;
    // 7F31FAB4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31FAB8:
    ctx->pc = 0x7F31FAB8u;
    // 7F31FAB8: stw     r6, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F31FABC:
    ctx->pc = 0x7F31FABCu;
    // 7F31FABC: lis     r8, 32583
    ctx->gpr[8] = ((u32)(s32)(32583) << 16);

label_7F31FAC0:
    ctx->pc = 0x7F31FAC0u;
    // 7F31FAC0: lfd     f4, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F31FAC0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31FAC4:
    ctx->pc = 0x7F31FAC4u;
    // 7F31FAC4: addi    r5, r3, -29092
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-29092);

label_7F31FAC8:
    ctx->pc = 0x7F31FAC8u;
    // 7F31FAC8: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31FAC8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31FACC:
    ctx->pc = 0x7F31FACCu;
    // 7F31FACC: addi    r3, r31, 564
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(564);

label_7F31FAD0:
    ctx->pc = 0x7F31FAD0u;
    // 7F31FAD0: stw     r7, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F31FAD4:
    ctx->pc = 0x7F31FAD4u;
    // 7F31FAD4: addi    r4, r31, 580
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(580);

label_7F31FAD8:
    ctx->pc = 0x7F31FAD8u;
    // 7F31FAD8: fsubs   f1, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F31FAD8u)) return;
    ppc_fsubs(ctx, 1, 0, 4);

label_7F31FADC:
    ctx->pc = 0x7F31FADCu;
    // 7F31FADC: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F31FADCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31FAE0:
    ctx->pc = 0x7F31FAE0u;
    // 7F31FAE0: stw     r6, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F31FAE4:
    ctx->pc = 0x7F31FAE4u;
    // 7F31FAE4: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31FAE4u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F31FAE8:
    ctx->pc = 0x7F31FAE8u;
    // 7F31FAE8: lfd     f3, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31FAE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31FAEC:
    ctx->pc = 0x7F31FAECu;
    // 7F31FAEC: lfs     f2, -28988(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F31FAECu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-28988);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F31FAF0:
    ctx->pc = 0x7F31FAF0u;
    // 7F31FAF0: fsubs   f1, f3, f4
    if (!ppc_fp_available_inline(ctx, 0x7F31FAF0u)) return;
    ppc_fsubs(ctx, 1, 3, 4);

label_7F31FAF4:
    ctx->pc = 0x7F31FAF4u;
    // 7F31FAF4: fmadds f31, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31FAF4u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[31] = ctx->ps1[31] = result;
    }

label_7F31FAF8:
    ctx->pc = 0x7F31FAF8u;
    // 7F31FAF8: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F31FAFCu;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F31FAFC:
    ctx->pc = 0x7F31FAFCu;
    ctx->downcount -= 2;
    // 7F31FAFC: addi    r3, r31, 184
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(184);

label_7F31FB00:
    ctx->pc = 0x7F31FB00u;
    // 7F31FB00: bl      0x7F0429C4
    {
            ctx->lr = 0x7F31FB04u;
            ctx->pc = 0x7F0429C4u;
            return;
    }

label_7F31FB04:
    ctx->pc = 0x7F31FB04u;
    ctx->downcount -= 8;
    // 7F31FB04: lwz     r0, 792(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(792);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31FB08:
    ctx->pc = 0x7F31FB08u;
    // 7F31FB08: addi    r3, r31, 768
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(768);

label_7F31FB0C:
    ctx->pc = 0x7F31FB0Cu;
    // 7F31FB0C: lfs     f1, 788(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31FB0Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(788);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31FB10:
    ctx->pc = 0x7F31FB10u;
    // 7F31FB10: li      r5, 256
    ctx->gpr[5] = (u32)(s32)(256);

label_7F31FB14:
    ctx->pc = 0x7F31FB14u;
    // 7F31FB14: oris    r4, r0, 0x5A64
    ctx->gpr[4] = ctx->gpr[0] | (0x5A64u << 16);

label_7F31FB18:
    ctx->pc = 0x7F31FB18u;
    // 7F31FB18: lfs     f2, 784(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31FB18u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(784);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F31FB1C:
    ctx->pc = 0x7F31FB1Cu;
    // 7F31FB1C: ori     r4, r4, 0x5000
    ctx->gpr[4] = ctx->gpr[4] | 0x5000u;

label_7F31FB20:
    ctx->pc = 0x7F31FB20u;
    // 7F31FB20: bl      0x7F3BACD0
    {
            ctx->lr = 0x7F31FB24u;
            ctx->pc = 0x7F3BACD0u;
            return;
    }

label_7F31FB24:
    ctx->pc = 0x7F31FB24u;
    ctx->downcount -= 5;
    // 7F31FB24: lwz     r5, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F31FB28:
    ctx->pc = 0x7F31FB28u;
    // 7F31FB28: addi    r3, r31, 564
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(564);

label_7F31FB2C:
    ctx->pc = 0x7F31FB2Cu;
    // 7F31FB2C: addi    r4, r31, 56
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(56);

label_7F31FB30:
    ctx->pc = 0x7F31FB30u;
    // 7F31FB30: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F31FB34:
    ctx->pc = 0x7F31FB34u;
    // 7F31FB34: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F31FB38u;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F31FB38:
    ctx->pc = 0x7F31FB38u;
    ctx->downcount -= 2;
    // 7F31FB38: addi    r3, r31, 668
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(668);

label_7F31FB3C:
    ctx->pc = 0x7F31FB3Cu;
    // 7F31FB3C: bl      0x7F2EA428
    {
            ctx->lr = 0x7F31FB40u;
            ctx->pc = 0x7F2EA428u;
            return;
    }

label_7F31FB40:
    ctx->pc = 0x7F31FB40u;
    ctx->downcount -= 7;
    // 7F31FB40: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31FB44:
    ctx->pc = 0x7F31FB44u;
    // 7F31FB44: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_7F31FB48:
    ctx->pc = 0x7F31FB48u;
    // 7F31FB48: lfs     f0, -28984(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31FB48u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-28984);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31FB4C:
    ctx->pc = 0x7F31FB4Cu;
    // 7F31FB4C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F31FB50:
    ctx->pc = 0x7F31FB50u;
    // 7F31FB50: fmuls   f2, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F31FB50u)) return;
    ppc_fmuls(ctx, 2, 0, 31);

label_7F31FB54:
    ctx->pc = 0x7F31FB54u;
    // 7F31FB54: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F31FB58:
    ctx->downcount -= 2;
    // 7F31FB58: addic.  r0, r5, 1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(1);
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

label_7F31FB5C:
    // 7F31FB5C: bc    12, 0, 0x7F31FBBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31FBBC;
        }
    }

label_7F31FB60:
    ctx->downcount -= 8;
    // 7F31FB60: rlwinm r4, r0, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F31FB64:
    // 7F31FB64: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31FB68:
    // 7F31FB68: addi    r0, r4, 232
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(232);

label_7F31FB6C:
    ctx->pc = 0x7F31FB6Cu;
    // 7F31FB6C: lfs     f1, -29164(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31FB6Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29164);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31FB70:
    ctx->pc = 0x7F31FB70u;
    // 7F31FB70: lfsx    f0, r31, r0
    if (!ppc_fp_available_inline(ctx, 0x7F31FB70u)) return;
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31FB74:
    ctx->pc = 0x7F31FB74u;
    // 7F31FB74: fadds   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F31FB74u)) return;
    ppc_fadds(ctx, 0, 0, 2);

label_7F31FB78:
    ctx->pc = 0x7F31FB78u;
    // 7F31FB78: stfsx    f0, r31, r0
    if (!ppc_fp_available_inline(ctx, 0x7F31FB78u)) return;
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F31FB7C:
    // 7F31FB7C: b       0x7F31FB8C
    {
            goto label_7F31FB8C;
    }

label_7F31FB80:
    ctx->pc = 0x7F31FB80u;
    ctx->downcount -= 3;
    // 7F31FB80: lfsx    f0, r31, r0
    if (!ppc_fp_available_inline(ctx, 0x7F31FB80u)) return;
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31FB84:
    ctx->pc = 0x7F31FB84u;
    // 7F31FB84: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F31FB84u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F31FB88:
    ctx->pc = 0x7F31FB88u;
    // 7F31FB88: stfsx    f0, r31, r0
    if (!ppc_fp_available_inline(ctx, 0x7F31FB88u)) return;
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F31FB8C:
    ctx->pc = 0x7F31FB8Cu;
    ctx->downcount -= 3;
    // 7F31FB8C: lfsx    f0, r31, r0
    if (!ppc_fp_available_inline(ctx, 0x7F31FB8Cu)) return;
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31FB90:
    ctx->pc = 0x7F31FB90u;
    // 7F31FB90: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F31FB90u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F31FB94:
    // 7F31FB94: bc    12, 1, 0x7F31FB80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31FB80u;
                return;
            }
            goto label_7F31FB80;
        }
    }

label_7F31FB98:
    ctx->downcount -= 3;
    // 7F31FB98: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31FB9C:
    ctx->pc = 0x7F31FB9Cu;
    // 7F31FB9C: lfs     f1, -29164(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31FB9Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29164);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31FBA0:
    // 7F31FBA0: b       0x7F31FBB0
    {
            goto label_7F31FBB0;
    }

label_7F31FBA4:
    ctx->pc = 0x7F31FBA4u;
    ctx->downcount -= 3;
    // 7F31FBA4: lfsx    f0, r31, r0
    if (!ppc_fp_available_inline(ctx, 0x7F31FBA4u)) return;
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31FBA8:
    ctx->pc = 0x7F31FBA8u;
    // 7F31FBA8: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F31FBA8u)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_7F31FBAC:
    ctx->pc = 0x7F31FBACu;
    // 7F31FBAC: stfsx    f0, r31, r0
    if (!ppc_fp_available_inline(ctx, 0x7F31FBACu)) return;
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F31FBB0:
    ctx->pc = 0x7F31FBB0u;
    ctx->downcount -= 3;
    // 7F31FBB0: lfsx    f0, r31, r0
    if (!ppc_fp_available_inline(ctx, 0x7F31FBB0u)) return;
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31FBB4:
    ctx->pc = 0x7F31FBB4u;
    // 7F31FBB4: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F31FBB4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F31FBB8:
    // 7F31FBB8: bc    12, 0, 0x7F31FBA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31FBA4u;
                return;
            }
            goto label_7F31FBA4;
        }
    }

label_7F31FBBC:
    ctx->downcount -= 2;
    // 7F31FBBC: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_7F31FBC0:
    // 7F31FBC0: bc    16, 0, 0x7F31FB58
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31FB58u;
                return;
            }
            goto label_7F31FB58;
        }
    }

label_7F31FBC4:
    ctx->pc = 0x7F31FBC4u;
    ctx->downcount -= 8;
    // 7F31FBC4: psq_l   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F31FBC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F31FBC4u);
        if (ctx->exception) return;
    }

label_7F31FBC8:
    ctx->pc = 0x7F31FBC8u;
    // 7F31FBC8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31FBCC:
    ctx->pc = 0x7F31FBCCu;
    // 7F31FBCC: lfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F31FBCCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F31FBD0:
    ctx->pc = 0x7F31FBD0u;
    // 7F31FBD0: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F31FBD4:
    ctx->pc = 0x7F31FBD4u;
    // 7F31FBD4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31FBD8:
    ctx->pc = 0x7F31FBD8u;
    // 7F31FBD8: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F31FBDC:
    ctx->pc = 0x7F31FBDCu;
    // 7F31FBDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F31C0EC;
        }
    }

label_7F31FBE0:
    ctx->pc = 0x7F31FBE0u;
    ctx->downcount -= 7;
    // 7F31FBE0: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31FBE4:
    ctx->pc = 0x7F31FBE4u;
    // 7F31FBE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31FBE8:
    ctx->pc = 0x7F31FBE8u;
    // 7F31FBE8: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31FBEC:
    ctx->pc = 0x7F31FBECu;
    // 7F31FBEC: stw     r31, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F31FBF0:
    ctx->pc = 0x7F31FBF0u;
    // 7F31FBF0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31FBF4:
    ctx->pc = 0x7F31FBF4u;
    // 7F31FBF4: lwz     r3, 628(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(628);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31FBF8:
    ctx->pc = 0x7F31FBF8u;
    // 7F31FBF8: bl      0x7F2E50A0
    {
            ctx->lr = 0x7F31FBFCu;
            ctx->pc = 0x7F2E50A0u;
            return;
    }

label_7F31FBFC:
    ctx->pc = 0x7F31FBFCu;
    ctx->downcount -= 2;
    // 7F31FBFC: cmpwi   r3, 0
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

label_7F31FC00:
    ctx->pc = 0x7F31FC00u;
    // 7F31FC00: bc    4, 2, 0x7F31FC34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31FC34;
        }
    }

label_7F31FC04:
    ctx->pc = 0x7F31FC04u;
    ctx->downcount -= 5;
    // 7F31FC04: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31FC08:
    ctx->pc = 0x7F31FC08u;
    // 7F31FC08: stw     r0, 636(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31FC0C:
    ctx->pc = 0x7F31FC0Cu;
    // 7F31FC0C: lwz     r4, 632(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(632);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31FC10:
    ctx->pc = 0x7F31FC10u;
    // 7F31FC10: cmpwi   r4, 0
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

label_7F31FC14:
    ctx->pc = 0x7F31FC14u;
    // 7F31FC14: bc    12, 2, 0x7F31FC3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31FC3C;
        }
    }

label_7F31FC18:
    ctx->pc = 0x7F31FC18u;
    ctx->downcount -= 2;
    // 7F31FC18: lwz     r3, 628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(628);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31FC1C:
    ctx->pc = 0x7F31FC1Cu;
    // 7F31FC1C: bl      0x7F2E4C98
    {
            ctx->lr = 0x7F31FC20u;
            ctx->pc = 0x7F2E4C98u;
            return;
    }

label_7F31FC20:
    ctx->pc = 0x7F31FC20u;
    ctx->downcount -= 5;
    // 7F31FC20: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31FC24:
    ctx->pc = 0x7F31FC24u;
    // 7F31FC24: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F31FC28:
    ctx->pc = 0x7F31FC28u;
    // 7F31FC28: stw     r3, 632(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(632);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31FC2C:
    ctx->pc = 0x7F31FC2Cu;
    // 7F31FC2C: stw     r0, 636(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31FC30:
    ctx->pc = 0x7F31FC30u;
    // 7F31FC30: b       0x7F31FC3C
    {
            goto label_7F31FC3C;
    }

label_7F31FC34:
    ctx->pc = 0x7F31FC34u;
    ctx->downcount -= 2;
    // 7F31FC34: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F31FC38:
    ctx->pc = 0x7F31FC38u;
    // 7F31FC38: stw     r0, 636(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31FC3C:
    ctx->pc = 0x7F31FC3Cu;
    ctx->downcount -= 2;
    // 7F31FC3C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31FC40:
    ctx->pc = 0x7F31FC40u;
    // 7F31FC40: bl      0x7F31F828
    {
            ctx->lr = 0x7F31FC44u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31F828u;
                return;
            }
            goto label_7F31F828;
    }

label_7F31FC44:
    ctx->pc = 0x7F31FC44u;
    ctx->downcount -= 2;
    // 7F31FC44: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31FC48:
    ctx->pc = 0x7F31FC48u;
    // 7F31FC48: bl      0x7F31F1D4
    {
            ctx->lr = 0x7F31FC4Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31F1D4u;
                return;
            }
            goto label_7F31F1D4;
    }

label_7F31FC4C:
    ctx->pc = 0x7F31FC4Cu;
    ctx->downcount -= 3;
    // 7F31FC4C: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31FC50:
    ctx->pc = 0x7F31FC50u;
    // 7F31FC50: cmpwi   r0, 0
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

label_7F31FC54:
    ctx->pc = 0x7F31FC54u;
    // 7F31FC54: bc    4, 2, 0x7F31FCC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31FCC0;
        }
    }

label_7F31FC58:
    ctx->pc = 0x7F31FC58u;
    ctx->downcount -= 5;
    // 7F31FC58: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F31FC5C:
    ctx->pc = 0x7F31FC5Cu;
    // 7F31FC5C: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31FC60:
    ctx->pc = 0x7F31FC60u;
    // 7F31FC60: lwz     r0, 640(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(640);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31FC64:
    ctx->pc = 0x7F31FC64u;
    // 7F31FC64: cmpwi   r0, 7
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

label_7F31FC68:
    ctx->pc = 0x7F31FC68u;
    // 7F31FC68: bc    12, 2, 0x7F31FCC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31FCC0;
        }
    }

label_7F31FC6C:
    ctx->pc = 0x7F31FC6Cu;
    ctx->downcount -= 8;
    // 7F31FC6C: lwz     r6, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F31FC70:
    ctx->pc = 0x7F31FC70u;
    // 7F31FC70: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31FC74:
    ctx->pc = 0x7F31FC74u;
    // 7F31FC74: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F31FC78:
    ctx->pc = 0x7F31FC78u;
    // 7F31FC78: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_7F31FC7C:
    ctx->pc = 0x7F31FC7Cu;
    // 7F31FC7C: lwz     r0, 80(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31FC80:
    ctx->pc = 0x7F31FC80u;
    // 7F31FC80: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F31FC84:
    ctx->pc = 0x7F31FC84u;
    // 7F31FC84: stw     r0, 80(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31FC88:
    ctx->pc = 0x7F31FC88u;
    // 7F31FC88: bl      0x7F3BEED4
    {
            ctx->lr = 0x7F31FC8Cu;
            ctx->pc = 0x7F3BEED4u;
            return;
    }

label_7F31FC8C:
    ctx->pc = 0x7F31FC8Cu;
    ctx->downcount -= 5;
    // 7F31FC8C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F31FC90:
    ctx->pc = 0x7F31FC90u;
    // 7F31FC90: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31FC94:
    ctx->pc = 0x7F31FC94u;
    // 7F31FC94: lfs     f1, -29088(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F31FC94u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-29088);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31FC98:
    ctx->pc = 0x7F31FC98u;
    // 7F31FC98: lfs     f2, -29084(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31FC98u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29084);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F31FC9C:
    ctx->pc = 0x7F31FC9Cu;
    // 7F31FC9C: bl      0x7F3BEF3C
    {
            ctx->lr = 0x7F31FCA0u;
            ctx->pc = 0x7F3BEF3Cu;
            return;
    }

label_7F31FCA0:
    ctx->pc = 0x7F31FCA0u;
    ctx->downcount -= 2;
    // 7F31FCA0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31FCA4:
    ctx->pc = 0x7F31FCA4u;
    // 7F31FCA4: bl      0x7F31DD5C
    {
            ctx->lr = 0x7F31FCA8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31DD5Cu;
                return;
            }
            goto label_7F31DD5C;
    }

label_7F31FCA8:
    ctx->pc = 0x7F31FCA8u;
    ctx->downcount -= 6;
    // 7F31FCA8: li      r3, 233
    ctx->gpr[3] = (u32)(s32)(233);

label_7F31FCAC:
    ctx->pc = 0x7F31FCACu;
    // 7F31FCAC: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F31FCB0:
    ctx->pc = 0x7F31FCB0u;
    // 7F31FCB0: li      r5, 120
    ctx->gpr[5] = (u32)(s32)(120);

label_7F31FCB4:
    ctx->pc = 0x7F31FCB4u;
    // 7F31FCB4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F31FCB8:
    ctx->pc = 0x7F31FCB8u;
    // 7F31FCB8: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_7F31FCBC:
    ctx->pc = 0x7F31FCBCu;
    // 7F31FCBC: bl      0x80051784
    {
            ctx->lr = 0x7F31FCC0u;
            ctx->pc = 0x80051784u;
            return;
    }

label_7F31FCC0:
    ctx->pc = 0x7F31FCC0u;
    ctx->downcount -= 3;
    // 7F31FCC0: lwz     r0, 640(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(640);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31FCC4:
    ctx->pc = 0x7F31FCC4u;
    // 7F31FCC4: cmpwi   r0, 7
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

label_7F31FCC8:
    ctx->pc = 0x7F31FCC8u;
    // 7F31FCC8: bc    12, 2, 0x7F31FCE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31FCE4;
        }
    }

label_7F31FCCC:
    ctx->pc = 0x7F31FCCCu;
    ctx->downcount -= 2;
    // 7F31FCCC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31FCD0:
    ctx->pc = 0x7F31FCD0u;
    // 7F31FCD0: bl      0x7F31FA70
    {
            ctx->lr = 0x7F31FCD4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31FA70u;
                return;
            }
            goto label_7F31FA70;
    }

label_7F31FCD4:
    ctx->pc = 0x7F31FCD4u;
    ctx->downcount -= 2;
    // 7F31FCD4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31FCD8:
    ctx->pc = 0x7F31FCD8u;
    // 7F31FCD8: bl      0x7F31F2DC
    {
            ctx->lr = 0x7F31FCDCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31F2DCu;
                return;
            }
            goto label_7F31F2DC;
    }

label_7F31FCDC:
    ctx->pc = 0x7F31FCDCu;
    ctx->downcount -= 2;
    // 7F31FCDC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31FCE0:
    ctx->pc = 0x7F31FCE0u;
    // 7F31FCE0: bl      0x7F31ED58
    {
            ctx->lr = 0x7F31FCE4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31ED58u;
                return;
            }
            goto label_7F31ED58;
    }

label_7F31FCE4:
    ctx->pc = 0x7F31FCE4u;
    ctx->downcount -= 3;
    // 7F31FCE4: lwz     r0, 640(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(640);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31FCE8:
    ctx->pc = 0x7F31FCE8u;
    // 7F31FCE8: cmplwi  r0, 0x0009
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0009u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31FCEC:
    ctx->pc = 0x7F31FCECu;
    // 7F31FCEC: bc    12, 1, 0x7F320278
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F320278u;
            return;
        }
    }

label_7F31FCF0:
    ctx->pc = 0x7F31FCF0u;
    ctx->downcount -= 7;
    // 7F31FCF0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F31FCF4:
    ctx->pc = 0x7F31FCF4u;
    // 7F31FCF4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F31FCF8:
    ctx->pc = 0x7F31FCF8u;
    // 7F31FCF8: addi    r3, r3, -24948
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24948);

label_7F31FCFC:
    ctx->pc = 0x7F31FCFCu;
    // 7F31FCFC: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31FD00:
    ctx->pc = 0x7F31FD00u;
    // 7F31FD00: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F31FD04:
    ctx->pc = 0x7F31FD04u;
    // 7F31FD04: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F31FD08:
    ctx->pc = 0x7F31FD08u;
    ctx->downcount -= 2;
    // 7F31FD08: addi    r3, r31, 700
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(700);

label_7F31FD0C:
    ctx->pc = 0x7F31FD0Cu;
    // 7F31FD0C: bl      0x7F31E024
    {
            ctx->lr = 0x7F31FD10u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E024u;
                return;
            }
            goto label_7F31E024;
    }

label_7F31FD10:
    ctx->pc = 0x7F31FD10u;
    ctx->downcount -= 2;
    // 7F31FD10: cmpwi   r3, 0
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

label_7F31FD14:
    ctx->pc = 0x7F31FD14u;
    // 7F31FD14: bc    12, 2, 0x7F31FD24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31FD24;
        }
    }

label_7F31FD18:
    ctx->pc = 0x7F31FD18u;
    ctx->downcount -= 2;
    // 7F31FD18: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31FD1C:
    ctx->pc = 0x7F31FD1Cu;
    // 7F31FD1C: bl      0x7F31E744
    {
            ctx->lr = 0x7F31FD20u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E744u;
                return;
            }
            goto label_7F31E744;
    }

label_7F31FD20:
    ctx->pc = 0x7F31FD20u;
    ctx->downcount -= 1;
    // 7F31FD20: b       0x7F320278
    {
            ctx->pc = 0x7F320278u;
            return;
    }

label_7F31FD24:
    ctx->pc = 0x7F31FD24u;
    ctx->downcount -= 5;
    // 7F31FD24: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F31FD28:
    ctx->pc = 0x7F31FD28u;
    // 7F31FD28: addi    r3, r3, 14256
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14256);

label_7F31FD2C:
    ctx->pc = 0x7F31FD2Cu;
    // 7F31FD2C: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31FD30:
    ctx->pc = 0x7F31FD30u;
    // 7F31FD30: rlwinm. r0, r0, 0, 11, 11
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00100000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F31FD34:
    ctx->pc = 0x7F31FD34u;
    // 7F31FD34: bc    12, 2, 0x7F320278
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F320278u;
            return;
        }
    }

label_7F31FD38:
    ctx->pc = 0x7F31FD38u;
    ctx->downcount -= 2;
    // 7F31FD38: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31FD3C:
    ctx->pc = 0x7F31FD3Cu;
    // 7F31FD3C: bl      0x7F31E744
    {
            ctx->lr = 0x7F31FD40u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E744u;
                return;
            }
            goto label_7F31E744;
    }

label_7F31FD40:
    ctx->pc = 0x7F31FD40u;
    ctx->downcount -= 11;
    // 7F31FD40: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F31FD44:
    ctx->pc = 0x7F31FD44u;
    // 7F31FD44: lis     r3, 2
    ctx->gpr[3] = ((u32)(s32)(2) << 16);

label_7F31FD48:
    ctx->pc = 0x7F31FD48u;
    // 7F31FD48: lfs     f0, -29092(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F31FD48u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-29092);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31FD4C:
    ctx->pc = 0x7F31FD4Cu;
    // 7F31FD4C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F31FD50:
    ctx->pc = 0x7F31FD50u;
    // 7F31FD50: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F31FD54:
    ctx->pc = 0x7F31FD54u;
    // 7F31FD54: addi    r0, r3, -4147
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-4147);

label_7F31FD58:
    ctx->pc = 0x7F31FD58u;
    // 7F31FD58: stfs     f0, 764(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31FD58u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(764);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F31FD5C:
    ctx->pc = 0x7F31FD5Cu;
    // 7F31FD5C: stw     r5, 1168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1168);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F31FD60:
    ctx->pc = 0x7F31FD60u;
    // 7F31FD60: stw     r4, 640(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(640);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F31FD64:
    ctx->pc = 0x7F31FD64u;
    // 7F31FD64: stw     r0, 632(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(632);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31FD68:
    ctx->pc = 0x7F31FD68u;
    // 7F31FD68: b       0x7F320278
    {
            ctx->pc = 0x7F320278u;
            return;
    }

label_7F31FD6C:
    ctx->pc = 0x7F31FD6Cu;
    ctx->downcount -= 2;
    // 7F31FD6C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31FD70:
    ctx->pc = 0x7F31FD70u;
    // 7F31FD70: bl      0x7F31E968
    {
            ctx->lr = 0x7F31FD74u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E968u;
                return;
            }
            goto label_7F31E968;
    }

label_7F31FD74:
    ctx->pc = 0x7F31FD74u;
    ctx->downcount -= 3;
    // 7F31FD74: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31FD78:
    ctx->pc = 0x7F31FD78u;
    // 7F31FD78: li      r4, 60
    ctx->gpr[4] = (u32)(s32)(60);

label_7F31FD7C:
    ctx->pc = 0x7F31FD7Cu;
    // 7F31FD7C: bl      0x7F31F6EC
    {
            ctx->lr = 0x7F31FD80u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31F6ECu;
                return;
            }
            goto label_7F31F6EC;
    }

label_7F31FD80:
    ctx->pc = 0x7F31FD80u;
    ctx->downcount -= 5;
    // 7F31FD80: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F31FD84:
    ctx->pc = 0x7F31FD84u;
    // 7F31FD84: addi    r3, r3, 14256
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14256);

label_7F31FD88:
    ctx->pc = 0x7F31FD88u;
    // 7F31FD88: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31FD8C:
    ctx->pc = 0x7F31FD8Cu;
    // 7F31FD8C: rlwinm. r0, r0, 0, 11, 11
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00100000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F31FD90:
    ctx->pc = 0x7F31FD90u;
    // 7F31FD90: bc    12, 2, 0x7F31FDD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31FDD0;
        }
    }

label_7F31FD94:
    ctx->pc = 0x7F31FD94u;
    ctx->downcount -= 2;
    // 7F31FD94: lwz     r3, 628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(628);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31FD98:
    ctx->pc = 0x7F31FD98u;
    // 7F31FD98: bl      0x7F2E4C28
    {
            ctx->lr = 0x7F31FD9Cu;
            ctx->pc = 0x7F2E4C28u;
            return;
    }

label_7F31FD9C:
    ctx->pc = 0x7F31FD9Cu;
    ctx->downcount -= 2;
    // 7F31FD9C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31FDA0:
    ctx->pc = 0x7F31FDA0u;
    // 7F31FDA0: bl      0x7F31E744
    {
            ctx->lr = 0x7F31FDA4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E744u;
                return;
            }
            goto label_7F31E744;
    }

label_7F31FDA4:
    ctx->pc = 0x7F31FDA4u;
    ctx->downcount -= 11;
    // 7F31FDA4: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F31FDA8:
    ctx->pc = 0x7F31FDA8u;
    // 7F31FDA8: lis     r3, 2
    ctx->gpr[3] = ((u32)(s32)(2) << 16);

label_7F31FDAC:
    ctx->pc = 0x7F31FDACu;
    // 7F31FDAC: lfs     f0, -29092(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F31FDACu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-29092);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31FDB0:
    ctx->pc = 0x7F31FDB0u;
    // 7F31FDB0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F31FDB4:
    ctx->pc = 0x7F31FDB4u;
    // 7F31FDB4: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F31FDB8:
    ctx->pc = 0x7F31FDB8u;
    // 7F31FDB8: addi    r0, r3, -4147
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-4147);

label_7F31FDBC:
    ctx->pc = 0x7F31FDBCu;
    // 7F31FDBC: stfs     f0, 764(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31FDBCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(764);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F31FDC0:
    ctx->pc = 0x7F31FDC0u;
    // 7F31FDC0: stw     r5, 1168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1168);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F31FDC4:
    ctx->pc = 0x7F31FDC4u;
    // 7F31FDC4: stw     r4, 640(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(640);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F31FDC8:
    ctx->pc = 0x7F31FDC8u;
    // 7F31FDC8: stw     r0, 632(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(632);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31FDCC:
    ctx->pc = 0x7F31FDCCu;
    // 7F31FDCC: b       0x7F320278
    {
            ctx->pc = 0x7F320278u;
            return;
    }

label_7F31FDD0:
    ctx->pc = 0x7F31FDD0u;
    ctx->downcount -= 3;
    // 7F31FDD0: lwz     r0, 636(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31FDD4:
    ctx->pc = 0x7F31FDD4u;
    // 7F31FDD4: cmpwi   r0, 0
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

label_7F31FDD8:
    ctx->pc = 0x7F31FDD8u;
    // 7F31FDD8: bc    4, 2, 0x7F320278
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F320278u;
            return;
        }
    }

label_7F31FDDC:
    ctx->pc = 0x7F31FDDCu;
    ctx->downcount -= 2;
    // 7F31FDDC: lwz     r3, 628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(628);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31FDE0:
    ctx->pc = 0x7F31FDE0u;
    // 7F31FDE0: bl      0x7F2E4C28
    {
            ctx->lr = 0x7F31FDE4u;
            ctx->pc = 0x7F2E4C28u;
            return;
    }

label_7F31FDE4:
    ctx->pc = 0x7F31FDE4u;
    ctx->downcount -= 11;
    // 7F31FDE4: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F31FDE8:
    ctx->pc = 0x7F31FDE8u;
    // 7F31FDE8: lis     r3, 2
    ctx->gpr[3] = ((u32)(s32)(2) << 16);

label_7F31FDEC:
    ctx->pc = 0x7F31FDECu;
    // 7F31FDEC: lfs     f0, -29092(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F31FDECu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-29092);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31FDF0:
    ctx->pc = 0x7F31FDF0u;
    // 7F31FDF0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F31FDF4:
    ctx->pc = 0x7F31FDF4u;
    // 7F31FDF4: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F31FDF8:
    ctx->pc = 0x7F31FDF8u;
    // 7F31FDF8: addi    r0, r3, -4147
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-4147);

label_7F31FDFC:
    ctx->pc = 0x7F31FDFCu;
    // 7F31FDFC: stfs     f0, 764(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31FDFCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(764);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F31FE00:
    ctx->pc = 0x7F31FE00u;
    // 7F31FE00: stw     r5, 1168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1168);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F31FE04:
    ctx->pc = 0x7F31FE04u;
    // 7F31FE04: stw     r4, 640(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(640);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F31FE08:
    ctx->pc = 0x7F31FE08u;
    // 7F31FE08: stw     r0, 632(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(632);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31FE0C:
    ctx->pc = 0x7F31FE0Cu;
    // 7F31FE0C: b       0x7F320278
    {
            ctx->pc = 0x7F320278u;
            return;
    }

label_7F31FE10:
    ctx->pc = 0x7F31FE10u;
    ctx->downcount -= 2;
    // 7F31FE10: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31FE14:
    ctx->pc = 0x7F31FE14u;
    // 7F31FE14: bl      0x7F31E968
    {
            ctx->lr = 0x7F31FE18u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E968u;
                return;
            }
            goto label_7F31E968;
    }

label_7F31FE18:
    ctx->pc = 0x7F31FE18u;
    ctx->downcount -= 5;
    // 7F31FE18: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31FE1C:
    ctx->pc = 0x7F31FE1Cu;
    // 7F31FE1C: lfs     f2, 1152(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31FE1Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1152);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F31FE20:
    ctx->pc = 0x7F31FE20u;
    // 7F31FE20: lfs     f1, -29088(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31FE20u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29088);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31FE24:
    ctx->pc = 0x7F31FE24u;
    // 7F31FE24: fcmpo   cr0, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F31FE24u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[1], true);

label_7F31FE28:
    ctx->pc = 0x7F31FE28u;
    // 7F31FE28: bc    4, 0, 0x7F31FE54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31FE54;
        }
    }

label_7F31FE2C:
    ctx->pc = 0x7F31FE2Cu;
    ctx->downcount -= 7;
    // 7F31FE2C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31FE30:
    ctx->pc = 0x7F31FE30u;
    // 7F31FE30: lfs     f0, -28976(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31FE30u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-28976);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31FE34:
    ctx->pc = 0x7F31FE34u;
    // 7F31FE34: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31FE34u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F31FE38:
    ctx->pc = 0x7F31FE38u;
    // 7F31FE38: stfs     f0, 1152(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31FE38u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1152);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F31FE3C:
    ctx->pc = 0x7F31FE3Cu;
    // 7F31FE3C: lfs     f0, 1152(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31FE3Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1152);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31FE40:
    ctx->pc = 0x7F31FE40u;
    // 7F31FE40: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F31FE40u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F31FE44:
    ctx->pc = 0x7F31FE44u;
    // 7F31FE44: bc    4, 0, 0x7F31FE4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31FE4C;
        }
    }

label_7F31FE48:
    ctx->pc = 0x7F31FE48u;
    ctx->downcount -= 1;
    // 7F31FE48: b       0x7F31FE50
    {
            goto label_7F31FE50;
    }

label_7F31FE4C:
    ctx->pc = 0x7F31FE4Cu;
    ctx->downcount -= 1;
    // 7F31FE4C: fmr    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F31FE4Cu)) return;
    ctx->fpr[0] = ctx->fpr[1];

label_7F31FE50:
    ctx->pc = 0x7F31FE50u;
    ctx->downcount -= 1;
    // 7F31FE50: stfs     f0, 1152(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31FE50u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1152);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F31FE54:
    ctx->pc = 0x7F31FE54u;
    ctx->downcount -= 5;
    // 7F31FE54: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31FE58:
    ctx->pc = 0x7F31FE58u;
    // 7F31FE58: lfs     f2, 1156(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31FE58u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1156);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F31FE5C:
    ctx->pc = 0x7F31FE5Cu;
    // 7F31FE5C: lfs     f1, -29084(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31FE5Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29084);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31FE60:
    ctx->pc = 0x7F31FE60u;
    // 7F31FE60: fcmpo   cr0, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F31FE60u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[1], true);

label_7F31FE64:
    ctx->pc = 0x7F31FE64u;
    // 7F31FE64: bc    4, 0, 0x7F31FE90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31FE90;
        }
    }

label_7F31FE68:
    ctx->pc = 0x7F31FE68u;
    ctx->downcount -= 7;
    // 7F31FE68: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31FE6C:
    ctx->pc = 0x7F31FE6Cu;
    // 7F31FE6C: lfs     f0, -28972(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31FE6Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-28972);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31FE70:
    ctx->pc = 0x7F31FE70u;
    // 7F31FE70: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31FE70u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F31FE74:
    ctx->pc = 0x7F31FE74u;
    // 7F31FE74: stfs     f0, 1156(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31FE74u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1156);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F31FE78:
    ctx->pc = 0x7F31FE78u;
    // 7F31FE78: lfs     f0, 1156(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31FE78u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1156);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31FE7C:
    ctx->pc = 0x7F31FE7Cu;
    // 7F31FE7C: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F31FE7Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F31FE80:
    ctx->pc = 0x7F31FE80u;
    // 7F31FE80: bc    4, 0, 0x7F31FE88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31FE88;
        }
    }

label_7F31FE84:
    ctx->pc = 0x7F31FE84u;
    ctx->downcount -= 1;
    // 7F31FE84: b       0x7F31FE8C
    {
            goto label_7F31FE8C;
    }

label_7F31FE88:
    ctx->pc = 0x7F31FE88u;
    ctx->downcount -= 1;
    // 7F31FE88: fmr    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F31FE88u)) return;
    ctx->fpr[0] = ctx->fpr[1];

label_7F31FE8C:
    ctx->pc = 0x7F31FE8Cu;
    ctx->downcount -= 1;
    // 7F31FE8C: stfs     f0, 1156(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31FE8Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1156);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F31FE90:
    ctx->pc = 0x7F31FE90u;
    ctx->downcount -= 5;
    // 7F31FE90: lfs     f1, 1156(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31FE90u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1156);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31FE94:
    ctx->pc = 0x7F31FE94u;
    // 7F31FE94: lfs     f0, 1152(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31FE94u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1152);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31FE98:
    ctx->pc = 0x7F31FE98u;
    // 7F31FE98: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31FE98u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F31FE9C:
    ctx->pc = 0x7F31FE9Cu;
    // 7F31FE9C: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F31FEA0:
    ctx->pc = 0x7F31FEA0u;
    // 7F31FEA0: bc    4, 2, 0x7F31FEB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31FEB8;
        }
    }

label_7F31FEA4:
    ctx->pc = 0x7F31FEA4u;
    ctx->downcount -= 5;
    // 7F31FEA4: lwz     r3, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31FEA8:
    ctx->pc = 0x7F31FEA8u;
    // 7F31FEA8: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31FEAC:
    ctx->pc = 0x7F31FEACu;
    // 7F31FEAC: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F31FEB0:
    ctx->pc = 0x7F31FEB0u;
    // 7F31FEB0: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31FEB4:
    ctx->pc = 0x7F31FEB4u;
    // 7F31FEB4: b       0x7F31FED4
    {
            goto label_7F31FED4;
    }

label_7F31FEB8:
    ctx->pc = 0x7F31FEB8u;
    ctx->downcount -= 7;
    // 7F31FEB8: lwz     r3, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31FEBC:
    ctx->pc = 0x7F31FEBCu;
    // 7F31FEBC: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31FEC0:
    ctx->pc = 0x7F31FEC0u;
    // 7F31FEC0: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F31FEC4:
    ctx->pc = 0x7F31FEC4u;
    // 7F31FEC4: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31FEC8:
    ctx->pc = 0x7F31FEC8u;
    // 7F31FEC8: lfs     f1, 1152(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31FEC8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1152);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31FECC:
    ctx->pc = 0x7F31FECCu;
    // 7F31FECC: lfs     f2, 1156(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31FECCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1156);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F31FED0:
    ctx->pc = 0x7F31FED0u;
    // 7F31FED0: bl      0x7F3BEF3C
    {
            ctx->lr = 0x7F31FED4u;
            ctx->pc = 0x7F3BEF3Cu;
            return;
    }

label_7F31FED4:
    ctx->pc = 0x7F31FED4u;
    ctx->downcount -= 5;
    // 7F31FED4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31FED8:
    ctx->pc = 0x7F31FED8u;
    // 7F31FED8: lfs     f0, 1152(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31FED8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1152);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31FEDC:
    ctx->pc = 0x7F31FEDCu;
    // 7F31FEDC: lfs     f1, -29088(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31FEDCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29088);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31FEE0:
    ctx->pc = 0x7F31FEE0u;
    // 7F31FEE0: fcmpu   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31FEE0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], false);

label_7F31FEE4:
    ctx->pc = 0x7F31FEE4u;
    // 7F31FEE4: bc    4, 2, 0x7F320278
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F320278u;
            return;
        }
    }

label_7F31FEE8:
    ctx->pc = 0x7F31FEE8u;
    ctx->downcount -= 5;
    // 7F31FEE8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31FEEC:
    ctx->pc = 0x7F31FEECu;
    // 7F31FEEC: lfs     f0, 1156(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F31FEECu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1156);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F31FEF0:
    ctx->pc = 0x7F31FEF0u;
    // 7F31FEF0: lfs     f1, -29084(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F31FEF0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29084);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F31FEF4:
    ctx->pc = 0x7F31FEF4u;
    // 7F31FEF4: fcmpu   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F31FEF4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], false);

label_7F31FEF8:
    ctx->pc = 0x7F31FEF8u;
    // 7F31FEF8: bc    4, 2, 0x7F320278
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F320278u;
            return;
        }
    }

label_7F31FEFC:
    ctx->pc = 0x7F31FEFCu;
    ctx->downcount -= 3;
    // 7F31FEFC: lwz     r0, 636(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31FF00:
    ctx->pc = 0x7F31FF00u;
    // 7F31FF00: cmpwi   r0, 0
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

label_7F31FF04:
    ctx->pc = 0x7F31FF04u;
    // 7F31FF04: bc    4, 2, 0x7F320278
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F320278u;
            return;
        }
    }

label_7F31FF08:
    ctx->pc = 0x7F31FF08u;
    ctx->downcount -= 8;
    // 7F31FF08: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31FF0C:
    ctx->pc = 0x7F31FF0Cu;
    // 7F31FF0C: lis     r3, 2
    ctx->gpr[3] = ((u32)(s32)(2) << 16);

label_7F31FF10:
    ctx->pc = 0x7F31FF10u;
    // 7F31FF10: stw     r0, 1168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31FF14:
    ctx->pc = 0x7F31FF14u;
    // 7F31FF14: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F31FF18:
    ctx->pc = 0x7F31FF18u;
    // 7F31FF18: addi    r0, r3, -4147
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-4147);

label_7F31FF1C:
    ctx->pc = 0x7F31FF1Cu;
    // 7F31FF1C: stw     r4, 640(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(640);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F31FF20:
    ctx->pc = 0x7F31FF20u;
    // 7F31FF20: stw     r0, 632(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(632);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31FF24:
    ctx->pc = 0x7F31FF24u;
    // 7F31FF24: b       0x7F320278
    {
            ctx->pc = 0x7F320278u;
            return;
    }

label_7F31FF28:
    ctx->pc = 0x7F31FF28u;
    ctx->downcount -= 2;
    // 7F31FF28: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31FF2C:
    ctx->pc = 0x7F31FF2Cu;
    // 7F31FF2C: bl      0x7F31E968
    {
            ctx->lr = 0x7F31FF30u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E968u;
                return;
            }
            goto label_7F31E968;
    }

label_7F31FF30:
    ctx->pc = 0x7F31FF30u;
    ctx->downcount -= 3;
    // 7F31FF30: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31FF34:
    ctx->pc = 0x7F31FF34u;
    // 7F31FF34: li      r4, 60
    ctx->gpr[4] = (u32)(s32)(60);

label_7F31FF38:
    ctx->pc = 0x7F31FF38u;
    // 7F31FF38: bl      0x7F31F6EC
    {
            ctx->lr = 0x7F31FF3Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31F6ECu;
                return;
            }
            goto label_7F31F6EC;
    }

label_7F31FF3C:
    ctx->pc = 0x7F31FF3Cu;
    ctx->downcount -= 6;
    // 7F31FF3C: lis     r3, 2
    ctx->gpr[3] = ((u32)(s32)(2) << 16);

label_7F31FF40:
    ctx->pc = 0x7F31FF40u;
    // 7F31FF40: addi    r0, r3, -4147
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-4147);

label_7F31FF44:
    ctx->pc = 0x7F31FF44u;
    // 7F31FF44: stw     r0, 632(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(632);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31FF48:
    ctx->pc = 0x7F31FF48u;
    // 7F31FF48: lwz     r3, 1172(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31FF4C:
    ctx->pc = 0x7F31FF4Cu;
    // 7F31FF4C: cmpwi   r3, 0
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

label_7F31FF50:
    ctx->pc = 0x7F31FF50u;
    // 7F31FF50: bc    12, 2, 0x7F31FF5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31FF5C;
        }
    }

label_7F31FF54:
    ctx->pc = 0x7F31FF54u;
    ctx->downcount -= 2;
    // 7F31FF54: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F31FF58:
    ctx->pc = 0x7F31FF58u;
    // 7F31FF58: stw     r0, 1172(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1172);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31FF5C:
    ctx->pc = 0x7F31FF5Cu;
    ctx->downcount -= 3;
    // 7F31FF5C: lwz     r0, 1172(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1172);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31FF60:
    ctx->pc = 0x7F31FF60u;
    // 7F31FF60: cmpwi   r0, 0
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

label_7F31FF64:
    ctx->pc = 0x7F31FF64u;
    // 7F31FF64: bc    4, 2, 0x7F31FFE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31FFE0;
        }
    }

label_7F31FF68:
    ctx->pc = 0x7F31FF68u;
    ctx->downcount -= 5;
    // 7F31FF68: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F31FF6C:
    ctx->pc = 0x7F31FF6Cu;
    // 7F31FF6C: addi    r3, r3, 14256
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14256);

label_7F31FF70:
    ctx->pc = 0x7F31FF70u;
    // 7F31FF70: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31FF74:
    ctx->pc = 0x7F31FF74u;
    // 7F31FF74: rlwinm. r0, r0, 0, 11, 11
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00100000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F31FF78:
    ctx->pc = 0x7F31FF78u;
    // 7F31FF78: bc    12, 2, 0x7F31FFE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31FFE0;
        }
    }

label_7F31FF7C:
    ctx->pc = 0x7F31FF7Cu;
    ctx->downcount -= 11;
    // 7F31FF7C: li      r0, 51
    ctx->gpr[0] = (u32)(s32)(51);

label_7F31FF80:
    ctx->pc = 0x7F31FF80u;
    // 7F31FF80: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F31FF84:
    ctx->pc = 0x7F31FF84u;
    // 7F31FF84: stb     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F31FF88:
    ctx->pc = 0x7F31FF88u;
    // 7F31FF88: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F31FF8C:
    ctx->pc = 0x7F31FF8Cu;
    // 7F31FF8C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F31FF90:
    ctx->pc = 0x7F31FF90u;
    // 7F31FF90: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F31FF94:
    ctx->pc = 0x7F31FF94u;
    // 7F31FF94: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_7F31FF98:
    ctx->pc = 0x7F31FF98u;
    // 7F31FF98: li      r8, 60
    ctx->gpr[8] = (u32)(s32)(60);

label_7F31FF9C:
    ctx->pc = 0x7F31FF9Cu;
    // 7F31FF9C: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F31FFA0:
    ctx->pc = 0x7F31FFA0u;
    // 7F31FFA0: li      r10, 7
    ctx->gpr[10] = (u32)(s32)(7);

label_7F31FFA4:
    ctx->pc = 0x7F31FFA4u;
    // 7F31FFA4: bl      0x80051548
    {
            ctx->lr = 0x7F31FFA8u;
            ctx->pc = 0x80051548u;
            return;
    }

label_7F31FFA8:
    ctx->pc = 0x7F31FFA8u;
    ctx->downcount -= 4;
    // 7F31FFA8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31FFAC:
    ctx->pc = 0x7F31FFACu;
    // 7F31FFAC: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F31FFB0:
    ctx->pc = 0x7F31FFB0u;
    // 7F31FFB0: li      r5, 2213
    ctx->gpr[5] = (u32)(s32)(2213);

label_7F31FFB4:
    ctx->pc = 0x7F31FFB4u;
    // 7F31FFB4: bl      0x7F011698
    {
            ctx->lr = 0x7F31FFB8u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F31FFB8:
    ctx->pc = 0x7F31FFB8u;
    ctx->downcount -= 9;
    // 7F31FFB8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31FFBC:
    ctx->pc = 0x7F31FFBCu;
    // 7F31FFBC: lis     r3, 176
    ctx->gpr[3] = ((u32)(s32)(176) << 16);

label_7F31FFC0:
    ctx->pc = 0x7F31FFC0u;
    // 7F31FFC0: stw     r0, 1164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31FFC4:
    ctx->pc = 0x7F31FFC4u;
    // 7F31FFC4: addi    r3, r3, 5318
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(5318);

label_7F31FFC8:
    ctx->pc = 0x7F31FFC8u;
    // 7F31FFC8: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F31FFCC:
    ctx->pc = 0x7F31FFCCu;
    // 7F31FFCC: stw     r3, 632(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(632);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31FFD0:
    ctx->pc = 0x7F31FFD0u;
    // 7F31FFD0: stw     r0, 640(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(640);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31FFD4:
    ctx->pc = 0x7F31FFD4u;
    // 7F31FFD4: lwz     r3, 628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(628);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31FFD8:
    ctx->pc = 0x7F31FFD8u;
    // 7F31FFD8: bl      0x7F2E4C28
    {
            ctx->lr = 0x7F31FFDCu;
            ctx->pc = 0x7F2E4C28u;
            return;
    }

label_7F31FFDC:
    ctx->pc = 0x7F31FFDCu;
    ctx->downcount -= 1;
    // 7F31FFDC: b       0x7F320278
    {
            ctx->pc = 0x7F320278u;
            return;
    }

label_7F31FFE0:
    ctx->pc = 0x7F31FFE0u;
    ctx->downcount -= 3;
    // 7F31FFE0: lwz     r0, 660(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(660);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31FFE4:
    ctx->pc = 0x7F31FFE4u;
    // 7F31FFE4: cmpwi   r0, 0
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

label_7F31FFE8:
    ctx->pc = 0x7F31FFE8u;
    // 7F31FFE8: bc    12, 2, 0x7F320018
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F320018;
        }
    }

label_7F31FFEC:
    ctx->pc = 0x7F31FFECu;
    ctx->downcount -= 3;
    // 7F31FFEC: lwz     r0, 1168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1168);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31FFF0:
    ctx->pc = 0x7F31FFF0u;
    // 7F31FFF0: cmpwi   r0, 3600
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(3600);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31FFF4:
    ctx->pc = 0x7F31FFF4u;
    // 7F31FFF4: bc    12, 0, 0x7F32000C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F32000C;
        }
    }

label_7F31FFF8:
    ctx->pc = 0x7F31FFF8u;
    ctx->downcount -= 2;
    // 7F31FFF8: li      r3, 180
    ctx->gpr[3] = (u32)(s32)(180);

label_7F31FFFC:
    ctx->pc = 0x7F31FFFCu;
    // 7F31FFFC: bl      0x7F31DDE8
    {
            ctx->lr = 0x7F320000u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31DDE8u;
                return;
            }
            goto label_7F31DDE8;
    }

label_7F320000:
    ctx->pc = 0x7F320000u;
    ctx->downcount -= 3;
    // 7F320000: lwz     r3, 660(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(660);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F320004:
    ctx->pc = 0x7F320004u;
    // 7F320004: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F320008:
    ctx->pc = 0x7F320008u;
    // 7F320008: bl      0x7F3C7728
    {
            ctx->lr = 0x7F32000Cu;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F32000C:
    ctx->pc = 0x7F32000Cu;
    ctx->downcount -= 3;
    // 7F32000C: lwz     r3, 1168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F320010:
    ctx->pc = 0x7F320010u;
    // 7F320010: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F320014:
    ctx->pc = 0x7F320014u;
    // 7F320014: stw     r0, 1168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F320018:
    ctx->pc = 0x7F320018u;
    ctx->downcount -= 2;
    // 7F320018: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F32001C:
    ctx->pc = 0x7F32001Cu;
    // 7F32001C: bl      0x7F31F888
    {
            ctx->lr = 0x7F320020u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31F888u;
                return;
            }
            goto label_7F31F888;
    }

label_7F320020:
    ctx->pc = 0x7F320020u;
    ctx->downcount -= 1;
    // 7F320020: b       0x7F320278
    {
            ctx->pc = 0x7F320278u;
            return;
    }

label_7F320024:
    ctx->pc = 0x7F320024u;
    ctx->downcount -= 2;
    // 7F320024: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F320028:
    ctx->pc = 0x7F320028u;
    // 7F320028: bl      0x7F31E968
    {
            ctx->lr = 0x7F32002Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E968u;
                return;
            }
            goto label_7F31E968;
    }

label_7F32002C:
    ctx->pc = 0x7F32002Cu;
    ctx->downcount -= 3;
    // 7F32002C: lwz     r0, 636(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F320030:
    ctx->pc = 0x7F320030u;
    // 7F320030: cmpwi   r0, 0
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

label_7F320034:
    ctx->pc = 0x7F320034u;
    // 7F320034: bc    4, 2, 0x7F320278
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F320278u;
            return;
        }
    }

label_7F320038:
    ctx->pc = 0x7F320038u;
    ctx->downcount -= 3;
    // 7F320038: lwz     r3, 1164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F32003C:
    ctx->pc = 0x7F32003Cu;
    // 7F32003C: cmpwi   r3, 60
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

label_7F320040:
    ctx->pc = 0x7F320040u;
    // 7F320040: bc    12, 0, 0x7F320084
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F320084;
        }
    }

label_7F320044:
    ctx->pc = 0x7F320044u;
    ctx->downcount -= 11;
    // 7F320044: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F320048:
    ctx->pc = 0x7F320048u;
    // 7F320048: addi    r0, r1, 12
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(12);

label_7F32004C:
    ctx->pc = 0x7F32004Cu;
    // 7F32004C: addi    r4, r3, -28980
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-28980);

label_7F320050:
    ctx->pc = 0x7F320050u;
    // 7F320050: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F320054:
    ctx->pc = 0x7F320054u;
    // 7F320054: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F320058:
    ctx->pc = 0x7F320058u;
    // 7F320058: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F32005C:
    ctx->pc = 0x7F32005Cu;
    // 7F32005C: sth     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F320060:
    ctx->pc = 0x7F320060u;
    // 7F320060: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F320064:
    ctx->pc = 0x7F320064u;
    // 7F320064: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F320068:
    ctx->pc = 0x7F320068u;
    // 7F320068: lwz     r3, 648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(648);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F32006C:
    ctx->pc = 0x7F32006Cu;
    // 7F32006C: bl      0x7F3C7728
    {
            ctx->lr = 0x7F320070u;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F320070:
    ctx->pc = 0x7F320070u;
    ctx->downcount -= 5;
    // 7F320070: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F320074:
    ctx->pc = 0x7F320074u;
    // 7F320074: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F320078:
    ctx->pc = 0x7F320078u;
    // 7F320078: stw     r3, 1164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1164);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F32007C:
    ctx->pc = 0x7F32007Cu;
    // 7F32007C: stw     r0, 640(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(640);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F320080:
    ctx->pc = 0x7F320080u;
    // 7F320080: b       0x7F320278
    {
            ctx->pc = 0x7F320278u;
            return;
    }

label_7F320084:
    ctx->pc = 0x7F320084u;
    ctx->downcount -= 3;
    // 7F320084: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F320088:
    ctx->pc = 0x7F320088u;
    // 7F320088: stw     r0, 1164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F32008C:
    ctx->pc = 0x7F32008Cu;
    // 7F32008C: b       0x7F320278
    {
            ctx->pc = 0x7F320278u;
            return;
    }

label_7F320090:
    ctx->pc = 0x7F320090u;
    ctx->downcount -= 2;
    // 7F320090: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F320094:
    ctx->pc = 0x7F320094u;
    // 7F320094: bl      0x7F31E968
    {
            ctx->lr = 0x7F320098u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E968u;
                return;
            }
            goto label_7F31E968;
    }

label_7F320098:
    ctx->pc = 0x7F320098u;
    ctx->downcount -= 2;
    // 7F320098: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F32009C:
    ctx->pc = 0x7F32009Cu;
    // 7F32009C: bl      0x7F31F888
    {
            ctx->lr = 0x7F3200A0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31F888u;
                return;
            }
            goto label_7F31F888;
    }

label_7F3200A0:
    ctx->pc = 0x7F3200A0u;
    ctx->downcount -= 1;
    // 7F3200A0: b       0x7F320278
    {
            ctx->pc = 0x7F320278u;
            return;
    }

label_7F3200A4:
    ctx->pc = 0x7F3200A4u;
    ctx->downcount -= 2;
    // 7F3200A4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3200A8:
    ctx->pc = 0x7F3200A8u;
    // 7F3200A8: bl      0x7F31E968
    {
            ctx->lr = 0x7F3200ACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E968u;
                return;
            }
            goto label_7F31E968;
    }

label_7F3200AC:
    ctx->pc = 0x7F3200ACu;
    ctx->downcount -= 3;
    // 7F3200AC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3200B0:
    ctx->pc = 0x7F3200B0u;
    // 7F3200B0: li      r4, -20
    ctx->gpr[4] = (u32)(s32)(-20);

label_7F3200B4:
    ctx->pc = 0x7F3200B4u;
    // 7F3200B4: bl      0x7F31F6EC
    {
            ctx->lr = 0x7F3200B8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31F6ECu;
                return;
            }
            goto label_7F31F6EC;
    }

label_7F3200B8:
    ctx->pc = 0x7F3200B8u;
    ctx->downcount -= 5;
    // 7F3200B8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3200BC:
    ctx->pc = 0x7F3200BCu;
    // 7F3200BC: lfs     f0, 764(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3200BCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(764);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3200C0:
    ctx->pc = 0x7F3200C0u;
    // 7F3200C0: lfs     f1, -29168(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3200C0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-29168);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3200C4:
    ctx->pc = 0x7F3200C4u;
    // 7F3200C4: fcmpu   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3200C4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], false);

label_7F3200C8:
    ctx->pc = 0x7F3200C8u;
    // 7F3200C8: bc    4, 2, 0x7F320278
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F320278u;
            return;
        }
    }

label_7F3200CC:
    ctx->pc = 0x7F3200CCu;
    ctx->downcount -= 3;
    // 7F3200CC: li      r0, 7
    ctx->gpr[0] = (u32)(s32)(7);

label_7F3200D0:
    ctx->pc = 0x7F3200D0u;
    // 7F3200D0: stw     r0, 640(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(640);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3200D4:
    ctx->pc = 0x7F3200D4u;
    // 7F3200D4: b       0x7F320278
    {
            ctx->pc = 0x7F320278u;
            return;
    }

label_7F3200D8:
    ctx->pc = 0x7F3200D8u;
    ctx->downcount -= 2;
    // 7F3200D8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3200DC:
    ctx->pc = 0x7F3200DCu;
    // 7F3200DC: bl      0x7F31F888
    {
            ctx->lr = 0x7F3200E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31F888u;
                return;
            }
            goto label_7F31F888;
    }

label_7F3200E0:
    ctx->pc = 0x7F3200E0u;
    ctx->downcount -= 1;
    // 7F3200E0: b       0x7F320278
    {
            ctx->pc = 0x7F320278u;
            return;
    }

label_7F3200E4:
    ctx->pc = 0x7F3200E4u;
    ctx->downcount -= 2;
    // 7F3200E4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3200E8:
    ctx->pc = 0x7F3200E8u;
    // 7F3200E8: bl      0x7F31E968
    {
            ctx->lr = 0x7F3200ECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31E968u;
                return;
            }
            goto label_7F31E968;
    }

    ctx->pc = 0x7F3200ECu;
    return;
return_dispatch_7F31C0EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F31C0FCu: goto label_7F31C0FC;
    case 0x7F31C110u: goto label_7F31C110;
    case 0x7F31C180u: goto label_7F31C180;
    case 0x7F31C1E8u: goto label_7F31C1E8;
    case 0x7F31C248u: goto label_7F31C248;
    case 0x7F31C2CCu: goto label_7F31C2CC;
    case 0x7F31C2E4u: goto label_7F31C2E4;
    case 0x7F31C2F4u: goto label_7F31C2F4;
    case 0x7F31C334u: goto label_7F31C334;
    case 0x7F31C378u: goto label_7F31C378;
    case 0x7F31C380u: goto label_7F31C380;
    case 0x7F31C3A4u: goto label_7F31C3A4;
    case 0x7F31C3E0u: goto label_7F31C3E0;
    case 0x7F31C3FCu: goto label_7F31C3FC;
    case 0x7F31C43Cu: goto label_7F31C43C;
    case 0x7F31C494u: goto label_7F31C494;
    case 0x7F31C4A0u: goto label_7F31C4A0;
    case 0x7F31C4FCu: goto label_7F31C4FC;
    case 0x7F31C560u: goto label_7F31C560;
    case 0x7F31C5C0u: goto label_7F31C5C0;
    case 0x7F31C5D0u: goto label_7F31C5D0;
    case 0x7F31C5F4u: goto label_7F31C5F4;
    case 0x7F31C674u: goto label_7F31C674;
    case 0x7F31C744u: goto label_7F31C744;
    case 0x7F31C7A0u: goto label_7F31C7A0;
    case 0x7F31C7D8u: goto label_7F31C7D8;
    case 0x7F31C800u: goto label_7F31C800;
    case 0x7F31C844u: goto label_7F31C844;
    case 0x7F31C884u: goto label_7F31C884;
    case 0x7F31C8B8u: goto label_7F31C8B8;
    case 0x7F31C8F0u: goto label_7F31C8F0;
    case 0x7F31C904u: goto label_7F31C904;
    case 0x7F31C92Cu: goto label_7F31C92C;
    case 0x7F31C948u: goto label_7F31C948;
    case 0x7F31C950u: goto label_7F31C950;
    case 0x7F31C988u: goto label_7F31C988;
    case 0x7F31C9ACu: goto label_7F31C9AC;
    case 0x7F31C9DCu: goto label_7F31C9DC;
    case 0x7F31C9F0u: goto label_7F31C9F0;
    case 0x7F31C9F8u: goto label_7F31C9F8;
    case 0x7F31CA28u: goto label_7F31CA28;
    case 0x7F31CA38u: goto label_7F31CA38;
    case 0x7F31CA50u: goto label_7F31CA50;
    case 0x7F31CA88u: goto label_7F31CA88;
    case 0x7F31CB4Cu: goto label_7F31CB4C;
    case 0x7F31CB60u: goto label_7F31CB60;
    case 0x7F31CB70u: goto label_7F31CB70;
    case 0x7F31CB84u: goto label_7F31CB84;
    case 0x7F31CBB4u: goto label_7F31CBB4;
    case 0x7F31CBBCu: goto label_7F31CBBC;
    case 0x7F31CBC8u: goto label_7F31CBC8;
    case 0x7F31CBD8u: goto label_7F31CBD8;
    case 0x7F31CBE4u: goto label_7F31CBE4;
    case 0x7F31CBF0u: goto label_7F31CBF0;
    case 0x7F31CBF8u: goto label_7F31CBF8;
    case 0x7F31CC14u: goto label_7F31CC14;
    case 0x7F31CC20u: goto label_7F31CC20;
    case 0x7F31CC28u: goto label_7F31CC28;
    case 0x7F31CC38u: goto label_7F31CC38;
    case 0x7F31CC54u: goto label_7F31CC54;
    case 0x7F31CC6Cu: goto label_7F31CC6C;
    case 0x7F31CC84u: goto label_7F31CC84;
    case 0x7F31CC8Cu: goto label_7F31CC8C;
    case 0x7F31CCB4u: goto label_7F31CCB4;
    case 0x7F31CCCCu: goto label_7F31CCCC;
    case 0x7F31CCDCu: goto label_7F31CCDC;
    case 0x7F31CD88u: goto label_7F31CD88;
    case 0x7F31CDA8u: goto label_7F31CDA8;
    case 0x7F31CDDCu: goto label_7F31CDDC;
    case 0x7F31CDE4u: goto label_7F31CDE4;
    case 0x7F31CDF8u: goto label_7F31CDF8;
    case 0x7F31CE0Cu: goto label_7F31CE0C;
    case 0x7F31CE24u: goto label_7F31CE24;
    case 0x7F31D054u: goto label_7F31D054;
    case 0x7F31D10Cu: goto label_7F31D10C;
    case 0x7F31D144u: goto label_7F31D144;
    case 0x7F31D17Cu: goto label_7F31D17C;
    case 0x7F31D1B4u: goto label_7F31D1B4;
    case 0x7F31D1E4u: goto label_7F31D1E4;
    case 0x7F31D250u: goto label_7F31D250;
    case 0x7F31D2ACu: goto label_7F31D2AC;
    case 0x7F31D304u: goto label_7F31D304;
    case 0x7F31D314u: goto label_7F31D314;
    case 0x7F31D358u: goto label_7F31D358;
    case 0x7F31D3CCu: goto label_7F31D3CC;
    case 0x7F31D410u: goto label_7F31D410;
    case 0x7F31D448u: goto label_7F31D448;
    case 0x7F31D46Cu: goto label_7F31D46C;
    case 0x7F31D49Cu: goto label_7F31D49C;
    case 0x7F31D4D4u: goto label_7F31D4D4;
    case 0x7F31D500u: goto label_7F31D500;
    case 0x7F31D570u: goto label_7F31D570;
    case 0x7F31D6F8u: goto label_7F31D6F8;
    case 0x7F31D764u: goto label_7F31D764;
    case 0x7F31D814u: goto label_7F31D814;
    case 0x7F31D868u: goto label_7F31D868;
    case 0x7F31D8B8u: goto label_7F31D8B8;
    case 0x7F31D8E4u: goto label_7F31D8E4;
    case 0x7F31D900u: goto label_7F31D900;
    case 0x7F31D910u: goto label_7F31D910;
    case 0x7F31D944u: goto label_7F31D944;
    case 0x7F31D950u: goto label_7F31D950;
    case 0x7F31D980u: goto label_7F31D980;
    case 0x7F31D9ACu: goto label_7F31D9AC;
    case 0x7F31D9BCu: goto label_7F31D9BC;
    case 0x7F31D9D4u: goto label_7F31D9D4;
    case 0x7F31D9E0u: goto label_7F31D9E0;
    case 0x7F31D9E8u: goto label_7F31D9E8;
    case 0x7F31DA18u: goto label_7F31DA18;
    case 0x7F31DA20u: goto label_7F31DA20;
    case 0x7F31DA28u: goto label_7F31DA28;
    case 0x7F31DA4Cu: goto label_7F31DA4C;
    case 0x7F31DA80u: goto label_7F31DA80;
    case 0x7F31DA94u: goto label_7F31DA94;
    case 0x7F31DAACu: goto label_7F31DAAC;
    case 0x7F31DAECu: goto label_7F31DAEC;
    case 0x7F31DAFCu: goto label_7F31DAFC;
    case 0x7F31DB08u: goto label_7F31DB08;
    case 0x7F31DB1Cu: goto label_7F31DB1C;
    case 0x7F31DB7Cu: goto label_7F31DB7C;
    case 0x7F31DB88u: goto label_7F31DB88;
    case 0x7F31DB94u: goto label_7F31DB94;
    case 0x7F31DBB4u: goto label_7F31DBB4;
    case 0x7F31DBC0u: goto label_7F31DBC0;
    case 0x7F31DBD0u: goto label_7F31DBD0;
    case 0x7F31DBF4u: goto label_7F31DBF4;
    case 0x7F31DBFCu: goto label_7F31DBFC;
    case 0x7F31DC04u: goto label_7F31DC04;
    case 0x7F31DC14u: goto label_7F31DC14;
    case 0x7F31DC48u: goto label_7F31DC48;
    case 0x7F31DC68u: goto label_7F31DC68;
    case 0x7F31DCACu: goto label_7F31DCAC;
    case 0x7F31DCC8u: goto label_7F31DCC8;
    case 0x7F31DCFCu: goto label_7F31DCFC;
    case 0x7F31DD08u: goto label_7F31DD08;
    case 0x7F31DD18u: goto label_7F31DD18;
    case 0x7F31DD28u: goto label_7F31DD28;
    case 0x7F31DD80u: goto label_7F31DD80;
    case 0x7F31DD98u: goto label_7F31DD98;
    case 0x7F31DDD4u: goto label_7F31DDD4;
    case 0x7F31DE20u: goto label_7F31DE20;
    case 0x7F31DEE0u: goto label_7F31DEE0;
    case 0x7F31DEECu: goto label_7F31DEEC;
    case 0x7F31DF24u: goto label_7F31DF24;
    case 0x7F31DF38u: goto label_7F31DF38;
    case 0x7F31DFB8u: goto label_7F31DFB8;
    case 0x7F31DFC4u: goto label_7F31DFC4;
    case 0x7F31E068u: goto label_7F31E068;
    case 0x7F31E0DCu: goto label_7F31E0DC;
    case 0x7F31E0F0u: goto label_7F31E0F0;
    case 0x7F31E0F4u: goto label_7F31E0F4;
    case 0x7F31E108u: goto label_7F31E108;
    case 0x7F31E118u: goto label_7F31E118;
    case 0x7F31E124u: goto label_7F31E124;
    case 0x7F31E12Cu: goto label_7F31E12C;
    case 0x7F31E138u: goto label_7F31E138;
    case 0x7F31E144u: goto label_7F31E144;
    case 0x7F31E14Cu: goto label_7F31E14C;
    case 0x7F31E158u: goto label_7F31E158;
    case 0x7F31E164u: goto label_7F31E164;
    case 0x7F31E16Cu: goto label_7F31E16C;
    case 0x7F31E178u: goto label_7F31E178;
    case 0x7F31E184u: goto label_7F31E184;
    case 0x7F31E18Cu: goto label_7F31E18C;
    case 0x7F31E198u: goto label_7F31E198;
    case 0x7F31E19Cu: goto label_7F31E19C;
    case 0x7F31E1B0u: goto label_7F31E1B0;
    case 0x7F31E1C0u: goto label_7F31E1C0;
    case 0x7F31E1D0u: goto label_7F31E1D0;
    case 0x7F31E1D8u: goto label_7F31E1D8;
    case 0x7F31E1E4u: goto label_7F31E1E4;
    case 0x7F31E1F4u: goto label_7F31E1F4;
    case 0x7F31E1FCu: goto label_7F31E1FC;
    case 0x7F31E208u: goto label_7F31E208;
    case 0x7F31E214u: goto label_7F31E214;
    case 0x7F31E21Cu: goto label_7F31E21C;
    case 0x7F31E228u: goto label_7F31E228;
    case 0x7F31E234u: goto label_7F31E234;
    case 0x7F31E23Cu: goto label_7F31E23C;
    case 0x7F31E248u: goto label_7F31E248;
    case 0x7F31E254u: goto label_7F31E254;
    case 0x7F31E25Cu: goto label_7F31E25C;
    case 0x7F31E268u: goto label_7F31E268;
    case 0x7F31E274u: goto label_7F31E274;
    case 0x7F31E27Cu: goto label_7F31E27C;
    case 0x7F31E288u: goto label_7F31E288;
    case 0x7F31E294u: goto label_7F31E294;
    case 0x7F31E29Cu: goto label_7F31E29C;
    case 0x7F31E2A8u: goto label_7F31E2A8;
    case 0x7F31E2B4u: goto label_7F31E2B4;
    case 0x7F31E2BCu: goto label_7F31E2BC;
    case 0x7F31E2C8u: goto label_7F31E2C8;
    case 0x7F31E2D4u: goto label_7F31E2D4;
    case 0x7F31E2DCu: goto label_7F31E2DC;
    case 0x7F31E2E8u: goto label_7F31E2E8;
    case 0x7F31E2F4u: goto label_7F31E2F4;
    case 0x7F31E2FCu: goto label_7F31E2FC;
    case 0x7F31E308u: goto label_7F31E308;
    case 0x7F31E318u: goto label_7F31E318;
    case 0x7F31E320u: goto label_7F31E320;
    case 0x7F31E32Cu: goto label_7F31E32C;
    case 0x7F31E33Cu: goto label_7F31E33C;
    case 0x7F31E344u: goto label_7F31E344;
    case 0x7F31E350u: goto label_7F31E350;
    case 0x7F31E354u: goto label_7F31E354;
    case 0x7F31E368u: goto label_7F31E368;
    case 0x7F31E378u: goto label_7F31E378;
    case 0x7F31E384u: goto label_7F31E384;
    case 0x7F31E38Cu: goto label_7F31E38C;
    case 0x7F31E398u: goto label_7F31E398;
    case 0x7F31E3A4u: goto label_7F31E3A4;
    case 0x7F31E3ACu: goto label_7F31E3AC;
    case 0x7F31E3B8u: goto label_7F31E3B8;
    case 0x7F31E3C4u: goto label_7F31E3C4;
    case 0x7F31E3CCu: goto label_7F31E3CC;
    case 0x7F31E3D8u: goto label_7F31E3D8;
    case 0x7F31E3E4u: goto label_7F31E3E4;
    case 0x7F31E3ECu: goto label_7F31E3EC;
    case 0x7F31E3F8u: goto label_7F31E3F8;
    case 0x7F31E404u: goto label_7F31E404;
    case 0x7F31E40Cu: goto label_7F31E40C;
    case 0x7F31E418u: goto label_7F31E418;
    case 0x7F31E424u: goto label_7F31E424;
    case 0x7F31E42Cu: goto label_7F31E42C;
    case 0x7F31E438u: goto label_7F31E438;
    case 0x7F31E444u: goto label_7F31E444;
    case 0x7F31E44Cu: goto label_7F31E44C;
    case 0x7F31E458u: goto label_7F31E458;
    case 0x7F31E464u: goto label_7F31E464;
    case 0x7F31E46Cu: goto label_7F31E46C;
    case 0x7F31E478u: goto label_7F31E478;
    case 0x7F31E484u: goto label_7F31E484;
    case 0x7F31E48Cu: goto label_7F31E48C;
    case 0x7F31E498u: goto label_7F31E498;
    case 0x7F31E4A4u: goto label_7F31E4A4;
    case 0x7F31E4ACu: goto label_7F31E4AC;
    case 0x7F31E4B8u: goto label_7F31E4B8;
    case 0x7F31E4C4u: goto label_7F31E4C4;
    case 0x7F31E4CCu: goto label_7F31E4CC;
    case 0x7F31E4D8u: goto label_7F31E4D8;
    case 0x7F31E4E4u: goto label_7F31E4E4;
    case 0x7F31E4ECu: goto label_7F31E4EC;
    case 0x7F31E4F8u: goto label_7F31E4F8;
    case 0x7F31E4FCu: goto label_7F31E4FC;
    case 0x7F31E508u: goto label_7F31E508;
    case 0x7F31E6A4u: goto label_7F31E6A4;
    case 0x7F31E704u: goto label_7F31E704;
    case 0x7F31E724u: goto label_7F31E724;
    case 0x7F31E730u: goto label_7F31E730;
    case 0x7F31E768u: goto label_7F31E768;
    case 0x7F31E77Cu: goto label_7F31E77C;
    case 0x7F31E7ACu: goto label_7F31E7AC;
    case 0x7F31E988u: goto label_7F31E988;
    case 0x7F31E9ACu: goto label_7F31E9AC;
    case 0x7F31E9C0u: goto label_7F31E9C0;
    case 0x7F31E9D4u: goto label_7F31E9D4;
    case 0x7F31E9F0u: goto label_7F31E9F0;
    case 0x7F31EA08u: goto label_7F31EA08;
    case 0x7F31EA1Cu: goto label_7F31EA1C;
    case 0x7F31EA30u: goto label_7F31EA30;
    case 0x7F31EA44u: goto label_7F31EA44;
    case 0x7F31EA5Cu: goto label_7F31EA5C;
    case 0x7F31EA64u: goto label_7F31EA64;
    case 0x7F31EA68u: goto label_7F31EA68;
    case 0x7F31EA7Cu: goto label_7F31EA7C;
    case 0x7F31EA8Cu: goto label_7F31EA8C;
    case 0x7F31EA98u: goto label_7F31EA98;
    case 0x7F31EAA0u: goto label_7F31EAA0;
    case 0x7F31EAACu: goto label_7F31EAAC;
    case 0x7F31EAB8u: goto label_7F31EAB8;
    case 0x7F31EAC0u: goto label_7F31EAC0;
    case 0x7F31EACCu: goto label_7F31EACC;
    case 0x7F31EAD8u: goto label_7F31EAD8;
    case 0x7F31EAE0u: goto label_7F31EAE0;
    case 0x7F31EAECu: goto label_7F31EAEC;
    case 0x7F31EAF8u: goto label_7F31EAF8;
    case 0x7F31EB00u: goto label_7F31EB00;
    case 0x7F31EB0Cu: goto label_7F31EB0C;
    case 0x7F31EB18u: goto label_7F31EB18;
    case 0x7F31EB20u: goto label_7F31EB20;
    case 0x7F31EB2Cu: goto label_7F31EB2C;
    case 0x7F31EB38u: goto label_7F31EB38;
    case 0x7F31EB40u: goto label_7F31EB40;
    case 0x7F31EB4Cu: goto label_7F31EB4C;
    case 0x7F31EB58u: goto label_7F31EB58;
    case 0x7F31EB60u: goto label_7F31EB60;
    case 0x7F31EB6Cu: goto label_7F31EB6C;
    case 0x7F31EB78u: goto label_7F31EB78;
    case 0x7F31EB80u: goto label_7F31EB80;
    case 0x7F31EB8Cu: goto label_7F31EB8C;
    case 0x7F31EB90u: goto label_7F31EB90;
    case 0x7F31EBA4u: goto label_7F31EBA4;
    case 0x7F31EBB4u: goto label_7F31EBB4;
    case 0x7F31EBC0u: goto label_7F31EBC0;
    case 0x7F31EBC8u: goto label_7F31EBC8;
    case 0x7F31EBD4u: goto label_7F31EBD4;
    case 0x7F31EBE0u: goto label_7F31EBE0;
    case 0x7F31EBE8u: goto label_7F31EBE8;
    case 0x7F31EBF4u: goto label_7F31EBF4;
    case 0x7F31EC00u: goto label_7F31EC00;
    case 0x7F31EC08u: goto label_7F31EC08;
    case 0x7F31EC14u: goto label_7F31EC14;
    case 0x7F31EC20u: goto label_7F31EC20;
    case 0x7F31EC28u: goto label_7F31EC28;
    case 0x7F31EC34u: goto label_7F31EC34;
    case 0x7F31EC40u: goto label_7F31EC40;
    case 0x7F31EC48u: goto label_7F31EC48;
    case 0x7F31EC54u: goto label_7F31EC54;
    case 0x7F31EC60u: goto label_7F31EC60;
    case 0x7F31EC68u: goto label_7F31EC68;
    case 0x7F31EC74u: goto label_7F31EC74;
    case 0x7F31EC80u: goto label_7F31EC80;
    case 0x7F31EC88u: goto label_7F31EC88;
    case 0x7F31EC94u: goto label_7F31EC94;
    case 0x7F31ECA0u: goto label_7F31ECA0;
    case 0x7F31ECA8u: goto label_7F31ECA8;
    case 0x7F31ECB4u: goto label_7F31ECB4;
    case 0x7F31ECC0u: goto label_7F31ECC0;
    case 0x7F31ECC8u: goto label_7F31ECC8;
    case 0x7F31ECD4u: goto label_7F31ECD4;
    case 0x7F31ECE0u: goto label_7F31ECE0;
    case 0x7F31ECE8u: goto label_7F31ECE8;
    case 0x7F31ECF4u: goto label_7F31ECF4;
    case 0x7F31ED00u: goto label_7F31ED00;
    case 0x7F31ED08u: goto label_7F31ED08;
    case 0x7F31ED14u: goto label_7F31ED14;
    case 0x7F31ED20u: goto label_7F31ED20;
    case 0x7F31ED28u: goto label_7F31ED28;
    case 0x7F31ED34u: goto label_7F31ED34;
    case 0x7F31ED38u: goto label_7F31ED38;
    case 0x7F31ED44u: goto label_7F31ED44;
    case 0x7F31EDC8u: goto label_7F31EDC8;
    case 0x7F31EE04u: goto label_7F31EE04;
    case 0x7F31EE18u: goto label_7F31EE18;
    case 0x7F31EE58u: goto label_7F31EE58;
    case 0x7F31F060u: goto label_7F31F060;
    case 0x7F31F088u: goto label_7F31F088;
    case 0x7F31F0F4u: goto label_7F31F0F4;
    case 0x7F31F178u: goto label_7F31F178;
    case 0x7F31F254u: goto label_7F31F254;
    case 0x7F31F344u: goto label_7F31F344;
    case 0x7F31F368u: goto label_7F31F368;
    case 0x7F31F378u: goto label_7F31F378;
    case 0x7F31F44Cu: goto label_7F31F44C;
    case 0x7F31F480u: goto label_7F31F480;
    case 0x7F31F4E0u: goto label_7F31F4E0;
    case 0x7F31F4F4u: goto label_7F31F4F4;
    case 0x7F31F4F8u: goto label_7F31F4F8;
    case 0x7F31F50Cu: goto label_7F31F50C;
    case 0x7F31F520u: goto label_7F31F520;
    case 0x7F31F52Cu: goto label_7F31F52C;
    case 0x7F31F550u: goto label_7F31F550;
    case 0x7F31F580u: goto label_7F31F580;
    case 0x7F31F584u: goto label_7F31F584;
    case 0x7F31F588u: goto label_7F31F588;
    case 0x7F31F59Cu: goto label_7F31F59C;
    case 0x7F31F5B4u: goto label_7F31F5B4;
    case 0x7F31F5CCu: goto label_7F31F5CC;
    case 0x7F31F5D8u: goto label_7F31F5D8;
    case 0x7F31F5F4u: goto label_7F31F5F4;
    case 0x7F31F604u: goto label_7F31F604;
    case 0x7F31F64Cu: goto label_7F31F64C;
    case 0x7F31F658u: goto label_7F31F658;
    case 0x7F31F66Cu: goto label_7F31F66C;
    case 0x7F31F678u: goto label_7F31F678;
    case 0x7F31F68Cu: goto label_7F31F68C;
    case 0x7F31F698u: goto label_7F31F698;
    case 0x7F31F6ACu: goto label_7F31F6AC;
    case 0x7F31F6B8u: goto label_7F31F6B8;
    case 0x7F31F6D4u: goto label_7F31F6D4;
    case 0x7F31F6D8u: goto label_7F31F6D8;
    case 0x7F31F7B4u: goto label_7F31F7B4;
    case 0x7F31F818u: goto label_7F31F818;
    case 0x7F31F848u: goto label_7F31F848;
    case 0x7F31F8C8u: goto label_7F31F8C8;
    case 0x7F31F8E0u: goto label_7F31F8E0;
    case 0x7F31F900u: goto label_7F31F900;
    case 0x7F31F914u: goto label_7F31F914;
    case 0x7F31F948u: goto label_7F31F948;
    case 0x7F31F95Cu: goto label_7F31F95C;
    case 0x7F31F97Cu: goto label_7F31F97C;
    case 0x7F31F9A8u: goto label_7F31F9A8;
    case 0x7F31F9B8u: goto label_7F31F9B8;
    case 0x7F31F9CCu: goto label_7F31F9CC;
    case 0x7F31F9E4u: goto label_7F31F9E4;
    case 0x7F31F9F4u: goto label_7F31F9F4;
    case 0x7F31FA08u: goto label_7F31FA08;
    case 0x7F31FA14u: goto label_7F31FA14;
    case 0x7F31FA40u: goto label_7F31FA40;
    case 0x7F31FAFCu: goto label_7F31FAFC;
    case 0x7F31FB04u: goto label_7F31FB04;
    case 0x7F31FB24u: goto label_7F31FB24;
    case 0x7F31FB38u: goto label_7F31FB38;
    case 0x7F31FB40u: goto label_7F31FB40;
    case 0x7F31FBFCu: goto label_7F31FBFC;
    case 0x7F31FC20u: goto label_7F31FC20;
    case 0x7F31FC44u: goto label_7F31FC44;
    case 0x7F31FC4Cu: goto label_7F31FC4C;
    case 0x7F31FC8Cu: goto label_7F31FC8C;
    case 0x7F31FCA0u: goto label_7F31FCA0;
    case 0x7F31FCA8u: goto label_7F31FCA8;
    case 0x7F31FCC0u: goto label_7F31FCC0;
    case 0x7F31FCD4u: goto label_7F31FCD4;
    case 0x7F31FCDCu: goto label_7F31FCDC;
    case 0x7F31FCE4u: goto label_7F31FCE4;
    case 0x7F31FD10u: goto label_7F31FD10;
    case 0x7F31FD20u: goto label_7F31FD20;
    case 0x7F31FD40u: goto label_7F31FD40;
    case 0x7F31FD74u: goto label_7F31FD74;
    case 0x7F31FD80u: goto label_7F31FD80;
    case 0x7F31FD9Cu: goto label_7F31FD9C;
    case 0x7F31FDA4u: goto label_7F31FDA4;
    case 0x7F31FDE4u: goto label_7F31FDE4;
    case 0x7F31FE18u: goto label_7F31FE18;
    case 0x7F31FED4u: goto label_7F31FED4;
    case 0x7F31FF30u: goto label_7F31FF30;
    case 0x7F31FF3Cu: goto label_7F31FF3C;
    case 0x7F31FFA8u: goto label_7F31FFA8;
    case 0x7F31FFB8u: goto label_7F31FFB8;
    case 0x7F31FFDCu: goto label_7F31FFDC;
    case 0x7F320000u: goto label_7F320000;
    case 0x7F32000Cu: goto label_7F32000C;
    case 0x7F320020u: goto label_7F320020;
    case 0x7F32002Cu: goto label_7F32002C;
    case 0x7F320070u: goto label_7F320070;
    case 0x7F320098u: goto label_7F320098;
    case 0x7F3200A0u: goto label_7F3200A0;
    case 0x7F3200ACu: goto label_7F3200AC;
    case 0x7F3200B8u: goto label_7F3200B8;
    case 0x7F3200E0u: goto label_7F3200E0;
    default: return;
    }
}

