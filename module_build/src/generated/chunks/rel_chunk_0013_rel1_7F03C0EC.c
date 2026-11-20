// DolRecomp output
#include "../generated.h"

static void loop_7F03E358(CPUState* ctx) {
label_7F03E358:
    ctx->downcount -= 5;
    ctx->pc = 0x7F03E358u;
    // 7F03E358: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F03E35Cu;
    // 7F03E35C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F03E360u;
    // 7F03E360: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F03E364u;
    // 7F03E364: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F03E368: bc    16, 0, 0x7F03E358
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03E358u;
                return;
            }
            goto label_7F03E358;
        }
    }

    ctx->pc = 0x7F03E36Cu;
}

void func_7F03C0EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F03C0ECu: goto label_7F03C0EC;
    case 0x7F03C0F0u: goto label_7F03C0F0;
    case 0x7F03C0F4u: goto label_7F03C0F4;
    case 0x7F03C0F8u: goto label_7F03C0F8;
    case 0x7F03C0FCu: goto label_7F03C0FC;
    case 0x7F03C100u: goto label_7F03C100;
    case 0x7F03C104u: goto label_7F03C104;
    case 0x7F03C108u: goto label_7F03C108;
    case 0x7F03C10Cu: goto label_7F03C10C;
    case 0x7F03C110u: goto label_7F03C110;
    case 0x7F03C114u: goto label_7F03C114;
    case 0x7F03C118u: goto label_7F03C118;
    case 0x7F03C11Cu: goto label_7F03C11C;
    case 0x7F03C120u: goto label_7F03C120;
    case 0x7F03C124u: goto label_7F03C124;
    case 0x7F03C128u: goto label_7F03C128;
    case 0x7F03C12Cu: goto label_7F03C12C;
    case 0x7F03C130u: goto label_7F03C130;
    case 0x7F03C134u: goto label_7F03C134;
    case 0x7F03C138u: goto label_7F03C138;
    case 0x7F03C13Cu: goto label_7F03C13C;
    case 0x7F03C140u: goto label_7F03C140;
    case 0x7F03C144u: goto label_7F03C144;
    case 0x7F03C148u: goto label_7F03C148;
    case 0x7F03C14Cu: goto label_7F03C14C;
    case 0x7F03C150u: goto label_7F03C150;
    case 0x7F03C154u: goto label_7F03C154;
    case 0x7F03C158u: goto label_7F03C158;
    case 0x7F03C15Cu: goto label_7F03C15C;
    case 0x7F03C160u: goto label_7F03C160;
    case 0x7F03C164u: goto label_7F03C164;
    case 0x7F03C168u: goto label_7F03C168;
    case 0x7F03C16Cu: goto label_7F03C16C;
    case 0x7F03C170u: goto label_7F03C170;
    case 0x7F03C174u: goto label_7F03C174;
    case 0x7F03C178u: goto label_7F03C178;
    case 0x7F03C17Cu: goto label_7F03C17C;
    case 0x7F03C180u: goto label_7F03C180;
    case 0x7F03C184u: goto label_7F03C184;
    case 0x7F03C188u: goto label_7F03C188;
    case 0x7F03C18Cu: goto label_7F03C18C;
    case 0x7F03C190u: goto label_7F03C190;
    case 0x7F03C194u: goto label_7F03C194;
    case 0x7F03C198u: goto label_7F03C198;
    case 0x7F03C19Cu: goto label_7F03C19C;
    case 0x7F03C1A0u: goto label_7F03C1A0;
    case 0x7F03C1A4u: goto label_7F03C1A4;
    case 0x7F03C1A8u: goto label_7F03C1A8;
    case 0x7F03C1ACu: goto label_7F03C1AC;
    case 0x7F03C1B0u: goto label_7F03C1B0;
    case 0x7F03C1B4u: goto label_7F03C1B4;
    case 0x7F03C1B8u: goto label_7F03C1B8;
    case 0x7F03C1BCu: goto label_7F03C1BC;
    case 0x7F03C1C0u: goto label_7F03C1C0;
    case 0x7F03C1C4u: goto label_7F03C1C4;
    case 0x7F03C1C8u: goto label_7F03C1C8;
    case 0x7F03C1CCu: goto label_7F03C1CC;
    case 0x7F03C1D0u: goto label_7F03C1D0;
    case 0x7F03C1D4u: goto label_7F03C1D4;
    case 0x7F03C1D8u: goto label_7F03C1D8;
    case 0x7F03C1DCu: goto label_7F03C1DC;
    case 0x7F03C1E0u: goto label_7F03C1E0;
    case 0x7F03C1E4u: goto label_7F03C1E4;
    case 0x7F03C1E8u: goto label_7F03C1E8;
    case 0x7F03C1ECu: goto label_7F03C1EC;
    case 0x7F03C1F0u: goto label_7F03C1F0;
    case 0x7F03C1F4u: goto label_7F03C1F4;
    case 0x7F03C1F8u: goto label_7F03C1F8;
    case 0x7F03C1FCu: goto label_7F03C1FC;
    case 0x7F03C200u: goto label_7F03C200;
    case 0x7F03C204u: goto label_7F03C204;
    case 0x7F03C208u: goto label_7F03C208;
    case 0x7F03C20Cu: goto label_7F03C20C;
    case 0x7F03C210u: goto label_7F03C210;
    case 0x7F03C214u: goto label_7F03C214;
    case 0x7F03C218u: goto label_7F03C218;
    case 0x7F03C21Cu: goto label_7F03C21C;
    case 0x7F03C220u: goto label_7F03C220;
    case 0x7F03C224u: goto label_7F03C224;
    case 0x7F03C228u: goto label_7F03C228;
    case 0x7F03C22Cu: goto label_7F03C22C;
    case 0x7F03C230u: goto label_7F03C230;
    case 0x7F03C234u: goto label_7F03C234;
    case 0x7F03C238u: goto label_7F03C238;
    case 0x7F03C23Cu: goto label_7F03C23C;
    case 0x7F03C240u: goto label_7F03C240;
    case 0x7F03C244u: goto label_7F03C244;
    case 0x7F03C248u: goto label_7F03C248;
    case 0x7F03C24Cu: goto label_7F03C24C;
    case 0x7F03C250u: goto label_7F03C250;
    case 0x7F03C254u: goto label_7F03C254;
    case 0x7F03C258u: goto label_7F03C258;
    case 0x7F03C25Cu: goto label_7F03C25C;
    case 0x7F03C260u: goto label_7F03C260;
    case 0x7F03C264u: goto label_7F03C264;
    case 0x7F03C268u: goto label_7F03C268;
    case 0x7F03C26Cu: goto label_7F03C26C;
    case 0x7F03C270u: goto label_7F03C270;
    case 0x7F03C274u: goto label_7F03C274;
    case 0x7F03C278u: goto label_7F03C278;
    case 0x7F03C27Cu: goto label_7F03C27C;
    case 0x7F03C280u: goto label_7F03C280;
    case 0x7F03C284u: goto label_7F03C284;
    case 0x7F03C288u: goto label_7F03C288;
    case 0x7F03C28Cu: goto label_7F03C28C;
    case 0x7F03C290u: goto label_7F03C290;
    case 0x7F03C294u: goto label_7F03C294;
    case 0x7F03C298u: goto label_7F03C298;
    case 0x7F03C29Cu: goto label_7F03C29C;
    case 0x7F03C2A0u: goto label_7F03C2A0;
    case 0x7F03C2A4u: goto label_7F03C2A4;
    case 0x7F03C2A8u: goto label_7F03C2A8;
    case 0x7F03C2ACu: goto label_7F03C2AC;
    case 0x7F03C2B0u: goto label_7F03C2B0;
    case 0x7F03C2B4u: goto label_7F03C2B4;
    case 0x7F03C2B8u: goto label_7F03C2B8;
    case 0x7F03C2BCu: goto label_7F03C2BC;
    case 0x7F03C2C0u: goto label_7F03C2C0;
    case 0x7F03C2C4u: goto label_7F03C2C4;
    case 0x7F03C2C8u: goto label_7F03C2C8;
    case 0x7F03C2CCu: goto label_7F03C2CC;
    case 0x7F03C2D0u: goto label_7F03C2D0;
    case 0x7F03C2D4u: goto label_7F03C2D4;
    case 0x7F03C2D8u: goto label_7F03C2D8;
    case 0x7F03C2DCu: goto label_7F03C2DC;
    case 0x7F03C2E0u: goto label_7F03C2E0;
    case 0x7F03C2E4u: goto label_7F03C2E4;
    case 0x7F03C2E8u: goto label_7F03C2E8;
    case 0x7F03C2ECu: goto label_7F03C2EC;
    case 0x7F03C2F0u: goto label_7F03C2F0;
    case 0x7F03C2F4u: goto label_7F03C2F4;
    case 0x7F03C2F8u: goto label_7F03C2F8;
    case 0x7F03C2FCu: goto label_7F03C2FC;
    case 0x7F03C300u: goto label_7F03C300;
    case 0x7F03C304u: goto label_7F03C304;
    case 0x7F03C308u: goto label_7F03C308;
    case 0x7F03C30Cu: goto label_7F03C30C;
    case 0x7F03C310u: goto label_7F03C310;
    case 0x7F03C314u: goto label_7F03C314;
    case 0x7F03C318u: goto label_7F03C318;
    case 0x7F03C31Cu: goto label_7F03C31C;
    case 0x7F03C320u: goto label_7F03C320;
    case 0x7F03C324u: goto label_7F03C324;
    case 0x7F03C328u: goto label_7F03C328;
    case 0x7F03C32Cu: goto label_7F03C32C;
    case 0x7F03C330u: goto label_7F03C330;
    case 0x7F03C334u: goto label_7F03C334;
    case 0x7F03C338u: goto label_7F03C338;
    case 0x7F03C33Cu: goto label_7F03C33C;
    case 0x7F03C340u: goto label_7F03C340;
    case 0x7F03C344u: goto label_7F03C344;
    case 0x7F03C348u: goto label_7F03C348;
    case 0x7F03C34Cu: goto label_7F03C34C;
    case 0x7F03C350u: goto label_7F03C350;
    case 0x7F03C354u: goto label_7F03C354;
    case 0x7F03C358u: goto label_7F03C358;
    case 0x7F03C35Cu: goto label_7F03C35C;
    case 0x7F03C360u: goto label_7F03C360;
    case 0x7F03C364u: goto label_7F03C364;
    case 0x7F03C368u: goto label_7F03C368;
    case 0x7F03C36Cu: goto label_7F03C36C;
    case 0x7F03C370u: goto label_7F03C370;
    case 0x7F03C374u: goto label_7F03C374;
    case 0x7F03C378u: goto label_7F03C378;
    case 0x7F03C37Cu: goto label_7F03C37C;
    case 0x7F03C380u: goto label_7F03C380;
    case 0x7F03C384u: goto label_7F03C384;
    case 0x7F03C388u: goto label_7F03C388;
    case 0x7F03C38Cu: goto label_7F03C38C;
    case 0x7F03C390u: goto label_7F03C390;
    case 0x7F03C394u: goto label_7F03C394;
    case 0x7F03C398u: goto label_7F03C398;
    case 0x7F03C39Cu: goto label_7F03C39C;
    case 0x7F03C3A0u: goto label_7F03C3A0;
    case 0x7F03C3A4u: goto label_7F03C3A4;
    case 0x7F03C3A8u: goto label_7F03C3A8;
    case 0x7F03C3ACu: goto label_7F03C3AC;
    case 0x7F03C3B0u: goto label_7F03C3B0;
    case 0x7F03C3B4u: goto label_7F03C3B4;
    case 0x7F03C3B8u: goto label_7F03C3B8;
    case 0x7F03C3BCu: goto label_7F03C3BC;
    case 0x7F03C3C0u: goto label_7F03C3C0;
    case 0x7F03C3C4u: goto label_7F03C3C4;
    case 0x7F03C3C8u: goto label_7F03C3C8;
    case 0x7F03C3CCu: goto label_7F03C3CC;
    case 0x7F03C3D0u: goto label_7F03C3D0;
    case 0x7F03C3D4u: goto label_7F03C3D4;
    case 0x7F03C3D8u: goto label_7F03C3D8;
    case 0x7F03C3DCu: goto label_7F03C3DC;
    case 0x7F03C3E0u: goto label_7F03C3E0;
    case 0x7F03C3E4u: goto label_7F03C3E4;
    case 0x7F03C3E8u: goto label_7F03C3E8;
    case 0x7F03C3ECu: goto label_7F03C3EC;
    case 0x7F03C3F0u: goto label_7F03C3F0;
    case 0x7F03C3F4u: goto label_7F03C3F4;
    case 0x7F03C3F8u: goto label_7F03C3F8;
    case 0x7F03C3FCu: goto label_7F03C3FC;
    case 0x7F03C400u: goto label_7F03C400;
    case 0x7F03C404u: goto label_7F03C404;
    case 0x7F03C408u: goto label_7F03C408;
    case 0x7F03C40Cu: goto label_7F03C40C;
    case 0x7F03C410u: goto label_7F03C410;
    case 0x7F03C414u: goto label_7F03C414;
    case 0x7F03C418u: goto label_7F03C418;
    case 0x7F03C41Cu: goto label_7F03C41C;
    case 0x7F03C420u: goto label_7F03C420;
    case 0x7F03C424u: goto label_7F03C424;
    case 0x7F03C428u: goto label_7F03C428;
    case 0x7F03C42Cu: goto label_7F03C42C;
    case 0x7F03C430u: goto label_7F03C430;
    case 0x7F03C434u: goto label_7F03C434;
    case 0x7F03C438u: goto label_7F03C438;
    case 0x7F03C43Cu: goto label_7F03C43C;
    case 0x7F03C440u: goto label_7F03C440;
    case 0x7F03C444u: goto label_7F03C444;
    case 0x7F03C448u: goto label_7F03C448;
    case 0x7F03C44Cu: goto label_7F03C44C;
    case 0x7F03C450u: goto label_7F03C450;
    case 0x7F03C454u: goto label_7F03C454;
    case 0x7F03C458u: goto label_7F03C458;
    case 0x7F03C45Cu: goto label_7F03C45C;
    case 0x7F03C460u: goto label_7F03C460;
    case 0x7F03C464u: goto label_7F03C464;
    case 0x7F03C468u: goto label_7F03C468;
    case 0x7F03C46Cu: goto label_7F03C46C;
    case 0x7F03C470u: goto label_7F03C470;
    case 0x7F03C474u: goto label_7F03C474;
    case 0x7F03C478u: goto label_7F03C478;
    case 0x7F03C47Cu: goto label_7F03C47C;
    case 0x7F03C480u: goto label_7F03C480;
    case 0x7F03C484u: goto label_7F03C484;
    case 0x7F03C488u: goto label_7F03C488;
    case 0x7F03C48Cu: goto label_7F03C48C;
    case 0x7F03C490u: goto label_7F03C490;
    case 0x7F03C494u: goto label_7F03C494;
    case 0x7F03C498u: goto label_7F03C498;
    case 0x7F03C49Cu: goto label_7F03C49C;
    case 0x7F03C4A0u: goto label_7F03C4A0;
    case 0x7F03C4A4u: goto label_7F03C4A4;
    case 0x7F03C4A8u: goto label_7F03C4A8;
    case 0x7F03C4ACu: goto label_7F03C4AC;
    case 0x7F03C4B0u: goto label_7F03C4B0;
    case 0x7F03C4B4u: goto label_7F03C4B4;
    case 0x7F03C4B8u: goto label_7F03C4B8;
    case 0x7F03C4BCu: goto label_7F03C4BC;
    case 0x7F03C4C0u: goto label_7F03C4C0;
    case 0x7F03C4C4u: goto label_7F03C4C4;
    case 0x7F03C4C8u: goto label_7F03C4C8;
    case 0x7F03C4CCu: goto label_7F03C4CC;
    case 0x7F03C4D0u: goto label_7F03C4D0;
    case 0x7F03C4D4u: goto label_7F03C4D4;
    case 0x7F03C4D8u: goto label_7F03C4D8;
    case 0x7F03C4DCu: goto label_7F03C4DC;
    case 0x7F03C4E0u: goto label_7F03C4E0;
    case 0x7F03C4E4u: goto label_7F03C4E4;
    case 0x7F03C4E8u: goto label_7F03C4E8;
    case 0x7F03C4ECu: goto label_7F03C4EC;
    case 0x7F03C4F0u: goto label_7F03C4F0;
    case 0x7F03C4F4u: goto label_7F03C4F4;
    case 0x7F03C4F8u: goto label_7F03C4F8;
    case 0x7F03C4FCu: goto label_7F03C4FC;
    case 0x7F03C500u: goto label_7F03C500;
    case 0x7F03C504u: goto label_7F03C504;
    case 0x7F03C508u: goto label_7F03C508;
    case 0x7F03C50Cu: goto label_7F03C50C;
    case 0x7F03C510u: goto label_7F03C510;
    case 0x7F03C514u: goto label_7F03C514;
    case 0x7F03C518u: goto label_7F03C518;
    case 0x7F03C51Cu: goto label_7F03C51C;
    case 0x7F03C520u: goto label_7F03C520;
    case 0x7F03C524u: goto label_7F03C524;
    case 0x7F03C528u: goto label_7F03C528;
    case 0x7F03C52Cu: goto label_7F03C52C;
    case 0x7F03C530u: goto label_7F03C530;
    case 0x7F03C534u: goto label_7F03C534;
    case 0x7F03C538u: goto label_7F03C538;
    case 0x7F03C53Cu: goto label_7F03C53C;
    case 0x7F03C540u: goto label_7F03C540;
    case 0x7F03C544u: goto label_7F03C544;
    case 0x7F03C548u: goto label_7F03C548;
    case 0x7F03C54Cu: goto label_7F03C54C;
    case 0x7F03C550u: goto label_7F03C550;
    case 0x7F03C554u: goto label_7F03C554;
    case 0x7F03C558u: goto label_7F03C558;
    case 0x7F03C55Cu: goto label_7F03C55C;
    case 0x7F03C560u: goto label_7F03C560;
    case 0x7F03C564u: goto label_7F03C564;
    case 0x7F03C568u: goto label_7F03C568;
    case 0x7F03C56Cu: goto label_7F03C56C;
    case 0x7F03C570u: goto label_7F03C570;
    case 0x7F03C574u: goto label_7F03C574;
    case 0x7F03C578u: goto label_7F03C578;
    case 0x7F03C57Cu: goto label_7F03C57C;
    case 0x7F03C580u: goto label_7F03C580;
    case 0x7F03C584u: goto label_7F03C584;
    case 0x7F03C588u: goto label_7F03C588;
    case 0x7F03C58Cu: goto label_7F03C58C;
    case 0x7F03C590u: goto label_7F03C590;
    case 0x7F03C594u: goto label_7F03C594;
    case 0x7F03C598u: goto label_7F03C598;
    case 0x7F03C59Cu: goto label_7F03C59C;
    case 0x7F03C5A0u: goto label_7F03C5A0;
    case 0x7F03C5A4u: goto label_7F03C5A4;
    case 0x7F03C5A8u: goto label_7F03C5A8;
    case 0x7F03C5ACu: goto label_7F03C5AC;
    case 0x7F03C5B0u: goto label_7F03C5B0;
    case 0x7F03C5B4u: goto label_7F03C5B4;
    case 0x7F03C5B8u: goto label_7F03C5B8;
    case 0x7F03C5BCu: goto label_7F03C5BC;
    case 0x7F03C5C0u: goto label_7F03C5C0;
    case 0x7F03C5C4u: goto label_7F03C5C4;
    case 0x7F03C5C8u: goto label_7F03C5C8;
    case 0x7F03C5CCu: goto label_7F03C5CC;
    case 0x7F03C5D0u: goto label_7F03C5D0;
    case 0x7F03C5D4u: goto label_7F03C5D4;
    case 0x7F03C5D8u: goto label_7F03C5D8;
    case 0x7F03C5DCu: goto label_7F03C5DC;
    case 0x7F03C5E0u: goto label_7F03C5E0;
    case 0x7F03C5E4u: goto label_7F03C5E4;
    case 0x7F03C5E8u: goto label_7F03C5E8;
    case 0x7F03C5ECu: goto label_7F03C5EC;
    case 0x7F03C5F0u: goto label_7F03C5F0;
    case 0x7F03C5F4u: goto label_7F03C5F4;
    case 0x7F03C5F8u: goto label_7F03C5F8;
    case 0x7F03C5FCu: goto label_7F03C5FC;
    case 0x7F03C600u: goto label_7F03C600;
    case 0x7F03C604u: goto label_7F03C604;
    case 0x7F03C608u: goto label_7F03C608;
    case 0x7F03C60Cu: goto label_7F03C60C;
    case 0x7F03C610u: goto label_7F03C610;
    case 0x7F03C614u: goto label_7F03C614;
    case 0x7F03C618u: goto label_7F03C618;
    case 0x7F03C61Cu: goto label_7F03C61C;
    case 0x7F03C620u: goto label_7F03C620;
    case 0x7F03C624u: goto label_7F03C624;
    case 0x7F03C628u: goto label_7F03C628;
    case 0x7F03C62Cu: goto label_7F03C62C;
    case 0x7F03C630u: goto label_7F03C630;
    case 0x7F03C634u: goto label_7F03C634;
    case 0x7F03C638u: goto label_7F03C638;
    case 0x7F03C63Cu: goto label_7F03C63C;
    case 0x7F03C640u: goto label_7F03C640;
    case 0x7F03C644u: goto label_7F03C644;
    case 0x7F03C648u: goto label_7F03C648;
    case 0x7F03C64Cu: goto label_7F03C64C;
    case 0x7F03C650u: goto label_7F03C650;
    case 0x7F03C654u: goto label_7F03C654;
    case 0x7F03C658u: goto label_7F03C658;
    case 0x7F03C65Cu: goto label_7F03C65C;
    case 0x7F03C660u: goto label_7F03C660;
    case 0x7F03C664u: goto label_7F03C664;
    case 0x7F03C668u: goto label_7F03C668;
    case 0x7F03C66Cu: goto label_7F03C66C;
    case 0x7F03C670u: goto label_7F03C670;
    case 0x7F03C674u: goto label_7F03C674;
    case 0x7F03C678u: goto label_7F03C678;
    case 0x7F03C67Cu: goto label_7F03C67C;
    case 0x7F03C680u: goto label_7F03C680;
    case 0x7F03C684u: goto label_7F03C684;
    case 0x7F03C688u: goto label_7F03C688;
    case 0x7F03C68Cu: goto label_7F03C68C;
    case 0x7F03C690u: goto label_7F03C690;
    case 0x7F03C694u: goto label_7F03C694;
    case 0x7F03C698u: goto label_7F03C698;
    case 0x7F03C69Cu: goto label_7F03C69C;
    case 0x7F03C6A0u: goto label_7F03C6A0;
    case 0x7F03C6A4u: goto label_7F03C6A4;
    case 0x7F03C6A8u: goto label_7F03C6A8;
    case 0x7F03C6ACu: goto label_7F03C6AC;
    case 0x7F03C6B0u: goto label_7F03C6B0;
    case 0x7F03C6B4u: goto label_7F03C6B4;
    case 0x7F03C6B8u: goto label_7F03C6B8;
    case 0x7F03C6BCu: goto label_7F03C6BC;
    case 0x7F03C6C0u: goto label_7F03C6C0;
    case 0x7F03C6C4u: goto label_7F03C6C4;
    case 0x7F03C6C8u: goto label_7F03C6C8;
    case 0x7F03C6CCu: goto label_7F03C6CC;
    case 0x7F03C6D0u: goto label_7F03C6D0;
    case 0x7F03C6D4u: goto label_7F03C6D4;
    case 0x7F03C6D8u: goto label_7F03C6D8;
    case 0x7F03C6DCu: goto label_7F03C6DC;
    case 0x7F03C6E0u: goto label_7F03C6E0;
    case 0x7F03C6E4u: goto label_7F03C6E4;
    case 0x7F03C6E8u: goto label_7F03C6E8;
    case 0x7F03C6ECu: goto label_7F03C6EC;
    case 0x7F03C6F0u: goto label_7F03C6F0;
    case 0x7F03C6F4u: goto label_7F03C6F4;
    case 0x7F03C6F8u: goto label_7F03C6F8;
    case 0x7F03C6FCu: goto label_7F03C6FC;
    case 0x7F03C700u: goto label_7F03C700;
    case 0x7F03C704u: goto label_7F03C704;
    case 0x7F03C708u: goto label_7F03C708;
    case 0x7F03C70Cu: goto label_7F03C70C;
    case 0x7F03C710u: goto label_7F03C710;
    case 0x7F03C714u: goto label_7F03C714;
    case 0x7F03C718u: goto label_7F03C718;
    case 0x7F03C71Cu: goto label_7F03C71C;
    case 0x7F03C720u: goto label_7F03C720;
    case 0x7F03C724u: goto label_7F03C724;
    case 0x7F03C728u: goto label_7F03C728;
    case 0x7F03C72Cu: goto label_7F03C72C;
    case 0x7F03C730u: goto label_7F03C730;
    case 0x7F03C734u: goto label_7F03C734;
    case 0x7F03C738u: goto label_7F03C738;
    case 0x7F03C73Cu: goto label_7F03C73C;
    case 0x7F03C740u: goto label_7F03C740;
    case 0x7F03C744u: goto label_7F03C744;
    case 0x7F03C748u: goto label_7F03C748;
    case 0x7F03C74Cu: goto label_7F03C74C;
    case 0x7F03C750u: goto label_7F03C750;
    case 0x7F03C754u: goto label_7F03C754;
    case 0x7F03C758u: goto label_7F03C758;
    case 0x7F03C75Cu: goto label_7F03C75C;
    case 0x7F03C760u: goto label_7F03C760;
    case 0x7F03C764u: goto label_7F03C764;
    case 0x7F03C768u: goto label_7F03C768;
    case 0x7F03C76Cu: goto label_7F03C76C;
    case 0x7F03C770u: goto label_7F03C770;
    case 0x7F03C774u: goto label_7F03C774;
    case 0x7F03C778u: goto label_7F03C778;
    case 0x7F03C77Cu: goto label_7F03C77C;
    case 0x7F03C780u: goto label_7F03C780;
    case 0x7F03C784u: goto label_7F03C784;
    case 0x7F03C788u: goto label_7F03C788;
    case 0x7F03C78Cu: goto label_7F03C78C;
    case 0x7F03C790u: goto label_7F03C790;
    case 0x7F03C794u: goto label_7F03C794;
    case 0x7F03C798u: goto label_7F03C798;
    case 0x7F03C79Cu: goto label_7F03C79C;
    case 0x7F03C7A0u: goto label_7F03C7A0;
    case 0x7F03C7A4u: goto label_7F03C7A4;
    case 0x7F03C7A8u: goto label_7F03C7A8;
    case 0x7F03C7ACu: goto label_7F03C7AC;
    case 0x7F03C7B0u: goto label_7F03C7B0;
    case 0x7F03C7B4u: goto label_7F03C7B4;
    case 0x7F03C7B8u: goto label_7F03C7B8;
    case 0x7F03C7BCu: goto label_7F03C7BC;
    case 0x7F03C7C0u: goto label_7F03C7C0;
    case 0x7F03C7C4u: goto label_7F03C7C4;
    case 0x7F03C7C8u: goto label_7F03C7C8;
    case 0x7F03C7CCu: goto label_7F03C7CC;
    case 0x7F03C7D0u: goto label_7F03C7D0;
    case 0x7F03C7D4u: goto label_7F03C7D4;
    case 0x7F03C7D8u: goto label_7F03C7D8;
    case 0x7F03C7DCu: goto label_7F03C7DC;
    case 0x7F03C7E0u: goto label_7F03C7E0;
    case 0x7F03C7E4u: goto label_7F03C7E4;
    case 0x7F03C7E8u: goto label_7F03C7E8;
    case 0x7F03C7ECu: goto label_7F03C7EC;
    case 0x7F03C7F0u: goto label_7F03C7F0;
    case 0x7F03C7F4u: goto label_7F03C7F4;
    case 0x7F03C7F8u: goto label_7F03C7F8;
    case 0x7F03C7FCu: goto label_7F03C7FC;
    case 0x7F03C800u: goto label_7F03C800;
    case 0x7F03C804u: goto label_7F03C804;
    case 0x7F03C808u: goto label_7F03C808;
    case 0x7F03C80Cu: goto label_7F03C80C;
    case 0x7F03C810u: goto label_7F03C810;
    case 0x7F03C814u: goto label_7F03C814;
    case 0x7F03C818u: goto label_7F03C818;
    case 0x7F03C81Cu: goto label_7F03C81C;
    case 0x7F03C820u: goto label_7F03C820;
    case 0x7F03C824u: goto label_7F03C824;
    case 0x7F03C828u: goto label_7F03C828;
    case 0x7F03C82Cu: goto label_7F03C82C;
    case 0x7F03C830u: goto label_7F03C830;
    case 0x7F03C834u: goto label_7F03C834;
    case 0x7F03C838u: goto label_7F03C838;
    case 0x7F03C83Cu: goto label_7F03C83C;
    case 0x7F03C840u: goto label_7F03C840;
    case 0x7F03C844u: goto label_7F03C844;
    case 0x7F03C848u: goto label_7F03C848;
    case 0x7F03C84Cu: goto label_7F03C84C;
    case 0x7F03C850u: goto label_7F03C850;
    case 0x7F03C854u: goto label_7F03C854;
    case 0x7F03C858u: goto label_7F03C858;
    case 0x7F03C85Cu: goto label_7F03C85C;
    case 0x7F03C860u: goto label_7F03C860;
    case 0x7F03C864u: goto label_7F03C864;
    case 0x7F03C868u: goto label_7F03C868;
    case 0x7F03C86Cu: goto label_7F03C86C;
    case 0x7F03C870u: goto label_7F03C870;
    case 0x7F03C874u: goto label_7F03C874;
    case 0x7F03C878u: goto label_7F03C878;
    case 0x7F03C87Cu: goto label_7F03C87C;
    case 0x7F03C880u: goto label_7F03C880;
    case 0x7F03C884u: goto label_7F03C884;
    case 0x7F03C888u: goto label_7F03C888;
    case 0x7F03C88Cu: goto label_7F03C88C;
    case 0x7F03C890u: goto label_7F03C890;
    case 0x7F03C894u: goto label_7F03C894;
    case 0x7F03C898u: goto label_7F03C898;
    case 0x7F03C89Cu: goto label_7F03C89C;
    case 0x7F03C8A0u: goto label_7F03C8A0;
    case 0x7F03C8A4u: goto label_7F03C8A4;
    case 0x7F03C8A8u: goto label_7F03C8A8;
    case 0x7F03C8ACu: goto label_7F03C8AC;
    case 0x7F03C8B0u: goto label_7F03C8B0;
    case 0x7F03C8B4u: goto label_7F03C8B4;
    case 0x7F03C8B8u: goto label_7F03C8B8;
    case 0x7F03C8BCu: goto label_7F03C8BC;
    case 0x7F03C8C0u: goto label_7F03C8C0;
    case 0x7F03C8C4u: goto label_7F03C8C4;
    case 0x7F03C8C8u: goto label_7F03C8C8;
    case 0x7F03C8CCu: goto label_7F03C8CC;
    case 0x7F03C8D0u: goto label_7F03C8D0;
    case 0x7F03C8D4u: goto label_7F03C8D4;
    case 0x7F03C8D8u: goto label_7F03C8D8;
    case 0x7F03C8DCu: goto label_7F03C8DC;
    case 0x7F03C8E0u: goto label_7F03C8E0;
    case 0x7F03C8E4u: goto label_7F03C8E4;
    case 0x7F03C8E8u: goto label_7F03C8E8;
    case 0x7F03C8ECu: goto label_7F03C8EC;
    case 0x7F03C8F0u: goto label_7F03C8F0;
    case 0x7F03C8F4u: goto label_7F03C8F4;
    case 0x7F03C8F8u: goto label_7F03C8F8;
    case 0x7F03C8FCu: goto label_7F03C8FC;
    case 0x7F03C900u: goto label_7F03C900;
    case 0x7F03C904u: goto label_7F03C904;
    case 0x7F03C908u: goto label_7F03C908;
    case 0x7F03C90Cu: goto label_7F03C90C;
    case 0x7F03C910u: goto label_7F03C910;
    case 0x7F03C914u: goto label_7F03C914;
    case 0x7F03C918u: goto label_7F03C918;
    case 0x7F03C91Cu: goto label_7F03C91C;
    case 0x7F03C920u: goto label_7F03C920;
    case 0x7F03C924u: goto label_7F03C924;
    case 0x7F03C928u: goto label_7F03C928;
    case 0x7F03C92Cu: goto label_7F03C92C;
    case 0x7F03C930u: goto label_7F03C930;
    case 0x7F03C934u: goto label_7F03C934;
    case 0x7F03C938u: goto label_7F03C938;
    case 0x7F03C93Cu: goto label_7F03C93C;
    case 0x7F03C940u: goto label_7F03C940;
    case 0x7F03C944u: goto label_7F03C944;
    case 0x7F03C948u: goto label_7F03C948;
    case 0x7F03C94Cu: goto label_7F03C94C;
    case 0x7F03C950u: goto label_7F03C950;
    case 0x7F03C954u: goto label_7F03C954;
    case 0x7F03C958u: goto label_7F03C958;
    case 0x7F03C95Cu: goto label_7F03C95C;
    case 0x7F03C960u: goto label_7F03C960;
    case 0x7F03C964u: goto label_7F03C964;
    case 0x7F03C968u: goto label_7F03C968;
    case 0x7F03C96Cu: goto label_7F03C96C;
    case 0x7F03C970u: goto label_7F03C970;
    case 0x7F03C974u: goto label_7F03C974;
    case 0x7F03C978u: goto label_7F03C978;
    case 0x7F03C97Cu: goto label_7F03C97C;
    case 0x7F03C980u: goto label_7F03C980;
    case 0x7F03C984u: goto label_7F03C984;
    case 0x7F03C988u: goto label_7F03C988;
    case 0x7F03C98Cu: goto label_7F03C98C;
    case 0x7F03C990u: goto label_7F03C990;
    case 0x7F03C994u: goto label_7F03C994;
    case 0x7F03C998u: goto label_7F03C998;
    case 0x7F03C99Cu: goto label_7F03C99C;
    case 0x7F03C9A0u: goto label_7F03C9A0;
    case 0x7F03C9A4u: goto label_7F03C9A4;
    case 0x7F03C9A8u: goto label_7F03C9A8;
    case 0x7F03C9ACu: goto label_7F03C9AC;
    case 0x7F03C9B0u: goto label_7F03C9B0;
    case 0x7F03C9B4u: goto label_7F03C9B4;
    case 0x7F03C9B8u: goto label_7F03C9B8;
    case 0x7F03C9BCu: goto label_7F03C9BC;
    case 0x7F03C9C0u: goto label_7F03C9C0;
    case 0x7F03C9C4u: goto label_7F03C9C4;
    case 0x7F03C9C8u: goto label_7F03C9C8;
    case 0x7F03C9CCu: goto label_7F03C9CC;
    case 0x7F03C9D0u: goto label_7F03C9D0;
    case 0x7F03C9D4u: goto label_7F03C9D4;
    case 0x7F03C9D8u: goto label_7F03C9D8;
    case 0x7F03C9DCu: goto label_7F03C9DC;
    case 0x7F03C9E0u: goto label_7F03C9E0;
    case 0x7F03C9E4u: goto label_7F03C9E4;
    case 0x7F03C9E8u: goto label_7F03C9E8;
    case 0x7F03C9ECu: goto label_7F03C9EC;
    case 0x7F03C9F0u: goto label_7F03C9F0;
    case 0x7F03C9F4u: goto label_7F03C9F4;
    case 0x7F03C9F8u: goto label_7F03C9F8;
    case 0x7F03C9FCu: goto label_7F03C9FC;
    case 0x7F03CA00u: goto label_7F03CA00;
    case 0x7F03CA04u: goto label_7F03CA04;
    case 0x7F03CA08u: goto label_7F03CA08;
    case 0x7F03CA0Cu: goto label_7F03CA0C;
    case 0x7F03CA10u: goto label_7F03CA10;
    case 0x7F03CA14u: goto label_7F03CA14;
    case 0x7F03CA18u: goto label_7F03CA18;
    case 0x7F03CA1Cu: goto label_7F03CA1C;
    case 0x7F03CA20u: goto label_7F03CA20;
    case 0x7F03CA24u: goto label_7F03CA24;
    case 0x7F03CA28u: goto label_7F03CA28;
    case 0x7F03CA2Cu: goto label_7F03CA2C;
    case 0x7F03CA30u: goto label_7F03CA30;
    case 0x7F03CA34u: goto label_7F03CA34;
    case 0x7F03CA38u: goto label_7F03CA38;
    case 0x7F03CA3Cu: goto label_7F03CA3C;
    case 0x7F03CA40u: goto label_7F03CA40;
    case 0x7F03CA44u: goto label_7F03CA44;
    case 0x7F03CA48u: goto label_7F03CA48;
    case 0x7F03CA4Cu: goto label_7F03CA4C;
    case 0x7F03CA50u: goto label_7F03CA50;
    case 0x7F03CA54u: goto label_7F03CA54;
    case 0x7F03CA58u: goto label_7F03CA58;
    case 0x7F03CA5Cu: goto label_7F03CA5C;
    case 0x7F03CA60u: goto label_7F03CA60;
    case 0x7F03CA64u: goto label_7F03CA64;
    case 0x7F03CA68u: goto label_7F03CA68;
    case 0x7F03CA6Cu: goto label_7F03CA6C;
    case 0x7F03CA70u: goto label_7F03CA70;
    case 0x7F03CA74u: goto label_7F03CA74;
    case 0x7F03CA78u: goto label_7F03CA78;
    case 0x7F03CA7Cu: goto label_7F03CA7C;
    case 0x7F03CA80u: goto label_7F03CA80;
    case 0x7F03CA84u: goto label_7F03CA84;
    case 0x7F03CA88u: goto label_7F03CA88;
    case 0x7F03CA8Cu: goto label_7F03CA8C;
    case 0x7F03CA90u: goto label_7F03CA90;
    case 0x7F03CA94u: goto label_7F03CA94;
    case 0x7F03CA98u: goto label_7F03CA98;
    case 0x7F03CA9Cu: goto label_7F03CA9C;
    case 0x7F03CAA0u: goto label_7F03CAA0;
    case 0x7F03CAA4u: goto label_7F03CAA4;
    case 0x7F03CAA8u: goto label_7F03CAA8;
    case 0x7F03CAACu: goto label_7F03CAAC;
    case 0x7F03CAB0u: goto label_7F03CAB0;
    case 0x7F03CAB4u: goto label_7F03CAB4;
    case 0x7F03CAB8u: goto label_7F03CAB8;
    case 0x7F03CABCu: goto label_7F03CABC;
    case 0x7F03CAC0u: goto label_7F03CAC0;
    case 0x7F03CAC4u: goto label_7F03CAC4;
    case 0x7F03CAC8u: goto label_7F03CAC8;
    case 0x7F03CACCu: goto label_7F03CACC;
    case 0x7F03CAD0u: goto label_7F03CAD0;
    case 0x7F03CAD4u: goto label_7F03CAD4;
    case 0x7F03CAD8u: goto label_7F03CAD8;
    case 0x7F03CADCu: goto label_7F03CADC;
    case 0x7F03CAE0u: goto label_7F03CAE0;
    case 0x7F03CAE4u: goto label_7F03CAE4;
    case 0x7F03CAE8u: goto label_7F03CAE8;
    case 0x7F03CAECu: goto label_7F03CAEC;
    case 0x7F03CAF0u: goto label_7F03CAF0;
    case 0x7F03CAF4u: goto label_7F03CAF4;
    case 0x7F03CAF8u: goto label_7F03CAF8;
    case 0x7F03CAFCu: goto label_7F03CAFC;
    case 0x7F03CB00u: goto label_7F03CB00;
    case 0x7F03CB04u: goto label_7F03CB04;
    case 0x7F03CB08u: goto label_7F03CB08;
    case 0x7F03CB0Cu: goto label_7F03CB0C;
    case 0x7F03CB10u: goto label_7F03CB10;
    case 0x7F03CB14u: goto label_7F03CB14;
    case 0x7F03CB18u: goto label_7F03CB18;
    case 0x7F03CB1Cu: goto label_7F03CB1C;
    case 0x7F03CB20u: goto label_7F03CB20;
    case 0x7F03CB24u: goto label_7F03CB24;
    case 0x7F03CB28u: goto label_7F03CB28;
    case 0x7F03CB2Cu: goto label_7F03CB2C;
    case 0x7F03CB30u: goto label_7F03CB30;
    case 0x7F03CB34u: goto label_7F03CB34;
    case 0x7F03CB38u: goto label_7F03CB38;
    case 0x7F03CB3Cu: goto label_7F03CB3C;
    case 0x7F03CB40u: goto label_7F03CB40;
    case 0x7F03CB44u: goto label_7F03CB44;
    case 0x7F03CB48u: goto label_7F03CB48;
    case 0x7F03CB4Cu: goto label_7F03CB4C;
    case 0x7F03CB50u: goto label_7F03CB50;
    case 0x7F03CB54u: goto label_7F03CB54;
    case 0x7F03CB58u: goto label_7F03CB58;
    case 0x7F03CB5Cu: goto label_7F03CB5C;
    case 0x7F03CB60u: goto label_7F03CB60;
    case 0x7F03CB64u: goto label_7F03CB64;
    case 0x7F03CB68u: goto label_7F03CB68;
    case 0x7F03CB6Cu: goto label_7F03CB6C;
    case 0x7F03CB70u: goto label_7F03CB70;
    case 0x7F03CB74u: goto label_7F03CB74;
    case 0x7F03CB78u: goto label_7F03CB78;
    case 0x7F03CB7Cu: goto label_7F03CB7C;
    case 0x7F03CB80u: goto label_7F03CB80;
    case 0x7F03CB84u: goto label_7F03CB84;
    case 0x7F03CB88u: goto label_7F03CB88;
    case 0x7F03CB8Cu: goto label_7F03CB8C;
    case 0x7F03CB90u: goto label_7F03CB90;
    case 0x7F03CB94u: goto label_7F03CB94;
    case 0x7F03CB98u: goto label_7F03CB98;
    case 0x7F03CB9Cu: goto label_7F03CB9C;
    case 0x7F03CBA0u: goto label_7F03CBA0;
    case 0x7F03CBA4u: goto label_7F03CBA4;
    case 0x7F03CBA8u: goto label_7F03CBA8;
    case 0x7F03CBACu: goto label_7F03CBAC;
    case 0x7F03CBB0u: goto label_7F03CBB0;
    case 0x7F03CBB4u: goto label_7F03CBB4;
    case 0x7F03CBB8u: goto label_7F03CBB8;
    case 0x7F03CBBCu: goto label_7F03CBBC;
    case 0x7F03CBC0u: goto label_7F03CBC0;
    case 0x7F03CBC4u: goto label_7F03CBC4;
    case 0x7F03CBC8u: goto label_7F03CBC8;
    case 0x7F03CBCCu: goto label_7F03CBCC;
    case 0x7F03CBD0u: goto label_7F03CBD0;
    case 0x7F03CBD4u: goto label_7F03CBD4;
    case 0x7F03CBD8u: goto label_7F03CBD8;
    case 0x7F03CBDCu: goto label_7F03CBDC;
    case 0x7F03CBE0u: goto label_7F03CBE0;
    case 0x7F03CBE4u: goto label_7F03CBE4;
    case 0x7F03CBE8u: goto label_7F03CBE8;
    case 0x7F03CBECu: goto label_7F03CBEC;
    case 0x7F03CBF0u: goto label_7F03CBF0;
    case 0x7F03CBF4u: goto label_7F03CBF4;
    case 0x7F03CBF8u: goto label_7F03CBF8;
    case 0x7F03CBFCu: goto label_7F03CBFC;
    case 0x7F03CC00u: goto label_7F03CC00;
    case 0x7F03CC04u: goto label_7F03CC04;
    case 0x7F03CC08u: goto label_7F03CC08;
    case 0x7F03CC0Cu: goto label_7F03CC0C;
    case 0x7F03CC10u: goto label_7F03CC10;
    case 0x7F03CC14u: goto label_7F03CC14;
    case 0x7F03CC18u: goto label_7F03CC18;
    case 0x7F03CC1Cu: goto label_7F03CC1C;
    case 0x7F03CC20u: goto label_7F03CC20;
    case 0x7F03CC24u: goto label_7F03CC24;
    case 0x7F03CC28u: goto label_7F03CC28;
    case 0x7F03CC2Cu: goto label_7F03CC2C;
    case 0x7F03CC30u: goto label_7F03CC30;
    case 0x7F03CC34u: goto label_7F03CC34;
    case 0x7F03CC38u: goto label_7F03CC38;
    case 0x7F03CC3Cu: goto label_7F03CC3C;
    case 0x7F03CC40u: goto label_7F03CC40;
    case 0x7F03CC44u: goto label_7F03CC44;
    case 0x7F03CC48u: goto label_7F03CC48;
    case 0x7F03CC4Cu: goto label_7F03CC4C;
    case 0x7F03CC50u: goto label_7F03CC50;
    case 0x7F03CC54u: goto label_7F03CC54;
    case 0x7F03CC58u: goto label_7F03CC58;
    case 0x7F03CC5Cu: goto label_7F03CC5C;
    case 0x7F03CC60u: goto label_7F03CC60;
    case 0x7F03CC64u: goto label_7F03CC64;
    case 0x7F03CC68u: goto label_7F03CC68;
    case 0x7F03CC6Cu: goto label_7F03CC6C;
    case 0x7F03CC70u: goto label_7F03CC70;
    case 0x7F03CC74u: goto label_7F03CC74;
    case 0x7F03CC78u: goto label_7F03CC78;
    case 0x7F03CC7Cu: goto label_7F03CC7C;
    case 0x7F03CC80u: goto label_7F03CC80;
    case 0x7F03CC84u: goto label_7F03CC84;
    case 0x7F03CC88u: goto label_7F03CC88;
    case 0x7F03CC8Cu: goto label_7F03CC8C;
    case 0x7F03CC90u: goto label_7F03CC90;
    case 0x7F03CC94u: goto label_7F03CC94;
    case 0x7F03CC98u: goto label_7F03CC98;
    case 0x7F03CC9Cu: goto label_7F03CC9C;
    case 0x7F03CCA0u: goto label_7F03CCA0;
    case 0x7F03CCA4u: goto label_7F03CCA4;
    case 0x7F03CCA8u: goto label_7F03CCA8;
    case 0x7F03CCACu: goto label_7F03CCAC;
    case 0x7F03CCB0u: goto label_7F03CCB0;
    case 0x7F03CCB4u: goto label_7F03CCB4;
    case 0x7F03CCB8u: goto label_7F03CCB8;
    case 0x7F03CCBCu: goto label_7F03CCBC;
    case 0x7F03CCC0u: goto label_7F03CCC0;
    case 0x7F03CCC4u: goto label_7F03CCC4;
    case 0x7F03CCC8u: goto label_7F03CCC8;
    case 0x7F03CCCCu: goto label_7F03CCCC;
    case 0x7F03CCD0u: goto label_7F03CCD0;
    case 0x7F03CCD4u: goto label_7F03CCD4;
    case 0x7F03CCD8u: goto label_7F03CCD8;
    case 0x7F03CCDCu: goto label_7F03CCDC;
    case 0x7F03CCE0u: goto label_7F03CCE0;
    case 0x7F03CCE4u: goto label_7F03CCE4;
    case 0x7F03CCE8u: goto label_7F03CCE8;
    case 0x7F03CCECu: goto label_7F03CCEC;
    case 0x7F03CCF0u: goto label_7F03CCF0;
    case 0x7F03CCF4u: goto label_7F03CCF4;
    case 0x7F03CCF8u: goto label_7F03CCF8;
    case 0x7F03CCFCu: goto label_7F03CCFC;
    case 0x7F03CD00u: goto label_7F03CD00;
    case 0x7F03CD04u: goto label_7F03CD04;
    case 0x7F03CD08u: goto label_7F03CD08;
    case 0x7F03CD0Cu: goto label_7F03CD0C;
    case 0x7F03CD10u: goto label_7F03CD10;
    case 0x7F03CD14u: goto label_7F03CD14;
    case 0x7F03CD18u: goto label_7F03CD18;
    case 0x7F03CD1Cu: goto label_7F03CD1C;
    case 0x7F03CD20u: goto label_7F03CD20;
    case 0x7F03CD24u: goto label_7F03CD24;
    case 0x7F03CD28u: goto label_7F03CD28;
    case 0x7F03CD2Cu: goto label_7F03CD2C;
    case 0x7F03CD30u: goto label_7F03CD30;
    case 0x7F03CD34u: goto label_7F03CD34;
    case 0x7F03CD38u: goto label_7F03CD38;
    case 0x7F03CD3Cu: goto label_7F03CD3C;
    case 0x7F03CD40u: goto label_7F03CD40;
    case 0x7F03CD44u: goto label_7F03CD44;
    case 0x7F03CD48u: goto label_7F03CD48;
    case 0x7F03CD4Cu: goto label_7F03CD4C;
    case 0x7F03CD50u: goto label_7F03CD50;
    case 0x7F03CD54u: goto label_7F03CD54;
    case 0x7F03CD58u: goto label_7F03CD58;
    case 0x7F03CD5Cu: goto label_7F03CD5C;
    case 0x7F03CD60u: goto label_7F03CD60;
    case 0x7F03CD64u: goto label_7F03CD64;
    case 0x7F03CD68u: goto label_7F03CD68;
    case 0x7F03CD6Cu: goto label_7F03CD6C;
    case 0x7F03CD70u: goto label_7F03CD70;
    case 0x7F03CD74u: goto label_7F03CD74;
    case 0x7F03CD78u: goto label_7F03CD78;
    case 0x7F03CD7Cu: goto label_7F03CD7C;
    case 0x7F03CD80u: goto label_7F03CD80;
    case 0x7F03CD84u: goto label_7F03CD84;
    case 0x7F03CD88u: goto label_7F03CD88;
    case 0x7F03CD8Cu: goto label_7F03CD8C;
    case 0x7F03CD90u: goto label_7F03CD90;
    case 0x7F03CD94u: goto label_7F03CD94;
    case 0x7F03CD98u: goto label_7F03CD98;
    case 0x7F03CD9Cu: goto label_7F03CD9C;
    case 0x7F03CDA0u: goto label_7F03CDA0;
    case 0x7F03CDA4u: goto label_7F03CDA4;
    case 0x7F03CDA8u: goto label_7F03CDA8;
    case 0x7F03CDACu: goto label_7F03CDAC;
    case 0x7F03CDB0u: goto label_7F03CDB0;
    case 0x7F03CDB4u: goto label_7F03CDB4;
    case 0x7F03CDB8u: goto label_7F03CDB8;
    case 0x7F03CDBCu: goto label_7F03CDBC;
    case 0x7F03CDC0u: goto label_7F03CDC0;
    case 0x7F03CDC4u: goto label_7F03CDC4;
    case 0x7F03CDC8u: goto label_7F03CDC8;
    case 0x7F03CDCCu: goto label_7F03CDCC;
    case 0x7F03CDD0u: goto label_7F03CDD0;
    case 0x7F03CDD4u: goto label_7F03CDD4;
    case 0x7F03CDD8u: goto label_7F03CDD8;
    case 0x7F03CDDCu: goto label_7F03CDDC;
    case 0x7F03CDE0u: goto label_7F03CDE0;
    case 0x7F03CDE4u: goto label_7F03CDE4;
    case 0x7F03CDE8u: goto label_7F03CDE8;
    case 0x7F03CDECu: goto label_7F03CDEC;
    case 0x7F03CDF0u: goto label_7F03CDF0;
    case 0x7F03CDF4u: goto label_7F03CDF4;
    case 0x7F03CDF8u: goto label_7F03CDF8;
    case 0x7F03CDFCu: goto label_7F03CDFC;
    case 0x7F03CE00u: goto label_7F03CE00;
    case 0x7F03CE04u: goto label_7F03CE04;
    case 0x7F03CE08u: goto label_7F03CE08;
    case 0x7F03CE0Cu: goto label_7F03CE0C;
    case 0x7F03CE10u: goto label_7F03CE10;
    case 0x7F03CE14u: goto label_7F03CE14;
    case 0x7F03CE18u: goto label_7F03CE18;
    case 0x7F03CE1Cu: goto label_7F03CE1C;
    case 0x7F03CE20u: goto label_7F03CE20;
    case 0x7F03CE24u: goto label_7F03CE24;
    case 0x7F03CE28u: goto label_7F03CE28;
    case 0x7F03CE2Cu: goto label_7F03CE2C;
    case 0x7F03CE30u: goto label_7F03CE30;
    case 0x7F03CE34u: goto label_7F03CE34;
    case 0x7F03CE38u: goto label_7F03CE38;
    case 0x7F03CE3Cu: goto label_7F03CE3C;
    case 0x7F03CE40u: goto label_7F03CE40;
    case 0x7F03CE44u: goto label_7F03CE44;
    case 0x7F03CE48u: goto label_7F03CE48;
    case 0x7F03CE4Cu: goto label_7F03CE4C;
    case 0x7F03CE50u: goto label_7F03CE50;
    case 0x7F03CE54u: goto label_7F03CE54;
    case 0x7F03CE58u: goto label_7F03CE58;
    case 0x7F03CE5Cu: goto label_7F03CE5C;
    case 0x7F03CE60u: goto label_7F03CE60;
    case 0x7F03CE64u: goto label_7F03CE64;
    case 0x7F03CE68u: goto label_7F03CE68;
    case 0x7F03CE6Cu: goto label_7F03CE6C;
    case 0x7F03CE70u: goto label_7F03CE70;
    case 0x7F03CE74u: goto label_7F03CE74;
    case 0x7F03CE78u: goto label_7F03CE78;
    case 0x7F03CE7Cu: goto label_7F03CE7C;
    case 0x7F03CE80u: goto label_7F03CE80;
    case 0x7F03CE84u: goto label_7F03CE84;
    case 0x7F03CE88u: goto label_7F03CE88;
    case 0x7F03CE8Cu: goto label_7F03CE8C;
    case 0x7F03CE90u: goto label_7F03CE90;
    case 0x7F03CE94u: goto label_7F03CE94;
    case 0x7F03CE98u: goto label_7F03CE98;
    case 0x7F03CE9Cu: goto label_7F03CE9C;
    case 0x7F03CEA0u: goto label_7F03CEA0;
    case 0x7F03CEA4u: goto label_7F03CEA4;
    case 0x7F03CEA8u: goto label_7F03CEA8;
    case 0x7F03CEACu: goto label_7F03CEAC;
    case 0x7F03CEB0u: goto label_7F03CEB0;
    case 0x7F03CEB4u: goto label_7F03CEB4;
    case 0x7F03CEB8u: goto label_7F03CEB8;
    case 0x7F03CEBCu: goto label_7F03CEBC;
    case 0x7F03CEC0u: goto label_7F03CEC0;
    case 0x7F03CEC4u: goto label_7F03CEC4;
    case 0x7F03CEC8u: goto label_7F03CEC8;
    case 0x7F03CECCu: goto label_7F03CECC;
    case 0x7F03CED0u: goto label_7F03CED0;
    case 0x7F03CED4u: goto label_7F03CED4;
    case 0x7F03CED8u: goto label_7F03CED8;
    case 0x7F03CEDCu: goto label_7F03CEDC;
    case 0x7F03CEE0u: goto label_7F03CEE0;
    case 0x7F03CEE4u: goto label_7F03CEE4;
    case 0x7F03CEE8u: goto label_7F03CEE8;
    case 0x7F03CEECu: goto label_7F03CEEC;
    case 0x7F03CEF0u: goto label_7F03CEF0;
    case 0x7F03CEF4u: goto label_7F03CEF4;
    case 0x7F03CEF8u: goto label_7F03CEF8;
    case 0x7F03CEFCu: goto label_7F03CEFC;
    case 0x7F03CF00u: goto label_7F03CF00;
    case 0x7F03CF04u: goto label_7F03CF04;
    case 0x7F03CF08u: goto label_7F03CF08;
    case 0x7F03CF0Cu: goto label_7F03CF0C;
    case 0x7F03CF10u: goto label_7F03CF10;
    case 0x7F03CF14u: goto label_7F03CF14;
    case 0x7F03CF18u: goto label_7F03CF18;
    case 0x7F03CF1Cu: goto label_7F03CF1C;
    case 0x7F03CF20u: goto label_7F03CF20;
    case 0x7F03CF24u: goto label_7F03CF24;
    case 0x7F03CF28u: goto label_7F03CF28;
    case 0x7F03CF2Cu: goto label_7F03CF2C;
    case 0x7F03CF30u: goto label_7F03CF30;
    case 0x7F03CF34u: goto label_7F03CF34;
    case 0x7F03CF38u: goto label_7F03CF38;
    case 0x7F03CF3Cu: goto label_7F03CF3C;
    case 0x7F03CF40u: goto label_7F03CF40;
    case 0x7F03CF44u: goto label_7F03CF44;
    case 0x7F03CF48u: goto label_7F03CF48;
    case 0x7F03CF4Cu: goto label_7F03CF4C;
    case 0x7F03CF50u: goto label_7F03CF50;
    case 0x7F03CF54u: goto label_7F03CF54;
    case 0x7F03CF58u: goto label_7F03CF58;
    case 0x7F03CF5Cu: goto label_7F03CF5C;
    case 0x7F03CF60u: goto label_7F03CF60;
    case 0x7F03CF64u: goto label_7F03CF64;
    case 0x7F03CF68u: goto label_7F03CF68;
    case 0x7F03CF6Cu: goto label_7F03CF6C;
    case 0x7F03CF70u: goto label_7F03CF70;
    case 0x7F03CF74u: goto label_7F03CF74;
    case 0x7F03CF78u: goto label_7F03CF78;
    case 0x7F03CF7Cu: goto label_7F03CF7C;
    case 0x7F03CF80u: goto label_7F03CF80;
    case 0x7F03CF84u: goto label_7F03CF84;
    case 0x7F03CF88u: goto label_7F03CF88;
    case 0x7F03CF8Cu: goto label_7F03CF8C;
    case 0x7F03CF90u: goto label_7F03CF90;
    case 0x7F03CF94u: goto label_7F03CF94;
    case 0x7F03CF98u: goto label_7F03CF98;
    case 0x7F03CF9Cu: goto label_7F03CF9C;
    case 0x7F03CFA0u: goto label_7F03CFA0;
    case 0x7F03CFA4u: goto label_7F03CFA4;
    case 0x7F03CFA8u: goto label_7F03CFA8;
    case 0x7F03CFACu: goto label_7F03CFAC;
    case 0x7F03CFB0u: goto label_7F03CFB0;
    case 0x7F03CFB4u: goto label_7F03CFB4;
    case 0x7F03CFB8u: goto label_7F03CFB8;
    case 0x7F03CFBCu: goto label_7F03CFBC;
    case 0x7F03CFC0u: goto label_7F03CFC0;
    case 0x7F03CFC4u: goto label_7F03CFC4;
    case 0x7F03CFC8u: goto label_7F03CFC8;
    case 0x7F03CFCCu: goto label_7F03CFCC;
    case 0x7F03CFD0u: goto label_7F03CFD0;
    case 0x7F03CFD4u: goto label_7F03CFD4;
    case 0x7F03CFD8u: goto label_7F03CFD8;
    case 0x7F03CFDCu: goto label_7F03CFDC;
    case 0x7F03CFE0u: goto label_7F03CFE0;
    case 0x7F03CFE4u: goto label_7F03CFE4;
    case 0x7F03CFE8u: goto label_7F03CFE8;
    case 0x7F03CFECu: goto label_7F03CFEC;
    case 0x7F03CFF0u: goto label_7F03CFF0;
    case 0x7F03CFF4u: goto label_7F03CFF4;
    case 0x7F03CFF8u: goto label_7F03CFF8;
    case 0x7F03CFFCu: goto label_7F03CFFC;
    case 0x7F03D000u: goto label_7F03D000;
    case 0x7F03D004u: goto label_7F03D004;
    case 0x7F03D008u: goto label_7F03D008;
    case 0x7F03D00Cu: goto label_7F03D00C;
    case 0x7F03D010u: goto label_7F03D010;
    case 0x7F03D014u: goto label_7F03D014;
    case 0x7F03D018u: goto label_7F03D018;
    case 0x7F03D01Cu: goto label_7F03D01C;
    case 0x7F03D020u: goto label_7F03D020;
    case 0x7F03D024u: goto label_7F03D024;
    case 0x7F03D028u: goto label_7F03D028;
    case 0x7F03D02Cu: goto label_7F03D02C;
    case 0x7F03D030u: goto label_7F03D030;
    case 0x7F03D034u: goto label_7F03D034;
    case 0x7F03D038u: goto label_7F03D038;
    case 0x7F03D03Cu: goto label_7F03D03C;
    case 0x7F03D040u: goto label_7F03D040;
    case 0x7F03D044u: goto label_7F03D044;
    case 0x7F03D048u: goto label_7F03D048;
    case 0x7F03D04Cu: goto label_7F03D04C;
    case 0x7F03D050u: goto label_7F03D050;
    case 0x7F03D054u: goto label_7F03D054;
    case 0x7F03D058u: goto label_7F03D058;
    case 0x7F03D05Cu: goto label_7F03D05C;
    case 0x7F03D060u: goto label_7F03D060;
    case 0x7F03D064u: goto label_7F03D064;
    case 0x7F03D068u: goto label_7F03D068;
    case 0x7F03D06Cu: goto label_7F03D06C;
    case 0x7F03D070u: goto label_7F03D070;
    case 0x7F03D074u: goto label_7F03D074;
    case 0x7F03D078u: goto label_7F03D078;
    case 0x7F03D07Cu: goto label_7F03D07C;
    case 0x7F03D080u: goto label_7F03D080;
    case 0x7F03D084u: goto label_7F03D084;
    case 0x7F03D088u: goto label_7F03D088;
    case 0x7F03D08Cu: goto label_7F03D08C;
    case 0x7F03D090u: goto label_7F03D090;
    case 0x7F03D094u: goto label_7F03D094;
    case 0x7F03D098u: goto label_7F03D098;
    case 0x7F03D09Cu: goto label_7F03D09C;
    case 0x7F03D0A0u: goto label_7F03D0A0;
    case 0x7F03D0A4u: goto label_7F03D0A4;
    case 0x7F03D0A8u: goto label_7F03D0A8;
    case 0x7F03D0ACu: goto label_7F03D0AC;
    case 0x7F03D0B0u: goto label_7F03D0B0;
    case 0x7F03D0B4u: goto label_7F03D0B4;
    case 0x7F03D0B8u: goto label_7F03D0B8;
    case 0x7F03D0BCu: goto label_7F03D0BC;
    case 0x7F03D0C0u: goto label_7F03D0C0;
    case 0x7F03D0C4u: goto label_7F03D0C4;
    case 0x7F03D0C8u: goto label_7F03D0C8;
    case 0x7F03D0CCu: goto label_7F03D0CC;
    case 0x7F03D0D0u: goto label_7F03D0D0;
    case 0x7F03D0D4u: goto label_7F03D0D4;
    case 0x7F03D0D8u: goto label_7F03D0D8;
    case 0x7F03D0DCu: goto label_7F03D0DC;
    case 0x7F03D0E0u: goto label_7F03D0E0;
    case 0x7F03D0E4u: goto label_7F03D0E4;
    case 0x7F03D0E8u: goto label_7F03D0E8;
    case 0x7F03D0ECu: goto label_7F03D0EC;
    case 0x7F03D0F0u: goto label_7F03D0F0;
    case 0x7F03D0F4u: goto label_7F03D0F4;
    case 0x7F03D0F8u: goto label_7F03D0F8;
    case 0x7F03D0FCu: goto label_7F03D0FC;
    case 0x7F03D100u: goto label_7F03D100;
    case 0x7F03D104u: goto label_7F03D104;
    case 0x7F03D108u: goto label_7F03D108;
    case 0x7F03D10Cu: goto label_7F03D10C;
    case 0x7F03D110u: goto label_7F03D110;
    case 0x7F03D114u: goto label_7F03D114;
    case 0x7F03D118u: goto label_7F03D118;
    case 0x7F03D11Cu: goto label_7F03D11C;
    case 0x7F03D120u: goto label_7F03D120;
    case 0x7F03D124u: goto label_7F03D124;
    case 0x7F03D128u: goto label_7F03D128;
    case 0x7F03D12Cu: goto label_7F03D12C;
    case 0x7F03D130u: goto label_7F03D130;
    case 0x7F03D134u: goto label_7F03D134;
    case 0x7F03D138u: goto label_7F03D138;
    case 0x7F03D13Cu: goto label_7F03D13C;
    case 0x7F03D140u: goto label_7F03D140;
    case 0x7F03D144u: goto label_7F03D144;
    case 0x7F03D148u: goto label_7F03D148;
    case 0x7F03D14Cu: goto label_7F03D14C;
    case 0x7F03D150u: goto label_7F03D150;
    case 0x7F03D154u: goto label_7F03D154;
    case 0x7F03D158u: goto label_7F03D158;
    case 0x7F03D15Cu: goto label_7F03D15C;
    case 0x7F03D160u: goto label_7F03D160;
    case 0x7F03D164u: goto label_7F03D164;
    case 0x7F03D168u: goto label_7F03D168;
    case 0x7F03D16Cu: goto label_7F03D16C;
    case 0x7F03D170u: goto label_7F03D170;
    case 0x7F03D174u: goto label_7F03D174;
    case 0x7F03D178u: goto label_7F03D178;
    case 0x7F03D17Cu: goto label_7F03D17C;
    case 0x7F03D180u: goto label_7F03D180;
    case 0x7F03D184u: goto label_7F03D184;
    case 0x7F03D188u: goto label_7F03D188;
    case 0x7F03D18Cu: goto label_7F03D18C;
    case 0x7F03D190u: goto label_7F03D190;
    case 0x7F03D194u: goto label_7F03D194;
    case 0x7F03D198u: goto label_7F03D198;
    case 0x7F03D19Cu: goto label_7F03D19C;
    case 0x7F03D1A0u: goto label_7F03D1A0;
    case 0x7F03D1A4u: goto label_7F03D1A4;
    case 0x7F03D1A8u: goto label_7F03D1A8;
    case 0x7F03D1ACu: goto label_7F03D1AC;
    case 0x7F03D1B0u: goto label_7F03D1B0;
    case 0x7F03D1B4u: goto label_7F03D1B4;
    case 0x7F03D1B8u: goto label_7F03D1B8;
    case 0x7F03D1BCu: goto label_7F03D1BC;
    case 0x7F03D1C0u: goto label_7F03D1C0;
    case 0x7F03D1C4u: goto label_7F03D1C4;
    case 0x7F03D1C8u: goto label_7F03D1C8;
    case 0x7F03D1CCu: goto label_7F03D1CC;
    case 0x7F03D1D0u: goto label_7F03D1D0;
    case 0x7F03D1D4u: goto label_7F03D1D4;
    case 0x7F03D1D8u: goto label_7F03D1D8;
    case 0x7F03D1DCu: goto label_7F03D1DC;
    case 0x7F03D1E0u: goto label_7F03D1E0;
    case 0x7F03D1E4u: goto label_7F03D1E4;
    case 0x7F03D1E8u: goto label_7F03D1E8;
    case 0x7F03D1ECu: goto label_7F03D1EC;
    case 0x7F03D1F0u: goto label_7F03D1F0;
    case 0x7F03D1F4u: goto label_7F03D1F4;
    case 0x7F03D1F8u: goto label_7F03D1F8;
    case 0x7F03D1FCu: goto label_7F03D1FC;
    case 0x7F03D200u: goto label_7F03D200;
    case 0x7F03D204u: goto label_7F03D204;
    case 0x7F03D208u: goto label_7F03D208;
    case 0x7F03D20Cu: goto label_7F03D20C;
    case 0x7F03D210u: goto label_7F03D210;
    case 0x7F03D214u: goto label_7F03D214;
    case 0x7F03D218u: goto label_7F03D218;
    case 0x7F03D21Cu: goto label_7F03D21C;
    case 0x7F03D220u: goto label_7F03D220;
    case 0x7F03D224u: goto label_7F03D224;
    case 0x7F03D228u: goto label_7F03D228;
    case 0x7F03D22Cu: goto label_7F03D22C;
    case 0x7F03D230u: goto label_7F03D230;
    case 0x7F03D234u: goto label_7F03D234;
    case 0x7F03D238u: goto label_7F03D238;
    case 0x7F03D23Cu: goto label_7F03D23C;
    case 0x7F03D240u: goto label_7F03D240;
    case 0x7F03D244u: goto label_7F03D244;
    case 0x7F03D248u: goto label_7F03D248;
    case 0x7F03D24Cu: goto label_7F03D24C;
    case 0x7F03D250u: goto label_7F03D250;
    case 0x7F03D254u: goto label_7F03D254;
    case 0x7F03D258u: goto label_7F03D258;
    case 0x7F03D25Cu: goto label_7F03D25C;
    case 0x7F03D260u: goto label_7F03D260;
    case 0x7F03D264u: goto label_7F03D264;
    case 0x7F03D268u: goto label_7F03D268;
    case 0x7F03D26Cu: goto label_7F03D26C;
    case 0x7F03D270u: goto label_7F03D270;
    case 0x7F03D274u: goto label_7F03D274;
    case 0x7F03D278u: goto label_7F03D278;
    case 0x7F03D27Cu: goto label_7F03D27C;
    case 0x7F03D280u: goto label_7F03D280;
    case 0x7F03D284u: goto label_7F03D284;
    case 0x7F03D288u: goto label_7F03D288;
    case 0x7F03D28Cu: goto label_7F03D28C;
    case 0x7F03D290u: goto label_7F03D290;
    case 0x7F03D294u: goto label_7F03D294;
    case 0x7F03D298u: goto label_7F03D298;
    case 0x7F03D29Cu: goto label_7F03D29C;
    case 0x7F03D2A0u: goto label_7F03D2A0;
    case 0x7F03D2A4u: goto label_7F03D2A4;
    case 0x7F03D2A8u: goto label_7F03D2A8;
    case 0x7F03D2ACu: goto label_7F03D2AC;
    case 0x7F03D2B0u: goto label_7F03D2B0;
    case 0x7F03D2B4u: goto label_7F03D2B4;
    case 0x7F03D2B8u: goto label_7F03D2B8;
    case 0x7F03D2BCu: goto label_7F03D2BC;
    case 0x7F03D2C0u: goto label_7F03D2C0;
    case 0x7F03D2C4u: goto label_7F03D2C4;
    case 0x7F03D2C8u: goto label_7F03D2C8;
    case 0x7F03D2CCu: goto label_7F03D2CC;
    case 0x7F03D2D0u: goto label_7F03D2D0;
    case 0x7F03D2D4u: goto label_7F03D2D4;
    case 0x7F03D2D8u: goto label_7F03D2D8;
    case 0x7F03D2DCu: goto label_7F03D2DC;
    case 0x7F03D2E0u: goto label_7F03D2E0;
    case 0x7F03D2E4u: goto label_7F03D2E4;
    case 0x7F03D2E8u: goto label_7F03D2E8;
    case 0x7F03D2ECu: goto label_7F03D2EC;
    case 0x7F03D2F0u: goto label_7F03D2F0;
    case 0x7F03D2F4u: goto label_7F03D2F4;
    case 0x7F03D2F8u: goto label_7F03D2F8;
    case 0x7F03D2FCu: goto label_7F03D2FC;
    case 0x7F03D300u: goto label_7F03D300;
    case 0x7F03D304u: goto label_7F03D304;
    case 0x7F03D308u: goto label_7F03D308;
    case 0x7F03D30Cu: goto label_7F03D30C;
    case 0x7F03D310u: goto label_7F03D310;
    case 0x7F03D314u: goto label_7F03D314;
    case 0x7F03D318u: goto label_7F03D318;
    case 0x7F03D31Cu: goto label_7F03D31C;
    case 0x7F03D320u: goto label_7F03D320;
    case 0x7F03D324u: goto label_7F03D324;
    case 0x7F03D328u: goto label_7F03D328;
    case 0x7F03D32Cu: goto label_7F03D32C;
    case 0x7F03D330u: goto label_7F03D330;
    case 0x7F03D334u: goto label_7F03D334;
    case 0x7F03D338u: goto label_7F03D338;
    case 0x7F03D33Cu: goto label_7F03D33C;
    case 0x7F03D340u: goto label_7F03D340;
    case 0x7F03D344u: goto label_7F03D344;
    case 0x7F03D348u: goto label_7F03D348;
    case 0x7F03D34Cu: goto label_7F03D34C;
    case 0x7F03D350u: goto label_7F03D350;
    case 0x7F03D354u: goto label_7F03D354;
    case 0x7F03D358u: goto label_7F03D358;
    case 0x7F03D35Cu: goto label_7F03D35C;
    case 0x7F03D360u: goto label_7F03D360;
    case 0x7F03D364u: goto label_7F03D364;
    case 0x7F03D368u: goto label_7F03D368;
    case 0x7F03D36Cu: goto label_7F03D36C;
    case 0x7F03D370u: goto label_7F03D370;
    case 0x7F03D374u: goto label_7F03D374;
    case 0x7F03D378u: goto label_7F03D378;
    case 0x7F03D37Cu: goto label_7F03D37C;
    case 0x7F03D380u: goto label_7F03D380;
    case 0x7F03D384u: goto label_7F03D384;
    case 0x7F03D388u: goto label_7F03D388;
    case 0x7F03D38Cu: goto label_7F03D38C;
    case 0x7F03D390u: goto label_7F03D390;
    case 0x7F03D394u: goto label_7F03D394;
    case 0x7F03D398u: goto label_7F03D398;
    case 0x7F03D39Cu: goto label_7F03D39C;
    case 0x7F03D3A0u: goto label_7F03D3A0;
    case 0x7F03D3A4u: goto label_7F03D3A4;
    case 0x7F03D3A8u: goto label_7F03D3A8;
    case 0x7F03D3ACu: goto label_7F03D3AC;
    case 0x7F03D3B0u: goto label_7F03D3B0;
    case 0x7F03D3B4u: goto label_7F03D3B4;
    case 0x7F03D3B8u: goto label_7F03D3B8;
    case 0x7F03D3BCu: goto label_7F03D3BC;
    case 0x7F03D3C0u: goto label_7F03D3C0;
    case 0x7F03D3C4u: goto label_7F03D3C4;
    case 0x7F03D3C8u: goto label_7F03D3C8;
    case 0x7F03D3CCu: goto label_7F03D3CC;
    case 0x7F03D3D0u: goto label_7F03D3D0;
    case 0x7F03D3D4u: goto label_7F03D3D4;
    case 0x7F03D3D8u: goto label_7F03D3D8;
    case 0x7F03D3DCu: goto label_7F03D3DC;
    case 0x7F03D3E0u: goto label_7F03D3E0;
    case 0x7F03D3E4u: goto label_7F03D3E4;
    case 0x7F03D3E8u: goto label_7F03D3E8;
    case 0x7F03D3ECu: goto label_7F03D3EC;
    case 0x7F03D3F0u: goto label_7F03D3F0;
    case 0x7F03D3F4u: goto label_7F03D3F4;
    case 0x7F03D3F8u: goto label_7F03D3F8;
    case 0x7F03D3FCu: goto label_7F03D3FC;
    case 0x7F03D400u: goto label_7F03D400;
    case 0x7F03D404u: goto label_7F03D404;
    case 0x7F03D408u: goto label_7F03D408;
    case 0x7F03D40Cu: goto label_7F03D40C;
    case 0x7F03D410u: goto label_7F03D410;
    case 0x7F03D414u: goto label_7F03D414;
    case 0x7F03D418u: goto label_7F03D418;
    case 0x7F03D41Cu: goto label_7F03D41C;
    case 0x7F03D420u: goto label_7F03D420;
    case 0x7F03D424u: goto label_7F03D424;
    case 0x7F03D428u: goto label_7F03D428;
    case 0x7F03D42Cu: goto label_7F03D42C;
    case 0x7F03D430u: goto label_7F03D430;
    case 0x7F03D434u: goto label_7F03D434;
    case 0x7F03D438u: goto label_7F03D438;
    case 0x7F03D43Cu: goto label_7F03D43C;
    case 0x7F03D440u: goto label_7F03D440;
    case 0x7F03D444u: goto label_7F03D444;
    case 0x7F03D448u: goto label_7F03D448;
    case 0x7F03D44Cu: goto label_7F03D44C;
    case 0x7F03D450u: goto label_7F03D450;
    case 0x7F03D454u: goto label_7F03D454;
    case 0x7F03D458u: goto label_7F03D458;
    case 0x7F03D45Cu: goto label_7F03D45C;
    case 0x7F03D460u: goto label_7F03D460;
    case 0x7F03D464u: goto label_7F03D464;
    case 0x7F03D468u: goto label_7F03D468;
    case 0x7F03D46Cu: goto label_7F03D46C;
    case 0x7F03D470u: goto label_7F03D470;
    case 0x7F03D474u: goto label_7F03D474;
    case 0x7F03D478u: goto label_7F03D478;
    case 0x7F03D47Cu: goto label_7F03D47C;
    case 0x7F03D480u: goto label_7F03D480;
    case 0x7F03D484u: goto label_7F03D484;
    case 0x7F03D488u: goto label_7F03D488;
    case 0x7F03D48Cu: goto label_7F03D48C;
    case 0x7F03D490u: goto label_7F03D490;
    case 0x7F03D494u: goto label_7F03D494;
    case 0x7F03D498u: goto label_7F03D498;
    case 0x7F03D49Cu: goto label_7F03D49C;
    case 0x7F03D4A0u: goto label_7F03D4A0;
    case 0x7F03D4A4u: goto label_7F03D4A4;
    case 0x7F03D4A8u: goto label_7F03D4A8;
    case 0x7F03D4ACu: goto label_7F03D4AC;
    case 0x7F03D4B0u: goto label_7F03D4B0;
    case 0x7F03D4B4u: goto label_7F03D4B4;
    case 0x7F03D4B8u: goto label_7F03D4B8;
    case 0x7F03D4BCu: goto label_7F03D4BC;
    case 0x7F03D4C0u: goto label_7F03D4C0;
    case 0x7F03D4C4u: goto label_7F03D4C4;
    case 0x7F03D4C8u: goto label_7F03D4C8;
    case 0x7F03D4CCu: goto label_7F03D4CC;
    case 0x7F03D4D0u: goto label_7F03D4D0;
    case 0x7F03D4D4u: goto label_7F03D4D4;
    case 0x7F03D4D8u: goto label_7F03D4D8;
    case 0x7F03D4DCu: goto label_7F03D4DC;
    case 0x7F03D4E0u: goto label_7F03D4E0;
    case 0x7F03D4E4u: goto label_7F03D4E4;
    case 0x7F03D4E8u: goto label_7F03D4E8;
    case 0x7F03D4ECu: goto label_7F03D4EC;
    case 0x7F03D4F0u: goto label_7F03D4F0;
    case 0x7F03D4F4u: goto label_7F03D4F4;
    case 0x7F03D4F8u: goto label_7F03D4F8;
    case 0x7F03D4FCu: goto label_7F03D4FC;
    case 0x7F03D500u: goto label_7F03D500;
    case 0x7F03D504u: goto label_7F03D504;
    case 0x7F03D508u: goto label_7F03D508;
    case 0x7F03D50Cu: goto label_7F03D50C;
    case 0x7F03D510u: goto label_7F03D510;
    case 0x7F03D514u: goto label_7F03D514;
    case 0x7F03D518u: goto label_7F03D518;
    case 0x7F03D51Cu: goto label_7F03D51C;
    case 0x7F03D520u: goto label_7F03D520;
    case 0x7F03D524u: goto label_7F03D524;
    case 0x7F03D528u: goto label_7F03D528;
    case 0x7F03D52Cu: goto label_7F03D52C;
    case 0x7F03D530u: goto label_7F03D530;
    case 0x7F03D534u: goto label_7F03D534;
    case 0x7F03D538u: goto label_7F03D538;
    case 0x7F03D53Cu: goto label_7F03D53C;
    case 0x7F03D540u: goto label_7F03D540;
    case 0x7F03D544u: goto label_7F03D544;
    case 0x7F03D548u: goto label_7F03D548;
    case 0x7F03D54Cu: goto label_7F03D54C;
    case 0x7F03D550u: goto label_7F03D550;
    case 0x7F03D554u: goto label_7F03D554;
    case 0x7F03D558u: goto label_7F03D558;
    case 0x7F03D55Cu: goto label_7F03D55C;
    case 0x7F03D560u: goto label_7F03D560;
    case 0x7F03D564u: goto label_7F03D564;
    case 0x7F03D568u: goto label_7F03D568;
    case 0x7F03D56Cu: goto label_7F03D56C;
    case 0x7F03D570u: goto label_7F03D570;
    case 0x7F03D574u: goto label_7F03D574;
    case 0x7F03D578u: goto label_7F03D578;
    case 0x7F03D57Cu: goto label_7F03D57C;
    case 0x7F03D580u: goto label_7F03D580;
    case 0x7F03D584u: goto label_7F03D584;
    case 0x7F03D588u: goto label_7F03D588;
    case 0x7F03D58Cu: goto label_7F03D58C;
    case 0x7F03D590u: goto label_7F03D590;
    case 0x7F03D594u: goto label_7F03D594;
    case 0x7F03D598u: goto label_7F03D598;
    case 0x7F03D59Cu: goto label_7F03D59C;
    case 0x7F03D5A0u: goto label_7F03D5A0;
    case 0x7F03D5A4u: goto label_7F03D5A4;
    case 0x7F03D5A8u: goto label_7F03D5A8;
    case 0x7F03D5ACu: goto label_7F03D5AC;
    case 0x7F03D5B0u: goto label_7F03D5B0;
    case 0x7F03D5B4u: goto label_7F03D5B4;
    case 0x7F03D5B8u: goto label_7F03D5B8;
    case 0x7F03D5BCu: goto label_7F03D5BC;
    case 0x7F03D5C0u: goto label_7F03D5C0;
    case 0x7F03D5C4u: goto label_7F03D5C4;
    case 0x7F03D5C8u: goto label_7F03D5C8;
    case 0x7F03D5CCu: goto label_7F03D5CC;
    case 0x7F03D5D0u: goto label_7F03D5D0;
    case 0x7F03D5D4u: goto label_7F03D5D4;
    case 0x7F03D5D8u: goto label_7F03D5D8;
    case 0x7F03D5DCu: goto label_7F03D5DC;
    case 0x7F03D5E0u: goto label_7F03D5E0;
    case 0x7F03D5E4u: goto label_7F03D5E4;
    case 0x7F03D5E8u: goto label_7F03D5E8;
    case 0x7F03D5ECu: goto label_7F03D5EC;
    case 0x7F03D5F0u: goto label_7F03D5F0;
    case 0x7F03D5F4u: goto label_7F03D5F4;
    case 0x7F03D5F8u: goto label_7F03D5F8;
    case 0x7F03D5FCu: goto label_7F03D5FC;
    case 0x7F03D600u: goto label_7F03D600;
    case 0x7F03D604u: goto label_7F03D604;
    case 0x7F03D608u: goto label_7F03D608;
    case 0x7F03D60Cu: goto label_7F03D60C;
    case 0x7F03D610u: goto label_7F03D610;
    case 0x7F03D614u: goto label_7F03D614;
    case 0x7F03D618u: goto label_7F03D618;
    case 0x7F03D61Cu: goto label_7F03D61C;
    case 0x7F03D620u: goto label_7F03D620;
    case 0x7F03D624u: goto label_7F03D624;
    case 0x7F03D628u: goto label_7F03D628;
    case 0x7F03D62Cu: goto label_7F03D62C;
    case 0x7F03D630u: goto label_7F03D630;
    case 0x7F03D634u: goto label_7F03D634;
    case 0x7F03D638u: goto label_7F03D638;
    case 0x7F03D63Cu: goto label_7F03D63C;
    case 0x7F03D640u: goto label_7F03D640;
    case 0x7F03D644u: goto label_7F03D644;
    case 0x7F03D648u: goto label_7F03D648;
    case 0x7F03D64Cu: goto label_7F03D64C;
    case 0x7F03D650u: goto label_7F03D650;
    case 0x7F03D654u: goto label_7F03D654;
    case 0x7F03D658u: goto label_7F03D658;
    case 0x7F03D65Cu: goto label_7F03D65C;
    case 0x7F03D660u: goto label_7F03D660;
    case 0x7F03D664u: goto label_7F03D664;
    case 0x7F03D668u: goto label_7F03D668;
    case 0x7F03D66Cu: goto label_7F03D66C;
    case 0x7F03D670u: goto label_7F03D670;
    case 0x7F03D674u: goto label_7F03D674;
    case 0x7F03D678u: goto label_7F03D678;
    case 0x7F03D67Cu: goto label_7F03D67C;
    case 0x7F03D680u: goto label_7F03D680;
    case 0x7F03D684u: goto label_7F03D684;
    case 0x7F03D688u: goto label_7F03D688;
    case 0x7F03D68Cu: goto label_7F03D68C;
    case 0x7F03D690u: goto label_7F03D690;
    case 0x7F03D694u: goto label_7F03D694;
    case 0x7F03D698u: goto label_7F03D698;
    case 0x7F03D69Cu: goto label_7F03D69C;
    case 0x7F03D6A0u: goto label_7F03D6A0;
    case 0x7F03D6A4u: goto label_7F03D6A4;
    case 0x7F03D6A8u: goto label_7F03D6A8;
    case 0x7F03D6ACu: goto label_7F03D6AC;
    case 0x7F03D6B0u: goto label_7F03D6B0;
    case 0x7F03D6B4u: goto label_7F03D6B4;
    case 0x7F03D6B8u: goto label_7F03D6B8;
    case 0x7F03D6BCu: goto label_7F03D6BC;
    case 0x7F03D6C0u: goto label_7F03D6C0;
    case 0x7F03D6C4u: goto label_7F03D6C4;
    case 0x7F03D6C8u: goto label_7F03D6C8;
    case 0x7F03D6CCu: goto label_7F03D6CC;
    case 0x7F03D6D0u: goto label_7F03D6D0;
    case 0x7F03D6D4u: goto label_7F03D6D4;
    case 0x7F03D6D8u: goto label_7F03D6D8;
    case 0x7F03D6DCu: goto label_7F03D6DC;
    case 0x7F03D6E0u: goto label_7F03D6E0;
    case 0x7F03D6E4u: goto label_7F03D6E4;
    case 0x7F03D6E8u: goto label_7F03D6E8;
    case 0x7F03D6ECu: goto label_7F03D6EC;
    case 0x7F03D6F0u: goto label_7F03D6F0;
    case 0x7F03D6F4u: goto label_7F03D6F4;
    case 0x7F03D6F8u: goto label_7F03D6F8;
    case 0x7F03D6FCu: goto label_7F03D6FC;
    case 0x7F03D700u: goto label_7F03D700;
    case 0x7F03D704u: goto label_7F03D704;
    case 0x7F03D708u: goto label_7F03D708;
    case 0x7F03D70Cu: goto label_7F03D70C;
    case 0x7F03D710u: goto label_7F03D710;
    case 0x7F03D714u: goto label_7F03D714;
    case 0x7F03D718u: goto label_7F03D718;
    case 0x7F03D71Cu: goto label_7F03D71C;
    case 0x7F03D720u: goto label_7F03D720;
    case 0x7F03D724u: goto label_7F03D724;
    case 0x7F03D728u: goto label_7F03D728;
    case 0x7F03D72Cu: goto label_7F03D72C;
    case 0x7F03D730u: goto label_7F03D730;
    case 0x7F03D734u: goto label_7F03D734;
    case 0x7F03D738u: goto label_7F03D738;
    case 0x7F03D73Cu: goto label_7F03D73C;
    case 0x7F03D740u: goto label_7F03D740;
    case 0x7F03D744u: goto label_7F03D744;
    case 0x7F03D748u: goto label_7F03D748;
    case 0x7F03D74Cu: goto label_7F03D74C;
    case 0x7F03D750u: goto label_7F03D750;
    case 0x7F03D754u: goto label_7F03D754;
    case 0x7F03D758u: goto label_7F03D758;
    case 0x7F03D75Cu: goto label_7F03D75C;
    case 0x7F03D760u: goto label_7F03D760;
    case 0x7F03D764u: goto label_7F03D764;
    case 0x7F03D768u: goto label_7F03D768;
    case 0x7F03D76Cu: goto label_7F03D76C;
    case 0x7F03D770u: goto label_7F03D770;
    case 0x7F03D774u: goto label_7F03D774;
    case 0x7F03D778u: goto label_7F03D778;
    case 0x7F03D77Cu: goto label_7F03D77C;
    case 0x7F03D780u: goto label_7F03D780;
    case 0x7F03D784u: goto label_7F03D784;
    case 0x7F03D788u: goto label_7F03D788;
    case 0x7F03D78Cu: goto label_7F03D78C;
    case 0x7F03D790u: goto label_7F03D790;
    case 0x7F03D794u: goto label_7F03D794;
    case 0x7F03D798u: goto label_7F03D798;
    case 0x7F03D79Cu: goto label_7F03D79C;
    case 0x7F03D7A0u: goto label_7F03D7A0;
    case 0x7F03D7A4u: goto label_7F03D7A4;
    case 0x7F03D7A8u: goto label_7F03D7A8;
    case 0x7F03D7ACu: goto label_7F03D7AC;
    case 0x7F03D7B0u: goto label_7F03D7B0;
    case 0x7F03D7B4u: goto label_7F03D7B4;
    case 0x7F03D7B8u: goto label_7F03D7B8;
    case 0x7F03D7BCu: goto label_7F03D7BC;
    case 0x7F03D7C0u: goto label_7F03D7C0;
    case 0x7F03D7C4u: goto label_7F03D7C4;
    case 0x7F03D7C8u: goto label_7F03D7C8;
    case 0x7F03D7CCu: goto label_7F03D7CC;
    case 0x7F03D7D0u: goto label_7F03D7D0;
    case 0x7F03D7D4u: goto label_7F03D7D4;
    case 0x7F03D7D8u: goto label_7F03D7D8;
    case 0x7F03D7DCu: goto label_7F03D7DC;
    case 0x7F03D7E0u: goto label_7F03D7E0;
    case 0x7F03D7E4u: goto label_7F03D7E4;
    case 0x7F03D7E8u: goto label_7F03D7E8;
    case 0x7F03D7ECu: goto label_7F03D7EC;
    case 0x7F03D7F0u: goto label_7F03D7F0;
    case 0x7F03D7F4u: goto label_7F03D7F4;
    case 0x7F03D7F8u: goto label_7F03D7F8;
    case 0x7F03D7FCu: goto label_7F03D7FC;
    case 0x7F03D800u: goto label_7F03D800;
    case 0x7F03D804u: goto label_7F03D804;
    case 0x7F03D808u: goto label_7F03D808;
    case 0x7F03D80Cu: goto label_7F03D80C;
    case 0x7F03D810u: goto label_7F03D810;
    case 0x7F03D814u: goto label_7F03D814;
    case 0x7F03D818u: goto label_7F03D818;
    case 0x7F03D81Cu: goto label_7F03D81C;
    case 0x7F03D820u: goto label_7F03D820;
    case 0x7F03D824u: goto label_7F03D824;
    case 0x7F03D828u: goto label_7F03D828;
    case 0x7F03D82Cu: goto label_7F03D82C;
    case 0x7F03D830u: goto label_7F03D830;
    case 0x7F03D834u: goto label_7F03D834;
    case 0x7F03D838u: goto label_7F03D838;
    case 0x7F03D83Cu: goto label_7F03D83C;
    case 0x7F03D840u: goto label_7F03D840;
    case 0x7F03D844u: goto label_7F03D844;
    case 0x7F03D848u: goto label_7F03D848;
    case 0x7F03D84Cu: goto label_7F03D84C;
    case 0x7F03D850u: goto label_7F03D850;
    case 0x7F03D854u: goto label_7F03D854;
    case 0x7F03D858u: goto label_7F03D858;
    case 0x7F03D85Cu: goto label_7F03D85C;
    case 0x7F03D860u: goto label_7F03D860;
    case 0x7F03D864u: goto label_7F03D864;
    case 0x7F03D868u: goto label_7F03D868;
    case 0x7F03D86Cu: goto label_7F03D86C;
    case 0x7F03D870u: goto label_7F03D870;
    case 0x7F03D874u: goto label_7F03D874;
    case 0x7F03D878u: goto label_7F03D878;
    case 0x7F03D87Cu: goto label_7F03D87C;
    case 0x7F03D880u: goto label_7F03D880;
    case 0x7F03D884u: goto label_7F03D884;
    case 0x7F03D888u: goto label_7F03D888;
    case 0x7F03D88Cu: goto label_7F03D88C;
    case 0x7F03D890u: goto label_7F03D890;
    case 0x7F03D894u: goto label_7F03D894;
    case 0x7F03D898u: goto label_7F03D898;
    case 0x7F03D89Cu: goto label_7F03D89C;
    case 0x7F03D8A0u: goto label_7F03D8A0;
    case 0x7F03D8A4u: goto label_7F03D8A4;
    case 0x7F03D8A8u: goto label_7F03D8A8;
    case 0x7F03D8ACu: goto label_7F03D8AC;
    case 0x7F03D8B0u: goto label_7F03D8B0;
    case 0x7F03D8B4u: goto label_7F03D8B4;
    case 0x7F03D8B8u: goto label_7F03D8B8;
    case 0x7F03D8BCu: goto label_7F03D8BC;
    case 0x7F03D8C0u: goto label_7F03D8C0;
    case 0x7F03D8C4u: goto label_7F03D8C4;
    case 0x7F03D8C8u: goto label_7F03D8C8;
    case 0x7F03D8CCu: goto label_7F03D8CC;
    case 0x7F03D8D0u: goto label_7F03D8D0;
    case 0x7F03D8D4u: goto label_7F03D8D4;
    case 0x7F03D8D8u: goto label_7F03D8D8;
    case 0x7F03D8DCu: goto label_7F03D8DC;
    case 0x7F03D8E0u: goto label_7F03D8E0;
    case 0x7F03D8E4u: goto label_7F03D8E4;
    case 0x7F03D8E8u: goto label_7F03D8E8;
    case 0x7F03D8ECu: goto label_7F03D8EC;
    case 0x7F03D8F0u: goto label_7F03D8F0;
    case 0x7F03D8F4u: goto label_7F03D8F4;
    case 0x7F03D8F8u: goto label_7F03D8F8;
    case 0x7F03D8FCu: goto label_7F03D8FC;
    case 0x7F03D900u: goto label_7F03D900;
    case 0x7F03D904u: goto label_7F03D904;
    case 0x7F03D908u: goto label_7F03D908;
    case 0x7F03D90Cu: goto label_7F03D90C;
    case 0x7F03D910u: goto label_7F03D910;
    case 0x7F03D914u: goto label_7F03D914;
    case 0x7F03D918u: goto label_7F03D918;
    case 0x7F03D91Cu: goto label_7F03D91C;
    case 0x7F03D920u: goto label_7F03D920;
    case 0x7F03D924u: goto label_7F03D924;
    case 0x7F03D928u: goto label_7F03D928;
    case 0x7F03D92Cu: goto label_7F03D92C;
    case 0x7F03D930u: goto label_7F03D930;
    case 0x7F03D934u: goto label_7F03D934;
    case 0x7F03D938u: goto label_7F03D938;
    case 0x7F03D93Cu: goto label_7F03D93C;
    case 0x7F03D940u: goto label_7F03D940;
    case 0x7F03D944u: goto label_7F03D944;
    case 0x7F03D948u: goto label_7F03D948;
    case 0x7F03D94Cu: goto label_7F03D94C;
    case 0x7F03D950u: goto label_7F03D950;
    case 0x7F03D954u: goto label_7F03D954;
    case 0x7F03D958u: goto label_7F03D958;
    case 0x7F03D95Cu: goto label_7F03D95C;
    case 0x7F03D960u: goto label_7F03D960;
    case 0x7F03D964u: goto label_7F03D964;
    case 0x7F03D968u: goto label_7F03D968;
    case 0x7F03D96Cu: goto label_7F03D96C;
    case 0x7F03D970u: goto label_7F03D970;
    case 0x7F03D974u: goto label_7F03D974;
    case 0x7F03D978u: goto label_7F03D978;
    case 0x7F03D97Cu: goto label_7F03D97C;
    case 0x7F03D980u: goto label_7F03D980;
    case 0x7F03D984u: goto label_7F03D984;
    case 0x7F03D988u: goto label_7F03D988;
    case 0x7F03D98Cu: goto label_7F03D98C;
    case 0x7F03D990u: goto label_7F03D990;
    case 0x7F03D994u: goto label_7F03D994;
    case 0x7F03D998u: goto label_7F03D998;
    case 0x7F03D99Cu: goto label_7F03D99C;
    case 0x7F03D9A0u: goto label_7F03D9A0;
    case 0x7F03D9A4u: goto label_7F03D9A4;
    case 0x7F03D9A8u: goto label_7F03D9A8;
    case 0x7F03D9ACu: goto label_7F03D9AC;
    case 0x7F03D9B0u: goto label_7F03D9B0;
    case 0x7F03D9B4u: goto label_7F03D9B4;
    case 0x7F03D9B8u: goto label_7F03D9B8;
    case 0x7F03D9BCu: goto label_7F03D9BC;
    case 0x7F03D9C0u: goto label_7F03D9C0;
    case 0x7F03D9C4u: goto label_7F03D9C4;
    case 0x7F03D9C8u: goto label_7F03D9C8;
    case 0x7F03D9CCu: goto label_7F03D9CC;
    case 0x7F03D9D0u: goto label_7F03D9D0;
    case 0x7F03D9D4u: goto label_7F03D9D4;
    case 0x7F03D9D8u: goto label_7F03D9D8;
    case 0x7F03D9DCu: goto label_7F03D9DC;
    case 0x7F03D9E0u: goto label_7F03D9E0;
    case 0x7F03D9E4u: goto label_7F03D9E4;
    case 0x7F03D9E8u: goto label_7F03D9E8;
    case 0x7F03D9ECu: goto label_7F03D9EC;
    case 0x7F03D9F0u: goto label_7F03D9F0;
    case 0x7F03D9F4u: goto label_7F03D9F4;
    case 0x7F03D9F8u: goto label_7F03D9F8;
    case 0x7F03D9FCu: goto label_7F03D9FC;
    case 0x7F03DA00u: goto label_7F03DA00;
    case 0x7F03DA04u: goto label_7F03DA04;
    case 0x7F03DA08u: goto label_7F03DA08;
    case 0x7F03DA0Cu: goto label_7F03DA0C;
    case 0x7F03DA10u: goto label_7F03DA10;
    case 0x7F03DA14u: goto label_7F03DA14;
    case 0x7F03DA18u: goto label_7F03DA18;
    case 0x7F03DA1Cu: goto label_7F03DA1C;
    case 0x7F03DA20u: goto label_7F03DA20;
    case 0x7F03DA24u: goto label_7F03DA24;
    case 0x7F03DA28u: goto label_7F03DA28;
    case 0x7F03DA2Cu: goto label_7F03DA2C;
    case 0x7F03DA30u: goto label_7F03DA30;
    case 0x7F03DA34u: goto label_7F03DA34;
    case 0x7F03DA38u: goto label_7F03DA38;
    case 0x7F03DA3Cu: goto label_7F03DA3C;
    case 0x7F03DA40u: goto label_7F03DA40;
    case 0x7F03DA44u: goto label_7F03DA44;
    case 0x7F03DA48u: goto label_7F03DA48;
    case 0x7F03DA4Cu: goto label_7F03DA4C;
    case 0x7F03DA50u: goto label_7F03DA50;
    case 0x7F03DA54u: goto label_7F03DA54;
    case 0x7F03DA58u: goto label_7F03DA58;
    case 0x7F03DA5Cu: goto label_7F03DA5C;
    case 0x7F03DA60u: goto label_7F03DA60;
    case 0x7F03DA64u: goto label_7F03DA64;
    case 0x7F03DA68u: goto label_7F03DA68;
    case 0x7F03DA6Cu: goto label_7F03DA6C;
    case 0x7F03DA70u: goto label_7F03DA70;
    case 0x7F03DA74u: goto label_7F03DA74;
    case 0x7F03DA78u: goto label_7F03DA78;
    case 0x7F03DA7Cu: goto label_7F03DA7C;
    case 0x7F03DA80u: goto label_7F03DA80;
    case 0x7F03DA84u: goto label_7F03DA84;
    case 0x7F03DA88u: goto label_7F03DA88;
    case 0x7F03DA8Cu: goto label_7F03DA8C;
    case 0x7F03DA90u: goto label_7F03DA90;
    case 0x7F03DA94u: goto label_7F03DA94;
    case 0x7F03DA98u: goto label_7F03DA98;
    case 0x7F03DA9Cu: goto label_7F03DA9C;
    case 0x7F03DAA0u: goto label_7F03DAA0;
    case 0x7F03DAA4u: goto label_7F03DAA4;
    case 0x7F03DAA8u: goto label_7F03DAA8;
    case 0x7F03DAACu: goto label_7F03DAAC;
    case 0x7F03DAB0u: goto label_7F03DAB0;
    case 0x7F03DAB4u: goto label_7F03DAB4;
    case 0x7F03DAB8u: goto label_7F03DAB8;
    case 0x7F03DABCu: goto label_7F03DABC;
    case 0x7F03DAC0u: goto label_7F03DAC0;
    case 0x7F03DAC4u: goto label_7F03DAC4;
    case 0x7F03DAC8u: goto label_7F03DAC8;
    case 0x7F03DACCu: goto label_7F03DACC;
    case 0x7F03DAD0u: goto label_7F03DAD0;
    case 0x7F03DAD4u: goto label_7F03DAD4;
    case 0x7F03DAD8u: goto label_7F03DAD8;
    case 0x7F03DADCu: goto label_7F03DADC;
    case 0x7F03DAE0u: goto label_7F03DAE0;
    case 0x7F03DAE4u: goto label_7F03DAE4;
    case 0x7F03DAE8u: goto label_7F03DAE8;
    case 0x7F03DAECu: goto label_7F03DAEC;
    case 0x7F03DAF0u: goto label_7F03DAF0;
    case 0x7F03DAF4u: goto label_7F03DAF4;
    case 0x7F03DAF8u: goto label_7F03DAF8;
    case 0x7F03DAFCu: goto label_7F03DAFC;
    case 0x7F03DB00u: goto label_7F03DB00;
    case 0x7F03DB04u: goto label_7F03DB04;
    case 0x7F03DB08u: goto label_7F03DB08;
    case 0x7F03DB0Cu: goto label_7F03DB0C;
    case 0x7F03DB10u: goto label_7F03DB10;
    case 0x7F03DB14u: goto label_7F03DB14;
    case 0x7F03DB18u: goto label_7F03DB18;
    case 0x7F03DB1Cu: goto label_7F03DB1C;
    case 0x7F03DB20u: goto label_7F03DB20;
    case 0x7F03DB24u: goto label_7F03DB24;
    case 0x7F03DB28u: goto label_7F03DB28;
    case 0x7F03DB2Cu: goto label_7F03DB2C;
    case 0x7F03DB30u: goto label_7F03DB30;
    case 0x7F03DB34u: goto label_7F03DB34;
    case 0x7F03DB38u: goto label_7F03DB38;
    case 0x7F03DB3Cu: goto label_7F03DB3C;
    case 0x7F03DB40u: goto label_7F03DB40;
    case 0x7F03DB44u: goto label_7F03DB44;
    case 0x7F03DB48u: goto label_7F03DB48;
    case 0x7F03DB4Cu: goto label_7F03DB4C;
    case 0x7F03DB50u: goto label_7F03DB50;
    case 0x7F03DB54u: goto label_7F03DB54;
    case 0x7F03DB58u: goto label_7F03DB58;
    case 0x7F03DB5Cu: goto label_7F03DB5C;
    case 0x7F03DB60u: goto label_7F03DB60;
    case 0x7F03DB64u: goto label_7F03DB64;
    case 0x7F03DB68u: goto label_7F03DB68;
    case 0x7F03DB6Cu: goto label_7F03DB6C;
    case 0x7F03DB70u: goto label_7F03DB70;
    case 0x7F03DB74u: goto label_7F03DB74;
    case 0x7F03DB78u: goto label_7F03DB78;
    case 0x7F03DB7Cu: goto label_7F03DB7C;
    case 0x7F03DB80u: goto label_7F03DB80;
    case 0x7F03DB84u: goto label_7F03DB84;
    case 0x7F03DB88u: goto label_7F03DB88;
    case 0x7F03DB8Cu: goto label_7F03DB8C;
    case 0x7F03DB90u: goto label_7F03DB90;
    case 0x7F03DB94u: goto label_7F03DB94;
    case 0x7F03DB98u: goto label_7F03DB98;
    case 0x7F03DB9Cu: goto label_7F03DB9C;
    case 0x7F03DBA0u: goto label_7F03DBA0;
    case 0x7F03DBA4u: goto label_7F03DBA4;
    case 0x7F03DBA8u: goto label_7F03DBA8;
    case 0x7F03DBACu: goto label_7F03DBAC;
    case 0x7F03DBB0u: goto label_7F03DBB0;
    case 0x7F03DBB4u: goto label_7F03DBB4;
    case 0x7F03DBB8u: goto label_7F03DBB8;
    case 0x7F03DBBCu: goto label_7F03DBBC;
    case 0x7F03DBC0u: goto label_7F03DBC0;
    case 0x7F03DBC4u: goto label_7F03DBC4;
    case 0x7F03DBC8u: goto label_7F03DBC8;
    case 0x7F03DBCCu: goto label_7F03DBCC;
    case 0x7F03DBD0u: goto label_7F03DBD0;
    case 0x7F03DBD4u: goto label_7F03DBD4;
    case 0x7F03DBD8u: goto label_7F03DBD8;
    case 0x7F03DBDCu: goto label_7F03DBDC;
    case 0x7F03DBE0u: goto label_7F03DBE0;
    case 0x7F03DBE4u: goto label_7F03DBE4;
    case 0x7F03DBE8u: goto label_7F03DBE8;
    case 0x7F03DBECu: goto label_7F03DBEC;
    case 0x7F03DBF0u: goto label_7F03DBF0;
    case 0x7F03DBF4u: goto label_7F03DBF4;
    case 0x7F03DBF8u: goto label_7F03DBF8;
    case 0x7F03DBFCu: goto label_7F03DBFC;
    case 0x7F03DC00u: goto label_7F03DC00;
    case 0x7F03DC04u: goto label_7F03DC04;
    case 0x7F03DC08u: goto label_7F03DC08;
    case 0x7F03DC0Cu: goto label_7F03DC0C;
    case 0x7F03DC10u: goto label_7F03DC10;
    case 0x7F03DC14u: goto label_7F03DC14;
    case 0x7F03DC18u: goto label_7F03DC18;
    case 0x7F03DC1Cu: goto label_7F03DC1C;
    case 0x7F03DC20u: goto label_7F03DC20;
    case 0x7F03DC24u: goto label_7F03DC24;
    case 0x7F03DC28u: goto label_7F03DC28;
    case 0x7F03DC2Cu: goto label_7F03DC2C;
    case 0x7F03DC30u: goto label_7F03DC30;
    case 0x7F03DC34u: goto label_7F03DC34;
    case 0x7F03DC38u: goto label_7F03DC38;
    case 0x7F03DC3Cu: goto label_7F03DC3C;
    case 0x7F03DC40u: goto label_7F03DC40;
    case 0x7F03DC44u: goto label_7F03DC44;
    case 0x7F03DC48u: goto label_7F03DC48;
    case 0x7F03DC4Cu: goto label_7F03DC4C;
    case 0x7F03DC50u: goto label_7F03DC50;
    case 0x7F03DC54u: goto label_7F03DC54;
    case 0x7F03DC58u: goto label_7F03DC58;
    case 0x7F03DC5Cu: goto label_7F03DC5C;
    case 0x7F03DC60u: goto label_7F03DC60;
    case 0x7F03DC64u: goto label_7F03DC64;
    case 0x7F03DC68u: goto label_7F03DC68;
    case 0x7F03DC6Cu: goto label_7F03DC6C;
    case 0x7F03DC70u: goto label_7F03DC70;
    case 0x7F03DC74u: goto label_7F03DC74;
    case 0x7F03DC78u: goto label_7F03DC78;
    case 0x7F03DC7Cu: goto label_7F03DC7C;
    case 0x7F03DC80u: goto label_7F03DC80;
    case 0x7F03DC84u: goto label_7F03DC84;
    case 0x7F03DC88u: goto label_7F03DC88;
    case 0x7F03DC8Cu: goto label_7F03DC8C;
    case 0x7F03DC90u: goto label_7F03DC90;
    case 0x7F03DC94u: goto label_7F03DC94;
    case 0x7F03DC98u: goto label_7F03DC98;
    case 0x7F03DC9Cu: goto label_7F03DC9C;
    case 0x7F03DCA0u: goto label_7F03DCA0;
    case 0x7F03DCA4u: goto label_7F03DCA4;
    case 0x7F03DCA8u: goto label_7F03DCA8;
    case 0x7F03DCACu: goto label_7F03DCAC;
    case 0x7F03DCB0u: goto label_7F03DCB0;
    case 0x7F03DCB4u: goto label_7F03DCB4;
    case 0x7F03DCB8u: goto label_7F03DCB8;
    case 0x7F03DCBCu: goto label_7F03DCBC;
    case 0x7F03DCC0u: goto label_7F03DCC0;
    case 0x7F03DCC4u: goto label_7F03DCC4;
    case 0x7F03DCC8u: goto label_7F03DCC8;
    case 0x7F03DCCCu: goto label_7F03DCCC;
    case 0x7F03DCD0u: goto label_7F03DCD0;
    case 0x7F03DCD4u: goto label_7F03DCD4;
    case 0x7F03DCD8u: goto label_7F03DCD8;
    case 0x7F03DCDCu: goto label_7F03DCDC;
    case 0x7F03DCE0u: goto label_7F03DCE0;
    case 0x7F03DCE4u: goto label_7F03DCE4;
    case 0x7F03DCE8u: goto label_7F03DCE8;
    case 0x7F03DCECu: goto label_7F03DCEC;
    case 0x7F03DCF0u: goto label_7F03DCF0;
    case 0x7F03DCF4u: goto label_7F03DCF4;
    case 0x7F03DCF8u: goto label_7F03DCF8;
    case 0x7F03DCFCu: goto label_7F03DCFC;
    case 0x7F03DD00u: goto label_7F03DD00;
    case 0x7F03DD04u: goto label_7F03DD04;
    case 0x7F03DD08u: goto label_7F03DD08;
    case 0x7F03DD0Cu: goto label_7F03DD0C;
    case 0x7F03DD10u: goto label_7F03DD10;
    case 0x7F03DD14u: goto label_7F03DD14;
    case 0x7F03DD18u: goto label_7F03DD18;
    case 0x7F03DD1Cu: goto label_7F03DD1C;
    case 0x7F03DD20u: goto label_7F03DD20;
    case 0x7F03DD24u: goto label_7F03DD24;
    case 0x7F03DD28u: goto label_7F03DD28;
    case 0x7F03DD2Cu: goto label_7F03DD2C;
    case 0x7F03DD30u: goto label_7F03DD30;
    case 0x7F03DD34u: goto label_7F03DD34;
    case 0x7F03DD38u: goto label_7F03DD38;
    case 0x7F03DD3Cu: goto label_7F03DD3C;
    case 0x7F03DD40u: goto label_7F03DD40;
    case 0x7F03DD44u: goto label_7F03DD44;
    case 0x7F03DD48u: goto label_7F03DD48;
    case 0x7F03DD4Cu: goto label_7F03DD4C;
    case 0x7F03DD50u: goto label_7F03DD50;
    case 0x7F03DD54u: goto label_7F03DD54;
    case 0x7F03DD58u: goto label_7F03DD58;
    case 0x7F03DD5Cu: goto label_7F03DD5C;
    case 0x7F03DD60u: goto label_7F03DD60;
    case 0x7F03DD64u: goto label_7F03DD64;
    case 0x7F03DD68u: goto label_7F03DD68;
    case 0x7F03DD6Cu: goto label_7F03DD6C;
    case 0x7F03DD70u: goto label_7F03DD70;
    case 0x7F03DD74u: goto label_7F03DD74;
    case 0x7F03DD78u: goto label_7F03DD78;
    case 0x7F03DD7Cu: goto label_7F03DD7C;
    case 0x7F03DD80u: goto label_7F03DD80;
    case 0x7F03DD84u: goto label_7F03DD84;
    case 0x7F03DD88u: goto label_7F03DD88;
    case 0x7F03DD8Cu: goto label_7F03DD8C;
    case 0x7F03DD90u: goto label_7F03DD90;
    case 0x7F03DD94u: goto label_7F03DD94;
    case 0x7F03DD98u: goto label_7F03DD98;
    case 0x7F03DD9Cu: goto label_7F03DD9C;
    case 0x7F03DDA0u: goto label_7F03DDA0;
    case 0x7F03DDA4u: goto label_7F03DDA4;
    case 0x7F03DDA8u: goto label_7F03DDA8;
    case 0x7F03DDACu: goto label_7F03DDAC;
    case 0x7F03DDB0u: goto label_7F03DDB0;
    case 0x7F03DDB4u: goto label_7F03DDB4;
    case 0x7F03DDB8u: goto label_7F03DDB8;
    case 0x7F03DDBCu: goto label_7F03DDBC;
    case 0x7F03DDC0u: goto label_7F03DDC0;
    case 0x7F03DDC4u: goto label_7F03DDC4;
    case 0x7F03DDC8u: goto label_7F03DDC8;
    case 0x7F03DDCCu: goto label_7F03DDCC;
    case 0x7F03DDD0u: goto label_7F03DDD0;
    case 0x7F03DDD4u: goto label_7F03DDD4;
    case 0x7F03DDD8u: goto label_7F03DDD8;
    case 0x7F03DDDCu: goto label_7F03DDDC;
    case 0x7F03DDE0u: goto label_7F03DDE0;
    case 0x7F03DDE4u: goto label_7F03DDE4;
    case 0x7F03DDE8u: goto label_7F03DDE8;
    case 0x7F03DDECu: goto label_7F03DDEC;
    case 0x7F03DDF0u: goto label_7F03DDF0;
    case 0x7F03DDF4u: goto label_7F03DDF4;
    case 0x7F03DDF8u: goto label_7F03DDF8;
    case 0x7F03DDFCu: goto label_7F03DDFC;
    case 0x7F03DE00u: goto label_7F03DE00;
    case 0x7F03DE04u: goto label_7F03DE04;
    case 0x7F03DE08u: goto label_7F03DE08;
    case 0x7F03DE0Cu: goto label_7F03DE0C;
    case 0x7F03DE10u: goto label_7F03DE10;
    case 0x7F03DE14u: goto label_7F03DE14;
    case 0x7F03DE18u: goto label_7F03DE18;
    case 0x7F03DE1Cu: goto label_7F03DE1C;
    case 0x7F03DE20u: goto label_7F03DE20;
    case 0x7F03DE24u: goto label_7F03DE24;
    case 0x7F03DE28u: goto label_7F03DE28;
    case 0x7F03DE2Cu: goto label_7F03DE2C;
    case 0x7F03DE30u: goto label_7F03DE30;
    case 0x7F03DE34u: goto label_7F03DE34;
    case 0x7F03DE38u: goto label_7F03DE38;
    case 0x7F03DE3Cu: goto label_7F03DE3C;
    case 0x7F03DE40u: goto label_7F03DE40;
    case 0x7F03DE44u: goto label_7F03DE44;
    case 0x7F03DE48u: goto label_7F03DE48;
    case 0x7F03DE4Cu: goto label_7F03DE4C;
    case 0x7F03DE50u: goto label_7F03DE50;
    case 0x7F03DE54u: goto label_7F03DE54;
    case 0x7F03DE58u: goto label_7F03DE58;
    case 0x7F03DE5Cu: goto label_7F03DE5C;
    case 0x7F03DE60u: goto label_7F03DE60;
    case 0x7F03DE64u: goto label_7F03DE64;
    case 0x7F03DE68u: goto label_7F03DE68;
    case 0x7F03DE6Cu: goto label_7F03DE6C;
    case 0x7F03DE70u: goto label_7F03DE70;
    case 0x7F03DE74u: goto label_7F03DE74;
    case 0x7F03DE78u: goto label_7F03DE78;
    case 0x7F03DE7Cu: goto label_7F03DE7C;
    case 0x7F03DE80u: goto label_7F03DE80;
    case 0x7F03DE84u: goto label_7F03DE84;
    case 0x7F03DE88u: goto label_7F03DE88;
    case 0x7F03DE8Cu: goto label_7F03DE8C;
    case 0x7F03DE90u: goto label_7F03DE90;
    case 0x7F03DE94u: goto label_7F03DE94;
    case 0x7F03DE98u: goto label_7F03DE98;
    case 0x7F03DE9Cu: goto label_7F03DE9C;
    case 0x7F03DEA0u: goto label_7F03DEA0;
    case 0x7F03DEA4u: goto label_7F03DEA4;
    case 0x7F03DEA8u: goto label_7F03DEA8;
    case 0x7F03DEACu: goto label_7F03DEAC;
    case 0x7F03DEB0u: goto label_7F03DEB0;
    case 0x7F03DEB4u: goto label_7F03DEB4;
    case 0x7F03DEB8u: goto label_7F03DEB8;
    case 0x7F03DEBCu: goto label_7F03DEBC;
    case 0x7F03DEC0u: goto label_7F03DEC0;
    case 0x7F03DEC4u: goto label_7F03DEC4;
    case 0x7F03DEC8u: goto label_7F03DEC8;
    case 0x7F03DECCu: goto label_7F03DECC;
    case 0x7F03DED0u: goto label_7F03DED0;
    case 0x7F03DED4u: goto label_7F03DED4;
    case 0x7F03DED8u: goto label_7F03DED8;
    case 0x7F03DEDCu: goto label_7F03DEDC;
    case 0x7F03DEE0u: goto label_7F03DEE0;
    case 0x7F03DEE4u: goto label_7F03DEE4;
    case 0x7F03DEE8u: goto label_7F03DEE8;
    case 0x7F03DEECu: goto label_7F03DEEC;
    case 0x7F03DEF0u: goto label_7F03DEF0;
    case 0x7F03DEF4u: goto label_7F03DEF4;
    case 0x7F03DEF8u: goto label_7F03DEF8;
    case 0x7F03DEFCu: goto label_7F03DEFC;
    case 0x7F03DF00u: goto label_7F03DF00;
    case 0x7F03DF04u: goto label_7F03DF04;
    case 0x7F03DF08u: goto label_7F03DF08;
    case 0x7F03DF0Cu: goto label_7F03DF0C;
    case 0x7F03DF10u: goto label_7F03DF10;
    case 0x7F03DF14u: goto label_7F03DF14;
    case 0x7F03DF18u: goto label_7F03DF18;
    case 0x7F03DF1Cu: goto label_7F03DF1C;
    case 0x7F03DF20u: goto label_7F03DF20;
    case 0x7F03DF24u: goto label_7F03DF24;
    case 0x7F03DF28u: goto label_7F03DF28;
    case 0x7F03DF2Cu: goto label_7F03DF2C;
    case 0x7F03DF30u: goto label_7F03DF30;
    case 0x7F03DF34u: goto label_7F03DF34;
    case 0x7F03DF38u: goto label_7F03DF38;
    case 0x7F03DF3Cu: goto label_7F03DF3C;
    case 0x7F03DF40u: goto label_7F03DF40;
    case 0x7F03DF44u: goto label_7F03DF44;
    case 0x7F03DF48u: goto label_7F03DF48;
    case 0x7F03DF4Cu: goto label_7F03DF4C;
    case 0x7F03DF50u: goto label_7F03DF50;
    case 0x7F03DF54u: goto label_7F03DF54;
    case 0x7F03DF58u: goto label_7F03DF58;
    case 0x7F03DF5Cu: goto label_7F03DF5C;
    case 0x7F03DF60u: goto label_7F03DF60;
    case 0x7F03DF64u: goto label_7F03DF64;
    case 0x7F03DF68u: goto label_7F03DF68;
    case 0x7F03DF6Cu: goto label_7F03DF6C;
    case 0x7F03DF70u: goto label_7F03DF70;
    case 0x7F03DF74u: goto label_7F03DF74;
    case 0x7F03DF78u: goto label_7F03DF78;
    case 0x7F03DF7Cu: goto label_7F03DF7C;
    case 0x7F03DF80u: goto label_7F03DF80;
    case 0x7F03DF84u: goto label_7F03DF84;
    case 0x7F03DF88u: goto label_7F03DF88;
    case 0x7F03DF8Cu: goto label_7F03DF8C;
    case 0x7F03DF90u: goto label_7F03DF90;
    case 0x7F03DF94u: goto label_7F03DF94;
    case 0x7F03DF98u: goto label_7F03DF98;
    case 0x7F03DF9Cu: goto label_7F03DF9C;
    case 0x7F03DFA0u: goto label_7F03DFA0;
    case 0x7F03DFA4u: goto label_7F03DFA4;
    case 0x7F03DFA8u: goto label_7F03DFA8;
    case 0x7F03DFACu: goto label_7F03DFAC;
    case 0x7F03DFB0u: goto label_7F03DFB0;
    case 0x7F03DFB4u: goto label_7F03DFB4;
    case 0x7F03DFB8u: goto label_7F03DFB8;
    case 0x7F03DFBCu: goto label_7F03DFBC;
    case 0x7F03DFC0u: goto label_7F03DFC0;
    case 0x7F03DFC4u: goto label_7F03DFC4;
    case 0x7F03DFC8u: goto label_7F03DFC8;
    case 0x7F03DFCCu: goto label_7F03DFCC;
    case 0x7F03DFD0u: goto label_7F03DFD0;
    case 0x7F03DFD4u: goto label_7F03DFD4;
    case 0x7F03DFD8u: goto label_7F03DFD8;
    case 0x7F03DFDCu: goto label_7F03DFDC;
    case 0x7F03DFE0u: goto label_7F03DFE0;
    case 0x7F03DFE4u: goto label_7F03DFE4;
    case 0x7F03DFE8u: goto label_7F03DFE8;
    case 0x7F03DFECu: goto label_7F03DFEC;
    case 0x7F03DFF0u: goto label_7F03DFF0;
    case 0x7F03DFF4u: goto label_7F03DFF4;
    case 0x7F03DFF8u: goto label_7F03DFF8;
    case 0x7F03DFFCu: goto label_7F03DFFC;
    case 0x7F03E000u: goto label_7F03E000;
    case 0x7F03E004u: goto label_7F03E004;
    case 0x7F03E008u: goto label_7F03E008;
    case 0x7F03E00Cu: goto label_7F03E00C;
    case 0x7F03E010u: goto label_7F03E010;
    case 0x7F03E014u: goto label_7F03E014;
    case 0x7F03E018u: goto label_7F03E018;
    case 0x7F03E01Cu: goto label_7F03E01C;
    case 0x7F03E020u: goto label_7F03E020;
    case 0x7F03E024u: goto label_7F03E024;
    case 0x7F03E028u: goto label_7F03E028;
    case 0x7F03E02Cu: goto label_7F03E02C;
    case 0x7F03E030u: goto label_7F03E030;
    case 0x7F03E034u: goto label_7F03E034;
    case 0x7F03E038u: goto label_7F03E038;
    case 0x7F03E03Cu: goto label_7F03E03C;
    case 0x7F03E040u: goto label_7F03E040;
    case 0x7F03E044u: goto label_7F03E044;
    case 0x7F03E048u: goto label_7F03E048;
    case 0x7F03E04Cu: goto label_7F03E04C;
    case 0x7F03E050u: goto label_7F03E050;
    case 0x7F03E054u: goto label_7F03E054;
    case 0x7F03E058u: goto label_7F03E058;
    case 0x7F03E05Cu: goto label_7F03E05C;
    case 0x7F03E060u: goto label_7F03E060;
    case 0x7F03E064u: goto label_7F03E064;
    case 0x7F03E068u: goto label_7F03E068;
    case 0x7F03E06Cu: goto label_7F03E06C;
    case 0x7F03E070u: goto label_7F03E070;
    case 0x7F03E074u: goto label_7F03E074;
    case 0x7F03E078u: goto label_7F03E078;
    case 0x7F03E07Cu: goto label_7F03E07C;
    case 0x7F03E080u: goto label_7F03E080;
    case 0x7F03E084u: goto label_7F03E084;
    case 0x7F03E088u: goto label_7F03E088;
    case 0x7F03E08Cu: goto label_7F03E08C;
    case 0x7F03E090u: goto label_7F03E090;
    case 0x7F03E094u: goto label_7F03E094;
    case 0x7F03E098u: goto label_7F03E098;
    case 0x7F03E09Cu: goto label_7F03E09C;
    case 0x7F03E0A0u: goto label_7F03E0A0;
    case 0x7F03E0A4u: goto label_7F03E0A4;
    case 0x7F03E0A8u: goto label_7F03E0A8;
    case 0x7F03E0ACu: goto label_7F03E0AC;
    case 0x7F03E0B0u: goto label_7F03E0B0;
    case 0x7F03E0B4u: goto label_7F03E0B4;
    case 0x7F03E0B8u: goto label_7F03E0B8;
    case 0x7F03E0BCu: goto label_7F03E0BC;
    case 0x7F03E0C0u: goto label_7F03E0C0;
    case 0x7F03E0C4u: goto label_7F03E0C4;
    case 0x7F03E0C8u: goto label_7F03E0C8;
    case 0x7F03E0CCu: goto label_7F03E0CC;
    case 0x7F03E0D0u: goto label_7F03E0D0;
    case 0x7F03E0D4u: goto label_7F03E0D4;
    case 0x7F03E0D8u: goto label_7F03E0D8;
    case 0x7F03E0DCu: goto label_7F03E0DC;
    case 0x7F03E0E0u: goto label_7F03E0E0;
    case 0x7F03E0E4u: goto label_7F03E0E4;
    case 0x7F03E0E8u: goto label_7F03E0E8;
    case 0x7F03E0ECu: goto label_7F03E0EC;
    case 0x7F03E0F0u: goto label_7F03E0F0;
    case 0x7F03E0F4u: goto label_7F03E0F4;
    case 0x7F03E0F8u: goto label_7F03E0F8;
    case 0x7F03E0FCu: goto label_7F03E0FC;
    case 0x7F03E100u: goto label_7F03E100;
    case 0x7F03E104u: goto label_7F03E104;
    case 0x7F03E108u: goto label_7F03E108;
    case 0x7F03E10Cu: goto label_7F03E10C;
    case 0x7F03E110u: goto label_7F03E110;
    case 0x7F03E114u: goto label_7F03E114;
    case 0x7F03E118u: goto label_7F03E118;
    case 0x7F03E11Cu: goto label_7F03E11C;
    case 0x7F03E120u: goto label_7F03E120;
    case 0x7F03E124u: goto label_7F03E124;
    case 0x7F03E128u: goto label_7F03E128;
    case 0x7F03E12Cu: goto label_7F03E12C;
    case 0x7F03E130u: goto label_7F03E130;
    case 0x7F03E134u: goto label_7F03E134;
    case 0x7F03E138u: goto label_7F03E138;
    case 0x7F03E13Cu: goto label_7F03E13C;
    case 0x7F03E140u: goto label_7F03E140;
    case 0x7F03E144u: goto label_7F03E144;
    case 0x7F03E148u: goto label_7F03E148;
    case 0x7F03E14Cu: goto label_7F03E14C;
    case 0x7F03E150u: goto label_7F03E150;
    case 0x7F03E154u: goto label_7F03E154;
    case 0x7F03E158u: goto label_7F03E158;
    case 0x7F03E15Cu: goto label_7F03E15C;
    case 0x7F03E160u: goto label_7F03E160;
    case 0x7F03E164u: goto label_7F03E164;
    case 0x7F03E168u: goto label_7F03E168;
    case 0x7F03E16Cu: goto label_7F03E16C;
    case 0x7F03E170u: goto label_7F03E170;
    case 0x7F03E174u: goto label_7F03E174;
    case 0x7F03E178u: goto label_7F03E178;
    case 0x7F03E17Cu: goto label_7F03E17C;
    case 0x7F03E180u: goto label_7F03E180;
    case 0x7F03E184u: goto label_7F03E184;
    case 0x7F03E188u: goto label_7F03E188;
    case 0x7F03E18Cu: goto label_7F03E18C;
    case 0x7F03E190u: goto label_7F03E190;
    case 0x7F03E194u: goto label_7F03E194;
    case 0x7F03E198u: goto label_7F03E198;
    case 0x7F03E19Cu: goto label_7F03E19C;
    case 0x7F03E1A0u: goto label_7F03E1A0;
    case 0x7F03E1A4u: goto label_7F03E1A4;
    case 0x7F03E1A8u: goto label_7F03E1A8;
    case 0x7F03E1ACu: goto label_7F03E1AC;
    case 0x7F03E1B0u: goto label_7F03E1B0;
    case 0x7F03E1B4u: goto label_7F03E1B4;
    case 0x7F03E1B8u: goto label_7F03E1B8;
    case 0x7F03E1BCu: goto label_7F03E1BC;
    case 0x7F03E1C0u: goto label_7F03E1C0;
    case 0x7F03E1C4u: goto label_7F03E1C4;
    case 0x7F03E1C8u: goto label_7F03E1C8;
    case 0x7F03E1CCu: goto label_7F03E1CC;
    case 0x7F03E1D0u: goto label_7F03E1D0;
    case 0x7F03E1D4u: goto label_7F03E1D4;
    case 0x7F03E1D8u: goto label_7F03E1D8;
    case 0x7F03E1DCu: goto label_7F03E1DC;
    case 0x7F03E1E0u: goto label_7F03E1E0;
    case 0x7F03E1E4u: goto label_7F03E1E4;
    case 0x7F03E1E8u: goto label_7F03E1E8;
    case 0x7F03E1ECu: goto label_7F03E1EC;
    case 0x7F03E1F0u: goto label_7F03E1F0;
    case 0x7F03E1F4u: goto label_7F03E1F4;
    case 0x7F03E1F8u: goto label_7F03E1F8;
    case 0x7F03E1FCu: goto label_7F03E1FC;
    case 0x7F03E200u: goto label_7F03E200;
    case 0x7F03E204u: goto label_7F03E204;
    case 0x7F03E208u: goto label_7F03E208;
    case 0x7F03E20Cu: goto label_7F03E20C;
    case 0x7F03E210u: goto label_7F03E210;
    case 0x7F03E214u: goto label_7F03E214;
    case 0x7F03E218u: goto label_7F03E218;
    case 0x7F03E21Cu: goto label_7F03E21C;
    case 0x7F03E220u: goto label_7F03E220;
    case 0x7F03E224u: goto label_7F03E224;
    case 0x7F03E228u: goto label_7F03E228;
    case 0x7F03E22Cu: goto label_7F03E22C;
    case 0x7F03E230u: goto label_7F03E230;
    case 0x7F03E234u: goto label_7F03E234;
    case 0x7F03E238u: goto label_7F03E238;
    case 0x7F03E23Cu: goto label_7F03E23C;
    case 0x7F03E240u: goto label_7F03E240;
    case 0x7F03E244u: goto label_7F03E244;
    case 0x7F03E248u: goto label_7F03E248;
    case 0x7F03E24Cu: goto label_7F03E24C;
    case 0x7F03E250u: goto label_7F03E250;
    case 0x7F03E254u: goto label_7F03E254;
    case 0x7F03E258u: goto label_7F03E258;
    case 0x7F03E25Cu: goto label_7F03E25C;
    case 0x7F03E260u: goto label_7F03E260;
    case 0x7F03E264u: goto label_7F03E264;
    case 0x7F03E268u: goto label_7F03E268;
    case 0x7F03E26Cu: goto label_7F03E26C;
    case 0x7F03E270u: goto label_7F03E270;
    case 0x7F03E274u: goto label_7F03E274;
    case 0x7F03E278u: goto label_7F03E278;
    case 0x7F03E27Cu: goto label_7F03E27C;
    case 0x7F03E280u: goto label_7F03E280;
    case 0x7F03E284u: goto label_7F03E284;
    case 0x7F03E288u: goto label_7F03E288;
    case 0x7F03E28Cu: goto label_7F03E28C;
    case 0x7F03E290u: goto label_7F03E290;
    case 0x7F03E294u: goto label_7F03E294;
    case 0x7F03E298u: goto label_7F03E298;
    case 0x7F03E29Cu: goto label_7F03E29C;
    case 0x7F03E2A0u: goto label_7F03E2A0;
    case 0x7F03E2A4u: goto label_7F03E2A4;
    case 0x7F03E2A8u: goto label_7F03E2A8;
    case 0x7F03E2ACu: goto label_7F03E2AC;
    case 0x7F03E2B0u: goto label_7F03E2B0;
    case 0x7F03E2B4u: goto label_7F03E2B4;
    case 0x7F03E2B8u: goto label_7F03E2B8;
    case 0x7F03E2BCu: goto label_7F03E2BC;
    case 0x7F03E2C0u: goto label_7F03E2C0;
    case 0x7F03E2C4u: goto label_7F03E2C4;
    case 0x7F03E2C8u: goto label_7F03E2C8;
    case 0x7F03E2CCu: goto label_7F03E2CC;
    case 0x7F03E2D0u: goto label_7F03E2D0;
    case 0x7F03E2D4u: goto label_7F03E2D4;
    case 0x7F03E2D8u: goto label_7F03E2D8;
    case 0x7F03E2DCu: goto label_7F03E2DC;
    case 0x7F03E2E0u: goto label_7F03E2E0;
    case 0x7F03E2E4u: goto label_7F03E2E4;
    case 0x7F03E2E8u: goto label_7F03E2E8;
    case 0x7F03E2ECu: goto label_7F03E2EC;
    case 0x7F03E2F0u: goto label_7F03E2F0;
    case 0x7F03E2F4u: goto label_7F03E2F4;
    case 0x7F03E2F8u: goto label_7F03E2F8;
    case 0x7F03E2FCu: goto label_7F03E2FC;
    case 0x7F03E300u: goto label_7F03E300;
    case 0x7F03E304u: goto label_7F03E304;
    case 0x7F03E308u: goto label_7F03E308;
    case 0x7F03E30Cu: goto label_7F03E30C;
    case 0x7F03E310u: goto label_7F03E310;
    case 0x7F03E314u: goto label_7F03E314;
    case 0x7F03E318u: goto label_7F03E318;
    case 0x7F03E31Cu: goto label_7F03E31C;
    case 0x7F03E320u: goto label_7F03E320;
    case 0x7F03E324u: goto label_7F03E324;
    case 0x7F03E328u: goto label_7F03E328;
    case 0x7F03E32Cu: goto label_7F03E32C;
    case 0x7F03E330u: goto label_7F03E330;
    case 0x7F03E334u: goto label_7F03E334;
    case 0x7F03E338u: goto label_7F03E338;
    case 0x7F03E33Cu: goto label_7F03E33C;
    case 0x7F03E340u: goto label_7F03E340;
    case 0x7F03E344u: goto label_7F03E344;
    case 0x7F03E348u: goto label_7F03E348;
    case 0x7F03E34Cu: goto label_7F03E34C;
    case 0x7F03E350u: goto label_7F03E350;
    case 0x7F03E354u: goto label_7F03E354;
    case 0x7F03E358u: goto label_7F03E358;
    case 0x7F03E35Cu: goto label_7F03E35C;
    case 0x7F03E360u: goto label_7F03E360;
    case 0x7F03E364u: goto label_7F03E364;
    case 0x7F03E368u: goto label_7F03E368;
    case 0x7F03E36Cu: goto label_7F03E36C;
    case 0x7F03E370u: goto label_7F03E370;
    case 0x7F03E374u: goto label_7F03E374;
    case 0x7F03E378u: goto label_7F03E378;
    case 0x7F03E37Cu: goto label_7F03E37C;
    case 0x7F03E380u: goto label_7F03E380;
    case 0x7F03E384u: goto label_7F03E384;
    case 0x7F03E388u: goto label_7F03E388;
    case 0x7F03E38Cu: goto label_7F03E38C;
    case 0x7F03E390u: goto label_7F03E390;
    case 0x7F03E394u: goto label_7F03E394;
    case 0x7F03E398u: goto label_7F03E398;
    case 0x7F03E39Cu: goto label_7F03E39C;
    case 0x7F03E3A0u: goto label_7F03E3A0;
    case 0x7F03E3A4u: goto label_7F03E3A4;
    case 0x7F03E3A8u: goto label_7F03E3A8;
    case 0x7F03E3ACu: goto label_7F03E3AC;
    case 0x7F03E3B0u: goto label_7F03E3B0;
    case 0x7F03E3B4u: goto label_7F03E3B4;
    case 0x7F03E3B8u: goto label_7F03E3B8;
    case 0x7F03E3BCu: goto label_7F03E3BC;
    case 0x7F03E3C0u: goto label_7F03E3C0;
    case 0x7F03E3C4u: goto label_7F03E3C4;
    case 0x7F03E3C8u: goto label_7F03E3C8;
    case 0x7F03E3CCu: goto label_7F03E3CC;
    case 0x7F03E3D0u: goto label_7F03E3D0;
    case 0x7F03E3D4u: goto label_7F03E3D4;
    case 0x7F03E3D8u: goto label_7F03E3D8;
    case 0x7F03E3DCu: goto label_7F03E3DC;
    case 0x7F03E3E0u: goto label_7F03E3E0;
    case 0x7F03E3E4u: goto label_7F03E3E4;
    case 0x7F03E3E8u: goto label_7F03E3E8;
    case 0x7F03E3ECu: goto label_7F03E3EC;
    case 0x7F03E3F0u: goto label_7F03E3F0;
    case 0x7F03E3F4u: goto label_7F03E3F4;
    case 0x7F03E3F8u: goto label_7F03E3F8;
    case 0x7F03E3FCu: goto label_7F03E3FC;
    case 0x7F03E400u: goto label_7F03E400;
    case 0x7F03E404u: goto label_7F03E404;
    case 0x7F03E408u: goto label_7F03E408;
    case 0x7F03E40Cu: goto label_7F03E40C;
    case 0x7F03E410u: goto label_7F03E410;
    case 0x7F03E414u: goto label_7F03E414;
    case 0x7F03E418u: goto label_7F03E418;
    case 0x7F03E41Cu: goto label_7F03E41C;
    case 0x7F03E420u: goto label_7F03E420;
    case 0x7F03E424u: goto label_7F03E424;
    case 0x7F03E428u: goto label_7F03E428;
    case 0x7F03E42Cu: goto label_7F03E42C;
    case 0x7F03E430u: goto label_7F03E430;
    case 0x7F03E434u: goto label_7F03E434;
    case 0x7F03E438u: goto label_7F03E438;
    case 0x7F03E43Cu: goto label_7F03E43C;
    case 0x7F03E440u: goto label_7F03E440;
    case 0x7F03E444u: goto label_7F03E444;
    case 0x7F03E448u: goto label_7F03E448;
    case 0x7F03E44Cu: goto label_7F03E44C;
    case 0x7F03E450u: goto label_7F03E450;
    case 0x7F03E454u: goto label_7F03E454;
    case 0x7F03E458u: goto label_7F03E458;
    case 0x7F03E45Cu: goto label_7F03E45C;
    case 0x7F03E460u: goto label_7F03E460;
    case 0x7F03E464u: goto label_7F03E464;
    case 0x7F03E468u: goto label_7F03E468;
    case 0x7F03E46Cu: goto label_7F03E46C;
    case 0x7F03E470u: goto label_7F03E470;
    case 0x7F03E474u: goto label_7F03E474;
    case 0x7F03E478u: goto label_7F03E478;
    case 0x7F03E47Cu: goto label_7F03E47C;
    case 0x7F03E480u: goto label_7F03E480;
    case 0x7F03E484u: goto label_7F03E484;
    case 0x7F03E488u: goto label_7F03E488;
    case 0x7F03E48Cu: goto label_7F03E48C;
    case 0x7F03E490u: goto label_7F03E490;
    case 0x7F03E494u: goto label_7F03E494;
    case 0x7F03E498u: goto label_7F03E498;
    case 0x7F03E49Cu: goto label_7F03E49C;
    case 0x7F03E4A0u: goto label_7F03E4A0;
    case 0x7F03E4A4u: goto label_7F03E4A4;
    case 0x7F03E4A8u: goto label_7F03E4A8;
    case 0x7F03E4ACu: goto label_7F03E4AC;
    case 0x7F03E4B0u: goto label_7F03E4B0;
    case 0x7F03E4B4u: goto label_7F03E4B4;
    case 0x7F03E4B8u: goto label_7F03E4B8;
    case 0x7F03E4BCu: goto label_7F03E4BC;
    case 0x7F03E4C0u: goto label_7F03E4C0;
    case 0x7F03E4C4u: goto label_7F03E4C4;
    case 0x7F03E4C8u: goto label_7F03E4C8;
    case 0x7F03E4CCu: goto label_7F03E4CC;
    case 0x7F03E4D0u: goto label_7F03E4D0;
    case 0x7F03E4D4u: goto label_7F03E4D4;
    case 0x7F03E4D8u: goto label_7F03E4D8;
    case 0x7F03E4DCu: goto label_7F03E4DC;
    case 0x7F03E4E0u: goto label_7F03E4E0;
    case 0x7F03E4E4u: goto label_7F03E4E4;
    case 0x7F03E4E8u: goto label_7F03E4E8;
    case 0x7F03E4ECu: goto label_7F03E4EC;
    case 0x7F03E4F0u: goto label_7F03E4F0;
    case 0x7F03E4F4u: goto label_7F03E4F4;
    case 0x7F03E4F8u: goto label_7F03E4F8;
    case 0x7F03E4FCu: goto label_7F03E4FC;
    case 0x7F03E500u: goto label_7F03E500;
    case 0x7F03E504u: goto label_7F03E504;
    case 0x7F03E508u: goto label_7F03E508;
    case 0x7F03E50Cu: goto label_7F03E50C;
    case 0x7F03E510u: goto label_7F03E510;
    case 0x7F03E514u: goto label_7F03E514;
    case 0x7F03E518u: goto label_7F03E518;
    case 0x7F03E51Cu: goto label_7F03E51C;
    case 0x7F03E520u: goto label_7F03E520;
    case 0x7F03E524u: goto label_7F03E524;
    case 0x7F03E528u: goto label_7F03E528;
    case 0x7F03E52Cu: goto label_7F03E52C;
    case 0x7F03E530u: goto label_7F03E530;
    case 0x7F03E534u: goto label_7F03E534;
    case 0x7F03E538u: goto label_7F03E538;
    case 0x7F03E53Cu: goto label_7F03E53C;
    case 0x7F03E540u: goto label_7F03E540;
    case 0x7F03E544u: goto label_7F03E544;
    case 0x7F03E548u: goto label_7F03E548;
    case 0x7F03E54Cu: goto label_7F03E54C;
    case 0x7F03E550u: goto label_7F03E550;
    case 0x7F03E554u: goto label_7F03E554;
    case 0x7F03E558u: goto label_7F03E558;
    case 0x7F03E55Cu: goto label_7F03E55C;
    case 0x7F03E560u: goto label_7F03E560;
    case 0x7F03E564u: goto label_7F03E564;
    case 0x7F03E568u: goto label_7F03E568;
    case 0x7F03E56Cu: goto label_7F03E56C;
    case 0x7F03E570u: goto label_7F03E570;
    case 0x7F03E574u: goto label_7F03E574;
    case 0x7F03E578u: goto label_7F03E578;
    case 0x7F03E57Cu: goto label_7F03E57C;
    case 0x7F03E580u: goto label_7F03E580;
    case 0x7F03E584u: goto label_7F03E584;
    case 0x7F03E588u: goto label_7F03E588;
    case 0x7F03E58Cu: goto label_7F03E58C;
    case 0x7F03E590u: goto label_7F03E590;
    case 0x7F03E594u: goto label_7F03E594;
    case 0x7F03E598u: goto label_7F03E598;
    case 0x7F03E59Cu: goto label_7F03E59C;
    case 0x7F03E5A0u: goto label_7F03E5A0;
    case 0x7F03E5A4u: goto label_7F03E5A4;
    case 0x7F03E5A8u: goto label_7F03E5A8;
    case 0x7F03E5ACu: goto label_7F03E5AC;
    case 0x7F03E5B0u: goto label_7F03E5B0;
    case 0x7F03E5B4u: goto label_7F03E5B4;
    case 0x7F03E5B8u: goto label_7F03E5B8;
    case 0x7F03E5BCu: goto label_7F03E5BC;
    case 0x7F03E5C0u: goto label_7F03E5C0;
    case 0x7F03E5C4u: goto label_7F03E5C4;
    case 0x7F03E5C8u: goto label_7F03E5C8;
    case 0x7F03E5CCu: goto label_7F03E5CC;
    case 0x7F03E5D0u: goto label_7F03E5D0;
    case 0x7F03E5D4u: goto label_7F03E5D4;
    case 0x7F03E5D8u: goto label_7F03E5D8;
    case 0x7F03E5DCu: goto label_7F03E5DC;
    case 0x7F03E5E0u: goto label_7F03E5E0;
    case 0x7F03E5E4u: goto label_7F03E5E4;
    case 0x7F03E5E8u: goto label_7F03E5E8;
    case 0x7F03E5ECu: goto label_7F03E5EC;
    case 0x7F03E5F0u: goto label_7F03E5F0;
    case 0x7F03E5F4u: goto label_7F03E5F4;
    case 0x7F03E5F8u: goto label_7F03E5F8;
    case 0x7F03E5FCu: goto label_7F03E5FC;
    case 0x7F03E600u: goto label_7F03E600;
    case 0x7F03E604u: goto label_7F03E604;
    case 0x7F03E608u: goto label_7F03E608;
    case 0x7F03E60Cu: goto label_7F03E60C;
    case 0x7F03E610u: goto label_7F03E610;
    case 0x7F03E614u: goto label_7F03E614;
    case 0x7F03E618u: goto label_7F03E618;
    case 0x7F03E61Cu: goto label_7F03E61C;
    case 0x7F03E620u: goto label_7F03E620;
    case 0x7F03E624u: goto label_7F03E624;
    case 0x7F03E628u: goto label_7F03E628;
    case 0x7F03E62Cu: goto label_7F03E62C;
    case 0x7F03E630u: goto label_7F03E630;
    case 0x7F03E634u: goto label_7F03E634;
    case 0x7F03E638u: goto label_7F03E638;
    case 0x7F03E63Cu: goto label_7F03E63C;
    case 0x7F03E640u: goto label_7F03E640;
    case 0x7F03E644u: goto label_7F03E644;
    case 0x7F03E648u: goto label_7F03E648;
    case 0x7F03E64Cu: goto label_7F03E64C;
    case 0x7F03E650u: goto label_7F03E650;
    case 0x7F03E654u: goto label_7F03E654;
    case 0x7F03E658u: goto label_7F03E658;
    case 0x7F03E65Cu: goto label_7F03E65C;
    case 0x7F03E660u: goto label_7F03E660;
    case 0x7F03E664u: goto label_7F03E664;
    case 0x7F03E668u: goto label_7F03E668;
    case 0x7F03E66Cu: goto label_7F03E66C;
    case 0x7F03E670u: goto label_7F03E670;
    case 0x7F03E674u: goto label_7F03E674;
    case 0x7F03E678u: goto label_7F03E678;
    case 0x7F03E67Cu: goto label_7F03E67C;
    case 0x7F03E680u: goto label_7F03E680;
    case 0x7F03E684u: goto label_7F03E684;
    case 0x7F03E688u: goto label_7F03E688;
    case 0x7F03E68Cu: goto label_7F03E68C;
    case 0x7F03E690u: goto label_7F03E690;
    case 0x7F03E694u: goto label_7F03E694;
    case 0x7F03E698u: goto label_7F03E698;
    case 0x7F03E69Cu: goto label_7F03E69C;
    case 0x7F03E6A0u: goto label_7F03E6A0;
    case 0x7F03E6A4u: goto label_7F03E6A4;
    case 0x7F03E6A8u: goto label_7F03E6A8;
    case 0x7F03E6ACu: goto label_7F03E6AC;
    case 0x7F03E6B0u: goto label_7F03E6B0;
    case 0x7F03E6B4u: goto label_7F03E6B4;
    case 0x7F03E6B8u: goto label_7F03E6B8;
    case 0x7F03E6BCu: goto label_7F03E6BC;
    case 0x7F03E6C0u: goto label_7F03E6C0;
    case 0x7F03E6C4u: goto label_7F03E6C4;
    case 0x7F03E6C8u: goto label_7F03E6C8;
    case 0x7F03E6CCu: goto label_7F03E6CC;
    case 0x7F03E6D0u: goto label_7F03E6D0;
    case 0x7F03E6D4u: goto label_7F03E6D4;
    case 0x7F03E6D8u: goto label_7F03E6D8;
    case 0x7F03E6DCu: goto label_7F03E6DC;
    case 0x7F03E6E0u: goto label_7F03E6E0;
    case 0x7F03E6E4u: goto label_7F03E6E4;
    case 0x7F03E6E8u: goto label_7F03E6E8;
    case 0x7F03E6ECu: goto label_7F03E6EC;
    case 0x7F03E6F0u: goto label_7F03E6F0;
    case 0x7F03E6F4u: goto label_7F03E6F4;
    case 0x7F03E6F8u: goto label_7F03E6F8;
    case 0x7F03E6FCu: goto label_7F03E6FC;
    case 0x7F03E700u: goto label_7F03E700;
    case 0x7F03E704u: goto label_7F03E704;
    case 0x7F03E708u: goto label_7F03E708;
    case 0x7F03E70Cu: goto label_7F03E70C;
    case 0x7F03E710u: goto label_7F03E710;
    case 0x7F03E714u: goto label_7F03E714;
    case 0x7F03E718u: goto label_7F03E718;
    case 0x7F03E71Cu: goto label_7F03E71C;
    case 0x7F03E720u: goto label_7F03E720;
    case 0x7F03E724u: goto label_7F03E724;
    case 0x7F03E728u: goto label_7F03E728;
    case 0x7F03E72Cu: goto label_7F03E72C;
    case 0x7F03E730u: goto label_7F03E730;
    case 0x7F03E734u: goto label_7F03E734;
    case 0x7F03E738u: goto label_7F03E738;
    case 0x7F03E73Cu: goto label_7F03E73C;
    case 0x7F03E740u: goto label_7F03E740;
    case 0x7F03E744u: goto label_7F03E744;
    case 0x7F03E748u: goto label_7F03E748;
    case 0x7F03E74Cu: goto label_7F03E74C;
    case 0x7F03E750u: goto label_7F03E750;
    case 0x7F03E754u: goto label_7F03E754;
    case 0x7F03E758u: goto label_7F03E758;
    case 0x7F03E75Cu: goto label_7F03E75C;
    case 0x7F03E760u: goto label_7F03E760;
    case 0x7F03E764u: goto label_7F03E764;
    case 0x7F03E768u: goto label_7F03E768;
    case 0x7F03E76Cu: goto label_7F03E76C;
    case 0x7F03E770u: goto label_7F03E770;
    case 0x7F03E774u: goto label_7F03E774;
    case 0x7F03E778u: goto label_7F03E778;
    case 0x7F03E77Cu: goto label_7F03E77C;
    case 0x7F03E780u: goto label_7F03E780;
    case 0x7F03E784u: goto label_7F03E784;
    case 0x7F03E788u: goto label_7F03E788;
    case 0x7F03E78Cu: goto label_7F03E78C;
    case 0x7F03E790u: goto label_7F03E790;
    case 0x7F03E794u: goto label_7F03E794;
    case 0x7F03E798u: goto label_7F03E798;
    case 0x7F03E79Cu: goto label_7F03E79C;
    case 0x7F03E7A0u: goto label_7F03E7A0;
    case 0x7F03E7A4u: goto label_7F03E7A4;
    case 0x7F03E7A8u: goto label_7F03E7A8;
    case 0x7F03E7ACu: goto label_7F03E7AC;
    case 0x7F03E7B0u: goto label_7F03E7B0;
    case 0x7F03E7B4u: goto label_7F03E7B4;
    case 0x7F03E7B8u: goto label_7F03E7B8;
    case 0x7F03E7BCu: goto label_7F03E7BC;
    case 0x7F03E7C0u: goto label_7F03E7C0;
    case 0x7F03E7C4u: goto label_7F03E7C4;
    case 0x7F03E7C8u: goto label_7F03E7C8;
    case 0x7F03E7CCu: goto label_7F03E7CC;
    case 0x7F03E7D0u: goto label_7F03E7D0;
    case 0x7F03E7D4u: goto label_7F03E7D4;
    case 0x7F03E7D8u: goto label_7F03E7D8;
    case 0x7F03E7DCu: goto label_7F03E7DC;
    case 0x7F03E7E0u: goto label_7F03E7E0;
    case 0x7F03E7E4u: goto label_7F03E7E4;
    case 0x7F03E7E8u: goto label_7F03E7E8;
    case 0x7F03E7ECu: goto label_7F03E7EC;
    case 0x7F03E7F0u: goto label_7F03E7F0;
    case 0x7F03E7F4u: goto label_7F03E7F4;
    case 0x7F03E7F8u: goto label_7F03E7F8;
    case 0x7F03E7FCu: goto label_7F03E7FC;
    case 0x7F03E800u: goto label_7F03E800;
    case 0x7F03E804u: goto label_7F03E804;
    case 0x7F03E808u: goto label_7F03E808;
    case 0x7F03E80Cu: goto label_7F03E80C;
    case 0x7F03E810u: goto label_7F03E810;
    case 0x7F03E814u: goto label_7F03E814;
    case 0x7F03E818u: goto label_7F03E818;
    case 0x7F03E81Cu: goto label_7F03E81C;
    case 0x7F03E820u: goto label_7F03E820;
    case 0x7F03E824u: goto label_7F03E824;
    case 0x7F03E828u: goto label_7F03E828;
    case 0x7F03E82Cu: goto label_7F03E82C;
    case 0x7F03E830u: goto label_7F03E830;
    case 0x7F03E834u: goto label_7F03E834;
    case 0x7F03E838u: goto label_7F03E838;
    case 0x7F03E83Cu: goto label_7F03E83C;
    case 0x7F03E840u: goto label_7F03E840;
    case 0x7F03E844u: goto label_7F03E844;
    case 0x7F03E848u: goto label_7F03E848;
    case 0x7F03E84Cu: goto label_7F03E84C;
    case 0x7F03E850u: goto label_7F03E850;
    case 0x7F03E854u: goto label_7F03E854;
    case 0x7F03E858u: goto label_7F03E858;
    case 0x7F03E85Cu: goto label_7F03E85C;
    case 0x7F03E860u: goto label_7F03E860;
    case 0x7F03E864u: goto label_7F03E864;
    case 0x7F03E868u: goto label_7F03E868;
    case 0x7F03E86Cu: goto label_7F03E86C;
    case 0x7F03E870u: goto label_7F03E870;
    case 0x7F03E874u: goto label_7F03E874;
    case 0x7F03E878u: goto label_7F03E878;
    case 0x7F03E87Cu: goto label_7F03E87C;
    case 0x7F03E880u: goto label_7F03E880;
    case 0x7F03E884u: goto label_7F03E884;
    case 0x7F03E888u: goto label_7F03E888;
    case 0x7F03E88Cu: goto label_7F03E88C;
    case 0x7F03E890u: goto label_7F03E890;
    case 0x7F03E894u: goto label_7F03E894;
    case 0x7F03E898u: goto label_7F03E898;
    case 0x7F03E89Cu: goto label_7F03E89C;
    case 0x7F03E8A0u: goto label_7F03E8A0;
    case 0x7F03E8A4u: goto label_7F03E8A4;
    case 0x7F03E8A8u: goto label_7F03E8A8;
    case 0x7F03E8ACu: goto label_7F03E8AC;
    case 0x7F03E8B0u: goto label_7F03E8B0;
    case 0x7F03E8B4u: goto label_7F03E8B4;
    case 0x7F03E8B8u: goto label_7F03E8B8;
    case 0x7F03E8BCu: goto label_7F03E8BC;
    case 0x7F03E8C0u: goto label_7F03E8C0;
    case 0x7F03E8C4u: goto label_7F03E8C4;
    case 0x7F03E8C8u: goto label_7F03E8C8;
    case 0x7F03E8CCu: goto label_7F03E8CC;
    case 0x7F03E8D0u: goto label_7F03E8D0;
    case 0x7F03E8D4u: goto label_7F03E8D4;
    case 0x7F03E8D8u: goto label_7F03E8D8;
    case 0x7F03E8DCu: goto label_7F03E8DC;
    case 0x7F03E8E0u: goto label_7F03E8E0;
    case 0x7F03E8E4u: goto label_7F03E8E4;
    case 0x7F03E8E8u: goto label_7F03E8E8;
    case 0x7F03E8ECu: goto label_7F03E8EC;
    case 0x7F03E8F0u: goto label_7F03E8F0;
    case 0x7F03E8F4u: goto label_7F03E8F4;
    case 0x7F03E8F8u: goto label_7F03E8F8;
    case 0x7F03E8FCu: goto label_7F03E8FC;
    case 0x7F03E900u: goto label_7F03E900;
    case 0x7F03E904u: goto label_7F03E904;
    case 0x7F03E908u: goto label_7F03E908;
    case 0x7F03E90Cu: goto label_7F03E90C;
    case 0x7F03E910u: goto label_7F03E910;
    case 0x7F03E914u: goto label_7F03E914;
    case 0x7F03E918u: goto label_7F03E918;
    case 0x7F03E91Cu: goto label_7F03E91C;
    case 0x7F03E920u: goto label_7F03E920;
    case 0x7F03E924u: goto label_7F03E924;
    case 0x7F03E928u: goto label_7F03E928;
    case 0x7F03E92Cu: goto label_7F03E92C;
    case 0x7F03E930u: goto label_7F03E930;
    case 0x7F03E934u: goto label_7F03E934;
    case 0x7F03E938u: goto label_7F03E938;
    case 0x7F03E93Cu: goto label_7F03E93C;
    case 0x7F03E940u: goto label_7F03E940;
    case 0x7F03E944u: goto label_7F03E944;
    case 0x7F03E948u: goto label_7F03E948;
    case 0x7F03E94Cu: goto label_7F03E94C;
    case 0x7F03E950u: goto label_7F03E950;
    case 0x7F03E954u: goto label_7F03E954;
    case 0x7F03E958u: goto label_7F03E958;
    case 0x7F03E95Cu: goto label_7F03E95C;
    case 0x7F03E960u: goto label_7F03E960;
    case 0x7F03E964u: goto label_7F03E964;
    case 0x7F03E968u: goto label_7F03E968;
    case 0x7F03E96Cu: goto label_7F03E96C;
    case 0x7F03E970u: goto label_7F03E970;
    case 0x7F03E974u: goto label_7F03E974;
    case 0x7F03E978u: goto label_7F03E978;
    case 0x7F03E97Cu: goto label_7F03E97C;
    case 0x7F03E980u: goto label_7F03E980;
    case 0x7F03E984u: goto label_7F03E984;
    case 0x7F03E988u: goto label_7F03E988;
    case 0x7F03E98Cu: goto label_7F03E98C;
    case 0x7F03E990u: goto label_7F03E990;
    case 0x7F03E994u: goto label_7F03E994;
    case 0x7F03E998u: goto label_7F03E998;
    case 0x7F03E99Cu: goto label_7F03E99C;
    case 0x7F03E9A0u: goto label_7F03E9A0;
    case 0x7F03E9A4u: goto label_7F03E9A4;
    case 0x7F03E9A8u: goto label_7F03E9A8;
    case 0x7F03E9ACu: goto label_7F03E9AC;
    case 0x7F03E9B0u: goto label_7F03E9B0;
    case 0x7F03E9B4u: goto label_7F03E9B4;
    case 0x7F03E9B8u: goto label_7F03E9B8;
    case 0x7F03E9BCu: goto label_7F03E9BC;
    case 0x7F03E9C0u: goto label_7F03E9C0;
    case 0x7F03E9C4u: goto label_7F03E9C4;
    case 0x7F03E9C8u: goto label_7F03E9C8;
    case 0x7F03E9CCu: goto label_7F03E9CC;
    case 0x7F03E9D0u: goto label_7F03E9D0;
    case 0x7F03E9D4u: goto label_7F03E9D4;
    case 0x7F03E9D8u: goto label_7F03E9D8;
    case 0x7F03E9DCu: goto label_7F03E9DC;
    case 0x7F03E9E0u: goto label_7F03E9E0;
    case 0x7F03E9E4u: goto label_7F03E9E4;
    case 0x7F03E9E8u: goto label_7F03E9E8;
    case 0x7F03E9ECu: goto label_7F03E9EC;
    case 0x7F03E9F0u: goto label_7F03E9F0;
    case 0x7F03E9F4u: goto label_7F03E9F4;
    case 0x7F03E9F8u: goto label_7F03E9F8;
    case 0x7F03E9FCu: goto label_7F03E9FC;
    case 0x7F03EA00u: goto label_7F03EA00;
    case 0x7F03EA04u: goto label_7F03EA04;
    case 0x7F03EA08u: goto label_7F03EA08;
    case 0x7F03EA0Cu: goto label_7F03EA0C;
    case 0x7F03EA10u: goto label_7F03EA10;
    case 0x7F03EA14u: goto label_7F03EA14;
    case 0x7F03EA18u: goto label_7F03EA18;
    case 0x7F03EA1Cu: goto label_7F03EA1C;
    case 0x7F03EA20u: goto label_7F03EA20;
    case 0x7F03EA24u: goto label_7F03EA24;
    case 0x7F03EA28u: goto label_7F03EA28;
    case 0x7F03EA2Cu: goto label_7F03EA2C;
    case 0x7F03EA30u: goto label_7F03EA30;
    case 0x7F03EA34u: goto label_7F03EA34;
    case 0x7F03EA38u: goto label_7F03EA38;
    case 0x7F03EA3Cu: goto label_7F03EA3C;
    case 0x7F03EA40u: goto label_7F03EA40;
    case 0x7F03EA44u: goto label_7F03EA44;
    case 0x7F03EA48u: goto label_7F03EA48;
    case 0x7F03EA4Cu: goto label_7F03EA4C;
    case 0x7F03EA50u: goto label_7F03EA50;
    case 0x7F03EA54u: goto label_7F03EA54;
    case 0x7F03EA58u: goto label_7F03EA58;
    case 0x7F03EA5Cu: goto label_7F03EA5C;
    case 0x7F03EA60u: goto label_7F03EA60;
    case 0x7F03EA64u: goto label_7F03EA64;
    case 0x7F03EA68u: goto label_7F03EA68;
    case 0x7F03EA6Cu: goto label_7F03EA6C;
    case 0x7F03EA70u: goto label_7F03EA70;
    case 0x7F03EA74u: goto label_7F03EA74;
    case 0x7F03EA78u: goto label_7F03EA78;
    case 0x7F03EA7Cu: goto label_7F03EA7C;
    case 0x7F03EA80u: goto label_7F03EA80;
    case 0x7F03EA84u: goto label_7F03EA84;
    case 0x7F03EA88u: goto label_7F03EA88;
    case 0x7F03EA8Cu: goto label_7F03EA8C;
    case 0x7F03EA90u: goto label_7F03EA90;
    case 0x7F03EA94u: goto label_7F03EA94;
    case 0x7F03EA98u: goto label_7F03EA98;
    case 0x7F03EA9Cu: goto label_7F03EA9C;
    case 0x7F03EAA0u: goto label_7F03EAA0;
    case 0x7F03EAA4u: goto label_7F03EAA4;
    case 0x7F03EAA8u: goto label_7F03EAA8;
    case 0x7F03EAACu: goto label_7F03EAAC;
    case 0x7F03EAB0u: goto label_7F03EAB0;
    case 0x7F03EAB4u: goto label_7F03EAB4;
    case 0x7F03EAB8u: goto label_7F03EAB8;
    case 0x7F03EABCu: goto label_7F03EABC;
    case 0x7F03EAC0u: goto label_7F03EAC0;
    case 0x7F03EAC4u: goto label_7F03EAC4;
    case 0x7F03EAC8u: goto label_7F03EAC8;
    case 0x7F03EACCu: goto label_7F03EACC;
    case 0x7F03EAD0u: goto label_7F03EAD0;
    case 0x7F03EAD4u: goto label_7F03EAD4;
    case 0x7F03EAD8u: goto label_7F03EAD8;
    case 0x7F03EADCu: goto label_7F03EADC;
    case 0x7F03EAE0u: goto label_7F03EAE0;
    case 0x7F03EAE4u: goto label_7F03EAE4;
    case 0x7F03EAE8u: goto label_7F03EAE8;
    case 0x7F03EAECu: goto label_7F03EAEC;
    case 0x7F03EAF0u: goto label_7F03EAF0;
    case 0x7F03EAF4u: goto label_7F03EAF4;
    case 0x7F03EAF8u: goto label_7F03EAF8;
    case 0x7F03EAFCu: goto label_7F03EAFC;
    case 0x7F03EB00u: goto label_7F03EB00;
    case 0x7F03EB04u: goto label_7F03EB04;
    case 0x7F03EB08u: goto label_7F03EB08;
    case 0x7F03EB0Cu: goto label_7F03EB0C;
    case 0x7F03EB10u: goto label_7F03EB10;
    case 0x7F03EB14u: goto label_7F03EB14;
    case 0x7F03EB18u: goto label_7F03EB18;
    case 0x7F03EB1Cu: goto label_7F03EB1C;
    case 0x7F03EB20u: goto label_7F03EB20;
    case 0x7F03EB24u: goto label_7F03EB24;
    case 0x7F03EB28u: goto label_7F03EB28;
    case 0x7F03EB2Cu: goto label_7F03EB2C;
    case 0x7F03EB30u: goto label_7F03EB30;
    case 0x7F03EB34u: goto label_7F03EB34;
    case 0x7F03EB38u: goto label_7F03EB38;
    case 0x7F03EB3Cu: goto label_7F03EB3C;
    case 0x7F03EB40u: goto label_7F03EB40;
    case 0x7F03EB44u: goto label_7F03EB44;
    case 0x7F03EB48u: goto label_7F03EB48;
    case 0x7F03EB4Cu: goto label_7F03EB4C;
    case 0x7F03EB50u: goto label_7F03EB50;
    case 0x7F03EB54u: goto label_7F03EB54;
    case 0x7F03EB58u: goto label_7F03EB58;
    case 0x7F03EB5Cu: goto label_7F03EB5C;
    case 0x7F03EB60u: goto label_7F03EB60;
    case 0x7F03EB64u: goto label_7F03EB64;
    case 0x7F03EB68u: goto label_7F03EB68;
    case 0x7F03EB6Cu: goto label_7F03EB6C;
    case 0x7F03EB70u: goto label_7F03EB70;
    case 0x7F03EB74u: goto label_7F03EB74;
    case 0x7F03EB78u: goto label_7F03EB78;
    case 0x7F03EB7Cu: goto label_7F03EB7C;
    case 0x7F03EB80u: goto label_7F03EB80;
    case 0x7F03EB84u: goto label_7F03EB84;
    case 0x7F03EB88u: goto label_7F03EB88;
    case 0x7F03EB8Cu: goto label_7F03EB8C;
    case 0x7F03EB90u: goto label_7F03EB90;
    case 0x7F03EB94u: goto label_7F03EB94;
    case 0x7F03EB98u: goto label_7F03EB98;
    case 0x7F03EB9Cu: goto label_7F03EB9C;
    case 0x7F03EBA0u: goto label_7F03EBA0;
    case 0x7F03EBA4u: goto label_7F03EBA4;
    case 0x7F03EBA8u: goto label_7F03EBA8;
    case 0x7F03EBACu: goto label_7F03EBAC;
    case 0x7F03EBB0u: goto label_7F03EBB0;
    case 0x7F03EBB4u: goto label_7F03EBB4;
    case 0x7F03EBB8u: goto label_7F03EBB8;
    case 0x7F03EBBCu: goto label_7F03EBBC;
    case 0x7F03EBC0u: goto label_7F03EBC0;
    case 0x7F03EBC4u: goto label_7F03EBC4;
    case 0x7F03EBC8u: goto label_7F03EBC8;
    case 0x7F03EBCCu: goto label_7F03EBCC;
    case 0x7F03EBD0u: goto label_7F03EBD0;
    case 0x7F03EBD4u: goto label_7F03EBD4;
    case 0x7F03EBD8u: goto label_7F03EBD8;
    case 0x7F03EBDCu: goto label_7F03EBDC;
    case 0x7F03EBE0u: goto label_7F03EBE0;
    case 0x7F03EBE4u: goto label_7F03EBE4;
    case 0x7F03EBE8u: goto label_7F03EBE8;
    case 0x7F03EBECu: goto label_7F03EBEC;
    case 0x7F03EBF0u: goto label_7F03EBF0;
    case 0x7F03EBF4u: goto label_7F03EBF4;
    case 0x7F03EBF8u: goto label_7F03EBF8;
    case 0x7F03EBFCu: goto label_7F03EBFC;
    case 0x7F03EC00u: goto label_7F03EC00;
    case 0x7F03EC04u: goto label_7F03EC04;
    case 0x7F03EC08u: goto label_7F03EC08;
    case 0x7F03EC0Cu: goto label_7F03EC0C;
    case 0x7F03EC10u: goto label_7F03EC10;
    case 0x7F03EC14u: goto label_7F03EC14;
    case 0x7F03EC18u: goto label_7F03EC18;
    case 0x7F03EC1Cu: goto label_7F03EC1C;
    case 0x7F03EC20u: goto label_7F03EC20;
    case 0x7F03EC24u: goto label_7F03EC24;
    case 0x7F03EC28u: goto label_7F03EC28;
    case 0x7F03EC2Cu: goto label_7F03EC2C;
    case 0x7F03EC30u: goto label_7F03EC30;
    case 0x7F03EC34u: goto label_7F03EC34;
    case 0x7F03EC38u: goto label_7F03EC38;
    case 0x7F03EC3Cu: goto label_7F03EC3C;
    case 0x7F03EC40u: goto label_7F03EC40;
    case 0x7F03EC44u: goto label_7F03EC44;
    case 0x7F03EC48u: goto label_7F03EC48;
    case 0x7F03EC4Cu: goto label_7F03EC4C;
    case 0x7F03EC50u: goto label_7F03EC50;
    case 0x7F03EC54u: goto label_7F03EC54;
    case 0x7F03EC58u: goto label_7F03EC58;
    case 0x7F03EC5Cu: goto label_7F03EC5C;
    case 0x7F03EC60u: goto label_7F03EC60;
    case 0x7F03EC64u: goto label_7F03EC64;
    case 0x7F03EC68u: goto label_7F03EC68;
    case 0x7F03EC6Cu: goto label_7F03EC6C;
    case 0x7F03EC70u: goto label_7F03EC70;
    case 0x7F03EC74u: goto label_7F03EC74;
    case 0x7F03EC78u: goto label_7F03EC78;
    case 0x7F03EC7Cu: goto label_7F03EC7C;
    case 0x7F03EC80u: goto label_7F03EC80;
    case 0x7F03EC84u: goto label_7F03EC84;
    case 0x7F03EC88u: goto label_7F03EC88;
    case 0x7F03EC8Cu: goto label_7F03EC8C;
    case 0x7F03EC90u: goto label_7F03EC90;
    case 0x7F03EC94u: goto label_7F03EC94;
    case 0x7F03EC98u: goto label_7F03EC98;
    case 0x7F03EC9Cu: goto label_7F03EC9C;
    case 0x7F03ECA0u: goto label_7F03ECA0;
    case 0x7F03ECA4u: goto label_7F03ECA4;
    case 0x7F03ECA8u: goto label_7F03ECA8;
    case 0x7F03ECACu: goto label_7F03ECAC;
    case 0x7F03ECB0u: goto label_7F03ECB0;
    case 0x7F03ECB4u: goto label_7F03ECB4;
    case 0x7F03ECB8u: goto label_7F03ECB8;
    case 0x7F03ECBCu: goto label_7F03ECBC;
    case 0x7F03ECC0u: goto label_7F03ECC0;
    case 0x7F03ECC4u: goto label_7F03ECC4;
    case 0x7F03ECC8u: goto label_7F03ECC8;
    case 0x7F03ECCCu: goto label_7F03ECCC;
    case 0x7F03ECD0u: goto label_7F03ECD0;
    case 0x7F03ECD4u: goto label_7F03ECD4;
    case 0x7F03ECD8u: goto label_7F03ECD8;
    case 0x7F03ECDCu: goto label_7F03ECDC;
    case 0x7F03ECE0u: goto label_7F03ECE0;
    case 0x7F03ECE4u: goto label_7F03ECE4;
    case 0x7F03ECE8u: goto label_7F03ECE8;
    case 0x7F03ECECu: goto label_7F03ECEC;
    case 0x7F03ECF0u: goto label_7F03ECF0;
    case 0x7F03ECF4u: goto label_7F03ECF4;
    case 0x7F03ECF8u: goto label_7F03ECF8;
    case 0x7F03ECFCu: goto label_7F03ECFC;
    case 0x7F03ED00u: goto label_7F03ED00;
    case 0x7F03ED04u: goto label_7F03ED04;
    case 0x7F03ED08u: goto label_7F03ED08;
    case 0x7F03ED0Cu: goto label_7F03ED0C;
    case 0x7F03ED10u: goto label_7F03ED10;
    case 0x7F03ED14u: goto label_7F03ED14;
    case 0x7F03ED18u: goto label_7F03ED18;
    case 0x7F03ED1Cu: goto label_7F03ED1C;
    case 0x7F03ED20u: goto label_7F03ED20;
    case 0x7F03ED24u: goto label_7F03ED24;
    case 0x7F03ED28u: goto label_7F03ED28;
    case 0x7F03ED2Cu: goto label_7F03ED2C;
    case 0x7F03ED30u: goto label_7F03ED30;
    case 0x7F03ED34u: goto label_7F03ED34;
    case 0x7F03ED38u: goto label_7F03ED38;
    case 0x7F03ED3Cu: goto label_7F03ED3C;
    case 0x7F03ED40u: goto label_7F03ED40;
    case 0x7F03ED44u: goto label_7F03ED44;
    case 0x7F03ED48u: goto label_7F03ED48;
    case 0x7F03ED4Cu: goto label_7F03ED4C;
    case 0x7F03ED50u: goto label_7F03ED50;
    case 0x7F03ED54u: goto label_7F03ED54;
    case 0x7F03ED58u: goto label_7F03ED58;
    case 0x7F03ED5Cu: goto label_7F03ED5C;
    case 0x7F03ED60u: goto label_7F03ED60;
    case 0x7F03ED64u: goto label_7F03ED64;
    case 0x7F03ED68u: goto label_7F03ED68;
    case 0x7F03ED6Cu: goto label_7F03ED6C;
    case 0x7F03ED70u: goto label_7F03ED70;
    case 0x7F03ED74u: goto label_7F03ED74;
    case 0x7F03ED78u: goto label_7F03ED78;
    case 0x7F03ED7Cu: goto label_7F03ED7C;
    case 0x7F03ED80u: goto label_7F03ED80;
    case 0x7F03ED84u: goto label_7F03ED84;
    case 0x7F03ED88u: goto label_7F03ED88;
    case 0x7F03ED8Cu: goto label_7F03ED8C;
    case 0x7F03ED90u: goto label_7F03ED90;
    case 0x7F03ED94u: goto label_7F03ED94;
    case 0x7F03ED98u: goto label_7F03ED98;
    case 0x7F03ED9Cu: goto label_7F03ED9C;
    case 0x7F03EDA0u: goto label_7F03EDA0;
    case 0x7F03EDA4u: goto label_7F03EDA4;
    case 0x7F03EDA8u: goto label_7F03EDA8;
    case 0x7F03EDACu: goto label_7F03EDAC;
    case 0x7F03EDB0u: goto label_7F03EDB0;
    case 0x7F03EDB4u: goto label_7F03EDB4;
    case 0x7F03EDB8u: goto label_7F03EDB8;
    case 0x7F03EDBCu: goto label_7F03EDBC;
    case 0x7F03EDC0u: goto label_7F03EDC0;
    case 0x7F03EDC4u: goto label_7F03EDC4;
    case 0x7F03EDC8u: goto label_7F03EDC8;
    case 0x7F03EDCCu: goto label_7F03EDCC;
    case 0x7F03EDD0u: goto label_7F03EDD0;
    case 0x7F03EDD4u: goto label_7F03EDD4;
    case 0x7F03EDD8u: goto label_7F03EDD8;
    case 0x7F03EDDCu: goto label_7F03EDDC;
    case 0x7F03EDE0u: goto label_7F03EDE0;
    case 0x7F03EDE4u: goto label_7F03EDE4;
    case 0x7F03EDE8u: goto label_7F03EDE8;
    case 0x7F03EDECu: goto label_7F03EDEC;
    case 0x7F03EDF0u: goto label_7F03EDF0;
    case 0x7F03EDF4u: goto label_7F03EDF4;
    case 0x7F03EDF8u: goto label_7F03EDF8;
    case 0x7F03EDFCu: goto label_7F03EDFC;
    case 0x7F03EE00u: goto label_7F03EE00;
    case 0x7F03EE04u: goto label_7F03EE04;
    case 0x7F03EE08u: goto label_7F03EE08;
    case 0x7F03EE0Cu: goto label_7F03EE0C;
    case 0x7F03EE10u: goto label_7F03EE10;
    case 0x7F03EE14u: goto label_7F03EE14;
    case 0x7F03EE18u: goto label_7F03EE18;
    case 0x7F03EE1Cu: goto label_7F03EE1C;
    case 0x7F03EE20u: goto label_7F03EE20;
    case 0x7F03EE24u: goto label_7F03EE24;
    case 0x7F03EE28u: goto label_7F03EE28;
    case 0x7F03EE2Cu: goto label_7F03EE2C;
    case 0x7F03EE30u: goto label_7F03EE30;
    case 0x7F03EE34u: goto label_7F03EE34;
    case 0x7F03EE38u: goto label_7F03EE38;
    case 0x7F03EE3Cu: goto label_7F03EE3C;
    case 0x7F03EE40u: goto label_7F03EE40;
    case 0x7F03EE44u: goto label_7F03EE44;
    case 0x7F03EE48u: goto label_7F03EE48;
    case 0x7F03EE4Cu: goto label_7F03EE4C;
    case 0x7F03EE50u: goto label_7F03EE50;
    case 0x7F03EE54u: goto label_7F03EE54;
    case 0x7F03EE58u: goto label_7F03EE58;
    case 0x7F03EE5Cu: goto label_7F03EE5C;
    case 0x7F03EE60u: goto label_7F03EE60;
    case 0x7F03EE64u: goto label_7F03EE64;
    case 0x7F03EE68u: goto label_7F03EE68;
    case 0x7F03EE6Cu: goto label_7F03EE6C;
    case 0x7F03EE70u: goto label_7F03EE70;
    case 0x7F03EE74u: goto label_7F03EE74;
    case 0x7F03EE78u: goto label_7F03EE78;
    case 0x7F03EE7Cu: goto label_7F03EE7C;
    case 0x7F03EE80u: goto label_7F03EE80;
    case 0x7F03EE84u: goto label_7F03EE84;
    case 0x7F03EE88u: goto label_7F03EE88;
    case 0x7F03EE8Cu: goto label_7F03EE8C;
    case 0x7F03EE90u: goto label_7F03EE90;
    case 0x7F03EE94u: goto label_7F03EE94;
    case 0x7F03EE98u: goto label_7F03EE98;
    case 0x7F03EE9Cu: goto label_7F03EE9C;
    case 0x7F03EEA0u: goto label_7F03EEA0;
    case 0x7F03EEA4u: goto label_7F03EEA4;
    case 0x7F03EEA8u: goto label_7F03EEA8;
    case 0x7F03EEACu: goto label_7F03EEAC;
    case 0x7F03EEB0u: goto label_7F03EEB0;
    case 0x7F03EEB4u: goto label_7F03EEB4;
    case 0x7F03EEB8u: goto label_7F03EEB8;
    case 0x7F03EEBCu: goto label_7F03EEBC;
    case 0x7F03EEC0u: goto label_7F03EEC0;
    case 0x7F03EEC4u: goto label_7F03EEC4;
    case 0x7F03EEC8u: goto label_7F03EEC8;
    case 0x7F03EECCu: goto label_7F03EECC;
    case 0x7F03EED0u: goto label_7F03EED0;
    case 0x7F03EED4u: goto label_7F03EED4;
    case 0x7F03EED8u: goto label_7F03EED8;
    case 0x7F03EEDCu: goto label_7F03EEDC;
    case 0x7F03EEE0u: goto label_7F03EEE0;
    case 0x7F03EEE4u: goto label_7F03EEE4;
    case 0x7F03EEE8u: goto label_7F03EEE8;
    case 0x7F03EEECu: goto label_7F03EEEC;
    case 0x7F03EEF0u: goto label_7F03EEF0;
    case 0x7F03EEF4u: goto label_7F03EEF4;
    case 0x7F03EEF8u: goto label_7F03EEF8;
    case 0x7F03EEFCu: goto label_7F03EEFC;
    case 0x7F03EF00u: goto label_7F03EF00;
    case 0x7F03EF04u: goto label_7F03EF04;
    case 0x7F03EF08u: goto label_7F03EF08;
    case 0x7F03EF0Cu: goto label_7F03EF0C;
    case 0x7F03EF10u: goto label_7F03EF10;
    case 0x7F03EF14u: goto label_7F03EF14;
    case 0x7F03EF18u: goto label_7F03EF18;
    case 0x7F03EF1Cu: goto label_7F03EF1C;
    case 0x7F03EF20u: goto label_7F03EF20;
    case 0x7F03EF24u: goto label_7F03EF24;
    case 0x7F03EF28u: goto label_7F03EF28;
    case 0x7F03EF2Cu: goto label_7F03EF2C;
    case 0x7F03EF30u: goto label_7F03EF30;
    case 0x7F03EF34u: goto label_7F03EF34;
    case 0x7F03EF38u: goto label_7F03EF38;
    case 0x7F03EF3Cu: goto label_7F03EF3C;
    case 0x7F03EF40u: goto label_7F03EF40;
    case 0x7F03EF44u: goto label_7F03EF44;
    case 0x7F03EF48u: goto label_7F03EF48;
    case 0x7F03EF4Cu: goto label_7F03EF4C;
    case 0x7F03EF50u: goto label_7F03EF50;
    case 0x7F03EF54u: goto label_7F03EF54;
    case 0x7F03EF58u: goto label_7F03EF58;
    case 0x7F03EF5Cu: goto label_7F03EF5C;
    case 0x7F03EF60u: goto label_7F03EF60;
    case 0x7F03EF64u: goto label_7F03EF64;
    case 0x7F03EF68u: goto label_7F03EF68;
    case 0x7F03EF6Cu: goto label_7F03EF6C;
    case 0x7F03EF70u: goto label_7F03EF70;
    case 0x7F03EF74u: goto label_7F03EF74;
    case 0x7F03EF78u: goto label_7F03EF78;
    case 0x7F03EF7Cu: goto label_7F03EF7C;
    case 0x7F03EF80u: goto label_7F03EF80;
    case 0x7F03EF84u: goto label_7F03EF84;
    case 0x7F03EF88u: goto label_7F03EF88;
    case 0x7F03EF8Cu: goto label_7F03EF8C;
    case 0x7F03EF90u: goto label_7F03EF90;
    case 0x7F03EF94u: goto label_7F03EF94;
    case 0x7F03EF98u: goto label_7F03EF98;
    case 0x7F03EF9Cu: goto label_7F03EF9C;
    case 0x7F03EFA0u: goto label_7F03EFA0;
    case 0x7F03EFA4u: goto label_7F03EFA4;
    case 0x7F03EFA8u: goto label_7F03EFA8;
    case 0x7F03EFACu: goto label_7F03EFAC;
    case 0x7F03EFB0u: goto label_7F03EFB0;
    case 0x7F03EFB4u: goto label_7F03EFB4;
    case 0x7F03EFB8u: goto label_7F03EFB8;
    case 0x7F03EFBCu: goto label_7F03EFBC;
    case 0x7F03EFC0u: goto label_7F03EFC0;
    case 0x7F03EFC4u: goto label_7F03EFC4;
    case 0x7F03EFC8u: goto label_7F03EFC8;
    case 0x7F03EFCCu: goto label_7F03EFCC;
    case 0x7F03EFD0u: goto label_7F03EFD0;
    case 0x7F03EFD4u: goto label_7F03EFD4;
    case 0x7F03EFD8u: goto label_7F03EFD8;
    case 0x7F03EFDCu: goto label_7F03EFDC;
    case 0x7F03EFE0u: goto label_7F03EFE0;
    case 0x7F03EFE4u: goto label_7F03EFE4;
    case 0x7F03EFE8u: goto label_7F03EFE8;
    case 0x7F03EFECu: goto label_7F03EFEC;
    case 0x7F03EFF0u: goto label_7F03EFF0;
    case 0x7F03EFF4u: goto label_7F03EFF4;
    case 0x7F03EFF8u: goto label_7F03EFF8;
    case 0x7F03EFFCu: goto label_7F03EFFC;
    case 0x7F03F000u: goto label_7F03F000;
    case 0x7F03F004u: goto label_7F03F004;
    case 0x7F03F008u: goto label_7F03F008;
    case 0x7F03F00Cu: goto label_7F03F00C;
    case 0x7F03F010u: goto label_7F03F010;
    case 0x7F03F014u: goto label_7F03F014;
    case 0x7F03F018u: goto label_7F03F018;
    case 0x7F03F01Cu: goto label_7F03F01C;
    case 0x7F03F020u: goto label_7F03F020;
    case 0x7F03F024u: goto label_7F03F024;
    case 0x7F03F028u: goto label_7F03F028;
    case 0x7F03F02Cu: goto label_7F03F02C;
    case 0x7F03F030u: goto label_7F03F030;
    case 0x7F03F034u: goto label_7F03F034;
    case 0x7F03F038u: goto label_7F03F038;
    case 0x7F03F03Cu: goto label_7F03F03C;
    case 0x7F03F040u: goto label_7F03F040;
    case 0x7F03F044u: goto label_7F03F044;
    case 0x7F03F048u: goto label_7F03F048;
    case 0x7F03F04Cu: goto label_7F03F04C;
    case 0x7F03F050u: goto label_7F03F050;
    case 0x7F03F054u: goto label_7F03F054;
    case 0x7F03F058u: goto label_7F03F058;
    case 0x7F03F05Cu: goto label_7F03F05C;
    case 0x7F03F060u: goto label_7F03F060;
    case 0x7F03F064u: goto label_7F03F064;
    case 0x7F03F068u: goto label_7F03F068;
    case 0x7F03F06Cu: goto label_7F03F06C;
    case 0x7F03F070u: goto label_7F03F070;
    case 0x7F03F074u: goto label_7F03F074;
    case 0x7F03F078u: goto label_7F03F078;
    case 0x7F03F07Cu: goto label_7F03F07C;
    case 0x7F03F080u: goto label_7F03F080;
    case 0x7F03F084u: goto label_7F03F084;
    case 0x7F03F088u: goto label_7F03F088;
    case 0x7F03F08Cu: goto label_7F03F08C;
    case 0x7F03F090u: goto label_7F03F090;
    case 0x7F03F094u: goto label_7F03F094;
    case 0x7F03F098u: goto label_7F03F098;
    case 0x7F03F09Cu: goto label_7F03F09C;
    case 0x7F03F0A0u: goto label_7F03F0A0;
    case 0x7F03F0A4u: goto label_7F03F0A4;
    case 0x7F03F0A8u: goto label_7F03F0A8;
    case 0x7F03F0ACu: goto label_7F03F0AC;
    case 0x7F03F0B0u: goto label_7F03F0B0;
    case 0x7F03F0B4u: goto label_7F03F0B4;
    case 0x7F03F0B8u: goto label_7F03F0B8;
    case 0x7F03F0BCu: goto label_7F03F0BC;
    case 0x7F03F0C0u: goto label_7F03F0C0;
    case 0x7F03F0C4u: goto label_7F03F0C4;
    case 0x7F03F0C8u: goto label_7F03F0C8;
    case 0x7F03F0CCu: goto label_7F03F0CC;
    case 0x7F03F0D0u: goto label_7F03F0D0;
    case 0x7F03F0D4u: goto label_7F03F0D4;
    case 0x7F03F0D8u: goto label_7F03F0D8;
    case 0x7F03F0DCu: goto label_7F03F0DC;
    case 0x7F03F0E0u: goto label_7F03F0E0;
    case 0x7F03F0E4u: goto label_7F03F0E4;
    case 0x7F03F0E8u: goto label_7F03F0E8;
    case 0x7F03F0ECu: goto label_7F03F0EC;
    case 0x7F03F0F0u: goto label_7F03F0F0;
    case 0x7F03F0F4u: goto label_7F03F0F4;
    case 0x7F03F0F8u: goto label_7F03F0F8;
    case 0x7F03F0FCu: goto label_7F03F0FC;
    case 0x7F03F100u: goto label_7F03F100;
    case 0x7F03F104u: goto label_7F03F104;
    case 0x7F03F108u: goto label_7F03F108;
    case 0x7F03F10Cu: goto label_7F03F10C;
    case 0x7F03F110u: goto label_7F03F110;
    case 0x7F03F114u: goto label_7F03F114;
    case 0x7F03F118u: goto label_7F03F118;
    case 0x7F03F11Cu: goto label_7F03F11C;
    case 0x7F03F120u: goto label_7F03F120;
    case 0x7F03F124u: goto label_7F03F124;
    case 0x7F03F128u: goto label_7F03F128;
    case 0x7F03F12Cu: goto label_7F03F12C;
    case 0x7F03F130u: goto label_7F03F130;
    case 0x7F03F134u: goto label_7F03F134;
    case 0x7F03F138u: goto label_7F03F138;
    case 0x7F03F13Cu: goto label_7F03F13C;
    case 0x7F03F140u: goto label_7F03F140;
    case 0x7F03F144u: goto label_7F03F144;
    case 0x7F03F148u: goto label_7F03F148;
    case 0x7F03F14Cu: goto label_7F03F14C;
    case 0x7F03F150u: goto label_7F03F150;
    case 0x7F03F154u: goto label_7F03F154;
    case 0x7F03F158u: goto label_7F03F158;
    case 0x7F03F15Cu: goto label_7F03F15C;
    case 0x7F03F160u: goto label_7F03F160;
    case 0x7F03F164u: goto label_7F03F164;
    case 0x7F03F168u: goto label_7F03F168;
    case 0x7F03F16Cu: goto label_7F03F16C;
    case 0x7F03F170u: goto label_7F03F170;
    case 0x7F03F174u: goto label_7F03F174;
    case 0x7F03F178u: goto label_7F03F178;
    case 0x7F03F17Cu: goto label_7F03F17C;
    case 0x7F03F180u: goto label_7F03F180;
    case 0x7F03F184u: goto label_7F03F184;
    case 0x7F03F188u: goto label_7F03F188;
    case 0x7F03F18Cu: goto label_7F03F18C;
    case 0x7F03F190u: goto label_7F03F190;
    case 0x7F03F194u: goto label_7F03F194;
    case 0x7F03F198u: goto label_7F03F198;
    case 0x7F03F19Cu: goto label_7F03F19C;
    case 0x7F03F1A0u: goto label_7F03F1A0;
    case 0x7F03F1A4u: goto label_7F03F1A4;
    case 0x7F03F1A8u: goto label_7F03F1A8;
    case 0x7F03F1ACu: goto label_7F03F1AC;
    case 0x7F03F1B0u: goto label_7F03F1B0;
    case 0x7F03F1B4u: goto label_7F03F1B4;
    case 0x7F03F1B8u: goto label_7F03F1B8;
    case 0x7F03F1BCu: goto label_7F03F1BC;
    case 0x7F03F1C0u: goto label_7F03F1C0;
    case 0x7F03F1C4u: goto label_7F03F1C4;
    case 0x7F03F1C8u: goto label_7F03F1C8;
    case 0x7F03F1CCu: goto label_7F03F1CC;
    case 0x7F03F1D0u: goto label_7F03F1D0;
    case 0x7F03F1D4u: goto label_7F03F1D4;
    case 0x7F03F1D8u: goto label_7F03F1D8;
    case 0x7F03F1DCu: goto label_7F03F1DC;
    case 0x7F03F1E0u: goto label_7F03F1E0;
    case 0x7F03F1E4u: goto label_7F03F1E4;
    case 0x7F03F1E8u: goto label_7F03F1E8;
    case 0x7F03F1ECu: goto label_7F03F1EC;
    case 0x7F03F1F0u: goto label_7F03F1F0;
    case 0x7F03F1F4u: goto label_7F03F1F4;
    case 0x7F03F1F8u: goto label_7F03F1F8;
    case 0x7F03F1FCu: goto label_7F03F1FC;
    case 0x7F03F200u: goto label_7F03F200;
    case 0x7F03F204u: goto label_7F03F204;
    case 0x7F03F208u: goto label_7F03F208;
    case 0x7F03F20Cu: goto label_7F03F20C;
    case 0x7F03F210u: goto label_7F03F210;
    case 0x7F03F214u: goto label_7F03F214;
    case 0x7F03F218u: goto label_7F03F218;
    case 0x7F03F21Cu: goto label_7F03F21C;
    case 0x7F03F220u: goto label_7F03F220;
    case 0x7F03F224u: goto label_7F03F224;
    case 0x7F03F228u: goto label_7F03F228;
    case 0x7F03F22Cu: goto label_7F03F22C;
    case 0x7F03F230u: goto label_7F03F230;
    case 0x7F03F234u: goto label_7F03F234;
    case 0x7F03F238u: goto label_7F03F238;
    case 0x7F03F23Cu: goto label_7F03F23C;
    case 0x7F03F240u: goto label_7F03F240;
    case 0x7F03F244u: goto label_7F03F244;
    case 0x7F03F248u: goto label_7F03F248;
    case 0x7F03F24Cu: goto label_7F03F24C;
    case 0x7F03F250u: goto label_7F03F250;
    case 0x7F03F254u: goto label_7F03F254;
    case 0x7F03F258u: goto label_7F03F258;
    case 0x7F03F25Cu: goto label_7F03F25C;
    case 0x7F03F260u: goto label_7F03F260;
    case 0x7F03F264u: goto label_7F03F264;
    case 0x7F03F268u: goto label_7F03F268;
    case 0x7F03F26Cu: goto label_7F03F26C;
    case 0x7F03F270u: goto label_7F03F270;
    case 0x7F03F274u: goto label_7F03F274;
    case 0x7F03F278u: goto label_7F03F278;
    case 0x7F03F27Cu: goto label_7F03F27C;
    case 0x7F03F280u: goto label_7F03F280;
    case 0x7F03F284u: goto label_7F03F284;
    case 0x7F03F288u: goto label_7F03F288;
    case 0x7F03F28Cu: goto label_7F03F28C;
    case 0x7F03F290u: goto label_7F03F290;
    case 0x7F03F294u: goto label_7F03F294;
    case 0x7F03F298u: goto label_7F03F298;
    case 0x7F03F29Cu: goto label_7F03F29C;
    case 0x7F03F2A0u: goto label_7F03F2A0;
    case 0x7F03F2A4u: goto label_7F03F2A4;
    case 0x7F03F2A8u: goto label_7F03F2A8;
    case 0x7F03F2ACu: goto label_7F03F2AC;
    case 0x7F03F2B0u: goto label_7F03F2B0;
    case 0x7F03F2B4u: goto label_7F03F2B4;
    case 0x7F03F2B8u: goto label_7F03F2B8;
    case 0x7F03F2BCu: goto label_7F03F2BC;
    case 0x7F03F2C0u: goto label_7F03F2C0;
    case 0x7F03F2C4u: goto label_7F03F2C4;
    case 0x7F03F2C8u: goto label_7F03F2C8;
    case 0x7F03F2CCu: goto label_7F03F2CC;
    case 0x7F03F2D0u: goto label_7F03F2D0;
    case 0x7F03F2D4u: goto label_7F03F2D4;
    case 0x7F03F2D8u: goto label_7F03F2D8;
    case 0x7F03F2DCu: goto label_7F03F2DC;
    case 0x7F03F2E0u: goto label_7F03F2E0;
    case 0x7F03F2E4u: goto label_7F03F2E4;
    case 0x7F03F2E8u: goto label_7F03F2E8;
    case 0x7F03F2ECu: goto label_7F03F2EC;
    case 0x7F03F2F0u: goto label_7F03F2F0;
    case 0x7F03F2F4u: goto label_7F03F2F4;
    case 0x7F03F2F8u: goto label_7F03F2F8;
    case 0x7F03F2FCu: goto label_7F03F2FC;
    case 0x7F03F300u: goto label_7F03F300;
    case 0x7F03F304u: goto label_7F03F304;
    case 0x7F03F308u: goto label_7F03F308;
    case 0x7F03F30Cu: goto label_7F03F30C;
    case 0x7F03F310u: goto label_7F03F310;
    case 0x7F03F314u: goto label_7F03F314;
    case 0x7F03F318u: goto label_7F03F318;
    case 0x7F03F31Cu: goto label_7F03F31C;
    case 0x7F03F320u: goto label_7F03F320;
    case 0x7F03F324u: goto label_7F03F324;
    case 0x7F03F328u: goto label_7F03F328;
    case 0x7F03F32Cu: goto label_7F03F32C;
    case 0x7F03F330u: goto label_7F03F330;
    case 0x7F03F334u: goto label_7F03F334;
    case 0x7F03F338u: goto label_7F03F338;
    case 0x7F03F33Cu: goto label_7F03F33C;
    case 0x7F03F340u: goto label_7F03F340;
    case 0x7F03F344u: goto label_7F03F344;
    case 0x7F03F348u: goto label_7F03F348;
    case 0x7F03F34Cu: goto label_7F03F34C;
    case 0x7F03F350u: goto label_7F03F350;
    case 0x7F03F354u: goto label_7F03F354;
    case 0x7F03F358u: goto label_7F03F358;
    case 0x7F03F35Cu: goto label_7F03F35C;
    case 0x7F03F360u: goto label_7F03F360;
    case 0x7F03F364u: goto label_7F03F364;
    case 0x7F03F368u: goto label_7F03F368;
    case 0x7F03F36Cu: goto label_7F03F36C;
    case 0x7F03F370u: goto label_7F03F370;
    case 0x7F03F374u: goto label_7F03F374;
    case 0x7F03F378u: goto label_7F03F378;
    case 0x7F03F37Cu: goto label_7F03F37C;
    case 0x7F03F380u: goto label_7F03F380;
    case 0x7F03F384u: goto label_7F03F384;
    case 0x7F03F388u: goto label_7F03F388;
    case 0x7F03F38Cu: goto label_7F03F38C;
    case 0x7F03F390u: goto label_7F03F390;
    case 0x7F03F394u: goto label_7F03F394;
    case 0x7F03F398u: goto label_7F03F398;
    case 0x7F03F39Cu: goto label_7F03F39C;
    case 0x7F03F3A0u: goto label_7F03F3A0;
    case 0x7F03F3A4u: goto label_7F03F3A4;
    case 0x7F03F3A8u: goto label_7F03F3A8;
    case 0x7F03F3ACu: goto label_7F03F3AC;
    case 0x7F03F3B0u: goto label_7F03F3B0;
    case 0x7F03F3B4u: goto label_7F03F3B4;
    case 0x7F03F3B8u: goto label_7F03F3B8;
    case 0x7F03F3BCu: goto label_7F03F3BC;
    case 0x7F03F3C0u: goto label_7F03F3C0;
    case 0x7F03F3C4u: goto label_7F03F3C4;
    case 0x7F03F3C8u: goto label_7F03F3C8;
    case 0x7F03F3CCu: goto label_7F03F3CC;
    case 0x7F03F3D0u: goto label_7F03F3D0;
    case 0x7F03F3D4u: goto label_7F03F3D4;
    case 0x7F03F3D8u: goto label_7F03F3D8;
    case 0x7F03F3DCu: goto label_7F03F3DC;
    case 0x7F03F3E0u: goto label_7F03F3E0;
    case 0x7F03F3E4u: goto label_7F03F3E4;
    case 0x7F03F3E8u: goto label_7F03F3E8;
    case 0x7F03F3ECu: goto label_7F03F3EC;
    case 0x7F03F3F0u: goto label_7F03F3F0;
    case 0x7F03F3F4u: goto label_7F03F3F4;
    case 0x7F03F3F8u: goto label_7F03F3F8;
    case 0x7F03F3FCu: goto label_7F03F3FC;
    case 0x7F03F400u: goto label_7F03F400;
    case 0x7F03F404u: goto label_7F03F404;
    case 0x7F03F408u: goto label_7F03F408;
    case 0x7F03F40Cu: goto label_7F03F40C;
    case 0x7F03F410u: goto label_7F03F410;
    case 0x7F03F414u: goto label_7F03F414;
    case 0x7F03F418u: goto label_7F03F418;
    case 0x7F03F41Cu: goto label_7F03F41C;
    case 0x7F03F420u: goto label_7F03F420;
    case 0x7F03F424u: goto label_7F03F424;
    case 0x7F03F428u: goto label_7F03F428;
    case 0x7F03F42Cu: goto label_7F03F42C;
    case 0x7F03F430u: goto label_7F03F430;
    case 0x7F03F434u: goto label_7F03F434;
    case 0x7F03F438u: goto label_7F03F438;
    case 0x7F03F43Cu: goto label_7F03F43C;
    case 0x7F03F440u: goto label_7F03F440;
    case 0x7F03F444u: goto label_7F03F444;
    case 0x7F03F448u: goto label_7F03F448;
    case 0x7F03F44Cu: goto label_7F03F44C;
    case 0x7F03F450u: goto label_7F03F450;
    case 0x7F03F454u: goto label_7F03F454;
    case 0x7F03F458u: goto label_7F03F458;
    case 0x7F03F45Cu: goto label_7F03F45C;
    case 0x7F03F460u: goto label_7F03F460;
    case 0x7F03F464u: goto label_7F03F464;
    case 0x7F03F468u: goto label_7F03F468;
    case 0x7F03F46Cu: goto label_7F03F46C;
    case 0x7F03F470u: goto label_7F03F470;
    case 0x7F03F474u: goto label_7F03F474;
    case 0x7F03F478u: goto label_7F03F478;
    case 0x7F03F47Cu: goto label_7F03F47C;
    case 0x7F03F480u: goto label_7F03F480;
    case 0x7F03F484u: goto label_7F03F484;
    case 0x7F03F488u: goto label_7F03F488;
    case 0x7F03F48Cu: goto label_7F03F48C;
    case 0x7F03F490u: goto label_7F03F490;
    case 0x7F03F494u: goto label_7F03F494;
    case 0x7F03F498u: goto label_7F03F498;
    case 0x7F03F49Cu: goto label_7F03F49C;
    case 0x7F03F4A0u: goto label_7F03F4A0;
    case 0x7F03F4A4u: goto label_7F03F4A4;
    case 0x7F03F4A8u: goto label_7F03F4A8;
    case 0x7F03F4ACu: goto label_7F03F4AC;
    case 0x7F03F4B0u: goto label_7F03F4B0;
    case 0x7F03F4B4u: goto label_7F03F4B4;
    case 0x7F03F4B8u: goto label_7F03F4B8;
    case 0x7F03F4BCu: goto label_7F03F4BC;
    case 0x7F03F4C0u: goto label_7F03F4C0;
    case 0x7F03F4C4u: goto label_7F03F4C4;
    case 0x7F03F4C8u: goto label_7F03F4C8;
    case 0x7F03F4CCu: goto label_7F03F4CC;
    case 0x7F03F4D0u: goto label_7F03F4D0;
    case 0x7F03F4D4u: goto label_7F03F4D4;
    case 0x7F03F4D8u: goto label_7F03F4D8;
    case 0x7F03F4DCu: goto label_7F03F4DC;
    case 0x7F03F4E0u: goto label_7F03F4E0;
    case 0x7F03F4E4u: goto label_7F03F4E4;
    case 0x7F03F4E8u: goto label_7F03F4E8;
    case 0x7F03F4ECu: goto label_7F03F4EC;
    case 0x7F03F4F0u: goto label_7F03F4F0;
    case 0x7F03F4F4u: goto label_7F03F4F4;
    case 0x7F03F4F8u: goto label_7F03F4F8;
    case 0x7F03F4FCu: goto label_7F03F4FC;
    case 0x7F03F500u: goto label_7F03F500;
    case 0x7F03F504u: goto label_7F03F504;
    case 0x7F03F508u: goto label_7F03F508;
    case 0x7F03F50Cu: goto label_7F03F50C;
    case 0x7F03F510u: goto label_7F03F510;
    case 0x7F03F514u: goto label_7F03F514;
    case 0x7F03F518u: goto label_7F03F518;
    case 0x7F03F51Cu: goto label_7F03F51C;
    case 0x7F03F520u: goto label_7F03F520;
    case 0x7F03F524u: goto label_7F03F524;
    case 0x7F03F528u: goto label_7F03F528;
    case 0x7F03F52Cu: goto label_7F03F52C;
    case 0x7F03F530u: goto label_7F03F530;
    case 0x7F03F534u: goto label_7F03F534;
    case 0x7F03F538u: goto label_7F03F538;
    case 0x7F03F53Cu: goto label_7F03F53C;
    case 0x7F03F540u: goto label_7F03F540;
    case 0x7F03F544u: goto label_7F03F544;
    case 0x7F03F548u: goto label_7F03F548;
    case 0x7F03F54Cu: goto label_7F03F54C;
    case 0x7F03F550u: goto label_7F03F550;
    case 0x7F03F554u: goto label_7F03F554;
    case 0x7F03F558u: goto label_7F03F558;
    case 0x7F03F55Cu: goto label_7F03F55C;
    case 0x7F03F560u: goto label_7F03F560;
    case 0x7F03F564u: goto label_7F03F564;
    case 0x7F03F568u: goto label_7F03F568;
    case 0x7F03F56Cu: goto label_7F03F56C;
    case 0x7F03F570u: goto label_7F03F570;
    case 0x7F03F574u: goto label_7F03F574;
    case 0x7F03F578u: goto label_7F03F578;
    case 0x7F03F57Cu: goto label_7F03F57C;
    case 0x7F03F580u: goto label_7F03F580;
    case 0x7F03F584u: goto label_7F03F584;
    case 0x7F03F588u: goto label_7F03F588;
    case 0x7F03F58Cu: goto label_7F03F58C;
    case 0x7F03F590u: goto label_7F03F590;
    case 0x7F03F594u: goto label_7F03F594;
    case 0x7F03F598u: goto label_7F03F598;
    case 0x7F03F59Cu: goto label_7F03F59C;
    case 0x7F03F5A0u: goto label_7F03F5A0;
    case 0x7F03F5A4u: goto label_7F03F5A4;
    case 0x7F03F5A8u: goto label_7F03F5A8;
    case 0x7F03F5ACu: goto label_7F03F5AC;
    case 0x7F03F5B0u: goto label_7F03F5B0;
    case 0x7F03F5B4u: goto label_7F03F5B4;
    case 0x7F03F5B8u: goto label_7F03F5B8;
    case 0x7F03F5BCu: goto label_7F03F5BC;
    case 0x7F03F5C0u: goto label_7F03F5C0;
    case 0x7F03F5C4u: goto label_7F03F5C4;
    case 0x7F03F5C8u: goto label_7F03F5C8;
    case 0x7F03F5CCu: goto label_7F03F5CC;
    case 0x7F03F5D0u: goto label_7F03F5D0;
    case 0x7F03F5D4u: goto label_7F03F5D4;
    case 0x7F03F5D8u: goto label_7F03F5D8;
    case 0x7F03F5DCu: goto label_7F03F5DC;
    case 0x7F03F5E0u: goto label_7F03F5E0;
    case 0x7F03F5E4u: goto label_7F03F5E4;
    case 0x7F03F5E8u: goto label_7F03F5E8;
    case 0x7F03F5ECu: goto label_7F03F5EC;
    case 0x7F03F5F0u: goto label_7F03F5F0;
    case 0x7F03F5F4u: goto label_7F03F5F4;
    case 0x7F03F5F8u: goto label_7F03F5F8;
    case 0x7F03F5FCu: goto label_7F03F5FC;
    case 0x7F03F600u: goto label_7F03F600;
    case 0x7F03F604u: goto label_7F03F604;
    case 0x7F03F608u: goto label_7F03F608;
    case 0x7F03F60Cu: goto label_7F03F60C;
    case 0x7F03F610u: goto label_7F03F610;
    case 0x7F03F614u: goto label_7F03F614;
    case 0x7F03F618u: goto label_7F03F618;
    case 0x7F03F61Cu: goto label_7F03F61C;
    case 0x7F03F620u: goto label_7F03F620;
    case 0x7F03F624u: goto label_7F03F624;
    case 0x7F03F628u: goto label_7F03F628;
    case 0x7F03F62Cu: goto label_7F03F62C;
    case 0x7F03F630u: goto label_7F03F630;
    case 0x7F03F634u: goto label_7F03F634;
    case 0x7F03F638u: goto label_7F03F638;
    case 0x7F03F63Cu: goto label_7F03F63C;
    case 0x7F03F640u: goto label_7F03F640;
    case 0x7F03F644u: goto label_7F03F644;
    case 0x7F03F648u: goto label_7F03F648;
    case 0x7F03F64Cu: goto label_7F03F64C;
    case 0x7F03F650u: goto label_7F03F650;
    case 0x7F03F654u: goto label_7F03F654;
    case 0x7F03F658u: goto label_7F03F658;
    case 0x7F03F65Cu: goto label_7F03F65C;
    case 0x7F03F660u: goto label_7F03F660;
    case 0x7F03F664u: goto label_7F03F664;
    case 0x7F03F668u: goto label_7F03F668;
    case 0x7F03F66Cu: goto label_7F03F66C;
    case 0x7F03F670u: goto label_7F03F670;
    case 0x7F03F674u: goto label_7F03F674;
    case 0x7F03F678u: goto label_7F03F678;
    case 0x7F03F67Cu: goto label_7F03F67C;
    case 0x7F03F680u: goto label_7F03F680;
    case 0x7F03F684u: goto label_7F03F684;
    case 0x7F03F688u: goto label_7F03F688;
    case 0x7F03F68Cu: goto label_7F03F68C;
    case 0x7F03F690u: goto label_7F03F690;
    case 0x7F03F694u: goto label_7F03F694;
    case 0x7F03F698u: goto label_7F03F698;
    case 0x7F03F69Cu: goto label_7F03F69C;
    case 0x7F03F6A0u: goto label_7F03F6A0;
    case 0x7F03F6A4u: goto label_7F03F6A4;
    case 0x7F03F6A8u: goto label_7F03F6A8;
    case 0x7F03F6ACu: goto label_7F03F6AC;
    case 0x7F03F6B0u: goto label_7F03F6B0;
    case 0x7F03F6B4u: goto label_7F03F6B4;
    case 0x7F03F6B8u: goto label_7F03F6B8;
    case 0x7F03F6BCu: goto label_7F03F6BC;
    case 0x7F03F6C0u: goto label_7F03F6C0;
    case 0x7F03F6C4u: goto label_7F03F6C4;
    case 0x7F03F6C8u: goto label_7F03F6C8;
    case 0x7F03F6CCu: goto label_7F03F6CC;
    case 0x7F03F6D0u: goto label_7F03F6D0;
    case 0x7F03F6D4u: goto label_7F03F6D4;
    case 0x7F03F6D8u: goto label_7F03F6D8;
    case 0x7F03F6DCu: goto label_7F03F6DC;
    case 0x7F03F6E0u: goto label_7F03F6E0;
    case 0x7F03F6E4u: goto label_7F03F6E4;
    case 0x7F03F6E8u: goto label_7F03F6E8;
    case 0x7F03F6ECu: goto label_7F03F6EC;
    case 0x7F03F6F0u: goto label_7F03F6F0;
    case 0x7F03F6F4u: goto label_7F03F6F4;
    case 0x7F03F6F8u: goto label_7F03F6F8;
    case 0x7F03F6FCu: goto label_7F03F6FC;
    case 0x7F03F700u: goto label_7F03F700;
    case 0x7F03F704u: goto label_7F03F704;
    case 0x7F03F708u: goto label_7F03F708;
    case 0x7F03F70Cu: goto label_7F03F70C;
    case 0x7F03F710u: goto label_7F03F710;
    case 0x7F03F714u: goto label_7F03F714;
    case 0x7F03F718u: goto label_7F03F718;
    case 0x7F03F71Cu: goto label_7F03F71C;
    case 0x7F03F720u: goto label_7F03F720;
    case 0x7F03F724u: goto label_7F03F724;
    case 0x7F03F728u: goto label_7F03F728;
    case 0x7F03F72Cu: goto label_7F03F72C;
    case 0x7F03F730u: goto label_7F03F730;
    case 0x7F03F734u: goto label_7F03F734;
    case 0x7F03F738u: goto label_7F03F738;
    case 0x7F03F73Cu: goto label_7F03F73C;
    case 0x7F03F740u: goto label_7F03F740;
    case 0x7F03F744u: goto label_7F03F744;
    case 0x7F03F748u: goto label_7F03F748;
    case 0x7F03F74Cu: goto label_7F03F74C;
    case 0x7F03F750u: goto label_7F03F750;
    case 0x7F03F754u: goto label_7F03F754;
    case 0x7F03F758u: goto label_7F03F758;
    case 0x7F03F75Cu: goto label_7F03F75C;
    case 0x7F03F760u: goto label_7F03F760;
    case 0x7F03F764u: goto label_7F03F764;
    case 0x7F03F768u: goto label_7F03F768;
    case 0x7F03F76Cu: goto label_7F03F76C;
    case 0x7F03F770u: goto label_7F03F770;
    case 0x7F03F774u: goto label_7F03F774;
    case 0x7F03F778u: goto label_7F03F778;
    case 0x7F03F77Cu: goto label_7F03F77C;
    case 0x7F03F780u: goto label_7F03F780;
    case 0x7F03F784u: goto label_7F03F784;
    case 0x7F03F788u: goto label_7F03F788;
    case 0x7F03F78Cu: goto label_7F03F78C;
    case 0x7F03F790u: goto label_7F03F790;
    case 0x7F03F794u: goto label_7F03F794;
    case 0x7F03F798u: goto label_7F03F798;
    case 0x7F03F79Cu: goto label_7F03F79C;
    case 0x7F03F7A0u: goto label_7F03F7A0;
    case 0x7F03F7A4u: goto label_7F03F7A4;
    case 0x7F03F7A8u: goto label_7F03F7A8;
    case 0x7F03F7ACu: goto label_7F03F7AC;
    case 0x7F03F7B0u: goto label_7F03F7B0;
    case 0x7F03F7B4u: goto label_7F03F7B4;
    case 0x7F03F7B8u: goto label_7F03F7B8;
    case 0x7F03F7BCu: goto label_7F03F7BC;
    case 0x7F03F7C0u: goto label_7F03F7C0;
    case 0x7F03F7C4u: goto label_7F03F7C4;
    case 0x7F03F7C8u: goto label_7F03F7C8;
    case 0x7F03F7CCu: goto label_7F03F7CC;
    case 0x7F03F7D0u: goto label_7F03F7D0;
    case 0x7F03F7D4u: goto label_7F03F7D4;
    case 0x7F03F7D8u: goto label_7F03F7D8;
    case 0x7F03F7DCu: goto label_7F03F7DC;
    case 0x7F03F7E0u: goto label_7F03F7E0;
    case 0x7F03F7E4u: goto label_7F03F7E4;
    case 0x7F03F7E8u: goto label_7F03F7E8;
    case 0x7F03F7ECu: goto label_7F03F7EC;
    case 0x7F03F7F0u: goto label_7F03F7F0;
    case 0x7F03F7F4u: goto label_7F03F7F4;
    case 0x7F03F7F8u: goto label_7F03F7F8;
    case 0x7F03F7FCu: goto label_7F03F7FC;
    case 0x7F03F800u: goto label_7F03F800;
    case 0x7F03F804u: goto label_7F03F804;
    case 0x7F03F808u: goto label_7F03F808;
    case 0x7F03F80Cu: goto label_7F03F80C;
    case 0x7F03F810u: goto label_7F03F810;
    case 0x7F03F814u: goto label_7F03F814;
    case 0x7F03F818u: goto label_7F03F818;
    case 0x7F03F81Cu: goto label_7F03F81C;
    case 0x7F03F820u: goto label_7F03F820;
    case 0x7F03F824u: goto label_7F03F824;
    case 0x7F03F828u: goto label_7F03F828;
    case 0x7F03F82Cu: goto label_7F03F82C;
    case 0x7F03F830u: goto label_7F03F830;
    case 0x7F03F834u: goto label_7F03F834;
    case 0x7F03F838u: goto label_7F03F838;
    case 0x7F03F83Cu: goto label_7F03F83C;
    case 0x7F03F840u: goto label_7F03F840;
    case 0x7F03F844u: goto label_7F03F844;
    case 0x7F03F848u: goto label_7F03F848;
    case 0x7F03F84Cu: goto label_7F03F84C;
    case 0x7F03F850u: goto label_7F03F850;
    case 0x7F03F854u: goto label_7F03F854;
    case 0x7F03F858u: goto label_7F03F858;
    case 0x7F03F85Cu: goto label_7F03F85C;
    case 0x7F03F860u: goto label_7F03F860;
    case 0x7F03F864u: goto label_7F03F864;
    case 0x7F03F868u: goto label_7F03F868;
    case 0x7F03F86Cu: goto label_7F03F86C;
    case 0x7F03F870u: goto label_7F03F870;
    case 0x7F03F874u: goto label_7F03F874;
    case 0x7F03F878u: goto label_7F03F878;
    case 0x7F03F87Cu: goto label_7F03F87C;
    case 0x7F03F880u: goto label_7F03F880;
    case 0x7F03F884u: goto label_7F03F884;
    case 0x7F03F888u: goto label_7F03F888;
    case 0x7F03F88Cu: goto label_7F03F88C;
    case 0x7F03F890u: goto label_7F03F890;
    case 0x7F03F894u: goto label_7F03F894;
    case 0x7F03F898u: goto label_7F03F898;
    case 0x7F03F89Cu: goto label_7F03F89C;
    case 0x7F03F8A0u: goto label_7F03F8A0;
    case 0x7F03F8A4u: goto label_7F03F8A4;
    case 0x7F03F8A8u: goto label_7F03F8A8;
    case 0x7F03F8ACu: goto label_7F03F8AC;
    case 0x7F03F8B0u: goto label_7F03F8B0;
    case 0x7F03F8B4u: goto label_7F03F8B4;
    case 0x7F03F8B8u: goto label_7F03F8B8;
    case 0x7F03F8BCu: goto label_7F03F8BC;
    case 0x7F03F8C0u: goto label_7F03F8C0;
    case 0x7F03F8C4u: goto label_7F03F8C4;
    case 0x7F03F8C8u: goto label_7F03F8C8;
    case 0x7F03F8CCu: goto label_7F03F8CC;
    case 0x7F03F8D0u: goto label_7F03F8D0;
    case 0x7F03F8D4u: goto label_7F03F8D4;
    case 0x7F03F8D8u: goto label_7F03F8D8;
    case 0x7F03F8DCu: goto label_7F03F8DC;
    case 0x7F03F8E0u: goto label_7F03F8E0;
    case 0x7F03F8E4u: goto label_7F03F8E4;
    case 0x7F03F8E8u: goto label_7F03F8E8;
    case 0x7F03F8ECu: goto label_7F03F8EC;
    case 0x7F03F8F0u: goto label_7F03F8F0;
    case 0x7F03F8F4u: goto label_7F03F8F4;
    case 0x7F03F8F8u: goto label_7F03F8F8;
    case 0x7F03F8FCu: goto label_7F03F8FC;
    case 0x7F03F900u: goto label_7F03F900;
    case 0x7F03F904u: goto label_7F03F904;
    case 0x7F03F908u: goto label_7F03F908;
    case 0x7F03F90Cu: goto label_7F03F90C;
    case 0x7F03F910u: goto label_7F03F910;
    case 0x7F03F914u: goto label_7F03F914;
    case 0x7F03F918u: goto label_7F03F918;
    case 0x7F03F91Cu: goto label_7F03F91C;
    case 0x7F03F920u: goto label_7F03F920;
    case 0x7F03F924u: goto label_7F03F924;
    case 0x7F03F928u: goto label_7F03F928;
    case 0x7F03F92Cu: goto label_7F03F92C;
    case 0x7F03F930u: goto label_7F03F930;
    case 0x7F03F934u: goto label_7F03F934;
    case 0x7F03F938u: goto label_7F03F938;
    case 0x7F03F93Cu: goto label_7F03F93C;
    case 0x7F03F940u: goto label_7F03F940;
    case 0x7F03F944u: goto label_7F03F944;
    case 0x7F03F948u: goto label_7F03F948;
    case 0x7F03F94Cu: goto label_7F03F94C;
    case 0x7F03F950u: goto label_7F03F950;
    case 0x7F03F954u: goto label_7F03F954;
    case 0x7F03F958u: goto label_7F03F958;
    case 0x7F03F95Cu: goto label_7F03F95C;
    case 0x7F03F960u: goto label_7F03F960;
    case 0x7F03F964u: goto label_7F03F964;
    case 0x7F03F968u: goto label_7F03F968;
    case 0x7F03F96Cu: goto label_7F03F96C;
    case 0x7F03F970u: goto label_7F03F970;
    case 0x7F03F974u: goto label_7F03F974;
    case 0x7F03F978u: goto label_7F03F978;
    case 0x7F03F97Cu: goto label_7F03F97C;
    case 0x7F03F980u: goto label_7F03F980;
    case 0x7F03F984u: goto label_7F03F984;
    case 0x7F03F988u: goto label_7F03F988;
    case 0x7F03F98Cu: goto label_7F03F98C;
    case 0x7F03F990u: goto label_7F03F990;
    case 0x7F03F994u: goto label_7F03F994;
    case 0x7F03F998u: goto label_7F03F998;
    case 0x7F03F99Cu: goto label_7F03F99C;
    case 0x7F03F9A0u: goto label_7F03F9A0;
    case 0x7F03F9A4u: goto label_7F03F9A4;
    case 0x7F03F9A8u: goto label_7F03F9A8;
    case 0x7F03F9ACu: goto label_7F03F9AC;
    case 0x7F03F9B0u: goto label_7F03F9B0;
    case 0x7F03F9B4u: goto label_7F03F9B4;
    case 0x7F03F9B8u: goto label_7F03F9B8;
    case 0x7F03F9BCu: goto label_7F03F9BC;
    case 0x7F03F9C0u: goto label_7F03F9C0;
    case 0x7F03F9C4u: goto label_7F03F9C4;
    case 0x7F03F9C8u: goto label_7F03F9C8;
    case 0x7F03F9CCu: goto label_7F03F9CC;
    case 0x7F03F9D0u: goto label_7F03F9D0;
    case 0x7F03F9D4u: goto label_7F03F9D4;
    case 0x7F03F9D8u: goto label_7F03F9D8;
    case 0x7F03F9DCu: goto label_7F03F9DC;
    case 0x7F03F9E0u: goto label_7F03F9E0;
    case 0x7F03F9E4u: goto label_7F03F9E4;
    case 0x7F03F9E8u: goto label_7F03F9E8;
    case 0x7F03F9ECu: goto label_7F03F9EC;
    case 0x7F03F9F0u: goto label_7F03F9F0;
    case 0x7F03F9F4u: goto label_7F03F9F4;
    case 0x7F03F9F8u: goto label_7F03F9F8;
    case 0x7F03F9FCu: goto label_7F03F9FC;
    case 0x7F03FA00u: goto label_7F03FA00;
    case 0x7F03FA04u: goto label_7F03FA04;
    case 0x7F03FA08u: goto label_7F03FA08;
    case 0x7F03FA0Cu: goto label_7F03FA0C;
    case 0x7F03FA10u: goto label_7F03FA10;
    case 0x7F03FA14u: goto label_7F03FA14;
    case 0x7F03FA18u: goto label_7F03FA18;
    case 0x7F03FA1Cu: goto label_7F03FA1C;
    case 0x7F03FA20u: goto label_7F03FA20;
    case 0x7F03FA24u: goto label_7F03FA24;
    case 0x7F03FA28u: goto label_7F03FA28;
    case 0x7F03FA2Cu: goto label_7F03FA2C;
    case 0x7F03FA30u: goto label_7F03FA30;
    case 0x7F03FA34u: goto label_7F03FA34;
    case 0x7F03FA38u: goto label_7F03FA38;
    case 0x7F03FA3Cu: goto label_7F03FA3C;
    case 0x7F03FA40u: goto label_7F03FA40;
    case 0x7F03FA44u: goto label_7F03FA44;
    case 0x7F03FA48u: goto label_7F03FA48;
    case 0x7F03FA4Cu: goto label_7F03FA4C;
    case 0x7F03FA50u: goto label_7F03FA50;
    case 0x7F03FA54u: goto label_7F03FA54;
    case 0x7F03FA58u: goto label_7F03FA58;
    case 0x7F03FA5Cu: goto label_7F03FA5C;
    case 0x7F03FA60u: goto label_7F03FA60;
    case 0x7F03FA64u: goto label_7F03FA64;
    case 0x7F03FA68u: goto label_7F03FA68;
    case 0x7F03FA6Cu: goto label_7F03FA6C;
    case 0x7F03FA70u: goto label_7F03FA70;
    case 0x7F03FA74u: goto label_7F03FA74;
    case 0x7F03FA78u: goto label_7F03FA78;
    case 0x7F03FA7Cu: goto label_7F03FA7C;
    case 0x7F03FA80u: goto label_7F03FA80;
    case 0x7F03FA84u: goto label_7F03FA84;
    case 0x7F03FA88u: goto label_7F03FA88;
    case 0x7F03FA8Cu: goto label_7F03FA8C;
    case 0x7F03FA90u: goto label_7F03FA90;
    case 0x7F03FA94u: goto label_7F03FA94;
    case 0x7F03FA98u: goto label_7F03FA98;
    case 0x7F03FA9Cu: goto label_7F03FA9C;
    case 0x7F03FAA0u: goto label_7F03FAA0;
    case 0x7F03FAA4u: goto label_7F03FAA4;
    case 0x7F03FAA8u: goto label_7F03FAA8;
    case 0x7F03FAACu: goto label_7F03FAAC;
    case 0x7F03FAB0u: goto label_7F03FAB0;
    case 0x7F03FAB4u: goto label_7F03FAB4;
    case 0x7F03FAB8u: goto label_7F03FAB8;
    case 0x7F03FABCu: goto label_7F03FABC;
    case 0x7F03FAC0u: goto label_7F03FAC0;
    case 0x7F03FAC4u: goto label_7F03FAC4;
    case 0x7F03FAC8u: goto label_7F03FAC8;
    case 0x7F03FACCu: goto label_7F03FACC;
    case 0x7F03FAD0u: goto label_7F03FAD0;
    case 0x7F03FAD4u: goto label_7F03FAD4;
    case 0x7F03FAD8u: goto label_7F03FAD8;
    case 0x7F03FADCu: goto label_7F03FADC;
    case 0x7F03FAE0u: goto label_7F03FAE0;
    case 0x7F03FAE4u: goto label_7F03FAE4;
    case 0x7F03FAE8u: goto label_7F03FAE8;
    case 0x7F03FAECu: goto label_7F03FAEC;
    case 0x7F03FAF0u: goto label_7F03FAF0;
    case 0x7F03FAF4u: goto label_7F03FAF4;
    case 0x7F03FAF8u: goto label_7F03FAF8;
    case 0x7F03FAFCu: goto label_7F03FAFC;
    case 0x7F03FB00u: goto label_7F03FB00;
    case 0x7F03FB04u: goto label_7F03FB04;
    case 0x7F03FB08u: goto label_7F03FB08;
    case 0x7F03FB0Cu: goto label_7F03FB0C;
    case 0x7F03FB10u: goto label_7F03FB10;
    case 0x7F03FB14u: goto label_7F03FB14;
    case 0x7F03FB18u: goto label_7F03FB18;
    case 0x7F03FB1Cu: goto label_7F03FB1C;
    case 0x7F03FB20u: goto label_7F03FB20;
    case 0x7F03FB24u: goto label_7F03FB24;
    case 0x7F03FB28u: goto label_7F03FB28;
    case 0x7F03FB2Cu: goto label_7F03FB2C;
    case 0x7F03FB30u: goto label_7F03FB30;
    case 0x7F03FB34u: goto label_7F03FB34;
    case 0x7F03FB38u: goto label_7F03FB38;
    case 0x7F03FB3Cu: goto label_7F03FB3C;
    case 0x7F03FB40u: goto label_7F03FB40;
    case 0x7F03FB44u: goto label_7F03FB44;
    case 0x7F03FB48u: goto label_7F03FB48;
    case 0x7F03FB4Cu: goto label_7F03FB4C;
    case 0x7F03FB50u: goto label_7F03FB50;
    case 0x7F03FB54u: goto label_7F03FB54;
    case 0x7F03FB58u: goto label_7F03FB58;
    case 0x7F03FB5Cu: goto label_7F03FB5C;
    case 0x7F03FB60u: goto label_7F03FB60;
    case 0x7F03FB64u: goto label_7F03FB64;
    case 0x7F03FB68u: goto label_7F03FB68;
    case 0x7F03FB6Cu: goto label_7F03FB6C;
    case 0x7F03FB70u: goto label_7F03FB70;
    case 0x7F03FB74u: goto label_7F03FB74;
    case 0x7F03FB78u: goto label_7F03FB78;
    case 0x7F03FB7Cu: goto label_7F03FB7C;
    case 0x7F03FB80u: goto label_7F03FB80;
    case 0x7F03FB84u: goto label_7F03FB84;
    case 0x7F03FB88u: goto label_7F03FB88;
    case 0x7F03FB8Cu: goto label_7F03FB8C;
    case 0x7F03FB90u: goto label_7F03FB90;
    case 0x7F03FB94u: goto label_7F03FB94;
    case 0x7F03FB98u: goto label_7F03FB98;
    case 0x7F03FB9Cu: goto label_7F03FB9C;
    case 0x7F03FBA0u: goto label_7F03FBA0;
    case 0x7F03FBA4u: goto label_7F03FBA4;
    case 0x7F03FBA8u: goto label_7F03FBA8;
    case 0x7F03FBACu: goto label_7F03FBAC;
    case 0x7F03FBB0u: goto label_7F03FBB0;
    case 0x7F03FBB4u: goto label_7F03FBB4;
    case 0x7F03FBB8u: goto label_7F03FBB8;
    case 0x7F03FBBCu: goto label_7F03FBBC;
    case 0x7F03FBC0u: goto label_7F03FBC0;
    case 0x7F03FBC4u: goto label_7F03FBC4;
    case 0x7F03FBC8u: goto label_7F03FBC8;
    case 0x7F03FBCCu: goto label_7F03FBCC;
    case 0x7F03FBD0u: goto label_7F03FBD0;
    case 0x7F03FBD4u: goto label_7F03FBD4;
    case 0x7F03FBD8u: goto label_7F03FBD8;
    case 0x7F03FBDCu: goto label_7F03FBDC;
    case 0x7F03FBE0u: goto label_7F03FBE0;
    case 0x7F03FBE4u: goto label_7F03FBE4;
    case 0x7F03FBE8u: goto label_7F03FBE8;
    case 0x7F03FBECu: goto label_7F03FBEC;
    case 0x7F03FBF0u: goto label_7F03FBF0;
    case 0x7F03FBF4u: goto label_7F03FBF4;
    case 0x7F03FBF8u: goto label_7F03FBF8;
    case 0x7F03FBFCu: goto label_7F03FBFC;
    case 0x7F03FC00u: goto label_7F03FC00;
    case 0x7F03FC04u: goto label_7F03FC04;
    case 0x7F03FC08u: goto label_7F03FC08;
    case 0x7F03FC0Cu: goto label_7F03FC0C;
    case 0x7F03FC10u: goto label_7F03FC10;
    case 0x7F03FC14u: goto label_7F03FC14;
    case 0x7F03FC18u: goto label_7F03FC18;
    case 0x7F03FC1Cu: goto label_7F03FC1C;
    case 0x7F03FC20u: goto label_7F03FC20;
    case 0x7F03FC24u: goto label_7F03FC24;
    case 0x7F03FC28u: goto label_7F03FC28;
    case 0x7F03FC2Cu: goto label_7F03FC2C;
    case 0x7F03FC30u: goto label_7F03FC30;
    case 0x7F03FC34u: goto label_7F03FC34;
    case 0x7F03FC38u: goto label_7F03FC38;
    case 0x7F03FC3Cu: goto label_7F03FC3C;
    case 0x7F03FC40u: goto label_7F03FC40;
    case 0x7F03FC44u: goto label_7F03FC44;
    case 0x7F03FC48u: goto label_7F03FC48;
    case 0x7F03FC4Cu: goto label_7F03FC4C;
    case 0x7F03FC50u: goto label_7F03FC50;
    case 0x7F03FC54u: goto label_7F03FC54;
    case 0x7F03FC58u: goto label_7F03FC58;
    case 0x7F03FC5Cu: goto label_7F03FC5C;
    case 0x7F03FC60u: goto label_7F03FC60;
    case 0x7F03FC64u: goto label_7F03FC64;
    case 0x7F03FC68u: goto label_7F03FC68;
    case 0x7F03FC6Cu: goto label_7F03FC6C;
    case 0x7F03FC70u: goto label_7F03FC70;
    case 0x7F03FC74u: goto label_7F03FC74;
    case 0x7F03FC78u: goto label_7F03FC78;
    case 0x7F03FC7Cu: goto label_7F03FC7C;
    case 0x7F03FC80u: goto label_7F03FC80;
    case 0x7F03FC84u: goto label_7F03FC84;
    case 0x7F03FC88u: goto label_7F03FC88;
    case 0x7F03FC8Cu: goto label_7F03FC8C;
    case 0x7F03FC90u: goto label_7F03FC90;
    case 0x7F03FC94u: goto label_7F03FC94;
    case 0x7F03FC98u: goto label_7F03FC98;
    case 0x7F03FC9Cu: goto label_7F03FC9C;
    case 0x7F03FCA0u: goto label_7F03FCA0;
    case 0x7F03FCA4u: goto label_7F03FCA4;
    case 0x7F03FCA8u: goto label_7F03FCA8;
    case 0x7F03FCACu: goto label_7F03FCAC;
    case 0x7F03FCB0u: goto label_7F03FCB0;
    case 0x7F03FCB4u: goto label_7F03FCB4;
    case 0x7F03FCB8u: goto label_7F03FCB8;
    case 0x7F03FCBCu: goto label_7F03FCBC;
    case 0x7F03FCC0u: goto label_7F03FCC0;
    case 0x7F03FCC4u: goto label_7F03FCC4;
    case 0x7F03FCC8u: goto label_7F03FCC8;
    case 0x7F03FCCCu: goto label_7F03FCCC;
    case 0x7F03FCD0u: goto label_7F03FCD0;
    case 0x7F03FCD4u: goto label_7F03FCD4;
    case 0x7F03FCD8u: goto label_7F03FCD8;
    case 0x7F03FCDCu: goto label_7F03FCDC;
    case 0x7F03FCE0u: goto label_7F03FCE0;
    case 0x7F03FCE4u: goto label_7F03FCE4;
    case 0x7F03FCE8u: goto label_7F03FCE8;
    case 0x7F03FCECu: goto label_7F03FCEC;
    case 0x7F03FCF0u: goto label_7F03FCF0;
    case 0x7F03FCF4u: goto label_7F03FCF4;
    case 0x7F03FCF8u: goto label_7F03FCF8;
    case 0x7F03FCFCu: goto label_7F03FCFC;
    case 0x7F03FD00u: goto label_7F03FD00;
    case 0x7F03FD04u: goto label_7F03FD04;
    case 0x7F03FD08u: goto label_7F03FD08;
    case 0x7F03FD0Cu: goto label_7F03FD0C;
    case 0x7F03FD10u: goto label_7F03FD10;
    case 0x7F03FD14u: goto label_7F03FD14;
    case 0x7F03FD18u: goto label_7F03FD18;
    case 0x7F03FD1Cu: goto label_7F03FD1C;
    case 0x7F03FD20u: goto label_7F03FD20;
    case 0x7F03FD24u: goto label_7F03FD24;
    case 0x7F03FD28u: goto label_7F03FD28;
    case 0x7F03FD2Cu: goto label_7F03FD2C;
    case 0x7F03FD30u: goto label_7F03FD30;
    case 0x7F03FD34u: goto label_7F03FD34;
    case 0x7F03FD38u: goto label_7F03FD38;
    case 0x7F03FD3Cu: goto label_7F03FD3C;
    case 0x7F03FD40u: goto label_7F03FD40;
    case 0x7F03FD44u: goto label_7F03FD44;
    case 0x7F03FD48u: goto label_7F03FD48;
    case 0x7F03FD4Cu: goto label_7F03FD4C;
    case 0x7F03FD50u: goto label_7F03FD50;
    case 0x7F03FD54u: goto label_7F03FD54;
    case 0x7F03FD58u: goto label_7F03FD58;
    case 0x7F03FD5Cu: goto label_7F03FD5C;
    case 0x7F03FD60u: goto label_7F03FD60;
    case 0x7F03FD64u: goto label_7F03FD64;
    case 0x7F03FD68u: goto label_7F03FD68;
    case 0x7F03FD6Cu: goto label_7F03FD6C;
    case 0x7F03FD70u: goto label_7F03FD70;
    case 0x7F03FD74u: goto label_7F03FD74;
    case 0x7F03FD78u: goto label_7F03FD78;
    case 0x7F03FD7Cu: goto label_7F03FD7C;
    case 0x7F03FD80u: goto label_7F03FD80;
    case 0x7F03FD84u: goto label_7F03FD84;
    case 0x7F03FD88u: goto label_7F03FD88;
    case 0x7F03FD8Cu: goto label_7F03FD8C;
    case 0x7F03FD90u: goto label_7F03FD90;
    case 0x7F03FD94u: goto label_7F03FD94;
    case 0x7F03FD98u: goto label_7F03FD98;
    case 0x7F03FD9Cu: goto label_7F03FD9C;
    case 0x7F03FDA0u: goto label_7F03FDA0;
    case 0x7F03FDA4u: goto label_7F03FDA4;
    case 0x7F03FDA8u: goto label_7F03FDA8;
    case 0x7F03FDACu: goto label_7F03FDAC;
    case 0x7F03FDB0u: goto label_7F03FDB0;
    case 0x7F03FDB4u: goto label_7F03FDB4;
    case 0x7F03FDB8u: goto label_7F03FDB8;
    case 0x7F03FDBCu: goto label_7F03FDBC;
    case 0x7F03FDC0u: goto label_7F03FDC0;
    case 0x7F03FDC4u: goto label_7F03FDC4;
    case 0x7F03FDC8u: goto label_7F03FDC8;
    case 0x7F03FDCCu: goto label_7F03FDCC;
    case 0x7F03FDD0u: goto label_7F03FDD0;
    case 0x7F03FDD4u: goto label_7F03FDD4;
    case 0x7F03FDD8u: goto label_7F03FDD8;
    case 0x7F03FDDCu: goto label_7F03FDDC;
    case 0x7F03FDE0u: goto label_7F03FDE0;
    case 0x7F03FDE4u: goto label_7F03FDE4;
    case 0x7F03FDE8u: goto label_7F03FDE8;
    case 0x7F03FDECu: goto label_7F03FDEC;
    case 0x7F03FDF0u: goto label_7F03FDF0;
    case 0x7F03FDF4u: goto label_7F03FDF4;
    case 0x7F03FDF8u: goto label_7F03FDF8;
    case 0x7F03FDFCu: goto label_7F03FDFC;
    case 0x7F03FE00u: goto label_7F03FE00;
    case 0x7F03FE04u: goto label_7F03FE04;
    case 0x7F03FE08u: goto label_7F03FE08;
    case 0x7F03FE0Cu: goto label_7F03FE0C;
    case 0x7F03FE10u: goto label_7F03FE10;
    case 0x7F03FE14u: goto label_7F03FE14;
    case 0x7F03FE18u: goto label_7F03FE18;
    case 0x7F03FE1Cu: goto label_7F03FE1C;
    case 0x7F03FE20u: goto label_7F03FE20;
    case 0x7F03FE24u: goto label_7F03FE24;
    case 0x7F03FE28u: goto label_7F03FE28;
    case 0x7F03FE2Cu: goto label_7F03FE2C;
    case 0x7F03FE30u: goto label_7F03FE30;
    case 0x7F03FE34u: goto label_7F03FE34;
    case 0x7F03FE38u: goto label_7F03FE38;
    case 0x7F03FE3Cu: goto label_7F03FE3C;
    case 0x7F03FE40u: goto label_7F03FE40;
    case 0x7F03FE44u: goto label_7F03FE44;
    case 0x7F03FE48u: goto label_7F03FE48;
    case 0x7F03FE4Cu: goto label_7F03FE4C;
    case 0x7F03FE50u: goto label_7F03FE50;
    case 0x7F03FE54u: goto label_7F03FE54;
    case 0x7F03FE58u: goto label_7F03FE58;
    case 0x7F03FE5Cu: goto label_7F03FE5C;
    case 0x7F03FE60u: goto label_7F03FE60;
    case 0x7F03FE64u: goto label_7F03FE64;
    case 0x7F03FE68u: goto label_7F03FE68;
    case 0x7F03FE6Cu: goto label_7F03FE6C;
    case 0x7F03FE70u: goto label_7F03FE70;
    case 0x7F03FE74u: goto label_7F03FE74;
    case 0x7F03FE78u: goto label_7F03FE78;
    case 0x7F03FE7Cu: goto label_7F03FE7C;
    case 0x7F03FE80u: goto label_7F03FE80;
    case 0x7F03FE84u: goto label_7F03FE84;
    case 0x7F03FE88u: goto label_7F03FE88;
    case 0x7F03FE8Cu: goto label_7F03FE8C;
    case 0x7F03FE90u: goto label_7F03FE90;
    case 0x7F03FE94u: goto label_7F03FE94;
    case 0x7F03FE98u: goto label_7F03FE98;
    case 0x7F03FE9Cu: goto label_7F03FE9C;
    case 0x7F03FEA0u: goto label_7F03FEA0;
    case 0x7F03FEA4u: goto label_7F03FEA4;
    case 0x7F03FEA8u: goto label_7F03FEA8;
    case 0x7F03FEACu: goto label_7F03FEAC;
    case 0x7F03FEB0u: goto label_7F03FEB0;
    case 0x7F03FEB4u: goto label_7F03FEB4;
    case 0x7F03FEB8u: goto label_7F03FEB8;
    case 0x7F03FEBCu: goto label_7F03FEBC;
    case 0x7F03FEC0u: goto label_7F03FEC0;
    case 0x7F03FEC4u: goto label_7F03FEC4;
    case 0x7F03FEC8u: goto label_7F03FEC8;
    case 0x7F03FECCu: goto label_7F03FECC;
    case 0x7F03FED0u: goto label_7F03FED0;
    case 0x7F03FED4u: goto label_7F03FED4;
    case 0x7F03FED8u: goto label_7F03FED8;
    case 0x7F03FEDCu: goto label_7F03FEDC;
    case 0x7F03FEE0u: goto label_7F03FEE0;
    case 0x7F03FEE4u: goto label_7F03FEE4;
    case 0x7F03FEE8u: goto label_7F03FEE8;
    case 0x7F03FEECu: goto label_7F03FEEC;
    case 0x7F03FEF0u: goto label_7F03FEF0;
    case 0x7F03FEF4u: goto label_7F03FEF4;
    case 0x7F03FEF8u: goto label_7F03FEF8;
    case 0x7F03FEFCu: goto label_7F03FEFC;
    case 0x7F03FF00u: goto label_7F03FF00;
    case 0x7F03FF04u: goto label_7F03FF04;
    case 0x7F03FF08u: goto label_7F03FF08;
    case 0x7F03FF0Cu: goto label_7F03FF0C;
    case 0x7F03FF10u: goto label_7F03FF10;
    case 0x7F03FF14u: goto label_7F03FF14;
    case 0x7F03FF18u: goto label_7F03FF18;
    case 0x7F03FF1Cu: goto label_7F03FF1C;
    case 0x7F03FF20u: goto label_7F03FF20;
    case 0x7F03FF24u: goto label_7F03FF24;
    case 0x7F03FF28u: goto label_7F03FF28;
    case 0x7F03FF2Cu: goto label_7F03FF2C;
    case 0x7F03FF30u: goto label_7F03FF30;
    case 0x7F03FF34u: goto label_7F03FF34;
    case 0x7F03FF38u: goto label_7F03FF38;
    case 0x7F03FF3Cu: goto label_7F03FF3C;
    case 0x7F03FF40u: goto label_7F03FF40;
    case 0x7F03FF44u: goto label_7F03FF44;
    case 0x7F03FF48u: goto label_7F03FF48;
    case 0x7F03FF4Cu: goto label_7F03FF4C;
    case 0x7F03FF50u: goto label_7F03FF50;
    case 0x7F03FF54u: goto label_7F03FF54;
    case 0x7F03FF58u: goto label_7F03FF58;
    case 0x7F03FF5Cu: goto label_7F03FF5C;
    case 0x7F03FF60u: goto label_7F03FF60;
    case 0x7F03FF64u: goto label_7F03FF64;
    case 0x7F03FF68u: goto label_7F03FF68;
    case 0x7F03FF6Cu: goto label_7F03FF6C;
    case 0x7F03FF70u: goto label_7F03FF70;
    case 0x7F03FF74u: goto label_7F03FF74;
    case 0x7F03FF78u: goto label_7F03FF78;
    case 0x7F03FF7Cu: goto label_7F03FF7C;
    case 0x7F03FF80u: goto label_7F03FF80;
    case 0x7F03FF84u: goto label_7F03FF84;
    case 0x7F03FF88u: goto label_7F03FF88;
    case 0x7F03FF8Cu: goto label_7F03FF8C;
    case 0x7F03FF90u: goto label_7F03FF90;
    case 0x7F03FF94u: goto label_7F03FF94;
    case 0x7F03FF98u: goto label_7F03FF98;
    case 0x7F03FF9Cu: goto label_7F03FF9C;
    case 0x7F03FFA0u: goto label_7F03FFA0;
    case 0x7F03FFA4u: goto label_7F03FFA4;
    case 0x7F03FFA8u: goto label_7F03FFA8;
    case 0x7F03FFACu: goto label_7F03FFAC;
    case 0x7F03FFB0u: goto label_7F03FFB0;
    case 0x7F03FFB4u: goto label_7F03FFB4;
    case 0x7F03FFB8u: goto label_7F03FFB8;
    case 0x7F03FFBCu: goto label_7F03FFBC;
    case 0x7F03FFC0u: goto label_7F03FFC0;
    case 0x7F03FFC4u: goto label_7F03FFC4;
    case 0x7F03FFC8u: goto label_7F03FFC8;
    case 0x7F03FFCCu: goto label_7F03FFCC;
    case 0x7F03FFD0u: goto label_7F03FFD0;
    case 0x7F03FFD4u: goto label_7F03FFD4;
    case 0x7F03FFD8u: goto label_7F03FFD8;
    case 0x7F03FFDCu: goto label_7F03FFDC;
    case 0x7F03FFE0u: goto label_7F03FFE0;
    case 0x7F03FFE4u: goto label_7F03FFE4;
    case 0x7F03FFE8u: goto label_7F03FFE8;
    case 0x7F03FFECu: goto label_7F03FFEC;
    case 0x7F03FFF0u: goto label_7F03FFF0;
    case 0x7F03FFF4u: goto label_7F03FFF4;
    case 0x7F03FFF8u: goto label_7F03FFF8;
    case 0x7F03FFFCu: goto label_7F03FFFC;
    case 0x7F040000u: goto label_7F040000;
    case 0x7F040004u: goto label_7F040004;
    case 0x7F040008u: goto label_7F040008;
    case 0x7F04000Cu: goto label_7F04000C;
    case 0x7F040010u: goto label_7F040010;
    case 0x7F040014u: goto label_7F040014;
    case 0x7F040018u: goto label_7F040018;
    case 0x7F04001Cu: goto label_7F04001C;
    case 0x7F040020u: goto label_7F040020;
    case 0x7F040024u: goto label_7F040024;
    case 0x7F040028u: goto label_7F040028;
    case 0x7F04002Cu: goto label_7F04002C;
    case 0x7F040030u: goto label_7F040030;
    case 0x7F040034u: goto label_7F040034;
    case 0x7F040038u: goto label_7F040038;
    case 0x7F04003Cu: goto label_7F04003C;
    case 0x7F040040u: goto label_7F040040;
    case 0x7F040044u: goto label_7F040044;
    case 0x7F040048u: goto label_7F040048;
    case 0x7F04004Cu: goto label_7F04004C;
    case 0x7F040050u: goto label_7F040050;
    case 0x7F040054u: goto label_7F040054;
    case 0x7F040058u: goto label_7F040058;
    case 0x7F04005Cu: goto label_7F04005C;
    case 0x7F040060u: goto label_7F040060;
    case 0x7F040064u: goto label_7F040064;
    case 0x7F040068u: goto label_7F040068;
    case 0x7F04006Cu: goto label_7F04006C;
    case 0x7F040070u: goto label_7F040070;
    case 0x7F040074u: goto label_7F040074;
    case 0x7F040078u: goto label_7F040078;
    case 0x7F04007Cu: goto label_7F04007C;
    case 0x7F040080u: goto label_7F040080;
    case 0x7F040084u: goto label_7F040084;
    case 0x7F040088u: goto label_7F040088;
    case 0x7F04008Cu: goto label_7F04008C;
    case 0x7F040090u: goto label_7F040090;
    case 0x7F040094u: goto label_7F040094;
    case 0x7F040098u: goto label_7F040098;
    case 0x7F04009Cu: goto label_7F04009C;
    case 0x7F0400A0u: goto label_7F0400A0;
    case 0x7F0400A4u: goto label_7F0400A4;
    case 0x7F0400A8u: goto label_7F0400A8;
    case 0x7F0400ACu: goto label_7F0400AC;
    case 0x7F0400B0u: goto label_7F0400B0;
    case 0x7F0400B4u: goto label_7F0400B4;
    case 0x7F0400B8u: goto label_7F0400B8;
    case 0x7F0400BCu: goto label_7F0400BC;
    case 0x7F0400C0u: goto label_7F0400C0;
    case 0x7F0400C4u: goto label_7F0400C4;
    case 0x7F0400C8u: goto label_7F0400C8;
    case 0x7F0400CCu: goto label_7F0400CC;
    case 0x7F0400D0u: goto label_7F0400D0;
    case 0x7F0400D4u: goto label_7F0400D4;
    case 0x7F0400D8u: goto label_7F0400D8;
    case 0x7F0400DCu: goto label_7F0400DC;
    case 0x7F0400E0u: goto label_7F0400E0;
    case 0x7F0400E4u: goto label_7F0400E4;
    case 0x7F0400E8u: goto label_7F0400E8;
    default: return;
    }
label_7F03C0EC:
    ctx->pc = 0x7F03C0ECu;
    ctx->downcount -= 3;
    // 7F03C0EC: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03C0F0:
    ctx->pc = 0x7F03C0F0u;
    // 7F03C0F0: lfs     f1, -11664(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F03C0F0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-11664);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03C0F4:
    ctx->pc = 0x7F03C0F4u;
    // 7F03C0F4: bl      0x7F110BF4
    {
            ctx->lr = 0x7F03C0F8u;
            ctx->pc = 0x7F110BF4u;
            return;
    }

label_7F03C0F8:
    ctx->pc = 0x7F03C0F8u;
    ctx->downcount -= 11;
    // 7F03C0F8: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03C0FC:
    ctx->pc = 0x7F03C0FCu;
    // 7F03C0FC: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03C100:
    ctx->pc = 0x7F03C100u;
    // 7F03C100: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03C104:
    ctx->pc = 0x7F03C104u;
    // 7F03C104: oris    r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | (0x8000u << 16);

label_7F03C108:
    ctx->pc = 0x7F03C108u;
    // 7F03C108: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03C10C:
    ctx->pc = 0x7F03C10Cu;
    // 7F03C10C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F03C110:
    ctx->pc = 0x7F03C110u;
    // 7F03C110: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03C114:
    ctx->pc = 0x7F03C114u;
    // 7F03C114: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03C118:
    ctx->pc = 0x7F03C118u;
    // 7F03C118: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03C11C:
    ctx->pc = 0x7F03C11Cu;
    // 7F03C11C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03C120:
    ctx->pc = 0x7F03C120u;
    ctx->downcount -= 22;
    // 7F03C120: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03C124:
    ctx->pc = 0x7F03C124u;
    // 7F03C124: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03C128:
    ctx->pc = 0x7F03C128u;
    // 7F03C128: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03C12C:
    ctx->pc = 0x7F03C12Cu;
    // 7F03C12C: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03C130:
    ctx->pc = 0x7F03C130u;
    // 7F03C130: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03C134:
    ctx->pc = 0x7F03C134u;
    // 7F03C134: addi    r3, r6, 624
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(624);

label_7F03C138:
    ctx->pc = 0x7F03C138u;
    // 7F03C138: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F03C13C:
    ctx->pc = 0x7F03C13Cu;
    // 7F03C13C: addi    r30, r6, 2544
    ctx->gpr[30] = ctx->gpr[6] + (u32)(s32)(2544);

label_7F03C140:
    ctx->pc = 0x7F03C140u;
    // 7F03C140: addi    r29, r6, 816
    ctx->gpr[29] = ctx->gpr[6] + (u32)(s32)(816);

label_7F03C144:
    ctx->pc = 0x7F03C144u;
    // 7F03C144: lwz     r5, 18312(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18312);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F03C148:
    ctx->pc = 0x7F03C148u;
    // 7F03C148: addi    r4, r6, 96
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(96);

label_7F03C14C:
    ctx->pc = 0x7F03C14Cu;
    // 7F03C14C: bl      0x7F014944
    {
            ctx->lr = 0x7F03C150u;
            ctx->pc = 0x7F014944u;
            return;
    }

label_7F03C150:
    ctx->pc = 0x7F03C150u;
    ctx->downcount -= 3;
    // 7F03C150: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F03C154:
    ctx->pc = 0x7F03C154u;
    // 7F03C154: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F03C158:
    ctx->pc = 0x7F03C158u;
    // 7F03C158: addi    r31, r3, 18312
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(18312);

label_7F03C15C:
    ctx->pc = 0x7F03C15Cu;
    ctx->downcount -= 4;
    // 7F03C15C: lwz     r4, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03C160:
    // 7F03C160: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F03C164:
    ctx->pc = 0x7F03C164u;
    // 7F03C164: lwz     r5, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F03C168:
    // 7F03C168: bl      0x7F014964
    {
            ctx->lr = 0x7F03C16Cu;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F03C16C:
    ctx->downcount -= 5;
    // 7F03C16C: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F03C170:
    // 7F03C170: addi    r30, r30, 12
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(12);

label_7F03C174:
    // 7F03C174: cmpwi   r28, 9
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(9);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03C178:
    // 7F03C178: addi    r29, r29, 192
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(192);

label_7F03C17C:
    // 7F03C17C: bc    12, 0, 0x7F03C15C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03C15Cu;
                return;
            }
            goto label_7F03C15C;
        }
    }

label_7F03C180:
    ctx->pc = 0x7F03C180u;
    ctx->downcount -= 16;
    // 7F03C180: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F03C184:
    ctx->pc = 0x7F03C184u;
    // 7F03C184: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03C188:
    ctx->pc = 0x7F03C188u;
    // 7F03C188: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03C18C:
    ctx->pc = 0x7F03C18Cu;
    // 7F03C18C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F03C190:
    ctx->pc = 0x7F03C190u;
    // 7F03C190: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03C194:
    ctx->pc = 0x7F03C194u;
    ctx->downcount -= 3;
    // 7F03C194: lwz     r0, 2832(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2832);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03C198:
    ctx->pc = 0x7F03C198u;
    // 7F03C198: cmpwi   r0, 0
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

label_7F03C19C:
    ctx->pc = 0x7F03C19Cu;
    // 7F03C19C: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03C1A0:
    ctx->pc = 0x7F03C1A0u;
    ctx->downcount -= 7;
    // 7F03C1A0: lwz     r4, 788(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(788);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03C1A4:
    ctx->pc = 0x7F03C1A4u;
    // 7F03C1A4: lha     r0, 18(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03C1A8:
    ctx->pc = 0x7F03C1A8u;
    // 7F03C1A8: sth     r0, 2712(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2712);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F03C1AC:
    ctx->pc = 0x7F03C1ACu;
    // 7F03C1AC: lwz     r4, 788(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(788);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03C1B0:
    ctx->pc = 0x7F03C1B0u;
    // 7F03C1B0: lha     r0, 22(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03C1B4:
    ctx->pc = 0x7F03C1B4u;
    // 7F03C1B4: sth     r0, 2728(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2728);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F03C1B8:
    ctx->pc = 0x7F03C1B8u;
    // 7F03C1B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03C1BC:
    ctx->pc = 0x7F03C1BCu;
    ctx->downcount -= 4;
    // 7F03C1BC: lhz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F03C1C0:
    ctx->pc = 0x7F03C1C0u;
    // 7F03C1C0: or   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[4];
    }

label_7F03C1C4:
    ctx->pc = 0x7F03C1C4u;
    // 7F03C1C4: sth     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F03C1C8:
    ctx->pc = 0x7F03C1C8u;
    // 7F03C1C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03C1CC:
    ctx->pc = 0x7F03C1CCu;
    ctx->downcount -= 4;
    // 7F03C1CC: lhz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F03C1D0:
    ctx->pc = 0x7F03C1D0u;
    // 7F03C1D0: andc   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[4];
    }

label_7F03C1D4:
    ctx->pc = 0x7F03C1D4u;
    // 7F03C1D4: sth     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F03C1D8:
    ctx->pc = 0x7F03C1D8u;
    // 7F03C1D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03C1DC:
    ctx->pc = 0x7F03C1DCu;
    ctx->downcount -= 30;
    // 7F03C1DC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F03C1E0:
    ctx->pc = 0x7F03C1E0u;
    // 7F03C1E0: fsubs   f0, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F03C1E0u)) return;
    ppc_fsubs(ctx, 0, 1, 2);

label_7F03C1E4:
    ctx->pc = 0x7F03C1E4u;
    // 7F03C1E4: fadds   f3, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F03C1E4u)) return;
    ppc_fadds(ctx, 3, 1, 2);

label_7F03C1E8:
    ctx->pc = 0x7F03C1E8u;
    // 7F03C1E8: lfs     f1, -11592(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F03C1E8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-11592);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03C1EC:
    ctx->pc = 0x7F03C1ECu;
    // 7F03C1EC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F03C1F0:
    ctx->pc = 0x7F03C1F0u;
    // 7F03C1F0: fdivs   f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F03C1F0u)) return;
    ppc_fdivs(ctx, 2, 1, 0);

label_7F03C1F4:
    ctx->pc = 0x7F03C1F4u;
    // 7F03C1F4: lfs     f0, -11588(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F03C1F4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-11588);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F03C1F8:
    ctx->pc = 0x7F03C1F8u;
    // 7F03C1F8: fneg    f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F03C1F8u)) return;
    ctx->fpr[1] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[3]) ^ 0x8000000000000000ull);

label_7F03C1FC:
    ctx->pc = 0x7F03C1FCu;
    // 7F03C1FC: stfs     f2, 28(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F03C1FCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F03C200:
    ctx->pc = 0x7F03C200u;
    // 7F03C200: lfs     f2, 28(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F03C200u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F03C204:
    ctx->pc = 0x7F03C204u;
    // 7F03C204: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F03C204u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F03C208:
    ctx->pc = 0x7F03C208u;
    // 7F03C208: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F03C208u)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F03C20C:
    ctx->pc = 0x7F03C20Cu;
    // 7F03C20C: stfs     f0, 24(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F03C20Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F03C210:
    ctx->pc = 0x7F03C210u;
    // 7F03C210: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03C214:
    ctx->pc = 0x7F03C214u;
    ctx->downcount -= 2;
    // 7F03C214: cmplwi  r3, 0x0000
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

label_7F03C218:
    ctx->pc = 0x7F03C218u;
    // 7F03C218: bc    12, 2, 0x7F03C24C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03C24C;
        }
    }

label_7F03C21C:
    ctx->pc = 0x7F03C21Cu;
    ctx->downcount -= 3;
    // 7F03C21C: lhz     r5, 244(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(244);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_7F03C220:
    ctx->pc = 0x7F03C220u;
    // 7F03C220: addi    r3, r3, 248
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(248);

label_7F03C224:
    ctx->pc = 0x7F03C224u;
    // 7F03C224: b       0x7F03C244
    {
            goto label_7F03C244;
    }

label_7F03C228:
    ctx->pc = 0x7F03C228u;
    ctx->downcount -= 4;
    // 7F03C228: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03C22C:
    // 7F03C22C: rlwinm r0, r0, 0, 8, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00FFFFFFu;
    }

label_7F03C230:
    // 7F03C230: cmplw   r0, r4
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

label_7F03C234:
    // 7F03C234: bc    4, 2, 0x7F03C240
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03C240;
        }
    }

label_7F03C238:
    ctx->downcount -= 2;
    // 7F03C238: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F03C23C:
    ctx->pc = 0x7F03C23Cu;
    // 7F03C23C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03C240:
    ctx->downcount -= 1;
    // 7F03C240: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F03C244:
    ctx->downcount -= 2;
    // 7F03C244: addic.  r5, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[5] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F03C248:
    // 7F03C248: bc    4, 0, 0x7F03C228
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03C228u;
                return;
            }
            goto label_7F03C228;
        }
    }

label_7F03C24C:
    ctx->pc = 0x7F03C24Cu;
    ctx->downcount -= 2;
    // 7F03C24C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F03C250:
    ctx->pc = 0x7F03C250u;
    // 7F03C250: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03C254:
    ctx->pc = 0x7F03C254u;
    ctx->downcount -= 1;
    // 7F03C254: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03C258:
    ctx->pc = 0x7F03C258u;
    ctx->downcount -= 1;
    // 7F03C258: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03C25C:
    ctx->pc = 0x7F03C25Cu;
    ctx->downcount -= 1;
    // 7F03C25C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03C260:
    ctx->pc = 0x7F03C260u;
    ctx->downcount -= 18;
    // 7F03C260: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03C264:
    ctx->pc = 0x7F03C264u;
    // 7F03C264: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03C268:
    ctx->pc = 0x7F03C268u;
    // 7F03C268: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03C26C:
    ctx->pc = 0x7F03C26Cu;
    // 7F03C26C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F03C270:
    ctx->pc = 0x7F03C270u;
    // 7F03C270: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F03C274:
    ctx->pc = 0x7F03C274u;
    // 7F03C274: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03C278:
    ctx->pc = 0x7F03C278u;
    // 7F03C278: lwz     r3, 4116(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4116);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03C27C:
    ctx->pc = 0x7F03C27Cu;
    // 7F03C27C: bl      0x7F3C9624
    {
            ctx->lr = 0x7F03C280u;
            ctx->pc = 0x7F3C9624u;
            return;
    }

label_7F03C280:
    ctx->pc = 0x7F03C280u;
    ctx->downcount -= 2;
    // 7F03C280: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03C284:
    ctx->pc = 0x7F03C284u;
    // 7F03C284: b       0x7F03C340
    {
            goto label_7F03C340;
    }

label_7F03C288:
    ctx->pc = 0x7F03C288u;
    ctx->downcount -= 5;
    // 7F03C288: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03C28C:
    ctx->pc = 0x7F03C28Cu;
    // 7F03C28C: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03C290:
    ctx->pc = 0x7F03C290u;
    // 7F03C290: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03C294:
    // 7F03C294: cmpwi   r0, 1
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

label_7F03C298:
    // 7F03C298: bc    12, 2, 0x7F03C2F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03C2F4;
        }
    }

label_7F03C29C:
    ctx->downcount -= 1;
    // 7F03C29C: bc    4, 0, 0x7F03C2AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03C2AC;
        }
    }

label_7F03C2A0:
    ctx->downcount -= 2;
    // 7F03C2A0: cmpwi   r0, 0
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

label_7F03C2A4:
    // 7F03C2A4: bc    4, 0, 0x7F03C2C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03C2C4;
        }
    }

label_7F03C2A8:
    ctx->downcount -= 1;
    // 7F03C2A8: b       0x7F03C334
    {
            goto label_7F03C334;
    }

label_7F03C2AC:
    ctx->downcount -= 2;
    // 7F03C2AC: cmpwi   r0, 10
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

label_7F03C2B0:
    // 7F03C2B0: bc    12, 2, 0x7F03C2B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03C2B8;
        }
    }

label_7F03C2B4:
    ctx->downcount -= 1;
    // 7F03C2B4: b       0x7F03C334
    {
            goto label_7F03C334;
    }

label_7F03C2B8:
    ctx->downcount -= 2;
    // 7F03C2B8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03C2BC:
    // 7F03C2BC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F03C2C0u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F03C2C0:
    ctx->downcount -= 1;
    // 7F03C2C0: b       0x7F03C334
    {
            goto label_7F03C334;
    }

label_7F03C2C4:
    ctx->downcount -= 2;
    // 7F03C2C4: addi    r3, r31, 3616
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3616);

label_7F03C2C8:
    // 7F03C2C8: bl      0x7F27E648
    {
            ctx->lr = 0x7F03C2CCu;
            ctx->pc = 0x7F27E648u;
            return;
    }

label_7F03C2CC:
    ctx->pc = 0x7F03C2CCu;
    ctx->downcount -= 7;
    // 7F03C2CC: lwz     r5, 464(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(464);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F03C2D0:
    // 7F03C2D0: addi    r3, r31, 3572
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3572);

label_7F03C2D4:
    // 7F03C2D4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F03C2D8:
    ctx->pc = 0x7F03C2D8u;
    // 7F03C2D8: lwz     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03C2DC:
    // 7F03C2DC: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F03C2E0:
    ctx->pc = 0x7F03C2E0u;
    // 7F03C2E0: stw     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03C2E4:
    // 7F03C2E4: bl      0x7F03C1CC
    {
            ctx->lr = 0x7F03C2E8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03C1CCu;
                return;
            }
            goto label_7F03C1CC;
    }

label_7F03C2E8:
    ctx->downcount -= 3;
    // 7F03C2E8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F03C2EC:
    ctx->pc = 0x7F03C2ECu;
    // 7F03C2EC: stw     r0, 4120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4120);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03C2F0:
    // 7F03C2F0: b       0x7F03C334
    {
            goto label_7F03C334;
    }

label_7F03C2F4:
    ctx->downcount -= 2;
    // 7F03C2F4: addi    r3, r31, 3616
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3616);

label_7F03C2F8:
    // 7F03C2F8: bl      0x7F27E638
    {
            ctx->lr = 0x7F03C2FCu;
            ctx->pc = 0x7F27E638u;
            return;
    }

label_7F03C2FC:
    ctx->pc = 0x7F03C2FCu;
    ctx->downcount -= 7;
    // 7F03C2FC: lwz     r5, 464(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(464);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F03C300:
    // 7F03C300: addi    r3, r31, 3572
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3572);

label_7F03C304:
    // 7F03C304: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F03C308:
    ctx->pc = 0x7F03C308u;
    // 7F03C308: lwz     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03C30C:
    // 7F03C30C: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F03C310:
    ctx->pc = 0x7F03C310u;
    // 7F03C310: stw     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03C314:
    // 7F03C314: bl      0x7F03C1BC
    {
            ctx->lr = 0x7F03C318u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03C1BCu;
                return;
            }
            goto label_7F03C1BC;
    }

label_7F03C318:
    ctx->downcount -= 2;
    // 7F03C318: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F03C31C:
    // 7F03C31C: bl      0x7F0180A0
    {
            ctx->lr = 0x7F03C320u;
            ctx->pc = 0x7F0180A0u;
            return;
    }

label_7F03C320:
    ctx->pc = 0x7F03C320u;
    ctx->downcount -= 5;
    // 7F03C320: lwz     r3, 3552(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3552);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03C324:
    // 7F03C324: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F03C328:
    // 7F03C328: rlwinm r3, r3, 0, 0, 30
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFFFEu;
    }

label_7F03C32C:
    ctx->pc = 0x7F03C32Cu;
    // 7F03C32C: stw     r3, 3552(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3552);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F03C330:
    ctx->pc = 0x7F03C330u;
    // 7F03C330: stw     r0, 4120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4120);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03C334:
    ctx->pc = 0x7F03C334u;
    ctx->downcount -= 3;
    // 7F03C334: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03C338:
    // 7F03C338: addi    r0, r3, 16
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16);

label_7F03C33C:
    ctx->pc = 0x7F03C33Cu;
    // 7F03C33C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03C340:
    ctx->downcount -= 3;
    // 7F03C340: cmpwi   r30, 0
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

label_7F03C344:
    // 7F03C344: addi    r30, r30, -1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(-1);

label_7F03C348:
    // 7F03C348: bc    12, 1, 0x7F03C288
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03C288u;
                return;
            }
            goto label_7F03C288;
        }
    }

label_7F03C34C:
    ctx->pc = 0x7F03C34Cu;
    ctx->downcount -= 16;
    // 7F03C34C: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F03C350:
    ctx->pc = 0x7F03C350u;
    // 7F03C350: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03C354:
    ctx->pc = 0x7F03C354u;
    // 7F03C354: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03C358:
    ctx->pc = 0x7F03C358u;
    // 7F03C358: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F03C35C:
    ctx->pc = 0x7F03C35Cu;
    // 7F03C35C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03C360:
    ctx->pc = 0x7F03C360u;
    ctx->downcount -= 14;
    // 7F03C360: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03C364:
    ctx->pc = 0x7F03C364u;
    // 7F03C364: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03C368:
    ctx->pc = 0x7F03C368u;
    // 7F03C368: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03C36C:
    ctx->pc = 0x7F03C36Cu;
    // 7F03C36C: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F03C370:
    ctx->pc = 0x7F03C370u;
    // 7F03C370: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03C374:
    ctx->pc = 0x7F03C374u;
    // 7F03C374: lfs     f1, 64(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F03C374u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03C378:
    ctx->pc = 0x7F03C378u;
    // 7F03C378: lfs     f0, 72(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F03C378u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F03C37C:
    ctx->pc = 0x7F03C37Cu;
    // 7F03C37C: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F03C37Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F03C380:
    ctx->pc = 0x7F03C380u;
    // 7F03C380: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F03C380u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F03C384:
    ctx->pc = 0x7F03C384u;
    // 7F03C384: stfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F03C384u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F03C388:
    ctx->pc = 0x7F03C388u;
    // 7F03C388: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F03C388u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F03C38C:
    ctx->pc = 0x7F03C38Cu;
    // 7F03C38C: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03C390:
    ctx->pc = 0x7F03C390u;
    // 7F03C390: lwz     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03C394:
    ctx->pc = 0x7F03C394u;
    // 7F03C394: bl      0x7F040B34
    {
            ctx->lr = 0x7F03C398u;
            ctx->pc = 0x7F040B34u;
            return;
    }

label_7F03C398:
    ctx->pc = 0x7F03C398u;
    ctx->downcount -= 2;
    // 7F03C398: cmpwi   r3, 0
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

label_7F03C39C:
    ctx->pc = 0x7F03C39Cu;
    // 7F03C39C: bc    12, 2, 0x7F03C3A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03C3A8;
        }
    }

label_7F03C3A0:
    ctx->pc = 0x7F03C3A0u;
    ctx->downcount -= 2;
    // 7F03C3A0: cmpwi   r3, 7
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(7);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03C3A4:
    ctx->pc = 0x7F03C3A4u;
    // 7F03C3A4: bc    4, 2, 0x7F03C3C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03C3C0;
        }
    }

label_7F03C3A8:
    ctx->pc = 0x7F03C3A8u;
    ctx->downcount -= 5;
    // 7F03C3A8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F03C3AC:
    ctx->pc = 0x7F03C3ACu;
    // 7F03C3AC: lfs     f1, 72(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F03C3ACu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03C3B0:
    ctx->pc = 0x7F03C3B0u;
    // 7F03C3B0: lfs     f0, -11584(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F03C3B0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-11584);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F03C3B4:
    ctx->pc = 0x7F03C3B4u;
    // 7F03C3B4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F03C3B4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F03C3B8:
    ctx->pc = 0x7F03C3B8u;
    // 7F03C3B8: bc    4, 0, 0x7F03C3C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03C3C0;
        }
    }

label_7F03C3BC:
    ctx->pc = 0x7F03C3BCu;
    ctx->downcount -= 1;
    // 7F03C3BC: stfs     f0, 72(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F03C3BCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F03C3C0:
    ctx->pc = 0x7F03C3C0u;
    ctx->downcount -= 2;
    // 7F03C3C0: cmpwi   r3, 3
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

label_7F03C3C4:
    ctx->pc = 0x7F03C3C4u;
    // 7F03C3C4: bc    12, 2, 0x7F03C3D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03C3D0;
        }
    }

label_7F03C3C8:
    ctx->pc = 0x7F03C3C8u;
    ctx->downcount -= 2;
    // 7F03C3C8: cmpwi   r3, 4
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

label_7F03C3CC:
    ctx->pc = 0x7F03C3CCu;
    // 7F03C3CC: bc    4, 2, 0x7F03C3E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03C3E8;
        }
    }

label_7F03C3D0:
    ctx->pc = 0x7F03C3D0u;
    ctx->downcount -= 5;
    // 7F03C3D0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F03C3D4:
    ctx->pc = 0x7F03C3D4u;
    // 7F03C3D4: lfs     f1, 72(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F03C3D4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03C3D8:
    ctx->pc = 0x7F03C3D8u;
    // 7F03C3D8: lfs     f0, -11580(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F03C3D8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-11580);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F03C3DC:
    ctx->pc = 0x7F03C3DCu;
    // 7F03C3DC: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F03C3DCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F03C3E0:
    ctx->pc = 0x7F03C3E0u;
    // 7F03C3E0: bc    4, 1, 0x7F03C3E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03C3E8;
        }
    }

label_7F03C3E4:
    ctx->pc = 0x7F03C3E4u;
    ctx->downcount -= 1;
    // 7F03C3E4: stfs     f0, 72(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F03C3E4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F03C3E8:
    ctx->pc = 0x7F03C3E8u;
    ctx->downcount -= 2;
    // 7F03C3E8: cmpwi   r3, 1
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

label_7F03C3EC:
    ctx->pc = 0x7F03C3ECu;
    // 7F03C3EC: bc    12, 2, 0x7F03C3F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03C3F8;
        }
    }

label_7F03C3F0:
    ctx->pc = 0x7F03C3F0u;
    ctx->downcount -= 2;
    // 7F03C3F0: cmpwi   r3, 2
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

label_7F03C3F4:
    ctx->pc = 0x7F03C3F4u;
    // 7F03C3F4: bc    4, 2, 0x7F03C410
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03C410;
        }
    }

label_7F03C3F8:
    ctx->pc = 0x7F03C3F8u;
    ctx->downcount -= 5;
    // 7F03C3F8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F03C3FC:
    ctx->pc = 0x7F03C3FCu;
    // 7F03C3FC: lfs     f1, 64(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F03C3FCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03C400:
    ctx->pc = 0x7F03C400u;
    // 7F03C400: lfs     f0, -11576(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F03C400u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-11576);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F03C404:
    ctx->pc = 0x7F03C404u;
    // 7F03C404: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F03C404u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F03C408:
    ctx->pc = 0x7F03C408u;
    // 7F03C408: bc    4, 0, 0x7F03C410
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03C410;
        }
    }

label_7F03C40C:
    ctx->pc = 0x7F03C40Cu;
    ctx->downcount -= 1;
    // 7F03C40C: stfs     f0, 64(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F03C40Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F03C410:
    ctx->pc = 0x7F03C410u;
    ctx->downcount -= 2;
    // 7F03C410: cmpwi   r3, 5
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

label_7F03C414:
    ctx->pc = 0x7F03C414u;
    // 7F03C414: bc    12, 2, 0x7F03C420
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03C420;
        }
    }

label_7F03C418:
    ctx->pc = 0x7F03C418u;
    ctx->downcount -= 2;
    // 7F03C418: cmpwi   r3, 6
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03C41C:
    ctx->pc = 0x7F03C41Cu;
    // 7F03C41C: bc    4, 2, 0x7F03C438
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03C438;
        }
    }

label_7F03C420:
    ctx->pc = 0x7F03C420u;
    ctx->downcount -= 5;
    // 7F03C420: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F03C424:
    ctx->pc = 0x7F03C424u;
    // 7F03C424: lfs     f1, 64(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F03C424u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03C428:
    ctx->pc = 0x7F03C428u;
    // 7F03C428: lfs     f0, -11572(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F03C428u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-11572);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F03C42C:
    ctx->pc = 0x7F03C42Cu;
    // 7F03C42C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F03C42Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F03C430:
    ctx->pc = 0x7F03C430u;
    // 7F03C430: bc    4, 1, 0x7F03C438
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03C438;
        }
    }

label_7F03C434:
    ctx->pc = 0x7F03C434u;
    ctx->downcount -= 1;
    // 7F03C434: stfs     f0, 64(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F03C434u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F03C438:
    ctx->pc = 0x7F03C438u;
    ctx->downcount -= 6;
    // 7F03C438: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03C43C:
    ctx->pc = 0x7F03C43Cu;
    // 7F03C43C: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F03C440:
    ctx->pc = 0x7F03C440u;
    // 7F03C440: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03C444:
    ctx->pc = 0x7F03C444u;
    // 7F03C444: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F03C448:
    ctx->pc = 0x7F03C448u;
    // 7F03C448: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03C44C:
    ctx->pc = 0x7F03C44Cu;
    ctx->downcount -= 3;
    // 7F03C44C: lwz     r0, 3884(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3884);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03C450:
    ctx->pc = 0x7F03C450u;
    // 7F03C450: cmpwi   r0, 0
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

label_7F03C454:
    ctx->pc = 0x7F03C454u;
    // 7F03C454: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03C458:
    ctx->pc = 0x7F03C458u;
    ctx->downcount -= 12;
    // 7F03C458: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03C45C:
    ctx->pc = 0x7F03C45Cu;
    // 7F03C45C: stw     r5, 3884(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3884);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F03C460:
    ctx->pc = 0x7F03C460u;
    // 7F03C460: lha     r4, 98(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(98);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03C464:
    ctx->pc = 0x7F03C464u;
    // 7F03C464: addi    r0, r4, 2048
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(2048);

label_7F03C468:
    ctx->pc = 0x7F03C468u;
    // 7F03C468: sth     r0, 98(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(98);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F03C46C:
    ctx->pc = 0x7F03C46Cu;
    // 7F03C46C: lha     r0, 98(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(98);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03C470:
    ctx->pc = 0x7F03C470u;
    // 7F03C470: rlwinm r0, r0, 0, 20, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000FFFu;
    }

label_7F03C474:
    ctx->pc = 0x7F03C474u;
    // 7F03C474: sth     r0, 98(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(98);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F03C478:
    ctx->pc = 0x7F03C478u;
    // 7F03C478: lha     r0, 98(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(98);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03C47C:
    ctx->pc = 0x7F03C47Cu;
    // 7F03C47C: sth     r0, 106(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(106);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F03C480:
    ctx->pc = 0x7F03C480u;
    // 7F03C480: stw     r5, 3884(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3884);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F03C484:
    ctx->pc = 0x7F03C484u;
    // 7F03C484: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03C488:
    ctx->pc = 0x7F03C488u;
    ctx->downcount -= 15;
    // 7F03C488: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03C48C:
    ctx->pc = 0x7F03C48Cu;
    // 7F03C48C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03C490:
    ctx->pc = 0x7F03C490u;
    // 7F03C490: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03C494:
    ctx->pc = 0x7F03C494u;
    // 7F03C494: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03C498:
    ctx->pc = 0x7F03C498u;
    // 7F03C498: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F03C49C:
    ctx->pc = 0x7F03C49Cu;
    // 7F03C49C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03C4A0:
    ctx->pc = 0x7F03C4A0u;
    // 7F03C4A0: lwz     r0, 22024(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22024);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03C4A4:
    ctx->pc = 0x7F03C4A4u;
    // 7F03C4A4: lwz     r5, 468(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(468);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F03C4A8:
    ctx->pc = 0x7F03C4A8u;
    // 7F03C4A8: mulli   r4, r0, 104
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)104);

label_7F03C4AC:
    ctx->pc = 0x7F03C4ACu;
    // 7F03C4AC: lwz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F03C4B0:
    ctx->pc = 0x7F03C4B0u;
    // 7F03C4B0: lwzx    r0, r5, r4
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[4];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03C4B4:
    ctx->pc = 0x7F03C4B4u;
    // 7F03C4B4: cmpwi   r0, 14
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

label_7F03C4B8:
    ctx->pc = 0x7F03C4B8u;
    // 7F03C4B8: bc    4, 2, 0x7F03C720
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03C720;
        }
    }

label_7F03C4BC:
    ctx->pc = 0x7F03C4BCu;
    ctx->downcount -= 4;
    // 7F03C4BC: add   r4, r5, r4
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F03C4C0:
    ctx->pc = 0x7F03C4C0u;
    // 7F03C4C0: lwz     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03C4C4:
    ctx->pc = 0x7F03C4C4u;
    // 7F03C4C4: rlwinm. r0, r0, 0, 31, 31
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

label_7F03C4C8:
    ctx->pc = 0x7F03C4C8u;
    // 7F03C4C8: bc    12, 2, 0x7F03C720
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03C720;
        }
    }

label_7F03C4CC:
    ctx->pc = 0x7F03C4CCu;
    ctx->downcount -= 5;
    // 7F03C4CC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F03C4D0:
    ctx->pc = 0x7F03C4D0u;
    // 7F03C4D0: stw     r0, 3884(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3884);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03C4D4:
    ctx->pc = 0x7F03C4D4u;
    // 7F03C4D4: lwz     r0, 3836(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3836);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03C4D8:
    ctx->pc = 0x7F03C4D8u;
    // 7F03C4D8: cmpwi   r0, 0
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

label_7F03C4DC:
    ctx->pc = 0x7F03C4DCu;
    // 7F03C4DC: bc    12, 2, 0x7F03C670
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03C670;
        }
    }

label_7F03C4E0:
    ctx->pc = 0x7F03C4E0u;
    ctx->downcount -= 12;
    // 7F03C4E0: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F03C4E4:
    ctx->pc = 0x7F03C4E4u;
    // 7F03C4E4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F03C4E8:
    ctx->pc = 0x7F03C4E8u;
    // 7F03C4E8: addi    r7, r5, 22020
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(22020);

label_7F03C4EC:
    ctx->pc = 0x7F03C4ECu;
    // 7F03C4EC: lis     r6, 256
    ctx->gpr[6] = ((u32)(s32)(256) << 16);

label_7F03C4F0:
    ctx->pc = 0x7F03C4F0u;
    // 7F03C4F0: addi    r5, r4, -11568
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-11568);

label_7F03C4F4:
    ctx->pc = 0x7F03C4F4u;
    // 7F03C4F4: lwz     r4, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03C4F8:
    ctx->pc = 0x7F03C4F8u;
    // 7F03C4F8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F03C4F8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03C4FC:
    ctx->pc = 0x7F03C4FCu;
    // 7F03C4FC: addi    r6, r6, -1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-1);

label_7F03C500:
    ctx->pc = 0x7F03C500u;
    // 7F03C500: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03C504:
    ctx->pc = 0x7F03C504u;
    // 7F03C504: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_7F03C508:
    ctx->pc = 0x7F03C508u;
    // 7F03C508: li      r8, 60
    ctx->gpr[8] = (u32)(s32)(60);

label_7F03C50C:
    ctx->pc = 0x7F03C50Cu;
    // 7F03C50C: bl      0x7F040774
    {
            ctx->lr = 0x7F03C510u;
            ctx->pc = 0x7F040774u;
            return;
    }

label_7F03C510:
    ctx->pc = 0x7F03C510u;
    ctx->downcount -= 12;
    // 7F03C510: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F03C514:
    ctx->pc = 0x7F03C514u;
    // 7F03C514: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F03C518:
    ctx->pc = 0x7F03C518u;
    // 7F03C518: addi    r4, r4, 2908
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2908);

label_7F03C51C:
    ctx->pc = 0x7F03C51Cu;
    // 7F03C51C: lis     r5, 256
    ctx->gpr[5] = ((u32)(s32)(256) << 16);

label_7F03C520:
    ctx->pc = 0x7F03C520u;
    // 7F03C520: lfs     f1, -11568(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F03C520u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-11568);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03C524:
    ctx->pc = 0x7F03C524u;
    // 7F03C524: addi    r6, r5, -1
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-1);

label_7F03C528:
    ctx->pc = 0x7F03C528u;
    // 7F03C528: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03C52C:
    ctx->pc = 0x7F03C52Cu;
    // 7F03C52C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03C530:
    ctx->pc = 0x7F03C530u;
    // 7F03C530: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03C534:
    ctx->pc = 0x7F03C534u;
    // 7F03C534: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_7F03C538:
    ctx->pc = 0x7F03C538u;
    // 7F03C538: li      r8, 60
    ctx->gpr[8] = (u32)(s32)(60);

label_7F03C53C:
    ctx->pc = 0x7F03C53Cu;
    // 7F03C53C: bl      0x7F040774
    {
            ctx->lr = 0x7F03C540u;
            ctx->pc = 0x7F040774u;
            return;
    }

label_7F03C540:
    ctx->pc = 0x7F03C540u;
    ctx->downcount -= 5;
    // 7F03C540: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F03C544:
    ctx->pc = 0x7F03C544u;
    // 7F03C544: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03C548:
    ctx->pc = 0x7F03C548u;
    // 7F03C548: addi    r4, r4, 2908
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2908);

label_7F03C54C:
    ctx->pc = 0x7F03C54Cu;
    // 7F03C54C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03C550:
    ctx->pc = 0x7F03C550u;
    // 7F03C550: bl      0x7F041A78
    {
            ctx->lr = 0x7F03C554u;
            ctx->pc = 0x7F041A78u;
            return;
    }

label_7F03C554:
    ctx->pc = 0x7F03C554u;
    ctx->downcount -= 5;
    // 7F03C554: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F03C558:
    ctx->pc = 0x7F03C558u;
    // 7F03C558: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03C55C:
    ctx->pc = 0x7F03C55Cu;
    // 7F03C55C: addi    r4, r4, 2908
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2908);

label_7F03C560:
    ctx->pc = 0x7F03C560u;
    // 7F03C560: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03C564:
    ctx->pc = 0x7F03C564u;
    // 7F03C564: bl      0x7F041A58
    {
            ctx->lr = 0x7F03C568u;
            ctx->pc = 0x7F041A58u;
            return;
    }

label_7F03C568:
    ctx->pc = 0x7F03C568u;
    ctx->downcount -= 3;
    // 7F03C568: lwz     r0, 3828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3828);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03C56C:
    ctx->pc = 0x7F03C56Cu;
    // 7F03C56C: cmpwi   r0, 0
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

label_7F03C570:
    ctx->pc = 0x7F03C570u;
    // 7F03C570: bc    12, 2, 0x7F03C660
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03C660;
        }
    }

label_7F03C574:
    ctx->pc = 0x7F03C574u;
    ctx->downcount -= 3;
    // 7F03C574: addi    r3, r31, 4008
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4008);

label_7F03C578:
    ctx->pc = 0x7F03C578u;
    // 7F03C578: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F03C57C:
    ctx->pc = 0x7F03C57Cu;
    // 7F03C57C: bl      0x7F03D978
    {
            ctx->lr = 0x7F03C580u;
            goto label_7F03D978;
    }

label_7F03C580:
    ctx->pc = 0x7F03C580u;
    ctx->downcount -= 3;
    // 7F03C580: lwz     r0, 3836(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3836);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03C584:
    ctx->pc = 0x7F03C584u;
    // 7F03C584: cmpwi   r0, 0
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

label_7F03C588:
    ctx->pc = 0x7F03C588u;
    // 7F03C588: bc    12, 2, 0x7F03C5F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03C5F4;
        }
    }

label_7F03C58C:
    ctx->pc = 0x7F03C58Cu;
    ctx->downcount -= 12;
    // 7F03C58C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F03C590:
    ctx->pc = 0x7F03C590u;
    // 7F03C590: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F03C594:
    ctx->pc = 0x7F03C594u;
    // 7F03C594: addi    r6, r3, 22020
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(22020);

label_7F03C598:
    ctx->pc = 0x7F03C598u;
    // 7F03C598: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03C59C:
    ctx->pc = 0x7F03C59Cu;
    // 7F03C59C: addi    r5, r4, -11568
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-11568);

label_7F03C5A0:
    ctx->pc = 0x7F03C5A0u;
    // 7F03C5A0: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03C5A4:
    ctx->pc = 0x7F03C5A4u;
    // 7F03C5A4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F03C5A4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03C5A8:
    ctx->pc = 0x7F03C5A8u;
    // 7F03C5A8: li      r6, 8190
    ctx->gpr[6] = (u32)(s32)(8190);

label_7F03C5AC:
    ctx->pc = 0x7F03C5ACu;
    // 7F03C5AC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03C5B0:
    ctx->pc = 0x7F03C5B0u;
    // 7F03C5B0: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_7F03C5B4:
    ctx->pc = 0x7F03C5B4u;
    // 7F03C5B4: li      r8, 60
    ctx->gpr[8] = (u32)(s32)(60);

label_7F03C5B8:
    ctx->pc = 0x7F03C5B8u;
    // 7F03C5B8: bl      0x7F040774
    {
            ctx->lr = 0x7F03C5BCu;
            ctx->pc = 0x7F040774u;
            return;
    }

label_7F03C5BC:
    ctx->pc = 0x7F03C5BCu;
    ctx->downcount -= 5;
    // 7F03C5BC: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F03C5C0:
    ctx->pc = 0x7F03C5C0u;
    // 7F03C5C0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03C5C4:
    ctx->pc = 0x7F03C5C4u;
    // 7F03C5C4: addi    r4, r4, 2908
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2908);

label_7F03C5C8:
    ctx->pc = 0x7F03C5C8u;
    // 7F03C5C8: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03C5CC:
    ctx->pc = 0x7F03C5CCu;
    // 7F03C5CC: bl      0x7F041A78
    {
            ctx->lr = 0x7F03C5D0u;
            ctx->pc = 0x7F041A78u;
            return;
    }

label_7F03C5D0:
    ctx->pc = 0x7F03C5D0u;
    ctx->downcount -= 8;
    // 7F03C5D0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F03C5D4:
    ctx->pc = 0x7F03C5D4u;
    // 7F03C5D4: lis     r5, 32
    ctx->gpr[5] = ((u32)(s32)(32) << 16);

label_7F03C5D8:
    ctx->pc = 0x7F03C5D8u;
    // 7F03C5D8: addi    r4, r3, 2908
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(2908);

label_7F03C5DC:
    ctx->pc = 0x7F03C5DCu;
    // 7F03C5DC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03C5E0:
    ctx->pc = 0x7F03C5E0u;
    // 7F03C5E0: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03C5E4:
    ctx->pc = 0x7F03C5E4u;
    // 7F03C5E4: addi    r6, r5, -8191
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-8191);

label_7F03C5E8:
    ctx->pc = 0x7F03C5E8u;
    // 7F03C5E8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03C5EC:
    ctx->pc = 0x7F03C5ECu;
    // 7F03C5EC: bl      0x7F041A84
    {
            ctx->lr = 0x7F03C5F0u;
            ctx->pc = 0x7F041A84u;
            return;
    }

label_7F03C5F0:
    ctx->pc = 0x7F03C5F0u;
    ctx->downcount -= 1;
    // 7F03C5F0: b       0x7F03C654
    {
            goto label_7F03C654;
    }

label_7F03C5F4:
    ctx->pc = 0x7F03C5F4u;
    ctx->downcount -= 12;
    // 7F03C5F4: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03C5F8:
    ctx->pc = 0x7F03C5F8u;
    // 7F03C5F8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F03C5FC:
    ctx->pc = 0x7F03C5FCu;
    // 7F03C5FC: addi    r4, r4, 22020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22020);

label_7F03C600:
    ctx->pc = 0x7F03C600u;
    // 7F03C600: lis     r5, 256
    ctx->gpr[5] = ((u32)(s32)(256) << 16);

label_7F03C604:
    ctx->pc = 0x7F03C604u;
    // 7F03C604: lfs     f1, -11568(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F03C604u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-11568);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03C608:
    ctx->pc = 0x7F03C608u;
    // 7F03C608: addi    r6, r5, -1
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-1);

label_7F03C60C:
    ctx->pc = 0x7F03C60Cu;
    // 7F03C60C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03C610:
    ctx->pc = 0x7F03C610u;
    // 7F03C610: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03C614:
    ctx->pc = 0x7F03C614u;
    // 7F03C614: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03C618:
    ctx->pc = 0x7F03C618u;
    // 7F03C618: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_7F03C61C:
    ctx->pc = 0x7F03C61Cu;
    // 7F03C61C: li      r8, 60
    ctx->gpr[8] = (u32)(s32)(60);

label_7F03C620:
    ctx->pc = 0x7F03C620u;
    // 7F03C620: bl      0x7F040774
    {
            ctx->lr = 0x7F03C624u;
            ctx->pc = 0x7F040774u;
            return;
    }

label_7F03C624:
    ctx->pc = 0x7F03C624u;
    ctx->downcount -= 5;
    // 7F03C624: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03C628:
    ctx->pc = 0x7F03C628u;
    // 7F03C628: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03C62C:
    ctx->pc = 0x7F03C62Cu;
    // 7F03C62C: addi    r4, r4, 22020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22020);

label_7F03C630:
    ctx->pc = 0x7F03C630u;
    // 7F03C630: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03C634:
    ctx->pc = 0x7F03C634u;
    // 7F03C634: bl      0x7F041A78
    {
            ctx->lr = 0x7F03C638u;
            ctx->pc = 0x7F041A78u;
            return;
    }

label_7F03C638:
    ctx->pc = 0x7F03C638u;
    ctx->downcount -= 7;
    // 7F03C638: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F03C63C:
    ctx->pc = 0x7F03C63Cu;
    // 7F03C63C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03C640:
    ctx->pc = 0x7F03C640u;
    // 7F03C640: addi    r4, r4, 2908
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2908);

label_7F03C644:
    ctx->pc = 0x7F03C644u;
    // 7F03C644: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F03C648:
    ctx->pc = 0x7F03C648u;
    // 7F03C648: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03C64C:
    ctx->pc = 0x7F03C64Cu;
    // 7F03C64C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03C650:
    ctx->pc = 0x7F03C650u;
    // 7F03C650: bl      0x7F041A84
    {
            ctx->lr = 0x7F03C654u;
            ctx->pc = 0x7F041A84u;
            return;
    }

label_7F03C654:
    ctx->pc = 0x7F03C654u;
    ctx->downcount -= 3;
    // 7F03C654: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F03C658:
    ctx->pc = 0x7F03C658u;
    // 7F03C658: stw     r0, 4136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03C65C:
    ctx->pc = 0x7F03C65Cu;
    // 7F03C65C: b       0x7F03C720
    {
            goto label_7F03C720;
    }

label_7F03C660:
    ctx->pc = 0x7F03C660u;
    ctx->downcount -= 3;
    // 7F03C660: addi    r3, r31, 4008
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4008);

label_7F03C664:
    ctx->pc = 0x7F03C664u;
    // 7F03C664: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F03C668:
    ctx->pc = 0x7F03C668u;
    // 7F03C668: bl      0x7F03D978
    {
            ctx->lr = 0x7F03C66Cu;
            goto label_7F03D978;
    }

label_7F03C66C:
    ctx->pc = 0x7F03C66Cu;
    ctx->downcount -= 1;
    // 7F03C66C: b       0x7F03C704
    {
            goto label_7F03C704;
    }

label_7F03C670:
    ctx->pc = 0x7F03C670u;
    ctx->downcount -= 3;
    // 7F03C670: addi    r3, r31, 4008
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4008);

label_7F03C674:
    ctx->pc = 0x7F03C674u;
    // 7F03C674: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F03C678:
    ctx->pc = 0x7F03C678u;
    // 7F03C678: bl      0x7F03D978
    {
            ctx->lr = 0x7F03C67Cu;
            goto label_7F03D978;
    }

label_7F03C67C:
    ctx->pc = 0x7F03C67Cu;
    ctx->downcount -= 12;
    // 7F03C67C: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03C680:
    ctx->pc = 0x7F03C680u;
    // 7F03C680: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F03C684:
    ctx->pc = 0x7F03C684u;
    // 7F03C684: addi    r4, r4, 22020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22020);

label_7F03C688:
    ctx->pc = 0x7F03C688u;
    // 7F03C688: lis     r5, 256
    ctx->gpr[5] = ((u32)(s32)(256) << 16);

label_7F03C68C:
    ctx->pc = 0x7F03C68Cu;
    // 7F03C68C: lfs     f1, -11568(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F03C68Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-11568);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03C690:
    ctx->pc = 0x7F03C690u;
    // 7F03C690: addi    r6, r5, -1
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-1);

label_7F03C694:
    ctx->pc = 0x7F03C694u;
    // 7F03C694: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03C698:
    ctx->pc = 0x7F03C698u;
    // 7F03C698: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03C69C:
    ctx->pc = 0x7F03C69Cu;
    // 7F03C69C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03C6A0:
    ctx->pc = 0x7F03C6A0u;
    // 7F03C6A0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F03C6A4:
    ctx->pc = 0x7F03C6A4u;
    // 7F03C6A4: li      r8, 60
    ctx->gpr[8] = (u32)(s32)(60);

label_7F03C6A8:
    ctx->pc = 0x7F03C6A8u;
    // 7F03C6A8: bl      0x7F040774
    {
            ctx->lr = 0x7F03C6ACu;
            ctx->pc = 0x7F040774u;
            return;
    }

label_7F03C6AC:
    ctx->pc = 0x7F03C6ACu;
    ctx->downcount -= 12;
    // 7F03C6AC: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F03C6B0:
    ctx->pc = 0x7F03C6B0u;
    // 7F03C6B0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F03C6B4:
    ctx->pc = 0x7F03C6B4u;
    // 7F03C6B4: addi    r4, r4, 2908
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2908);

label_7F03C6B8:
    ctx->pc = 0x7F03C6B8u;
    // 7F03C6B8: lis     r5, 256
    ctx->gpr[5] = ((u32)(s32)(256) << 16);

label_7F03C6BC:
    ctx->pc = 0x7F03C6BCu;
    // 7F03C6BC: lfs     f1, -11568(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F03C6BCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-11568);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03C6C0:
    ctx->pc = 0x7F03C6C0u;
    // 7F03C6C0: addi    r6, r5, -1
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-1);

label_7F03C6C4:
    ctx->pc = 0x7F03C6C4u;
    // 7F03C6C4: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03C6C8:
    ctx->pc = 0x7F03C6C8u;
    // 7F03C6C8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03C6CC:
    ctx->pc = 0x7F03C6CCu;
    // 7F03C6CC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03C6D0:
    ctx->pc = 0x7F03C6D0u;
    // 7F03C6D0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F03C6D4:
    ctx->pc = 0x7F03C6D4u;
    // 7F03C6D4: li      r8, 60
    ctx->gpr[8] = (u32)(s32)(60);

label_7F03C6D8:
    ctx->pc = 0x7F03C6D8u;
    // 7F03C6D8: bl      0x7F040774
    {
            ctx->lr = 0x7F03C6DCu;
            ctx->pc = 0x7F040774u;
            return;
    }

label_7F03C6DC:
    ctx->pc = 0x7F03C6DCu;
    ctx->downcount -= 5;
    // 7F03C6DC: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F03C6E0:
    ctx->pc = 0x7F03C6E0u;
    // 7F03C6E0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03C6E4:
    ctx->pc = 0x7F03C6E4u;
    // 7F03C6E4: addi    r4, r4, 2908
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2908);

label_7F03C6E8:
    ctx->pc = 0x7F03C6E8u;
    // 7F03C6E8: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03C6EC:
    ctx->pc = 0x7F03C6ECu;
    // 7F03C6EC: bl      0x7F041A78
    {
            ctx->lr = 0x7F03C6F0u;
            ctx->pc = 0x7F041A78u;
            return;
    }

label_7F03C6F0:
    ctx->pc = 0x7F03C6F0u;
    ctx->downcount -= 5;
    // 7F03C6F0: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F03C6F4:
    ctx->pc = 0x7F03C6F4u;
    // 7F03C6F4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03C6F8:
    ctx->pc = 0x7F03C6F8u;
    // 7F03C6F8: addi    r4, r4, 2908
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2908);

label_7F03C6FC:
    ctx->pc = 0x7F03C6FCu;
    // 7F03C6FC: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03C700:
    ctx->pc = 0x7F03C700u;
    // 7F03C700: bl      0x7F041A58
    {
            ctx->lr = 0x7F03C704u;
            ctx->pc = 0x7F041A58u;
            return;
    }

label_7F03C704:
    ctx->pc = 0x7F03C704u;
    ctx->downcount -= 7;
    // 7F03C704: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F03C708:
    ctx->pc = 0x7F03C708u;
    // 7F03C708: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03C70C:
    ctx->pc = 0x7F03C70Cu;
    // 7F03C70C: lwz     r0, 2908(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2908);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03C710:
    ctx->pc = 0x7F03C710u;
    // 7F03C710: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F03C714:
    ctx->pc = 0x7F03C714u;
    // 7F03C714: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03C718:
    ctx->pc = 0x7F03C718u;
    // 7F03C718: xori    r4, r0, 0x0001
    ctx->gpr[4] = ctx->gpr[0] ^ 0x0001u;

label_7F03C71C:
    ctx->pc = 0x7F03C71Cu;
    // 7F03C71C: bl      0x7F041A84
    {
            ctx->lr = 0x7F03C720u;
            ctx->pc = 0x7F041A84u;
            return;
    }

label_7F03C720:
    ctx->pc = 0x7F03C720u;
    ctx->downcount -= 6;
    // 7F03C720: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03C724:
    ctx->pc = 0x7F03C724u;
    // 7F03C724: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F03C728:
    ctx->pc = 0x7F03C728u;
    // 7F03C728: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03C72C:
    ctx->pc = 0x7F03C72Cu;
    // 7F03C72C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03C730:
    ctx->pc = 0x7F03C730u;
    // 7F03C730: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03C734:
    ctx->pc = 0x7F03C734u;
    ctx->downcount -= 6;
    // 7F03C734: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03C738:
    ctx->pc = 0x7F03C738u;
    // 7F03C738: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03C73C:
    ctx->pc = 0x7F03C73Cu;
    // 7F03C73C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03C740:
    ctx->pc = 0x7F03C740u;
    // 7F03C740: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F03C744:
    ctx->pc = 0x7F03C744u;
    // 7F03C744: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03C748:
    ctx->pc = 0x7F03C748u;
    // 7F03C748: bl      0x7F041848
    {
            ctx->lr = 0x7F03C74Cu;
            ctx->pc = 0x7F041848u;
            return;
    }

label_7F03C74C:
    ctx->pc = 0x7F03C74Cu;
    ctx->downcount -= 2;
    // 7F03C74C: cmpwi   r3, 0
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

label_7F03C750:
    ctx->pc = 0x7F03C750u;
    // 7F03C750: bc    12, 2, 0x7F03C8C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03C8C8;
        }
    }

label_7F03C754:
    ctx->pc = 0x7F03C754u;
    ctx->downcount -= 3;
    // 7F03C754: lbz     r0, 4253(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4253);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F03C758:
    ctx->pc = 0x7F03C758u;
    // 7F03C758: extsb. r0, r0
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

label_7F03C75C:
    ctx->pc = 0x7F03C75Cu;
    // 7F03C75C: bc    4, 2, 0x7F03C7B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03C7B4;
        }
    }

label_7F03C760:
    ctx->pc = 0x7F03C760u;
    ctx->downcount -= 4;
    // 7F03C760: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F03C764:
    ctx->pc = 0x7F03C764u;
    // 7F03C764: lwz     r4, 22048(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22048);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03C768:
    ctx->pc = 0x7F03C768u;
    // 7F03C768: cmpwi   r4, 0
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

label_7F03C76C:
    ctx->pc = 0x7F03C76Cu;
    // 7F03C76C: bc    12, 2, 0x7F03C7B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03C7B4;
        }
    }

label_7F03C770:
    ctx->pc = 0x7F03C770u;
    ctx->downcount -= 4;
    // 7F03C770: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F03C774:
    ctx->pc = 0x7F03C774u;
    // 7F03C774: lwz     r0, 22028(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22028);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03C778:
    ctx->pc = 0x7F03C778u;
    // 7F03C778: cmpw    r0, r4
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

label_7F03C77C:
    ctx->pc = 0x7F03C77Cu;
    // 7F03C77C: bc    4, 0, 0x7F03C7B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03C7B4;
        }
    }

label_7F03C780:
    ctx->pc = 0x7F03C780u;
    ctx->downcount -= 3;
    // 7F03C780: lbz     r0, 4252(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4252);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F03C784:
    ctx->pc = 0x7F03C784u;
    // 7F03C784: extsb. r0, r0
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

label_7F03C788:
    ctx->pc = 0x7F03C788u;
    // 7F03C788: bc    12, 2, 0x7F03C7B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03C7B4;
        }
    }

label_7F03C78C:
    ctx->pc = 0x7F03C78Cu;
    ctx->downcount -= 2;
    // 7F03C78C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03C790:
    ctx->pc = 0x7F03C790u;
    // 7F03C790: bl      0x7F041908
    {
            ctx->lr = 0x7F03C794u;
            ctx->pc = 0x7F041908u;
            return;
    }

label_7F03C794:
    ctx->pc = 0x7F03C794u;
    ctx->downcount -= 2;
    // 7F03C794: cmpwi   r3, 0
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

label_7F03C798:
    ctx->pc = 0x7F03C798u;
    // 7F03C798: bc    4, 2, 0x7F03C7B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03C7B4;
        }
    }

label_7F03C79C:
    ctx->pc = 0x7F03C79Cu;
    ctx->downcount -= 3;
    // 7F03C79C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03C7A0:
    ctx->pc = 0x7F03C7A0u;
    // 7F03C7A0: li      r4, 11
    ctx->gpr[4] = (u32)(s32)(11);

label_7F03C7A4:
    ctx->pc = 0x7F03C7A4u;
    // 7F03C7A4: bl      0x7F041878
    {
            ctx->lr = 0x7F03C7A8u;
            ctx->pc = 0x7F041878u;
            return;
    }

label_7F03C7A8:
    ctx->pc = 0x7F03C7A8u;
    ctx->downcount -= 3;
    // 7F03C7A8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F03C7AC:
    ctx->pc = 0x7F03C7ACu;
    // 7F03C7AC: stb     r0, 4253(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4253);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F03C7B0:
    ctx->pc = 0x7F03C7B0u;
    // 7F03C7B0: b       0x7F03C7C4
    {
            goto label_7F03C7C4;
    }

label_7F03C7B4:
    ctx->pc = 0x7F03C7B4u;
    ctx->downcount -= 4;
    // 7F03C7B4: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03C7B8:
    ctx->pc = 0x7F03C7B8u;
    // 7F03C7B8: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F03C7BC:
    ctx->pc = 0x7F03C7BCu;
    // 7F03C7BC: lwz     r0, 22048(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22048);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03C7C0:
    ctx->pc = 0x7F03C7C0u;
    // 7F03C7C0: stw     r0, 22028(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22028);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03C7C4:
    ctx->pc = 0x7F03C7C4u;
    ctx->downcount -= 3;
    // 7F03C7C4: lbz     r0, 4254(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4254);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F03C7C8:
    ctx->pc = 0x7F03C7C8u;
    // 7F03C7C8: extsb. r0, r0
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

label_7F03C7CC:
    ctx->pc = 0x7F03C7CCu;
    // 7F03C7CC: bc    4, 2, 0x7F03C804
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03C804;
        }
    }

label_7F03C7D0:
    ctx->pc = 0x7F03C7D0u;
    ctx->downcount -= 4;
    // 7F03C7D0: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F03C7D4:
    ctx->pc = 0x7F03C7D4u;
    // 7F03C7D4: lwz     r0, 19248(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19248);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03C7D8:
    ctx->pc = 0x7F03C7D8u;
    // 7F03C7D8: rlwinm. r0, r0, 0, 27, 27
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

label_7F03C7DC:
    ctx->pc = 0x7F03C7DCu;
    // 7F03C7DC: bc    12, 2, 0x7F03C804
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03C804;
        }
    }

label_7F03C7E0:
    ctx->pc = 0x7F03C7E0u;
    ctx->downcount -= 2;
    // 7F03C7E0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03C7E4:
    ctx->pc = 0x7F03C7E4u;
    // 7F03C7E4: bl      0x7F041908
    {
            ctx->lr = 0x7F03C7E8u;
            ctx->pc = 0x7F041908u;
            return;
    }

label_7F03C7E8:
    ctx->pc = 0x7F03C7E8u;
    ctx->downcount -= 2;
    // 7F03C7E8: cmpwi   r3, 0
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

label_7F03C7EC:
    ctx->pc = 0x7F03C7ECu;
    // 7F03C7EC: bc    4, 2, 0x7F03C804
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03C804;
        }
    }

label_7F03C7F0:
    ctx->pc = 0x7F03C7F0u;
    ctx->downcount -= 5;
    // 7F03C7F0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F03C7F4:
    ctx->pc = 0x7F03C7F4u;
    // 7F03C7F4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03C7F8:
    ctx->pc = 0x7F03C7F8u;
    // 7F03C7F8: stb     r0, 4254(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4254);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F03C7FC:
    ctx->pc = 0x7F03C7FCu;
    // 7F03C7FC: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_7F03C800:
    ctx->pc = 0x7F03C800u;
    // 7F03C800: bl      0x7F041878
    {
            ctx->lr = 0x7F03C804u;
            ctx->pc = 0x7F041878u;
            return;
    }

label_7F03C804:
    ctx->pc = 0x7F03C804u;
    ctx->downcount -= 4;
    // 7F03C804: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F03C808:
    ctx->pc = 0x7F03C808u;
    // 7F03C808: lwz     r0, 22044(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22044);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03C80C:
    ctx->pc = 0x7F03C80Cu;
    // 7F03C80C: cmpwi   r0, 3
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

label_7F03C810:
    ctx->pc = 0x7F03C810u;
    // 7F03C810: bc    4, 1, 0x7F03C878
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03C878;
        }
    }

label_7F03C814:
    ctx->pc = 0x7F03C814u;
    ctx->downcount -= 4;
    // 7F03C814: lbz     r0, 4256(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4256);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F03C818:
    ctx->pc = 0x7F03C818u;
    // 7F03C818: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F03C81C:
    ctx->pc = 0x7F03C81Cu;
    // 7F03C81C: cmpwi   r0, 3
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

label_7F03C820:
    ctx->pc = 0x7F03C820u;
    // 7F03C820: bc    4, 1, 0x7F03C878
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03C878;
        }
    }

label_7F03C824:
    ctx->pc = 0x7F03C824u;
    ctx->downcount -= 3;
    // 7F03C824: lbz     r0, 4255(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4255);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F03C828:
    ctx->pc = 0x7F03C828u;
    // 7F03C828: extsb. r0, r0
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

label_7F03C82C:
    ctx->pc = 0x7F03C82Cu;
    // 7F03C82C: bc    4, 2, 0x7F03C878
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03C878;
        }
    }

label_7F03C830:
    ctx->pc = 0x7F03C830u;
    ctx->downcount -= 2;
    // 7F03C830: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03C834:
    ctx->pc = 0x7F03C834u;
    // 7F03C834: bl      0x7F041908
    {
            ctx->lr = 0x7F03C838u;
            ctx->pc = 0x7F041908u;
            return;
    }

label_7F03C838:
    ctx->pc = 0x7F03C838u;
    ctx->downcount -= 2;
    // 7F03C838: cmpwi   r3, 0
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

label_7F03C83C:
    ctx->pc = 0x7F03C83Cu;
    // 7F03C83C: bc    4, 2, 0x7F03C878
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03C878;
        }
    }

label_7F03C840:
    ctx->pc = 0x7F03C840u;
    ctx->downcount -= 6;
    // 7F03C840: lbz     r3, 4258(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4258);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F03C844:
    ctx->pc = 0x7F03C844u;
    // 7F03C844: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F03C848:
    ctx->pc = 0x7F03C848u;
    // 7F03C848: extsb r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_7F03C84C:
    ctx->pc = 0x7F03C84Cu;
    // 7F03C84C: stb     r3, 4258(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4258);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F03C850:
    ctx->pc = 0x7F03C850u;
    // 7F03C850: cmpwi   r0, 30
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

label_7F03C854:
    ctx->pc = 0x7F03C854u;
    // 7F03C854: bc    4, 1, 0x7F03C878
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03C878;
        }
    }

label_7F03C858:
    ctx->pc = 0x7F03C858u;
    ctx->downcount -= 8;
    // 7F03C858: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F03C85C:
    ctx->pc = 0x7F03C85Cu;
    // 7F03C85C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F03C860:
    ctx->pc = 0x7F03C860u;
    // 7F03C860: stw     r4, 22044(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22044);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F03C864:
    ctx->pc = 0x7F03C864u;
    // 7F03C864: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F03C868:
    ctx->pc = 0x7F03C868u;
    // 7F03C868: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03C86C:
    ctx->pc = 0x7F03C86Cu;
    // 7F03C86C: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F03C870:
    ctx->pc = 0x7F03C870u;
    // 7F03C870: stb     r0, 4255(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4255);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F03C874:
    ctx->pc = 0x7F03C874u;
    // 7F03C874: bl      0x7F041878
    {
            ctx->lr = 0x7F03C878u;
            ctx->pc = 0x7F041878u;
            return;
    }

label_7F03C878:
    ctx->pc = 0x7F03C878u;
    ctx->downcount -= 4;
    // 7F03C878: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F03C87C:
    ctx->pc = 0x7F03C87Cu;
    // 7F03C87C: lwz     r0, 22044(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22044);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03C880:
    ctx->pc = 0x7F03C880u;
    // 7F03C880: cmpwi   r0, 4
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

label_7F03C884:
    ctx->pc = 0x7F03C884u;
    // 7F03C884: bc    4, 1, 0x7F03C8C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03C8C8;
        }
    }

label_7F03C888:
    ctx->pc = 0x7F03C888u;
    ctx->downcount -= 4;
    // 7F03C888: lbz     r0, 4256(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4256);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F03C88C:
    ctx->pc = 0x7F03C88Cu;
    // 7F03C88C: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F03C890:
    ctx->pc = 0x7F03C890u;
    // 7F03C890: cmpwi   r0, 5
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

label_7F03C894:
    ctx->pc = 0x7F03C894u;
    // 7F03C894: bc    4, 1, 0x7F03C8C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03C8C8;
        }
    }

label_7F03C898:
    ctx->pc = 0x7F03C898u;
    ctx->downcount -= 3;
    // 7F03C898: lbz     r0, 4255(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4255);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F03C89C:
    ctx->pc = 0x7F03C89Cu;
    // 7F03C89C: cmpwi   r0, 1
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

label_7F03C8A0:
    ctx->pc = 0x7F03C8A0u;
    // 7F03C8A0: bc    4, 2, 0x7F03C8C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03C8C8;
        }
    }

label_7F03C8A4:
    ctx->pc = 0x7F03C8A4u;
    ctx->downcount -= 2;
    // 7F03C8A4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03C8A8:
    ctx->pc = 0x7F03C8A8u;
    // 7F03C8A8: bl      0x7F041908
    {
            ctx->lr = 0x7F03C8ACu;
            ctx->pc = 0x7F041908u;
            return;
    }

label_7F03C8AC:
    ctx->pc = 0x7F03C8ACu;
    ctx->downcount -= 2;
    // 7F03C8AC: cmpwi   r3, 0
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

label_7F03C8B0:
    ctx->pc = 0x7F03C8B0u;
    // 7F03C8B0: bc    4, 2, 0x7F03C8C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03C8C8;
        }
    }

label_7F03C8B4:
    ctx->pc = 0x7F03C8B4u;
    ctx->downcount -= 5;
    // 7F03C8B4: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F03C8B8:
    ctx->pc = 0x7F03C8B8u;
    // 7F03C8B8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03C8BC:
    ctx->pc = 0x7F03C8BCu;
    // 7F03C8BC: stb     r0, 4255(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4255);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F03C8C0:
    ctx->pc = 0x7F03C8C0u;
    // 7F03C8C0: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F03C8C4:
    ctx->pc = 0x7F03C8C4u;
    // 7F03C8C4: bl      0x7F041878
    {
            ctx->lr = 0x7F03C8C8u;
            ctx->pc = 0x7F041878u;
            return;
    }

label_7F03C8C8:
    ctx->pc = 0x7F03C8C8u;
    ctx->downcount -= 6;
    // 7F03C8C8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03C8CC:
    ctx->pc = 0x7F03C8CCu;
    // 7F03C8CC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F03C8D0:
    ctx->pc = 0x7F03C8D0u;
    // 7F03C8D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03C8D4:
    ctx->pc = 0x7F03C8D4u;
    // 7F03C8D4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03C8D8:
    ctx->pc = 0x7F03C8D8u;
    // 7F03C8D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03C8DC:
    ctx->pc = 0x7F03C8DCu;
    ctx->downcount -= 8;
    // 7F03C8DC: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03C8E0:
    ctx->pc = 0x7F03C8E0u;
    // 7F03C8E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03C8E4:
    ctx->pc = 0x7F03C8E4u;
    // 7F03C8E4: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03C8E8:
    ctx->pc = 0x7F03C8E8u;
    // 7F03C8E8: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F03C8EC:
    ctx->pc = 0x7F03C8ECu;
    // 7F03C8EC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03C8F0:
    ctx->pc = 0x7F03C8F0u;
    // 7F03C8F0: lwz     r0, 4260(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4260);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03C8F4:
    ctx->pc = 0x7F03C8F4u;
    // 7F03C8F4: cmpwi   r0, 0
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

label_7F03C8F8:
    ctx->pc = 0x7F03C8F8u;
    // 7F03C8F8: bc    12, 2, 0x7F03C90C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03C90C;
        }
    }

label_7F03C8FC:
    ctx->pc = 0x7F03C8FCu;
    ctx->downcount -= 4;
    // 7F03C8FC: addi    r3, r31, 4264
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4264);

label_7F03C900:
    ctx->pc = 0x7F03C900u;
    // 7F03C900: addi    r4, r31, 4268
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(4268);

label_7F03C904:
    ctx->pc = 0x7F03C904u;
    // 7F03C904: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03C908:
    ctx->pc = 0x7F03C908u;
    // 7F03C908: bl      0x7F07BB50
    {
            ctx->lr = 0x7F03C90Cu;
            ctx->pc = 0x7F07BB50u;
            return;
    }

label_7F03C90C:
    ctx->pc = 0x7F03C90Cu;
    ctx->downcount -= 2;
    // 7F03C90C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03C910:
    ctx->pc = 0x7F03C910u;
    // 7F03C910: bl      0x7F03C260
    {
            ctx->lr = 0x7F03C914u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03C260u;
                return;
            }
            goto label_7F03C260;
    }

label_7F03C914:
    ctx->pc = 0x7F03C914u;
    ctx->downcount -= 3;
    // 7F03C914: lwz     r0, 4120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03C918:
    ctx->pc = 0x7F03C918u;
    // 7F03C918: cmpwi   r0, 0
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

label_7F03C91C:
    ctx->pc = 0x7F03C91Cu;
    // 7F03C91C: bc    12, 2, 0x7F03CA3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03CA3C;
        }
    }

label_7F03C920:
    ctx->pc = 0x7F03C920u;
    ctx->downcount -= 21;
    // 7F03C920: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F03C924:
    ctx->pc = 0x7F03C924u;
    // 7F03C924: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03C928:
    ctx->pc = 0x7F03C928u;
    // 7F03C928: addi    r6, r3, -5872
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-5872);

label_7F03C92C:
    ctx->pc = 0x7F03C92Cu;
    // 7F03C92C: addi    r3, r31, 464
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(464);

label_7F03C930:
    ctx->pc = 0x7F03C930u;
    // 7F03C930: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F03C930u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F03C934:
    ctx->pc = 0x7F03C934u;
    // 7F03C934: addi    r5, r4, 22056
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(22056);

label_7F03C938:
    ctx->pc = 0x7F03C938u;
    // 7F03C938: lfs     f1, 8(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F03C938u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03C93C:
    ctx->pc = 0x7F03C93Cu;
    // 7F03C93C: lfs     f0, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F03C93Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F03C940:
    ctx->pc = 0x7F03C940u;
    // 7F03C940: fctiwz    f2, f2
    if (!ppc_fp_available_inline(ctx, 0x7F03C940u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[2], true, &result)) ctx->fpr[2] = dolrecomp_f64_from_bits(result); }

label_7F03C944:
    ctx->pc = 0x7F03C944u;
    // 7F03C944: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F03C944u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F03C948:
    ctx->pc = 0x7F03C948u;
    // 7F03C948: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F03C948u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F03C94C:
    ctx->pc = 0x7F03C94Cu;
    // 7F03C94C: stfd     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F03C94Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[2]));
    }

label_7F03C950:
    ctx->pc = 0x7F03C950u;
    // 7F03C950: stfd     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F03C950u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F03C954:
    ctx->pc = 0x7F03C954u;
    // 7F03C954: lwz     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F03C958:
    ctx->pc = 0x7F03C958u;
    // 7F03C958: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F03C958u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F03C95C:
    ctx->pc = 0x7F03C95Cu;
    // 7F03C95C: lwz     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03C960:
    ctx->pc = 0x7F03C960u;
    // 7F03C960: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03C964:
    ctx->pc = 0x7F03C964u;
    // 7F03C964: sth     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F03C968:
    ctx->pc = 0x7F03C968u;
    // 7F03C968: sth     r4, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F03C96C:
    ctx->pc = 0x7F03C96Cu;
    // 7F03C96C: sth     r0, 2(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F03C970:
    ctx->pc = 0x7F03C970u;
    // 7F03C970: bl      0x7F04291C
    {
            ctx->lr = 0x7F03C974u;
            ctx->pc = 0x7F04291Cu;
            return;
    }

label_7F03C974:
    ctx->pc = 0x7F03C974u;
    ctx->downcount -= 8;
    // 7F03C974: lfs     f0, 476(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F03C974u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(476);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F03C978:
    ctx->pc = 0x7F03C978u;
    // 7F03C978: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F03C97C:
    ctx->pc = 0x7F03C97Cu;
    // 7F03C97C: stfs     f0, 116(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F03C97Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F03C980:
    ctx->pc = 0x7F03C980u;
    // 7F03C980: lfs     f0, -11552(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F03C980u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-11552);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F03C984:
    ctx->pc = 0x7F03C984u;
    // 7F03C984: stfs     f0, 84(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F03C984u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F03C988:
    ctx->pc = 0x7F03C988u;
    // 7F03C988: lwz     r0, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03C98C:
    ctx->pc = 0x7F03C98Cu;
    // 7F03C98C: cmpwi   r0, 0
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

label_7F03C990:
    ctx->pc = 0x7F03C990u;
    // 7F03C990: bc    12, 2, 0x7F03C9C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03C9C0;
        }
    }

label_7F03C994:
    ctx->pc = 0x7F03C994u;
    ctx->downcount -= 5;
    // 7F03C994: lwz     r3, 468(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(468);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03C998:
    ctx->pc = 0x7F03C998u;
    // 7F03C998: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03C99C:
    ctx->pc = 0x7F03C99Cu;
    // 7F03C99C: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03C9A0:
    ctx->pc = 0x7F03C9A0u;
    // 7F03C9A0: cmpwi   r0, 6
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

label_7F03C9A4:
    ctx->pc = 0x7F03C9A4u;
    // 7F03C9A4: bc    12, 2, 0x7F03C9C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03C9C0;
        }
    }

label_7F03C9A8:
    ctx->pc = 0x7F03C9A8u;
    ctx->downcount -= 4;
    // 7F03C9A8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F03C9AC:
    ctx->pc = 0x7F03C9ACu;
    // 7F03C9AC: lwz     r0, 3008(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3008);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03C9B0:
    ctx->pc = 0x7F03C9B0u;
    // 7F03C9B0: cmpwi   r0, 0
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

label_7F03C9B4:
    ctx->pc = 0x7F03C9B4u;
    // 7F03C9B4: bc    12, 2, 0x7F03C9C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03C9C0;
        }
    }

label_7F03C9B8:
    ctx->pc = 0x7F03C9B8u;
    ctx->downcount -= 2;
    // 7F03C9B8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F03C9BC:
    ctx->pc = 0x7F03C9BCu;
    // 7F03C9BC: stw     r0, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03C9C0:
    ctx->pc = 0x7F03C9C0u;
    ctx->downcount -= 2;
    // 7F03C9C0: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F03C9C4:
    ctx->pc = 0x7F03C9C4u;
    // 7F03C9C4: bl      0x7F023170
    {
            ctx->lr = 0x7F03C9C8u;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F03C9C8:
    ctx->pc = 0x7F03C9C8u;
    ctx->downcount -= 2;
    // 7F03C9C8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03C9CC:
    ctx->pc = 0x7F03C9CCu;
    // 7F03C9CC: bl      0x7F03C360
    {
            ctx->lr = 0x7F03C9D0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03C360u;
                return;
            }
            goto label_7F03C360;
    }

label_7F03C9D0:
    ctx->pc = 0x7F03C9D0u;
    ctx->downcount -= 2;
    // 7F03C9D0: addi    r3, r31, 464
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(464);

label_7F03C9D4:
    ctx->pc = 0x7F03C9D4u;
    // 7F03C9D4: bl      0x7F0429C4
    {
            ctx->lr = 0x7F03C9D8u;
            ctx->pc = 0x7F0429C4u;
            return;
    }

label_7F03C9D8:
    ctx->pc = 0x7F03C9D8u;
    ctx->downcount -= 2;
    // 7F03C9D8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03C9DC:
    ctx->pc = 0x7F03C9DCu;
    // 7F03C9DC: bl      0x7F03CBA8
    {
            ctx->lr = 0x7F03C9E0u;
            goto label_7F03CBA8;
    }

label_7F03C9E0:
    ctx->pc = 0x7F03C9E0u;
    ctx->downcount -= 2;
    // 7F03C9E0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03C9E4:
    ctx->pc = 0x7F03C9E4u;
    // 7F03C9E4: bl      0x7F03CB00
    {
            ctx->lr = 0x7F03C9E8u;
            goto label_7F03CB00;
    }

label_7F03C9E8:
    ctx->pc = 0x7F03C9E8u;
    ctx->downcount -= 2;
    // 7F03C9E8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03C9EC:
    ctx->pc = 0x7F03C9ECu;
    // 7F03C9EC: bl      0x7F03CAE4
    {
            ctx->lr = 0x7F03C9F0u;
            goto label_7F03CAE4;
    }

label_7F03C9F0:
    ctx->pc = 0x7F03C9F0u;
    ctx->downcount -= 2;
    // 7F03C9F0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03C9F4:
    ctx->pc = 0x7F03C9F4u;
    // 7F03C9F4: bl      0x7F03C734
    {
            ctx->lr = 0x7F03C9F8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03C734u;
                return;
            }
            goto label_7F03C734;
    }

label_7F03C9F8:
    ctx->pc = 0x7F03C9F8u;
    ctx->downcount -= 2;
    // 7F03C9F8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03C9FC:
    ctx->pc = 0x7F03C9FCu;
    // 7F03C9FC: bl      0x7F03F02C
    {
            ctx->lr = 0x7F03CA00u;
            goto label_7F03F02C;
    }

label_7F03CA00:
    ctx->pc = 0x7F03CA00u;
    ctx->downcount -= 2;
    // 7F03CA00: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03CA04:
    ctx->pc = 0x7F03CA04u;
    // 7F03CA04: bl      0x7F03D884
    {
            ctx->lr = 0x7F03CA08u;
            goto label_7F03D884;
    }

label_7F03CA08:
    ctx->pc = 0x7F03CA08u;
    ctx->downcount -= 2;
    // 7F03CA08: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03CA0C:
    ctx->pc = 0x7F03CA0Cu;
    // 7F03CA0C: bl      0x7F03F078
    {
            ctx->lr = 0x7F03CA10u;
            goto label_7F03F078;
    }

label_7F03CA10:
    ctx->pc = 0x7F03CA10u;
    ctx->downcount -= 2;
    // 7F03CA10: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03CA14:
    ctx->pc = 0x7F03CA14u;
    // 7F03CA14: bl      0x7F03C44C
    {
            ctx->lr = 0x7F03CA18u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03C44Cu;
                return;
            }
            goto label_7F03C44C;
    }

label_7F03CA18:
    ctx->pc = 0x7F03CA18u;
    ctx->downcount -= 5;
    // 7F03CA18: lwz     r5, 464(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(464);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F03CA1C:
    ctx->pc = 0x7F03CA1Cu;
    // 7F03CA1C: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F03CA20:
    ctx->pc = 0x7F03CA20u;
    // 7F03CA20: addi    r4, r31, 688
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(688);

label_7F03CA24:
    ctx->pc = 0x7F03CA24u;
    // 7F03CA24: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F03CA28:
    ctx->pc = 0x7F03CA28u;
    // 7F03CA28: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F03CA2Cu;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F03CA2C:
    ctx->pc = 0x7F03CA2Cu;
    ctx->downcount -= 2;
    // 7F03CA2C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03CA30:
    ctx->pc = 0x7F03CA30u;
    // 7F03CA30: bl      0x7F03F12C
    {
            ctx->lr = 0x7F03CA34u;
            goto label_7F03F12C;
    }

label_7F03CA34:
    ctx->pc = 0x7F03CA34u;
    ctx->downcount -= 2;
    // 7F03CA34: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03CA38:
    ctx->pc = 0x7F03CA38u;
    // 7F03CA38: bl      0x7F03F158
    {
            ctx->lr = 0x7F03CA3Cu;
            goto label_7F03F158;
    }

label_7F03CA3C:
    ctx->pc = 0x7F03CA3Cu;
    ctx->downcount -= 6;
    // 7F03CA3C: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03CA40:
    ctx->pc = 0x7F03CA40u;
    // 7F03CA40: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F03CA44:
    ctx->pc = 0x7F03CA44u;
    // 7F03CA44: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03CA48:
    ctx->pc = 0x7F03CA48u;
    // 7F03CA48: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F03CA4C:
    ctx->pc = 0x7F03CA4Cu;
    // 7F03CA4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03CA50:
    ctx->pc = 0x7F03CA50u;
    ctx->downcount -= 7;
    // 7F03CA50: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03CA54:
    ctx->pc = 0x7F03CA54u;
    // 7F03CA54: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03CA58:
    ctx->pc = 0x7F03CA58u;
    // 7F03CA58: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03CA5C:
    ctx->pc = 0x7F03CA5Cu;
    // 7F03CA5C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F03CA60:
    ctx->pc = 0x7F03CA60u;
    // 7F03CA60: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03CA64:
    ctx->pc = 0x7F03CA64u;
    // 7F03CA64: addi    r3, r31, 3572
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3572);

label_7F03CA68:
    ctx->pc = 0x7F03CA68u;
    // 7F03CA68: bl      0x7F012144
    {
            ctx->lr = 0x7F03CA6Cu;
            ctx->pc = 0x7F012144u;
            return;
    }

label_7F03CA6C:
    ctx->pc = 0x7F03CA6Cu;
    ctx->downcount -= 2;
    // 7F03CA6C: addi    r3, r31, 464
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(464);

label_7F03CA70:
    ctx->pc = 0x7F03CA70u;
    // 7F03CA70: bl      0x7F2F6F10
    {
            ctx->lr = 0x7F03CA74u;
            ctx->pc = 0x7F2F6F10u;
            return;
    }

label_7F03CA74:
    ctx->pc = 0x7F03CA74u;
    ctx->downcount -= 3;
    // 7F03CA74: lwz     r3, 508(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(508);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03CA78:
    ctx->pc = 0x7F03CA78u;
    // 7F03CA78: cmplwi  r3, 0x0000
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

label_7F03CA7C:
    ctx->pc = 0x7F03CA7Cu;
    // 7F03CA7C: bc    12, 2, 0x7F03CA8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03CA8C;
        }
    }

label_7F03CA80:
    ctx->pc = 0x7F03CA80u;
    ctx->downcount -= 1;
    // 7F03CA80: bl      0x7F3C82B4
    {
            ctx->lr = 0x7F03CA84u;
            ctx->pc = 0x7F3C82B4u;
            return;
    }

label_7F03CA84:
    ctx->pc = 0x7F03CA84u;
    ctx->downcount -= 2;
    // 7F03CA84: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F03CA88:
    ctx->pc = 0x7F03CA88u;
    // 7F03CA88: stw     r0, 508(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(508);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03CA8C:
    ctx->pc = 0x7F03CA8Cu;
    ctx->downcount -= 2;
    // 7F03CA8C: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F03CA90:
    ctx->pc = 0x7F03CA90u;
    // 7F03CA90: bl      0x7F023E10
    {
            ctx->lr = 0x7F03CA94u;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F03CA94:
    ctx->pc = 0x7F03CA94u;
    ctx->downcount -= 2;
    // 7F03CA94: addi    r3, r31, 464
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(464);

label_7F03CA98:
    ctx->pc = 0x7F03CA98u;
    // 7F03CA98: bl      0x7F042AAC
    {
            ctx->lr = 0x7F03CA9Cu;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F03CA9C:
    ctx->pc = 0x7F03CA9Cu;
    ctx->downcount -= 2;
    // 7F03CA9C: addi    r3, r31, 3616
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3616);

label_7F03CAA0:
    ctx->pc = 0x7F03CAA0u;
    // 7F03CAA0: bl      0x7F27E1C0
    {
            ctx->lr = 0x7F03CAA4u;
            ctx->pc = 0x7F27E1C0u;
            return;
    }

label_7F03CAA4:
    ctx->pc = 0x7F03CAA4u;
    ctx->downcount -= 2;
    // 7F03CAA4: addi    r3, r31, 3540
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3540);

label_7F03CAA8:
    ctx->pc = 0x7F03CAA8u;
    // 7F03CAA8: bl      0x7F01D540
    {
            ctx->lr = 0x7F03CAACu;
            ctx->pc = 0x7F01D540u;
            return;
    }

label_7F03CAAC:
    ctx->pc = 0x7F03CAACu;
    ctx->downcount -= 2;
    // 7F03CAAC: addi    r3, r31, 816
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(816);

label_7F03CAB0:
    ctx->pc = 0x7F03CAB0u;
    // 7F03CAB0: bl      0x7F0146B0
    {
            ctx->lr = 0x7F03CAB4u;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F03CAB4:
    ctx->pc = 0x7F03CAB4u;
    ctx->downcount -= 2;
    // 7F03CAB4: lwz     r3, 3740(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3740);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03CAB8:
    ctx->pc = 0x7F03CAB8u;
    // 7F03CAB8: bl      0x7F3BA300
    {
            ctx->lr = 0x7F03CABCu;
            ctx->pc = 0x7F3BA300u;
            return;
    }

label_7F03CABC:
    ctx->pc = 0x7F03CABCu;
    ctx->downcount -= 2;
    // 7F03CABC: lwz     r3, 3740(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3740);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03CAC0:
    ctx->pc = 0x7F03CAC0u;
    // 7F03CAC0: bl      0x7F3BA234
    {
            ctx->lr = 0x7F03CAC4u;
            ctx->pc = 0x7F3BA234u;
            return;
    }

label_7F03CAC4:
    ctx->pc = 0x7F03CAC4u;
    ctx->downcount -= 9;
    // 7F03CAC4: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F03CAC8:
    ctx->pc = 0x7F03CAC8u;
    // 7F03CAC8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F03CACC:
    ctx->pc = 0x7F03CACCu;
    // 7F03CACC: stw     r0, 22016(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22016);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03CAD0:
    ctx->pc = 0x7F03CAD0u;
    // 7F03CAD0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03CAD4:
    ctx->pc = 0x7F03CAD4u;
    // 7F03CAD4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F03CAD8:
    ctx->pc = 0x7F03CAD8u;
    // 7F03CAD8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03CADC:
    ctx->pc = 0x7F03CADCu;
    // 7F03CADC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03CAE0:
    ctx->pc = 0x7F03CAE0u;
    // 7F03CAE0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03CAE4:
    ctx->pc = 0x7F03CAE4u;
    ctx->downcount -= 7;
    // 7F03CAE4: lwz     r4, 980(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(980);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03CAE8:
    ctx->pc = 0x7F03CAE8u;
    // 7F03CAE8: lha     r0, 18(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03CAEC:
    ctx->pc = 0x7F03CAECu;
    // 7F03CAEC: sth     r0, 3640(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3640);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F03CAF0:
    ctx->pc = 0x7F03CAF0u;
    // 7F03CAF0: lwz     r4, 980(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(980);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03CAF4:
    ctx->pc = 0x7F03CAF4u;
    // 7F03CAF4: lha     r0, 22(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03CAF8:
    ctx->pc = 0x7F03CAF8u;
    // 7F03CAF8: sth     r0, 3656(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3656);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F03CAFC:
    ctx->pc = 0x7F03CAFCu;
    // 7F03CAFC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03CB00:
    ctx->pc = 0x7F03CB00u;
    ctx->downcount -= 14;
    // 7F03CB00: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03CB04:
    ctx->pc = 0x7F03CB04u;
    // 7F03CB04: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03CB08:
    ctx->pc = 0x7F03CB08u;
    // 7F03CB08: or   r7, r3, r3
    {
        ctx->gpr[7] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03CB0C:
    ctx->pc = 0x7F03CB0Cu;
    // 7F03CB0C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F03CB10:
    ctx->pc = 0x7F03CB10u;
    // 7F03CB10: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03CB14:
    ctx->pc = 0x7F03CB14u;
    // 7F03CB14: addi    r5, r3, -11548
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-11548);

label_7F03CB18:
    ctx->pc = 0x7F03CB18u;
    // 7F03CB18: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F03CB18u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03CB1C:
    ctx->pc = 0x7F03CB1Cu;
    // 7F03CB1C: addi    r3, r7, 3572
    ctx->gpr[3] = ctx->gpr[7] + (u32)(s32)(3572);

label_7F03CB20:
    ctx->pc = 0x7F03CB20u;
    // 7F03CB20: lwz     r0, 3828(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(3828);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03CB24:
    ctx->pc = 0x7F03CB24u;
    // 7F03CB24: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F03CB28:
    ctx->pc = 0x7F03CB28u;
    // 7F03CB28: lha     r4, 98(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(98);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03CB2C:
    ctx->pc = 0x7F03CB2Cu;
    // 7F03CB2C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F03CB30:
    ctx->pc = 0x7F03CB30u;
    // 7F03CB30: cmpwi   r0, 0
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

label_7F03CB34:
    ctx->pc = 0x7F03CB34u;
    // 7F03CB34: bc    4, 2, 0x7F03CB50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03CB50;
        }
    }

label_7F03CB38:
    ctx->pc = 0x7F03CB38u;
    ctx->downcount -= 3;
    // 7F03CB38: lwz     r0, 3848(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(3848);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03CB3C:
    ctx->pc = 0x7F03CB3Cu;
    // 7F03CB3C: cmpwi   r0, 0
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

label_7F03CB40:
    ctx->pc = 0x7F03CB40u;
    // 7F03CB40: bc    4, 2, 0x7F03CB50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03CB50;
        }
    }

label_7F03CB44:
    ctx->pc = 0x7F03CB44u;
    ctx->downcount -= 3;
    // 7F03CB44: lwz     r0, 3864(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(3864);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03CB48:
    ctx->pc = 0x7F03CB48u;
    // 7F03CB48: cmpwi   r0, 0
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

label_7F03CB4C:
    ctx->pc = 0x7F03CB4Cu;
    // 7F03CB4C: bc    12, 2, 0x7F03CB54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03CB54;
        }
    }

label_7F03CB50:
    ctx->pc = 0x7F03CB50u;
    ctx->downcount -= 1;
    // 7F03CB50: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F03CB54:
    ctx->pc = 0x7F03CB54u;
    ctx->downcount -= 2;
    // 7F03CB54: cmpwi   r6, 0
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

label_7F03CB58:
    ctx->pc = 0x7F03CB58u;
    // 7F03CB58: bc    12, 2, 0x7F03CB64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03CB64;
        }
    }

label_7F03CB5C:
    ctx->pc = 0x7F03CB5Cu;
    ctx->downcount -= 2;
    // 7F03CB5C: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F03CB60:
    ctx->pc = 0x7F03CB60u;
    // 7F03CB60: b       0x7F03CB94
    {
            goto label_7F03CB94;
    }

label_7F03CB64:
    ctx->pc = 0x7F03CB64u;
    ctx->downcount -= 4;
    // 7F03CB64: lwz     r0, 3836(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(3836);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03CB68:
    ctx->pc = 0x7F03CB68u;
    // 7F03CB68: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F03CB6C:
    ctx->pc = 0x7F03CB6Cu;
    // 7F03CB6C: cmpwi   r0, 0
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

label_7F03CB70:
    ctx->pc = 0x7F03CB70u;
    // 7F03CB70: bc    4, 2, 0x7F03CB80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03CB80;
        }
    }

label_7F03CB74:
    ctx->pc = 0x7F03CB74u;
    ctx->downcount -= 3;
    // 7F03CB74: lwz     r0, 4008(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4008);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03CB78:
    ctx->pc = 0x7F03CB78u;
    // 7F03CB78: cmpwi   r0, 5
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

label_7F03CB7C:
    ctx->pc = 0x7F03CB7Cu;
    // 7F03CB7C: bc    4, 2, 0x7F03CB84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03CB84;
        }
    }

label_7F03CB80:
    ctx->pc = 0x7F03CB80u;
    ctx->downcount -= 1;
    // 7F03CB80: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F03CB84:
    ctx->pc = 0x7F03CB84u;
    ctx->downcount -= 3;
    // 7F03CB84: cmpwi   r6, 0
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

label_7F03CB88:
    ctx->pc = 0x7F03CB88u;
    // 7F03CB88: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F03CB8C:
    ctx->pc = 0x7F03CB8Cu;
    // 7F03CB8C: bc    12, 2, 0x7F03CB94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03CB94;
        }
    }

label_7F03CB90:
    ctx->pc = 0x7F03CB90u;
    ctx->downcount -= 1;
    // 7F03CB90: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F03CB94:
    ctx->pc = 0x7F03CB94u;
    ctx->downcount -= 1;
    // 7F03CB94: bl      0x7F041A9C
    {
            ctx->lr = 0x7F03CB98u;
            ctx->pc = 0x7F041A9Cu;
            return;
    }

label_7F03CB98:
    ctx->pc = 0x7F03CB98u;
    ctx->downcount -= 5;
    // 7F03CB98: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03CB9C:
    ctx->pc = 0x7F03CB9Cu;
    // 7F03CB9C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03CBA0:
    ctx->pc = 0x7F03CBA0u;
    // 7F03CBA0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03CBA4:
    ctx->pc = 0x7F03CBA4u;
    // 7F03CBA4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03CBA8:
    ctx->pc = 0x7F03CBA8u;
    ctx->downcount -= 22;
    // 7F03CBA8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03CBAC:
    ctx->pc = 0x7F03CBACu;
    // 7F03CBAC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03CBB0:
    ctx->pc = 0x7F03CBB0u;
    // 7F03CBB0: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03CBB4:
    ctx->pc = 0x7F03CBB4u;
    // 7F03CBB4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03CBB8:
    ctx->pc = 0x7F03CBB8u;
    // 7F03CBB8: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F03CBBC:
    ctx->pc = 0x7F03CBBCu;
    // 7F03CBBC: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03CBC0:
    ctx->pc = 0x7F03CBC0u;
    // 7F03CBC0: addi    r30, r27, 3120
    ctx->gpr[30] = ctx->gpr[27] + (u32)(s32)(3120);

label_7F03CBC4:
    ctx->pc = 0x7F03CBC4u;
    // 7F03CBC4: addi    r29, r27, 1008
    ctx->gpr[29] = ctx->gpr[27] + (u32)(s32)(1008);

label_7F03CBC8:
    ctx->pc = 0x7F03CBC8u;
    // 7F03CBC8: addi    r3, r27, 816
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(816);

label_7F03CBCC:
    ctx->pc = 0x7F03CBCCu;
    // 7F03CBCC: lwz     r5, 18312(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18312);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F03CBD0:
    ctx->pc = 0x7F03CBD0u;
    // 7F03CBD0: addi    r4, r27, 64
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(64);

label_7F03CBD4:
    ctx->pc = 0x7F03CBD4u;
    // 7F03CBD4: bl      0x7F014944
    {
            ctx->lr = 0x7F03CBD8u;
            ctx->pc = 0x7F014944u;
            return;
    }

label_7F03CBD8:
    ctx->pc = 0x7F03CBD8u;
    ctx->downcount -= 3;
    // 7F03CBD8: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F03CBDC:
    ctx->pc = 0x7F03CBDCu;
    // 7F03CBDC: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F03CBE0:
    ctx->pc = 0x7F03CBE0u;
    // 7F03CBE0: addi    r31, r3, 18312
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(18312);

label_7F03CBE4:
    ctx->pc = 0x7F03CBE4u;
    ctx->downcount -= 4;
    // 7F03CBE4: lwz     r4, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03CBE8:
    // 7F03CBE8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F03CBEC:
    ctx->pc = 0x7F03CBECu;
    // 7F03CBEC: lwz     r5, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F03CBF0:
    // 7F03CBF0: bl      0x7F014964
    {
            ctx->lr = 0x7F03CBF4u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F03CBF4:
    ctx->downcount -= 5;
    // 7F03CBF4: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F03CBF8:
    // 7F03CBF8: addi    r30, r30, 12
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(12);

label_7F03CBFC:
    // 7F03CBFC: cmpwi   r28, 11
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(11);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03CC00:
    // 7F03CC00: addi    r29, r29, 192
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(192);

label_7F03CC04:
    // 7F03CC04: bc    12, 0, 0x7F03CBE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03CBE4u;
                return;
            }
            goto label_7F03CBE4;
        }
    }

label_7F03CC08:
    ctx->pc = 0x7F03CC08u;
    ctx->downcount -= 2;
    // 7F03CC08: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F03CC0C:
    ctx->pc = 0x7F03CC0Cu;
    // 7F03CC0C: bl      0x7F03FBD4
    {
            ctx->lr = 0x7F03CC10u;
            goto label_7F03FBD4;
    }

label_7F03CC10:
    ctx->pc = 0x7F03CC10u;
    ctx->downcount -= 16;
    // 7F03CC10: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F03CC14:
    ctx->pc = 0x7F03CC14u;
    // 7F03CC14: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03CC18:
    ctx->pc = 0x7F03CC18u;
    // 7F03CC18: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03CC1C:
    ctx->pc = 0x7F03CC1Cu;
    // 7F03CC1C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F03CC20:
    ctx->pc = 0x7F03CC20u;
    // 7F03CC20: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03CC24:
    ctx->pc = 0x7F03CC24u;
    ctx->downcount -= 16;
    // 7F03CC24: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03CC28:
    ctx->pc = 0x7F03CC28u;
    // 7F03CC28: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03CC2C:
    ctx->pc = 0x7F03CC2Cu;
    // 7F03CC2C: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03CC30:
    ctx->pc = 0x7F03CC30u;
    // 7F03CC30: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03CC34:
    ctx->pc = 0x7F03CC34u;
    // 7F03CC34: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F03CC38:
    ctx->pc = 0x7F03CC38u;
    // 7F03CC38: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03CC3C:
    ctx->pc = 0x7F03CC3Cu;
    // 7F03CC3C: addi    r3, r4, 22024
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(22024);

label_7F03CC40:
    ctx->pc = 0x7F03CC40u;
    // 7F03CC40: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03CC44:
    ctx->pc = 0x7F03CC44u;
    // 7F03CC44: lwz     r4, 468(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(468);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03CC48:
    ctx->pc = 0x7F03CC48u;
    // 7F03CC48: mulli   r0, r0, 104
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)104);

label_7F03CC4C:
    ctx->pc = 0x7F03CC4Cu;
    // 7F03CC4C: lwz     r4, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03CC50:
    ctx->pc = 0x7F03CC50u;
    // 7F03CC50: lwzx    r0, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03CC54:
    ctx->pc = 0x7F03CC54u;
    // 7F03CC54: cmpwi   r0, 14
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

label_7F03CC58:
    ctx->pc = 0x7F03CC58u;
    // 7F03CC58: bc    4, 2, 0x7F03CC80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03CC80;
        }
    }

label_7F03CC5C:
    ctx->pc = 0x7F03CC5Cu;
    ctx->downcount -= 3;
    // 7F03CC5C: lwz     r0, 4008(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4008);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03CC60:
    ctx->pc = 0x7F03CC60u;
    // 7F03CC60: cmpwi   r0, 7
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

label_7F03CC64:
    ctx->pc = 0x7F03CC64u;
    // 7F03CC64: bc    12, 2, 0x7F03CD38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03CD38;
        }
    }

label_7F03CC68:
    ctx->pc = 0x7F03CC68u;
    ctx->downcount -= 4;
    // 7F03CC68: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F03CC6C:
    ctx->pc = 0x7F03CC6Cu;
    // 7F03CC6C: lwz     r0, 22032(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22032);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03CC70:
    ctx->pc = 0x7F03CC70u;
    // 7F03CC70: cmpwi   r0, 0
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

label_7F03CC74:
    ctx->pc = 0x7F03CC74u;
    // 7F03CC74: bc    12, 2, 0x7F03CC80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03CC80;
        }
    }

label_7F03CC78:
    ctx->pc = 0x7F03CC78u;
    ctx->downcount -= 1;
    // 7F03CC78: b       0x7F03CD38
    {
            goto label_7F03CD38;
    }

label_7F03CC7C:
    ctx->pc = 0x7F03CC7Cu;
    ctx->downcount -= 1;
    // 7F03CC7C: b       0x7F03CD38
    {
            goto label_7F03CD38;
    }

label_7F03CC80:
    ctx->pc = 0x7F03CC80u;
    ctx->downcount -= 8;
    // 7F03CC80: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F03CC84:
    ctx->pc = 0x7F03CC84u;
    // 7F03CC84: lwz     r0, 22020(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22020);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03CC88:
    ctx->pc = 0x7F03CC88u;
    // 7F03CC88: mulli   r3, r0, 104
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)104);

label_7F03CC8C:
    ctx->pc = 0x7F03CC8Cu;
    // 7F03CC8C: lwzx    r0, r4, r3
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03CC90:
    ctx->pc = 0x7F03CC90u;
    // 7F03CC90: cmpwi   r0, 8
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

label_7F03CC94:
    ctx->pc = 0x7F03CC94u;
    // 7F03CC94: bc    4, 2, 0x7F03CCA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03CCA8;
        }
    }

label_7F03CC98:
    ctx->pc = 0x7F03CC98u;
    ctx->downcount -= 4;
    // 7F03CC98: add   r3, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F03CC9C:
    ctx->pc = 0x7F03CC9Cu;
    // 7F03CC9C: lwz     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03CCA0:
    ctx->pc = 0x7F03CCA0u;
    // 7F03CCA0: stw     r0, 4136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03CCA4:
    ctx->pc = 0x7F03CCA4u;
    // 7F03CCA4: b       0x7F03CCB0
    {
            goto label_7F03CCB0;
    }

label_7F03CCA8:
    ctx->pc = 0x7F03CCA8u;
    ctx->downcount -= 2;
    // 7F03CCA8: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F03CCAC:
    ctx->pc = 0x7F03CCACu;
    // 7F03CCAC: stw     r0, 4136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03CCB0:
    ctx->pc = 0x7F03CCB0u;
    ctx->downcount -= 3;
    // 7F03CCB0: addi    r3, r31, 4008
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4008);

label_7F03CCB4:
    ctx->pc = 0x7F03CCB4u;
    // 7F03CCB4: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F03CCB8:
    ctx->pc = 0x7F03CCB8u;
    // 7F03CCB8: bl      0x7F03D978
    {
            ctx->lr = 0x7F03CCBCu;
            goto label_7F03D978;
    }

label_7F03CCBC:
    ctx->pc = 0x7F03CCBCu;
    ctx->downcount -= 14;
    // 7F03CCBC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F03CCC0:
    ctx->pc = 0x7F03CCC0u;
    // 7F03CCC0: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03CCC4:
    ctx->pc = 0x7F03CCC4u;
    // 7F03CCC4: stw     r0, 3836(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3836);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03CCC8:
    ctx->pc = 0x7F03CCC8u;
    // 7F03CCC8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F03CCCC:
    ctx->pc = 0x7F03CCCCu;
    // 7F03CCCC: addi    r4, r4, 22024
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22024);

label_7F03CCD0:
    ctx->pc = 0x7F03CCD0u;
    // 7F03CCD0: lis     r5, 256
    ctx->gpr[5] = ((u32)(s32)(256) << 16);

label_7F03CCD4:
    ctx->pc = 0x7F03CCD4u;
    // 7F03CCD4: lfs     f1, -11568(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F03CCD4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-11568);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03CCD8:
    ctx->pc = 0x7F03CCD8u;
    // 7F03CCD8: addi    r6, r5, -1
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-1);

label_7F03CCDC:
    ctx->pc = 0x7F03CCDCu;
    // 7F03CCDC: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03CCE0:
    ctx->pc = 0x7F03CCE0u;
    // 7F03CCE0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03CCE4:
    ctx->pc = 0x7F03CCE4u;
    // 7F03CCE4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03CCE8:
    ctx->pc = 0x7F03CCE8u;
    // 7F03CCE8: li      r7, 14
    ctx->gpr[7] = (u32)(s32)(14);

label_7F03CCEC:
    ctx->pc = 0x7F03CCECu;
    // 7F03CCEC: li      r8, 40
    ctx->gpr[8] = (u32)(s32)(40);

label_7F03CCF0:
    ctx->pc = 0x7F03CCF0u;
    // 7F03CCF0: bl      0x7F040774
    {
            ctx->lr = 0x7F03CCF4u;
            ctx->pc = 0x7F040774u;
            return;
    }

label_7F03CCF4:
    ctx->pc = 0x7F03CCF4u;
    ctx->downcount -= 5;
    // 7F03CCF4: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03CCF8:
    ctx->pc = 0x7F03CCF8u;
    // 7F03CCF8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03CCFC:
    ctx->pc = 0x7F03CCFCu;
    // 7F03CCFC: addi    r4, r4, 22024
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22024);

label_7F03CD00:
    ctx->pc = 0x7F03CD00u;
    // 7F03CD00: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03CD04:
    ctx->pc = 0x7F03CD04u;
    // 7F03CD04: bl      0x7F041A78
    {
            ctx->lr = 0x7F03CD08u;
            ctx->pc = 0x7F041A78u;
            return;
    }

label_7F03CD08:
    ctx->pc = 0x7F03CD08u;
    ctx->downcount -= 5;
    // 7F03CD08: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03CD0C:
    ctx->pc = 0x7F03CD0Cu;
    // 7F03CD0C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03CD10:
    ctx->pc = 0x7F03CD10u;
    // 7F03CD10: lwz     r0, 22024(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22024);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03CD14:
    ctx->pc = 0x7F03CD14u;
    // 7F03CD14: xori    r4, r0, 0x0001
    ctx->gpr[4] = ctx->gpr[0] ^ 0x0001u;

label_7F03CD18:
    ctx->pc = 0x7F03CD18u;
    // 7F03CD18: bl      0x7F041A38
    {
            ctx->lr = 0x7F03CD1Cu;
            ctx->pc = 0x7F041A38u;
            return;
    }

label_7F03CD1C:
    ctx->pc = 0x7F03CD1Cu;
    ctx->downcount -= 7;
    // 7F03CD1C: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03CD20:
    ctx->pc = 0x7F03CD20u;
    // 7F03CD20: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03CD24:
    ctx->pc = 0x7F03CD24u;
    // 7F03CD24: lwz     r0, 22024(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22024);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03CD28:
    ctx->pc = 0x7F03CD28u;
    // 7F03CD28: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F03CD2C:
    ctx->pc = 0x7F03CD2Cu;
    // 7F03CD2C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03CD30:
    ctx->pc = 0x7F03CD30u;
    // 7F03CD30: xori    r4, r0, 0x0001
    ctx->gpr[4] = ctx->gpr[0] ^ 0x0001u;

label_7F03CD34:
    ctx->pc = 0x7F03CD34u;
    // 7F03CD34: bl      0x7F041A84
    {
            ctx->lr = 0x7F03CD38u;
            ctx->pc = 0x7F041A84u;
            return;
    }

label_7F03CD38:
    ctx->pc = 0x7F03CD38u;
    ctx->downcount -= 6;
    // 7F03CD38: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03CD3C:
    ctx->pc = 0x7F03CD3Cu;
    // 7F03CD3C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F03CD40:
    ctx->pc = 0x7F03CD40u;
    // 7F03CD40: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03CD44:
    ctx->pc = 0x7F03CD44u;
    // 7F03CD44: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03CD48:
    ctx->pc = 0x7F03CD48u;
    // 7F03CD48: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03CD4C:
    ctx->pc = 0x7F03CD4Cu;
    ctx->downcount -= 18;
    // 7F03CD4C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03CD50:
    ctx->pc = 0x7F03CD50u;
    // 7F03CD50: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03CD54:
    ctx->pc = 0x7F03CD54u;
    // 7F03CD54: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03CD58:
    ctx->pc = 0x7F03CD58u;
    // 7F03CD58: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F03CD5C:
    ctx->pc = 0x7F03CD5Cu;
    // 7F03CD5C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03CD60:
    ctx->pc = 0x7F03CD60u;
    // 7F03CD60: lwz     r0, 3844(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3844);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03CD64:
    ctx->pc = 0x7F03CD64u;
    // 7F03CD64: cmpwi   r0, 0
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

label_7F03CD68:
    ctx->pc = 0x7F03CD68u;
    // 7F03CD68: bc    12, 2, 0x7F03CD80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03CD80;
        }
    }

label_7F03CD6C:
    ctx->pc = 0x7F03CD6Cu;
    ctx->downcount -= 3;
    // 7F03CD6C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F03CD70:
    ctx->pc = 0x7F03CD70u;
    // 7F03CD70: stw     r0, 3844(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3844);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03CD74:
    ctx->pc = 0x7F03CD74u;
    // 7F03CD74: bl      0x7F03CC24
    {
            ctx->lr = 0x7F03CD78u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03CC24u;
                return;
            }
            goto label_7F03CC24;
    }

label_7F03CD78:
    ctx->pc = 0x7F03CD78u;
    ctx->downcount -= 2;
    // 7F03CD78: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F03CD7C:
    ctx->pc = 0x7F03CD7Cu;
    // 7F03CD7C: b       0x7F03CE38
    {
            goto label_7F03CE38;
    }

label_7F03CD80:
    ctx->pc = 0x7F03CD80u;
    ctx->downcount -= 3;
    // 7F03CD80: lwz     r0, 3836(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3836);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03CD84:
    ctx->pc = 0x7F03CD84u;
    // 7F03CD84: cmpwi   r0, 0
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

label_7F03CD88:
    ctx->pc = 0x7F03CD88u;
    // 7F03CD88: bc    12, 2, 0x7F03CD94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03CD94;
        }
    }

label_7F03CD8C:
    ctx->pc = 0x7F03CD8Cu;
    ctx->downcount -= 2;
    // 7F03CD8C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F03CD90:
    ctx->pc = 0x7F03CD90u;
    // 7F03CD90: b       0x7F03CE38
    {
            goto label_7F03CE38;
    }

label_7F03CD94:
    ctx->pc = 0x7F03CD94u;
    ctx->downcount -= 5;
    // 7F03CD94: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F03CD98:
    ctx->pc = 0x7F03CD98u;
    // 7F03CD98: stw     r0, 3836(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3836);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03CD9C:
    ctx->pc = 0x7F03CD9Cu;
    // 7F03CD9C: lwz     r0, 3828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3828);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03CDA0:
    ctx->pc = 0x7F03CDA0u;
    // 7F03CDA0: cmpwi   r0, 0
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

label_7F03CDA4:
    ctx->pc = 0x7F03CDA4u;
    // 7F03CDA4: bc    12, 2, 0x7F03CDB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03CDB8;
        }
    }

label_7F03CDA8:
    ctx->pc = 0x7F03CDA8u;
    ctx->downcount -= 4;
    // 7F03CDA8: lis     r3, 32
    ctx->gpr[3] = ((u32)(s32)(32) << 16);

label_7F03CDAC:
    ctx->pc = 0x7F03CDACu;
    // 7F03CDAC: li      r30, 8190
    ctx->gpr[30] = (u32)(s32)(8190);

label_7F03CDB0:
    ctx->pc = 0x7F03CDB0u;
    // 7F03CDB0: addi    r6, r3, -8191
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-8191);

label_7F03CDB4:
    ctx->pc = 0x7F03CDB4u;
    // 7F03CDB4: b       0x7F03CDC4
    {
            goto label_7F03CDC4;
    }

label_7F03CDB8:
    ctx->pc = 0x7F03CDB8u;
    ctx->downcount -= 3;
    // 7F03CDB8: lis     r3, 256
    ctx->gpr[3] = ((u32)(s32)(256) << 16);

label_7F03CDBC:
    ctx->pc = 0x7F03CDBCu;
    // 7F03CDBC: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F03CDC0:
    ctx->pc = 0x7F03CDC0u;
    // 7F03CDC0: addi    r6, r3, -1
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F03CDC4:
    ctx->pc = 0x7F03CDC4u;
    ctx->downcount -= 11;
    // 7F03CDC4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F03CDC8:
    ctx->pc = 0x7F03CDC8u;
    // 7F03CDC8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F03CDCC:
    ctx->pc = 0x7F03CDCCu;
    // 7F03CDCC: addi    r7, r3, 2904
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(2904);

label_7F03CDD0:
    ctx->pc = 0x7F03CDD0u;
    // 7F03CDD0: li      r8, 40
    ctx->gpr[8] = (u32)(s32)(40);

label_7F03CDD4:
    ctx->pc = 0x7F03CDD4u;
    // 7F03CDD4: addi    r5, r4, -11568
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-11568);

label_7F03CDD8:
    ctx->pc = 0x7F03CDD8u;
    // 7F03CDD8: lwz     r4, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03CDDC:
    ctx->pc = 0x7F03CDDCu;
    // 7F03CDDC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F03CDDCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03CDE0:
    ctx->pc = 0x7F03CDE0u;
    // 7F03CDE0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03CDE4:
    ctx->pc = 0x7F03CDE4u;
    // 7F03CDE4: srawi r5, r6, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[6];
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

label_7F03CDE8:
    ctx->pc = 0x7F03CDE8u;
    // 7F03CDE8: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_7F03CDEC:
    ctx->pc = 0x7F03CDECu;
    // 7F03CDEC: bl      0x7F040774
    {
            ctx->lr = 0x7F03CDF0u;
            ctx->pc = 0x7F040774u;
            return;
    }

label_7F03CDF0:
    ctx->pc = 0x7F03CDF0u;
    ctx->downcount -= 5;
    // 7F03CDF0: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F03CDF4:
    ctx->pc = 0x7F03CDF4u;
    // 7F03CDF4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03CDF8:
    ctx->pc = 0x7F03CDF8u;
    // 7F03CDF8: addi    r4, r4, 2904
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2904);

label_7F03CDFC:
    ctx->pc = 0x7F03CDFCu;
    // 7F03CDFC: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03CE00:
    ctx->pc = 0x7F03CE00u;
    // 7F03CE00: bl      0x7F041A78
    {
            ctx->lr = 0x7F03CE04u;
            ctx->pc = 0x7F041A78u;
            return;
    }

label_7F03CE04:
    ctx->pc = 0x7F03CE04u;
    ctx->downcount -= 7;
    // 7F03CE04: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03CE08:
    ctx->pc = 0x7F03CE08u;
    // 7F03CE08: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03CE0C:
    ctx->pc = 0x7F03CE0Cu;
    // 7F03CE0C: addi    r4, r4, 22020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22020);

label_7F03CE10:
    ctx->pc = 0x7F03CE10u;
    // 7F03CE10: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03CE14:
    ctx->pc = 0x7F03CE14u;
    // 7F03CE14: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03CE18:
    ctx->pc = 0x7F03CE18u;
    // 7F03CE18: srawi r5, r30, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[30];
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

label_7F03CE1C:
    ctx->pc = 0x7F03CE1Cu;
    // 7F03CE1C: bl      0x7F041A84
    {
            ctx->lr = 0x7F03CE20u;
            ctx->pc = 0x7F041A84u;
            return;
    }

label_7F03CE20:
    ctx->pc = 0x7F03CE20u;
    ctx->downcount -= 5;
    // 7F03CE20: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03CE24:
    ctx->pc = 0x7F03CE24u;
    // 7F03CE24: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03CE28:
    ctx->pc = 0x7F03CE28u;
    // 7F03CE28: addi    r4, r4, 22020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22020);

label_7F03CE2C:
    ctx->pc = 0x7F03CE2Cu;
    // 7F03CE2C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03CE30:
    ctx->pc = 0x7F03CE30u;
    // 7F03CE30: bl      0x7F041A58
    {
            ctx->lr = 0x7F03CE34u;
            ctx->pc = 0x7F041A58u;
            return;
    }

label_7F03CE34:
    ctx->pc = 0x7F03CE34u;
    ctx->downcount -= 1;
    // 7F03CE34: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F03CE38:
    ctx->pc = 0x7F03CE38u;
    ctx->downcount -= 16;
    // 7F03CE38: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F03CE3C:
    ctx->pc = 0x7F03CE3Cu;
    // 7F03CE3C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03CE40:
    ctx->pc = 0x7F03CE40u;
    // 7F03CE40: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03CE44:
    ctx->pc = 0x7F03CE44u;
    // 7F03CE44: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03CE48:
    ctx->pc = 0x7F03CE48u;
    // 7F03CE48: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03CE4C:
    ctx->pc = 0x7F03CE4Cu;
    ctx->downcount -= 16;
    // 7F03CE4C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03CE50:
    ctx->pc = 0x7F03CE50u;
    // 7F03CE50: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03CE54:
    ctx->pc = 0x7F03CE54u;
    // 7F03CE54: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F03CE58:
    ctx->pc = 0x7F03CE58u;
    // 7F03CE58: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F03CE5C:
    ctx->pc = 0x7F03CE5Cu;
    // 7F03CE5C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03CE60:
    ctx->pc = 0x7F03CE60u;
    // 7F03CE60: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F03CE64:
    ctx->pc = 0x7F03CE64u;
    // 7F03CE64: lfs     f1, -11568(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F03CE64u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-11568);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03CE68:
    ctx->pc = 0x7F03CE68u;
    // 7F03CE68: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F03CE6C:
    ctx->pc = 0x7F03CE6Cu;
    // 7F03CE6C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F03CE70:
    ctx->pc = 0x7F03CE70u;
    // 7F03CE70: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03CE74:
    ctx->pc = 0x7F03CE74u;
    // 7F03CE74: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_7F03CE78:
    ctx->pc = 0x7F03CE78u;
    // 7F03CE78: li      r8, 40
    ctx->gpr[8] = (u32)(s32)(40);

label_7F03CE7C:
    ctx->pc = 0x7F03CE7Cu;
    // 7F03CE7C: stw     r0, 3836(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3836);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03CE80:
    ctx->pc = 0x7F03CE80u;
    // 7F03CE80: lwz     r4, 2904(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2904);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03CE84:
    ctx->pc = 0x7F03CE84u;
    // 7F03CE84: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03CE88:
    ctx->pc = 0x7F03CE88u;
    // 7F03CE88: bl      0x7F040774
    {
            ctx->lr = 0x7F03CE8Cu;
            ctx->pc = 0x7F040774u;
            return;
    }

label_7F03CE8C:
    ctx->pc = 0x7F03CE8Cu;
    ctx->downcount -= 5;
    // 7F03CE8C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F03CE90:
    ctx->pc = 0x7F03CE90u;
    // 7F03CE90: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03CE94:
    ctx->pc = 0x7F03CE94u;
    // 7F03CE94: addi    r4, r4, 2904
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2904);

label_7F03CE98:
    ctx->pc = 0x7F03CE98u;
    // 7F03CE98: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03CE9C:
    ctx->pc = 0x7F03CE9Cu;
    // 7F03CE9C: bl      0x7F041A38
    {
            ctx->lr = 0x7F03CEA0u;
            ctx->pc = 0x7F041A38u;
            return;
    }

label_7F03CEA0:
    ctx->pc = 0x7F03CEA0u;
    ctx->downcount -= 3;
    // 7F03CEA0: lwz     r0, 3828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3828);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03CEA4:
    ctx->pc = 0x7F03CEA4u;
    // 7F03CEA4: cmpwi   r0, 0
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

label_7F03CEA8:
    ctx->pc = 0x7F03CEA8u;
    // 7F03CEA8: bc    4, 2, 0x7F03CEE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03CEE0;
        }
    }

label_7F03CEAC:
    ctx->pc = 0x7F03CEACu;
    ctx->downcount -= 12;
    // 7F03CEAC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03CEB0:
    ctx->pc = 0x7F03CEB0u;
    // 7F03CEB0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F03CEB4:
    ctx->pc = 0x7F03CEB4u;
    // 7F03CEB4: addi    r4, r4, 22020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22020);

label_7F03CEB8:
    ctx->pc = 0x7F03CEB8u;
    // 7F03CEB8: lis     r5, 256
    ctx->gpr[5] = ((u32)(s32)(256) << 16);

label_7F03CEBC:
    ctx->pc = 0x7F03CEBCu;
    // 7F03CEBC: lfs     f1, -11568(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F03CEBCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-11568);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03CEC0:
    ctx->pc = 0x7F03CEC0u;
    // 7F03CEC0: addi    r6, r5, -1
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-1);

label_7F03CEC4:
    ctx->pc = 0x7F03CEC4u;
    // 7F03CEC4: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03CEC8:
    ctx->pc = 0x7F03CEC8u;
    // 7F03CEC8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03CECC:
    ctx->pc = 0x7F03CECCu;
    // 7F03CECC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03CED0:
    ctx->pc = 0x7F03CED0u;
    // 7F03CED0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F03CED4:
    ctx->pc = 0x7F03CED4u;
    // 7F03CED4: li      r8, 40
    ctx->gpr[8] = (u32)(s32)(40);

label_7F03CED8:
    ctx->pc = 0x7F03CED8u;
    // 7F03CED8: bl      0x7F040774
    {
            ctx->lr = 0x7F03CEDCu;
            ctx->pc = 0x7F040774u;
            return;
    }

label_7F03CEDC:
    ctx->pc = 0x7F03CEDCu;
    ctx->downcount -= 1;
    // 7F03CEDC: b       0x7F03CF00
    {
            goto label_7F03CF00;
    }

label_7F03CEE0:
    ctx->pc = 0x7F03CEE0u;
    ctx->downcount -= 8;
    // 7F03CEE0: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F03CEE4:
    ctx->pc = 0x7F03CEE4u;
    // 7F03CEE4: lis     r5, 256
    ctx->gpr[5] = ((u32)(s32)(256) << 16);

label_7F03CEE8:
    ctx->pc = 0x7F03CEE8u;
    // 7F03CEE8: addi    r4, r3, 22020
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(22020);

label_7F03CEEC:
    ctx->pc = 0x7F03CEECu;
    // 7F03CEEC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03CEF0:
    ctx->pc = 0x7F03CEF0u;
    // 7F03CEF0: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03CEF4:
    ctx->pc = 0x7F03CEF4u;
    // 7F03CEF4: addi    r6, r5, -1
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-1);

label_7F03CEF8:
    ctx->pc = 0x7F03CEF8u;
    // 7F03CEF8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03CEFC:
    ctx->pc = 0x7F03CEFCu;
    // 7F03CEFC: bl      0x7F041A84
    {
            ctx->lr = 0x7F03CF00u;
            ctx->pc = 0x7F041A84u;
            return;
    }

label_7F03CF00:
    ctx->pc = 0x7F03CF00u;
    ctx->downcount -= 5;
    // 7F03CF00: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03CF04:
    ctx->pc = 0x7F03CF04u;
    // 7F03CF04: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03CF08:
    ctx->pc = 0x7F03CF08u;
    // 7F03CF08: addi    r4, r4, 22020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22020);

label_7F03CF0C:
    ctx->pc = 0x7F03CF0Cu;
    // 7F03CF0C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03CF10:
    ctx->pc = 0x7F03CF10u;
    // 7F03CF10: bl      0x7F041A78
    {
            ctx->lr = 0x7F03CF14u;
            ctx->pc = 0x7F041A78u;
            return;
    }

label_7F03CF14:
    ctx->pc = 0x7F03CF14u;
    ctx->downcount -= 6;
    // 7F03CF14: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03CF18:
    ctx->pc = 0x7F03CF18u;
    // 7F03CF18: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F03CF1C:
    ctx->pc = 0x7F03CF1Cu;
    // 7F03CF1C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03CF20:
    ctx->pc = 0x7F03CF20u;
    // 7F03CF20: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03CF24:
    ctx->pc = 0x7F03CF24u;
    // 7F03CF24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03CF28:
    ctx->pc = 0x7F03CF28u;
    ctx->downcount -= 6;
    // 7F03CF28: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03CF2C:
    ctx->pc = 0x7F03CF2Cu;
    // 7F03CF2C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03CF30:
    ctx->pc = 0x7F03CF30u;
    // 7F03CF30: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03CF34:
    ctx->pc = 0x7F03CF34u;
    // 7F03CF34: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F03CF38:
    ctx->pc = 0x7F03CF38u;
    // 7F03CF38: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03CF3C:
    ctx->pc = 0x7F03CF3Cu;
    // 7F03CF3C: bl      0x7F041BDC
    {
            ctx->lr = 0x7F03CF40u;
            ctx->pc = 0x7F041BDCu;
            return;
    }

label_7F03CF40:
    ctx->pc = 0x7F03CF40u;
    ctx->downcount -= 12;
    // 7F03CF40: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F03CF44:
    ctx->pc = 0x7F03CF44u;
    // 7F03CF44: lwz     r5, 468(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(468);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F03CF48:
    ctx->pc = 0x7F03CF48u;
    // 7F03CF48: addi    r4, r4, 2904
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2904);

label_7F03CF4C:
    ctx->pc = 0x7F03CF4Cu;
    // 7F03CF4C: rlwinm r6, r3, 0, 31, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000001u;
    }

label_7F03CF50:
    ctx->pc = 0x7F03CF50u;
    // 7F03CF50: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03CF54:
    ctx->pc = 0x7F03CF54u;
    // 7F03CF54: lwz     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03CF58:
    ctx->pc = 0x7F03CF58u;
    // 7F03CF58: mulli   r0, r4, 104
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)104);

label_7F03CF5C:
    ctx->pc = 0x7F03CF5Cu;
    // 7F03CF5C: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03CF60:
    ctx->pc = 0x7F03CF60u;
    // 7F03CF60: cmpwi   r0, 9
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

label_7F03CF64:
    ctx->pc = 0x7F03CF64u;
    // 7F03CF64: bc    12, 2, 0x7F03CFD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03CFD4;
        }
    }

label_7F03CF68:
    ctx->pc = 0x7F03CF68u;
    ctx->downcount -= 2;
    // 7F03CF68: cmpwi   r0, 10
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

label_7F03CF6C:
    ctx->pc = 0x7F03CF6Cu;
    // 7F03CF6C: bc    12, 2, 0x7F03CFD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03CFD4;
        }
    }

label_7F03CF70:
    ctx->pc = 0x7F03CF70u;
    ctx->downcount -= 7;
    // 7F03CF70: cmpwi   r6, 0
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

label_7F03CF74:
    ctx->pc = 0x7F03CF74u;
    // 7F03CF74: lis     r5, 256
    ctx->gpr[5] = ((u32)(s32)(256) << 16);

label_7F03CF78:
    ctx->pc = 0x7F03CF78u;
    // 7F03CF78: addi    r6, r5, -1
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-1);

label_7F03CF7C:
    ctx->pc = 0x7F03CF7Cu;
    // 7F03CF7C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03CF80:
    ctx->pc = 0x7F03CF80u;
    // 7F03CF80: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03CF84:
    ctx->pc = 0x7F03CF84u;
    // 7F03CF84: li      r7, 10
    ctx->gpr[7] = (u32)(s32)(10);

label_7F03CF88:
    ctx->pc = 0x7F03CF88u;
    // 7F03CF88: bc    12, 2, 0x7F03CF90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03CF90;
        }
    }

label_7F03CF8C:
    ctx->pc = 0x7F03CF8Cu;
    ctx->downcount -= 1;
    // 7F03CF8C: li      r7, 9
    ctx->gpr[7] = (u32)(s32)(9);

label_7F03CF90:
    ctx->pc = 0x7F03CF90u;
    ctx->downcount -= 5;
    // 7F03CF90: lis     r8, 32582
    ctx->gpr[8] = ((u32)(s32)(32582) << 16);

label_7F03CF94:
    ctx->pc = 0x7F03CF94u;
    // 7F03CF94: addi    r9, r8, -11568
    ctx->gpr[9] = ctx->gpr[8] + (u32)(s32)(-11568);

label_7F03CF98:
    ctx->pc = 0x7F03CF98u;
    // 7F03CF98: lfs     f1, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F03CF98u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03CF9C:
    ctx->pc = 0x7F03CF9Cu;
    // 7F03CF9C: li      r8, 40
    ctx->gpr[8] = (u32)(s32)(40);

label_7F03CFA0:
    ctx->pc = 0x7F03CFA0u;
    // 7F03CFA0: bl      0x7F040774
    {
            ctx->lr = 0x7F03CFA4u;
            ctx->pc = 0x7F040774u;
            return;
    }

label_7F03CFA4:
    ctx->pc = 0x7F03CFA4u;
    ctx->downcount -= 5;
    // 7F03CFA4: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F03CFA8:
    ctx->pc = 0x7F03CFA8u;
    // 7F03CFA8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03CFAC:
    ctx->pc = 0x7F03CFACu;
    // 7F03CFAC: addi    r4, r4, 2904
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2904);

label_7F03CFB0:
    ctx->pc = 0x7F03CFB0u;
    // 7F03CFB0: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03CFB4:
    ctx->pc = 0x7F03CFB4u;
    // 7F03CFB4: bl      0x7F041A78
    {
            ctx->lr = 0x7F03CFB8u;
            ctx->pc = 0x7F041A78u;
            return;
    }

label_7F03CFB8:
    ctx->pc = 0x7F03CFB8u;
    ctx->downcount -= 7;
    // 7F03CFB8: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03CFBC:
    ctx->pc = 0x7F03CFBCu;
    // 7F03CFBC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03CFC0:
    ctx->pc = 0x7F03CFC0u;
    // 7F03CFC0: addi    r4, r4, 22020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22020);

label_7F03CFC4:
    ctx->pc = 0x7F03CFC4u;
    // 7F03CFC4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F03CFC8:
    ctx->pc = 0x7F03CFC8u;
    // 7F03CFC8: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03CFCC:
    ctx->pc = 0x7F03CFCCu;
    // 7F03CFCC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03CFD0:
    ctx->pc = 0x7F03CFD0u;
    // 7F03CFD0: bl      0x7F041A84
    {
            ctx->lr = 0x7F03CFD4u;
            ctx->pc = 0x7F041A84u;
            return;
    }

label_7F03CFD4:
    ctx->pc = 0x7F03CFD4u;
    ctx->downcount -= 5;
    // 7F03CFD4: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03CFD8:
    ctx->pc = 0x7F03CFD8u;
    // 7F03CFD8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03CFDC:
    ctx->pc = 0x7F03CFDCu;
    // 7F03CFDC: addi    r4, r4, 22020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22020);

label_7F03CFE0:
    ctx->pc = 0x7F03CFE0u;
    // 7F03CFE0: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03CFE4:
    ctx->pc = 0x7F03CFE4u;
    // 7F03CFE4: bl      0x7F041A38
    {
            ctx->lr = 0x7F03CFE8u;
            ctx->pc = 0x7F041A38u;
            return;
    }

label_7F03CFE8:
    ctx->pc = 0x7F03CFE8u;
    ctx->downcount -= 6;
    // 7F03CFE8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03CFEC:
    ctx->pc = 0x7F03CFECu;
    // 7F03CFEC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F03CFF0:
    ctx->pc = 0x7F03CFF0u;
    // 7F03CFF0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03CFF4:
    ctx->pc = 0x7F03CFF4u;
    // 7F03CFF4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03CFF8:
    ctx->pc = 0x7F03CFF8u;
    // 7F03CFF8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03CFFC:
    ctx->pc = 0x7F03CFFCu;
    ctx->downcount -= 19;
    // 7F03CFFC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03D000:
    ctx->pc = 0x7F03D000u;
    // 7F03D000: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03D004:
    ctx->pc = 0x7F03D004u;
    // 7F03D004: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03D008:
    ctx->pc = 0x7F03D008u;
    // 7F03D008: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F03D00C:
    ctx->pc = 0x7F03D00Cu;
    // 7F03D00C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03D010:
    ctx->pc = 0x7F03D010u;
    // 7F03D010: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_7F03D014:
    ctx->pc = 0x7F03D014u;
    // 7F03D014: lwz     r0, 3836(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3836);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03D018:
    ctx->pc = 0x7F03D018u;
    // 7F03D018: cmpwi   r0, 0
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

label_7F03D01C:
    ctx->pc = 0x7F03D01Cu;
    // 7F03D01C: bc    12, 2, 0x7F03D06C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03D06C;
        }
    }

label_7F03D020:
    ctx->pc = 0x7F03D020u;
    ctx->downcount -= 12;
    // 7F03D020: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F03D024:
    ctx->pc = 0x7F03D024u;
    // 7F03D024: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F03D028:
    ctx->pc = 0x7F03D028u;
    // 7F03D028: addi    r7, r5, 2904
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(2904);

label_7F03D02C:
    ctx->pc = 0x7F03D02Cu;
    // 7F03D02C: lis     r6, 256
    ctx->gpr[6] = ((u32)(s32)(256) << 16);

label_7F03D030:
    ctx->pc = 0x7F03D030u;
    // 7F03D030: addi    r5, r4, -11568
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-11568);

label_7F03D034:
    ctx->pc = 0x7F03D034u;
    // 7F03D034: lwz     r4, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D038:
    ctx->pc = 0x7F03D038u;
    // 7F03D038: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F03D038u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03D03C:
    ctx->pc = 0x7F03D03Cu;
    // 7F03D03C: addi    r6, r6, -8191
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-8191);

label_7F03D040:
    ctx->pc = 0x7F03D040u;
    // 7F03D040: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03D044:
    ctx->pc = 0x7F03D044u;
    // 7F03D044: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_7F03D048:
    ctx->pc = 0x7F03D048u;
    // 7F03D048: li      r8, 40
    ctx->gpr[8] = (u32)(s32)(40);

label_7F03D04C:
    ctx->pc = 0x7F03D04Cu;
    // 7F03D04C: bl      0x7F040774
    {
            ctx->lr = 0x7F03D050u;
            ctx->pc = 0x7F040774u;
            return;
    }

label_7F03D050:
    ctx->pc = 0x7F03D050u;
    ctx->downcount -= 5;
    // 7F03D050: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F03D054:
    ctx->pc = 0x7F03D054u;
    // 7F03D054: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03D058:
    ctx->pc = 0x7F03D058u;
    // 7F03D058: addi    r4, r4, 2904
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2904);

label_7F03D05C:
    ctx->pc = 0x7F03D05Cu;
    // 7F03D05C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D060:
    ctx->pc = 0x7F03D060u;
    // 7F03D060: bl      0x7F041A78
    {
            ctx->lr = 0x7F03D064u;
            ctx->pc = 0x7F041A78u;
            return;
    }

label_7F03D064:
    ctx->pc = 0x7F03D064u;
    ctx->downcount -= 2;
    // 7F03D064: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_7F03D068:
    ctx->pc = 0x7F03D068u;
    // 7F03D068: b       0x7F03D098
    {
            goto label_7F03D098;
    }

label_7F03D06C:
    ctx->pc = 0x7F03D06Cu;
    ctx->downcount -= 11;
    // 7F03D06C: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F03D070:
    ctx->pc = 0x7F03D070u;
    // 7F03D070: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F03D074:
    ctx->pc = 0x7F03D074u;
    // 7F03D074: addi    r7, r5, 2904
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(2904);

label_7F03D078:
    ctx->pc = 0x7F03D078u;
    // 7F03D078: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F03D07C:
    ctx->pc = 0x7F03D07Cu;
    // 7F03D07C: addi    r5, r4, -11568
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-11568);

label_7F03D080:
    ctx->pc = 0x7F03D080u;
    // 7F03D080: lwz     r4, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D084:
    ctx->pc = 0x7F03D084u;
    // 7F03D084: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F03D084u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03D088:
    ctx->pc = 0x7F03D088u;
    // 7F03D088: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03D08C:
    ctx->pc = 0x7F03D08Cu;
    // 7F03D08C: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_7F03D090:
    ctx->pc = 0x7F03D090u;
    // 7F03D090: li      r8, 40
    ctx->gpr[8] = (u32)(s32)(40);

label_7F03D094:
    ctx->pc = 0x7F03D094u;
    // 7F03D094: bl      0x7F040774
    {
            ctx->lr = 0x7F03D098u;
            ctx->pc = 0x7F040774u;
            return;
    }

label_7F03D098:
    ctx->pc = 0x7F03D098u;
    ctx->downcount -= 3;
    // 7F03D098: lwz     r0, 3828(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3828);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03D09C:
    ctx->pc = 0x7F03D09Cu;
    // 7F03D09C: cmpwi   r0, 0
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

label_7F03D0A0:
    ctx->pc = 0x7F03D0A0u;
    // 7F03D0A0: bc    12, 2, 0x7F03D158
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03D158;
        }
    }

label_7F03D0A4:
    ctx->pc = 0x7F03D0A4u;
    ctx->downcount -= 10;
    // 7F03D0A4: lwz     r5, 468(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(468);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F03D0A8:
    ctx->pc = 0x7F03D0A8u;
    // 7F03D0A8: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F03D0AC:
    ctx->pc = 0x7F03D0ACu;
    // 7F03D0AC: addi    r4, r3, 22020
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(22020);

label_7F03D0B0:
    ctx->pc = 0x7F03D0B0u;
    // 7F03D0B0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03D0B4:
    ctx->pc = 0x7F03D0B4u;
    // 7F03D0B4: lwz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F03D0B8:
    ctx->pc = 0x7F03D0B8u;
    // 7F03D0B8: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D0BC:
    ctx->pc = 0x7F03D0BCu;
    // 7F03D0BC: lwz     r29, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F03D0C0:
    ctx->pc = 0x7F03D0C0u;
    // 7F03D0C0: lwz     r28, 120(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(120);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F03D0C4:
    ctx->pc = 0x7F03D0C4u;
    // 7F03D0C4: rlwinm r31, r29, 0, 19, 30
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x00001FFEu;
    }

label_7F03D0C8:
    ctx->pc = 0x7F03D0C8u;
    // 7F03D0C8: bl      0x7F041A58
    {
            ctx->lr = 0x7F03D0CCu;
            ctx->pc = 0x7F041A58u;
            return;
    }

label_7F03D0CC:
    ctx->pc = 0x7F03D0CCu;
    ctx->downcount -= 3;
    // 7F03D0CC: cmpwi   r31, 0
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

label_7F03D0D0:
    ctx->pc = 0x7F03D0D0u;
    // 7F03D0D0: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_7F03D0D4:
    ctx->pc = 0x7F03D0D4u;
    // 7F03D0D4: bc    4, 2, 0x7F03D104
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03D104;
        }
    }

label_7F03D0D8:
    ctx->pc = 0x7F03D0D8u;
    ctx->downcount -= 3;
    // 7F03D0D8: lwz     r0, 3836(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3836);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03D0DC:
    ctx->pc = 0x7F03D0DCu;
    // 7F03D0DC: cmpwi   r0, 0
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

label_7F03D0E0:
    ctx->pc = 0x7F03D0E0u;
    // 7F03D0E0: bc    12, 2, 0x7F03D104
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03D104;
        }
    }

label_7F03D0E4:
    ctx->pc = 0x7F03D0E4u;
    ctx->downcount -= 7;
    // 7F03D0E4: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03D0E8:
    ctx->pc = 0x7F03D0E8u;
    // 7F03D0E8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03D0EC:
    ctx->pc = 0x7F03D0ECu;
    // 7F03D0EC: addi    r4, r4, 22020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22020);

label_7F03D0F0:
    ctx->pc = 0x7F03D0F0u;
    // 7F03D0F0: li      r6, 8190
    ctx->gpr[6] = (u32)(s32)(8190);

label_7F03D0F4:
    ctx->pc = 0x7F03D0F4u;
    // 7F03D0F4: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D0F8:
    ctx->pc = 0x7F03D0F8u;
    // 7F03D0F8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03D0FC:
    ctx->pc = 0x7F03D0FCu;
    // 7F03D0FC: bl      0x7F041A84
    {
            ctx->lr = 0x7F03D100u;
            ctx->pc = 0x7F041A84u;
            return;
    }

label_7F03D100:
    ctx->pc = 0x7F03D100u;
    ctx->downcount -= 1;
    // 7F03D100: b       0x7F03D1A8
    {
            goto label_7F03D1A8;
    }

label_7F03D104:
    ctx->pc = 0x7F03D104u;
    ctx->downcount -= 2;
    // 7F03D104: cmpwi   r29, 0
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

label_7F03D108:
    ctx->pc = 0x7F03D108u;
    // 7F03D108: bc    4, 2, 0x7F03D1A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03D1A8;
        }
    }

label_7F03D10C:
    ctx->pc = 0x7F03D10Cu;
    ctx->downcount -= 2;
    // 7F03D10C: cmpwi   r28, 0
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

label_7F03D110:
    ctx->pc = 0x7F03D110u;
    // 7F03D110: bc    4, 2, 0x7F03D1A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03D1A8;
        }
    }

label_7F03D114:
    ctx->pc = 0x7F03D114u;
    ctx->downcount -= 3;
    // 7F03D114: lwz     r0, 3836(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3836);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03D118:
    ctx->pc = 0x7F03D118u;
    // 7F03D118: cmpwi   r0, 0
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

label_7F03D11C:
    ctx->pc = 0x7F03D11Cu;
    // 7F03D11C: bc    4, 2, 0x7F03D1A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03D1A8;
        }
    }

label_7F03D120:
    ctx->pc = 0x7F03D120u;
    ctx->downcount -= 8;
    // 7F03D120: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F03D124:
    ctx->pc = 0x7F03D124u;
    // 7F03D124: lis     r5, 256
    ctx->gpr[5] = ((u32)(s32)(256) << 16);

label_7F03D128:
    ctx->pc = 0x7F03D128u;
    // 7F03D128: addi    r4, r3, 22020
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(22020);

label_7F03D12C:
    ctx->pc = 0x7F03D12Cu;
    // 7F03D12C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03D130:
    ctx->pc = 0x7F03D130u;
    // 7F03D130: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D134:
    ctx->pc = 0x7F03D134u;
    // 7F03D134: addi    r6, r5, -1
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-1);

label_7F03D138:
    ctx->pc = 0x7F03D138u;
    // 7F03D138: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03D13C:
    ctx->pc = 0x7F03D13Cu;
    // 7F03D13C: bl      0x7F041A84
    {
            ctx->lr = 0x7F03D140u;
            ctx->pc = 0x7F041A84u;
            return;
    }

label_7F03D140:
    ctx->pc = 0x7F03D140u;
    ctx->downcount -= 5;
    // 7F03D140: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03D144:
    ctx->pc = 0x7F03D144u;
    // 7F03D144: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03D148:
    ctx->pc = 0x7F03D148u;
    // 7F03D148: addi    r4, r4, 22020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22020);

label_7F03D14C:
    ctx->pc = 0x7F03D14Cu;
    // 7F03D14C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D150:
    ctx->pc = 0x7F03D150u;
    // 7F03D150: bl      0x7F041A78
    {
            ctx->lr = 0x7F03D154u;
            ctx->pc = 0x7F041A78u;
            return;
    }

label_7F03D154:
    ctx->pc = 0x7F03D154u;
    ctx->downcount -= 1;
    // 7F03D154: b       0x7F03D1A8
    {
            goto label_7F03D1A8;
    }

label_7F03D158:
    ctx->pc = 0x7F03D158u;
    ctx->downcount -= 12;
    // 7F03D158: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03D15C:
    ctx->pc = 0x7F03D15Cu;
    // 7F03D15C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F03D160:
    ctx->pc = 0x7F03D160u;
    // 7F03D160: addi    r4, r4, 22020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22020);

label_7F03D164:
    ctx->pc = 0x7F03D164u;
    // 7F03D164: lis     r5, 256
    ctx->gpr[5] = ((u32)(s32)(256) << 16);

label_7F03D168:
    ctx->pc = 0x7F03D168u;
    // 7F03D168: lfs     f1, -11568(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F03D168u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-11568);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03D16C:
    ctx->pc = 0x7F03D16Cu;
    // 7F03D16C: addi    r6, r5, -1
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-1);

label_7F03D170:
    ctx->pc = 0x7F03D170u;
    // 7F03D170: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D174:
    ctx->pc = 0x7F03D174u;
    // 7F03D174: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03D178:
    ctx->pc = 0x7F03D178u;
    // 7F03D178: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03D17C:
    ctx->pc = 0x7F03D17Cu;
    // 7F03D17C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F03D180:
    ctx->pc = 0x7F03D180u;
    // 7F03D180: li      r8, 40
    ctx->gpr[8] = (u32)(s32)(40);

label_7F03D184:
    ctx->pc = 0x7F03D184u;
    // 7F03D184: bl      0x7F040774
    {
            ctx->lr = 0x7F03D188u;
            ctx->pc = 0x7F040774u;
            return;
    }

label_7F03D188:
    ctx->pc = 0x7F03D188u;
    ctx->downcount -= 3;
    // 7F03D188: lwz     r0, 4008(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4008);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03D18C:
    ctx->pc = 0x7F03D18Cu;
    // 7F03D18C: cmpwi   r0, 0
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

label_7F03D190:
    ctx->pc = 0x7F03D190u;
    // 7F03D190: bc    4, 2, 0x7F03D1A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03D1A8;
        }
    }

label_7F03D194:
    ctx->pc = 0x7F03D194u;
    ctx->downcount -= 5;
    // 7F03D194: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03D198:
    ctx->pc = 0x7F03D198u;
    // 7F03D198: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03D19C:
    ctx->pc = 0x7F03D19Cu;
    // 7F03D19C: addi    r4, r4, 22020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22020);

label_7F03D1A0:
    ctx->pc = 0x7F03D1A0u;
    // 7F03D1A0: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D1A4:
    ctx->pc = 0x7F03D1A4u;
    // 7F03D1A4: bl      0x7F041A78
    {
            ctx->lr = 0x7F03D1A8u;
            ctx->pc = 0x7F041A78u;
            return;
    }

label_7F03D1A8:
    ctx->pc = 0x7F03D1A8u;
    ctx->downcount -= 2;
    // 7F03D1A8: cmpwi   r31, 0
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

label_7F03D1AC:
    ctx->pc = 0x7F03D1ACu;
    // 7F03D1AC: bc    12, 2, 0x7F03D1C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03D1C8;
        }
    }

label_7F03D1B0:
    ctx->pc = 0x7F03D1B0u;
    ctx->downcount -= 3;
    // 7F03D1B0: lwz     r0, 4008(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4008);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03D1B4:
    ctx->pc = 0x7F03D1B4u;
    // 7F03D1B4: cmpwi   r0, 7
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

label_7F03D1B8:
    ctx->pc = 0x7F03D1B8u;
    // 7F03D1B8: bc    4, 2, 0x7F03D1C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03D1C8;
        }
    }

label_7F03D1BC:
    ctx->pc = 0x7F03D1BCu;
    ctx->downcount -= 3;
    // 7F03D1BC: addi    r3, r30, 4008
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(4008);

label_7F03D1C0:
    ctx->pc = 0x7F03D1C0u;
    // 7F03D1C0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F03D1C4:
    ctx->pc = 0x7F03D1C4u;
    // 7F03D1C4: bl      0x7F03D978
    {
            ctx->lr = 0x7F03D1C8u;
            goto label_7F03D978;
    }

label_7F03D1C8:
    ctx->pc = 0x7F03D1C8u;
    ctx->downcount -= 3;
    // 7F03D1C8: lwz     r0, 4008(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4008);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03D1CC:
    ctx->pc = 0x7F03D1CCu;
    // 7F03D1CC: cmpwi   r0, 6
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

label_7F03D1D0:
    ctx->pc = 0x7F03D1D0u;
    // 7F03D1D0: bc    4, 2, 0x7F03D1DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03D1DC;
        }
    }

label_7F03D1D4:
    ctx->pc = 0x7F03D1D4u;
    ctx->downcount -= 2;
    // 7F03D1D4: li      r0, 180
    ctx->gpr[0] = (u32)(s32)(180);

label_7F03D1D8:
    ctx->pc = 0x7F03D1D8u;
    // 7F03D1D8: stw     r0, 4012(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4012);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03D1DC:
    ctx->pc = 0x7F03D1DCu;
    ctx->downcount -= 16;
    // 7F03D1DC: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F03D1E0:
    ctx->pc = 0x7F03D1E0u;
    // 7F03D1E0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03D1E4:
    ctx->pc = 0x7F03D1E4u;
    // 7F03D1E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03D1E8:
    ctx->pc = 0x7F03D1E8u;
    // 7F03D1E8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F03D1EC:
    ctx->pc = 0x7F03D1ECu;
    // 7F03D1EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03D1F0:
    ctx->pc = 0x7F03D1F0u;
    ctx->downcount -= 18;
    // 7F03D1F0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03D1F4:
    ctx->pc = 0x7F03D1F4u;
    // 7F03D1F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03D1F8:
    ctx->pc = 0x7F03D1F8u;
    // 7F03D1F8: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F03D1FC:
    ctx->pc = 0x7F03D1FCu;
    // 7F03D1FC: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F03D200:
    ctx->pc = 0x7F03D200u;
    // 7F03D200: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03D204:
    ctx->pc = 0x7F03D204u;
    // 7F03D204: addi    r4, r4, 2904
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2904);

label_7F03D208:
    ctx->pc = 0x7F03D208u;
    // 7F03D208: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F03D20C:
    ctx->pc = 0x7F03D20Cu;
    // 7F03D20C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03D210:
    ctx->pc = 0x7F03D210u;
    // 7F03D210: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D214:
    ctx->pc = 0x7F03D214u;
    // 7F03D214: lwz     r5, 468(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(468);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F03D218:
    ctx->pc = 0x7F03D218u;
    // 7F03D218: mulli   r0, r4, 104
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)104);

label_7F03D21C:
    ctx->pc = 0x7F03D21Cu;
    // 7F03D21C: lwz     r7, 3012(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(3012);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F03D220:
    ctx->pc = 0x7F03D220u;
    // 7F03D220: lwz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F03D224:
    ctx->pc = 0x7F03D224u;
    // 7F03D224: lwzx    r0, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03D228:
    ctx->pc = 0x7F03D228u;
    // 7F03D228: cmpw    r7, r0
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

label_7F03D22C:
    ctx->pc = 0x7F03D22Cu;
    // 7F03D22C: bc    12, 2, 0x7F03D260
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03D260;
        }
    }

label_7F03D230:
    ctx->pc = 0x7F03D230u;
    ctx->downcount -= 7;
    // 7F03D230: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F03D234:
    ctx->pc = 0x7F03D234u;
    // 7F03D234: lis     r6, 256
    ctx->gpr[6] = ((u32)(s32)(256) << 16);

label_7F03D238:
    ctx->pc = 0x7F03D238u;
    // 7F03D238: lfs     f1, -11568(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F03D238u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-11568);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03D23C:
    ctx->pc = 0x7F03D23Cu;
    // 7F03D23C: addi    r6, r6, -1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-1);

label_7F03D240:
    ctx->pc = 0x7F03D240u;
    // 7F03D240: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03D244:
    ctx->pc = 0x7F03D244u;
    // 7F03D244: li      r8, 40
    ctx->gpr[8] = (u32)(s32)(40);

label_7F03D248:
    ctx->pc = 0x7F03D248u;
    // 7F03D248: bl      0x7F040774
    {
            ctx->lr = 0x7F03D24Cu;
            ctx->pc = 0x7F040774u;
            return;
    }

label_7F03D24C:
    ctx->pc = 0x7F03D24Cu;
    ctx->downcount -= 5;
    // 7F03D24C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F03D250:
    ctx->pc = 0x7F03D250u;
    // 7F03D250: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03D254:
    ctx->pc = 0x7F03D254u;
    // 7F03D254: addi    r4, r4, 2904
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2904);

label_7F03D258:
    ctx->pc = 0x7F03D258u;
    // 7F03D258: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D25C:
    ctx->pc = 0x7F03D25Cu;
    // 7F03D25C: bl      0x7F041A78
    {
            ctx->lr = 0x7F03D260u;
            ctx->pc = 0x7F041A78u;
            return;
    }

label_7F03D260:
    ctx->pc = 0x7F03D260u;
    ctx->downcount -= 5;
    // 7F03D260: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03D264:
    ctx->pc = 0x7F03D264u;
    // 7F03D264: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03D268:
    ctx->pc = 0x7F03D268u;
    // 7F03D268: addi    r4, r4, 22020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22020);

label_7F03D26C:
    ctx->pc = 0x7F03D26Cu;
    // 7F03D26C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D270:
    ctx->pc = 0x7F03D270u;
    // 7F03D270: bl      0x7F041A38
    {
            ctx->lr = 0x7F03D274u;
            ctx->pc = 0x7F041A38u;
            return;
    }

label_7F03D274:
    ctx->pc = 0x7F03D274u;
    ctx->downcount -= 6;
    // 7F03D274: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03D278:
    ctx->pc = 0x7F03D278u;
    // 7F03D278: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F03D27C:
    ctx->pc = 0x7F03D27Cu;
    // 7F03D27C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03D280:
    ctx->pc = 0x7F03D280u;
    // 7F03D280: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03D284:
    ctx->pc = 0x7F03D284u;
    // 7F03D284: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03D288:
    ctx->pc = 0x7F03D288u;
    ctx->downcount -= 4;
    // 7F03D288: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03D28C:
    ctx->pc = 0x7F03D28Cu;
    // 7F03D28C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03D290:
    ctx->pc = 0x7F03D290u;
    // 7F03D290: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03D294:
    ctx->pc = 0x7F03D294u;
    // 7F03D294: bl      0x7F03D33C
    {
            ctx->lr = 0x7F03D298u;
            goto label_7F03D33C;
    }

label_7F03D298:
    ctx->pc = 0x7F03D298u;
    ctx->downcount -= 5;
    // 7F03D298: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03D29C:
    ctx->pc = 0x7F03D29Cu;
    // 7F03D29C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03D2A0:
    ctx->pc = 0x7F03D2A0u;
    // 7F03D2A0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03D2A4:
    ctx->pc = 0x7F03D2A4u;
    // 7F03D2A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03D2A8:
    ctx->pc = 0x7F03D2A8u;
    ctx->downcount -= 16;
    // 7F03D2A8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03D2AC:
    ctx->pc = 0x7F03D2ACu;
    // 7F03D2AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03D2B0:
    ctx->pc = 0x7F03D2B0u;
    // 7F03D2B0: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F03D2B4:
    ctx->pc = 0x7F03D2B4u;
    // 7F03D2B4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03D2B8:
    ctx->pc = 0x7F03D2B8u;
    // 7F03D2B8: addi    r4, r4, 2904
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2904);

label_7F03D2BC:
    ctx->pc = 0x7F03D2BCu;
    // 7F03D2BC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F03D2C0:
    ctx->pc = 0x7F03D2C0u;
    // 7F03D2C0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03D2C4:
    ctx->pc = 0x7F03D2C4u;
    // 7F03D2C4: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D2C8:
    ctx->pc = 0x7F03D2C8u;
    // 7F03D2C8: lwz     r5, 468(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(468);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F03D2CC:
    ctx->pc = 0x7F03D2CCu;
    // 7F03D2CC: mulli   r0, r4, 104
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)104);

label_7F03D2D0:
    ctx->pc = 0x7F03D2D0u;
    // 7F03D2D0: lwz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F03D2D4:
    ctx->pc = 0x7F03D2D4u;
    // 7F03D2D4: lwzx    r0, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03D2D8:
    ctx->pc = 0x7F03D2D8u;
    // 7F03D2D8: cmpwi   r0, 15
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(15);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03D2DC:
    ctx->pc = 0x7F03D2DCu;
    // 7F03D2DC: bc    12, 2, 0x7F03D314
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03D314;
        }
    }

label_7F03D2E0:
    ctx->pc = 0x7F03D2E0u;
    ctx->downcount -= 8;
    // 7F03D2E0: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F03D2E4:
    ctx->pc = 0x7F03D2E4u;
    // 7F03D2E4: lis     r6, 256
    ctx->gpr[6] = ((u32)(s32)(256) << 16);

label_7F03D2E8:
    ctx->pc = 0x7F03D2E8u;
    // 7F03D2E8: lfs     f1, -11568(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F03D2E8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-11568);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03D2EC:
    ctx->pc = 0x7F03D2ECu;
    // 7F03D2EC: addi    r6, r6, -1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-1);

label_7F03D2F0:
    ctx->pc = 0x7F03D2F0u;
    // 7F03D2F0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03D2F4:
    ctx->pc = 0x7F03D2F4u;
    // 7F03D2F4: li      r7, 15
    ctx->gpr[7] = (u32)(s32)(15);

label_7F03D2F8:
    ctx->pc = 0x7F03D2F8u;
    // 7F03D2F8: li      r8, 40
    ctx->gpr[8] = (u32)(s32)(40);

label_7F03D2FC:
    ctx->pc = 0x7F03D2FCu;
    // 7F03D2FC: bl      0x7F040774
    {
            ctx->lr = 0x7F03D300u;
            ctx->pc = 0x7F040774u;
            return;
    }

label_7F03D300:
    ctx->pc = 0x7F03D300u;
    ctx->downcount -= 5;
    // 7F03D300: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F03D304:
    ctx->pc = 0x7F03D304u;
    // 7F03D304: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03D308:
    ctx->pc = 0x7F03D308u;
    // 7F03D308: addi    r4, r4, 2904
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2904);

label_7F03D30C:
    ctx->pc = 0x7F03D30Cu;
    // 7F03D30C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D310:
    ctx->pc = 0x7F03D310u;
    // 7F03D310: bl      0x7F041A78
    {
            ctx->lr = 0x7F03D314u;
            ctx->pc = 0x7F041A78u;
            return;
    }

label_7F03D314:
    ctx->pc = 0x7F03D314u;
    ctx->downcount -= 5;
    // 7F03D314: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03D318:
    ctx->pc = 0x7F03D318u;
    // 7F03D318: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03D31C:
    ctx->pc = 0x7F03D31Cu;
    // 7F03D31C: addi    r4, r4, 22020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22020);

label_7F03D320:
    ctx->pc = 0x7F03D320u;
    // 7F03D320: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D324:
    ctx->pc = 0x7F03D324u;
    // 7F03D324: bl      0x7F041A38
    {
            ctx->lr = 0x7F03D328u;
            ctx->pc = 0x7F041A38u;
            return;
    }

label_7F03D328:
    ctx->pc = 0x7F03D328u;
    ctx->downcount -= 6;
    // 7F03D328: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03D32C:
    ctx->pc = 0x7F03D32Cu;
    // 7F03D32C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F03D330:
    ctx->pc = 0x7F03D330u;
    // 7F03D330: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03D334:
    ctx->pc = 0x7F03D334u;
    // 7F03D334: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03D338:
    ctx->pc = 0x7F03D338u;
    // 7F03D338: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03D33C:
    ctx->pc = 0x7F03D33Cu;
    ctx->downcount -= 8;
    // 7F03D33C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03D340:
    ctx->pc = 0x7F03D340u;
    // 7F03D340: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03D344:
    ctx->pc = 0x7F03D344u;
    // 7F03D344: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03D348:
    ctx->pc = 0x7F03D348u;
    // 7F03D348: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F03D34C:
    ctx->pc = 0x7F03D34Cu;
    // 7F03D34C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03D350:
    ctx->pc = 0x7F03D350u;
    // 7F03D350: lwz     r0, 3836(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3836);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03D354:
    ctx->pc = 0x7F03D354u;
    // 7F03D354: cmpwi   r0, 0
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

label_7F03D358:
    ctx->pc = 0x7F03D358u;
    // 7F03D358: bc    12, 2, 0x7F03D3A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03D3A4;
        }
    }

label_7F03D35C:
    ctx->pc = 0x7F03D35Cu;
    ctx->downcount -= 12;
    // 7F03D35C: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F03D360:
    ctx->pc = 0x7F03D360u;
    // 7F03D360: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F03D364:
    ctx->pc = 0x7F03D364u;
    // 7F03D364: addi    r7, r5, 2904
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(2904);

label_7F03D368:
    ctx->pc = 0x7F03D368u;
    // 7F03D368: lis     r6, 256
    ctx->gpr[6] = ((u32)(s32)(256) << 16);

label_7F03D36C:
    ctx->pc = 0x7F03D36Cu;
    // 7F03D36C: addi    r5, r4, -11568
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-11568);

label_7F03D370:
    ctx->pc = 0x7F03D370u;
    // 7F03D370: lwz     r4, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D374:
    ctx->pc = 0x7F03D374u;
    // 7F03D374: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F03D374u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03D378:
    ctx->pc = 0x7F03D378u;
    // 7F03D378: addi    r6, r6, -8191
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-8191);

label_7F03D37C:
    ctx->pc = 0x7F03D37Cu;
    // 7F03D37C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03D380:
    ctx->pc = 0x7F03D380u;
    // 7F03D380: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_7F03D384:
    ctx->pc = 0x7F03D384u;
    // 7F03D384: li      r8, 40
    ctx->gpr[8] = (u32)(s32)(40);

label_7F03D388:
    ctx->pc = 0x7F03D388u;
    // 7F03D388: bl      0x7F040774
    {
            ctx->lr = 0x7F03D38Cu;
            ctx->pc = 0x7F040774u;
            return;
    }

label_7F03D38C:
    ctx->pc = 0x7F03D38Cu;
    ctx->downcount -= 5;
    // 7F03D38C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F03D390:
    ctx->pc = 0x7F03D390u;
    // 7F03D390: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03D394:
    ctx->pc = 0x7F03D394u;
    // 7F03D394: addi    r4, r4, 2904
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2904);

label_7F03D398:
    ctx->pc = 0x7F03D398u;
    // 7F03D398: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D39C:
    ctx->pc = 0x7F03D39Cu;
    // 7F03D39C: bl      0x7F041A78
    {
            ctx->lr = 0x7F03D3A0u;
            ctx->pc = 0x7F041A78u;
            return;
    }

label_7F03D3A0:
    ctx->pc = 0x7F03D3A0u;
    ctx->downcount -= 1;
    // 7F03D3A0: b       0x7F03D3D0
    {
            goto label_7F03D3D0;
    }

label_7F03D3A4:
    ctx->pc = 0x7F03D3A4u;
    ctx->downcount -= 11;
    // 7F03D3A4: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F03D3A8:
    ctx->pc = 0x7F03D3A8u;
    // 7F03D3A8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F03D3AC:
    ctx->pc = 0x7F03D3ACu;
    // 7F03D3AC: addi    r7, r5, 2904
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(2904);

label_7F03D3B0:
    ctx->pc = 0x7F03D3B0u;
    // 7F03D3B0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F03D3B4:
    ctx->pc = 0x7F03D3B4u;
    // 7F03D3B4: addi    r5, r4, -11568
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-11568);

label_7F03D3B8:
    ctx->pc = 0x7F03D3B8u;
    // 7F03D3B8: lwz     r4, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D3BC:
    ctx->pc = 0x7F03D3BCu;
    // 7F03D3BC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F03D3BCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03D3C0:
    ctx->pc = 0x7F03D3C0u;
    // 7F03D3C0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03D3C4:
    ctx->pc = 0x7F03D3C4u;
    // 7F03D3C4: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_7F03D3C8:
    ctx->pc = 0x7F03D3C8u;
    // 7F03D3C8: li      r8, 40
    ctx->gpr[8] = (u32)(s32)(40);

label_7F03D3CC:
    ctx->pc = 0x7F03D3CCu;
    // 7F03D3CC: bl      0x7F040774
    {
            ctx->lr = 0x7F03D3D0u;
            ctx->pc = 0x7F040774u;
            return;
    }

label_7F03D3D0:
    ctx->pc = 0x7F03D3D0u;
    ctx->downcount -= 3;
    // 7F03D3D0: lwz     r0, 3828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3828);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03D3D4:
    ctx->pc = 0x7F03D3D4u;
    // 7F03D3D4: cmpwi   r0, 0
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

label_7F03D3D8:
    ctx->pc = 0x7F03D3D8u;
    // 7F03D3D8: bc    12, 2, 0x7F03D414
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03D414;
        }
    }

label_7F03D3DC:
    ctx->pc = 0x7F03D3DCu;
    ctx->downcount -= 5;
    // 7F03D3DC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03D3E0:
    ctx->pc = 0x7F03D3E0u;
    // 7F03D3E0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03D3E4:
    ctx->pc = 0x7F03D3E4u;
    // 7F03D3E4: addi    r4, r4, 22020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22020);

label_7F03D3E8:
    ctx->pc = 0x7F03D3E8u;
    // 7F03D3E8: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D3EC:
    ctx->pc = 0x7F03D3ECu;
    // 7F03D3EC: bl      0x7F041A58
    {
            ctx->lr = 0x7F03D3F0u;
            ctx->pc = 0x7F041A58u;
            return;
    }

label_7F03D3F0:
    ctx->pc = 0x7F03D3F0u;
    ctx->downcount -= 3;
    // 7F03D3F0: lwz     r0, 3836(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3836);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03D3F4:
    ctx->pc = 0x7F03D3F4u;
    // 7F03D3F4: cmpwi   r0, 0
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

label_7F03D3F8:
    ctx->pc = 0x7F03D3F8u;
    // 7F03D3F8: bc    4, 2, 0x7F03D464
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03D464;
        }
    }

label_7F03D3FC:
    ctx->pc = 0x7F03D3FCu;
    ctx->downcount -= 5;
    // 7F03D3FC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03D400:
    ctx->pc = 0x7F03D400u;
    // 7F03D400: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03D404:
    ctx->pc = 0x7F03D404u;
    // 7F03D404: addi    r4, r4, 22020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22020);

label_7F03D408:
    ctx->pc = 0x7F03D408u;
    // 7F03D408: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D40C:
    ctx->pc = 0x7F03D40Cu;
    // 7F03D40C: bl      0x7F041A78
    {
            ctx->lr = 0x7F03D410u;
            ctx->pc = 0x7F041A78u;
            return;
    }

label_7F03D410:
    ctx->pc = 0x7F03D410u;
    ctx->downcount -= 1;
    // 7F03D410: b       0x7F03D464
    {
            goto label_7F03D464;
    }

label_7F03D414:
    ctx->pc = 0x7F03D414u;
    ctx->downcount -= 12;
    // 7F03D414: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03D418:
    ctx->pc = 0x7F03D418u;
    // 7F03D418: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F03D41C:
    ctx->pc = 0x7F03D41Cu;
    // 7F03D41C: addi    r4, r4, 22020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22020);

label_7F03D420:
    ctx->pc = 0x7F03D420u;
    // 7F03D420: lis     r5, 256
    ctx->gpr[5] = ((u32)(s32)(256) << 16);

label_7F03D424:
    ctx->pc = 0x7F03D424u;
    // 7F03D424: lfs     f1, -11568(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F03D424u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-11568);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03D428:
    ctx->pc = 0x7F03D428u;
    // 7F03D428: addi    r6, r5, -1
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-1);

label_7F03D42C:
    ctx->pc = 0x7F03D42Cu;
    // 7F03D42C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D430:
    ctx->pc = 0x7F03D430u;
    // 7F03D430: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03D434:
    ctx->pc = 0x7F03D434u;
    // 7F03D434: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03D438:
    ctx->pc = 0x7F03D438u;
    // 7F03D438: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F03D43C:
    ctx->pc = 0x7F03D43Cu;
    // 7F03D43C: li      r8, 40
    ctx->gpr[8] = (u32)(s32)(40);

label_7F03D440:
    ctx->pc = 0x7F03D440u;
    // 7F03D440: bl      0x7F040774
    {
            ctx->lr = 0x7F03D444u;
            ctx->pc = 0x7F040774u;
            return;
    }

label_7F03D444:
    ctx->pc = 0x7F03D444u;
    ctx->downcount -= 3;
    // 7F03D444: lwz     r0, 3836(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3836);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03D448:
    ctx->pc = 0x7F03D448u;
    // 7F03D448: cmpwi   r0, 0
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

label_7F03D44C:
    ctx->pc = 0x7F03D44Cu;
    // 7F03D44C: bc    4, 2, 0x7F03D464
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03D464;
        }
    }

label_7F03D450:
    ctx->pc = 0x7F03D450u;
    ctx->downcount -= 5;
    // 7F03D450: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03D454:
    ctx->pc = 0x7F03D454u;
    // 7F03D454: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03D458:
    ctx->pc = 0x7F03D458u;
    // 7F03D458: addi    r4, r4, 22020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22020);

label_7F03D45C:
    ctx->pc = 0x7F03D45Cu;
    // 7F03D45C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D460:
    ctx->pc = 0x7F03D460u;
    // 7F03D460: bl      0x7F041A78
    {
            ctx->lr = 0x7F03D464u;
            ctx->pc = 0x7F041A78u;
            return;
    }

label_7F03D464:
    ctx->pc = 0x7F03D464u;
    ctx->downcount -= 3;
    // 7F03D464: lwz     r0, 4008(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4008);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03D468:
    ctx->pc = 0x7F03D468u;
    // 7F03D468: cmpwi   r0, 6
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

label_7F03D46C:
    ctx->pc = 0x7F03D46Cu;
    // 7F03D46C: bc    4, 2, 0x7F03D478
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03D478;
        }
    }

label_7F03D470:
    ctx->pc = 0x7F03D470u;
    ctx->downcount -= 2;
    // 7F03D470: li      r0, 180
    ctx->gpr[0] = (u32)(s32)(180);

label_7F03D474:
    ctx->pc = 0x7F03D474u;
    // 7F03D474: stw     r0, 4012(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4012);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03D478:
    ctx->pc = 0x7F03D478u;
    ctx->downcount -= 6;
    // 7F03D478: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03D47C:
    ctx->pc = 0x7F03D47Cu;
    // 7F03D47C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F03D480:
    ctx->pc = 0x7F03D480u;
    // 7F03D480: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03D484:
    ctx->pc = 0x7F03D484u;
    // 7F03D484: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03D488:
    ctx->pc = 0x7F03D488u;
    // 7F03D488: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03D48C:
    ctx->pc = 0x7F03D48Cu;
    ctx->downcount -= 16;
    // 7F03D48C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03D490:
    ctx->pc = 0x7F03D490u;
    // 7F03D490: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03D494:
    ctx->pc = 0x7F03D494u;
    // 7F03D494: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F03D498:
    ctx->pc = 0x7F03D498u;
    // 7F03D498: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03D49C:
    ctx->pc = 0x7F03D49Cu;
    // 7F03D49C: addi    r4, r4, 2904
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2904);

label_7F03D4A0:
    ctx->pc = 0x7F03D4A0u;
    // 7F03D4A0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F03D4A4:
    ctx->pc = 0x7F03D4A4u;
    // 7F03D4A4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03D4A8:
    ctx->pc = 0x7F03D4A8u;
    // 7F03D4A8: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D4AC:
    ctx->pc = 0x7F03D4ACu;
    // 7F03D4AC: lwz     r5, 468(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(468);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F03D4B0:
    ctx->pc = 0x7F03D4B0u;
    // 7F03D4B0: mulli   r0, r4, 104
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)104);

label_7F03D4B4:
    ctx->pc = 0x7F03D4B4u;
    // 7F03D4B4: lwz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F03D4B8:
    ctx->pc = 0x7F03D4B8u;
    // 7F03D4B8: lwzx    r0, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03D4BC:
    ctx->pc = 0x7F03D4BCu;
    // 7F03D4BC: cmpwi   r0, 13
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(13);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03D4C0:
    ctx->pc = 0x7F03D4C0u;
    // 7F03D4C0: bc    12, 2, 0x7F03D4F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03D4F8;
        }
    }

label_7F03D4C4:
    ctx->pc = 0x7F03D4C4u;
    ctx->downcount -= 8;
    // 7F03D4C4: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F03D4C8:
    ctx->pc = 0x7F03D4C8u;
    // 7F03D4C8: lis     r6, 256
    ctx->gpr[6] = ((u32)(s32)(256) << 16);

label_7F03D4CC:
    ctx->pc = 0x7F03D4CCu;
    // 7F03D4CC: lfs     f1, -11568(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F03D4CCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-11568);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03D4D0:
    ctx->pc = 0x7F03D4D0u;
    // 7F03D4D0: addi    r6, r6, -1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-1);

label_7F03D4D4:
    ctx->pc = 0x7F03D4D4u;
    // 7F03D4D4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03D4D8:
    ctx->pc = 0x7F03D4D8u;
    // 7F03D4D8: li      r7, 13
    ctx->gpr[7] = (u32)(s32)(13);

label_7F03D4DC:
    ctx->pc = 0x7F03D4DCu;
    // 7F03D4DC: li      r8, 40
    ctx->gpr[8] = (u32)(s32)(40);

label_7F03D4E0:
    ctx->pc = 0x7F03D4E0u;
    // 7F03D4E0: bl      0x7F040774
    {
            ctx->lr = 0x7F03D4E4u;
            ctx->pc = 0x7F040774u;
            return;
    }

label_7F03D4E4:
    ctx->pc = 0x7F03D4E4u;
    ctx->downcount -= 5;
    // 7F03D4E4: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F03D4E8:
    ctx->pc = 0x7F03D4E8u;
    // 7F03D4E8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03D4EC:
    ctx->pc = 0x7F03D4ECu;
    // 7F03D4EC: addi    r4, r4, 2904
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2904);

label_7F03D4F0:
    ctx->pc = 0x7F03D4F0u;
    // 7F03D4F0: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D4F4:
    ctx->pc = 0x7F03D4F4u;
    // 7F03D4F4: bl      0x7F041A78
    {
            ctx->lr = 0x7F03D4F8u;
            ctx->pc = 0x7F041A78u;
            return;
    }

label_7F03D4F8:
    ctx->pc = 0x7F03D4F8u;
    ctx->downcount -= 5;
    // 7F03D4F8: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03D4FC:
    ctx->pc = 0x7F03D4FCu;
    // 7F03D4FC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03D500:
    ctx->pc = 0x7F03D500u;
    // 7F03D500: addi    r4, r4, 22020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22020);

label_7F03D504:
    ctx->pc = 0x7F03D504u;
    // 7F03D504: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D508:
    ctx->pc = 0x7F03D508u;
    // 7F03D508: bl      0x7F041A38
    {
            ctx->lr = 0x7F03D50Cu;
            ctx->pc = 0x7F041A38u;
            return;
    }

label_7F03D50C:
    ctx->pc = 0x7F03D50Cu;
    ctx->downcount -= 6;
    // 7F03D50C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03D510:
    ctx->pc = 0x7F03D510u;
    // 7F03D510: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F03D514:
    ctx->pc = 0x7F03D514u;
    // 7F03D514: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03D518:
    ctx->pc = 0x7F03D518u;
    // 7F03D518: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03D51C:
    ctx->pc = 0x7F03D51Cu;
    // 7F03D51C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03D520:
    ctx->pc = 0x7F03D520u;
    ctx->downcount -= 8;
    // 7F03D520: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03D524:
    ctx->pc = 0x7F03D524u;
    // 7F03D524: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03D528:
    ctx->pc = 0x7F03D528u;
    // 7F03D528: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03D52C:
    ctx->pc = 0x7F03D52Cu;
    // 7F03D52C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F03D530:
    ctx->pc = 0x7F03D530u;
    // 7F03D530: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03D534:
    ctx->pc = 0x7F03D534u;
    // 7F03D534: lwz     r0, 3836(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3836);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03D538:
    ctx->pc = 0x7F03D538u;
    // 7F03D538: cmpwi   r0, 0
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

label_7F03D53C:
    ctx->pc = 0x7F03D53Cu;
    // 7F03D53C: bc    12, 2, 0x7F03D588
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03D588;
        }
    }

label_7F03D540:
    ctx->pc = 0x7F03D540u;
    ctx->downcount -= 12;
    // 7F03D540: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F03D544:
    ctx->pc = 0x7F03D544u;
    // 7F03D544: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F03D548:
    ctx->pc = 0x7F03D548u;
    // 7F03D548: addi    r7, r5, 2904
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(2904);

label_7F03D54C:
    ctx->pc = 0x7F03D54Cu;
    // 7F03D54C: lis     r6, 256
    ctx->gpr[6] = ((u32)(s32)(256) << 16);

label_7F03D550:
    ctx->pc = 0x7F03D550u;
    // 7F03D550: addi    r5, r4, -11568
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-11568);

label_7F03D554:
    ctx->pc = 0x7F03D554u;
    // 7F03D554: lwz     r4, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D558:
    ctx->pc = 0x7F03D558u;
    // 7F03D558: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F03D558u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03D55C:
    ctx->pc = 0x7F03D55Cu;
    // 7F03D55C: addi    r6, r6, -8191
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-8191);

label_7F03D560:
    ctx->pc = 0x7F03D560u;
    // 7F03D560: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03D564:
    ctx->pc = 0x7F03D564u;
    // 7F03D564: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_7F03D568:
    ctx->pc = 0x7F03D568u;
    // 7F03D568: li      r8, 40
    ctx->gpr[8] = (u32)(s32)(40);

label_7F03D56C:
    ctx->pc = 0x7F03D56Cu;
    // 7F03D56C: bl      0x7F040774
    {
            ctx->lr = 0x7F03D570u;
            ctx->pc = 0x7F040774u;
            return;
    }

label_7F03D570:
    ctx->pc = 0x7F03D570u;
    ctx->downcount -= 5;
    // 7F03D570: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F03D574:
    ctx->pc = 0x7F03D574u;
    // 7F03D574: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03D578:
    ctx->pc = 0x7F03D578u;
    // 7F03D578: addi    r4, r4, 2904
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2904);

label_7F03D57C:
    ctx->pc = 0x7F03D57Cu;
    // 7F03D57C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D580:
    ctx->pc = 0x7F03D580u;
    // 7F03D580: bl      0x7F041A78
    {
            ctx->lr = 0x7F03D584u;
            ctx->pc = 0x7F041A78u;
            return;
    }

label_7F03D584:
    ctx->pc = 0x7F03D584u;
    ctx->downcount -= 1;
    // 7F03D584: b       0x7F03D5B4
    {
            goto label_7F03D5B4;
    }

label_7F03D588:
    ctx->pc = 0x7F03D588u;
    ctx->downcount -= 11;
    // 7F03D588: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F03D58C:
    ctx->pc = 0x7F03D58Cu;
    // 7F03D58C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F03D590:
    ctx->pc = 0x7F03D590u;
    // 7F03D590: addi    r7, r5, 2904
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(2904);

label_7F03D594:
    ctx->pc = 0x7F03D594u;
    // 7F03D594: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F03D598:
    ctx->pc = 0x7F03D598u;
    // 7F03D598: addi    r5, r4, -11568
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-11568);

label_7F03D59C:
    ctx->pc = 0x7F03D59Cu;
    // 7F03D59C: lwz     r4, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D5A0:
    ctx->pc = 0x7F03D5A0u;
    // 7F03D5A0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F03D5A0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03D5A4:
    ctx->pc = 0x7F03D5A4u;
    // 7F03D5A4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03D5A8:
    ctx->pc = 0x7F03D5A8u;
    // 7F03D5A8: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_7F03D5AC:
    ctx->pc = 0x7F03D5ACu;
    // 7F03D5AC: li      r8, 40
    ctx->gpr[8] = (u32)(s32)(40);

label_7F03D5B0:
    ctx->pc = 0x7F03D5B0u;
    // 7F03D5B0: bl      0x7F040774
    {
            ctx->lr = 0x7F03D5B4u;
            ctx->pc = 0x7F040774u;
            return;
    }

label_7F03D5B4:
    ctx->pc = 0x7F03D5B4u;
    ctx->downcount -= 3;
    // 7F03D5B4: lwz     r0, 3828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3828);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03D5B8:
    ctx->pc = 0x7F03D5B8u;
    // 7F03D5B8: cmpwi   r0, 0
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

label_7F03D5BC:
    ctx->pc = 0x7F03D5BCu;
    // 7F03D5BC: bc    12, 2, 0x7F03D5F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03D5F8;
        }
    }

label_7F03D5C0:
    ctx->pc = 0x7F03D5C0u;
    ctx->downcount -= 5;
    // 7F03D5C0: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03D5C4:
    ctx->pc = 0x7F03D5C4u;
    // 7F03D5C4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03D5C8:
    ctx->pc = 0x7F03D5C8u;
    // 7F03D5C8: addi    r4, r4, 22020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22020);

label_7F03D5CC:
    ctx->pc = 0x7F03D5CCu;
    // 7F03D5CC: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D5D0:
    ctx->pc = 0x7F03D5D0u;
    // 7F03D5D0: bl      0x7F041A58
    {
            ctx->lr = 0x7F03D5D4u;
            ctx->pc = 0x7F041A58u;
            return;
    }

label_7F03D5D4:
    ctx->pc = 0x7F03D5D4u;
    ctx->downcount -= 3;
    // 7F03D5D4: lwz     r0, 3836(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3836);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03D5D8:
    ctx->pc = 0x7F03D5D8u;
    // 7F03D5D8: cmpwi   r0, 0
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

label_7F03D5DC:
    ctx->pc = 0x7F03D5DCu;
    // 7F03D5DC: bc    4, 2, 0x7F03D648
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03D648;
        }
    }

label_7F03D5E0:
    ctx->pc = 0x7F03D5E0u;
    ctx->downcount -= 5;
    // 7F03D5E0: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03D5E4:
    ctx->pc = 0x7F03D5E4u;
    // 7F03D5E4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03D5E8:
    ctx->pc = 0x7F03D5E8u;
    // 7F03D5E8: addi    r4, r4, 22020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22020);

label_7F03D5EC:
    ctx->pc = 0x7F03D5ECu;
    // 7F03D5EC: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D5F0:
    ctx->pc = 0x7F03D5F0u;
    // 7F03D5F0: bl      0x7F041A78
    {
            ctx->lr = 0x7F03D5F4u;
            ctx->pc = 0x7F041A78u;
            return;
    }

label_7F03D5F4:
    ctx->pc = 0x7F03D5F4u;
    ctx->downcount -= 1;
    // 7F03D5F4: b       0x7F03D648
    {
            goto label_7F03D648;
    }

label_7F03D5F8:
    ctx->pc = 0x7F03D5F8u;
    ctx->downcount -= 12;
    // 7F03D5F8: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03D5FC:
    ctx->pc = 0x7F03D5FCu;
    // 7F03D5FC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F03D600:
    ctx->pc = 0x7F03D600u;
    // 7F03D600: addi    r4, r4, 22020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22020);

label_7F03D604:
    ctx->pc = 0x7F03D604u;
    // 7F03D604: lis     r5, 256
    ctx->gpr[5] = ((u32)(s32)(256) << 16);

label_7F03D608:
    ctx->pc = 0x7F03D608u;
    // 7F03D608: lfs     f1, -11568(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F03D608u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-11568);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03D60C:
    ctx->pc = 0x7F03D60Cu;
    // 7F03D60C: addi    r6, r5, -1
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-1);

label_7F03D610:
    ctx->pc = 0x7F03D610u;
    // 7F03D610: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D614:
    ctx->pc = 0x7F03D614u;
    // 7F03D614: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03D618:
    ctx->pc = 0x7F03D618u;
    // 7F03D618: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03D61C:
    ctx->pc = 0x7F03D61Cu;
    // 7F03D61C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F03D620:
    ctx->pc = 0x7F03D620u;
    // 7F03D620: li      r8, 40
    ctx->gpr[8] = (u32)(s32)(40);

label_7F03D624:
    ctx->pc = 0x7F03D624u;
    // 7F03D624: bl      0x7F040774
    {
            ctx->lr = 0x7F03D628u;
            ctx->pc = 0x7F040774u;
            return;
    }

label_7F03D628:
    ctx->pc = 0x7F03D628u;
    ctx->downcount -= 3;
    // 7F03D628: lwz     r0, 3836(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3836);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03D62C:
    ctx->pc = 0x7F03D62Cu;
    // 7F03D62C: cmpwi   r0, 0
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

label_7F03D630:
    ctx->pc = 0x7F03D630u;
    // 7F03D630: bc    4, 2, 0x7F03D648
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03D648;
        }
    }

label_7F03D634:
    ctx->pc = 0x7F03D634u;
    ctx->downcount -= 5;
    // 7F03D634: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03D638:
    ctx->pc = 0x7F03D638u;
    // 7F03D638: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03D63C:
    ctx->pc = 0x7F03D63Cu;
    // 7F03D63C: addi    r4, r4, 22020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22020);

label_7F03D640:
    ctx->pc = 0x7F03D640u;
    // 7F03D640: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D644:
    ctx->pc = 0x7F03D644u;
    // 7F03D644: bl      0x7F041A78
    {
            ctx->lr = 0x7F03D648u;
            ctx->pc = 0x7F041A78u;
            return;
    }

label_7F03D648:
    ctx->pc = 0x7F03D648u;
    ctx->downcount -= 6;
    // 7F03D648: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03D64C:
    ctx->pc = 0x7F03D64Cu;
    // 7F03D64C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F03D650:
    ctx->pc = 0x7F03D650u;
    // 7F03D650: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03D654:
    ctx->pc = 0x7F03D654u;
    // 7F03D654: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03D658:
    ctx->pc = 0x7F03D658u;
    // 7F03D658: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03D65C:
    ctx->pc = 0x7F03D65Cu;
    ctx->downcount -= 17;
    // 7F03D65C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03D660:
    ctx->pc = 0x7F03D660u;
    // 7F03D660: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03D664:
    ctx->pc = 0x7F03D664u;
    // 7F03D664: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F03D668:
    ctx->pc = 0x7F03D668u;
    // 7F03D668: lis     r6, 256
    ctx->gpr[6] = ((u32)(s32)(256) << 16);

label_7F03D66C:
    ctx->pc = 0x7F03D66Cu;
    // 7F03D66C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03D670:
    ctx->pc = 0x7F03D670u;
    // 7F03D670: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F03D674:
    ctx->pc = 0x7F03D674u;
    // 7F03D674: addi    r7, r5, 22020
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(22020);

label_7F03D678:
    ctx->pc = 0x7F03D678u;
    // 7F03D678: addi    r6, r6, -1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-1);

label_7F03D67C:
    ctx->pc = 0x7F03D67Cu;
    // 7F03D67C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F03D680:
    ctx->pc = 0x7F03D680u;
    // 7F03D680: addi    r5, r4, -11568
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-11568);

label_7F03D684:
    ctx->pc = 0x7F03D684u;
    // 7F03D684: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F03D684u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03D688:
    ctx->pc = 0x7F03D688u;
    // 7F03D688: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03D68C:
    ctx->pc = 0x7F03D68Cu;
    // 7F03D68C: lwz     r4, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D690:
    ctx->pc = 0x7F03D690u;
    // 7F03D690: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03D694:
    ctx->pc = 0x7F03D694u;
    // 7F03D694: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F03D698:
    ctx->pc = 0x7F03D698u;
    // 7F03D698: li      r8, 40
    ctx->gpr[8] = (u32)(s32)(40);

label_7F03D69C:
    ctx->pc = 0x7F03D69Cu;
    // 7F03D69C: bl      0x7F040774
    {
            ctx->lr = 0x7F03D6A0u;
            ctx->pc = 0x7F040774u;
            return;
    }

label_7F03D6A0:
    ctx->pc = 0x7F03D6A0u;
    ctx->downcount -= 5;
    // 7F03D6A0: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03D6A4:
    ctx->pc = 0x7F03D6A4u;
    // 7F03D6A4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03D6A8:
    ctx->pc = 0x7F03D6A8u;
    // 7F03D6A8: addi    r4, r4, 22020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22020);

label_7F03D6AC:
    ctx->pc = 0x7F03D6ACu;
    // 7F03D6AC: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D6B0:
    ctx->pc = 0x7F03D6B0u;
    // 7F03D6B0: bl      0x7F041A78
    {
            ctx->lr = 0x7F03D6B4u;
            ctx->pc = 0x7F041A78u;
            return;
    }

label_7F03D6B4:
    ctx->pc = 0x7F03D6B4u;
    ctx->downcount -= 6;
    // 7F03D6B4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03D6B8:
    ctx->pc = 0x7F03D6B8u;
    // 7F03D6B8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F03D6BC:
    ctx->pc = 0x7F03D6BCu;
    // 7F03D6BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03D6C0:
    ctx->pc = 0x7F03D6C0u;
    // 7F03D6C0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03D6C4:
    ctx->pc = 0x7F03D6C4u;
    // 7F03D6C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03D6C8:
    ctx->pc = 0x7F03D6C8u;
    ctx->downcount -= 23;
    // 7F03D6C8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03D6CC:
    ctx->pc = 0x7F03D6CCu;
    // 7F03D6CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03D6D0:
    ctx->pc = 0x7F03D6D0u;
    // 7F03D6D0: lis     r6, 32586
    ctx->gpr[6] = ((u32)(s32)(32586) << 16);

label_7F03D6D4:
    ctx->pc = 0x7F03D6D4u;
    // 7F03D6D4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F03D6D8:
    ctx->pc = 0x7F03D6D8u;
    // 7F03D6D8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03D6DC:
    ctx->pc = 0x7F03D6DCu;
    // 7F03D6DC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F03D6E0:
    ctx->pc = 0x7F03D6E0u;
    // 7F03D6E0: addi    r9, r6, 22020
    ctx->gpr[9] = ctx->gpr[6] + (u32)(s32)(22020);

label_7F03D6E4:
    ctx->pc = 0x7F03D6E4u;
    // 7F03D6E4: lis     r5, 256
    ctx->gpr[5] = ((u32)(s32)(256) << 16);

label_7F03D6E8:
    ctx->pc = 0x7F03D6E8u;
    // 7F03D6E8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F03D6EC:
    ctx->pc = 0x7F03D6ECu;
    // 7F03D6EC: addi    r6, r5, -1
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-1);

label_7F03D6F0:
    ctx->pc = 0x7F03D6F0u;
    // 7F03D6F0: lfs     f1, -11568(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F03D6F0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-11568);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03D6F4:
    ctx->pc = 0x7F03D6F4u;
    // 7F03D6F4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03D6F8:
    ctx->pc = 0x7F03D6F8u;
    // 7F03D6F8: stw     r0, 3828(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3828);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03D6FC:
    ctx->pc = 0x7F03D6FCu;
    // 7F03D6FC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F03D700:
    ctx->pc = 0x7F03D700u;
    // 7F03D700: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03D704:
    ctx->pc = 0x7F03D704u;
    // 7F03D704: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_7F03D708:
    ctx->pc = 0x7F03D708u;
    // 7F03D708: stw     r0, 3832(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03D70C:
    ctx->pc = 0x7F03D70Cu;
    // 7F03D70C: li      r8, 40
    ctx->gpr[8] = (u32)(s32)(40);

label_7F03D710:
    ctx->pc = 0x7F03D710u;
    // 7F03D710: lwz     r0, 3980(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3980);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03D714:
    ctx->pc = 0x7F03D714u;
    // 7F03D714: ori     r0, r0, 0x0002
    ctx->gpr[0] = ctx->gpr[0] | 0x0002u;

label_7F03D718:
    ctx->pc = 0x7F03D718u;
    // 7F03D718: stw     r0, 3980(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3980);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03D71C:
    ctx->pc = 0x7F03D71Cu;
    // 7F03D71C: lwz     r4, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D720:
    ctx->pc = 0x7F03D720u;
    // 7F03D720: bl      0x7F040774
    {
            ctx->lr = 0x7F03D724u;
            ctx->pc = 0x7F040774u;
            return;
    }

label_7F03D724:
    ctx->pc = 0x7F03D724u;
    ctx->downcount -= 5;
    // 7F03D724: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03D728:
    ctx->pc = 0x7F03D728u;
    // 7F03D728: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03D72C:
    ctx->pc = 0x7F03D72Cu;
    // 7F03D72C: addi    r4, r4, 22020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22020);

label_7F03D730:
    ctx->pc = 0x7F03D730u;
    // 7F03D730: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D734:
    ctx->pc = 0x7F03D734u;
    // 7F03D734: bl      0x7F041A78
    {
            ctx->lr = 0x7F03D738u;
            ctx->pc = 0x7F041A78u;
            return;
    }

label_7F03D738:
    ctx->pc = 0x7F03D738u;
    ctx->downcount -= 3;
    // 7F03D738: lwz     r0, 3836(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3836);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03D73C:
    ctx->pc = 0x7F03D73Cu;
    // 7F03D73C: cmpwi   r0, 0
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

label_7F03D740:
    ctx->pc = 0x7F03D740u;
    // 7F03D740: bc    12, 2, 0x7F03D798
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03D798;
        }
    }

label_7F03D744:
    ctx->pc = 0x7F03D744u;
    ctx->downcount -= 7;
    // 7F03D744: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03D748:
    ctx->pc = 0x7F03D748u;
    // 7F03D748: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03D74C:
    ctx->pc = 0x7F03D74Cu;
    // 7F03D74C: addi    r4, r4, 22020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22020);

label_7F03D750:
    ctx->pc = 0x7F03D750u;
    // 7F03D750: li      r6, 8190
    ctx->gpr[6] = (u32)(s32)(8190);

label_7F03D754:
    ctx->pc = 0x7F03D754u;
    // 7F03D754: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D758:
    ctx->pc = 0x7F03D758u;
    // 7F03D758: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03D75C:
    ctx->pc = 0x7F03D75Cu;
    // 7F03D75C: bl      0x7F041A84
    {
            ctx->lr = 0x7F03D760u;
            ctx->pc = 0x7F041A84u;
            return;
    }

label_7F03D760:
    ctx->pc = 0x7F03D760u;
    ctx->downcount -= 8;
    // 7F03D760: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F03D764:
    ctx->pc = 0x7F03D764u;
    // 7F03D764: lis     r5, 32
    ctx->gpr[5] = ((u32)(s32)(32) << 16);

label_7F03D768:
    ctx->pc = 0x7F03D768u;
    // 7F03D768: addi    r4, r3, 2904
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(2904);

label_7F03D76C:
    ctx->pc = 0x7F03D76Cu;
    // 7F03D76C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03D770:
    ctx->pc = 0x7F03D770u;
    // 7F03D770: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D774:
    ctx->pc = 0x7F03D774u;
    // 7F03D774: addi    r6, r5, -8191
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-8191);

label_7F03D778:
    ctx->pc = 0x7F03D778u;
    // 7F03D778: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03D77C:
    ctx->pc = 0x7F03D77Cu;
    // 7F03D77C: bl      0x7F041A84
    {
            ctx->lr = 0x7F03D780u;
            ctx->pc = 0x7F041A84u;
            return;
    }

label_7F03D780:
    ctx->pc = 0x7F03D780u;
    ctx->downcount -= 5;
    // 7F03D780: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F03D784:
    ctx->pc = 0x7F03D784u;
    // 7F03D784: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03D788:
    ctx->pc = 0x7F03D788u;
    // 7F03D788: addi    r4, r4, 2904
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2904);

label_7F03D78C:
    ctx->pc = 0x7F03D78Cu;
    // 7F03D78C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D790:
    ctx->pc = 0x7F03D790u;
    // 7F03D790: bl      0x7F041A78
    {
            ctx->lr = 0x7F03D794u;
            ctx->pc = 0x7F041A78u;
            return;
    }

label_7F03D794:
    ctx->pc = 0x7F03D794u;
    ctx->downcount -= 1;
    // 7F03D794: b       0x7F03D7B4
    {
            goto label_7F03D7B4;
    }

label_7F03D798:
    ctx->pc = 0x7F03D798u;
    ctx->downcount -= 7;
    // 7F03D798: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F03D79C:
    ctx->pc = 0x7F03D79Cu;
    // 7F03D79C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03D7A0:
    ctx->pc = 0x7F03D7A0u;
    // 7F03D7A0: addi    r4, r4, 2904
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2904);

label_7F03D7A4:
    ctx->pc = 0x7F03D7A4u;
    // 7F03D7A4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F03D7A8:
    ctx->pc = 0x7F03D7A8u;
    // 7F03D7A8: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D7AC:
    ctx->pc = 0x7F03D7ACu;
    // 7F03D7AC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03D7B0:
    ctx->pc = 0x7F03D7B0u;
    // 7F03D7B0: bl      0x7F041A84
    {
            ctx->lr = 0x7F03D7B4u;
            ctx->pc = 0x7F041A84u;
            return;
    }

label_7F03D7B4:
    ctx->pc = 0x7F03D7B4u;
    ctx->downcount -= 6;
    // 7F03D7B4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03D7B8:
    ctx->pc = 0x7F03D7B8u;
    // 7F03D7B8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F03D7BC:
    ctx->pc = 0x7F03D7BCu;
    // 7F03D7BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03D7C0:
    ctx->pc = 0x7F03D7C0u;
    // 7F03D7C0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03D7C4:
    ctx->pc = 0x7F03D7C4u;
    // 7F03D7C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03D7C8:
    ctx->pc = 0x7F03D7C8u;
    ctx->downcount -= 19;
    // 7F03D7C8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03D7CC:
    ctx->pc = 0x7F03D7CCu;
    // 7F03D7CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03D7D0:
    ctx->pc = 0x7F03D7D0u;
    // 7F03D7D0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F03D7D4:
    ctx->pc = 0x7F03D7D4u;
    // 7F03D7D4: lis     r6, 32586
    ctx->gpr[6] = ((u32)(s32)(32586) << 16);

label_7F03D7D8:
    ctx->pc = 0x7F03D7D8u;
    // 7F03D7D8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03D7DC:
    ctx->pc = 0x7F03D7DCu;
    // 7F03D7DC: addi    r5, r4, -11568
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-11568);

label_7F03D7E0:
    ctx->pc = 0x7F03D7E0u;
    // 7F03D7E0: addi    r4, r6, 22020
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(22020);

label_7F03D7E4:
    ctx->pc = 0x7F03D7E4u;
    // 7F03D7E4: lis     r6, 256
    ctx->gpr[6] = ((u32)(s32)(256) << 16);

label_7F03D7E8:
    ctx->pc = 0x7F03D7E8u;
    // 7F03D7E8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F03D7EC:
    ctx->pc = 0x7F03D7ECu;
    // 7F03D7EC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F03D7F0:
    ctx->pc = 0x7F03D7F0u;
    // 7F03D7F0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F03D7F0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03D7F4:
    ctx->pc = 0x7F03D7F4u;
    // 7F03D7F4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03D7F8:
    ctx->pc = 0x7F03D7F8u;
    // 7F03D7F8: stw     r0, 3828(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3828);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03D7FC:
    ctx->pc = 0x7F03D7FCu;
    // 7F03D7FC: addi    r6, r6, -1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-1);

label_7F03D800:
    ctx->pc = 0x7F03D800u;
    // 7F03D800: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03D804:
    ctx->pc = 0x7F03D804u;
    // 7F03D804: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F03D808:
    ctx->pc = 0x7F03D808u;
    // 7F03D808: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D80C:
    ctx->pc = 0x7F03D80Cu;
    // 7F03D80C: li      r8, 40
    ctx->gpr[8] = (u32)(s32)(40);

label_7F03D810:
    ctx->pc = 0x7F03D810u;
    // 7F03D810: bl      0x7F040774
    {
            ctx->lr = 0x7F03D814u;
            ctx->pc = 0x7F040774u;
            return;
    }

label_7F03D814:
    ctx->pc = 0x7F03D814u;
    ctx->downcount -= 3;
    // 7F03D814: lwz     r0, 3836(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3836);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03D818:
    ctx->pc = 0x7F03D818u;
    // 7F03D818: cmpwi   r0, 0
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

label_7F03D81C:
    ctx->pc = 0x7F03D81Cu;
    // 7F03D81C: bc    12, 2, 0x7F03D870
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03D870;
        }
    }

label_7F03D820:
    ctx->pc = 0x7F03D820u;
    ctx->downcount -= 7;
    // 7F03D820: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03D824:
    ctx->pc = 0x7F03D824u;
    // 7F03D824: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03D828:
    ctx->pc = 0x7F03D828u;
    // 7F03D828: addi    r4, r4, 22020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22020);

label_7F03D82C:
    ctx->pc = 0x7F03D82Cu;
    // 7F03D82C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F03D830:
    ctx->pc = 0x7F03D830u;
    // 7F03D830: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D834:
    ctx->pc = 0x7F03D834u;
    // 7F03D834: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03D838:
    ctx->pc = 0x7F03D838u;
    // 7F03D838: bl      0x7F041A84
    {
            ctx->lr = 0x7F03D83Cu;
            ctx->pc = 0x7F041A84u;
            return;
    }

label_7F03D83C:
    ctx->pc = 0x7F03D83Cu;
    ctx->downcount -= 8;
    // 7F03D83C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F03D840:
    ctx->pc = 0x7F03D840u;
    // 7F03D840: lis     r5, 256
    ctx->gpr[5] = ((u32)(s32)(256) << 16);

label_7F03D844:
    ctx->pc = 0x7F03D844u;
    // 7F03D844: addi    r4, r3, 2904
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(2904);

label_7F03D848:
    ctx->pc = 0x7F03D848u;
    // 7F03D848: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03D84C:
    ctx->pc = 0x7F03D84Cu;
    // 7F03D84C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D850:
    ctx->pc = 0x7F03D850u;
    // 7F03D850: addi    r6, r5, -1
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-1);

label_7F03D854:
    ctx->pc = 0x7F03D854u;
    // 7F03D854: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03D858:
    ctx->pc = 0x7F03D858u;
    // 7F03D858: bl      0x7F041A84
    {
            ctx->lr = 0x7F03D85Cu;
            ctx->pc = 0x7F041A84u;
            return;
    }

label_7F03D85C:
    ctx->pc = 0x7F03D85Cu;
    ctx->downcount -= 5;
    // 7F03D85C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F03D860:
    ctx->pc = 0x7F03D860u;
    // 7F03D860: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03D864:
    ctx->pc = 0x7F03D864u;
    // 7F03D864: addi    r4, r4, 2904
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2904);

label_7F03D868:
    ctx->pc = 0x7F03D868u;
    // 7F03D868: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D86C:
    ctx->pc = 0x7F03D86Cu;
    // 7F03D86C: bl      0x7F041A78
    {
            ctx->lr = 0x7F03D870u;
            ctx->pc = 0x7F041A78u;
            return;
    }

label_7F03D870:
    ctx->pc = 0x7F03D870u;
    ctx->downcount -= 6;
    // 7F03D870: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03D874:
    ctx->pc = 0x7F03D874u;
    // 7F03D874: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F03D878:
    ctx->pc = 0x7F03D878u;
    // 7F03D878: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03D87C:
    ctx->pc = 0x7F03D87Cu;
    // 7F03D87C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03D880:
    ctx->pc = 0x7F03D880u;
    // 7F03D880: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03D884:
    ctx->pc = 0x7F03D884u;
    ctx->downcount -= 18;
    // 7F03D884: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03D888:
    ctx->pc = 0x7F03D888u;
    // 7F03D888: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03D88C:
    ctx->pc = 0x7F03D88Cu;
    // 7F03D88C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03D890:
    ctx->pc = 0x7F03D890u;
    // 7F03D890: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F03D894:
    ctx->pc = 0x7F03D894u;
    // 7F03D894: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03D898:
    ctx->pc = 0x7F03D898u;
    // 7F03D898: lha     r3, 522(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(522);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03D89C:
    ctx->pc = 0x7F03D89Cu;
    // 7F03D89C: lwz     r4, 3956(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3956);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D8A0:
    ctx->pc = 0x7F03D8A0u;
    // 7F03D8A0: bl      0x7F3C9D3C
    {
            ctx->lr = 0x7F03D8A4u;
            ctx->pc = 0x7F3C9D3Cu;
            return;
    }

label_7F03D8A4:
    ctx->pc = 0x7F03D8A4u;
    ctx->downcount -= 4;
    // 7F03D8A4: sth     r3, 522(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(522);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F03D8A8:
    ctx->pc = 0x7F03D8A8u;
    // 7F03D8A8: lha     r3, 528(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(528);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03D8AC:
    ctx->pc = 0x7F03D8ACu;
    // 7F03D8AC: lwz     r4, 3960(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3960);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D8B0:
    ctx->pc = 0x7F03D8B0u;
    // 7F03D8B0: bl      0x7F3C9D3C
    {
            ctx->lr = 0x7F03D8B4u;
            ctx->pc = 0x7F3C9D3Cu;
            return;
    }

label_7F03D8B4:
    ctx->pc = 0x7F03D8B4u;
    ctx->downcount -= 5;
    // 7F03D8B4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03D8B8:
    ctx->pc = 0x7F03D8B8u;
    // 7F03D8B8: sth     r31, 528(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(528);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_7F03D8BC:
    ctx->pc = 0x7F03D8BCu;
    // 7F03D8BC: lha     r3, 538(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(538);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03D8C0:
    ctx->pc = 0x7F03D8C0u;
    // 7F03D8C0: lwz     r4, 3964(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3964);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D8C4:
    ctx->pc = 0x7F03D8C4u;
    // 7F03D8C4: bl      0x7F3C9D3C
    {
            ctx->lr = 0x7F03D8C8u;
            ctx->pc = 0x7F3C9D3Cu;
            return;
    }

label_7F03D8C8:
    ctx->pc = 0x7F03D8C8u;
    ctx->downcount -= 6;
    // 7F03D8C8: sth     r3, 538(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(538);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F03D8CC:
    ctx->pc = 0x7F03D8CCu;
    // 7F03D8CC: sth     r31, 568(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(568);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_7F03D8D0:
    ctx->pc = 0x7F03D8D0u;
    // 7F03D8D0: sth     r31, 576(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(576);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_7F03D8D4:
    ctx->pc = 0x7F03D8D4u;
    // 7F03D8D4: lha     r3, 560(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(560);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03D8D8:
    ctx->pc = 0x7F03D8D8u;
    // 7F03D8D8: lha     r4, 680(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(680);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03D8DC:
    ctx->pc = 0x7F03D8DCu;
    // 7F03D8DC: bl      0x7F3C9D3C
    {
            ctx->lr = 0x7F03D8E0u;
            ctx->pc = 0x7F3C9D3Cu;
            return;
    }

label_7F03D8E0:
    ctx->pc = 0x7F03D8E0u;
    ctx->downcount -= 4;
    // 7F03D8E0: sth     r3, 560(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(560);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F03D8E4:
    ctx->pc = 0x7F03D8E4u;
    // 7F03D8E4: lha     r3, 520(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(520);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03D8E8:
    ctx->pc = 0x7F03D8E8u;
    // 7F03D8E8: lwz     r4, 3952(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3952);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03D8EC:
    ctx->pc = 0x7F03D8ECu;
    // 7F03D8EC: bl      0x7F3C9D3C
    {
            ctx->lr = 0x7F03D8F0u;
            ctx->pc = 0x7F3C9D3Cu;
            return;
    }

label_7F03D8F0:
    ctx->pc = 0x7F03D8F0u;
    ctx->downcount -= 5;
    // 7F03D8F0: sth     r3, 520(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(520);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F03D8F4:
    ctx->pc = 0x7F03D8F4u;
    // 7F03D8F4: addi    r3, r30, 464
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(464);

label_7F03D8F8:
    ctx->pc = 0x7F03D8F8u;
    // 7F03D8F8: addi    r4, r30, 520
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(520);

label_7F03D8FC:
    ctx->pc = 0x7F03D8FCu;
    // 7F03D8FC: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F03D900:
    ctx->pc = 0x7F03D900u;
    // 7F03D900: bl      0x7F01E454
    {
            ctx->lr = 0x7F03D904u;
            ctx->pc = 0x7F01E454u;
            return;
    }

label_7F03D904:
    ctx->pc = 0x7F03D904u;
    ctx->downcount -= 4;
    // 7F03D904: addi    r3, r30, 464
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(464);

label_7F03D908:
    ctx->pc = 0x7F03D908u;
    // 7F03D908: addi    r4, r30, 520
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(520);

label_7F03D90C:
    ctx->pc = 0x7F03D90Cu;
    // 7F03D90C: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F03D910:
    ctx->pc = 0x7F03D910u;
    // 7F03D910: bl      0x7F01E454
    {
            ctx->lr = 0x7F03D914u;
            ctx->pc = 0x7F01E454u;
            return;
    }

label_7F03D914:
    ctx->pc = 0x7F03D914u;
    ctx->downcount -= 4;
    // 7F03D914: addi    r3, r30, 464
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(464);

label_7F03D918:
    ctx->pc = 0x7F03D918u;
    // 7F03D918: addi    r4, r30, 528
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(528);

label_7F03D91C:
    ctx->pc = 0x7F03D91Cu;
    // 7F03D91C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F03D920:
    ctx->pc = 0x7F03D920u;
    // 7F03D920: bl      0x7F01E454
    {
            ctx->lr = 0x7F03D924u;
            ctx->pc = 0x7F01E454u;
            return;
    }

label_7F03D924:
    ctx->pc = 0x7F03D924u;
    ctx->downcount -= 4;
    // 7F03D924: addi    r3, r30, 464
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(464);

label_7F03D928:
    ctx->pc = 0x7F03D928u;
    // 7F03D928: addi    r4, r30, 536
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(536);

label_7F03D92C:
    ctx->pc = 0x7F03D92Cu;
    // 7F03D92C: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F03D930:
    ctx->pc = 0x7F03D930u;
    // 7F03D930: bl      0x7F01E454
    {
            ctx->lr = 0x7F03D934u;
            ctx->pc = 0x7F01E454u;
            return;
    }

label_7F03D934:
    ctx->pc = 0x7F03D934u;
    ctx->downcount -= 4;
    // 7F03D934: addi    r3, r30, 464
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(464);

label_7F03D938:
    ctx->pc = 0x7F03D938u;
    // 7F03D938: addi    r4, r30, 568
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(568);

label_7F03D93C:
    ctx->pc = 0x7F03D93Cu;
    // 7F03D93C: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_7F03D940:
    ctx->pc = 0x7F03D940u;
    // 7F03D940: bl      0x7F01E454
    {
            ctx->lr = 0x7F03D944u;
            ctx->pc = 0x7F01E454u;
            return;
    }

label_7F03D944:
    ctx->pc = 0x7F03D944u;
    ctx->downcount -= 4;
    // 7F03D944: addi    r3, r30, 464
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(464);

label_7F03D948:
    ctx->pc = 0x7F03D948u;
    // 7F03D948: addi    r4, r30, 576
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(576);

label_7F03D94C:
    ctx->pc = 0x7F03D94Cu;
    // 7F03D94C: li      r5, 9
    ctx->gpr[5] = (u32)(s32)(9);

label_7F03D950:
    ctx->pc = 0x7F03D950u;
    // 7F03D950: bl      0x7F01E454
    {
            ctx->lr = 0x7F03D954u;
            ctx->pc = 0x7F01E454u;
            return;
    }

label_7F03D954:
    ctx->pc = 0x7F03D954u;
    ctx->downcount -= 4;
    // 7F03D954: addi    r3, r30, 464
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(464);

label_7F03D958:
    ctx->pc = 0x7F03D958u;
    // 7F03D958: addi    r4, r30, 560
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(560);

label_7F03D95C:
    ctx->pc = 0x7F03D95Cu;
    // 7F03D95C: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_7F03D960:
    ctx->pc = 0x7F03D960u;
    // 7F03D960: bl      0x7F01E454
    {
            ctx->lr = 0x7F03D964u;
            ctx->pc = 0x7F01E454u;
            return;
    }

label_7F03D964:
    ctx->pc = 0x7F03D964u;
    ctx->downcount -= 16;
    // 7F03D964: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F03D968:
    ctx->pc = 0x7F03D968u;
    // 7F03D968: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03D96C:
    ctx->pc = 0x7F03D96Cu;
    // 7F03D96C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03D970:
    ctx->pc = 0x7F03D970u;
    // 7F03D970: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03D974:
    ctx->pc = 0x7F03D974u;
    // 7F03D974: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03D978:
    ctx->pc = 0x7F03D978u;
    ctx->downcount -= 4;
    // 7F03D978: stw     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F03D97C:
    ctx->pc = 0x7F03D97Cu;
    // 7F03D97C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F03D980:
    ctx->pc = 0x7F03D980u;
    // 7F03D980: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03D984:
    ctx->pc = 0x7F03D984u;
    // 7F03D984: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03D988:
    ctx->pc = 0x7F03D988u;
    ctx->downcount -= 19;
    // 7F03D988: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03D98C:
    ctx->pc = 0x7F03D98Cu;
    // 7F03D98C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03D990:
    ctx->pc = 0x7F03D990u;
    // 7F03D990: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03D994:
    ctx->pc = 0x7F03D994u;
    // 7F03D994: stmw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F03D998:
    ctx->pc = 0x7F03D998u;
    // 7F03D998: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03D99C:
    ctx->pc = 0x7F03D99Cu;
    // 7F03D99C: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F03D9A0:
    ctx->pc = 0x7F03D9A0u;
    // 7F03D9A0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F03D9A4:
    ctx->pc = 0x7F03D9A4u;
    // 7F03D9A4: addi    r3, r28, 64
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(64);

label_7F03D9A8:
    ctx->pc = 0x7F03D9A8u;
    // 7F03D9A8: bl      0x7F041AB0
    {
            ctx->lr = 0x7F03D9ACu;
            ctx->pc = 0x7F041AB0u;
            return;
    }

label_7F03D9AC:
    ctx->pc = 0x7F03D9ACu;
    ctx->downcount -= 5;
    // 7F03D9AC: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F03D9B0:
    ctx->pc = 0x7F03D9B0u;
    // 7F03D9B0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F03D9B4:
    ctx->pc = 0x7F03D9B4u;
    // 7F03D9B4: addi    r3, r3, 22056
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22056);

label_7F03D9B8:
    ctx->pc = 0x7F03D9B8u;
    // 7F03D9B8: addi    r5, r1, 16
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03D9BC:
    ctx->pc = 0x7F03D9BCu;
    // 7F03D9BC: bl      0x7F3CC634
    {
            ctx->lr = 0x7F03D9C0u;
            ctx->pc = 0x7F3CC634u;
            return;
    }

label_7F03D9C0:
    ctx->pc = 0x7F03D9C0u;
    ctx->downcount -= 4;
    // 7F03D9C0: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F03D9C4:
    ctx->pc = 0x7F03D9C4u;
    // 7F03D9C4: lwz     r0, 19268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03D9C8:
    ctx->pc = 0x7F03D9C8u;
    // 7F03D9C8: cmpwi   r0, 0
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

label_7F03D9CC:
    ctx->pc = 0x7F03D9CCu;
    // 7F03D9CC: bc    12, 2, 0x7F03D9EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03D9EC;
        }
    }

label_7F03D9D0:
    ctx->pc = 0x7F03D9D0u;
    ctx->downcount -= 3;
    // 7F03D9D0: lha     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03D9D4:
    ctx->pc = 0x7F03D9D4u;
    // 7F03D9D4: lha     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03D9D8:
    ctx->pc = 0x7F03D9D8u;
    // 7F03D9D8: bl      0x7F02A6B0
    {
            ctx->lr = 0x7F03D9DCu;
            ctx->pc = 0x7F02A6B0u;
            return;
    }

label_7F03D9DC:
    ctx->pc = 0x7F03D9DCu;
    ctx->downcount -= 3;
    // 7F03D9DC: sth     r3, 106(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(106);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F03D9E0:
    ctx->pc = 0x7F03D9E0u;
    // 7F03D9E0: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03D9E4:
    ctx->pc = 0x7F03D9E4u;
    // 7F03D9E4: bl      0x7F03D65C
    {
            ctx->lr = 0x7F03D9E8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03D65Cu;
                return;
            }
            goto label_7F03D65C;
    }

label_7F03D9E8:
    ctx->pc = 0x7F03D9E8u;
    ctx->downcount -= 1;
    // 7F03D9E8: b       0x7F03DD2C
    {
            goto label_7F03DD2C;
    }

label_7F03D9EC:
    ctx->pc = 0x7F03D9ECu;
    ctx->downcount -= 3;
    // 7F03D9EC: lwz     r0, 3816(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3816);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03D9F0:
    ctx->pc = 0x7F03D9F0u;
    // 7F03D9F0: cmpwi   r0, 0
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

label_7F03D9F4:
    ctx->pc = 0x7F03D9F4u;
    // 7F03D9F4: bc    12, 1, 0x7F03DA68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03DA68;
        }
    }

label_7F03D9F8:
    ctx->pc = 0x7F03D9F8u;
    ctx->downcount -= 3;
    // 7F03D9F8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F03D9FC:
    ctx->pc = 0x7F03D9FCu;
    // 7F03D9FC: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F03DA00:
    ctx->pc = 0x7F03DA00u;
    // 7F03DA00: bl      0x7F03D978
    {
            ctx->lr = 0x7F03DA04u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03D978u;
                return;
            }
            goto label_7F03D978;
    }

label_7F03DA04:
    ctx->pc = 0x7F03DA04u;
    ctx->downcount -= 2;
    // 7F03DA04: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03DA08:
    ctx->pc = 0x7F03DA08u;
    // 7F03DA08: bl      0x7F03D6C8
    {
            ctx->lr = 0x7F03DA0Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03D6C8u;
                return;
            }
            goto label_7F03D6C8;
    }

label_7F03DA0C:
    ctx->pc = 0x7F03DA0Cu;
    ctx->downcount -= 3;
    // 7F03DA0C: lwz     r0, 3992(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3992);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03DA10:
    ctx->pc = 0x7F03DA10u;
    // 7F03DA10: cmpwi   r0, 0
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

label_7F03DA14:
    ctx->pc = 0x7F03DA14u;
    // 7F03DA14: bc    4, 2, 0x7F03DA58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03DA58;
        }
    }

label_7F03DA18:
    ctx->pc = 0x7F03DA18u;
    ctx->downcount -= 3;
    // 7F03DA18: lwz     r0, 3996(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3996);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03DA1C:
    ctx->pc = 0x7F03DA1Cu;
    // 7F03DA1C: cmpwi   r0, 3
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

label_7F03DA20:
    ctx->pc = 0x7F03DA20u;
    // 7F03DA20: bc    4, 0, 0x7F03DA58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03DA58;
        }
    }

label_7F03DA24:
    ctx->pc = 0x7F03DA24u;
    ctx->downcount -= 3;
    // 7F03DA24: lwz     r0, 4004(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4004);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03DA28:
    ctx->pc = 0x7F03DA28u;
    // 7F03DA28: cmpwi   r0, 0
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

label_7F03DA2C:
    ctx->pc = 0x7F03DA2Cu;
    // 7F03DA2C: bc    4, 2, 0x7F03DD2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03DD2C;
        }
    }

label_7F03DA30:
    ctx->pc = 0x7F03DA30u;
    ctx->downcount -= 2;
    // 7F03DA30: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03DA34:
    ctx->pc = 0x7F03DA34u;
    // 7F03DA34: bl      0x7F041908
    {
            ctx->lr = 0x7F03DA38u;
            ctx->pc = 0x7F041908u;
            return;
    }

label_7F03DA38:
    ctx->pc = 0x7F03DA38u;
    ctx->downcount -= 2;
    // 7F03DA38: cmpwi   r3, 0
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

label_7F03DA3C:
    ctx->pc = 0x7F03DA3Cu;
    // 7F03DA3C: bc    4, 2, 0x7F03DA4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03DA4C;
        }
    }

label_7F03DA40:
    ctx->pc = 0x7F03DA40u;
    ctx->downcount -= 3;
    // 7F03DA40: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03DA44:
    ctx->pc = 0x7F03DA44u;
    // 7F03DA44: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F03DA48:
    ctx->pc = 0x7F03DA48u;
    // 7F03DA48: bl      0x7F041878
    {
            ctx->lr = 0x7F03DA4Cu;
            ctx->pc = 0x7F041878u;
            return;
    }

label_7F03DA4C:
    ctx->pc = 0x7F03DA4Cu;
    ctx->downcount -= 3;
    // 7F03DA4C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F03DA50:
    ctx->pc = 0x7F03DA50u;
    // 7F03DA50: stw     r0, 4004(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03DA54:
    ctx->pc = 0x7F03DA54u;
    // 7F03DA54: b       0x7F03DD2C
    {
            goto label_7F03DD2C;
    }

label_7F03DA58:
    ctx->pc = 0x7F03DA58u;
    ctx->downcount -= 3;
    // 7F03DA58: li      r3, 1556
    ctx->gpr[3] = (u32)(s32)(1556);

label_7F03DA5C:
    ctx->pc = 0x7F03DA5Cu;
    // 7F03DA5C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F03DA60:
    ctx->pc = 0x7F03DA60u;
    // 7F03DA60: bl      0x7F040868
    {
            ctx->lr = 0x7F03DA64u;
            ctx->pc = 0x7F040868u;
            return;
    }

label_7F03DA64:
    ctx->pc = 0x7F03DA64u;
    ctx->downcount -= 1;
    // 7F03DA64: b       0x7F03DD2C
    {
            goto label_7F03DD2C;
    }

label_7F03DA68:
    ctx->pc = 0x7F03DA68u;
    ctx->downcount -= 2;
    // 7F03DA68: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03DA6C:
    ctx->pc = 0x7F03DA6Cu;
    // 7F03DA6C: bl      0x7F3CC44C
    {
            ctx->lr = 0x7F03DA70u;
            ctx->pc = 0x7F3CC44Cu;
            return;
    }

label_7F03DA70:
    ctx->pc = 0x7F03DA70u;
    ctx->downcount -= 3;
    // 7F03DA70: lwz     r0, 4096(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4096);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03DA74:
    ctx->pc = 0x7F03DA74u;
    // 7F03DA74: cmpw    r3, r0
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

label_7F03DA78:
    ctx->pc = 0x7F03DA78u;
    // 7F03DA78: bc    4, 1, 0x7F03DCF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03DCF4;
        }
    }

label_7F03DA7C:
    ctx->pc = 0x7F03DA7Cu;
    ctx->downcount -= 2;
    // 7F03DA7C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03DA80:
    ctx->pc = 0x7F03DA80u;
    // 7F03DA80: bl      0x7F0416B0
    {
            ctx->lr = 0x7F03DA84u;
            ctx->pc = 0x7F0416B0u;
            return;
    }

label_7F03DA84:
    ctx->pc = 0x7F03DA84u;
    ctx->downcount -= 2;
    // 7F03DA84: cmpwi   r3, 0
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

label_7F03DA88:
    ctx->pc = 0x7F03DA88u;
    // 7F03DA88: bc    12, 2, 0x7F03DCE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03DCE4;
        }
    }

label_7F03DA8C:
    ctx->pc = 0x7F03DA8Cu;
    ctx->downcount -= 6;
    // 7F03DA8C: lwz     r3, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03DA90:
    ctx->pc = 0x7F03DA90u;
    // 7F03DA90: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F03DA94:
    ctx->pc = 0x7F03DA94u;
    // 7F03DA94: stw     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03DA98:
    ctx->pc = 0x7F03DA98u;
    // 7F03DA98: lha     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03DA9C:
    ctx->pc = 0x7F03DA9Cu;
    // 7F03DA9C: lha     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03DAA0:
    ctx->pc = 0x7F03DAA0u;
    // 7F03DAA0: bl      0x7F02A6B0
    {
            ctx->lr = 0x7F03DAA4u;
            ctx->pc = 0x7F02A6B0u;
            return;
    }

label_7F03DAA4:
    ctx->pc = 0x7F03DAA4u;
    ctx->downcount -= 5;
    // 7F03DAA4: sth     r3, 106(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(106);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F03DAA8:
    ctx->pc = 0x7F03DAA8u;
    // 7F03DAA8: lwz     r0, 4132(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03DAAC:
    ctx->pc = 0x7F03DAACu;
    // 7F03DAAC: lha     r31, 106(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(106);
        ctx->gpr[31] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03DAB0:
    ctx->pc = 0x7F03DAB0u;
    // 7F03DAB0: cmpwi   r0, 0
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

label_7F03DAB4:
    ctx->pc = 0x7F03DAB4u;
    // 7F03DAB4: bc    4, 2, 0x7F03DD2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03DD2C;
        }
    }

label_7F03DAB8:
    ctx->pc = 0x7F03DAB8u;
    ctx->downcount -= 3;
    // 7F03DAB8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03DABC:
    ctx->pc = 0x7F03DABCu;
    // 7F03DABC: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03DAC0:
    ctx->pc = 0x7F03DAC0u;
    // 7F03DAC0: bl      0x7F040A38
    {
            ctx->lr = 0x7F03DAC4u;
            ctx->pc = 0x7F040A38u;
            return;
    }

label_7F03DAC4:
    ctx->pc = 0x7F03DAC4u;
    ctx->downcount -= 2;
    // 7F03DAC4: cmpwi   r3, 0
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

label_7F03DAC8:
    ctx->pc = 0x7F03DAC8u;
    // 7F03DAC8: bc    12, 2, 0x7F03DB10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03DB10;
        }
    }

label_7F03DACC:
    ctx->pc = 0x7F03DACCu;
    ctx->downcount -= 3;
    // 7F03DACC: lwz     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03DAD0:
    ctx->pc = 0x7F03DAD0u;
    // 7F03DAD0: cmpwi   r0, 0
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

label_7F03DAD4:
    ctx->pc = 0x7F03DAD4u;
    // 7F03DAD4: bc    4, 0, 0x7F03DAE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03DAE0;
        }
    }

label_7F03DAD8:
    ctx->pc = 0x7F03DAD8u;
    ctx->downcount -= 2;
    // 7F03DAD8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F03DADC:
    ctx->pc = 0x7F03DADCu;
    // 7F03DADC: stw     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03DAE0:
    ctx->pc = 0x7F03DAE0u;
    ctx->downcount -= 3;
    // 7F03DAE0: lwz     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03DAE4:
    ctx->pc = 0x7F03DAE4u;
    // 7F03DAE4: cmpwi   r0, 5
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

label_7F03DAE8:
    ctx->pc = 0x7F03DAE8u;
    // 7F03DAE8: bc    12, 0, 0x7F03DD2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03DD2C;
        }
    }

label_7F03DAEC:
    ctx->pc = 0x7F03DAECu;
    ctx->downcount -= 9;
    // 7F03DAEC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F03DAF0:
    ctx->pc = 0x7F03DAF0u;
    // 7F03DAF0: or   r30, r31, r31
    {
        ctx->gpr[30] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03DAF4:
    ctx->pc = 0x7F03DAF4u;
    // 7F03DAF4: stw     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03DAF8:
    ctx->pc = 0x7F03DAF8u;
    // 7F03DAF8: stw     r0, 4068(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4068);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03DAFC:
    ctx->pc = 0x7F03DAFCu;
    // 7F03DAFC: lwz     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03DB00:
    ctx->pc = 0x7F03DB00u;
    // 7F03DB00: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03DB04:
    ctx->pc = 0x7F03DB04u;
    // 7F03DB04: stw     r3, 4060(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4060);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F03DB08:
    ctx->pc = 0x7F03DB08u;
    // 7F03DB08: stw     r0, 4064(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4064);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03DB0C:
    ctx->pc = 0x7F03DB0Cu;
    // 7F03DB0C: b       0x7F03DBEC
    {
            goto label_7F03DBEC;
    }

label_7F03DB10:
    ctx->pc = 0x7F03DB10u;
    ctx->downcount -= 3;
    // 7F03DB10: lwz     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03DB14:
    ctx->pc = 0x7F03DB14u;
    // 7F03DB14: cmpwi   r0, 5
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

label_7F03DB18:
    ctx->pc = 0x7F03DB18u;
    // 7F03DB18: bc    12, 0, 0x7F03DD2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03DD2C;
        }
    }

label_7F03DB1C:
    ctx->pc = 0x7F03DB1Cu;
    ctx->downcount -= 5;
    // 7F03DB1C: li      r0, -60
    ctx->gpr[0] = (u32)(s32)(-60);

label_7F03DB20:
    ctx->pc = 0x7F03DB20u;
    // 7F03DB20: stw     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03DB24:
    ctx->pc = 0x7F03DB24u;
    // 7F03DB24: lwz     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03DB28:
    ctx->pc = 0x7F03DB28u;
    // 7F03DB28: cmpwi   r0, 0
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

label_7F03DB2C:
    ctx->pc = 0x7F03DB2Cu;
    // 7F03DB2C: bc    4, 2, 0x7F03DB84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03DB84;
        }
    }

label_7F03DB30:
    ctx->pc = 0x7F03DB30u;
    ctx->downcount -= 9;
    // 7F03DB30: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F03DB34:
    ctx->pc = 0x7F03DB34u;
    // 7F03DB34: or   r30, r31, r31
    {
        ctx->gpr[30] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03DB38:
    ctx->pc = 0x7F03DB38u;
    // 7F03DB38: stw     r0, 4068(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4068);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03DB3C:
    ctx->pc = 0x7F03DB3Cu;
    // 7F03DB3C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03DB40:
    ctx->pc = 0x7F03DB40u;
    // 7F03DB40: lwz     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03DB44:
    ctx->pc = 0x7F03DB44u;
    // 7F03DB44: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03DB48:
    ctx->pc = 0x7F03DB48u;
    // 7F03DB48: stw     r4, 4060(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4060);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F03DB4C:
    ctx->pc = 0x7F03DB4Cu;
    // 7F03DB4C: stw     r0, 4064(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4064);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03DB50:
    ctx->pc = 0x7F03DB50u;
    // 7F03DB50: bl      0x7F041908
    {
            ctx->lr = 0x7F03DB54u;
            ctx->pc = 0x7F041908u;
            return;
    }

label_7F03DB54:
    ctx->pc = 0x7F03DB54u;
    ctx->downcount -= 2;
    // 7F03DB54: cmpwi   r3, 0
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

label_7F03DB58:
    ctx->pc = 0x7F03DB58u;
    // 7F03DB58: bc    4, 2, 0x7F03DBEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03DBEC;
        }
    }

label_7F03DB5C:
    ctx->pc = 0x7F03DB5Cu;
    ctx->downcount -= 6;
    // 7F03DB5C: lwz     r5, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F03DB60:
    ctx->pc = 0x7F03DB60u;
    // 7F03DB60: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03DB64:
    ctx->pc = 0x7F03DB64u;
    // 7F03DB64: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_7F03DB68:
    ctx->pc = 0x7F03DB68u;
    // 7F03DB68: addi    r0, r5, 1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(1);

label_7F03DB6C:
    ctx->pc = 0x7F03DB6Cu;
    // 7F03DB6C: stw     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03DB70:
    ctx->pc = 0x7F03DB70u;
    // 7F03DB70: bl      0x7F041878
    {
            ctx->lr = 0x7F03DB74u;
            ctx->pc = 0x7F041878u;
            return;
    }

label_7F03DB74:
    ctx->pc = 0x7F03DB74u;
    ctx->downcount -= 3;
    // 7F03DB74: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F03DB78:
    ctx->pc = 0x7F03DB78u;
    // 7F03DB78: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_7F03DB7C:
    ctx->pc = 0x7F03DB7Cu;
    // 7F03DB7C: bl      0x7F03D978
    {
            ctx->lr = 0x7F03DB80u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03D978u;
                return;
            }
            goto label_7F03D978;
    }

label_7F03DB80:
    ctx->pc = 0x7F03DB80u;
    ctx->downcount -= 1;
    // 7F03DB80: b       0x7F03DD2C
    {
            goto label_7F03DD2C;
    }

label_7F03DB84:
    ctx->pc = 0x7F03DB84u;
    ctx->downcount -= 2;
    // 7F03DB84: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03DB88:
    ctx->pc = 0x7F03DB88u;
    // 7F03DB88: bl      0x7F040B94
    {
            ctx->lr = 0x7F03DB8Cu;
            ctx->pc = 0x7F040B94u;
            return;
    }

label_7F03DB8C:
    ctx->pc = 0x7F03DB8Cu;
    ctx->downcount -= 4;
    // 7F03DB8C: stw     r3, 3872(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3872);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F03DB90:
    ctx->pc = 0x7F03DB90u;
    // 7F03DB90: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03DB94:
    ctx->pc = 0x7F03DB94u;
    // 7F03DB94: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F03DB98:
    ctx->pc = 0x7F03DB98u;
    // 7F03DB98: bl      0x7F040BD8
    {
            ctx->lr = 0x7F03DB9Cu;
            ctx->pc = 0x7F040BD8u;
            return;
    }

label_7F03DB9C:
    ctx->pc = 0x7F03DB9Cu;
    ctx->downcount -= 2;
    // 7F03DB9C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03DBA0:
    ctx->pc = 0x7F03DBA0u;
    // 7F03DBA0: bl      0x7F040D6C
    {
            ctx->lr = 0x7F03DBA4u;
            ctx->pc = 0x7F040D6Cu;
            return;
    }

label_7F03DBA4:
    ctx->pc = 0x7F03DBA4u;
    ctx->downcount -= 2;
    // 7F03DBA4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03DBA8:
    ctx->pc = 0x7F03DBA8u;
    // 7F03DBA8: bl      0x800147F8
    {
            ctx->lr = 0x7F03DBACu;
            ctx->pc = 0x800147F8u;
            return;
    }

label_7F03DBAC:
    ctx->pc = 0x7F03DBACu;
    ctx->downcount -= 3;
    // 7F03DBAC: rlwinm r0, r3, 0, 25, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000007Fu;
    }

label_7F03DBB0:
    ctx->pc = 0x7F03DBB0u;
    // 7F03DBB0: cmpwi   r0, 8
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

label_7F03DBB4:
    ctx->pc = 0x7F03DBB4u;
    // 7F03DBB4: bc    4, 0, 0x7F03DBEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03DBEC;
        }
    }

label_7F03DBB8:
    ctx->pc = 0x7F03DBB8u;
    ctx->downcount -= 2;
    // 7F03DBB8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03DBBC:
    ctx->pc = 0x7F03DBBCu;
    // 7F03DBBC: bl      0x7F041908
    {
            ctx->lr = 0x7F03DBC0u;
            ctx->pc = 0x7F041908u;
            return;
    }

label_7F03DBC0:
    ctx->pc = 0x7F03DBC0u;
    ctx->downcount -= 2;
    // 7F03DBC0: cmpwi   r3, 0
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

label_7F03DBC4:
    ctx->pc = 0x7F03DBC4u;
    // 7F03DBC4: bc    4, 2, 0x7F03DBEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03DBEC;
        }
    }

label_7F03DBC8:
    ctx->pc = 0x7F03DBC8u;
    ctx->downcount -= 4;
    // 7F03DBC8: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F03DBCC:
    ctx->pc = 0x7F03DBCCu;
    // 7F03DBCC: lwz     r0, 22052(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22052);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03DBD0:
    ctx->pc = 0x7F03DBD0u;
    // 7F03DBD0: cmpwi   r0, 5
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

label_7F03DBD4:
    ctx->pc = 0x7F03DBD4u;
    // 7F03DBD4: bc    4, 1, 0x7F03DBEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03DBEC;
        }
    }

label_7F03DBD8:
    ctx->pc = 0x7F03DBD8u;
    ctx->downcount -= 5;
    // 7F03DBD8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F03DBDC:
    ctx->pc = 0x7F03DBDCu;
    // 7F03DBDC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03DBE0:
    ctx->pc = 0x7F03DBE0u;
    // 7F03DBE0: stb     r0, 4252(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4252);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F03DBE4:
    ctx->pc = 0x7F03DBE4u;
    // 7F03DBE4: li      r4, 9
    ctx->gpr[4] = (u32)(s32)(9);

label_7F03DBE8:
    ctx->pc = 0x7F03DBE8u;
    // 7F03DBE8: bl      0x7F041878
    {
            ctx->lr = 0x7F03DBECu;
            ctx->pc = 0x7F041878u;
            return;
    }

label_7F03DBEC:
    ctx->pc = 0x7F03DBECu;
    ctx->downcount -= 3;
    // 7F03DBEC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F03DBF0:
    ctx->pc = 0x7F03DBF0u;
    // 7F03DBF0: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F03DBF4:
    ctx->pc = 0x7F03DBF4u;
    // 7F03DBF4: bl      0x7F03D978
    {
            ctx->lr = 0x7F03DBF8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03D978u;
                return;
            }
            goto label_7F03D978;
    }

label_7F03DBF8:
    ctx->pc = 0x7F03DBF8u;
    ctx->downcount -= 20;
    // 7F03DBF8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F03DBFC:
    ctx->pc = 0x7F03DBFCu;
    // 7F03DBFC: lis     r6, 32586
    ctx->gpr[6] = ((u32)(s32)(32586) << 16);

label_7F03DC00:
    ctx->pc = 0x7F03DC00u;
    // 7F03DC00: stw     r0, 3812(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3812);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03DC04:
    ctx->pc = 0x7F03DC04u;
    // 7F03DC04: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F03DC08:
    ctx->pc = 0x7F03DC08u;
    // 7F03DC08: addi    r4, r3, -11568
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-11568);

label_7F03DC0C:
    ctx->pc = 0x7F03DC0Cu;
    // 7F03DC0C: lis     r5, 256
    ctx->gpr[5] = ((u32)(s32)(256) << 16);

label_7F03DC10:
    ctx->pc = 0x7F03DC10u;
    // 7F03DC10: sth     r31, 106(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(106);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_7F03DC14:
    ctx->pc = 0x7F03DC14u;
    // 7F03DC14: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F03DC18:
    ctx->pc = 0x7F03DC18u;
    // 7F03DC18: subf   r0, r31, r30
    {
        u32 a = ~ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F03DC1C:
    ctx->pc = 0x7F03DC1Cu;
    // 7F03DC1C: addi    r9, r6, 22020
    ctx->gpr[9] = ctx->gpr[6] + (u32)(s32)(22020);

label_7F03DC20:
    ctx->pc = 0x7F03DC20u;
    // 7F03DC20: stw     r3, 112(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F03DC24:
    ctx->pc = 0x7F03DC24u;
    // 7F03DC24: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03DC28:
    ctx->pc = 0x7F03DC28u;
    // 7F03DC28: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F03DC28u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03DC2C:
    ctx->pc = 0x7F03DC2Cu;
    // 7F03DC2C: addi    r6, r5, -1
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-1);

label_7F03DC30:
    ctx->pc = 0x7F03DC30u;
    // 7F03DC30: stw     r0, 3956(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3956);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03DC34:
    ctx->pc = 0x7F03DC34u;
    // 7F03DC34: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03DC38:
    ctx->pc = 0x7F03DC38u;
    // 7F03DC38: li      r7, 6
    ctx->gpr[7] = (u32)(s32)(6);

label_7F03DC3C:
    ctx->pc = 0x7F03DC3Cu;
    // 7F03DC3C: li      r8, 40
    ctx->gpr[8] = (u32)(s32)(40);

label_7F03DC40:
    ctx->pc = 0x7F03DC40u;
    // 7F03DC40: lwz     r4, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03DC44:
    ctx->pc = 0x7F03DC44u;
    // 7F03DC44: bl      0x7F040774
    {
            ctx->lr = 0x7F03DC48u;
            ctx->pc = 0x7F040774u;
            return;
    }

label_7F03DC48:
    ctx->pc = 0x7F03DC48u;
    ctx->downcount -= 5;
    // 7F03DC48: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03DC4C:
    ctx->pc = 0x7F03DC4Cu;
    // 7F03DC4C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03DC50:
    ctx->pc = 0x7F03DC50u;
    // 7F03DC50: addi    r4, r4, 22020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22020);

label_7F03DC54:
    ctx->pc = 0x7F03DC54u;
    // 7F03DC54: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03DC58:
    ctx->pc = 0x7F03DC58u;
    // 7F03DC58: bl      0x7F041A78
    {
            ctx->lr = 0x7F03DC5Cu;
            ctx->pc = 0x7F041A78u;
            return;
    }

label_7F03DC5C:
    ctx->pc = 0x7F03DC5Cu;
    ctx->downcount -= 5;
    // 7F03DC5C: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03DC60:
    ctx->pc = 0x7F03DC60u;
    // 7F03DC60: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03DC64:
    ctx->pc = 0x7F03DC64u;
    // 7F03DC64: addi    r4, r4, 22020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22020);

label_7F03DC68:
    ctx->pc = 0x7F03DC68u;
    // 7F03DC68: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03DC6C:
    ctx->pc = 0x7F03DC6Cu;
    // 7F03DC6C: bl      0x7F041A58
    {
            ctx->lr = 0x7F03DC70u;
            ctx->pc = 0x7F041A58u;
            return;
    }

label_7F03DC70:
    ctx->pc = 0x7F03DC70u;
    ctx->downcount -= 7;
    // 7F03DC70: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F03DC74:
    ctx->pc = 0x7F03DC74u;
    // 7F03DC74: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03DC78:
    ctx->pc = 0x7F03DC78u;
    // 7F03DC78: addi    r4, r4, 2904
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2904);

label_7F03DC7C:
    ctx->pc = 0x7F03DC7Cu;
    // 7F03DC7C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F03DC80:
    ctx->pc = 0x7F03DC80u;
    // 7F03DC80: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03DC84:
    ctx->pc = 0x7F03DC84u;
    // 7F03DC84: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03DC88:
    ctx->pc = 0x7F03DC88u;
    // 7F03DC88: bl      0x7F041A84
    {
            ctx->lr = 0x7F03DC8Cu;
            ctx->pc = 0x7F041A84u;
            return;
    }

label_7F03DC8C:
    ctx->pc = 0x7F03DC8Cu;
    ctx->downcount -= 22;
    // 7F03DC8C: lha     r4, 4060(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4060);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03DC90:
    ctx->pc = 0x7F03DC90u;
    // 7F03DC90: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F03DC94:
    ctx->pc = 0x7F03DC94u;
    // 7F03DC94: lha     r5, 4064(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4064);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03DC98:
    ctx->pc = 0x7F03DC98u;
    // 7F03DC98: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F03DC9C:
    ctx->pc = 0x7F03DC9Cu;
    // 7F03DC9C: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03DCA0:
    ctx->pc = 0x7F03DCA0u;
    // 7F03DCA0: mullw   r4, r4, r4
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[4] = (u32)product;
    }

label_7F03DCA4:
    ctx->pc = 0x7F03DCA4u;
    // 7F03DCA4: lfd     f1, -11560(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F03DCA4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-11560);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F03DCA8:
    ctx->pc = 0x7F03DCA8u;
    // 7F03DCA8: mullw   r0, r5, r5
    {
        s64 product = (s64)(s32)ctx->gpr[5] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[0] = (u32)product;
    }

label_7F03DCAC:
    ctx->pc = 0x7F03DCACu;
    // 7F03DCAC: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F03DCB0:
    ctx->pc = 0x7F03DCB0u;
    // 7F03DCB0: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F03DCB4:
    ctx->pc = 0x7F03DCB4u;
    // 7F03DCB4: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03DCB8:
    ctx->pc = 0x7F03DCB8u;
    // 7F03DCB8: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F03DCB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F03DCBC:
    ctx->pc = 0x7F03DCBCu;
    // 7F03DCBC: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F03DCBCu)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F03DCC0:
    ctx->pc = 0x7F03DCC0u;
    // 7F03DCC0: bl      0x80006668
    {
            ctx->lr = 0x7F03DCC4u;
            ctx->pc = 0x80006668u;
            return;
    }

label_7F03DCC4:
    ctx->pc = 0x7F03DCC4u;
    ctx->downcount -= 5;
    // 7F03DCC4: fctiwz    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F03DCC4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F03DCC8:
    ctx->pc = 0x7F03DCC8u;
    // 7F03DCC8: lha     r3, 4062(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4062);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03DCCC:
    ctx->pc = 0x7F03DCCCu;
    // 7F03DCCC: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F03DCCCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F03DCD0:
    ctx->pc = 0x7F03DCD0u;
    // 7F03DCD0: lwz     r4, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03DCD4:
    ctx->pc = 0x7F03DCD4u;
    // 7F03DCD4: bl      0x7F02A6B0
    {
            ctx->lr = 0x7F03DCD8u;
            ctx->pc = 0x7F02A6B0u;
            return;
    }

label_7F03DCD8:
    ctx->pc = 0x7F03DCD8u;
    ctx->downcount -= 3;
    // 7F03DCD8: neg  r0, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[0] = (~a) + 1u;
    }

label_7F03DCDC:
    ctx->pc = 0x7F03DCDCu;
    // 7F03DCDC: stw     r0, 3960(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3960);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03DCE0:
    ctx->pc = 0x7F03DCE0u;
    // 7F03DCE0: b       0x7F03DD2C
    {
            goto label_7F03DD2C;
    }

label_7F03DCE4:
    ctx->pc = 0x7F03DCE4u;
    ctx->downcount -= 2;
    // 7F03DCE4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03DCE8:
    ctx->pc = 0x7F03DCE8u;
    // 7F03DCE8: bl      0x7F041620
    {
            ctx->lr = 0x7F03DCECu;
            ctx->pc = 0x7F041620u;
            return;
    }

label_7F03DCEC:
    ctx->pc = 0x7F03DCECu;
    ctx->downcount -= 2;
    // 7F03DCEC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03DCF0:
    ctx->pc = 0x7F03DCF0u;
    // 7F03DCF0: b       0x7F03DD10
    {
            goto label_7F03DD10;
    }

label_7F03DCF4:
    ctx->pc = 0x7F03DCF4u;
    ctx->downcount -= 2;
    // 7F03DCF4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03DCF8:
    ctx->pc = 0x7F03DCF8u;
    // 7F03DCF8: bl      0x7F041620
    {
            ctx->lr = 0x7F03DCFCu;
            ctx->pc = 0x7F041620u;
            return;
    }

label_7F03DCFC:
    ctx->pc = 0x7F03DCFCu;
    ctx->downcount -= 5;
    // 7F03DCFC: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03DD00:
    ctx->pc = 0x7F03DD00u;
    // 7F03DD00: li      r3, 1555
    ctx->gpr[3] = (u32)(s32)(1555);

label_7F03DD04:
    ctx->pc = 0x7F03DD04u;
    // 7F03DD04: or   r30, r0, r0
    {
        ctx->gpr[30] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F03DD08:
    ctx->pc = 0x7F03DD08u;
    // 7F03DD08: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F03DD0C:
    ctx->pc = 0x7F03DD0Cu;
    // 7F03DD0C: bl      0x7F040868
    {
            ctx->lr = 0x7F03DD10u;
            ctx->pc = 0x7F040868u;
            return;
    }

label_7F03DD10:
    ctx->pc = 0x7F03DD10u;
    ctx->downcount -= 3;
    // 7F03DD10: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F03DD14:
    ctx->pc = 0x7F03DD14u;
    // 7F03DD14: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F03DD18:
    ctx->pc = 0x7F03DD18u;
    // 7F03DD18: bl      0x7F03D978
    {
            ctx->lr = 0x7F03DD1Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03D978u;
                return;
            }
            goto label_7F03D978;
    }

label_7F03DD1C:
    ctx->pc = 0x7F03DD1Cu;
    ctx->downcount -= 2;
    // 7F03DD1C: cmpwi   r30, 0
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

label_7F03DD20:
    ctx->pc = 0x7F03DD20u;
    // 7F03DD20: bc    4, 2, 0x7F03DD2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03DD2C;
        }
    }

label_7F03DD24:
    ctx->pc = 0x7F03DD24u;
    ctx->downcount -= 2;
    // 7F03DD24: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03DD28:
    ctx->pc = 0x7F03DD28u;
    // 7F03DD28: bl      0x7F03CD4C
    {
            ctx->lr = 0x7F03DD2Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03CD4Cu;
                return;
            }
            goto label_7F03CD4C;
    }

label_7F03DD2C:
    ctx->pc = 0x7F03DD2Cu;
    ctx->downcount -= 16;
    // 7F03DD2C: lmw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F03DD30:
    ctx->pc = 0x7F03DD30u;
    // 7F03DD30: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03DD34:
    ctx->pc = 0x7F03DD34u;
    // 7F03DD34: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03DD38:
    ctx->pc = 0x7F03DD38u;
    // 7F03DD38: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F03DD3C:
    ctx->pc = 0x7F03DD3Cu;
    // 7F03DD3C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03DD40:
    ctx->pc = 0x7F03DD40u;
    ctx->downcount -= 19;
    // 7F03DD40: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03DD44:
    ctx->pc = 0x7F03DD44u;
    // 7F03DD44: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03DD48:
    ctx->pc = 0x7F03DD48u;
    // 7F03DD48: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03DD4C:
    ctx->pc = 0x7F03DD4Cu;
    // 7F03DD4C: stmw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F03DD50:
    ctx->pc = 0x7F03DD50u;
    // 7F03DD50: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03DD54:
    ctx->pc = 0x7F03DD54u;
    // 7F03DD54: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F03DD58:
    ctx->pc = 0x7F03DD58u;
    // 7F03DD58: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F03DD5C:
    ctx->pc = 0x7F03DD5Cu;
    // 7F03DD5C: addi    r3, r28, 64
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(64);

label_7F03DD60:
    ctx->pc = 0x7F03DD60u;
    // 7F03DD60: bl      0x7F041AB0
    {
            ctx->lr = 0x7F03DD64u;
            ctx->pc = 0x7F041AB0u;
            return;
    }

label_7F03DD64:
    ctx->pc = 0x7F03DD64u;
    ctx->downcount -= 5;
    // 7F03DD64: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F03DD68:
    ctx->pc = 0x7F03DD68u;
    // 7F03DD68: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F03DD6C:
    ctx->pc = 0x7F03DD6Cu;
    // 7F03DD6C: addi    r3, r3, 22056
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22056);

label_7F03DD70:
    ctx->pc = 0x7F03DD70u;
    // 7F03DD70: addi    r5, r1, 16
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03DD74:
    ctx->pc = 0x7F03DD74u;
    // 7F03DD74: bl      0x7F3CC634
    {
            ctx->lr = 0x7F03DD78u;
            ctx->pc = 0x7F3CC634u;
            return;
    }

label_7F03DD78:
    ctx->pc = 0x7F03DD78u;
    ctx->downcount -= 2;
    // 7F03DD78: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03DD7C:
    ctx->pc = 0x7F03DD7Cu;
    // 7F03DD7C: bl      0x7F3CC44C
    {
            ctx->lr = 0x7F03DD80u;
            ctx->pc = 0x7F3CC44Cu;
            return;
    }

label_7F03DD80:
    ctx->pc = 0x7F03DD80u;
    ctx->downcount -= 4;
    // 7F03DD80: lwz     r0, 4088(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4088);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03DD84:
    ctx->pc = 0x7F03DD84u;
    // 7F03DD84: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03DD88:
    ctx->pc = 0x7F03DD88u;
    // 7F03DD88: cmpwi   r0, 240
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

label_7F03DD8C:
    ctx->pc = 0x7F03DD8Cu;
    // 7F03DD8C: bc    4, 1, 0x7F03DDB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03DDB8;
        }
    }

label_7F03DD90:
    ctx->pc = 0x7F03DD90u;
    ctx->downcount -= 10;
    // 7F03DD90: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F03DD94:
    ctx->pc = 0x7F03DD94u;
    // 7F03DD94: stw     r0, 3852(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3852);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03DD98:
    ctx->pc = 0x7F03DD98u;
    // 7F03DD98: lwz     r3, 64(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03DD9C:
    ctx->pc = 0x7F03DD9Cu;
    // 7F03DD9C: lwz     r0, 68(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03DDA0:
    ctx->pc = 0x7F03DDA0u;
    // 7F03DDA0: stw     r3, 3796(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3796);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F03DDA4:
    ctx->pc = 0x7F03DDA4u;
    // 7F03DDA4: stw     r0, 3800(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3800);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03DDA8:
    ctx->pc = 0x7F03DDA8u;
    // 7F03DDA8: lwz     r3, 72(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(72);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03DDAC:
    ctx->pc = 0x7F03DDACu;
    // 7F03DDAC: lwz     r0, 76(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03DDB0:
    ctx->pc = 0x7F03DDB0u;
    // 7F03DDB0: stw     r3, 3804(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3804);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F03DDB4:
    ctx->pc = 0x7F03DDB4u;
    // 7F03DDB4: stw     r0, 3808(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3808);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03DDB8:
    ctx->pc = 0x7F03DDB8u;
    ctx->downcount -= 3;
    // 7F03DDB8: lwz     r0, 3852(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3852);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03DDBC:
    ctx->pc = 0x7F03DDBCu;
    // 7F03DDBC: cmpwi   r0, 0
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

label_7F03DDC0:
    ctx->pc = 0x7F03DDC0u;
    // 7F03DDC0: bc    12, 2, 0x7F03DFD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03DFD4;
        }
    }

label_7F03DDC4:
    ctx->pc = 0x7F03DDC4u;
    ctx->downcount -= 3;
    // 7F03DDC4: lha     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03DDC8:
    ctx->pc = 0x7F03DDC8u;
    // 7F03DDC8: lha     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03DDCC:
    ctx->pc = 0x7F03DDCCu;
    // 7F03DDCC: bl      0x7F02A6B0
    {
            ctx->lr = 0x7F03DDD0u;
            ctx->pc = 0x7F02A6B0u;
            return;
    }

label_7F03DDD0:
    ctx->pc = 0x7F03DDD0u;
    ctx->downcount -= 5;
    // 7F03DDD0: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03DDD4:
    ctx->pc = 0x7F03DDD4u;
    // 7F03DDD4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03DDD8:
    ctx->pc = 0x7F03DDD8u;
    // 7F03DDD8: or   r30, r0, r0
    {
        ctx->gpr[30] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F03DDDC:
    ctx->pc = 0x7F03DDDCu;
    // 7F03DDDC: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03DDE0:
    ctx->pc = 0x7F03DDE0u;
    // 7F03DDE0: bl      0x7F040A38
    {
            ctx->lr = 0x7F03DDE4u;
            ctx->pc = 0x7F040A38u;
            return;
    }

label_7F03DDE4:
    ctx->pc = 0x7F03DDE4u;
    ctx->downcount -= 2;
    // 7F03DDE4: cmpwi   r3, 0
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

label_7F03DDE8:
    ctx->pc = 0x7F03DDE8u;
    // 7F03DDE8: bc    12, 2, 0x7F03DF38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03DF38;
        }
    }

label_7F03DDEC:
    ctx->pc = 0x7F03DDECu;
    ctx->downcount -= 3;
    // 7F03DDEC: lwz     r0, 3816(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3816);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03DDF0:
    ctx->pc = 0x7F03DDF0u;
    // 7F03DDF0: cmpwi   r0, 0
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

label_7F03DDF4:
    ctx->pc = 0x7F03DDF4u;
    // 7F03DDF4: bc    4, 1, 0x7F03DF38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03DF38;
        }
    }

label_7F03DDF8:
    ctx->pc = 0x7F03DDF8u;
    ctx->downcount -= 4;
    // 7F03DDF8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F03DDFC:
    ctx->pc = 0x7F03DDFCu;
    // 7F03DDFC: lwz     r0, 3016(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3016);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03DE00:
    ctx->pc = 0x7F03DE00u;
    // 7F03DE00: cmpwi   r0, 0
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

label_7F03DE04:
    ctx->pc = 0x7F03DE04u;
    // 7F03DE04: bc    12, 2, 0x7F03DE10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03DE10;
        }
    }

label_7F03DE08:
    ctx->pc = 0x7F03DE08u;
    ctx->downcount -= 2;
    // 7F03DE08: cmpw    r31, r0
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

label_7F03DE0C:
    ctx->pc = 0x7F03DE0Cu;
    // 7F03DE0C: bc    4, 1, 0x7F03DF38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03DF38;
        }
    }

label_7F03DE10:
    ctx->pc = 0x7F03DE10u;
    ctx->downcount -= 4;
    // 7F03DE10: lwz     r0, 4084(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4084);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03DE14:
    ctx->pc = 0x7F03DE14u;
    // 7F03DE14: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03DE18:
    ctx->pc = 0x7F03DE18u;
    // 7F03DE18: stw     r0, 3868(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3868);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03DE1C:
    ctx->pc = 0x7F03DE1Cu;
    // 7F03DE1C: bl      0x7F03CE4C
    {
            ctx->lr = 0x7F03DE20u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03CE4Cu;
                return;
            }
            goto label_7F03CE4C;
    }

label_7F03DE20:
    ctx->pc = 0x7F03DE20u;
    ctx->downcount -= 10;
    // 7F03DE20: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F03DE24:
    ctx->pc = 0x7F03DE24u;
    // 7F03DE24: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F03DE28:
    ctx->pc = 0x7F03DE28u;
    // 7F03DE28: stw     r0, 3840(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3840);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03DE2C:
    ctx->pc = 0x7F03DE2Cu;
    // 7F03DE2C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F03DE30:
    ctx->pc = 0x7F03DE30u;
    // 7F03DE30: stw     r0, 4068(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4068);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03DE34:
    ctx->pc = 0x7F03DE34u;
    // 7F03DE34: lwz     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F03DE38:
    ctx->pc = 0x7F03DE38u;
    // 7F03DE38: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03DE3C:
    ctx->pc = 0x7F03DE3Cu;
    // 7F03DE3C: stw     r5, 4060(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4060);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F03DE40:
    ctx->pc = 0x7F03DE40u;
    // 7F03DE40: stw     r0, 4064(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4064);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03DE44:
    ctx->pc = 0x7F03DE44u;
    // 7F03DE44: bl      0x7F03D978
    {
            ctx->lr = 0x7F03DE48u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03D978u;
                return;
            }
            goto label_7F03D978;
    }

label_7F03DE48:
    ctx->pc = 0x7F03DE48u;
    ctx->downcount -= 19;
    // 7F03DE48: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F03DE4C:
    ctx->pc = 0x7F03DE4Cu;
    // 7F03DE4C: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F03DE50:
    ctx->pc = 0x7F03DE50u;
    // 7F03DE50: stw     r10, 3812(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3812);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F03DE54:
    ctx->pc = 0x7F03DE54u;
    // 7F03DE54: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F03DE58:
    ctx->pc = 0x7F03DE58u;
    // 7F03DE58: lis     r4, 256
    ctx->gpr[4] = ((u32)(s32)(256) << 16);

label_7F03DE5C:
    ctx->pc = 0x7F03DE5Cu;
    // 7F03DE5C: addi    r9, r5, 22020
    ctx->gpr[9] = ctx->gpr[5] + (u32)(s32)(22020);

label_7F03DE60:
    ctx->pc = 0x7F03DE60u;
    // 7F03DE60: stw     r10, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F03DE64:
    ctx->pc = 0x7F03DE64u;
    // 7F03DE64: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F03DE68:
    ctx->pc = 0x7F03DE68u;
    // 7F03DE68: lfs     f1, -11568(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F03DE68u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-11568);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03DE6C:
    ctx->pc = 0x7F03DE6Cu;
    // 7F03DE6C: addi    r6, r4, -1
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F03DE70:
    ctx->pc = 0x7F03DE70u;
    // 7F03DE70: sth     r30, 106(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(106);
        mem_write16(ctx, ea, (u16)ctx->gpr[30]);
    }

label_7F03DE74:
    ctx->pc = 0x7F03DE74u;
    // 7F03DE74: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03DE78:
    ctx->pc = 0x7F03DE78u;
    // 7F03DE78: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03DE7C:
    ctx->pc = 0x7F03DE7Cu;
    // 7F03DE7C: li      r7, 6
    ctx->gpr[7] = (u32)(s32)(6);

label_7F03DE80:
    ctx->pc = 0x7F03DE80u;
    // 7F03DE80: stw     r0, 112(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03DE84:
    ctx->pc = 0x7F03DE84u;
    // 7F03DE84: li      r8, 40
    ctx->gpr[8] = (u32)(s32)(40);

label_7F03DE88:
    ctx->pc = 0x7F03DE88u;
    // 7F03DE88: stw     r10, 3956(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3956);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F03DE8C:
    ctx->pc = 0x7F03DE8Cu;
    // 7F03DE8C: lwz     r4, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03DE90:
    ctx->pc = 0x7F03DE90u;
    // 7F03DE90: bl      0x7F040774
    {
            ctx->lr = 0x7F03DE94u;
            ctx->pc = 0x7F040774u;
            return;
    }

label_7F03DE94:
    ctx->pc = 0x7F03DE94u;
    ctx->downcount -= 5;
    // 7F03DE94: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03DE98:
    ctx->pc = 0x7F03DE98u;
    // 7F03DE98: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03DE9C:
    ctx->pc = 0x7F03DE9Cu;
    // 7F03DE9C: addi    r4, r4, 22020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22020);

label_7F03DEA0:
    ctx->pc = 0x7F03DEA0u;
    // 7F03DEA0: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03DEA4:
    ctx->pc = 0x7F03DEA4u;
    // 7F03DEA4: bl      0x7F041A78
    {
            ctx->lr = 0x7F03DEA8u;
            ctx->pc = 0x7F041A78u;
            return;
    }

label_7F03DEA8:
    ctx->pc = 0x7F03DEA8u;
    ctx->downcount -= 5;
    // 7F03DEA8: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03DEAC:
    ctx->pc = 0x7F03DEACu;
    // 7F03DEAC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03DEB0:
    ctx->pc = 0x7F03DEB0u;
    // 7F03DEB0: addi    r4, r4, 22020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22020);

label_7F03DEB4:
    ctx->pc = 0x7F03DEB4u;
    // 7F03DEB4: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03DEB8:
    ctx->pc = 0x7F03DEB8u;
    // 7F03DEB8: bl      0x7F041A58
    {
            ctx->lr = 0x7F03DEBCu;
            ctx->pc = 0x7F041A58u;
            return;
    }

label_7F03DEBC:
    ctx->pc = 0x7F03DEBCu;
    ctx->downcount -= 7;
    // 7F03DEBC: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F03DEC0:
    ctx->pc = 0x7F03DEC0u;
    // 7F03DEC0: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03DEC4:
    ctx->pc = 0x7F03DEC4u;
    // 7F03DEC4: addi    r4, r4, 2904
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2904);

label_7F03DEC8:
    ctx->pc = 0x7F03DEC8u;
    // 7F03DEC8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F03DECC:
    ctx->pc = 0x7F03DECCu;
    // 7F03DECC: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03DED0:
    ctx->pc = 0x7F03DED0u;
    // 7F03DED0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03DED4:
    ctx->pc = 0x7F03DED4u;
    // 7F03DED4: bl      0x7F041A84
    {
            ctx->lr = 0x7F03DED8u;
            ctx->pc = 0x7F041A84u;
            return;
    }

label_7F03DED8:
    ctx->pc = 0x7F03DED8u;
    ctx->downcount -= 24;
    // 7F03DED8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F03DEDC:
    ctx->pc = 0x7F03DEDCu;
    // 7F03DEDC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F03DEE0:
    ctx->pc = 0x7F03DEE0u;
    // 7F03DEE0: stw     r3, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F03DEE4:
    ctx->pc = 0x7F03DEE4u;
    // 7F03DEE4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F03DEE8:
    ctx->pc = 0x7F03DEE8u;
    // 7F03DEE8: lfd     f1, -11560(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F03DEE8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-11560);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F03DEEC:
    ctx->pc = 0x7F03DEECu;
    // 7F03DEEC: lha     r4, 4060(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4060);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03DEF0:
    ctx->pc = 0x7F03DEF0u;
    // 7F03DEF0: lha     r5, 4064(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4064);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03DEF4:
    ctx->pc = 0x7F03DEF4u;
    // 7F03DEF4: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03DEF8:
    ctx->pc = 0x7F03DEF8u;
    // 7F03DEF8: mullw   r4, r4, r4
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[4] = (u32)product;
    }

label_7F03DEFC:
    ctx->pc = 0x7F03DEFCu;
    // 7F03DEFC: mullw   r0, r5, r5
    {
        s64 product = (s64)(s32)ctx->gpr[5] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[0] = (u32)product;
    }

label_7F03DF00:
    ctx->pc = 0x7F03DF00u;
    // 7F03DF00: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F03DF04:
    ctx->pc = 0x7F03DF04u;
    // 7F03DF04: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F03DF08:
    ctx->pc = 0x7F03DF08u;
    // 7F03DF08: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03DF0C:
    ctx->pc = 0x7F03DF0Cu;
    // 7F03DF0C: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F03DF0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F03DF10:
    ctx->pc = 0x7F03DF10u;
    // 7F03DF10: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F03DF10u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F03DF14:
    ctx->pc = 0x7F03DF14u;
    // 7F03DF14: bl      0x80006668
    {
            ctx->lr = 0x7F03DF18u;
            ctx->pc = 0x80006668u;
            return;
    }

label_7F03DF18:
    ctx->pc = 0x7F03DF18u;
    ctx->downcount -= 5;
    // 7F03DF18: fctiwz    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F03DF18u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F03DF1C:
    ctx->pc = 0x7F03DF1Cu;
    // 7F03DF1C: lha     r3, 4062(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4062);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03DF20:
    ctx->pc = 0x7F03DF20u;
    // 7F03DF20: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F03DF20u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F03DF24:
    ctx->pc = 0x7F03DF24u;
    // 7F03DF24: lwz     r4, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03DF28:
    ctx->pc = 0x7F03DF28u;
    // 7F03DF28: bl      0x7F02A6B0
    {
            ctx->lr = 0x7F03DF2Cu;
            ctx->pc = 0x7F02A6B0u;
            return;
    }

label_7F03DF2C:
    ctx->pc = 0x7F03DF2Cu;
    ctx->downcount -= 3;
    // 7F03DF2C: neg  r0, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[0] = (~a) + 1u;
    }

label_7F03DF30:
    ctx->pc = 0x7F03DF30u;
    // 7F03DF30: stw     r0, 3960(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3960);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03DF34:
    ctx->pc = 0x7F03DF34u;
    // 7F03DF34: b       0x7F03E040
    {
            goto label_7F03E040;
    }

label_7F03DF38:
    ctx->pc = 0x7F03DF38u;
    ctx->downcount -= 3;
    // 7F03DF38: lwz     r0, 3816(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3816);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03DF3C:
    ctx->pc = 0x7F03DF3Cu;
    // 7F03DF3C: cmpwi   r0, 0
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

label_7F03DF40:
    ctx->pc = 0x7F03DF40u;
    // 7F03DF40: bc    12, 1, 0x7F03DFBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03DFBC;
        }
    }

label_7F03DF44:
    ctx->pc = 0x7F03DF44u;
    ctx->downcount -= 3;
    // 7F03DF44: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F03DF48:
    ctx->pc = 0x7F03DF48u;
    // 7F03DF48: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F03DF4C:
    ctx->pc = 0x7F03DF4Cu;
    // 7F03DF4C: bl      0x7F03D978
    {
            ctx->lr = 0x7F03DF50u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03D978u;
                return;
            }
            goto label_7F03D978;
    }

label_7F03DF50:
    ctx->pc = 0x7F03DF50u;
    ctx->downcount -= 2;
    // 7F03DF50: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03DF54:
    ctx->pc = 0x7F03DF54u;
    // 7F03DF54: bl      0x7F03D6C8
    {
            ctx->lr = 0x7F03DF58u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03D6C8u;
                return;
            }
            goto label_7F03D6C8;
    }

label_7F03DF58:
    ctx->pc = 0x7F03DF58u;
    ctx->downcount -= 2;
    // 7F03DF58: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03DF5C:
    ctx->pc = 0x7F03DF5Cu;
    // 7F03DF5C: bl      0x7F041680
    {
            ctx->lr = 0x7F03DF60u;
            ctx->pc = 0x7F041680u;
            return;
    }

label_7F03DF60:
    ctx->pc = 0x7F03DF60u;
    ctx->downcount -= 2;
    // 7F03DF60: cmpwi   r3, 0
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

label_7F03DF64:
    ctx->pc = 0x7F03DF64u;
    // 7F03DF64: bc    4, 2, 0x7F03DF70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03DF70;
        }
    }

label_7F03DF68:
    ctx->pc = 0x7F03DF68u;
    ctx->downcount -= 2;
    // 7F03DF68: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03DF6C:
    ctx->pc = 0x7F03DF6Cu;
    // 7F03DF6C: bl      0x7F03CD4C
    {
            ctx->lr = 0x7F03DF70u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03CD4Cu;
                return;
            }
            goto label_7F03CD4C;
    }

label_7F03DF70:
    ctx->pc = 0x7F03DF70u;
    ctx->downcount -= 3;
    // 7F03DF70: lwz     r0, 3992(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3992);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03DF74:
    ctx->pc = 0x7F03DF74u;
    // 7F03DF74: cmpwi   r0, 0
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

label_7F03DF78:
    ctx->pc = 0x7F03DF78u;
    // 7F03DF78: bc    4, 2, 0x7F03E040
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03E040;
        }
    }

label_7F03DF7C:
    ctx->pc = 0x7F03DF7Cu;
    ctx->downcount -= 3;
    // 7F03DF7C: lwz     r0, 3996(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3996);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03DF80:
    ctx->pc = 0x7F03DF80u;
    // 7F03DF80: cmpwi   r0, 3
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

label_7F03DF84:
    ctx->pc = 0x7F03DF84u;
    // 7F03DF84: bc    4, 0, 0x7F03E040
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03E040;
        }
    }

label_7F03DF88:
    ctx->pc = 0x7F03DF88u;
    ctx->downcount -= 3;
    // 7F03DF88: lwz     r0, 4004(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4004);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03DF8C:
    ctx->pc = 0x7F03DF8Cu;
    // 7F03DF8C: cmpwi   r0, 0
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

label_7F03DF90:
    ctx->pc = 0x7F03DF90u;
    // 7F03DF90: bc    4, 2, 0x7F03E040
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03E040;
        }
    }

label_7F03DF94:
    ctx->pc = 0x7F03DF94u;
    ctx->downcount -= 2;
    // 7F03DF94: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03DF98:
    ctx->pc = 0x7F03DF98u;
    // 7F03DF98: bl      0x7F041908
    {
            ctx->lr = 0x7F03DF9Cu;
            ctx->pc = 0x7F041908u;
            return;
    }

label_7F03DF9C:
    ctx->pc = 0x7F03DF9Cu;
    ctx->downcount -= 2;
    // 7F03DF9C: cmpwi   r3, 0
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

label_7F03DFA0:
    ctx->pc = 0x7F03DFA0u;
    // 7F03DFA0: bc    4, 2, 0x7F03DFB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03DFB0;
        }
    }

label_7F03DFA4:
    ctx->pc = 0x7F03DFA4u;
    ctx->downcount -= 3;
    // 7F03DFA4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03DFA8:
    ctx->pc = 0x7F03DFA8u;
    // 7F03DFA8: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F03DFAC:
    ctx->pc = 0x7F03DFACu;
    // 7F03DFAC: bl      0x7F041878
    {
            ctx->lr = 0x7F03DFB0u;
            ctx->pc = 0x7F041878u;
            return;
    }

label_7F03DFB0:
    ctx->pc = 0x7F03DFB0u;
    ctx->downcount -= 3;
    // 7F03DFB0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F03DFB4:
    ctx->pc = 0x7F03DFB4u;
    // 7F03DFB4: stw     r0, 4004(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03DFB8:
    ctx->pc = 0x7F03DFB8u;
    // 7F03DFB8: b       0x7F03E040
    {
            goto label_7F03E040;
    }

label_7F03DFBC:
    ctx->pc = 0x7F03DFBCu;
    ctx->downcount -= 2;
    // 7F03DFBC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03DFC0:
    ctx->pc = 0x7F03DFC0u;
    // 7F03DFC0: bl      0x7F041620
    {
            ctx->lr = 0x7F03DFC4u;
            ctx->pc = 0x7F041620u;
            return;
    }

label_7F03DFC4:
    ctx->pc = 0x7F03DFC4u;
    ctx->downcount -= 2;
    // 7F03DFC4: cmpwi   r3, 0
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

label_7F03DFC8:
    ctx->pc = 0x7F03DFC8u;
    // 7F03DFC8: bc    4, 2, 0x7F03DFD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03DFD4;
        }
    }

label_7F03DFCC:
    ctx->pc = 0x7F03DFCCu;
    ctx->downcount -= 2;
    // 7F03DFCC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03DFD0:
    ctx->pc = 0x7F03DFD0u;
    // 7F03DFD0: bl      0x7F03CD4C
    {
            ctx->lr = 0x7F03DFD4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03CD4Cu;
                return;
            }
            goto label_7F03CD4C;
    }

label_7F03DFD4:
    ctx->pc = 0x7F03DFD4u;
    ctx->downcount -= 2;
    // 7F03DFD4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03DFD8:
    ctx->pc = 0x7F03DFD8u;
    // 7F03DFD8: bl      0x7F0411A8
    {
            ctx->lr = 0x7F03DFDCu;
            ctx->pc = 0x7F0411A8u;
            return;
    }

label_7F03DFDC:
    ctx->pc = 0x7F03DFDCu;
    ctx->downcount -= 6;
    // 7F03DFDC: lwz     r0, 3840(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3840);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03DFE0:
    ctx->pc = 0x7F03DFE0u;
    // 7F03DFE0: or   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[3];
    }

label_7F03DFE4:
    ctx->pc = 0x7F03DFE4u;
    // 7F03DFE4: stw     r0, 3840(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3840);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03DFE8:
    ctx->pc = 0x7F03DFE8u;
    // 7F03DFE8: lwz     r0, 3840(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3840);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03DFEC:
    ctx->pc = 0x7F03DFECu;
    // 7F03DFEC: cmpwi   r0, 0
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

label_7F03DFF0:
    ctx->pc = 0x7F03DFF0u;
    // 7F03DFF0: bc    12, 2, 0x7F03E040
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03E040;
        }
    }

label_7F03DFF4:
    ctx->pc = 0x7F03DFF4u;
    ctx->downcount -= 3;
    // 7F03DFF4: lwz     r0, 4100(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03DFF8:
    ctx->pc = 0x7F03DFF8u;
    // 7F03DFF8: cmpw    r31, r0
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

label_7F03DFFC:
    ctx->pc = 0x7F03DFFCu;
    // 7F03DFFC: bc    4, 0, 0x7F03E01C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03E01C;
        }
    }

label_7F03E000:
    ctx->pc = 0x7F03E000u;
    ctx->downcount -= 2;
    // 7F03E000: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03E004:
    ctx->pc = 0x7F03E004u;
    // 7F03E004: bl      0x7F041650
    {
            ctx->lr = 0x7F03E008u;
            ctx->pc = 0x7F041650u;
            return;
    }

label_7F03E008:
    ctx->pc = 0x7F03E008u;
    ctx->downcount -= 2;
    // 7F03E008: cmpwi   r3, 0
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

label_7F03E00C:
    ctx->pc = 0x7F03E00Cu;
    // 7F03E00C: bc    4, 2, 0x7F03E040
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03E040;
        }
    }

label_7F03E010:
    ctx->pc = 0x7F03E010u;
    ctx->downcount -= 2;
    // 7F03E010: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03E014:
    ctx->pc = 0x7F03E014u;
    // 7F03E014: bl      0x7F03CD4C
    {
            ctx->lr = 0x7F03E018u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03CD4Cu;
                return;
            }
            goto label_7F03CD4C;
    }

label_7F03E018:
    ctx->pc = 0x7F03E018u;
    ctx->downcount -= 1;
    // 7F03E018: b       0x7F03E040
    {
            goto label_7F03E040;
    }

label_7F03E01C:
    ctx->pc = 0x7F03E01Cu;
    ctx->downcount -= 3;
    // 7F03E01C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F03E020:
    ctx->pc = 0x7F03E020u;
    // 7F03E020: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F03E024:
    ctx->pc = 0x7F03E024u;
    // 7F03E024: bl      0x7F03D978
    {
            ctx->lr = 0x7F03E028u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03D978u;
                return;
            }
            goto label_7F03D978;
    }

label_7F03E028:
    ctx->pc = 0x7F03E028u;
    ctx->downcount -= 4;
    // 7F03E028: lwz     r0, 4084(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4084);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03E02C:
    ctx->pc = 0x7F03E02Cu;
    // 7F03E02C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03E030:
    ctx->pc = 0x7F03E030u;
    // 7F03E030: stw     r0, 3868(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3868);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03E034:
    ctx->pc = 0x7F03E034u;
    // 7F03E034: bl      0x7F03CE4C
    {
            ctx->lr = 0x7F03E038u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03CE4Cu;
                return;
            }
            goto label_7F03CE4C;
    }

label_7F03E038:
    ctx->pc = 0x7F03E038u;
    ctx->downcount -= 2;
    // 7F03E038: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F03E03C:
    ctx->pc = 0x7F03E03Cu;
    // 7F03E03C: stw     r0, 3840(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3840);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03E040:
    ctx->pc = 0x7F03E040u;
    ctx->downcount -= 16;
    // 7F03E040: lmw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F03E044:
    ctx->pc = 0x7F03E044u;
    // 7F03E044: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03E048:
    ctx->pc = 0x7F03E048u;
    // 7F03E048: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03E04C:
    ctx->pc = 0x7F03E04Cu;
    // 7F03E04C: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F03E050:
    ctx->pc = 0x7F03E050u;
    // 7F03E050: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03E054:
    ctx->pc = 0x7F03E054u;
    ctx->downcount -= 19;
    // 7F03E054: stwu     r1, -160(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-160);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03E058:
    ctx->pc = 0x7F03E058u;
    // 7F03E058: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03E05C:
    ctx->pc = 0x7F03E05Cu;
    // 7F03E05C: stw     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03E060:
    ctx->pc = 0x7F03E060u;
    // 7F03E060: stmw     r28, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F03E064:
    ctx->pc = 0x7F03E064u;
    // 7F03E064: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03E068:
    ctx->pc = 0x7F03E068u;
    // 7F03E068: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F03E06C:
    ctx->pc = 0x7F03E06Cu;
    // 7F03E06C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F03E070:
    ctx->pc = 0x7F03E070u;
    // 7F03E070: addi    r3, r29, 64
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(64);

label_7F03E074:
    ctx->pc = 0x7F03E074u;
    // 7F03E074: bl      0x7F041AB0
    {
            ctx->lr = 0x7F03E078u;
            ctx->pc = 0x7F041AB0u;
            return;
    }

label_7F03E078:
    ctx->pc = 0x7F03E078u;
    ctx->downcount -= 5;
    // 7F03E078: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F03E07C:
    ctx->pc = 0x7F03E07Cu;
    // 7F03E07C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F03E080:
    ctx->pc = 0x7F03E080u;
    // 7F03E080: addi    r3, r3, 22056
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22056);

label_7F03E084:
    ctx->pc = 0x7F03E084u;
    // 7F03E084: addi    r5, r1, 16
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03E088:
    ctx->pc = 0x7F03E088u;
    // 7F03E088: bl      0x7F3CC634
    {
            ctx->lr = 0x7F03E08Cu;
            ctx->pc = 0x7F3CC634u;
            return;
    }

label_7F03E08C:
    ctx->pc = 0x7F03E08Cu;
    ctx->downcount -= 22;
    // 7F03E08C: lha     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03E090:
    ctx->pc = 0x7F03E090u;
    // 7F03E090: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F03E094:
    ctx->pc = 0x7F03E094u;
    // 7F03E094: lha     r5, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03E098:
    ctx->pc = 0x7F03E098u;
    // 7F03E098: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F03E09C:
    ctx->pc = 0x7F03E09Cu;
    // 7F03E09C: stw     r0, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03E0A0:
    ctx->pc = 0x7F03E0A0u;
    // 7F03E0A0: mullw   r4, r4, r4
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[4] = (u32)product;
    }

label_7F03E0A4:
    ctx->pc = 0x7F03E0A4u;
    // 7F03E0A4: lfd     f1, -11560(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F03E0A4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-11560);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F03E0A8:
    ctx->pc = 0x7F03E0A8u;
    // 7F03E0A8: mullw   r0, r5, r5
    {
        s64 product = (s64)(s32)ctx->gpr[5] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[0] = (u32)product;
    }

label_7F03E0AC:
    ctx->pc = 0x7F03E0ACu;
    // 7F03E0AC: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F03E0B0:
    ctx->pc = 0x7F03E0B0u;
    // 7F03E0B0: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F03E0B4:
    ctx->pc = 0x7F03E0B4u;
    // 7F03E0B4: stw     r0, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03E0B8:
    ctx->pc = 0x7F03E0B8u;
    // 7F03E0B8: lfd     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F03E0B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F03E0BC:
    ctx->pc = 0x7F03E0BCu;
    // 7F03E0BC: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F03E0BCu)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F03E0C0:
    ctx->pc = 0x7F03E0C0u;
    // 7F03E0C0: bl      0x80006668
    {
            ctx->lr = 0x7F03E0C4u;
            ctx->pc = 0x80006668u;
            return;
    }

label_7F03E0C4:
    ctx->pc = 0x7F03E0C4u;
    ctx->downcount -= 6;
    // 7F03E0C4: fctiwz    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F03E0C4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F03E0C8:
    ctx->pc = 0x7F03E0C8u;
    // 7F03E0C8: lha     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03E0CC:
    ctx->pc = 0x7F03E0CCu;
    // 7F03E0CC: lha     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03E0D0:
    ctx->pc = 0x7F03E0D0u;
    // 7F03E0D0: stfd     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F03E0D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F03E0D4:
    ctx->pc = 0x7F03E0D4u;
    // 7F03E0D4: lwz     r31, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F03E0D8:
    ctx->pc = 0x7F03E0D8u;
    // 7F03E0D8: bl      0x7F02A6B0
    {
            ctx->lr = 0x7F03E0DCu;
            ctx->pc = 0x7F02A6B0u;
            return;
    }

label_7F03E0DC:
    ctx->pc = 0x7F03E0DCu;
    ctx->downcount -= 4;
    // 7F03E0DC: lwz     r0, 3852(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3852);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03E0E0:
    ctx->pc = 0x7F03E0E0u;
    // 7F03E0E0: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03E0E4:
    ctx->pc = 0x7F03E0E4u;
    // 7F03E0E4: cmpwi   r0, 0
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

label_7F03E0E8:
    ctx->pc = 0x7F03E0E8u;
    // 7F03E0E8: bc    12, 2, 0x7F03E230
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03E230;
        }
    }

label_7F03E0EC:
    ctx->pc = 0x7F03E0ECu;
    ctx->downcount -= 2;
    // 7F03E0EC: cmpwi   r31, 5000
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(5000);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03E0F0:
    ctx->pc = 0x7F03E0F0u;
    // 7F03E0F0: bc    12, 0, 0x7F03E114
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03E114;
        }
    }

label_7F03E0F4:
    ctx->pc = 0x7F03E0F4u;
    ctx->downcount -= 3;
    // 7F03E0F4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F03E0F8:
    ctx->pc = 0x7F03E0F8u;
    // 7F03E0F8: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03E0FC:
    ctx->pc = 0x7F03E0FCu;
    // 7F03E0FC: bl      0x7F040A38
    {
            ctx->lr = 0x7F03E100u;
            ctx->pc = 0x7F040A38u;
            return;
    }

label_7F03E100:
    ctx->pc = 0x7F03E100u;
    ctx->downcount -= 2;
    // 7F03E100: cmpwi   r3, 0
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

label_7F03E104:
    ctx->pc = 0x7F03E104u;
    // 7F03E104: bc    12, 2, 0x7F03E114
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03E114;
        }
    }

label_7F03E108:
    ctx->pc = 0x7F03E108u;
    ctx->downcount -= 3;
    // 7F03E108: lwz     r0, 3816(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3816);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03E10C:
    ctx->pc = 0x7F03E10Cu;
    // 7F03E10C: cmpwi   r0, 0
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

label_7F03E110:
    ctx->pc = 0x7F03E110u;
    // 7F03E110: bc    12, 1, 0x7F03E168
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03E168;
        }
    }

label_7F03E114:
    ctx->pc = 0x7F03E114u;
    ctx->downcount -= 2;
    // 7F03E114: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F03E118:
    ctx->pc = 0x7F03E118u;
    // 7F03E118: bl      0x7F041680
    {
            ctx->lr = 0x7F03E11Cu;
            ctx->pc = 0x7F041680u;
            return;
    }

label_7F03E11C:
    ctx->pc = 0x7F03E11Cu;
    ctx->downcount -= 2;
    // 7F03E11C: cmpwi   r3, 0
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

label_7F03E120:
    ctx->pc = 0x7F03E120u;
    // 7F03E120: bc    4, 2, 0x7F03E144
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03E144;
        }
    }

label_7F03E124:
    ctx->pc = 0x7F03E124u;
    ctx->downcount -= 2;
    // 7F03E124: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F03E128:
    ctx->pc = 0x7F03E128u;
    // 7F03E128: bl      0x7F03CD4C
    {
            ctx->lr = 0x7F03E12Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03CD4Cu;
                return;
            }
            goto label_7F03CD4C;
    }

label_7F03E12C:
    ctx->pc = 0x7F03E12Cu;
    ctx->downcount -= 2;
    // 7F03E12C: cmpwi   r3, 0
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

label_7F03E130:
    ctx->pc = 0x7F03E130u;
    // 7F03E130: bc    4, 2, 0x7F03E4F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03E4F0;
        }
    }

label_7F03E134:
    ctx->pc = 0x7F03E134u;
    ctx->downcount -= 3;
    // 7F03E134: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03E138:
    ctx->pc = 0x7F03E138u;
    // 7F03E138: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F03E13C:
    ctx->pc = 0x7F03E13Cu;
    // 7F03E13C: bl      0x7F03D978
    {
            ctx->lr = 0x7F03E140u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03D978u;
                return;
            }
            goto label_7F03D978;
    }

label_7F03E140:
    ctx->pc = 0x7F03E140u;
    ctx->downcount -= 1;
    // 7F03E140: b       0x7F03E4F0
    {
            goto label_7F03E4F0;
    }

label_7F03E144:
    ctx->pc = 0x7F03E144u;
    ctx->downcount -= 3;
    // 7F03E144: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03E148:
    ctx->pc = 0x7F03E148u;
    // 7F03E148: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F03E14C:
    ctx->pc = 0x7F03E14Cu;
    // 7F03E14C: bl      0x7F03D978
    {
            ctx->lr = 0x7F03E150u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03D978u;
                return;
            }
            goto label_7F03D978;
    }

label_7F03E150:
    ctx->pc = 0x7F03E150u;
    ctx->downcount -= 2;
    // 7F03E150: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F03E154:
    ctx->pc = 0x7F03E154u;
    // 7F03E154: bl      0x7F03D65C
    {
            ctx->lr = 0x7F03E158u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03D65Cu;
                return;
            }
            goto label_7F03D65C;
    }

label_7F03E158:
    ctx->pc = 0x7F03E158u;
    ctx->downcount -= 4;
    // 7F03E158: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F03E15C:
    ctx->pc = 0x7F03E15Cu;
    // 7F03E15C: stw     r0, 3956(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3956);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03E160:
    ctx->pc = 0x7F03E160u;
    // 7F03E160: stw     r0, 3960(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3960);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03E164:
    ctx->pc = 0x7F03E164u;
    // 7F03E164: b       0x7F03E4F0
    {
            goto label_7F03E4F0;
    }

label_7F03E168:
    ctx->pc = 0x7F03E168u;
    ctx->downcount -= 9;
    // 7F03E168: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F03E16C:
    ctx->pc = 0x7F03E16Cu;
    // 7F03E16C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03E170:
    ctx->pc = 0x7F03E170u;
    // 7F03E170: stw     r0, 4068(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4068);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03E174:
    ctx->pc = 0x7F03E174u;
    // 7F03E174: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F03E178:
    ctx->pc = 0x7F03E178u;
    // 7F03E178: lwz     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F03E17C:
    ctx->pc = 0x7F03E17Cu;
    // 7F03E17C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03E180:
    ctx->pc = 0x7F03E180u;
    // 7F03E180: stw     r5, 4060(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4060);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F03E184:
    ctx->pc = 0x7F03E184u;
    // 7F03E184: stw     r0, 4064(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4064);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03E188:
    ctx->pc = 0x7F03E188u;
    // 7F03E188: bl      0x7F03D978
    {
            ctx->lr = 0x7F03E18Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03D978u;
                return;
            }
            goto label_7F03D978;
    }

label_7F03E18C:
    ctx->pc = 0x7F03E18Cu;
    ctx->downcount -= 19;
    // 7F03E18C: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F03E190:
    ctx->pc = 0x7F03E190u;
    // 7F03E190: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F03E194:
    ctx->pc = 0x7F03E194u;
    // 7F03E194: stw     r10, 3812(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3812);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F03E198:
    ctx->pc = 0x7F03E198u;
    // 7F03E198: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F03E19C:
    ctx->pc = 0x7F03E19Cu;
    // 7F03E19C: lis     r4, 256
    ctx->gpr[4] = ((u32)(s32)(256) << 16);

label_7F03E1A0:
    ctx->pc = 0x7F03E1A0u;
    // 7F03E1A0: addi    r9, r5, 22020
    ctx->gpr[9] = ctx->gpr[5] + (u32)(s32)(22020);

label_7F03E1A4:
    ctx->pc = 0x7F03E1A4u;
    // 7F03E1A4: stw     r10, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F03E1A8:
    ctx->pc = 0x7F03E1A8u;
    // 7F03E1A8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F03E1AC:
    ctx->pc = 0x7F03E1ACu;
    // 7F03E1AC: lfs     f1, -11568(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F03E1ACu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-11568);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03E1B0:
    ctx->pc = 0x7F03E1B0u;
    // 7F03E1B0: addi    r6, r4, -1
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F03E1B4:
    ctx->pc = 0x7F03E1B4u;
    // 7F03E1B4: sth     r28, 106(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(106);
        mem_write16(ctx, ea, (u16)ctx->gpr[28]);
    }

label_7F03E1B8:
    ctx->pc = 0x7F03E1B8u;
    // 7F03E1B8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F03E1BC:
    ctx->pc = 0x7F03E1BCu;
    // 7F03E1BC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03E1C0:
    ctx->pc = 0x7F03E1C0u;
    // 7F03E1C0: li      r7, 6
    ctx->gpr[7] = (u32)(s32)(6);

label_7F03E1C4:
    ctx->pc = 0x7F03E1C4u;
    // 7F03E1C4: stw     r0, 112(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03E1C8:
    ctx->pc = 0x7F03E1C8u;
    // 7F03E1C8: li      r8, 40
    ctx->gpr[8] = (u32)(s32)(40);

label_7F03E1CC:
    ctx->pc = 0x7F03E1CCu;
    // 7F03E1CC: stw     r10, 3956(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3956);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F03E1D0:
    ctx->pc = 0x7F03E1D0u;
    // 7F03E1D0: lwz     r4, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03E1D4:
    ctx->pc = 0x7F03E1D4u;
    // 7F03E1D4: bl      0x7F040774
    {
            ctx->lr = 0x7F03E1D8u;
            ctx->pc = 0x7F040774u;
            return;
    }

label_7F03E1D8:
    ctx->pc = 0x7F03E1D8u;
    ctx->downcount -= 5;
    // 7F03E1D8: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03E1DC:
    ctx->pc = 0x7F03E1DCu;
    // 7F03E1DC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F03E1E0:
    ctx->pc = 0x7F03E1E0u;
    // 7F03E1E0: addi    r4, r4, 22020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22020);

label_7F03E1E4:
    ctx->pc = 0x7F03E1E4u;
    // 7F03E1E4: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03E1E8:
    ctx->pc = 0x7F03E1E8u;
    // 7F03E1E8: bl      0x7F041A78
    {
            ctx->lr = 0x7F03E1ECu;
            ctx->pc = 0x7F041A78u;
            return;
    }

label_7F03E1EC:
    ctx->pc = 0x7F03E1ECu;
    ctx->downcount -= 5;
    // 7F03E1EC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03E1F0:
    ctx->pc = 0x7F03E1F0u;
    // 7F03E1F0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F03E1F4:
    ctx->pc = 0x7F03E1F4u;
    // 7F03E1F4: addi    r4, r4, 22020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22020);

label_7F03E1F8:
    ctx->pc = 0x7F03E1F8u;
    // 7F03E1F8: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03E1FC:
    ctx->pc = 0x7F03E1FCu;
    // 7F03E1FC: bl      0x7F041A58
    {
            ctx->lr = 0x7F03E200u;
            ctx->pc = 0x7F041A58u;
            return;
    }

label_7F03E200:
    ctx->pc = 0x7F03E200u;
    ctx->downcount -= 7;
    // 7F03E200: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F03E204:
    ctx->pc = 0x7F03E204u;
    // 7F03E204: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F03E208:
    ctx->pc = 0x7F03E208u;
    // 7F03E208: addi    r4, r4, 2904
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2904);

label_7F03E20C:
    ctx->pc = 0x7F03E20Cu;
    // 7F03E20C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F03E210:
    ctx->pc = 0x7F03E210u;
    // 7F03E210: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03E214:
    ctx->pc = 0x7F03E214u;
    // 7F03E214: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03E218:
    ctx->pc = 0x7F03E218u;
    // 7F03E218: bl      0x7F041A84
    {
            ctx->lr = 0x7F03E21Cu;
            ctx->pc = 0x7F041A84u;
            return;
    }

label_7F03E21C:
    ctx->pc = 0x7F03E21Cu;
    ctx->downcount -= 3;
    // 7F03E21C: lha     r3, 4062(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4062);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03E220:
    ctx->pc = 0x7F03E220u;
    // 7F03E220: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03E224:
    ctx->pc = 0x7F03E224u;
    // 7F03E224: bl      0x7F02A6B0
    {
            ctx->lr = 0x7F03E228u;
            ctx->pc = 0x7F02A6B0u;
            return;
    }

label_7F03E228:
    ctx->pc = 0x7F03E228u;
    ctx->downcount -= 2;
    // 7F03E228: neg  r0, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[0] = (~a) + 1u;
    }

label_7F03E22C:
    ctx->pc = 0x7F03E22Cu;
    // 7F03E22C: stw     r0, 3960(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3960);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03E230:
    ctx->pc = 0x7F03E230u;
    ctx->downcount -= 6;
    // 7F03E230: lwz     r3, 3812(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3812);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03E234:
    ctx->pc = 0x7F03E234u;
    // 7F03E234: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F03E238:
    ctx->pc = 0x7F03E238u;
    // 7F03E238: stw     r0, 3812(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3812);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03E23C:
    ctx->pc = 0x7F03E23Cu;
    // 7F03E23C: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03E240:
    ctx->pc = 0x7F03E240u;
    // 7F03E240: cmpwi   r0, 1
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

label_7F03E244:
    ctx->pc = 0x7F03E244u;
    // 7F03E244: bc    12, 2, 0x7F03E324
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03E324;
        }
    }

label_7F03E248:
    ctx->pc = 0x7F03E248u;
    ctx->downcount -= 1;
    // 7F03E248: bc    4, 0, 0x7F03E258
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03E258;
        }
    }

label_7F03E24C:
    ctx->pc = 0x7F03E24Cu;
    ctx->downcount -= 2;
    // 7F03E24C: cmpwi   r0, 0
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

label_7F03E250:
    ctx->pc = 0x7F03E250u;
    // 7F03E250: bc    4, 0, 0x7F03E264
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03E264;
        }
    }

label_7F03E254:
    ctx->pc = 0x7F03E254u;
    ctx->downcount -= 1;
    // 7F03E254: b       0x7F03E4F0
    {
            goto label_7F03E4F0;
    }

label_7F03E258:
    ctx->pc = 0x7F03E258u;
    ctx->downcount -= 2;
    // 7F03E258: cmpwi   r0, 3
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

label_7F03E25C:
    ctx->pc = 0x7F03E25Cu;
    // 7F03E25C: bc    4, 0, 0x7F03E4F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03E4F0;
        }
    }

label_7F03E260:
    ctx->pc = 0x7F03E260u;
    ctx->downcount -= 1;
    // 7F03E260: b       0x7F03E3C8
    {
            goto label_7F03E3C8;
    }

label_7F03E264:
    ctx->pc = 0x7F03E264u;
    ctx->downcount -= 3;
    // 7F03E264: lwz     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03E268:
    ctx->pc = 0x7F03E268u;
    // 7F03E268: cmpwi   r0, 0
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

label_7F03E26C:
    ctx->pc = 0x7F03E26Cu;
    // 7F03E26C: bc    12, 2, 0x7F03E280
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03E280;
        }
    }

label_7F03E270:
    ctx->pc = 0x7F03E270u;
    ctx->downcount -= 3;
    // 7F03E270: lha     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03E274:
    ctx->pc = 0x7F03E274u;
    // 7F03E274: lha     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03E278:
    ctx->pc = 0x7F03E278u;
    // 7F03E278: bl      0x7F02A6B0
    {
            ctx->lr = 0x7F03E27Cu;
            ctx->pc = 0x7F02A6B0u;
            return;
    }

label_7F03E27C:
    ctx->pc = 0x7F03E27Cu;
    ctx->downcount -= 1;
    // 7F03E27C: sth     r3, 106(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(106);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F03E280:
    ctx->pc = 0x7F03E280u;
    ctx->downcount -= 3;
    // 7F03E280: lwz     r0, 3812(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3812);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03E284:
    ctx->pc = 0x7F03E284u;
    // 7F03E284: cmpwi   r0, 10
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

label_7F03E288:
    ctx->pc = 0x7F03E288u;
    // 7F03E288: bc    4, 2, 0x7F03E4F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03E4F0;
        }
    }

label_7F03E28C:
    ctx->pc = 0x7F03E28Cu;
    ctx->downcount -= 18;
    // 7F03E28C: lwz     r0, 3960(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3960);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03E290:
    ctx->pc = 0x7F03E290u;
    // 7F03E290: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F03E294:
    ctx->pc = 0x7F03E294u;
    // 7F03E294: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F03E298:
    ctx->pc = 0x7F03E298u;
    // 7F03E298: lis     r4, 256
    ctx->gpr[4] = ((u32)(s32)(256) << 16);

label_7F03E29C:
    ctx->pc = 0x7F03E29Cu;
    // 7F03E29C: sth     r0, 528(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(528);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F03E2A0:
    ctx->pc = 0x7F03E2A0u;
    // 7F03E2A0: addi    r9, r5, 22020
    ctx->gpr[9] = ctx->gpr[5] + (u32)(s32)(22020);

label_7F03E2A4:
    ctx->pc = 0x7F03E2A4u;
    // 7F03E2A4: lfs     f1, -11568(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F03E2A4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-11568);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03E2A8:
    ctx->pc = 0x7F03E2A8u;
    // 7F03E2A8: addi    r6, r4, -1
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F03E2AC:
    ctx->pc = 0x7F03E2ACu;
    // 7F03E2AC: sth     r0, 568(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(568);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F03E2B0:
    ctx->pc = 0x7F03E2B0u;
    // 7F03E2B0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F03E2B4:
    ctx->pc = 0x7F03E2B4u;
    // 7F03E2B4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03E2B8:
    ctx->pc = 0x7F03E2B8u;
    // 7F03E2B8: li      r7, 6
    ctx->gpr[7] = (u32)(s32)(6);

label_7F03E2BC:
    ctx->pc = 0x7F03E2BCu;
    // 7F03E2BC: sth     r0, 576(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(576);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F03E2C0:
    ctx->pc = 0x7F03E2C0u;
    // 7F03E2C0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F03E2C4:
    ctx->pc = 0x7F03E2C4u;
    // 7F03E2C4: lwz     r0, 3956(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3956);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03E2C8:
    ctx->pc = 0x7F03E2C8u;
    // 7F03E2C8: sth     r0, 522(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(522);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F03E2CC:
    ctx->pc = 0x7F03E2CCu;
    // 7F03E2CC: lwz     r4, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03E2D0:
    ctx->pc = 0x7F03E2D0u;
    // 7F03E2D0: bl      0x7F040774
    {
            ctx->lr = 0x7F03E2D4u;
            ctx->pc = 0x7F040774u;
            return;
    }

label_7F03E2D4:
    ctx->pc = 0x7F03E2D4u;
    ctx->downcount -= 5;
    // 7F03E2D4: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03E2D8:
    ctx->pc = 0x7F03E2D8u;
    // 7F03E2D8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F03E2DC:
    ctx->pc = 0x7F03E2DCu;
    // 7F03E2DC: addi    r4, r4, 22020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22020);

label_7F03E2E0:
    ctx->pc = 0x7F03E2E0u;
    // 7F03E2E0: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03E2E4:
    ctx->pc = 0x7F03E2E4u;
    // 7F03E2E4: bl      0x7F041A78
    {
            ctx->lr = 0x7F03E2E8u;
            ctx->pc = 0x7F041A78u;
            return;
    }

label_7F03E2E8:
    ctx->pc = 0x7F03E2E8u;
    ctx->downcount -= 5;
    // 7F03E2E8: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03E2EC:
    ctx->pc = 0x7F03E2ECu;
    // 7F03E2EC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F03E2F0:
    ctx->pc = 0x7F03E2F0u;
    // 7F03E2F0: addi    r4, r4, 22020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22020);

label_7F03E2F4:
    ctx->pc = 0x7F03E2F4u;
    // 7F03E2F4: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03E2F8:
    ctx->pc = 0x7F03E2F8u;
    // 7F03E2F8: bl      0x7F041A58
    {
            ctx->lr = 0x7F03E2FCu;
            ctx->pc = 0x7F041A58u;
            return;
    }

label_7F03E2FC:
    ctx->pc = 0x7F03E2FCu;
    ctx->downcount -= 7;
    // 7F03E2FC: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F03E300:
    ctx->pc = 0x7F03E300u;
    // 7F03E300: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F03E304:
    ctx->pc = 0x7F03E304u;
    // 7F03E304: addi    r4, r4, 2904
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2904);

label_7F03E308:
    ctx->pc = 0x7F03E308u;
    // 7F03E308: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F03E30C:
    ctx->pc = 0x7F03E30Cu;
    // 7F03E30C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03E310:
    ctx->pc = 0x7F03E310u;
    // 7F03E310: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03E314:
    ctx->pc = 0x7F03E314u;
    // 7F03E314: bl      0x7F041A84
    {
            ctx->lr = 0x7F03E318u;
            ctx->pc = 0x7F041A84u;
            return;
    }

label_7F03E318:
    ctx->pc = 0x7F03E318u;
    ctx->downcount -= 3;
    // 7F03E318: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F03E31C:
    ctx->pc = 0x7F03E31Cu;
    // 7F03E31C: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03E320:
    ctx->pc = 0x7F03E320u;
    // 7F03E320: b       0x7F03E4F0
    {
            goto label_7F03E4F0;
    }

label_7F03E324:
    ctx->pc = 0x7F03E324u;
    ctx->downcount -= 16;
    // 7F03E324: lwz     r4, 3816(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3816);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03E328:
    ctx->pc = 0x7F03E328u;
    // 7F03E328: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F03E32C:
    ctx->pc = 0x7F03E32Cu;
    // 7F03E32C: addi    r3, r3, 3020
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3020);

label_7F03E330:
    ctx->pc = 0x7F03E330u;
    // 7F03E330: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F03E334:
    ctx->pc = 0x7F03E334u;
    // 7F03E334: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F03E338:
    ctx->pc = 0x7F03E338u;
    // 7F03E338: addi    r5, r29, 3884
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(3884);

label_7F03E33C:
    ctx->pc = 0x7F03E33Cu;
    // 7F03E33C: stw     r4, 3816(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3816);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F03E340:
    ctx->pc = 0x7F03E340u;
    // 7F03E340: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03E344:
    ctx->pc = 0x7F03E344u;
    // 7F03E344: lwz     r4, 464(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(464);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03E348:
    ctx->pc = 0x7F03E348u;
    // 7F03E348: mulli   r3, r3, 324
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)324);

label_7F03E34C:
    ctx->pc = 0x7F03E34Cu;
    // 7F03E34C: add   r3, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F03E350:
    ctx->pc = 0x7F03E350u;
    // 7F03E350: addi    r4, r3, 440
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(440);

label_7F03E354:
    ctx->pc = 0x7F03E354u;
    // 7F03E354: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F03E358:
    loop_7F03E358(ctx);
    if (ctx->pc == 0x7F03E36Cu) goto label_7F03E36C;
    return;
label_7F03E35C:
    ctx->pc = 0x7F03E35Cu;
    // 7F03E35C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F03E360:
    ctx->pc = 0x7F03E360u;
    // 7F03E360: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F03E364:
    ctx->pc = 0x7F03E364u;
    // 7F03E364: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F03E368:
    // 7F03E368: bc    16, 0, 0x7F03E358
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03E358u;
                return;
            }
            goto label_7F03E358;
        }
    }

label_7F03E36C:
    ctx->pc = 0x7F03E36Cu;
    ctx->downcount -= 2;
    // 7F03E36C: addi    r3, r29, 3888
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(3888);

label_7F03E370:
    ctx->pc = 0x7F03E370u;
    // 7F03E370: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F03E374u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F03E374:
    ctx->pc = 0x7F03E374u;
    ctx->downcount -= 3;
    // 7F03E374: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F03E378:
    ctx->pc = 0x7F03E378u;
    // 7F03E378: addi    r3, r3, 2912
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(2912);

label_7F03E37C:
    ctx->pc = 0x7F03E37Cu;
    // 7F03E37C: bl      0x7F3B3134
    {
            ctx->lr = 0x7F03E380u;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F03E380:
    ctx->pc = 0x7F03E380u;
    ctx->downcount -= 2;
    // 7F03E380: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F03E384:
    ctx->pc = 0x7F03E384u;
    // 7F03E384: bl      0x7F3B2EB8
    {
            ctx->lr = 0x7F03E388u;
            ctx->pc = 0x7F3B2EB8u;
            return;
    }

label_7F03E388:
    ctx->pc = 0x7F03E388u;
    ctx->downcount -= 7;
    // 7F03E388: lwz     r0, 3980(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3980);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03E38C:
    ctx->pc = 0x7F03E38Cu;
    // 7F03E38C: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F03E390:
    ctx->pc = 0x7F03E390u;
    // 7F03E390: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F03E394:
    ctx->pc = 0x7F03E394u;
    // 7F03E394: ori     r0, r0, 0x0005
    ctx->gpr[0] = ctx->gpr[0] | 0x0005u;

label_7F03E398:
    ctx->pc = 0x7F03E398u;
    // 7F03E398: stw     r0, 3980(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3980);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03E39C:
    ctx->pc = 0x7F03E39Cu;
    // 7F03E39C: lwz     r4, 4068(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4068);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03E3A0:
    ctx->pc = 0x7F03E3A0u;
    // 7F03E3A0: bl      0x7F041800
    {
            ctx->lr = 0x7F03E3A4u;
            ctx->pc = 0x7F041800u;
            return;
    }

label_7F03E3A4:
    ctx->pc = 0x7F03E3A4u;
    ctx->downcount -= 4;
    // 7F03E3A4: addi    r3, r29, 64
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(64);

label_7F03E3A8:
    ctx->pc = 0x7F03E3A8u;
    // 7F03E3A8: li      r4, 1568
    ctx->gpr[4] = (u32)(s32)(1568);

label_7F03E3AC:
    ctx->pc = 0x7F03E3ACu;
    // 7F03E3AC: li      r5, 63
    ctx->gpr[5] = (u32)(s32)(63);

label_7F03E3B0:
    ctx->pc = 0x7F03E3B0u;
    // 7F03E3B0: bl      0x7F011A74
    {
            ctx->lr = 0x7F03E3B4u;
            ctx->pc = 0x7F011A74u;
            return;
    }

label_7F03E3B4:
    ctx->pc = 0x7F03E3B4u;
    ctx->downcount -= 5;
    // 7F03E3B4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F03E3B8:
    ctx->pc = 0x7F03E3B8u;
    // 7F03E3B8: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F03E3BC:
    ctx->pc = 0x7F03E3BCu;
    // 7F03E3BC: stw     r3, 3824(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3824);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F03E3C0:
    ctx->pc = 0x7F03E3C0u;
    // 7F03E3C0: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03E3C4:
    ctx->pc = 0x7F03E3C4u;
    // 7F03E3C4: b       0x7F03E4F0
    {
            goto label_7F03E4F0;
    }

label_7F03E3C8:
    ctx->pc = 0x7F03E3C8u;
    ctx->downcount -= 4;
    // 7F03E3C8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F03E3CC:
    ctx->pc = 0x7F03E3CCu;
    // 7F03E3CC: lwz     r0, 3024(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3024);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03E3D0:
    ctx->pc = 0x7F03E3D0u;
    // 7F03E3D0: cmpwi   r0, 0
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

label_7F03E3D4:
    ctx->pc = 0x7F03E3D4u;
    // 7F03E3D4: bc    12, 2, 0x7F03E468
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03E468;
        }
    }

label_7F03E3D8:
    ctx->pc = 0x7F03E3D8u;
    ctx->downcount -= 9;
    // 7F03E3D8: lfs     f1, 64(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F03E3D8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03E3DC:
    ctx->pc = 0x7F03E3DCu;
    // 7F03E3DC: lfs     f0, 3796(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F03E3DCu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3796);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F03E3E0:
    ctx->pc = 0x7F03E3E0u;
    // 7F03E3E0: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F03E3E0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F03E3E4:
    ctx->pc = 0x7F03E3E4u;
    // 7F03E3E4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F03E3E4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F03E3E8:
    ctx->pc = 0x7F03E3E8u;
    // 7F03E3E8: stfd     f1, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F03E3E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F03E3EC:
    ctx->pc = 0x7F03E3ECu;
    // 7F03E3EC: stfd     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F03E3ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F03E3F0:
    ctx->pc = 0x7F03E3F0u;
    // 7F03E3F0: lwz     r3, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03E3F4:
    ctx->pc = 0x7F03E3F4u;
    // 7F03E3F4: lwz     r4, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03E3F8:
    ctx->pc = 0x7F03E3F8u;
    // 7F03E3F8: bl      0x7F3C9844
    {
            ctx->lr = 0x7F03E3FCu;
            ctx->pc = 0x7F3C9844u;
            return;
    }

label_7F03E3FC:
    ctx->pc = 0x7F03E3FCu;
    ctx->downcount -= 18;
    // 7F03E3FC: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F03E400:
    ctx->pc = 0x7F03E400u;
    // 7F03E400: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F03E404:
    ctx->pc = 0x7F03E404u;
    // 7F03E404: stw     r3, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F03E408:
    ctx->pc = 0x7F03E408u;
    // 7F03E408: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F03E40C:
    ctx->pc = 0x7F03E40Cu;
    // 7F03E40C: lfd     f1, -11560(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F03E40Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-11560);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F03E410:
    ctx->pc = 0x7F03E410u;
    // 7F03E410: stw     r0, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03E414:
    ctx->pc = 0x7F03E414u;
    // 7F03E414: lfd     f0, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F03E414u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F03E418:
    ctx->pc = 0x7F03E418u;
    // 7F03E418: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F03E418u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F03E41C:
    ctx->pc = 0x7F03E41Cu;
    // 7F03E41C: stfs     f0, 64(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F03E41Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F03E420:
    ctx->pc = 0x7F03E420u;
    // 7F03E420: lfs     f1, 72(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F03E420u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03E424:
    ctx->pc = 0x7F03E424u;
    // 7F03E424: lfs     f0, 3804(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F03E424u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3804);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F03E428:
    ctx->pc = 0x7F03E428u;
    // 7F03E428: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F03E428u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F03E42C:
    ctx->pc = 0x7F03E42Cu;
    // 7F03E42C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F03E42Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F03E430:
    ctx->pc = 0x7F03E430u;
    // 7F03E430: stfd     f1, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F03E430u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F03E434:
    ctx->pc = 0x7F03E434u;
    // 7F03E434: stfd     f0, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F03E434u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F03E438:
    ctx->pc = 0x7F03E438u;
    // 7F03E438: lwz     r3, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03E43C:
    ctx->pc = 0x7F03E43Cu;
    // 7F03E43C: lwz     r4, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03E440:
    ctx->pc = 0x7F03E440u;
    // 7F03E440: bl      0x7F3C9844
    {
            ctx->lr = 0x7F03E444u;
            ctx->pc = 0x7F3C9844u;
            return;
    }

label_7F03E444:
    ctx->pc = 0x7F03E444u;
    ctx->downcount -= 9;
    // 7F03E444: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F03E448:
    ctx->pc = 0x7F03E448u;
    // 7F03E448: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F03E44C:
    ctx->pc = 0x7F03E44Cu;
    // 7F03E44C: stw     r3, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F03E450:
    ctx->pc = 0x7F03E450u;
    // 7F03E450: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F03E454:
    ctx->pc = 0x7F03E454u;
    // 7F03E454: lfd     f1, -11560(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F03E454u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-11560);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F03E458:
    ctx->pc = 0x7F03E458u;
    // 7F03E458: stw     r0, 128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03E45C:
    ctx->pc = 0x7F03E45Cu;
    // 7F03E45C: lfd     f0, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F03E45Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F03E460:
    ctx->pc = 0x7F03E460u;
    // 7F03E460: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F03E460u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F03E464:
    ctx->pc = 0x7F03E464u;
    // 7F03E464: stfs     f0, 72(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F03E464u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F03E468:
    ctx->pc = 0x7F03E468u;
    ctx->downcount -= 11;
    // 7F03E468: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F03E46C:
    ctx->pc = 0x7F03E46Cu;
    // 7F03E46C: lwz     r4, 468(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(468);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03E470:
    ctx->pc = 0x7F03E470u;
    // 7F03E470: lwz     r0, 22020(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22020);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03E474:
    ctx->pc = 0x7F03E474u;
    // 7F03E474: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03E478:
    ctx->pc = 0x7F03E478u;
    // 7F03E478: mulli   r0, r0, 104
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)104);

label_7F03E47C:
    ctx->pc = 0x7F03E47Cu;
    // 7F03E47C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F03E480:
    ctx->pc = 0x7F03E480u;
    // 7F03E480: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03E484:
    ctx->pc = 0x7F03E484u;
    // 7F03E484: rlwinm. r0, r0, 0, 29, 29
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

label_7F03E488:
    ctx->pc = 0x7F03E488u;
    // 7F03E488: bc    12, 2, 0x7F03E4F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03E4F0;
        }
    }

label_7F03E48C:
    ctx->pc = 0x7F03E48Cu;
    ctx->downcount -= 3;
    // 7F03E48C: lwz     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03E490:
    ctx->pc = 0x7F03E490u;
    // 7F03E490: cmpwi   r0, 0
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

label_7F03E494:
    ctx->pc = 0x7F03E494u;
    // 7F03E494: bc    4, 2, 0x7F03E4C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03E4C4;
        }
    }

label_7F03E498:
    ctx->pc = 0x7F03E498u;
    ctx->downcount -= 5;
    // 7F03E498: li      r0, 35
    ctx->gpr[0] = (u32)(s32)(35);

label_7F03E49C:
    ctx->pc = 0x7F03E49Cu;
    // 7F03E49C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03E4A0:
    ctx->pc = 0x7F03E4A0u;
    // 7F03E4A0: stw     r0, 4132(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03E4A4:
    ctx->pc = 0x7F03E4A4u;
    // 7F03E4A4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F03E4A8:
    ctx->pc = 0x7F03E4A8u;
    // 7F03E4A8: bl      0x7F03D978
    {
            ctx->lr = 0x7F03E4ACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03D978u;
                return;
            }
            goto label_7F03D978;
    }

label_7F03E4AC:
    ctx->pc = 0x7F03E4ACu;
    ctx->downcount -= 2;
    // 7F03E4AC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F03E4B0:
    ctx->pc = 0x7F03E4B0u;
    // 7F03E4B0: bl      0x7F03D65C
    {
            ctx->lr = 0x7F03E4B4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03D65Cu;
                return;
            }
            goto label_7F03D65C;
    }

label_7F03E4B4:
    ctx->pc = 0x7F03E4B4u;
    ctx->downcount -= 4;
    // 7F03E4B4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F03E4B8:
    ctx->pc = 0x7F03E4B8u;
    // 7F03E4B8: stw     r0, 3956(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3956);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03E4BC:
    ctx->pc = 0x7F03E4BCu;
    // 7F03E4BC: stw     r0, 3960(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3960);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03E4C0:
    ctx->pc = 0x7F03E4C0u;
    // 7F03E4C0: b       0x7F03E4F0
    {
            goto label_7F03E4F0;
    }

label_7F03E4C4:
    ctx->pc = 0x7F03E4C4u;
    ctx->downcount -= 3;
    // 7F03E4C4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03E4C8:
    ctx->pc = 0x7F03E4C8u;
    // 7F03E4C8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F03E4CC:
    ctx->pc = 0x7F03E4CCu;
    // 7F03E4CC: bl      0x7F03D978
    {
            ctx->lr = 0x7F03E4D0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03D978u;
                return;
            }
            goto label_7F03D978;
    }

label_7F03E4D0:
    ctx->pc = 0x7F03E4D0u;
    ctx->downcount -= 2;
    // 7F03E4D0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F03E4D4:
    ctx->pc = 0x7F03E4D4u;
    // 7F03E4D4: bl      0x7F041680
    {
            ctx->lr = 0x7F03E4D8u;
            ctx->pc = 0x7F041680u;
            return;
    }

label_7F03E4D8:
    ctx->pc = 0x7F03E4D8u;
    ctx->downcount -= 2;
    // 7F03E4D8: cmpwi   r3, 0
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

label_7F03E4DC:
    ctx->pc = 0x7F03E4DCu;
    // 7F03E4DC: bc    4, 2, 0x7F03E4E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03E4E8;
        }
    }

label_7F03E4E0:
    ctx->pc = 0x7F03E4E0u;
    ctx->downcount -= 2;
    // 7F03E4E0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F03E4E4:
    ctx->pc = 0x7F03E4E4u;
    // 7F03E4E4: bl      0x7F03CD4C
    {
            ctx->lr = 0x7F03E4E8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03CD4Cu;
                return;
            }
            goto label_7F03CD4C;
    }

label_7F03E4E8:
    ctx->pc = 0x7F03E4E8u;
    ctx->downcount -= 2;
    // 7F03E4E8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F03E4EC:
    ctx->pc = 0x7F03E4ECu;
    // 7F03E4EC: stw     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03E4F0:
    ctx->pc = 0x7F03E4F0u;
    ctx->downcount -= 16;
    // 7F03E4F0: lmw     r28, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F03E4F4:
    ctx->pc = 0x7F03E4F4u;
    // 7F03E4F4: lwz     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03E4F8:
    ctx->pc = 0x7F03E4F8u;
    // 7F03E4F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03E4FC:
    ctx->pc = 0x7F03E4FCu;
    // 7F03E4FC: addi    r1, r1, 160
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(160);

label_7F03E500:
    ctx->pc = 0x7F03E500u;
    // 7F03E500: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03E504:
    ctx->pc = 0x7F03E504u;
    ctx->downcount -= 19;
    // 7F03E504: stwu     r1, -144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-144);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03E508:
    ctx->pc = 0x7F03E508u;
    // 7F03E508: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03E50C:
    ctx->pc = 0x7F03E50Cu;
    // 7F03E50C: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03E510:
    ctx->pc = 0x7F03E510u;
    // 7F03E510: stmw     r29, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F03E514:
    ctx->pc = 0x7F03E514u;
    // 7F03E514: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03E518:
    ctx->pc = 0x7F03E518u;
    // 7F03E518: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F03E51C:
    ctx->pc = 0x7F03E51Cu;
    // 7F03E51C: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03E520:
    ctx->pc = 0x7F03E520u;
    // 7F03E520: addi    r3, r30, 64
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(64);

label_7F03E524:
    ctx->pc = 0x7F03E524u;
    // 7F03E524: bl      0x7F041AB0
    {
            ctx->lr = 0x7F03E528u;
            ctx->pc = 0x7F041AB0u;
            return;
    }

label_7F03E528:
    ctx->pc = 0x7F03E528u;
    ctx->downcount -= 4;
    // 7F03E528: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F03E52C:
    ctx->pc = 0x7F03E52Cu;
    // 7F03E52C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F03E530:
    ctx->pc = 0x7F03E530u;
    // 7F03E530: addi    r3, r3, -5872
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5872);

label_7F03E534:
    ctx->pc = 0x7F03E534u;
    // 7F03E534: bl      0x7F041AB0
    {
            ctx->lr = 0x7F03E538u;
            ctx->pc = 0x7F041AB0u;
            return;
    }

label_7F03E538:
    ctx->pc = 0x7F03E538u;
    ctx->downcount -= 4;
    // 7F03E538: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F03E53C:
    ctx->pc = 0x7F03E53Cu;
    // 7F03E53C: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03E540:
    ctx->pc = 0x7F03E540u;
    // 7F03E540: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F03E544:
    ctx->pc = 0x7F03E544u;
    // 7F03E544: bl      0x7F3CC634
    {
            ctx->lr = 0x7F03E548u;
            ctx->pc = 0x7F3CC634u;
            return;
    }

label_7F03E548:
    ctx->pc = 0x7F03E548u;
    ctx->downcount -= 3;
    // 7F03E548: lwz     r0, 3852(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3852);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03E54C:
    ctx->pc = 0x7F03E54Cu;
    // 7F03E54C: cmpwi   r0, 0
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

label_7F03E550:
    ctx->pc = 0x7F03E550u;
    // 7F03E550: bc    12, 2, 0x7F03E5E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03E5E8;
        }
    }

label_7F03E554:
    ctx->pc = 0x7F03E554u;
    ctx->downcount -= 3;
    // 7F03E554: lwz     r0, 3816(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3816);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03E558:
    ctx->pc = 0x7F03E558u;
    // 7F03E558: cmpwi   r0, 6
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

label_7F03E55C:
    ctx->pc = 0x7F03E55Cu;
    // 7F03E55C: bc    4, 2, 0x7F03E5D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03E5D0;
        }
    }

label_7F03E560:
    ctx->pc = 0x7F03E560u;
    ctx->downcount -= 2;
    // 7F03E560: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03E564:
    ctx->pc = 0x7F03E564u;
    // 7F03E564: bl      0x7F03D7C8
    {
            ctx->lr = 0x7F03E568u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03D7C8u;
                return;
            }
            goto label_7F03D7C8;
    }

label_7F03E568:
    ctx->pc = 0x7F03E568u;
    ctx->downcount -= 3;
    // 7F03E568: lwz     r0, 3836(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3836);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03E56C:
    ctx->pc = 0x7F03E56Cu;
    // 7F03E56C: cmpwi   r0, 0
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

label_7F03E570:
    ctx->pc = 0x7F03E570u;
    // 7F03E570: bc    12, 2, 0x7F03E5C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03E5C0;
        }
    }

label_7F03E574:
    ctx->pc = 0x7F03E574u;
    ctx->downcount -= 2;
    // 7F03E574: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03E578:
    ctx->pc = 0x7F03E578u;
    // 7F03E578: bl      0x7F0411A8
    {
            ctx->lr = 0x7F03E57Cu;
            ctx->pc = 0x7F0411A8u;
            return;
    }

label_7F03E57C:
    ctx->pc = 0x7F03E57Cu;
    ctx->downcount -= 6;
    // 7F03E57C: lwz     r0, 3840(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3840);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03E580:
    ctx->pc = 0x7F03E580u;
    // 7F03E580: or   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[3];
    }

label_7F03E584:
    ctx->pc = 0x7F03E584u;
    // 7F03E584: stw     r0, 3840(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3840);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03E588:
    ctx->pc = 0x7F03E588u;
    // 7F03E588: lwz     r0, 3840(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3840);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03E58C:
    ctx->pc = 0x7F03E58Cu;
    // 7F03E58C: cmpwi   r0, 0
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

label_7F03E590:
    ctx->pc = 0x7F03E590u;
    // 7F03E590: bc    12, 2, 0x7F03E5B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03E5B0;
        }
    }

label_7F03E594:
    ctx->pc = 0x7F03E594u;
    ctx->downcount -= 4;
    // 7F03E594: lwz     r0, 4084(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4084);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03E598:
    ctx->pc = 0x7F03E598u;
    // 7F03E598: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03E59C:
    ctx->pc = 0x7F03E59Cu;
    // 7F03E59C: stw     r0, 3868(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3868);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03E5A0:
    ctx->pc = 0x7F03E5A0u;
    // 7F03E5A0: bl      0x7F03CE4C
    {
            ctx->lr = 0x7F03E5A4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03CE4Cu;
                return;
            }
            goto label_7F03CE4C;
    }

label_7F03E5A4:
    ctx->pc = 0x7F03E5A4u;
    ctx->downcount -= 3;
    // 7F03E5A4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F03E5A8:
    ctx->pc = 0x7F03E5A8u;
    // 7F03E5A8: stw     r0, 3840(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3840);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03E5AC:
    ctx->pc = 0x7F03E5ACu;
    // 7F03E5AC: b       0x7F03E5C0
    {
            goto label_7F03E5C0;
    }

label_7F03E5B0:
    ctx->pc = 0x7F03E5B0u;
    ctx->downcount -= 3;
    // 7F03E5B0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03E5B4:
    ctx->pc = 0x7F03E5B4u;
    // 7F03E5B4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F03E5B8:
    ctx->pc = 0x7F03E5B8u;
    // 7F03E5B8: bl      0x7F03D978
    {
            ctx->lr = 0x7F03E5BCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03D978u;
                return;
            }
            goto label_7F03D978;
    }

label_7F03E5BC:
    ctx->pc = 0x7F03E5BCu;
    ctx->downcount -= 1;
    // 7F03E5BC: b       0x7F03EA14
    {
            goto label_7F03EA14;
    }

label_7F03E5C0:
    ctx->pc = 0x7F03E5C0u;
    ctx->downcount -= 3;
    // 7F03E5C0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03E5C4:
    ctx->pc = 0x7F03E5C4u;
    // 7F03E5C4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F03E5C8:
    ctx->pc = 0x7F03E5C8u;
    // 7F03E5C8: bl      0x7F03D978
    {
            ctx->lr = 0x7F03E5CCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03D978u;
                return;
            }
            goto label_7F03D978;
    }

label_7F03E5CC:
    ctx->pc = 0x7F03E5CCu;
    ctx->downcount -= 1;
    // 7F03E5CC: b       0x7F03EA14
    {
            goto label_7F03EA14;
    }

label_7F03E5D0:
    ctx->pc = 0x7F03E5D0u;
    ctx->downcount -= 2;
    // 7F03E5D0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03E5D4:
    ctx->pc = 0x7F03E5D4u;
    // 7F03E5D4: bl      0x7F041680
    {
            ctx->lr = 0x7F03E5D8u;
            ctx->pc = 0x7F041680u;
            return;
    }

label_7F03E5D8:
    ctx->pc = 0x7F03E5D8u;
    ctx->downcount -= 2;
    // 7F03E5D8: cmpwi   r3, 0
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

label_7F03E5DC:
    ctx->pc = 0x7F03E5DCu;
    // 7F03E5DC: bc    4, 2, 0x7F03E5E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03E5E8;
        }
    }

label_7F03E5E0:
    ctx->pc = 0x7F03E5E0u;
    ctx->downcount -= 2;
    // 7F03E5E0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03E5E4:
    ctx->pc = 0x7F03E5E4u;
    // 7F03E5E4: bl      0x7F03CD4C
    {
            ctx->lr = 0x7F03E5E8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03CD4Cu;
                return;
            }
            goto label_7F03CD4C;
    }

label_7F03E5E8:
    ctx->pc = 0x7F03E5E8u;
    ctx->downcount -= 3;
    // 7F03E5E8: lwz     r0, 3836(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3836);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03E5EC:
    ctx->pc = 0x7F03E5ECu;
    // 7F03E5EC: cmpwi   r0, 0
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

label_7F03E5F0:
    ctx->pc = 0x7F03E5F0u;
    // 7F03E5F0: bc    12, 2, 0x7F03E630
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03E630;
        }
    }

label_7F03E5F4:
    ctx->pc = 0x7F03E5F4u;
    ctx->downcount -= 2;
    // 7F03E5F4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03E5F8:
    ctx->pc = 0x7F03E5F8u;
    // 7F03E5F8: bl      0x7F0411A8
    {
            ctx->lr = 0x7F03E5FCu;
            ctx->pc = 0x7F0411A8u;
            return;
    }

label_7F03E5FC:
    ctx->pc = 0x7F03E5FCu;
    ctx->downcount -= 6;
    // 7F03E5FC: lwz     r0, 3840(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3840);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03E600:
    ctx->pc = 0x7F03E600u;
    // 7F03E600: or   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[3];
    }

label_7F03E604:
    ctx->pc = 0x7F03E604u;
    // 7F03E604: stw     r0, 3840(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3840);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03E608:
    ctx->pc = 0x7F03E608u;
    // 7F03E608: lwz     r0, 3840(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3840);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03E60C:
    ctx->pc = 0x7F03E60Cu;
    // 7F03E60C: cmpwi   r0, 0
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

label_7F03E610:
    ctx->pc = 0x7F03E610u;
    // 7F03E610: bc    12, 2, 0x7F03E668
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03E668;
        }
    }

label_7F03E614:
    ctx->pc = 0x7F03E614u;
    ctx->downcount -= 4;
    // 7F03E614: lwz     r0, 4084(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4084);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03E618:
    ctx->pc = 0x7F03E618u;
    // 7F03E618: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03E61C:
    ctx->pc = 0x7F03E61Cu;
    // 7F03E61C: stw     r0, 3868(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3868);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03E620:
    ctx->pc = 0x7F03E620u;
    // 7F03E620: bl      0x7F03CE4C
    {
            ctx->lr = 0x7F03E624u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03CE4Cu;
                return;
            }
            goto label_7F03CE4C;
    }

label_7F03E624:
    ctx->pc = 0x7F03E624u;
    ctx->downcount -= 3;
    // 7F03E624: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F03E628:
    ctx->pc = 0x7F03E628u;
    // 7F03E628: stw     r0, 3840(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3840);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03E62C:
    ctx->pc = 0x7F03E62Cu;
    // 7F03E62C: b       0x7F03E668
    {
            goto label_7F03E668;
    }

label_7F03E630:
    ctx->pc = 0x7F03E630u;
    ctx->downcount -= 2;
    // 7F03E630: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F03E634:
    ctx->pc = 0x7F03E634u;
    // 7F03E634: bl      0x7F3CC44C
    {
            ctx->lr = 0x7F03E638u;
            ctx->pc = 0x7F3CC44Cu;
            return;
    }

label_7F03E638:
    ctx->pc = 0x7F03E638u;
    ctx->downcount -= 3;
    // 7F03E638: lwz     r0, 4100(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03E63C:
    ctx->pc = 0x7F03E63Cu;
    // 7F03E63C: cmpw    r3, r0
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

label_7F03E640:
    ctx->pc = 0x7F03E640u;
    // 7F03E640: bc    4, 0, 0x7F03E668
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03E668;
        }
    }

label_7F03E644:
    ctx->pc = 0x7F03E644u;
    ctx->downcount -= 2;
    // 7F03E644: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03E648:
    ctx->pc = 0x7F03E648u;
    // 7F03E648: bl      0x7F041680
    {
            ctx->lr = 0x7F03E64Cu;
            ctx->pc = 0x7F041680u;
            return;
    }

label_7F03E64C:
    ctx->pc = 0x7F03E64Cu;
    ctx->downcount -= 2;
    // 7F03E64C: cmpwi   r3, 0
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

label_7F03E650:
    ctx->pc = 0x7F03E650u;
    // 7F03E650: bc    4, 2, 0x7F03E668
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03E668;
        }
    }

label_7F03E654:
    ctx->pc = 0x7F03E654u;
    ctx->downcount -= 5;
    // 7F03E654: lis     r4, -32767
    ctx->gpr[4] = ((u32)(s32)(-32767) << 16);

label_7F03E658:
    ctx->pc = 0x7F03E658u;
    // 7F03E658: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03E65C:
    ctx->pc = 0x7F03E65Cu;
    // 7F03E65C: addi    r0, r4, -32768
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-32768);

label_7F03E660:
    ctx->pc = 0x7F03E660u;
    // 7F03E660: stw     r0, 3536(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3536);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03E664:
    ctx->pc = 0x7F03E664u;
    // 7F03E664: bl      0x7F03CD4C
    {
            ctx->lr = 0x7F03E668u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03CD4Cu;
                return;
            }
            goto label_7F03CD4C;
    }

label_7F03E668:
    ctx->pc = 0x7F03E668u;
    ctx->downcount -= 11;
    // 7F03E668: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F03E66C:
    ctx->pc = 0x7F03E66Cu;
    // 7F03E66C: lwz     r4, 468(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(468);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03E670:
    ctx->pc = 0x7F03E670u;
    // 7F03E670: lwz     r0, 22020(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22020);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03E674:
    ctx->pc = 0x7F03E674u;
    // 7F03E674: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03E678:
    ctx->pc = 0x7F03E678u;
    // 7F03E678: mulli   r0, r0, 104
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)104);

label_7F03E67C:
    ctx->pc = 0x7F03E67Cu;
    // 7F03E67C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F03E680:
    ctx->pc = 0x7F03E680u;
    // 7F03E680: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03E684:
    ctx->pc = 0x7F03E684u;
    // 7F03E684: rlwinm. r0, r0, 0, 29, 29
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

label_7F03E688:
    ctx->pc = 0x7F03E688u;
    // 7F03E688: bc    12, 2, 0x7F03E718
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03E718;
        }
    }

label_7F03E68C:
    ctx->pc = 0x7F03E68Cu;
    ctx->downcount -= 2;
    // 7F03E68C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03E690:
    ctx->pc = 0x7F03E690u;
    // 7F03E690: bl      0x7F03D7C8
    {
            ctx->lr = 0x7F03E694u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03D7C8u;
                return;
            }
            goto label_7F03D7C8;
    }

label_7F03E694:
    ctx->pc = 0x7F03E694u;
    ctx->downcount -= 5;
    // 7F03E694: lbz     r3, 4256(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4256);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F03E698:
    ctx->pc = 0x7F03E698u;
    // 7F03E698: li      r0, 15
    ctx->gpr[0] = (u32)(s32)(15);

label_7F03E69C:
    ctx->pc = 0x7F03E69Cu;
    // 7F03E69C: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_7F03E6A0:
    ctx->pc = 0x7F03E6A0u;
    // 7F03E6A0: cmpwi   r3, 15
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(15);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03E6A4:
    ctx->pc = 0x7F03E6A4u;
    // 7F03E6A4: bc    12, 0, 0x7F03E6AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03E6AC;
        }
    }

label_7F03E6A8:
    ctx->pc = 0x7F03E6A8u;
    ctx->downcount -= 1;
    // 7F03E6A8: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F03E6AC:
    ctx->pc = 0x7F03E6ACu;
    ctx->downcount -= 4;
    // 7F03E6AC: stb     r0, 4256(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4256);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F03E6B0:
    ctx->pc = 0x7F03E6B0u;
    // 7F03E6B0: lwz     r0, 3836(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3836);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03E6B4:
    ctx->pc = 0x7F03E6B4u;
    // 7F03E6B4: cmpwi   r0, 0
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

label_7F03E6B8:
    ctx->pc = 0x7F03E6B8u;
    // 7F03E6B8: bc    12, 2, 0x7F03E708
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03E708;
        }
    }

label_7F03E6BC:
    ctx->pc = 0x7F03E6BCu;
    ctx->downcount -= 2;
    // 7F03E6BC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03E6C0:
    ctx->pc = 0x7F03E6C0u;
    // 7F03E6C0: bl      0x7F0411A8
    {
            ctx->lr = 0x7F03E6C4u;
            ctx->pc = 0x7F0411A8u;
            return;
    }

label_7F03E6C4:
    ctx->pc = 0x7F03E6C4u;
    ctx->downcount -= 6;
    // 7F03E6C4: lwz     r0, 3840(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3840);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03E6C8:
    ctx->pc = 0x7F03E6C8u;
    // 7F03E6C8: or   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[3];
    }

label_7F03E6CC:
    ctx->pc = 0x7F03E6CCu;
    // 7F03E6CC: stw     r0, 3840(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3840);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03E6D0:
    ctx->pc = 0x7F03E6D0u;
    // 7F03E6D0: lwz     r0, 3840(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3840);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03E6D4:
    ctx->pc = 0x7F03E6D4u;
    // 7F03E6D4: cmpwi   r0, 0
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

label_7F03E6D8:
    ctx->pc = 0x7F03E6D8u;
    // 7F03E6D8: bc    12, 2, 0x7F03E6F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03E6F8;
        }
    }

label_7F03E6DC:
    ctx->pc = 0x7F03E6DCu;
    ctx->downcount -= 4;
    // 7F03E6DC: lwz     r0, 4084(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4084);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03E6E0:
    ctx->pc = 0x7F03E6E0u;
    // 7F03E6E0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03E6E4:
    ctx->pc = 0x7F03E6E4u;
    // 7F03E6E4: stw     r0, 3868(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3868);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03E6E8:
    ctx->pc = 0x7F03E6E8u;
    // 7F03E6E8: bl      0x7F03CE4C
    {
            ctx->lr = 0x7F03E6ECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03CE4Cu;
                return;
            }
            goto label_7F03CE4C;
    }

label_7F03E6EC:
    ctx->pc = 0x7F03E6ECu;
    ctx->downcount -= 3;
    // 7F03E6EC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F03E6F0:
    ctx->pc = 0x7F03E6F0u;
    // 7F03E6F0: stw     r0, 3840(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3840);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03E6F4:
    ctx->pc = 0x7F03E6F4u;
    // 7F03E6F4: b       0x7F03E708
    {
            goto label_7F03E708;
    }

label_7F03E6F8:
    ctx->pc = 0x7F03E6F8u;
    ctx->downcount -= 3;
    // 7F03E6F8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03E6FC:
    ctx->pc = 0x7F03E6FCu;
    // 7F03E6FC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F03E700:
    ctx->pc = 0x7F03E700u;
    // 7F03E700: bl      0x7F03D978
    {
            ctx->lr = 0x7F03E704u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03D978u;
                return;
            }
            goto label_7F03D978;
    }

label_7F03E704:
    ctx->pc = 0x7F03E704u;
    ctx->downcount -= 1;
    // 7F03E704: b       0x7F03EA14
    {
            goto label_7F03EA14;
    }

label_7F03E708:
    ctx->pc = 0x7F03E708u;
    ctx->downcount -= 3;
    // 7F03E708: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03E70C:
    ctx->pc = 0x7F03E70Cu;
    // 7F03E70C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F03E710:
    ctx->pc = 0x7F03E710u;
    // 7F03E710: bl      0x7F03D978
    {
            ctx->lr = 0x7F03E714u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03D978u;
                return;
            }
            goto label_7F03D978;
    }

label_7F03E714:
    ctx->pc = 0x7F03E714u;
    ctx->downcount -= 1;
    // 7F03E714: b       0x7F03EA14
    {
            goto label_7F03EA14;
    }

label_7F03E718:
    ctx->pc = 0x7F03E718u;
    ctx->downcount -= 5;
    // 7F03E718: lwz     r31, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F03E71C:
    ctx->pc = 0x7F03E71Cu;
    // 7F03E71C: li      r29, -1
    ctx->gpr[29] = (u32)(s32)(-1);

label_7F03E720:
    ctx->pc = 0x7F03E720u;
    // 7F03E720: lwz     r0, 3832(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3832);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03E724:
    ctx->pc = 0x7F03E724u;
    // 7F03E724: cmpw    r0, r31
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03E728:
    ctx->pc = 0x7F03E728u;
    // 7F03E728: bc    12, 2, 0x7F03E904
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03E904;
        }
    }

label_7F03E72C:
    ctx->pc = 0x7F03E72Cu;
    ctx->downcount -= 2;
    // 7F03E72C: cmpwi   r31, 160
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(160);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03E730:
    ctx->pc = 0x7F03E730u;
    // 7F03E730: bc    4, 2, 0x7F03E764
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03E764;
        }
    }

label_7F03E734:
    ctx->pc = 0x7F03E734u;
    ctx->downcount -= 4;
    // 7F03E734: lis     r4, 119
    ctx->gpr[4] = ((u32)(s32)(119) << 16);

label_7F03E738:
    ctx->pc = 0x7F03E738u;
    // 7F03E738: addi    r3, r30, 64
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(64);

label_7F03E73C:
    ctx->pc = 0x7F03E73Cu;
    // 7F03E73C: addi    r4, r4, -29039
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29039);

label_7F03E740:
    ctx->pc = 0x7F03E740u;
    // 7F03E740: bl      0x7F03C214
    {
            ctx->lr = 0x7F03E744u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03C214u;
                return;
            }
            goto label_7F03C214;
    }

label_7F03E744:
    ctx->pc = 0x7F03E744u;
    ctx->downcount -= 3;
    // 7F03E744: cmpwi   r3, 0
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

label_7F03E748:
    ctx->pc = 0x7F03E748u;
    // 7F03E748: li      r4, 1847
    ctx->gpr[4] = (u32)(s32)(1847);

label_7F03E74C:
    ctx->pc = 0x7F03E74Cu;
    // 7F03E74C: bc    12, 2, 0x7F03E754
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03E754;
        }
    }

label_7F03E750:
    ctx->pc = 0x7F03E750u;
    ctx->downcount -= 1;
    // 7F03E750: li      r4, 1848
    ctx->gpr[4] = (u32)(s32)(1848);

label_7F03E754:
    ctx->pc = 0x7F03E754u;
    ctx->downcount -= 4;
    // 7F03E754: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F03E758:
    ctx->pc = 0x7F03E758u;
    // 7F03E758: addi    r3, r30, 64
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(64);

label_7F03E75C:
    ctx->pc = 0x7F03E75Cu;
    // 7F03E75C: li      r5, 63
    ctx->gpr[5] = (u32)(s32)(63);

label_7F03E760:
    ctx->pc = 0x7F03E760u;
    // 7F03E760: bl      0x7F011A74
    {
            ctx->lr = 0x7F03E764u;
            ctx->pc = 0x7F011A74u;
            return;
    }

label_7F03E764:
    ctx->pc = 0x7F03E764u;
    ctx->downcount -= 2;
    // 7F03E764: cmpwi   r31, 159
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(159);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03E768:
    ctx->pc = 0x7F03E768u;
    // 7F03E768: bc    12, 2, 0x7F03E8FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03E8FC;
        }
    }

label_7F03E76C:
    ctx->pc = 0x7F03E76Cu;
    ctx->downcount -= 1;
    // 7F03E76C: bc    4, 0, 0x7F03E7D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03E7D8;
        }
    }

label_7F03E770:
    ctx->pc = 0x7F03E770u;
    ctx->downcount -= 2;
    // 7F03E770: cmpwi   r31, 94
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(94);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03E774:
    ctx->pc = 0x7F03E774u;
    // 7F03E774: bc    12, 2, 0x7F03E838
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03E838;
        }
    }

label_7F03E778:
    ctx->pc = 0x7F03E778u;
    ctx->downcount -= 1;
    // 7F03E778: bc    4, 0, 0x7F03E7A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03E7A0;
        }
    }

label_7F03E77C:
    ctx->pc = 0x7F03E77Cu;
    ctx->downcount -= 2;
    // 7F03E77C: cmpwi   r31, 56
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(56);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03E780:
    ctx->pc = 0x7F03E780u;
    // 7F03E780: bc    12, 2, 0x7F03E838
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03E838;
        }
    }

label_7F03E784:
    ctx->pc = 0x7F03E784u;
    ctx->downcount -= 1;
    // 7F03E784: bc    4, 0, 0x7F03E794
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03E794;
        }
    }

label_7F03E788:
    ctx->pc = 0x7F03E788u;
    ctx->downcount -= 2;
    // 7F03E788: cmpwi   r31, 37
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(37);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03E78C:
    ctx->pc = 0x7F03E78Cu;
    // 7F03E78C: bc    12, 2, 0x7F03E838
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03E838;
        }
    }

label_7F03E790:
    ctx->pc = 0x7F03E790u;
    ctx->downcount -= 1;
    // 7F03E790: b       0x7F03E8FC
    {
            goto label_7F03E8FC;
    }

label_7F03E794:
    ctx->pc = 0x7F03E794u;
    ctx->downcount -= 2;
    // 7F03E794: cmpwi   r31, 74
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

label_7F03E798:
    ctx->pc = 0x7F03E798u;
    // 7F03E798: bc    12, 2, 0x7F03E838
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03E838;
        }
    }

label_7F03E79C:
    ctx->pc = 0x7F03E79Cu;
    ctx->downcount -= 1;
    // 7F03E79C: b       0x7F03E8FC
    {
            goto label_7F03E8FC;
    }

label_7F03E7A0:
    ctx->pc = 0x7F03E7A0u;
    ctx->downcount -= 2;
    // 7F03E7A0: cmpwi   r31, 130
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(130);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03E7A4:
    ctx->pc = 0x7F03E7A4u;
    // 7F03E7A4: bc    12, 2, 0x7F03E838
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03E838;
        }
    }

label_7F03E7A8:
    ctx->pc = 0x7F03E7A8u;
    ctx->downcount -= 1;
    // 7F03E7A8: bc    4, 0, 0x7F03E7C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03E7C4;
        }
    }

label_7F03E7AC:
    ctx->pc = 0x7F03E7ACu;
    ctx->downcount -= 2;
    // 7F03E7AC: cmpwi   r31, 113
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(113);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03E7B0:
    ctx->pc = 0x7F03E7B0u;
    // 7F03E7B0: bc    12, 2, 0x7F03E838
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03E838;
        }
    }

label_7F03E7B4:
    ctx->pc = 0x7F03E7B4u;
    ctx->downcount -= 1;
    // 7F03E7B4: bc    12, 0, 0x7F03E8FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03E8FC;
        }
    }

label_7F03E7B8:
    ctx->pc = 0x7F03E7B8u;
    ctx->downcount -= 2;
    // 7F03E7B8: cmpwi   r31, 129
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(129);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03E7BC:
    ctx->pc = 0x7F03E7BCu;
    // 7F03E7BC: bc    4, 0, 0x7F03E840
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03E840;
        }
    }

label_7F03E7C0:
    ctx->pc = 0x7F03E7C0u;
    ctx->downcount -= 1;
    // 7F03E7C0: b       0x7F03E8FC
    {
            goto label_7F03E8FC;
    }

label_7F03E7C4:
    ctx->pc = 0x7F03E7C4u;
    ctx->downcount -= 2;
    // 7F03E7C4: cmpwi   r31, 158
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(158);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03E7C8:
    ctx->pc = 0x7F03E7C8u;
    // 7F03E7C8: bc    4, 0, 0x7F03E8C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03E8C0;
        }
    }

label_7F03E7CC:
    ctx->pc = 0x7F03E7CCu;
    ctx->downcount -= 2;
    // 7F03E7CC: cmpwi   r31, 136
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(136);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03E7D0:
    ctx->pc = 0x7F03E7D0u;
    // 7F03E7D0: bc    4, 0, 0x7F03E8FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03E8FC;
        }
    }

label_7F03E7D4:
    ctx->pc = 0x7F03E7D4u;
    ctx->downcount -= 1;
    // 7F03E7D4: b       0x7F03E840
    {
            goto label_7F03E840;
    }

label_7F03E7D8:
    ctx->pc = 0x7F03E7D8u;
    ctx->downcount -= 2;
    // 7F03E7D8: cmpwi   r31, 234
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(234);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03E7DC:
    ctx->pc = 0x7F03E7DCu;
    // 7F03E7DC: bc    12, 2, 0x7F03E8C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03E8C0;
        }
    }

label_7F03E7E0:
    ctx->pc = 0x7F03E7E0u;
    ctx->downcount -= 1;
    // 7F03E7E0: bc    4, 0, 0x7F03E814
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03E814;
        }
    }

label_7F03E7E4:
    ctx->pc = 0x7F03E7E4u;
    ctx->downcount -= 2;
    // 7F03E7E4: cmpwi   r31, 194
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(194);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03E7E8:
    ctx->pc = 0x7F03E7E8u;
    // 7F03E7E8: bc    12, 2, 0x7F03E8C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03E8C0;
        }
    }

label_7F03E7EC:
    ctx->pc = 0x7F03E7ECu;
    ctx->downcount -= 1;
    // 7F03E7EC: bc    4, 0, 0x7F03E808
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03E808;
        }
    }

label_7F03E7F0:
    ctx->pc = 0x7F03E7F0u;
    ctx->downcount -= 2;
    // 7F03E7F0: cmpwi   r31, 174
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(174);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03E7F4:
    ctx->pc = 0x7F03E7F4u;
    // 7F03E7F4: bc    12, 2, 0x7F03E8C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03E8C0;
        }
    }

label_7F03E7F8:
    ctx->pc = 0x7F03E7F8u;
    ctx->downcount -= 1;
    // 7F03E7F8: bc    4, 0, 0x7F03E8FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03E8FC;
        }
    }

label_7F03E7FC:
    ctx->pc = 0x7F03E7FCu;
    ctx->downcount -= 2;
    // 7F03E7FC: cmpwi   r31, 161
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(161);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03E800:
    ctx->pc = 0x7F03E800u;
    // 7F03E800: bc    4, 0, 0x7F03E8FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03E8FC;
        }
    }

label_7F03E804:
    ctx->pc = 0x7F03E804u;
    ctx->downcount -= 1;
    // 7F03E804: b       0x7F03E898
    {
            goto label_7F03E898;
    }

label_7F03E808:
    ctx->pc = 0x7F03E808u;
    ctx->downcount -= 2;
    // 7F03E808: cmpwi   r31, 213
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(213);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03E80C:
    ctx->pc = 0x7F03E80Cu;
    // 7F03E80C: bc    12, 2, 0x7F03E8C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03E8C0;
        }
    }

label_7F03E810:
    ctx->pc = 0x7F03E810u;
    ctx->downcount -= 1;
    // 7F03E810: b       0x7F03E8FC
    {
            goto label_7F03E8FC;
    }

label_7F03E814:
    ctx->pc = 0x7F03E814u;
    ctx->downcount -= 2;
    // 7F03E814: cmpwi   r31, 261
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(261);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03E818:
    ctx->pc = 0x7F03E818u;
    // 7F03E818: bc    12, 2, 0x7F03E8EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03E8EC;
        }
    }

label_7F03E81C:
    ctx->pc = 0x7F03E81Cu;
    ctx->downcount -= 1;
    // 7F03E81C: bc    4, 0, 0x7F03E82C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03E82C;
        }
    }

label_7F03E820:
    ctx->pc = 0x7F03E820u;
    ctx->downcount -= 2;
    // 7F03E820: cmpwi   r31, 251
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(251);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03E824:
    ctx->pc = 0x7F03E824u;
    // 7F03E824: bc    12, 2, 0x7F03E8C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03E8C0;
        }
    }

label_7F03E828:
    ctx->pc = 0x7F03E828u;
    ctx->downcount -= 1;
    // 7F03E828: b       0x7F03E8FC
    {
            goto label_7F03E8FC;
    }

label_7F03E82C:
    ctx->pc = 0x7F03E82Cu;
    ctx->downcount -= 2;
    // 7F03E82C: cmpwi   r31, 318
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(318);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03E830:
    ctx->pc = 0x7F03E830u;
    // 7F03E830: bc    12, 2, 0x7F03E8F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03E8F4;
        }
    }

label_7F03E834:
    ctx->pc = 0x7F03E834u;
    ctx->downcount -= 1;
    // 7F03E834: b       0x7F03E8FC
    {
            goto label_7F03E8FC;
    }

label_7F03E838:
    ctx->pc = 0x7F03E838u;
    ctx->downcount -= 2;
    // 7F03E838: li      r29, 1570
    ctx->gpr[29] = (u32)(s32)(1570);

label_7F03E83C:
    ctx->pc = 0x7F03E83Cu;
    // 7F03E83C: b       0x7F03E908
    {
            goto label_7F03E908;
    }

label_7F03E840:
    ctx->pc = 0x7F03E840u;
    ctx->downcount -= 13;
    // 7F03E840: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F03E844:
    ctx->pc = 0x7F03E844u;
    // 7F03E844: addi    r6, r3, -11544
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-11544);

label_7F03E848:
    ctx->pc = 0x7F03E848u;
    // 7F03E848: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F03E84C:
    ctx->pc = 0x7F03E84Cu;
    // 7F03E84C: lwz     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03E850:
    ctx->pc = 0x7F03E850u;
    // 7F03E850: lwz     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03E854:
    ctx->pc = 0x7F03E854u;
    // 7F03E854: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03E858:
    ctx->pc = 0x7F03E858u;
    // 7F03E858: stw     r5, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F03E85C:
    ctx->pc = 0x7F03E85Cu;
    // 7F03E85C: stw     r4, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F03E860:
    ctx->pc = 0x7F03E860u;
    // 7F03E860: stw     r3, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F03E864:
    ctx->pc = 0x7F03E864u;
    // 7F03E864: stw     r0, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03E868:
    ctx->pc = 0x7F03E868u;
    // 7F03E868: lwz     r3, 464(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03E86C:
    ctx->pc = 0x7F03E86Cu;
    // 7F03E86C: addi    r3, r3, 2388
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(2388);

label_7F03E870:
    ctx->pc = 0x7F03E870u;
    // 7F03E870: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F03E874u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F03E874:
    ctx->pc = 0x7F03E874u;
    ctx->downcount -= 2;
    // 7F03E874: addi    r3, r1, 44
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(44);

label_7F03E878:
    ctx->pc = 0x7F03E878u;
    // 7F03E878: bl      0x7F3B3134
    {
            ctx->lr = 0x7F03E87Cu;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F03E87C:
    ctx->pc = 0x7F03E87Cu;
    ctx->downcount -= 2;
    // 7F03E87C: addi    r3, r1, 60
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(60);

label_7F03E880:
    ctx->pc = 0x7F03E880u;
    // 7F03E880: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F03E884u;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F03E884:
    ctx->pc = 0x7F03E884u;
    ctx->downcount -= 4;
    // 7F03E884: addi    r3, r1, 60
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(60);

label_7F03E888:
    ctx->pc = 0x7F03E888u;
    // 7F03E888: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F03E88C:
    ctx->pc = 0x7F03E88Cu;
    // 7F03E88C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03E890:
    ctx->pc = 0x7F03E890u;
    // 7F03E890: bl      0x7F26EB38
    {
            ctx->lr = 0x7F03E894u;
            ctx->pc = 0x7F26EB38u;
            return;
    }

label_7F03E894:
    ctx->pc = 0x7F03E894u;
    ctx->downcount -= 1;
    // 7F03E894: b       0x7F03E908
    {
            goto label_7F03E908;
    }

label_7F03E898:
    ctx->pc = 0x7F03E898u;
    ctx->downcount -= 4;
    // 7F03E898: lis     r4, 119
    ctx->gpr[4] = ((u32)(s32)(119) << 16);

label_7F03E89C:
    ctx->pc = 0x7F03E89Cu;
    // 7F03E89C: addi    r3, r30, 64
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(64);

label_7F03E8A0:
    ctx->pc = 0x7F03E8A0u;
    // 7F03E8A0: addi    r4, r4, -29039
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29039);

label_7F03E8A4:
    ctx->pc = 0x7F03E8A4u;
    // 7F03E8A4: bl      0x7F03C214
    {
            ctx->lr = 0x7F03E8A8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03C214u;
                return;
            }
            goto label_7F03C214;
    }

label_7F03E8A8:
    ctx->pc = 0x7F03E8A8u;
    ctx->downcount -= 3;
    // 7F03E8A8: cmpwi   r3, 0
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

label_7F03E8AC:
    ctx->pc = 0x7F03E8ACu;
    // 7F03E8AC: li      r0, 1847
    ctx->gpr[0] = (u32)(s32)(1847);

label_7F03E8B0:
    ctx->pc = 0x7F03E8B0u;
    // 7F03E8B0: bc    12, 2, 0x7F03E8B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03E8B8;
        }
    }

label_7F03E8B4:
    ctx->pc = 0x7F03E8B4u;
    ctx->downcount -= 1;
    // 7F03E8B4: li      r0, 1848
    ctx->gpr[0] = (u32)(s32)(1848);

label_7F03E8B8:
    ctx->pc = 0x7F03E8B8u;
    ctx->downcount -= 2;
    // 7F03E8B8: or   r29, r0, r0
    {
        ctx->gpr[29] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F03E8BC:
    ctx->pc = 0x7F03E8BCu;
    // 7F03E8BC: b       0x7F03E908
    {
            goto label_7F03E908;
    }

label_7F03E8C0:
    ctx->pc = 0x7F03E8C0u;
    ctx->downcount -= 8;
    // 7F03E8C0: lwz     r3, 3820(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3820);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03E8C4:
    ctx->pc = 0x7F03E8C4u;
    // 7F03E8C4: li      r29, 1569
    ctx->gpr[29] = (u32)(s32)(1569);

label_7F03E8C8:
    ctx->pc = 0x7F03E8C8u;
    // 7F03E8C8: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_7F03E8CC:
    ctx->pc = 0x7F03E8CCu;
    // 7F03E8CC: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F03E8D0:
    ctx->pc = 0x7F03E8D0u;
    // 7F03E8D0: stw     r3, 3820(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3820);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F03E8D4:
    ctx->pc = 0x7F03E8D4u;
    // 7F03E8D4: lwz     r3, 3820(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3820);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03E8D8:
    ctx->pc = 0x7F03E8D8u;
    // 7F03E8D8: cmpwi   r3, 6
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03E8DC:
    ctx->pc = 0x7F03E8DCu;
    // 7F03E8DC: bc    12, 1, 0x7F03E8E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03E8E4;
        }
    }

label_7F03E8E0:
    ctx->pc = 0x7F03E8E0u;
    ctx->downcount -= 1;
    // 7F03E8E0: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03E8E4:
    ctx->pc = 0x7F03E8E4u;
    ctx->downcount -= 2;
    // 7F03E8E4: stw     r0, 3820(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3820);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03E8E8:
    ctx->pc = 0x7F03E8E8u;
    // 7F03E8E8: b       0x7F03E908
    {
            goto label_7F03E908;
    }

label_7F03E8EC:
    ctx->pc = 0x7F03E8ECu;
    ctx->downcount -= 2;
    // 7F03E8EC: li      r29, 1567
    ctx->gpr[29] = (u32)(s32)(1567);

label_7F03E8F0:
    ctx->pc = 0x7F03E8F0u;
    // 7F03E8F0: b       0x7F03E908
    {
            goto label_7F03E908;
    }

label_7F03E8F4:
    ctx->pc = 0x7F03E8F4u;
    ctx->downcount -= 2;
    // 7F03E8F4: li      r29, 1550
    ctx->gpr[29] = (u32)(s32)(1550);

label_7F03E8F8:
    ctx->pc = 0x7F03E8F8u;
    // 7F03E8F8: b       0x7F03E908
    {
            goto label_7F03E908;
    }

label_7F03E8FC:
    ctx->pc = 0x7F03E8FCu;
    ctx->downcount -= 2;
    // 7F03E8FC: li      r29, -1
    ctx->gpr[29] = (u32)(s32)(-1);

label_7F03E900:
    ctx->pc = 0x7F03E900u;
    // 7F03E900: b       0x7F03E908
    {
            goto label_7F03E908;
    }

label_7F03E904:
    ctx->pc = 0x7F03E904u;
    ctx->downcount -= 1;
    // 7F03E904: li      r29, -1
    ctx->gpr[29] = (u32)(s32)(-1);

label_7F03E908:
    ctx->pc = 0x7F03E908u;
    ctx->downcount -= 3;
    // 7F03E908: cmpwi   r29, -1
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03E90C:
    ctx->pc = 0x7F03E90Cu;
    // 7F03E90C: stw     r31, 3832(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3832);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F03E910:
    ctx->pc = 0x7F03E910u;
    // 7F03E910: bc    12, 2, 0x7F03E924
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03E924;
        }
    }

label_7F03E914:
    ctx->pc = 0x7F03E914u;
    ctx->downcount -= 4;
    // 7F03E914: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F03E918:
    ctx->pc = 0x7F03E918u;
    // 7F03E918: addi    r3, r30, 64
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(64);

label_7F03E91C:
    ctx->pc = 0x7F03E91Cu;
    // 7F03E91C: li      r5, 63
    ctx->gpr[5] = (u32)(s32)(63);

label_7F03E920:
    ctx->pc = 0x7F03E920u;
    // 7F03E920: bl      0x7F011A74
    {
            ctx->lr = 0x7F03E924u;
            ctx->pc = 0x7F011A74u;
            return;
    }

label_7F03E924:
    ctx->pc = 0x7F03E924u;
    ctx->downcount -= 2;
    // 7F03E924: cmpwi   r31, 275
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(275);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03E928:
    ctx->pc = 0x7F03E928u;
    // 7F03E928: bc    4, 2, 0x7F03EA14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03EA14;
        }
    }

label_7F03E92C:
    ctx->pc = 0x7F03E92Cu;
    ctx->downcount -= 3;
    // 7F03E92C: lwz     r0, 3992(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3992);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03E930:
    ctx->pc = 0x7F03E930u;
    // 7F03E930: cmpwi   r0, 0
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

label_7F03E934:
    ctx->pc = 0x7F03E934u;
    // 7F03E934: bc    4, 2, 0x7F03EA04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03EA04;
        }
    }

label_7F03E938:
    ctx->pc = 0x7F03E938u;
    ctx->downcount -= 3;
    // 7F03E938: lwz     r0, 4004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4004);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03E93C:
    ctx->pc = 0x7F03E93Cu;
    // 7F03E93C: cmpwi   r0, 1
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

label_7F03E940:
    ctx->pc = 0x7F03E940u;
    // 7F03E940: bc    4, 2, 0x7F03E9E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03E9E8;
        }
    }

label_7F03E944:
    ctx->pc = 0x7F03E944u;
    ctx->downcount -= 2;
    // 7F03E944: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03E948:
    ctx->pc = 0x7F03E948u;
    // 7F03E948: bl      0x7F041908
    {
            ctx->lr = 0x7F03E94Cu;
            ctx->pc = 0x7F041908u;
            return;
    }

label_7F03E94C:
    ctx->pc = 0x7F03E94Cu;
    ctx->downcount -= 2;
    // 7F03E94C: cmpwi   r3, 0
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

label_7F03E950:
    ctx->pc = 0x7F03E950u;
    // 7F03E950: bc    4, 2, 0x7F03E9DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03E9DC;
        }
    }

label_7F03E954:
    ctx->pc = 0x7F03E954u;
    ctx->downcount -= 1;
    // 7F03E954: bl      0x800147F8
    {
            ctx->lr = 0x7F03E958u;
            ctx->pc = 0x800147F8u;
            return;
    }

label_7F03E958:
    ctx->pc = 0x7F03E958u;
    ctx->downcount -= 51;
    // 7F03E958: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F03E95C:
    ctx->pc = 0x7F03E95Cu;
    // 7F03E95C: lbz     r6, 4257(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4257);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F03E960:
    ctx->pc = 0x7F03E960u;
    // 7F03E960: divw   r4, r3, r5
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[4] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F03E964:
    ctx->pc = 0x7F03E964u;
    // 7F03E964: extsb. r0, r6
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[6];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F03E968:
    ctx->pc = 0x7F03E968u;
    // 7F03E968: mullw   r0, r4, r5
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[0] = (u32)product;
    }

label_7F03E96C:
    ctx->pc = 0x7F03E96Cu;
    // 7F03E96C: subf   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F03E970:
    ctx->pc = 0x7F03E970u;
    // 7F03E970: addi    r7, r3, 1
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(1);

label_7F03E974:
    ctx->pc = 0x7F03E974u;
    // 7F03E974: bc    4, 2, 0x7F03E990
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03E990;
        }
    }

label_7F03E978:
    ctx->pc = 0x7F03E978u;
    ctx->downcount -= 5;
    // 7F03E978: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F03E97C:
    ctx->pc = 0x7F03E97Cu;
    // 7F03E97C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03E980:
    ctx->pc = 0x7F03E980u;
    // 7F03E980: stb     r0, 4257(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4257);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F03E984:
    ctx->pc = 0x7F03E984u;
    // 7F03E984: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F03E988:
    ctx->pc = 0x7F03E988u;
    // 7F03E988: bl      0x7F041878
    {
            ctx->lr = 0x7F03E98Cu;
            ctx->pc = 0x7F041878u;
            return;
    }

label_7F03E98C:
    ctx->pc = 0x7F03E98Cu;
    ctx->downcount -= 1;
    // 7F03E98C: b       0x7F03E9DC
    {
            goto label_7F03E9DC;
    }

label_7F03E990:
    ctx->pc = 0x7F03E990u;
    ctx->downcount -= 4;
    // 7F03E990: extsb r0, r6
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[6];
    }

label_7F03E994:
    ctx->pc = 0x7F03E994u;
    // 7F03E994: rlwinm r4, r7, 1, 0, 30
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[7], 1u) & 0xFFFFFFFEu;
    }

label_7F03E998:
    ctx->pc = 0x7F03E998u;
    // 7F03E998: and.   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[4];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F03E99C:
    ctx->pc = 0x7F03E99Cu;
    // 7F03E99C: bc    4, 2, 0x7F03E9DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03E9DC;
        }
    }

label_7F03E9A0:
    ctx->pc = 0x7F03E9A0u;
    ctx->downcount -= 15;
    // 7F03E9A0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F03E9A4:
    ctx->pc = 0x7F03E9A4u;
    // 7F03E9A4: or   r5, r6, r4
    {
        ctx->gpr[5] = ctx->gpr[6] | ctx->gpr[4];
    }

label_7F03E9A8:
    ctx->pc = 0x7F03E9A8u;
    // 7F03E9A8: addi    r6, r3, -11528
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-11528);

label_7F03E9AC:
    ctx->pc = 0x7F03E9ACu;
    // 7F03E9AC: rlwinm r0, r7, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[7], 2u) & 0xFFFFFFFCu;
    }

label_7F03E9B0:
    ctx->pc = 0x7F03E9B0u;
    // 7F03E9B0: lwz     r8, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F03E9B4:
    ctx->pc = 0x7F03E9B4u;
    // 7F03E9B4: addi    r4, r1, 28
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(28);

label_7F03E9B8:
    ctx->pc = 0x7F03E9B8u;
    // 7F03E9B8: lwz     r7, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F03E9BC:
    ctx->pc = 0x7F03E9BCu;
    // 7F03E9BC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03E9C0:
    ctx->pc = 0x7F03E9C0u;
    // 7F03E9C0: lwz     r6, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F03E9C4:
    ctx->pc = 0x7F03E9C4u;
    // 7F03E9C4: stw     r8, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F03E9C8:
    ctx->pc = 0x7F03E9C8u;
    // 7F03E9C8: stw     r7, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F03E9CC:
    ctx->pc = 0x7F03E9CCu;
    // 7F03E9CC: stw     r6, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F03E9D0:
    ctx->pc = 0x7F03E9D0u;
    // 7F03E9D0: stb     r5, 4257(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4257);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F03E9D4:
    ctx->pc = 0x7F03E9D4u;
    // 7F03E9D4: lwzx    r4, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03E9D8:
    ctx->pc = 0x7F03E9D8u;
    // 7F03E9D8: bl      0x7F041878
    {
            ctx->lr = 0x7F03E9DCu;
            ctx->pc = 0x7F041878u;
            return;
    }

label_7F03E9DC:
    ctx->pc = 0x7F03E9DCu;
    ctx->downcount -= 1;
    // 7F03E9DC: bl      0x7F03C254
    {
            ctx->lr = 0x7F03E9E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03C254u;
                return;
            }
            goto label_7F03C254;
    }

label_7F03E9E0:
    ctx->pc = 0x7F03E9E0u;
    ctx->downcount -= 2;
    // 7F03E9E0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F03E9E4:
    ctx->pc = 0x7F03E9E4u;
    // 7F03E9E4: stw     r0, 4004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03E9E8:
    ctx->pc = 0x7F03E9E8u;
    ctx->downcount -= 5;
    // 7F03E9E8: lwz     r3, 3996(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3996);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03E9EC:
    ctx->pc = 0x7F03E9ECu;
    // 7F03E9EC: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F03E9F0:
    ctx->pc = 0x7F03E9F0u;
    // 7F03E9F0: cmpwi   r0, 3
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

label_7F03E9F4:
    ctx->pc = 0x7F03E9F4u;
    // 7F03E9F4: stw     r0, 3996(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3996);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03E9F8:
    ctx->pc = 0x7F03E9F8u;
    // 7F03E9F8: bc    4, 2, 0x7F03EA04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03EA04;
        }
    }

label_7F03E9FC:
    ctx->pc = 0x7F03E9FCu;
    ctx->downcount -= 2;
    // 7F03E9FC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F03EA00:
    ctx->pc = 0x7F03EA00u;
    // 7F03EA00: stw     r0, 3992(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3992);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03EA04:
    ctx->pc = 0x7F03EA04u;
    ctx->downcount -= 4;
    // 7F03EA04: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F03EA08:
    ctx->pc = 0x7F03EA08u;
    // 7F03EA08: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F03EA0C:
    ctx->pc = 0x7F03EA0Cu;
    // 7F03EA0C: stw     r3, 3816(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3816);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F03EA10:
    ctx->pc = 0x7F03EA10u;
    // 7F03EA10: stw     r0, 3820(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3820);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03EA14:
    ctx->pc = 0x7F03EA14u;
    ctx->downcount -= 16;
    // 7F03EA14: lmw     r29, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F03EA18:
    ctx->pc = 0x7F03EA18u;
    // 7F03EA18: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03EA1C:
    ctx->pc = 0x7F03EA1Cu;
    // 7F03EA1C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03EA20:
    ctx->pc = 0x7F03EA20u;
    // 7F03EA20: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_7F03EA24:
    ctx->pc = 0x7F03EA24u;
    // 7F03EA24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03EA28:
    ctx->pc = 0x7F03EA28u;
    ctx->downcount -= 19;
    // 7F03EA28: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03EA2C:
    ctx->pc = 0x7F03EA2Cu;
    // 7F03EA2C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03EA30:
    ctx->pc = 0x7F03EA30u;
    // 7F03EA30: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03EA34:
    ctx->pc = 0x7F03EA34u;
    // 7F03EA34: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F03EA38:
    ctx->pc = 0x7F03EA38u;
    // 7F03EA38: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F03EA3C:
    ctx->pc = 0x7F03EA3Cu;
    // 7F03EA3C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03EA40:
    ctx->pc = 0x7F03EA40u;
    // 7F03EA40: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03EA44:
    ctx->pc = 0x7F03EA44u;
    // 7F03EA44: cmpwi   r0, 0
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

label_7F03EA48:
    ctx->pc = 0x7F03EA48u;
    // 7F03EA48: bc    12, 2, 0x7F03EA54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03EA54;
        }
    }

label_7F03EA4C:
    ctx->pc = 0x7F03EA4Cu;
    ctx->downcount -= 1;
    // 7F03EA4C: bc    12, 0, 0x7F03EAA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03EAA0;
        }
    }

label_7F03EA50:
    ctx->pc = 0x7F03EA50u;
    ctx->downcount -= 1;
    // 7F03EA50: b       0x7F03EAA0
    {
            goto label_7F03EAA0;
    }

label_7F03EA54:
    ctx->pc = 0x7F03EA54u;
    ctx->downcount -= 3;
    // 7F03EA54: lwz     r0, 3836(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3836);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03EA58:
    ctx->pc = 0x7F03EA58u;
    // 7F03EA58: cmpwi   r0, 0
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

label_7F03EA5C:
    ctx->pc = 0x7F03EA5Cu;
    // 7F03EA5C: bc    12, 2, 0x7F03EA64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03EA64;
        }
    }

label_7F03EA60:
    ctx->pc = 0x7F03EA60u;
    ctx->downcount -= 1;
    // 7F03EA60: bl      0x7F03CE4C
    {
            ctx->lr = 0x7F03EA64u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03CE4Cu;
                return;
            }
            goto label_7F03CE4C;
    }

label_7F03EA64:
    ctx->pc = 0x7F03EA64u;
    ctx->downcount -= 2;
    // 7F03EA64: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03EA68:
    ctx->pc = 0x7F03EA68u;
    // 7F03EA68: bl      0x7F03D65C
    {
            ctx->lr = 0x7F03EA6Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03D65Cu;
                return;
            }
            goto label_7F03D65C;
    }

label_7F03EA6C:
    ctx->pc = 0x7F03EA6Cu;
    ctx->downcount -= 3;
    // 7F03EA6C: lwz     r3, 3976(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3976);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03EA70:
    ctx->pc = 0x7F03EA70u;
    // 7F03EA70: cmpwi   r3, 0
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

label_7F03EA74:
    ctx->pc = 0x7F03EA74u;
    // 7F03EA74: bc    12, 2, 0x7F03EA98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03EA98;
        }
    }

label_7F03EA78:
    ctx->pc = 0x7F03EA78u;
    ctx->downcount -= 4;
    // 7F03EA78: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03EA7C:
    ctx->pc = 0x7F03EA7Cu;
    // 7F03EA7C: lwz     r0, 19268(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03EA80:
    ctx->pc = 0x7F03EA80u;
    // 7F03EA80: cmpwi   r0, 0
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

label_7F03EA84:
    ctx->pc = 0x7F03EA84u;
    // 7F03EA84: bc    4, 2, 0x7F03EA98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03EA98;
        }
    }

label_7F03EA88:
    ctx->pc = 0x7F03EA88u;
    ctx->downcount -= 2;
    // 7F03EA88: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F03EA8C:
    ctx->pc = 0x7F03EA8Cu;
    // 7F03EA8C: bl      0x7F3C7728
    {
            ctx->lr = 0x7F03EA90u;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F03EA90:
    ctx->pc = 0x7F03EA90u;
    ctx->downcount -= 2;
    // 7F03EA90: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F03EA94:
    ctx->pc = 0x7F03EA94u;
    // 7F03EA94: stw     r0, 3976(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3976);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03EA98:
    ctx->pc = 0x7F03EA98u;
    ctx->downcount -= 2;
    // 7F03EA98: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F03EA9C:
    ctx->pc = 0x7F03EA9Cu;
    // 7F03EA9C: stw     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03EAA0:
    ctx->pc = 0x7F03EAA0u;
    ctx->downcount -= 16;
    // 7F03EAA0: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F03EAA4:
    ctx->pc = 0x7F03EAA4u;
    // 7F03EAA4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03EAA8:
    ctx->pc = 0x7F03EAA8u;
    // 7F03EAA8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03EAAC:
    ctx->pc = 0x7F03EAACu;
    // 7F03EAAC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03EAB0:
    ctx->pc = 0x7F03EAB0u;
    // 7F03EAB0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03EAB4:
    ctx->pc = 0x7F03EAB4u;
    ctx->downcount -= 19;
    // 7F03EAB4: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03EAB8:
    ctx->pc = 0x7F03EAB8u;
    // 7F03EAB8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03EABC:
    ctx->pc = 0x7F03EABCu;
    // 7F03EABC: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03EAC0:
    ctx->pc = 0x7F03EAC0u;
    // 7F03EAC0: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F03EAC4:
    ctx->pc = 0x7F03EAC4u;
    // 7F03EAC4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03EAC8:
    ctx->pc = 0x7F03EAC8u;
    // 7F03EAC8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F03EACC:
    ctx->pc = 0x7F03EACCu;
    // 7F03EACC: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03EAD0:
    ctx->pc = 0x7F03EAD0u;
    // 7F03EAD0: addi    r3, r30, 64
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(64);

label_7F03EAD4:
    ctx->pc = 0x7F03EAD4u;
    // 7F03EAD4: bl      0x7F041AB0
    {
            ctx->lr = 0x7F03EAD8u;
            ctx->pc = 0x7F041AB0u;
            return;
    }

label_7F03EAD8:
    ctx->pc = 0x7F03EAD8u;
    ctx->downcount -= 4;
    // 7F03EAD8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F03EADC:
    ctx->pc = 0x7F03EADCu;
    // 7F03EADC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F03EAE0:
    ctx->pc = 0x7F03EAE0u;
    // 7F03EAE0: addi    r3, r3, -5708
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5708);

label_7F03EAE4:
    ctx->pc = 0x7F03EAE4u;
    // 7F03EAE4: bl      0x7F041AB0
    {
            ctx->lr = 0x7F03EAE8u;
            ctx->pc = 0x7F041AB0u;
            return;
    }

label_7F03EAE8:
    ctx->pc = 0x7F03EAE8u;
    ctx->downcount -= 4;
    // 7F03EAE8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F03EAEC:
    ctx->pc = 0x7F03EAECu;
    // 7F03EAEC: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03EAF0:
    ctx->pc = 0x7F03EAF0u;
    // 7F03EAF0: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F03EAF4:
    ctx->pc = 0x7F03EAF4u;
    // 7F03EAF4: bl      0x7F3CC634
    {
            ctx->lr = 0x7F03EAF8u;
            ctx->pc = 0x7F3CC634u;
            return;
    }

label_7F03EAF8:
    ctx->pc = 0x7F03EAF8u;
    ctx->downcount -= 3;
    // 7F03EAF8: lha     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03EAFC:
    ctx->pc = 0x7F03EAFCu;
    // 7F03EAFC: lha     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03EB00:
    ctx->pc = 0x7F03EB00u;
    // 7F03EB00: bl      0x7F02A6B0
    {
            ctx->lr = 0x7F03EB04u;
            ctx->pc = 0x7F02A6B0u;
            return;
    }

label_7F03EB04:
    ctx->pc = 0x7F03EB04u;
    ctx->downcount -= 4;
    // 7F03EB04: sth     r3, 106(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(106);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F03EB08:
    ctx->pc = 0x7F03EB08u;
    // 7F03EB08: lwz     r0, 3852(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3852);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03EB0C:
    ctx->pc = 0x7F03EB0Cu;
    // 7F03EB0C: cmpwi   r0, 0
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

label_7F03EB10:
    ctx->pc = 0x7F03EB10u;
    // 7F03EB10: bc    12, 2, 0x7F03EB68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03EB68;
        }
    }

label_7F03EB14:
    ctx->pc = 0x7F03EB14u;
    ctx->downcount -= 2;
    // 7F03EB14: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03EB18:
    ctx->pc = 0x7F03EB18u;
    // 7F03EB18: bl      0x7F041680
    {
            ctx->lr = 0x7F03EB1Cu;
            ctx->pc = 0x7F041680u;
            return;
    }

label_7F03EB1C:
    ctx->pc = 0x7F03EB1Cu;
    ctx->downcount -= 2;
    // 7F03EB1C: cmpwi   r3, 0
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

label_7F03EB20:
    ctx->pc = 0x7F03EB20u;
    // 7F03EB20: bc    4, 2, 0x7F03EB44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03EB44;
        }
    }

label_7F03EB24:
    ctx->pc = 0x7F03EB24u;
    ctx->downcount -= 2;
    // 7F03EB24: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03EB28:
    ctx->pc = 0x7F03EB28u;
    // 7F03EB28: bl      0x7F03CD4C
    {
            ctx->lr = 0x7F03EB2Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03CD4Cu;
                return;
            }
            goto label_7F03CD4C;
    }

label_7F03EB2C:
    ctx->pc = 0x7F03EB2Cu;
    ctx->downcount -= 2;
    // 7F03EB2C: cmpwi   r3, 0
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

label_7F03EB30:
    ctx->pc = 0x7F03EB30u;
    // 7F03EB30: bc    4, 2, 0x7F03EC28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03EC28;
        }
    }

label_7F03EB34:
    ctx->pc = 0x7F03EB34u;
    ctx->downcount -= 3;
    // 7F03EB34: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03EB38:
    ctx->pc = 0x7F03EB38u;
    // 7F03EB38: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F03EB3C:
    ctx->pc = 0x7F03EB3Cu;
    // 7F03EB3C: bl      0x7F03D978
    {
            ctx->lr = 0x7F03EB40u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03D978u;
                return;
            }
            goto label_7F03D978;
    }

label_7F03EB40:
    ctx->pc = 0x7F03EB40u;
    ctx->downcount -= 1;
    // 7F03EB40: b       0x7F03EC28
    {
            goto label_7F03EC28;
    }

label_7F03EB44:
    ctx->pc = 0x7F03EB44u;
    ctx->downcount -= 3;
    // 7F03EB44: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03EB48:
    ctx->pc = 0x7F03EB48u;
    // 7F03EB48: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F03EB4C:
    ctx->pc = 0x7F03EB4Cu;
    // 7F03EB4C: bl      0x7F03D978
    {
            ctx->lr = 0x7F03EB50u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03D978u;
                return;
            }
            goto label_7F03D978;
    }

label_7F03EB50:
    ctx->pc = 0x7F03EB50u;
    ctx->downcount -= 2;
    // 7F03EB50: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03EB54:
    ctx->pc = 0x7F03EB54u;
    // 7F03EB54: bl      0x7F03D65C
    {
            ctx->lr = 0x7F03EB58u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03D65Cu;
                return;
            }
            goto label_7F03D65C;
    }

label_7F03EB58:
    ctx->pc = 0x7F03EB58u;
    ctx->downcount -= 4;
    // 7F03EB58: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F03EB5C:
    ctx->pc = 0x7F03EB5Cu;
    // 7F03EB5C: stw     r0, 3956(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3956);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03EB60:
    ctx->pc = 0x7F03EB60u;
    // 7F03EB60: stw     r0, 3960(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3960);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03EB64:
    ctx->pc = 0x7F03EB64u;
    // 7F03EB64: b       0x7F03EC28
    {
            goto label_7F03EC28;
    }

label_7F03EB68:
    ctx->pc = 0x7F03EB68u;
    ctx->downcount -= 3;
    // 7F03EB68: lwz     r0, 3836(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3836);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03EB6C:
    ctx->pc = 0x7F03EB6Cu;
    // 7F03EB6C: cmpwi   r0, 0
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

label_7F03EB70:
    ctx->pc = 0x7F03EB70u;
    // 7F03EB70: bc    12, 2, 0x7F03EBB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03EBB0;
        }
    }

label_7F03EB74:
    ctx->pc = 0x7F03EB74u;
    ctx->downcount -= 2;
    // 7F03EB74: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03EB78:
    ctx->pc = 0x7F03EB78u;
    // 7F03EB78: bl      0x7F0411A8
    {
            ctx->lr = 0x7F03EB7Cu;
            ctx->pc = 0x7F0411A8u;
            return;
    }

label_7F03EB7C:
    ctx->pc = 0x7F03EB7Cu;
    ctx->downcount -= 6;
    // 7F03EB7C: lwz     r0, 3840(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3840);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03EB80:
    ctx->pc = 0x7F03EB80u;
    // 7F03EB80: or   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[3];
    }

label_7F03EB84:
    ctx->pc = 0x7F03EB84u;
    // 7F03EB84: stw     r0, 3840(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3840);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03EB88:
    ctx->pc = 0x7F03EB88u;
    // 7F03EB88: lwz     r0, 3840(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3840);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03EB8C:
    ctx->pc = 0x7F03EB8Cu;
    // 7F03EB8C: cmpwi   r0, 0
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

label_7F03EB90:
    ctx->pc = 0x7F03EB90u;
    // 7F03EB90: bc    12, 2, 0x7F03EBE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03EBE0;
        }
    }

label_7F03EB94:
    ctx->pc = 0x7F03EB94u;
    ctx->downcount -= 4;
    // 7F03EB94: lwz     r0, 4084(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4084);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03EB98:
    ctx->pc = 0x7F03EB98u;
    // 7F03EB98: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03EB9C:
    ctx->pc = 0x7F03EB9Cu;
    // 7F03EB9C: stw     r0, 3868(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3868);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03EBA0:
    ctx->pc = 0x7F03EBA0u;
    // 7F03EBA0: bl      0x7F03CE4C
    {
            ctx->lr = 0x7F03EBA4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03CE4Cu;
                return;
            }
            goto label_7F03CE4C;
    }

label_7F03EBA4:
    ctx->pc = 0x7F03EBA4u;
    ctx->downcount -= 3;
    // 7F03EBA4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F03EBA8:
    ctx->pc = 0x7F03EBA8u;
    // 7F03EBA8: stw     r0, 3840(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3840);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03EBAC:
    ctx->pc = 0x7F03EBACu;
    // 7F03EBAC: b       0x7F03EBE0
    {
            goto label_7F03EBE0;
    }

label_7F03EBB0:
    ctx->pc = 0x7F03EBB0u;
    ctx->downcount -= 2;
    // 7F03EBB0: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F03EBB4:
    ctx->pc = 0x7F03EBB4u;
    // 7F03EBB4: bl      0x7F3CC44C
    {
            ctx->lr = 0x7F03EBB8u;
            ctx->pc = 0x7F3CC44Cu;
            return;
    }

label_7F03EBB8:
    ctx->pc = 0x7F03EBB8u;
    ctx->downcount -= 3;
    // 7F03EBB8: lwz     r0, 4096(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4096);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03EBBC:
    ctx->pc = 0x7F03EBBCu;
    // 7F03EBBC: cmpw    r3, r0
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

label_7F03EBC0:
    ctx->pc = 0x7F03EBC0u;
    // 7F03EBC0: bc    4, 0, 0x7F03EBE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03EBE0;
        }
    }

label_7F03EBC4:
    ctx->pc = 0x7F03EBC4u;
    ctx->downcount -= 2;
    // 7F03EBC4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03EBC8:
    ctx->pc = 0x7F03EBC8u;
    // 7F03EBC8: bl      0x7F041650
    {
            ctx->lr = 0x7F03EBCCu;
            ctx->pc = 0x7F041650u;
            return;
    }

label_7F03EBCC:
    ctx->pc = 0x7F03EBCCu;
    ctx->downcount -= 2;
    // 7F03EBCC: cmpwi   r3, 0
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

label_7F03EBD0:
    ctx->pc = 0x7F03EBD0u;
    // 7F03EBD0: bc    4, 2, 0x7F03EC28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03EC28;
        }
    }

label_7F03EBD4:
    ctx->pc = 0x7F03EBD4u;
    ctx->downcount -= 2;
    // 7F03EBD4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03EBD8:
    ctx->pc = 0x7F03EBD8u;
    // 7F03EBD8: bl      0x7F03CD4C
    {
            ctx->lr = 0x7F03EBDCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03CD4Cu;
                return;
            }
            goto label_7F03CD4C;
    }

label_7F03EBDC:
    ctx->pc = 0x7F03EBDCu;
    ctx->downcount -= 1;
    // 7F03EBDC: b       0x7F03EC28
    {
            goto label_7F03EC28;
    }

label_7F03EBE0:
    ctx->pc = 0x7F03EBE0u;
    ctx->downcount -= 4;
    // 7F03EBE0: lwz     r3, 3720(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3720);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03EBE4:
    ctx->pc = 0x7F03EBE4u;
    // 7F03EBE4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F03EBE8:
    ctx->pc = 0x7F03EBE8u;
    // 7F03EBE8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03EBEC:
    ctx->pc = 0x7F03EBECu;
    // 7F03EBEC: bl      0x80051BB0
    {
            ctx->lr = 0x7F03EBF0u;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F03EBF0:
    ctx->pc = 0x7F03EBF0u;
    ctx->downcount -= 2;
    // 7F03EBF0: cmpwi   r3, 0
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

label_7F03EBF4:
    ctx->pc = 0x7F03EBF4u;
    // 7F03EBF4: bc    4, 2, 0x7F03EC28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03EC28;
        }
    }

label_7F03EBF8:
    ctx->pc = 0x7F03EBF8u;
    ctx->downcount -= 5;
    // 7F03EBF8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F03EBFC:
    ctx->pc = 0x7F03EBFCu;
    // 7F03EBFC: stw     r0, 3720(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3720);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03EC00:
    ctx->pc = 0x7F03EC00u;
    // 7F03EC00: lwz     r0, 3836(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3836);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03EC04:
    ctx->pc = 0x7F03EC04u;
    // 7F03EC04: cmpwi   r0, 0
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

label_7F03EC08:
    ctx->pc = 0x7F03EC08u;
    // 7F03EC08: bc    12, 2, 0x7F03EC1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03EC1C;
        }
    }

label_7F03EC0C:
    ctx->pc = 0x7F03EC0Cu;
    ctx->downcount -= 3;
    // 7F03EC0C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03EC10:
    ctx->pc = 0x7F03EC10u;
    // 7F03EC10: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F03EC14:
    ctx->pc = 0x7F03EC14u;
    // 7F03EC14: bl      0x7F03D978
    {
            ctx->lr = 0x7F03EC18u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03D978u;
                return;
            }
            goto label_7F03D978;
    }

label_7F03EC18:
    ctx->pc = 0x7F03EC18u;
    ctx->downcount -= 1;
    // 7F03EC18: b       0x7F03EC28
    {
            goto label_7F03EC28;
    }

label_7F03EC1C:
    ctx->pc = 0x7F03EC1Cu;
    ctx->downcount -= 3;
    // 7F03EC1C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03EC20:
    ctx->pc = 0x7F03EC20u;
    // 7F03EC20: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F03EC24:
    ctx->pc = 0x7F03EC24u;
    // 7F03EC24: bl      0x7F03D978
    {
            ctx->lr = 0x7F03EC28u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03D978u;
                return;
            }
            goto label_7F03D978;
    }

label_7F03EC28:
    ctx->pc = 0x7F03EC28u;
    ctx->downcount -= 16;
    // 7F03EC28: lmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F03EC2C:
    ctx->pc = 0x7F03EC2Cu;
    // 7F03EC2C: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03EC30:
    ctx->pc = 0x7F03EC30u;
    // 7F03EC30: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03EC34:
    ctx->pc = 0x7F03EC34u;
    // 7F03EC34: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F03EC38:
    ctx->pc = 0x7F03EC38u;
    // 7F03EC38: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03EC3C:
    ctx->pc = 0x7F03EC3Cu;
    ctx->downcount -= 10;
    // 7F03EC3C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03EC40:
    ctx->pc = 0x7F03EC40u;
    // 7F03EC40: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03EC44:
    ctx->pc = 0x7F03EC44u;
    // 7F03EC44: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03EC48:
    ctx->pc = 0x7F03EC48u;
    // 7F03EC48: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F03EC4C:
    ctx->pc = 0x7F03EC4Cu;
    // 7F03EC4C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03EC50:
    ctx->pc = 0x7F03EC50u;
    // 7F03EC50: lwz     r5, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F03EC54:
    ctx->pc = 0x7F03EC54u;
    // 7F03EC54: addi    r0, r5, 1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(1);

label_7F03EC58:
    ctx->pc = 0x7F03EC58u;
    // 7F03EC58: cmpwi   r0, 180
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

label_7F03EC5C:
    ctx->pc = 0x7F03EC5Cu;
    // 7F03EC5C: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03EC60:
    ctx->pc = 0x7F03EC60u;
    // 7F03EC60: bc    4, 1, 0x7F03EC88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03EC88;
        }
    }

label_7F03EC64:
    ctx->pc = 0x7F03EC64u;
    ctx->downcount -= 1;
    // 7F03EC64: bl      0x7F041908
    {
            ctx->lr = 0x7F03EC68u;
            ctx->pc = 0x7F041908u;
            return;
    }

label_7F03EC68:
    ctx->pc = 0x7F03EC68u;
    ctx->downcount -= 2;
    // 7F03EC68: cmpwi   r3, 0
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

label_7F03EC6C:
    ctx->pc = 0x7F03EC6Cu;
    // 7F03EC6C: bc    4, 2, 0x7F03EC7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03EC7C;
        }
    }

label_7F03EC70:
    ctx->pc = 0x7F03EC70u;
    ctx->downcount -= 3;
    // 7F03EC70: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03EC74:
    ctx->pc = 0x7F03EC74u;
    // 7F03EC74: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F03EC78:
    ctx->pc = 0x7F03EC78u;
    // 7F03EC78: bl      0x7F041878
    {
            ctx->lr = 0x7F03EC7Cu;
            ctx->pc = 0x7F041878u;
            return;
    }

label_7F03EC7C:
    ctx->pc = 0x7F03EC7Cu;
    ctx->downcount -= 3;
    // 7F03EC7C: addi    r3, r31, 4008
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4008);

label_7F03EC80:
    ctx->pc = 0x7F03EC80u;
    // 7F03EC80: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F03EC84:
    ctx->pc = 0x7F03EC84u;
    // 7F03EC84: bl      0x7F03D978
    {
            ctx->lr = 0x7F03EC88u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03D978u;
                return;
            }
            goto label_7F03D978;
    }

label_7F03EC88:
    ctx->pc = 0x7F03EC88u;
    ctx->downcount -= 6;
    // 7F03EC88: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03EC8C:
    ctx->pc = 0x7F03EC8Cu;
    // 7F03EC8C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F03EC90:
    ctx->pc = 0x7F03EC90u;
    // 7F03EC90: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03EC94:
    ctx->pc = 0x7F03EC94u;
    // 7F03EC94: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03EC98:
    ctx->pc = 0x7F03EC98u;
    // 7F03EC98: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03EC9C:
    ctx->pc = 0x7F03EC9Cu;
    ctx->downcount -= 8;
    // 7F03EC9C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03ECA0:
    ctx->pc = 0x7F03ECA0u;
    // 7F03ECA0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03ECA4:
    ctx->pc = 0x7F03ECA4u;
    // 7F03ECA4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03ECA8:
    ctx->pc = 0x7F03ECA8u;
    // 7F03ECA8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F03ECAC:
    ctx->pc = 0x7F03ECACu;
    // 7F03ECAC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03ECB0:
    ctx->pc = 0x7F03ECB0u;
    // 7F03ECB0: lwz     r0, 3848(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3848);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03ECB4:
    ctx->pc = 0x7F03ECB4u;
    // 7F03ECB4: cmpwi   r0, 0
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

label_7F03ECB8:
    ctx->pc = 0x7F03ECB8u;
    // 7F03ECB8: bc    4, 2, 0x7F03ED34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03ED34;
        }
    }

label_7F03ECBC:
    ctx->pc = 0x7F03ECBCu;
    ctx->downcount -= 3;
    // 7F03ECBC: lwz     r0, 3864(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3864);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03ECC0:
    ctx->pc = 0x7F03ECC0u;
    // 7F03ECC0: cmpwi   r0, 0
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

label_7F03ECC4:
    ctx->pc = 0x7F03ECC4u;
    // 7F03ECC4: bc    4, 2, 0x7F03ED34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03ED34;
        }
    }

label_7F03ECC8:
    ctx->pc = 0x7F03ECC8u;
    ctx->downcount -= 3;
    // 7F03ECC8: lwz     r0, 3856(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3856);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03ECCC:
    ctx->pc = 0x7F03ECCCu;
    // 7F03ECCC: cmpwi   r0, 0
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

label_7F03ECD0:
    ctx->pc = 0x7F03ECD0u;
    // 7F03ECD0: bc    4, 2, 0x7F03ED34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03ED34;
        }
    }

label_7F03ECD4:
    ctx->pc = 0x7F03ECD4u;
    ctx->downcount -= 3;
    // 7F03ECD4: lwz     r0, 4248(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4248);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03ECD8:
    ctx->pc = 0x7F03ECD8u;
    // 7F03ECD8: rlwinm. r0, r0, 0, 31, 31
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

label_7F03ECDC:
    ctx->pc = 0x7F03ECDCu;
    // 7F03ECDC: bc    4, 2, 0x7F03ED34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03ED34;
        }
    }

label_7F03ECE0:
    ctx->pc = 0x7F03ECE0u;
    ctx->downcount -= 1;
    // 7F03ECE0: bl      0x7F03F720
    {
            ctx->lr = 0x7F03ECE4u;
            goto label_7F03F720;
    }

label_7F03ECE4:
    ctx->pc = 0x7F03ECE4u;
    ctx->downcount -= 2;
    // 7F03ECE4: cmpwi   r3, 0
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

label_7F03ECE8:
    ctx->pc = 0x7F03ECE8u;
    // 7F03ECE8: bc    12, 2, 0x7F03ED34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03ED34;
        }
    }

label_7F03ECEC:
    ctx->pc = 0x7F03ECECu;
    ctx->downcount -= 7;
    // 7F03ECEC: li      r0, 120
    ctx->gpr[0] = (u32)(s32)(120);

label_7F03ECF0:
    ctx->pc = 0x7F03ECF0u;
    // 7F03ECF0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03ECF4:
    ctx->pc = 0x7F03ECF4u;
    // 7F03ECF4: stw     r0, 3860(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3860);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03ECF8:
    ctx->pc = 0x7F03ECF8u;
    // 7F03ECF8: lwz     r0, 4248(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4248);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03ECFC:
    ctx->pc = 0x7F03ECFCu;
    // 7F03ECFC: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F03ED00:
    ctx->pc = 0x7F03ED00u;
    // 7F03ED00: stw     r0, 4248(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4248);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03ED04:
    ctx->pc = 0x7F03ED04u;
    // 7F03ED04: bl      0x7F04082C
    {
            ctx->lr = 0x7F03ED08u;
            ctx->pc = 0x7F04082Cu;
            return;
    }

label_7F03ED08:
    ctx->pc = 0x7F03ED08u;
    ctx->downcount -= 3;
    // 7F03ED08: li      r3, 2166
    ctx->gpr[3] = (u32)(s32)(2166);

label_7F03ED0C:
    ctx->pc = 0x7F03ED0Cu;
    // 7F03ED0C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F03ED10:
    ctx->pc = 0x7F03ED10u;
    // 7F03ED10: bl      0x7F040868
    {
            ctx->lr = 0x7F03ED14u;
            ctx->pc = 0x7F040868u;
            return;
    }

label_7F03ED14:
    ctx->pc = 0x7F03ED14u;
    ctx->downcount -= 8;
    // 7F03ED14: lwz     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03ED18:
    ctx->pc = 0x7F03ED18u;
    // 7F03ED18: lwz     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03ED1C:
    ctx->pc = 0x7F03ED1Cu;
    // 7F03ED1C: stw     r3, 3796(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3796);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F03ED20:
    ctx->pc = 0x7F03ED20u;
    // 7F03ED20: stw     r0, 3800(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3800);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03ED24:
    ctx->pc = 0x7F03ED24u;
    // 7F03ED24: lwz     r3, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03ED28:
    ctx->pc = 0x7F03ED28u;
    // 7F03ED28: lwz     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03ED2C:
    ctx->pc = 0x7F03ED2Cu;
    // 7F03ED2C: stw     r3, 3804(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3804);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F03ED30:
    ctx->pc = 0x7F03ED30u;
    // 7F03ED30: stw     r0, 3808(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3808);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03ED34:
    ctx->pc = 0x7F03ED34u;
    ctx->downcount -= 3;
    // 7F03ED34: lwz     r0, 3848(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3848);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03ED38:
    ctx->pc = 0x7F03ED38u;
    // 7F03ED38: cmpwi   r0, 0
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

label_7F03ED3C:
    ctx->pc = 0x7F03ED3Cu;
    // 7F03ED3C: bc    12, 2, 0x7F03EDDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03EDDC;
        }
    }

label_7F03ED40:
    ctx->pc = 0x7F03ED40u;
    ctx->downcount -= 11;
    // 7F03ED40: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F03ED44:
    ctx->pc = 0x7F03ED44u;
    // 7F03ED44: lwz     r4, 468(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(468);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03ED48:
    ctx->pc = 0x7F03ED48u;
    // 7F03ED48: lwz     r0, 2904(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2904);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03ED4C:
    ctx->pc = 0x7F03ED4Cu;
    // 7F03ED4C: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03ED50:
    ctx->pc = 0x7F03ED50u;
    // 7F03ED50: mulli   r0, r0, 104
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)104);

label_7F03ED54:
    ctx->pc = 0x7F03ED54u;
    // 7F03ED54: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F03ED58:
    ctx->pc = 0x7F03ED58u;
    // 7F03ED58: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03ED5C:
    ctx->pc = 0x7F03ED5Cu;
    // 7F03ED5C: rlwinm. r0, r0, 0, 29, 29
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

label_7F03ED60:
    ctx->pc = 0x7F03ED60u;
    // 7F03ED60: bc    12, 2, 0x7F03ED94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03ED94;
        }
    }

label_7F03ED64:
    ctx->pc = 0x7F03ED64u;
    ctx->downcount -= 8;
    // 7F03ED64: li      r0, 90
    ctx->gpr[0] = (u32)(s32)(90);

label_7F03ED68:
    ctx->pc = 0x7F03ED68u;
    // 7F03ED68: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F03ED6C:
    ctx->pc = 0x7F03ED6Cu;
    // 7F03ED6C: stw     r0, 3880(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3880);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03ED70:
    ctx->pc = 0x7F03ED70u;
    // 7F03ED70: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F03ED74:
    ctx->pc = 0x7F03ED74u;
    // 7F03ED74: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03ED78:
    ctx->pc = 0x7F03ED78u;
    // 7F03ED78: stw     r4, 3848(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3848);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F03ED7C:
    ctx->pc = 0x7F03ED7Cu;
    // 7F03ED7C: stw     r0, 3852(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3852);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03ED80:
    ctx->pc = 0x7F03ED80u;
    // 7F03ED80: bl      0x7F03CFFC
    {
            ctx->lr = 0x7F03ED84u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03CFFCu;
                return;
            }
            goto label_7F03CFFC;
    }

label_7F03ED84:
    ctx->pc = 0x7F03ED84u;
    ctx->downcount -= 4;
    // 7F03ED84: lwz     r3, 820(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(820);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03ED88:
    ctx->pc = 0x7F03ED88u;
    // 7F03ED88: li      r0, -22
    ctx->gpr[0] = (u32)(s32)(-22);

label_7F03ED8C:
    ctx->pc = 0x7F03ED8Cu;
    // 7F03ED8C: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_7F03ED90:
    ctx->pc = 0x7F03ED90u;
    // 7F03ED90: stw     r0, 820(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(820);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03ED94:
    ctx->pc = 0x7F03ED94u;
    ctx->downcount -= 3;
    // 7F03ED94: lwz     r3, 3856(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3856);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03ED98:
    ctx->pc = 0x7F03ED98u;
    // 7F03ED98: cmpwi   r3, 0
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

label_7F03ED9C:
    ctx->pc = 0x7F03ED9Cu;
    // 7F03ED9C: bc    12, 2, 0x7F03EDB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03EDB8;
        }
    }

label_7F03EDA0:
    ctx->pc = 0x7F03EDA0u;
    ctx->downcount -= 3;
    // 7F03EDA0: addic.  r0, r3, -1
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

label_7F03EDA4:
    ctx->pc = 0x7F03EDA4u;
    // 7F03EDA4: stw     r0, 3856(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3856);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03EDA8:
    ctx->pc = 0x7F03EDA8u;
    // 7F03EDA8: bc    4, 2, 0x7F03EE80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03EE80;
        }
    }

label_7F03EDAC:
    ctx->pc = 0x7F03EDACu;
    ctx->downcount -= 3;
    // 7F03EDAC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F03EDB0:
    ctx->pc = 0x7F03EDB0u;
    // 7F03EDB0: stw     r0, 3852(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3852);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03EDB4:
    ctx->pc = 0x7F03EDB4u;
    // 7F03EDB4: b       0x7F03EE80
    {
            goto label_7F03EE80;
    }

label_7F03EDB8:
    ctx->pc = 0x7F03EDB8u;
    ctx->downcount -= 3;
    // 7F03EDB8: lwz     r3, 3864(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3864);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03EDBC:
    ctx->pc = 0x7F03EDBCu;
    // 7F03EDBC: cmpwi   r3, 0
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

label_7F03EDC0:
    ctx->pc = 0x7F03EDC0u;
    // 7F03EDC0: bc    12, 2, 0x7F03EE80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03EE80;
        }
    }

label_7F03EDC4:
    ctx->pc = 0x7F03EDC4u;
    ctx->downcount -= 3;
    // 7F03EDC4: addic.  r0, r3, -1
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

label_7F03EDC8:
    ctx->pc = 0x7F03EDC8u;
    // 7F03EDC8: stw     r0, 3864(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3864);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03EDCC:
    ctx->pc = 0x7F03EDCCu;
    // 7F03EDCC: bc    4, 2, 0x7F03EE80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03EE80;
        }
    }

label_7F03EDD0:
    ctx->pc = 0x7F03EDD0u;
    ctx->downcount -= 3;
    // 7F03EDD0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F03EDD4:
    ctx->pc = 0x7F03EDD4u;
    // 7F03EDD4: stw     r0, 3852(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3852);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03EDD8:
    ctx->pc = 0x7F03EDD8u;
    // 7F03EDD8: b       0x7F03EE80
    {
            goto label_7F03EE80;
    }

label_7F03EDDC:
    ctx->pc = 0x7F03EDDCu;
    ctx->downcount -= 3;
    // 7F03EDDC: lwz     r0, 3856(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3856);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03EDE0:
    ctx->pc = 0x7F03EDE0u;
    // 7F03EDE0: cmpwi   r0, 0
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

label_7F03EDE4:
    ctx->pc = 0x7F03EDE4u;
    // 7F03EDE4: bc    12, 2, 0x7F03EE14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03EE14;
        }
    }

label_7F03EDE8:
    ctx->pc = 0x7F03EDE8u;
    ctx->downcount -= 2;
    // 7F03EDE8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03EDEC:
    ctx->pc = 0x7F03EDECu;
    // 7F03EDEC: bl      0x7F03D2A8
    {
            ctx->lr = 0x7F03EDF0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03D2A8u;
                return;
            }
            goto label_7F03D2A8;
    }

label_7F03EDF0:
    ctx->pc = 0x7F03EDF0u;
    ctx->downcount -= 4;
    // 7F03EDF0: lwz     r3, 3856(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3856);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03EDF4:
    ctx->pc = 0x7F03EDF4u;
    // 7F03EDF4: addic.  r0, r3, -1
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

label_7F03EDF8:
    ctx->pc = 0x7F03EDF8u;
    // 7F03EDF8: stw     r0, 3856(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3856);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03EDFC:
    ctx->pc = 0x7F03EDFCu;
    // 7F03EDFC: bc    4, 2, 0x7F03EE80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03EE80;
        }
    }

label_7F03EE00:
    ctx->pc = 0x7F03EE00u;
    ctx->downcount -= 2;
    // 7F03EE00: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03EE04:
    ctx->pc = 0x7F03EE04u;
    // 7F03EE04: bl      0x7F03D33C
    {
            ctx->lr = 0x7F03EE08u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03D33Cu;
                return;
            }
            goto label_7F03D33C;
    }

label_7F03EE08:
    ctx->pc = 0x7F03EE08u;
    ctx->downcount -= 3;
    // 7F03EE08: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F03EE0C:
    ctx->pc = 0x7F03EE0Cu;
    // 7F03EE0C: stw     r0, 3852(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3852);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03EE10:
    ctx->pc = 0x7F03EE10u;
    // 7F03EE10: b       0x7F03EE80
    {
            goto label_7F03EE80;
    }

label_7F03EE14:
    ctx->pc = 0x7F03EE14u;
    ctx->downcount -= 3;
    // 7F03EE14: lwz     r0, 3864(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3864);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03EE18:
    ctx->pc = 0x7F03EE18u;
    // 7F03EE18: cmpwi   r0, 0
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

label_7F03EE1C:
    ctx->pc = 0x7F03EE1Cu;
    // 7F03EE1C: bc    12, 2, 0x7F03EE4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03EE4C;
        }
    }

label_7F03EE20:
    ctx->pc = 0x7F03EE20u;
    ctx->downcount -= 2;
    // 7F03EE20: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03EE24:
    ctx->pc = 0x7F03EE24u;
    // 7F03EE24: bl      0x7F03D48C
    {
            ctx->lr = 0x7F03EE28u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03D48Cu;
                return;
            }
            goto label_7F03D48C;
    }

label_7F03EE28:
    ctx->pc = 0x7F03EE28u;
    ctx->downcount -= 4;
    // 7F03EE28: lwz     r3, 3864(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3864);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03EE2C:
    ctx->pc = 0x7F03EE2Cu;
    // 7F03EE2C: addic.  r0, r3, -1
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

label_7F03EE30:
    ctx->pc = 0x7F03EE30u;
    // 7F03EE30: stw     r0, 3864(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3864);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03EE34:
    ctx->pc = 0x7F03EE34u;
    // 7F03EE34: bc    4, 2, 0x7F03EE80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03EE80;
        }
    }

label_7F03EE38:
    ctx->pc = 0x7F03EE38u;
    ctx->downcount -= 2;
    // 7F03EE38: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03EE3C:
    ctx->pc = 0x7F03EE3Cu;
    // 7F03EE3C: bl      0x7F03D520
    {
            ctx->lr = 0x7F03EE40u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03D520u;
                return;
            }
            goto label_7F03D520;
    }

label_7F03EE40:
    ctx->pc = 0x7F03EE40u;
    ctx->downcount -= 3;
    // 7F03EE40: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F03EE44:
    ctx->pc = 0x7F03EE44u;
    // 7F03EE44: stw     r0, 3852(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3852);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03EE48:
    ctx->pc = 0x7F03EE48u;
    // 7F03EE48: b       0x7F03EE80
    {
            goto label_7F03EE80;
    }

label_7F03EE4C:
    ctx->pc = 0x7F03EE4Cu;
    ctx->downcount -= 3;
    // 7F03EE4C: lwz     r0, 3860(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3860);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03EE50:
    ctx->pc = 0x7F03EE50u;
    // 7F03EE50: cmpwi   r0, 0
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

label_7F03EE54:
    ctx->pc = 0x7F03EE54u;
    // 7F03EE54: bc    12, 2, 0x7F03EE80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03EE80;
        }
    }

label_7F03EE58:
    ctx->pc = 0x7F03EE58u;
    ctx->downcount -= 2;
    // 7F03EE58: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03EE5C:
    ctx->pc = 0x7F03EE5Cu;
    // 7F03EE5C: bl      0x7F03D1F0
    {
            ctx->lr = 0x7F03EE60u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03D1F0u;
                return;
            }
            goto label_7F03D1F0;
    }

label_7F03EE60:
    ctx->pc = 0x7F03EE60u;
    ctx->downcount -= 4;
    // 7F03EE60: lwz     r3, 3860(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3860);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03EE64:
    ctx->pc = 0x7F03EE64u;
    // 7F03EE64: addic.  r0, r3, -1
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

label_7F03EE68:
    ctx->pc = 0x7F03EE68u;
    // 7F03EE68: stw     r0, 3860(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3860);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03EE6C:
    ctx->pc = 0x7F03EE6Cu;
    // 7F03EE6C: bc    4, 2, 0x7F03EE80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03EE80;
        }
    }

label_7F03EE70:
    ctx->pc = 0x7F03EE70u;
    ctx->downcount -= 2;
    // 7F03EE70: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03EE74:
    ctx->pc = 0x7F03EE74u;
    // 7F03EE74: bl      0x7F03D288
    {
            ctx->lr = 0x7F03EE78u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03D288u;
                return;
            }
            goto label_7F03D288;
    }

label_7F03EE78:
    ctx->pc = 0x7F03EE78u;
    ctx->downcount -= 2;
    // 7F03EE78: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F03EE7C:
    ctx->pc = 0x7F03EE7Cu;
    // 7F03EE7C: stw     r0, 3852(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3852);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03EE80:
    ctx->pc = 0x7F03EE80u;
    ctx->downcount -= 3;
    // 7F03EE80: lwz     r0, 3860(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3860);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03EE84:
    ctx->pc = 0x7F03EE84u;
    // 7F03EE84: cmpwi   r0, 0
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

label_7F03EE88:
    ctx->pc = 0x7F03EE88u;
    // 7F03EE88: bc    12, 2, 0x7F03EE9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03EE9C;
        }
    }

label_7F03EE8C:
    ctx->pc = 0x7F03EE8Cu;
    ctx->downcount -= 4;
    // 7F03EE8C: li      r0, 256
    ctx->gpr[0] = (u32)(s32)(256);

label_7F03EE90:
    ctx->pc = 0x7F03EE90u;
    // 7F03EE90: sth     r0, 680(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(680);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F03EE94:
    ctx->pc = 0x7F03EE94u;
    // 7F03EE94: stw     r0, 3952(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3952);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03EE98:
    ctx->pc = 0x7F03EE98u;
    // 7F03EE98: b       0x7F03EEA8
    {
            goto label_7F03EEA8;
    }

label_7F03EE9C:
    ctx->pc = 0x7F03EE9Cu;
    ctx->downcount -= 3;
    // 7F03EE9C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F03EEA0:
    ctx->pc = 0x7F03EEA0u;
    // 7F03EEA0: sth     r0, 680(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(680);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F03EEA4:
    ctx->pc = 0x7F03EEA4u;
    // 7F03EEA4: stw     r0, 3952(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3952);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03EEA8:
    ctx->pc = 0x7F03EEA8u;
    ctx->downcount -= 3;
    // 7F03EEA8: lwz     r0, 3856(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3856);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03EEAC:
    ctx->pc = 0x7F03EEACu;
    // 7F03EEAC: cmpwi   r0, 0
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

label_7F03EEB0:
    ctx->pc = 0x7F03EEB0u;
    // 7F03EEB0: bc    4, 2, 0x7F03EED8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03EED8;
        }
    }

label_7F03EEB4:
    ctx->pc = 0x7F03EEB4u;
    ctx->downcount -= 3;
    // 7F03EEB4: lwz     r0, 3864(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3864);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03EEB8:
    ctx->pc = 0x7F03EEB8u;
    // 7F03EEB8: cmpwi   r0, 0
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

label_7F03EEBC:
    ctx->pc = 0x7F03EEBCu;
    // 7F03EEBC: bc    4, 2, 0x7F03EED8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03EED8;
        }
    }

label_7F03EEC0:
    ctx->pc = 0x7F03EEC0u;
    ctx->downcount -= 3;
    // 7F03EEC0: lwz     r0, 3848(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3848);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03EEC4:
    ctx->pc = 0x7F03EEC4u;
    // 7F03EEC4: cmpwi   r0, 0
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

label_7F03EEC8:
    ctx->pc = 0x7F03EEC8u;
    // 7F03EEC8: bc    4, 2, 0x7F03EED8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03EED8;
        }
    }

label_7F03EECC:
    ctx->pc = 0x7F03EECCu;
    ctx->downcount -= 3;
    // 7F03EECC: lwz     r0, 3860(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3860);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03EED0:
    ctx->pc = 0x7F03EED0u;
    // 7F03EED0: cmpwi   r0, 0
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

label_7F03EED4:
    ctx->pc = 0x7F03EED4u;
    // 7F03EED4: bc    12, 2, 0x7F03EEE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03EEE0;
        }
    }

label_7F03EED8:
    ctx->pc = 0x7F03EED8u;
    ctx->downcount -= 2;
    // 7F03EED8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F03EEDC:
    ctx->pc = 0x7F03EEDCu;
    // 7F03EEDC: b       0x7F03EEE4
    {
            goto label_7F03EEE4;
    }

label_7F03EEE0:
    ctx->pc = 0x7F03EEE0u;
    ctx->downcount -= 1;
    // 7F03EEE0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F03EEE4:
    ctx->pc = 0x7F03EEE4u;
    ctx->downcount -= 6;
    // 7F03EEE4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03EEE8:
    ctx->pc = 0x7F03EEE8u;
    // 7F03EEE8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F03EEEC:
    ctx->pc = 0x7F03EEECu;
    // 7F03EEEC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03EEF0:
    ctx->pc = 0x7F03EEF0u;
    // 7F03EEF0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03EEF4:
    ctx->pc = 0x7F03EEF4u;
    // 7F03EEF4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03EEF8:
    ctx->pc = 0x7F03EEF8u;
    ctx->downcount -= 38;
    // 7F03EEF8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03EEFC:
    ctx->pc = 0x7F03EEFCu;
    // 7F03EEFC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03EF00:
    ctx->pc = 0x7F03EF00u;
    // 7F03EF00: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03EF04:
    ctx->pc = 0x7F03EF04u;
    // 7F03EF04: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F03EF08:
    ctx->pc = 0x7F03EF08u;
    // 7F03EF08: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03EF0C:
    ctx->pc = 0x7F03EF0Cu;
    // 7F03EF0C: addi    r31, r30, 4008
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(4008);

label_7F03EF10:
    ctx->pc = 0x7F03EF10u;
    // 7F03EF10: lwz     r5, 4132(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4132);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F03EF14:
    ctx->pc = 0x7F03EF14u;
    // 7F03EF14: neg  r4, r5
    {
        u32 a = ctx->gpr[5];
        ctx->gpr[4] = (~a) + 1u;
    }

label_7F03EF18:
    ctx->pc = 0x7F03EF18u;
    // 7F03EF18: addi    r0, r5, -1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-1);

label_7F03EF1C:
    ctx->pc = 0x7F03EF1Cu;
    // 7F03EF1C: orc   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] | ~ctx->gpr[4];
    }

label_7F03EF20:
    ctx->pc = 0x7F03EF20u;
    // 7F03EF20: srawi r4, r4, 31
    {
        u32 sh = 31u;
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

label_7F03EF24:
    ctx->pc = 0x7F03EF24u;
    // 7F03EF24: andc   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[4];
    }

label_7F03EF28:
    ctx->pc = 0x7F03EF28u;
    // 7F03EF28: stw     r0, 4132(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03EF2C:
    ctx->pc = 0x7F03EF2Cu;
    // 7F03EF2C: lwz     r5, 4140(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4140);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F03EF30:
    ctx->pc = 0x7F03EF30u;
    // 7F03EF30: neg  r4, r5
    {
        u32 a = ctx->gpr[5];
        ctx->gpr[4] = (~a) + 1u;
    }

label_7F03EF34:
    ctx->pc = 0x7F03EF34u;
    // 7F03EF34: addi    r0, r5, -1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-1);

label_7F03EF38:
    ctx->pc = 0x7F03EF38u;
    // 7F03EF38: orc   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] | ~ctx->gpr[4];
    }

label_7F03EF3C:
    ctx->pc = 0x7F03EF3Cu;
    // 7F03EF3C: srawi r4, r4, 31
    {
        u32 sh = 31u;
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

label_7F03EF40:
    ctx->pc = 0x7F03EF40u;
    // 7F03EF40: andc   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[4];
    }

label_7F03EF44:
    ctx->pc = 0x7F03EF44u;
    // 7F03EF44: stw     r0, 4140(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03EF48:
    ctx->pc = 0x7F03EF48u;
    // 7F03EF48: lwz     r5, 4144(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4144);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F03EF4C:
    ctx->pc = 0x7F03EF4Cu;
    // 7F03EF4C: neg  r4, r5
    {
        u32 a = ctx->gpr[5];
        ctx->gpr[4] = (~a) + 1u;
    }

label_7F03EF50:
    ctx->pc = 0x7F03EF50u;
    // 7F03EF50: addi    r0, r5, -1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-1);

label_7F03EF54:
    ctx->pc = 0x7F03EF54u;
    // 7F03EF54: orc   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] | ~ctx->gpr[4];
    }

label_7F03EF58:
    ctx->pc = 0x7F03EF58u;
    // 7F03EF58: srawi r4, r4, 31
    {
        u32 sh = 31u;
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

label_7F03EF5C:
    ctx->pc = 0x7F03EF5Cu;
    // 7F03EF5C: andc   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[4];
    }

label_7F03EF60:
    ctx->pc = 0x7F03EF60u;
    // 7F03EF60: stw     r0, 4144(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03EF64:
    ctx->pc = 0x7F03EF64u;
    // 7F03EF64: bl      0x7F03EC9C
    {
            ctx->lr = 0x7F03EF68u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03EC9Cu;
                return;
            }
            goto label_7F03EC9C;
    }

label_7F03EF68:
    ctx->pc = 0x7F03EF68u;
    ctx->downcount -= 2;
    // 7F03EF68: cmpwi   r3, 0
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

label_7F03EF6C:
    ctx->pc = 0x7F03EF6Cu;
    // 7F03EF6C: bc    12, 2, 0x7F03EF78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03EF78;
        }
    }

label_7F03EF70:
    ctx->pc = 0x7F03EF70u;
    ctx->downcount -= 2;
    // 7F03EF70: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F03EF74:
    ctx->pc = 0x7F03EF74u;
    // 7F03EF74: b       0x7F03F018
    {
            goto label_7F03F018;
    }

label_7F03EF78:
    ctx->pc = 0x7F03EF78u;
    ctx->downcount -= 3;
    // 7F03EF78: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03EF7C:
    ctx->pc = 0x7F03EF7Cu;
    // 7F03EF7C: cmplwi  r0, 0x0007
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0007u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03EF80:
    ctx->pc = 0x7F03EF80u;
    // 7F03EF80: bc    12, 1, 0x7F03F014
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03F014;
        }
    }

label_7F03EF84:
    ctx->pc = 0x7F03EF84u;
    ctx->downcount -= 7;
    // 7F03EF84: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F03EF88:
    ctx->pc = 0x7F03EF88u;
    // 7F03EF88: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F03EF8C:
    ctx->pc = 0x7F03EF8Cu;
    // 7F03EF8C: addi    r3, r3, 3028
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3028);

label_7F03EF90:
    ctx->pc = 0x7F03EF90u;
    // 7F03EF90: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03EF94:
    ctx->pc = 0x7F03EF94u;
    // 7F03EF94: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F03EF98:
    ctx->pc = 0x7F03EF98u;
    // 7F03EF98: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F03EF9C:
    ctx->pc = 0x7F03EF9Cu;
    ctx->downcount -= 3;
    // 7F03EF9C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03EFA0:
    ctx->pc = 0x7F03EFA0u;
    // 7F03EFA0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03EFA4:
    ctx->pc = 0x7F03EFA4u;
    // 7F03EFA4: bl      0x7F03D988
    {
            ctx->lr = 0x7F03EFA8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03D988u;
                return;
            }
            goto label_7F03D988;
    }

label_7F03EFA8:
    ctx->pc = 0x7F03EFA8u;
    ctx->downcount -= 1;
    // 7F03EFA8: b       0x7F03F014
    {
            goto label_7F03F014;
    }

label_7F03EFAC:
    ctx->pc = 0x7F03EFACu;
    ctx->downcount -= 3;
    // 7F03EFAC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03EFB0:
    ctx->pc = 0x7F03EFB0u;
    // 7F03EFB0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03EFB4:
    ctx->pc = 0x7F03EFB4u;
    // 7F03EFB4: bl      0x7F03DD40
    {
            ctx->lr = 0x7F03EFB8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03DD40u;
                return;
            }
            goto label_7F03DD40;
    }

label_7F03EFB8:
    ctx->pc = 0x7F03EFB8u;
    ctx->downcount -= 1;
    // 7F03EFB8: b       0x7F03F014
    {
            goto label_7F03F014;
    }

label_7F03EFBC:
    ctx->pc = 0x7F03EFBCu;
    ctx->downcount -= 3;
    // 7F03EFBC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03EFC0:
    ctx->pc = 0x7F03EFC0u;
    // 7F03EFC0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03EFC4:
    ctx->pc = 0x7F03EFC4u;
    // 7F03EFC4: bl      0x7F03E054
    {
            ctx->lr = 0x7F03EFC8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03E054u;
                return;
            }
            goto label_7F03E054;
    }

label_7F03EFC8:
    ctx->pc = 0x7F03EFC8u;
    ctx->downcount -= 1;
    // 7F03EFC8: b       0x7F03F014
    {
            goto label_7F03F014;
    }

label_7F03EFCC:
    ctx->pc = 0x7F03EFCCu;
    ctx->downcount -= 3;
    // 7F03EFCC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03EFD0:
    ctx->pc = 0x7F03EFD0u;
    // 7F03EFD0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03EFD4:
    ctx->pc = 0x7F03EFD4u;
    // 7F03EFD4: bl      0x7F03E504
    {
            ctx->lr = 0x7F03EFD8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03E504u;
                return;
            }
            goto label_7F03E504;
    }

label_7F03EFD8:
    ctx->pc = 0x7F03EFD8u;
    ctx->downcount -= 1;
    // 7F03EFD8: b       0x7F03F014
    {
            goto label_7F03F014;
    }

label_7F03EFDC:
    ctx->pc = 0x7F03EFDCu;
    ctx->downcount -= 3;
    // 7F03EFDC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03EFE0:
    ctx->pc = 0x7F03EFE0u;
    // 7F03EFE0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03EFE4:
    ctx->pc = 0x7F03EFE4u;
    // 7F03EFE4: bl      0x7F03EA28
    {
            ctx->lr = 0x7F03EFE8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03EA28u;
                return;
            }
            goto label_7F03EA28;
    }

label_7F03EFE8:
    ctx->pc = 0x7F03EFE8u;
    ctx->downcount -= 1;
    // 7F03EFE8: b       0x7F03F014
    {
            goto label_7F03F014;
    }

label_7F03EFEC:
    ctx->pc = 0x7F03EFECu;
    ctx->downcount -= 3;
    // 7F03EFEC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03EFF0:
    ctx->pc = 0x7F03EFF0u;
    // 7F03EFF0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03EFF4:
    ctx->pc = 0x7F03EFF4u;
    // 7F03EFF4: bl      0x7F03EAB4
    {
            ctx->lr = 0x7F03EFF8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03EAB4u;
                return;
            }
            goto label_7F03EAB4;
    }

label_7F03EFF8:
    ctx->pc = 0x7F03EFF8u;
    ctx->downcount -= 1;
    // 7F03EFF8: b       0x7F03F014
    {
            goto label_7F03F014;
    }

label_7F03EFFC:
    ctx->pc = 0x7F03EFFCu;
    ctx->downcount -= 3;
    // 7F03EFFC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03F000:
    ctx->pc = 0x7F03F000u;
    // 7F03F000: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03F004:
    ctx->pc = 0x7F03F004u;
    // 7F03F004: bl      0x7F03EC3C
    {
            ctx->lr = 0x7F03F008u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03EC3Cu;
                return;
            }
            goto label_7F03EC3C;
    }

label_7F03F008:
    ctx->pc = 0x7F03F008u;
    ctx->downcount -= 1;
    // 7F03F008: b       0x7F03F014
    {
            goto label_7F03F014;
    }

label_7F03F00C:
    ctx->pc = 0x7F03F00Cu;
    ctx->downcount -= 2;
    // 7F03F00C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03F010:
    ctx->pc = 0x7F03F010u;
    // 7F03F010: bl      0x7F03C488
    {
            ctx->lr = 0x7F03F014u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03C488u;
                return;
            }
            goto label_7F03C488;
    }

label_7F03F014:
    ctx->pc = 0x7F03F014u;
    ctx->downcount -= 1;
    // 7F03F014: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F03F018:
    ctx->pc = 0x7F03F018u;
    ctx->downcount -= 16;
    // 7F03F018: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F03F01C:
    ctx->pc = 0x7F03F01Cu;
    // 7F03F01C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03F020:
    ctx->pc = 0x7F03F020u;
    // 7F03F020: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03F024:
    ctx->pc = 0x7F03F024u;
    // 7F03F024: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03F028:
    ctx->pc = 0x7F03F028u;
    // 7F03F028: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03F02C:
    ctx->pc = 0x7F03F02Cu;
    ctx->downcount -= 6;
    // 7F03F02C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03F030:
    ctx->pc = 0x7F03F030u;
    // 7F03F030: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03F034:
    ctx->pc = 0x7F03F034u;
    // 7F03F034: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03F038:
    ctx->pc = 0x7F03F038u;
    // 7F03F038: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F03F03C:
    ctx->pc = 0x7F03F03Cu;
    // 7F03F03C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03F040:
    ctx->pc = 0x7F03F040u;
    // 7F03F040: bl      0x7F03EEF8
    {
            ctx->lr = 0x7F03F044u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03EEF8u;
                return;
            }
            goto label_7F03EEF8;
    }

label_7F03F044:
    ctx->pc = 0x7F03F044u;
    ctx->downcount -= 6;
    // 7F03F044: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F03F048:
    ctx->pc = 0x7F03F048u;
    // 7F03F048: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F03F04C:
    ctx->pc = 0x7F03F04Cu;
    // 7F03F04C: stw     r0, 3852(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3852);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03F050:
    ctx->pc = 0x7F03F050u;
    // 7F03F050: lwz     r0, 19268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03F054:
    ctx->pc = 0x7F03F054u;
    // 7F03F054: cmpwi   r0, 0
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

label_7F03F058:
    ctx->pc = 0x7F03F058u;
    // 7F03F058: bc    4, 0, 0x7F03F064
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03F064;
        }
    }

label_7F03F05C:
    ctx->pc = 0x7F03F05Cu;
    ctx->downcount -= 1;
    // 7F03F05C: bl      0x7F03C258
    {
            ctx->lr = 0x7F03F060u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03C258u;
                return;
            }
            goto label_7F03C258;
    }

label_7F03F060:
    ctx->pc = 0x7F03F060u;
    ctx->downcount -= 1;
    // 7F03F060: bl      0x7F03C25C
    {
            ctx->lr = 0x7F03F064u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03C25Cu;
                return;
            }
            goto label_7F03C25C;
    }

label_7F03F064:
    ctx->pc = 0x7F03F064u;
    ctx->downcount -= 6;
    // 7F03F064: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03F068:
    ctx->pc = 0x7F03F068u;
    // 7F03F068: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F03F06C:
    ctx->pc = 0x7F03F06Cu;
    // 7F03F06C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03F070:
    ctx->pc = 0x7F03F070u;
    // 7F03F070: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03F074:
    ctx->pc = 0x7F03F074u;
    // 7F03F074: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03F078:
    ctx->pc = 0x7F03F078u;
    ctx->downcount -= 3;
    // 7F03F078: lwz     r4, 3880(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3880);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03F07C:
    ctx->pc = 0x7F03F07Cu;
    // 7F03F07C: cmpwi   r4, 1
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

label_7F03F080:
    ctx->pc = 0x7F03F080u;
    // 7F03F080: bc    4, 1, 0x7F03F0D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03F0D0;
        }
    }

label_7F03F084:
    ctx->pc = 0x7F03F084u;
    ctx->downcount -= 5;
    // 7F03F084: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F03F088:
    ctx->pc = 0x7F03F088u;
    // 7F03F088: stw     r0, 3880(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3880);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03F08C:
    ctx->pc = 0x7F03F08Cu;
    // 7F03F08C: lwz     r0, 3880(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3880);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03F090:
    ctx->pc = 0x7F03F090u;
    // 7F03F090: cmpwi   r0, 180
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

label_7F03F094:
    ctx->pc = 0x7F03F094u;
    // 7F03F094: bc    4, 1, 0x7F03F0A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03F0A0;
        }
    }

label_7F03F098:
    ctx->pc = 0x7F03F098u;
    ctx->downcount -= 2;
    // 7F03F098: li      r0, 90
    ctx->gpr[0] = (u32)(s32)(90);

label_7F03F09C:
    ctx->pc = 0x7F03F09Cu;
    // 7F03F09C: stw     r0, 3880(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3880);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03F0A0:
    ctx->pc = 0x7F03F0A0u;
    ctx->downcount -= 4;
    // 7F03F0A0: lwz     r0, 3880(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3880);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03F0A4:
    ctx->pc = 0x7F03F0A4u;
    // 7F03F0A4: rlwinm r0, r0, 0, 28, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000000Fu;
    }

label_7F03F0A8:
    ctx->pc = 0x7F03F0A8u;
    // 7F03F0A8: cmpwi   r0, 4
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

label_7F03F0AC:
    ctx->pc = 0x7F03F0ACu;
    // 7F03F0AC: bc    12, 0, 0x7F03F108
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03F108;
        }
    }

label_7F03F0B0:
    ctx->pc = 0x7F03F0B0u;
    ctx->downcount -= 8;
    // 7F03F0B0: lwz     r4, 464(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(464);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03F0B4:
    ctx->pc = 0x7F03F0B4u;
    // 7F03F0B4: lwz     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03F0B8:
    ctx->pc = 0x7F03F0B8u;
    // 7F03F0B8: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F03F0BC:
    ctx->pc = 0x7F03F0BCu;
    // 7F03F0BC: stw     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03F0C0:
    ctx->pc = 0x7F03F0C0u;
    // 7F03F0C0: lwz     r0, 3980(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3980);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03F0C4:
    ctx->pc = 0x7F03F0C4u;
    // 7F03F0C4: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_7F03F0C8:
    ctx->pc = 0x7F03F0C8u;
    // 7F03F0C8: stw     r0, 3980(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3980);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03F0CC:
    ctx->pc = 0x7F03F0CCu;
    // 7F03F0CC: b       0x7F03F108
    {
            goto label_7F03F108;
    }

label_7F03F0D0:
    ctx->pc = 0x7F03F0D0u;
    ctx->downcount -= 1;
    // 7F03F0D0: bc    4, 2, 0x7F03F108
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03F108;
        }
    }

label_7F03F0D4:
    ctx->pc = 0x7F03F0D4u;
    ctx->downcount -= 13;
    // 7F03F0D4: lwz     r0, 3980(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3980);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03F0D8:
    ctx->pc = 0x7F03F0D8u;
    // 7F03F0D8: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_7F03F0DC:
    ctx->pc = 0x7F03F0DCu;
    // 7F03F0DC: stw     r0, 3980(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3980);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03F0E0:
    ctx->pc = 0x7F03F0E0u;
    // 7F03F0E0: lwz     r4, 464(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(464);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03F0E4:
    ctx->pc = 0x7F03F0E4u;
    // 7F03F0E4: lwz     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03F0E8:
    ctx->pc = 0x7F03F0E8u;
    // 7F03F0E8: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F03F0EC:
    ctx->pc = 0x7F03F0ECu;
    // 7F03F0EC: stw     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03F0F0:
    ctx->pc = 0x7F03F0F0u;
    // 7F03F0F0: lwz     r4, 3880(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3880);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03F0F4:
    ctx->pc = 0x7F03F0F4u;
    // 7F03F0F4: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F03F0F8:
    ctx->pc = 0x7F03F0F8u;
    // 7F03F0F8: stw     r0, 3880(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3880);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03F0FC:
    ctx->pc = 0x7F03F0FCu;
    // 7F03F0FC: lwz     r0, 820(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(820);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03F100:
    ctx->pc = 0x7F03F100u;
    // 7F03F100: ori     r0, r0, 0x0015
    ctx->gpr[0] = ctx->gpr[0] | 0x0015u;

label_7F03F104:
    ctx->pc = 0x7F03F104u;
    // 7F03F104: stw     r0, 820(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(820);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03F108:
    ctx->pc = 0x7F03F108u;
    ctx->downcount -= 4;
    // 7F03F108: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03F10C:
    ctx->pc = 0x7F03F10Cu;
    // 7F03F10C: lwz     r0, 19268(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03F110:
    ctx->pc = 0x7F03F110u;
    // 7F03F110: cmpwi   r0, 0
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

label_7F03F114:
    ctx->pc = 0x7F03F114u;
    // 7F03F114: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03F118:
    ctx->pc = 0x7F03F118u;
    ctx->downcount -= 5;
    // 7F03F118: lwz     r4, 820(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(820);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03F11C:
    ctx->pc = 0x7F03F11Cu;
    // 7F03F11C: li      r0, -22
    ctx->gpr[0] = (u32)(s32)(-22);

label_7F03F120:
    ctx->pc = 0x7F03F120u;
    // 7F03F120: and   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] & ctx->gpr[0];
    }

label_7F03F124:
    ctx->pc = 0x7F03F124u;
    // 7F03F124: stw     r0, 820(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(820);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03F128:
    ctx->pc = 0x7F03F128u;
    // 7F03F128: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03F12C:
    ctx->pc = 0x7F03F12Cu;
    ctx->downcount -= 3;
    // 7F03F12C: lwz     r4, 3824(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3824);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03F130:
    ctx->pc = 0x7F03F130u;
    // 7F03F130: cmpwi   r4, 0
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

label_7F03F134:
    ctx->pc = 0x7F03F134u;
    // 7F03F134: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03F138:
    ctx->pc = 0x7F03F138u;
    ctx->downcount -= 2;
    // 7F03F138: cmpwi   r4, 10
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(10);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03F13C:
    ctx->pc = 0x7F03F13Cu;
    // 7F03F13C: bc    4, 0, 0x7F03F14C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03F14C;
        }
    }

label_7F03F140:
    ctx->pc = 0x7F03F140u;
    ctx->downcount -= 3;
    // 7F03F140: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F03F144:
    ctx->pc = 0x7F03F144u;
    // 7F03F144: stw     r0, 3824(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3824);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03F148:
    ctx->pc = 0x7F03F148u;
    // 7F03F148: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03F14C:
    ctx->pc = 0x7F03F14Cu;
    ctx->downcount -= 3;
    // 7F03F14C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F03F150:
    ctx->pc = 0x7F03F150u;
    // 7F03F150: stw     r0, 3824(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3824);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03F154:
    ctx->pc = 0x7F03F154u;
    // 7F03F154: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03F158:
    ctx->pc = 0x7F03F158u;
    ctx->downcount -= 25;
    // 7F03F158: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03F15C:
    ctx->pc = 0x7F03F15Cu;
    // 7F03F15C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03F160:
    ctx->pc = 0x7F03F160u;
    // 7F03F160: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03F164:
    ctx->pc = 0x7F03F164u;
    // 7F03F164: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F03F168:
    ctx->pc = 0x7F03F168u;
    // 7F03F168: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03F16C:
    ctx->pc = 0x7F03F16Cu;
    // 7F03F16C: lwz     r3, 468(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(468);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03F170:
    ctx->pc = 0x7F03F170u;
    // 7F03F170: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03F174:
    ctx->pc = 0x7F03F174u;
    // 7F03F174: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03F178:
    ctx->pc = 0x7F03F178u;
    // 7F03F178: lwz     r31, 104(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(104);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F03F17C:
    ctx->pc = 0x7F03F17Cu;
    // 7F03F17C: cmpwi   r0, 14
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

label_7F03F180:
    ctx->pc = 0x7F03F180u;
    // 7F03F180: lwz     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03F184:
    ctx->pc = 0x7F03F184u;
    // 7F03F184: lwz     r30, 132(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(132);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F03F188:
    ctx->pc = 0x7F03F188u;
    // 7F03F188: lwz     r4, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03F18C:
    ctx->pc = 0x7F03F18Cu;
    // 7F03F18C: lwz     r29, 120(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(120);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F03F190:
    ctx->pc = 0x7F03F190u;
    // 7F03F190: bc    4, 2, 0x7F03F1EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03F1EC;
        }
    }

label_7F03F194:
    ctx->pc = 0x7F03F194u;
    ctx->downcount -= 2;
    // 7F03F194: cmpwi   r0, 45
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(45);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03F198:
    ctx->pc = 0x7F03F198u;
    // 7F03F198: bc    4, 2, 0x7F03F1EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03F1EC;
        }
    }

label_7F03F19C:
    ctx->pc = 0x7F03F19Cu;
    ctx->downcount -= 2;
    // 7F03F19C: rlwinm. r0, r4, 0, 8, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00FFFFFFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F03F1A0:
    ctx->pc = 0x7F03F1A0u;
    // 7F03F1A0: bc    12, 2, 0x7F03F1EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03F1EC;
        }
    }

label_7F03F1A4:
    ctx->pc = 0x7F03F1A4u;
    ctx->downcount -= 4;
    // 7F03F1A4: lis     r4, 119
    ctx->gpr[4] = ((u32)(s32)(119) << 16);

label_7F03F1A8:
    ctx->pc = 0x7F03F1A8u;
    // 7F03F1A8: addi    r3, r28, 64
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(64);

label_7F03F1AC:
    ctx->pc = 0x7F03F1ACu;
    // 7F03F1AC: addi    r4, r4, -29039
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29039);

label_7F03F1B0:
    ctx->pc = 0x7F03F1B0u;
    // 7F03F1B0: bl      0x7F03C214
    {
            ctx->lr = 0x7F03F1B4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03C214u;
                return;
            }
            goto label_7F03C214;
    }

label_7F03F1B4:
    ctx->pc = 0x7F03F1B4u;
    ctx->downcount -= 2;
    // 7F03F1B4: cmpwi   r3, 0
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

label_7F03F1B8:
    ctx->pc = 0x7F03F1B8u;
    // 7F03F1B8: bc    12, 2, 0x7F03F1CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03F1CC;
        }
    }

label_7F03F1BC:
    ctx->pc = 0x7F03F1BCu;
    ctx->downcount -= 4;
    // 7F03F1BC: addi    r3, r28, 64
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(64);

label_7F03F1C0:
    ctx->pc = 0x7F03F1C0u;
    // 7F03F1C0: li      r4, 1604
    ctx->gpr[4] = (u32)(s32)(1604);

label_7F03F1C4:
    ctx->pc = 0x7F03F1C4u;
    // 7F03F1C4: li      r5, 63
    ctx->gpr[5] = (u32)(s32)(63);

label_7F03F1C8:
    ctx->pc = 0x7F03F1C8u;
    // 7F03F1C8: bl      0x7F011A74
    {
            ctx->lr = 0x7F03F1CCu;
            ctx->pc = 0x7F011A74u;
            return;
    }

label_7F03F1CC:
    ctx->pc = 0x7F03F1CCu;
    ctx->downcount -= 4;
    // 7F03F1CC: addi    r3, r28, 64
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(64);

label_7F03F1D0:
    ctx->pc = 0x7F03F1D0u;
    // 7F03F1D0: li      r4, 1234
    ctx->gpr[4] = (u32)(s32)(1234);

label_7F03F1D4:
    ctx->pc = 0x7F03F1D4u;
    // 7F03F1D4: li      r5, 63
    ctx->gpr[5] = (u32)(s32)(63);

label_7F03F1D8:
    ctx->pc = 0x7F03F1D8u;
    // 7F03F1D8: bl      0x7F011A74
    {
            ctx->lr = 0x7F03F1DCu;
            ctx->pc = 0x7F011A74u;
            return;
    }

label_7F03F1DC:
    ctx->pc = 0x7F03F1DCu;
    ctx->downcount -= 4;
    // 7F03F1DC: addi    r3, r28, 64
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(64);

label_7F03F1E0:
    ctx->pc = 0x7F03F1E0u;
    // 7F03F1E0: li      r4, 1857
    ctx->gpr[4] = (u32)(s32)(1857);

label_7F03F1E4:
    ctx->pc = 0x7F03F1E4u;
    // 7F03F1E4: li      r5, 63
    ctx->gpr[5] = (u32)(s32)(63);

label_7F03F1E8:
    ctx->pc = 0x7F03F1E8u;
    // 7F03F1E8: bl      0x7F011A74
    {
            ctx->lr = 0x7F03F1ECu;
            ctx->pc = 0x7F011A74u;
            return;
    }

label_7F03F1EC:
    ctx->pc = 0x7F03F1ECu;
    ctx->downcount -= 2;
    // 7F03F1EC: cmpwi   r31, 3
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03F1F0:
    ctx->pc = 0x7F03F1F0u;
    // 7F03F1F0: bc    4, 2, 0x7F03F25C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03F25C;
        }
    }

label_7F03F1F4:
    ctx->pc = 0x7F03F1F4u;
    ctx->downcount -= 4;
    // 7F03F1F4: lis     r3, 32
    ctx->gpr[3] = ((u32)(s32)(32) << 16);

label_7F03F1F8:
    ctx->pc = 0x7F03F1F8u;
    // 7F03F1F8: addi    r0, r3, -8191
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-8191);

label_7F03F1FC:
    ctx->pc = 0x7F03F1FCu;
    // 7F03F1FC: and.   r0, r29, r0
    {
        ctx->gpr[0] = ctx->gpr[29] & ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F03F200:
    ctx->pc = 0x7F03F200u;
    // 7F03F200: bc    12, 2, 0x7F03F25C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03F25C;
        }
    }

label_7F03F204:
    ctx->pc = 0x7F03F204u;
    ctx->downcount -= 2;
    // 7F03F204: cmpwi   r30, 25
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(25);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03F208:
    ctx->pc = 0x7F03F208u;
    // 7F03F208: bc    12, 2, 0x7F03F214
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03F214;
        }
    }

label_7F03F20C:
    ctx->pc = 0x7F03F20Cu;
    ctx->downcount -= 2;
    // 7F03F20C: cmpwi   r30, 46
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(46);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03F210:
    ctx->pc = 0x7F03F210u;
    // 7F03F210: bc    4, 2, 0x7F03F25C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03F25C;
        }
    }

label_7F03F214:
    ctx->pc = 0x7F03F214u;
    ctx->downcount -= 4;
    // 7F03F214: lis     r4, 119
    ctx->gpr[4] = ((u32)(s32)(119) << 16);

label_7F03F218:
    ctx->pc = 0x7F03F218u;
    // 7F03F218: addi    r3, r28, 64
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(64);

label_7F03F21C:
    ctx->pc = 0x7F03F21Cu;
    // 7F03F21C: addi    r4, r4, -29039
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29039);

label_7F03F220:
    ctx->pc = 0x7F03F220u;
    // 7F03F220: bl      0x7F03C214
    {
            ctx->lr = 0x7F03F224u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03C214u;
                return;
            }
            goto label_7F03C214;
    }

label_7F03F224:
    ctx->pc = 0x7F03F224u;
    ctx->downcount -= 2;
    // 7F03F224: cmpwi   r3, 0
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

label_7F03F228:
    ctx->pc = 0x7F03F228u;
    // 7F03F228: bc    12, 2, 0x7F03F23C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03F23C;
        }
    }

label_7F03F22C:
    ctx->pc = 0x7F03F22Cu;
    ctx->downcount -= 4;
    // 7F03F22C: addi    r3, r28, 64
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(64);

label_7F03F230:
    ctx->pc = 0x7F03F230u;
    // 7F03F230: li      r4, 1604
    ctx->gpr[4] = (u32)(s32)(1604);

label_7F03F234:
    ctx->pc = 0x7F03F234u;
    // 7F03F234: li      r5, 63
    ctx->gpr[5] = (u32)(s32)(63);

label_7F03F238:
    ctx->pc = 0x7F03F238u;
    // 7F03F238: bl      0x7F011A74
    {
            ctx->lr = 0x7F03F23Cu;
            ctx->pc = 0x7F011A74u;
            return;
    }

label_7F03F23C:
    ctx->pc = 0x7F03F23Cu;
    ctx->downcount -= 4;
    // 7F03F23C: addi    r3, r28, 64
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(64);

label_7F03F240:
    ctx->pc = 0x7F03F240u;
    // 7F03F240: li      r4, 1232
    ctx->gpr[4] = (u32)(s32)(1232);

label_7F03F244:
    ctx->pc = 0x7F03F244u;
    // 7F03F244: li      r5, 63
    ctx->gpr[5] = (u32)(s32)(63);

label_7F03F248:
    ctx->pc = 0x7F03F248u;
    // 7F03F248: bl      0x7F011A74
    {
            ctx->lr = 0x7F03F24Cu;
            ctx->pc = 0x7F011A74u;
            return;
    }

label_7F03F24C:
    ctx->pc = 0x7F03F24Cu;
    ctx->downcount -= 4;
    // 7F03F24C: addi    r3, r28, 64
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(64);

label_7F03F250:
    ctx->pc = 0x7F03F250u;
    // 7F03F250: li      r4, 1857
    ctx->gpr[4] = (u32)(s32)(1857);

label_7F03F254:
    ctx->pc = 0x7F03F254u;
    // 7F03F254: li      r5, 63
    ctx->gpr[5] = (u32)(s32)(63);

label_7F03F258:
    ctx->pc = 0x7F03F258u;
    // 7F03F258: bl      0x7F011A74
    {
            ctx->lr = 0x7F03F25Cu;
            ctx->pc = 0x7F011A74u;
            return;
    }

label_7F03F25C:
    ctx->pc = 0x7F03F25Cu;
    ctx->downcount -= 16;
    // 7F03F25C: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F03F260:
    ctx->pc = 0x7F03F260u;
    // 7F03F260: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03F264:
    ctx->pc = 0x7F03F264u;
    // 7F03F264: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03F268:
    ctx->pc = 0x7F03F268u;
    // 7F03F268: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F03F26C:
    ctx->pc = 0x7F03F26Cu;
    // 7F03F26C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03F270:
    ctx->pc = 0x7F03F270u;
    ctx->downcount -= 30;
    // 7F03F270: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03F274:
    ctx->pc = 0x7F03F274u;
    // 7F03F274: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03F278:
    ctx->pc = 0x7F03F278u;
    // 7F03F278: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F03F27C:
    ctx->pc = 0x7F03F27Cu;
    // 7F03F27C: li      r6, 180
    ctx->gpr[6] = (u32)(s32)(180);

label_7F03F280:
    ctx->pc = 0x7F03F280u;
    // 7F03F280: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03F284:
    ctx->pc = 0x7F03F284u;
    // 7F03F284: li      r0, 30
    ctx->gpr[0] = (u32)(s32)(30);

label_7F03F288:
    ctx->pc = 0x7F03F288u;
    // 7F03F288: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_7F03F28C:
    ctx->pc = 0x7F03F28Cu;
    // 7F03F28C: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F03F290:
    ctx->pc = 0x7F03F290u;
    // 7F03F290: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F03F294:
    ctx->pc = 0x7F03F294u;
    // 7F03F294: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03F298:
    ctx->pc = 0x7F03F298u;
    // 7F03F298: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F03F29C:
    ctx->pc = 0x7F03F29Cu;
    // 7F03F29C: addi    r31, r30, 3616
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(3616);

label_7F03F2A0:
    ctx->pc = 0x7F03F2A0u;
    // 7F03F2A0: addi    r4, r3, 3060
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(3060);

label_7F03F2A4:
    ctx->pc = 0x7F03F2A4u;
    // 7F03F2A4: lwz     r8, 4092(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4092);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F03F2A8:
    ctx->pc = 0x7F03F2A8u;
    // 7F03F2A8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03F2AC:
    ctx->pc = 0x7F03F2ACu;
    // 7F03F2AC: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03F2B0:
    ctx->pc = 0x7F03F2B0u;
    // 7F03F2B0: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_7F03F2B4:
    ctx->pc = 0x7F03F2B4u;
    // 7F03F2B4: or   r9, r8, r8
    {
        ctx->gpr[9] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F03F2B8:
    ctx->pc = 0x7F03F2B8u;
    // 7F03F2B8: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03F2BC:
    ctx->pc = 0x7F03F2BCu;
    // 7F03F2BC: bl      0x7F27E314
    {
            ctx->lr = 0x7F03F2C0u;
            ctx->pc = 0x7F27E314u;
            return;
    }

label_7F03F2C0:
    ctx->pc = 0x7F03F2C0u;
    ctx->downcount -= 3;
    // 7F03F2C0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03F2C4:
    ctx->pc = 0x7F03F2C4u;
    // 7F03F2C4: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F03F2C8:
    ctx->pc = 0x7F03F2C8u;
    // 7F03F2C8: bl      0x7F27E4C4
    {
            ctx->lr = 0x7F03F2CCu;
            ctx->pc = 0x7F27E4C4u;
            return;
    }

label_7F03F2CC:
    ctx->pc = 0x7F03F2CCu;
    ctx->downcount -= 6;
    // 7F03F2CC: lwz     r4, 4092(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4092);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03F2D0:
    ctx->pc = 0x7F03F2D0u;
    // 7F03F2D0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03F2D4:
    ctx->pc = 0x7F03F2D4u;
    // 7F03F2D4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F03F2D8:
    ctx->pc = 0x7F03F2D8u;
    // 7F03F2D8: li      r7, 30
    ctx->gpr[7] = (u32)(s32)(30);

label_7F03F2DC:
    ctx->pc = 0x7F03F2DCu;
    // 7F03F2DC: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F03F2E0:
    ctx->pc = 0x7F03F2E0u;
    // 7F03F2E0: bl      0x7F27E598
    {
            ctx->lr = 0x7F03F2E4u;
            ctx->pc = 0x7F27E598u;
            return;
    }

label_7F03F2E4:
    ctx->pc = 0x7F03F2E4u;
    ctx->downcount -= 2;
    // 7F03F2E4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03F2E8:
    ctx->pc = 0x7F03F2E8u;
    // 7F03F2E8: bl      0x7F27E0C8
    {
            ctx->lr = 0x7F03F2ECu;
            ctx->pc = 0x7F27E0C8u;
            return;
    }

label_7F03F2EC:
    ctx->pc = 0x7F03F2ECu;
    ctx->downcount -= 16;
    // 7F03F2EC: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F03F2F0:
    ctx->pc = 0x7F03F2F0u;
    // 7F03F2F0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03F2F4:
    ctx->pc = 0x7F03F2F4u;
    // 7F03F2F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03F2F8:
    ctx->pc = 0x7F03F2F8u;
    // 7F03F2F8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F03F2FC:
    ctx->pc = 0x7F03F2FCu;
    // 7F03F2FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03F300:
    ctx->pc = 0x7F03F300u;
    ctx->downcount -= 8;
    // 7F03F300: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03F304:
    ctx->pc = 0x7F03F304u;
    // 7F03F304: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03F308:
    ctx->pc = 0x7F03F308u;
    // 7F03F308: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03F30C:
    ctx->pc = 0x7F03F30Cu;
    // 7F03F30C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F03F310:
    ctx->pc = 0x7F03F310u;
    // 7F03F310: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03F314:
    ctx->pc = 0x7F03F314u;
    // 7F03F314: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F03F318:
    ctx->pc = 0x7F03F318u;
    // 7F03F318: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03F31C:
    ctx->pc = 0x7F03F31Cu;
    // 7F03F31C: bl      0x7F022FB4
    {
            ctx->lr = 0x7F03F320u;
            ctx->pc = 0x7F022FB4u;
            return;
    }

label_7F03F320:
    ctx->pc = 0x7F03F320u;
    ctx->downcount -= 12;
    // 7F03F320: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F03F324:
    ctx->pc = 0x7F03F324u;
    // 7F03F324: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F03F328:
    ctx->pc = 0x7F03F328u;
    // 7F03F328: addi    r5, r3, -11516
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-11516);

label_7F03F32C:
    ctx->pc = 0x7F03F32Cu;
    // 7F03F32C: lfs     f0, -11512(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F03F32Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-11512);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F03F330:
    ctx->pc = 0x7F03F330u;
    // 7F03F330: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F03F330u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03F334:
    ctx->pc = 0x7F03F334u;
    // 7F03F334: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03F338:
    ctx->pc = 0x7F03F338u;
    // 7F03F338: li      r4, 1200
    ctx->gpr[4] = (u32)(s32)(1200);

label_7F03F33C:
    ctx->pc = 0x7F03F33Cu;
    // 7F03F33C: li      r5, 450
    ctx->gpr[5] = (u32)(s32)(450);

label_7F03F340:
    ctx->pc = 0x7F03F340u;
    // 7F03F340: stfs     f1, 56(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F03F340u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F03F344:
    ctx->pc = 0x7F03F344u;
    // 7F03F344: li      r6, 500
    ctx->gpr[6] = (u32)(s32)(500);

label_7F03F348:
    ctx->pc = 0x7F03F348u;
    // 7F03F348: stfs     f0, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F03F348u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F03F34C:
    ctx->pc = 0x7F03F34Cu;
    // 7F03F34C: bl      0x7F023F7C
    {
            ctx->lr = 0x7F03F350u;
            ctx->pc = 0x7F023F7Cu;
            return;
    }

label_7F03F350:
    ctx->pc = 0x7F03F350u;
    ctx->downcount -= 2;
    // 7F03F350: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03F354:
    ctx->pc = 0x7F03F354u;
    // 7F03F354: bl      0x7F023FEC
    {
            ctx->lr = 0x7F03F358u;
            ctx->pc = 0x7F023FECu;
            return;
    }

label_7F03F358:
    ctx->pc = 0x7F03F358u;
    ctx->downcount -= 2;
    // 7F03F358: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03F35C:
    ctx->pc = 0x7F03F35Cu;
    // 7F03F35C: bl      0x7F024034
    {
            ctx->lr = 0x7F03F360u;
            ctx->pc = 0x7F024034u;
            return;
    }

label_7F03F360:
    ctx->pc = 0x7F03F360u;
    ctx->downcount -= 2;
    // 7F03F360: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03F364:
    ctx->pc = 0x7F03F364u;
    // 7F03F364: bl      0x7F023FDC
    {
            ctx->lr = 0x7F03F368u;
            ctx->pc = 0x7F023FDCu;
            return;
    }

label_7F03F368:
    ctx->pc = 0x7F03F368u;
    ctx->downcount -= 2;
    // 7F03F368: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03F36C:
    ctx->pc = 0x7F03F36Cu;
    // 7F03F36C: bl      0x7F023FCC
    {
            ctx->lr = 0x7F03F370u;
            ctx->pc = 0x7F023FCCu;
            return;
    }

label_7F03F370:
    ctx->pc = 0x7F03F370u;
    ctx->downcount -= 12;
    // 7F03F370: lwz     r0, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03F374:
    ctx->pc = 0x7F03F374u;
    // 7F03F374: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03F378:
    ctx->pc = 0x7F03F378u;
    // 7F03F378: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F03F37C:
    ctx->pc = 0x7F03F37Cu;
    // 7F03F37C: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_7F03F380:
    ctx->pc = 0x7F03F380u;
    // 7F03F380: stw     r0, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03F384:
    ctx->pc = 0x7F03F384u;
    // 7F03F384: lhz     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F03F388:
    ctx->pc = 0x7F03F388u;
    // 7F03F388: ori     r0, r0, 0x0004
    ctx->gpr[0] = ctx->gpr[0] | 0x0004u;

label_7F03F38C:
    ctx->pc = 0x7F03F38Cu;
    // 7F03F38C: sth     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F03F390:
    ctx->pc = 0x7F03F390u;
    // 7F03F390: lwz     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03F394:
    ctx->pc = 0x7F03F394u;
    // 7F03F394: oris    r0, r0, 0x0200
    ctx->gpr[0] = ctx->gpr[0] | (0x0200u << 16);

label_7F03F398:
    ctx->pc = 0x7F03F398u;
    // 7F03F398: stw     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03F39C:
    ctx->pc = 0x7F03F39Cu;
    // 7F03F39C: bl      0x7F024060
    {
            ctx->lr = 0x7F03F3A0u;
            ctx->pc = 0x7F024060u;
            return;
    }

label_7F03F3A0:
    ctx->pc = 0x7F03F3A0u;
    ctx->downcount -= 6;
    // 7F03F3A0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03F3A4:
    ctx->pc = 0x7F03F3A4u;
    // 7F03F3A4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F03F3A8:
    ctx->pc = 0x7F03F3A8u;
    // 7F03F3A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03F3AC:
    ctx->pc = 0x7F03F3ACu;
    // 7F03F3AC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03F3B0:
    ctx->pc = 0x7F03F3B0u;
    // 7F03F3B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03F3B4:
    ctx->pc = 0x7F03F3B4u;
    ctx->downcount -= 23;
    // 7F03F3B4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03F3B8:
    ctx->pc = 0x7F03F3B8u;
    // 7F03F3B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03F3BC:
    ctx->pc = 0x7F03F3BCu;
    // 7F03F3BC: lis     r8, 256
    ctx->gpr[8] = ((u32)(s32)(256) << 16);

label_7F03F3C0:
    ctx->pc = 0x7F03F3C0u;
    // 7F03F3C0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03F3C4:
    ctx->pc = 0x7F03F3C4u;
    // 7F03F3C4: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F03F3C8:
    ctx->pc = 0x7F03F3C8u;
    // 7F03F3C8: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F03F3CC:
    ctx->pc = 0x7F03F3CCu;
    // 7F03F3CC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03F3D0:
    ctx->pc = 0x7F03F3D0u;
    // 7F03F3D0: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F03F3D4:
    ctx->pc = 0x7F03F3D4u;
    // 7F03F3D4: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F03F3D8:
    ctx->pc = 0x7F03F3D8u;
    // 7F03F3D8: or   r28, r7, r7
    {
        ctx->gpr[28] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F03F3DC:
    ctx->pc = 0x7F03F3DCu;
    // 7F03F3DC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03F3E0:
    ctx->pc = 0x7F03F3E0u;
    // 7F03F3E0: addi    r5, r8, 290
    ctx->gpr[5] = ctx->gpr[8] + (u32)(s32)(290);

label_7F03F3E4:
    ctx->pc = 0x7F03F3E4u;
    // 7F03F3E4: bl      0x7F04272C
    {
            ctx->lr = 0x7F03F3E8u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F03F3E8:
    ctx->pc = 0x7F03F3E8u;
    ctx->downcount -= 4;
    // 7F03F3E8: lis     r3, 27
    ctx->gpr[3] = ((u32)(s32)(27) << 16);

label_7F03F3EC:
    ctx->pc = 0x7F03F3ECu;
    // 7F03F3EC: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F03F3F0:
    ctx->pc = 0x7F03F3F0u;
    // 7F03F3F0: addi    r3, r3, -11122
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11122);

label_7F03F3F4:
    ctx->pc = 0x7F03F3F4u;
    // 7F03F3F4: bl      0x7F3C8470
    {
            ctx->lr = 0x7F03F3F8u;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F03F3F8:
    ctx->pc = 0x7F03F3F8u;
    ctx->downcount -= 1;
    // 7F03F3F8: bl      0x7F3C8480
    {
            ctx->lr = 0x7F03F3FCu;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F03F3FC:
    ctx->pc = 0x7F03F3FCu;
    ctx->downcount -= 3;
    // 7F03F3FC: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_7F03F400:
    ctx->pc = 0x7F03F400u;
    // 7F03F400: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03F404:
    ctx->pc = 0x7F03F404u;
    // 7F03F404: bl      0x7F3AF7BC
    {
            ctx->lr = 0x7F03F408u;
            ctx->pc = 0x7F3AF7BCu;
            return;
    }

label_7F03F408:
    ctx->pc = 0x7F03F408u;
    ctx->downcount -= 4;
    // 7F03F408: stw     r3, 3296(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3296);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F03F40C:
    ctx->pc = 0x7F03F40Cu;
    // 7F03F40C: lwz     r3, 464(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03F410:
    ctx->pc = 0x7F03F410u;
    // 7F03F410: lwz     r4, 3296(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3296);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03F414:
    ctx->pc = 0x7F03F414u;
    // 7F03F414: bl      0x7F3B09C0
    {
            ctx->lr = 0x7F03F418u;
            ctx->pc = 0x7F3B09C0u;
            return;
    }

label_7F03F418:
    ctx->pc = 0x7F03F418u;
    ctx->downcount -= 3;
    // 7F03F418: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03F41C:
    ctx->pc = 0x7F03F41Cu;
    // 7F03F41C: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03F420:
    ctx->pc = 0x7F03F420u;
    // 7F03F420: bl      0x7F042B20
    {
            ctx->lr = 0x7F03F424u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F03F424:
    ctx->pc = 0x7F03F424u;
    ctx->downcount -= 7;
    // 7F03F424: lis     r5, 145
    ctx->gpr[5] = ((u32)(s32)(145) << 16);

label_7F03F428:
    ctx->pc = 0x7F03F428u;
    // 7F03F428: lis     r6, 2
    ctx->gpr[6] = ((u32)(s32)(2) << 16);

label_7F03F42C:
    ctx->pc = 0x7F03F42Cu;
    // 7F03F42C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03F430:
    ctx->pc = 0x7F03F430u;
    // 7F03F430: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F03F434:
    ctx->pc = 0x7F03F434u;
    // 7F03F434: addi    r5, r5, 14935
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(14935);

label_7F03F438:
    ctx->pc = 0x7F03F438u;
    // 7F03F438: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_7F03F43C:
    ctx->pc = 0x7F03F43Cu;
    // 7F03F43C: bl      0x7F042C2C
    {
            ctx->lr = 0x7F03F440u;
            ctx->pc = 0x7F042C2Cu;
            return;
    }

label_7F03F440:
    ctx->pc = 0x7F03F440u;
    ctx->downcount -= 5;
    // 7F03F440: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F03F444:
    ctx->pc = 0x7F03F444u;
    // 7F03F444: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F03F448:
    ctx->pc = 0x7F03F448u;
    // 7F03F448: addi    r3, r3, 22016
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22016);

label_7F03F44C:
    ctx->pc = 0x7F03F44Cu;
    // 7F03F44C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03F450:
    ctx->pc = 0x7F03F450u;
    // 7F03F450: bl      0x7F041A78
    {
            ctx->lr = 0x7F03F454u;
            ctx->pc = 0x7F041A78u;
            return;
    }

label_7F03F454:
    ctx->pc = 0x7F03F454u;
    ctx->downcount -= 3;
    // 7F03F454: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03F458:
    ctx->pc = 0x7F03F458u;
    // 7F03F458: addi    r4, r31, 16
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(16);

label_7F03F45C:
    ctx->pc = 0x7F03F45Cu;
    // 7F03F45C: bl      0x7F042B6C
    {
            ctx->lr = 0x7F03F460u;
            ctx->pc = 0x7F042B6Cu;
            return;
    }

label_7F03F460:
    ctx->pc = 0x7F03F460u;
    ctx->downcount -= 15;
    // 7F03F460: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F03F464:
    ctx->pc = 0x7F03F464u;
    // 7F03F464: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03F468:
    ctx->pc = 0x7F03F468u;
    // 7F03F468: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F03F46C:
    ctx->pc = 0x7F03F46Cu;
    // 7F03F46C: lis     r6, 256
    ctx->gpr[6] = ((u32)(s32)(256) << 16);

label_7F03F470:
    ctx->pc = 0x7F03F470u;
    // 7F03F470: addi    r7, r5, 22016
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(22016);

label_7F03F474:
    ctx->pc = 0x7F03F474u;
    // 7F03F474: addi    r4, r4, 22020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22020);

label_7F03F478:
    ctx->pc = 0x7F03F478u;
    // 7F03F478: addi    r5, r3, -11568
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-11568);

label_7F03F47C:
    ctx->pc = 0x7F03F47Cu;
    // 7F03F47C: lwz     r3, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03F480:
    ctx->pc = 0x7F03F480u;
    // 7F03F480: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03F484:
    ctx->pc = 0x7F03F484u;
    // 7F03F484: addi    r6, r6, -1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-1);

label_7F03F488:
    ctx->pc = 0x7F03F488u;
    // 7F03F488: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F03F488u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03F48C:
    ctx->pc = 0x7F03F48Cu;
    // 7F03F48C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03F490:
    ctx->pc = 0x7F03F490u;
    // 7F03F490: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F03F494:
    ctx->pc = 0x7F03F494u;
    // 7F03F494: li      r8, 40
    ctx->gpr[8] = (u32)(s32)(40);

label_7F03F498:
    ctx->pc = 0x7F03F498u;
    // 7F03F498: bl      0x7F040774
    {
            ctx->lr = 0x7F03F49Cu;
            ctx->pc = 0x7F040774u;
            return;
    }

label_7F03F49C:
    ctx->pc = 0x7F03F49Cu;
    ctx->downcount -= 13;
    // 7F03F49C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F03F4A0:
    ctx->pc = 0x7F03F4A0u;
    // 7F03F4A0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F03F4A4:
    ctx->pc = 0x7F03F4A4u;
    // 7F03F4A4: addi    r4, r4, 2904
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2904);

label_7F03F4A8:
    ctx->pc = 0x7F03F4A8u;
    // 7F03F4A8: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F03F4AC:
    ctx->pc = 0x7F03F4ACu;
    // 7F03F4AC: addi    r7, r3, -11568
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(-11568);

label_7F03F4B0:
    ctx->pc = 0x7F03F4B0u;
    // 7F03F4B0: lwz     r3, 22016(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(22016);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03F4B4:
    ctx->pc = 0x7F03F4B4u;
    // 7F03F4B4: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F03F4B4u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03F4B8:
    ctx->pc = 0x7F03F4B8u;
    // 7F03F4B8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F03F4BC:
    ctx->pc = 0x7F03F4BCu;
    // 7F03F4BC: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03F4C0:
    ctx->pc = 0x7F03F4C0u;
    // 7F03F4C0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03F4C4:
    ctx->pc = 0x7F03F4C4u;
    // 7F03F4C4: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_7F03F4C8:
    ctx->pc = 0x7F03F4C8u;
    // 7F03F4C8: li      r8, 40
    ctx->gpr[8] = (u32)(s32)(40);

label_7F03F4CC:
    ctx->pc = 0x7F03F4CCu;
    // 7F03F4CC: bl      0x7F040774
    {
            ctx->lr = 0x7F03F4D0u;
            ctx->pc = 0x7F040774u;
            return;
    }

label_7F03F4D0:
    ctx->pc = 0x7F03F4D0u;
    ctx->downcount -= 7;
    // 7F03F4D0: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03F4D4:
    ctx->pc = 0x7F03F4D4u;
    // 7F03F4D4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F03F4D8:
    ctx->pc = 0x7F03F4D8u;
    // 7F03F4D8: addi    r5, r4, 22016
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(22016);

label_7F03F4DC:
    ctx->pc = 0x7F03F4DCu;
    // 7F03F4DC: addi    r4, r3, 2904
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(2904);

label_7F03F4E0:
    ctx->pc = 0x7F03F4E0u;
    // 7F03F4E0: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03F4E4:
    ctx->pc = 0x7F03F4E4u;
    // 7F03F4E4: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03F4E8:
    ctx->pc = 0x7F03F4E8u;
    // 7F03F4E8: bl      0x7F041A38
    {
            ctx->lr = 0x7F03F4ECu;
            ctx->pc = 0x7F041A38u;
            return;
    }

label_7F03F4EC:
    ctx->pc = 0x7F03F4ECu;
    ctx->downcount -= 3;
    // 7F03F4EC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03F4F0:
    ctx->pc = 0x7F03F4F0u;
    // 7F03F4F0: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03F4F4:
    ctx->pc = 0x7F03F4F4u;
    // 7F03F4F4: bl      0x7F023E5C
    {
            ctx->lr = 0x7F03F4F8u;
            ctx->pc = 0x7F023E5Cu;
            return;
    }

label_7F03F4F8:
    ctx->pc = 0x7F03F4F8u;
    ctx->downcount -= 18;
    // 7F03F4F8: lis     r4, 59
    ctx->gpr[4] = ((u32)(s32)(59) << 16);

label_7F03F4FC:
    ctx->pc = 0x7F03F4FCu;
    // 7F03F4FC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F03F500:
    ctx->pc = 0x7F03F500u;
    // 7F03F500: addi    r0, r4, -17103
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-17103);

label_7F03F504:
    ctx->pc = 0x7F03F504u;
    // 7F03F504: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F03F508:
    ctx->pc = 0x7F03F508u;
    // 7F03F508: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F03F50C:
    ctx->pc = 0x7F03F50Cu;
    // 7F03F50C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03F510:
    ctx->pc = 0x7F03F510u;
    // 7F03F510: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F03F514:
    ctx->pc = 0x7F03F514u;
    // 7F03F514: lis     r5, 199
    ctx->gpr[5] = ((u32)(s32)(199) << 16);

label_7F03F518:
    ctx->pc = 0x7F03F518u;
    // 7F03F518: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F03F51C:
    ctx->pc = 0x7F03F51Cu;
    // 7F03F51C: lis     r4, 239
    ctx->gpr[4] = ((u32)(s32)(239) << 16);

label_7F03F520:
    ctx->pc = 0x7F03F520u;
    // 7F03F520: lfs     f1, -11508(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F03F520u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-11508);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03F524:
    ctx->pc = 0x7F03F524u;
    // 7F03F524: addi    r3, r5, 11444
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(11444);

label_7F03F528:
    ctx->pc = 0x7F03F528u;
    // 7F03F528: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03F52C:
    ctx->pc = 0x7F03F52Cu;
    // 7F03F52C: addi    r4, r4, 2369
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2369);

label_7F03F530:
    ctx->pc = 0x7F03F530u;
    // 7F03F530: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F03F534:
    ctx->pc = 0x7F03F534u;
    // 7F03F534: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F03F538:
    ctx->pc = 0x7F03F538u;
    // 7F03F538: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F03F53C:
    ctx->pc = 0x7F03F53Cu;
    // 7F03F53C: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F03F540u;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F03F540:
    ctx->pc = 0x7F03F540u;
    ctx->downcount -= 17;
    // 7F03F540: stw     r3, 508(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(508);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F03F544:
    ctx->pc = 0x7F03F544u;
    // 7F03F544: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F03F548:
    ctx->pc = 0x7F03F548u;
    // 7F03F548: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03F54C:
    ctx->pc = 0x7F03F54Cu;
    // 7F03F54C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03F550:
    ctx->pc = 0x7F03F550u;
    // 7F03F550: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F03F554:
    ctx->pc = 0x7F03F554u;
    // 7F03F554: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03F558:
    ctx->pc = 0x7F03F558u;
    ctx->downcount -= 12;
    // 7F03F558: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03F55C:
    ctx->pc = 0x7F03F55Cu;
    // 7F03F55C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03F560:
    ctx->pc = 0x7F03F560u;
    // 7F03F560: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F03F564:
    ctx->pc = 0x7F03F564u;
    // 7F03F564: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F03F568:
    ctx->pc = 0x7F03F568u;
    // 7F03F568: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03F56C:
    ctx->pc = 0x7F03F56Cu;
    // 7F03F56C: lfs     f2, -11504(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F03F56Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-11504);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F03F570:
    ctx->pc = 0x7F03F570u;
    // 7F03F570: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F03F574:
    ctx->pc = 0x7F03F574u;
    // 7F03F574: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03F578:
    ctx->pc = 0x7F03F578u;
    // 7F03F578: lfs     f1, -11516(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F03F578u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-11516);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03F57C:
    ctx->pc = 0x7F03F57Cu;
    // 7F03F57C: lfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F03F57Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F03F580:
    ctx->pc = 0x7F03F580u;
    // 7F03F580: fadds   f2, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F03F580u)) return;
    ppc_fadds(ctx, 2, 2, 0);

label_7F03F584:
    ctx->pc = 0x7F03F584u;
    // 7F03F584: bl      0x7F023FB4
    {
            ctx->lr = 0x7F03F588u;
            ctx->pc = 0x7F023FB4u;
            return;
    }

label_7F03F588:
    ctx->pc = 0x7F03F588u;
    ctx->downcount -= 2;
    // 7F03F588: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03F58C:
    ctx->pc = 0x7F03F58Cu;
    // 7F03F58C: bl      0x7F023EA8
    {
            ctx->lr = 0x7F03F590u;
            ctx->pc = 0x7F023EA8u;
            return;
    }

label_7F03F590:
    ctx->pc = 0x7F03F590u;
    ctx->downcount -= 7;
    // 7F03F590: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03F594:
    ctx->pc = 0x7F03F594u;
    // 7F03F594: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F03F598:
    ctx->pc = 0x7F03F598u;
    // 7F03F598: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F03F59C:
    ctx->pc = 0x7F03F59Cu;
    // 7F03F59C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03F5A0:
    ctx->pc = 0x7F03F5A0u;
    // 7F03F5A0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03F5A4:
    ctx->pc = 0x7F03F5A4u;
    // 7F03F5A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03F5A8:
    ctx->pc = 0x7F03F5A8u;
    ctx->downcount -= 19;
    // 7F03F5A8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F03F5AC:
    ctx->pc = 0x7F03F5ACu;
    // 7F03F5AC: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F03F5B0:
    ctx->pc = 0x7F03F5B0u;
    // 7F03F5B0: addi    r6, r4, -11500
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-11500);

label_7F03F5B4:
    ctx->pc = 0x7F03F5B4u;
    // 7F03F5B4: lfs     f1, -11568(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F03F5B4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-11568);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03F5B8:
    ctx->pc = 0x7F03F5B8u;
    // 7F03F5B8: lfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F03F5B8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F03F5BC:
    ctx->pc = 0x7F03F5BCu;
    // 7F03F5BC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F03F5C0:
    ctx->pc = 0x7F03F5C0u;
    // 7F03F5C0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F03F5C4:
    ctx->pc = 0x7F03F5C4u;
    // 7F03F5C4: stfs     f0, 64(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F03F5C4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F03F5C8:
    ctx->pc = 0x7F03F5C8u;
    // 7F03F5C8: lfs     f0, -11496(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F03F5C8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-11496);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F03F5CC:
    ctx->pc = 0x7F03F5CCu;
    // 7F03F5CC: stfs     f1, 68(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F03F5CCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F03F5D0:
    ctx->pc = 0x7F03F5D0u;
    // 7F03F5D0: stfs     f0, 72(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F03F5D0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F03F5D4:
    ctx->pc = 0x7F03F5D4u;
    // 7F03F5D4: sth     r0, 104(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(104);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F03F5D8:
    ctx->pc = 0x7F03F5D8u;
    // 7F03F5D8: sth     r0, 96(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(96);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F03F5DC:
    ctx->pc = 0x7F03F5DCu;
    // 7F03F5DC: sth     r0, 106(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(106);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F03F5E0:
    ctx->pc = 0x7F03F5E0u;
    // 7F03F5E0: sth     r0, 98(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(98);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F03F5E4:
    ctx->pc = 0x7F03F5E4u;
    // 7F03F5E4: sth     r0, 108(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(108);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F03F5E8:
    ctx->pc = 0x7F03F5E8u;
    // 7F03F5E8: sth     r0, 100(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(100);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F03F5EC:
    ctx->pc = 0x7F03F5ECu;
    // 7F03F5EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F03F5F0:
    ctx->pc = 0x7F03F5F0u;
    // 7F03F5F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03F5F4:
    ctx->pc = 0x7F03F5F4u;
    ctx->downcount -= 10;
    // 7F03F5F4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03F5F8:
    ctx->pc = 0x7F03F5F8u;
    // 7F03F5F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03F5FC:
    ctx->pc = 0x7F03F5FCu;
    // 7F03F5FC: li      r5, 11
    ctx->gpr[5] = (u32)(s32)(11);

label_7F03F600:
    ctx->pc = 0x7F03F600u;
    // 7F03F600: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03F604:
    ctx->pc = 0x7F03F604u;
    // 7F03F604: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F03F608:
    ctx->pc = 0x7F03F608u;
    // 7F03F608: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03F60C:
    ctx->pc = 0x7F03F60Cu;
    // 7F03F60C: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F03F610:
    ctx->pc = 0x7F03F610u;
    // 7F03F610: lwz     r6, 224(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(224);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F03F614:
    ctx->pc = 0x7F03F614u;
    // 7F03F614: addi    r3, r31, 3572
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3572);

label_7F03F618:
    ctx->pc = 0x7F03F618u;
    // 7F03F618: bl      0x7F0120F4
    {
            ctx->lr = 0x7F03F61Cu;
            ctx->pc = 0x7F0120F4u;
            return;
    }

label_7F03F61C:
    ctx->pc = 0x7F03F61Cu;
    ctx->downcount -= 7;
    // 7F03F61C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F03F620:
    ctx->pc = 0x7F03F620u;
    // 7F03F620: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F03F624:
    ctx->pc = 0x7F03F624u;
    // 7F03F624: addi    r5, r3, -11492
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-11492);

label_7F03F628:
    ctx->pc = 0x7F03F628u;
    // 7F03F628: lfs     f2, -11488(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F03F628u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-11488);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F03F62C:
    ctx->pc = 0x7F03F62Cu;
    // 7F03F62C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F03F62Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03F630:
    ctx->pc = 0x7F03F630u;
    // 7F03F630: addi    r3, r31, 3572
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3572);

label_7F03F634:
    ctx->pc = 0x7F03F634u;
    // 7F03F634: bl      0x7F03C1DC
    {
            ctx->lr = 0x7F03F638u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03C1DCu;
                return;
            }
            goto label_7F03C1DC;
    }

label_7F03F638:
    ctx->pc = 0x7F03F638u;
    ctx->downcount -= 8;
    // 7F03F638: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F03F63C:
    ctx->pc = 0x7F03F63Cu;
    // 7F03F63C: lha     r4, 98(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(98);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03F640:
    ctx->pc = 0x7F03F640u;
    // 7F03F640: addi    r5, r3, -11548
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-11548);

label_7F03F644:
    ctx->pc = 0x7F03F644u;
    // 7F03F644: addi    r3, r31, 3572
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3572);

label_7F03F648:
    ctx->pc = 0x7F03F648u;
    // 7F03F648: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F03F648u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03F64C:
    ctx->pc = 0x7F03F64Cu;
    // 7F03F64C: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F03F650:
    ctx->pc = 0x7F03F650u;
    // 7F03F650: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F03F654:
    ctx->pc = 0x7F03F654u;
    // 7F03F654: bl      0x7F041A9C
    {
            ctx->lr = 0x7F03F658u;
            ctx->pc = 0x7F041A9Cu;
            return;
    }

label_7F03F658:
    ctx->pc = 0x7F03F658u;
    ctx->downcount -= 3;
    // 7F03F658: addi    r3, r31, 3572
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3572);

label_7F03F65C:
    ctx->pc = 0x7F03F65Cu;
    // 7F03F65C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F03F660:
    ctx->pc = 0x7F03F660u;
    // 7F03F660: bl      0x7F03C1CC
    {
            ctx->lr = 0x7F03F664u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03C1CCu;
                return;
            }
            goto label_7F03C1CC;
    }

label_7F03F664:
    ctx->pc = 0x7F03F664u;
    ctx->downcount -= 7;
    // 7F03F664: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03F668:
    ctx->pc = 0x7F03F668u;
    // 7F03F668: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F03F66C:
    ctx->pc = 0x7F03F66Cu;
    // 7F03F66C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F03F670:
    ctx->pc = 0x7F03F670u;
    // 7F03F670: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03F674:
    ctx->pc = 0x7F03F674u;
    // 7F03F674: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03F678:
    ctx->pc = 0x7F03F678u;
    // 7F03F678: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03F67C:
    ctx->pc = 0x7F03F67Cu;
    ctx->downcount -= 35;
    // 7F03F67C: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03F680:
    ctx->pc = 0x7F03F680u;
    // 7F03F680: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03F684:
    ctx->pc = 0x7F03F684u;
    // 7F03F684: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03F688:
    ctx->pc = 0x7F03F688u;
    // 7F03F688: stmw     r27, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F03F68C:
    ctx->pc = 0x7F03F68Cu;
    // 7F03F68C: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F03F690:
    ctx->pc = 0x7F03F690u;
    // 7F03F690: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F03F694:
    ctx->pc = 0x7F03F694u;
    // 7F03F694: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03F698:
    ctx->pc = 0x7F03F698u;
    // 7F03F698: addi    r30, r4, 12816
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(12816);

label_7F03F69C:
    ctx->pc = 0x7F03F69Cu;
    // 7F03F69C: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F03F6A0:
    ctx->pc = 0x7F03F6A0u;
    // 7F03F6A0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F03F6A4:
    ctx->pc = 0x7F03F6A4u;
    // 7F03F6A4: lfs     f0, 48(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F03F6A4u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F03F6A8:
    ctx->pc = 0x7F03F6A8u;
    // 7F03F6A8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F03F6A8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F03F6AC:
    ctx->pc = 0x7F03F6ACu;
    // 7F03F6AC: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F03F6ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F03F6B0:
    ctx->pc = 0x7F03F6B0u;
    // 7F03F6B0: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03F6B4:
    ctx->pc = 0x7F03F6B4u;
    // 7F03F6B4: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03F6B8:
    ctx->pc = 0x7F03F6B8u;
    // 7F03F6B8: lfs     f0, 52(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F03F6B8u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F03F6BC:
    ctx->pc = 0x7F03F6BCu;
    // 7F03F6BC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F03F6BCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F03F6C0:
    ctx->pc = 0x7F03F6C0u;
    // 7F03F6C0: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F03F6C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F03F6C4:
    ctx->pc = 0x7F03F6C4u;
    // 7F03F6C4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03F6C8:
    ctx->pc = 0x7F03F6C8u;
    // 7F03F6C8: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03F6CC:
    ctx->pc = 0x7F03F6CCu;
    // 7F03F6CC: lfs     f0, 56(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F03F6CCu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F03F6D0:
    ctx->pc = 0x7F03F6D0u;
    // 7F03F6D0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F03F6D0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F03F6D4:
    ctx->pc = 0x7F03F6D4u;
    // 7F03F6D4: stfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F03F6D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F03F6D8:
    ctx->pc = 0x7F03F6D8u;
    // 7F03F6D8: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03F6DC:
    ctx->pc = 0x7F03F6DCu;
    // 7F03F6DC: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03F6E0:
    ctx->pc = 0x7F03F6E0u;
    ctx->downcount -= 4;
    // 7F03F6E0: lwzx    r3, r27, r31
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[31];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03F6E4:
    // 7F03F6E4: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03F6E8:
    // 7F03F6E8: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03F6EC:
    // 7F03F6EC: bl      0x7F10BF44
    {
            ctx->lr = 0x7F03F6F0u;
            ctx->pc = 0x7F10BF44u;
            return;
    }

label_7F03F6F0:
    ctx->pc = 0x7F03F6F0u;
    ctx->downcount -= 3;
    // 7F03F6F0: lwzx    r3, r27, r31
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[31];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03F6F4:
    // 7F03F6F4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F03F6F8:
    // 7F03F6F8: bl      0x7F10C154
    {
            ctx->lr = 0x7F03F6FCu;
            ctx->pc = 0x7F10C154u;
            return;
    }

label_7F03F6FC:
    ctx->downcount -= 4;
    // 7F03F6FC: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F03F700:
    // 7F03F700: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F03F704:
    // 7F03F704: cmpwi   r29, 4
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

label_7F03F708:
    // 7F03F708: bc    12, 0, 0x7F03F6E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03F6E0u;
                return;
            }
            goto label_7F03F6E0;
        }
    }

label_7F03F70C:
    ctx->pc = 0x7F03F70Cu;
    ctx->downcount -= 16;
    // 7F03F70C: lmw     r27, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F03F710:
    ctx->pc = 0x7F03F710u;
    // 7F03F710: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03F714:
    ctx->pc = 0x7F03F714u;
    // 7F03F714: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03F718:
    ctx->pc = 0x7F03F718u;
    // 7F03F718: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F03F71C:
    ctx->pc = 0x7F03F71Cu;
    // 7F03F71C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03F720:
    ctx->pc = 0x7F03F720u;
    ctx->downcount -= 21;
    // 7F03F720: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03F724:
    ctx->pc = 0x7F03F724u;
    // 7F03F724: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03F728:
    ctx->pc = 0x7F03F728u;
    // 7F03F728: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03F72C:
    ctx->pc = 0x7F03F72Cu;
    // 7F03F72C: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03F730:
    ctx->pc = 0x7F03F730u;
    // 7F03F730: stmw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F03F734:
    ctx->pc = 0x7F03F734u;
    // 7F03F734: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03F738:
    ctx->pc = 0x7F03F738u;
    // 7F03F738: addi    r3, r4, 19632
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(19632);

label_7F03F73C:
    ctx->pc = 0x7F03F73Cu;
    // 7F03F73C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F03F740:
    ctx->pc = 0x7F03F740u;
    // 7F03F740: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03F744:
    ctx->pc = 0x7F03F744u;
    // 7F03F744: cmplwi  r3, 0x0000
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

label_7F03F748:
    ctx->pc = 0x7F03F748u;
    // 7F03F748: bc    12, 2, 0x7F03F758
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03F758;
        }
    }

label_7F03F74C:
    ctx->pc = 0x7F03F74Cu;
    ctx->downcount -= 3;
    // 7F03F74C: lwz     r0, 4248(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4248);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03F750:
    ctx->pc = 0x7F03F750u;
    // 7F03F750: rlwinm. r0, r0, 0, 31, 31
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

label_7F03F754:
    ctx->pc = 0x7F03F754u;
    // 7F03F754: bc    12, 2, 0x7F03F760
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03F760;
        }
    }

label_7F03F758:
    ctx->pc = 0x7F03F758u;
    ctx->downcount -= 2;
    // 7F03F758: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F03F75C:
    ctx->pc = 0x7F03F75Cu;
    // 7F03F75C: b       0x7F03F80C
    {
            goto label_7F03F80C;
    }

label_7F03F760:
    ctx->pc = 0x7F03F760u;
    ctx->downcount -= 2;
    // 7F03F760: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03F764:
    ctx->pc = 0x7F03F764u;
    // 7F03F764: b       0x7F03F7F8
    {
            goto label_7F03F7F8;
    }

label_7F03F768:
    ctx->downcount -= 5;
    // 7F03F768: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03F76C:
    ctx->pc = 0x7F03F76Cu;
    // 7F03F76C: lwz     r31, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F03F770:
    ctx->pc = 0x7F03F770u;
    // 7F03F770: lwz     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03F774:
    // 7F03F774: rlwinm. r0, r0, 0, 26, 26
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

label_7F03F778:
    // 7F03F778: bc    12, 2, 0x7F03F7F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03F7F8;
        }
    }

label_7F03F77C:
    ctx->downcount -= 3;
    // 7F03F77C: addi    r4, r28, 64
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(64);

label_7F03F780:
    // 7F03F780: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F03F784:
    // 7F03F784: bl      0x7F3CC69C
    {
            ctx->lr = 0x7F03F788u;
            ctx->pc = 0x7F3CC69Cu;
            return;
    }

label_7F03F788:
    ctx->downcount -= 5;
    // 7F03F788: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F03F78C:
    // 7F03F78C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F03F790:
    ctx->pc = 0x7F03F790u;
    // 7F03F790: lfs     f0, -11568(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F03F790u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-11568);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F03F794:
    ctx->pc = 0x7F03F794u;
    // 7F03F794: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F03F794u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F03F798:
    // 7F03F798: bl      0x7F3CC594
    {
            ctx->lr = 0x7F03F79Cu;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F03F79C:
    ctx->pc = 0x7F03F79Cu;
    ctx->downcount -= 5;
    // 7F03F79C: fctiwz    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F03F79Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F03F7A0:
    // 7F03F7A0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F03F7A4:
    ctx->pc = 0x7F03F7A4u;
    // 7F03F7A4: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F03F7A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F03F7A8:
    ctx->pc = 0x7F03F7A8u;
    // 7F03F7A8: lwz     r29, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F03F7AC:
    // 7F03F7AC: bl      0x7F3CC708
    {
            ctx->lr = 0x7F03F7B0u;
            ctx->pc = 0x7F3CC708u;
            return;
    }

label_7F03F7B0:
    ctx->downcount -= 3;
    // 7F03F7B0: cmpwi   r29, 700
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(700);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03F7B4:
    // 7F03F7B4: extsh r4, r3
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F03F7B8:
    // 7F03F7B8: bc    4, 0, 0x7F03F7F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03F7F8;
        }
    }

label_7F03F7BC:
    ctx->pc = 0x7F03F7BCu;
    ctx->downcount -= 2;
    // 7F03F7BC: lha     r3, 98(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(98);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03F7C0:
    // 7F03F7C0: bl      0x7F3CC924
    {
            ctx->lr = 0x7F03F7C4u;
            ctx->pc = 0x7F3CC924u;
            return;
    }

label_7F03F7C4:
    ctx->downcount -= 2;
    // 7F03F7C4: cmpwi   r3, 1300
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(1300);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03F7C8:
    // 7F03F7C8: bc    4, 0, 0x7F03F7F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03F7F8;
        }
    }

label_7F03F7CC:
    ctx->pc = 0x7F03F7CCu;
    ctx->downcount -= 9;
    // 7F03F7CC: lfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F03F7CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03F7D0:
    ctx->pc = 0x7F03F7D0u;
    // 7F03F7D0: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F03F7D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F03F7D4:
    ctx->pc = 0x7F03F7D4u;
    // 7F03F7D4: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F03F7D4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F03F7D8:
    ctx->pc = 0x7F03F7D8u;
    // 7F03F7D8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F03F7D8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F03F7DC:
    ctx->pc = 0x7F03F7DCu;
    // 7F03F7DC: stfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F03F7DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F03F7E0:
    ctx->pc = 0x7F03F7E0u;
    // 7F03F7E0: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F03F7E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F03F7E4:
    ctx->pc = 0x7F03F7E4u;
    // 7F03F7E4: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03F7E8:
    ctx->pc = 0x7F03F7E8u;
    // 7F03F7E8: lwz     r4, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03F7EC:
    // 7F03F7EC: bl      0x7F02A6B0
    {
            ctx->lr = 0x7F03F7F0u;
            ctx->pc = 0x7F02A6B0u;
            return;
    }

label_7F03F7F0:
    ctx->pc = 0x7F03F7F0u;
    ctx->downcount -= 2;
    // 7F03F7F0: sth     r3, 106(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(106);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F03F7F4:
    // 7F03F7F4: li      r30, 1
    ctx->gpr[30] = (u32)(s32)(1);

label_7F03F7F8:
    ctx->downcount -= 2;
    // 7F03F7F8: cmplwi  r31, 0x0000
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

label_7F03F7FC:
    // 7F03F7FC: bc    12, 2, 0x7F03F808
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03F808;
        }
    }

label_7F03F800:
    ctx->downcount -= 2;
    // 7F03F800: cmpwi   r30, 0
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

label_7F03F804:
    // 7F03F804: bc    12, 2, 0x7F03F768
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03F768u;
                return;
            }
            goto label_7F03F768;
        }
    }

label_7F03F808:
    ctx->pc = 0x7F03F808u;
    ctx->downcount -= 1;
    // 7F03F808: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03F80C:
    ctx->pc = 0x7F03F80Cu;
    ctx->downcount -= 16;
    // 7F03F80C: lmw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F03F810:
    ctx->pc = 0x7F03F810u;
    // 7F03F810: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03F814:
    ctx->pc = 0x7F03F814u;
    // 7F03F814: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03F818:
    ctx->pc = 0x7F03F818u;
    // 7F03F818: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F03F81C:
    ctx->pc = 0x7F03F81Cu;
    // 7F03F81C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03F820:
    ctx->pc = 0x7F03F820u;
    ctx->downcount -= 6;
    // 7F03F820: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03F824:
    ctx->pc = 0x7F03F824u;
    // 7F03F824: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03F828:
    ctx->pc = 0x7F03F828u;
    // 7F03F828: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03F82C:
    ctx->pc = 0x7F03F82Cu;
    // 7F03F82C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F03F830:
    ctx->pc = 0x7F03F830u;
    // 7F03F830: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03F834:
    ctx->pc = 0x7F03F834u;
    // 7F03F834: bl      0x7F03F5A8
    {
            ctx->lr = 0x7F03F838u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03F5A8u;
                return;
            }
            goto label_7F03F5A8;
    }

label_7F03F838:
    ctx->pc = 0x7F03F838u;
    ctx->downcount -= 2;
    // 7F03F838: li      r3, 101
    ctx->gpr[3] = (u32)(s32)(101);

label_7F03F83C:
    ctx->pc = 0x7F03F83Cu;
    // 7F03F83C: bl      0x7F3C664C
    {
            ctx->lr = 0x7F03F840u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F03F840:
    ctx->pc = 0x7F03F840u;
    ctx->downcount -= 2;
    // 7F03F840: cmplwi  r3, 0x0000
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

label_7F03F844:
    ctx->pc = 0x7F03F844u;
    // 7F03F844: bc    12, 2, 0x7F03F854
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03F854;
        }
    }

label_7F03F848:
    ctx->pc = 0x7F03F848u;
    ctx->downcount -= 1;
    // 7F03F848: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F03F84Cu;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F03F84C:
    ctx->pc = 0x7F03F84Cu;
    ctx->downcount -= 1;
    // 7F03F84C: bl      0x7F3C674C
    {
            ctx->lr = 0x7F03F850u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F03F850:
    ctx->pc = 0x7F03F850u;
    ctx->downcount -= 1;
    // 7F03F850: stw     r3, 3976(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3976);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F03F854:
    ctx->pc = 0x7F03F854u;
    ctx->downcount -= 40;
    // 7F03F854: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F03F858:
    ctx->pc = 0x7F03F858u;
    // 7F03F858: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F03F85C:
    ctx->pc = 0x7F03F85Cu;
    // 7F03F85C: addi    r0, r3, 14080
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(14080);

label_7F03F860:
    ctx->pc = 0x7F03F860u;
    // 7F03F860: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F03F864:
    ctx->pc = 0x7F03F864u;
    // 7F03F864: stw     r0, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03F868:
    ctx->pc = 0x7F03F868u;
    // 7F03F868: addi    r5, r4, -11484
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-11484);

label_7F03F86C:
    ctx->pc = 0x7F03F86Cu;
    // 7F03F86C: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F03F870:
    ctx->pc = 0x7F03F870u;
    // 7F03F870: addi    r4, r3, -11480
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-11480);

label_7F03F874:
    ctx->pc = 0x7F03F874u;
    // 7F03F874: stw     r0, 3868(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3868);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03F878:
    ctx->pc = 0x7F03F878u;
    // 7F03F878: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F03F87C:
    ctx->pc = 0x7F03F87Cu;
    // 7F03F87C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F03F87Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F03F880:
    ctx->pc = 0x7F03F880u;
    // 7F03F880: li      r7, 6
    ctx->gpr[7] = (u32)(s32)(6);

label_7F03F884:
    ctx->pc = 0x7F03F884u;
    // 7F03F884: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F03F884u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F03F888:
    ctx->pc = 0x7F03F888u;
    // 7F03F888: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F03F88C:
    ctx->pc = 0x7F03F88Cu;
    // 7F03F88C: stfs     f1, 64(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F03F88Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F03F890:
    ctx->pc = 0x7F03F890u;
    // 7F03F890: addi    r5, r3, -32768
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-32768);

label_7F03F894:
    ctx->pc = 0x7F03F894u;
    // 7F03F894: li      r0, 5000
    ctx->gpr[0] = (u32)(s32)(5000);

label_7F03F898:
    ctx->pc = 0x7F03F898u;
    // 7F03F898: li      r3, 104
    ctx->gpr[3] = (u32)(s32)(104);

label_7F03F89C:
    ctx->pc = 0x7F03F89Cu;
    // 7F03F89C: stfs     f0, 72(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F03F89Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F03F8A0:
    ctx->pc = 0x7F03F8A0u;
    // 7F03F8A0: li      r4, 1024
    ctx->gpr[4] = (u32)(s32)(1024);

label_7F03F8A4:
    ctx->pc = 0x7F03F8A4u;
    // 7F03F8A4: lwz     r9, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F03F8A8:
    ctx->pc = 0x7F03F8A8u;
    // 7F03F8A8: lwz     r8, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F03F8AC:
    ctx->pc = 0x7F03F8ACu;
    // 7F03F8AC: stw     r9, 3796(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3796);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F03F8B0:
    ctx->pc = 0x7F03F8B0u;
    // 7F03F8B0: stw     r8, 3800(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3800);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F03F8B4:
    ctx->pc = 0x7F03F8B4u;
    // 7F03F8B4: lwz     r9, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F03F8B8:
    ctx->pc = 0x7F03F8B8u;
    // 7F03F8B8: lwz     r8, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F03F8BC:
    ctx->pc = 0x7F03F8BCu;
    // 7F03F8BC: stw     r9, 3804(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3804);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F03F8C0:
    ctx->pc = 0x7F03F8C0u;
    // 7F03F8C0: stw     r8, 3808(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3808);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F03F8C4:
    ctx->pc = 0x7F03F8C4u;
    // 7F03F8C4: stw     r7, 3816(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3816);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F03F8C8:
    ctx->pc = 0x7F03F8C8u;
    // 7F03F8C8: stw     r6, 3828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3828);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F03F8CC:
    ctx->pc = 0x7F03F8CCu;
    // 7F03F8CC: stw     r6, 3840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3840);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F03F8D0:
    ctx->pc = 0x7F03F8D0u;
    // 7F03F8D0: stw     r6, 3872(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3872);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F03F8D4:
    ctx->pc = 0x7F03F8D4u;
    // 7F03F8D4: stw     r6, 3876(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3876);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F03F8D8:
    ctx->pc = 0x7F03F8D8u;
    // 7F03F8D8: stw     r6, 3880(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3880);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F03F8DC:
    ctx->pc = 0x7F03F8DCu;
    // 7F03F8DC: stw     r6, 3824(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3824);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F03F8E0:
    ctx->pc = 0x7F03F8E0u;
    // 7F03F8E0: stw     r5, 3980(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3980);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F03F8E4:
    ctx->pc = 0x7F03F8E4u;
    // 7F03F8E4: stw     r6, 3992(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3992);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F03F8E8:
    ctx->pc = 0x7F03F8E8u;
    // 7F03F8E8: stw     r0, 4096(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4096);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03F8EC:
    ctx->pc = 0x7F03F8ECu;
    // 7F03F8EC: stw     r0, 4100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03F8F0:
    ctx->pc = 0x7F03F8F0u;
    // 7F03F8F0: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F03F8F4u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F03F8F4:
    ctx->pc = 0x7F03F8F4u;
    ctx->downcount -= 9;
    // 7F03F8F4: stw     r3, 4092(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4092);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F03F8F8:
    ctx->pc = 0x7F03F8F8u;
    // 7F03F8F8: li      r5, 30
    ctx->gpr[5] = (u32)(s32)(30);

label_7F03F8FC:
    ctx->pc = 0x7F03F8FCu;
    // 7F03F8FC: li      r0, 180
    ctx->gpr[0] = (u32)(s32)(180);

label_7F03F900:
    ctx->pc = 0x7F03F900u;
    // 7F03F900: li      r3, 98
    ctx->gpr[3] = (u32)(s32)(98);

label_7F03F904:
    ctx->pc = 0x7F03F904u;
    // 7F03F904: stw     r5, 4104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4104);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F03F908:
    ctx->pc = 0x7F03F908u;
    // 7F03F908: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_7F03F90C:
    ctx->pc = 0x7F03F90Cu;
    // 7F03F90C: stw     r5, 4108(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4108);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F03F910:
    ctx->pc = 0x7F03F910u;
    // 7F03F910: stw     r0, 4112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03F914:
    ctx->pc = 0x7F03F914u;
    // 7F03F914: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F03F918u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F03F918:
    ctx->pc = 0x7F03F918u;
    ctx->downcount -= 4;
    // 7F03F918: stw     r3, 4124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4124);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F03F91C:
    ctx->pc = 0x7F03F91Cu;
    // 7F03F91C: li      r3, 115
    ctx->gpr[3] = (u32)(s32)(115);

label_7F03F920:
    ctx->pc = 0x7F03F920u;
    // 7F03F920: li      r4, 325
    ctx->gpr[4] = (u32)(s32)(325);

label_7F03F924:
    ctx->pc = 0x7F03F924u;
    // 7F03F924: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F03F928u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F03F928:
    ctx->pc = 0x7F03F928u;
    ctx->downcount -= 7;
    // 7F03F928: stw     r3, 4128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4128);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F03F92C:
    ctx->pc = 0x7F03F92Cu;
    // 7F03F92C: addi    r5, r31, 4152
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(4152);

label_7F03F930:
    ctx->pc = 0x7F03F930u;
    // 7F03F930: addi    r6, r31, 4200
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(4200);

label_7F03F934:
    ctx->pc = 0x7F03F934u;
    // 7F03F934: li      r3, 105
    ctx->gpr[3] = (u32)(s32)(105);

label_7F03F938:
    ctx->pc = 0x7F03F938u;
    // 7F03F938: li      r4, 97
    ctx->gpr[4] = (u32)(s32)(97);

label_7F03F93C:
    ctx->pc = 0x7F03F93Cu;
    // 7F03F93C: li      r7, 12
    ctx->gpr[7] = (u32)(s32)(12);

label_7F03F940:
    ctx->pc = 0x7F03F940u;
    // 7F03F940: bl      0x7F0927E8
    {
            ctx->lr = 0x7F03F944u;
            ctx->pc = 0x7F0927E8u;
            return;
    }

label_7F03F944:
    ctx->pc = 0x7F03F944u;
    ctx->downcount -= 3;
    // 7F03F944: addi    r3, r31, 4008
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4008);

label_7F03F948:
    ctx->pc = 0x7F03F948u;
    // 7F03F948: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_7F03F94C:
    ctx->pc = 0x7F03F94Cu;
    // 7F03F94C: bl      0x7F03D978
    {
            ctx->lr = 0x7F03F950u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03D978u;
                return;
            }
            goto label_7F03D978;
    }

label_7F03F950:
    ctx->pc = 0x7F03F950u;
    ctx->downcount -= 16;
    // 7F03F950: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F03F954:
    ctx->pc = 0x7F03F954u;
    // 7F03F954: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F03F958:
    ctx->pc = 0x7F03F958u;
    // 7F03F958: addi    r7, r5, 22016
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(22016);

label_7F03F95C:
    ctx->pc = 0x7F03F95Cu;
    // 7F03F95C: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F03F960:
    ctx->pc = 0x7F03F960u;
    // 7F03F960: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F03F964:
    ctx->pc = 0x7F03F964u;
    // 7F03F964: addi    r5, r3, 22048
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(22048);

label_7F03F968:
    ctx->pc = 0x7F03F968u;
    // 7F03F968: stw     r6, 22052(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22052);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F03F96C:
    ctx->pc = 0x7F03F96Cu;
    // 7F03F96C: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F03F970:
    ctx->pc = 0x7F03F970u;
    // 7F03F970: li      r3, 109
    ctx->gpr[3] = (u32)(s32)(109);

label_7F03F974:
    ctx->pc = 0x7F03F974u;
    // 7F03F974: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F03F978:
    ctx->pc = 0x7F03F978u;
    // 7F03F978: stw     r31, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F03F97C:
    ctx->pc = 0x7F03F97Cu;
    // 7F03F97C: stw     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F03F980:
    ctx->pc = 0x7F03F980u;
    // 7F03F980: stw     r6, 3720(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3720);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F03F984:
    ctx->pc = 0x7F03F984u;
    // 7F03F984: stw     r6, 4120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4120);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F03F988:
    ctx->pc = 0x7F03F988u;
    // 7F03F988: stw     r0, 4136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03F98C:
    ctx->pc = 0x7F03F98Cu;
    // 7F03F98C: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F03F990u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F03F990:
    ctx->pc = 0x7F03F990u;
    ctx->downcount -= 8;
    // 7F03F990: stw     r3, 4260(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4260);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F03F994:
    ctx->pc = 0x7F03F994u;
    // 7F03F994: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F03F998:
    ctx->pc = 0x7F03F998u;
    // 7F03F998: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03F99C:
    ctx->pc = 0x7F03F99Cu;
    // 7F03F99C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F03F9A0:
    ctx->pc = 0x7F03F9A0u;
    // 7F03F9A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03F9A4:
    ctx->pc = 0x7F03F9A4u;
    // 7F03F9A4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03F9A8:
    ctx->pc = 0x7F03F9A8u;
    // 7F03F9A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03F9AC:
    ctx->pc = 0x7F03F9ACu;
    ctx->downcount -= 13;
    // 7F03F9AC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03F9B0:
    ctx->pc = 0x7F03F9B0u;
    // 7F03F9B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03F9B4:
    ctx->pc = 0x7F03F9B4u;
    // 7F03F9B4: li      r8, 2
    ctx->gpr[8] = (u32)(s32)(2);

label_7F03F9B8:
    ctx->pc = 0x7F03F9B8u;
    // 7F03F9B8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03F9BC:
    ctx->pc = 0x7F03F9BCu;
    // 7F03F9BC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F03F9C0:
    ctx->pc = 0x7F03F9C0u;
    // 7F03F9C0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03F9C4:
    ctx->pc = 0x7F03F9C4u;
    // 7F03F9C4: addi    r5, r31, 464
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(464);

label_7F03F9C8:
    ctx->pc = 0x7F03F9C8u;
    // 7F03F9C8: lwz     r4, 464(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(464);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03F9CC:
    ctx->pc = 0x7F03F9CCu;
    // 7F03F9CC: addi    r3, r31, 3540
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3540);

label_7F03F9D0:
    ctx->pc = 0x7F03F9D0u;
    // 7F03F9D0: addi    r6, r31, 228
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(228);

label_7F03F9D4:
    ctx->pc = 0x7F03F9D4u;
    // 7F03F9D4: addi    r7, r31, 64
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(64);

label_7F03F9D8:
    ctx->pc = 0x7F03F9D8u;
    // 7F03F9D8: addi    r4, r4, 1092
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1092);

label_7F03F9DC:
    ctx->pc = 0x7F03F9DCu;
    // 7F03F9DC: bl      0x7F01D42C
    {
            ctx->lr = 0x7F03F9E0u;
            ctx->pc = 0x7F01D42Cu;
            return;
    }

label_7F03F9E0:
    ctx->pc = 0x7F03F9E0u;
    ctx->downcount -= 3;
    // 7F03F9E0: addi    r3, r31, 3540
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3540);

label_7F03F9E4:
    ctx->pc = 0x7F03F9E4u;
    // 7F03F9E4: addi    r4, r31, 816
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(816);

label_7F03F9E8:
    ctx->pc = 0x7F03F9E8u;
    // 7F03F9E8: bl      0x7F01D46C
    {
            ctx->lr = 0x7F03F9ECu;
            ctx->pc = 0x7F01D46Cu;
            return;
    }

label_7F03F9EC:
    ctx->pc = 0x7F03F9ECu;
    ctx->downcount -= 2;
    // 7F03F9EC: addi    r3, r31, 3540
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3540);

label_7F03F9F0:
    ctx->pc = 0x7F03F9F0u;
    // 7F03F9F0: bl      0x7F01D474
    {
            ctx->lr = 0x7F03F9F4u;
            ctx->pc = 0x7F01D474u;
            return;
    }

label_7F03F9F4:
    ctx->pc = 0x7F03F9F4u;
    ctx->downcount -= 9;
    // 7F03F9F4: lwz     r0, 3552(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3552);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03F9F8:
    ctx->pc = 0x7F03F9F8u;
    // 7F03F9F8: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F03F9FC:
    ctx->pc = 0x7F03F9FCu;
    // 7F03F9FC: stw     r0, 3552(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3552);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03FA00:
    ctx->pc = 0x7F03FA00u;
    // 7F03FA00: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F03FA04:
    ctx->pc = 0x7F03FA04u;
    // 7F03FA04: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03FA08:
    ctx->pc = 0x7F03FA08u;
    // 7F03FA08: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03FA0C:
    ctx->pc = 0x7F03FA0Cu;
    // 7F03FA0C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03FA10:
    ctx->pc = 0x7F03FA10u;
    // 7F03FA10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03FA14:
    ctx->pc = 0x7F03FA14u;
    ctx->downcount -= 12;
    // 7F03FA14: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03FA18:
    ctx->pc = 0x7F03FA18u;
    // 7F03FA18: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03FA1C:
    ctx->pc = 0x7F03FA1Cu;
    // 7F03FA1C: lis     r4, 148
    ctx->gpr[4] = ((u32)(s32)(148) << 16);

label_7F03FA20:
    ctx->pc = 0x7F03FA20u;
    // 7F03FA20: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03FA24:
    ctx->pc = 0x7F03FA24u;
    // 7F03FA24: addi    r6, r4, -29624
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-29624);

label_7F03FA28:
    ctx->pc = 0x7F03FA28u;
    // 7F03FA28: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F03FA2C:
    ctx->pc = 0x7F03FA2Cu;
    // 7F03FA2C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03FA30:
    ctx->pc = 0x7F03FA30u;
    // 7F03FA30: addi    r5, r31, 3980
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(3980);

label_7F03FA34:
    ctx->pc = 0x7F03FA34u;
    // 7F03FA34: lwz     r7, 464(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(464);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F03FA38:
    ctx->pc = 0x7F03FA38u;
    // 7F03FA38: addi    r3, r31, 464
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(464);

label_7F03FA3C:
    ctx->pc = 0x7F03FA3Cu;
    // 7F03FA3C: addi    r4, r7, 2388
    ctx->gpr[4] = ctx->gpr[7] + (u32)(s32)(2388);

label_7F03FA40:
    ctx->pc = 0x7F03FA40u;
    // 7F03FA40: bl      0x7F039EEC
    {
            ctx->lr = 0x7F03FA44u;
            ctx->pc = 0x7F039EECu;
            return;
    }

label_7F03FA44:
    ctx->pc = 0x7F03FA44u;
    ctx->downcount -= 3;
    // 7F03FA44: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03FA48:
    ctx->pc = 0x7F03FA48u;
    // 7F03FA48: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03FA4C:
    ctx->pc = 0x7F03FA4Cu;
    // 7F03FA4C: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F03FA50u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F03FA50:
    ctx->pc = 0x7F03FA50u;
    ctx->downcount -= 6;
    // 7F03FA50: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03FA54:
    ctx->pc = 0x7F03FA54u;
    // 7F03FA54: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F03FA58:
    ctx->pc = 0x7F03FA58u;
    // 7F03FA58: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03FA5C:
    ctx->pc = 0x7F03FA5Cu;
    // 7F03FA5C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03FA60:
    ctx->pc = 0x7F03FA60u;
    // 7F03FA60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03FA64:
    ctx->pc = 0x7F03FA64u;
    ctx->downcount -= 18;
    // 7F03FA64: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03FA68:
    ctx->pc = 0x7F03FA68u;
    // 7F03FA68: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03FA6C:
    ctx->pc = 0x7F03FA6Cu;
    // 7F03FA6C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03FA70:
    ctx->pc = 0x7F03FA70u;
    // 7F03FA70: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F03FA74:
    ctx->pc = 0x7F03FA74u;
    // 7F03FA74: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F03FA78:
    ctx->pc = 0x7F03FA78u;
    // 7F03FA78: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F03FA7C:
    ctx->pc = 0x7F03FA7Cu;
    // 7F03FA7C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03FA80:
    ctx->pc = 0x7F03FA80u;
    // 7F03FA80: bl      0x7F0150C0
    {
            ctx->lr = 0x7F03FA84u;
            ctx->pc = 0x7F0150C0u;
            return;
    }

label_7F03FA84:
    ctx->pc = 0x7F03FA84u;
    ctx->downcount -= 11;
    // 7F03FA84: lwz     r5, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F03FA88:
    ctx->pc = 0x7F03FA88u;
    // 7F03FA88: li      r0, -129
    ctx->gpr[0] = (u32)(s32)(-129);

label_7F03FA8C:
    ctx->pc = 0x7F03FA8Cu;
    // 7F03FA8C: lwz     r4, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03FA90:
    ctx->pc = 0x7F03FA90u;
    // 7F03FA90: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F03FA94:
    ctx->pc = 0x7F03FA94u;
    // 7F03FA94: and   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] & ctx->gpr[0];
    }

label_7F03FA98:
    ctx->pc = 0x7F03FA98u;
    // 7F03FA98: stw     r0, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03FA9C:
    ctx->pc = 0x7F03FA9Cu;
    // 7F03FA9C: and   r0, r4, r3
    {
        ctx->gpr[0] = ctx->gpr[4] & ctx->gpr[3];
    }

label_7F03FAA0:
    ctx->pc = 0x7F03FAA0u;
    // 7F03FAA0: stw     r0, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03FAA4:
    ctx->pc = 0x7F03FAA4u;
    // 7F03FAA4: lwz     r0, 4144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4144);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03FAA8:
    ctx->pc = 0x7F03FAA8u;
    // 7F03FAA8: cmpwi   r0, 0
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

label_7F03FAAC:
    ctx->pc = 0x7F03FAACu;
    // 7F03FAAC: bc    4, 2, 0x7F03FAE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F03FAE8;
        }
    }

label_7F03FAB0:
    ctx->pc = 0x7F03FAB0u;
    ctx->downcount -= 7;
    // 7F03FAB0: li      r3, 350
    ctx->gpr[3] = (u32)(s32)(350);

label_7F03FAB4:
    ctx->pc = 0x7F03FAB4u;
    // 7F03FAB4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F03FAB8:
    ctx->pc = 0x7F03FAB8u;
    // 7F03FAB8: stw     r3, 4144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4144);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F03FABC:
    ctx->pc = 0x7F03FABCu;
    // 7F03FABC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03FAC0:
    ctx->pc = 0x7F03FAC0u;
    // 7F03FAC0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F03FAC4:
    ctx->pc = 0x7F03FAC4u;
    // 7F03FAC4: stw     r0, 3848(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3848);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03FAC8:
    ctx->pc = 0x7F03FAC8u;
    // 7F03FAC8: bl      0x7F03CF28
    {
            ctx->lr = 0x7F03FACCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03CF28u;
                return;
            }
            goto label_7F03CF28;
    }

label_7F03FACC:
    ctx->pc = 0x7F03FACCu;
    ctx->downcount -= 7;
    // 7F03FACC: lwz     r5, 820(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(820);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F03FAD0:
    ctx->pc = 0x7F03FAD0u;
    // 7F03FAD0: li      r0, -22
    ctx->gpr[0] = (u32)(s32)(-22);

label_7F03FAD4:
    ctx->pc = 0x7F03FAD4u;
    // 7F03FAD4: li      r3, 1561
    ctx->gpr[3] = (u32)(s32)(1561);

label_7F03FAD8:
    ctx->pc = 0x7F03FAD8u;
    // 7F03FAD8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F03FADC:
    ctx->pc = 0x7F03FADCu;
    // 7F03FADC: and   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] & ctx->gpr[0];
    }

label_7F03FAE0:
    ctx->pc = 0x7F03FAE0u;
    // 7F03FAE0: stw     r0, 820(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(820);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03FAE4:
    ctx->pc = 0x7F03FAE4u;
    // 7F03FAE4: bl      0x7F040868
    {
            ctx->lr = 0x7F03FAE8u;
            ctx->pc = 0x7F040868u;
            return;
    }

label_7F03FAE8:
    ctx->pc = 0x7F03FAE8u;
    ctx->downcount -= 16;
    // 7F03FAE8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F03FAEC:
    ctx->pc = 0x7F03FAECu;
    // 7F03FAEC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03FAF0:
    ctx->pc = 0x7F03FAF0u;
    // 7F03FAF0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03FAF4:
    ctx->pc = 0x7F03FAF4u;
    // 7F03FAF4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03FAF8:
    ctx->pc = 0x7F03FAF8u;
    // 7F03FAF8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03FAFC:
    ctx->pc = 0x7F03FAFCu;
    ctx->downcount -= 26;
    // 7F03FAFC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03FB00:
    ctx->pc = 0x7F03FB00u;
    // 7F03FB00: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03FB04:
    ctx->pc = 0x7F03FB04u;
    // 7F03FB04: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F03FB08:
    ctx->pc = 0x7F03FB08u;
    // 7F03FB08: lis     r5, 256
    ctx->gpr[5] = ((u32)(s32)(256) << 16);

label_7F03FB0C:
    ctx->pc = 0x7F03FB0Cu;
    // 7F03FB0C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03FB10:
    ctx->pc = 0x7F03FB10u;
    // 7F03FB10: addi    r7, r4, 3068
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(3068);

label_7F03FB14:
    ctx->pc = 0x7F03FB14u;
    // 7F03FB14: addi    r4, r5, 128
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(128);

label_7F03FB18:
    ctx->pc = 0x7F03FB18u;
    // 7F03FB18: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03FB1C:
    ctx->pc = 0x7F03FB1Cu;
    // 7F03FB1C: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F03FB20:
    ctx->pc = 0x7F03FB20u;
    // 7F03FB20: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03FB24:
    ctx->pc = 0x7F03FB24u;
    // 7F03FB24: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F03FB28:
    ctx->pc = 0x7F03FB28u;
    // 7F03FB28: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F03FB2C:
    ctx->pc = 0x7F03FB2Cu;
    // 7F03FB2C: addi    r31, r30, 3312
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(3312);

label_7F03FB30:
    ctx->pc = 0x7F03FB30u;
    // 7F03FB30: addi    r8, r3, 12832
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F03FB34:
    ctx->pc = 0x7F03FB34u;
    // 7F03FB34: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03FB38:
    ctx->pc = 0x7F03FB38u;
    // 7F03FB38: bl      0x7F014788
    {
            ctx->lr = 0x7F03FB3Cu;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F03FB3C:
    ctx->pc = 0x7F03FB3Cu;
    ctx->downcount -= 4;
    // 7F03FB3C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03FB40:
    ctx->pc = 0x7F03FB40u;
    // 7F03FB40: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F03FB44:
    ctx->pc = 0x7F03FB44u;
    // 7F03FB44: li      r5, 4160
    ctx->gpr[5] = (u32)(s32)(4160);

label_7F03FB48:
    ctx->pc = 0x7F03FB48u;
    // 7F03FB48: bl      0x7F014B60
    {
            ctx->lr = 0x7F03FB4Cu;
            ctx->pc = 0x7F014B60u;
            return;
    }

label_7F03FB4C:
    ctx->pc = 0x7F03FB4Cu;
    ctx->downcount -= 7;
    // 7F03FB4C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F03FB50:
    ctx->pc = 0x7F03FB50u;
    // 7F03FB50: lwz     r6, 464(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(464);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F03FB54:
    ctx->pc = 0x7F03FB54u;
    // 7F03FB54: addi    r4, r3, 18312
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18312);

label_7F03FB58:
    ctx->pc = 0x7F03FB58u;
    // 7F03FB58: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03FB5C:
    ctx->pc = 0x7F03FB5Cu;
    // 7F03FB5C: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F03FB60:
    ctx->pc = 0x7F03FB60u;
    // 7F03FB60: addi    r4, r6, 1092
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(1092);

label_7F03FB64:
    ctx->pc = 0x7F03FB64u;
    // 7F03FB64: bl      0x7F0149BC
    {
            ctx->lr = 0x7F03FB68u;
            ctx->pc = 0x7F0149BCu;
            return;
    }

label_7F03FB68:
    ctx->pc = 0x7F03FB68u;
    ctx->downcount -= 3;
    // 7F03FB68: addi    r3, r30, 64
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(64);

label_7F03FB6C:
    ctx->pc = 0x7F03FB6Cu;
    // 7F03FB6C: addi    r4, r30, 96
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(96);

label_7F03FB70:
    ctx->pc = 0x7F03FB70u;
    // 7F03FB70: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F03FB74u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F03FB74:
    ctx->pc = 0x7F03FB74u;
    ctx->downcount -= 5;
    // 7F03FB74: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F03FB78:
    ctx->pc = 0x7F03FB78u;
    // 7F03FB78: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F03FB7C:
    ctx->pc = 0x7F03FB7Cu;
    // 7F03FB7C: addi    r3, r3, 3084
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3084);

label_7F03FB80:
    ctx->pc = 0x7F03FB80u;
    // 7F03FB80: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F03FB84:
    ctx->pc = 0x7F03FB84u;
    // 7F03FB84: bl      0x7F3B3648
    {
            ctx->lr = 0x7F03FB88u;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F03FB88:
    ctx->pc = 0x7F03FB88u;
    ctx->downcount -= 8;
    // 7F03FB88: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03FB8C:
    ctx->pc = 0x7F03FB8Cu;
    // 7F03FB8C: addi    r4, r30, 3504
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(3504);

label_7F03FB90:
    ctx->pc = 0x7F03FB90u;
    // 7F03FB90: addi    r9, r1, 8
    ctx->gpr[9] = ctx->gpr[1] + (u32)(s32)(8);

label_7F03FB94:
    ctx->pc = 0x7F03FB94u;
    // 7F03FB94: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03FB98:
    ctx->pc = 0x7F03FB98u;
    // 7F03FB98: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F03FB9C:
    ctx->pc = 0x7F03FB9Cu;
    // 7F03FB9C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F03FBA0:
    ctx->pc = 0x7F03FBA0u;
    // 7F03FBA0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F03FBA4:
    ctx->pc = 0x7F03FBA4u;
    // 7F03FBA4: bl      0x7F014B78
    {
            ctx->lr = 0x7F03FBA8u;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F03FBA8:
    ctx->pc = 0x7F03FBA8u;
    ctx->downcount -= 5;
    // 7F03FBA8: lis     r4, 32516
    ctx->gpr[4] = ((u32)(s32)(32516) << 16);

label_7F03FBAC:
    ctx->pc = 0x7F03FBACu;
    // 7F03FBAC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03FBB0:
    ctx->pc = 0x7F03FBB0u;
    // 7F03FBB0: addi    r4, r4, -1436
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1436);

label_7F03FBB4:
    ctx->pc = 0x7F03FBB4u;
    // 7F03FBB4: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03FBB8:
    ctx->pc = 0x7F03FBB8u;
    // 7F03FBB8: bl      0x7F014B6C
    {
            ctx->lr = 0x7F03FBBCu;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F03FBBC:
    ctx->pc = 0x7F03FBBCu;
    ctx->downcount -= 17;
    // 7F03FBBC: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F03FBC0:
    ctx->pc = 0x7F03FBC0u;
    // 7F03FBC0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F03FBC4:
    ctx->pc = 0x7F03FBC4u;
    // 7F03FBC4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03FBC8:
    ctx->pc = 0x7F03FBC8u;
    // 7F03FBC8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03FBCC:
    ctx->pc = 0x7F03FBCCu;
    // 7F03FBCC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F03FBD0:
    ctx->pc = 0x7F03FBD0u;
    // 7F03FBD0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03FBD4:
    ctx->pc = 0x7F03FBD4u;
    ctx->downcount -= 22;
    // 7F03FBD4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03FBD8:
    ctx->pc = 0x7F03FBD8u;
    // 7F03FBD8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03FBDC:
    ctx->pc = 0x7F03FBDCu;
    // 7F03FBDC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03FBE0:
    ctx->pc = 0x7F03FBE0u;
    // 7F03FBE0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F03FBE4:
    ctx->pc = 0x7F03FBE4u;
    // 7F03FBE4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03FBE8:
    ctx->pc = 0x7F03FBE8u;
    // 7F03FBE8: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F03FBEC:
    ctx->pc = 0x7F03FBECu;
    // 7F03FBEC: addi    r31, r30, 3312
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(3312);

label_7F03FBF0:
    ctx->pc = 0x7F03FBF0u;
    // 7F03FBF0: lwz     r4, 464(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(464);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03FBF4:
    ctx->pc = 0x7F03FBF4u;
    // 7F03FBF4: lwz     r5, 18312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18312);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F03FBF8:
    ctx->pc = 0x7F03FBF8u;
    // 7F03FBF8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03FBFC:
    ctx->pc = 0x7F03FBFCu;
    // 7F03FBFC: addi    r4, r4, 1092
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1092);

label_7F03FC00:
    ctx->pc = 0x7F03FC00u;
    // 7F03FC00: bl      0x7F0149BC
    {
            ctx->lr = 0x7F03FC04u;
            ctx->pc = 0x7F0149BCu;
            return;
    }

label_7F03FC04:
    ctx->pc = 0x7F03FC04u;
    ctx->downcount -= 3;
    // 7F03FC04: addi    r3, r30, 64
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(64);

label_7F03FC08:
    ctx->pc = 0x7F03FC08u;
    // 7F03FC08: addi    r4, r30, 96
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(96);

label_7F03FC0C:
    ctx->pc = 0x7F03FC0Cu;
    // 7F03FC0C: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F03FC10u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F03FC10:
    ctx->pc = 0x7F03FC10u;
    ctx->downcount -= 2;
    // 7F03FC10: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03FC14:
    ctx->pc = 0x7F03FC14u;
    // 7F03FC14: bl      0x7F0148A0
    {
            ctx->lr = 0x7F03FC18u;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F03FC18:
    ctx->pc = 0x7F03FC18u;
    ctx->downcount -= 17;
    // 7F03FC18: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F03FC1C:
    ctx->pc = 0x7F03FC1Cu;
    // 7F03FC1C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F03FC20:
    ctx->pc = 0x7F03FC20u;
    // 7F03FC20: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03FC24:
    ctx->pc = 0x7F03FC24u;
    // 7F03FC24: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03FC28:
    ctx->pc = 0x7F03FC28u;
    // 7F03FC28: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03FC2C:
    ctx->pc = 0x7F03FC2Cu;
    // 7F03FC2C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03FC30:
    ctx->pc = 0x7F03FC30u;
    ctx->downcount -= 29;
    // 7F03FC30: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03FC34:
    ctx->pc = 0x7F03FC34u;
    // 7F03FC34: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03FC38:
    ctx->pc = 0x7F03FC38u;
    // 7F03FC38: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F03FC3C:
    ctx->pc = 0x7F03FC3Cu;
    // 7F03FC3C: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F03FC40:
    ctx->pc = 0x7F03FC40u;
    // 7F03FC40: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03FC44:
    ctx->pc = 0x7F03FC44u;
    // 7F03FC44: addi    r0, r6, 3100
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(3100);

label_7F03FC48:
    ctx->pc = 0x7F03FC48u;
    // 7F03FC48: addi    r7, r4, 3452
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(3452);

label_7F03FC4C:
    ctx->pc = 0x7F03FC4Cu;
    // 7F03FC4C: lis     r4, 517
    ctx->gpr[4] = ((u32)(s32)(517) << 16);

label_7F03FC50:
    ctx->pc = 0x7F03FC50u;
    // 7F03FC50: stmw     r23, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F03FC54:
    ctx->pc = 0x7F03FC54u;
    // 7F03FC54: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03FC58:
    ctx->pc = 0x7F03FC58u;
    // 7F03FC58: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F03FC5C:
    ctx->pc = 0x7F03FC5Cu;
    // 7F03FC5C: or   r28, r0, r0
    {
        ctx->gpr[28] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F03FC60:
    ctx->pc = 0x7F03FC60u;
    // 7F03FC60: addi    r23, r26, 816
    ctx->gpr[23] = ctx->gpr[26] + (u32)(s32)(816);

label_7F03FC64:
    ctx->pc = 0x7F03FC64u;
    // 7F03FC64: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F03FC68:
    ctx->pc = 0x7F03FC68u;
    // 7F03FC68: addi    r8, r3, 3468
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(3468);

label_7F03FC6C:
    ctx->pc = 0x7F03FC6Cu;
    // 7F03FC6C: addi    r4, r4, 21
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21);

label_7F03FC70:
    ctx->pc = 0x7F03FC70u;
    // 7F03FC70: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F03FC74:
    ctx->pc = 0x7F03FC74u;
    // 7F03FC74: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F03FC78:
    ctx->pc = 0x7F03FC78u;
    // 7F03FC78: bl      0x7F014788
    {
            ctx->lr = 0x7F03FC7Cu;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F03FC7C:
    ctx->pc = 0x7F03FC7Cu;
    ctx->downcount -= 10;
    // 7F03FC7C: lwz     r0, 4092(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4092);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03FC80:
    ctx->pc = 0x7F03FC80u;
    // 7F03FC80: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F03FC84:
    ctx->pc = 0x7F03FC84u;
    // 7F03FC84: addi    r9, r3, 12832
    ctx->gpr[9] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F03FC88:
    ctx->pc = 0x7F03FC88u;
    // 7F03FC88: addi    r4, r26, 3264
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(3264);

label_7F03FC8C:
    ctx->pc = 0x7F03FC8Cu;
    // 7F03FC8C: rlwinm r6, r0, 0, 16, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F03FC90:
    ctx->pc = 0x7F03FC90u;
    // 7F03FC90: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F03FC94:
    ctx->pc = 0x7F03FC94u;
    // 7F03FC94: or   r7, r6, r6
    {
        ctx->gpr[7] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F03FC98:
    ctx->pc = 0x7F03FC98u;
    // 7F03FC98: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F03FC9C:
    ctx->pc = 0x7F03FC9Cu;
    // 7F03FC9C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F03FCA0:
    ctx->pc = 0x7F03FCA0u;
    // 7F03FCA0: bl      0x7F014B78
    {
            ctx->lr = 0x7F03FCA4u;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F03FCA4:
    ctx->pc = 0x7F03FCA4u;
    ctx->downcount -= 5;
    // 7F03FCA4: lis     r4, 32516
    ctx->gpr[4] = ((u32)(s32)(32516) << 16);

label_7F03FCA8:
    ctx->pc = 0x7F03FCA8u;
    // 7F03FCA8: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F03FCAC:
    ctx->pc = 0x7F03FCACu;
    // 7F03FCAC: addi    r4, r4, 784
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(784);

label_7F03FCB0:
    ctx->pc = 0x7F03FCB0u;
    // 7F03FCB0: addi    r5, r26, 3240
    ctx->gpr[5] = ctx->gpr[26] + (u32)(s32)(3240);

label_7F03FCB4:
    ctx->pc = 0x7F03FCB4u;
    // 7F03FCB4: bl      0x7F014B6C
    {
            ctx->lr = 0x7F03FCB8u;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F03FCB8:
    ctx->pc = 0x7F03FCB8u;
    ctx->downcount -= 2;
    // 7F03FCB8: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F03FCBC:
    ctx->pc = 0x7F03FCBCu;
    // 7F03FCBC: bl      0x7F0148A0
    {
            ctx->lr = 0x7F03FCC0u;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F03FCC0:
    ctx->pc = 0x7F03FCC0u;
    ctx->downcount -= 7;
    // 7F03FCC0: addi    r29, r26, 1008
    ctx->gpr[29] = ctx->gpr[26] + (u32)(s32)(1008);

label_7F03FCC4:
    ctx->pc = 0x7F03FCC4u;
    // 7F03FCC4: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F03FCC8:
    ctx->pc = 0x7F03FCC8u;
    // 7F03FCC8: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F03FCCC:
    ctx->pc = 0x7F03FCCCu;
    // 7F03FCCC: addi    r30, r26, 3120
    ctx->gpr[30] = ctx->gpr[26] + (u32)(s32)(3120);

label_7F03FCD0:
    ctx->pc = 0x7F03FCD0u;
    // 7F03FCD0: li      r5, 11
    ctx->gpr[5] = (u32)(s32)(11);

label_7F03FCD4:
    ctx->pc = 0x7F03FCD4u;
    // 7F03FCD4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F03FCD8:
    ctx->pc = 0x7F03FCD8u;
    // 7F03FCD8: bl      0x7F014A50
    {
            ctx->lr = 0x7F03FCDCu;
            ctx->pc = 0x7F014A50u;
            return;
    }

label_7F03FCDC:
    ctx->pc = 0x7F03FCDCu;
    ctx->downcount -= 6;
    // 7F03FCDC: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F03FCE0:
    ctx->pc = 0x7F03FCE0u;
    // 7F03FCE0: lis     r3, 32516
    ctx->gpr[3] = ((u32)(s32)(32516) << 16);

label_7F03FCE4:
    ctx->pc = 0x7F03FCE4u;
    // 7F03FCE4: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F03FCE8:
    ctx->pc = 0x7F03FCE8u;
    // 7F03FCE8: lis     r23, 513
    ctx->gpr[23] = ((u32)(s32)(513) << 16);

label_7F03FCEC:
    ctx->pc = 0x7F03FCECu;
    // 7F03FCEC: addi    r24, r4, 12832
    ctx->gpr[24] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F03FCF0:
    ctx->pc = 0x7F03FCF0u;
    // 7F03FCF0: addi    r25, r3, 1260
    ctx->gpr[25] = ctx->gpr[3] + (u32)(s32)(1260);

label_7F03FCF4:
    ctx->pc = 0x7F03FCF4u;
    ctx->downcount -= 24;
    // 7F03FCF4: lfs     f0, 12(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F03FCF4u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F03FCF8:
    // 7F03FCF8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F03FCFC:
    ctx->pc = 0x7F03FCFCu;
    // 7F03FCFC: lwz     r10, 464(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(464);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F03FD00:
    // 7F03FD00: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03FD04:
    ctx->pc = 0x7F03FD04u;
    // 7F03FD04: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F03FD04u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F03FD08:
    // 7F03FD08: or   r7, r28, r28
    {
        ctx->gpr[7] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F03FD0C:
    // 7F03FD0C: addi    r4, r23, 16401
    ctx->gpr[4] = ctx->gpr[23] + (u32)(s32)(16401);

label_7F03FD10:
    // 7F03FD10: addi    r8, r28, 16
    ctx->gpr[8] = ctx->gpr[28] + (u32)(s32)(16);

label_7F03FD14:
    // 7F03FD14: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F03FD18:
    ctx->pc = 0x7F03FD18u;
    // 7F03FD18: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F03FD18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F03FD1C:
    ctx->pc = 0x7F03FD1Cu;
    // 7F03FD1C: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03FD20:
    // 7F03FD20: mulli   r9, r0, 324
    ctx->gpr[9] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)324);

label_7F03FD24:
    // 7F03FD24: addi    r0, r9, 444
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(444);

label_7F03FD28:
    // 7F03FD28: add   r0, r10, r0
    {
        u32 a = ctx->gpr[10];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F03FD2C:
    ctx->pc = 0x7F03FD2Cu;
    // 7F03FD2C: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03FD30:
    ctx->pc = 0x7F03FD30u;
    // 7F03FD30: stw     r26, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F03FD34:
    ctx->pc = 0x7F03FD34u;
    // 7F03FD34: lfs     f0, 12(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F03FD34u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F03FD38:
    ctx->pc = 0x7F03FD38u;
    // 7F03FD38: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F03FD38u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F03FD3C:
    ctx->pc = 0x7F03FD3Cu;
    // 7F03FD3C: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F03FD3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F03FD40:
    ctx->pc = 0x7F03FD40u;
    // 7F03FD40: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03FD44:
    ctx->pc = 0x7F03FD44u;
    // 7F03FD44: stw     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03FD48:
    // 7F03FD48: bl      0x7F014788
    {
            ctx->lr = 0x7F03FD4Cu;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F03FD4C:
    ctx->downcount -= 4;
    // 7F03FD4C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F03FD50:
    // 7F03FD50: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F03FD54:
    // 7F03FD54: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F03FD58:
    // 7F03FD58: bl      0x7F014B60
    {
            ctx->lr = 0x7F03FD5Cu;
            ctx->pc = 0x7F014B60u;
            return;
    }

label_7F03FD5C:
    ctx->pc = 0x7F03FD5Cu;
    ctx->downcount -= 9;
    // 7F03FD5C: lwz     r0, 4092(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4092);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03FD60:
    // 7F03FD60: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F03FD64:
    // 7F03FD64: or   r9, r24, r24
    {
        ctx->gpr[9] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F03FD68:
    // 7F03FD68: addi    r4, r26, 3264
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(3264);

label_7F03FD6C:
    // 7F03FD6C: rlwinm r6, r0, 0, 16, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F03FD70:
    // 7F03FD70: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F03FD74:
    // 7F03FD74: or   r7, r6, r6
    {
        ctx->gpr[7] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F03FD78:
    // 7F03FD78: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F03FD7C:
    // 7F03FD7C: bl      0x7F014B78
    {
            ctx->lr = 0x7F03FD80u;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F03FD80:
    ctx->downcount -= 4;
    // 7F03FD80: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F03FD84:
    // 7F03FD84: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F03FD88:
    // 7F03FD88: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03FD8C:
    // 7F03FD8C: bl      0x7F014B6C
    {
            ctx->lr = 0x7F03FD90u;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F03FD90:
    ctx->downcount -= 6;
    // 7F03FD90: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F03FD94:
    // 7F03FD94: addi    r28, r28, 32
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(32);

label_7F03FD98:
    // 7F03FD98: cmpwi   r27, 11
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(11);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F03FD9C:
    // 7F03FD9C: addi    r30, r30, 12
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(12);

label_7F03FDA0:
    // 7F03FDA0: addi    r29, r29, 192
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(192);

label_7F03FDA4:
    // 7F03FDA4: bc    12, 0, 0x7F03FCF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03FCF4u;
                return;
            }
            goto label_7F03FCF4;
        }
    }

label_7F03FDA8:
    ctx->pc = 0x7F03FDA8u;
    ctx->downcount -= 2;
    // 7F03FDA8: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F03FDAC:
    ctx->pc = 0x7F03FDACu;
    // 7F03FDAC: bl      0x7F03FAFC
    {
            ctx->lr = 0x7F03FDB0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03FAFCu;
                return;
            }
            goto label_7F03FAFC;
    }

label_7F03FDB0:
    ctx->pc = 0x7F03FDB0u;
    ctx->downcount -= 17;
    // 7F03FDB0: lmw     r23, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F03FDB4:
    ctx->pc = 0x7F03FDB4u;
    // 7F03FDB4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F03FDB8:
    ctx->pc = 0x7F03FDB8u;
    // 7F03FDB8: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03FDBC:
    ctx->pc = 0x7F03FDBCu;
    // 7F03FDBC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03FDC0:
    ctx->pc = 0x7F03FDC0u;
    // 7F03FDC0: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F03FDC4:
    ctx->pc = 0x7F03FDC4u;
    // 7F03FDC4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03FDC8:
    ctx->pc = 0x7F03FDC8u;
    ctx->downcount -= 11;
    // 7F03FDC8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03FDCC:
    ctx->pc = 0x7F03FDCCu;
    // 7F03FDCC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03FDD0:
    ctx->pc = 0x7F03FDD0u;
    // 7F03FDD0: or   r6, r5, r5
    {
        ctx->gpr[6] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F03FDD4:
    ctx->pc = 0x7F03FDD4u;
    // 7F03FDD4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F03FDD8:
    ctx->pc = 0x7F03FDD8u;
    // 7F03FDD8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03FDDC:
    ctx->pc = 0x7F03FDDCu;
    // 7F03FDDC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F03FDE0:
    ctx->pc = 0x7F03FDE0u;
    // 7F03FDE0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03FDE4:
    ctx->pc = 0x7F03FDE4u;
    // 7F03FDE4: addi    r3, r4, 16
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(16);

label_7F03FDE8:
    ctx->pc = 0x7F03FDE8u;
    // 7F03FDE8: lwz     r5, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F03FDEC:
    ctx->pc = 0x7F03FDECu;
    // 7F03FDEC: addi    r4, r4, 128
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(128);

label_7F03FDF0:
    ctx->pc = 0x7F03FDF0u;
    // 7F03FDF0: bl      0x7F1E50F0
    {
            ctx->lr = 0x7F03FDF4u;
            ctx->pc = 0x7F1E50F0u;
            return;
    }

label_7F03FDF4:
    ctx->pc = 0x7F03FDF4u;
    ctx->downcount -= 3;
    // 7F03FDF4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03FDF8:
    ctx->pc = 0x7F03FDF8u;
    // 7F03FDF8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03FDFC:
    ctx->pc = 0x7F03FDFCu;
    // 7F03FDFC: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F03FE00u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F03FE00:
    ctx->pc = 0x7F03FE00u;
    ctx->downcount -= 6;
    // 7F03FE00: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03FE04:
    ctx->pc = 0x7F03FE04u;
    // 7F03FE04: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F03FE08:
    ctx->pc = 0x7F03FE08u;
    // 7F03FE08: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03FE0C:
    ctx->pc = 0x7F03FE0Cu;
    // 7F03FE0C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03FE10:
    ctx->pc = 0x7F03FE10u;
    // 7F03FE10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03FE14:
    ctx->pc = 0x7F03FE14u;
    ctx->downcount -= 22;
    // 7F03FE14: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03FE18:
    ctx->pc = 0x7F03FE18u;
    // 7F03FE18: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03FE1C:
    ctx->pc = 0x7F03FE1Cu;
    // 7F03FE1C: or   r7, r5, r5
    {
        ctx->gpr[7] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F03FE20:
    ctx->pc = 0x7F03FE20u;
    // 7F03FE20: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03FE24:
    ctx->pc = 0x7F03FE24u;
    // 7F03FE24: stmw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F03FE28:
    ctx->pc = 0x7F03FE28u;
    // 7F03FE28: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F03FE2C:
    ctx->pc = 0x7F03FE2Cu;
    // 7F03FE2C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03FE30:
    ctx->pc = 0x7F03FE30u;
    // 7F03FE30: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03FE34:
    ctx->pc = 0x7F03FE34u;
    // 7F03FE34: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03FE38:
    ctx->pc = 0x7F03FE38u;
    // 7F03FE38: lwz     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F03FE3C:
    ctx->pc = 0x7F03FE3Cu;
    // 7F03FE3C: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F03FE40:
    ctx->pc = 0x7F03FE40u;
    // 7F03FE40: bl      0x7F30375C
    {
            ctx->lr = 0x7F03FE44u;
            ctx->pc = 0x7F30375Cu;
            return;
    }

label_7F03FE44:
    ctx->pc = 0x7F03FE44u;
    ctx->downcount -= 3;
    // 7F03FE44: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F03FE48:
    ctx->pc = 0x7F03FE48u;
    // 7F03FE48: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F03FE4C:
    ctx->pc = 0x7F03FE4Cu;
    // 7F03FE4C: bl      0x7F174234
    {
            ctx->lr = 0x7F03FE50u;
            ctx->pc = 0x7F174234u;
            return;
    }

label_7F03FE50:
    ctx->pc = 0x7F03FE50u;
    ctx->downcount -= 13;
    // 7F03FE50: lha     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03FE54:
    ctx->pc = 0x7F03FE54u;
    // 7F03FE54: lis     r3, 38
    ctx->gpr[3] = ((u32)(s32)(38) << 16);

label_7F03FE58:
    ctx->pc = 0x7F03FE58u;
    // 7F03FE58: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F03FE5C:
    ctx->pc = 0x7F03FE5Cu;
    // 7F03FE5C: or   r7, r31, r31
    {
        ctx->gpr[7] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F03FE60:
    ctx->pc = 0x7F03FE60u;
    // 7F03FE60: addi    r0, r4, -1024
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1024);

label_7F03FE64:
    ctx->pc = 0x7F03FE64u;
    // 7F03FE64: addi    r3, r3, 22620
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22620);

label_7F03FE68:
    ctx->pc = 0x7F03FE68u;
    // 7F03FE68: sth     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F03FE6C:
    ctx->pc = 0x7F03FE6Cu;
    // 7F03FE6C: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F03FE70:
    ctx->pc = 0x7F03FE70u;
    // 7F03FE70: addi    r8, r1, 32
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(32);

label_7F03FE74:
    ctx->pc = 0x7F03FE74u;
    // 7F03FE74: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F03FE78:
    ctx->pc = 0x7F03FE78u;
    // 7F03FE78: li      r9, 512
    ctx->gpr[9] = (u32)(s32)(512);

label_7F03FE7C:
    ctx->pc = 0x7F03FE7Cu;
    // 7F03FE7C: li      r10, 4
    ctx->gpr[10] = (u32)(s32)(4);

label_7F03FE80:
    ctx->pc = 0x7F03FE80u;
    // 7F03FE80: bl      0x7F2F7610
    {
            ctx->lr = 0x7F03FE84u;
            ctx->pc = 0x7F2F7610u;
            return;
    }

label_7F03FE84:
    ctx->pc = 0x7F03FE84u;
    ctx->downcount -= 16;
    // 7F03FE84: lmw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F03FE88:
    ctx->pc = 0x7F03FE88u;
    // 7F03FE88: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03FE8C:
    ctx->pc = 0x7F03FE8Cu;
    // 7F03FE8C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F03FE90:
    ctx->pc = 0x7F03FE90u;
    // 7F03FE90: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F03FE94:
    ctx->pc = 0x7F03FE94u;
    // 7F03FE94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F03C0EC;
        }
    }

label_7F03FE98:
    ctx->pc = 0x7F03FE98u;
    ctx->downcount -= 32;
    // 7F03FE98: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F03FE9C:
    ctx->pc = 0x7F03FE9Cu;
    // 7F03FE9C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F03FEA0:
    ctx->pc = 0x7F03FEA0u;
    // 7F03FEA0: lis     r6, 1032
    ctx->gpr[6] = ((u32)(s32)(1032) << 16);

label_7F03FEA4:
    ctx->pc = 0x7F03FEA4u;
    // 7F03FEA4: lis     r7, 7
    ctx->gpr[7] = ((u32)(s32)(7) << 16);

label_7F03FEA8:
    ctx->pc = 0x7F03FEA8u;
    // 7F03FEA8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03FEAC:
    ctx->pc = 0x7F03FEACu;
    // 7F03FEAC: addi    r8, r6, 803
    ctx->gpr[8] = ctx->gpr[6] + (u32)(s32)(803);

label_7F03FEB0:
    ctx->pc = 0x7F03FEB0u;
    // 7F03FEB0: addi    r7, r7, -29698
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-29698);

label_7F03FEB4:
    ctx->pc = 0x7F03FEB4u;
    // 7F03FEB4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F03FEB8:
    ctx->pc = 0x7F03FEB8u;
    // 7F03FEB8: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F03FEBC:
    ctx->pc = 0x7F03FEBCu;
    // 7F03FEBC: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F03FEC0:
    ctx->pc = 0x7F03FEC0u;
    // 7F03FEC0: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F03FEC4:
    ctx->pc = 0x7F03FEC4u;
    // 7F03FEC4: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F03FEC8:
    ctx->pc = 0x7F03FEC8u;
    // 7F03FEC8: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F03FECC:
    ctx->pc = 0x7F03FECCu;
    // 7F03FECC: lwz     r3, 144(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(144);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03FED0:
    ctx->pc = 0x7F03FED0u;
    // 7F03FED0: lwz     r6, 148(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(148);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F03FED4:
    ctx->pc = 0x7F03FED4u;
    // 7F03FED4: and   r8, r3, r8
    {
        ctx->gpr[8] = ctx->gpr[3] & ctx->gpr[8];
    }

label_7F03FED8:
    ctx->pc = 0x7F03FED8u;
    // 7F03FED8: lwz     r30, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F03FEDC:
    ctx->pc = 0x7F03FEDCu;
    // 7F03FEDC: and   r7, r6, r7
    {
        ctx->gpr[7] = ctx->gpr[6] & ctx->gpr[7];
    }

label_7F03FEE0:
    ctx->pc = 0x7F03FEE0u;
    // 7F03FEE0: xor   r7, r7, r0
    {
        ctx->gpr[7] = ctx->gpr[7] ^ ctx->gpr[0];
    }

label_7F03FEE4:
    ctx->pc = 0x7F03FEE4u;
    // 7F03FEE4: xor   r5, r8, r0
    {
        ctx->gpr[5] = ctx->gpr[8] ^ ctx->gpr[0];
    }

label_7F03FEE8:
    ctx->pc = 0x7F03FEE8u;
    // 7F03FEE8: or.   r5, r7, r5
    {
        ctx->gpr[5] = ctx->gpr[7] | ctx->gpr[5];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F03FEEC:
    ctx->pc = 0x7F03FEECu;
    // 7F03FEEC: bc    12, 2, 0x7F0402F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F0402F8u;
            return;
        }
    }

label_7F03FEF0:
    ctx->pc = 0x7F03FEF0u;
    ctx->downcount -= 7;
    // 7F03FEF0: li      r5, 769
    ctx->gpr[5] = (u32)(s32)(769);

label_7F03FEF4:
    ctx->pc = 0x7F03FEF4u;
    // 7F03FEF4: and   r7, r6, r0
    {
        ctx->gpr[7] = ctx->gpr[6] & ctx->gpr[0];
    }

label_7F03FEF8:
    ctx->pc = 0x7F03FEF8u;
    // 7F03FEF8: and   r5, r3, r5
    {
        ctx->gpr[5] = ctx->gpr[3] & ctx->gpr[5];
    }

label_7F03FEFC:
    ctx->pc = 0x7F03FEFCu;
    // 7F03FEFC: xor   r10, r7, r0
    {
        ctx->gpr[10] = ctx->gpr[7] ^ ctx->gpr[0];
    }

label_7F03FF00:
    ctx->pc = 0x7F03FF00u;
    // 7F03FF00: xor   r5, r5, r0
    {
        ctx->gpr[5] = ctx->gpr[5] ^ ctx->gpr[0];
    }

label_7F03FF04:
    ctx->pc = 0x7F03FF04u;
    // 7F03FF04: or.   r5, r10, r5
    {
        ctx->gpr[5] = ctx->gpr[10] | ctx->gpr[5];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F03FF08:
    ctx->pc = 0x7F03FF08u;
    // 7F03FF08: bc    12, 2, 0x7F03FF20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03FF20;
        }
    }

label_7F03FF0C:
    ctx->pc = 0x7F03FF0Cu;
    ctx->downcount -= 5;
    // 7F03FF0C: lwz     r4, 164(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(164);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03FF10:
    ctx->pc = 0x7F03FF10u;
    // 7F03FF10: lha     r3, 22(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03FF14:
    ctx->pc = 0x7F03FF14u;
    // 7F03FF14: addi    r0, r3, -4
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F03FF18:
    ctx->pc = 0x7F03FF18u;
    // 7F03FF18: sth     r0, 22(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F03FF1C:
    ctx->pc = 0x7F03FF1Cu;
    // 7F03FF1C: b       0x7F0400B0
    {
            goto label_7F0400B0;
    }

label_7F03FF20:
    ctx->pc = 0x7F03FF20u;
    ctx->downcount -= 5;
    // 7F03FF20: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_7F03FF24:
    ctx->pc = 0x7F03FF24u;
    // 7F03FF24: and   r5, r3, r5
    {
        ctx->gpr[5] = ctx->gpr[3] & ctx->gpr[5];
    }

label_7F03FF28:
    ctx->pc = 0x7F03FF28u;
    // 7F03FF28: xor   r5, r5, r0
    {
        ctx->gpr[5] = ctx->gpr[5] ^ ctx->gpr[0];
    }

label_7F03FF2C:
    ctx->pc = 0x7F03FF2Cu;
    // 7F03FF2C: or.   r5, r10, r5
    {
        ctx->gpr[5] = ctx->gpr[10] | ctx->gpr[5];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F03FF30:
    ctx->pc = 0x7F03FF30u;
    // 7F03FF30: bc    12, 2, 0x7F03FF48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03FF48;
        }
    }

label_7F03FF34:
    ctx->pc = 0x7F03FF34u;
    ctx->downcount -= 5;
    // 7F03FF34: lwz     r4, 164(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(164);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03FF38:
    ctx->pc = 0x7F03FF38u;
    // 7F03FF38: lha     r3, 22(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03FF3C:
    ctx->pc = 0x7F03FF3Cu;
    // 7F03FF3C: addi    r0, r3, -4
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F03FF40:
    ctx->pc = 0x7F03FF40u;
    // 7F03FF40: sth     r0, 22(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F03FF44:
    ctx->pc = 0x7F03FF44u;
    // 7F03FF44: b       0x7F0400B0
    {
            goto label_7F0400B0;
    }

label_7F03FF48:
    ctx->pc = 0x7F03FF48u;
    ctx->downcount -= 5;
    // 7F03FF48: li      r9, 2
    ctx->gpr[9] = (u32)(s32)(2);

label_7F03FF4C:
    ctx->pc = 0x7F03FF4Cu;
    // 7F03FF4C: and   r5, r3, r9
    {
        ctx->gpr[5] = ctx->gpr[3] & ctx->gpr[9];
    }

label_7F03FF50:
    ctx->pc = 0x7F03FF50u;
    // 7F03FF50: xor   r5, r5, r0
    {
        ctx->gpr[5] = ctx->gpr[5] ^ ctx->gpr[0];
    }

label_7F03FF54:
    ctx->pc = 0x7F03FF54u;
    // 7F03FF54: or.   r5, r10, r5
    {
        ctx->gpr[5] = ctx->gpr[10] | ctx->gpr[5];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F03FF58:
    ctx->pc = 0x7F03FF58u;
    // 7F03FF58: bc    12, 2, 0x7F03FF70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03FF70;
        }
    }

label_7F03FF5C:
    ctx->pc = 0x7F03FF5Cu;
    ctx->downcount -= 5;
    // 7F03FF5C: lwz     r4, 164(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(164);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03FF60:
    ctx->pc = 0x7F03FF60u;
    // 7F03FF60: lha     r3, 22(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F03FF64:
    ctx->pc = 0x7F03FF64u;
    // 7F03FF64: addi    r0, r3, -4
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F03FF68:
    ctx->pc = 0x7F03FF68u;
    // 7F03FF68: sth     r0, 22(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F03FF6C:
    ctx->pc = 0x7F03FF6Cu;
    // 7F03FF6C: b       0x7F0400B0
    {
            goto label_7F0400B0;
    }

label_7F03FF70:
    ctx->pc = 0x7F03FF70u;
    ctx->downcount -= 7;
    // 7F03FF70: li      r5, 2048
    ctx->gpr[5] = (u32)(s32)(2048);

label_7F03FF74:
    ctx->pc = 0x7F03FF74u;
    // 7F03FF74: and   r8, r3, r0
    {
        ctx->gpr[8] = ctx->gpr[3] & ctx->gpr[0];
    }

label_7F03FF78:
    ctx->pc = 0x7F03FF78u;
    // 7F03FF78: and   r5, r6, r5
    {
        ctx->gpr[5] = ctx->gpr[6] & ctx->gpr[5];
    }

label_7F03FF7C:
    ctx->pc = 0x7F03FF7Cu;
    // 7F03FF7C: xor   r7, r5, r0
    {
        ctx->gpr[7] = ctx->gpr[5] ^ ctx->gpr[0];
    }

label_7F03FF80:
    ctx->pc = 0x7F03FF80u;
    // 7F03FF80: xor   r5, r8, r0
    {
        ctx->gpr[5] = ctx->gpr[8] ^ ctx->gpr[0];
    }

label_7F03FF84:
    ctx->pc = 0x7F03FF84u;
    // 7F03FF84: or.   r5, r7, r5
    {
        ctx->gpr[5] = ctx->gpr[7] | ctx->gpr[5];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F03FF88:
    ctx->pc = 0x7F03FF88u;
    // 7F03FF88: bc    12, 2, 0x7F03FFC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F03FFC8;
        }
    }

label_7F03FF8C:
    ctx->pc = 0x7F03FF8Cu;
    ctx->downcount -= 5;
    // 7F03FF8C: li      r0, 120
    ctx->gpr[0] = (u32)(s32)(120);

label_7F03FF90:
    ctx->pc = 0x7F03FF90u;
    // 7F03FF90: li      r3, 1562
    ctx->gpr[3] = (u32)(s32)(1562);

label_7F03FF94:
    ctx->pc = 0x7F03FF94u;
    // 7F03FF94: stw     r0, 3864(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3864);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03FF98:
    ctx->pc = 0x7F03FF98u;
    // 7F03FF98: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F03FF9C:
    ctx->pc = 0x7F03FF9Cu;
    // 7F03FF9C: bl      0x7F040868
    {
            ctx->lr = 0x7F03FFA0u;
            ctx->pc = 0x7F040868u;
            return;
    }

label_7F03FFA0:
    ctx->pc = 0x7F03FFA0u;
    ctx->downcount -= 10;
    // 7F03FFA0: lwz     r4, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03FFA4:
    ctx->pc = 0x7F03FFA4u;
    // 7F03FFA4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F03FFA8:
    ctx->pc = 0x7F03FFA8u;
    // 7F03FFA8: lwz     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03FFAC:
    ctx->pc = 0x7F03FFACu;
    // 7F03FFAC: stw     r4, 3796(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3796);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F03FFB0:
    ctx->pc = 0x7F03FFB0u;
    // 7F03FFB0: stw     r0, 3800(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3800);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03FFB4:
    ctx->pc = 0x7F03FFB4u;
    // 7F03FFB4: lwz     r4, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F03FFB8:
    ctx->pc = 0x7F03FFB8u;
    // 7F03FFB8: lwz     r0, 76(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F03FFBC:
    ctx->pc = 0x7F03FFBCu;
    // 7F03FFBC: stw     r4, 3804(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3804);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F03FFC0:
    ctx->pc = 0x7F03FFC0u;
    // 7F03FFC0: stw     r0, 3808(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3808);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F03FFC4:
    ctx->pc = 0x7F03FFC4u;
    // 7F03FFC4: b       0x7F0402FC
    {
            ctx->pc = 0x7F0402FCu;
            return;
    }

label_7F03FFC8:
    ctx->pc = 0x7F03FFC8u;
    ctx->downcount -= 5;
    // 7F03FFC8: lis     r5, 1024
    ctx->gpr[5] = ((u32)(s32)(1024) << 16);

label_7F03FFCC:
    ctx->pc = 0x7F03FFCCu;
    // 7F03FFCC: and   r3, r3, r5
    {
        ctx->gpr[3] = ctx->gpr[3] & ctx->gpr[5];
    }

label_7F03FFD0:
    ctx->pc = 0x7F03FFD0u;
    // 7F03FFD0: xor   r3, r3, r0
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F03FFD4:
    ctx->pc = 0x7F03FFD4u;
    // 7F03FFD4: or.   r3, r10, r3
    {
        ctx->gpr[3] = ctx->gpr[10] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F03FFD8:
    ctx->pc = 0x7F03FFD8u;
    // 7F03FFD8: bc    12, 2, 0x7F040038
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F040038;
        }
    }

label_7F03FFDC:
    ctx->pc = 0x7F03FFDCu;
    ctx->downcount -= 3;
    // 7F03FFDC: lwz     r3, 4140(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4140);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F03FFE0:
    ctx->pc = 0x7F03FFE0u;
    // 7F03FFE0: cmpwi   r3, 0
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

label_7F03FFE4:
    ctx->pc = 0x7F03FFE4u;
    // 7F03FFE4: bc    4, 2, 0x7F040030
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F040030;
        }
    }

label_7F03FFE8:
    ctx->pc = 0x7F03FFE8u;
    ctx->downcount -= 17;
    // 7F03FFE8: li      r3, 400
    ctx->gpr[3] = (u32)(s32)(400);

label_7F03FFEC:
    ctx->pc = 0x7F03FFECu;
    // 7F03FFEC: li      r5, 180
    ctx->gpr[5] = (u32)(s32)(180);

label_7F03FFF0:
    ctx->pc = 0x7F03FFF0u;
    // 7F03FFF0: stw     r3, 4140(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4140);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F03FFF4:
    ctx->pc = 0x7F03FFF4u;
    // 7F03FFF4: li      r3, 1562
    ctx->gpr[3] = (u32)(s32)(1562);

label_7F03FFF8:
    ctx->pc = 0x7F03FFF8u;
    // 7F03FFF8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F03FFFC:
    ctx->pc = 0x7F03FFFCu;
    // 7F03FFFC: stw     r5, 3856(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3856);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F040000:
    ctx->pc = 0x7F040000u;
    // 7F040000: lwz     r6, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F040004:
    ctx->pc = 0x7F040004u;
    // 7F040004: lwz     r5, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F040008:
    ctx->pc = 0x7F040008u;
    // 7F040008: stw     r6, 3796(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3796);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F04000C:
    ctx->pc = 0x7F04000Cu;
    // 7F04000C: stw     r5, 3800(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3800);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F040010:
    ctx->pc = 0x7F040010u;
    // 7F040010: lwz     r6, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F040014:
    ctx->pc = 0x7F040014u;
    // 7F040014: lwz     r5, 76(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(76);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F040018:
    ctx->pc = 0x7F040018u;
    // 7F040018: stw     r6, 3804(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3804);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F04001C:
    ctx->pc = 0x7F04001Cu;
    // 7F04001C: stw     r5, 3808(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3808);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F040020:
    ctx->pc = 0x7F040020u;
    // 7F040020: lwz     r5, 164(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(164);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F040024:
    ctx->pc = 0x7F040024u;
    // 7F040024: sth     r0, 22(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F040028:
    ctx->pc = 0x7F040028u;
    // 7F040028: bl      0x7F040868
    {
            ctx->lr = 0x7F04002Cu;
            ctx->pc = 0x7F040868u;
            return;
    }

label_7F04002C:
    ctx->pc = 0x7F04002Cu;
    ctx->downcount -= 1;
    // 7F04002C: b       0x7F0400B0
    {
            goto label_7F0400B0;
    }

label_7F040030:
    ctx->pc = 0x7F040030u;
    ctx->downcount -= 2;
    // 7F040030: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F040034:
    ctx->pc = 0x7F040034u;
    // 7F040034: b       0x7F0402FC
    {
            ctx->pc = 0x7F0402FCu;
            return;
    }

label_7F040038:
    ctx->pc = 0x7F040038u;
    ctx->downcount -= 7;
    // 7F040038: lis     r5, 2
    ctx->gpr[5] = ((u32)(s32)(2) << 16);

label_7F04003C:
    ctx->pc = 0x7F04003Cu;
    // 7F04003C: xor   r3, r8, r0
    {
        ctx->gpr[3] = ctx->gpr[8] ^ ctx->gpr[0];
    }

label_7F040040:
    ctx->pc = 0x7F040040u;
    // 7F040040: addi    r5, r5, 992
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(992);

label_7F040044:
    ctx->pc = 0x7F040044u;
    // 7F040044: and   r5, r6, r5
    {
        ctx->gpr[5] = ctx->gpr[6] & ctx->gpr[5];
    }

label_7F040048:
    ctx->pc = 0x7F040048u;
    // 7F040048: xor   r5, r5, r0
    {
        ctx->gpr[5] = ctx->gpr[5] ^ ctx->gpr[0];
    }

label_7F04004C:
    ctx->pc = 0x7F04004Cu;
    // 7F04004C: or.   r3, r5, r3
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F040050:
    ctx->pc = 0x7F040050u;
    // 7F040050: bc    12, 2, 0x7F040074
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F040074;
        }
    }

label_7F040054:
    ctx->pc = 0x7F040054u;
    ctx->downcount -= 7;
    // 7F040054: lwz     r0, 4092(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4092);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F040058:
    ctx->pc = 0x7F040058u;
    // 7F040058: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F04005C:
    ctx->pc = 0x7F04005Cu;
    // 7F04005C: lwz     r6, 164(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(164);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F040060:
    ctx->pc = 0x7F040060u;
    // 7F040060: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F040064:
    ctx->pc = 0x7F040064u;
    // 7F040064: srawi r0, r0, 2
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

label_7F040068:
    ctx->pc = 0x7F040068u;
    // 7F040068: sth     r0, 20(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F04006C:
    ctx->pc = 0x7F04006Cu;
    // 7F04006C: bl      0x7F03FDC8
    {
            ctx->lr = 0x7F040070u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03FDC8u;
                return;
            }
            goto label_7F03FDC8;
    }

label_7F040070:
    ctx->pc = 0x7F040070u;
    ctx->downcount -= 1;
    // 7F040070: b       0x7F0400B0
    {
            goto label_7F0400B0;
    }

label_7F040074:
    ctx->pc = 0x7F040074u;
    ctx->downcount -= 5;
    // 7F040074: and   r5, r6, r9
    {
        ctx->gpr[5] = ctx->gpr[6] & ctx->gpr[9];
    }

label_7F040078:
    ctx->pc = 0x7F040078u;
    // 7F040078: xor   r3, r8, r0
    {
        ctx->gpr[3] = ctx->gpr[8] ^ ctx->gpr[0];
    }

label_7F04007C:
    ctx->pc = 0x7F04007Cu;
    // 7F04007C: xor   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] ^ ctx->gpr[0];
    }

label_7F040080:
    ctx->pc = 0x7F040080u;
    // 7F040080: or.   r3, r0, r3
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F040084:
    ctx->pc = 0x7F040084u;
    // 7F040084: bc    12, 2, 0x7F0400A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0400A4;
        }
    }

label_7F040088:
    ctx->pc = 0x7F040088u;
    ctx->downcount -= 6;
    // 7F040088: lwz     r4, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F04008C:
    ctx->pc = 0x7F04008Cu;
    // 7F04008C: addi    r3, r30, 464
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(464);

label_7F040090:
    ctx->pc = 0x7F040090u;
    // 7F040090: lwz     r6, 164(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(164);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F040094:
    ctx->pc = 0x7F040094u;
    // 7F040094: addi    r5, r28, 128
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(128);

label_7F040098:
    ctx->pc = 0x7F040098u;
    // 7F040098: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_7F04009C:
    ctx->pc = 0x7F04009Cu;
    // 7F04009C: bl      0x7F03FE14
    {
            ctx->lr = 0x7F0400A0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03FE14u;
                return;
            }
            goto label_7F03FE14;
    }

label_7F0400A0:
    ctx->pc = 0x7F0400A0u;
    ctx->downcount -= 1;
    // 7F0400A0: b       0x7F0400B0
    {
            goto label_7F0400B0;
    }

label_7F0400A4:
    ctx->pc = 0x7F0400A4u;
    ctx->downcount -= 3;
    // 7F0400A4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0400A8:
    ctx->pc = 0x7F0400A8u;
    // 7F0400A8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0400AC:
    ctx->pc = 0x7F0400ACu;
    // 7F0400AC: bl      0x7F03FDC8
    {
            ctx->lr = 0x7F0400B0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F03FDC8u;
                return;
            }
            goto label_7F03FDC8;
    }

label_7F0400B0:
    ctx->pc = 0x7F0400B0u;
    ctx->downcount -= 4;
    // 7F0400B0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0400B4:
    ctx->pc = 0x7F0400B4u;
    // 7F0400B4: cmpwi   r31, 0
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

label_7F0400B8:
    ctx->pc = 0x7F0400B8u;
    // 7F0400B8: stw     r0, 3848(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3848);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0400BC:
    ctx->pc = 0x7F0400BCu;
    // 7F0400BC: bc    12, 2, 0x7F0400F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F0400F8u;
            return;
        }
    }

label_7F0400C0:
    ctx->pc = 0x7F0400C0u;
    ctx->downcount -= 3;
    // 7F0400C0: lwz     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0400C4:
    ctx->pc = 0x7F0400C4u;
    // 7F0400C4: cmpwi   r0, 12
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(12);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0400C8:
    ctx->pc = 0x7F0400C8u;
    // 7F0400C8: bc    4, 2, 0x7F0400E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0400E4;
        }
    }

label_7F0400CC:
    ctx->pc = 0x7F0400CCu;
    ctx->downcount -= 6;
    // 7F0400CC: lwz     r3, 164(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0400D0:
    ctx->pc = 0x7F0400D0u;
    // 7F0400D0: lwz     r4, 4092(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4092);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0400D4:
    ctx->pc = 0x7F0400D4u;
    // 7F0400D4: lha     r0, 22(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0400D8:
    ctx->pc = 0x7F0400D8u;
    // 7F0400D8: srawi r4, r4, 2
    {
        u32 sh = 2u;
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

label_7F0400DC:
    ctx->pc = 0x7F0400DCu;
    // 7F0400DC: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F0400E0:
    ctx->pc = 0x7F0400E0u;
    // 7F0400E0: sth     r0, 22(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0400E4:
    ctx->pc = 0x7F0400E4u;
    ctx->downcount -= 2;
    // 7F0400E4: lwz     r4, 164(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(164);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0400E8:
    ctx->pc = 0x7F0400E8u;
    // 7F0400E8: lha     r3, 22(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    ctx->pc = 0x7F0400ECu;
    return;
return_dispatch_7F03C0EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F03C0F8u: goto label_7F03C0F8;
    case 0x7F03C150u: goto label_7F03C150;
    case 0x7F03C16Cu: goto label_7F03C16C;
    case 0x7F03C280u: goto label_7F03C280;
    case 0x7F03C2C0u: goto label_7F03C2C0;
    case 0x7F03C2CCu: goto label_7F03C2CC;
    case 0x7F03C2E8u: goto label_7F03C2E8;
    case 0x7F03C2FCu: goto label_7F03C2FC;
    case 0x7F03C318u: goto label_7F03C318;
    case 0x7F03C320u: goto label_7F03C320;
    case 0x7F03C398u: goto label_7F03C398;
    case 0x7F03C510u: goto label_7F03C510;
    case 0x7F03C540u: goto label_7F03C540;
    case 0x7F03C554u: goto label_7F03C554;
    case 0x7F03C568u: goto label_7F03C568;
    case 0x7F03C580u: goto label_7F03C580;
    case 0x7F03C5BCu: goto label_7F03C5BC;
    case 0x7F03C5D0u: goto label_7F03C5D0;
    case 0x7F03C5F0u: goto label_7F03C5F0;
    case 0x7F03C624u: goto label_7F03C624;
    case 0x7F03C638u: goto label_7F03C638;
    case 0x7F03C654u: goto label_7F03C654;
    case 0x7F03C66Cu: goto label_7F03C66C;
    case 0x7F03C67Cu: goto label_7F03C67C;
    case 0x7F03C6ACu: goto label_7F03C6AC;
    case 0x7F03C6DCu: goto label_7F03C6DC;
    case 0x7F03C6F0u: goto label_7F03C6F0;
    case 0x7F03C704u: goto label_7F03C704;
    case 0x7F03C720u: goto label_7F03C720;
    case 0x7F03C74Cu: goto label_7F03C74C;
    case 0x7F03C794u: goto label_7F03C794;
    case 0x7F03C7A8u: goto label_7F03C7A8;
    case 0x7F03C7E8u: goto label_7F03C7E8;
    case 0x7F03C804u: goto label_7F03C804;
    case 0x7F03C838u: goto label_7F03C838;
    case 0x7F03C878u: goto label_7F03C878;
    case 0x7F03C8ACu: goto label_7F03C8AC;
    case 0x7F03C8C8u: goto label_7F03C8C8;
    case 0x7F03C90Cu: goto label_7F03C90C;
    case 0x7F03C914u: goto label_7F03C914;
    case 0x7F03C974u: goto label_7F03C974;
    case 0x7F03C9C8u: goto label_7F03C9C8;
    case 0x7F03C9D0u: goto label_7F03C9D0;
    case 0x7F03C9D8u: goto label_7F03C9D8;
    case 0x7F03C9E0u: goto label_7F03C9E0;
    case 0x7F03C9E8u: goto label_7F03C9E8;
    case 0x7F03C9F0u: goto label_7F03C9F0;
    case 0x7F03C9F8u: goto label_7F03C9F8;
    case 0x7F03CA00u: goto label_7F03CA00;
    case 0x7F03CA08u: goto label_7F03CA08;
    case 0x7F03CA10u: goto label_7F03CA10;
    case 0x7F03CA18u: goto label_7F03CA18;
    case 0x7F03CA2Cu: goto label_7F03CA2C;
    case 0x7F03CA34u: goto label_7F03CA34;
    case 0x7F03CA3Cu: goto label_7F03CA3C;
    case 0x7F03CA6Cu: goto label_7F03CA6C;
    case 0x7F03CA74u: goto label_7F03CA74;
    case 0x7F03CA84u: goto label_7F03CA84;
    case 0x7F03CA94u: goto label_7F03CA94;
    case 0x7F03CA9Cu: goto label_7F03CA9C;
    case 0x7F03CAA4u: goto label_7F03CAA4;
    case 0x7F03CAACu: goto label_7F03CAAC;
    case 0x7F03CAB4u: goto label_7F03CAB4;
    case 0x7F03CABCu: goto label_7F03CABC;
    case 0x7F03CAC4u: goto label_7F03CAC4;
    case 0x7F03CB98u: goto label_7F03CB98;
    case 0x7F03CBD8u: goto label_7F03CBD8;
    case 0x7F03CBF4u: goto label_7F03CBF4;
    case 0x7F03CC10u: goto label_7F03CC10;
    case 0x7F03CCBCu: goto label_7F03CCBC;
    case 0x7F03CCF4u: goto label_7F03CCF4;
    case 0x7F03CD08u: goto label_7F03CD08;
    case 0x7F03CD1Cu: goto label_7F03CD1C;
    case 0x7F03CD38u: goto label_7F03CD38;
    case 0x7F03CD78u: goto label_7F03CD78;
    case 0x7F03CDF0u: goto label_7F03CDF0;
    case 0x7F03CE04u: goto label_7F03CE04;
    case 0x7F03CE20u: goto label_7F03CE20;
    case 0x7F03CE34u: goto label_7F03CE34;
    case 0x7F03CE8Cu: goto label_7F03CE8C;
    case 0x7F03CEA0u: goto label_7F03CEA0;
    case 0x7F03CEDCu: goto label_7F03CEDC;
    case 0x7F03CF00u: goto label_7F03CF00;
    case 0x7F03CF14u: goto label_7F03CF14;
    case 0x7F03CF40u: goto label_7F03CF40;
    case 0x7F03CFA4u: goto label_7F03CFA4;
    case 0x7F03CFB8u: goto label_7F03CFB8;
    case 0x7F03CFD4u: goto label_7F03CFD4;
    case 0x7F03CFE8u: goto label_7F03CFE8;
    case 0x7F03D050u: goto label_7F03D050;
    case 0x7F03D064u: goto label_7F03D064;
    case 0x7F03D098u: goto label_7F03D098;
    case 0x7F03D0CCu: goto label_7F03D0CC;
    case 0x7F03D100u: goto label_7F03D100;
    case 0x7F03D140u: goto label_7F03D140;
    case 0x7F03D154u: goto label_7F03D154;
    case 0x7F03D188u: goto label_7F03D188;
    case 0x7F03D1A8u: goto label_7F03D1A8;
    case 0x7F03D1C8u: goto label_7F03D1C8;
    case 0x7F03D24Cu: goto label_7F03D24C;
    case 0x7F03D260u: goto label_7F03D260;
    case 0x7F03D274u: goto label_7F03D274;
    case 0x7F03D298u: goto label_7F03D298;
    case 0x7F03D300u: goto label_7F03D300;
    case 0x7F03D314u: goto label_7F03D314;
    case 0x7F03D328u: goto label_7F03D328;
    case 0x7F03D38Cu: goto label_7F03D38C;
    case 0x7F03D3A0u: goto label_7F03D3A0;
    case 0x7F03D3D0u: goto label_7F03D3D0;
    case 0x7F03D3F0u: goto label_7F03D3F0;
    case 0x7F03D410u: goto label_7F03D410;
    case 0x7F03D444u: goto label_7F03D444;
    case 0x7F03D464u: goto label_7F03D464;
    case 0x7F03D4E4u: goto label_7F03D4E4;
    case 0x7F03D4F8u: goto label_7F03D4F8;
    case 0x7F03D50Cu: goto label_7F03D50C;
    case 0x7F03D570u: goto label_7F03D570;
    case 0x7F03D584u: goto label_7F03D584;
    case 0x7F03D5B4u: goto label_7F03D5B4;
    case 0x7F03D5D4u: goto label_7F03D5D4;
    case 0x7F03D5F4u: goto label_7F03D5F4;
    case 0x7F03D628u: goto label_7F03D628;
    case 0x7F03D648u: goto label_7F03D648;
    case 0x7F03D6A0u: goto label_7F03D6A0;
    case 0x7F03D6B4u: goto label_7F03D6B4;
    case 0x7F03D724u: goto label_7F03D724;
    case 0x7F03D738u: goto label_7F03D738;
    case 0x7F03D760u: goto label_7F03D760;
    case 0x7F03D780u: goto label_7F03D780;
    case 0x7F03D794u: goto label_7F03D794;
    case 0x7F03D7B4u: goto label_7F03D7B4;
    case 0x7F03D814u: goto label_7F03D814;
    case 0x7F03D83Cu: goto label_7F03D83C;
    case 0x7F03D85Cu: goto label_7F03D85C;
    case 0x7F03D870u: goto label_7F03D870;
    case 0x7F03D8A4u: goto label_7F03D8A4;
    case 0x7F03D8B4u: goto label_7F03D8B4;
    case 0x7F03D8C8u: goto label_7F03D8C8;
    case 0x7F03D8E0u: goto label_7F03D8E0;
    case 0x7F03D8F0u: goto label_7F03D8F0;
    case 0x7F03D904u: goto label_7F03D904;
    case 0x7F03D914u: goto label_7F03D914;
    case 0x7F03D924u: goto label_7F03D924;
    case 0x7F03D934u: goto label_7F03D934;
    case 0x7F03D944u: goto label_7F03D944;
    case 0x7F03D954u: goto label_7F03D954;
    case 0x7F03D964u: goto label_7F03D964;
    case 0x7F03D9ACu: goto label_7F03D9AC;
    case 0x7F03D9C0u: goto label_7F03D9C0;
    case 0x7F03D9DCu: goto label_7F03D9DC;
    case 0x7F03D9E8u: goto label_7F03D9E8;
    case 0x7F03DA04u: goto label_7F03DA04;
    case 0x7F03DA0Cu: goto label_7F03DA0C;
    case 0x7F03DA38u: goto label_7F03DA38;
    case 0x7F03DA4Cu: goto label_7F03DA4C;
    case 0x7F03DA64u: goto label_7F03DA64;
    case 0x7F03DA70u: goto label_7F03DA70;
    case 0x7F03DA84u: goto label_7F03DA84;
    case 0x7F03DAA4u: goto label_7F03DAA4;
    case 0x7F03DAC4u: goto label_7F03DAC4;
    case 0x7F03DB54u: goto label_7F03DB54;
    case 0x7F03DB74u: goto label_7F03DB74;
    case 0x7F03DB80u: goto label_7F03DB80;
    case 0x7F03DB8Cu: goto label_7F03DB8C;
    case 0x7F03DB9Cu: goto label_7F03DB9C;
    case 0x7F03DBA4u: goto label_7F03DBA4;
    case 0x7F03DBACu: goto label_7F03DBAC;
    case 0x7F03DBC0u: goto label_7F03DBC0;
    case 0x7F03DBECu: goto label_7F03DBEC;
    case 0x7F03DBF8u: goto label_7F03DBF8;
    case 0x7F03DC48u: goto label_7F03DC48;
    case 0x7F03DC5Cu: goto label_7F03DC5C;
    case 0x7F03DC70u: goto label_7F03DC70;
    case 0x7F03DC8Cu: goto label_7F03DC8C;
    case 0x7F03DCC4u: goto label_7F03DCC4;
    case 0x7F03DCD8u: goto label_7F03DCD8;
    case 0x7F03DCECu: goto label_7F03DCEC;
    case 0x7F03DCFCu: goto label_7F03DCFC;
    case 0x7F03DD10u: goto label_7F03DD10;
    case 0x7F03DD1Cu: goto label_7F03DD1C;
    case 0x7F03DD2Cu: goto label_7F03DD2C;
    case 0x7F03DD64u: goto label_7F03DD64;
    case 0x7F03DD78u: goto label_7F03DD78;
    case 0x7F03DD80u: goto label_7F03DD80;
    case 0x7F03DDD0u: goto label_7F03DDD0;
    case 0x7F03DDE4u: goto label_7F03DDE4;
    case 0x7F03DE20u: goto label_7F03DE20;
    case 0x7F03DE48u: goto label_7F03DE48;
    case 0x7F03DE94u: goto label_7F03DE94;
    case 0x7F03DEA8u: goto label_7F03DEA8;
    case 0x7F03DEBCu: goto label_7F03DEBC;
    case 0x7F03DED8u: goto label_7F03DED8;
    case 0x7F03DF18u: goto label_7F03DF18;
    case 0x7F03DF2Cu: goto label_7F03DF2C;
    case 0x7F03DF50u: goto label_7F03DF50;
    case 0x7F03DF58u: goto label_7F03DF58;
    case 0x7F03DF60u: goto label_7F03DF60;
    case 0x7F03DF70u: goto label_7F03DF70;
    case 0x7F03DF9Cu: goto label_7F03DF9C;
    case 0x7F03DFB0u: goto label_7F03DFB0;
    case 0x7F03DFC4u: goto label_7F03DFC4;
    case 0x7F03DFD4u: goto label_7F03DFD4;
    case 0x7F03DFDCu: goto label_7F03DFDC;
    case 0x7F03E008u: goto label_7F03E008;
    case 0x7F03E018u: goto label_7F03E018;
    case 0x7F03E028u: goto label_7F03E028;
    case 0x7F03E038u: goto label_7F03E038;
    case 0x7F03E078u: goto label_7F03E078;
    case 0x7F03E08Cu: goto label_7F03E08C;
    case 0x7F03E0C4u: goto label_7F03E0C4;
    case 0x7F03E0DCu: goto label_7F03E0DC;
    case 0x7F03E100u: goto label_7F03E100;
    case 0x7F03E11Cu: goto label_7F03E11C;
    case 0x7F03E12Cu: goto label_7F03E12C;
    case 0x7F03E140u: goto label_7F03E140;
    case 0x7F03E150u: goto label_7F03E150;
    case 0x7F03E158u: goto label_7F03E158;
    case 0x7F03E18Cu: goto label_7F03E18C;
    case 0x7F03E1D8u: goto label_7F03E1D8;
    case 0x7F03E1ECu: goto label_7F03E1EC;
    case 0x7F03E200u: goto label_7F03E200;
    case 0x7F03E21Cu: goto label_7F03E21C;
    case 0x7F03E228u: goto label_7F03E228;
    case 0x7F03E27Cu: goto label_7F03E27C;
    case 0x7F03E2D4u: goto label_7F03E2D4;
    case 0x7F03E2E8u: goto label_7F03E2E8;
    case 0x7F03E2FCu: goto label_7F03E2FC;
    case 0x7F03E318u: goto label_7F03E318;
    case 0x7F03E374u: goto label_7F03E374;
    case 0x7F03E380u: goto label_7F03E380;
    case 0x7F03E388u: goto label_7F03E388;
    case 0x7F03E3A4u: goto label_7F03E3A4;
    case 0x7F03E3B4u: goto label_7F03E3B4;
    case 0x7F03E3FCu: goto label_7F03E3FC;
    case 0x7F03E444u: goto label_7F03E444;
    case 0x7F03E4ACu: goto label_7F03E4AC;
    case 0x7F03E4B4u: goto label_7F03E4B4;
    case 0x7F03E4D0u: goto label_7F03E4D0;
    case 0x7F03E4D8u: goto label_7F03E4D8;
    case 0x7F03E4E8u: goto label_7F03E4E8;
    case 0x7F03E528u: goto label_7F03E528;
    case 0x7F03E538u: goto label_7F03E538;
    case 0x7F03E548u: goto label_7F03E548;
    case 0x7F03E568u: goto label_7F03E568;
    case 0x7F03E57Cu: goto label_7F03E57C;
    case 0x7F03E5A4u: goto label_7F03E5A4;
    case 0x7F03E5BCu: goto label_7F03E5BC;
    case 0x7F03E5CCu: goto label_7F03E5CC;
    case 0x7F03E5D8u: goto label_7F03E5D8;
    case 0x7F03E5E8u: goto label_7F03E5E8;
    case 0x7F03E5FCu: goto label_7F03E5FC;
    case 0x7F03E624u: goto label_7F03E624;
    case 0x7F03E638u: goto label_7F03E638;
    case 0x7F03E64Cu: goto label_7F03E64C;
    case 0x7F03E668u: goto label_7F03E668;
    case 0x7F03E694u: goto label_7F03E694;
    case 0x7F03E6C4u: goto label_7F03E6C4;
    case 0x7F03E6ECu: goto label_7F03E6EC;
    case 0x7F03E704u: goto label_7F03E704;
    case 0x7F03E714u: goto label_7F03E714;
    case 0x7F03E744u: goto label_7F03E744;
    case 0x7F03E764u: goto label_7F03E764;
    case 0x7F03E874u: goto label_7F03E874;
    case 0x7F03E87Cu: goto label_7F03E87C;
    case 0x7F03E884u: goto label_7F03E884;
    case 0x7F03E894u: goto label_7F03E894;
    case 0x7F03E8A8u: goto label_7F03E8A8;
    case 0x7F03E924u: goto label_7F03E924;
    case 0x7F03E94Cu: goto label_7F03E94C;
    case 0x7F03E958u: goto label_7F03E958;
    case 0x7F03E98Cu: goto label_7F03E98C;
    case 0x7F03E9DCu: goto label_7F03E9DC;
    case 0x7F03E9E0u: goto label_7F03E9E0;
    case 0x7F03EA64u: goto label_7F03EA64;
    case 0x7F03EA6Cu: goto label_7F03EA6C;
    case 0x7F03EA90u: goto label_7F03EA90;
    case 0x7F03EAD8u: goto label_7F03EAD8;
    case 0x7F03EAE8u: goto label_7F03EAE8;
    case 0x7F03EAF8u: goto label_7F03EAF8;
    case 0x7F03EB04u: goto label_7F03EB04;
    case 0x7F03EB1Cu: goto label_7F03EB1C;
    case 0x7F03EB2Cu: goto label_7F03EB2C;
    case 0x7F03EB40u: goto label_7F03EB40;
    case 0x7F03EB50u: goto label_7F03EB50;
    case 0x7F03EB58u: goto label_7F03EB58;
    case 0x7F03EB7Cu: goto label_7F03EB7C;
    case 0x7F03EBA4u: goto label_7F03EBA4;
    case 0x7F03EBB8u: goto label_7F03EBB8;
    case 0x7F03EBCCu: goto label_7F03EBCC;
    case 0x7F03EBDCu: goto label_7F03EBDC;
    case 0x7F03EBF0u: goto label_7F03EBF0;
    case 0x7F03EC18u: goto label_7F03EC18;
    case 0x7F03EC28u: goto label_7F03EC28;
    case 0x7F03EC68u: goto label_7F03EC68;
    case 0x7F03EC7Cu: goto label_7F03EC7C;
    case 0x7F03EC88u: goto label_7F03EC88;
    case 0x7F03ECE4u: goto label_7F03ECE4;
    case 0x7F03ED08u: goto label_7F03ED08;
    case 0x7F03ED14u: goto label_7F03ED14;
    case 0x7F03ED84u: goto label_7F03ED84;
    case 0x7F03EDF0u: goto label_7F03EDF0;
    case 0x7F03EE08u: goto label_7F03EE08;
    case 0x7F03EE28u: goto label_7F03EE28;
    case 0x7F03EE40u: goto label_7F03EE40;
    case 0x7F03EE60u: goto label_7F03EE60;
    case 0x7F03EE78u: goto label_7F03EE78;
    case 0x7F03EF68u: goto label_7F03EF68;
    case 0x7F03EFA8u: goto label_7F03EFA8;
    case 0x7F03EFB8u: goto label_7F03EFB8;
    case 0x7F03EFC8u: goto label_7F03EFC8;
    case 0x7F03EFD8u: goto label_7F03EFD8;
    case 0x7F03EFE8u: goto label_7F03EFE8;
    case 0x7F03EFF8u: goto label_7F03EFF8;
    case 0x7F03F008u: goto label_7F03F008;
    case 0x7F03F014u: goto label_7F03F014;
    case 0x7F03F044u: goto label_7F03F044;
    case 0x7F03F060u: goto label_7F03F060;
    case 0x7F03F064u: goto label_7F03F064;
    case 0x7F03F1B4u: goto label_7F03F1B4;
    case 0x7F03F1CCu: goto label_7F03F1CC;
    case 0x7F03F1DCu: goto label_7F03F1DC;
    case 0x7F03F1ECu: goto label_7F03F1EC;
    case 0x7F03F224u: goto label_7F03F224;
    case 0x7F03F23Cu: goto label_7F03F23C;
    case 0x7F03F24Cu: goto label_7F03F24C;
    case 0x7F03F25Cu: goto label_7F03F25C;
    case 0x7F03F2C0u: goto label_7F03F2C0;
    case 0x7F03F2CCu: goto label_7F03F2CC;
    case 0x7F03F2E4u: goto label_7F03F2E4;
    case 0x7F03F2ECu: goto label_7F03F2EC;
    case 0x7F03F320u: goto label_7F03F320;
    case 0x7F03F350u: goto label_7F03F350;
    case 0x7F03F358u: goto label_7F03F358;
    case 0x7F03F360u: goto label_7F03F360;
    case 0x7F03F368u: goto label_7F03F368;
    case 0x7F03F370u: goto label_7F03F370;
    case 0x7F03F3A0u: goto label_7F03F3A0;
    case 0x7F03F3E8u: goto label_7F03F3E8;
    case 0x7F03F3F8u: goto label_7F03F3F8;
    case 0x7F03F3FCu: goto label_7F03F3FC;
    case 0x7F03F408u: goto label_7F03F408;
    case 0x7F03F418u: goto label_7F03F418;
    case 0x7F03F424u: goto label_7F03F424;
    case 0x7F03F440u: goto label_7F03F440;
    case 0x7F03F454u: goto label_7F03F454;
    case 0x7F03F460u: goto label_7F03F460;
    case 0x7F03F49Cu: goto label_7F03F49C;
    case 0x7F03F4D0u: goto label_7F03F4D0;
    case 0x7F03F4ECu: goto label_7F03F4EC;
    case 0x7F03F4F8u: goto label_7F03F4F8;
    case 0x7F03F540u: goto label_7F03F540;
    case 0x7F03F588u: goto label_7F03F588;
    case 0x7F03F590u: goto label_7F03F590;
    case 0x7F03F61Cu: goto label_7F03F61C;
    case 0x7F03F638u: goto label_7F03F638;
    case 0x7F03F658u: goto label_7F03F658;
    case 0x7F03F664u: goto label_7F03F664;
    case 0x7F03F6F0u: goto label_7F03F6F0;
    case 0x7F03F6FCu: goto label_7F03F6FC;
    case 0x7F03F788u: goto label_7F03F788;
    case 0x7F03F79Cu: goto label_7F03F79C;
    case 0x7F03F7B0u: goto label_7F03F7B0;
    case 0x7F03F7C4u: goto label_7F03F7C4;
    case 0x7F03F7F0u: goto label_7F03F7F0;
    case 0x7F03F838u: goto label_7F03F838;
    case 0x7F03F840u: goto label_7F03F840;
    case 0x7F03F84Cu: goto label_7F03F84C;
    case 0x7F03F850u: goto label_7F03F850;
    case 0x7F03F8F4u: goto label_7F03F8F4;
    case 0x7F03F918u: goto label_7F03F918;
    case 0x7F03F928u: goto label_7F03F928;
    case 0x7F03F944u: goto label_7F03F944;
    case 0x7F03F950u: goto label_7F03F950;
    case 0x7F03F990u: goto label_7F03F990;
    case 0x7F03F9E0u: goto label_7F03F9E0;
    case 0x7F03F9ECu: goto label_7F03F9EC;
    case 0x7F03F9F4u: goto label_7F03F9F4;
    case 0x7F03FA44u: goto label_7F03FA44;
    case 0x7F03FA50u: goto label_7F03FA50;
    case 0x7F03FA84u: goto label_7F03FA84;
    case 0x7F03FACCu: goto label_7F03FACC;
    case 0x7F03FAE8u: goto label_7F03FAE8;
    case 0x7F03FB3Cu: goto label_7F03FB3C;
    case 0x7F03FB4Cu: goto label_7F03FB4C;
    case 0x7F03FB68u: goto label_7F03FB68;
    case 0x7F03FB74u: goto label_7F03FB74;
    case 0x7F03FB88u: goto label_7F03FB88;
    case 0x7F03FBA8u: goto label_7F03FBA8;
    case 0x7F03FBBCu: goto label_7F03FBBC;
    case 0x7F03FC04u: goto label_7F03FC04;
    case 0x7F03FC10u: goto label_7F03FC10;
    case 0x7F03FC18u: goto label_7F03FC18;
    case 0x7F03FC7Cu: goto label_7F03FC7C;
    case 0x7F03FCA4u: goto label_7F03FCA4;
    case 0x7F03FCB8u: goto label_7F03FCB8;
    case 0x7F03FCC0u: goto label_7F03FCC0;
    case 0x7F03FCDCu: goto label_7F03FCDC;
    case 0x7F03FD4Cu: goto label_7F03FD4C;
    case 0x7F03FD5Cu: goto label_7F03FD5C;
    case 0x7F03FD80u: goto label_7F03FD80;
    case 0x7F03FD90u: goto label_7F03FD90;
    case 0x7F03FDB0u: goto label_7F03FDB0;
    case 0x7F03FDF4u: goto label_7F03FDF4;
    case 0x7F03FE00u: goto label_7F03FE00;
    case 0x7F03FE44u: goto label_7F03FE44;
    case 0x7F03FE50u: goto label_7F03FE50;
    case 0x7F03FE84u: goto label_7F03FE84;
    case 0x7F03FFA0u: goto label_7F03FFA0;
    case 0x7F04002Cu: goto label_7F04002C;
    case 0x7F040070u: goto label_7F040070;
    case 0x7F0400A0u: goto label_7F0400A0;
    case 0x7F0400B0u: goto label_7F0400B0;
    default: return;
    }
}

