// DolRecomp output
#include "../generated.h"

static void loop_7F42E5A0(CPUState* ctx) {
label_7F42E5A0:
    ctx->downcount -= 3;
    ctx->pc = 0x7F42E5A0u;
    // 7F42E5A0: stwx    r6, r4, r3
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    // 7F42E5A4: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    // 7F42E5A8: bc    16, 0, 0x7F42E5A0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42E5A0u;
                return;
            }
            goto label_7F42E5A0;
        }
    }

    ctx->pc = 0x7F42E5ACu;
}

void func_7F42C0EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F42C0ECu: goto label_7F42C0EC;
    case 0x7F42C0F0u: goto label_7F42C0F0;
    case 0x7F42C0F4u: goto label_7F42C0F4;
    case 0x7F42C0F8u: goto label_7F42C0F8;
    case 0x7F42C0FCu: goto label_7F42C0FC;
    case 0x7F42C100u: goto label_7F42C100;
    case 0x7F42C104u: goto label_7F42C104;
    case 0x7F42C108u: goto label_7F42C108;
    case 0x7F42C10Cu: goto label_7F42C10C;
    case 0x7F42C110u: goto label_7F42C110;
    case 0x7F42C114u: goto label_7F42C114;
    case 0x7F42C118u: goto label_7F42C118;
    case 0x7F42C11Cu: goto label_7F42C11C;
    case 0x7F42C120u: goto label_7F42C120;
    case 0x7F42C124u: goto label_7F42C124;
    case 0x7F42C128u: goto label_7F42C128;
    case 0x7F42C12Cu: goto label_7F42C12C;
    case 0x7F42C130u: goto label_7F42C130;
    case 0x7F42C134u: goto label_7F42C134;
    case 0x7F42C138u: goto label_7F42C138;
    case 0x7F42C13Cu: goto label_7F42C13C;
    case 0x7F42C140u: goto label_7F42C140;
    case 0x7F42C144u: goto label_7F42C144;
    case 0x7F42C148u: goto label_7F42C148;
    case 0x7F42C14Cu: goto label_7F42C14C;
    case 0x7F42C150u: goto label_7F42C150;
    case 0x7F42C154u: goto label_7F42C154;
    case 0x7F42C158u: goto label_7F42C158;
    case 0x7F42C15Cu: goto label_7F42C15C;
    case 0x7F42C160u: goto label_7F42C160;
    case 0x7F42C164u: goto label_7F42C164;
    case 0x7F42C168u: goto label_7F42C168;
    case 0x7F42C16Cu: goto label_7F42C16C;
    case 0x7F42C170u: goto label_7F42C170;
    case 0x7F42C174u: goto label_7F42C174;
    case 0x7F42C178u: goto label_7F42C178;
    case 0x7F42C17Cu: goto label_7F42C17C;
    case 0x7F42C180u: goto label_7F42C180;
    case 0x7F42C184u: goto label_7F42C184;
    case 0x7F42C188u: goto label_7F42C188;
    case 0x7F42C18Cu: goto label_7F42C18C;
    case 0x7F42C190u: goto label_7F42C190;
    case 0x7F42C194u: goto label_7F42C194;
    case 0x7F42C198u: goto label_7F42C198;
    case 0x7F42C19Cu: goto label_7F42C19C;
    case 0x7F42C1A0u: goto label_7F42C1A0;
    case 0x7F42C1A4u: goto label_7F42C1A4;
    case 0x7F42C1A8u: goto label_7F42C1A8;
    case 0x7F42C1ACu: goto label_7F42C1AC;
    case 0x7F42C1B0u: goto label_7F42C1B0;
    case 0x7F42C1B4u: goto label_7F42C1B4;
    case 0x7F42C1B8u: goto label_7F42C1B8;
    case 0x7F42C1BCu: goto label_7F42C1BC;
    case 0x7F42C1C0u: goto label_7F42C1C0;
    case 0x7F42C1C4u: goto label_7F42C1C4;
    case 0x7F42C1C8u: goto label_7F42C1C8;
    case 0x7F42C1CCu: goto label_7F42C1CC;
    case 0x7F42C1D0u: goto label_7F42C1D0;
    case 0x7F42C1D4u: goto label_7F42C1D4;
    case 0x7F42C1D8u: goto label_7F42C1D8;
    case 0x7F42C1DCu: goto label_7F42C1DC;
    case 0x7F42C1E0u: goto label_7F42C1E0;
    case 0x7F42C1E4u: goto label_7F42C1E4;
    case 0x7F42C1E8u: goto label_7F42C1E8;
    case 0x7F42C1ECu: goto label_7F42C1EC;
    case 0x7F42C1F0u: goto label_7F42C1F0;
    case 0x7F42C1F4u: goto label_7F42C1F4;
    case 0x7F42C1F8u: goto label_7F42C1F8;
    case 0x7F42C1FCu: goto label_7F42C1FC;
    case 0x7F42C200u: goto label_7F42C200;
    case 0x7F42C204u: goto label_7F42C204;
    case 0x7F42C208u: goto label_7F42C208;
    case 0x7F42C20Cu: goto label_7F42C20C;
    case 0x7F42C210u: goto label_7F42C210;
    case 0x7F42C214u: goto label_7F42C214;
    case 0x7F42C218u: goto label_7F42C218;
    case 0x7F42C21Cu: goto label_7F42C21C;
    case 0x7F42C220u: goto label_7F42C220;
    case 0x7F42C224u: goto label_7F42C224;
    case 0x7F42C228u: goto label_7F42C228;
    case 0x7F42C22Cu: goto label_7F42C22C;
    case 0x7F42C230u: goto label_7F42C230;
    case 0x7F42C234u: goto label_7F42C234;
    case 0x7F42C238u: goto label_7F42C238;
    case 0x7F42C23Cu: goto label_7F42C23C;
    case 0x7F42C240u: goto label_7F42C240;
    case 0x7F42C244u: goto label_7F42C244;
    case 0x7F42C248u: goto label_7F42C248;
    case 0x7F42C24Cu: goto label_7F42C24C;
    case 0x7F42C250u: goto label_7F42C250;
    case 0x7F42C254u: goto label_7F42C254;
    case 0x7F42C258u: goto label_7F42C258;
    case 0x7F42C25Cu: goto label_7F42C25C;
    case 0x7F42C260u: goto label_7F42C260;
    case 0x7F42C264u: goto label_7F42C264;
    case 0x7F42C268u: goto label_7F42C268;
    case 0x7F42C26Cu: goto label_7F42C26C;
    case 0x7F42C270u: goto label_7F42C270;
    case 0x7F42C274u: goto label_7F42C274;
    case 0x7F42C278u: goto label_7F42C278;
    case 0x7F42C27Cu: goto label_7F42C27C;
    case 0x7F42C280u: goto label_7F42C280;
    case 0x7F42C284u: goto label_7F42C284;
    case 0x7F42C288u: goto label_7F42C288;
    case 0x7F42C28Cu: goto label_7F42C28C;
    case 0x7F42C290u: goto label_7F42C290;
    case 0x7F42C294u: goto label_7F42C294;
    case 0x7F42C298u: goto label_7F42C298;
    case 0x7F42C29Cu: goto label_7F42C29C;
    case 0x7F42C2A0u: goto label_7F42C2A0;
    case 0x7F42C2A4u: goto label_7F42C2A4;
    case 0x7F42C2A8u: goto label_7F42C2A8;
    case 0x7F42C2ACu: goto label_7F42C2AC;
    case 0x7F42C2B0u: goto label_7F42C2B0;
    case 0x7F42C2B4u: goto label_7F42C2B4;
    case 0x7F42C2B8u: goto label_7F42C2B8;
    case 0x7F42C2BCu: goto label_7F42C2BC;
    case 0x7F42C2C0u: goto label_7F42C2C0;
    case 0x7F42C2C4u: goto label_7F42C2C4;
    case 0x7F42C2C8u: goto label_7F42C2C8;
    case 0x7F42C2CCu: goto label_7F42C2CC;
    case 0x7F42C2D0u: goto label_7F42C2D0;
    case 0x7F42C2D4u: goto label_7F42C2D4;
    case 0x7F42C2D8u: goto label_7F42C2D8;
    case 0x7F42C2DCu: goto label_7F42C2DC;
    case 0x7F42C2E0u: goto label_7F42C2E0;
    case 0x7F42C2E4u: goto label_7F42C2E4;
    case 0x7F42C2E8u: goto label_7F42C2E8;
    case 0x7F42C2ECu: goto label_7F42C2EC;
    case 0x7F42C2F0u: goto label_7F42C2F0;
    case 0x7F42C2F4u: goto label_7F42C2F4;
    case 0x7F42C2F8u: goto label_7F42C2F8;
    case 0x7F42C2FCu: goto label_7F42C2FC;
    case 0x7F42C300u: goto label_7F42C300;
    case 0x7F42C304u: goto label_7F42C304;
    case 0x7F42C308u: goto label_7F42C308;
    case 0x7F42C30Cu: goto label_7F42C30C;
    case 0x7F42C310u: goto label_7F42C310;
    case 0x7F42C314u: goto label_7F42C314;
    case 0x7F42C318u: goto label_7F42C318;
    case 0x7F42C31Cu: goto label_7F42C31C;
    case 0x7F42C320u: goto label_7F42C320;
    case 0x7F42C324u: goto label_7F42C324;
    case 0x7F42C328u: goto label_7F42C328;
    case 0x7F42C32Cu: goto label_7F42C32C;
    case 0x7F42C330u: goto label_7F42C330;
    case 0x7F42C334u: goto label_7F42C334;
    case 0x7F42C338u: goto label_7F42C338;
    case 0x7F42C33Cu: goto label_7F42C33C;
    case 0x7F42C340u: goto label_7F42C340;
    case 0x7F42C344u: goto label_7F42C344;
    case 0x7F42C348u: goto label_7F42C348;
    case 0x7F42C34Cu: goto label_7F42C34C;
    case 0x7F42C350u: goto label_7F42C350;
    case 0x7F42C354u: goto label_7F42C354;
    case 0x7F42C358u: goto label_7F42C358;
    case 0x7F42C35Cu: goto label_7F42C35C;
    case 0x7F42C360u: goto label_7F42C360;
    case 0x7F42C364u: goto label_7F42C364;
    case 0x7F42C368u: goto label_7F42C368;
    case 0x7F42C36Cu: goto label_7F42C36C;
    case 0x7F42C370u: goto label_7F42C370;
    case 0x7F42C374u: goto label_7F42C374;
    case 0x7F42C378u: goto label_7F42C378;
    case 0x7F42C37Cu: goto label_7F42C37C;
    case 0x7F42C380u: goto label_7F42C380;
    case 0x7F42C384u: goto label_7F42C384;
    case 0x7F42C388u: goto label_7F42C388;
    case 0x7F42C38Cu: goto label_7F42C38C;
    case 0x7F42C390u: goto label_7F42C390;
    case 0x7F42C394u: goto label_7F42C394;
    case 0x7F42C398u: goto label_7F42C398;
    case 0x7F42C39Cu: goto label_7F42C39C;
    case 0x7F42C3A0u: goto label_7F42C3A0;
    case 0x7F42C3A4u: goto label_7F42C3A4;
    case 0x7F42C3A8u: goto label_7F42C3A8;
    case 0x7F42C3ACu: goto label_7F42C3AC;
    case 0x7F42C3B0u: goto label_7F42C3B0;
    case 0x7F42C3B4u: goto label_7F42C3B4;
    case 0x7F42C3B8u: goto label_7F42C3B8;
    case 0x7F42C3BCu: goto label_7F42C3BC;
    case 0x7F42C3C0u: goto label_7F42C3C0;
    case 0x7F42C3C4u: goto label_7F42C3C4;
    case 0x7F42C3C8u: goto label_7F42C3C8;
    case 0x7F42C3CCu: goto label_7F42C3CC;
    case 0x7F42C3D0u: goto label_7F42C3D0;
    case 0x7F42C3D4u: goto label_7F42C3D4;
    case 0x7F42C3D8u: goto label_7F42C3D8;
    case 0x7F42C3DCu: goto label_7F42C3DC;
    case 0x7F42C3E0u: goto label_7F42C3E0;
    case 0x7F42C3E4u: goto label_7F42C3E4;
    case 0x7F42C3E8u: goto label_7F42C3E8;
    case 0x7F42C3ECu: goto label_7F42C3EC;
    case 0x7F42C3F0u: goto label_7F42C3F0;
    case 0x7F42C3F4u: goto label_7F42C3F4;
    case 0x7F42C3F8u: goto label_7F42C3F8;
    case 0x7F42C3FCu: goto label_7F42C3FC;
    case 0x7F42C400u: goto label_7F42C400;
    case 0x7F42C404u: goto label_7F42C404;
    case 0x7F42C408u: goto label_7F42C408;
    case 0x7F42C40Cu: goto label_7F42C40C;
    case 0x7F42C410u: goto label_7F42C410;
    case 0x7F42C414u: goto label_7F42C414;
    case 0x7F42C418u: goto label_7F42C418;
    case 0x7F42C41Cu: goto label_7F42C41C;
    case 0x7F42C420u: goto label_7F42C420;
    case 0x7F42C424u: goto label_7F42C424;
    case 0x7F42C428u: goto label_7F42C428;
    case 0x7F42C42Cu: goto label_7F42C42C;
    case 0x7F42C430u: goto label_7F42C430;
    case 0x7F42C434u: goto label_7F42C434;
    case 0x7F42C438u: goto label_7F42C438;
    case 0x7F42C43Cu: goto label_7F42C43C;
    case 0x7F42C440u: goto label_7F42C440;
    case 0x7F42C444u: goto label_7F42C444;
    case 0x7F42C448u: goto label_7F42C448;
    case 0x7F42C44Cu: goto label_7F42C44C;
    case 0x7F42C450u: goto label_7F42C450;
    case 0x7F42C454u: goto label_7F42C454;
    case 0x7F42C458u: goto label_7F42C458;
    case 0x7F42C45Cu: goto label_7F42C45C;
    case 0x7F42C460u: goto label_7F42C460;
    case 0x7F42C464u: goto label_7F42C464;
    case 0x7F42C468u: goto label_7F42C468;
    case 0x7F42C46Cu: goto label_7F42C46C;
    case 0x7F42C470u: goto label_7F42C470;
    case 0x7F42C474u: goto label_7F42C474;
    case 0x7F42C478u: goto label_7F42C478;
    case 0x7F42C47Cu: goto label_7F42C47C;
    case 0x7F42C480u: goto label_7F42C480;
    case 0x7F42C484u: goto label_7F42C484;
    case 0x7F42C488u: goto label_7F42C488;
    case 0x7F42C48Cu: goto label_7F42C48C;
    case 0x7F42C490u: goto label_7F42C490;
    case 0x7F42C494u: goto label_7F42C494;
    case 0x7F42C498u: goto label_7F42C498;
    case 0x7F42C49Cu: goto label_7F42C49C;
    case 0x7F42C4A0u: goto label_7F42C4A0;
    case 0x7F42C4A4u: goto label_7F42C4A4;
    case 0x7F42C4A8u: goto label_7F42C4A8;
    case 0x7F42C4ACu: goto label_7F42C4AC;
    case 0x7F42C4B0u: goto label_7F42C4B0;
    case 0x7F42C4B4u: goto label_7F42C4B4;
    case 0x7F42C4B8u: goto label_7F42C4B8;
    case 0x7F42C4BCu: goto label_7F42C4BC;
    case 0x7F42C4C0u: goto label_7F42C4C0;
    case 0x7F42C4C4u: goto label_7F42C4C4;
    case 0x7F42C4C8u: goto label_7F42C4C8;
    case 0x7F42C4CCu: goto label_7F42C4CC;
    case 0x7F42C4D0u: goto label_7F42C4D0;
    case 0x7F42C4D4u: goto label_7F42C4D4;
    case 0x7F42C4D8u: goto label_7F42C4D8;
    case 0x7F42C4DCu: goto label_7F42C4DC;
    case 0x7F42C4E0u: goto label_7F42C4E0;
    case 0x7F42C4E4u: goto label_7F42C4E4;
    case 0x7F42C4E8u: goto label_7F42C4E8;
    case 0x7F42C4ECu: goto label_7F42C4EC;
    case 0x7F42C4F0u: goto label_7F42C4F0;
    case 0x7F42C4F4u: goto label_7F42C4F4;
    case 0x7F42C4F8u: goto label_7F42C4F8;
    case 0x7F42C4FCu: goto label_7F42C4FC;
    case 0x7F42C500u: goto label_7F42C500;
    case 0x7F42C504u: goto label_7F42C504;
    case 0x7F42C508u: goto label_7F42C508;
    case 0x7F42C50Cu: goto label_7F42C50C;
    case 0x7F42C510u: goto label_7F42C510;
    case 0x7F42C514u: goto label_7F42C514;
    case 0x7F42C518u: goto label_7F42C518;
    case 0x7F42C51Cu: goto label_7F42C51C;
    case 0x7F42C520u: goto label_7F42C520;
    case 0x7F42C524u: goto label_7F42C524;
    case 0x7F42C528u: goto label_7F42C528;
    case 0x7F42C52Cu: goto label_7F42C52C;
    case 0x7F42C530u: goto label_7F42C530;
    case 0x7F42C534u: goto label_7F42C534;
    case 0x7F42C538u: goto label_7F42C538;
    case 0x7F42C53Cu: goto label_7F42C53C;
    case 0x7F42C540u: goto label_7F42C540;
    case 0x7F42C544u: goto label_7F42C544;
    case 0x7F42C548u: goto label_7F42C548;
    case 0x7F42C54Cu: goto label_7F42C54C;
    case 0x7F42C550u: goto label_7F42C550;
    case 0x7F42C554u: goto label_7F42C554;
    case 0x7F42C558u: goto label_7F42C558;
    case 0x7F42C55Cu: goto label_7F42C55C;
    case 0x7F42C560u: goto label_7F42C560;
    case 0x7F42C564u: goto label_7F42C564;
    case 0x7F42C568u: goto label_7F42C568;
    case 0x7F42C56Cu: goto label_7F42C56C;
    case 0x7F42C570u: goto label_7F42C570;
    case 0x7F42C574u: goto label_7F42C574;
    case 0x7F42C578u: goto label_7F42C578;
    case 0x7F42C57Cu: goto label_7F42C57C;
    case 0x7F42C580u: goto label_7F42C580;
    case 0x7F42C584u: goto label_7F42C584;
    case 0x7F42C588u: goto label_7F42C588;
    case 0x7F42C58Cu: goto label_7F42C58C;
    case 0x7F42C590u: goto label_7F42C590;
    case 0x7F42C594u: goto label_7F42C594;
    case 0x7F42C598u: goto label_7F42C598;
    case 0x7F42C59Cu: goto label_7F42C59C;
    case 0x7F42C5A0u: goto label_7F42C5A0;
    case 0x7F42C5A4u: goto label_7F42C5A4;
    case 0x7F42C5A8u: goto label_7F42C5A8;
    case 0x7F42C5ACu: goto label_7F42C5AC;
    case 0x7F42C5B0u: goto label_7F42C5B0;
    case 0x7F42C5B4u: goto label_7F42C5B4;
    case 0x7F42C5B8u: goto label_7F42C5B8;
    case 0x7F42C5BCu: goto label_7F42C5BC;
    case 0x7F42C5C0u: goto label_7F42C5C0;
    case 0x7F42C5C4u: goto label_7F42C5C4;
    case 0x7F42C5C8u: goto label_7F42C5C8;
    case 0x7F42C5CCu: goto label_7F42C5CC;
    case 0x7F42C5D0u: goto label_7F42C5D0;
    case 0x7F42C5D4u: goto label_7F42C5D4;
    case 0x7F42C5D8u: goto label_7F42C5D8;
    case 0x7F42C5DCu: goto label_7F42C5DC;
    case 0x7F42C5E0u: goto label_7F42C5E0;
    case 0x7F42C5E4u: goto label_7F42C5E4;
    case 0x7F42C5E8u: goto label_7F42C5E8;
    case 0x7F42C5ECu: goto label_7F42C5EC;
    case 0x7F42C5F0u: goto label_7F42C5F0;
    case 0x7F42C5F4u: goto label_7F42C5F4;
    case 0x7F42C5F8u: goto label_7F42C5F8;
    case 0x7F42C5FCu: goto label_7F42C5FC;
    case 0x7F42C600u: goto label_7F42C600;
    case 0x7F42C604u: goto label_7F42C604;
    case 0x7F42C608u: goto label_7F42C608;
    case 0x7F42C60Cu: goto label_7F42C60C;
    case 0x7F42C610u: goto label_7F42C610;
    case 0x7F42C614u: goto label_7F42C614;
    case 0x7F42C618u: goto label_7F42C618;
    case 0x7F42C61Cu: goto label_7F42C61C;
    case 0x7F42C620u: goto label_7F42C620;
    case 0x7F42C624u: goto label_7F42C624;
    case 0x7F42C628u: goto label_7F42C628;
    case 0x7F42C62Cu: goto label_7F42C62C;
    case 0x7F42C630u: goto label_7F42C630;
    case 0x7F42C634u: goto label_7F42C634;
    case 0x7F42C638u: goto label_7F42C638;
    case 0x7F42C63Cu: goto label_7F42C63C;
    case 0x7F42C640u: goto label_7F42C640;
    case 0x7F42C644u: goto label_7F42C644;
    case 0x7F42C648u: goto label_7F42C648;
    case 0x7F42C64Cu: goto label_7F42C64C;
    case 0x7F42C650u: goto label_7F42C650;
    case 0x7F42C654u: goto label_7F42C654;
    case 0x7F42C658u: goto label_7F42C658;
    case 0x7F42C65Cu: goto label_7F42C65C;
    case 0x7F42C660u: goto label_7F42C660;
    case 0x7F42C664u: goto label_7F42C664;
    case 0x7F42C668u: goto label_7F42C668;
    case 0x7F42C66Cu: goto label_7F42C66C;
    case 0x7F42C670u: goto label_7F42C670;
    case 0x7F42C674u: goto label_7F42C674;
    case 0x7F42C678u: goto label_7F42C678;
    case 0x7F42C67Cu: goto label_7F42C67C;
    case 0x7F42C680u: goto label_7F42C680;
    case 0x7F42C684u: goto label_7F42C684;
    case 0x7F42C688u: goto label_7F42C688;
    case 0x7F42C68Cu: goto label_7F42C68C;
    case 0x7F42C690u: goto label_7F42C690;
    case 0x7F42C694u: goto label_7F42C694;
    case 0x7F42C698u: goto label_7F42C698;
    case 0x7F42C69Cu: goto label_7F42C69C;
    case 0x7F42C6A0u: goto label_7F42C6A0;
    case 0x7F42C6A4u: goto label_7F42C6A4;
    case 0x7F42C6A8u: goto label_7F42C6A8;
    case 0x7F42C6ACu: goto label_7F42C6AC;
    case 0x7F42C6B0u: goto label_7F42C6B0;
    case 0x7F42C6B4u: goto label_7F42C6B4;
    case 0x7F42C6B8u: goto label_7F42C6B8;
    case 0x7F42C6BCu: goto label_7F42C6BC;
    case 0x7F42C6C0u: goto label_7F42C6C0;
    case 0x7F42C6C4u: goto label_7F42C6C4;
    case 0x7F42C6C8u: goto label_7F42C6C8;
    case 0x7F42C6CCu: goto label_7F42C6CC;
    case 0x7F42C6D0u: goto label_7F42C6D0;
    case 0x7F42C6D4u: goto label_7F42C6D4;
    case 0x7F42C6D8u: goto label_7F42C6D8;
    case 0x7F42C6DCu: goto label_7F42C6DC;
    case 0x7F42C6E0u: goto label_7F42C6E0;
    case 0x7F42C6E4u: goto label_7F42C6E4;
    case 0x7F42C6E8u: goto label_7F42C6E8;
    case 0x7F42C6ECu: goto label_7F42C6EC;
    case 0x7F42C6F0u: goto label_7F42C6F0;
    case 0x7F42C6F4u: goto label_7F42C6F4;
    case 0x7F42C6F8u: goto label_7F42C6F8;
    case 0x7F42C6FCu: goto label_7F42C6FC;
    case 0x7F42C700u: goto label_7F42C700;
    case 0x7F42C704u: goto label_7F42C704;
    case 0x7F42C708u: goto label_7F42C708;
    case 0x7F42C70Cu: goto label_7F42C70C;
    case 0x7F42C710u: goto label_7F42C710;
    case 0x7F42C714u: goto label_7F42C714;
    case 0x7F42C718u: goto label_7F42C718;
    case 0x7F42C71Cu: goto label_7F42C71C;
    case 0x7F42C720u: goto label_7F42C720;
    case 0x7F42C724u: goto label_7F42C724;
    case 0x7F42C728u: goto label_7F42C728;
    case 0x7F42C72Cu: goto label_7F42C72C;
    case 0x7F42C730u: goto label_7F42C730;
    case 0x7F42C734u: goto label_7F42C734;
    case 0x7F42C738u: goto label_7F42C738;
    case 0x7F42C73Cu: goto label_7F42C73C;
    case 0x7F42C740u: goto label_7F42C740;
    case 0x7F42C744u: goto label_7F42C744;
    case 0x7F42C748u: goto label_7F42C748;
    case 0x7F42C74Cu: goto label_7F42C74C;
    case 0x7F42C750u: goto label_7F42C750;
    case 0x7F42C754u: goto label_7F42C754;
    case 0x7F42C758u: goto label_7F42C758;
    case 0x7F42C75Cu: goto label_7F42C75C;
    case 0x7F42C760u: goto label_7F42C760;
    case 0x7F42C764u: goto label_7F42C764;
    case 0x7F42C768u: goto label_7F42C768;
    case 0x7F42C76Cu: goto label_7F42C76C;
    case 0x7F42C770u: goto label_7F42C770;
    case 0x7F42C774u: goto label_7F42C774;
    case 0x7F42C778u: goto label_7F42C778;
    case 0x7F42C77Cu: goto label_7F42C77C;
    case 0x7F42C780u: goto label_7F42C780;
    case 0x7F42C784u: goto label_7F42C784;
    case 0x7F42C788u: goto label_7F42C788;
    case 0x7F42C78Cu: goto label_7F42C78C;
    case 0x7F42C790u: goto label_7F42C790;
    case 0x7F42C794u: goto label_7F42C794;
    case 0x7F42C798u: goto label_7F42C798;
    case 0x7F42C79Cu: goto label_7F42C79C;
    case 0x7F42C7A0u: goto label_7F42C7A0;
    case 0x7F42C7A4u: goto label_7F42C7A4;
    case 0x7F42C7A8u: goto label_7F42C7A8;
    case 0x7F42C7ACu: goto label_7F42C7AC;
    case 0x7F42C7B0u: goto label_7F42C7B0;
    case 0x7F42C7B4u: goto label_7F42C7B4;
    case 0x7F42C7B8u: goto label_7F42C7B8;
    case 0x7F42C7BCu: goto label_7F42C7BC;
    case 0x7F42C7C0u: goto label_7F42C7C0;
    case 0x7F42C7C4u: goto label_7F42C7C4;
    case 0x7F42C7C8u: goto label_7F42C7C8;
    case 0x7F42C7CCu: goto label_7F42C7CC;
    case 0x7F42C7D0u: goto label_7F42C7D0;
    case 0x7F42C7D4u: goto label_7F42C7D4;
    case 0x7F42C7D8u: goto label_7F42C7D8;
    case 0x7F42C7DCu: goto label_7F42C7DC;
    case 0x7F42C7E0u: goto label_7F42C7E0;
    case 0x7F42C7E4u: goto label_7F42C7E4;
    case 0x7F42C7E8u: goto label_7F42C7E8;
    case 0x7F42C7ECu: goto label_7F42C7EC;
    case 0x7F42C7F0u: goto label_7F42C7F0;
    case 0x7F42C7F4u: goto label_7F42C7F4;
    case 0x7F42C7F8u: goto label_7F42C7F8;
    case 0x7F42C7FCu: goto label_7F42C7FC;
    case 0x7F42C800u: goto label_7F42C800;
    case 0x7F42C804u: goto label_7F42C804;
    case 0x7F42C808u: goto label_7F42C808;
    case 0x7F42C80Cu: goto label_7F42C80C;
    case 0x7F42C810u: goto label_7F42C810;
    case 0x7F42C814u: goto label_7F42C814;
    case 0x7F42C818u: goto label_7F42C818;
    case 0x7F42C81Cu: goto label_7F42C81C;
    case 0x7F42C820u: goto label_7F42C820;
    case 0x7F42C824u: goto label_7F42C824;
    case 0x7F42C828u: goto label_7F42C828;
    case 0x7F42C82Cu: goto label_7F42C82C;
    case 0x7F42C830u: goto label_7F42C830;
    case 0x7F42C834u: goto label_7F42C834;
    case 0x7F42C838u: goto label_7F42C838;
    case 0x7F42C83Cu: goto label_7F42C83C;
    case 0x7F42C840u: goto label_7F42C840;
    case 0x7F42C844u: goto label_7F42C844;
    case 0x7F42C848u: goto label_7F42C848;
    case 0x7F42C84Cu: goto label_7F42C84C;
    case 0x7F42C850u: goto label_7F42C850;
    case 0x7F42C854u: goto label_7F42C854;
    case 0x7F42C858u: goto label_7F42C858;
    case 0x7F42C85Cu: goto label_7F42C85C;
    case 0x7F42C860u: goto label_7F42C860;
    case 0x7F42C864u: goto label_7F42C864;
    case 0x7F42C868u: goto label_7F42C868;
    case 0x7F42C86Cu: goto label_7F42C86C;
    case 0x7F42C870u: goto label_7F42C870;
    case 0x7F42C874u: goto label_7F42C874;
    case 0x7F42C878u: goto label_7F42C878;
    case 0x7F42C87Cu: goto label_7F42C87C;
    case 0x7F42C880u: goto label_7F42C880;
    case 0x7F42C884u: goto label_7F42C884;
    case 0x7F42C888u: goto label_7F42C888;
    case 0x7F42C88Cu: goto label_7F42C88C;
    case 0x7F42C890u: goto label_7F42C890;
    case 0x7F42C894u: goto label_7F42C894;
    case 0x7F42C898u: goto label_7F42C898;
    case 0x7F42C89Cu: goto label_7F42C89C;
    case 0x7F42C8A0u: goto label_7F42C8A0;
    case 0x7F42C8A4u: goto label_7F42C8A4;
    case 0x7F42C8A8u: goto label_7F42C8A8;
    case 0x7F42C8ACu: goto label_7F42C8AC;
    case 0x7F42C8B0u: goto label_7F42C8B0;
    case 0x7F42C8B4u: goto label_7F42C8B4;
    case 0x7F42C8B8u: goto label_7F42C8B8;
    case 0x7F42C8BCu: goto label_7F42C8BC;
    case 0x7F42C8C0u: goto label_7F42C8C0;
    case 0x7F42C8C4u: goto label_7F42C8C4;
    case 0x7F42C8C8u: goto label_7F42C8C8;
    case 0x7F42C8CCu: goto label_7F42C8CC;
    case 0x7F42C8D0u: goto label_7F42C8D0;
    case 0x7F42C8D4u: goto label_7F42C8D4;
    case 0x7F42C8D8u: goto label_7F42C8D8;
    case 0x7F42C8DCu: goto label_7F42C8DC;
    case 0x7F42C8E0u: goto label_7F42C8E0;
    case 0x7F42C8E4u: goto label_7F42C8E4;
    case 0x7F42C8E8u: goto label_7F42C8E8;
    case 0x7F42C8ECu: goto label_7F42C8EC;
    case 0x7F42C8F0u: goto label_7F42C8F0;
    case 0x7F42C8F4u: goto label_7F42C8F4;
    case 0x7F42C8F8u: goto label_7F42C8F8;
    case 0x7F42C8FCu: goto label_7F42C8FC;
    case 0x7F42C900u: goto label_7F42C900;
    case 0x7F42C904u: goto label_7F42C904;
    case 0x7F42C908u: goto label_7F42C908;
    case 0x7F42C90Cu: goto label_7F42C90C;
    case 0x7F42C910u: goto label_7F42C910;
    case 0x7F42C914u: goto label_7F42C914;
    case 0x7F42C918u: goto label_7F42C918;
    case 0x7F42C91Cu: goto label_7F42C91C;
    case 0x7F42C920u: goto label_7F42C920;
    case 0x7F42C924u: goto label_7F42C924;
    case 0x7F42C928u: goto label_7F42C928;
    case 0x7F42C92Cu: goto label_7F42C92C;
    case 0x7F42C930u: goto label_7F42C930;
    case 0x7F42C934u: goto label_7F42C934;
    case 0x7F42C938u: goto label_7F42C938;
    case 0x7F42C93Cu: goto label_7F42C93C;
    case 0x7F42C940u: goto label_7F42C940;
    case 0x7F42C944u: goto label_7F42C944;
    case 0x7F42C948u: goto label_7F42C948;
    case 0x7F42C94Cu: goto label_7F42C94C;
    case 0x7F42C950u: goto label_7F42C950;
    case 0x7F42C954u: goto label_7F42C954;
    case 0x7F42C958u: goto label_7F42C958;
    case 0x7F42C95Cu: goto label_7F42C95C;
    case 0x7F42C960u: goto label_7F42C960;
    case 0x7F42C964u: goto label_7F42C964;
    case 0x7F42C968u: goto label_7F42C968;
    case 0x7F42C96Cu: goto label_7F42C96C;
    case 0x7F42C970u: goto label_7F42C970;
    case 0x7F42C974u: goto label_7F42C974;
    case 0x7F42C978u: goto label_7F42C978;
    case 0x7F42C97Cu: goto label_7F42C97C;
    case 0x7F42C980u: goto label_7F42C980;
    case 0x7F42C984u: goto label_7F42C984;
    case 0x7F42C988u: goto label_7F42C988;
    case 0x7F42C98Cu: goto label_7F42C98C;
    case 0x7F42C990u: goto label_7F42C990;
    case 0x7F42C994u: goto label_7F42C994;
    case 0x7F42C998u: goto label_7F42C998;
    case 0x7F42C99Cu: goto label_7F42C99C;
    case 0x7F42C9A0u: goto label_7F42C9A0;
    case 0x7F42C9A4u: goto label_7F42C9A4;
    case 0x7F42C9A8u: goto label_7F42C9A8;
    case 0x7F42C9ACu: goto label_7F42C9AC;
    case 0x7F42C9B0u: goto label_7F42C9B0;
    case 0x7F42C9B4u: goto label_7F42C9B4;
    case 0x7F42C9B8u: goto label_7F42C9B8;
    case 0x7F42C9BCu: goto label_7F42C9BC;
    case 0x7F42C9C0u: goto label_7F42C9C0;
    case 0x7F42C9C4u: goto label_7F42C9C4;
    case 0x7F42C9C8u: goto label_7F42C9C8;
    case 0x7F42C9CCu: goto label_7F42C9CC;
    case 0x7F42C9D0u: goto label_7F42C9D0;
    case 0x7F42C9D4u: goto label_7F42C9D4;
    case 0x7F42C9D8u: goto label_7F42C9D8;
    case 0x7F42C9DCu: goto label_7F42C9DC;
    case 0x7F42C9E0u: goto label_7F42C9E0;
    case 0x7F42C9E4u: goto label_7F42C9E4;
    case 0x7F42C9E8u: goto label_7F42C9E8;
    case 0x7F42C9ECu: goto label_7F42C9EC;
    case 0x7F42C9F0u: goto label_7F42C9F0;
    case 0x7F42C9F4u: goto label_7F42C9F4;
    case 0x7F42C9F8u: goto label_7F42C9F8;
    case 0x7F42C9FCu: goto label_7F42C9FC;
    case 0x7F42CA00u: goto label_7F42CA00;
    case 0x7F42CA04u: goto label_7F42CA04;
    case 0x7F42CA08u: goto label_7F42CA08;
    case 0x7F42CA0Cu: goto label_7F42CA0C;
    case 0x7F42CA10u: goto label_7F42CA10;
    case 0x7F42CA14u: goto label_7F42CA14;
    case 0x7F42CA18u: goto label_7F42CA18;
    case 0x7F42CA1Cu: goto label_7F42CA1C;
    case 0x7F42CA20u: goto label_7F42CA20;
    case 0x7F42CA24u: goto label_7F42CA24;
    case 0x7F42CA28u: goto label_7F42CA28;
    case 0x7F42CA2Cu: goto label_7F42CA2C;
    case 0x7F42CA30u: goto label_7F42CA30;
    case 0x7F42CA34u: goto label_7F42CA34;
    case 0x7F42CA38u: goto label_7F42CA38;
    case 0x7F42CA3Cu: goto label_7F42CA3C;
    case 0x7F42CA40u: goto label_7F42CA40;
    case 0x7F42CA44u: goto label_7F42CA44;
    case 0x7F42CA48u: goto label_7F42CA48;
    case 0x7F42CA4Cu: goto label_7F42CA4C;
    case 0x7F42CA50u: goto label_7F42CA50;
    case 0x7F42CA54u: goto label_7F42CA54;
    case 0x7F42CA58u: goto label_7F42CA58;
    case 0x7F42CA5Cu: goto label_7F42CA5C;
    case 0x7F42CA60u: goto label_7F42CA60;
    case 0x7F42CA64u: goto label_7F42CA64;
    case 0x7F42CA68u: goto label_7F42CA68;
    case 0x7F42CA6Cu: goto label_7F42CA6C;
    case 0x7F42CA70u: goto label_7F42CA70;
    case 0x7F42CA74u: goto label_7F42CA74;
    case 0x7F42CA78u: goto label_7F42CA78;
    case 0x7F42CA7Cu: goto label_7F42CA7C;
    case 0x7F42CA80u: goto label_7F42CA80;
    case 0x7F42CA84u: goto label_7F42CA84;
    case 0x7F42CA88u: goto label_7F42CA88;
    case 0x7F42CA8Cu: goto label_7F42CA8C;
    case 0x7F42CA90u: goto label_7F42CA90;
    case 0x7F42CA94u: goto label_7F42CA94;
    case 0x7F42CA98u: goto label_7F42CA98;
    case 0x7F42CA9Cu: goto label_7F42CA9C;
    case 0x7F42CAA0u: goto label_7F42CAA0;
    case 0x7F42CAA4u: goto label_7F42CAA4;
    case 0x7F42CAA8u: goto label_7F42CAA8;
    case 0x7F42CAACu: goto label_7F42CAAC;
    case 0x7F42CAB0u: goto label_7F42CAB0;
    case 0x7F42CAB4u: goto label_7F42CAB4;
    case 0x7F42CAB8u: goto label_7F42CAB8;
    case 0x7F42CABCu: goto label_7F42CABC;
    case 0x7F42CAC0u: goto label_7F42CAC0;
    case 0x7F42CAC4u: goto label_7F42CAC4;
    case 0x7F42CAC8u: goto label_7F42CAC8;
    case 0x7F42CACCu: goto label_7F42CACC;
    case 0x7F42CAD0u: goto label_7F42CAD0;
    case 0x7F42CAD4u: goto label_7F42CAD4;
    case 0x7F42CAD8u: goto label_7F42CAD8;
    case 0x7F42CADCu: goto label_7F42CADC;
    case 0x7F42CAE0u: goto label_7F42CAE0;
    case 0x7F42CAE4u: goto label_7F42CAE4;
    case 0x7F42CAE8u: goto label_7F42CAE8;
    case 0x7F42CAECu: goto label_7F42CAEC;
    case 0x7F42CAF0u: goto label_7F42CAF0;
    case 0x7F42CAF4u: goto label_7F42CAF4;
    case 0x7F42CAF8u: goto label_7F42CAF8;
    case 0x7F42CAFCu: goto label_7F42CAFC;
    case 0x7F42CB00u: goto label_7F42CB00;
    case 0x7F42CB04u: goto label_7F42CB04;
    case 0x7F42CB08u: goto label_7F42CB08;
    case 0x7F42CB0Cu: goto label_7F42CB0C;
    case 0x7F42CB10u: goto label_7F42CB10;
    case 0x7F42CB14u: goto label_7F42CB14;
    case 0x7F42CB18u: goto label_7F42CB18;
    case 0x7F42CB1Cu: goto label_7F42CB1C;
    case 0x7F42CB20u: goto label_7F42CB20;
    case 0x7F42CB24u: goto label_7F42CB24;
    case 0x7F42CB28u: goto label_7F42CB28;
    case 0x7F42CB2Cu: goto label_7F42CB2C;
    case 0x7F42CB30u: goto label_7F42CB30;
    case 0x7F42CB34u: goto label_7F42CB34;
    case 0x7F42CB38u: goto label_7F42CB38;
    case 0x7F42CB3Cu: goto label_7F42CB3C;
    case 0x7F42CB40u: goto label_7F42CB40;
    case 0x7F42CB44u: goto label_7F42CB44;
    case 0x7F42CB48u: goto label_7F42CB48;
    case 0x7F42CB4Cu: goto label_7F42CB4C;
    case 0x7F42CB50u: goto label_7F42CB50;
    case 0x7F42CB54u: goto label_7F42CB54;
    case 0x7F42CB58u: goto label_7F42CB58;
    case 0x7F42CB5Cu: goto label_7F42CB5C;
    case 0x7F42CB60u: goto label_7F42CB60;
    case 0x7F42CB64u: goto label_7F42CB64;
    case 0x7F42CB68u: goto label_7F42CB68;
    case 0x7F42CB6Cu: goto label_7F42CB6C;
    case 0x7F42CB70u: goto label_7F42CB70;
    case 0x7F42CB74u: goto label_7F42CB74;
    case 0x7F42CB78u: goto label_7F42CB78;
    case 0x7F42CB7Cu: goto label_7F42CB7C;
    case 0x7F42CB80u: goto label_7F42CB80;
    case 0x7F42CB84u: goto label_7F42CB84;
    case 0x7F42CB88u: goto label_7F42CB88;
    case 0x7F42CB8Cu: goto label_7F42CB8C;
    case 0x7F42CB90u: goto label_7F42CB90;
    case 0x7F42CB94u: goto label_7F42CB94;
    case 0x7F42CB98u: goto label_7F42CB98;
    case 0x7F42CB9Cu: goto label_7F42CB9C;
    case 0x7F42CBA0u: goto label_7F42CBA0;
    case 0x7F42CBA4u: goto label_7F42CBA4;
    case 0x7F42CBA8u: goto label_7F42CBA8;
    case 0x7F42CBACu: goto label_7F42CBAC;
    case 0x7F42CBB0u: goto label_7F42CBB0;
    case 0x7F42CBB4u: goto label_7F42CBB4;
    case 0x7F42CBB8u: goto label_7F42CBB8;
    case 0x7F42CBBCu: goto label_7F42CBBC;
    case 0x7F42CBC0u: goto label_7F42CBC0;
    case 0x7F42CBC4u: goto label_7F42CBC4;
    case 0x7F42CBC8u: goto label_7F42CBC8;
    case 0x7F42CBCCu: goto label_7F42CBCC;
    case 0x7F42CBD0u: goto label_7F42CBD0;
    case 0x7F42CBD4u: goto label_7F42CBD4;
    case 0x7F42CBD8u: goto label_7F42CBD8;
    case 0x7F42CBDCu: goto label_7F42CBDC;
    case 0x7F42CBE0u: goto label_7F42CBE0;
    case 0x7F42CBE4u: goto label_7F42CBE4;
    case 0x7F42CBE8u: goto label_7F42CBE8;
    case 0x7F42CBECu: goto label_7F42CBEC;
    case 0x7F42CBF0u: goto label_7F42CBF0;
    case 0x7F42CBF4u: goto label_7F42CBF4;
    case 0x7F42CBF8u: goto label_7F42CBF8;
    case 0x7F42CBFCu: goto label_7F42CBFC;
    case 0x7F42CC00u: goto label_7F42CC00;
    case 0x7F42CC04u: goto label_7F42CC04;
    case 0x7F42CC08u: goto label_7F42CC08;
    case 0x7F42CC0Cu: goto label_7F42CC0C;
    case 0x7F42CC10u: goto label_7F42CC10;
    case 0x7F42CC14u: goto label_7F42CC14;
    case 0x7F42CC18u: goto label_7F42CC18;
    case 0x7F42CC1Cu: goto label_7F42CC1C;
    case 0x7F42CC20u: goto label_7F42CC20;
    case 0x7F42CC24u: goto label_7F42CC24;
    case 0x7F42CC28u: goto label_7F42CC28;
    case 0x7F42CC2Cu: goto label_7F42CC2C;
    case 0x7F42CC30u: goto label_7F42CC30;
    case 0x7F42CC34u: goto label_7F42CC34;
    case 0x7F42CC38u: goto label_7F42CC38;
    case 0x7F42CC3Cu: goto label_7F42CC3C;
    case 0x7F42CC40u: goto label_7F42CC40;
    case 0x7F42CC44u: goto label_7F42CC44;
    case 0x7F42CC48u: goto label_7F42CC48;
    case 0x7F42CC4Cu: goto label_7F42CC4C;
    case 0x7F42CC50u: goto label_7F42CC50;
    case 0x7F42CC54u: goto label_7F42CC54;
    case 0x7F42CC58u: goto label_7F42CC58;
    case 0x7F42CC5Cu: goto label_7F42CC5C;
    case 0x7F42CC60u: goto label_7F42CC60;
    case 0x7F42CC64u: goto label_7F42CC64;
    case 0x7F42CC68u: goto label_7F42CC68;
    case 0x7F42CC6Cu: goto label_7F42CC6C;
    case 0x7F42CC70u: goto label_7F42CC70;
    case 0x7F42CC74u: goto label_7F42CC74;
    case 0x7F42CC78u: goto label_7F42CC78;
    case 0x7F42CC7Cu: goto label_7F42CC7C;
    case 0x7F42CC80u: goto label_7F42CC80;
    case 0x7F42CC84u: goto label_7F42CC84;
    case 0x7F42CC88u: goto label_7F42CC88;
    case 0x7F42CC8Cu: goto label_7F42CC8C;
    case 0x7F42CC90u: goto label_7F42CC90;
    case 0x7F42CC94u: goto label_7F42CC94;
    case 0x7F42CC98u: goto label_7F42CC98;
    case 0x7F42CC9Cu: goto label_7F42CC9C;
    case 0x7F42CCA0u: goto label_7F42CCA0;
    case 0x7F42CCA4u: goto label_7F42CCA4;
    case 0x7F42CCA8u: goto label_7F42CCA8;
    case 0x7F42CCACu: goto label_7F42CCAC;
    case 0x7F42CCB0u: goto label_7F42CCB0;
    case 0x7F42CCB4u: goto label_7F42CCB4;
    case 0x7F42CCB8u: goto label_7F42CCB8;
    case 0x7F42CCBCu: goto label_7F42CCBC;
    case 0x7F42CCC0u: goto label_7F42CCC0;
    case 0x7F42CCC4u: goto label_7F42CCC4;
    case 0x7F42CCC8u: goto label_7F42CCC8;
    case 0x7F42CCCCu: goto label_7F42CCCC;
    case 0x7F42CCD0u: goto label_7F42CCD0;
    case 0x7F42CCD4u: goto label_7F42CCD4;
    case 0x7F42CCD8u: goto label_7F42CCD8;
    case 0x7F42CCDCu: goto label_7F42CCDC;
    case 0x7F42CCE0u: goto label_7F42CCE0;
    case 0x7F42CCE4u: goto label_7F42CCE4;
    case 0x7F42CCE8u: goto label_7F42CCE8;
    case 0x7F42CCECu: goto label_7F42CCEC;
    case 0x7F42CCF0u: goto label_7F42CCF0;
    case 0x7F42CCF4u: goto label_7F42CCF4;
    case 0x7F42CCF8u: goto label_7F42CCF8;
    case 0x7F42CCFCu: goto label_7F42CCFC;
    case 0x7F42CD00u: goto label_7F42CD00;
    case 0x7F42CD04u: goto label_7F42CD04;
    case 0x7F42CD08u: goto label_7F42CD08;
    case 0x7F42CD0Cu: goto label_7F42CD0C;
    case 0x7F42CD10u: goto label_7F42CD10;
    case 0x7F42CD14u: goto label_7F42CD14;
    case 0x7F42CD18u: goto label_7F42CD18;
    case 0x7F42CD1Cu: goto label_7F42CD1C;
    case 0x7F42CD20u: goto label_7F42CD20;
    case 0x7F42CD24u: goto label_7F42CD24;
    case 0x7F42CD28u: goto label_7F42CD28;
    case 0x7F42CD2Cu: goto label_7F42CD2C;
    case 0x7F42CD30u: goto label_7F42CD30;
    case 0x7F42CD34u: goto label_7F42CD34;
    case 0x7F42CD38u: goto label_7F42CD38;
    case 0x7F42CD3Cu: goto label_7F42CD3C;
    case 0x7F42CD40u: goto label_7F42CD40;
    case 0x7F42CD44u: goto label_7F42CD44;
    case 0x7F42CD48u: goto label_7F42CD48;
    case 0x7F42CD4Cu: goto label_7F42CD4C;
    case 0x7F42CD50u: goto label_7F42CD50;
    case 0x7F42CD54u: goto label_7F42CD54;
    case 0x7F42CD58u: goto label_7F42CD58;
    case 0x7F42CD5Cu: goto label_7F42CD5C;
    case 0x7F42CD60u: goto label_7F42CD60;
    case 0x7F42CD64u: goto label_7F42CD64;
    case 0x7F42CD68u: goto label_7F42CD68;
    case 0x7F42CD6Cu: goto label_7F42CD6C;
    case 0x7F42CD70u: goto label_7F42CD70;
    case 0x7F42CD74u: goto label_7F42CD74;
    case 0x7F42CD78u: goto label_7F42CD78;
    case 0x7F42CD7Cu: goto label_7F42CD7C;
    case 0x7F42CD80u: goto label_7F42CD80;
    case 0x7F42CD84u: goto label_7F42CD84;
    case 0x7F42CD88u: goto label_7F42CD88;
    case 0x7F42CD8Cu: goto label_7F42CD8C;
    case 0x7F42CD90u: goto label_7F42CD90;
    case 0x7F42CD94u: goto label_7F42CD94;
    case 0x7F42CD98u: goto label_7F42CD98;
    case 0x7F42CD9Cu: goto label_7F42CD9C;
    case 0x7F42CDA0u: goto label_7F42CDA0;
    case 0x7F42CDA4u: goto label_7F42CDA4;
    case 0x7F42CDA8u: goto label_7F42CDA8;
    case 0x7F42CDACu: goto label_7F42CDAC;
    case 0x7F42CDB0u: goto label_7F42CDB0;
    case 0x7F42CDB4u: goto label_7F42CDB4;
    case 0x7F42CDB8u: goto label_7F42CDB8;
    case 0x7F42CDBCu: goto label_7F42CDBC;
    case 0x7F42CDC0u: goto label_7F42CDC0;
    case 0x7F42CDC4u: goto label_7F42CDC4;
    case 0x7F42CDC8u: goto label_7F42CDC8;
    case 0x7F42CDCCu: goto label_7F42CDCC;
    case 0x7F42CDD0u: goto label_7F42CDD0;
    case 0x7F42CDD4u: goto label_7F42CDD4;
    case 0x7F42CDD8u: goto label_7F42CDD8;
    case 0x7F42CDDCu: goto label_7F42CDDC;
    case 0x7F42CDE0u: goto label_7F42CDE0;
    case 0x7F42CDE4u: goto label_7F42CDE4;
    case 0x7F42CDE8u: goto label_7F42CDE8;
    case 0x7F42CDECu: goto label_7F42CDEC;
    case 0x7F42CDF0u: goto label_7F42CDF0;
    case 0x7F42CDF4u: goto label_7F42CDF4;
    case 0x7F42CDF8u: goto label_7F42CDF8;
    case 0x7F42CDFCu: goto label_7F42CDFC;
    case 0x7F42CE00u: goto label_7F42CE00;
    case 0x7F42CE04u: goto label_7F42CE04;
    case 0x7F42CE08u: goto label_7F42CE08;
    case 0x7F42CE0Cu: goto label_7F42CE0C;
    case 0x7F42CE10u: goto label_7F42CE10;
    case 0x7F42CE14u: goto label_7F42CE14;
    case 0x7F42CE18u: goto label_7F42CE18;
    case 0x7F42CE1Cu: goto label_7F42CE1C;
    case 0x7F42CE20u: goto label_7F42CE20;
    case 0x7F42CE24u: goto label_7F42CE24;
    case 0x7F42CE28u: goto label_7F42CE28;
    case 0x7F42CE2Cu: goto label_7F42CE2C;
    case 0x7F42CE30u: goto label_7F42CE30;
    case 0x7F42CE34u: goto label_7F42CE34;
    case 0x7F42CE38u: goto label_7F42CE38;
    case 0x7F42CE3Cu: goto label_7F42CE3C;
    case 0x7F42CE40u: goto label_7F42CE40;
    case 0x7F42CE44u: goto label_7F42CE44;
    case 0x7F42CE48u: goto label_7F42CE48;
    case 0x7F42CE4Cu: goto label_7F42CE4C;
    case 0x7F42CE50u: goto label_7F42CE50;
    case 0x7F42CE54u: goto label_7F42CE54;
    case 0x7F42CE58u: goto label_7F42CE58;
    case 0x7F42CE5Cu: goto label_7F42CE5C;
    case 0x7F42CE60u: goto label_7F42CE60;
    case 0x7F42CE64u: goto label_7F42CE64;
    case 0x7F42CE68u: goto label_7F42CE68;
    case 0x7F42CE6Cu: goto label_7F42CE6C;
    case 0x7F42CE70u: goto label_7F42CE70;
    case 0x7F42CE74u: goto label_7F42CE74;
    case 0x7F42CE78u: goto label_7F42CE78;
    case 0x7F42CE7Cu: goto label_7F42CE7C;
    case 0x7F42CE80u: goto label_7F42CE80;
    case 0x7F42CE84u: goto label_7F42CE84;
    case 0x7F42CE88u: goto label_7F42CE88;
    case 0x7F42CE8Cu: goto label_7F42CE8C;
    case 0x7F42CE90u: goto label_7F42CE90;
    case 0x7F42CE94u: goto label_7F42CE94;
    case 0x7F42CE98u: goto label_7F42CE98;
    case 0x7F42CE9Cu: goto label_7F42CE9C;
    case 0x7F42CEA0u: goto label_7F42CEA0;
    case 0x7F42CEA4u: goto label_7F42CEA4;
    case 0x7F42CEA8u: goto label_7F42CEA8;
    case 0x7F42CEACu: goto label_7F42CEAC;
    case 0x7F42CEB0u: goto label_7F42CEB0;
    case 0x7F42CEB4u: goto label_7F42CEB4;
    case 0x7F42CEB8u: goto label_7F42CEB8;
    case 0x7F42CEBCu: goto label_7F42CEBC;
    case 0x7F42CEC0u: goto label_7F42CEC0;
    case 0x7F42CEC4u: goto label_7F42CEC4;
    case 0x7F42CEC8u: goto label_7F42CEC8;
    case 0x7F42CECCu: goto label_7F42CECC;
    case 0x7F42CED0u: goto label_7F42CED0;
    case 0x7F42CED4u: goto label_7F42CED4;
    case 0x7F42CED8u: goto label_7F42CED8;
    case 0x7F42CEDCu: goto label_7F42CEDC;
    case 0x7F42CEE0u: goto label_7F42CEE0;
    case 0x7F42CEE4u: goto label_7F42CEE4;
    case 0x7F42CEE8u: goto label_7F42CEE8;
    case 0x7F42CEECu: goto label_7F42CEEC;
    case 0x7F42CEF0u: goto label_7F42CEF0;
    case 0x7F42CEF4u: goto label_7F42CEF4;
    case 0x7F42CEF8u: goto label_7F42CEF8;
    case 0x7F42CEFCu: goto label_7F42CEFC;
    case 0x7F42CF00u: goto label_7F42CF00;
    case 0x7F42CF04u: goto label_7F42CF04;
    case 0x7F42CF08u: goto label_7F42CF08;
    case 0x7F42CF0Cu: goto label_7F42CF0C;
    case 0x7F42CF10u: goto label_7F42CF10;
    case 0x7F42CF14u: goto label_7F42CF14;
    case 0x7F42CF18u: goto label_7F42CF18;
    case 0x7F42CF1Cu: goto label_7F42CF1C;
    case 0x7F42CF20u: goto label_7F42CF20;
    case 0x7F42CF24u: goto label_7F42CF24;
    case 0x7F42CF28u: goto label_7F42CF28;
    case 0x7F42CF2Cu: goto label_7F42CF2C;
    case 0x7F42CF30u: goto label_7F42CF30;
    case 0x7F42CF34u: goto label_7F42CF34;
    case 0x7F42CF38u: goto label_7F42CF38;
    case 0x7F42CF3Cu: goto label_7F42CF3C;
    case 0x7F42CF40u: goto label_7F42CF40;
    case 0x7F42CF44u: goto label_7F42CF44;
    case 0x7F42CF48u: goto label_7F42CF48;
    case 0x7F42CF4Cu: goto label_7F42CF4C;
    case 0x7F42CF50u: goto label_7F42CF50;
    case 0x7F42CF54u: goto label_7F42CF54;
    case 0x7F42CF58u: goto label_7F42CF58;
    case 0x7F42CF5Cu: goto label_7F42CF5C;
    case 0x7F42CF60u: goto label_7F42CF60;
    case 0x7F42CF64u: goto label_7F42CF64;
    case 0x7F42CF68u: goto label_7F42CF68;
    case 0x7F42CF6Cu: goto label_7F42CF6C;
    case 0x7F42CF70u: goto label_7F42CF70;
    case 0x7F42CF74u: goto label_7F42CF74;
    case 0x7F42CF78u: goto label_7F42CF78;
    case 0x7F42CF7Cu: goto label_7F42CF7C;
    case 0x7F42CF80u: goto label_7F42CF80;
    case 0x7F42CF84u: goto label_7F42CF84;
    case 0x7F42CF88u: goto label_7F42CF88;
    case 0x7F42CF8Cu: goto label_7F42CF8C;
    case 0x7F42CF90u: goto label_7F42CF90;
    case 0x7F42CF94u: goto label_7F42CF94;
    case 0x7F42CF98u: goto label_7F42CF98;
    case 0x7F42CF9Cu: goto label_7F42CF9C;
    case 0x7F42CFA0u: goto label_7F42CFA0;
    case 0x7F42CFA4u: goto label_7F42CFA4;
    case 0x7F42CFA8u: goto label_7F42CFA8;
    case 0x7F42CFACu: goto label_7F42CFAC;
    case 0x7F42CFB0u: goto label_7F42CFB0;
    case 0x7F42CFB4u: goto label_7F42CFB4;
    case 0x7F42CFB8u: goto label_7F42CFB8;
    case 0x7F42CFBCu: goto label_7F42CFBC;
    case 0x7F42CFC0u: goto label_7F42CFC0;
    case 0x7F42CFC4u: goto label_7F42CFC4;
    case 0x7F42CFC8u: goto label_7F42CFC8;
    case 0x7F42CFCCu: goto label_7F42CFCC;
    case 0x7F42CFD0u: goto label_7F42CFD0;
    case 0x7F42CFD4u: goto label_7F42CFD4;
    case 0x7F42CFD8u: goto label_7F42CFD8;
    case 0x7F42CFDCu: goto label_7F42CFDC;
    case 0x7F42CFE0u: goto label_7F42CFE0;
    case 0x7F42CFE4u: goto label_7F42CFE4;
    case 0x7F42CFE8u: goto label_7F42CFE8;
    case 0x7F42CFECu: goto label_7F42CFEC;
    case 0x7F42CFF0u: goto label_7F42CFF0;
    case 0x7F42CFF4u: goto label_7F42CFF4;
    case 0x7F42CFF8u: goto label_7F42CFF8;
    case 0x7F42CFFCu: goto label_7F42CFFC;
    case 0x7F42D000u: goto label_7F42D000;
    case 0x7F42D004u: goto label_7F42D004;
    case 0x7F42D008u: goto label_7F42D008;
    case 0x7F42D00Cu: goto label_7F42D00C;
    case 0x7F42D010u: goto label_7F42D010;
    case 0x7F42D014u: goto label_7F42D014;
    case 0x7F42D018u: goto label_7F42D018;
    case 0x7F42D01Cu: goto label_7F42D01C;
    case 0x7F42D020u: goto label_7F42D020;
    case 0x7F42D024u: goto label_7F42D024;
    case 0x7F42D028u: goto label_7F42D028;
    case 0x7F42D02Cu: goto label_7F42D02C;
    case 0x7F42D030u: goto label_7F42D030;
    case 0x7F42D034u: goto label_7F42D034;
    case 0x7F42D038u: goto label_7F42D038;
    case 0x7F42D03Cu: goto label_7F42D03C;
    case 0x7F42D040u: goto label_7F42D040;
    case 0x7F42D044u: goto label_7F42D044;
    case 0x7F42D048u: goto label_7F42D048;
    case 0x7F42D04Cu: goto label_7F42D04C;
    case 0x7F42D050u: goto label_7F42D050;
    case 0x7F42D054u: goto label_7F42D054;
    case 0x7F42D058u: goto label_7F42D058;
    case 0x7F42D05Cu: goto label_7F42D05C;
    case 0x7F42D060u: goto label_7F42D060;
    case 0x7F42D064u: goto label_7F42D064;
    case 0x7F42D068u: goto label_7F42D068;
    case 0x7F42D06Cu: goto label_7F42D06C;
    case 0x7F42D070u: goto label_7F42D070;
    case 0x7F42D074u: goto label_7F42D074;
    case 0x7F42D078u: goto label_7F42D078;
    case 0x7F42D07Cu: goto label_7F42D07C;
    case 0x7F42D080u: goto label_7F42D080;
    case 0x7F42D084u: goto label_7F42D084;
    case 0x7F42D088u: goto label_7F42D088;
    case 0x7F42D08Cu: goto label_7F42D08C;
    case 0x7F42D090u: goto label_7F42D090;
    case 0x7F42D094u: goto label_7F42D094;
    case 0x7F42D098u: goto label_7F42D098;
    case 0x7F42D09Cu: goto label_7F42D09C;
    case 0x7F42D0A0u: goto label_7F42D0A0;
    case 0x7F42D0A4u: goto label_7F42D0A4;
    case 0x7F42D0A8u: goto label_7F42D0A8;
    case 0x7F42D0ACu: goto label_7F42D0AC;
    case 0x7F42D0B0u: goto label_7F42D0B0;
    case 0x7F42D0B4u: goto label_7F42D0B4;
    case 0x7F42D0B8u: goto label_7F42D0B8;
    case 0x7F42D0BCu: goto label_7F42D0BC;
    case 0x7F42D0C0u: goto label_7F42D0C0;
    case 0x7F42D0C4u: goto label_7F42D0C4;
    case 0x7F42D0C8u: goto label_7F42D0C8;
    case 0x7F42D0CCu: goto label_7F42D0CC;
    case 0x7F42D0D0u: goto label_7F42D0D0;
    case 0x7F42D0D4u: goto label_7F42D0D4;
    case 0x7F42D0D8u: goto label_7F42D0D8;
    case 0x7F42D0DCu: goto label_7F42D0DC;
    case 0x7F42D0E0u: goto label_7F42D0E0;
    case 0x7F42D0E4u: goto label_7F42D0E4;
    case 0x7F42D0E8u: goto label_7F42D0E8;
    case 0x7F42D0ECu: goto label_7F42D0EC;
    case 0x7F42D0F0u: goto label_7F42D0F0;
    case 0x7F42D0F4u: goto label_7F42D0F4;
    case 0x7F42D0F8u: goto label_7F42D0F8;
    case 0x7F42D0FCu: goto label_7F42D0FC;
    case 0x7F42D100u: goto label_7F42D100;
    case 0x7F42D104u: goto label_7F42D104;
    case 0x7F42D108u: goto label_7F42D108;
    case 0x7F42D10Cu: goto label_7F42D10C;
    case 0x7F42D110u: goto label_7F42D110;
    case 0x7F42D114u: goto label_7F42D114;
    case 0x7F42D118u: goto label_7F42D118;
    case 0x7F42D11Cu: goto label_7F42D11C;
    case 0x7F42D120u: goto label_7F42D120;
    case 0x7F42D124u: goto label_7F42D124;
    case 0x7F42D128u: goto label_7F42D128;
    case 0x7F42D12Cu: goto label_7F42D12C;
    case 0x7F42D130u: goto label_7F42D130;
    case 0x7F42D134u: goto label_7F42D134;
    case 0x7F42D138u: goto label_7F42D138;
    case 0x7F42D13Cu: goto label_7F42D13C;
    case 0x7F42D140u: goto label_7F42D140;
    case 0x7F42D144u: goto label_7F42D144;
    case 0x7F42D148u: goto label_7F42D148;
    case 0x7F42D14Cu: goto label_7F42D14C;
    case 0x7F42D150u: goto label_7F42D150;
    case 0x7F42D154u: goto label_7F42D154;
    case 0x7F42D158u: goto label_7F42D158;
    case 0x7F42D15Cu: goto label_7F42D15C;
    case 0x7F42D160u: goto label_7F42D160;
    case 0x7F42D164u: goto label_7F42D164;
    case 0x7F42D168u: goto label_7F42D168;
    case 0x7F42D16Cu: goto label_7F42D16C;
    case 0x7F42D170u: goto label_7F42D170;
    case 0x7F42D174u: goto label_7F42D174;
    case 0x7F42D178u: goto label_7F42D178;
    case 0x7F42D17Cu: goto label_7F42D17C;
    case 0x7F42D180u: goto label_7F42D180;
    case 0x7F42D184u: goto label_7F42D184;
    case 0x7F42D188u: goto label_7F42D188;
    case 0x7F42D18Cu: goto label_7F42D18C;
    case 0x7F42D190u: goto label_7F42D190;
    case 0x7F42D194u: goto label_7F42D194;
    case 0x7F42D198u: goto label_7F42D198;
    case 0x7F42D19Cu: goto label_7F42D19C;
    case 0x7F42D1A0u: goto label_7F42D1A0;
    case 0x7F42D1A4u: goto label_7F42D1A4;
    case 0x7F42D1A8u: goto label_7F42D1A8;
    case 0x7F42D1ACu: goto label_7F42D1AC;
    case 0x7F42D1B0u: goto label_7F42D1B0;
    case 0x7F42D1B4u: goto label_7F42D1B4;
    case 0x7F42D1B8u: goto label_7F42D1B8;
    case 0x7F42D1BCu: goto label_7F42D1BC;
    case 0x7F42D1C0u: goto label_7F42D1C0;
    case 0x7F42D1C4u: goto label_7F42D1C4;
    case 0x7F42D1C8u: goto label_7F42D1C8;
    case 0x7F42D1CCu: goto label_7F42D1CC;
    case 0x7F42D1D0u: goto label_7F42D1D0;
    case 0x7F42D1D4u: goto label_7F42D1D4;
    case 0x7F42D1D8u: goto label_7F42D1D8;
    case 0x7F42D1DCu: goto label_7F42D1DC;
    case 0x7F42D1E0u: goto label_7F42D1E0;
    case 0x7F42D1E4u: goto label_7F42D1E4;
    case 0x7F42D1E8u: goto label_7F42D1E8;
    case 0x7F42D1ECu: goto label_7F42D1EC;
    case 0x7F42D1F0u: goto label_7F42D1F0;
    case 0x7F42D1F4u: goto label_7F42D1F4;
    case 0x7F42D1F8u: goto label_7F42D1F8;
    case 0x7F42D1FCu: goto label_7F42D1FC;
    case 0x7F42D200u: goto label_7F42D200;
    case 0x7F42D204u: goto label_7F42D204;
    case 0x7F42D208u: goto label_7F42D208;
    case 0x7F42D20Cu: goto label_7F42D20C;
    case 0x7F42D210u: goto label_7F42D210;
    case 0x7F42D214u: goto label_7F42D214;
    case 0x7F42D218u: goto label_7F42D218;
    case 0x7F42D21Cu: goto label_7F42D21C;
    case 0x7F42D220u: goto label_7F42D220;
    case 0x7F42D224u: goto label_7F42D224;
    case 0x7F42D228u: goto label_7F42D228;
    case 0x7F42D22Cu: goto label_7F42D22C;
    case 0x7F42D230u: goto label_7F42D230;
    case 0x7F42D234u: goto label_7F42D234;
    case 0x7F42D238u: goto label_7F42D238;
    case 0x7F42D23Cu: goto label_7F42D23C;
    case 0x7F42D240u: goto label_7F42D240;
    case 0x7F42D244u: goto label_7F42D244;
    case 0x7F42D248u: goto label_7F42D248;
    case 0x7F42D24Cu: goto label_7F42D24C;
    case 0x7F42D250u: goto label_7F42D250;
    case 0x7F42D254u: goto label_7F42D254;
    case 0x7F42D258u: goto label_7F42D258;
    case 0x7F42D25Cu: goto label_7F42D25C;
    case 0x7F42D260u: goto label_7F42D260;
    case 0x7F42D264u: goto label_7F42D264;
    case 0x7F42D268u: goto label_7F42D268;
    case 0x7F42D26Cu: goto label_7F42D26C;
    case 0x7F42D270u: goto label_7F42D270;
    case 0x7F42D274u: goto label_7F42D274;
    case 0x7F42D278u: goto label_7F42D278;
    case 0x7F42D27Cu: goto label_7F42D27C;
    case 0x7F42D280u: goto label_7F42D280;
    case 0x7F42D284u: goto label_7F42D284;
    case 0x7F42D288u: goto label_7F42D288;
    case 0x7F42D28Cu: goto label_7F42D28C;
    case 0x7F42D290u: goto label_7F42D290;
    case 0x7F42D294u: goto label_7F42D294;
    case 0x7F42D298u: goto label_7F42D298;
    case 0x7F42D29Cu: goto label_7F42D29C;
    case 0x7F42D2A0u: goto label_7F42D2A0;
    case 0x7F42D2A4u: goto label_7F42D2A4;
    case 0x7F42D2A8u: goto label_7F42D2A8;
    case 0x7F42D2ACu: goto label_7F42D2AC;
    case 0x7F42D2B0u: goto label_7F42D2B0;
    case 0x7F42D2B4u: goto label_7F42D2B4;
    case 0x7F42D2B8u: goto label_7F42D2B8;
    case 0x7F42D2BCu: goto label_7F42D2BC;
    case 0x7F42D2C0u: goto label_7F42D2C0;
    case 0x7F42D2C4u: goto label_7F42D2C4;
    case 0x7F42D2C8u: goto label_7F42D2C8;
    case 0x7F42D2CCu: goto label_7F42D2CC;
    case 0x7F42D2D0u: goto label_7F42D2D0;
    case 0x7F42D2D4u: goto label_7F42D2D4;
    case 0x7F42D2D8u: goto label_7F42D2D8;
    case 0x7F42D2DCu: goto label_7F42D2DC;
    case 0x7F42D2E0u: goto label_7F42D2E0;
    case 0x7F42D2E4u: goto label_7F42D2E4;
    case 0x7F42D2E8u: goto label_7F42D2E8;
    case 0x7F42D2ECu: goto label_7F42D2EC;
    case 0x7F42D2F0u: goto label_7F42D2F0;
    case 0x7F42D2F4u: goto label_7F42D2F4;
    case 0x7F42D2F8u: goto label_7F42D2F8;
    case 0x7F42D2FCu: goto label_7F42D2FC;
    case 0x7F42D300u: goto label_7F42D300;
    case 0x7F42D304u: goto label_7F42D304;
    case 0x7F42D308u: goto label_7F42D308;
    case 0x7F42D30Cu: goto label_7F42D30C;
    case 0x7F42D310u: goto label_7F42D310;
    case 0x7F42D314u: goto label_7F42D314;
    case 0x7F42D318u: goto label_7F42D318;
    case 0x7F42D31Cu: goto label_7F42D31C;
    case 0x7F42D320u: goto label_7F42D320;
    case 0x7F42D324u: goto label_7F42D324;
    case 0x7F42D328u: goto label_7F42D328;
    case 0x7F42D32Cu: goto label_7F42D32C;
    case 0x7F42D330u: goto label_7F42D330;
    case 0x7F42D334u: goto label_7F42D334;
    case 0x7F42D338u: goto label_7F42D338;
    case 0x7F42D33Cu: goto label_7F42D33C;
    case 0x7F42D340u: goto label_7F42D340;
    case 0x7F42D344u: goto label_7F42D344;
    case 0x7F42D348u: goto label_7F42D348;
    case 0x7F42D34Cu: goto label_7F42D34C;
    case 0x7F42D350u: goto label_7F42D350;
    case 0x7F42D354u: goto label_7F42D354;
    case 0x7F42D358u: goto label_7F42D358;
    case 0x7F42D35Cu: goto label_7F42D35C;
    case 0x7F42D360u: goto label_7F42D360;
    case 0x7F42D364u: goto label_7F42D364;
    case 0x7F42D368u: goto label_7F42D368;
    case 0x7F42D36Cu: goto label_7F42D36C;
    case 0x7F42D370u: goto label_7F42D370;
    case 0x7F42D374u: goto label_7F42D374;
    case 0x7F42D378u: goto label_7F42D378;
    case 0x7F42D37Cu: goto label_7F42D37C;
    case 0x7F42D380u: goto label_7F42D380;
    case 0x7F42D384u: goto label_7F42D384;
    case 0x7F42D388u: goto label_7F42D388;
    case 0x7F42D38Cu: goto label_7F42D38C;
    case 0x7F42D390u: goto label_7F42D390;
    case 0x7F42D394u: goto label_7F42D394;
    case 0x7F42D398u: goto label_7F42D398;
    case 0x7F42D39Cu: goto label_7F42D39C;
    case 0x7F42D3A0u: goto label_7F42D3A0;
    case 0x7F42D3A4u: goto label_7F42D3A4;
    case 0x7F42D3A8u: goto label_7F42D3A8;
    case 0x7F42D3ACu: goto label_7F42D3AC;
    case 0x7F42D3B0u: goto label_7F42D3B0;
    case 0x7F42D3B4u: goto label_7F42D3B4;
    case 0x7F42D3B8u: goto label_7F42D3B8;
    case 0x7F42D3BCu: goto label_7F42D3BC;
    case 0x7F42D3C0u: goto label_7F42D3C0;
    case 0x7F42D3C4u: goto label_7F42D3C4;
    case 0x7F42D3C8u: goto label_7F42D3C8;
    case 0x7F42D3CCu: goto label_7F42D3CC;
    case 0x7F42D3D0u: goto label_7F42D3D0;
    case 0x7F42D3D4u: goto label_7F42D3D4;
    case 0x7F42D3D8u: goto label_7F42D3D8;
    case 0x7F42D3DCu: goto label_7F42D3DC;
    case 0x7F42D3E0u: goto label_7F42D3E0;
    case 0x7F42D3E4u: goto label_7F42D3E4;
    case 0x7F42D3E8u: goto label_7F42D3E8;
    case 0x7F42D3ECu: goto label_7F42D3EC;
    case 0x7F42D3F0u: goto label_7F42D3F0;
    case 0x7F42D3F4u: goto label_7F42D3F4;
    case 0x7F42D3F8u: goto label_7F42D3F8;
    case 0x7F42D3FCu: goto label_7F42D3FC;
    case 0x7F42D400u: goto label_7F42D400;
    case 0x7F42D404u: goto label_7F42D404;
    case 0x7F42D408u: goto label_7F42D408;
    case 0x7F42D40Cu: goto label_7F42D40C;
    case 0x7F42D410u: goto label_7F42D410;
    case 0x7F42D414u: goto label_7F42D414;
    case 0x7F42D418u: goto label_7F42D418;
    case 0x7F42D41Cu: goto label_7F42D41C;
    case 0x7F42D420u: goto label_7F42D420;
    case 0x7F42D424u: goto label_7F42D424;
    case 0x7F42D428u: goto label_7F42D428;
    case 0x7F42D42Cu: goto label_7F42D42C;
    case 0x7F42D430u: goto label_7F42D430;
    case 0x7F42D434u: goto label_7F42D434;
    case 0x7F42D438u: goto label_7F42D438;
    case 0x7F42D43Cu: goto label_7F42D43C;
    case 0x7F42D440u: goto label_7F42D440;
    case 0x7F42D444u: goto label_7F42D444;
    case 0x7F42D448u: goto label_7F42D448;
    case 0x7F42D44Cu: goto label_7F42D44C;
    case 0x7F42D450u: goto label_7F42D450;
    case 0x7F42D454u: goto label_7F42D454;
    case 0x7F42D458u: goto label_7F42D458;
    case 0x7F42D45Cu: goto label_7F42D45C;
    case 0x7F42D460u: goto label_7F42D460;
    case 0x7F42D464u: goto label_7F42D464;
    case 0x7F42D468u: goto label_7F42D468;
    case 0x7F42D46Cu: goto label_7F42D46C;
    case 0x7F42D470u: goto label_7F42D470;
    case 0x7F42D474u: goto label_7F42D474;
    case 0x7F42D478u: goto label_7F42D478;
    case 0x7F42D47Cu: goto label_7F42D47C;
    case 0x7F42D480u: goto label_7F42D480;
    case 0x7F42D484u: goto label_7F42D484;
    case 0x7F42D488u: goto label_7F42D488;
    case 0x7F42D48Cu: goto label_7F42D48C;
    case 0x7F42D490u: goto label_7F42D490;
    case 0x7F42D494u: goto label_7F42D494;
    case 0x7F42D498u: goto label_7F42D498;
    case 0x7F42D49Cu: goto label_7F42D49C;
    case 0x7F42D4A0u: goto label_7F42D4A0;
    case 0x7F42D4A4u: goto label_7F42D4A4;
    case 0x7F42D4A8u: goto label_7F42D4A8;
    case 0x7F42D4ACu: goto label_7F42D4AC;
    case 0x7F42D4B0u: goto label_7F42D4B0;
    case 0x7F42D4B4u: goto label_7F42D4B4;
    case 0x7F42D4B8u: goto label_7F42D4B8;
    case 0x7F42D4BCu: goto label_7F42D4BC;
    case 0x7F42D4C0u: goto label_7F42D4C0;
    case 0x7F42D4C4u: goto label_7F42D4C4;
    case 0x7F42D4C8u: goto label_7F42D4C8;
    case 0x7F42D4CCu: goto label_7F42D4CC;
    case 0x7F42D4D0u: goto label_7F42D4D0;
    case 0x7F42D4D4u: goto label_7F42D4D4;
    case 0x7F42D4D8u: goto label_7F42D4D8;
    case 0x7F42D4DCu: goto label_7F42D4DC;
    case 0x7F42D4E0u: goto label_7F42D4E0;
    case 0x7F42D4E4u: goto label_7F42D4E4;
    case 0x7F42D4E8u: goto label_7F42D4E8;
    case 0x7F42D4ECu: goto label_7F42D4EC;
    case 0x7F42D4F0u: goto label_7F42D4F0;
    case 0x7F42D4F4u: goto label_7F42D4F4;
    case 0x7F42D4F8u: goto label_7F42D4F8;
    case 0x7F42D4FCu: goto label_7F42D4FC;
    case 0x7F42D500u: goto label_7F42D500;
    case 0x7F42D504u: goto label_7F42D504;
    case 0x7F42D508u: goto label_7F42D508;
    case 0x7F42D50Cu: goto label_7F42D50C;
    case 0x7F42D510u: goto label_7F42D510;
    case 0x7F42D514u: goto label_7F42D514;
    case 0x7F42D518u: goto label_7F42D518;
    case 0x7F42D51Cu: goto label_7F42D51C;
    case 0x7F42D520u: goto label_7F42D520;
    case 0x7F42D524u: goto label_7F42D524;
    case 0x7F42D528u: goto label_7F42D528;
    case 0x7F42D52Cu: goto label_7F42D52C;
    case 0x7F42D530u: goto label_7F42D530;
    case 0x7F42D534u: goto label_7F42D534;
    case 0x7F42D538u: goto label_7F42D538;
    case 0x7F42D53Cu: goto label_7F42D53C;
    case 0x7F42D540u: goto label_7F42D540;
    case 0x7F42D544u: goto label_7F42D544;
    case 0x7F42D548u: goto label_7F42D548;
    case 0x7F42D54Cu: goto label_7F42D54C;
    case 0x7F42D550u: goto label_7F42D550;
    case 0x7F42D554u: goto label_7F42D554;
    case 0x7F42D558u: goto label_7F42D558;
    case 0x7F42D55Cu: goto label_7F42D55C;
    case 0x7F42D560u: goto label_7F42D560;
    case 0x7F42D564u: goto label_7F42D564;
    case 0x7F42D568u: goto label_7F42D568;
    case 0x7F42D56Cu: goto label_7F42D56C;
    case 0x7F42D570u: goto label_7F42D570;
    case 0x7F42D574u: goto label_7F42D574;
    case 0x7F42D578u: goto label_7F42D578;
    case 0x7F42D57Cu: goto label_7F42D57C;
    case 0x7F42D580u: goto label_7F42D580;
    case 0x7F42D584u: goto label_7F42D584;
    case 0x7F42D588u: goto label_7F42D588;
    case 0x7F42D58Cu: goto label_7F42D58C;
    case 0x7F42D590u: goto label_7F42D590;
    case 0x7F42D594u: goto label_7F42D594;
    case 0x7F42D598u: goto label_7F42D598;
    case 0x7F42D59Cu: goto label_7F42D59C;
    case 0x7F42D5A0u: goto label_7F42D5A0;
    case 0x7F42D5A4u: goto label_7F42D5A4;
    case 0x7F42D5A8u: goto label_7F42D5A8;
    case 0x7F42D5ACu: goto label_7F42D5AC;
    case 0x7F42D5B0u: goto label_7F42D5B0;
    case 0x7F42D5B4u: goto label_7F42D5B4;
    case 0x7F42D5B8u: goto label_7F42D5B8;
    case 0x7F42D5BCu: goto label_7F42D5BC;
    case 0x7F42D5C0u: goto label_7F42D5C0;
    case 0x7F42D5C4u: goto label_7F42D5C4;
    case 0x7F42D5C8u: goto label_7F42D5C8;
    case 0x7F42D5CCu: goto label_7F42D5CC;
    case 0x7F42D5D0u: goto label_7F42D5D0;
    case 0x7F42D5D4u: goto label_7F42D5D4;
    case 0x7F42D5D8u: goto label_7F42D5D8;
    case 0x7F42D5DCu: goto label_7F42D5DC;
    case 0x7F42D5E0u: goto label_7F42D5E0;
    case 0x7F42D5E4u: goto label_7F42D5E4;
    case 0x7F42D5E8u: goto label_7F42D5E8;
    case 0x7F42D5ECu: goto label_7F42D5EC;
    case 0x7F42D5F0u: goto label_7F42D5F0;
    case 0x7F42D5F4u: goto label_7F42D5F4;
    case 0x7F42D5F8u: goto label_7F42D5F8;
    case 0x7F42D5FCu: goto label_7F42D5FC;
    case 0x7F42D600u: goto label_7F42D600;
    case 0x7F42D604u: goto label_7F42D604;
    case 0x7F42D608u: goto label_7F42D608;
    case 0x7F42D60Cu: goto label_7F42D60C;
    case 0x7F42D610u: goto label_7F42D610;
    case 0x7F42D614u: goto label_7F42D614;
    case 0x7F42D618u: goto label_7F42D618;
    case 0x7F42D61Cu: goto label_7F42D61C;
    case 0x7F42D620u: goto label_7F42D620;
    case 0x7F42D624u: goto label_7F42D624;
    case 0x7F42D628u: goto label_7F42D628;
    case 0x7F42D62Cu: goto label_7F42D62C;
    case 0x7F42D630u: goto label_7F42D630;
    case 0x7F42D634u: goto label_7F42D634;
    case 0x7F42D638u: goto label_7F42D638;
    case 0x7F42D63Cu: goto label_7F42D63C;
    case 0x7F42D640u: goto label_7F42D640;
    case 0x7F42D644u: goto label_7F42D644;
    case 0x7F42D648u: goto label_7F42D648;
    case 0x7F42D64Cu: goto label_7F42D64C;
    case 0x7F42D650u: goto label_7F42D650;
    case 0x7F42D654u: goto label_7F42D654;
    case 0x7F42D658u: goto label_7F42D658;
    case 0x7F42D65Cu: goto label_7F42D65C;
    case 0x7F42D660u: goto label_7F42D660;
    case 0x7F42D664u: goto label_7F42D664;
    case 0x7F42D668u: goto label_7F42D668;
    case 0x7F42D66Cu: goto label_7F42D66C;
    case 0x7F42D670u: goto label_7F42D670;
    case 0x7F42D674u: goto label_7F42D674;
    case 0x7F42D678u: goto label_7F42D678;
    case 0x7F42D67Cu: goto label_7F42D67C;
    case 0x7F42D680u: goto label_7F42D680;
    case 0x7F42D684u: goto label_7F42D684;
    case 0x7F42D688u: goto label_7F42D688;
    case 0x7F42D68Cu: goto label_7F42D68C;
    case 0x7F42D690u: goto label_7F42D690;
    case 0x7F42D694u: goto label_7F42D694;
    case 0x7F42D698u: goto label_7F42D698;
    case 0x7F42D69Cu: goto label_7F42D69C;
    case 0x7F42D6A0u: goto label_7F42D6A0;
    case 0x7F42D6A4u: goto label_7F42D6A4;
    case 0x7F42D6A8u: goto label_7F42D6A8;
    case 0x7F42D6ACu: goto label_7F42D6AC;
    case 0x7F42D6B0u: goto label_7F42D6B0;
    case 0x7F42D6B4u: goto label_7F42D6B4;
    case 0x7F42D6B8u: goto label_7F42D6B8;
    case 0x7F42D6BCu: goto label_7F42D6BC;
    case 0x7F42D6C0u: goto label_7F42D6C0;
    case 0x7F42D6C4u: goto label_7F42D6C4;
    case 0x7F42D6C8u: goto label_7F42D6C8;
    case 0x7F42D6CCu: goto label_7F42D6CC;
    case 0x7F42D6D0u: goto label_7F42D6D0;
    case 0x7F42D6D4u: goto label_7F42D6D4;
    case 0x7F42D6D8u: goto label_7F42D6D8;
    case 0x7F42D6DCu: goto label_7F42D6DC;
    case 0x7F42D6E0u: goto label_7F42D6E0;
    case 0x7F42D6E4u: goto label_7F42D6E4;
    case 0x7F42D6E8u: goto label_7F42D6E8;
    case 0x7F42D6ECu: goto label_7F42D6EC;
    case 0x7F42D6F0u: goto label_7F42D6F0;
    case 0x7F42D6F4u: goto label_7F42D6F4;
    case 0x7F42D6F8u: goto label_7F42D6F8;
    case 0x7F42D6FCu: goto label_7F42D6FC;
    case 0x7F42D700u: goto label_7F42D700;
    case 0x7F42D704u: goto label_7F42D704;
    case 0x7F42D708u: goto label_7F42D708;
    case 0x7F42D70Cu: goto label_7F42D70C;
    case 0x7F42D710u: goto label_7F42D710;
    case 0x7F42D714u: goto label_7F42D714;
    case 0x7F42D718u: goto label_7F42D718;
    case 0x7F42D71Cu: goto label_7F42D71C;
    case 0x7F42D720u: goto label_7F42D720;
    case 0x7F42D724u: goto label_7F42D724;
    case 0x7F42D728u: goto label_7F42D728;
    case 0x7F42D72Cu: goto label_7F42D72C;
    case 0x7F42D730u: goto label_7F42D730;
    case 0x7F42D734u: goto label_7F42D734;
    case 0x7F42D738u: goto label_7F42D738;
    case 0x7F42D73Cu: goto label_7F42D73C;
    case 0x7F42D740u: goto label_7F42D740;
    case 0x7F42D744u: goto label_7F42D744;
    case 0x7F42D748u: goto label_7F42D748;
    case 0x7F42D74Cu: goto label_7F42D74C;
    case 0x7F42D750u: goto label_7F42D750;
    case 0x7F42D754u: goto label_7F42D754;
    case 0x7F42D758u: goto label_7F42D758;
    case 0x7F42D75Cu: goto label_7F42D75C;
    case 0x7F42D760u: goto label_7F42D760;
    case 0x7F42D764u: goto label_7F42D764;
    case 0x7F42D768u: goto label_7F42D768;
    case 0x7F42D76Cu: goto label_7F42D76C;
    case 0x7F42D770u: goto label_7F42D770;
    case 0x7F42D774u: goto label_7F42D774;
    case 0x7F42D778u: goto label_7F42D778;
    case 0x7F42D77Cu: goto label_7F42D77C;
    case 0x7F42D780u: goto label_7F42D780;
    case 0x7F42D784u: goto label_7F42D784;
    case 0x7F42D788u: goto label_7F42D788;
    case 0x7F42D78Cu: goto label_7F42D78C;
    case 0x7F42D790u: goto label_7F42D790;
    case 0x7F42D794u: goto label_7F42D794;
    case 0x7F42D798u: goto label_7F42D798;
    case 0x7F42D79Cu: goto label_7F42D79C;
    case 0x7F42D7A0u: goto label_7F42D7A0;
    case 0x7F42D7A4u: goto label_7F42D7A4;
    case 0x7F42D7A8u: goto label_7F42D7A8;
    case 0x7F42D7ACu: goto label_7F42D7AC;
    case 0x7F42D7B0u: goto label_7F42D7B0;
    case 0x7F42D7B4u: goto label_7F42D7B4;
    case 0x7F42D7B8u: goto label_7F42D7B8;
    case 0x7F42D7BCu: goto label_7F42D7BC;
    case 0x7F42D7C0u: goto label_7F42D7C0;
    case 0x7F42D7C4u: goto label_7F42D7C4;
    case 0x7F42D7C8u: goto label_7F42D7C8;
    case 0x7F42D7CCu: goto label_7F42D7CC;
    case 0x7F42D7D0u: goto label_7F42D7D0;
    case 0x7F42D7D4u: goto label_7F42D7D4;
    case 0x7F42D7D8u: goto label_7F42D7D8;
    case 0x7F42D7DCu: goto label_7F42D7DC;
    case 0x7F42D7E0u: goto label_7F42D7E0;
    case 0x7F42D7E4u: goto label_7F42D7E4;
    case 0x7F42D7E8u: goto label_7F42D7E8;
    case 0x7F42D7ECu: goto label_7F42D7EC;
    case 0x7F42D7F0u: goto label_7F42D7F0;
    case 0x7F42D7F4u: goto label_7F42D7F4;
    case 0x7F42D7F8u: goto label_7F42D7F8;
    case 0x7F42D7FCu: goto label_7F42D7FC;
    case 0x7F42D800u: goto label_7F42D800;
    case 0x7F42D804u: goto label_7F42D804;
    case 0x7F42D808u: goto label_7F42D808;
    case 0x7F42D80Cu: goto label_7F42D80C;
    case 0x7F42D810u: goto label_7F42D810;
    case 0x7F42D814u: goto label_7F42D814;
    case 0x7F42D818u: goto label_7F42D818;
    case 0x7F42D81Cu: goto label_7F42D81C;
    case 0x7F42D820u: goto label_7F42D820;
    case 0x7F42D824u: goto label_7F42D824;
    case 0x7F42D828u: goto label_7F42D828;
    case 0x7F42D82Cu: goto label_7F42D82C;
    case 0x7F42D830u: goto label_7F42D830;
    case 0x7F42D834u: goto label_7F42D834;
    case 0x7F42D838u: goto label_7F42D838;
    case 0x7F42D83Cu: goto label_7F42D83C;
    case 0x7F42D840u: goto label_7F42D840;
    case 0x7F42D844u: goto label_7F42D844;
    case 0x7F42D848u: goto label_7F42D848;
    case 0x7F42D84Cu: goto label_7F42D84C;
    case 0x7F42D850u: goto label_7F42D850;
    case 0x7F42D854u: goto label_7F42D854;
    case 0x7F42D858u: goto label_7F42D858;
    case 0x7F42D85Cu: goto label_7F42D85C;
    case 0x7F42D860u: goto label_7F42D860;
    case 0x7F42D864u: goto label_7F42D864;
    case 0x7F42D868u: goto label_7F42D868;
    case 0x7F42D86Cu: goto label_7F42D86C;
    case 0x7F42D870u: goto label_7F42D870;
    case 0x7F42D874u: goto label_7F42D874;
    case 0x7F42D878u: goto label_7F42D878;
    case 0x7F42D87Cu: goto label_7F42D87C;
    case 0x7F42D880u: goto label_7F42D880;
    case 0x7F42D884u: goto label_7F42D884;
    case 0x7F42D888u: goto label_7F42D888;
    case 0x7F42D88Cu: goto label_7F42D88C;
    case 0x7F42D890u: goto label_7F42D890;
    case 0x7F42D894u: goto label_7F42D894;
    case 0x7F42D898u: goto label_7F42D898;
    case 0x7F42D89Cu: goto label_7F42D89C;
    case 0x7F42D8A0u: goto label_7F42D8A0;
    case 0x7F42D8A4u: goto label_7F42D8A4;
    case 0x7F42D8A8u: goto label_7F42D8A8;
    case 0x7F42D8ACu: goto label_7F42D8AC;
    case 0x7F42D8B0u: goto label_7F42D8B0;
    case 0x7F42D8B4u: goto label_7F42D8B4;
    case 0x7F42D8B8u: goto label_7F42D8B8;
    case 0x7F42D8BCu: goto label_7F42D8BC;
    case 0x7F42D8C0u: goto label_7F42D8C0;
    case 0x7F42D8C4u: goto label_7F42D8C4;
    case 0x7F42D8C8u: goto label_7F42D8C8;
    case 0x7F42D8CCu: goto label_7F42D8CC;
    case 0x7F42D8D0u: goto label_7F42D8D0;
    case 0x7F42D8D4u: goto label_7F42D8D4;
    case 0x7F42D8D8u: goto label_7F42D8D8;
    case 0x7F42D8DCu: goto label_7F42D8DC;
    case 0x7F42D8E0u: goto label_7F42D8E0;
    case 0x7F42D8E4u: goto label_7F42D8E4;
    case 0x7F42D8E8u: goto label_7F42D8E8;
    case 0x7F42D8ECu: goto label_7F42D8EC;
    case 0x7F42D8F0u: goto label_7F42D8F0;
    case 0x7F42D8F4u: goto label_7F42D8F4;
    case 0x7F42D8F8u: goto label_7F42D8F8;
    case 0x7F42D8FCu: goto label_7F42D8FC;
    case 0x7F42D900u: goto label_7F42D900;
    case 0x7F42D904u: goto label_7F42D904;
    case 0x7F42D908u: goto label_7F42D908;
    case 0x7F42D90Cu: goto label_7F42D90C;
    case 0x7F42D910u: goto label_7F42D910;
    case 0x7F42D914u: goto label_7F42D914;
    case 0x7F42D918u: goto label_7F42D918;
    case 0x7F42D91Cu: goto label_7F42D91C;
    case 0x7F42D920u: goto label_7F42D920;
    case 0x7F42D924u: goto label_7F42D924;
    case 0x7F42D928u: goto label_7F42D928;
    case 0x7F42D92Cu: goto label_7F42D92C;
    case 0x7F42D930u: goto label_7F42D930;
    case 0x7F42D934u: goto label_7F42D934;
    case 0x7F42D938u: goto label_7F42D938;
    case 0x7F42D93Cu: goto label_7F42D93C;
    case 0x7F42D940u: goto label_7F42D940;
    case 0x7F42D944u: goto label_7F42D944;
    case 0x7F42D948u: goto label_7F42D948;
    case 0x7F42D94Cu: goto label_7F42D94C;
    case 0x7F42D950u: goto label_7F42D950;
    case 0x7F42D954u: goto label_7F42D954;
    case 0x7F42D958u: goto label_7F42D958;
    case 0x7F42D95Cu: goto label_7F42D95C;
    case 0x7F42D960u: goto label_7F42D960;
    case 0x7F42D964u: goto label_7F42D964;
    case 0x7F42D968u: goto label_7F42D968;
    case 0x7F42D96Cu: goto label_7F42D96C;
    case 0x7F42D970u: goto label_7F42D970;
    case 0x7F42D974u: goto label_7F42D974;
    case 0x7F42D978u: goto label_7F42D978;
    case 0x7F42D97Cu: goto label_7F42D97C;
    case 0x7F42D980u: goto label_7F42D980;
    case 0x7F42D984u: goto label_7F42D984;
    case 0x7F42D988u: goto label_7F42D988;
    case 0x7F42D98Cu: goto label_7F42D98C;
    case 0x7F42D990u: goto label_7F42D990;
    case 0x7F42D994u: goto label_7F42D994;
    case 0x7F42D998u: goto label_7F42D998;
    case 0x7F42D99Cu: goto label_7F42D99C;
    case 0x7F42D9A0u: goto label_7F42D9A0;
    case 0x7F42D9A4u: goto label_7F42D9A4;
    case 0x7F42D9A8u: goto label_7F42D9A8;
    case 0x7F42D9ACu: goto label_7F42D9AC;
    case 0x7F42D9B0u: goto label_7F42D9B0;
    case 0x7F42D9B4u: goto label_7F42D9B4;
    case 0x7F42D9B8u: goto label_7F42D9B8;
    case 0x7F42D9BCu: goto label_7F42D9BC;
    case 0x7F42D9C0u: goto label_7F42D9C0;
    case 0x7F42D9C4u: goto label_7F42D9C4;
    case 0x7F42D9C8u: goto label_7F42D9C8;
    case 0x7F42D9CCu: goto label_7F42D9CC;
    case 0x7F42D9D0u: goto label_7F42D9D0;
    case 0x7F42D9D4u: goto label_7F42D9D4;
    case 0x7F42D9D8u: goto label_7F42D9D8;
    case 0x7F42D9DCu: goto label_7F42D9DC;
    case 0x7F42D9E0u: goto label_7F42D9E0;
    case 0x7F42D9E4u: goto label_7F42D9E4;
    case 0x7F42D9E8u: goto label_7F42D9E8;
    case 0x7F42D9ECu: goto label_7F42D9EC;
    case 0x7F42D9F0u: goto label_7F42D9F0;
    case 0x7F42D9F4u: goto label_7F42D9F4;
    case 0x7F42D9F8u: goto label_7F42D9F8;
    case 0x7F42D9FCu: goto label_7F42D9FC;
    case 0x7F42DA00u: goto label_7F42DA00;
    case 0x7F42DA04u: goto label_7F42DA04;
    case 0x7F42DA08u: goto label_7F42DA08;
    case 0x7F42DA0Cu: goto label_7F42DA0C;
    case 0x7F42DA10u: goto label_7F42DA10;
    case 0x7F42DA14u: goto label_7F42DA14;
    case 0x7F42DA18u: goto label_7F42DA18;
    case 0x7F42DA1Cu: goto label_7F42DA1C;
    case 0x7F42DA20u: goto label_7F42DA20;
    case 0x7F42DA24u: goto label_7F42DA24;
    case 0x7F42DA28u: goto label_7F42DA28;
    case 0x7F42DA2Cu: goto label_7F42DA2C;
    case 0x7F42DA30u: goto label_7F42DA30;
    case 0x7F42DA34u: goto label_7F42DA34;
    case 0x7F42DA38u: goto label_7F42DA38;
    case 0x7F42DA3Cu: goto label_7F42DA3C;
    case 0x7F42DA40u: goto label_7F42DA40;
    case 0x7F42DA44u: goto label_7F42DA44;
    case 0x7F42DA48u: goto label_7F42DA48;
    case 0x7F42DA4Cu: goto label_7F42DA4C;
    case 0x7F42DA50u: goto label_7F42DA50;
    case 0x7F42DA54u: goto label_7F42DA54;
    case 0x7F42DA58u: goto label_7F42DA58;
    case 0x7F42DA5Cu: goto label_7F42DA5C;
    case 0x7F42DA60u: goto label_7F42DA60;
    case 0x7F42DA64u: goto label_7F42DA64;
    case 0x7F42DA68u: goto label_7F42DA68;
    case 0x7F42DA6Cu: goto label_7F42DA6C;
    case 0x7F42DA70u: goto label_7F42DA70;
    case 0x7F42DA74u: goto label_7F42DA74;
    case 0x7F42DA78u: goto label_7F42DA78;
    case 0x7F42DA7Cu: goto label_7F42DA7C;
    case 0x7F42DA80u: goto label_7F42DA80;
    case 0x7F42DA84u: goto label_7F42DA84;
    case 0x7F42DA88u: goto label_7F42DA88;
    case 0x7F42DA8Cu: goto label_7F42DA8C;
    case 0x7F42DA90u: goto label_7F42DA90;
    case 0x7F42DA94u: goto label_7F42DA94;
    case 0x7F42DA98u: goto label_7F42DA98;
    case 0x7F42DA9Cu: goto label_7F42DA9C;
    case 0x7F42DAA0u: goto label_7F42DAA0;
    case 0x7F42DAA4u: goto label_7F42DAA4;
    case 0x7F42DAA8u: goto label_7F42DAA8;
    case 0x7F42DAACu: goto label_7F42DAAC;
    case 0x7F42DAB0u: goto label_7F42DAB0;
    case 0x7F42DAB4u: goto label_7F42DAB4;
    case 0x7F42DAB8u: goto label_7F42DAB8;
    case 0x7F42DABCu: goto label_7F42DABC;
    case 0x7F42DAC0u: goto label_7F42DAC0;
    case 0x7F42DAC4u: goto label_7F42DAC4;
    case 0x7F42DAC8u: goto label_7F42DAC8;
    case 0x7F42DACCu: goto label_7F42DACC;
    case 0x7F42DAD0u: goto label_7F42DAD0;
    case 0x7F42DAD4u: goto label_7F42DAD4;
    case 0x7F42DAD8u: goto label_7F42DAD8;
    case 0x7F42DADCu: goto label_7F42DADC;
    case 0x7F42DAE0u: goto label_7F42DAE0;
    case 0x7F42DAE4u: goto label_7F42DAE4;
    case 0x7F42DAE8u: goto label_7F42DAE8;
    case 0x7F42DAECu: goto label_7F42DAEC;
    case 0x7F42DAF0u: goto label_7F42DAF0;
    case 0x7F42DAF4u: goto label_7F42DAF4;
    case 0x7F42DAF8u: goto label_7F42DAF8;
    case 0x7F42DAFCu: goto label_7F42DAFC;
    case 0x7F42DB00u: goto label_7F42DB00;
    case 0x7F42DB04u: goto label_7F42DB04;
    case 0x7F42DB08u: goto label_7F42DB08;
    case 0x7F42DB0Cu: goto label_7F42DB0C;
    case 0x7F42DB10u: goto label_7F42DB10;
    case 0x7F42DB14u: goto label_7F42DB14;
    case 0x7F42DB18u: goto label_7F42DB18;
    case 0x7F42DB1Cu: goto label_7F42DB1C;
    case 0x7F42DB20u: goto label_7F42DB20;
    case 0x7F42DB24u: goto label_7F42DB24;
    case 0x7F42DB28u: goto label_7F42DB28;
    case 0x7F42DB2Cu: goto label_7F42DB2C;
    case 0x7F42DB30u: goto label_7F42DB30;
    case 0x7F42DB34u: goto label_7F42DB34;
    case 0x7F42DB38u: goto label_7F42DB38;
    case 0x7F42DB3Cu: goto label_7F42DB3C;
    case 0x7F42DB40u: goto label_7F42DB40;
    case 0x7F42DB44u: goto label_7F42DB44;
    case 0x7F42DB48u: goto label_7F42DB48;
    case 0x7F42DB4Cu: goto label_7F42DB4C;
    case 0x7F42DB50u: goto label_7F42DB50;
    case 0x7F42DB54u: goto label_7F42DB54;
    case 0x7F42DB58u: goto label_7F42DB58;
    case 0x7F42DB5Cu: goto label_7F42DB5C;
    case 0x7F42DB60u: goto label_7F42DB60;
    case 0x7F42DB64u: goto label_7F42DB64;
    case 0x7F42DB68u: goto label_7F42DB68;
    case 0x7F42DB6Cu: goto label_7F42DB6C;
    case 0x7F42DB70u: goto label_7F42DB70;
    case 0x7F42DB74u: goto label_7F42DB74;
    case 0x7F42DB78u: goto label_7F42DB78;
    case 0x7F42DB7Cu: goto label_7F42DB7C;
    case 0x7F42DB80u: goto label_7F42DB80;
    case 0x7F42DB84u: goto label_7F42DB84;
    case 0x7F42DB88u: goto label_7F42DB88;
    case 0x7F42DB8Cu: goto label_7F42DB8C;
    case 0x7F42DB90u: goto label_7F42DB90;
    case 0x7F42DB94u: goto label_7F42DB94;
    case 0x7F42DB98u: goto label_7F42DB98;
    case 0x7F42DB9Cu: goto label_7F42DB9C;
    case 0x7F42DBA0u: goto label_7F42DBA0;
    case 0x7F42DBA4u: goto label_7F42DBA4;
    case 0x7F42DBA8u: goto label_7F42DBA8;
    case 0x7F42DBACu: goto label_7F42DBAC;
    case 0x7F42DBB0u: goto label_7F42DBB0;
    case 0x7F42DBB4u: goto label_7F42DBB4;
    case 0x7F42DBB8u: goto label_7F42DBB8;
    case 0x7F42DBBCu: goto label_7F42DBBC;
    case 0x7F42DBC0u: goto label_7F42DBC0;
    case 0x7F42DBC4u: goto label_7F42DBC4;
    case 0x7F42DBC8u: goto label_7F42DBC8;
    case 0x7F42DBCCu: goto label_7F42DBCC;
    case 0x7F42DBD0u: goto label_7F42DBD0;
    case 0x7F42DBD4u: goto label_7F42DBD4;
    case 0x7F42DBD8u: goto label_7F42DBD8;
    case 0x7F42DBDCu: goto label_7F42DBDC;
    case 0x7F42DBE0u: goto label_7F42DBE0;
    case 0x7F42DBE4u: goto label_7F42DBE4;
    case 0x7F42DBE8u: goto label_7F42DBE8;
    case 0x7F42DBECu: goto label_7F42DBEC;
    case 0x7F42DBF0u: goto label_7F42DBF0;
    case 0x7F42DBF4u: goto label_7F42DBF4;
    case 0x7F42DBF8u: goto label_7F42DBF8;
    case 0x7F42DBFCu: goto label_7F42DBFC;
    case 0x7F42DC00u: goto label_7F42DC00;
    case 0x7F42DC04u: goto label_7F42DC04;
    case 0x7F42DC08u: goto label_7F42DC08;
    case 0x7F42DC0Cu: goto label_7F42DC0C;
    case 0x7F42DC10u: goto label_7F42DC10;
    case 0x7F42DC14u: goto label_7F42DC14;
    case 0x7F42DC18u: goto label_7F42DC18;
    case 0x7F42DC1Cu: goto label_7F42DC1C;
    case 0x7F42DC20u: goto label_7F42DC20;
    case 0x7F42DC24u: goto label_7F42DC24;
    case 0x7F42DC28u: goto label_7F42DC28;
    case 0x7F42DC2Cu: goto label_7F42DC2C;
    case 0x7F42DC30u: goto label_7F42DC30;
    case 0x7F42DC34u: goto label_7F42DC34;
    case 0x7F42DC38u: goto label_7F42DC38;
    case 0x7F42DC3Cu: goto label_7F42DC3C;
    case 0x7F42DC40u: goto label_7F42DC40;
    case 0x7F42DC44u: goto label_7F42DC44;
    case 0x7F42DC48u: goto label_7F42DC48;
    case 0x7F42DC4Cu: goto label_7F42DC4C;
    case 0x7F42DC50u: goto label_7F42DC50;
    case 0x7F42DC54u: goto label_7F42DC54;
    case 0x7F42DC58u: goto label_7F42DC58;
    case 0x7F42DC5Cu: goto label_7F42DC5C;
    case 0x7F42DC60u: goto label_7F42DC60;
    case 0x7F42DC64u: goto label_7F42DC64;
    case 0x7F42DC68u: goto label_7F42DC68;
    case 0x7F42DC6Cu: goto label_7F42DC6C;
    case 0x7F42DC70u: goto label_7F42DC70;
    case 0x7F42DC74u: goto label_7F42DC74;
    case 0x7F42DC78u: goto label_7F42DC78;
    case 0x7F42DC7Cu: goto label_7F42DC7C;
    case 0x7F42DC80u: goto label_7F42DC80;
    case 0x7F42DC84u: goto label_7F42DC84;
    case 0x7F42DC88u: goto label_7F42DC88;
    case 0x7F42DC8Cu: goto label_7F42DC8C;
    case 0x7F42DC90u: goto label_7F42DC90;
    case 0x7F42DC94u: goto label_7F42DC94;
    case 0x7F42DC98u: goto label_7F42DC98;
    case 0x7F42DC9Cu: goto label_7F42DC9C;
    case 0x7F42DCA0u: goto label_7F42DCA0;
    case 0x7F42DCA4u: goto label_7F42DCA4;
    case 0x7F42DCA8u: goto label_7F42DCA8;
    case 0x7F42DCACu: goto label_7F42DCAC;
    case 0x7F42DCB0u: goto label_7F42DCB0;
    case 0x7F42DCB4u: goto label_7F42DCB4;
    case 0x7F42DCB8u: goto label_7F42DCB8;
    case 0x7F42DCBCu: goto label_7F42DCBC;
    case 0x7F42DCC0u: goto label_7F42DCC0;
    case 0x7F42DCC4u: goto label_7F42DCC4;
    case 0x7F42DCC8u: goto label_7F42DCC8;
    case 0x7F42DCCCu: goto label_7F42DCCC;
    case 0x7F42DCD0u: goto label_7F42DCD0;
    case 0x7F42DCD4u: goto label_7F42DCD4;
    case 0x7F42DCD8u: goto label_7F42DCD8;
    case 0x7F42DCDCu: goto label_7F42DCDC;
    case 0x7F42DCE0u: goto label_7F42DCE0;
    case 0x7F42DCE4u: goto label_7F42DCE4;
    case 0x7F42DCE8u: goto label_7F42DCE8;
    case 0x7F42DCECu: goto label_7F42DCEC;
    case 0x7F42DCF0u: goto label_7F42DCF0;
    case 0x7F42DCF4u: goto label_7F42DCF4;
    case 0x7F42DCF8u: goto label_7F42DCF8;
    case 0x7F42DCFCu: goto label_7F42DCFC;
    case 0x7F42DD00u: goto label_7F42DD00;
    case 0x7F42DD04u: goto label_7F42DD04;
    case 0x7F42DD08u: goto label_7F42DD08;
    case 0x7F42DD0Cu: goto label_7F42DD0C;
    case 0x7F42DD10u: goto label_7F42DD10;
    case 0x7F42DD14u: goto label_7F42DD14;
    case 0x7F42DD18u: goto label_7F42DD18;
    case 0x7F42DD1Cu: goto label_7F42DD1C;
    case 0x7F42DD20u: goto label_7F42DD20;
    case 0x7F42DD24u: goto label_7F42DD24;
    case 0x7F42DD28u: goto label_7F42DD28;
    case 0x7F42DD2Cu: goto label_7F42DD2C;
    case 0x7F42DD30u: goto label_7F42DD30;
    case 0x7F42DD34u: goto label_7F42DD34;
    case 0x7F42DD38u: goto label_7F42DD38;
    case 0x7F42DD3Cu: goto label_7F42DD3C;
    case 0x7F42DD40u: goto label_7F42DD40;
    case 0x7F42DD44u: goto label_7F42DD44;
    case 0x7F42DD48u: goto label_7F42DD48;
    case 0x7F42DD4Cu: goto label_7F42DD4C;
    case 0x7F42DD50u: goto label_7F42DD50;
    case 0x7F42DD54u: goto label_7F42DD54;
    case 0x7F42DD58u: goto label_7F42DD58;
    case 0x7F42DD5Cu: goto label_7F42DD5C;
    case 0x7F42DD60u: goto label_7F42DD60;
    case 0x7F42DD64u: goto label_7F42DD64;
    case 0x7F42DD68u: goto label_7F42DD68;
    case 0x7F42DD6Cu: goto label_7F42DD6C;
    case 0x7F42DD70u: goto label_7F42DD70;
    case 0x7F42DD74u: goto label_7F42DD74;
    case 0x7F42DD78u: goto label_7F42DD78;
    case 0x7F42DD7Cu: goto label_7F42DD7C;
    case 0x7F42DD80u: goto label_7F42DD80;
    case 0x7F42DD84u: goto label_7F42DD84;
    case 0x7F42DD88u: goto label_7F42DD88;
    case 0x7F42DD8Cu: goto label_7F42DD8C;
    case 0x7F42DD90u: goto label_7F42DD90;
    case 0x7F42DD94u: goto label_7F42DD94;
    case 0x7F42DD98u: goto label_7F42DD98;
    case 0x7F42DD9Cu: goto label_7F42DD9C;
    case 0x7F42DDA0u: goto label_7F42DDA0;
    case 0x7F42DDA4u: goto label_7F42DDA4;
    case 0x7F42DDA8u: goto label_7F42DDA8;
    case 0x7F42DDACu: goto label_7F42DDAC;
    case 0x7F42DDB0u: goto label_7F42DDB0;
    case 0x7F42DDB4u: goto label_7F42DDB4;
    case 0x7F42DDB8u: goto label_7F42DDB8;
    case 0x7F42DDBCu: goto label_7F42DDBC;
    case 0x7F42DDC0u: goto label_7F42DDC0;
    case 0x7F42DDC4u: goto label_7F42DDC4;
    case 0x7F42DDC8u: goto label_7F42DDC8;
    case 0x7F42DDCCu: goto label_7F42DDCC;
    case 0x7F42DDD0u: goto label_7F42DDD0;
    case 0x7F42DDD4u: goto label_7F42DDD4;
    case 0x7F42DDD8u: goto label_7F42DDD8;
    case 0x7F42DDDCu: goto label_7F42DDDC;
    case 0x7F42DDE0u: goto label_7F42DDE0;
    case 0x7F42DDE4u: goto label_7F42DDE4;
    case 0x7F42DDE8u: goto label_7F42DDE8;
    case 0x7F42DDECu: goto label_7F42DDEC;
    case 0x7F42DDF0u: goto label_7F42DDF0;
    case 0x7F42DDF4u: goto label_7F42DDF4;
    case 0x7F42DDF8u: goto label_7F42DDF8;
    case 0x7F42DDFCu: goto label_7F42DDFC;
    case 0x7F42DE00u: goto label_7F42DE00;
    case 0x7F42DE04u: goto label_7F42DE04;
    case 0x7F42DE08u: goto label_7F42DE08;
    case 0x7F42DE0Cu: goto label_7F42DE0C;
    case 0x7F42DE10u: goto label_7F42DE10;
    case 0x7F42DE14u: goto label_7F42DE14;
    case 0x7F42DE18u: goto label_7F42DE18;
    case 0x7F42DE1Cu: goto label_7F42DE1C;
    case 0x7F42DE20u: goto label_7F42DE20;
    case 0x7F42DE24u: goto label_7F42DE24;
    case 0x7F42DE28u: goto label_7F42DE28;
    case 0x7F42DE2Cu: goto label_7F42DE2C;
    case 0x7F42DE30u: goto label_7F42DE30;
    case 0x7F42DE34u: goto label_7F42DE34;
    case 0x7F42DE38u: goto label_7F42DE38;
    case 0x7F42DE3Cu: goto label_7F42DE3C;
    case 0x7F42DE40u: goto label_7F42DE40;
    case 0x7F42DE44u: goto label_7F42DE44;
    case 0x7F42DE48u: goto label_7F42DE48;
    case 0x7F42DE4Cu: goto label_7F42DE4C;
    case 0x7F42DE50u: goto label_7F42DE50;
    case 0x7F42DE54u: goto label_7F42DE54;
    case 0x7F42DE58u: goto label_7F42DE58;
    case 0x7F42DE5Cu: goto label_7F42DE5C;
    case 0x7F42DE60u: goto label_7F42DE60;
    case 0x7F42DE64u: goto label_7F42DE64;
    case 0x7F42DE68u: goto label_7F42DE68;
    case 0x7F42DE6Cu: goto label_7F42DE6C;
    case 0x7F42DE70u: goto label_7F42DE70;
    case 0x7F42DE74u: goto label_7F42DE74;
    case 0x7F42DE78u: goto label_7F42DE78;
    case 0x7F42DE7Cu: goto label_7F42DE7C;
    case 0x7F42DE80u: goto label_7F42DE80;
    case 0x7F42DE84u: goto label_7F42DE84;
    case 0x7F42DE88u: goto label_7F42DE88;
    case 0x7F42DE8Cu: goto label_7F42DE8C;
    case 0x7F42DE90u: goto label_7F42DE90;
    case 0x7F42DE94u: goto label_7F42DE94;
    case 0x7F42DE98u: goto label_7F42DE98;
    case 0x7F42DE9Cu: goto label_7F42DE9C;
    case 0x7F42DEA0u: goto label_7F42DEA0;
    case 0x7F42DEA4u: goto label_7F42DEA4;
    case 0x7F42DEA8u: goto label_7F42DEA8;
    case 0x7F42DEACu: goto label_7F42DEAC;
    case 0x7F42DEB0u: goto label_7F42DEB0;
    case 0x7F42DEB4u: goto label_7F42DEB4;
    case 0x7F42DEB8u: goto label_7F42DEB8;
    case 0x7F42DEBCu: goto label_7F42DEBC;
    case 0x7F42DEC0u: goto label_7F42DEC0;
    case 0x7F42DEC4u: goto label_7F42DEC4;
    case 0x7F42DEC8u: goto label_7F42DEC8;
    case 0x7F42DECCu: goto label_7F42DECC;
    case 0x7F42DED0u: goto label_7F42DED0;
    case 0x7F42DED4u: goto label_7F42DED4;
    case 0x7F42DED8u: goto label_7F42DED8;
    case 0x7F42DEDCu: goto label_7F42DEDC;
    case 0x7F42DEE0u: goto label_7F42DEE0;
    case 0x7F42DEE4u: goto label_7F42DEE4;
    case 0x7F42DEE8u: goto label_7F42DEE8;
    case 0x7F42DEECu: goto label_7F42DEEC;
    case 0x7F42DEF0u: goto label_7F42DEF0;
    case 0x7F42DEF4u: goto label_7F42DEF4;
    case 0x7F42DEF8u: goto label_7F42DEF8;
    case 0x7F42DEFCu: goto label_7F42DEFC;
    case 0x7F42DF00u: goto label_7F42DF00;
    case 0x7F42DF04u: goto label_7F42DF04;
    case 0x7F42DF08u: goto label_7F42DF08;
    case 0x7F42DF0Cu: goto label_7F42DF0C;
    case 0x7F42DF10u: goto label_7F42DF10;
    case 0x7F42DF14u: goto label_7F42DF14;
    case 0x7F42DF18u: goto label_7F42DF18;
    case 0x7F42DF1Cu: goto label_7F42DF1C;
    case 0x7F42DF20u: goto label_7F42DF20;
    case 0x7F42DF24u: goto label_7F42DF24;
    case 0x7F42DF28u: goto label_7F42DF28;
    case 0x7F42DF2Cu: goto label_7F42DF2C;
    case 0x7F42DF30u: goto label_7F42DF30;
    case 0x7F42DF34u: goto label_7F42DF34;
    case 0x7F42DF38u: goto label_7F42DF38;
    case 0x7F42DF3Cu: goto label_7F42DF3C;
    case 0x7F42DF40u: goto label_7F42DF40;
    case 0x7F42DF44u: goto label_7F42DF44;
    case 0x7F42DF48u: goto label_7F42DF48;
    case 0x7F42DF4Cu: goto label_7F42DF4C;
    case 0x7F42DF50u: goto label_7F42DF50;
    case 0x7F42DF54u: goto label_7F42DF54;
    case 0x7F42DF58u: goto label_7F42DF58;
    case 0x7F42DF5Cu: goto label_7F42DF5C;
    case 0x7F42DF60u: goto label_7F42DF60;
    case 0x7F42DF64u: goto label_7F42DF64;
    case 0x7F42DF68u: goto label_7F42DF68;
    case 0x7F42DF6Cu: goto label_7F42DF6C;
    case 0x7F42DF70u: goto label_7F42DF70;
    case 0x7F42DF74u: goto label_7F42DF74;
    case 0x7F42DF78u: goto label_7F42DF78;
    case 0x7F42DF7Cu: goto label_7F42DF7C;
    case 0x7F42DF80u: goto label_7F42DF80;
    case 0x7F42DF84u: goto label_7F42DF84;
    case 0x7F42DF88u: goto label_7F42DF88;
    case 0x7F42DF8Cu: goto label_7F42DF8C;
    case 0x7F42DF90u: goto label_7F42DF90;
    case 0x7F42DF94u: goto label_7F42DF94;
    case 0x7F42DF98u: goto label_7F42DF98;
    case 0x7F42DF9Cu: goto label_7F42DF9C;
    case 0x7F42DFA0u: goto label_7F42DFA0;
    case 0x7F42DFA4u: goto label_7F42DFA4;
    case 0x7F42DFA8u: goto label_7F42DFA8;
    case 0x7F42DFACu: goto label_7F42DFAC;
    case 0x7F42DFB0u: goto label_7F42DFB0;
    case 0x7F42DFB4u: goto label_7F42DFB4;
    case 0x7F42DFB8u: goto label_7F42DFB8;
    case 0x7F42DFBCu: goto label_7F42DFBC;
    case 0x7F42DFC0u: goto label_7F42DFC0;
    case 0x7F42DFC4u: goto label_7F42DFC4;
    case 0x7F42DFC8u: goto label_7F42DFC8;
    case 0x7F42DFCCu: goto label_7F42DFCC;
    case 0x7F42DFD0u: goto label_7F42DFD0;
    case 0x7F42DFD4u: goto label_7F42DFD4;
    case 0x7F42DFD8u: goto label_7F42DFD8;
    case 0x7F42DFDCu: goto label_7F42DFDC;
    case 0x7F42DFE0u: goto label_7F42DFE0;
    case 0x7F42DFE4u: goto label_7F42DFE4;
    case 0x7F42DFE8u: goto label_7F42DFE8;
    case 0x7F42DFECu: goto label_7F42DFEC;
    case 0x7F42DFF0u: goto label_7F42DFF0;
    case 0x7F42DFF4u: goto label_7F42DFF4;
    case 0x7F42DFF8u: goto label_7F42DFF8;
    case 0x7F42DFFCu: goto label_7F42DFFC;
    case 0x7F42E000u: goto label_7F42E000;
    case 0x7F42E004u: goto label_7F42E004;
    case 0x7F42E008u: goto label_7F42E008;
    case 0x7F42E00Cu: goto label_7F42E00C;
    case 0x7F42E010u: goto label_7F42E010;
    case 0x7F42E014u: goto label_7F42E014;
    case 0x7F42E018u: goto label_7F42E018;
    case 0x7F42E01Cu: goto label_7F42E01C;
    case 0x7F42E020u: goto label_7F42E020;
    case 0x7F42E024u: goto label_7F42E024;
    case 0x7F42E028u: goto label_7F42E028;
    case 0x7F42E02Cu: goto label_7F42E02C;
    case 0x7F42E030u: goto label_7F42E030;
    case 0x7F42E034u: goto label_7F42E034;
    case 0x7F42E038u: goto label_7F42E038;
    case 0x7F42E03Cu: goto label_7F42E03C;
    case 0x7F42E040u: goto label_7F42E040;
    case 0x7F42E044u: goto label_7F42E044;
    case 0x7F42E048u: goto label_7F42E048;
    case 0x7F42E04Cu: goto label_7F42E04C;
    case 0x7F42E050u: goto label_7F42E050;
    case 0x7F42E054u: goto label_7F42E054;
    case 0x7F42E058u: goto label_7F42E058;
    case 0x7F42E05Cu: goto label_7F42E05C;
    case 0x7F42E060u: goto label_7F42E060;
    case 0x7F42E064u: goto label_7F42E064;
    case 0x7F42E068u: goto label_7F42E068;
    case 0x7F42E06Cu: goto label_7F42E06C;
    case 0x7F42E070u: goto label_7F42E070;
    case 0x7F42E074u: goto label_7F42E074;
    case 0x7F42E078u: goto label_7F42E078;
    case 0x7F42E07Cu: goto label_7F42E07C;
    case 0x7F42E080u: goto label_7F42E080;
    case 0x7F42E084u: goto label_7F42E084;
    case 0x7F42E088u: goto label_7F42E088;
    case 0x7F42E08Cu: goto label_7F42E08C;
    case 0x7F42E090u: goto label_7F42E090;
    case 0x7F42E094u: goto label_7F42E094;
    case 0x7F42E098u: goto label_7F42E098;
    case 0x7F42E09Cu: goto label_7F42E09C;
    case 0x7F42E0A0u: goto label_7F42E0A0;
    case 0x7F42E0A4u: goto label_7F42E0A4;
    case 0x7F42E0A8u: goto label_7F42E0A8;
    case 0x7F42E0ACu: goto label_7F42E0AC;
    case 0x7F42E0B0u: goto label_7F42E0B0;
    case 0x7F42E0B4u: goto label_7F42E0B4;
    case 0x7F42E0B8u: goto label_7F42E0B8;
    case 0x7F42E0BCu: goto label_7F42E0BC;
    case 0x7F42E0C0u: goto label_7F42E0C0;
    case 0x7F42E0C4u: goto label_7F42E0C4;
    case 0x7F42E0C8u: goto label_7F42E0C8;
    case 0x7F42E0CCu: goto label_7F42E0CC;
    case 0x7F42E0D0u: goto label_7F42E0D0;
    case 0x7F42E0D4u: goto label_7F42E0D4;
    case 0x7F42E0D8u: goto label_7F42E0D8;
    case 0x7F42E0DCu: goto label_7F42E0DC;
    case 0x7F42E0E0u: goto label_7F42E0E0;
    case 0x7F42E0E4u: goto label_7F42E0E4;
    case 0x7F42E0E8u: goto label_7F42E0E8;
    case 0x7F42E0ECu: goto label_7F42E0EC;
    case 0x7F42E0F0u: goto label_7F42E0F0;
    case 0x7F42E0F4u: goto label_7F42E0F4;
    case 0x7F42E0F8u: goto label_7F42E0F8;
    case 0x7F42E0FCu: goto label_7F42E0FC;
    case 0x7F42E100u: goto label_7F42E100;
    case 0x7F42E104u: goto label_7F42E104;
    case 0x7F42E108u: goto label_7F42E108;
    case 0x7F42E10Cu: goto label_7F42E10C;
    case 0x7F42E110u: goto label_7F42E110;
    case 0x7F42E114u: goto label_7F42E114;
    case 0x7F42E118u: goto label_7F42E118;
    case 0x7F42E11Cu: goto label_7F42E11C;
    case 0x7F42E120u: goto label_7F42E120;
    case 0x7F42E124u: goto label_7F42E124;
    case 0x7F42E128u: goto label_7F42E128;
    case 0x7F42E12Cu: goto label_7F42E12C;
    case 0x7F42E130u: goto label_7F42E130;
    case 0x7F42E134u: goto label_7F42E134;
    case 0x7F42E138u: goto label_7F42E138;
    case 0x7F42E13Cu: goto label_7F42E13C;
    case 0x7F42E140u: goto label_7F42E140;
    case 0x7F42E144u: goto label_7F42E144;
    case 0x7F42E148u: goto label_7F42E148;
    case 0x7F42E14Cu: goto label_7F42E14C;
    case 0x7F42E150u: goto label_7F42E150;
    case 0x7F42E154u: goto label_7F42E154;
    case 0x7F42E158u: goto label_7F42E158;
    case 0x7F42E15Cu: goto label_7F42E15C;
    case 0x7F42E160u: goto label_7F42E160;
    case 0x7F42E164u: goto label_7F42E164;
    case 0x7F42E168u: goto label_7F42E168;
    case 0x7F42E16Cu: goto label_7F42E16C;
    case 0x7F42E170u: goto label_7F42E170;
    case 0x7F42E174u: goto label_7F42E174;
    case 0x7F42E178u: goto label_7F42E178;
    case 0x7F42E17Cu: goto label_7F42E17C;
    case 0x7F42E180u: goto label_7F42E180;
    case 0x7F42E184u: goto label_7F42E184;
    case 0x7F42E188u: goto label_7F42E188;
    case 0x7F42E18Cu: goto label_7F42E18C;
    case 0x7F42E190u: goto label_7F42E190;
    case 0x7F42E194u: goto label_7F42E194;
    case 0x7F42E198u: goto label_7F42E198;
    case 0x7F42E19Cu: goto label_7F42E19C;
    case 0x7F42E1A0u: goto label_7F42E1A0;
    case 0x7F42E1A4u: goto label_7F42E1A4;
    case 0x7F42E1A8u: goto label_7F42E1A8;
    case 0x7F42E1ACu: goto label_7F42E1AC;
    case 0x7F42E1B0u: goto label_7F42E1B0;
    case 0x7F42E1B4u: goto label_7F42E1B4;
    case 0x7F42E1B8u: goto label_7F42E1B8;
    case 0x7F42E1BCu: goto label_7F42E1BC;
    case 0x7F42E1C0u: goto label_7F42E1C0;
    case 0x7F42E1C4u: goto label_7F42E1C4;
    case 0x7F42E1C8u: goto label_7F42E1C8;
    case 0x7F42E1CCu: goto label_7F42E1CC;
    case 0x7F42E1D0u: goto label_7F42E1D0;
    case 0x7F42E1D4u: goto label_7F42E1D4;
    case 0x7F42E1D8u: goto label_7F42E1D8;
    case 0x7F42E1DCu: goto label_7F42E1DC;
    case 0x7F42E1E0u: goto label_7F42E1E0;
    case 0x7F42E1E4u: goto label_7F42E1E4;
    case 0x7F42E1E8u: goto label_7F42E1E8;
    case 0x7F42E1ECu: goto label_7F42E1EC;
    case 0x7F42E1F0u: goto label_7F42E1F0;
    case 0x7F42E1F4u: goto label_7F42E1F4;
    case 0x7F42E1F8u: goto label_7F42E1F8;
    case 0x7F42E1FCu: goto label_7F42E1FC;
    case 0x7F42E200u: goto label_7F42E200;
    case 0x7F42E204u: goto label_7F42E204;
    case 0x7F42E208u: goto label_7F42E208;
    case 0x7F42E20Cu: goto label_7F42E20C;
    case 0x7F42E210u: goto label_7F42E210;
    case 0x7F42E214u: goto label_7F42E214;
    case 0x7F42E218u: goto label_7F42E218;
    case 0x7F42E21Cu: goto label_7F42E21C;
    case 0x7F42E220u: goto label_7F42E220;
    case 0x7F42E224u: goto label_7F42E224;
    case 0x7F42E228u: goto label_7F42E228;
    case 0x7F42E22Cu: goto label_7F42E22C;
    case 0x7F42E230u: goto label_7F42E230;
    case 0x7F42E234u: goto label_7F42E234;
    case 0x7F42E238u: goto label_7F42E238;
    case 0x7F42E23Cu: goto label_7F42E23C;
    case 0x7F42E240u: goto label_7F42E240;
    case 0x7F42E244u: goto label_7F42E244;
    case 0x7F42E248u: goto label_7F42E248;
    case 0x7F42E24Cu: goto label_7F42E24C;
    case 0x7F42E250u: goto label_7F42E250;
    case 0x7F42E254u: goto label_7F42E254;
    case 0x7F42E258u: goto label_7F42E258;
    case 0x7F42E25Cu: goto label_7F42E25C;
    case 0x7F42E260u: goto label_7F42E260;
    case 0x7F42E264u: goto label_7F42E264;
    case 0x7F42E268u: goto label_7F42E268;
    case 0x7F42E26Cu: goto label_7F42E26C;
    case 0x7F42E270u: goto label_7F42E270;
    case 0x7F42E274u: goto label_7F42E274;
    case 0x7F42E278u: goto label_7F42E278;
    case 0x7F42E27Cu: goto label_7F42E27C;
    case 0x7F42E280u: goto label_7F42E280;
    case 0x7F42E284u: goto label_7F42E284;
    case 0x7F42E288u: goto label_7F42E288;
    case 0x7F42E28Cu: goto label_7F42E28C;
    case 0x7F42E290u: goto label_7F42E290;
    case 0x7F42E294u: goto label_7F42E294;
    case 0x7F42E298u: goto label_7F42E298;
    case 0x7F42E29Cu: goto label_7F42E29C;
    case 0x7F42E2A0u: goto label_7F42E2A0;
    case 0x7F42E2A4u: goto label_7F42E2A4;
    case 0x7F42E2A8u: goto label_7F42E2A8;
    case 0x7F42E2ACu: goto label_7F42E2AC;
    case 0x7F42E2B0u: goto label_7F42E2B0;
    case 0x7F42E2B4u: goto label_7F42E2B4;
    case 0x7F42E2B8u: goto label_7F42E2B8;
    case 0x7F42E2BCu: goto label_7F42E2BC;
    case 0x7F42E2C0u: goto label_7F42E2C0;
    case 0x7F42E2C4u: goto label_7F42E2C4;
    case 0x7F42E2C8u: goto label_7F42E2C8;
    case 0x7F42E2CCu: goto label_7F42E2CC;
    case 0x7F42E2D0u: goto label_7F42E2D0;
    case 0x7F42E2D4u: goto label_7F42E2D4;
    case 0x7F42E2D8u: goto label_7F42E2D8;
    case 0x7F42E2DCu: goto label_7F42E2DC;
    case 0x7F42E2E0u: goto label_7F42E2E0;
    case 0x7F42E2E4u: goto label_7F42E2E4;
    case 0x7F42E2E8u: goto label_7F42E2E8;
    case 0x7F42E2ECu: goto label_7F42E2EC;
    case 0x7F42E2F0u: goto label_7F42E2F0;
    case 0x7F42E2F4u: goto label_7F42E2F4;
    case 0x7F42E2F8u: goto label_7F42E2F8;
    case 0x7F42E2FCu: goto label_7F42E2FC;
    case 0x7F42E300u: goto label_7F42E300;
    case 0x7F42E304u: goto label_7F42E304;
    case 0x7F42E308u: goto label_7F42E308;
    case 0x7F42E30Cu: goto label_7F42E30C;
    case 0x7F42E310u: goto label_7F42E310;
    case 0x7F42E314u: goto label_7F42E314;
    case 0x7F42E318u: goto label_7F42E318;
    case 0x7F42E31Cu: goto label_7F42E31C;
    case 0x7F42E320u: goto label_7F42E320;
    case 0x7F42E324u: goto label_7F42E324;
    case 0x7F42E328u: goto label_7F42E328;
    case 0x7F42E32Cu: goto label_7F42E32C;
    case 0x7F42E330u: goto label_7F42E330;
    case 0x7F42E334u: goto label_7F42E334;
    case 0x7F42E338u: goto label_7F42E338;
    case 0x7F42E33Cu: goto label_7F42E33C;
    case 0x7F42E340u: goto label_7F42E340;
    case 0x7F42E344u: goto label_7F42E344;
    case 0x7F42E348u: goto label_7F42E348;
    case 0x7F42E34Cu: goto label_7F42E34C;
    case 0x7F42E350u: goto label_7F42E350;
    case 0x7F42E354u: goto label_7F42E354;
    case 0x7F42E358u: goto label_7F42E358;
    case 0x7F42E35Cu: goto label_7F42E35C;
    case 0x7F42E360u: goto label_7F42E360;
    case 0x7F42E364u: goto label_7F42E364;
    case 0x7F42E368u: goto label_7F42E368;
    case 0x7F42E36Cu: goto label_7F42E36C;
    case 0x7F42E370u: goto label_7F42E370;
    case 0x7F42E374u: goto label_7F42E374;
    case 0x7F42E378u: goto label_7F42E378;
    case 0x7F42E37Cu: goto label_7F42E37C;
    case 0x7F42E380u: goto label_7F42E380;
    case 0x7F42E384u: goto label_7F42E384;
    case 0x7F42E388u: goto label_7F42E388;
    case 0x7F42E38Cu: goto label_7F42E38C;
    case 0x7F42E390u: goto label_7F42E390;
    case 0x7F42E394u: goto label_7F42E394;
    case 0x7F42E398u: goto label_7F42E398;
    case 0x7F42E39Cu: goto label_7F42E39C;
    case 0x7F42E3A0u: goto label_7F42E3A0;
    case 0x7F42E3A4u: goto label_7F42E3A4;
    case 0x7F42E3A8u: goto label_7F42E3A8;
    case 0x7F42E3ACu: goto label_7F42E3AC;
    case 0x7F42E3B0u: goto label_7F42E3B0;
    case 0x7F42E3B4u: goto label_7F42E3B4;
    case 0x7F42E3B8u: goto label_7F42E3B8;
    case 0x7F42E3BCu: goto label_7F42E3BC;
    case 0x7F42E3C0u: goto label_7F42E3C0;
    case 0x7F42E3C4u: goto label_7F42E3C4;
    case 0x7F42E3C8u: goto label_7F42E3C8;
    case 0x7F42E3CCu: goto label_7F42E3CC;
    case 0x7F42E3D0u: goto label_7F42E3D0;
    case 0x7F42E3D4u: goto label_7F42E3D4;
    case 0x7F42E3D8u: goto label_7F42E3D8;
    case 0x7F42E3DCu: goto label_7F42E3DC;
    case 0x7F42E3E0u: goto label_7F42E3E0;
    case 0x7F42E3E4u: goto label_7F42E3E4;
    case 0x7F42E3E8u: goto label_7F42E3E8;
    case 0x7F42E3ECu: goto label_7F42E3EC;
    case 0x7F42E3F0u: goto label_7F42E3F0;
    case 0x7F42E3F4u: goto label_7F42E3F4;
    case 0x7F42E3F8u: goto label_7F42E3F8;
    case 0x7F42E3FCu: goto label_7F42E3FC;
    case 0x7F42E400u: goto label_7F42E400;
    case 0x7F42E404u: goto label_7F42E404;
    case 0x7F42E408u: goto label_7F42E408;
    case 0x7F42E40Cu: goto label_7F42E40C;
    case 0x7F42E410u: goto label_7F42E410;
    case 0x7F42E414u: goto label_7F42E414;
    case 0x7F42E418u: goto label_7F42E418;
    case 0x7F42E41Cu: goto label_7F42E41C;
    case 0x7F42E420u: goto label_7F42E420;
    case 0x7F42E424u: goto label_7F42E424;
    case 0x7F42E428u: goto label_7F42E428;
    case 0x7F42E42Cu: goto label_7F42E42C;
    case 0x7F42E430u: goto label_7F42E430;
    case 0x7F42E434u: goto label_7F42E434;
    case 0x7F42E438u: goto label_7F42E438;
    case 0x7F42E43Cu: goto label_7F42E43C;
    case 0x7F42E440u: goto label_7F42E440;
    case 0x7F42E444u: goto label_7F42E444;
    case 0x7F42E448u: goto label_7F42E448;
    case 0x7F42E44Cu: goto label_7F42E44C;
    case 0x7F42E450u: goto label_7F42E450;
    case 0x7F42E454u: goto label_7F42E454;
    case 0x7F42E458u: goto label_7F42E458;
    case 0x7F42E45Cu: goto label_7F42E45C;
    case 0x7F42E460u: goto label_7F42E460;
    case 0x7F42E464u: goto label_7F42E464;
    case 0x7F42E468u: goto label_7F42E468;
    case 0x7F42E46Cu: goto label_7F42E46C;
    case 0x7F42E470u: goto label_7F42E470;
    case 0x7F42E474u: goto label_7F42E474;
    case 0x7F42E478u: goto label_7F42E478;
    case 0x7F42E47Cu: goto label_7F42E47C;
    case 0x7F42E480u: goto label_7F42E480;
    case 0x7F42E484u: goto label_7F42E484;
    case 0x7F42E488u: goto label_7F42E488;
    case 0x7F42E48Cu: goto label_7F42E48C;
    case 0x7F42E490u: goto label_7F42E490;
    case 0x7F42E494u: goto label_7F42E494;
    case 0x7F42E498u: goto label_7F42E498;
    case 0x7F42E49Cu: goto label_7F42E49C;
    case 0x7F42E4A0u: goto label_7F42E4A0;
    case 0x7F42E4A4u: goto label_7F42E4A4;
    case 0x7F42E4A8u: goto label_7F42E4A8;
    case 0x7F42E4ACu: goto label_7F42E4AC;
    case 0x7F42E4B0u: goto label_7F42E4B0;
    case 0x7F42E4B4u: goto label_7F42E4B4;
    case 0x7F42E4B8u: goto label_7F42E4B8;
    case 0x7F42E4BCu: goto label_7F42E4BC;
    case 0x7F42E4C0u: goto label_7F42E4C0;
    case 0x7F42E4C4u: goto label_7F42E4C4;
    case 0x7F42E4C8u: goto label_7F42E4C8;
    case 0x7F42E4CCu: goto label_7F42E4CC;
    case 0x7F42E4D0u: goto label_7F42E4D0;
    case 0x7F42E4D4u: goto label_7F42E4D4;
    case 0x7F42E4D8u: goto label_7F42E4D8;
    case 0x7F42E4DCu: goto label_7F42E4DC;
    case 0x7F42E4E0u: goto label_7F42E4E0;
    case 0x7F42E4E4u: goto label_7F42E4E4;
    case 0x7F42E4E8u: goto label_7F42E4E8;
    case 0x7F42E4ECu: goto label_7F42E4EC;
    case 0x7F42E4F0u: goto label_7F42E4F0;
    case 0x7F42E4F4u: goto label_7F42E4F4;
    case 0x7F42E4F8u: goto label_7F42E4F8;
    case 0x7F42E4FCu: goto label_7F42E4FC;
    case 0x7F42E500u: goto label_7F42E500;
    case 0x7F42E504u: goto label_7F42E504;
    case 0x7F42E508u: goto label_7F42E508;
    case 0x7F42E50Cu: goto label_7F42E50C;
    case 0x7F42E510u: goto label_7F42E510;
    case 0x7F42E514u: goto label_7F42E514;
    case 0x7F42E518u: goto label_7F42E518;
    case 0x7F42E51Cu: goto label_7F42E51C;
    case 0x7F42E520u: goto label_7F42E520;
    case 0x7F42E524u: goto label_7F42E524;
    case 0x7F42E528u: goto label_7F42E528;
    case 0x7F42E52Cu: goto label_7F42E52C;
    case 0x7F42E530u: goto label_7F42E530;
    case 0x7F42E534u: goto label_7F42E534;
    case 0x7F42E538u: goto label_7F42E538;
    case 0x7F42E53Cu: goto label_7F42E53C;
    case 0x7F42E540u: goto label_7F42E540;
    case 0x7F42E544u: goto label_7F42E544;
    case 0x7F42E548u: goto label_7F42E548;
    case 0x7F42E54Cu: goto label_7F42E54C;
    case 0x7F42E550u: goto label_7F42E550;
    case 0x7F42E554u: goto label_7F42E554;
    case 0x7F42E558u: goto label_7F42E558;
    case 0x7F42E55Cu: goto label_7F42E55C;
    case 0x7F42E560u: goto label_7F42E560;
    case 0x7F42E564u: goto label_7F42E564;
    case 0x7F42E568u: goto label_7F42E568;
    case 0x7F42E56Cu: goto label_7F42E56C;
    case 0x7F42E570u: goto label_7F42E570;
    case 0x7F42E574u: goto label_7F42E574;
    case 0x7F42E578u: goto label_7F42E578;
    case 0x7F42E57Cu: goto label_7F42E57C;
    case 0x7F42E580u: goto label_7F42E580;
    case 0x7F42E584u: goto label_7F42E584;
    case 0x7F42E588u: goto label_7F42E588;
    case 0x7F42E58Cu: goto label_7F42E58C;
    case 0x7F42E590u: goto label_7F42E590;
    case 0x7F42E594u: goto label_7F42E594;
    case 0x7F42E598u: goto label_7F42E598;
    case 0x7F42E59Cu: goto label_7F42E59C;
    case 0x7F42E5A0u: goto label_7F42E5A0;
    case 0x7F42E5A4u: goto label_7F42E5A4;
    case 0x7F42E5A8u: goto label_7F42E5A8;
    case 0x7F42E5ACu: goto label_7F42E5AC;
    case 0x7F42E5B0u: goto label_7F42E5B0;
    case 0x7F42E5B4u: goto label_7F42E5B4;
    case 0x7F42E5B8u: goto label_7F42E5B8;
    case 0x7F42E5BCu: goto label_7F42E5BC;
    case 0x7F42E5C0u: goto label_7F42E5C0;
    case 0x7F42E5C4u: goto label_7F42E5C4;
    case 0x7F42E5C8u: goto label_7F42E5C8;
    case 0x7F42E5CCu: goto label_7F42E5CC;
    case 0x7F42E5D0u: goto label_7F42E5D0;
    case 0x7F42E5D4u: goto label_7F42E5D4;
    case 0x7F42E5D8u: goto label_7F42E5D8;
    case 0x7F42E5DCu: goto label_7F42E5DC;
    case 0x7F42E5E0u: goto label_7F42E5E0;
    case 0x7F42E5E4u: goto label_7F42E5E4;
    case 0x7F42E5E8u: goto label_7F42E5E8;
    case 0x7F42E5ECu: goto label_7F42E5EC;
    case 0x7F42E5F0u: goto label_7F42E5F0;
    case 0x7F42E5F4u: goto label_7F42E5F4;
    case 0x7F42E5F8u: goto label_7F42E5F8;
    case 0x7F42E5FCu: goto label_7F42E5FC;
    case 0x7F42E600u: goto label_7F42E600;
    case 0x7F42E604u: goto label_7F42E604;
    case 0x7F42E608u: goto label_7F42E608;
    case 0x7F42E60Cu: goto label_7F42E60C;
    case 0x7F42E610u: goto label_7F42E610;
    case 0x7F42E614u: goto label_7F42E614;
    case 0x7F42E618u: goto label_7F42E618;
    case 0x7F42E61Cu: goto label_7F42E61C;
    case 0x7F42E620u: goto label_7F42E620;
    case 0x7F42E624u: goto label_7F42E624;
    case 0x7F42E628u: goto label_7F42E628;
    case 0x7F42E62Cu: goto label_7F42E62C;
    case 0x7F42E630u: goto label_7F42E630;
    case 0x7F42E634u: goto label_7F42E634;
    case 0x7F42E638u: goto label_7F42E638;
    case 0x7F42E63Cu: goto label_7F42E63C;
    case 0x7F42E640u: goto label_7F42E640;
    case 0x7F42E644u: goto label_7F42E644;
    case 0x7F42E648u: goto label_7F42E648;
    case 0x7F42E64Cu: goto label_7F42E64C;
    case 0x7F42E650u: goto label_7F42E650;
    case 0x7F42E654u: goto label_7F42E654;
    case 0x7F42E658u: goto label_7F42E658;
    case 0x7F42E65Cu: goto label_7F42E65C;
    case 0x7F42E660u: goto label_7F42E660;
    case 0x7F42E664u: goto label_7F42E664;
    case 0x7F42E668u: goto label_7F42E668;
    case 0x7F42E66Cu: goto label_7F42E66C;
    case 0x7F42E670u: goto label_7F42E670;
    case 0x7F42E674u: goto label_7F42E674;
    case 0x7F42E678u: goto label_7F42E678;
    case 0x7F42E67Cu: goto label_7F42E67C;
    case 0x7F42E680u: goto label_7F42E680;
    case 0x7F42E684u: goto label_7F42E684;
    case 0x7F42E688u: goto label_7F42E688;
    case 0x7F42E68Cu: goto label_7F42E68C;
    case 0x7F42E690u: goto label_7F42E690;
    case 0x7F42E694u: goto label_7F42E694;
    case 0x7F42E698u: goto label_7F42E698;
    case 0x7F42E69Cu: goto label_7F42E69C;
    case 0x7F42E6A0u: goto label_7F42E6A0;
    case 0x7F42E6A4u: goto label_7F42E6A4;
    case 0x7F42E6A8u: goto label_7F42E6A8;
    case 0x7F42E6ACu: goto label_7F42E6AC;
    case 0x7F42E6B0u: goto label_7F42E6B0;
    case 0x7F42E6B4u: goto label_7F42E6B4;
    case 0x7F42E6B8u: goto label_7F42E6B8;
    case 0x7F42E6BCu: goto label_7F42E6BC;
    case 0x7F42E6C0u: goto label_7F42E6C0;
    case 0x7F42E6C4u: goto label_7F42E6C4;
    case 0x7F42E6C8u: goto label_7F42E6C8;
    case 0x7F42E6CCu: goto label_7F42E6CC;
    case 0x7F42E6D0u: goto label_7F42E6D0;
    case 0x7F42E6D4u: goto label_7F42E6D4;
    case 0x7F42E6D8u: goto label_7F42E6D8;
    case 0x7F42E6DCu: goto label_7F42E6DC;
    case 0x7F42E6E0u: goto label_7F42E6E0;
    case 0x7F42E6E4u: goto label_7F42E6E4;
    case 0x7F42E6E8u: goto label_7F42E6E8;
    case 0x7F42E6ECu: goto label_7F42E6EC;
    case 0x7F42E6F0u: goto label_7F42E6F0;
    case 0x7F42E6F4u: goto label_7F42E6F4;
    case 0x7F42E6F8u: goto label_7F42E6F8;
    case 0x7F42E6FCu: goto label_7F42E6FC;
    case 0x7F42E700u: goto label_7F42E700;
    case 0x7F42E704u: goto label_7F42E704;
    case 0x7F42E708u: goto label_7F42E708;
    case 0x7F42E70Cu: goto label_7F42E70C;
    case 0x7F42E710u: goto label_7F42E710;
    case 0x7F42E714u: goto label_7F42E714;
    case 0x7F42E718u: goto label_7F42E718;
    case 0x7F42E71Cu: goto label_7F42E71C;
    case 0x7F42E720u: goto label_7F42E720;
    case 0x7F42E724u: goto label_7F42E724;
    case 0x7F42E728u: goto label_7F42E728;
    case 0x7F42E72Cu: goto label_7F42E72C;
    case 0x7F42E730u: goto label_7F42E730;
    case 0x7F42E734u: goto label_7F42E734;
    case 0x7F42E738u: goto label_7F42E738;
    case 0x7F42E73Cu: goto label_7F42E73C;
    case 0x7F42E740u: goto label_7F42E740;
    case 0x7F42E744u: goto label_7F42E744;
    case 0x7F42E748u: goto label_7F42E748;
    case 0x7F42E74Cu: goto label_7F42E74C;
    case 0x7F42E750u: goto label_7F42E750;
    case 0x7F42E754u: goto label_7F42E754;
    case 0x7F42E758u: goto label_7F42E758;
    case 0x7F42E75Cu: goto label_7F42E75C;
    case 0x7F42E760u: goto label_7F42E760;
    case 0x7F42E764u: goto label_7F42E764;
    case 0x7F42E768u: goto label_7F42E768;
    case 0x7F42E76Cu: goto label_7F42E76C;
    case 0x7F42E770u: goto label_7F42E770;
    case 0x7F42E774u: goto label_7F42E774;
    case 0x7F42E778u: goto label_7F42E778;
    case 0x7F42E77Cu: goto label_7F42E77C;
    case 0x7F42E780u: goto label_7F42E780;
    case 0x7F42E784u: goto label_7F42E784;
    case 0x7F42E788u: goto label_7F42E788;
    case 0x7F42E78Cu: goto label_7F42E78C;
    case 0x7F42E790u: goto label_7F42E790;
    case 0x7F42E794u: goto label_7F42E794;
    case 0x7F42E798u: goto label_7F42E798;
    case 0x7F42E79Cu: goto label_7F42E79C;
    case 0x7F42E7A0u: goto label_7F42E7A0;
    case 0x7F42E7A4u: goto label_7F42E7A4;
    case 0x7F42E7A8u: goto label_7F42E7A8;
    case 0x7F42E7ACu: goto label_7F42E7AC;
    case 0x7F42E7B0u: goto label_7F42E7B0;
    case 0x7F42E7B4u: goto label_7F42E7B4;
    case 0x7F42E7B8u: goto label_7F42E7B8;
    case 0x7F42E7BCu: goto label_7F42E7BC;
    case 0x7F42E7C0u: goto label_7F42E7C0;
    case 0x7F42E7C4u: goto label_7F42E7C4;
    case 0x7F42E7C8u: goto label_7F42E7C8;
    case 0x7F42E7CCu: goto label_7F42E7CC;
    case 0x7F42E7D0u: goto label_7F42E7D0;
    case 0x7F42E7D4u: goto label_7F42E7D4;
    case 0x7F42E7D8u: goto label_7F42E7D8;
    case 0x7F42E7DCu: goto label_7F42E7DC;
    case 0x7F42E7E0u: goto label_7F42E7E0;
    case 0x7F42E7E4u: goto label_7F42E7E4;
    case 0x7F42E7E8u: goto label_7F42E7E8;
    case 0x7F42E7ECu: goto label_7F42E7EC;
    case 0x7F42E7F0u: goto label_7F42E7F0;
    case 0x7F42E7F4u: goto label_7F42E7F4;
    case 0x7F42E7F8u: goto label_7F42E7F8;
    case 0x7F42E7FCu: goto label_7F42E7FC;
    case 0x7F42E800u: goto label_7F42E800;
    case 0x7F42E804u: goto label_7F42E804;
    case 0x7F42E808u: goto label_7F42E808;
    case 0x7F42E80Cu: goto label_7F42E80C;
    case 0x7F42E810u: goto label_7F42E810;
    case 0x7F42E814u: goto label_7F42E814;
    case 0x7F42E818u: goto label_7F42E818;
    case 0x7F42E81Cu: goto label_7F42E81C;
    case 0x7F42E820u: goto label_7F42E820;
    case 0x7F42E824u: goto label_7F42E824;
    case 0x7F42E828u: goto label_7F42E828;
    case 0x7F42E82Cu: goto label_7F42E82C;
    case 0x7F42E830u: goto label_7F42E830;
    case 0x7F42E834u: goto label_7F42E834;
    case 0x7F42E838u: goto label_7F42E838;
    case 0x7F42E83Cu: goto label_7F42E83C;
    case 0x7F42E840u: goto label_7F42E840;
    case 0x7F42E844u: goto label_7F42E844;
    case 0x7F42E848u: goto label_7F42E848;
    case 0x7F42E84Cu: goto label_7F42E84C;
    case 0x7F42E850u: goto label_7F42E850;
    case 0x7F42E854u: goto label_7F42E854;
    case 0x7F42E858u: goto label_7F42E858;
    case 0x7F42E85Cu: goto label_7F42E85C;
    case 0x7F42E860u: goto label_7F42E860;
    case 0x7F42E864u: goto label_7F42E864;
    case 0x7F42E868u: goto label_7F42E868;
    case 0x7F42E86Cu: goto label_7F42E86C;
    case 0x7F42E870u: goto label_7F42E870;
    case 0x7F42E874u: goto label_7F42E874;
    case 0x7F42E878u: goto label_7F42E878;
    case 0x7F42E87Cu: goto label_7F42E87C;
    case 0x7F42E880u: goto label_7F42E880;
    case 0x7F42E884u: goto label_7F42E884;
    case 0x7F42E888u: goto label_7F42E888;
    case 0x7F42E88Cu: goto label_7F42E88C;
    case 0x7F42E890u: goto label_7F42E890;
    case 0x7F42E894u: goto label_7F42E894;
    case 0x7F42E898u: goto label_7F42E898;
    case 0x7F42E89Cu: goto label_7F42E89C;
    case 0x7F42E8A0u: goto label_7F42E8A0;
    case 0x7F42E8A4u: goto label_7F42E8A4;
    case 0x7F42E8A8u: goto label_7F42E8A8;
    case 0x7F42E8ACu: goto label_7F42E8AC;
    case 0x7F42E8B0u: goto label_7F42E8B0;
    case 0x7F42E8B4u: goto label_7F42E8B4;
    case 0x7F42E8B8u: goto label_7F42E8B8;
    case 0x7F42E8BCu: goto label_7F42E8BC;
    case 0x7F42E8C0u: goto label_7F42E8C0;
    case 0x7F42E8C4u: goto label_7F42E8C4;
    case 0x7F42E8C8u: goto label_7F42E8C8;
    case 0x7F42E8CCu: goto label_7F42E8CC;
    case 0x7F42E8D0u: goto label_7F42E8D0;
    case 0x7F42E8D4u: goto label_7F42E8D4;
    case 0x7F42E8D8u: goto label_7F42E8D8;
    case 0x7F42E8DCu: goto label_7F42E8DC;
    case 0x7F42E8E0u: goto label_7F42E8E0;
    case 0x7F42E8E4u: goto label_7F42E8E4;
    case 0x7F42E8E8u: goto label_7F42E8E8;
    case 0x7F42E8ECu: goto label_7F42E8EC;
    case 0x7F42E8F0u: goto label_7F42E8F0;
    case 0x7F42E8F4u: goto label_7F42E8F4;
    case 0x7F42E8F8u: goto label_7F42E8F8;
    case 0x7F42E8FCu: goto label_7F42E8FC;
    case 0x7F42E900u: goto label_7F42E900;
    case 0x7F42E904u: goto label_7F42E904;
    case 0x7F42E908u: goto label_7F42E908;
    case 0x7F42E90Cu: goto label_7F42E90C;
    case 0x7F42E910u: goto label_7F42E910;
    case 0x7F42E914u: goto label_7F42E914;
    case 0x7F42E918u: goto label_7F42E918;
    case 0x7F42E91Cu: goto label_7F42E91C;
    case 0x7F42E920u: goto label_7F42E920;
    case 0x7F42E924u: goto label_7F42E924;
    case 0x7F42E928u: goto label_7F42E928;
    case 0x7F42E92Cu: goto label_7F42E92C;
    case 0x7F42E930u: goto label_7F42E930;
    case 0x7F42E934u: goto label_7F42E934;
    case 0x7F42E938u: goto label_7F42E938;
    case 0x7F42E93Cu: goto label_7F42E93C;
    case 0x7F42E940u: goto label_7F42E940;
    case 0x7F42E944u: goto label_7F42E944;
    case 0x7F42E948u: goto label_7F42E948;
    case 0x7F42E94Cu: goto label_7F42E94C;
    case 0x7F42E950u: goto label_7F42E950;
    case 0x7F42E954u: goto label_7F42E954;
    case 0x7F42E958u: goto label_7F42E958;
    case 0x7F42E95Cu: goto label_7F42E95C;
    case 0x7F42E960u: goto label_7F42E960;
    case 0x7F42E964u: goto label_7F42E964;
    case 0x7F42E968u: goto label_7F42E968;
    case 0x7F42E96Cu: goto label_7F42E96C;
    case 0x7F42E970u: goto label_7F42E970;
    case 0x7F42E974u: goto label_7F42E974;
    case 0x7F42E978u: goto label_7F42E978;
    case 0x7F42E97Cu: goto label_7F42E97C;
    case 0x7F42E980u: goto label_7F42E980;
    case 0x7F42E984u: goto label_7F42E984;
    case 0x7F42E988u: goto label_7F42E988;
    case 0x7F42E98Cu: goto label_7F42E98C;
    case 0x7F42E990u: goto label_7F42E990;
    case 0x7F42E994u: goto label_7F42E994;
    case 0x7F42E998u: goto label_7F42E998;
    case 0x7F42E99Cu: goto label_7F42E99C;
    case 0x7F42E9A0u: goto label_7F42E9A0;
    case 0x7F42E9A4u: goto label_7F42E9A4;
    case 0x7F42E9A8u: goto label_7F42E9A8;
    case 0x7F42E9ACu: goto label_7F42E9AC;
    case 0x7F42E9B0u: goto label_7F42E9B0;
    case 0x7F42E9B4u: goto label_7F42E9B4;
    case 0x7F42E9B8u: goto label_7F42E9B8;
    case 0x7F42E9BCu: goto label_7F42E9BC;
    case 0x7F42E9C0u: goto label_7F42E9C0;
    case 0x7F42E9C4u: goto label_7F42E9C4;
    case 0x7F42E9C8u: goto label_7F42E9C8;
    case 0x7F42E9CCu: goto label_7F42E9CC;
    case 0x7F42E9D0u: goto label_7F42E9D0;
    case 0x7F42E9D4u: goto label_7F42E9D4;
    case 0x7F42E9D8u: goto label_7F42E9D8;
    case 0x7F42E9DCu: goto label_7F42E9DC;
    case 0x7F42E9E0u: goto label_7F42E9E0;
    case 0x7F42E9E4u: goto label_7F42E9E4;
    case 0x7F42E9E8u: goto label_7F42E9E8;
    case 0x7F42E9ECu: goto label_7F42E9EC;
    case 0x7F42E9F0u: goto label_7F42E9F0;
    case 0x7F42E9F4u: goto label_7F42E9F4;
    case 0x7F42E9F8u: goto label_7F42E9F8;
    case 0x7F42E9FCu: goto label_7F42E9FC;
    case 0x7F42EA00u: goto label_7F42EA00;
    case 0x7F42EA04u: goto label_7F42EA04;
    case 0x7F42EA08u: goto label_7F42EA08;
    case 0x7F42EA0Cu: goto label_7F42EA0C;
    case 0x7F42EA10u: goto label_7F42EA10;
    case 0x7F42EA14u: goto label_7F42EA14;
    case 0x7F42EA18u: goto label_7F42EA18;
    case 0x7F42EA1Cu: goto label_7F42EA1C;
    case 0x7F42EA20u: goto label_7F42EA20;
    case 0x7F42EA24u: goto label_7F42EA24;
    case 0x7F42EA28u: goto label_7F42EA28;
    case 0x7F42EA2Cu: goto label_7F42EA2C;
    case 0x7F42EA30u: goto label_7F42EA30;
    case 0x7F42EA34u: goto label_7F42EA34;
    case 0x7F42EA38u: goto label_7F42EA38;
    case 0x7F42EA3Cu: goto label_7F42EA3C;
    case 0x7F42EA40u: goto label_7F42EA40;
    case 0x7F42EA44u: goto label_7F42EA44;
    case 0x7F42EA48u: goto label_7F42EA48;
    case 0x7F42EA4Cu: goto label_7F42EA4C;
    case 0x7F42EA50u: goto label_7F42EA50;
    case 0x7F42EA54u: goto label_7F42EA54;
    case 0x7F42EA58u: goto label_7F42EA58;
    case 0x7F42EA5Cu: goto label_7F42EA5C;
    case 0x7F42EA60u: goto label_7F42EA60;
    case 0x7F42EA64u: goto label_7F42EA64;
    case 0x7F42EA68u: goto label_7F42EA68;
    case 0x7F42EA6Cu: goto label_7F42EA6C;
    case 0x7F42EA70u: goto label_7F42EA70;
    case 0x7F42EA74u: goto label_7F42EA74;
    case 0x7F42EA78u: goto label_7F42EA78;
    case 0x7F42EA7Cu: goto label_7F42EA7C;
    case 0x7F42EA80u: goto label_7F42EA80;
    case 0x7F42EA84u: goto label_7F42EA84;
    case 0x7F42EA88u: goto label_7F42EA88;
    case 0x7F42EA8Cu: goto label_7F42EA8C;
    case 0x7F42EA90u: goto label_7F42EA90;
    case 0x7F42EA94u: goto label_7F42EA94;
    case 0x7F42EA98u: goto label_7F42EA98;
    case 0x7F42EA9Cu: goto label_7F42EA9C;
    case 0x7F42EAA0u: goto label_7F42EAA0;
    case 0x7F42EAA4u: goto label_7F42EAA4;
    case 0x7F42EAA8u: goto label_7F42EAA8;
    case 0x7F42EAACu: goto label_7F42EAAC;
    case 0x7F42EAB0u: goto label_7F42EAB0;
    case 0x7F42EAB4u: goto label_7F42EAB4;
    case 0x7F42EAB8u: goto label_7F42EAB8;
    case 0x7F42EABCu: goto label_7F42EABC;
    case 0x7F42EAC0u: goto label_7F42EAC0;
    case 0x7F42EAC4u: goto label_7F42EAC4;
    case 0x7F42EAC8u: goto label_7F42EAC8;
    case 0x7F42EACCu: goto label_7F42EACC;
    case 0x7F42EAD0u: goto label_7F42EAD0;
    case 0x7F42EAD4u: goto label_7F42EAD4;
    case 0x7F42EAD8u: goto label_7F42EAD8;
    case 0x7F42EADCu: goto label_7F42EADC;
    case 0x7F42EAE0u: goto label_7F42EAE0;
    case 0x7F42EAE4u: goto label_7F42EAE4;
    case 0x7F42EAE8u: goto label_7F42EAE8;
    case 0x7F42EAECu: goto label_7F42EAEC;
    case 0x7F42EAF0u: goto label_7F42EAF0;
    case 0x7F42EAF4u: goto label_7F42EAF4;
    case 0x7F42EAF8u: goto label_7F42EAF8;
    case 0x7F42EAFCu: goto label_7F42EAFC;
    case 0x7F42EB00u: goto label_7F42EB00;
    case 0x7F42EB04u: goto label_7F42EB04;
    case 0x7F42EB08u: goto label_7F42EB08;
    case 0x7F42EB0Cu: goto label_7F42EB0C;
    case 0x7F42EB10u: goto label_7F42EB10;
    case 0x7F42EB14u: goto label_7F42EB14;
    case 0x7F42EB18u: goto label_7F42EB18;
    case 0x7F42EB1Cu: goto label_7F42EB1C;
    case 0x7F42EB20u: goto label_7F42EB20;
    case 0x7F42EB24u: goto label_7F42EB24;
    case 0x7F42EB28u: goto label_7F42EB28;
    case 0x7F42EB2Cu: goto label_7F42EB2C;
    case 0x7F42EB30u: goto label_7F42EB30;
    case 0x7F42EB34u: goto label_7F42EB34;
    case 0x7F42EB38u: goto label_7F42EB38;
    case 0x7F42EB3Cu: goto label_7F42EB3C;
    case 0x7F42EB40u: goto label_7F42EB40;
    case 0x7F42EB44u: goto label_7F42EB44;
    case 0x7F42EB48u: goto label_7F42EB48;
    case 0x7F42EB4Cu: goto label_7F42EB4C;
    case 0x7F42EB50u: goto label_7F42EB50;
    case 0x7F42EB54u: goto label_7F42EB54;
    case 0x7F42EB58u: goto label_7F42EB58;
    case 0x7F42EB5Cu: goto label_7F42EB5C;
    case 0x7F42EB60u: goto label_7F42EB60;
    case 0x7F42EB64u: goto label_7F42EB64;
    case 0x7F42EB68u: goto label_7F42EB68;
    case 0x7F42EB6Cu: goto label_7F42EB6C;
    case 0x7F42EB70u: goto label_7F42EB70;
    case 0x7F42EB74u: goto label_7F42EB74;
    case 0x7F42EB78u: goto label_7F42EB78;
    case 0x7F42EB7Cu: goto label_7F42EB7C;
    case 0x7F42EB80u: goto label_7F42EB80;
    case 0x7F42EB84u: goto label_7F42EB84;
    case 0x7F42EB88u: goto label_7F42EB88;
    case 0x7F42EB8Cu: goto label_7F42EB8C;
    case 0x7F42EB90u: goto label_7F42EB90;
    case 0x7F42EB94u: goto label_7F42EB94;
    case 0x7F42EB98u: goto label_7F42EB98;
    case 0x7F42EB9Cu: goto label_7F42EB9C;
    case 0x7F42EBA0u: goto label_7F42EBA0;
    case 0x7F42EBA4u: goto label_7F42EBA4;
    case 0x7F42EBA8u: goto label_7F42EBA8;
    case 0x7F42EBACu: goto label_7F42EBAC;
    case 0x7F42EBB0u: goto label_7F42EBB0;
    case 0x7F42EBB4u: goto label_7F42EBB4;
    case 0x7F42EBB8u: goto label_7F42EBB8;
    case 0x7F42EBBCu: goto label_7F42EBBC;
    case 0x7F42EBC0u: goto label_7F42EBC0;
    case 0x7F42EBC4u: goto label_7F42EBC4;
    case 0x7F42EBC8u: goto label_7F42EBC8;
    case 0x7F42EBCCu: goto label_7F42EBCC;
    case 0x7F42EBD0u: goto label_7F42EBD0;
    case 0x7F42EBD4u: goto label_7F42EBD4;
    case 0x7F42EBD8u: goto label_7F42EBD8;
    case 0x7F42EBDCu: goto label_7F42EBDC;
    case 0x7F42EBE0u: goto label_7F42EBE0;
    case 0x7F42EBE4u: goto label_7F42EBE4;
    case 0x7F42EBE8u: goto label_7F42EBE8;
    case 0x7F42EBECu: goto label_7F42EBEC;
    case 0x7F42EBF0u: goto label_7F42EBF0;
    case 0x7F42EBF4u: goto label_7F42EBF4;
    case 0x7F42EBF8u: goto label_7F42EBF8;
    case 0x7F42EBFCu: goto label_7F42EBFC;
    case 0x7F42EC00u: goto label_7F42EC00;
    case 0x7F42EC04u: goto label_7F42EC04;
    case 0x7F42EC08u: goto label_7F42EC08;
    case 0x7F42EC0Cu: goto label_7F42EC0C;
    case 0x7F42EC10u: goto label_7F42EC10;
    case 0x7F42EC14u: goto label_7F42EC14;
    case 0x7F42EC18u: goto label_7F42EC18;
    case 0x7F42EC1Cu: goto label_7F42EC1C;
    case 0x7F42EC20u: goto label_7F42EC20;
    case 0x7F42EC24u: goto label_7F42EC24;
    case 0x7F42EC28u: goto label_7F42EC28;
    case 0x7F42EC2Cu: goto label_7F42EC2C;
    case 0x7F42EC30u: goto label_7F42EC30;
    case 0x7F42EC34u: goto label_7F42EC34;
    case 0x7F42EC38u: goto label_7F42EC38;
    case 0x7F42EC3Cu: goto label_7F42EC3C;
    case 0x7F42EC40u: goto label_7F42EC40;
    case 0x7F42EC44u: goto label_7F42EC44;
    case 0x7F42EC48u: goto label_7F42EC48;
    case 0x7F42EC4Cu: goto label_7F42EC4C;
    case 0x7F42EC50u: goto label_7F42EC50;
    case 0x7F42EC54u: goto label_7F42EC54;
    case 0x7F42EC58u: goto label_7F42EC58;
    case 0x7F42EC5Cu: goto label_7F42EC5C;
    case 0x7F42EC60u: goto label_7F42EC60;
    case 0x7F42EC64u: goto label_7F42EC64;
    case 0x7F42EC68u: goto label_7F42EC68;
    case 0x7F42EC6Cu: goto label_7F42EC6C;
    case 0x7F42EC70u: goto label_7F42EC70;
    case 0x7F42EC74u: goto label_7F42EC74;
    case 0x7F42EC78u: goto label_7F42EC78;
    case 0x7F42EC7Cu: goto label_7F42EC7C;
    case 0x7F42EC80u: goto label_7F42EC80;
    case 0x7F42EC84u: goto label_7F42EC84;
    case 0x7F42EC88u: goto label_7F42EC88;
    case 0x7F42EC8Cu: goto label_7F42EC8C;
    case 0x7F42EC90u: goto label_7F42EC90;
    case 0x7F42EC94u: goto label_7F42EC94;
    case 0x7F42EC98u: goto label_7F42EC98;
    case 0x7F42EC9Cu: goto label_7F42EC9C;
    case 0x7F42ECA0u: goto label_7F42ECA0;
    case 0x7F42ECA4u: goto label_7F42ECA4;
    case 0x7F42ECA8u: goto label_7F42ECA8;
    case 0x7F42ECACu: goto label_7F42ECAC;
    case 0x7F42ECB0u: goto label_7F42ECB0;
    case 0x7F42ECB4u: goto label_7F42ECB4;
    case 0x7F42ECB8u: goto label_7F42ECB8;
    case 0x7F42ECBCu: goto label_7F42ECBC;
    case 0x7F42ECC0u: goto label_7F42ECC0;
    case 0x7F42ECC4u: goto label_7F42ECC4;
    case 0x7F42ECC8u: goto label_7F42ECC8;
    case 0x7F42ECCCu: goto label_7F42ECCC;
    case 0x7F42ECD0u: goto label_7F42ECD0;
    case 0x7F42ECD4u: goto label_7F42ECD4;
    case 0x7F42ECD8u: goto label_7F42ECD8;
    case 0x7F42ECDCu: goto label_7F42ECDC;
    case 0x7F42ECE0u: goto label_7F42ECE0;
    case 0x7F42ECE4u: goto label_7F42ECE4;
    case 0x7F42ECE8u: goto label_7F42ECE8;
    case 0x7F42ECECu: goto label_7F42ECEC;
    case 0x7F42ECF0u: goto label_7F42ECF0;
    case 0x7F42ECF4u: goto label_7F42ECF4;
    case 0x7F42ECF8u: goto label_7F42ECF8;
    case 0x7F42ECFCu: goto label_7F42ECFC;
    case 0x7F42ED00u: goto label_7F42ED00;
    case 0x7F42ED04u: goto label_7F42ED04;
    case 0x7F42ED08u: goto label_7F42ED08;
    case 0x7F42ED0Cu: goto label_7F42ED0C;
    case 0x7F42ED10u: goto label_7F42ED10;
    case 0x7F42ED14u: goto label_7F42ED14;
    case 0x7F42ED18u: goto label_7F42ED18;
    case 0x7F42ED1Cu: goto label_7F42ED1C;
    case 0x7F42ED20u: goto label_7F42ED20;
    case 0x7F42ED24u: goto label_7F42ED24;
    case 0x7F42ED28u: goto label_7F42ED28;
    case 0x7F42ED2Cu: goto label_7F42ED2C;
    case 0x7F42ED30u: goto label_7F42ED30;
    case 0x7F42ED34u: goto label_7F42ED34;
    case 0x7F42ED38u: goto label_7F42ED38;
    case 0x7F42ED3Cu: goto label_7F42ED3C;
    case 0x7F42ED40u: goto label_7F42ED40;
    case 0x7F42ED44u: goto label_7F42ED44;
    case 0x7F42ED48u: goto label_7F42ED48;
    case 0x7F42ED4Cu: goto label_7F42ED4C;
    case 0x7F42ED50u: goto label_7F42ED50;
    case 0x7F42ED54u: goto label_7F42ED54;
    case 0x7F42ED58u: goto label_7F42ED58;
    case 0x7F42ED5Cu: goto label_7F42ED5C;
    case 0x7F42ED60u: goto label_7F42ED60;
    case 0x7F42ED64u: goto label_7F42ED64;
    case 0x7F42ED68u: goto label_7F42ED68;
    case 0x7F42ED6Cu: goto label_7F42ED6C;
    case 0x7F42ED70u: goto label_7F42ED70;
    case 0x7F42ED74u: goto label_7F42ED74;
    case 0x7F42ED78u: goto label_7F42ED78;
    case 0x7F42ED7Cu: goto label_7F42ED7C;
    case 0x7F42ED80u: goto label_7F42ED80;
    case 0x7F42ED84u: goto label_7F42ED84;
    case 0x7F42ED88u: goto label_7F42ED88;
    case 0x7F42ED8Cu: goto label_7F42ED8C;
    case 0x7F42ED90u: goto label_7F42ED90;
    case 0x7F42ED94u: goto label_7F42ED94;
    case 0x7F42ED98u: goto label_7F42ED98;
    case 0x7F42ED9Cu: goto label_7F42ED9C;
    case 0x7F42EDA0u: goto label_7F42EDA0;
    case 0x7F42EDA4u: goto label_7F42EDA4;
    case 0x7F42EDA8u: goto label_7F42EDA8;
    case 0x7F42EDACu: goto label_7F42EDAC;
    case 0x7F42EDB0u: goto label_7F42EDB0;
    case 0x7F42EDB4u: goto label_7F42EDB4;
    case 0x7F42EDB8u: goto label_7F42EDB8;
    case 0x7F42EDBCu: goto label_7F42EDBC;
    case 0x7F42EDC0u: goto label_7F42EDC0;
    case 0x7F42EDC4u: goto label_7F42EDC4;
    case 0x7F42EDC8u: goto label_7F42EDC8;
    case 0x7F42EDCCu: goto label_7F42EDCC;
    case 0x7F42EDD0u: goto label_7F42EDD0;
    case 0x7F42EDD4u: goto label_7F42EDD4;
    case 0x7F42EDD8u: goto label_7F42EDD8;
    case 0x7F42EDDCu: goto label_7F42EDDC;
    case 0x7F42EDE0u: goto label_7F42EDE0;
    case 0x7F42EDE4u: goto label_7F42EDE4;
    case 0x7F42EDE8u: goto label_7F42EDE8;
    case 0x7F42EDECu: goto label_7F42EDEC;
    case 0x7F42EDF0u: goto label_7F42EDF0;
    case 0x7F42EDF4u: goto label_7F42EDF4;
    case 0x7F42EDF8u: goto label_7F42EDF8;
    case 0x7F42EDFCu: goto label_7F42EDFC;
    case 0x7F42EE00u: goto label_7F42EE00;
    case 0x7F42EE04u: goto label_7F42EE04;
    case 0x7F42EE08u: goto label_7F42EE08;
    case 0x7F42EE0Cu: goto label_7F42EE0C;
    case 0x7F42EE10u: goto label_7F42EE10;
    case 0x7F42EE14u: goto label_7F42EE14;
    case 0x7F42EE18u: goto label_7F42EE18;
    case 0x7F42EE1Cu: goto label_7F42EE1C;
    case 0x7F42EE20u: goto label_7F42EE20;
    case 0x7F42EE24u: goto label_7F42EE24;
    case 0x7F42EE28u: goto label_7F42EE28;
    case 0x7F42EE2Cu: goto label_7F42EE2C;
    case 0x7F42EE30u: goto label_7F42EE30;
    case 0x7F42EE34u: goto label_7F42EE34;
    case 0x7F42EE38u: goto label_7F42EE38;
    case 0x7F42EE3Cu: goto label_7F42EE3C;
    case 0x7F42EE40u: goto label_7F42EE40;
    case 0x7F42EE44u: goto label_7F42EE44;
    case 0x7F42EE48u: goto label_7F42EE48;
    case 0x7F42EE4Cu: goto label_7F42EE4C;
    case 0x7F42EE50u: goto label_7F42EE50;
    case 0x7F42EE54u: goto label_7F42EE54;
    case 0x7F42EE58u: goto label_7F42EE58;
    case 0x7F42EE5Cu: goto label_7F42EE5C;
    case 0x7F42EE60u: goto label_7F42EE60;
    case 0x7F42EE64u: goto label_7F42EE64;
    case 0x7F42EE68u: goto label_7F42EE68;
    case 0x7F42EE6Cu: goto label_7F42EE6C;
    case 0x7F42EE70u: goto label_7F42EE70;
    case 0x7F42EE74u: goto label_7F42EE74;
    case 0x7F42EE78u: goto label_7F42EE78;
    case 0x7F42EE7Cu: goto label_7F42EE7C;
    case 0x7F42EE80u: goto label_7F42EE80;
    case 0x7F42EE84u: goto label_7F42EE84;
    case 0x7F42EE88u: goto label_7F42EE88;
    case 0x7F42EE8Cu: goto label_7F42EE8C;
    case 0x7F42EE90u: goto label_7F42EE90;
    case 0x7F42EE94u: goto label_7F42EE94;
    case 0x7F42EE98u: goto label_7F42EE98;
    case 0x7F42EE9Cu: goto label_7F42EE9C;
    case 0x7F42EEA0u: goto label_7F42EEA0;
    case 0x7F42EEA4u: goto label_7F42EEA4;
    case 0x7F42EEA8u: goto label_7F42EEA8;
    case 0x7F42EEACu: goto label_7F42EEAC;
    case 0x7F42EEB0u: goto label_7F42EEB0;
    case 0x7F42EEB4u: goto label_7F42EEB4;
    case 0x7F42EEB8u: goto label_7F42EEB8;
    case 0x7F42EEBCu: goto label_7F42EEBC;
    case 0x7F42EEC0u: goto label_7F42EEC0;
    case 0x7F42EEC4u: goto label_7F42EEC4;
    case 0x7F42EEC8u: goto label_7F42EEC8;
    case 0x7F42EECCu: goto label_7F42EECC;
    case 0x7F42EED0u: goto label_7F42EED0;
    case 0x7F42EED4u: goto label_7F42EED4;
    case 0x7F42EED8u: goto label_7F42EED8;
    case 0x7F42EEDCu: goto label_7F42EEDC;
    case 0x7F42EEE0u: goto label_7F42EEE0;
    case 0x7F42EEE4u: goto label_7F42EEE4;
    case 0x7F42EEE8u: goto label_7F42EEE8;
    case 0x7F42EEECu: goto label_7F42EEEC;
    case 0x7F42EEF0u: goto label_7F42EEF0;
    case 0x7F42EEF4u: goto label_7F42EEF4;
    case 0x7F42EEF8u: goto label_7F42EEF8;
    case 0x7F42EEFCu: goto label_7F42EEFC;
    case 0x7F42EF00u: goto label_7F42EF00;
    case 0x7F42EF04u: goto label_7F42EF04;
    case 0x7F42EF08u: goto label_7F42EF08;
    case 0x7F42EF0Cu: goto label_7F42EF0C;
    case 0x7F42EF10u: goto label_7F42EF10;
    case 0x7F42EF14u: goto label_7F42EF14;
    case 0x7F42EF18u: goto label_7F42EF18;
    case 0x7F42EF1Cu: goto label_7F42EF1C;
    case 0x7F42EF20u: goto label_7F42EF20;
    case 0x7F42EF24u: goto label_7F42EF24;
    case 0x7F42EF28u: goto label_7F42EF28;
    case 0x7F42EF2Cu: goto label_7F42EF2C;
    case 0x7F42EF30u: goto label_7F42EF30;
    case 0x7F42EF34u: goto label_7F42EF34;
    case 0x7F42EF38u: goto label_7F42EF38;
    case 0x7F42EF3Cu: goto label_7F42EF3C;
    case 0x7F42EF40u: goto label_7F42EF40;
    case 0x7F42EF44u: goto label_7F42EF44;
    case 0x7F42EF48u: goto label_7F42EF48;
    case 0x7F42EF4Cu: goto label_7F42EF4C;
    case 0x7F42EF50u: goto label_7F42EF50;
    case 0x7F42EF54u: goto label_7F42EF54;
    case 0x7F42EF58u: goto label_7F42EF58;
    case 0x7F42EF5Cu: goto label_7F42EF5C;
    case 0x7F42EF60u: goto label_7F42EF60;
    case 0x7F42EF64u: goto label_7F42EF64;
    case 0x7F42EF68u: goto label_7F42EF68;
    case 0x7F42EF6Cu: goto label_7F42EF6C;
    case 0x7F42EF70u: goto label_7F42EF70;
    case 0x7F42EF74u: goto label_7F42EF74;
    case 0x7F42EF78u: goto label_7F42EF78;
    case 0x7F42EF7Cu: goto label_7F42EF7C;
    case 0x7F42EF80u: goto label_7F42EF80;
    case 0x7F42EF84u: goto label_7F42EF84;
    case 0x7F42EF88u: goto label_7F42EF88;
    case 0x7F42EF8Cu: goto label_7F42EF8C;
    case 0x7F42EF90u: goto label_7F42EF90;
    case 0x7F42EF94u: goto label_7F42EF94;
    case 0x7F42EF98u: goto label_7F42EF98;
    case 0x7F42EF9Cu: goto label_7F42EF9C;
    case 0x7F42EFA0u: goto label_7F42EFA0;
    case 0x7F42EFA4u: goto label_7F42EFA4;
    case 0x7F42EFA8u: goto label_7F42EFA8;
    case 0x7F42EFACu: goto label_7F42EFAC;
    case 0x7F42EFB0u: goto label_7F42EFB0;
    case 0x7F42EFB4u: goto label_7F42EFB4;
    case 0x7F42EFB8u: goto label_7F42EFB8;
    case 0x7F42EFBCu: goto label_7F42EFBC;
    case 0x7F42EFC0u: goto label_7F42EFC0;
    case 0x7F42EFC4u: goto label_7F42EFC4;
    case 0x7F42EFC8u: goto label_7F42EFC8;
    case 0x7F42EFCCu: goto label_7F42EFCC;
    case 0x7F42EFD0u: goto label_7F42EFD0;
    case 0x7F42EFD4u: goto label_7F42EFD4;
    case 0x7F42EFD8u: goto label_7F42EFD8;
    case 0x7F42EFDCu: goto label_7F42EFDC;
    case 0x7F42EFE0u: goto label_7F42EFE0;
    case 0x7F42EFE4u: goto label_7F42EFE4;
    case 0x7F42EFE8u: goto label_7F42EFE8;
    case 0x7F42EFECu: goto label_7F42EFEC;
    case 0x7F42EFF0u: goto label_7F42EFF0;
    case 0x7F42EFF4u: goto label_7F42EFF4;
    case 0x7F42EFF8u: goto label_7F42EFF8;
    case 0x7F42EFFCu: goto label_7F42EFFC;
    case 0x7F42F000u: goto label_7F42F000;
    case 0x7F42F004u: goto label_7F42F004;
    case 0x7F42F008u: goto label_7F42F008;
    case 0x7F42F00Cu: goto label_7F42F00C;
    case 0x7F42F010u: goto label_7F42F010;
    case 0x7F42F014u: goto label_7F42F014;
    case 0x7F42F018u: goto label_7F42F018;
    case 0x7F42F01Cu: goto label_7F42F01C;
    case 0x7F42F020u: goto label_7F42F020;
    case 0x7F42F024u: goto label_7F42F024;
    case 0x7F42F028u: goto label_7F42F028;
    case 0x7F42F02Cu: goto label_7F42F02C;
    case 0x7F42F030u: goto label_7F42F030;
    case 0x7F42F034u: goto label_7F42F034;
    case 0x7F42F038u: goto label_7F42F038;
    case 0x7F42F03Cu: goto label_7F42F03C;
    case 0x7F42F040u: goto label_7F42F040;
    case 0x7F42F044u: goto label_7F42F044;
    case 0x7F42F048u: goto label_7F42F048;
    case 0x7F42F04Cu: goto label_7F42F04C;
    case 0x7F42F050u: goto label_7F42F050;
    case 0x7F42F054u: goto label_7F42F054;
    case 0x7F42F058u: goto label_7F42F058;
    case 0x7F42F05Cu: goto label_7F42F05C;
    case 0x7F42F060u: goto label_7F42F060;
    case 0x7F42F064u: goto label_7F42F064;
    case 0x7F42F068u: goto label_7F42F068;
    case 0x7F42F06Cu: goto label_7F42F06C;
    case 0x7F42F070u: goto label_7F42F070;
    case 0x7F42F074u: goto label_7F42F074;
    case 0x7F42F078u: goto label_7F42F078;
    case 0x7F42F07Cu: goto label_7F42F07C;
    case 0x7F42F080u: goto label_7F42F080;
    case 0x7F42F084u: goto label_7F42F084;
    case 0x7F42F088u: goto label_7F42F088;
    case 0x7F42F08Cu: goto label_7F42F08C;
    case 0x7F42F090u: goto label_7F42F090;
    case 0x7F42F094u: goto label_7F42F094;
    case 0x7F42F098u: goto label_7F42F098;
    case 0x7F42F09Cu: goto label_7F42F09C;
    case 0x7F42F0A0u: goto label_7F42F0A0;
    case 0x7F42F0A4u: goto label_7F42F0A4;
    case 0x7F42F0A8u: goto label_7F42F0A8;
    case 0x7F42F0ACu: goto label_7F42F0AC;
    case 0x7F42F0B0u: goto label_7F42F0B0;
    case 0x7F42F0B4u: goto label_7F42F0B4;
    case 0x7F42F0B8u: goto label_7F42F0B8;
    case 0x7F42F0BCu: goto label_7F42F0BC;
    case 0x7F42F0C0u: goto label_7F42F0C0;
    case 0x7F42F0C4u: goto label_7F42F0C4;
    case 0x7F42F0C8u: goto label_7F42F0C8;
    case 0x7F42F0CCu: goto label_7F42F0CC;
    case 0x7F42F0D0u: goto label_7F42F0D0;
    case 0x7F42F0D4u: goto label_7F42F0D4;
    case 0x7F42F0D8u: goto label_7F42F0D8;
    case 0x7F42F0DCu: goto label_7F42F0DC;
    case 0x7F42F0E0u: goto label_7F42F0E0;
    case 0x7F42F0E4u: goto label_7F42F0E4;
    case 0x7F42F0E8u: goto label_7F42F0E8;
    case 0x7F42F0ECu: goto label_7F42F0EC;
    case 0x7F42F0F0u: goto label_7F42F0F0;
    case 0x7F42F0F4u: goto label_7F42F0F4;
    case 0x7F42F0F8u: goto label_7F42F0F8;
    case 0x7F42F0FCu: goto label_7F42F0FC;
    case 0x7F42F100u: goto label_7F42F100;
    case 0x7F42F104u: goto label_7F42F104;
    case 0x7F42F108u: goto label_7F42F108;
    case 0x7F42F10Cu: goto label_7F42F10C;
    case 0x7F42F110u: goto label_7F42F110;
    case 0x7F42F114u: goto label_7F42F114;
    case 0x7F42F118u: goto label_7F42F118;
    case 0x7F42F11Cu: goto label_7F42F11C;
    case 0x7F42F120u: goto label_7F42F120;
    case 0x7F42F124u: goto label_7F42F124;
    case 0x7F42F128u: goto label_7F42F128;
    case 0x7F42F12Cu: goto label_7F42F12C;
    case 0x7F42F130u: goto label_7F42F130;
    case 0x7F42F134u: goto label_7F42F134;
    case 0x7F42F138u: goto label_7F42F138;
    case 0x7F42F13Cu: goto label_7F42F13C;
    case 0x7F42F140u: goto label_7F42F140;
    case 0x7F42F144u: goto label_7F42F144;
    case 0x7F42F148u: goto label_7F42F148;
    case 0x7F42F14Cu: goto label_7F42F14C;
    case 0x7F42F150u: goto label_7F42F150;
    case 0x7F42F154u: goto label_7F42F154;
    case 0x7F42F158u: goto label_7F42F158;
    case 0x7F42F15Cu: goto label_7F42F15C;
    case 0x7F42F160u: goto label_7F42F160;
    case 0x7F42F164u: goto label_7F42F164;
    case 0x7F42F168u: goto label_7F42F168;
    case 0x7F42F16Cu: goto label_7F42F16C;
    case 0x7F42F170u: goto label_7F42F170;
    case 0x7F42F174u: goto label_7F42F174;
    case 0x7F42F178u: goto label_7F42F178;
    case 0x7F42F17Cu: goto label_7F42F17C;
    case 0x7F42F180u: goto label_7F42F180;
    case 0x7F42F184u: goto label_7F42F184;
    case 0x7F42F188u: goto label_7F42F188;
    case 0x7F42F18Cu: goto label_7F42F18C;
    case 0x7F42F190u: goto label_7F42F190;
    case 0x7F42F194u: goto label_7F42F194;
    case 0x7F42F198u: goto label_7F42F198;
    case 0x7F42F19Cu: goto label_7F42F19C;
    case 0x7F42F1A0u: goto label_7F42F1A0;
    case 0x7F42F1A4u: goto label_7F42F1A4;
    case 0x7F42F1A8u: goto label_7F42F1A8;
    case 0x7F42F1ACu: goto label_7F42F1AC;
    case 0x7F42F1B0u: goto label_7F42F1B0;
    case 0x7F42F1B4u: goto label_7F42F1B4;
    case 0x7F42F1B8u: goto label_7F42F1B8;
    case 0x7F42F1BCu: goto label_7F42F1BC;
    case 0x7F42F1C0u: goto label_7F42F1C0;
    case 0x7F42F1C4u: goto label_7F42F1C4;
    case 0x7F42F1C8u: goto label_7F42F1C8;
    case 0x7F42F1CCu: goto label_7F42F1CC;
    case 0x7F42F1D0u: goto label_7F42F1D0;
    case 0x7F42F1D4u: goto label_7F42F1D4;
    case 0x7F42F1D8u: goto label_7F42F1D8;
    case 0x7F42F1DCu: goto label_7F42F1DC;
    case 0x7F42F1E0u: goto label_7F42F1E0;
    case 0x7F42F1E4u: goto label_7F42F1E4;
    case 0x7F42F1E8u: goto label_7F42F1E8;
    case 0x7F42F1ECu: goto label_7F42F1EC;
    case 0x7F42F1F0u: goto label_7F42F1F0;
    case 0x7F42F1F4u: goto label_7F42F1F4;
    case 0x7F42F1F8u: goto label_7F42F1F8;
    case 0x7F42F1FCu: goto label_7F42F1FC;
    case 0x7F42F200u: goto label_7F42F200;
    case 0x7F42F204u: goto label_7F42F204;
    case 0x7F42F208u: goto label_7F42F208;
    case 0x7F42F20Cu: goto label_7F42F20C;
    case 0x7F42F210u: goto label_7F42F210;
    case 0x7F42F214u: goto label_7F42F214;
    case 0x7F42F218u: goto label_7F42F218;
    case 0x7F42F21Cu: goto label_7F42F21C;
    case 0x7F42F220u: goto label_7F42F220;
    case 0x7F42F224u: goto label_7F42F224;
    case 0x7F42F228u: goto label_7F42F228;
    case 0x7F42F22Cu: goto label_7F42F22C;
    case 0x7F42F230u: goto label_7F42F230;
    case 0x7F42F234u: goto label_7F42F234;
    case 0x7F42F238u: goto label_7F42F238;
    case 0x7F42F23Cu: goto label_7F42F23C;
    case 0x7F42F240u: goto label_7F42F240;
    case 0x7F42F244u: goto label_7F42F244;
    case 0x7F42F248u: goto label_7F42F248;
    case 0x7F42F24Cu: goto label_7F42F24C;
    case 0x7F42F250u: goto label_7F42F250;
    case 0x7F42F254u: goto label_7F42F254;
    case 0x7F42F258u: goto label_7F42F258;
    case 0x7F42F25Cu: goto label_7F42F25C;
    case 0x7F42F260u: goto label_7F42F260;
    case 0x7F42F264u: goto label_7F42F264;
    case 0x7F42F268u: goto label_7F42F268;
    case 0x7F42F26Cu: goto label_7F42F26C;
    case 0x7F42F270u: goto label_7F42F270;
    case 0x7F42F274u: goto label_7F42F274;
    case 0x7F42F278u: goto label_7F42F278;
    case 0x7F42F27Cu: goto label_7F42F27C;
    case 0x7F42F280u: goto label_7F42F280;
    case 0x7F42F284u: goto label_7F42F284;
    case 0x7F42F288u: goto label_7F42F288;
    case 0x7F42F28Cu: goto label_7F42F28C;
    case 0x7F42F290u: goto label_7F42F290;
    case 0x7F42F294u: goto label_7F42F294;
    case 0x7F42F298u: goto label_7F42F298;
    case 0x7F42F29Cu: goto label_7F42F29C;
    case 0x7F42F2A0u: goto label_7F42F2A0;
    case 0x7F42F2A4u: goto label_7F42F2A4;
    case 0x7F42F2A8u: goto label_7F42F2A8;
    case 0x7F42F2ACu: goto label_7F42F2AC;
    case 0x7F42F2B0u: goto label_7F42F2B0;
    case 0x7F42F2B4u: goto label_7F42F2B4;
    case 0x7F42F2B8u: goto label_7F42F2B8;
    case 0x7F42F2BCu: goto label_7F42F2BC;
    case 0x7F42F2C0u: goto label_7F42F2C0;
    case 0x7F42F2C4u: goto label_7F42F2C4;
    case 0x7F42F2C8u: goto label_7F42F2C8;
    case 0x7F42F2CCu: goto label_7F42F2CC;
    case 0x7F42F2D0u: goto label_7F42F2D0;
    case 0x7F42F2D4u: goto label_7F42F2D4;
    case 0x7F42F2D8u: goto label_7F42F2D8;
    case 0x7F42F2DCu: goto label_7F42F2DC;
    case 0x7F42F2E0u: goto label_7F42F2E0;
    case 0x7F42F2E4u: goto label_7F42F2E4;
    case 0x7F42F2E8u: goto label_7F42F2E8;
    case 0x7F42F2ECu: goto label_7F42F2EC;
    case 0x7F42F2F0u: goto label_7F42F2F0;
    case 0x7F42F2F4u: goto label_7F42F2F4;
    case 0x7F42F2F8u: goto label_7F42F2F8;
    case 0x7F42F2FCu: goto label_7F42F2FC;
    case 0x7F42F300u: goto label_7F42F300;
    case 0x7F42F304u: goto label_7F42F304;
    case 0x7F42F308u: goto label_7F42F308;
    case 0x7F42F30Cu: goto label_7F42F30C;
    case 0x7F42F310u: goto label_7F42F310;
    case 0x7F42F314u: goto label_7F42F314;
    case 0x7F42F318u: goto label_7F42F318;
    case 0x7F42F31Cu: goto label_7F42F31C;
    case 0x7F42F320u: goto label_7F42F320;
    case 0x7F42F324u: goto label_7F42F324;
    case 0x7F42F328u: goto label_7F42F328;
    case 0x7F42F32Cu: goto label_7F42F32C;
    case 0x7F42F330u: goto label_7F42F330;
    case 0x7F42F334u: goto label_7F42F334;
    case 0x7F42F338u: goto label_7F42F338;
    case 0x7F42F33Cu: goto label_7F42F33C;
    case 0x7F42F340u: goto label_7F42F340;
    case 0x7F42F344u: goto label_7F42F344;
    case 0x7F42F348u: goto label_7F42F348;
    case 0x7F42F34Cu: goto label_7F42F34C;
    case 0x7F42F350u: goto label_7F42F350;
    case 0x7F42F354u: goto label_7F42F354;
    case 0x7F42F358u: goto label_7F42F358;
    case 0x7F42F35Cu: goto label_7F42F35C;
    case 0x7F42F360u: goto label_7F42F360;
    case 0x7F42F364u: goto label_7F42F364;
    case 0x7F42F368u: goto label_7F42F368;
    case 0x7F42F36Cu: goto label_7F42F36C;
    case 0x7F42F370u: goto label_7F42F370;
    case 0x7F42F374u: goto label_7F42F374;
    case 0x7F42F378u: goto label_7F42F378;
    case 0x7F42F37Cu: goto label_7F42F37C;
    case 0x7F42F380u: goto label_7F42F380;
    case 0x7F42F384u: goto label_7F42F384;
    case 0x7F42F388u: goto label_7F42F388;
    case 0x7F42F38Cu: goto label_7F42F38C;
    case 0x7F42F390u: goto label_7F42F390;
    case 0x7F42F394u: goto label_7F42F394;
    case 0x7F42F398u: goto label_7F42F398;
    case 0x7F42F39Cu: goto label_7F42F39C;
    case 0x7F42F3A0u: goto label_7F42F3A0;
    case 0x7F42F3A4u: goto label_7F42F3A4;
    case 0x7F42F3A8u: goto label_7F42F3A8;
    case 0x7F42F3ACu: goto label_7F42F3AC;
    case 0x7F42F3B0u: goto label_7F42F3B0;
    case 0x7F42F3B4u: goto label_7F42F3B4;
    case 0x7F42F3B8u: goto label_7F42F3B8;
    case 0x7F42F3BCu: goto label_7F42F3BC;
    case 0x7F42F3C0u: goto label_7F42F3C0;
    case 0x7F42F3C4u: goto label_7F42F3C4;
    case 0x7F42F3C8u: goto label_7F42F3C8;
    case 0x7F42F3CCu: goto label_7F42F3CC;
    case 0x7F42F3D0u: goto label_7F42F3D0;
    case 0x7F42F3D4u: goto label_7F42F3D4;
    case 0x7F42F3D8u: goto label_7F42F3D8;
    case 0x7F42F3DCu: goto label_7F42F3DC;
    case 0x7F42F3E0u: goto label_7F42F3E0;
    case 0x7F42F3E4u: goto label_7F42F3E4;
    case 0x7F42F3E8u: goto label_7F42F3E8;
    case 0x7F42F3ECu: goto label_7F42F3EC;
    case 0x7F42F3F0u: goto label_7F42F3F0;
    case 0x7F42F3F4u: goto label_7F42F3F4;
    case 0x7F42F3F8u: goto label_7F42F3F8;
    case 0x7F42F3FCu: goto label_7F42F3FC;
    case 0x7F42F400u: goto label_7F42F400;
    case 0x7F42F404u: goto label_7F42F404;
    case 0x7F42F408u: goto label_7F42F408;
    case 0x7F42F40Cu: goto label_7F42F40C;
    case 0x7F42F410u: goto label_7F42F410;
    case 0x7F42F414u: goto label_7F42F414;
    case 0x7F42F418u: goto label_7F42F418;
    case 0x7F42F41Cu: goto label_7F42F41C;
    case 0x7F42F420u: goto label_7F42F420;
    case 0x7F42F424u: goto label_7F42F424;
    case 0x7F42F428u: goto label_7F42F428;
    case 0x7F42F42Cu: goto label_7F42F42C;
    case 0x7F42F430u: goto label_7F42F430;
    case 0x7F42F434u: goto label_7F42F434;
    case 0x7F42F438u: goto label_7F42F438;
    case 0x7F42F43Cu: goto label_7F42F43C;
    case 0x7F42F440u: goto label_7F42F440;
    case 0x7F42F444u: goto label_7F42F444;
    case 0x7F42F448u: goto label_7F42F448;
    case 0x7F42F44Cu: goto label_7F42F44C;
    case 0x7F42F450u: goto label_7F42F450;
    case 0x7F42F454u: goto label_7F42F454;
    case 0x7F42F458u: goto label_7F42F458;
    case 0x7F42F45Cu: goto label_7F42F45C;
    case 0x7F42F460u: goto label_7F42F460;
    case 0x7F42F464u: goto label_7F42F464;
    case 0x7F42F468u: goto label_7F42F468;
    case 0x7F42F46Cu: goto label_7F42F46C;
    case 0x7F42F470u: goto label_7F42F470;
    case 0x7F42F474u: goto label_7F42F474;
    case 0x7F42F478u: goto label_7F42F478;
    case 0x7F42F47Cu: goto label_7F42F47C;
    case 0x7F42F480u: goto label_7F42F480;
    case 0x7F42F484u: goto label_7F42F484;
    case 0x7F42F488u: goto label_7F42F488;
    case 0x7F42F48Cu: goto label_7F42F48C;
    case 0x7F42F490u: goto label_7F42F490;
    case 0x7F42F494u: goto label_7F42F494;
    case 0x7F42F498u: goto label_7F42F498;
    case 0x7F42F49Cu: goto label_7F42F49C;
    case 0x7F42F4A0u: goto label_7F42F4A0;
    case 0x7F42F4A4u: goto label_7F42F4A4;
    case 0x7F42F4A8u: goto label_7F42F4A8;
    case 0x7F42F4ACu: goto label_7F42F4AC;
    case 0x7F42F4B0u: goto label_7F42F4B0;
    case 0x7F42F4B4u: goto label_7F42F4B4;
    case 0x7F42F4B8u: goto label_7F42F4B8;
    case 0x7F42F4BCu: goto label_7F42F4BC;
    case 0x7F42F4C0u: goto label_7F42F4C0;
    case 0x7F42F4C4u: goto label_7F42F4C4;
    case 0x7F42F4C8u: goto label_7F42F4C8;
    case 0x7F42F4CCu: goto label_7F42F4CC;
    case 0x7F42F4D0u: goto label_7F42F4D0;
    case 0x7F42F4D4u: goto label_7F42F4D4;
    case 0x7F42F4D8u: goto label_7F42F4D8;
    case 0x7F42F4DCu: goto label_7F42F4DC;
    case 0x7F42F4E0u: goto label_7F42F4E0;
    case 0x7F42F4E4u: goto label_7F42F4E4;
    case 0x7F42F4E8u: goto label_7F42F4E8;
    case 0x7F42F4ECu: goto label_7F42F4EC;
    case 0x7F42F4F0u: goto label_7F42F4F0;
    case 0x7F42F4F4u: goto label_7F42F4F4;
    case 0x7F42F4F8u: goto label_7F42F4F8;
    case 0x7F42F4FCu: goto label_7F42F4FC;
    case 0x7F42F500u: goto label_7F42F500;
    case 0x7F42F504u: goto label_7F42F504;
    case 0x7F42F508u: goto label_7F42F508;
    case 0x7F42F50Cu: goto label_7F42F50C;
    case 0x7F42F510u: goto label_7F42F510;
    case 0x7F42F514u: goto label_7F42F514;
    case 0x7F42F518u: goto label_7F42F518;
    case 0x7F42F51Cu: goto label_7F42F51C;
    case 0x7F42F520u: goto label_7F42F520;
    case 0x7F42F524u: goto label_7F42F524;
    case 0x7F42F528u: goto label_7F42F528;
    case 0x7F42F52Cu: goto label_7F42F52C;
    case 0x7F42F530u: goto label_7F42F530;
    case 0x7F42F534u: goto label_7F42F534;
    case 0x7F42F538u: goto label_7F42F538;
    case 0x7F42F53Cu: goto label_7F42F53C;
    case 0x7F42F540u: goto label_7F42F540;
    case 0x7F42F544u: goto label_7F42F544;
    case 0x7F42F548u: goto label_7F42F548;
    case 0x7F42F54Cu: goto label_7F42F54C;
    case 0x7F42F550u: goto label_7F42F550;
    case 0x7F42F554u: goto label_7F42F554;
    case 0x7F42F558u: goto label_7F42F558;
    case 0x7F42F55Cu: goto label_7F42F55C;
    case 0x7F42F560u: goto label_7F42F560;
    case 0x7F42F564u: goto label_7F42F564;
    case 0x7F42F568u: goto label_7F42F568;
    case 0x7F42F56Cu: goto label_7F42F56C;
    case 0x7F42F570u: goto label_7F42F570;
    case 0x7F42F574u: goto label_7F42F574;
    case 0x7F42F578u: goto label_7F42F578;
    case 0x7F42F57Cu: goto label_7F42F57C;
    case 0x7F42F580u: goto label_7F42F580;
    case 0x7F42F584u: goto label_7F42F584;
    case 0x7F42F588u: goto label_7F42F588;
    case 0x7F42F58Cu: goto label_7F42F58C;
    case 0x7F42F590u: goto label_7F42F590;
    case 0x7F42F594u: goto label_7F42F594;
    case 0x7F42F598u: goto label_7F42F598;
    case 0x7F42F59Cu: goto label_7F42F59C;
    case 0x7F42F5A0u: goto label_7F42F5A0;
    case 0x7F42F5A4u: goto label_7F42F5A4;
    case 0x7F42F5A8u: goto label_7F42F5A8;
    case 0x7F42F5ACu: goto label_7F42F5AC;
    case 0x7F42F5B0u: goto label_7F42F5B0;
    case 0x7F42F5B4u: goto label_7F42F5B4;
    case 0x7F42F5B8u: goto label_7F42F5B8;
    case 0x7F42F5BCu: goto label_7F42F5BC;
    case 0x7F42F5C0u: goto label_7F42F5C0;
    case 0x7F42F5C4u: goto label_7F42F5C4;
    case 0x7F42F5C8u: goto label_7F42F5C8;
    case 0x7F42F5CCu: goto label_7F42F5CC;
    case 0x7F42F5D0u: goto label_7F42F5D0;
    case 0x7F42F5D4u: goto label_7F42F5D4;
    case 0x7F42F5D8u: goto label_7F42F5D8;
    case 0x7F42F5DCu: goto label_7F42F5DC;
    case 0x7F42F5E0u: goto label_7F42F5E0;
    case 0x7F42F5E4u: goto label_7F42F5E4;
    case 0x7F42F5E8u: goto label_7F42F5E8;
    case 0x7F42F5ECu: goto label_7F42F5EC;
    case 0x7F42F5F0u: goto label_7F42F5F0;
    case 0x7F42F5F4u: goto label_7F42F5F4;
    case 0x7F42F5F8u: goto label_7F42F5F8;
    case 0x7F42F5FCu: goto label_7F42F5FC;
    case 0x7F42F600u: goto label_7F42F600;
    case 0x7F42F604u: goto label_7F42F604;
    case 0x7F42F608u: goto label_7F42F608;
    case 0x7F42F60Cu: goto label_7F42F60C;
    case 0x7F42F610u: goto label_7F42F610;
    case 0x7F42F614u: goto label_7F42F614;
    case 0x7F42F618u: goto label_7F42F618;
    case 0x7F42F61Cu: goto label_7F42F61C;
    case 0x7F42F620u: goto label_7F42F620;
    case 0x7F42F624u: goto label_7F42F624;
    case 0x7F42F628u: goto label_7F42F628;
    case 0x7F42F62Cu: goto label_7F42F62C;
    case 0x7F42F630u: goto label_7F42F630;
    case 0x7F42F634u: goto label_7F42F634;
    case 0x7F42F638u: goto label_7F42F638;
    case 0x7F42F63Cu: goto label_7F42F63C;
    case 0x7F42F640u: goto label_7F42F640;
    case 0x7F42F644u: goto label_7F42F644;
    case 0x7F42F648u: goto label_7F42F648;
    case 0x7F42F64Cu: goto label_7F42F64C;
    case 0x7F42F650u: goto label_7F42F650;
    case 0x7F42F654u: goto label_7F42F654;
    case 0x7F42F658u: goto label_7F42F658;
    case 0x7F42F65Cu: goto label_7F42F65C;
    case 0x7F42F660u: goto label_7F42F660;
    case 0x7F42F664u: goto label_7F42F664;
    case 0x7F42F668u: goto label_7F42F668;
    case 0x7F42F66Cu: goto label_7F42F66C;
    case 0x7F42F670u: goto label_7F42F670;
    case 0x7F42F674u: goto label_7F42F674;
    case 0x7F42F678u: goto label_7F42F678;
    case 0x7F42F67Cu: goto label_7F42F67C;
    case 0x7F42F680u: goto label_7F42F680;
    case 0x7F42F684u: goto label_7F42F684;
    case 0x7F42F688u: goto label_7F42F688;
    case 0x7F42F68Cu: goto label_7F42F68C;
    case 0x7F42F690u: goto label_7F42F690;
    case 0x7F42F694u: goto label_7F42F694;
    case 0x7F42F698u: goto label_7F42F698;
    case 0x7F42F69Cu: goto label_7F42F69C;
    case 0x7F42F6A0u: goto label_7F42F6A0;
    case 0x7F42F6A4u: goto label_7F42F6A4;
    case 0x7F42F6A8u: goto label_7F42F6A8;
    case 0x7F42F6ACu: goto label_7F42F6AC;
    case 0x7F42F6B0u: goto label_7F42F6B0;
    case 0x7F42F6B4u: goto label_7F42F6B4;
    case 0x7F42F6B8u: goto label_7F42F6B8;
    case 0x7F42F6BCu: goto label_7F42F6BC;
    case 0x7F42F6C0u: goto label_7F42F6C0;
    case 0x7F42F6C4u: goto label_7F42F6C4;
    case 0x7F42F6C8u: goto label_7F42F6C8;
    case 0x7F42F6CCu: goto label_7F42F6CC;
    case 0x7F42F6D0u: goto label_7F42F6D0;
    case 0x7F42F6D4u: goto label_7F42F6D4;
    case 0x7F42F6D8u: goto label_7F42F6D8;
    case 0x7F42F6DCu: goto label_7F42F6DC;
    case 0x7F42F6E0u: goto label_7F42F6E0;
    case 0x7F42F6E4u: goto label_7F42F6E4;
    case 0x7F42F6E8u: goto label_7F42F6E8;
    case 0x7F42F6ECu: goto label_7F42F6EC;
    case 0x7F42F6F0u: goto label_7F42F6F0;
    case 0x7F42F6F4u: goto label_7F42F6F4;
    case 0x7F42F6F8u: goto label_7F42F6F8;
    case 0x7F42F6FCu: goto label_7F42F6FC;
    case 0x7F42F700u: goto label_7F42F700;
    case 0x7F42F704u: goto label_7F42F704;
    case 0x7F42F708u: goto label_7F42F708;
    case 0x7F42F70Cu: goto label_7F42F70C;
    case 0x7F42F710u: goto label_7F42F710;
    case 0x7F42F714u: goto label_7F42F714;
    case 0x7F42F718u: goto label_7F42F718;
    case 0x7F42F71Cu: goto label_7F42F71C;
    case 0x7F42F720u: goto label_7F42F720;
    case 0x7F42F724u: goto label_7F42F724;
    case 0x7F42F728u: goto label_7F42F728;
    case 0x7F42F72Cu: goto label_7F42F72C;
    case 0x7F42F730u: goto label_7F42F730;
    case 0x7F42F734u: goto label_7F42F734;
    case 0x7F42F738u: goto label_7F42F738;
    case 0x7F42F73Cu: goto label_7F42F73C;
    case 0x7F42F740u: goto label_7F42F740;
    case 0x7F42F744u: goto label_7F42F744;
    case 0x7F42F748u: goto label_7F42F748;
    case 0x7F42F74Cu: goto label_7F42F74C;
    case 0x7F42F750u: goto label_7F42F750;
    case 0x7F42F754u: goto label_7F42F754;
    case 0x7F42F758u: goto label_7F42F758;
    case 0x7F42F75Cu: goto label_7F42F75C;
    case 0x7F42F760u: goto label_7F42F760;
    case 0x7F42F764u: goto label_7F42F764;
    case 0x7F42F768u: goto label_7F42F768;
    case 0x7F42F76Cu: goto label_7F42F76C;
    case 0x7F42F770u: goto label_7F42F770;
    case 0x7F42F774u: goto label_7F42F774;
    case 0x7F42F778u: goto label_7F42F778;
    case 0x7F42F77Cu: goto label_7F42F77C;
    case 0x7F42F780u: goto label_7F42F780;
    case 0x7F42F784u: goto label_7F42F784;
    case 0x7F42F788u: goto label_7F42F788;
    case 0x7F42F78Cu: goto label_7F42F78C;
    case 0x7F42F790u: goto label_7F42F790;
    case 0x7F42F794u: goto label_7F42F794;
    case 0x7F42F798u: goto label_7F42F798;
    case 0x7F42F79Cu: goto label_7F42F79C;
    case 0x7F42F7A0u: goto label_7F42F7A0;
    case 0x7F42F7A4u: goto label_7F42F7A4;
    case 0x7F42F7A8u: goto label_7F42F7A8;
    case 0x7F42F7ACu: goto label_7F42F7AC;
    case 0x7F42F7B0u: goto label_7F42F7B0;
    case 0x7F42F7B4u: goto label_7F42F7B4;
    case 0x7F42F7B8u: goto label_7F42F7B8;
    case 0x7F42F7BCu: goto label_7F42F7BC;
    case 0x7F42F7C0u: goto label_7F42F7C0;
    case 0x7F42F7C4u: goto label_7F42F7C4;
    case 0x7F42F7C8u: goto label_7F42F7C8;
    case 0x7F42F7CCu: goto label_7F42F7CC;
    case 0x7F42F7D0u: goto label_7F42F7D0;
    case 0x7F42F7D4u: goto label_7F42F7D4;
    case 0x7F42F7D8u: goto label_7F42F7D8;
    case 0x7F42F7DCu: goto label_7F42F7DC;
    case 0x7F42F7E0u: goto label_7F42F7E0;
    case 0x7F42F7E4u: goto label_7F42F7E4;
    case 0x7F42F7E8u: goto label_7F42F7E8;
    case 0x7F42F7ECu: goto label_7F42F7EC;
    case 0x7F42F7F0u: goto label_7F42F7F0;
    case 0x7F42F7F4u: goto label_7F42F7F4;
    case 0x7F42F7F8u: goto label_7F42F7F8;
    case 0x7F42F7FCu: goto label_7F42F7FC;
    case 0x7F42F800u: goto label_7F42F800;
    case 0x7F42F804u: goto label_7F42F804;
    case 0x7F42F808u: goto label_7F42F808;
    case 0x7F42F80Cu: goto label_7F42F80C;
    case 0x7F42F810u: goto label_7F42F810;
    case 0x7F42F814u: goto label_7F42F814;
    case 0x7F42F818u: goto label_7F42F818;
    case 0x7F42F81Cu: goto label_7F42F81C;
    case 0x7F42F820u: goto label_7F42F820;
    case 0x7F42F824u: goto label_7F42F824;
    case 0x7F42F828u: goto label_7F42F828;
    case 0x7F42F82Cu: goto label_7F42F82C;
    case 0x7F42F830u: goto label_7F42F830;
    case 0x7F42F834u: goto label_7F42F834;
    case 0x7F42F838u: goto label_7F42F838;
    case 0x7F42F83Cu: goto label_7F42F83C;
    case 0x7F42F840u: goto label_7F42F840;
    case 0x7F42F844u: goto label_7F42F844;
    case 0x7F42F848u: goto label_7F42F848;
    case 0x7F42F84Cu: goto label_7F42F84C;
    case 0x7F42F850u: goto label_7F42F850;
    case 0x7F42F854u: goto label_7F42F854;
    case 0x7F42F858u: goto label_7F42F858;
    case 0x7F42F85Cu: goto label_7F42F85C;
    case 0x7F42F860u: goto label_7F42F860;
    case 0x7F42F864u: goto label_7F42F864;
    case 0x7F42F868u: goto label_7F42F868;
    case 0x7F42F86Cu: goto label_7F42F86C;
    case 0x7F42F870u: goto label_7F42F870;
    case 0x7F42F874u: goto label_7F42F874;
    case 0x7F42F878u: goto label_7F42F878;
    case 0x7F42F87Cu: goto label_7F42F87C;
    case 0x7F42F880u: goto label_7F42F880;
    case 0x7F42F884u: goto label_7F42F884;
    case 0x7F42F888u: goto label_7F42F888;
    case 0x7F42F88Cu: goto label_7F42F88C;
    case 0x7F42F890u: goto label_7F42F890;
    case 0x7F42F894u: goto label_7F42F894;
    case 0x7F42F898u: goto label_7F42F898;
    case 0x7F42F89Cu: goto label_7F42F89C;
    case 0x7F42F8A0u: goto label_7F42F8A0;
    case 0x7F42F8A4u: goto label_7F42F8A4;
    case 0x7F42F8A8u: goto label_7F42F8A8;
    case 0x7F42F8ACu: goto label_7F42F8AC;
    case 0x7F42F8B0u: goto label_7F42F8B0;
    case 0x7F42F8B4u: goto label_7F42F8B4;
    case 0x7F42F8B8u: goto label_7F42F8B8;
    case 0x7F42F8BCu: goto label_7F42F8BC;
    case 0x7F42F8C0u: goto label_7F42F8C0;
    case 0x7F42F8C4u: goto label_7F42F8C4;
    case 0x7F42F8C8u: goto label_7F42F8C8;
    case 0x7F42F8CCu: goto label_7F42F8CC;
    case 0x7F42F8D0u: goto label_7F42F8D0;
    case 0x7F42F8D4u: goto label_7F42F8D4;
    case 0x7F42F8D8u: goto label_7F42F8D8;
    case 0x7F42F8DCu: goto label_7F42F8DC;
    case 0x7F42F8E0u: goto label_7F42F8E0;
    case 0x7F42F8E4u: goto label_7F42F8E4;
    case 0x7F42F8E8u: goto label_7F42F8E8;
    case 0x7F42F8ECu: goto label_7F42F8EC;
    case 0x7F42F8F0u: goto label_7F42F8F0;
    case 0x7F42F8F4u: goto label_7F42F8F4;
    case 0x7F42F8F8u: goto label_7F42F8F8;
    case 0x7F42F8FCu: goto label_7F42F8FC;
    case 0x7F42F900u: goto label_7F42F900;
    case 0x7F42F904u: goto label_7F42F904;
    case 0x7F42F908u: goto label_7F42F908;
    case 0x7F42F90Cu: goto label_7F42F90C;
    case 0x7F42F910u: goto label_7F42F910;
    case 0x7F42F914u: goto label_7F42F914;
    case 0x7F42F918u: goto label_7F42F918;
    case 0x7F42F91Cu: goto label_7F42F91C;
    case 0x7F42F920u: goto label_7F42F920;
    case 0x7F42F924u: goto label_7F42F924;
    case 0x7F42F928u: goto label_7F42F928;
    case 0x7F42F92Cu: goto label_7F42F92C;
    case 0x7F42F930u: goto label_7F42F930;
    case 0x7F42F934u: goto label_7F42F934;
    case 0x7F42F938u: goto label_7F42F938;
    case 0x7F42F93Cu: goto label_7F42F93C;
    case 0x7F42F940u: goto label_7F42F940;
    case 0x7F42F944u: goto label_7F42F944;
    case 0x7F42F948u: goto label_7F42F948;
    case 0x7F42F94Cu: goto label_7F42F94C;
    case 0x7F42F950u: goto label_7F42F950;
    case 0x7F42F954u: goto label_7F42F954;
    case 0x7F42F958u: goto label_7F42F958;
    case 0x7F42F95Cu: goto label_7F42F95C;
    case 0x7F42F960u: goto label_7F42F960;
    case 0x7F42F964u: goto label_7F42F964;
    case 0x7F42F968u: goto label_7F42F968;
    case 0x7F42F96Cu: goto label_7F42F96C;
    case 0x7F42F970u: goto label_7F42F970;
    case 0x7F42F974u: goto label_7F42F974;
    case 0x7F42F978u: goto label_7F42F978;
    case 0x7F42F97Cu: goto label_7F42F97C;
    case 0x7F42F980u: goto label_7F42F980;
    case 0x7F42F984u: goto label_7F42F984;
    case 0x7F42F988u: goto label_7F42F988;
    case 0x7F42F98Cu: goto label_7F42F98C;
    case 0x7F42F990u: goto label_7F42F990;
    case 0x7F42F994u: goto label_7F42F994;
    case 0x7F42F998u: goto label_7F42F998;
    case 0x7F42F99Cu: goto label_7F42F99C;
    case 0x7F42F9A0u: goto label_7F42F9A0;
    case 0x7F42F9A4u: goto label_7F42F9A4;
    case 0x7F42F9A8u: goto label_7F42F9A8;
    case 0x7F42F9ACu: goto label_7F42F9AC;
    case 0x7F42F9B0u: goto label_7F42F9B0;
    case 0x7F42F9B4u: goto label_7F42F9B4;
    case 0x7F42F9B8u: goto label_7F42F9B8;
    case 0x7F42F9BCu: goto label_7F42F9BC;
    case 0x7F42F9C0u: goto label_7F42F9C0;
    case 0x7F42F9C4u: goto label_7F42F9C4;
    case 0x7F42F9C8u: goto label_7F42F9C8;
    case 0x7F42F9CCu: goto label_7F42F9CC;
    case 0x7F42F9D0u: goto label_7F42F9D0;
    case 0x7F42F9D4u: goto label_7F42F9D4;
    case 0x7F42F9D8u: goto label_7F42F9D8;
    case 0x7F42F9DCu: goto label_7F42F9DC;
    case 0x7F42F9E0u: goto label_7F42F9E0;
    case 0x7F42F9E4u: goto label_7F42F9E4;
    case 0x7F42F9E8u: goto label_7F42F9E8;
    case 0x7F42F9ECu: goto label_7F42F9EC;
    case 0x7F42F9F0u: goto label_7F42F9F0;
    case 0x7F42F9F4u: goto label_7F42F9F4;
    case 0x7F42F9F8u: goto label_7F42F9F8;
    case 0x7F42F9FCu: goto label_7F42F9FC;
    case 0x7F42FA00u: goto label_7F42FA00;
    case 0x7F42FA04u: goto label_7F42FA04;
    case 0x7F42FA08u: goto label_7F42FA08;
    case 0x7F42FA0Cu: goto label_7F42FA0C;
    case 0x7F42FA10u: goto label_7F42FA10;
    case 0x7F42FA14u: goto label_7F42FA14;
    case 0x7F42FA18u: goto label_7F42FA18;
    case 0x7F42FA1Cu: goto label_7F42FA1C;
    case 0x7F42FA20u: goto label_7F42FA20;
    case 0x7F42FA24u: goto label_7F42FA24;
    case 0x7F42FA28u: goto label_7F42FA28;
    case 0x7F42FA2Cu: goto label_7F42FA2C;
    case 0x7F42FA30u: goto label_7F42FA30;
    case 0x7F42FA34u: goto label_7F42FA34;
    case 0x7F42FA38u: goto label_7F42FA38;
    case 0x7F42FA3Cu: goto label_7F42FA3C;
    case 0x7F42FA40u: goto label_7F42FA40;
    case 0x7F42FA44u: goto label_7F42FA44;
    case 0x7F42FA48u: goto label_7F42FA48;
    case 0x7F42FA4Cu: goto label_7F42FA4C;
    case 0x7F42FA50u: goto label_7F42FA50;
    case 0x7F42FA54u: goto label_7F42FA54;
    case 0x7F42FA58u: goto label_7F42FA58;
    case 0x7F42FA5Cu: goto label_7F42FA5C;
    case 0x7F42FA60u: goto label_7F42FA60;
    case 0x7F42FA64u: goto label_7F42FA64;
    case 0x7F42FA68u: goto label_7F42FA68;
    case 0x7F42FA6Cu: goto label_7F42FA6C;
    case 0x7F42FA70u: goto label_7F42FA70;
    case 0x7F42FA74u: goto label_7F42FA74;
    case 0x7F42FA78u: goto label_7F42FA78;
    case 0x7F42FA7Cu: goto label_7F42FA7C;
    case 0x7F42FA80u: goto label_7F42FA80;
    case 0x7F42FA84u: goto label_7F42FA84;
    case 0x7F42FA88u: goto label_7F42FA88;
    case 0x7F42FA8Cu: goto label_7F42FA8C;
    case 0x7F42FA90u: goto label_7F42FA90;
    case 0x7F42FA94u: goto label_7F42FA94;
    case 0x7F42FA98u: goto label_7F42FA98;
    case 0x7F42FA9Cu: goto label_7F42FA9C;
    case 0x7F42FAA0u: goto label_7F42FAA0;
    case 0x7F42FAA4u: goto label_7F42FAA4;
    case 0x7F42FAA8u: goto label_7F42FAA8;
    case 0x7F42FAACu: goto label_7F42FAAC;
    case 0x7F42FAB0u: goto label_7F42FAB0;
    case 0x7F42FAB4u: goto label_7F42FAB4;
    case 0x7F42FAB8u: goto label_7F42FAB8;
    case 0x7F42FABCu: goto label_7F42FABC;
    case 0x7F42FAC0u: goto label_7F42FAC0;
    case 0x7F42FAC4u: goto label_7F42FAC4;
    case 0x7F42FAC8u: goto label_7F42FAC8;
    case 0x7F42FACCu: goto label_7F42FACC;
    case 0x7F42FAD0u: goto label_7F42FAD0;
    case 0x7F42FAD4u: goto label_7F42FAD4;
    case 0x7F42FAD8u: goto label_7F42FAD8;
    case 0x7F42FADCu: goto label_7F42FADC;
    case 0x7F42FAE0u: goto label_7F42FAE0;
    case 0x7F42FAE4u: goto label_7F42FAE4;
    case 0x7F42FAE8u: goto label_7F42FAE8;
    case 0x7F42FAECu: goto label_7F42FAEC;
    case 0x7F42FAF0u: goto label_7F42FAF0;
    case 0x7F42FAF4u: goto label_7F42FAF4;
    case 0x7F42FAF8u: goto label_7F42FAF8;
    case 0x7F42FAFCu: goto label_7F42FAFC;
    case 0x7F42FB00u: goto label_7F42FB00;
    case 0x7F42FB04u: goto label_7F42FB04;
    case 0x7F42FB08u: goto label_7F42FB08;
    case 0x7F42FB0Cu: goto label_7F42FB0C;
    case 0x7F42FB10u: goto label_7F42FB10;
    case 0x7F42FB14u: goto label_7F42FB14;
    case 0x7F42FB18u: goto label_7F42FB18;
    case 0x7F42FB1Cu: goto label_7F42FB1C;
    case 0x7F42FB20u: goto label_7F42FB20;
    case 0x7F42FB24u: goto label_7F42FB24;
    case 0x7F42FB28u: goto label_7F42FB28;
    case 0x7F42FB2Cu: goto label_7F42FB2C;
    case 0x7F42FB30u: goto label_7F42FB30;
    case 0x7F42FB34u: goto label_7F42FB34;
    case 0x7F42FB38u: goto label_7F42FB38;
    case 0x7F42FB3Cu: goto label_7F42FB3C;
    case 0x7F42FB40u: goto label_7F42FB40;
    case 0x7F42FB44u: goto label_7F42FB44;
    case 0x7F42FB48u: goto label_7F42FB48;
    case 0x7F42FB4Cu: goto label_7F42FB4C;
    case 0x7F42FB50u: goto label_7F42FB50;
    case 0x7F42FB54u: goto label_7F42FB54;
    case 0x7F42FB58u: goto label_7F42FB58;
    case 0x7F42FB5Cu: goto label_7F42FB5C;
    case 0x7F42FB60u: goto label_7F42FB60;
    case 0x7F42FB64u: goto label_7F42FB64;
    case 0x7F42FB68u: goto label_7F42FB68;
    case 0x7F42FB6Cu: goto label_7F42FB6C;
    case 0x7F42FB70u: goto label_7F42FB70;
    case 0x7F42FB74u: goto label_7F42FB74;
    case 0x7F42FB78u: goto label_7F42FB78;
    case 0x7F42FB7Cu: goto label_7F42FB7C;
    case 0x7F42FB80u: goto label_7F42FB80;
    case 0x7F42FB84u: goto label_7F42FB84;
    case 0x7F42FB88u: goto label_7F42FB88;
    case 0x7F42FB8Cu: goto label_7F42FB8C;
    case 0x7F42FB90u: goto label_7F42FB90;
    case 0x7F42FB94u: goto label_7F42FB94;
    case 0x7F42FB98u: goto label_7F42FB98;
    case 0x7F42FB9Cu: goto label_7F42FB9C;
    case 0x7F42FBA0u: goto label_7F42FBA0;
    case 0x7F42FBA4u: goto label_7F42FBA4;
    case 0x7F42FBA8u: goto label_7F42FBA8;
    case 0x7F42FBACu: goto label_7F42FBAC;
    case 0x7F42FBB0u: goto label_7F42FBB0;
    case 0x7F42FBB4u: goto label_7F42FBB4;
    case 0x7F42FBB8u: goto label_7F42FBB8;
    case 0x7F42FBBCu: goto label_7F42FBBC;
    case 0x7F42FBC0u: goto label_7F42FBC0;
    case 0x7F42FBC4u: goto label_7F42FBC4;
    case 0x7F42FBC8u: goto label_7F42FBC8;
    case 0x7F42FBCCu: goto label_7F42FBCC;
    case 0x7F42FBD0u: goto label_7F42FBD0;
    case 0x7F42FBD4u: goto label_7F42FBD4;
    case 0x7F42FBD8u: goto label_7F42FBD8;
    case 0x7F42FBDCu: goto label_7F42FBDC;
    case 0x7F42FBE0u: goto label_7F42FBE0;
    case 0x7F42FBE4u: goto label_7F42FBE4;
    case 0x7F42FBE8u: goto label_7F42FBE8;
    case 0x7F42FBECu: goto label_7F42FBEC;
    case 0x7F42FBF0u: goto label_7F42FBF0;
    case 0x7F42FBF4u: goto label_7F42FBF4;
    case 0x7F42FBF8u: goto label_7F42FBF8;
    case 0x7F42FBFCu: goto label_7F42FBFC;
    case 0x7F42FC00u: goto label_7F42FC00;
    case 0x7F42FC04u: goto label_7F42FC04;
    case 0x7F42FC08u: goto label_7F42FC08;
    case 0x7F42FC0Cu: goto label_7F42FC0C;
    case 0x7F42FC10u: goto label_7F42FC10;
    case 0x7F42FC14u: goto label_7F42FC14;
    case 0x7F42FC18u: goto label_7F42FC18;
    case 0x7F42FC1Cu: goto label_7F42FC1C;
    case 0x7F42FC20u: goto label_7F42FC20;
    case 0x7F42FC24u: goto label_7F42FC24;
    case 0x7F42FC28u: goto label_7F42FC28;
    case 0x7F42FC2Cu: goto label_7F42FC2C;
    case 0x7F42FC30u: goto label_7F42FC30;
    case 0x7F42FC34u: goto label_7F42FC34;
    case 0x7F42FC38u: goto label_7F42FC38;
    case 0x7F42FC3Cu: goto label_7F42FC3C;
    case 0x7F42FC40u: goto label_7F42FC40;
    case 0x7F42FC44u: goto label_7F42FC44;
    case 0x7F42FC48u: goto label_7F42FC48;
    case 0x7F42FC4Cu: goto label_7F42FC4C;
    case 0x7F42FC50u: goto label_7F42FC50;
    case 0x7F42FC54u: goto label_7F42FC54;
    case 0x7F42FC58u: goto label_7F42FC58;
    case 0x7F42FC5Cu: goto label_7F42FC5C;
    case 0x7F42FC60u: goto label_7F42FC60;
    case 0x7F42FC64u: goto label_7F42FC64;
    case 0x7F42FC68u: goto label_7F42FC68;
    case 0x7F42FC6Cu: goto label_7F42FC6C;
    case 0x7F42FC70u: goto label_7F42FC70;
    case 0x7F42FC74u: goto label_7F42FC74;
    case 0x7F42FC78u: goto label_7F42FC78;
    case 0x7F42FC7Cu: goto label_7F42FC7C;
    case 0x7F42FC80u: goto label_7F42FC80;
    case 0x7F42FC84u: goto label_7F42FC84;
    case 0x7F42FC88u: goto label_7F42FC88;
    case 0x7F42FC8Cu: goto label_7F42FC8C;
    case 0x7F42FC90u: goto label_7F42FC90;
    case 0x7F42FC94u: goto label_7F42FC94;
    case 0x7F42FC98u: goto label_7F42FC98;
    case 0x7F42FC9Cu: goto label_7F42FC9C;
    case 0x7F42FCA0u: goto label_7F42FCA0;
    case 0x7F42FCA4u: goto label_7F42FCA4;
    case 0x7F42FCA8u: goto label_7F42FCA8;
    case 0x7F42FCACu: goto label_7F42FCAC;
    case 0x7F42FCB0u: goto label_7F42FCB0;
    case 0x7F42FCB4u: goto label_7F42FCB4;
    case 0x7F42FCB8u: goto label_7F42FCB8;
    case 0x7F42FCBCu: goto label_7F42FCBC;
    case 0x7F42FCC0u: goto label_7F42FCC0;
    case 0x7F42FCC4u: goto label_7F42FCC4;
    case 0x7F42FCC8u: goto label_7F42FCC8;
    case 0x7F42FCCCu: goto label_7F42FCCC;
    case 0x7F42FCD0u: goto label_7F42FCD0;
    case 0x7F42FCD4u: goto label_7F42FCD4;
    case 0x7F42FCD8u: goto label_7F42FCD8;
    case 0x7F42FCDCu: goto label_7F42FCDC;
    case 0x7F42FCE0u: goto label_7F42FCE0;
    case 0x7F42FCE4u: goto label_7F42FCE4;
    case 0x7F42FCE8u: goto label_7F42FCE8;
    case 0x7F42FCECu: goto label_7F42FCEC;
    case 0x7F42FCF0u: goto label_7F42FCF0;
    case 0x7F42FCF4u: goto label_7F42FCF4;
    case 0x7F42FCF8u: goto label_7F42FCF8;
    case 0x7F42FCFCu: goto label_7F42FCFC;
    case 0x7F42FD00u: goto label_7F42FD00;
    case 0x7F42FD04u: goto label_7F42FD04;
    case 0x7F42FD08u: goto label_7F42FD08;
    case 0x7F42FD0Cu: goto label_7F42FD0C;
    case 0x7F42FD10u: goto label_7F42FD10;
    case 0x7F42FD14u: goto label_7F42FD14;
    case 0x7F42FD18u: goto label_7F42FD18;
    case 0x7F42FD1Cu: goto label_7F42FD1C;
    case 0x7F42FD20u: goto label_7F42FD20;
    case 0x7F42FD24u: goto label_7F42FD24;
    case 0x7F42FD28u: goto label_7F42FD28;
    case 0x7F42FD2Cu: goto label_7F42FD2C;
    case 0x7F42FD30u: goto label_7F42FD30;
    case 0x7F42FD34u: goto label_7F42FD34;
    case 0x7F42FD38u: goto label_7F42FD38;
    case 0x7F42FD3Cu: goto label_7F42FD3C;
    case 0x7F42FD40u: goto label_7F42FD40;
    case 0x7F42FD44u: goto label_7F42FD44;
    case 0x7F42FD48u: goto label_7F42FD48;
    case 0x7F42FD4Cu: goto label_7F42FD4C;
    case 0x7F42FD50u: goto label_7F42FD50;
    case 0x7F42FD54u: goto label_7F42FD54;
    case 0x7F42FD58u: goto label_7F42FD58;
    case 0x7F42FD5Cu: goto label_7F42FD5C;
    case 0x7F42FD60u: goto label_7F42FD60;
    case 0x7F42FD64u: goto label_7F42FD64;
    case 0x7F42FD68u: goto label_7F42FD68;
    case 0x7F42FD6Cu: goto label_7F42FD6C;
    case 0x7F42FD70u: goto label_7F42FD70;
    case 0x7F42FD74u: goto label_7F42FD74;
    case 0x7F42FD78u: goto label_7F42FD78;
    case 0x7F42FD7Cu: goto label_7F42FD7C;
    case 0x7F42FD80u: goto label_7F42FD80;
    case 0x7F42FD84u: goto label_7F42FD84;
    case 0x7F42FD88u: goto label_7F42FD88;
    case 0x7F42FD8Cu: goto label_7F42FD8C;
    case 0x7F42FD90u: goto label_7F42FD90;
    case 0x7F42FD94u: goto label_7F42FD94;
    case 0x7F42FD98u: goto label_7F42FD98;
    case 0x7F42FD9Cu: goto label_7F42FD9C;
    case 0x7F42FDA0u: goto label_7F42FDA0;
    case 0x7F42FDA4u: goto label_7F42FDA4;
    case 0x7F42FDA8u: goto label_7F42FDA8;
    case 0x7F42FDACu: goto label_7F42FDAC;
    case 0x7F42FDB0u: goto label_7F42FDB0;
    case 0x7F42FDB4u: goto label_7F42FDB4;
    case 0x7F42FDB8u: goto label_7F42FDB8;
    case 0x7F42FDBCu: goto label_7F42FDBC;
    case 0x7F42FDC0u: goto label_7F42FDC0;
    case 0x7F42FDC4u: goto label_7F42FDC4;
    case 0x7F42FDC8u: goto label_7F42FDC8;
    case 0x7F42FDCCu: goto label_7F42FDCC;
    case 0x7F42FDD0u: goto label_7F42FDD0;
    case 0x7F42FDD4u: goto label_7F42FDD4;
    case 0x7F42FDD8u: goto label_7F42FDD8;
    case 0x7F42FDDCu: goto label_7F42FDDC;
    case 0x7F42FDE0u: goto label_7F42FDE0;
    case 0x7F42FDE4u: goto label_7F42FDE4;
    case 0x7F42FDE8u: goto label_7F42FDE8;
    case 0x7F42FDECu: goto label_7F42FDEC;
    case 0x7F42FDF0u: goto label_7F42FDF0;
    case 0x7F42FDF4u: goto label_7F42FDF4;
    case 0x7F42FDF8u: goto label_7F42FDF8;
    case 0x7F42FDFCu: goto label_7F42FDFC;
    case 0x7F42FE00u: goto label_7F42FE00;
    case 0x7F42FE04u: goto label_7F42FE04;
    case 0x7F42FE08u: goto label_7F42FE08;
    case 0x7F42FE0Cu: goto label_7F42FE0C;
    case 0x7F42FE10u: goto label_7F42FE10;
    case 0x7F42FE14u: goto label_7F42FE14;
    case 0x7F42FE18u: goto label_7F42FE18;
    case 0x7F42FE1Cu: goto label_7F42FE1C;
    case 0x7F42FE20u: goto label_7F42FE20;
    case 0x7F42FE24u: goto label_7F42FE24;
    case 0x7F42FE28u: goto label_7F42FE28;
    case 0x7F42FE2Cu: goto label_7F42FE2C;
    case 0x7F42FE30u: goto label_7F42FE30;
    case 0x7F42FE34u: goto label_7F42FE34;
    case 0x7F42FE38u: goto label_7F42FE38;
    case 0x7F42FE3Cu: goto label_7F42FE3C;
    case 0x7F42FE40u: goto label_7F42FE40;
    case 0x7F42FE44u: goto label_7F42FE44;
    case 0x7F42FE48u: goto label_7F42FE48;
    case 0x7F42FE4Cu: goto label_7F42FE4C;
    case 0x7F42FE50u: goto label_7F42FE50;
    case 0x7F42FE54u: goto label_7F42FE54;
    case 0x7F42FE58u: goto label_7F42FE58;
    case 0x7F42FE5Cu: goto label_7F42FE5C;
    case 0x7F42FE60u: goto label_7F42FE60;
    case 0x7F42FE64u: goto label_7F42FE64;
    case 0x7F42FE68u: goto label_7F42FE68;
    case 0x7F42FE6Cu: goto label_7F42FE6C;
    case 0x7F42FE70u: goto label_7F42FE70;
    case 0x7F42FE74u: goto label_7F42FE74;
    case 0x7F42FE78u: goto label_7F42FE78;
    case 0x7F42FE7Cu: goto label_7F42FE7C;
    case 0x7F42FE80u: goto label_7F42FE80;
    case 0x7F42FE84u: goto label_7F42FE84;
    case 0x7F42FE88u: goto label_7F42FE88;
    case 0x7F42FE8Cu: goto label_7F42FE8C;
    case 0x7F42FE90u: goto label_7F42FE90;
    case 0x7F42FE94u: goto label_7F42FE94;
    case 0x7F42FE98u: goto label_7F42FE98;
    case 0x7F42FE9Cu: goto label_7F42FE9C;
    case 0x7F42FEA0u: goto label_7F42FEA0;
    case 0x7F42FEA4u: goto label_7F42FEA4;
    case 0x7F42FEA8u: goto label_7F42FEA8;
    case 0x7F42FEACu: goto label_7F42FEAC;
    case 0x7F42FEB0u: goto label_7F42FEB0;
    case 0x7F42FEB4u: goto label_7F42FEB4;
    case 0x7F42FEB8u: goto label_7F42FEB8;
    case 0x7F42FEBCu: goto label_7F42FEBC;
    case 0x7F42FEC0u: goto label_7F42FEC0;
    case 0x7F42FEC4u: goto label_7F42FEC4;
    case 0x7F42FEC8u: goto label_7F42FEC8;
    case 0x7F42FECCu: goto label_7F42FECC;
    case 0x7F42FED0u: goto label_7F42FED0;
    case 0x7F42FED4u: goto label_7F42FED4;
    case 0x7F42FED8u: goto label_7F42FED8;
    case 0x7F42FEDCu: goto label_7F42FEDC;
    case 0x7F42FEE0u: goto label_7F42FEE0;
    case 0x7F42FEE4u: goto label_7F42FEE4;
    case 0x7F42FEE8u: goto label_7F42FEE8;
    case 0x7F42FEECu: goto label_7F42FEEC;
    case 0x7F42FEF0u: goto label_7F42FEF0;
    case 0x7F42FEF4u: goto label_7F42FEF4;
    case 0x7F42FEF8u: goto label_7F42FEF8;
    case 0x7F42FEFCu: goto label_7F42FEFC;
    case 0x7F42FF00u: goto label_7F42FF00;
    case 0x7F42FF04u: goto label_7F42FF04;
    case 0x7F42FF08u: goto label_7F42FF08;
    case 0x7F42FF0Cu: goto label_7F42FF0C;
    case 0x7F42FF10u: goto label_7F42FF10;
    case 0x7F42FF14u: goto label_7F42FF14;
    case 0x7F42FF18u: goto label_7F42FF18;
    case 0x7F42FF1Cu: goto label_7F42FF1C;
    case 0x7F42FF20u: goto label_7F42FF20;
    case 0x7F42FF24u: goto label_7F42FF24;
    case 0x7F42FF28u: goto label_7F42FF28;
    case 0x7F42FF2Cu: goto label_7F42FF2C;
    case 0x7F42FF30u: goto label_7F42FF30;
    case 0x7F42FF34u: goto label_7F42FF34;
    case 0x7F42FF38u: goto label_7F42FF38;
    case 0x7F42FF3Cu: goto label_7F42FF3C;
    case 0x7F42FF40u: goto label_7F42FF40;
    case 0x7F42FF44u: goto label_7F42FF44;
    case 0x7F42FF48u: goto label_7F42FF48;
    case 0x7F42FF4Cu: goto label_7F42FF4C;
    case 0x7F42FF50u: goto label_7F42FF50;
    case 0x7F42FF54u: goto label_7F42FF54;
    case 0x7F42FF58u: goto label_7F42FF58;
    case 0x7F42FF5Cu: goto label_7F42FF5C;
    case 0x7F42FF60u: goto label_7F42FF60;
    case 0x7F42FF64u: goto label_7F42FF64;
    case 0x7F42FF68u: goto label_7F42FF68;
    case 0x7F42FF6Cu: goto label_7F42FF6C;
    case 0x7F42FF70u: goto label_7F42FF70;
    case 0x7F42FF74u: goto label_7F42FF74;
    case 0x7F42FF78u: goto label_7F42FF78;
    case 0x7F42FF7Cu: goto label_7F42FF7C;
    case 0x7F42FF80u: goto label_7F42FF80;
    case 0x7F42FF84u: goto label_7F42FF84;
    case 0x7F42FF88u: goto label_7F42FF88;
    case 0x7F42FF8Cu: goto label_7F42FF8C;
    case 0x7F42FF90u: goto label_7F42FF90;
    case 0x7F42FF94u: goto label_7F42FF94;
    case 0x7F42FF98u: goto label_7F42FF98;
    case 0x7F42FF9Cu: goto label_7F42FF9C;
    case 0x7F42FFA0u: goto label_7F42FFA0;
    case 0x7F42FFA4u: goto label_7F42FFA4;
    case 0x7F42FFA8u: goto label_7F42FFA8;
    case 0x7F42FFACu: goto label_7F42FFAC;
    case 0x7F42FFB0u: goto label_7F42FFB0;
    case 0x7F42FFB4u: goto label_7F42FFB4;
    case 0x7F42FFB8u: goto label_7F42FFB8;
    case 0x7F42FFBCu: goto label_7F42FFBC;
    case 0x7F42FFC0u: goto label_7F42FFC0;
    case 0x7F42FFC4u: goto label_7F42FFC4;
    case 0x7F42FFC8u: goto label_7F42FFC8;
    case 0x7F42FFCCu: goto label_7F42FFCC;
    case 0x7F42FFD0u: goto label_7F42FFD0;
    case 0x7F42FFD4u: goto label_7F42FFD4;
    case 0x7F42FFD8u: goto label_7F42FFD8;
    case 0x7F42FFDCu: goto label_7F42FFDC;
    case 0x7F42FFE0u: goto label_7F42FFE0;
    case 0x7F42FFE4u: goto label_7F42FFE4;
    case 0x7F42FFE8u: goto label_7F42FFE8;
    case 0x7F42FFECu: goto label_7F42FFEC;
    case 0x7F42FFF0u: goto label_7F42FFF0;
    case 0x7F42FFF4u: goto label_7F42FFF4;
    case 0x7F42FFF8u: goto label_7F42FFF8;
    case 0x7F42FFFCu: goto label_7F42FFFC;
    case 0x7F430000u: goto label_7F430000;
    case 0x7F430004u: goto label_7F430004;
    case 0x7F430008u: goto label_7F430008;
    case 0x7F43000Cu: goto label_7F43000C;
    case 0x7F430010u: goto label_7F430010;
    case 0x7F430014u: goto label_7F430014;
    case 0x7F430018u: goto label_7F430018;
    case 0x7F43001Cu: goto label_7F43001C;
    case 0x7F430020u: goto label_7F430020;
    case 0x7F430024u: goto label_7F430024;
    case 0x7F430028u: goto label_7F430028;
    case 0x7F43002Cu: goto label_7F43002C;
    case 0x7F430030u: goto label_7F430030;
    case 0x7F430034u: goto label_7F430034;
    case 0x7F430038u: goto label_7F430038;
    case 0x7F43003Cu: goto label_7F43003C;
    case 0x7F430040u: goto label_7F430040;
    case 0x7F430044u: goto label_7F430044;
    case 0x7F430048u: goto label_7F430048;
    case 0x7F43004Cu: goto label_7F43004C;
    case 0x7F430050u: goto label_7F430050;
    case 0x7F430054u: goto label_7F430054;
    case 0x7F430058u: goto label_7F430058;
    case 0x7F43005Cu: goto label_7F43005C;
    case 0x7F430060u: goto label_7F430060;
    case 0x7F430064u: goto label_7F430064;
    case 0x7F430068u: goto label_7F430068;
    case 0x7F43006Cu: goto label_7F43006C;
    case 0x7F430070u: goto label_7F430070;
    case 0x7F430074u: goto label_7F430074;
    case 0x7F430078u: goto label_7F430078;
    case 0x7F43007Cu: goto label_7F43007C;
    case 0x7F430080u: goto label_7F430080;
    case 0x7F430084u: goto label_7F430084;
    case 0x7F430088u: goto label_7F430088;
    case 0x7F43008Cu: goto label_7F43008C;
    case 0x7F430090u: goto label_7F430090;
    case 0x7F430094u: goto label_7F430094;
    case 0x7F430098u: goto label_7F430098;
    case 0x7F43009Cu: goto label_7F43009C;
    case 0x7F4300A0u: goto label_7F4300A0;
    case 0x7F4300A4u: goto label_7F4300A4;
    case 0x7F4300A8u: goto label_7F4300A8;
    case 0x7F4300ACu: goto label_7F4300AC;
    case 0x7F4300B0u: goto label_7F4300B0;
    case 0x7F4300B4u: goto label_7F4300B4;
    case 0x7F4300B8u: goto label_7F4300B8;
    case 0x7F4300BCu: goto label_7F4300BC;
    case 0x7F4300C0u: goto label_7F4300C0;
    case 0x7F4300C4u: goto label_7F4300C4;
    case 0x7F4300C8u: goto label_7F4300C8;
    case 0x7F4300CCu: goto label_7F4300CC;
    case 0x7F4300D0u: goto label_7F4300D0;
    case 0x7F4300D4u: goto label_7F4300D4;
    case 0x7F4300D8u: goto label_7F4300D8;
    case 0x7F4300DCu: goto label_7F4300DC;
    case 0x7F4300E0u: goto label_7F4300E0;
    case 0x7F4300E4u: goto label_7F4300E4;
    case 0x7F4300E8u: goto label_7F4300E8;
    default: return;
    }
label_7F42C0EC:
    ctx->pc = 0x7F42C0ECu;
    ctx->downcount -= 4;
    // 7F42C0EC: add   r3, r30, r27
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[27];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F42C0F0:
    ctx->pc = 0x7F42C0F0u;
    // 7F42C0F0: lfs     f0, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42C0F0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42C0F4:
    ctx->pc = 0x7F42C0F4u;
    // 7F42C0F4: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42C0F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42C0F8:
    ctx->pc = 0x7F42C0F8u;
    // 7F42C0F8: bl      0x7F42C398
    {
            ctx->lr = 0x7F42C0FCu;
            goto label_7F42C398;
    }

label_7F42C0FC:
    ctx->pc = 0x7F42C0FCu;
    ctx->downcount -= 16;
    // 7F42C0FC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42C100:
    ctx->pc = 0x7F42C100u;
    // 7F42C100: add   r5, r30, r27
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[27];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F42C104:
    ctx->pc = 0x7F42C104u;
    // 7F42C104: addi    r4, r3, -10364
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-10364);

label_7F42C108:
    ctx->pc = 0x7F42C108u;
    // 7F42C108: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42C10C:
    ctx->pc = 0x7F42C10Cu;
    // 7F42C10C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42C10Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F42C110:
    ctx->pc = 0x7F42C110u;
    // 7F42C110: addi    r4, r3, -10392
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-10392);

label_7F42C114:
    ctx->pc = 0x7F42C114u;
    // 7F42C114: lfs     f2, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F42C114u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F42C118:
    ctx->pc = 0x7F42C118u;
    // 7F42C118: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F42C11C:
    ctx->pc = 0x7F42C11Cu;
    // 7F42C11C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42C11Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42C120:
    ctx->pc = 0x7F42C120u;
    // 7F42C120: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F42C124:
    ctx->pc = 0x7F42C124u;
    // 7F42C124: fmadds f1, f3, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F42C124u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[1], ctx->fpr[2], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F42C128:
    ctx->pc = 0x7F42C128u;
    // 7F42C128: stfs     f1, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42C128u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F42C12C:
    ctx->pc = 0x7F42C12Cu;
    // 7F42C12C: lfs     f1, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F42C12Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42C130:
    ctx->pc = 0x7F42C130u;
    // 7F42C130: stfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42C130u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F42C134:
    ctx->pc = 0x7F42C134u;
    // 7F42C134: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42C134u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42C138:
    ctx->pc = 0x7F42C138u;
    // 7F42C138: bl      0x7F205744
    {
            ctx->lr = 0x7F42C13Cu;
            ctx->pc = 0x7F205744u;
            return;
    }

label_7F42C13C:
    ctx->pc = 0x7F42C13Cu;
    ctx->downcount -= 3;
    // 7F42C13C: lwz     r0, 3408(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3408);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42C140:
    ctx->pc = 0x7F42C140u;
    // 7F42C140: cmpwi   r0, 2
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

label_7F42C144:
    ctx->pc = 0x7F42C144u;
    // 7F42C144: bc    4, 2, 0x7F42C1BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42C1BC;
        }
    }

label_7F42C148:
    ctx->pc = 0x7F42C148u;
    ctx->downcount -= 4;
    // 7F42C148: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F42C14C:
    ctx->pc = 0x7F42C14Cu;
    // 7F42C14C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F42C150:
    ctx->pc = 0x7F42C150u;
    // 7F42C150: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F42C154:
    ctx->pc = 0x7F42C154u;
    // 7F42C154: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F42C158:
    ctx->downcount -= 4;
    // 7F42C158: add   r3, r30, r28
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F42C15C:
    ctx->pc = 0x7F42C15Cu;
    // 7F42C15C: lwz     r0, 2164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42C160:
    // 7F42C160: cmplwi  r0, 0x0000
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

label_7F42C164:
    // 7F42C164: bc    4, 2, 0x7F42C1A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42C1A0;
        }
    }

label_7F42C168:
    ctx->downcount -= 5;
    // 7F42C168: addi    r27, r3, 2164
    ctx->gpr[27] = ctx->gpr[3] + (u32)(s32)(2164);

label_7F42C16C:
    ctx->pc = 0x7F42C16Cu;
    // 7F42C16C: lwz     r4, 3380(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3380);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F42C170:
    // 7F42C170: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F42C174:
    // 7F42C174: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F42C178:
    // 7F42C178: bl      0x7F04272C
    {
            ctx->lr = 0x7F42C17Cu;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F42C17C:
    ctx->downcount -= 4;
    // 7F42C17C: addi    r4, r29, 2636
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(2636);

label_7F42C180:
    // 7F42C180: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F42C184:
    // 7F42C184: add   r4, r30, r4
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F42C188:
    // 7F42C188: bl      0x7F042B20
    {
            ctx->lr = 0x7F42C18Cu;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F42C18C:
    ctx->downcount -= 3;
    // 7F42C18C: addi    r3, r31, 1232
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1232);

label_7F42C190:
    // 7F42C190: add   r3, r30, r3
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F42C194:
    // 7F42C194: bl      0x7F023170
    {
            ctx->lr = 0x7F42C198u;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F42C198:
    ctx->downcount -= 2;
    // 7F42C198: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F42C19C:
    // 7F42C19C: bl      0x7F0427FC
    {
            ctx->lr = 0x7F42C1A0u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F42C1A0:
    ctx->downcount -= 6;
    // 7F42C1A0: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_7F42C1A4:
    // 7F42C1A4: addi    r29, r29, 128
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(128);

label_7F42C1A8:
    // 7F42C1A8: cmpwi   r26, 2
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

label_7F42C1AC:
    // 7F42C1AC: addi    r28, r28, 44
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(44);

label_7F42C1B0:
    // 7F42C1B0: addi    r31, r31, 400
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(400);

label_7F42C1B4:
    // 7F42C1B4: bc    12, 0, 0x7F42C158
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42C158u;
                return;
            }
            goto label_7F42C158;
        }
    }

label_7F42C1B8:
    ctx->pc = 0x7F42C1B8u;
    ctx->downcount -= 1;
    // 7F42C1B8: b       0x7F42C280
    {
            goto label_7F42C280;
    }

label_7F42C1BC:
    ctx->pc = 0x7F42C1BCu;
    ctx->downcount -= 3;
    // 7F42C1BC: lwz     r0, 2164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42C1C0:
    ctx->pc = 0x7F42C1C0u;
    // 7F42C1C0: cmplwi  r0, 0x0000
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

label_7F42C1C4:
    ctx->pc = 0x7F42C1C4u;
    // 7F42C1C4: bc    4, 2, 0x7F42C280
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42C280;
        }
    }

label_7F42C1C8:
    ctx->pc = 0x7F42C1C8u;
    ctx->downcount -= 4;
    // 7F42C1C8: lwz     r4, 3380(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3380);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F42C1CC:
    ctx->pc = 0x7F42C1CCu;
    // 7F42C1CC: addi    r3, r30, 2164
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(2164);

label_7F42C1D0:
    ctx->pc = 0x7F42C1D0u;
    // 7F42C1D0: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F42C1D4:
    ctx->pc = 0x7F42C1D4u;
    // 7F42C1D4: bl      0x7F04272C
    {
            ctx->lr = 0x7F42C1D8u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F42C1D8:
    ctx->pc = 0x7F42C1D8u;
    ctx->downcount -= 3;
    // 7F42C1D8: addi    r3, r30, 2164
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(2164);

label_7F42C1DC:
    ctx->pc = 0x7F42C1DCu;
    // 7F42C1DC: addi    r4, r30, 2636
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(2636);

label_7F42C1E0:
    ctx->pc = 0x7F42C1E0u;
    // 7F42C1E0: bl      0x7F042B20
    {
            ctx->lr = 0x7F42C1E4u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F42C1E4:
    ctx->pc = 0x7F42C1E4u;
    ctx->downcount -= 2;
    // 7F42C1E4: addi    r3, r30, 1232
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(1232);

label_7F42C1E8:
    ctx->pc = 0x7F42C1E8u;
    // 7F42C1E8: bl      0x7F023170
    {
            ctx->lr = 0x7F42C1ECu;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F42C1EC:
    ctx->pc = 0x7F42C1ECu;
    ctx->downcount -= 2;
    // 7F42C1EC: addi    r3, r30, 2164
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(2164);

label_7F42C1F0:
    ctx->pc = 0x7F42C1F0u;
    // 7F42C1F0: bl      0x7F0427FC
    {
            ctx->lr = 0x7F42C1F4u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F42C1F4:
    ctx->pc = 0x7F42C1F4u;
    ctx->downcount -= 1;
    // 7F42C1F4: b       0x7F42C280
    {
            goto label_7F42C280;
    }

label_7F42C1F8:
    ctx->pc = 0x7F42C1F8u;
    ctx->downcount -= 3;
    // 7F42C1F8: lwz     r0, 3408(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3408);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42C1FC:
    ctx->pc = 0x7F42C1FCu;
    // 7F42C1FC: cmpwi   r0, 2
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

label_7F42C200:
    ctx->pc = 0x7F42C200u;
    // 7F42C200: bc    12, 2, 0x7F42C210
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42C210;
        }
    }

label_7F42C204:
    ctx->pc = 0x7F42C204u;
    ctx->downcount -= 3;
    // 7F42C204: lwz     r0, 3396(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3396);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42C208:
    ctx->pc = 0x7F42C208u;
    // 7F42C208: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42C20C:
    ctx->pc = 0x7F42C20Cu;
    // 7F42C20C: bc    4, 2, 0x7F42C280
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42C280;
        }
    }

label_7F42C210:
    ctx->pc = 0x7F42C210u;
    ctx->downcount -= 2;
    // 7F42C210: addi    r3, r30, 32
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(32);

label_7F42C214:
    ctx->pc = 0x7F42C214u;
    // 7F42C214: bl      0x7F023E10
    {
            ctx->lr = 0x7F42C218u;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F42C218:
    ctx->pc = 0x7F42C218u;
    ctx->downcount -= 2;
    // 7F42C218: addi    r3, r30, 2032
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(2032);

label_7F42C21C:
    ctx->pc = 0x7F42C21Cu;
    // 7F42C21C: bl      0x7F042AAC
    {
            ctx->lr = 0x7F42C220u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F42C220:
    ctx->pc = 0x7F42C220u;
    ctx->downcount -= 2;
    // 7F42C220: addi    r3, r30, 2896
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(2896);

label_7F42C224:
    ctx->pc = 0x7F42C224u;
    // 7F42C224: bl      0x7F0146B0
    {
            ctx->lr = 0x7F42C228u;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F42C228:
    ctx->pc = 0x7F42C228u;
    ctx->downcount -= 1;
    // 7F42C228: b       0x7F42C280
    {
            goto label_7F42C280;
    }

label_7F42C22C:
    ctx->pc = 0x7F42C22Cu;
    ctx->downcount -= 3;
    // 7F42C22C: lwz     r0, 3408(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3408);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42C230:
    ctx->pc = 0x7F42C230u;
    // 7F42C230: cmpwi   r0, 2
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

label_7F42C234:
    ctx->pc = 0x7F42C234u;
    // 7F42C234: bc    12, 2, 0x7F42C244
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42C244;
        }
    }

label_7F42C238:
    ctx->pc = 0x7F42C238u;
    ctx->downcount -= 3;
    // 7F42C238: lwz     r0, 3396(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3396);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42C23C:
    ctx->pc = 0x7F42C23Cu;
    // 7F42C23C: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42C240:
    ctx->pc = 0x7F42C240u;
    // 7F42C240: bc    12, 2, 0x7F42C280
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42C280;
        }
    }

label_7F42C244:
    ctx->pc = 0x7F42C244u;
    ctx->downcount -= 9;
    // 7F42C244: lwz     r0, 3396(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3396);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42C248:
    ctx->pc = 0x7F42C248u;
    // 7F42C248: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_7F42C24C:
    ctx->pc = 0x7F42C24Cu;
    // 7F42C24C: rlwinm r27, r0, 27, 5, 31
    {
        ctx->gpr[27] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_7F42C250:
    ctx->pc = 0x7F42C250u;
    // 7F42C250: mulli   r3, r27, 400
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[27] * (s64)(s32)400);

label_7F42C254:
    ctx->pc = 0x7F42C254u;
    // 7F42C254: addi    r3, r3, 32
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32);

label_7F42C258:
    ctx->pc = 0x7F42C258u;
    // 7F42C258: add   r3, r30, r3
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F42C25C:
    ctx->pc = 0x7F42C25Cu;
    // 7F42C25C: bl      0x7F023E10
    {
            ctx->lr = 0x7F42C260u;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F42C260:
    ctx->pc = 0x7F42C260u;
    ctx->downcount -= 6;
    // 7F42C260: mulli   r3, r27, 44
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[27] * (s64)(s32)44);

label_7F42C264:
    ctx->pc = 0x7F42C264u;
    // 7F42C264: addi    r3, r3, 2032
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(2032);

label_7F42C268:
    ctx->pc = 0x7F42C268u;
    // 7F42C268: add   r3, r30, r3
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F42C26C:
    ctx->pc = 0x7F42C26Cu;
    // 7F42C26C: bl      0x7F042AAC
    {
            ctx->lr = 0x7F42C270u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F42C270:
    ctx->pc = 0x7F42C270u;
    ctx->downcount -= 6;
    // 7F42C270: mulli   r3, r27, 192
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[27] * (s64)(s32)192);

label_7F42C274:
    ctx->pc = 0x7F42C274u;
    // 7F42C274: addi    r3, r3, 2896
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(2896);

label_7F42C278:
    ctx->pc = 0x7F42C278u;
    // 7F42C278: add   r3, r30, r3
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F42C27C:
    ctx->pc = 0x7F42C27Cu;
    // 7F42C27C: bl      0x7F0146B0
    {
            ctx->lr = 0x7F42C280u;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F42C280:
    ctx->pc = 0x7F42C280u;
    ctx->downcount -= 3;
    // 7F42C280: lwz     r0, 3392(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3392);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42C284:
    ctx->pc = 0x7F42C284u;
    // 7F42C284: cmpwi   r0, 1
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

label_7F42C288:
    ctx->pc = 0x7F42C288u;
    // 7F42C288: bc    4, 2, 0x7F42C2C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42C2C4;
        }
    }

label_7F42C28C:
    ctx->pc = 0x7F42C28Cu;
    ctx->downcount -= 4;
    // 7F42C28C: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F42C290:
    ctx->pc = 0x7F42C290u;
    // 7F42C290: lbz     r0, -2592(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2592);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F42C294:
    ctx->pc = 0x7F42C294u;
    // 7F42C294: cmpwi   r0, 1
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

label_7F42C298:
    ctx->pc = 0x7F42C298u;
    // 7F42C298: bc    4, 2, 0x7F42C2C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42C2C4;
        }
    }

label_7F42C29C:
    ctx->pc = 0x7F42C29Cu;
    ctx->downcount -= 3;
    // 7F42C29C: lwz     r0, 3412(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3412);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42C2A0:
    ctx->pc = 0x7F42C2A0u;
    // 7F42C2A0: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42C2A4:
    ctx->pc = 0x7F42C2A4u;
    // 7F42C2A4: bc    4, 2, 0x7F42C2C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42C2C4;
        }
    }

label_7F42C2A8:
    ctx->pc = 0x7F42C2A8u;
    ctx->downcount -= 3;
    // 7F42C2A8: lwz     r0, 2032(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2032);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42C2AC:
    ctx->pc = 0x7F42C2ACu;
    // 7F42C2AC: cmplwi  r0, 0x0000
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

label_7F42C2B0:
    ctx->pc = 0x7F42C2B0u;
    // 7F42C2B0: bc    12, 2, 0x7F42C2C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42C2C4;
        }
    }

label_7F42C2B4:
    ctx->pc = 0x7F42C2B4u;
    ctx->downcount -= 4;
    // 7F42C2B4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F42C2B8:
    ctx->pc = 0x7F42C2B8u;
    // 7F42C2B8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F42C2BC:
    ctx->pc = 0x7F42C2BCu;
    // 7F42C2BC: stw     r0, 3396(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3396);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42C2C0:
    ctx->pc = 0x7F42C2C0u;
    // 7F42C2C0: bl      0x7F42B80C
    {
            ctx->lr = 0x7F42C2C4u;
            ctx->pc = 0x7F42B80Cu;
            return;
    }

label_7F42C2C4:
    ctx->pc = 0x7F42C2C4u;
    ctx->downcount -= 3;
    // 7F42C2C4: lwz     r0, 3424(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3424);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42C2C8:
    ctx->pc = 0x7F42C2C8u;
    // 7F42C2C8: cmpwi   r0, 1
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

label_7F42C2CC:
    ctx->pc = 0x7F42C2CCu;
    // 7F42C2CC: bc    4, 2, 0x7F42C384
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42C384;
        }
    }

label_7F42C2D0:
    ctx->pc = 0x7F42C2D0u;
    ctx->downcount -= 3;
    // 7F42C2D0: lwz     r0, 3428(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3428);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42C2D4:
    ctx->pc = 0x7F42C2D4u;
    // 7F42C2D4: cmplwi  r0, 0x0000
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

label_7F42C2D8:
    ctx->pc = 0x7F42C2D8u;
    // 7F42C2D8: bc    4, 2, 0x7F42C314
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42C314;
        }
    }

label_7F42C2DC:
    ctx->pc = 0x7F42C2DCu;
    ctx->downcount -= 13;
    // 7F42C2DC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F42C2E0:
    ctx->pc = 0x7F42C2E0u;
    // 7F42C2E0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F42C2E4:
    ctx->pc = 0x7F42C2E4u;
    // 7F42C2E4: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42C2E8:
    ctx->pc = 0x7F42C2E8u;
    // 7F42C2E8: li      r3, 180
    ctx->gpr[3] = (u32)(s32)(180);

label_7F42C2EC:
    ctx->pc = 0x7F42C2ECu;
    // 7F42C2EC: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F42C2F0:
    ctx->pc = 0x7F42C2F0u;
    // 7F42C2F0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F42C2F4:
    ctx->pc = 0x7F42C2F4u;
    // 7F42C2F4: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42C2F8:
    ctx->pc = 0x7F42C2F8u;
    // 7F42C2F8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F42C2FC:
    ctx->pc = 0x7F42C2FCu;
    // 7F42C2FC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F42C300:
    ctx->pc = 0x7F42C300u;
    // 7F42C300: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F42C304:
    ctx->pc = 0x7F42C304u;
    // 7F42C304: li      r9, 8
    ctx->gpr[9] = (u32)(s32)(8);

label_7F42C308:
    ctx->pc = 0x7F42C308u;
    // 7F42C308: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F42C30C:
    ctx->pc = 0x7F42C30Cu;
    // 7F42C30C: bl      0x800501FC
    {
            ctx->lr = 0x7F42C310u;
            ctx->pc = 0x800501FCu;
            return;
    }

label_7F42C310:
    ctx->pc = 0x7F42C310u;
    ctx->downcount -= 1;
    // 7F42C310: stw     r3, 3428(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3428);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42C314:
    ctx->pc = 0x7F42C314u;
    ctx->downcount -= 3;
    // 7F42C314: lwz     r3, 3428(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3428);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42C318:
    ctx->pc = 0x7F42C318u;
    // 7F42C318: cmplwi  r3, 0x0000
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

label_7F42C31C:
    ctx->pc = 0x7F42C31Cu;
    // 7F42C31C: bc    12, 2, 0x7F42C384
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42C384;
        }
    }

label_7F42C320:
    ctx->pc = 0x7F42C320u;
    ctx->downcount -= 3;
    // 7F42C320: lwz     r0, 3416(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3416);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42C324:
    ctx->pc = 0x7F42C324u;
    // 7F42C324: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42C328:
    ctx->pc = 0x7F42C328u;
    // 7F42C328: bc    4, 2, 0x7F42C338
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42C338;
        }
    }

label_7F42C32C:
    ctx->pc = 0x7F42C32Cu;
    ctx->downcount -= 1;
    // 7F42C32C: bl      0x80051AA0
    {
            ctx->lr = 0x7F42C330u;
            ctx->pc = 0x80051AA0u;
            return;
    }

label_7F42C330:
    ctx->pc = 0x7F42C330u;
    ctx->downcount -= 2;
    // 7F42C330: stw     r3, 3416(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3416);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42C334:
    ctx->pc = 0x7F42C334u;
    // 7F42C334: b       0x7F42C384
    {
            goto label_7F42C384;
    }

label_7F42C338:
    ctx->pc = 0x7F42C338u;
    ctx->downcount -= 3;
    // 7F42C338: lwz     r0, 3420(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3420);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42C33C:
    ctx->pc = 0x7F42C33Cu;
    // 7F42C33C: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42C340:
    ctx->pc = 0x7F42C340u;
    // 7F42C340: bc    4, 2, 0x7F42C354
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42C354;
        }
    }

label_7F42C344:
    ctx->pc = 0x7F42C344u;
    ctx->downcount -= 1;
    // 7F42C344: bl      0x80051A5C
    {
            ctx->lr = 0x7F42C348u;
            ctx->pc = 0x80051A5Cu;
            return;
    }

label_7F42C348:
    ctx->pc = 0x7F42C348u;
    ctx->downcount -= 3;
    // 7F42C348: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F42C34C:
    ctx->pc = 0x7F42C34Cu;
    // 7F42C34C: stw     r0, 3420(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3420);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42C350:
    ctx->pc = 0x7F42C350u;
    // 7F42C350: b       0x7F42C384
    {
            goto label_7F42C384;
    }

label_7F42C354:
    ctx->pc = 0x7F42C354u;
    ctx->downcount -= 3;
    // 7F42C354: lwz     r0, 3412(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3412);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42C358:
    ctx->pc = 0x7F42C358u;
    // 7F42C358: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42C35C:
    ctx->pc = 0x7F42C35Cu;
    // 7F42C35C: bc    4, 2, 0x7F42C374
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42C374;
        }
    }

label_7F42C360:
    ctx->pc = 0x7F42C360u;
    ctx->downcount -= 3;
    // 7F42C360: lwz     r0, 2032(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2032);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42C364:
    ctx->pc = 0x7F42C364u;
    // 7F42C364: cmplwi  r0, 0x0000
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

label_7F42C368:
    ctx->pc = 0x7F42C368u;
    // 7F42C368: bc    12, 2, 0x7F42C374
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42C374;
        }
    }

label_7F42C36C:
    ctx->pc = 0x7F42C36Cu;
    ctx->downcount -= 2;
    // 7F42C36C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F42C370:
    ctx->pc = 0x7F42C370u;
    // 7F42C370: bl      0x7F42B80C
    {
            ctx->lr = 0x7F42C374u;
            ctx->pc = 0x7F42B80Cu;
            return;
    }

label_7F42C374:
    ctx->pc = 0x7F42C374u;
    ctx->downcount -= 4;
    // 7F42C374: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F42C378:
    ctx->pc = 0x7F42C378u;
    // 7F42C378: stw     r0, 3424(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3424);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42C37C:
    ctx->pc = 0x7F42C37Cu;
    // 7F42C37C: stw     r0, 3416(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3416);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42C380:
    ctx->pc = 0x7F42C380u;
    // 7F42C380: stw     r0, 3420(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3420);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42C384:
    ctx->pc = 0x7F42C384u;
    ctx->downcount -= 16;
    // 7F42C384: lmw     r25, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F42C388:
    ctx->pc = 0x7F42C388u;
    // 7F42C388: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42C38C:
    ctx->pc = 0x7F42C38Cu;
    // 7F42C38C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42C390:
    ctx->pc = 0x7F42C390u;
    // 7F42C390: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F42C394:
    ctx->pc = 0x7F42C394u;
    // 7F42C394: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42C398:
    ctx->pc = 0x7F42C398u;
    ctx->downcount -= 4;
    // 7F42C398: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42C39C:
    ctx->pc = 0x7F42C39Cu;
    // 7F42C39C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42C3A0:
    ctx->pc = 0x7F42C3A0u;
    // 7F42C3A0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42C3A4:
    ctx->pc = 0x7F42C3A4u;
    // 7F42C3A4: bl      0x7F42B9F0
    {
            ctx->lr = 0x7F42C3A8u;
            ctx->pc = 0x7F42B9F0u;
            return;
    }

label_7F42C3A8:
    ctx->pc = 0x7F42C3A8u;
    ctx->downcount -= 31;
    // 7F42C3A8: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F42C3AC:
    ctx->pc = 0x7F42C3ACu;
    // 7F42C3AC: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42C3B0:
    ctx->pc = 0x7F42C3B0u;
    // 7F42C3B0: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42C3B4:
    ctx->pc = 0x7F42C3B4u;
    // 7F42C3B4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42C3B8:
    ctx->pc = 0x7F42C3B8u;
    // 7F42C3B8: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42C3BC:
    ctx->pc = 0x7F42C3BCu;
    // 7F42C3BC: lfd     f2, -10384(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42C3BCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10384);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42C3C0:
    ctx->pc = 0x7F42C3C0u;
    // 7F42C3C0: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42C3C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42C3C4:
    ctx->pc = 0x7F42C3C4u;
    // 7F42C3C4: lfs     f0, -10360(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42C3C4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10360);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42C3C8:
    ctx->pc = 0x7F42C3C8u;
    // 7F42C3C8: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F42C3C8u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F42C3CC:
    ctx->pc = 0x7F42C3CCu;
    // 7F42C3CC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42C3D0:
    ctx->pc = 0x7F42C3D0u;
    // 7F42C3D0: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42C3D0u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F42C3D4:
    ctx->pc = 0x7F42C3D4u;
    // 7F42C3D4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42C3D8:
    ctx->pc = 0x7F42C3D8u;
    // 7F42C3D8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F42C3DC:
    ctx->pc = 0x7F42C3DCu;
    // 7F42C3DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42C3E0:
    ctx->pc = 0x7F42C3E0u;
    ctx->downcount -= 20;
    // 7F42C3E0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42C3E4:
    ctx->pc = 0x7F42C3E4u;
    // 7F42C3E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42C3E8:
    ctx->pc = 0x7F42C3E8u;
    // 7F42C3E8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42C3EC:
    ctx->pc = 0x7F42C3ECu;
    // 7F42C3EC: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F42C3F0:
    ctx->pc = 0x7F42C3F0u;
    // 7F42C3F0: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42C3F4:
    ctx->pc = 0x7F42C3F4u;
    // 7F42C3F4: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F42C3F8:
    ctx->pc = 0x7F42C3F8u;
    // 7F42C3F8: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F42C3FC:
    ctx->pc = 0x7F42C3FCu;
    // 7F42C3FC: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F42C400:
    ctx->pc = 0x7F42C400u;
    // 7F42C400: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F42C404:
    ctx->pc = 0x7F42C404u;
    // 7F42C404: b       0x7F42C448
    {
            goto label_7F42C448;
    }

label_7F42C408:
    ctx->downcount -= 4;
    // 7F42C408: add   r28, r26, r29
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[28] = res;
    }

label_7F42C40C:
    ctx->pc = 0x7F42C40Cu;
    // 7F42C40C: lwz     r0, 2032(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2032);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42C410:
    // 7F42C410: cmplwi  r0, 0x0000
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

label_7F42C414:
    // 7F42C414: bc    12, 2, 0x7F42C42C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42C42C;
        }
    }

label_7F42C418:
    ctx->downcount -= 3;
    // 7F42C418: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F42C41C:
    // 7F42C41C: add   r3, r26, r3
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F42C420:
    // 7F42C420: bl      0x7F023E10
    {
            ctx->lr = 0x7F42C424u;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F42C424:
    ctx->downcount -= 2;
    // 7F42C424: addi    r3, r28, 2032
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(2032);

label_7F42C428:
    // 7F42C428: bl      0x7F042AAC
    {
            ctx->lr = 0x7F42C42Cu;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F42C42C:
    ctx->downcount -= 3;
    // 7F42C42C: addi    r3, r30, 2896
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(2896);

label_7F42C430:
    // 7F42C430: add   r3, r26, r3
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F42C434:
    // 7F42C434: bl      0x7F0146B0
    {
            ctx->lr = 0x7F42C438u;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F42C438:
    ctx->downcount -= 4;
    // 7F42C438: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F42C43C:
    // 7F42C43C: addi    r30, r30, 192
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(192);

label_7F42C440:
    // 7F42C440: addi    r31, r31, 400
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(400);

label_7F42C444:
    // 7F42C444: addi    r29, r29, 44
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(44);

label_7F42C448:
    ctx->pc = 0x7F42C448u;
    ctx->downcount -= 3;
    // 7F42C448: lwz     r0, 3408(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3408);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42C44C:
    // 7F42C44C: cmpw    r27, r0
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42C450:
    // 7F42C450: bc    12, 0, 0x7F42C408
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42C408u;
                return;
            }
            goto label_7F42C408;
        }
    }

label_7F42C454:
    ctx->pc = 0x7F42C454u;
    ctx->downcount -= 2;
    // 7F42C454: addi    r3, r26, 832
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(832);

label_7F42C458:
    ctx->pc = 0x7F42C458u;
    // 7F42C458: bl      0x7F023E10
    {
            ctx->lr = 0x7F42C45Cu;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F42C45C:
    ctx->pc = 0x7F42C45Cu;
    ctx->downcount -= 2;
    // 7F42C45C: addi    r3, r26, 2120
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(2120);

label_7F42C460:
    ctx->pc = 0x7F42C460u;
    // 7F42C460: bl      0x7F042AAC
    {
            ctx->lr = 0x7F42C464u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F42C464:
    ctx->pc = 0x7F42C464u;
    ctx->downcount -= 3;
    // 7F42C464: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F42C468:
    ctx->pc = 0x7F42C468u;
    // 7F42C468: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F42C46C:
    ctx->pc = 0x7F42C46Cu;
    // 7F42C46C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F42C470:
    ctx->downcount -= 4;
    // 7F42C470: add   r3, r26, r30
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F42C474:
    ctx->pc = 0x7F42C474u;
    // 7F42C474: lwz     r0, 2164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42C478:
    // 7F42C478: cmplwi  r0, 0x0000
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

label_7F42C47C:
    // 7F42C47C: bc    12, 2, 0x7F42C488
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42C488;
        }
    }

label_7F42C480:
    ctx->downcount -= 2;
    // 7F42C480: addi    r3, r3, 2164
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(2164);

label_7F42C484:
    // 7F42C484: bl      0x7F042AAC
    {
            ctx->lr = 0x7F42C488u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F42C488:
    ctx->downcount -= 3;
    // 7F42C488: addi    r3, r31, 1232
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1232);

label_7F42C48C:
    // 7F42C48C: add   r3, r26, r3
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F42C490:
    // 7F42C490: bl      0x7F023E10
    {
            ctx->lr = 0x7F42C494u;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F42C494:
    ctx->downcount -= 5;
    // 7F42C494: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F42C498:
    // 7F42C498: addi    r30, r30, 44
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(44);

label_7F42C49C:
    // 7F42C49C: cmpwi   r28, 2
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

label_7F42C4A0:
    // 7F42C4A0: addi    r31, r31, 400
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(400);

label_7F42C4A4:
    // 7F42C4A4: bc    12, 0, 0x7F42C470
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42C470u;
                return;
            }
            goto label_7F42C470;
        }
    }

label_7F42C4A8:
    ctx->pc = 0x7F42C4A8u;
    ctx->downcount -= 16;
    // 7F42C4A8: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F42C4AC:
    ctx->pc = 0x7F42C4ACu;
    // 7F42C4AC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42C4B0:
    ctx->pc = 0x7F42C4B0u;
    // 7F42C4B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42C4B4:
    ctx->pc = 0x7F42C4B4u;
    // 7F42C4B4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F42C4B8:
    ctx->pc = 0x7F42C4B8u;
    // 7F42C4B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42C4BC:
    ctx->pc = 0x7F42C4BCu;
    ctx->downcount -= 33;
    // 7F42C4BC: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42C4C0:
    ctx->pc = 0x7F42C4C0u;
    // 7F42C4C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42C4C4:
    ctx->pc = 0x7F42C4C4u;
    // 7F42C4C4: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42C4C8:
    ctx->pc = 0x7F42C4C8u;
    // 7F42C4C8: stfd     f31, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42C4C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F42C4CC:
    ctx->pc = 0x7F42C4CCu;
    // 7F42C4CC: psq_st   f31, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F42C4CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F42C4CCu);
        if (ctx->exception) return;
    }

label_7F42C4D0:
    ctx->pc = 0x7F42C4D0u;
    // 7F42C4D0: stmw     r21, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 21; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F42C4D4:
    ctx->pc = 0x7F42C4D4u;
    // 7F42C4D4: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F42C4D8:
    ctx->pc = 0x7F42C4D8u;
    // 7F42C4D8: lis     r7, 32583
    ctx->gpr[7] = ((u32)(s32)(32583) << 16);

label_7F42C4DC:
    ctx->pc = 0x7F42C4DCu;
    // 7F42C4DC: addi    r8, r5, -10392
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(-10392);

label_7F42C4E0:
    ctx->pc = 0x7F42C4E0u;
    // 7F42C4E0: lis     r6, 32585
    ctx->gpr[6] = ((u32)(s32)(32585) << 16);

label_7F42C4E4:
    ctx->pc = 0x7F42C4E4u;
    // 7F42C4E4: lis     r5, 32579
    ctx->gpr[5] = ((u32)(s32)(32579) << 16);

label_7F42C4E8:
    ctx->pc = 0x7F42C4E8u;
    // 7F42C4E8: lfs     f31, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F42C4E8u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F42C4EC:
    ctx->pc = 0x7F42C4ECu;
    // 7F42C4EC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42C4F0:
    ctx->pc = 0x7F42C4F0u;
    // 7F42C4F0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F42C4F4:
    ctx->pc = 0x7F42C4F4u;
    // 7F42C4F4: addi    r22, r7, -10356
    ctx->gpr[22] = ctx->gpr[7] + (u32)(s32)(-10356);

label_7F42C4F8:
    ctx->pc = 0x7F42C4F8u;
    // 7F42C4F8: addi    r24, r6, 12832
    ctx->gpr[24] = ctx->gpr[6] + (u32)(s32)(12832);

label_7F42C4FC:
    ctx->pc = 0x7F42C4FCu;
    // 7F42C4FC: addi    r25, r5, -17788
    ctx->gpr[25] = ctx->gpr[5] + (u32)(s32)(-17788);

label_7F42C500:
    ctx->pc = 0x7F42C500u;
    // 7F42C500: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F42C504:
    ctx->pc = 0x7F42C504u;
    // 7F42C504: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F42C508:
    ctx->pc = 0x7F42C508u;
    // 7F42C508: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F42C50C:
    ctx->pc = 0x7F42C50Cu;
    // 7F42C50C: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F42C510:
    ctx->pc = 0x7F42C510u;
    // 7F42C510: lis     r23, 1
    ctx->gpr[23] = ((u32)(s32)(1) << 16);

label_7F42C514:
    ctx->pc = 0x7F42C514u;
    // 7F42C514: b       0x7F42C640
    {
            goto label_7F42C640;
    }

label_7F42C518:
    ctx->downcount -= 34;
    // 7F42C518: addi    r0, r26, 2032
    ctx->gpr[0] = ctx->gpr[26] + (u32)(s32)(2032);

label_7F42C51C:
    // 7F42C51C: addi    r4, r29, 3348
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(3348);

label_7F42C520:
    ctx->pc = 0x7F42C520u;
    // 7F42C520: lwzx    r6, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F42C524:
    // 7F42C524: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F42C528:
    // 7F42C528: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F42C52C:
    ctx->pc = 0x7F42C52Cu;
    // 7F42C52C: lwz     r6, 72(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F42C530:
    ctx->pc = 0x7F42C530u;
    // 7F42C530: lfs     f0, 36(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42C530u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42C534:
    ctx->pc = 0x7F42C534u;
    // 7F42C534: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42C534u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42C538:
    ctx->pc = 0x7F42C538u;
    // 7F42C538: lfs     f0, 40(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42C538u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42C53C:
    ctx->pc = 0x7F42C53Cu;
    // 7F42C53C: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42C53Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42C540:
    ctx->pc = 0x7F42C540u;
    // 7F42C540: lfs     f0, 44(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42C540u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42C544:
    ctx->pc = 0x7F42C544u;
    // 7F42C544: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42C544u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42C548:
    ctx->pc = 0x7F42C548u;
    // 7F42C548: stfs     f31, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42C548u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F42C54C:
    ctx->pc = 0x7F42C54Cu;
    // 7F42C54C: lfs     f0, 24(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42C54Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42C550:
    ctx->pc = 0x7F42C550u;
    // 7F42C550: stfs     f0, 3348(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42C550u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3348);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42C554:
    ctx->pc = 0x7F42C554u;
    // 7F42C554: lwzx    r6, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F42C558:
    ctx->pc = 0x7F42C558u;
    // 7F42C558: lwz     r6, 72(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F42C55C:
    ctx->pc = 0x7F42C55Cu;
    // 7F42C55C: lfs     f0, 28(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42C55Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42C560:
    ctx->pc = 0x7F42C560u;
    // 7F42C560: stfs     f0, 3352(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42C560u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3352);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42C564:
    ctx->pc = 0x7F42C564u;
    // 7F42C564: lwzx    r6, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F42C568:
    ctx->pc = 0x7F42C568u;
    // 7F42C568: lwz     r6, 72(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F42C56C:
    ctx->pc = 0x7F42C56Cu;
    // 7F42C56C: lfs     f0, 32(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42C56Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42C570:
    ctx->pc = 0x7F42C570u;
    // 7F42C570: stfs     f0, 3356(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42C570u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3356);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42C574:
    ctx->pc = 0x7F42C574u;
    // 7F42C574: stfs     f31, 3360(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42C574u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3360);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F42C578:
    ctx->pc = 0x7F42C578u;
    // 7F42C578: lwzx    r6, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F42C57C:
    ctx->pc = 0x7F42C57Cu;
    // 7F42C57C: lwz     r6, 72(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F42C580:
    ctx->pc = 0x7F42C580u;
    // 7F42C580: lfs     f0, 24(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42C580u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42C584:
    ctx->pc = 0x7F42C584u;
    // 7F42C584: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42C584u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42C588:
    ctx->pc = 0x7F42C588u;
    // 7F42C588: lfs     f0, 28(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42C588u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42C58C:
    ctx->pc = 0x7F42C58Cu;
    // 7F42C58C: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42C58Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42C590:
    ctx->pc = 0x7F42C590u;
    // 7F42C590: lfs     f0, 32(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42C590u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42C594:
    ctx->pc = 0x7F42C594u;
    // 7F42C594: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42C594u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42C598:
    ctx->pc = 0x7F42C598u;
    // 7F42C598: stfs     f31, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42C598u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F42C59C:
    // 7F42C59C: bl      0x800261D8
    {
            ctx->lr = 0x7F42C5A0u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F42C5A0:
    ctx->downcount -= 4;
    // 7F42C5A0: addi    r3, r29, 3348
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(3348);

label_7F42C5A4:
    ctx->pc = 0x7F42C5A4u;
    // 7F42C5A4: lfs     f1, 0(r22)
    if (!ppc_fp_available_inline(ctx, 0x7F42C5A4u)) return;
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42C5A8:
    // 7F42C5A8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42C5AC:
    // 7F42C5AC: bl      0x800261FC
    {
            ctx->lr = 0x7F42C5B0u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F42C5B0:
    ctx->downcount -= 4;
    // 7F42C5B0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F42C5B4:
    // 7F42C5B4: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F42C5B8:
    // 7F42C5B8: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42C5BC:
    // 7F42C5BC: bl      0x800261B4
    {
            ctx->lr = 0x7F42C5C0u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F42C5C0:
    ctx->downcount -= 4;
    // 7F42C5C0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F42C5C4:
    ctx->pc = 0x7F42C5C4u;
    // 7F42C5C4: lfs     f1, 0(r22)
    if (!ppc_fp_available_inline(ctx, 0x7F42C5C4u)) return;
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42C5C8:
    // 7F42C5C8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42C5CC:
    // 7F42C5CC: bl      0x800261FC
    {
            ctx->lr = 0x7F42C5D0u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F42C5D0:
    ctx->downcount -= 9;
    // 7F42C5D0: addi    r21, r27, 2896
    ctx->gpr[21] = ctx->gpr[27] + (u32)(s32)(2896);

label_7F42C5D4:
    // 7F42C5D4: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F42C5D8:
    // 7F42C5D8: add   r21, r29, r21
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[21];
        u32 res = a + b;
        ctx->gpr[21] = res;
    }

label_7F42C5DC:
    // 7F42C5DC: addi    r7, r29, 3348
    ctx->gpr[7] = ctx->gpr[29] + (u32)(s32)(3348);

label_7F42C5E0:
    // 7F42C5E0: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F42C5E4:
    // 7F42C5E4: addi    r8, r1, 8
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(8);

label_7F42C5E8:
    // 7F42C5E8: li      r4, 4117
    ctx->gpr[4] = (u32)(s32)(4117);

label_7F42C5EC:
    // 7F42C5EC: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F42C5F0:
    // 7F42C5F0: bl      0x7F014788
    {
            ctx->lr = 0x7F42C5F4u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F42C5F4:
    ctx->downcount -= 9;
    // 7F42C5F4: addi    r4, r28, 3280
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(3280);

label_7F42C5F8:
    // 7F42C5F8: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F42C5FC:
    // 7F42C5FC: or   r9, r24, r24
    {
        ctx->gpr[9] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F42C600:
    // 7F42C600: addi    r6, r23, -1
    ctx->gpr[6] = ctx->gpr[23] + (u32)(s32)(-1);

label_7F42C604:
    // 7F42C604: add   r4, r29, r4
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F42C608:
    // 7F42C608: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F42C60C:
    // 7F42C60C: li      r7, 20
    ctx->gpr[7] = (u32)(s32)(20);

label_7F42C610:
    // 7F42C610: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F42C614:
    // 7F42C614: bl      0x7F014B78
    {
            ctx->lr = 0x7F42C618u;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F42C618:
    ctx->downcount -= 2;
    // 7F42C618: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F42C61C:
    // 7F42C61C: bl      0x7F0148A0
    {
            ctx->lr = 0x7F42C620u;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F42C620:
    ctx->downcount -= 4;
    // 7F42C620: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F42C624:
    // 7F42C624: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F42C628:
    // 7F42C628: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F42C62C:
    // 7F42C62C: bl      0x7F014B6C
    {
            ctx->lr = 0x7F42C630u;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F42C630:
    ctx->downcount -= 4;
    // 7F42C630: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F42C634:
    // 7F42C634: addi    r28, r28, 32
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(32);

label_7F42C638:
    // 7F42C638: addi    r27, r27, 192
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(192);

label_7F42C63C:
    // 7F42C63C: addi    r26, r26, 44
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(44);

label_7F42C640:
    ctx->pc = 0x7F42C640u;
    ctx->downcount -= 3;
    // 7F42C640: lwz     r0, 3408(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3408);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42C644:
    // 7F42C644: cmpw    r30, r0
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

label_7F42C648:
    // 7F42C648: bc    12, 0, 0x7F42C518
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42C518u;
                return;
            }
            goto label_7F42C518;
        }
    }

label_7F42C64C:
    ctx->pc = 0x7F42C64Cu;
    ctx->downcount -= 18;
    // 7F42C64C: psq_l   f31, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F42C64Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F42C64Cu);
        if (ctx->exception) return;
    }

label_7F42C650:
    ctx->pc = 0x7F42C650u;
    // 7F42C650: lfd     f31, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42C650u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42C654:
    ctx->pc = 0x7F42C654u;
    // 7F42C654: lmw     r21, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 21; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F42C658:
    ctx->pc = 0x7F42C658u;
    // 7F42C658: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42C65C:
    ctx->pc = 0x7F42C65Cu;
    // 7F42C65C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42C660:
    ctx->pc = 0x7F42C660u;
    // 7F42C660: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_7F42C664:
    ctx->pc = 0x7F42C664u;
    // 7F42C664: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42C668:
    ctx->pc = 0x7F42C668u;
    ctx->downcount -= 24;
    // 7F42C668: stwu     r1, -144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-144);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42C66C:
    ctx->pc = 0x7F42C66Cu;
    // 7F42C66C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42C670:
    ctx->pc = 0x7F42C670u;
    // 7F42C670: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42C674:
    ctx->pc = 0x7F42C674u;
    // 7F42C674: stfd     f31, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42C674u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F42C678:
    ctx->pc = 0x7F42C678u;
    // 7F42C678: psq_st   f31, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F42C678u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F42C678u);
        if (ctx->exception) return;
    }

label_7F42C67C:
    ctx->pc = 0x7F42C67Cu;
    // 7F42C67C: stfd     f30, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42C67Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F42C680:
    ctx->pc = 0x7F42C680u;
    // 7F42C680: psq_st   f30, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F42C680u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F42C680u);
        if (ctx->exception) return;
    }

label_7F42C684:
    ctx->pc = 0x7F42C684u;
    // 7F42C684: stmw     r22, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 22; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F42C688:
    ctx->pc = 0x7F42C688u;
    // 7F42C688: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42C68C:
    ctx->pc = 0x7F42C68Cu;
    // 7F42C68C: or   r22, r4, r4
    {
        ctx->gpr[22] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F42C690:
    ctx->pc = 0x7F42C690u;
    // 7F42C690: or   r27, r5, r5
    {
        ctx->gpr[27] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F42C694:
    ctx->pc = 0x7F42C694u;
    // 7F42C694: li      r3, 110
    ctx->gpr[3] = (u32)(s32)(110);

label_7F42C698:
    ctx->pc = 0x7F42C698u;
    // 7F42C698: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F42C69C:
    ctx->pc = 0x7F42C69Cu;
    // 7F42C69C: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F42C6A0u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F42C6A0:
    ctx->pc = 0x7F42C6A0u;
    ctx->downcount -= 7;
    // 7F42C6A0: stw     r3, 3408(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3408);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42C6A4:
    ctx->pc = 0x7F42C6A4u;
    // 7F42C6A4: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F42C6A8:
    ctx->pc = 0x7F42C6A8u;
    // 7F42C6A8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F42C6AC:
    ctx->pc = 0x7F42C6ACu;
    // 7F42C6AC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F42C6B0:
    ctx->pc = 0x7F42C6B0u;
    // 7F42C6B0: stb     r0, -2592(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2592);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F42C6B4:
    ctx->pc = 0x7F42C6B4u;
    // 7F42C6B4: li      r3, 103
    ctx->gpr[3] = (u32)(s32)(103);

label_7F42C6B8:
    ctx->pc = 0x7F42C6B8u;
    // 7F42C6B8: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F42C6BCu;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F42C6BC:
    ctx->pc = 0x7F42C6BCu;
    ctx->downcount -= 8;
    // 7F42C6BC: stw     r3, 3392(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3392);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42C6C0:
    ctx->pc = 0x7F42C6C0u;
    // 7F42C6C0: addi    r30, r26, 832
    ctx->gpr[30] = ctx->gpr[26] + (u32)(s32)(832);

label_7F42C6C4:
    ctx->pc = 0x7F42C6C4u;
    // 7F42C6C4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F42C6C8:
    ctx->pc = 0x7F42C6C8u;
    // 7F42C6C8: or   r31, r22, r22
    {
        ctx->gpr[31] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F42C6CC:
    ctx->pc = 0x7F42C6CCu;
    // 7F42C6CC: or   r4, r22, r22
    {
        ctx->gpr[4] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F42C6D0:
    ctx->pc = 0x7F42C6D0u;
    // 7F42C6D0: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F42C6D4:
    ctx->pc = 0x7F42C6D4u;
    // 7F42C6D4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F42C6D8:
    ctx->pc = 0x7F42C6D8u;
    // 7F42C6D8: bl      0x7F022FB4
    {
            ctx->lr = 0x7F42C6DCu;
            ctx->pc = 0x7F022FB4u;
            return;
    }

label_7F42C6DC:
    ctx->pc = 0x7F42C6DCu;
    ctx->downcount -= 2;
    // 7F42C6DC: cmpwi   r3, 0
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

label_7F42C6E0:
    ctx->pc = 0x7F42C6E0u;
    // 7F42C6E0: bc    4, 0, 0x7F42C6EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42C6EC;
        }
    }

label_7F42C6E4:
    ctx->pc = 0x7F42C6E4u;
    ctx->downcount -= 2;
    // 7F42C6E4: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F42C6E8:
    ctx->pc = 0x7F42C6E8u;
    // 7F42C6E8: b       0x7F42CC78
    {
            goto label_7F42CC78;
    }

label_7F42C6EC:
    ctx->pc = 0x7F42C6ECu;
    ctx->downcount -= 5;
    // 7F42C6EC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F42C6F0:
    ctx->pc = 0x7F42C6F0u;
    // 7F42C6F0: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F42C6F4:
    ctx->pc = 0x7F42C6F4u;
    // 7F42C6F4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F42C6F8:
    ctx->pc = 0x7F42C6F8u;
    // 7F42C6F8: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_7F42C6FC:
    ctx->pc = 0x7F42C6FCu;
    // 7F42C6FC: bl      0x7F023F7C
    {
            ctx->lr = 0x7F42C700u;
            ctx->pc = 0x7F023F7Cu;
            return;
    }

label_7F42C700:
    ctx->pc = 0x7F42C700u;
    ctx->downcount -= 10;
    // 7F42C700: lhz     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F42C704:
    ctx->pc = 0x7F42C704u;
    // 7F42C704: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F42C708:
    ctx->pc = 0x7F42C708u;
    // 7F42C708: or   r28, r22, r22
    {
        ctx->gpr[28] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F42C70C:
    ctx->pc = 0x7F42C70Cu;
    // 7F42C70C: addi    r29, r26, 32
    ctx->gpr[29] = ctx->gpr[26] + (u32)(s32)(32);

label_7F42C710:
    ctx->pc = 0x7F42C710u;
    // 7F42C710: rlwinm r0, r0, 0, 16, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFCu;
    }

label_7F42C714:
    ctx->pc = 0x7F42C714u;
    // 7F42C714: or   r25, r24, r24
    {
        ctx->gpr[25] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F42C718:
    ctx->pc = 0x7F42C718u;
    // 7F42C718: sth     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42C71C:
    ctx->pc = 0x7F42C71Cu;
    // 7F42C71C: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_7F42C720:
    ctx->pc = 0x7F42C720u;
    // 7F42C720: stw     r24, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F42C724:
    ctx->pc = 0x7F42C724u;
    // 7F42C724: b       0x7F42C77C
    {
            goto label_7F42C77C;
    }

label_7F42C728:
    ctx->downcount -= 6;
    // 7F42C728: add   r23, r29, r25
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[25];
        u32 res = a + b;
        ctx->gpr[23] = res;
    }

label_7F42C72C:
    // 7F42C72C: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F42C730:
    // 7F42C730: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F42C734:
    // 7F42C734: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F42C738:
    // 7F42C738: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F42C73C:
    // 7F42C73C: bl      0x7F022FB4
    {
            ctx->lr = 0x7F42C740u;
            ctx->pc = 0x7F022FB4u;
            return;
    }

label_7F42C740:
    ctx->downcount -= 2;
    // 7F42C740: cmpwi   r3, 0
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

label_7F42C744:
    // 7F42C744: bc    4, 0, 0x7F42C750
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42C750;
        }
    }

label_7F42C748:
    ctx->downcount -= 2;
    // 7F42C748: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F42C74C:
    // 7F42C74C: b       0x7F42CC78
    {
            goto label_7F42CC78;
    }

label_7F42C750:
    ctx->downcount -= 5;
    // 7F42C750: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F42C754:
    // 7F42C754: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F42C758:
    // 7F42C758: li      r5, -2
    ctx->gpr[5] = (u32)(s32)(-2);

label_7F42C75C:
    // 7F42C75C: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_7F42C760:
    // 7F42C760: bl      0x7F023F7C
    {
            ctx->lr = 0x7F42C764u;
            ctx->pc = 0x7F023F7Cu;
            return;
    }

label_7F42C764:
    ctx->pc = 0x7F42C764u;
    ctx->downcount -= 6;
    // 7F42C764: lhz     r0, 68(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F42C768:
    // 7F42C768: addi    r22, r22, 1
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(1);

label_7F42C76C:
    // 7F42C76C: addi    r25, r25, 400
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(400);

label_7F42C770:
    // 7F42C770: ori     r0, r0, 0x0003
    ctx->gpr[0] = ctx->gpr[0] | 0x0003u;

label_7F42C774:
    ctx->pc = 0x7F42C774u;
    // 7F42C774: sth     r0, 68(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42C778:
    ctx->pc = 0x7F42C778u;
    // 7F42C778: stw     r24, 48(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F42C77C:
    ctx->pc = 0x7F42C77Cu;
    ctx->downcount -= 3;
    // 7F42C77C: lwz     r0, 3408(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3408);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42C780:
    // 7F42C780: cmpw    r22, r0
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

label_7F42C784:
    // 7F42C784: bc    12, 0, 0x7F42C728
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42C728u;
                return;
            }
            goto label_7F42C728;
        }
    }

label_7F42C788:
    ctx->pc = 0x7F42C788u;
    ctx->downcount -= 5;
    // 7F42C788: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_7F42C78C:
    ctx->pc = 0x7F42C78Cu;
    // 7F42C78C: addi    r28, r26, 1232
    ctx->gpr[28] = ctx->gpr[26] + (u32)(s32)(1232);

label_7F42C790:
    ctx->pc = 0x7F42C790u;
    // 7F42C790: or   r24, r22, r22
    {
        ctx->gpr[24] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F42C794:
    ctx->pc = 0x7F42C794u;
    // 7F42C794: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F42C798:
    ctx->pc = 0x7F42C798u;
    // 7F42C798: b       0x7F42C7F0
    {
            goto label_7F42C7F0;
    }

label_7F42C79C:
    ctx->downcount -= 6;
    // 7F42C79C: add   r23, r28, r25
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[25];
        u32 res = a + b;
        ctx->gpr[23] = res;
    }

label_7F42C7A0:
    // 7F42C7A0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F42C7A4:
    // 7F42C7A4: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F42C7A8:
    // 7F42C7A8: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F42C7AC:
    // 7F42C7AC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F42C7B0:
    // 7F42C7B0: bl      0x7F022FB4
    {
            ctx->lr = 0x7F42C7B4u;
            ctx->pc = 0x7F022FB4u;
            return;
    }

label_7F42C7B4:
    ctx->downcount -= 2;
    // 7F42C7B4: cmpwi   r3, 0
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

label_7F42C7B8:
    // 7F42C7B8: bc    4, 0, 0x7F42C7C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42C7C4;
        }
    }

label_7F42C7BC:
    ctx->downcount -= 2;
    // 7F42C7BC: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F42C7C0:
    // 7F42C7C0: b       0x7F42CC78
    {
            goto label_7F42CC78;
    }

label_7F42C7C4:
    ctx->downcount -= 5;
    // 7F42C7C4: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F42C7C8:
    // 7F42C7C8: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F42C7CC:
    // 7F42C7CC: li      r5, -2
    ctx->gpr[5] = (u32)(s32)(-2);

label_7F42C7D0:
    // 7F42C7D0: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_7F42C7D4:
    // 7F42C7D4: bl      0x7F023F7C
    {
            ctx->lr = 0x7F42C7D8u;
            ctx->pc = 0x7F023F7Cu;
            return;
    }

label_7F42C7D8:
    ctx->pc = 0x7F42C7D8u;
    ctx->downcount -= 6;
    // 7F42C7D8: lhz     r0, 68(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F42C7DC:
    // 7F42C7DC: addi    r22, r22, 1
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(1);

label_7F42C7E0:
    // 7F42C7E0: addi    r25, r25, 400
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(400);

label_7F42C7E4:
    // 7F42C7E4: ori     r0, r0, 0x0003
    ctx->gpr[0] = ctx->gpr[0] | 0x0003u;

label_7F42C7E8:
    ctx->pc = 0x7F42C7E8u;
    // 7F42C7E8: sth     r0, 68(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42C7EC:
    ctx->pc = 0x7F42C7ECu;
    // 7F42C7EC: stw     r24, 48(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F42C7F0:
    ctx->pc = 0x7F42C7F0u;
    ctx->downcount -= 3;
    // 7F42C7F0: lwz     r0, 3408(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3408);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42C7F4:
    // 7F42C7F4: cmpw    r22, r0
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

label_7F42C7F8:
    // 7F42C7F8: bc    12, 0, 0x7F42C79C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42C79Cu;
                return;
            }
            goto label_7F42C79C;
        }
    }

label_7F42C7FC:
    ctx->pc = 0x7F42C7FCu;
    ctx->downcount -= 4;
    // 7F42C7FC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F42C800:
    ctx->pc = 0x7F42C800u;
    // 7F42C800: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F42C804:
    ctx->pc = 0x7F42C804u;
    // 7F42C804: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42C808:
    ctx->pc = 0x7F42C808u;
    // 7F42C808: bl      0x7F3C664C
    {
            ctx->lr = 0x7F42C80Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F42C80C:
    ctx->pc = 0x7F42C80Cu;
    ctx->downcount -= 2;
    // 7F42C80C: cmplwi  r3, 0x0000
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

label_7F42C810:
    ctx->pc = 0x7F42C810u;
    // 7F42C810: bc    12, 2, 0x7F42C834
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42C834;
        }
    }

label_7F42C814:
    ctx->pc = 0x7F42C814u;
    ctx->downcount -= 2;
    // 7F42C814: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F42C818:
    ctx->pc = 0x7F42C818u;
    // 7F42C818: bl      0x7F3C6A78
    {
            ctx->lr = 0x7F42C81Cu;
            ctx->pc = 0x7F3C6A78u;
            return;
    }

label_7F42C81C:
    ctx->pc = 0x7F42C81Cu;
    ctx->downcount -= 3;
    // 7F42C81C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F42C820:
    ctx->pc = 0x7F42C820u;
    // 7F42C820: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F42C824:
    ctx->pc = 0x7F42C824u;
    // 7F42C824: bl      0x7F42CC9C
    {
            ctx->lr = 0x7F42C828u;
            goto label_7F42CC9C;
    }

label_7F42C828:
    ctx->pc = 0x7F42C828u;
    ctx->downcount -= 3;
    // 7F42C828: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F42C82C:
    ctx->pc = 0x7F42C82Cu;
    // 7F42C82C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F42C830:
    ctx->pc = 0x7F42C830u;
    // 7F42C830: bl      0x7F42CC9C
    {
            ctx->lr = 0x7F42C834u;
            goto label_7F42CC9C;
    }

label_7F42C834:
    ctx->pc = 0x7F42C834u;
    ctx->downcount -= 2;
    // 7F42C834: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_7F42C838:
    ctx->pc = 0x7F42C838u;
    // 7F42C838: bl      0x7F3C664C
    {
            ctx->lr = 0x7F42C83Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F42C83C:
    ctx->pc = 0x7F42C83Cu;
    ctx->downcount -= 2;
    // 7F42C83C: cmplwi  r3, 0x0000
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

label_7F42C840:
    ctx->pc = 0x7F42C840u;
    // 7F42C840: bc    12, 2, 0x7F42C85C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42C85C;
        }
    }

label_7F42C844:
    ctx->pc = 0x7F42C844u;
    ctx->downcount -= 2;
    // 7F42C844: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F42C848:
    ctx->pc = 0x7F42C848u;
    // 7F42C848: bl      0x7F3C6A78
    {
            ctx->lr = 0x7F42C84Cu;
            ctx->pc = 0x7F3C6A78u;
            return;
    }

label_7F42C84C:
    ctx->pc = 0x7F42C84Cu;
    ctx->downcount -= 3;
    // 7F42C84C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F42C850:
    ctx->pc = 0x7F42C850u;
    // 7F42C850: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F42C854:
    ctx->pc = 0x7F42C854u;
    // 7F42C854: bl      0x7F42CC9C
    {
            ctx->lr = 0x7F42C858u;
            goto label_7F42CC9C;
    }

label_7F42C858:
    ctx->pc = 0x7F42C858u;
    ctx->downcount -= 1;
    // 7F42C858: b       0x7F42C9A4
    {
            goto label_7F42C9A4;
    }

label_7F42C85C:
    ctx->pc = 0x7F42C85Cu;
    ctx->downcount -= 21;
    // 7F42C85C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42C860:
    ctx->pc = 0x7F42C860u;
    // 7F42C860: lfs     f0, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42C860u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42C864:
    ctx->pc = 0x7F42C864u;
    // 7F42C864: lfs     f1, -10372(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42C864u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10372);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42C868:
    ctx->pc = 0x7F42C868u;
    // 7F42C868: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42C868u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F42C86C:
    ctx->pc = 0x7F42C86Cu;
    // 7F42C86C: stfs     f0, 0(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42C86Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42C870:
    ctx->pc = 0x7F42C870u;
    // 7F42C870: lfs     f0, 4(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42C870u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42C874:
    ctx->pc = 0x7F42C874u;
    // 7F42C874: stfs     f0, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42C874u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42C878:
    ctx->pc = 0x7F42C878u;
    // 7F42C878: lfs     f0, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42C878u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42C87C:
    ctx->pc = 0x7F42C87Cu;
    // 7F42C87C: stfs     f0, 8(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42C87Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42C880:
    ctx->pc = 0x7F42C880u;
    // 7F42C880: lfs     f0, 12(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42C880u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42C884:
    ctx->pc = 0x7F42C884u;
    // 7F42C884: stfs     f0, 12(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42C884u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42C888:
    ctx->pc = 0x7F42C888u;
    // 7F42C888: lfs     f0, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42C888u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42C88C:
    ctx->pc = 0x7F42C88Cu;
    // 7F42C88C: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42C88Cu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F42C890:
    ctx->pc = 0x7F42C890u;
    // 7F42C890: stfs     f0, 400(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42C890u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(400);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42C894:
    ctx->pc = 0x7F42C894u;
    // 7F42C894: lfs     f0, 4(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42C894u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42C898:
    ctx->pc = 0x7F42C898u;
    // 7F42C898: stfs     f0, 404(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42C898u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(404);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42C89C:
    ctx->pc = 0x7F42C89Cu;
    // 7F42C89C: lfs     f0, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42C89Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42C8A0:
    ctx->pc = 0x7F42C8A0u;
    // 7F42C8A0: stfs     f0, 408(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42C8A0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(408);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42C8A4:
    ctx->pc = 0x7F42C8A4u;
    // 7F42C8A4: lfs     f0, 12(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42C8A4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42C8A8:
    ctx->pc = 0x7F42C8A8u;
    // 7F42C8A8: stfs     f0, 412(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42C8A8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(412);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42C8AC:
    ctx->pc = 0x7F42C8ACu;
    // 7F42C8AC: bl      0x7F42B998
    {
            ctx->lr = 0x7F42C8B0u;
            ctx->pc = 0x7F42B998u;
            return;
    }

label_7F42C8B0:
    ctx->pc = 0x7F42C8B0u;
    ctx->downcount -= 5;
    // 7F42C8B0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42C8B4:
    ctx->pc = 0x7F42C8B4u;
    // 7F42C8B4: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42C8B4u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F42C8B8:
    ctx->pc = 0x7F42C8B8u;
    // 7F42C8B8: lfs     f0, -10424(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42C8B8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10424);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42C8BC:
    ctx->pc = 0x7F42C8BCu;
    // 7F42C8BC: fmuls   f30, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F42C8BCu)) return;
    ppc_fmuls(ctx, 30, 0, 31);

label_7F42C8C0:
    ctx->pc = 0x7F42C8C0u;
    // 7F42C8C0: bl      0x7F42C398
    {
            ctx->lr = 0x7F42C8C4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42C398u;
                return;
            }
            goto label_7F42C398;
    }

label_7F42C8C4:
    ctx->pc = 0x7F42C8C4u;
    ctx->downcount -= 10;
    // 7F42C8C4: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42C8C8:
    ctx->pc = 0x7F42C8C8u;
    // 7F42C8C8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42C8CC:
    ctx->pc = 0x7F42C8CCu;
    // 7F42C8CC: lfs     f2, -10348(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42C8CCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10348);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F42C8D0:
    ctx->pc = 0x7F42C8D0u;
    // 7F42C8D0: lfs     f0, -10352(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42C8D0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10352);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42C8D4:
    ctx->pc = 0x7F42C8D4u;
    // 7F42C8D4: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42C8D4u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F42C8D8:
    ctx->pc = 0x7F42C8D8u;
    // 7F42C8D8: fmr    f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F42C8D8u)) return;
    ctx->fpr[1] = ctx->fpr[30];

label_7F42C8DC:
    ctx->pc = 0x7F42C8DCu;
    // 7F42C8DC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42C8DCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F42C8E0:
    ctx->pc = 0x7F42C8E0u;
    // 7F42C8E0: stfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42C8E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42C8E4:
    ctx->pc = 0x7F42C8E4u;
    // 7F42C8E4: lwz     r22, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

label_7F42C8E8:
    ctx->pc = 0x7F42C8E8u;
    // 7F42C8E8: bl      0x7F00FAF4
    {
            ctx->lr = 0x7F42C8ECu;
            ctx->pc = 0x7F00FAF4u;
            return;
    }

label_7F42C8EC:
    ctx->pc = 0x7F42C8ECu;
    ctx->downcount -= 18;
    // 7F42C8EC: xoris   r3, r22, 0x8000
    ctx->gpr[3] = ctx->gpr[22] ^ (0x8000u << 16);

label_7F42C8F0:
    ctx->pc = 0x7F42C8F0u;
    // 7F42C8F0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F42C8F4:
    ctx->pc = 0x7F42C8F4u;
    // 7F42C8F4: stw     r3, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42C8F8:
    ctx->pc = 0x7F42C8F8u;
    // 7F42C8F8: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42C8FC:
    ctx->pc = 0x7F42C8FCu;
    // 7F42C8FC: lfd     f3, -10416(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42C8FCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10416);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42C900:
    ctx->pc = 0x7F42C900u;
    // 7F42C900: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42C904:
    ctx->pc = 0x7F42C904u;
    // 7F42C904: stw     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42C908:
    ctx->pc = 0x7F42C908u;
    // 7F42C908: lfs     f0, 400(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42C908u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(400);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42C90C:
    ctx->pc = 0x7F42C90Cu;
    // 7F42C90C: lfd     f2, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42C90Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42C910:
    ctx->pc = 0x7F42C910u;
    // 7F42C910: fsubs   f3, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F42C910u)) return;
    ppc_fsubs(ctx, 3, 2, 3);

label_7F42C914:
    ctx->pc = 0x7F42C914u;
    // 7F42C914: lfs     f2, -10344(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42C914u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10344);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F42C918:
    ctx->pc = 0x7F42C918u;
    // 7F42C918: fmadds f0, f3, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42C918u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F42C91C:
    ctx->pc = 0x7F42C91Cu;
    // 7F42C91C: fmr    f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F42C91Cu)) return;
    ctx->fpr[1] = ctx->fpr[30];

label_7F42C920:
    ctx->pc = 0x7F42C920u;
    // 7F42C920: stfs     f0, 400(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F42C920u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(400);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42C924:
    ctx->pc = 0x7F42C924u;
    // 7F42C924: lfs     f0, 404(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42C924u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(404);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42C928:
    ctx->pc = 0x7F42C928u;
    // 7F42C928: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42C928u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F42C92C:
    ctx->pc = 0x7F42C92Cu;
    // 7F42C92C: stfs     f0, 404(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F42C92Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(404);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42C930:
    ctx->pc = 0x7F42C930u;
    // 7F42C930: bl      0x7F008330
    {
            ctx->lr = 0x7F42C934u;
            ctx->pc = 0x7F008330u;
            return;
    }

label_7F42C934:
    ctx->pc = 0x7F42C934u;
    ctx->downcount -= 28;
    // 7F42C934: xoris   r3, r22, 0x8000
    ctx->gpr[3] = ctx->gpr[22] ^ (0x8000u << 16);

label_7F42C938:
    ctx->pc = 0x7F42C938u;
    // 7F42C938: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F42C93C:
    ctx->pc = 0x7F42C93Cu;
    // 7F42C93C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42C940:
    ctx->pc = 0x7F42C940u;
    // 7F42C940: stw     r3, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42C944:
    ctx->pc = 0x7F42C944u;
    // 7F42C944: addi    r5, r4, -10416
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-10416);

label_7F42C948:
    ctx->pc = 0x7F42C948u;
    // 7F42C948: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42C94C:
    ctx->pc = 0x7F42C94Cu;
    // 7F42C94C: stw     r0, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42C950:
    ctx->pc = 0x7F42C950u;
    // 7F42C950: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42C954:
    ctx->pc = 0x7F42C954u;
    // 7F42C954: lfd     f5, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F42C954u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[5] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42C958:
    ctx->pc = 0x7F42C958u;
    // 7F42C958: fneg    f2, f31
    if (!ppc_fp_available_inline(ctx, 0x7F42C958u)) return;
    ctx->fpr[2] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[31]) ^ 0x8000000000000000ull);

label_7F42C95C:
    ctx->pc = 0x7F42C95Cu;
    // 7F42C95C: lfd     f4, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42C95Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42C960:
    ctx->pc = 0x7F42C960u;
    // 7F42C960: lfs     f3, -10420(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42C960u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10420);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F42C964:
    ctx->pc = 0x7F42C964u;
    // 7F42C964: lfs     f0, -10340(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42C964u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10340);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42C968:
    ctx->pc = 0x7F42C968u;
    // 7F42C968: fsubs   f5, f4, f5
    if (!ppc_fp_available_inline(ctx, 0x7F42C968u)) return;
    ppc_fsubs(ctx, 5, 4, 5);

label_7F42C96C:
    ctx->pc = 0x7F42C96Cu;
    // 7F42C96C: lfs     f4, 408(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42C96Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(408);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F42C970:
    ctx->pc = 0x7F42C970u;
    // 7F42C970: fmadds f0, f3, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42C970u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[2], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F42C974:
    ctx->pc = 0x7F42C974u;
    // 7F42C974: fmadds f1, f5, f1, f4
    if (!ppc_fp_available_inline(ctx, 0x7F42C974u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[5], ctx->fpr[1], ctx->fpr[4], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F42C978:
    ctx->pc = 0x7F42C978u;
    // 7F42C978: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42C978u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F42C97C:
    ctx->pc = 0x7F42C97Cu;
    // 7F42C97C: stfs     f1, 408(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F42C97Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(408);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F42C980:
    ctx->pc = 0x7F42C980u;
    // 7F42C980: stfd     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42C980u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42C984:
    ctx->pc = 0x7F42C984u;
    // 7F42C984: lfs     f0, 412(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42C984u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(412);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42C988:
    ctx->pc = 0x7F42C988u;
    // 7F42C988: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42C98C:
    ctx->pc = 0x7F42C98Cu;
    // 7F42C98C: stfs     f0, 412(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F42C98Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(412);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42C990:
    ctx->pc = 0x7F42C990u;
    // 7F42C990: sth     r0, 434(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(434);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42C994:
    ctx->pc = 0x7F42C994u;
    // 7F42C994: lwz     r3, 432(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(432);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42C998:
    ctx->pc = 0x7F42C998u;
    // 7F42C998: lwz     r0, 436(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(436);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42C99C:
    ctx->pc = 0x7F42C99Cu;
    // 7F42C99C: stw     r3, 440(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(440);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42C9A0:
    ctx->pc = 0x7F42C9A0u;
    // 7F42C9A0: stw     r0, 444(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(444);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42C9A4:
    ctx->pc = 0x7F42C9A4u;
    ctx->downcount -= 1;
    // 7F42C9A4: bl      0x7F42B998
    {
            ctx->lr = 0x7F42C9A8u;
            ctx->pc = 0x7F42B998u;
            return;
    }

label_7F42C9A8:
    ctx->pc = 0x7F42C9A8u;
    ctx->downcount -= 5;
    // 7F42C9A8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42C9AC:
    ctx->pc = 0x7F42C9ACu;
    // 7F42C9AC: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42C9ACu)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F42C9B0:
    ctx->pc = 0x7F42C9B0u;
    // 7F42C9B0: lfs     f0, -10424(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42C9B0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10424);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42C9B4:
    ctx->pc = 0x7F42C9B4u;
    // 7F42C9B4: fmuls   f30, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F42C9B4u)) return;
    ppc_fmuls(ctx, 30, 0, 31);

label_7F42C9B8:
    ctx->pc = 0x7F42C9B8u;
    // 7F42C9B8: bl      0x7F42C398
    {
            ctx->lr = 0x7F42C9BCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42C398u;
                return;
            }
            goto label_7F42C398;
    }

label_7F42C9BC:
    ctx->pc = 0x7F42C9BCu;
    ctx->downcount -= 10;
    // 7F42C9BC: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42C9C0:
    ctx->pc = 0x7F42C9C0u;
    // 7F42C9C0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42C9C4:
    ctx->pc = 0x7F42C9C4u;
    // 7F42C9C4: lfs     f2, -10348(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42C9C4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10348);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F42C9C8:
    ctx->pc = 0x7F42C9C8u;
    // 7F42C9C8: lfs     f0, -10352(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42C9C8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10352);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42C9CC:
    ctx->pc = 0x7F42C9CCu;
    // 7F42C9CC: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42C9CCu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F42C9D0:
    ctx->pc = 0x7F42C9D0u;
    // 7F42C9D0: fmr    f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F42C9D0u)) return;
    ctx->fpr[1] = ctx->fpr[30];

label_7F42C9D4:
    ctx->pc = 0x7F42C9D4u;
    // 7F42C9D4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42C9D4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F42C9D8:
    ctx->pc = 0x7F42C9D8u;
    // 7F42C9D8: stfd     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42C9D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42C9DC:
    ctx->pc = 0x7F42C9DCu;
    // 7F42C9DC: lwz     r22, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

label_7F42C9E0:
    ctx->pc = 0x7F42C9E0u;
    // 7F42C9E0: bl      0x7F00FAF4
    {
            ctx->lr = 0x7F42C9E4u;
            ctx->pc = 0x7F00FAF4u;
            return;
    }

label_7F42C9E4:
    ctx->pc = 0x7F42C9E4u;
    ctx->downcount -= 18;
    // 7F42C9E4: xoris   r3, r22, 0x8000
    ctx->gpr[3] = ctx->gpr[22] ^ (0x8000u << 16);

label_7F42C9E8:
    ctx->pc = 0x7F42C9E8u;
    // 7F42C9E8: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F42C9EC:
    ctx->pc = 0x7F42C9ECu;
    // 7F42C9EC: stw     r3, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42C9F0:
    ctx->pc = 0x7F42C9F0u;
    // 7F42C9F0: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42C9F4:
    ctx->pc = 0x7F42C9F4u;
    // 7F42C9F4: lfd     f3, -10416(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42C9F4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10416);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42C9F8:
    ctx->pc = 0x7F42C9F8u;
    // 7F42C9F8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42C9FC:
    ctx->pc = 0x7F42C9FCu;
    // 7F42C9FC: stw     r0, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42CA00:
    ctx->pc = 0x7F42CA00u;
    // 7F42CA00: lfs     f0, 0(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42CA00u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42CA04:
    ctx->pc = 0x7F42CA04u;
    // 7F42CA04: lfd     f2, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42CA04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42CA08:
    ctx->pc = 0x7F42CA08u;
    // 7F42CA08: fsubs   f3, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F42CA08u)) return;
    ppc_fsubs(ctx, 3, 2, 3);

label_7F42CA0C:
    ctx->pc = 0x7F42CA0Cu;
    // 7F42CA0C: lfs     f2, -10400(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42CA0Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10400);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F42CA10:
    ctx->pc = 0x7F42CA10u;
    // 7F42CA10: fmadds f0, f3, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42CA10u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F42CA14:
    ctx->pc = 0x7F42CA14u;
    // 7F42CA14: fmr    f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F42CA14u)) return;
    ctx->fpr[1] = ctx->fpr[30];

label_7F42CA18:
    ctx->pc = 0x7F42CA18u;
    // 7F42CA18: stfs     f0, 0(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F42CA18u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42CA1C:
    ctx->pc = 0x7F42CA1Cu;
    // 7F42CA1C: lfs     f0, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42CA1Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42CA20:
    ctx->pc = 0x7F42CA20u;
    // 7F42CA20: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42CA20u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F42CA24:
    ctx->pc = 0x7F42CA24u;
    // 7F42CA24: stfs     f0, 4(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F42CA24u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42CA28:
    ctx->pc = 0x7F42CA28u;
    // 7F42CA28: bl      0x7F008330
    {
            ctx->lr = 0x7F42CA2Cu;
            ctx->pc = 0x7F008330u;
            return;
    }

label_7F42CA2C:
    ctx->pc = 0x7F42CA2Cu;
    ctx->downcount -= 30;
    // 7F42CA2C: xoris   r3, r22, 0x8000
    ctx->gpr[3] = ctx->gpr[22] ^ (0x8000u << 16);

label_7F42CA30:
    ctx->pc = 0x7F42CA30u;
    // 7F42CA30: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F42CA34:
    ctx->pc = 0x7F42CA34u;
    // 7F42CA34: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42CA38:
    ctx->pc = 0x7F42CA38u;
    // 7F42CA38: stw     r3, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42CA3C:
    ctx->pc = 0x7F42CA3Cu;
    // 7F42CA3C: addi    r5, r4, -10416
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-10416);

label_7F42CA40:
    ctx->pc = 0x7F42CA40u;
    // 7F42CA40: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42CA44:
    ctx->pc = 0x7F42CA44u;
    // 7F42CA44: stw     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42CA48:
    ctx->pc = 0x7F42CA48u;
    // 7F42CA48: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42CA4C:
    ctx->pc = 0x7F42CA4Cu;
    // 7F42CA4C: lfd     f5, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F42CA4Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[5] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42CA50:
    ctx->pc = 0x7F42CA50u;
    // 7F42CA50: fneg    f2, f31
    if (!ppc_fp_available_inline(ctx, 0x7F42CA50u)) return;
    ctx->fpr[2] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[31]) ^ 0x8000000000000000ull);

label_7F42CA54:
    ctx->pc = 0x7F42CA54u;
    // 7F42CA54: lfd     f4, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42CA54u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42CA58:
    ctx->pc = 0x7F42CA58u;
    // 7F42CA58: lfs     f0, -10340(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42CA58u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10340);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42CA5C:
    ctx->pc = 0x7F42CA5Cu;
    // 7F42CA5C: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_7F42CA60:
    ctx->pc = 0x7F42CA60u;
    // 7F42CA60: lfs     f3, -10420(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42CA60u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10420);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F42CA64:
    ctx->pc = 0x7F42CA64u;
    // 7F42CA64: fsubs   f5, f4, f5
    if (!ppc_fp_available_inline(ctx, 0x7F42CA64u)) return;
    ppc_fsubs(ctx, 5, 4, 5);

label_7F42CA68:
    ctx->pc = 0x7F42CA68u;
    // 7F42CA68: lfs     f4, 8(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42CA68u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F42CA6C:
    ctx->pc = 0x7F42CA6Cu;
    // 7F42CA6C: fmadds f0, f3, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42CA6Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[2], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F42CA70:
    ctx->pc = 0x7F42CA70u;
    // 7F42CA70: fmadds f1, f5, f1, f4
    if (!ppc_fp_available_inline(ctx, 0x7F42CA70u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[5], ctx->fpr[1], ctx->fpr[4], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F42CA74:
    ctx->pc = 0x7F42CA74u;
    // 7F42CA74: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42CA74u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F42CA78:
    ctx->pc = 0x7F42CA78u;
    // 7F42CA78: stfs     f1, 8(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F42CA78u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F42CA7C:
    ctx->pc = 0x7F42CA7Cu;
    // 7F42CA7C: stfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42CA7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42CA80:
    ctx->pc = 0x7F42CA80u;
    // 7F42CA80: lfs     f0, 12(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42CA80u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42CA84:
    ctx->pc = 0x7F42CA84u;
    // 7F42CA84: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42CA88:
    ctx->pc = 0x7F42CA88u;
    // 7F42CA88: stfs     f0, 12(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F42CA88u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42CA8C:
    ctx->pc = 0x7F42CA8Cu;
    // 7F42CA8C: sth     r0, 34(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42CA90:
    ctx->pc = 0x7F42CA90u;
    // 7F42CA90: lwz     r4, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F42CA94:
    ctx->pc = 0x7F42CA94u;
    // 7F42CA94: lwz     r0, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42CA98:
    ctx->pc = 0x7F42CA98u;
    // 7F42CA98: stw     r4, 40(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F42CA9C:
    ctx->pc = 0x7F42CA9Cu;
    // 7F42CA9C: stw     r0, 44(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42CAA0:
    ctx->pc = 0x7F42CAA0u;
    // 7F42CAA0: bl      0x7F3C664C
    {
            ctx->lr = 0x7F42CAA4u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F42CAA4:
    ctx->pc = 0x7F42CAA4u;
    ctx->downcount -= 2;
    // 7F42CAA4: cmplwi  r3, 0x0000
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

label_7F42CAA8:
    ctx->pc = 0x7F42CAA8u;
    // 7F42CAA8: bc    12, 2, 0x7F42CAE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42CAE0;
        }
    }

label_7F42CAAC:
    ctx->pc = 0x7F42CAACu;
    ctx->downcount -= 1;
    // 7F42CAAC: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F42CAB0u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F42CAB0:
    ctx->pc = 0x7F42CAB0u;
    ctx->downcount -= 2;
    // 7F42CAB0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F42CAB4:
    ctx->pc = 0x7F42CAB4u;
    // 7F42CAB4: bl      0x7F3C6780
    {
            ctx->lr = 0x7F42CAB8u;
            ctx->pc = 0x7F3C6780u;
            return;
    }

label_7F42CAB8:
    ctx->pc = 0x7F42CAB8u;
    ctx->downcount -= 10;
    // 7F42CAB8: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42CABC:
    ctx->pc = 0x7F42CABCu;
    // 7F42CABC: sth     r0, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42CAC0:
    ctx->pc = 0x7F42CAC0u;
    // 7F42CAC0: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42CAC4:
    ctx->pc = 0x7F42CAC4u;
    // 7F42CAC4: sth     r0, 34(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42CAC8:
    ctx->pc = 0x7F42CAC8u;
    // 7F42CAC8: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42CACC:
    ctx->pc = 0x7F42CACCu;
    // 7F42CACC: sth     r0, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42CAD0:
    ctx->pc = 0x7F42CAD0u;
    // 7F42CAD0: lwz     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42CAD4:
    ctx->pc = 0x7F42CAD4u;
    // 7F42CAD4: lwz     r0, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42CAD8:
    ctx->pc = 0x7F42CAD8u;
    // 7F42CAD8: stw     r3, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42CADC:
    ctx->pc = 0x7F42CADCu;
    // 7F42CADC: stw     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42CAE0:
    ctx->pc = 0x7F42CAE0u;
    ctx->downcount -= 5;
    // 7F42CAE0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42CAE4:
    ctx->pc = 0x7F42CAE4u;
    // 7F42CAE4: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_7F42CAE8:
    ctx->pc = 0x7F42CAE8u;
    // 7F42CAE8: lfs     f31, -10336(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42CAE8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10336);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F42CAEC:
    ctx->pc = 0x7F42CAECu;
    // 7F42CAEC: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F42CAF0:
    ctx->pc = 0x7F42CAF0u;
    // 7F42CAF0: b       0x7F42CB28
    {
            goto label_7F42CB28;
    }

label_7F42CAF4:
    ctx->downcount -= 1;
    // 7F42CAF4: bl      0x7F42C398
    {
            ctx->lr = 0x7F42CAF8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42C398u;
                return;
            }
            goto label_7F42C398;
    }

label_7F42CAF8:
    ctx->pc = 0x7F42CAF8u;
    ctx->downcount -= 12;
    // 7F42CAF8: fmuls   f0, f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42CAF8u)) return;
    ppc_fmuls(ctx, 0, 31, 1);

label_7F42CAFC:
    // 7F42CAFC: add   r4, r29, r28
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F42CB00:
    // 7F42CB00: addi    r23, r23, 1
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(1);

label_7F42CB04:
    // 7F42CB04: addi    r28, r28, 400
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(400);

label_7F42CB08:
    ctx->pc = 0x7F42CB08u;
    // 7F42CB08: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42CB08u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F42CB0C:
    ctx->pc = 0x7F42CB0Cu;
    // 7F42CB0C: stfd     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42CB0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42CB10:
    ctx->pc = 0x7F42CB10u;
    // 7F42CB10: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42CB14:
    ctx->pc = 0x7F42CB14u;
    // 7F42CB14: sth     r0, 34(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42CB18:
    ctx->pc = 0x7F42CB18u;
    // 7F42CB18: lwz     r3, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42CB1C:
    ctx->pc = 0x7F42CB1Cu;
    // 7F42CB1C: lwz     r0, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42CB20:
    ctx->pc = 0x7F42CB20u;
    // 7F42CB20: stw     r3, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42CB24:
    ctx->pc = 0x7F42CB24u;
    // 7F42CB24: stw     r0, 44(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42CB28:
    ctx->pc = 0x7F42CB28u;
    ctx->downcount -= 3;
    // 7F42CB28: lwz     r0, 3408(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3408);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42CB2C:
    // 7F42CB2C: cmpw    r23, r0
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

label_7F42CB30:
    // 7F42CB30: bc    12, 0, 0x7F42CAF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42CAF4u;
                return;
            }
            goto label_7F42CAF4;
        }
    }

label_7F42CB34:
    ctx->pc = 0x7F42CB34u;
    ctx->downcount -= 2;
    // 7F42CB34: li      r3, 109
    ctx->gpr[3] = (u32)(s32)(109);

label_7F42CB38:
    ctx->pc = 0x7F42CB38u;
    // 7F42CB38: bl      0x7F3C664C
    {
            ctx->lr = 0x7F42CB3Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F42CB3C:
    ctx->pc = 0x7F42CB3Cu;
    ctx->downcount -= 2;
    // 7F42CB3C: cmplwi  r3, 0x0000
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

label_7F42CB40:
    ctx->pc = 0x7F42CB40u;
    // 7F42CB40: bc    4, 2, 0x7F42CB4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42CB4C;
        }
    }

label_7F42CB44:
    ctx->pc = 0x7F42CB44u;
    ctx->downcount -= 2;
    // 7F42CB44: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F42CB48:
    ctx->pc = 0x7F42CB48u;
    // 7F42CB48: b       0x7F42CC78
    {
            goto label_7F42CC78;
    }

label_7F42CB4C:
    ctx->pc = 0x7F42CB4Cu;
    ctx->downcount -= 1;
    // 7F42CB4C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F42CB50u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F42CB50:
    ctx->pc = 0x7F42CB50u;
    ctx->downcount -= 2;
    // 7F42CB50: stw     r3, 3368(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3368);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42CB54:
    ctx->pc = 0x7F42CB54u;
    // 7F42CB54: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F42CB58u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F42CB58:
    ctx->pc = 0x7F42CB58u;
    ctx->downcount -= 2;
    // 7F42CB58: stw     r3, 3372(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3372);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42CB5C:
    ctx->pc = 0x7F42CB5Cu;
    // 7F42CB5C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F42CB60u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F42CB60:
    ctx->pc = 0x7F42CB60u;
    ctx->downcount -= 2;
    // 7F42CB60: stw     r3, 3376(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3376);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42CB64:
    ctx->pc = 0x7F42CB64u;
    // 7F42CB64: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F42CB68u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F42CB68:
    ctx->pc = 0x7F42CB68u;
    ctx->downcount -= 14;
    // 7F42CB68: stw     r3, 3380(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3380);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42CB6C:
    ctx->pc = 0x7F42CB6Cu;
    // 7F42CB6C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F42CB70:
    ctx->pc = 0x7F42CB70u;
    // 7F42CB70: addi    r6, r3, 12832
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F42CB74:
    ctx->pc = 0x7F42CB74u;
    // 7F42CB74: li      r3, 101
    ctx->gpr[3] = (u32)(s32)(101);

label_7F42CB78:
    ctx->pc = 0x7F42CB78u;
    // 7F42CB78: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F42CB7C:
    ctx->pc = 0x7F42CB7Cu;
    // 7F42CB7C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F42CB80:
    ctx->pc = 0x7F42CB80u;
    // 7F42CB80: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42CB84:
    ctx->pc = 0x7F42CB84u;
    // 7F42CB84: stw     r5, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F42CB88:
    ctx->pc = 0x7F42CB88u;
    // 7F42CB88: stw     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42CB8C:
    ctx->pc = 0x7F42CB8Cu;
    // 7F42CB8C: lwz     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F42CB90:
    ctx->pc = 0x7F42CB90u;
    // 7F42CB90: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42CB94:
    ctx->pc = 0x7F42CB94u;
    // 7F42CB94: stw     r5, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F42CB98:
    ctx->pc = 0x7F42CB98u;
    // 7F42CB98: stw     r0, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42CB9C:
    ctx->pc = 0x7F42CB9Cu;
    // 7F42CB9C: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F42CBA0u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F42CBA0:
    ctx->pc = 0x7F42CBA0u;
    ctx->downcount -= 4;
    // 7F42CBA0: stw     r3, 3400(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3400);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42CBA4:
    ctx->pc = 0x7F42CBA4u;
    // 7F42CBA4: li      r3, 98
    ctx->gpr[3] = (u32)(s32)(98);

label_7F42CBA8:
    ctx->pc = 0x7F42CBA8u;
    // 7F42CBA8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F42CBAC:
    ctx->pc = 0x7F42CBACu;
    // 7F42CBAC: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F42CBB0u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F42CBB0:
    ctx->pc = 0x7F42CBB0u;
    ctx->downcount -= 5;
    // 7F42CBB0: stw     r3, 3388(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3388);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42CBB4:
    ctx->pc = 0x7F42CBB4u;
    // 7F42CBB4: addi    r22, r26, 2120
    ctx->gpr[22] = ctx->gpr[26] + (u32)(s32)(2120);

label_7F42CBB8:
    ctx->pc = 0x7F42CBB8u;
    // 7F42CBB8: lwz     r0, 3388(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3388);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42CBBC:
    ctx->pc = 0x7F42CBBCu;
    // 7F42CBBC: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42CBC0:
    ctx->pc = 0x7F42CBC0u;
    // 7F42CBC0: bc    4, 2, 0x7F42CC28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42CC28;
        }
    }

label_7F42CBC4:
    ctx->pc = 0x7F42CBC4u;
    ctx->downcount -= 4;
    // 7F42CBC4: lwz     r4, 3372(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3372);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F42CBC8:
    ctx->pc = 0x7F42CBC8u;
    // 7F42CBC8: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F42CBCC:
    ctx->pc = 0x7F42CBCCu;
    // 7F42CBCC: li      r5, 25
    ctx->gpr[5] = (u32)(s32)(25);

label_7F42CBD0:
    ctx->pc = 0x7F42CBD0u;
    // 7F42CBD0: bl      0x7F04272C
    {
            ctx->lr = 0x7F42CBD4u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F42CBD4:
    ctx->pc = 0x7F42CBD4u;
    ctx->downcount -= 4;
    // 7F42CBD4: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F42CBD8:
    ctx->pc = 0x7F42CBD8u;
    // 7F42CBD8: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F42CBDC:
    ctx->pc = 0x7F42CBDCu;
    // 7F42CBDC: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F42CBE0:
    ctx->pc = 0x7F42CBE0u;
    // 7F42CBE0: b       0x7F42CC18
    {
            goto label_7F42CC18;
    }

label_7F42CBE4:
    ctx->downcount -= 6;
    // 7F42CBE4: addi    r23, r29, 2032
    ctx->gpr[23] = ctx->gpr[29] + (u32)(s32)(2032);

label_7F42CBE8:
    ctx->pc = 0x7F42CBE8u;
    // 7F42CBE8: lwz     r4, 3368(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3368);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F42CBEC:
    // 7F42CBEC: add   r23, r26, r23
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[23] = res;
    }

label_7F42CBF0:
    // 7F42CBF0: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F42CBF4:
    // 7F42CBF4: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F42CBF8:
    // 7F42CBF8: bl      0x7F04272C
    {
            ctx->lr = 0x7F42CBFCu;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F42CBFC:
    ctx->downcount -= 4;
    // 7F42CBFC: addi    r4, r28, 2252
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(2252);

label_7F42CC00:
    // 7F42CC00: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F42CC04:
    // 7F42CC04: add   r4, r26, r4
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F42CC08:
    // 7F42CC08: bl      0x7F042B20
    {
            ctx->lr = 0x7F42CC0Cu;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F42CC0C:
    ctx->downcount -= 3;
    // 7F42CC0C: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_7F42CC10:
    // 7F42CC10: addi    r28, r28, 128
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(128);

label_7F42CC14:
    // 7F42CC14: addi    r29, r29, 44
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(44);

label_7F42CC18:
    ctx->pc = 0x7F42CC18u;
    ctx->downcount -= 3;
    // 7F42CC18: lwz     r0, 3408(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3408);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42CC1C:
    // 7F42CC1C: cmpw    r24, r0
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42CC20:
    // 7F42CC20: bc    12, 0, 0x7F42CBE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42CBE4u;
                return;
            }
            goto label_7F42CBE4;
        }
    }

label_7F42CC24:
    ctx->pc = 0x7F42CC24u;
    ctx->downcount -= 1;
    // 7F42CC24: b       0x7F42CC38
    {
            goto label_7F42CC38;
    }

label_7F42CC28:
    ctx->pc = 0x7F42CC28u;
    ctx->downcount -= 4;
    // 7F42CC28: lwz     r4, 3376(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3376);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F42CC2C:
    ctx->pc = 0x7F42CC2Cu;
    // 7F42CC2C: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F42CC30:
    ctx->pc = 0x7F42CC30u;
    // 7F42CC30: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F42CC34:
    ctx->pc = 0x7F42CC34u;
    // 7F42CC34: bl      0x7F04272C
    {
            ctx->lr = 0x7F42CC38u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F42CC38:
    ctx->pc = 0x7F42CC38u;
    ctx->downcount -= 3;
    // 7F42CC38: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F42CC3C:
    ctx->pc = 0x7F42CC3Cu;
    // 7F42CC3C: addi    r4, r26, 2508
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(2508);

label_7F42CC40:
    ctx->pc = 0x7F42CC40u;
    // 7F42CC40: bl      0x7F042B20
    {
            ctx->lr = 0x7F42CC44u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F42CC44:
    ctx->pc = 0x7F42CC44u;
    ctx->downcount -= 3;
    // 7F42CC44: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F42CC48:
    ctx->pc = 0x7F42CC48u;
    // 7F42CC48: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F42CC4C:
    ctx->pc = 0x7F42CC4Cu;
    // 7F42CC4C: bl      0x7F42C4BC
    {
            ctx->lr = 0x7F42CC50u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42C4BCu;
                return;
            }
            goto label_7F42C4BC;
    }

label_7F42CC50:
    ctx->pc = 0x7F42CC50u;
    ctx->downcount -= 3;
    // 7F42CC50: li      r3, 108
    ctx->gpr[3] = (u32)(s32)(108);

label_7F42CC54:
    ctx->pc = 0x7F42CC54u;
    // 7F42CC54: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F42CC58:
    ctx->pc = 0x7F42CC58u;
    // 7F42CC58: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F42CC5Cu;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F42CC5C:
    ctx->pc = 0x7F42CC5Cu;
    ctx->downcount -= 7;
    // 7F42CC5C: stw     r3, 3404(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3404);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42CC60:
    ctx->pc = 0x7F42CC60u;
    // 7F42CC60: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F42CC64:
    ctx->pc = 0x7F42CC64u;
    // 7F42CC64: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F42CC68:
    ctx->pc = 0x7F42CC68u;
    // 7F42CC68: stw     r0, 3424(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3424);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42CC6C:
    ctx->pc = 0x7F42CC6Cu;
    // 7F42CC6C: stw     r0, 3428(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3428);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42CC70:
    ctx->pc = 0x7F42CC70u;
    // 7F42CC70: stw     r0, 3416(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3416);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42CC74:
    ctx->pc = 0x7F42CC74u;
    // 7F42CC74: stw     r0, 3420(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(3420);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42CC78:
    ctx->pc = 0x7F42CC78u;
    ctx->downcount -= 20;
    // 7F42CC78: psq_l   f31, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F42CC78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F42CC78u);
        if (ctx->exception) return;
    }

label_7F42CC7C:
    ctx->pc = 0x7F42CC7Cu;
    // 7F42CC7C: lfd     f31, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42CC7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42CC80:
    ctx->pc = 0x7F42CC80u;
    // 7F42CC80: psq_l   f30, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F42CC80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F42CC80u);
        if (ctx->exception) return;
    }

label_7F42CC84:
    ctx->pc = 0x7F42CC84u;
    // 7F42CC84: lfd     f30, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42CC84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42CC88:
    ctx->pc = 0x7F42CC88u;
    // 7F42CC88: lmw     r22, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 22; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F42CC8C:
    ctx->pc = 0x7F42CC8Cu;
    // 7F42CC8C: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42CC90:
    ctx->pc = 0x7F42CC90u;
    // 7F42CC90: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42CC94:
    ctx->pc = 0x7F42CC94u;
    // 7F42CC94: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_7F42CC98:
    ctx->pc = 0x7F42CC98u;
    // 7F42CC98: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42CC9C:
    ctx->pc = 0x7F42CC9Cu;
    ctx->downcount -= 17;
    // 7F42CC9C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42CCA0:
    ctx->pc = 0x7F42CCA0u;
    // 7F42CCA0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42CCA4:
    ctx->pc = 0x7F42CCA4u;
    // 7F42CCA4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42CCA8:
    ctx->pc = 0x7F42CCA8u;
    // 7F42CCA8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F42CCAC:
    ctx->pc = 0x7F42CCACu;
    // 7F42CCAC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42CCB0:
    ctx->pc = 0x7F42CCB0u;
    // 7F42CCB0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F42CCB4:
    ctx->pc = 0x7F42CCB4u;
    // 7F42CCB4: bl      0x7F42CCF0
    {
            ctx->lr = 0x7F42CCB8u;
            goto label_7F42CCF0;
    }

label_7F42CCB8:
    ctx->pc = 0x7F42CCB8u;
    ctx->downcount -= 3;
    // 7F42CCB8: addi    r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(4);

label_7F42CCBC:
    ctx->pc = 0x7F42CCBCu;
    // 7F42CCBC: addi    r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(4);

label_7F42CCC0:
    ctx->pc = 0x7F42CCC0u;
    // 7F42CCC0: bl      0x7F42CCF0
    {
            ctx->lr = 0x7F42CCC4u;
            goto label_7F42CCF0;
    }

label_7F42CCC4:
    ctx->pc = 0x7F42CCC4u;
    ctx->downcount -= 3;
    // 7F42CCC4: addi    r3, r30, 8
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(8);

label_7F42CCC8:
    ctx->pc = 0x7F42CCC8u;
    // 7F42CCC8: addi    r4, r31, 8
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(8);

label_7F42CCCC:
    ctx->pc = 0x7F42CCCCu;
    // 7F42CCCC: bl      0x7F42CCF0
    {
            ctx->lr = 0x7F42CCD0u;
            goto label_7F42CCF0;
    }

label_7F42CCD0:
    ctx->pc = 0x7F42CCD0u;
    ctx->downcount -= 3;
    // 7F42CCD0: addi    r3, r30, 12
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(12);

label_7F42CCD4:
    ctx->pc = 0x7F42CCD4u;
    // 7F42CCD4: addi    r4, r31, 12
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(12);

label_7F42CCD8:
    ctx->pc = 0x7F42CCD8u;
    // 7F42CCD8: bl      0x7F42CCF0
    {
            ctx->lr = 0x7F42CCDCu;
            goto label_7F42CCF0;
    }

label_7F42CCDC:
    ctx->pc = 0x7F42CCDCu;
    ctx->downcount -= 16;
    // 7F42CCDC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F42CCE0:
    ctx->pc = 0x7F42CCE0u;
    // 7F42CCE0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42CCE4:
    ctx->pc = 0x7F42CCE4u;
    // 7F42CCE4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42CCE8:
    ctx->pc = 0x7F42CCE8u;
    // 7F42CCE8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F42CCEC:
    ctx->pc = 0x7F42CCECu;
    // 7F42CCEC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42CCF0:
    ctx->pc = 0x7F42CCF0u;
    ctx->downcount -= 6;
    // 7F42CCF0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42CCF4:
    ctx->pc = 0x7F42CCF4u;
    // 7F42CCF4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42CCF8:
    ctx->pc = 0x7F42CCF8u;
    // 7F42CCF8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42CCFC:
    ctx->pc = 0x7F42CCFCu;
    // 7F42CCFC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F42CD00:
    ctx->pc = 0x7F42CD00u;
    // 7F42CD00: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F42CD04:
    ctx->pc = 0x7F42CD04u;
    // 7F42CD04: bl      0x7F42CD20
    {
            ctx->lr = 0x7F42CD08u;
            goto label_7F42CD20;
    }

label_7F42CD08:
    ctx->pc = 0x7F42CD08u;
    ctx->downcount -= 7;
    // 7F42CD08: stfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F42CD08u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F42CD0C:
    ctx->pc = 0x7F42CD0Cu;
    // 7F42CD0C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42CD10:
    ctx->pc = 0x7F42CD10u;
    // 7F42CD10: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F42CD14:
    ctx->pc = 0x7F42CD14u;
    // 7F42CD14: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42CD18:
    ctx->pc = 0x7F42CD18u;
    // 7F42CD18: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F42CD1C:
    ctx->pc = 0x7F42CD1Cu;
    // 7F42CD1C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42CD20:
    ctx->pc = 0x7F42CD20u;
    ctx->downcount -= 4;
    // 7F42CD20: psq_l   f0, 2(r3), 1, 3
    if (!ppc_fp_available_inline(ctx, 0x7F42CD20u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ppc_psq_load_inline(ctx, 0u, ea, true, 3u, false, 0x7F42CD20u);
        if (ctx->exception) return;
    }

label_7F42CD24:
    ctx->pc = 0x7F42CD24u;
    // 7F42CD24: psq_l   f1, 0(r3), 1, 6
    if (!ppc_fp_available_inline(ctx, 0x7F42CD24u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 1u, ea, true, 6u, false, 0x7F42CD24u);
        if (ctx->exception) return;
    }

label_7F42CD28:
    ctx->pc = 0x7F42CD28u;
    // 7F42CD28: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42CD28u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_7F42CD2C:
    ctx->pc = 0x7F42CD2Cu;
    // 7F42CD2C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42CD30:
    ctx->pc = 0x7F42CD30u;
    ctx->downcount -= 21;
    // 7F42CD30: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42CD34:
    ctx->pc = 0x7F42CD34u;
    // 7F42CD34: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42CD38:
    ctx->pc = 0x7F42CD38u;
    // 7F42CD38: li      r5, 3440
    ctx->gpr[5] = (u32)(s32)(3440);

label_7F42CD3C:
    ctx->pc = 0x7F42CD3Cu;
    // 7F42CD3C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F42CD40:
    ctx->pc = 0x7F42CD40u;
    // 7F42CD40: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42CD44:
    ctx->pc = 0x7F42CD44u;
    // 7F42CD44: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F42CD48:
    ctx->pc = 0x7F42CD48u;
    // 7F42CD48: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42CD4C:
    ctx->pc = 0x7F42CD4Cu;
    // 7F42CD4C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F42CD50:
    ctx->pc = 0x7F42CD50u;
    // 7F42CD50: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F42CD54:
    ctx->pc = 0x7F42CD54u;
    // 7F42CD54: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F42CD58:
    ctx->pc = 0x7F42CD58u;
    // 7F42CD58: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F42CD5Cu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F42CD5C:
    ctx->pc = 0x7F42CD5Cu;
    ctx->downcount -= 2;
    // 7F42CD5C: or.   r31, r3, r3
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

label_7F42CD60:
    ctx->pc = 0x7F42CD60u;
    // 7F42CD60: bc    12, 2, 0x7F42CDA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42CDA4;
        }
    }

label_7F42CD64:
    ctx->pc = 0x7F42CD64u;
    ctx->downcount -= 5;
    // 7F42CD64: lis     r4, 32579
    ctx->gpr[4] = ((u32)(s32)(32579) << 16);

label_7F42CD68:
    ctx->pc = 0x7F42CD68u;
    // 7F42CD68: lis     r5, 32579
    ctx->gpr[5] = ((u32)(s32)(32579) << 16);

label_7F42CD6C:
    ctx->pc = 0x7F42CD6Cu;
    // 7F42CD6C: addi    r4, r4, -17552
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17552);

label_7F42CD70:
    ctx->pc = 0x7F42CD70u;
    // 7F42CD70: addi    r5, r5, -15392
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-15392);

label_7F42CD74:
    ctx->pc = 0x7F42CD74u;
    // 7F42CD74: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F42CD78u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F42CD78:
    ctx->pc = 0x7F42CD78u;
    ctx->downcount -= 4;
    // 7F42CD78: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F42CD7C:
    ctx->pc = 0x7F42CD7Cu;
    // 7F42CD7C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F42CD80:
    ctx->pc = 0x7F42CD80u;
    // 7F42CD80: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F42CD84:
    ctx->pc = 0x7F42CD84u;
    // 7F42CD84: bl      0x7F42C668
    {
            ctx->lr = 0x7F42CD88u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42C668u;
                return;
            }
            goto label_7F42C668;
    }

label_7F42CD88:
    ctx->pc = 0x7F42CD88u;
    ctx->downcount -= 2;
    // 7F42CD88: cmpwi   r3, 0
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

label_7F42CD8C:
    ctx->pc = 0x7F42CD8Cu;
    // 7F42CD8C: bc    4, 0, 0x7F42CDA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42CDA0;
        }
    }

label_7F42CD90:
    ctx->pc = 0x7F42CD90u;
    ctx->downcount -= 2;
    // 7F42CD90: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F42CD94:
    ctx->pc = 0x7F42CD94u;
    // 7F42CD94: bl      0x7F3C8210
    {
            ctx->lr = 0x7F42CD98u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F42CD98:
    ctx->pc = 0x7F42CD98u;
    ctx->downcount -= 2;
    // 7F42CD98: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F42CD9C:
    ctx->pc = 0x7F42CD9Cu;
    // 7F42CD9C: b       0x7F42CDA8
    {
            goto label_7F42CDA8;
    }

label_7F42CDA0:
    ctx->pc = 0x7F42CDA0u;
    ctx->downcount -= 1;
    // 7F42CDA0: stw     r29, 3364(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3364);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F42CDA4:
    ctx->pc = 0x7F42CDA4u;
    ctx->downcount -= 1;
    // 7F42CDA4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F42CDA8:
    ctx->pc = 0x7F42CDA8u;
    ctx->downcount -= 16;
    // 7F42CDA8: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F42CDAC:
    ctx->pc = 0x7F42CDACu;
    // 7F42CDAC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42CDB0:
    ctx->pc = 0x7F42CDB0u;
    // 7F42CDB0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42CDB4:
    ctx->pc = 0x7F42CDB4u;
    // 7F42CDB4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F42CDB8:
    ctx->pc = 0x7F42CDB8u;
    // 7F42CDB8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42CDBC:
    ctx->pc = 0x7F42CDBCu;
    ctx->downcount -= 8;
    // 7F42CDBC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42CDC0:
    ctx->pc = 0x7F42CDC0u;
    // 7F42CDC0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42CDC4:
    ctx->pc = 0x7F42CDC4u;
    // 7F42CDC4: lis     r4, 32592
    ctx->gpr[4] = ((u32)(s32)(32592) << 16);

label_7F42CDC8:
    ctx->pc = 0x7F42CDC8u;
    // 7F42CDC8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42CDCC:
    ctx->pc = 0x7F42CDCCu;
    // 7F42CDCC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F42CDD0:
    ctx->pc = 0x7F42CDD0u;
    // 7F42CDD0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42CDD4:
    ctx->pc = 0x7F42CDD4u;
    // 7F42CDD4: addi    r3, r4, -2196
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-2196);

label_7F42CDD8:
    ctx->pc = 0x7F42CDD8u;
    // 7F42CDD8: bl      0x80025A08
    {
            ctx->lr = 0x7F42CDDCu;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F42CDDC:
    ctx->pc = 0x7F42CDDCu;
    ctx->downcount -= 11;
    // 7F42CDDC: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F42CDE0:
    ctx->pc = 0x7F42CDE0u;
    // 7F42CDE0: lfs     f0, 10332(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F42CDE0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10332);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42CDE4:
    ctx->pc = 0x7F42CDE4u;
    // 7F42CDE4: addi    r3, r3, -2196
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2196);

label_7F42CDE8:
    ctx->pc = 0x7F42CDE8u;
    // 7F42CDE8: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42CDEC:
    ctx->pc = 0x7F42CDECu;
    // 7F42CDEC: stfs     f0, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42CDECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42CDF0:
    ctx->pc = 0x7F42CDF0u;
    // 7F42CDF0: lfs     f1, -10312(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42CDF0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10312);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42CDF4:
    ctx->pc = 0x7F42CDF4u;
    // 7F42CDF4: lfs     f0, 10336(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F42CDF4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10336);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42CDF8:
    ctx->pc = 0x7F42CDF8u;
    // 7F42CDF8: stfs     f0, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42CDF8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42CDFC:
    ctx->pc = 0x7F42CDFCu;
    // 7F42CDFC: lfs     f0, 10340(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F42CDFCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10340);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42CE00:
    ctx->pc = 0x7F42CE00u;
    // 7F42CE00: stfs     f0, 56(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42CE00u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42CE04:
    ctx->pc = 0x7F42CE04u;
    // 7F42CE04: bl      0x7F3FBA68
    {
            ctx->lr = 0x7F42CE08u;
            ctx->pc = 0x7F3FBA68u;
            return;
    }

label_7F42CE08:
    ctx->pc = 0x7F42CE08u;
    ctx->downcount -= 5;
    // 7F42CE08: li      r0, 80
    ctx->gpr[0] = (u32)(s32)(80);

label_7F42CE0C:
    ctx->pc = 0x7F42CE0Cu;
    // 7F42CE0C: stw     r0, 10444(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10444);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42CE10:
    ctx->pc = 0x7F42CE10u;
    // 7F42CE10: lwz     r3, 10440(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10440);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42CE14:
    ctx->pc = 0x7F42CE14u;
    // 7F42CE14: cmpwi   r3, 0
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

label_7F42CE18:
    ctx->pc = 0x7F42CE18u;
    // 7F42CE18: bc    12, 2, 0x7F42CE2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42CE2C;
        }
    }

label_7F42CE1C:
    ctx->pc = 0x7F42CE1Cu;
    ctx->downcount -= 2;
    // 7F42CE1C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F42CE20:
    ctx->pc = 0x7F42CE20u;
    // 7F42CE20: bl      0x7F3C7728
    {
            ctx->lr = 0x7F42CE24u;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F42CE24:
    ctx->pc = 0x7F42CE24u;
    ctx->downcount -= 2;
    // 7F42CE24: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F42CE28:
    ctx->pc = 0x7F42CE28u;
    // 7F42CE28: stw     r0, 10440(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10440);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42CE2C:
    ctx->pc = 0x7F42CE2Cu;
    ctx->downcount -= 6;
    // 7F42CE2C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42CE30:
    ctx->pc = 0x7F42CE30u;
    // 7F42CE30: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F42CE34:
    ctx->pc = 0x7F42CE34u;
    // 7F42CE34: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42CE38:
    ctx->pc = 0x7F42CE38u;
    // 7F42CE38: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F42CE3C:
    ctx->pc = 0x7F42CE3Cu;
    // 7F42CE3C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42CE40:
    ctx->pc = 0x7F42CE40u;
    ctx->downcount -= 23;
    // 7F42CE40: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42CE44:
    ctx->pc = 0x7F42CE44u;
    // 7F42CE44: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42CE48:
    ctx->pc = 0x7F42CE48u;
    // 7F42CE48: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42CE4C:
    ctx->pc = 0x7F42CE4Cu;
    // 7F42CE4C: stfd     f31, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42CE4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F42CE50:
    ctx->pc = 0x7F42CE50u;
    // 7F42CE50: psq_st   f31, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F42CE50u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F42CE50u);
        if (ctx->exception) return;
    }

label_7F42CE54:
    ctx->pc = 0x7F42CE54u;
    // 7F42CE54: stmw     r23, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F42CE58:
    ctx->pc = 0x7F42CE58u;
    // 7F42CE58: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42CE5C:
    ctx->pc = 0x7F42CE5Cu;
    // 7F42CE5C: lwz     r5, 432(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(432);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F42CE60:
    ctx->pc = 0x7F42CE60u;
    // 7F42CE60: addi    r23, r29, 32
    ctx->gpr[23] = ctx->gpr[29] + (u32)(s32)(32);

label_7F42CE64:
    ctx->pc = 0x7F42CE64u;
    // 7F42CE64: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F42CE68:
    ctx->pc = 0x7F42CE68u;
    // 7F42CE68: addi    r4, r29, 476
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(476);

label_7F42CE6C:
    ctx->pc = 0x7F42CE6Cu;
    // 7F42CE6C: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F42CE70:
    ctx->pc = 0x7F42CE70u;
    // 7F42CE70: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F42CE74u;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F42CE74:
    ctx->pc = 0x7F42CE74u;
    ctx->downcount -= 2;
    // 7F42CE74: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F42CE78:
    ctx->pc = 0x7F42CE78u;
    // 7F42CE78: bl      0x7F023170
    {
            ctx->lr = 0x7F42CE7Cu;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F42CE7C:
    ctx->pc = 0x7F42CE7Cu;
    ctx->downcount -= 2;
    // 7F42CE7C: addi    r3, r29, 432
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(432);

label_7F42CE80:
    ctx->pc = 0x7F42CE80u;
    // 7F42CE80: bl      0x7F0427FC
    {
            ctx->lr = 0x7F42CE84u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F42CE84:
    ctx->pc = 0x7F42CE84u;
    ctx->downcount -= 5;
    // 7F42CE84: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F42CE88:
    ctx->pc = 0x7F42CE88u;
    // 7F42CE88: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F42CE8C:
    ctx->pc = 0x7F42CE8Cu;
    // 7F42CE8C: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F42CE90:
    ctx->pc = 0x7F42CE90u;
    // 7F42CE90: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F42CE94:
    ctx->pc = 0x7F42CE94u;
    // 7F42CE94: b       0x7F42CEE4
    {
            goto label_7F42CEE4;
    }

label_7F42CE98:
    ctx->downcount -= 4;
    // 7F42CE98: add   r30, r29, r27
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[27];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_7F42CE9C:
    ctx->pc = 0x7F42CE9Cu;
    // 7F42CE9C: lwz     r3, 7408(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(7408);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42CEA0:
    // 7F42CEA0: cmplwi  r3, 0x0000
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

label_7F42CEA4:
    // 7F42CEA4: bc    12, 2, 0x7F42CED4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42CED4;
        }
    }

label_7F42CEA8:
    ctx->downcount -= 7;
    // 7F42CEA8: addi    r28, r26, 608
    ctx->gpr[28] = ctx->gpr[26] + (u32)(s32)(608);

label_7F42CEAC:
    // 7F42CEAC: addi    r4, r25, 8156
    ctx->gpr[4] = ctx->gpr[25] + (u32)(s32)(8156);

label_7F42CEB0:
    // 7F42CEB0: add   r28, r29, r28
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[28] = res;
    }

label_7F42CEB4:
    // 7F42CEB4: addi    r5, r3, 156
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(156);

label_7F42CEB8:
    // 7F42CEB8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F42CEBC:
    // 7F42CEBC: add   r4, r29, r4
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F42CEC0:
    // 7F42CEC0: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F42CEC4u;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F42CEC4:
    ctx->downcount -= 2;
    // 7F42CEC4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F42CEC8:
    // 7F42CEC8: bl      0x7F023170
    {
            ctx->lr = 0x7F42CECCu;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F42CECC:
    ctx->downcount -= 2;
    // 7F42CECC: addi    r3, r30, 7408
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(7408);

label_7F42CED0:
    // 7F42CED0: bl      0x7F0427FC
    {
            ctx->lr = 0x7F42CED4u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F42CED4:
    ctx->downcount -= 4;
    // 7F42CED4: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_7F42CED8:
    // 7F42CED8: addi    r25, r25, 128
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(128);

label_7F42CEDC:
    // 7F42CEDC: addi    r26, r26, 400
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(400);

label_7F42CEE0:
    // 7F42CEE0: addi    r27, r27, 44
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(44);

label_7F42CEE4:
    ctx->pc = 0x7F42CEE4u;
    ctx->downcount -= 3;
    // 7F42CEE4: lwz     r0, 10364(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10364);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42CEE8:
    // 7F42CEE8: cmpw    r24, r0
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42CEEC:
    // 7F42CEEC: bc    12, 0, 0x7F42CE98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42CE98u;
                return;
            }
            goto label_7F42CE98;
        }
    }

label_7F42CEF0:
    ctx->pc = 0x7F42CEF0u;
    ctx->downcount -= 3;
    // 7F42CEF0: lwz     r0, 10444(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10444);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42CEF4:
    ctx->pc = 0x7F42CEF4u;
    // 7F42CEF4: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42CEF8:
    ctx->pc = 0x7F42CEF8u;
    // 7F42CEF8: bc    4, 1, 0x7F42D558
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42D558;
        }
    }

label_7F42CEFC:
    ctx->pc = 0x7F42CEFCu;
    ctx->downcount -= 2;
    // 7F42CEFC: cmpwi   r0, 75
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(75);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42CF00:
    ctx->pc = 0x7F42CF00u;
    // 7F42CF00: bc    12, 2, 0x7F42D244
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42D244;
        }
    }

label_7F42CF04:
    ctx->pc = 0x7F42CF04u;
    ctx->downcount -= 1;
    // 7F42CF04: bc    4, 0, 0x7F42CF2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42CF2C;
        }
    }

label_7F42CF08:
    ctx->pc = 0x7F42CF08u;
    ctx->downcount -= 2;
    // 7F42CF08: cmpwi   r0, 52
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(52);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42CF0C:
    ctx->pc = 0x7F42CF0Cu;
    // 7F42CF0C: bc    12, 2, 0x7F42D344
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42D344;
        }
    }

label_7F42CF10:
    ctx->pc = 0x7F42CF10u;
    ctx->downcount -= 1;
    // 7F42CF10: bc    4, 0, 0x7F42CF20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42CF20;
        }
    }

label_7F42CF14:
    ctx->pc = 0x7F42CF14u;
    ctx->downcount -= 2;
    // 7F42CF14: cmpwi   r0, 1
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

label_7F42CF18:
    ctx->pc = 0x7F42CF18u;
    // 7F42CF18: bc    12, 2, 0x7F42D438
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42D438;
        }
    }

label_7F42CF1C:
    ctx->pc = 0x7F42CF1Cu;
    ctx->downcount -= 1;
    // 7F42CF1C: b       0x7F42D484
    {
            goto label_7F42D484;
    }

label_7F42CF20:
    ctx->pc = 0x7F42CF20u;
    ctx->downcount -= 2;
    // 7F42CF20: cmpwi   r0, 72
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(72);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42CF24:
    ctx->pc = 0x7F42CF24u;
    // 7F42CF24: bc    12, 2, 0x7F42D2C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42D2C4;
        }
    }

label_7F42CF28:
    ctx->pc = 0x7F42CF28u;
    ctx->downcount -= 1;
    // 7F42CF28: b       0x7F42D484
    {
            goto label_7F42D484;
    }

label_7F42CF2C:
    ctx->pc = 0x7F42CF2Cu;
    ctx->downcount -= 2;
    // 7F42CF2C: cmpwi   r0, 79
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(79);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42CF30:
    ctx->pc = 0x7F42CF30u;
    // 7F42CF30: bc    12, 2, 0x7F42D484
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42D484;
        }
    }

label_7F42CF34:
    ctx->pc = 0x7F42CF34u;
    ctx->downcount -= 1;
    // 7F42CF34: bc    4, 0, 0x7F42CF44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42CF44;
        }
    }

label_7F42CF38:
    ctx->pc = 0x7F42CF38u;
    ctx->downcount -= 2;
    // 7F42CF38: cmpwi   r0, 78
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(78);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42CF3C:
    ctx->pc = 0x7F42CF3Cu;
    // 7F42CF3C: bc    4, 0, 0x7F42CFD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42CFD4;
        }
    }

label_7F42CF40:
    ctx->pc = 0x7F42CF40u;
    ctx->downcount -= 1;
    // 7F42CF40: b       0x7F42D484
    {
            goto label_7F42D484;
    }

label_7F42CF44:
    ctx->pc = 0x7F42CF44u;
    ctx->downcount -= 2;
    // 7F42CF44: cmpwi   r0, 81
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(81);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42CF48:
    ctx->pc = 0x7F42CF48u;
    // 7F42CF48: bc    4, 0, 0x7F42D484
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42D484;
        }
    }

label_7F42CF4C:
    ctx->pc = 0x7F42CF4Cu;
    ctx->downcount -= 6;
    // 7F42CF4C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F42CF50:
    ctx->pc = 0x7F42CF50u;
    // 7F42CF50: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F42CF54:
    ctx->pc = 0x7F42CF54u;
    // 7F42CF54: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42CF58:
    ctx->pc = 0x7F42CF58u;
    // 7F42CF58: lha     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F42CF5C:
    ctx->pc = 0x7F42CF5Cu;
    // 7F42CF5C: cmpwi   r0, 40
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

label_7F42CF60:
    ctx->pc = 0x7F42CF60u;
    // 7F42CF60: bc    12, 2, 0x7F42CF6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42CF6C;
        }
    }

label_7F42CF64:
    ctx->pc = 0x7F42CF64u;
    ctx->downcount -= 2;
    // 7F42CF64: cmpwi   r0, 50
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

label_7F42CF68:
    ctx->pc = 0x7F42CF68u;
    // 7F42CF68: bc    4, 2, 0x7F42CF74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42CF74;
        }
    }

label_7F42CF6C:
    ctx->pc = 0x7F42CF6Cu;
    ctx->downcount -= 2;
    // 7F42CF6C: lha     r7, 286(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(286);
        ctx->gpr[7] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F42CF70:
    ctx->pc = 0x7F42CF70u;
    // 7F42CF70: b       0x7F42CFB0
    {
            goto label_7F42CFB0;
    }

label_7F42CF74:
    ctx->pc = 0x7F42CF74u;
    ctx->downcount -= 15;
    // 7F42CF74: lha     r4, 286(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(286);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F42CF78:
    ctx->pc = 0x7F42CF78u;
    // 7F42CF78: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F42CF7C:
    ctx->pc = 0x7F42CF7Cu;
    // 7F42CF7C: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F42CF80:
    ctx->pc = 0x7F42CF80u;
    // 7F42CF80: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42CF84:
    ctx->pc = 0x7F42CF84u;
    // 7F42CF84: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F42CF88:
    ctx->pc = 0x7F42CF88u;
    // 7F42CF88: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42CF8C:
    ctx->pc = 0x7F42CF8Cu;
    // 7F42CF8C: lfd     f2, -10320(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F42CF8Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-10320);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42CF90:
    ctx->pc = 0x7F42CF90u;
    // 7F42CF90: stw     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F42CF94:
    ctx->pc = 0x7F42CF94u;
    // 7F42CF94: lfs     f0, -10308(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42CF94u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10308);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42CF98:
    ctx->pc = 0x7F42CF98u;
    // 7F42CF98: lfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42CF98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42CF9C:
    ctx->pc = 0x7F42CF9Cu;
    // 7F42CF9C: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F42CF9Cu)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F42CFA0:
    ctx->pc = 0x7F42CFA0u;
    // 7F42CFA0: fmadds f0, f1, f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42CFA0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[0], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F42CFA4:
    ctx->pc = 0x7F42CFA4u;
    // 7F42CFA4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42CFA4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F42CFA8:
    ctx->pc = 0x7F42CFA8u;
    // 7F42CFA8: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42CFA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42CFAC:
    ctx->pc = 0x7F42CFACu;
    // 7F42CFAC: lwz     r7, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F42CFB0:
    ctx->pc = 0x7F42CFB0u;
    ctx->downcount -= 8;
    // 7F42CFB0: addi    r3, r29, 10332
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(10332);

label_7F42CFB4:
    ctx->pc = 0x7F42CFB4u;
    // 7F42CFB4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F42CFB8:
    ctx->pc = 0x7F42CFB8u;
    // 7F42CFB8: li      r5, 10000
    ctx->gpr[5] = (u32)(s32)(10000);

label_7F42CFBC:
    ctx->pc = 0x7F42CFBCu;
    // 7F42CFBC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F42CFC0:
    ctx->pc = 0x7F42CFC0u;
    // 7F42CFC0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F42CFC4:
    ctx->pc = 0x7F42CFC4u;
    // 7F42CFC4: li      r9, 9
    ctx->gpr[9] = (u32)(s32)(9);

label_7F42CFC8:
    ctx->pc = 0x7F42CFC8u;
    // 7F42CFC8: li      r10, 30
    ctx->gpr[10] = (u32)(s32)(30);

label_7F42CFCC:
    ctx->pc = 0x7F42CFCCu;
    // 7F42CFCC: bl      0x7F23ADAC
    {
            ctx->lr = 0x7F42CFD0u;
            ctx->pc = 0x7F23ADACu;
            return;
    }

label_7F42CFD0:
    ctx->pc = 0x7F42CFD0u;
    ctx->downcount -= 1;
    // 7F42CFD0: b       0x7F42D484
    {
            goto label_7F42D484;
    }

label_7F42CFD4:
    ctx->pc = 0x7F42CFD4u;
    ctx->downcount -= 3;
    // 7F42CFD4: addi    r24, r29, 432
    ctx->gpr[24] = ctx->gpr[29] + (u32)(s32)(432);

label_7F42CFD8:
    ctx->pc = 0x7F42CFD8u;
    // 7F42CFD8: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F42CFDC:
    ctx->pc = 0x7F42CFDCu;
    // 7F42CFDC: bl      0x7F042AAC
    {
            ctx->lr = 0x7F42CFE0u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F42CFE0:
    ctx->pc = 0x7F42CFE0u;
    ctx->downcount -= 4;
    // 7F42CFE0: lwz     r4, 10360(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10360);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F42CFE4:
    ctx->pc = 0x7F42CFE4u;
    // 7F42CFE4: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F42CFE8:
    ctx->pc = 0x7F42CFE8u;
    // 7F42CFE8: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F42CFEC:
    ctx->pc = 0x7F42CFECu;
    // 7F42CFEC: bl      0x7F04272C
    {
            ctx->lr = 0x7F42CFF0u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F42CFF0:
    ctx->pc = 0x7F42CFF0u;
    ctx->downcount -= 3;
    // 7F42CFF0: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F42CFF4:
    ctx->pc = 0x7F42CFF4u;
    // 7F42CFF4: addi    r4, r29, 476
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(476);

label_7F42CFF8:
    ctx->pc = 0x7F42CFF8u;
    // 7F42CFF8: bl      0x7F042B20
    {
            ctx->lr = 0x7F42CFFCu;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F42CFFC:
    ctx->pc = 0x7F42CFFCu;
    ctx->downcount -= 5;
    // 7F42CFFC: lwz     r5, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F42D000:
    ctx->pc = 0x7F42D000u;
    // 7F42D000: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F42D004:
    ctx->pc = 0x7F42D004u;
    // 7F42D004: addi    r4, r29, 476
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(476);

label_7F42D008:
    ctx->pc = 0x7F42D008u;
    // 7F42D008: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F42D00C:
    ctx->pc = 0x7F42D00Cu;
    // 7F42D00C: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F42D010u;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F42D010:
    ctx->pc = 0x7F42D010u;
    ctx->downcount -= 2;
    // 7F42D010: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F42D014:
    ctx->pc = 0x7F42D014u;
    // 7F42D014: bl      0x7F023170
    {
            ctx->lr = 0x7F42D018u;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F42D018:
    ctx->pc = 0x7F42D018u;
    ctx->downcount -= 2;
    // 7F42D018: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F42D01C:
    ctx->pc = 0x7F42D01Cu;
    // 7F42D01C: bl      0x7F0427FC
    {
            ctx->lr = 0x7F42D020u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F42D020:
    ctx->pc = 0x7F42D020u;
    ctx->downcount -= 6;
    // 7F42D020: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F42D024:
    ctx->pc = 0x7F42D024u;
    // 7F42D024: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F42D028:
    ctx->pc = 0x7F42D028u;
    // 7F42D028: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F42D02C:
    ctx->pc = 0x7F42D02Cu;
    // 7F42D02C: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F42D030:
    ctx->pc = 0x7F42D030u;
    // 7F42D030: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F42D034:
    ctx->pc = 0x7F42D034u;
    // 7F42D034: b       0x7F42D1E0
    {
            goto label_7F42D1E0;
    }

label_7F42D038:
    ctx->downcount -= 7;
    // 7F42D038: add   r31, r29, r25
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[25];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_7F42D03C:
    // 7F42D03C: addi    r0, r26, 10368
    ctx->gpr[0] = ctx->gpr[26] + (u32)(s32)(10368);

label_7F42D040:
    // 7F42D040: addi    r24, r31, 7408
    ctx->gpr[24] = ctx->gpr[31] + (u32)(s32)(7408);

label_7F42D044:
    ctx->pc = 0x7F42D044u;
    // 7F42D044: lwzx    r4, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F42D048:
    // 7F42D048: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F42D04C:
    // 7F42D04C: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F42D050:
    // 7F42D050: bl      0x7F04272C
    {
            ctx->lr = 0x7F42D054u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F42D054:
    ctx->downcount -= 5;
    // 7F42D054: addi    r23, r27, 8156
    ctx->gpr[23] = ctx->gpr[27] + (u32)(s32)(8156);

label_7F42D058:
    // 7F42D058: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F42D05C:
    // 7F42D05C: add   r23, r29, r23
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[23] = res;
    }

label_7F42D060:
    // 7F42D060: or   r4, r23, r23
    {
        ctx->gpr[4] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F42D064:
    // 7F42D064: bl      0x7F042B20
    {
            ctx->lr = 0x7F42D068u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F42D068:
    ctx->pc = 0x7F42D068u;
    ctx->downcount -= 3;
    // 7F42D068: lwz     r3, 7408(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(7408);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42D06C:
    // 7F42D06C: cmplwi  r3, 0x0000
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

label_7F42D070:
    // 7F42D070: bc    12, 2, 0x7F42D1CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42D1CC;
        }
    }

label_7F42D074:
    ctx->downcount -= 6;
    // 7F42D074: add   r31, r29, r28
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_7F42D078:
    // 7F42D078: or   r4, r23, r23
    {
        ctx->gpr[4] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F42D07C:
    // 7F42D07C: addi    r23, r31, 608
    ctx->gpr[23] = ctx->gpr[31] + (u32)(s32)(608);

label_7F42D080:
    // 7F42D080: addi    r5, r3, 156
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(156);

label_7F42D084:
    // 7F42D084: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F42D088:
    // 7F42D088: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F42D08Cu;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F42D08C:
    ctx->downcount -= 2;
    // 7F42D08C: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F42D090:
    // 7F42D090: bl      0x7F023170
    {
            ctx->lr = 0x7F42D094u;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F42D094:
    ctx->downcount -= 2;
    // 7F42D094: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F42D098:
    // 7F42D098: bl      0x7F0427FC
    {
            ctx->lr = 0x7F42D09Cu;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F42D09C:
    ctx->downcount -= 5;
    // 7F42D09C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F42D0A0:
    // 7F42D0A0: or   r4, r23, r23
    {
        ctx->gpr[4] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F42D0A4:
    // 7F42D0A4: addi    r3, r3, -5708
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5708);

label_7F42D0A8:
    // 7F42D0A8: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F42D0AC:
    // 7F42D0AC: bl      0x800261D8
    {
            ctx->lr = 0x7F42D0B0u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F42D0B0:
    ctx->downcount -= 3;
    // 7F42D0B0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F42D0B4:
    // 7F42D0B4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42D0B8:
    // 7F42D0B8: bl      0x7F114F50
    {
            ctx->lr = 0x7F42D0BCu;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F42D0BC:
    ctx->downcount -= 1;
    // 7F42D0BC: bl      0x7F42D5E0
    {
            ctx->lr = 0x7F42D0C0u;
            goto label_7F42D5E0;
    }

label_7F42D0C0:
    ctx->downcount -= 7;
    // 7F42D0C0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42D0C4:
    ctx->pc = 0x7F42D0C4u;
    // 7F42D0C4: lfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42D0C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42D0C8:
    ctx->pc = 0x7F42D0C8u;
    // 7F42D0C8: lfd     f2, -10304(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42D0C8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10304);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42D0CC:
    ctx->pc = 0x7F42D0CCu;
    // 7F42D0CC: fmadd f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42D0CCu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], false, false, false, &result))
            ctx->fpr[0] = result;
    }

label_7F42D0D0:
    ctx->pc = 0x7F42D0D0u;
    // 7F42D0D0: frsp    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42D0D0u)) return;
    ppc_frsp(ctx, 0, 0);

label_7F42D0D4:
    ctx->pc = 0x7F42D0D4u;
    // 7F42D0D4: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42D0D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42D0D8:
    // 7F42D0D8: bl      0x7F42D5E0
    {
            ctx->lr = 0x7F42D0DCu;
            goto label_7F42D5E0;
    }

label_7F42D0DC:
    ctx->downcount -= 11;
    // 7F42D0DC: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42D0E0:
    ctx->pc = 0x7F42D0E0u;
    // 7F42D0E0: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42D0E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42D0E4:
    ctx->pc = 0x7F42D0E4u;
    // 7F42D0E4: lfd     f2, -10304(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42D0E4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10304);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42D0E8:
    // 7F42D0E8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42D0EC:
    ctx->pc = 0x7F42D0ECu;
    // 7F42D0EC: lfs     f3, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42D0ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F42D0F0:
    ctx->pc = 0x7F42D0F0u;
    // 7F42D0F0: fmadd f1, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42D0F0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], false, false, false, &result))
            ctx->fpr[1] = result;
    }

label_7F42D0F4:
    ctx->pc = 0x7F42D0F4u;
    // 7F42D0F4: lfs     f0, -10328(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42D0F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10328);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42D0F8:
    ctx->pc = 0x7F42D0F8u;
    // 7F42D0F8: fcmpo   cr0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42D0F8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[3], ctx->fpr[0], true);

label_7F42D0FC:
    ctx->pc = 0x7F42D0FCu;
    // 7F42D0FC: frsp    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42D0FCu)) return;
    ppc_frsp(ctx, 0, 1);

label_7F42D100:
    ctx->pc = 0x7F42D100u;
    // 7F42D100: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42D100u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42D104:
    // 7F42D104: bc    4, 0, 0x7F42D110
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42D110;
        }
    }

label_7F42D108:
    ctx->pc = 0x7F42D108u;
    ctx->downcount -= 2;
    // 7F42D108: fneg    f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F42D108u)) return;
    ctx->fpr[0] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[3]) ^ 0x8000000000000000ull);

label_7F42D10C:
    ctx->pc = 0x7F42D10Cu;
    // 7F42D10C: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42D10Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42D110:
    ctx->downcount -= 3;
    // 7F42D110: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F42D114:
    // 7F42D114: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42D118:
    // 7F42D118: bl      0x7F114F50
    {
            ctx->lr = 0x7F42D11Cu;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F42D11C:
    ctx->downcount -= 4;
    // 7F42D11C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42D120:
    ctx->pc = 0x7F42D120u;
    // 7F42D120: lfs     f0, -10296(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42D120u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10296);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42D124:
    ctx->pc = 0x7F42D124u;
    // 7F42D124: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42D124u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42D128:
    // 7F42D128: bl      0x7F42D574
    {
            ctx->lr = 0x7F42D12Cu;
            goto label_7F42D574;
    }

label_7F42D12C:
    ctx->downcount -= 7;
    // 7F42D12C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42D130:
    // 7F42D130: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F42D134:
    // 7F42D134: addi    r5, r4, -10292
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-10292);

label_7F42D138:
    ctx->pc = 0x7F42D138u;
    // 7F42D138: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F42D138u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42D13C:
    // 7F42D13C: addi    r4, r31, 624
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(624);

label_7F42D140:
    ctx->pc = 0x7F42D140u;
    // 7F42D140: fmadds f1, f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42D140u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[0], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F42D144:
    // 7F42D144: bl      0x800261FC
    {
            ctx->lr = 0x7F42D148u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F42D148:
    ctx->downcount -= 1;
    // 7F42D148: bl      0x7F42D574
    {
            ctx->lr = 0x7F42D14Cu;
            goto label_7F42D574;
    }

label_7F42D14C:
    ctx->downcount -= 9;
    // 7F42D14C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42D150:
    // 7F42D150: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42D154:
    ctx->pc = 0x7F42D154u;
    // 7F42D154: lfs     f3, -10284(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42D154u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10284);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F42D158:
    ctx->pc = 0x7F42D158u;
    // 7F42D158: lfs     f2, -10288(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42D158u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10288);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F42D15C:
    ctx->pc = 0x7F42D15Cu;
    // 7F42D15C: lfs     f0, 628(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F42D15Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(628);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42D160:
    ctx->pc = 0x7F42D160u;
    // 7F42D160: fmadds f1, f3, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F42D160u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[1], ctx->fpr[2], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F42D164:
    ctx->pc = 0x7F42D164u;
    // 7F42D164: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42D164u)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_7F42D168:
    ctx->pc = 0x7F42D168u;
    // 7F42D168: stfs     f0, 628(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F42D168u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(628);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42D16C:
    // 7F42D16C: bl      0x7F42D5E0
    {
            ctx->lr = 0x7F42D170u;
            goto label_7F42D5E0;
    }

label_7F42D170:
    ctx->downcount -= 8;
    // 7F42D170: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42D174:
    ctx->pc = 0x7F42D174u;
    // 7F42D174: lfs     f0, -10324(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42D174u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10324);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42D178:
    ctx->pc = 0x7F42D178u;
    // 7F42D178: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42D178u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F42D17C:
    ctx->pc = 0x7F42D17Cu;
    // 7F42D17C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42D17Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F42D180:
    ctx->pc = 0x7F42D180u;
    // 7F42D180: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42D180u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42D184:
    ctx->pc = 0x7F42D184u;
    // 7F42D184: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42D188:
    ctx->pc = 0x7F42D188u;
    // 7F42D188: sth     r0, 648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(648);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42D18C:
    // 7F42D18C: bl      0x7F42D5E0
    {
            ctx->lr = 0x7F42D190u;
            goto label_7F42D5E0;
    }

label_7F42D190:
    ctx->downcount -= 8;
    // 7F42D190: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42D194:
    ctx->pc = 0x7F42D194u;
    // 7F42D194: lfs     f0, -10324(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42D194u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10324);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42D198:
    ctx->pc = 0x7F42D198u;
    // 7F42D198: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42D198u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F42D19C:
    ctx->pc = 0x7F42D19Cu;
    // 7F42D19C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42D19Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F42D1A0:
    ctx->pc = 0x7F42D1A0u;
    // 7F42D1A0: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42D1A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42D1A4:
    ctx->pc = 0x7F42D1A4u;
    // 7F42D1A4: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42D1A8:
    ctx->pc = 0x7F42D1A8u;
    // 7F42D1A8: sth     r0, 650(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(650);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42D1AC:
    // 7F42D1AC: bl      0x7F42D5E0
    {
            ctx->lr = 0x7F42D1B0u;
            goto label_7F42D5E0;
    }

label_7F42D1B0:
    ctx->downcount -= 7;
    // 7F42D1B0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42D1B4:
    ctx->pc = 0x7F42D1B4u;
    // 7F42D1B4: lfs     f0, -10324(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42D1B4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10324);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42D1B8:
    ctx->pc = 0x7F42D1B8u;
    // 7F42D1B8: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42D1B8u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F42D1BC:
    ctx->pc = 0x7F42D1BCu;
    // 7F42D1BC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42D1BCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F42D1C0:
    ctx->pc = 0x7F42D1C0u;
    // 7F42D1C0: stfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42D1C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42D1C4:
    ctx->pc = 0x7F42D1C4u;
    // 7F42D1C4: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42D1C8:
    ctx->pc = 0x7F42D1C8u;
    // 7F42D1C8: sth     r0, 652(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(652);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42D1CC:
    ctx->downcount -= 5;
    // 7F42D1CC: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F42D1D0:
    // 7F42D1D0: addi    r28, r28, 400
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(400);

label_7F42D1D4:
    // 7F42D1D4: addi    r27, r27, 128
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(128);

label_7F42D1D8:
    // 7F42D1D8: addi    r26, r26, 4
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(4);

label_7F42D1DC:
    // 7F42D1DC: addi    r25, r25, 44
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(44);

label_7F42D1E0:
    ctx->pc = 0x7F42D1E0u;
    ctx->downcount -= 3;
    // 7F42D1E0: lwz     r0, 10364(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10364);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42D1E4:
    // 7F42D1E4: cmpw    r30, r0
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

label_7F42D1E8:
    // 7F42D1E8: bc    12, 0, 0x7F42D038
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42D038u;
                return;
            }
            goto label_7F42D038;
        }
    }

label_7F42D1EC:
    ctx->pc = 0x7F42D1ECu;
    ctx->downcount -= 2;
    // 7F42D1EC: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F42D1F0:
    ctx->pc = 0x7F42D1F0u;
    // 7F42D1F0: bl      0x7F01C018
    {
            ctx->lr = 0x7F42D1F4u;
            ctx->pc = 0x7F01C018u;
            return;
    }

label_7F42D1F4:
    ctx->pc = 0x7F42D1F4u;
    ctx->downcount -= 11;
    // 7F42D1F4: lis     r5, 32588
    ctx->gpr[5] = ((u32)(s32)(32588) << 16);

label_7F42D1F8:
    ctx->pc = 0x7F42D1F8u;
    // 7F42D1F8: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F42D1FC:
    ctx->pc = 0x7F42D1FCu;
    // 7F42D1FC: lwz     r0, -27956(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-27956);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42D200:
    ctx->pc = 0x7F42D200u;
    // 7F42D200: nor   r6, r3, r3
    {
        ctx->gpr[6] = ~(ctx->gpr[3] | ctx->gpr[3]);
    }

label_7F42D204:
    ctx->pc = 0x7F42D204u;
    // 7F42D204: addi    r4, r4, -22728
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-22728);

label_7F42D208:
    ctx->pc = 0x7F42D208u;
    // 7F42D208: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F42D20C:
    ctx->pc = 0x7F42D20Cu;
    // 7F42D20C: rlwinm r5, r0, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F42D210:
    ctx->pc = 0x7F42D210u;
    // 7F42D210: lwzx    r0, r4, r5
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[5];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42D214:
    ctx->pc = 0x7F42D214u;
    // 7F42D214: and   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[6];
    }

label_7F42D218:
    ctx->pc = 0x7F42D218u;
    // 7F42D218: stwx    r0, r4, r5
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42D21C:
    ctx->pc = 0x7F42D21Cu;
    // 7F42D21C: bl      0x7F01C018
    {
            ctx->lr = 0x7F42D220u;
            ctx->pc = 0x7F01C018u;
            return;
    }

label_7F42D220:
    ctx->pc = 0x7F42D220u;
    ctx->downcount -= 9;
    // 7F42D220: lis     r5, 32588
    ctx->gpr[5] = ((u32)(s32)(32588) << 16);

label_7F42D224:
    ctx->pc = 0x7F42D224u;
    // 7F42D224: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F42D228:
    ctx->pc = 0x7F42D228u;
    // 7F42D228: lwz     r0, -27956(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-27956);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42D22C:
    ctx->pc = 0x7F42D22Cu;
    // 7F42D22C: addi    r4, r4, -22728
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-22728);

label_7F42D230:
    ctx->pc = 0x7F42D230u;
    // 7F42D230: rlwinm r5, r0, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F42D234:
    ctx->pc = 0x7F42D234u;
    // 7F42D234: lwzx    r0, r4, r5
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[5];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42D238:
    ctx->pc = 0x7F42D238u;
    // 7F42D238: or   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[3];
    }

label_7F42D23C:
    ctx->pc = 0x7F42D23Cu;
    // 7F42D23C: stwx    r0, r4, r5
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42D240:
    ctx->pc = 0x7F42D240u;
    // 7F42D240: b       0x7F42D484
    {
            goto label_7F42D484;
    }

label_7F42D244:
    ctx->pc = 0x7F42D244u;
    ctx->downcount -= 3;
    // 7F42D244: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F42D248:
    ctx->pc = 0x7F42D248u;
    // 7F42D248: addi    r3, r3, -2260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2260);

label_7F42D24C:
    ctx->pc = 0x7F42D24Cu;
    // 7F42D24C: bl      0x80025A08
    {
            ctx->lr = 0x7F42D250u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F42D250:
    ctx->pc = 0x7F42D250u;
    ctx->downcount -= 28;
    // 7F42D250: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42D254:
    ctx->pc = 0x7F42D254u;
    // 7F42D254: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F42D258:
    ctx->pc = 0x7F42D258u;
    // 7F42D258: addi    r5, r4, -10280
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-10280);

label_7F42D25C:
    ctx->pc = 0x7F42D25Cu;
    // 7F42D25C: lis     r6, 3159
    ctx->gpr[6] = ((u32)(s32)(3159) << 16);

label_7F42D260:
    ctx->pc = 0x7F42D260u;
    // 7F42D260: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F42D260u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42D264:
    ctx->pc = 0x7F42D264u;
    // 7F42D264: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42D268:
    ctx->pc = 0x7F42D268u;
    // 7F42D268: lfs     f0, 10332(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42D268u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10332);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42D26C:
    ctx->pc = 0x7F42D26Cu;
    // 7F42D26C: addi    r8, r4, -10276
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(-10276);

label_7F42D270:
    ctx->pc = 0x7F42D270u;
    // 7F42D270: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F42D274:
    ctx->pc = 0x7F42D274u;
    // 7F42D274: lis     r4, 6474
    ctx->gpr[4] = ((u32)(s32)(6474) << 16);

label_7F42D278:
    ctx->pc = 0x7F42D278u;
    // 7F42D278: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42D278u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F42D27C:
    ctx->pc = 0x7F42D27Cu;
    // 7F42D27C: addi    r3, r3, -2260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2260);

label_7F42D280:
    ctx->pc = 0x7F42D280u;
    // 7F42D280: addi    r7, r5, -10272
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(-10272);

label_7F42D284:
    ctx->pc = 0x7F42D284u;
    // 7F42D284: lis     r5, 3121
    ctx->gpr[5] = ((u32)(s32)(3121) << 16);

label_7F42D288:
    ctx->pc = 0x7F42D288u;
    // 7F42D288: lfs     f2, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F42D288u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F42D28C:
    ctx->pc = 0x7F42D28Cu;
    // 7F42D28C: addi    r4, r4, -4870
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4870);

label_7F42D290:
    ctx->pc = 0x7F42D290u;
    // 7F42D290: stfs     f0, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42D290u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42D294:
    ctx->pc = 0x7F42D294u;
    // 7F42D294: addi    r5, r5, 11969
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(11969);

label_7F42D298:
    ctx->pc = 0x7F42D298u;
    // 7F42D298: lfs     f0, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F42D298u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42D29C:
    ctx->pc = 0x7F42D29Cu;
    // 7F42D29C: addi    r6, r6, 20316
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(20316);

label_7F42D2A0:
    ctx->pc = 0x7F42D2A0u;
    // 7F42D2A0: lfs     f1, 10336(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42D2A0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10336);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42D2A4:
    ctx->pc = 0x7F42D2A4u;
    // 7F42D2A4: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F42D2A8:
    ctx->pc = 0x7F42D2A8u;
    // 7F42D2A8: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42D2A8u)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_7F42D2AC:
    ctx->pc = 0x7F42D2ACu;
    // 7F42D2AC: stfs     f1, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42D2ACu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F42D2B0:
    ctx->pc = 0x7F42D2B0u;
    // 7F42D2B0: lfs     f1, 10340(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42D2B0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10340);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42D2B4:
    ctx->pc = 0x7F42D2B4u;
    // 7F42D2B4: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42D2B4u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F42D2B8:
    ctx->pc = 0x7F42D2B8u;
    // 7F42D2B8: stfs     f0, 56(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42D2B8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42D2BC:
    ctx->pc = 0x7F42D2BCu;
    // 7F42D2BC: bl      0x7F41547C
    {
            ctx->lr = 0x7F42D2C0u;
            ctx->pc = 0x7F41547Cu;
            return;
    }

label_7F42D2C0:
    ctx->pc = 0x7F42D2C0u;
    ctx->downcount -= 1;
    // 7F42D2C0: b       0x7F42D484
    {
            goto label_7F42D484;
    }

label_7F42D2C4:
    ctx->pc = 0x7F42D2C4u;
    ctx->downcount -= 3;
    // 7F42D2C4: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F42D2C8:
    ctx->pc = 0x7F42D2C8u;
    // 7F42D2C8: addi    r3, r3, -2324
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2324);

label_7F42D2CC:
    ctx->pc = 0x7F42D2CCu;
    // 7F42D2CC: bl      0x80025A08
    {
            ctx->lr = 0x7F42D2D0u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F42D2D0:
    ctx->pc = 0x7F42D2D0u;
    ctx->downcount -= 28;
    // 7F42D2D0: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42D2D4:
    ctx->pc = 0x7F42D2D4u;
    // 7F42D2D4: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F42D2D8:
    ctx->pc = 0x7F42D2D8u;
    // 7F42D2D8: addi    r5, r4, -10268
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-10268);

label_7F42D2DC:
    ctx->pc = 0x7F42D2DCu;
    // 7F42D2DC: lis     r6, 3159
    ctx->gpr[6] = ((u32)(s32)(3159) << 16);

label_7F42D2E0:
    ctx->pc = 0x7F42D2E0u;
    // 7F42D2E0: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F42D2E0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42D2E4:
    ctx->pc = 0x7F42D2E4u;
    // 7F42D2E4: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42D2E8:
    ctx->pc = 0x7F42D2E8u;
    // 7F42D2E8: lfs     f1, 10332(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42D2E8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10332);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42D2EC:
    ctx->pc = 0x7F42D2ECu;
    // 7F42D2EC: addi    r8, r4, -10264
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(-10264);

label_7F42D2F0:
    ctx->pc = 0x7F42D2F0u;
    // 7F42D2F0: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F42D2F4:
    ctx->pc = 0x7F42D2F4u;
    // 7F42D2F4: lis     r4, 6474
    ctx->gpr[4] = ((u32)(s32)(6474) << 16);

label_7F42D2F8:
    ctx->pc = 0x7F42D2F8u;
    // 7F42D2F8: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42D2F8u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F42D2FC:
    ctx->pc = 0x7F42D2FCu;
    // 7F42D2FC: addi    r3, r3, -2324
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2324);

label_7F42D300:
    ctx->pc = 0x7F42D300u;
    // 7F42D300: addi    r7, r5, -10260
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(-10260);

label_7F42D304:
    ctx->pc = 0x7F42D304u;
    // 7F42D304: lis     r5, 3121
    ctx->gpr[5] = ((u32)(s32)(3121) << 16);

label_7F42D308:
    ctx->pc = 0x7F42D308u;
    // 7F42D308: lfs     f2, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F42D308u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F42D30C:
    ctx->pc = 0x7F42D30Cu;
    // 7F42D30C: addi    r4, r4, -4870
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4870);

label_7F42D310:
    ctx->pc = 0x7F42D310u;
    // 7F42D310: stfs     f0, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42D310u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42D314:
    ctx->pc = 0x7F42D314u;
    // 7F42D314: addi    r5, r5, 11969
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(11969);

label_7F42D318:
    ctx->pc = 0x7F42D318u;
    // 7F42D318: lfs     f0, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F42D318u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42D31C:
    ctx->pc = 0x7F42D31Cu;
    // 7F42D31C: addi    r6, r6, 20316
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(20316);

label_7F42D320:
    ctx->pc = 0x7F42D320u;
    // 7F42D320: lfs     f1, 10336(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42D320u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10336);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42D324:
    ctx->pc = 0x7F42D324u;
    // 7F42D324: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F42D328:
    ctx->pc = 0x7F42D328u;
    // 7F42D328: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42D328u)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_7F42D32C:
    ctx->pc = 0x7F42D32Cu;
    // 7F42D32C: stfs     f1, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42D32Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F42D330:
    ctx->pc = 0x7F42D330u;
    // 7F42D330: lfs     f1, 10340(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42D330u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10340);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42D334:
    ctx->pc = 0x7F42D334u;
    // 7F42D334: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42D334u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F42D338:
    ctx->pc = 0x7F42D338u;
    // 7F42D338: stfs     f0, 56(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42D338u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42D33C:
    ctx->pc = 0x7F42D33Cu;
    // 7F42D33C: bl      0x7F41547C
    {
            ctx->lr = 0x7F42D340u;
            ctx->pc = 0x7F41547Cu;
            return;
    }

label_7F42D340:
    ctx->pc = 0x7F42D340u;
    ctx->downcount -= 1;
    // 7F42D340: b       0x7F42D484
    {
            goto label_7F42D484;
    }

label_7F42D344:
    ctx->pc = 0x7F42D344u;
    ctx->downcount -= 3;
    // 7F42D344: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F42D348:
    ctx->pc = 0x7F42D348u;
    // 7F42D348: addi    r3, r3, -2388
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2388);

label_7F42D34C:
    ctx->pc = 0x7F42D34Cu;
    // 7F42D34C: bl      0x80025A08
    {
            ctx->lr = 0x7F42D350u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F42D350:
    ctx->pc = 0x7F42D350u;
    ctx->downcount -= 28;
    // 7F42D350: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42D354:
    ctx->pc = 0x7F42D354u;
    // 7F42D354: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F42D358:
    ctx->pc = 0x7F42D358u;
    // 7F42D358: addi    r5, r4, -10256
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-10256);

label_7F42D35C:
    ctx->pc = 0x7F42D35Cu;
    // 7F42D35C: lis     r6, 2108
    ctx->gpr[6] = ((u32)(s32)(2108) << 16);

label_7F42D360:
    ctx->pc = 0x7F42D360u;
    // 7F42D360: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F42D360u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42D364:
    ctx->pc = 0x7F42D364u;
    // 7F42D364: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42D368:
    ctx->pc = 0x7F42D368u;
    // 7F42D368: lfs     f1, 10332(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42D368u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10332);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42D36C:
    ctx->pc = 0x7F42D36Cu;
    // 7F42D36C: addi    r8, r4, -10252
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(-10252);

label_7F42D370:
    ctx->pc = 0x7F42D370u;
    // 7F42D370: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F42D374:
    ctx->pc = 0x7F42D374u;
    // 7F42D374: lis     r4, 3914
    ctx->gpr[4] = ((u32)(s32)(3914) << 16);

label_7F42D378:
    ctx->pc = 0x7F42D378u;
    // 7F42D378: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42D378u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F42D37C:
    ctx->pc = 0x7F42D37Cu;
    // 7F42D37C: addi    r3, r3, -2388
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2388);

label_7F42D380:
    ctx->pc = 0x7F42D380u;
    // 7F42D380: addi    r7, r5, -10248
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(-10248);

label_7F42D384:
    ctx->pc = 0x7F42D384u;
    // 7F42D384: lis     r5, 4657
    ctx->gpr[5] = ((u32)(s32)(4657) << 16);

label_7F42D388:
    ctx->pc = 0x7F42D388u;
    // 7F42D388: lfs     f2, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F42D388u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F42D38C:
    ctx->pc = 0x7F42D38Cu;
    // 7F42D38C: addi    r4, r4, -7460
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7460);

label_7F42D390:
    ctx->pc = 0x7F42D390u;
    // 7F42D390: stfs     f0, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42D390u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42D394:
    ctx->pc = 0x7F42D394u;
    // 7F42D394: addi    r5, r5, 11969
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(11969);

label_7F42D398:
    ctx->pc = 0x7F42D398u;
    // 7F42D398: lfs     f0, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F42D398u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42D39C:
    ctx->pc = 0x7F42D39Cu;
    // 7F42D39C: addi    r6, r6, 20310
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(20310);

label_7F42D3A0:
    ctx->pc = 0x7F42D3A0u;
    // 7F42D3A0: lfs     f1, 10336(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42D3A0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10336);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42D3A4:
    ctx->pc = 0x7F42D3A4u;
    // 7F42D3A4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F42D3A8:
    ctx->pc = 0x7F42D3A8u;
    // 7F42D3A8: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42D3A8u)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_7F42D3AC:
    ctx->pc = 0x7F42D3ACu;
    // 7F42D3AC: stfs     f1, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42D3ACu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F42D3B0:
    ctx->pc = 0x7F42D3B0u;
    // 7F42D3B0: lfs     f1, 10340(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42D3B0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10340);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42D3B4:
    ctx->pc = 0x7F42D3B4u;
    // 7F42D3B4: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42D3B4u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F42D3B8:
    ctx->pc = 0x7F42D3B8u;
    // 7F42D3B8: stfs     f0, 56(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42D3B8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42D3BC:
    ctx->pc = 0x7F42D3BCu;
    // 7F42D3BC: bl      0x7F41547C
    {
            ctx->lr = 0x7F42D3C0u;
            ctx->pc = 0x7F41547Cu;
            return;
    }

label_7F42D3C0:
    ctx->pc = 0x7F42D3C0u;
    ctx->downcount -= 5;
    // 7F42D3C0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42D3C4:
    ctx->pc = 0x7F42D3C4u;
    // 7F42D3C4: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F42D3C8:
    ctx->pc = 0x7F42D3C8u;
    // 7F42D3C8: lfs     f31, -10324(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42D3C8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10324);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F42D3CC:
    ctx->pc = 0x7F42D3CCu;
    // 7F42D3CC: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F42D3D0:
    ctx->pc = 0x7F42D3D0u;
    // 7F42D3D0: b       0x7F42D428
    {
            goto label_7F42D428;
    }

label_7F42D3D4:
    ctx->downcount -= 1;
    // 7F42D3D4: bl      0x7F42D5E0
    {
            ctx->lr = 0x7F42D3D8u;
            goto label_7F42D5E0;
    }

label_7F42D3D8:
    ctx->pc = 0x7F42D3D8u;
    ctx->downcount -= 7;
    // 7F42D3D8: fmuls   f0, f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42D3D8u)) return;
    ppc_fmuls(ctx, 0, 31, 1);

label_7F42D3DC:
    // 7F42D3DC: add   r23, r29, r30
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[23] = res;
    }

label_7F42D3E0:
    ctx->pc = 0x7F42D3E0u;
    // 7F42D3E0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42D3E0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F42D3E4:
    ctx->pc = 0x7F42D3E4u;
    // 7F42D3E4: stfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42D3E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42D3E8:
    ctx->pc = 0x7F42D3E8u;
    // 7F42D3E8: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42D3EC:
    ctx->pc = 0x7F42D3ECu;
    // 7F42D3EC: sth     r0, 648(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(648);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42D3F0:
    // 7F42D3F0: bl      0x7F42D5E0
    {
            ctx->lr = 0x7F42D3F4u;
            goto label_7F42D5E0;
    }

label_7F42D3F4:
    ctx->pc = 0x7F42D3F4u;
    ctx->downcount -= 6;
    // 7F42D3F4: fmuls   f0, f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42D3F4u)) return;
    ppc_fmuls(ctx, 0, 31, 1);

label_7F42D3F8:
    ctx->pc = 0x7F42D3F8u;
    // 7F42D3F8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42D3F8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F42D3FC:
    ctx->pc = 0x7F42D3FCu;
    // 7F42D3FC: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42D3FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42D400:
    ctx->pc = 0x7F42D400u;
    // 7F42D400: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42D404:
    ctx->pc = 0x7F42D404u;
    // 7F42D404: sth     r0, 650(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(650);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42D408:
    // 7F42D408: bl      0x7F42D5E0
    {
            ctx->lr = 0x7F42D40Cu;
            goto label_7F42D5E0;
    }

label_7F42D40C:
    ctx->pc = 0x7F42D40Cu;
    ctx->downcount -= 7;
    // 7F42D40C: fmuls   f0, f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42D40Cu)) return;
    ppc_fmuls(ctx, 0, 31, 1);

label_7F42D410:
    // 7F42D410: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_7F42D414:
    // 7F42D414: addi    r30, r30, 400
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(400);

label_7F42D418:
    ctx->pc = 0x7F42D418u;
    // 7F42D418: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42D418u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F42D41C:
    ctx->pc = 0x7F42D41Cu;
    // 7F42D41C: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42D41Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42D420:
    ctx->pc = 0x7F42D420u;
    // 7F42D420: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42D424:
    ctx->pc = 0x7F42D424u;
    // 7F42D424: sth     r0, 652(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(652);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42D428:
    ctx->pc = 0x7F42D428u;
    ctx->downcount -= 3;
    // 7F42D428: lwz     r0, 10364(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10364);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42D42C:
    // 7F42D42C: cmpw    r24, r0
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42D430:
    // 7F42D430: bc    12, 0, 0x7F42D3D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42D3D4u;
                return;
            }
            goto label_7F42D3D4;
        }
    }

label_7F42D434:
    ctx->pc = 0x7F42D434u;
    ctx->downcount -= 1;
    // 7F42D434: b       0x7F42D484
    {
            goto label_7F42D484;
    }

label_7F42D438:
    ctx->pc = 0x7F42D438u;
    ctx->downcount -= 4;
    // 7F42D438: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F42D43C:
    ctx->pc = 0x7F42D43Cu;
    // 7F42D43C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F42D440:
    ctx->pc = 0x7F42D440u;
    // 7F42D440: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F42D444:
    ctx->pc = 0x7F42D444u;
    // 7F42D444: b       0x7F42D478
    {
            goto label_7F42D478;
    }

label_7F42D448:
    ctx->downcount -= 4;
    // 7F42D448: add   r23, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[23] = res;
    }

label_7F42D44C:
    ctx->pc = 0x7F42D44Cu;
    // 7F42D44C: lwz     r0, 7408(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(7408);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42D450:
    // 7F42D450: cmplwi  r0, 0x0000
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

label_7F42D454:
    // 7F42D454: bc    12, 2, 0x7F42D46C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42D46C;
        }
    }

label_7F42D458:
    ctx->downcount -= 3;
    // 7F42D458: addi    r3, r30, 608
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(608);

label_7F42D45C:
    // 7F42D45C: add   r3, r29, r3
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F42D460:
    // 7F42D460: bl      0x7F023E10
    {
            ctx->lr = 0x7F42D464u;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F42D464:
    ctx->downcount -= 2;
    // 7F42D464: addi    r3, r23, 7408
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(7408);

label_7F42D468:
    // 7F42D468: bl      0x7F042AAC
    {
            ctx->lr = 0x7F42D46Cu;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F42D46C:
    ctx->downcount -= 3;
    // 7F42D46C: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_7F42D470:
    // 7F42D470: addi    r30, r30, 400
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(400);

label_7F42D474:
    // 7F42D474: addi    r31, r31, 44
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(44);

label_7F42D478:
    ctx->pc = 0x7F42D478u;
    ctx->downcount -= 3;
    // 7F42D478: lwz     r0, 10364(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10364);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42D47C:
    // 7F42D47C: cmpw    r24, r0
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42D480:
    // 7F42D480: bc    12, 0, 0x7F42D448
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42D448u;
                return;
            }
            goto label_7F42D448;
        }
    }

label_7F42D484:
    ctx->pc = 0x7F42D484u;
    ctx->downcount -= 3;
    // 7F42D484: lwz     r0, 10444(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10444);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42D488:
    ctx->pc = 0x7F42D488u;
    // 7F42D488: cmpwi   r0, 30
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

label_7F42D48C:
    ctx->pc = 0x7F42D48Cu;
    // 7F42D48C: bc    4, 0, 0x7F42D54C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42D54C;
        }
    }

label_7F42D490:
    ctx->pc = 0x7F42D490u;
    ctx->downcount -= 8;
    // 7F42D490: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42D494:
    ctx->pc = 0x7F42D494u;
    // 7F42D494: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42D498:
    ctx->pc = 0x7F42D498u;
    // 7F42D498: lfs     f2, -10244(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42D498u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10244);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F42D49C:
    ctx->pc = 0x7F42D49Cu;
    // 7F42D49C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F42D4A0:
    ctx->pc = 0x7F42D4A0u;
    // 7F42D4A0: lfd     f1, -10240(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42D4A0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10240);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42D4A4:
    ctx->pc = 0x7F42D4A4u;
    // 7F42D4A4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F42D4A8:
    ctx->pc = 0x7F42D4A8u;
    // 7F42D4A8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F42D4AC:
    ctx->pc = 0x7F42D4ACu;
    // 7F42D4AC: b       0x7F42D4E8
    {
            goto label_7F42D4E8;
    }

label_7F42D4B0:
    ctx->downcount -= 4;
    // 7F42D4B0: addi    r0, r4, 7408
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(7408);

label_7F42D4B4:
    ctx->pc = 0x7F42D4B4u;
    // 7F42D4B4: lwzx    r0, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42D4B8:
    // 7F42D4B8: cmplwi  r0, 0x0000
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

label_7F42D4BC:
    // 7F42D4BC: bc    12, 2, 0x7F42D4DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42D4DC;
        }
    }

label_7F42D4C0:
    ctx->downcount -= 4;
    // 7F42D4C0: addi    r0, r3, 628
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(628);

label_7F42D4C4:
    ctx->pc = 0x7F42D4C4u;
    // 7F42D4C4: lfsx    f0, r29, r0
    if (!ppc_fp_available_inline(ctx, 0x7F42D4C4u)) return;
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42D4C8:
    ctx->pc = 0x7F42D4C8u;
    // 7F42D4C8: fcmpo   cr0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F42D4C8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[2], true);

label_7F42D4CC:
    // 7F42D4CC: bc    4, 1, 0x7F42D4DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42D4DC;
        }
    }

label_7F42D4D0:
    ctx->pc = 0x7F42D4D0u;
    ctx->downcount -= 3;
    // 7F42D4D0: fsub   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42D4D0u)) return;
    ppc_fsub(ctx, 0, 0, 1);

label_7F42D4D4:
    ctx->pc = 0x7F42D4D4u;
    // 7F42D4D4: frsp    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42D4D4u)) return;
    ppc_frsp(ctx, 0, 0);

label_7F42D4D8:
    ctx->pc = 0x7F42D4D8u;
    // 7F42D4D8: stfsx    f0, r29, r0
    if (!ppc_fp_available_inline(ctx, 0x7F42D4D8u)) return;
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42D4DC:
    ctx->downcount -= 3;
    // 7F42D4DC: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_7F42D4E0:
    // 7F42D4E0: addi    r3, r3, 400
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(400);

label_7F42D4E4:
    // 7F42D4E4: addi    r4, r4, 44
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(44);

label_7F42D4E8:
    ctx->pc = 0x7F42D4E8u;
    ctx->downcount -= 3;
    // 7F42D4E8: lwz     r0, 10364(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10364);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42D4EC:
    // 7F42D4EC: cmpw    r5, r0
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

label_7F42D4F0:
    // 7F42D4F0: bc    12, 0, 0x7F42D4B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42D4B0u;
                return;
            }
            goto label_7F42D4B0;
        }
    }

label_7F42D4F4:
    ctx->pc = 0x7F42D4F4u;
    ctx->downcount -= 3;
    // 7F42D4F4: lwz     r0, 10444(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10444);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42D4F8:
    ctx->pc = 0x7F42D4F8u;
    // 7F42D4F8: cmpwi   r0, 1
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

label_7F42D4FC:
    ctx->pc = 0x7F42D4FCu;
    // 7F42D4FC: bc    4, 1, 0x7F42D54C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42D54C;
        }
    }

label_7F42D500:
    ctx->pc = 0x7F42D500u;
    ctx->downcount -= 2;
    // 7F42D500: cmpwi   r0, 18
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(18);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42D504:
    ctx->pc = 0x7F42D504u;
    // 7F42D504: bc    12, 1, 0x7F42D54C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42D54C;
        }
    }

label_7F42D508:
    ctx->pc = 0x7F42D508u;
    ctx->downcount -= 3;
    // 7F42D508: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F42D50C:
    ctx->pc = 0x7F42D50Cu;
    // 7F42D50C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F42D510:
    ctx->pc = 0x7F42D510u;
    // 7F42D510: b       0x7F42D540
    {
            goto label_7F42D540;
    }

label_7F42D514:
    ctx->downcount -= 4;
    // 7F42D514: addi    r0, r3, 7408
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(7408);

label_7F42D518:
    ctx->pc = 0x7F42D518u;
    // 7F42D518: lwzx    r5, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F42D51C:
    // 7F42D51C: cmplwi  r5, 0x0000
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

label_7F42D520:
    // 7F42D520: bc    12, 2, 0x7F42D538
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42D538;
        }
    }

label_7F42D524:
    ctx->pc = 0x7F42D524u;
    ctx->downcount -= 3;
    // 7F42D524: lbz     r4, 119(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(119);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F42D528:
    // 7F42D528: cmplwi  r4, 0x000F
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x000Fu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42D52C:
    // 7F42D52C: bc    12, 0, 0x7F42D538
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42D538;
        }
    }

label_7F42D530:
    ctx->downcount -= 2;
    // 7F42D530: addi    r0, r4, -15
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-15);

label_7F42D534:
    ctx->pc = 0x7F42D534u;
    // 7F42D534: stb     r0, 119(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(119);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F42D538:
    ctx->downcount -= 2;
    // 7F42D538: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_7F42D53C:
    // 7F42D53C: addi    r3, r3, 44
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(44);

label_7F42D540:
    ctx->pc = 0x7F42D540u;
    ctx->downcount -= 3;
    // 7F42D540: lwz     r0, 10364(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10364);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42D544:
    // 7F42D544: cmpw    r6, r0
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

label_7F42D548:
    // 7F42D548: bc    12, 0, 0x7F42D514
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42D514u;
                return;
            }
            goto label_7F42D514;
        }
    }

label_7F42D54C:
    ctx->pc = 0x7F42D54Cu;
    ctx->downcount -= 3;
    // 7F42D54C: lwz     r3, 10444(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10444);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42D550:
    ctx->pc = 0x7F42D550u;
    // 7F42D550: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F42D554:
    ctx->pc = 0x7F42D554u;
    // 7F42D554: stw     r0, 10444(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10444);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42D558:
    ctx->pc = 0x7F42D558u;
    ctx->downcount -= 18;
    // 7F42D558: psq_l   f31, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F42D558u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F42D558u);
        if (ctx->exception) return;
    }

label_7F42D55C:
    ctx->pc = 0x7F42D55Cu;
    // 7F42D55C: lfd     f31, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42D55Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42D560:
    ctx->pc = 0x7F42D560u;
    // 7F42D560: lmw     r23, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F42D564:
    ctx->pc = 0x7F42D564u;
    // 7F42D564: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42D568:
    ctx->pc = 0x7F42D568u;
    // 7F42D568: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42D56C:
    ctx->pc = 0x7F42D56Cu;
    // 7F42D56C: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_7F42D570:
    ctx->pc = 0x7F42D570u;
    // 7F42D570: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42D574:
    ctx->pc = 0x7F42D574u;
    ctx->downcount -= 4;
    // 7F42D574: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42D578:
    ctx->pc = 0x7F42D578u;
    // 7F42D578: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42D57C:
    ctx->pc = 0x7F42D57Cu;
    // 7F42D57C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42D580:
    ctx->pc = 0x7F42D580u;
    // 7F42D580: bl      0x7F42D5BC
    {
            ctx->lr = 0x7F42D584u;
            goto label_7F42D5BC;
    }

label_7F42D584:
    ctx->pc = 0x7F42D584u;
    ctx->downcount -= 31;
    // 7F42D584: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F42D588:
    ctx->pc = 0x7F42D588u;
    // 7F42D588: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42D58C:
    ctx->pc = 0x7F42D58Cu;
    // 7F42D58C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42D590:
    ctx->pc = 0x7F42D590u;
    // 7F42D590: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42D594:
    ctx->pc = 0x7F42D594u;
    // 7F42D594: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42D598:
    ctx->pc = 0x7F42D598u;
    // 7F42D598: lfd     f2, -10224(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42D598u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10224);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42D59C:
    ctx->pc = 0x7F42D59Cu;
    // 7F42D59C: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42D59Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42D5A0:
    ctx->pc = 0x7F42D5A0u;
    // 7F42D5A0: lfs     f0, -10232(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42D5A0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10232);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42D5A4:
    ctx->pc = 0x7F42D5A4u;
    // 7F42D5A4: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F42D5A4u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F42D5A8:
    ctx->pc = 0x7F42D5A8u;
    // 7F42D5A8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42D5AC:
    ctx->pc = 0x7F42D5ACu;
    // 7F42D5AC: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42D5ACu)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F42D5B0:
    ctx->pc = 0x7F42D5B0u;
    // 7F42D5B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42D5B4:
    ctx->pc = 0x7F42D5B4u;
    // 7F42D5B4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F42D5B8:
    ctx->pc = 0x7F42D5B8u;
    // 7F42D5B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42D5BC:
    ctx->pc = 0x7F42D5BCu;
    ctx->downcount -= 13;
    // 7F42D5BC: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F42D5C0:
    ctx->pc = 0x7F42D5C0u;
    // 7F42D5C0: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F42D5C4:
    ctx->pc = 0x7F42D5C4u;
    // 7F42D5C4: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F42D5C8:
    ctx->pc = 0x7F42D5C8u;
    // 7F42D5C8: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F42D5CC:
    ctx->pc = 0x7F42D5CCu;
    // 7F42D5CC: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F42D5D0:
    ctx->pc = 0x7F42D5D0u;
    // 7F42D5D0: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F42D5D4:
    ctx->pc = 0x7F42D5D4u;
    // 7F42D5D4: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F42D5D8:
    ctx->pc = 0x7F42D5D8u;
    // 7F42D5D8: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42D5DC:
    ctx->pc = 0x7F42D5DCu;
    // 7F42D5DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42D5E0:
    ctx->pc = 0x7F42D5E0u;
    ctx->downcount -= 4;
    // 7F42D5E0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42D5E4:
    ctx->pc = 0x7F42D5E4u;
    // 7F42D5E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42D5E8:
    ctx->pc = 0x7F42D5E8u;
    // 7F42D5E8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42D5EC:
    ctx->pc = 0x7F42D5ECu;
    // 7F42D5EC: bl      0x7F42D5BC
    {
            ctx->lr = 0x7F42D5F0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42D5BCu;
                return;
            }
            goto label_7F42D5BC;
    }

label_7F42D5F0:
    ctx->pc = 0x7F42D5F0u;
    ctx->downcount -= 35;
    // 7F42D5F0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F42D5F4:
    ctx->pc = 0x7F42D5F4u;
    // 7F42D5F4: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42D5F8:
    ctx->pc = 0x7F42D5F8u;
    // 7F42D5F8: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42D5FC:
    ctx->pc = 0x7F42D5FCu;
    // 7F42D5FC: addi    r5, r4, -10224
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-10224);

label_7F42D600:
    ctx->pc = 0x7F42D600u;
    // 7F42D600: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42D604:
    ctx->pc = 0x7F42D604u;
    // 7F42D604: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F42D604u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42D608:
    ctx->pc = 0x7F42D608u;
    // 7F42D608: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42D60C:
    ctx->pc = 0x7F42D60Cu;
    // 7F42D60C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42D610:
    ctx->pc = 0x7F42D610u;
    // 7F42D610: lfs     f1, -10216(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42D610u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10216);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42D614:
    ctx->pc = 0x7F42D614u;
    // 7F42D614: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42D614u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42D618:
    ctx->pc = 0x7F42D618u;
    // 7F42D618: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42D61C:
    ctx->pc = 0x7F42D61Cu;
    // 7F42D61C: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F42D61Cu)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_7F42D620:
    ctx->pc = 0x7F42D620u;
    // 7F42D620: lfs     f0, -10296(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42D620u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10296);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42D624:
    ctx->pc = 0x7F42D624u;
    // 7F42D624: fdivs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42D624u)) return;
    ppc_fdivs(ctx, 1, 2, 1);

label_7F42D628:
    ctx->pc = 0x7F42D628u;
    // 7F42D628: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42D628u)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_7F42D62C:
    ctx->pc = 0x7F42D62Cu;
    // 7F42D62C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42D630:
    ctx->pc = 0x7F42D630u;
    // 7F42D630: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F42D634:
    ctx->pc = 0x7F42D634u;
    // 7F42D634: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42D638:
    ctx->pc = 0x7F42D638u;
    ctx->downcount -= 17;
    // 7F42D638: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42D63C:
    ctx->pc = 0x7F42D63Cu;
    // 7F42D63C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42D640:
    ctx->pc = 0x7F42D640u;
    // 7F42D640: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42D644:
    ctx->pc = 0x7F42D644u;
    // 7F42D644: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F42D648:
    ctx->pc = 0x7F42D648u;
    // 7F42D648: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42D64C:
    ctx->pc = 0x7F42D64Cu;
    // 7F42D64C: addi    r3, r28, 32
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(32);

label_7F42D650:
    ctx->pc = 0x7F42D650u;
    // 7F42D650: bl      0x7F023E10
    {
            ctx->lr = 0x7F42D654u;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F42D654:
    ctx->pc = 0x7F42D654u;
    ctx->downcount -= 2;
    // 7F42D654: addi    r3, r28, 432
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(432);

label_7F42D658:
    ctx->pc = 0x7F42D658u;
    // 7F42D658: bl      0x7F042AAC
    {
            ctx->lr = 0x7F42D65Cu;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F42D65C:
    ctx->pc = 0x7F42D65Cu;
    ctx->downcount -= 4;
    // 7F42D65C: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F42D660:
    ctx->pc = 0x7F42D660u;
    // 7F42D660: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F42D664:
    ctx->pc = 0x7F42D664u;
    // 7F42D664: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F42D668:
    ctx->pc = 0x7F42D668u;
    // 7F42D668: b       0x7F42D69C
    {
            goto label_7F42D69C;
    }

label_7F42D66C:
    ctx->downcount -= 4;
    // 7F42D66C: add   r3, r28, r30
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F42D670:
    ctx->pc = 0x7F42D670u;
    // 7F42D670: lwz     r0, 7408(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7408);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42D674:
    // 7F42D674: cmplwi  r0, 0x0000
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

label_7F42D678:
    // 7F42D678: bc    12, 2, 0x7F42D684
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42D684;
        }
    }

label_7F42D67C:
    ctx->downcount -= 2;
    // 7F42D67C: addi    r3, r3, 7408
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7408);

label_7F42D680:
    // 7F42D680: bl      0x7F042AAC
    {
            ctx->lr = 0x7F42D684u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F42D684:
    ctx->downcount -= 3;
    // 7F42D684: addi    r3, r31, 608
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(608);

label_7F42D688:
    // 7F42D688: add   r3, r28, r3
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F42D68C:
    // 7F42D68C: bl      0x7F023E10
    {
            ctx->lr = 0x7F42D690u;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F42D690:
    ctx->downcount -= 3;
    // 7F42D690: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F42D694:
    // 7F42D694: addi    r31, r31, 400
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(400);

label_7F42D698:
    // 7F42D698: addi    r30, r30, 44
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(44);

label_7F42D69C:
    ctx->pc = 0x7F42D69Cu;
    ctx->downcount -= 3;
    // 7F42D69C: lwz     r0, 10364(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(10364);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42D6A0:
    // 7F42D6A0: cmpw    r29, r0
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

label_7F42D6A4:
    // 7F42D6A4: bc    12, 0, 0x7F42D66C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42D66Cu;
                return;
            }
            goto label_7F42D66C;
        }
    }

label_7F42D6A8:
    ctx->pc = 0x7F42D6A8u;
    ctx->downcount -= 19;
    // 7F42D6A8: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F42D6AC:
    ctx->pc = 0x7F42D6ACu;
    // 7F42D6AC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F42D6B0:
    ctx->pc = 0x7F42D6B0u;
    // 7F42D6B0: stw     r0, -2392(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2392);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42D6B4:
    ctx->pc = 0x7F42D6B4u;
    // 7F42D6B4: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F42D6B8:
    ctx->pc = 0x7F42D6B8u;
    // 7F42D6B8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42D6BC:
    ctx->pc = 0x7F42D6BCu;
    // 7F42D6BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42D6C0:
    ctx->pc = 0x7F42D6C0u;
    // 7F42D6C0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F42D6C4:
    ctx->pc = 0x7F42D6C4u;
    // 7F42D6C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42D6C8:
    ctx->pc = 0x7F42D6C8u;
    ctx->downcount -= 23;
    // 7F42D6C8: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42D6CC:
    ctx->pc = 0x7F42D6CCu;
    // 7F42D6CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42D6D0:
    ctx->pc = 0x7F42D6D0u;
    // 7F42D6D0: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42D6D4:
    ctx->pc = 0x7F42D6D4u;
    // 7F42D6D4: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42D6D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F42D6D8:
    ctx->pc = 0x7F42D6D8u;
    // 7F42D6D8: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F42D6D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F42D6D8u);
        if (ctx->exception) return;
    }

label_7F42D6DC:
    ctx->pc = 0x7F42D6DCu;
    // 7F42D6DC: stmw     r24, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F42D6E0:
    ctx->pc = 0x7F42D6E0u;
    // 7F42D6E0: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42D6E4:
    ctx->pc = 0x7F42D6E4u;
    // 7F42D6E4: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F42D6E8:
    ctx->pc = 0x7F42D6E8u;
    // 7F42D6E8: stw     r29, 10448(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10448);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F42D6EC:
    ctx->pc = 0x7F42D6ECu;
    // 7F42D6EC: or   r24, r4, r4
    {
        ctx->gpr[24] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F42D6F0:
    ctx->pc = 0x7F42D6F0u;
    // 7F42D6F0: li      r3, 98
    ctx->gpr[3] = (u32)(s32)(98);

label_7F42D6F4:
    ctx->pc = 0x7F42D6F4u;
    // 7F42D6F4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F42D6F8:
    ctx->pc = 0x7F42D6F8u;
    // 7F42D6F8: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F42D6FCu;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F42D6FC:
    ctx->pc = 0x7F42D6FCu;
    ctx->downcount -= 4;
    // 7F42D6FC: stw     r3, 10436(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(10436);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42D700:
    ctx->pc = 0x7F42D700u;
    // 7F42D700: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_7F42D704:
    ctx->pc = 0x7F42D704u;
    // 7F42D704: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F42D708:
    ctx->pc = 0x7F42D708u;
    // 7F42D708: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F42D70Cu;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F42D70C:
    ctx->pc = 0x7F42D70Cu;
    ctx->downcount -= 8;
    // 7F42D70C: stw     r3, 10440(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(10440);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42D710:
    ctx->pc = 0x7F42D710u;
    // 7F42D710: addi    r30, r28, 32
    ctx->gpr[30] = ctx->gpr[28] + (u32)(s32)(32);

label_7F42D714:
    ctx->pc = 0x7F42D714u;
    // 7F42D714: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F42D718:
    ctx->pc = 0x7F42D718u;
    // 7F42D718: or   r31, r24, r24
    {
        ctx->gpr[31] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F42D71C:
    ctx->pc = 0x7F42D71Cu;
    // 7F42D71C: or   r4, r24, r24
    {
        ctx->gpr[4] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F42D720:
    ctx->pc = 0x7F42D720u;
    // 7F42D720: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F42D724:
    ctx->pc = 0x7F42D724u;
    // 7F42D724: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F42D728:
    ctx->pc = 0x7F42D728u;
    // 7F42D728: bl      0x7F022FB4
    {
            ctx->lr = 0x7F42D72Cu;
            ctx->pc = 0x7F022FB4u;
            return;
    }

label_7F42D72C:
    ctx->pc = 0x7F42D72Cu;
    ctx->downcount -= 2;
    // 7F42D72C: cmpwi   r3, 0
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

label_7F42D730:
    ctx->pc = 0x7F42D730u;
    // 7F42D730: bc    4, 0, 0x7F42D73C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42D73C;
        }
    }

label_7F42D734:
    ctx->pc = 0x7F42D734u;
    ctx->downcount -= 2;
    // 7F42D734: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F42D738:
    ctx->pc = 0x7F42D738u;
    // 7F42D738: b       0x7F42D9E8
    {
            goto label_7F42D9E8;
    }

label_7F42D73C:
    ctx->pc = 0x7F42D73Cu;
    ctx->downcount -= 5;
    // 7F42D73C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F42D740:
    ctx->pc = 0x7F42D740u;
    // 7F42D740: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F42D744:
    ctx->pc = 0x7F42D744u;
    // 7F42D744: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F42D748:
    ctx->pc = 0x7F42D748u;
    // 7F42D748: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_7F42D74C:
    ctx->pc = 0x7F42D74Cu;
    // 7F42D74C: bl      0x7F023F7C
    {
            ctx->lr = 0x7F42D750u;
            ctx->pc = 0x7F023F7Cu;
            return;
    }

label_7F42D750:
    ctx->pc = 0x7F42D750u;
    ctx->downcount -= 17;
    // 7F42D750: lhz     r5, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_7F42D754:
    ctx->pc = 0x7F42D754u;
    // 7F42D754: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F42D758:
    ctx->pc = 0x7F42D758u;
    // 7F42D758: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F42D75C:
    ctx->pc = 0x7F42D75Cu;
    // 7F42D75C: li      r3, 109
    ctx->gpr[3] = (u32)(s32)(109);

label_7F42D760:
    ctx->pc = 0x7F42D760u;
    // 7F42D760: rlwinm r6, r5, 0, 16, 29
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x0000FFFCu;
    }

label_7F42D764:
    ctx->pc = 0x7F42D764u;
    // 7F42D764: sth     r6, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F42D768:
    ctx->pc = 0x7F42D768u;
    // 7F42D768: addi    r5, r4, 12832
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F42D76C:
    ctx->pc = 0x7F42D76Cu;
    // 7F42D76C: stw     r0, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42D770:
    ctx->pc = 0x7F42D770u;
    // 7F42D770: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F42D774:
    ctx->pc = 0x7F42D774u;
    // 7F42D774: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42D778:
    ctx->pc = 0x7F42D778u;
    // 7F42D778: stw     r4, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F42D77C:
    ctx->pc = 0x7F42D77Cu;
    // 7F42D77C: stw     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42D780:
    ctx->pc = 0x7F42D780u;
    // 7F42D780: lwz     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F42D784:
    ctx->pc = 0x7F42D784u;
    // 7F42D784: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42D788:
    ctx->pc = 0x7F42D788u;
    // 7F42D788: stw     r4, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F42D78C:
    ctx->pc = 0x7F42D78Cu;
    // 7F42D78C: stw     r0, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42D790:
    ctx->pc = 0x7F42D790u;
    // 7F42D790: bl      0x7F3C664C
    {
            ctx->lr = 0x7F42D794u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F42D794:
    ctx->pc = 0x7F42D794u;
    ctx->downcount -= 2;
    // 7F42D794: cmplwi  r3, 0x0000
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

label_7F42D798:
    ctx->pc = 0x7F42D798u;
    // 7F42D798: bc    4, 2, 0x7F42D7A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42D7A4;
        }
    }

label_7F42D79C:
    ctx->pc = 0x7F42D79Cu;
    ctx->downcount -= 2;
    // 7F42D79C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F42D7A0:
    ctx->pc = 0x7F42D7A0u;
    // 7F42D7A0: b       0x7F42D9E8
    {
            goto label_7F42D9E8;
    }

label_7F42D7A4:
    ctx->pc = 0x7F42D7A4u;
    ctx->downcount -= 1;
    // 7F42D7A4: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F42D7A8u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F42D7A8:
    ctx->pc = 0x7F42D7A8u;
    ctx->downcount -= 2;
    // 7F42D7A8: stw     r3, 10356(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(10356);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42D7AC:
    ctx->pc = 0x7F42D7ACu;
    // 7F42D7AC: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F42D7B0u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F42D7B0:
    ctx->pc = 0x7F42D7B0u;
    ctx->downcount -= 7;
    // 7F42D7B0: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42D7B4:
    ctx->pc = 0x7F42D7B4u;
    // 7F42D7B4: stw     r3, 10360(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(10360);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42D7B8:
    ctx->pc = 0x7F42D7B8u;
    // 7F42D7B8: lfd     f31, -10320(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42D7B8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10320);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42D7BC:
    ctx->pc = 0x7F42D7BCu;
    // 7F42D7BC: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F42D7C0:
    ctx->pc = 0x7F42D7C0u;
    // 7F42D7C0: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F42D7C4:
    ctx->pc = 0x7F42D7C4u;
    // 7F42D7C4: lis     r26, 17200
    ctx->gpr[26] = ((u32)(s32)(17200) << 16);

label_7F42D7C8:
    ctx->pc = 0x7F42D7C8u;
    // 7F42D7C8: b       0x7F42D800
    {
            goto label_7F42D800;
    }

label_7F42D7CC:
    ctx->downcount -= 1;
    // 7F42D7CC: bl      0x7F3C674C
    {
            ctx->lr = 0x7F42D7D0u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F42D7D0:
    ctx->downcount -= 12;
    // 7F42D7D0: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F42D7D4:
    // 7F42D7D4: addi    r0, r27, 10368
    ctx->gpr[0] = ctx->gpr[27] + (u32)(s32)(10368);

label_7F42D7D8:
    ctx->pc = 0x7F42D7D8u;
    // 7F42D7D8: stw     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42D7DC:
    // 7F42D7DC: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_7F42D7E0:
    // 7F42D7E0: addi    r27, r27, 4
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(4);

label_7F42D7E4:
    ctx->pc = 0x7F42D7E4u;
    // 7F42D7E4: stw     r26, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F42D7E8:
    ctx->pc = 0x7F42D7E8u;
    // 7F42D7E8: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42D7E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42D7EC:
    ctx->pc = 0x7F42D7ECu;
    // 7F42D7EC: fsubs   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F42D7ECu)) return;
    ppc_fsubs(ctx, 0, 0, 31);

label_7F42D7F0:
    ctx->pc = 0x7F42D7F0u;
    // 7F42D7F0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42D7F0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F42D7F4:
    ctx->pc = 0x7F42D7F4u;
    // 7F42D7F4: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42D7F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42D7F8:
    ctx->pc = 0x7F42D7F8u;
    // 7F42D7F8: lwz     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42D7FC:
    ctx->pc = 0x7F42D7FCu;
    // 7F42D7FC: stwx    r3, r28, r0
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42D800:
    ctx->downcount -= 1;
    // 7F42D800: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F42D804u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F42D804:
    ctx->downcount -= 2;
    // 7F42D804: cmplwi  r3, 0x0000
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

label_7F42D808:
    // 7F42D808: bc    4, 2, 0x7F42D7CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42D7CCu;
                return;
            }
            goto label_7F42D7CC;
        }
    }

label_7F42D80C:
    ctx->pc = 0x7F42D80Cu;
    ctx->downcount -= 4;
    // 7F42D80C: stw     r25, 10364(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(10364);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F42D810:
    ctx->pc = 0x7F42D810u;
    // 7F42D810: lwz     r0, 10436(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(10436);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42D814:
    ctx->pc = 0x7F42D814u;
    // 7F42D814: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42D818:
    ctx->pc = 0x7F42D818u;
    // 7F42D818: bc    4, 2, 0x7F42D8A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42D8A8;
        }
    }

label_7F42D81C:
    ctx->pc = 0x7F42D81Cu;
    ctx->downcount -= 5;
    // 7F42D81C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F42D820:
    ctx->pc = 0x7F42D820u;
    // 7F42D820: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F42D824:
    ctx->pc = 0x7F42D824u;
    // 7F42D824: addi    r26, r3, 12832
    ctx->gpr[26] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F42D828:
    ctx->pc = 0x7F42D828u;
    // 7F42D828: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F42D82C:
    ctx->pc = 0x7F42D82Cu;
    // 7F42D82C: b       0x7F42D89C
    {
            goto label_7F42D89C;
    }

label_7F42D830:
    ctx->downcount -= 7;
    // 7F42D830: addi    r24, r27, 608
    ctx->gpr[24] = ctx->gpr[27] + (u32)(s32)(608);

label_7F42D834:
    // 7F42D834: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F42D838:
    // 7F42D838: add   r24, r28, r24
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[24] = res;
    }

label_7F42D83C:
    // 7F42D83C: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F42D840:
    // 7F42D840: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F42D844:
    // 7F42D844: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F42D848:
    // 7F42D848: bl      0x7F022FB4
    {
            ctx->lr = 0x7F42D84Cu;
            ctx->pc = 0x7F022FB4u;
            return;
    }

label_7F42D84C:
    ctx->downcount -= 5;
    // 7F42D84C: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F42D850:
    // 7F42D850: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F42D854:
    // 7F42D854: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F42D858:
    // 7F42D858: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_7F42D85C:
    // 7F42D85C: bl      0x7F023F7C
    {
            ctx->lr = 0x7F42D860u;
            ctx->pc = 0x7F023F7Cu;
            return;
    }

label_7F42D860:
    ctx->pc = 0x7F42D860u;
    ctx->downcount -= 15;
    // 7F42D860: lhz     r3, 68(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_7F42D864:
    // 7F42D864: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F42D868:
    // 7F42D868: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_7F42D86C:
    // 7F42D86C: addi    r27, r27, 400
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(400);

label_7F42D870:
    // 7F42D870: ori     r3, r3, 0x0403
    ctx->gpr[3] = ctx->gpr[3] | 0x0403u;

label_7F42D874:
    ctx->pc = 0x7F42D874u;
    // 7F42D874: sth     r3, 68(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F42D878:
    ctx->pc = 0x7F42D878u;
    // 7F42D878: stw     r0, 48(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42D87C:
    ctx->pc = 0x7F42D87Cu;
    // 7F42D87C: lwz     r3, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42D880:
    ctx->pc = 0x7F42D880u;
    // 7F42D880: lwz     r0, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42D884:
    ctx->pc = 0x7F42D884u;
    // 7F42D884: stw     r3, 16(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42D888:
    ctx->pc = 0x7F42D888u;
    // 7F42D888: stw     r0, 20(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42D88C:
    ctx->pc = 0x7F42D88Cu;
    // 7F42D88C: lwz     r3, 8(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42D890:
    ctx->pc = 0x7F42D890u;
    // 7F42D890: lwz     r0, 12(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42D894:
    ctx->pc = 0x7F42D894u;
    // 7F42D894: stw     r3, 24(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42D898:
    ctx->pc = 0x7F42D898u;
    // 7F42D898: stw     r0, 28(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42D89C:
    ctx->pc = 0x7F42D89Cu;
    ctx->downcount -= 3;
    // 7F42D89C: lwz     r0, 10364(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(10364);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42D8A0:
    // 7F42D8A0: cmpw    r25, r0
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

label_7F42D8A4:
    // 7F42D8A4: bc    12, 0, 0x7F42D830
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42D830u;
                return;
            }
            goto label_7F42D830;
        }
    }

label_7F42D8A8:
    ctx->pc = 0x7F42D8A8u;
    ctx->downcount -= 4;
    // 7F42D8A8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F42D8AC:
    ctx->pc = 0x7F42D8ACu;
    // 7F42D8AC: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F42D8B0:
    ctx->pc = 0x7F42D8B0u;
    // 7F42D8B0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42D8B4:
    ctx->pc = 0x7F42D8B4u;
    // 7F42D8B4: bl      0x7F3C664C
    {
            ctx->lr = 0x7F42D8B8u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F42D8B8:
    ctx->pc = 0x7F42D8B8u;
    ctx->downcount -= 2;
    // 7F42D8B8: cmplwi  r3, 0x0000
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

label_7F42D8BC:
    ctx->pc = 0x7F42D8BCu;
    // 7F42D8BC: bc    12, 2, 0x7F42D918
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42D918;
        }
    }

label_7F42D8C0:
    ctx->pc = 0x7F42D8C0u;
    ctx->downcount -= 2;
    // 7F42D8C0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F42D8C4:
    ctx->pc = 0x7F42D8C4u;
    // 7F42D8C4: bl      0x7F3C6A78
    {
            ctx->lr = 0x7F42D8C8u;
            ctx->pc = 0x7F3C6A78u;
            return;
    }

label_7F42D8C8:
    ctx->pc = 0x7F42D8C8u;
    ctx->downcount -= 3;
    // 7F42D8C8: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F42D8CC:
    ctx->pc = 0x7F42D8CCu;
    // 7F42D8CC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F42D8D0:
    ctx->pc = 0x7F42D8D0u;
    // 7F42D8D0: bl      0x7F42DA04
    {
            ctx->lr = 0x7F42D8D4u;
            goto label_7F42DA04;
    }

label_7F42D8D4:
    ctx->pc = 0x7F42D8D4u;
    ctx->downcount -= 3;
    // 7F42D8D4: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F42D8D8:
    ctx->pc = 0x7F42D8D8u;
    // 7F42D8D8: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F42D8DC:
    ctx->pc = 0x7F42D8DCu;
    // 7F42D8DC: b       0x7F42D90C
    {
            goto label_7F42D90C;
    }

label_7F42D8E0:
    ctx->downcount -= 2;
    // 7F42D8E0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F42D8E4:
    // 7F42D8E4: bl      0x7F3C6A78
    {
            ctx->lr = 0x7F42D8E8u;
            ctx->pc = 0x7F3C6A78u;
            return;
    }

label_7F42D8E8:
    ctx->pc = 0x7F42D8E8u;
    ctx->downcount -= 3;
    // 7F42D8E8: lwz     r0, 10436(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(10436);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42D8EC:
    // 7F42D8EC: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42D8F0:
    // 7F42D8F0: bc    4, 2, 0x7F42D904
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42D904;
        }
    }

label_7F42D8F4:
    ctx->downcount -= 4;
    // 7F42D8F4: addi    r4, r29, 608
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(608);

label_7F42D8F8:
    // 7F42D8F8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F42D8FC:
    // 7F42D8FC: add   r4, r28, r4
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F42D900:
    // 7F42D900: bl      0x7F42DA04
    {
            ctx->lr = 0x7F42D904u;
            goto label_7F42DA04;
    }

label_7F42D904:
    ctx->downcount -= 2;
    // 7F42D904: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_7F42D908:
    // 7F42D908: addi    r29, r29, 400
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(400);

label_7F42D90C:
    ctx->pc = 0x7F42D90Cu;
    ctx->downcount -= 3;
    // 7F42D90C: lwz     r0, 10364(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(10364);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42D910:
    // 7F42D910: cmpw    r26, r0
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

label_7F42D914:
    // 7F42D914: bc    12, 0, 0x7F42D8E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42D8E0u;
                return;
            }
            goto label_7F42D8E0;
        }
    }

label_7F42D918:
    ctx->pc = 0x7F42D918u;
    ctx->downcount -= 2;
    // 7F42D918: li      r3, 101
    ctx->gpr[3] = (u32)(s32)(101);

label_7F42D91C:
    ctx->pc = 0x7F42D91Cu;
    // 7F42D91C: bl      0x7F3C664C
    {
            ctx->lr = 0x7F42D920u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F42D920:
    ctx->pc = 0x7F42D920u;
    ctx->downcount -= 2;
    // 7F42D920: cmplwi  r3, 0x0000
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

label_7F42D924:
    ctx->pc = 0x7F42D924u;
    // 7F42D924: bc    12, 2, 0x7F42D93C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42D93C;
        }
    }

label_7F42D928:
    ctx->pc = 0x7F42D928u;
    ctx->downcount -= 2;
    // 7F42D928: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F42D92C:
    ctx->pc = 0x7F42D92Cu;
    // 7F42D92C: bl      0x7F3C6A78
    {
            ctx->lr = 0x7F42D930u;
            ctx->pc = 0x7F3C6A78u;
            return;
    }

label_7F42D930:
    ctx->pc = 0x7F42D930u;
    ctx->downcount -= 3;
    // 7F42D930: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F42D934:
    ctx->pc = 0x7F42D934u;
    // 7F42D934: addi    r4, r28, 10332
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(10332);

label_7F42D938:
    ctx->pc = 0x7F42D938u;
    // 7F42D938: bl      0x7F42DA04
    {
            ctx->lr = 0x7F42D93Cu;
            goto label_7F42DA04;
    }

label_7F42D93C:
    ctx->pc = 0x7F42D93Cu;
    ctx->downcount -= 4;
    // 7F42D93C: lwz     r0, 10436(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(10436);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42D940:
    ctx->pc = 0x7F42D940u;
    // 7F42D940: addi    r25, r28, 432
    ctx->gpr[25] = ctx->gpr[28] + (u32)(s32)(432);

label_7F42D944:
    ctx->pc = 0x7F42D944u;
    // 7F42D944: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42D948:
    ctx->pc = 0x7F42D948u;
    // 7F42D948: bc    4, 2, 0x7F42D960
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42D960;
        }
    }

label_7F42D94C:
    ctx->pc = 0x7F42D94Cu;
    ctx->downcount -= 4;
    // 7F42D94C: lwz     r4, 10356(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(10356);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F42D950:
    ctx->pc = 0x7F42D950u;
    // 7F42D950: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F42D954:
    ctx->pc = 0x7F42D954u;
    // 7F42D954: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F42D958:
    ctx->pc = 0x7F42D958u;
    // 7F42D958: bl      0x7F04272C
    {
            ctx->lr = 0x7F42D95Cu;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F42D95C:
    ctx->pc = 0x7F42D95Cu;
    ctx->downcount -= 1;
    // 7F42D95C: b       0x7F42D970
    {
            goto label_7F42D970;
    }

label_7F42D960:
    ctx->pc = 0x7F42D960u;
    ctx->downcount -= 4;
    // 7F42D960: lwz     r4, 10360(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(10360);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F42D964:
    ctx->pc = 0x7F42D964u;
    // 7F42D964: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F42D968:
    ctx->pc = 0x7F42D968u;
    // 7F42D968: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F42D96C:
    ctx->pc = 0x7F42D96Cu;
    // 7F42D96C: bl      0x7F04272C
    {
            ctx->lr = 0x7F42D970u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F42D970:
    ctx->pc = 0x7F42D970u;
    ctx->downcount -= 3;
    // 7F42D970: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F42D974:
    ctx->pc = 0x7F42D974u;
    // 7F42D974: addi    r4, r28, 476
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(476);

label_7F42D978:
    ctx->pc = 0x7F42D978u;
    // 7F42D978: bl      0x7F042B20
    {
            ctx->lr = 0x7F42D97Cu;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F42D97C:
    ctx->pc = 0x7F42D97Cu;
    ctx->downcount -= 3;
    // 7F42D97C: lwz     r0, 10436(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(10436);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42D980:
    ctx->pc = 0x7F42D980u;
    // 7F42D980: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42D984:
    ctx->pc = 0x7F42D984u;
    // 7F42D984: bc    4, 2, 0x7F42D9B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42D9B4;
        }
    }

label_7F42D988:
    ctx->pc = 0x7F42D988u;
    ctx->downcount -= 2;
    // 7F42D988: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F42D98C:
    ctx->pc = 0x7F42D98Cu;
    // 7F42D98C: bl      0x7F01C018
    {
            ctx->lr = 0x7F42D990u;
            ctx->pc = 0x7F01C018u;
            return;
    }

label_7F42D990:
    ctx->pc = 0x7F42D990u;
    ctx->downcount -= 9;
    // 7F42D990: lis     r5, 32588
    ctx->gpr[5] = ((u32)(s32)(32588) << 16);

label_7F42D994:
    ctx->pc = 0x7F42D994u;
    // 7F42D994: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F42D998:
    ctx->pc = 0x7F42D998u;
    // 7F42D998: lwz     r0, -27956(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-27956);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42D99C:
    ctx->pc = 0x7F42D99Cu;
    // 7F42D99C: addi    r4, r4, -22728
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-22728);

label_7F42D9A0:
    ctx->pc = 0x7F42D9A0u;
    // 7F42D9A0: rlwinm r5, r0, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F42D9A4:
    ctx->pc = 0x7F42D9A4u;
    // 7F42D9A4: lwzx    r0, r4, r5
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[5];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42D9A8:
    ctx->pc = 0x7F42D9A8u;
    // 7F42D9A8: or   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[3];
    }

label_7F42D9AC:
    ctx->pc = 0x7F42D9ACu;
    // 7F42D9AC: stwx    r0, r4, r5
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42D9B0:
    ctx->pc = 0x7F42D9B0u;
    // 7F42D9B0: b       0x7F42D9E4
    {
            goto label_7F42D9E4;
    }

label_7F42D9B4:
    ctx->pc = 0x7F42D9B4u;
    ctx->downcount -= 2;
    // 7F42D9B4: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F42D9B8:
    ctx->pc = 0x7F42D9B8u;
    // 7F42D9B8: bl      0x7F01C018
    {
            ctx->lr = 0x7F42D9BCu;
            ctx->pc = 0x7F01C018u;
            return;
    }

label_7F42D9BC:
    ctx->pc = 0x7F42D9BCu;
    ctx->downcount -= 10;
    // 7F42D9BC: lis     r5, 32588
    ctx->gpr[5] = ((u32)(s32)(32588) << 16);

label_7F42D9C0:
    ctx->pc = 0x7F42D9C0u;
    // 7F42D9C0: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F42D9C4:
    ctx->pc = 0x7F42D9C4u;
    // 7F42D9C4: lwz     r6, -27956(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-27956);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F42D9C8:
    ctx->pc = 0x7F42D9C8u;
    // 7F42D9C8: addi    r5, r4, -22728
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-22728);

label_7F42D9CC:
    ctx->pc = 0x7F42D9CCu;
    // 7F42D9CC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F42D9D0:
    ctx->pc = 0x7F42D9D0u;
    // 7F42D9D0: rlwinm r6, r6, 2, 0, 29
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 2u) & 0xFFFFFFFCu;
    }

label_7F42D9D4:
    ctx->pc = 0x7F42D9D4u;
    // 7F42D9D4: lwzx    r4, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F42D9D8:
    ctx->pc = 0x7F42D9D8u;
    // 7F42D9D8: or   r3, r4, r3
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[3];
    }

label_7F42D9DC:
    ctx->pc = 0x7F42D9DCu;
    // 7F42D9DC: stwx    r3, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42D9E0:
    ctx->pc = 0x7F42D9E0u;
    // 7F42D9E0: stw     r0, 10364(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(10364);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42D9E4:
    ctx->pc = 0x7F42D9E4u;
    ctx->downcount -= 1;
    // 7F42D9E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F42D9E8:
    ctx->pc = 0x7F42D9E8u;
    ctx->downcount -= 18;
    // 7F42D9E8: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F42D9E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F42D9E8u);
        if (ctx->exception) return;
    }

label_7F42D9EC:
    ctx->pc = 0x7F42D9ECu;
    // 7F42D9EC: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42D9ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42D9F0:
    ctx->pc = 0x7F42D9F0u;
    // 7F42D9F0: lmw     r24, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F42D9F4:
    ctx->pc = 0x7F42D9F4u;
    // 7F42D9F4: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42D9F8:
    ctx->pc = 0x7F42D9F8u;
    // 7F42D9F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42D9FC:
    ctx->pc = 0x7F42D9FCu;
    // 7F42D9FC: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F42DA00:
    ctx->pc = 0x7F42DA00u;
    // 7F42DA00: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42DA04:
    ctx->pc = 0x7F42DA04u;
    ctx->downcount -= 17;
    // 7F42DA04: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42DA08:
    ctx->pc = 0x7F42DA08u;
    // 7F42DA08: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42DA0C:
    ctx->pc = 0x7F42DA0Cu;
    // 7F42DA0C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42DA10:
    ctx->pc = 0x7F42DA10u;
    // 7F42DA10: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F42DA14:
    ctx->pc = 0x7F42DA14u;
    // 7F42DA14: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42DA18:
    ctx->pc = 0x7F42DA18u;
    // 7F42DA18: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F42DA1C:
    ctx->pc = 0x7F42DA1Cu;
    // 7F42DA1C: bl      0x7F42DA58
    {
            ctx->lr = 0x7F42DA20u;
            goto label_7F42DA58;
    }

label_7F42DA20:
    ctx->pc = 0x7F42DA20u;
    ctx->downcount -= 3;
    // 7F42DA20: addi    r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(4);

label_7F42DA24:
    ctx->pc = 0x7F42DA24u;
    // 7F42DA24: addi    r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(4);

label_7F42DA28:
    ctx->pc = 0x7F42DA28u;
    // 7F42DA28: bl      0x7F42DA58
    {
            ctx->lr = 0x7F42DA2Cu;
            goto label_7F42DA58;
    }

label_7F42DA2C:
    ctx->pc = 0x7F42DA2Cu;
    ctx->downcount -= 3;
    // 7F42DA2C: addi    r3, r30, 8
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(8);

label_7F42DA30:
    ctx->pc = 0x7F42DA30u;
    // 7F42DA30: addi    r4, r31, 8
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(8);

label_7F42DA34:
    ctx->pc = 0x7F42DA34u;
    // 7F42DA34: bl      0x7F42DA58
    {
            ctx->lr = 0x7F42DA38u;
            goto label_7F42DA58;
    }

label_7F42DA38:
    ctx->pc = 0x7F42DA38u;
    ctx->downcount -= 3;
    // 7F42DA38: addi    r3, r30, 12
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(12);

label_7F42DA3C:
    ctx->pc = 0x7F42DA3Cu;
    // 7F42DA3C: addi    r4, r31, 12
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(12);

label_7F42DA40:
    ctx->pc = 0x7F42DA40u;
    // 7F42DA40: bl      0x7F42DA58
    {
            ctx->lr = 0x7F42DA44u;
            goto label_7F42DA58;
    }

label_7F42DA44:
    ctx->pc = 0x7F42DA44u;
    ctx->downcount -= 16;
    // 7F42DA44: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F42DA48:
    ctx->pc = 0x7F42DA48u;
    // 7F42DA48: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42DA4C:
    ctx->pc = 0x7F42DA4Cu;
    // 7F42DA4C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42DA50:
    ctx->pc = 0x7F42DA50u;
    // 7F42DA50: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F42DA54:
    ctx->pc = 0x7F42DA54u;
    // 7F42DA54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42DA58:
    ctx->pc = 0x7F42DA58u;
    ctx->downcount -= 6;
    // 7F42DA58: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42DA5C:
    ctx->pc = 0x7F42DA5Cu;
    // 7F42DA5C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42DA60:
    ctx->pc = 0x7F42DA60u;
    // 7F42DA60: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42DA64:
    ctx->pc = 0x7F42DA64u;
    // 7F42DA64: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F42DA68:
    ctx->pc = 0x7F42DA68u;
    // 7F42DA68: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F42DA6C:
    ctx->pc = 0x7F42DA6Cu;
    // 7F42DA6C: bl      0x7F42DA88
    {
            ctx->lr = 0x7F42DA70u;
            goto label_7F42DA88;
    }

label_7F42DA70:
    ctx->pc = 0x7F42DA70u;
    ctx->downcount -= 7;
    // 7F42DA70: stfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F42DA70u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F42DA74:
    ctx->pc = 0x7F42DA74u;
    // 7F42DA74: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42DA78:
    ctx->pc = 0x7F42DA78u;
    // 7F42DA78: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F42DA7C:
    ctx->pc = 0x7F42DA7Cu;
    // 7F42DA7C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42DA80:
    ctx->pc = 0x7F42DA80u;
    // 7F42DA80: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F42DA84:
    ctx->pc = 0x7F42DA84u;
    // 7F42DA84: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42DA88:
    ctx->pc = 0x7F42DA88u;
    ctx->downcount -= 4;
    // 7F42DA88: psq_l   f0, 2(r3), 1, 3
    if (!ppc_fp_available_inline(ctx, 0x7F42DA88u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ppc_psq_load_inline(ctx, 0u, ea, true, 3u, false, 0x7F42DA88u);
        if (ctx->exception) return;
    }

label_7F42DA8C:
    ctx->pc = 0x7F42DA8Cu;
    // 7F42DA8C: psq_l   f1, 0(r3), 1, 6
    if (!ppc_fp_available_inline(ctx, 0x7F42DA8Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 1u, ea, true, 6u, false, 0x7F42DA8Cu);
        if (ctx->exception) return;
    }

label_7F42DA90:
    ctx->pc = 0x7F42DA90u;
    // 7F42DA90: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42DA90u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_7F42DA94:
    ctx->pc = 0x7F42DA94u;
    // 7F42DA94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42DA98:
    ctx->pc = 0x7F42DA98u;
    ctx->downcount -= 21;
    // 7F42DA98: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42DA9C:
    ctx->pc = 0x7F42DA9Cu;
    // 7F42DA9C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42DAA0:
    ctx->pc = 0x7F42DAA0u;
    // 7F42DAA0: li      r5, 10464
    ctx->gpr[5] = (u32)(s32)(10464);

label_7F42DAA4:
    ctx->pc = 0x7F42DAA4u;
    // 7F42DAA4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F42DAA8:
    ctx->pc = 0x7F42DAA8u;
    // 7F42DAA8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42DAAC:
    ctx->pc = 0x7F42DAACu;
    // 7F42DAAC: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F42DAB0:
    ctx->pc = 0x7F42DAB0u;
    // 7F42DAB0: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42DAB4:
    ctx->pc = 0x7F42DAB4u;
    // 7F42DAB4: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F42DAB8:
    ctx->pc = 0x7F42DAB8u;
    // 7F42DAB8: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F42DABC:
    ctx->pc = 0x7F42DABCu;
    // 7F42DABC: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F42DAC0:
    ctx->pc = 0x7F42DAC0u;
    // 7F42DAC0: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F42DAC4u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F42DAC4:
    ctx->pc = 0x7F42DAC4u;
    ctx->downcount -= 2;
    // 7F42DAC4: or.   r31, r3, r3
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

label_7F42DAC8:
    ctx->pc = 0x7F42DAC8u;
    // 7F42DAC8: bc    12, 2, 0x7F42DB08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42DB08;
        }
    }

label_7F42DACC:
    ctx->pc = 0x7F42DACCu;
    ctx->downcount -= 5;
    // 7F42DACC: lis     r4, 32579
    ctx->gpr[4] = ((u32)(s32)(32579) << 16);

label_7F42DAD0:
    ctx->pc = 0x7F42DAD0u;
    // 7F42DAD0: lis     r5, 32579
    ctx->gpr[5] = ((u32)(s32)(32579) << 16);

label_7F42DAD4:
    ctx->pc = 0x7F42DAD4u;
    // 7F42DAD4: addi    r4, r4, -12736
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12736);

label_7F42DAD8:
    ctx->pc = 0x7F42DAD8u;
    // 7F42DAD8: addi    r5, r5, -10696
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-10696);

label_7F42DADC:
    ctx->pc = 0x7F42DADCu;
    // 7F42DADC: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F42DAE0u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F42DAE0:
    ctx->pc = 0x7F42DAE0u;
    ctx->downcount -= 4;
    // 7F42DAE0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F42DAE4:
    ctx->pc = 0x7F42DAE4u;
    // 7F42DAE4: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F42DAE8:
    ctx->pc = 0x7F42DAE8u;
    // 7F42DAE8: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F42DAEC:
    ctx->pc = 0x7F42DAECu;
    // 7F42DAEC: bl      0x7F42D6C8
    {
            ctx->lr = 0x7F42DAF0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42D6C8u;
                return;
            }
            goto label_7F42D6C8;
    }

label_7F42DAF0:
    ctx->pc = 0x7F42DAF0u;
    ctx->downcount -= 2;
    // 7F42DAF0: cmpwi   r3, 0
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

label_7F42DAF4:
    ctx->pc = 0x7F42DAF4u;
    // 7F42DAF4: bc    4, 0, 0x7F42DB08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42DB08;
        }
    }

label_7F42DAF8:
    ctx->pc = 0x7F42DAF8u;
    ctx->downcount -= 2;
    // 7F42DAF8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F42DAFC:
    ctx->pc = 0x7F42DAFCu;
    // 7F42DAFC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F42DB00u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F42DB00:
    ctx->pc = 0x7F42DB00u;
    ctx->downcount -= 2;
    // 7F42DB00: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F42DB04:
    ctx->pc = 0x7F42DB04u;
    // 7F42DB04: b       0x7F42DB14
    {
            goto label_7F42DB14;
    }

label_7F42DB08:
    ctx->pc = 0x7F42DB08u;
    ctx->downcount -= 3;
    // 7F42DB08: lis     r4, 32592
    ctx->gpr[4] = ((u32)(s32)(32592) << 16);

label_7F42DB0C:
    ctx->pc = 0x7F42DB0Cu;
    // 7F42DB0C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F42DB10:
    ctx->pc = 0x7F42DB10u;
    // 7F42DB10: stw     r31, -2392(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2392);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F42DB14:
    ctx->pc = 0x7F42DB14u;
    ctx->downcount -= 16;
    // 7F42DB14: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F42DB18:
    ctx->pc = 0x7F42DB18u;
    // 7F42DB18: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42DB1C:
    ctx->pc = 0x7F42DB1Cu;
    // 7F42DB1C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42DB20:
    ctx->pc = 0x7F42DB20u;
    // 7F42DB20: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F42DB24:
    ctx->pc = 0x7F42DB24u;
    // 7F42DB24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42DB28:
    ctx->pc = 0x7F42DB28u;
    ctx->downcount -= 7;
    // 7F42DB28: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42DB2C:
    ctx->pc = 0x7F42DB2Cu;
    // 7F42DB2C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42DB30:
    ctx->pc = 0x7F42DB30u;
    // 7F42DB30: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F42DB34:
    ctx->pc = 0x7F42DB34u;
    // 7F42DB34: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42DB38:
    ctx->pc = 0x7F42DB38u;
    // 7F42DB38: addi    r3, r3, -2392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2392);

label_7F42DB3C:
    ctx->pc = 0x7F42DB3Cu;
    // 7F42DB3C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42DB40:
    ctx->pc = 0x7F42DB40u;
    // 7F42DB40: bl      0x7F42CDBC
    {
            ctx->lr = 0x7F42DB44u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42CDBCu;
                return;
            }
            goto label_7F42CDBC;
    }

label_7F42DB44:
    ctx->pc = 0x7F42DB44u;
    ctx->downcount -= 5;
    // 7F42DB44: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42DB48:
    ctx->pc = 0x7F42DB48u;
    // 7F42DB48: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42DB4C:
    ctx->pc = 0x7F42DB4Cu;
    // 7F42DB4C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F42DB50:
    ctx->pc = 0x7F42DB50u;
    // 7F42DB50: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42DB54:
    ctx->pc = 0x7F42DB54u;
    ctx->downcount -= 10;
    // 7F42DB54: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42DB58:
    ctx->pc = 0x7F42DB58u;
    // 7F42DB58: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42DB5C:
    ctx->pc = 0x7F42DB5Cu;
    // 7F42DB5C: lis     r4, 32592
    ctx->gpr[4] = ((u32)(s32)(32592) << 16);

label_7F42DB60:
    ctx->pc = 0x7F42DB60u;
    // 7F42DB60: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_7F42DB64:
    ctx->pc = 0x7F42DB64u;
    // 7F42DB64: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42DB68:
    ctx->pc = 0x7F42DB68u;
    // 7F42DB68: addi    r3, r3, 848
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(848);

label_7F42DB6C:
    ctx->pc = 0x7F42DB6Cu;
    // 7F42DB6C: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F42DB70:
    ctx->pc = 0x7F42DB70u;
    // 7F42DB70: addi    r31, r4, -21852
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(-21852);

label_7F42DB74:
    ctx->pc = 0x7F42DB74u;
    // 7F42DB74: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F42DB78:
    ctx->pc = 0x7F42DB78u;
    // 7F42DB78: bl      0x7F3B3648
    {
            ctx->lr = 0x7F42DB7Cu;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F42DB7C:
    ctx->pc = 0x7F42DB7Cu;
    ctx->downcount -= 11;
    // 7F42DB7C: lfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F42DB7Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42DB80:
    ctx->pc = 0x7F42DB80u;
    // 7F42DB80: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42DB84:
    ctx->pc = 0x7F42DB84u;
    // 7F42DB84: lfd     f1, -10200(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42DB84u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10200);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42DB88:
    ctx->pc = 0x7F42DB88u;
    // 7F42DB88: li      r0, 7
    ctx->gpr[0] = (u32)(s32)(7);

label_7F42DB8C:
    ctx->pc = 0x7F42DB8Cu;
    // 7F42DB8C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42DB8Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F42DB90:
    ctx->pc = 0x7F42DB90u;
    // 7F42DB90: addi    r4, r31, 16
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(16);

label_7F42DB94:
    ctx->pc = 0x7F42DB94u;
    // 7F42DB94: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_7F42DB98:
    ctx->pc = 0x7F42DB98u;
    // 7F42DB98: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42DB98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42DB9C:
    ctx->pc = 0x7F42DB9Cu;
    // 7F42DB9C: lwz     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F42DBA0:
    ctx->pc = 0x7F42DBA0u;
    // 7F42DBA0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F42DBA4:
    ctx->downcount -= 8;
    // 7F42DBA4: xoris   r0, r5, 0x8000
    ctx->gpr[0] = ctx->gpr[5] ^ (0x8000u << 16);

label_7F42DBA8:
    ctx->pc = 0x7F42DBA8u;
    // 7F42DBA8: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42DBAC:
    ctx->pc = 0x7F42DBACu;
    // 7F42DBAC: lfs     f2, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42DBACu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F42DBB0:
    ctx->pc = 0x7F42DBB0u;
    // 7F42DBB0: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42DBB4:
    ctx->pc = 0x7F42DBB4u;
    // 7F42DBB4: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42DBB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42DBB8:
    ctx->pc = 0x7F42DBB8u;
    // 7F42DBB8: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42DBB8u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F42DBBC:
    ctx->pc = 0x7F42DBBCu;
    // 7F42DBBC: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42DBBCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F42DBC0:
    // 7F42DBC0: bc    4, 0, 0x7F42DBD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42DBD0;
        }
    }

label_7F42DBC4:
    ctx->pc = 0x7F42DBC4u;
    ctx->downcount -= 3;
    // 7F42DBC4: fctiwz    f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F42DBC4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[2], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F42DBC8:
    ctx->pc = 0x7F42DBC8u;
    // 7F42DBC8: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42DBC8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42DBCC:
    ctx->pc = 0x7F42DBCCu;
    // 7F42DBCC: lwz     r5, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F42DBD0:
    ctx->downcount -= 2;
    // 7F42DBD0: addi    r4, r4, 16
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16);

label_7F42DBD4:
    // 7F42DBD4: bc    16, 0, 0x7F42DBA4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42DBA4u;
                return;
            }
            goto label_7F42DBA4;
        }
    }

label_7F42DBD8:
    ctx->pc = 0x7F42DBD8u;
    ctx->downcount -= 7;
    // 7F42DBD8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42DBDC:
    ctx->pc = 0x7F42DBDCu;
    // 7F42DBDC: subfic  r3, r5, 750
    {
        u64 res = (u64)(u32)(s32)(750) + (u64)(~ctx->gpr[5]) + 1u;
        ctx->gpr[3] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F42DBE0:
    ctx->pc = 0x7F42DBE0u;
    // 7F42DBE0: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F42DBE4:
    ctx->pc = 0x7F42DBE4u;
    // 7F42DBE4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42DBE8:
    ctx->pc = 0x7F42DBE8u;
    // 7F42DBE8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F42DBEC:
    ctx->pc = 0x7F42DBECu;
    // 7F42DBEC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42DBF0:
    ctx->pc = 0x7F42DBF0u;
    ctx->downcount -= 27;
    // 7F42DBF0: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42DBF4:
    ctx->pc = 0x7F42DBF4u;
    // 7F42DBF4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42DBF8:
    ctx->pc = 0x7F42DBF8u;
    // 7F42DBF8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F42DBFC:
    ctx->pc = 0x7F42DBFCu;
    // 7F42DBFC: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42DC00:
    ctx->pc = 0x7F42DC00u;
    // 7F42DC00: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F42DC04:
    ctx->pc = 0x7F42DC04u;
    // 7F42DC04: stmw     r29, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F42DC08:
    ctx->pc = 0x7F42DC08u;
    // 7F42DC08: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F42DC0C:
    ctx->pc = 0x7F42DC0Cu;
    // 7F42DC0C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42DC10:
    ctx->pc = 0x7F42DC10u;
    // 7F42DC10: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F42DC14:
    ctx->pc = 0x7F42DC14u;
    // 7F42DC14: lwz     r7, 156(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(156);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F42DC18:
    ctx->pc = 0x7F42DC18u;
    // 7F42DC18: lwz     r4, 152(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F42DC1C:
    ctx->pc = 0x7F42DC1Cu;
    // 7F42DC1C: and   r3, r7, r0
    {
        ctx->gpr[3] = ctx->gpr[7] & ctx->gpr[0];
    }

label_7F42DC20:
    ctx->pc = 0x7F42DC20u;
    // 7F42DC20: and   r0, r4, r6
    {
        ctx->gpr[0] = ctx->gpr[4] & ctx->gpr[6];
    }

label_7F42DC24:
    ctx->pc = 0x7F42DC24u;
    // 7F42DC24: xor   r3, r3, r6
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[6];
    }

label_7F42DC28:
    ctx->pc = 0x7F42DC28u;
    // 7F42DC28: xor   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[6];
    }

label_7F42DC2C:
    ctx->pc = 0x7F42DC2Cu;
    // 7F42DC2C: or.   r0, r3, r0
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

label_7F42DC30:
    ctx->pc = 0x7F42DC30u;
    // 7F42DC30: bc    12, 2, 0x7F42DD54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42DD54;
        }
    }

label_7F42DC34:
    ctx->pc = 0x7F42DC34u;
    ctx->downcount -= 3;
    // 7F42DC34: lwz     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42DC38:
    ctx->pc = 0x7F42DC38u;
    // 7F42DC38: rlwinm. r0, r0, 0, 31, 31
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

label_7F42DC3C:
    ctx->pc = 0x7F42DC3Cu;
    // 7F42DC3C: bc    12, 2, 0x7F42DD54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42DD54;
        }
    }

label_7F42DC40:
    ctx->pc = 0x7F42DC40u;
    ctx->downcount -= 11;
    // 7F42DC40: lis     r3, 5
    ctx->gpr[3] = ((u32)(s32)(5) << 16);

label_7F42DC44:
    ctx->pc = 0x7F42DC44u;
    // 7F42DC44: lwz     r4, 144(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(144);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F42DC48:
    ctx->pc = 0x7F42DC48u;
    // 7F42DC48: lis     r0, 8
    ctx->gpr[0] = ((u32)(s32)(8) << 16);

label_7F42DC4C:
    ctx->pc = 0x7F42DC4Cu;
    // 7F42DC4C: lwz     r5, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F42DC50:
    ctx->pc = 0x7F42DC50u;
    // 7F42DC50: addi    r3, r3, -32740
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32740);

label_7F42DC54:
    ctx->pc = 0x7F42DC54u;
    // 7F42DC54: and   r3, r5, r3
    {
        ctx->gpr[3] = ctx->gpr[5] & ctx->gpr[3];
    }

label_7F42DC58:
    ctx->pc = 0x7F42DC58u;
    // 7F42DC58: and   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] & ctx->gpr[0];
    }

label_7F42DC5C:
    ctx->pc = 0x7F42DC5Cu;
    // 7F42DC5C: xor   r3, r3, r6
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[6];
    }

label_7F42DC60:
    ctx->pc = 0x7F42DC60u;
    // 7F42DC60: xor   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[6];
    }

label_7F42DC64:
    ctx->pc = 0x7F42DC64u;
    // 7F42DC64: or.   r0, r3, r0
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

label_7F42DC68:
    ctx->pc = 0x7F42DC68u;
    // 7F42DC68: bc    12, 2, 0x7F42DD54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42DD54;
        }
    }

label_7F42DC6C:
    ctx->pc = 0x7F42DC6Cu;
    ctx->downcount -= 6;
    // 7F42DC6C: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F42DC70:
    ctx->pc = 0x7F42DC70u;
    // 7F42DC70: addi    r4, r30, 128
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(128);

label_7F42DC74:
    ctx->pc = 0x7F42DC74u;
    // 7F42DC74: addi    r3, r3, 28636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28636);

label_7F42DC78:
    ctx->pc = 0x7F42DC78u;
    // 7F42DC78: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F42DC7C:
    ctx->pc = 0x7F42DC7Cu;
    // 7F42DC7C: addi    r3, r3, 176
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(176);

label_7F42DC80:
    ctx->pc = 0x7F42DC80u;
    // 7F42DC80: bl      0x80025FFC
    {
            ctx->lr = 0x7F42DC84u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F42DC84:
    ctx->pc = 0x7F42DC84u;
    ctx->downcount -= 8;
    // 7F42DC84: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42DC88:
    ctx->pc = 0x7F42DC88u;
    // 7F42DC88: lfs     f1, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42DC88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42DC8C:
    ctx->pc = 0x7F42DC8Cu;
    // 7F42DC8C: lfs     f0, -10192(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42DC8Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10192);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42DC90:
    ctx->pc = 0x7F42DC90u;
    // 7F42DC90: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F42DC94:
    ctx->pc = 0x7F42DC94u;
    // 7F42DC94: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42DC98:
    ctx->pc = 0x7F42DC98u;
    // 7F42DC98: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42DC98u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F42DC9C:
    ctx->pc = 0x7F42DC9Cu;
    // 7F42DC9C: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42DC9Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42DCA0:
    ctx->pc = 0x7F42DCA0u;
    // 7F42DCA0: bl      0x7F114F50
    {
            ctx->lr = 0x7F42DCA4u;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F42DCA4:
    ctx->pc = 0x7F42DCA4u;
    ctx->downcount -= 4;
    // 7F42DCA4: addi    r3, r30, 128
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(128);

label_7F42DCA8:
    ctx->pc = 0x7F42DCA8u;
    // 7F42DCA8: addi    r4, r29, 80
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(80);

label_7F42DCAC:
    ctx->pc = 0x7F42DCACu;
    // 7F42DCAC: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F42DCB0:
    ctx->pc = 0x7F42DCB0u;
    // 7F42DCB0: bl      0x80025FFC
    {
            ctx->lr = 0x7F42DCB4u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F42DCB4:
    ctx->pc = 0x7F42DCB4u;
    ctx->downcount -= 2;
    // 7F42DCB4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F42DCB8:
    ctx->pc = 0x7F42DCB8u;
    // 7F42DCB8: bl      0x80026080
    {
            ctx->lr = 0x7F42DCBCu;
            ctx->pc = 0x80026080u;
            return;
    }

label_7F42DCBC:
    ctx->pc = 0x7F42DCBCu;
    ctx->downcount -= 4;
    // 7F42DCBC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42DCC0:
    ctx->pc = 0x7F42DCC0u;
    // 7F42DCC0: lfs     f0, -10208(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42DCC0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10208);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42DCC4:
    ctx->pc = 0x7F42DCC4u;
    // 7F42DCC4: fcmpu   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42DCC4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], false);

label_7F42DCC8:
    ctx->pc = 0x7F42DCC8u;
    // 7F42DCC8: bc    12, 2, 0x7F42DCEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42DCEC;
        }
    }

label_7F42DCCC:
    ctx->pc = 0x7F42DCCCu;
    ctx->downcount -= 4;
    // 7F42DCCC: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F42DCD0:
    ctx->pc = 0x7F42DCD0u;
    // 7F42DCD0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F42DCD4:
    ctx->pc = 0x7F42DCD4u;
    // 7F42DCD4: addi    r5, r30, 128
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(128);

label_7F42DCD8:
    ctx->pc = 0x7F42DCD8u;
    // 7F42DCD8: bl      0x7F22F07C
    {
            ctx->lr = 0x7F42DCDCu;
            ctx->pc = 0x7F22F07Cu;
            return;
    }

label_7F42DCDC:
    ctx->pc = 0x7F42DCDCu;
    ctx->downcount -= 4;
    // 7F42DCDC: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F42DCE0:
    ctx->pc = 0x7F42DCE0u;
    // 7F42DCE0: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F42DCE4:
    ctx->pc = 0x7F42DCE4u;
    // 7F42DCE4: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F42DCE8:
    ctx->pc = 0x7F42DCE8u;
    // 7F42DCE8: bl      0x7F018110
    {
            ctx->lr = 0x7F42DCECu;
            ctx->pc = 0x7F018110u;
            return;
    }

label_7F42DCEC:
    ctx->pc = 0x7F42DCECu;
    ctx->downcount -= 3;
    // 7F42DCEC: lwz     r0, 992(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(992);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42DCF0:
    ctx->pc = 0x7F42DCF0u;
    // 7F42DCF0: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42DCF4:
    ctx->pc = 0x7F42DCF4u;
    // 7F42DCF4: bc    4, 2, 0x7F42DD54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42DD54;
        }
    }

label_7F42DCF8:
    ctx->pc = 0x7F42DCF8u;
    ctx->downcount -= 3;
    // 7F42DCF8: addi    r29, r31, 432
    ctx->gpr[29] = ctx->gpr[31] + (u32)(s32)(432);

label_7F42DCFC:
    ctx->pc = 0x7F42DCFCu;
    // 7F42DCFC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F42DD00:
    ctx->pc = 0x7F42DD00u;
    // 7F42DD00: bl      0x7F042AAC
    {
            ctx->lr = 0x7F42DD04u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F42DD04:
    ctx->pc = 0x7F42DD04u;
    ctx->downcount -= 4;
    // 7F42DD04: lwz     r4, 980(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(980);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F42DD08:
    ctx->pc = 0x7F42DD08u;
    // 7F42DD08: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F42DD0C:
    ctx->pc = 0x7F42DD0Cu;
    // 7F42DD0C: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F42DD10:
    ctx->pc = 0x7F42DD10u;
    // 7F42DD10: bl      0x7F04272C
    {
            ctx->lr = 0x7F42DD14u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F42DD14:
    ctx->pc = 0x7F42DD14u;
    ctx->downcount -= 3;
    // 7F42DD14: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F42DD18:
    ctx->pc = 0x7F42DD18u;
    // 7F42DD18: addi    r4, r31, 476
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(476);

label_7F42DD1C:
    ctx->pc = 0x7F42DD1Cu;
    // 7F42DD1C: bl      0x7F042B20
    {
            ctx->lr = 0x7F42DD20u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F42DD20:
    ctx->pc = 0x7F42DD20u;
    ctx->downcount -= 2;
    // 7F42DD20: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F42DD24:
    ctx->pc = 0x7F42DD24u;
    // 7F42DD24: bl      0x7F023170
    {
            ctx->lr = 0x7F42DD28u;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F42DD28:
    ctx->pc = 0x7F42DD28u;
    ctx->downcount -= 2;
    // 7F42DD28: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F42DD2C:
    ctx->pc = 0x7F42DD2Cu;
    // 7F42DD2C: bl      0x7F0427FC
    {
            ctx->lr = 0x7F42DD30u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F42DD30:
    ctx->pc = 0x7F42DD30u;
    ctx->downcount -= 5;
    // 7F42DD30: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F42DD34:
    ctx->pc = 0x7F42DD34u;
    // 7F42DD34: stw     r0, 992(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(992);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42DD38:
    ctx->pc = 0x7F42DD38u;
    // 7F42DD38: lwz     r3, 996(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(996);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42DD3C:
    ctx->pc = 0x7F42DD3Cu;
    // 7F42DD3C: cmpwi   r3, 0
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

label_7F42DD40:
    ctx->pc = 0x7F42DD40u;
    // 7F42DD40: bc    12, 2, 0x7F42DD54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42DD54;
        }
    }

label_7F42DD44:
    ctx->pc = 0x7F42DD44u;
    ctx->downcount -= 2;
    // 7F42DD44: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F42DD48:
    ctx->pc = 0x7F42DD48u;
    // 7F42DD48: bl      0x7F3C7728
    {
            ctx->lr = 0x7F42DD4Cu;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F42DD4C:
    ctx->pc = 0x7F42DD4Cu;
    ctx->downcount -= 2;
    // 7F42DD4C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F42DD50:
    ctx->pc = 0x7F42DD50u;
    // 7F42DD50: stw     r0, 996(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(996);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42DD54:
    ctx->pc = 0x7F42DD54u;
    ctx->downcount -= 16;
    // 7F42DD54: lmw     r29, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F42DD58:
    ctx->pc = 0x7F42DD58u;
    // 7F42DD58: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42DD5C:
    ctx->pc = 0x7F42DD5Cu;
    // 7F42DD5C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42DD60:
    ctx->pc = 0x7F42DD60u;
    // 7F42DD60: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_7F42DD64:
    ctx->pc = 0x7F42DD64u;
    // 7F42DD64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42DD68:
    ctx->pc = 0x7F42DD68u;
    ctx->downcount -= 28;
    // 7F42DD68: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42DD6C:
    ctx->pc = 0x7F42DD6Cu;
    // 7F42DD6C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42DD70:
    ctx->pc = 0x7F42DD70u;
    // 7F42DD70: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F42DD74:
    ctx->pc = 0x7F42DD74u;
    // 7F42DD74: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F42DD78:
    ctx->pc = 0x7F42DD78u;
    // 7F42DD78: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42DD7C:
    ctx->pc = 0x7F42DD7Cu;
    // 7F42DD7C: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F42DD80:
    ctx->pc = 0x7F42DD80u;
    // 7F42DD80: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42DD84:
    ctx->pc = 0x7F42DD84u;
    // 7F42DD84: addi    r31, r29, 608
    ctx->gpr[31] = ctx->gpr[29] + (u32)(s32)(608);

label_7F42DD88:
    ctx->pc = 0x7F42DD88u;
    // 7F42DD88: addi    r30, r29, 32
    ctx->gpr[30] = ctx->gpr[29] + (u32)(s32)(32);

label_7F42DD8C:
    ctx->pc = 0x7F42DD8Cu;
    // 7F42DD8C: stw     r5, 988(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(988);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F42DD90:
    ctx->pc = 0x7F42DD90u;
    // 7F42DD90: lwz     r0, 760(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(760);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42DD94:
    ctx->pc = 0x7F42DD94u;
    // 7F42DD94: lwz     r3, 764(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(764);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42DD98:
    ctx->pc = 0x7F42DD98u;
    // 7F42DD98: and   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[5];
    }

label_7F42DD9C:
    ctx->pc = 0x7F42DD9Cu;
    // 7F42DD9C: and   r3, r3, r4
    {
        ctx->gpr[3] = ctx->gpr[3] & ctx->gpr[4];
    }

label_7F42DDA0:
    ctx->pc = 0x7F42DDA0u;
    // 7F42DDA0: xor   r3, r3, r5
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[5];
    }

label_7F42DDA4:
    ctx->pc = 0x7F42DDA4u;
    // 7F42DDA4: xor   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[5];
    }

label_7F42DDA8:
    ctx->pc = 0x7F42DDA8u;
    // 7F42DDA8: or.   r0, r3, r0
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

label_7F42DDAC:
    ctx->pc = 0x7F42DDACu;
    // 7F42DDAC: bc    12, 2, 0x7F42DE48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42DE48;
        }
    }

label_7F42DDB0:
    ctx->pc = 0x7F42DDB0u;
    ctx->downcount -= 3;
    // 7F42DDB0: lwz     r0, 984(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(984);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42DDB4:
    ctx->pc = 0x7F42DDB4u;
    // 7F42DDB4: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42DDB8:
    ctx->pc = 0x7F42DDB8u;
    // 7F42DDB8: bc    4, 2, 0x7F42DE48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42DE48;
        }
    }

label_7F42DDBC:
    ctx->pc = 0x7F42DDBCu;
    ctx->downcount -= 3;
    // 7F42DDBC: stw     r4, 984(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(984);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F42DDC0:
    ctx->pc = 0x7F42DDC0u;
    // 7F42DDC0: li      r3, 256
    ctx->gpr[3] = (u32)(s32)(256);

label_7F42DDC4:
    ctx->pc = 0x7F42DDC4u;
    // 7F42DDC4: bl      0x7F02A56C
    {
            ctx->lr = 0x7F42DDC8u;
            ctx->pc = 0x7F02A56Cu;
            return;
    }

label_7F42DDC8:
    ctx->pc = 0x7F42DDC8u;
    ctx->downcount -= 5;
    // 7F42DDC8: lha     r0, 42(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(42);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F42DDCC:
    ctx->pc = 0x7F42DDCCu;
    // 7F42DDCC: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F42DDD0:
    ctx->pc = 0x7F42DDD0u;
    // 7F42DDD0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F42DDD4:
    ctx->pc = 0x7F42DDD4u;
    // 7F42DDD4: sth     r0, 42(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42DDD8:
    ctx->pc = 0x7F42DDD8u;
    // 7F42DDD8: bl      0x7F02A538
    {
            ctx->lr = 0x7F42DDDCu;
            ctx->pc = 0x7F02A538u;
            return;
    }

label_7F42DDDC:
    ctx->pc = 0x7F42DDDCu;
    ctx->downcount -= 2;
    // 7F42DDDC: cmpwi   r3, 0
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

label_7F42DDE0:
    ctx->pc = 0x7F42DDE0u;
    // 7F42DDE0: bc    12, 2, 0x7F42DDF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42DDF8;
        }
    }

label_7F42DDE4:
    ctx->pc = 0x7F42DDE4u;
    ctx->downcount -= 2;
    // 7F42DDE4: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_7F42DDE8:
    ctx->pc = 0x7F42DDE8u;
    // 7F42DDE8: bl      0x7F02A56C
    {
            ctx->lr = 0x7F42DDECu;
            ctx->pc = 0x7F02A56Cu;
            return;
    }

label_7F42DDEC:
    ctx->pc = 0x7F42DDECu;
    ctx->downcount -= 3;
    // 7F42DDEC: addi    r0, r3, -32
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32);

label_7F42DDF0:
    ctx->pc = 0x7F42DDF0u;
    // 7F42DDF0: sth     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42DDF4:
    ctx->pc = 0x7F42DDF4u;
    // 7F42DDF4: b       0x7F42DE08
    {
            goto label_7F42DE08;
    }

label_7F42DDF8:
    ctx->pc = 0x7F42DDF8u;
    ctx->downcount -= 2;
    // 7F42DDF8: li      r3, 256
    ctx->gpr[3] = (u32)(s32)(256);

label_7F42DDFC:
    ctx->pc = 0x7F42DDFCu;
    // 7F42DDFC: bl      0x7F02A56C
    {
            ctx->lr = 0x7F42DE00u;
            ctx->pc = 0x7F02A56Cu;
            return;
    }

label_7F42DE00:
    ctx->pc = 0x7F42DE00u;
    ctx->downcount -= 2;
    // 7F42DE00: addi    r0, r3, 64
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(64);

label_7F42DE04:
    ctx->pc = 0x7F42DE04u;
    // 7F42DE04: sth     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42DE08:
    ctx->pc = 0x7F42DE08u;
    ctx->downcount -= 2;
    // 7F42DE08: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F42DE0C:
    ctx->pc = 0x7F42DE0Cu;
    // 7F42DE0C: bl      0x7F02A538
    {
            ctx->lr = 0x7F42DE10u;
            ctx->pc = 0x7F02A538u;
            return;
    }

label_7F42DE10:
    ctx->pc = 0x7F42DE10u;
    ctx->downcount -= 2;
    // 7F42DE10: cmpwi   r3, 0
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

label_7F42DE14:
    ctx->pc = 0x7F42DE14u;
    // 7F42DE14: bc    12, 2, 0x7F42DE2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42DE2C;
        }
    }

label_7F42DE18:
    ctx->pc = 0x7F42DE18u;
    ctx->downcount -= 2;
    // 7F42DE18: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_7F42DE1C:
    ctx->pc = 0x7F42DE1Cu;
    // 7F42DE1C: bl      0x7F02A56C
    {
            ctx->lr = 0x7F42DE20u;
            ctx->pc = 0x7F02A56Cu;
            return;
    }

label_7F42DE20:
    ctx->pc = 0x7F42DE20u;
    ctx->downcount -= 3;
    // 7F42DE20: addi    r0, r3, -32
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32);

label_7F42DE24:
    ctx->pc = 0x7F42DE24u;
    // 7F42DE24: sth     r0, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42DE28:
    ctx->pc = 0x7F42DE28u;
    // 7F42DE28: b       0x7F42DE3C
    {
            goto label_7F42DE3C;
    }

label_7F42DE2C:
    ctx->pc = 0x7F42DE2Cu;
    ctx->downcount -= 2;
    // 7F42DE2C: li      r3, 256
    ctx->gpr[3] = (u32)(s32)(256);

label_7F42DE30:
    ctx->pc = 0x7F42DE30u;
    // 7F42DE30: bl      0x7F02A56C
    {
            ctx->lr = 0x7F42DE34u;
            ctx->pc = 0x7F02A56Cu;
            return;
    }

label_7F42DE34:
    ctx->pc = 0x7F42DE34u;
    ctx->downcount -= 2;
    // 7F42DE34: addi    r0, r3, 64
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(64);

label_7F42DE38:
    ctx->pc = 0x7F42DE38u;
    // 7F42DE38: sth     r0, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42DE3C:
    ctx->pc = 0x7F42DE3Cu;
    ctx->downcount -= 3;
    // 7F42DE3C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42DE40:
    ctx->pc = 0x7F42DE40u;
    // 7F42DE40: lfs     f0, -10188(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42DE40u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10188);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42DE44:
    ctx->pc = 0x7F42DE44u;
    // 7F42DE44: stfs     f0, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42DE44u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42DE48:
    ctx->pc = 0x7F42DE48u;
    ctx->downcount -= 3;
    // 7F42DE48: lwz     r0, 984(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(984);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42DE4C:
    ctx->pc = 0x7F42DE4Cu;
    // 7F42DE4C: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42DE50:
    ctx->pc = 0x7F42DE50u;
    // 7F42DE50: bc    12, 2, 0x7F42DEE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42DEE0;
        }
    }

label_7F42DE54:
    ctx->pc = 0x7F42DE54u;
    ctx->downcount -= 3;
    // 7F42DE54: lbz     r0, 154(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(154);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F42DE58:
    ctx->pc = 0x7F42DE58u;
    // 7F42DE58: extsb. r0, r0
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

label_7F42DE5C:
    ctx->pc = 0x7F42DE5Cu;
    // 7F42DE5C: bc    12, 2, 0x7F42DEC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42DEC0;
        }
    }

label_7F42DE60:
    ctx->pc = 0x7F42DE60u;
    ctx->downcount -= 15;
    // 7F42DE60: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F42DE64:
    ctx->pc = 0x7F42DE64u;
    // 7F42DE64: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42DE68:
    ctx->pc = 0x7F42DE68u;
    // 7F42DE68: stb     r0, 154(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(154);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F42DE6C:
    ctx->pc = 0x7F42DE6Cu;
    // 7F42DE6C: addi    r4, r3, -10184
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-10184);

label_7F42DE70:
    ctx->pc = 0x7F42DE70u;
    // 7F42DE70: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42DE74:
    ctx->pc = 0x7F42DE74u;
    // 7F42DE74: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42DE74u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42DE78:
    ctx->pc = 0x7F42DE78u;
    // 7F42DE78: lfs     f2, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42DE78u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F42DE7C:
    ctx->pc = 0x7F42DE7Cu;
    // 7F42DE7C: lfs     f0, -10180(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42DE7Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10180);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42DE80:
    ctx->pc = 0x7F42DE80u;
    // 7F42DE80: fneg    f2, f2
    if (!ppc_fp_available_inline(ctx, 0x7F42DE80u)) return;
    ctx->fpr[2] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[2]) ^ 0x8000000000000000ull);

label_7F42DE84:
    ctx->pc = 0x7F42DE84u;
    // 7F42DE84: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42DE84u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F42DE88:
    ctx->pc = 0x7F42DE88u;
    // 7F42DE88: stfs     f1, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42DE88u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F42DE8C:
    ctx->pc = 0x7F42DE8Cu;
    // 7F42DE8C: lfs     f1, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42DE8Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42DE90:
    ctx->pc = 0x7F42DE90u;
    // 7F42DE90: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42DE90u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F42DE94:
    ctx->pc = 0x7F42DE94u;
    // 7F42DE94: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F42DE98:
    ctx->pc = 0x7F42DE98u;
    // 7F42DE98: bc    4, 2, 0x7F42DEE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42DEE0;
        }
    }

label_7F42DE9C:
    ctx->pc = 0x7F42DE9Cu;
    ctx->downcount -= 9;
    // 7F42DE9C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42DEA0:
    ctx->pc = 0x7F42DEA0u;
    // 7F42DEA0: stw     r0, 984(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(984);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42DEA4:
    ctx->pc = 0x7F42DEA4u;
    // 7F42DEA4: lfs     f0, -10208(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42DEA4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10208);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42DEA8:
    ctx->pc = 0x7F42DEA8u;
    // 7F42DEA8: stfs     f0, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42DEA8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42DEAC:
    ctx->pc = 0x7F42DEACu;
    // 7F42DEAC: sth     r0, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42DEB0:
    ctx->pc = 0x7F42DEB0u;
    // 7F42DEB0: sth     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42DEB4:
    ctx->pc = 0x7F42DEB4u;
    // 7F42DEB4: sth     r0, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42DEB8:
    ctx->pc = 0x7F42DEB8u;
    // 7F42DEB8: sth     r0, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42DEBC:
    ctx->pc = 0x7F42DEBCu;
    // 7F42DEBC: b       0x7F42DEE0
    {
            goto label_7F42DEE0;
    }

label_7F42DEC0:
    ctx->pc = 0x7F42DEC0u;
    ctx->downcount -= 8;
    // 7F42DEC0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42DEC4:
    ctx->pc = 0x7F42DEC4u;
    // 7F42DEC4: lfs     f1, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42DEC4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42DEC8:
    ctx->pc = 0x7F42DEC8u;
    // 7F42DEC8: lfs     f0, -10180(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42DEC8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10180);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42DECC:
    ctx->pc = 0x7F42DECCu;
    // 7F42DECC: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42DECCu)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F42DED0:
    ctx->pc = 0x7F42DED0u;
    // 7F42DED0: stfs     f0, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42DED0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42DED4:
    ctx->pc = 0x7F42DED4u;
    // 7F42DED4: lwz     r0, 988(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(988);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42DED8:
    ctx->pc = 0x7F42DED8u;
    // 7F42DED8: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F42DEDC:
    ctx->pc = 0x7F42DEDCu;
    // 7F42DEDC: stw     r0, 988(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(988);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42DEE0:
    ctx->pc = 0x7F42DEE0u;
    ctx->downcount -= 3;
    // 7F42DEE0: lwz     r0, 988(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(988);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42DEE4:
    ctx->pc = 0x7F42DEE4u;
    // 7F42DEE4: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42DEE8:
    ctx->pc = 0x7F42DEE8u;
    // 7F42DEE8: bc    4, 2, 0x7F42DF04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42DF04;
        }
    }

label_7F42DEEC:
    ctx->pc = 0x7F42DEECu;
    ctx->downcount -= 5;
    // 7F42DEEC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F42DEF0:
    ctx->pc = 0x7F42DEF0u;
    // 7F42DEF0: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F42DEF4:
    ctx->pc = 0x7F42DEF4u;
    // 7F42DEF4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F42DEF8:
    ctx->pc = 0x7F42DEF8u;
    // 7F42DEF8: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_7F42DEFC:
    ctx->pc = 0x7F42DEFCu;
    // 7F42DEFC: bl      0x7F023F7C
    {
            ctx->lr = 0x7F42DF00u;
            ctx->pc = 0x7F023F7Cu;
            return;
    }

label_7F42DF00:
    ctx->pc = 0x7F42DF00u;
    ctx->downcount -= 1;
    // 7F42DF00: b       0x7F42DF50
    {
            goto label_7F42DF50;
    }

label_7F42DF04:
    ctx->pc = 0x7F42DF04u;
    ctx->downcount -= 5;
    // 7F42DF04: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F42DF08:
    ctx->pc = 0x7F42DF08u;
    // 7F42DF08: li      r4, 750
    ctx->gpr[4] = (u32)(s32)(750);

label_7F42DF0C:
    ctx->pc = 0x7F42DF0Cu;
    // 7F42DF0C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F42DF10:
    ctx->pc = 0x7F42DF10u;
    // 7F42DF10: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F42DF14:
    ctx->pc = 0x7F42DF14u;
    // 7F42DF14: bl      0x7F023F7C
    {
            ctx->lr = 0x7F42DF18u;
            ctx->pc = 0x7F023F7Cu;
            return;
    }

label_7F42DF18:
    ctx->pc = 0x7F42DF18u;
    ctx->downcount -= 3;
    // 7F42DF18: lwz     r3, 432(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(432);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42DF1C:
    ctx->pc = 0x7F42DF1Cu;
    // 7F42DF1C: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F42DF20:
    ctx->pc = 0x7F42DF20u;
    // 7F42DF20: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F42DF24u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F42DF24:
    ctx->pc = 0x7F42DF24u;
    ctx->downcount -= 2;
    // 7F42DF24: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F42DF28:
    ctx->pc = 0x7F42DF28u;
    // 7F42DF28: bl      0x7F42DB54
    {
            ctx->lr = 0x7F42DF2Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42DB54u;
                return;
            }
            goto label_7F42DB54;
    }

label_7F42DF2C:
    ctx->pc = 0x7F42DF2Cu;
    ctx->downcount -= 9;
    // 7F42DF2C: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F42DF30:
    ctx->pc = 0x7F42DF30u;
    // 7F42DF30: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F42DF34:
    ctx->pc = 0x7F42DF34u;
    // 7F42DF34: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42DF38:
    ctx->pc = 0x7F42DF38u;
    // 7F42DF38: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42DF3C:
    ctx->pc = 0x7F42DF3Cu;
    // 7F42DF3C: lfd     f1, -10200(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42DF3Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10200);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42DF40:
    ctx->pc = 0x7F42DF40u;
    // 7F42DF40: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42DF44:
    ctx->pc = 0x7F42DF44u;
    // 7F42DF44: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42DF44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42DF48:
    ctx->pc = 0x7F42DF48u;
    // 7F42DF48: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42DF48u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F42DF4C:
    ctx->pc = 0x7F42DF4Cu;
    // 7F42DF4C: stfs     f0, 52(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42DF4Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42DF50:
    ctx->pc = 0x7F42DF50u;
    ctx->downcount -= 3;
    // 7F42DF50: lwz     r5, 432(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(432);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F42DF54:
    ctx->pc = 0x7F42DF54u;
    // 7F42DF54: cmplwi  r5, 0x0000
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

label_7F42DF58:
    ctx->pc = 0x7F42DF58u;
    // 7F42DF58: bc    12, 2, 0x7F42DF7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42DF7C;
        }
    }

label_7F42DF5C:
    ctx->pc = 0x7F42DF5Cu;
    ctx->downcount -= 4;
    // 7F42DF5C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F42DF60:
    ctx->pc = 0x7F42DF60u;
    // 7F42DF60: addi    r4, r29, 476
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(476);

label_7F42DF64:
    ctx->pc = 0x7F42DF64u;
    // 7F42DF64: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F42DF68:
    ctx->pc = 0x7F42DF68u;
    // 7F42DF68: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F42DF6Cu;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F42DF6C:
    ctx->pc = 0x7F42DF6Cu;
    ctx->downcount -= 2;
    // 7F42DF6C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F42DF70:
    ctx->pc = 0x7F42DF70u;
    // 7F42DF70: bl      0x7F023170
    {
            ctx->lr = 0x7F42DF74u;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F42DF74:
    ctx->pc = 0x7F42DF74u;
    ctx->downcount -= 2;
    // 7F42DF74: addi    r3, r29, 432
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(432);

label_7F42DF78:
    ctx->pc = 0x7F42DF78u;
    // 7F42DF78: bl      0x7F0427FC
    {
            ctx->lr = 0x7F42DF7Cu;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F42DF7C:
    ctx->pc = 0x7F42DF7Cu;
    ctx->downcount -= 15;
    // 7F42DF7C: lwz     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42DF80:
    ctx->pc = 0x7F42DF80u;
    // 7F42DF80: li      r0, -2
    ctx->gpr[0] = (u32)(s32)(-2);

label_7F42DF84:
    ctx->pc = 0x7F42DF84u;
    // 7F42DF84: lwz     r5, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F42DF88:
    ctx->pc = 0x7F42DF88u;
    // 7F42DF88: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F42DF8C:
    ctx->pc = 0x7F42DF8Cu;
    // 7F42DF8C: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_7F42DF90:
    ctx->pc = 0x7F42DF90u;
    // 7F42DF90: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F42DF94:
    ctx->pc = 0x7F42DF94u;
    // 7F42DF94: stw     r0, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42DF98:
    ctx->pc = 0x7F42DF98u;
    // 7F42DF98: and   r0, r5, r4
    {
        ctx->gpr[0] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F42DF9C:
    ctx->pc = 0x7F42DF9Cu;
    // 7F42DF9C: addi    r4, r3, 18312
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18312);

label_7F42DFA0:
    ctx->pc = 0x7F42DFA0u;
    // 7F42DFA0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F42DFA4:
    ctx->pc = 0x7F42DFA4u;
    // 7F42DFA4: stw     r0, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42DFA8:
    ctx->pc = 0x7F42DFA8u;
    // 7F42DFA8: lwz     r6, 432(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(432);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F42DFAC:
    ctx->pc = 0x7F42DFACu;
    // 7F42DFAC: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F42DFB0:
    ctx->pc = 0x7F42DFB0u;
    // 7F42DFB0: addi    r4, r6, 4
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(4);

label_7F42DFB4:
    ctx->pc = 0x7F42DFB4u;
    // 7F42DFB4: bl      0x7F014964
    {
            ctx->lr = 0x7F42DFB8u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F42DFB8:
    ctx->pc = 0x7F42DFB8u;
    ctx->downcount -= 16;
    // 7F42DFB8: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F42DFBC:
    ctx->pc = 0x7F42DFBCu;
    // 7F42DFBC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42DFC0:
    ctx->pc = 0x7F42DFC0u;
    // 7F42DFC0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42DFC4:
    ctx->pc = 0x7F42DFC4u;
    // 7F42DFC4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F42DFC8:
    ctx->pc = 0x7F42DFC8u;
    // 7F42DFC8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42DFCC:
    ctx->pc = 0x7F42DFCCu;
    ctx->downcount -= 8;
    // 7F42DFCC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42DFD0:
    ctx->pc = 0x7F42DFD0u;
    // 7F42DFD0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42DFD4:
    ctx->pc = 0x7F42DFD4u;
    // 7F42DFD4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42DFD8:
    ctx->pc = 0x7F42DFD8u;
    // 7F42DFD8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F42DFDC:
    ctx->pc = 0x7F42DFDCu;
    // 7F42DFDC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42DFE0:
    ctx->pc = 0x7F42DFE0u;
    // 7F42DFE0: lwz     r0, 432(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(432);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42DFE4:
    ctx->pc = 0x7F42DFE4u;
    // 7F42DFE4: cmplwi  r0, 0x0000
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

label_7F42DFE8:
    ctx->pc = 0x7F42DFE8u;
    // 7F42DFE8: bc    12, 2, 0x7F42DFFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42DFFC;
        }
    }

label_7F42DFEC:
    ctx->pc = 0x7F42DFECu;
    ctx->downcount -= 2;
    // 7F42DFEC: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F42DFF0:
    ctx->pc = 0x7F42DFF0u;
    // 7F42DFF0: bl      0x7F023E10
    {
            ctx->lr = 0x7F42DFF4u;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F42DFF4:
    ctx->pc = 0x7F42DFF4u;
    ctx->downcount -= 2;
    // 7F42DFF4: addi    r3, r31, 432
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(432);

label_7F42DFF8:
    ctx->pc = 0x7F42DFF8u;
    // 7F42DFF8: bl      0x7F042AAC
    {
            ctx->lr = 0x7F42DFFCu;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F42DFFC:
    ctx->pc = 0x7F42DFFCu;
    ctx->downcount -= 6;
    // 7F42DFFC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42E000:
    ctx->pc = 0x7F42E000u;
    // 7F42E000: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F42E004:
    ctx->pc = 0x7F42E004u;
    // 7F42E004: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42E008:
    ctx->pc = 0x7F42E008u;
    // 7F42E008: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F42E00C:
    ctx->pc = 0x7F42E00Cu;
    // 7F42E00C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42E010:
    ctx->pc = 0x7F42E010u;
    ctx->downcount -= 51;
    // 7F42E010: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42E014:
    ctx->pc = 0x7F42E014u;
    // 7F42E014: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42E018:
    ctx->pc = 0x7F42E018u;
    // 7F42E018: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42E01C:
    ctx->pc = 0x7F42E01Cu;
    // 7F42E01C: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F42E020:
    ctx->pc = 0x7F42E020u;
    // 7F42E020: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42E024:
    ctx->pc = 0x7F42E024u;
    // 7F42E024: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42E028:
    ctx->pc = 0x7F42E028u;
    // 7F42E028: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F42E02C:
    ctx->pc = 0x7F42E02Cu;
    // 7F42E02C: lfs     f1, -10176(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42E02Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10176);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42E030:
    ctx->pc = 0x7F42E030u;
    // 7F42E030: addi    r4, r31, 832
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(832);

label_7F42E034:
    ctx->pc = 0x7F42E034u;
    // 7F42E034: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F42E038:
    ctx->pc = 0x7F42E038u;
    // 7F42E038: lwz     r5, 432(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(432);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F42E03C:
    ctx->pc = 0x7F42E03Cu;
    // 7F42E03C: lwz     r6, 72(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F42E040:
    ctx->pc = 0x7F42E040u;
    // 7F42E040: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F42E044:
    ctx->pc = 0x7F42E044u;
    // 7F42E044: lfs     f0, 36(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42E044u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42E048:
    ctx->pc = 0x7F42E048u;
    // 7F42E048: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42E048u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42E04C:
    ctx->pc = 0x7F42E04Cu;
    // 7F42E04C: lfs     f0, 40(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42E04Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42E050:
    ctx->pc = 0x7F42E050u;
    // 7F42E050: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42E050u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42E054:
    ctx->pc = 0x7F42E054u;
    // 7F42E054: lfs     f0, 44(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42E054u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42E058:
    ctx->pc = 0x7F42E058u;
    // 7F42E058: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42E058u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42E05C:
    ctx->pc = 0x7F42E05Cu;
    // 7F42E05C: stfs     f1, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42E05Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F42E060:
    ctx->pc = 0x7F42E060u;
    // 7F42E060: lfs     f0, 24(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42E060u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42E064:
    ctx->pc = 0x7F42E064u;
    // 7F42E064: stfs     f0, 832(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F42E064u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(832);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42E068:
    ctx->pc = 0x7F42E068u;
    // 7F42E068: lwz     r6, 432(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(432);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F42E06C:
    ctx->pc = 0x7F42E06Cu;
    // 7F42E06C: lwz     r6, 72(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F42E070:
    ctx->pc = 0x7F42E070u;
    // 7F42E070: lfs     f0, 28(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42E070u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42E074:
    ctx->pc = 0x7F42E074u;
    // 7F42E074: stfs     f0, 836(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F42E074u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(836);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42E078:
    ctx->pc = 0x7F42E078u;
    // 7F42E078: lwz     r6, 432(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(432);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F42E07C:
    ctx->pc = 0x7F42E07Cu;
    // 7F42E07C: lwz     r6, 72(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F42E080:
    ctx->pc = 0x7F42E080u;
    // 7F42E080: lfs     f0, 32(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42E080u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42E084:
    ctx->pc = 0x7F42E084u;
    // 7F42E084: stfs     f0, 840(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F42E084u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(840);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42E088:
    ctx->pc = 0x7F42E088u;
    // 7F42E088: stfs     f1, 844(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F42E088u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(844);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F42E08C:
    ctx->pc = 0x7F42E08Cu;
    // 7F42E08C: lwz     r6, 432(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(432);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F42E090:
    ctx->pc = 0x7F42E090u;
    // 7F42E090: lwz     r6, 72(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F42E094:
    ctx->pc = 0x7F42E094u;
    // 7F42E094: lfs     f0, 24(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42E094u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42E098:
    ctx->pc = 0x7F42E098u;
    // 7F42E098: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42E098u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42E09C:
    ctx->pc = 0x7F42E09Cu;
    // 7F42E09C: lfs     f0, 28(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42E09Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42E0A0:
    ctx->pc = 0x7F42E0A0u;
    // 7F42E0A0: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42E0A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42E0A4:
    ctx->pc = 0x7F42E0A4u;
    // 7F42E0A4: lfs     f0, 32(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42E0A4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42E0A8:
    ctx->pc = 0x7F42E0A8u;
    // 7F42E0A8: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42E0A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42E0AC:
    ctx->pc = 0x7F42E0ACu;
    // 7F42E0AC: stfs     f1, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42E0ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F42E0B0:
    ctx->pc = 0x7F42E0B0u;
    // 7F42E0B0: bl      0x800261D8
    {
            ctx->lr = 0x7F42E0B4u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F42E0B4:
    ctx->pc = 0x7F42E0B4u;
    ctx->downcount -= 5;
    // 7F42E0B4: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42E0B8:
    ctx->pc = 0x7F42E0B8u;
    // 7F42E0B8: addi    r3, r31, 832
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(832);

label_7F42E0BC:
    ctx->pc = 0x7F42E0BCu;
    // 7F42E0BC: lfs     f1, -10184(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42E0BCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10184);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42E0C0:
    ctx->pc = 0x7F42E0C0u;
    // 7F42E0C0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42E0C4:
    ctx->pc = 0x7F42E0C4u;
    // 7F42E0C4: bl      0x800261FC
    {
            ctx->lr = 0x7F42E0C8u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F42E0C8:
    ctx->pc = 0x7F42E0C8u;
    ctx->downcount -= 4;
    // 7F42E0C8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F42E0CC:
    ctx->pc = 0x7F42E0CCu;
    // 7F42E0CC: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F42E0D0:
    ctx->pc = 0x7F42E0D0u;
    // 7F42E0D0: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42E0D4:
    ctx->pc = 0x7F42E0D4u;
    // 7F42E0D4: bl      0x800261B4
    {
            ctx->lr = 0x7F42E0D8u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F42E0D8:
    ctx->pc = 0x7F42E0D8u;
    ctx->downcount -= 5;
    // 7F42E0D8: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42E0DC:
    ctx->pc = 0x7F42E0DCu;
    // 7F42E0DC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F42E0E0:
    ctx->pc = 0x7F42E0E0u;
    // 7F42E0E0: lfs     f1, -10184(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42E0E0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10184);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42E0E4:
    ctx->pc = 0x7F42E0E4u;
    // 7F42E0E4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42E0E8:
    ctx->pc = 0x7F42E0E8u;
    // 7F42E0E8: bl      0x800261FC
    {
            ctx->lr = 0x7F42E0ECu;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F42E0EC:
    ctx->pc = 0x7F42E0ECu;
    ctx->downcount -= 7;
    // 7F42E0EC: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F42E0F0:
    ctx->pc = 0x7F42E0F0u;
    // 7F42E0F0: addi    r3, r31, 608
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(608);

label_7F42E0F4:
    ctx->pc = 0x7F42E0F4u;
    // 7F42E0F4: addi    r7, r31, 832
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(832);

label_7F42E0F8:
    ctx->pc = 0x7F42E0F8u;
    // 7F42E0F8: addi    r8, r1, 8
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(8);

label_7F42E0FC:
    ctx->pc = 0x7F42E0FCu;
    // 7F42E0FC: li      r4, 16401
    ctx->gpr[4] = (u32)(s32)(16401);

label_7F42E100:
    ctx->pc = 0x7F42E100u;
    // 7F42E100: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F42E104:
    ctx->pc = 0x7F42E104u;
    // 7F42E104: bl      0x7F014788
    {
            ctx->lr = 0x7F42E108u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F42E108:
    ctx->pc = 0x7F42E108u;
    ctx->downcount -= 13;
    // 7F42E108: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F42E10C:
    ctx->pc = 0x7F42E10Cu;
    // 7F42E10C: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F42E110:
    ctx->pc = 0x7F42E110u;
    // 7F42E110: addi    r5, r3, 13880
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F42E114:
    ctx->pc = 0x7F42E114u;
    // 7F42E114: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F42E118:
    ctx->pc = 0x7F42E118u;
    // 7F42E118: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F42E11C:
    ctx->pc = 0x7F42E11Cu;
    // 7F42E11C: addi    r9, r4, 12832
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F42E120:
    ctx->pc = 0x7F42E120u;
    // 7F42E120: addi    r3, r31, 608
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(608);

label_7F42E124:
    ctx->pc = 0x7F42E124u;
    // 7F42E124: addi    r4, r31, 800
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(800);

label_7F42E128:
    ctx->pc = 0x7F42E128u;
    // 7F42E128: lha     r0, 286(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(286);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F42E12C:
    ctx->pc = 0x7F42E12Cu;
    // 7F42E12C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F42E130:
    ctx->pc = 0x7F42E130u;
    // 7F42E130: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F42E134:
    ctx->pc = 0x7F42E134u;
    // 7F42E134: rlwinm r6, r0, 0, 16, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F42E138:
    ctx->pc = 0x7F42E138u;
    // 7F42E138: bl      0x7F014B78
    {
            ctx->lr = 0x7F42E13Cu;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F42E13C:
    ctx->pc = 0x7F42E13Cu;
    ctx->downcount -= 2;
    // 7F42E13C: addi    r3, r31, 608
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(608);

label_7F42E140:
    ctx->pc = 0x7F42E140u;
    // 7F42E140: bl      0x7F0148A0
    {
            ctx->lr = 0x7F42E144u;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F42E144:
    ctx->pc = 0x7F42E144u;
    ctx->downcount -= 5;
    // 7F42E144: lis     r3, 32579
    ctx->gpr[3] = ((u32)(s32)(32579) << 16);

label_7F42E148:
    ctx->pc = 0x7F42E148u;
    // 7F42E148: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F42E14C:
    ctx->pc = 0x7F42E14Cu;
    // 7F42E14C: addi    r4, r3, -9232
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-9232);

label_7F42E150:
    ctx->pc = 0x7F42E150u;
    // 7F42E150: addi    r3, r31, 608
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(608);

label_7F42E154:
    ctx->pc = 0x7F42E154u;
    // 7F42E154: bl      0x7F014B6C
    {
            ctx->lr = 0x7F42E158u;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F42E158:
    ctx->pc = 0x7F42E158u;
    ctx->downcount -= 16;
    // 7F42E158: lmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F42E15C:
    ctx->pc = 0x7F42E15Cu;
    // 7F42E15C: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42E160:
    ctx->pc = 0x7F42E160u;
    // 7F42E160: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42E164:
    ctx->pc = 0x7F42E164u;
    // 7F42E164: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F42E168:
    ctx->pc = 0x7F42E168u;
    // 7F42E168: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42E16C:
    ctx->pc = 0x7F42E16Cu;
    ctx->downcount -= 20;
    // 7F42E16C: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42E170:
    ctx->pc = 0x7F42E170u;
    // 7F42E170: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42E174:
    ctx->pc = 0x7F42E174u;
    // 7F42E174: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F42E178:
    ctx->pc = 0x7F42E178u;
    // 7F42E178: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42E17C:
    ctx->pc = 0x7F42E17Cu;
    // 7F42E17C: stmw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F42E180:
    ctx->pc = 0x7F42E180u;
    // 7F42E180: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42E184:
    ctx->pc = 0x7F42E184u;
    // 7F42E184: addi    r31, r29, 32
    ctx->gpr[31] = ctx->gpr[29] + (u32)(s32)(32);

label_7F42E188:
    ctx->pc = 0x7F42E188u;
    // 7F42E188: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F42E18C:
    ctx->pc = 0x7F42E18Cu;
    // 7F42E18C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F42E190:
    ctx->pc = 0x7F42E190u;
    // 7F42E190: bl      0x7F022FB4
    {
            ctx->lr = 0x7F42E194u;
            ctx->pc = 0x7F022FB4u;
            return;
    }

label_7F42E194:
    ctx->pc = 0x7F42E194u;
    ctx->downcount -= 2;
    // 7F42E194: cmpwi   r3, 0
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

label_7F42E198:
    ctx->pc = 0x7F42E198u;
    // 7F42E198: bc    4, 0, 0x7F42E1A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42E1A4;
        }
    }

label_7F42E19C:
    ctx->pc = 0x7F42E19Cu;
    ctx->downcount -= 2;
    // 7F42E19C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F42E1A0:
    ctx->pc = 0x7F42E1A0u;
    // 7F42E1A0: b       0x7F42E3E0
    {
            goto label_7F42E3E0;
    }

label_7F42E1A4:
    ctx->pc = 0x7F42E1A4u;
    ctx->downcount -= 5;
    // 7F42E1A4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F42E1A8:
    ctx->pc = 0x7F42E1A8u;
    // 7F42E1A8: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F42E1AC:
    ctx->pc = 0x7F42E1ACu;
    // 7F42E1AC: li      r5, -2
    ctx->gpr[5] = (u32)(s32)(-2);

label_7F42E1B0:
    ctx->pc = 0x7F42E1B0u;
    // 7F42E1B0: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_7F42E1B4:
    ctx->pc = 0x7F42E1B4u;
    // 7F42E1B4: bl      0x7F023F7C
    {
            ctx->lr = 0x7F42E1B8u;
            ctx->pc = 0x7F023F7Cu;
            return;
    }

label_7F42E1B8:
    ctx->pc = 0x7F42E1B8u;
    ctx->downcount -= 6;
    // 7F42E1B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F42E1BC:
    ctx->pc = 0x7F42E1BCu;
    // 7F42E1BC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F42E1C0:
    ctx->pc = 0x7F42E1C0u;
    // 7F42E1C0: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42E1C4:
    ctx->pc = 0x7F42E1C4u;
    // 7F42E1C4: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F42E1C8:
    ctx->pc = 0x7F42E1C8u;
    // 7F42E1C8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42E1CC:
    ctx->pc = 0x7F42E1CCu;
    // 7F42E1CC: bl      0x7F3C664C
    {
            ctx->lr = 0x7F42E1D0u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F42E1D0:
    ctx->pc = 0x7F42E1D0u;
    ctx->downcount -= 2;
    // 7F42E1D0: cmplwi  r3, 0x0000
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

label_7F42E1D4:
    ctx->pc = 0x7F42E1D4u;
    // 7F42E1D4: bc    12, 2, 0x7F42E200
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42E200;
        }
    }

label_7F42E1D8:
    ctx->pc = 0x7F42E1D8u;
    ctx->downcount -= 2;
    // 7F42E1D8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F42E1DC:
    ctx->pc = 0x7F42E1DCu;
    // 7F42E1DC: bl      0x7F3C6A78
    {
            ctx->lr = 0x7F42E1E0u;
            ctx->pc = 0x7F3C6A78u;
            return;
    }

label_7F42E1E0:
    ctx->pc = 0x7F42E1E0u;
    ctx->downcount -= 3;
    // 7F42E1E0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F42E1E4:
    ctx->pc = 0x7F42E1E4u;
    // 7F42E1E4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F42E1E8:
    ctx->pc = 0x7F42E1E8u;
    // 7F42E1E8: bl      0x7F42E460
    {
            ctx->lr = 0x7F42E1ECu;
            goto label_7F42E460;
    }

label_7F42E1EC:
    ctx->pc = 0x7F42E1ECu;
    ctx->downcount -= 5;
    // 7F42E1EC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42E1F0:
    ctx->pc = 0x7F42E1F0u;
    // 7F42E1F0: lfs     f1, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F42E1F0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42E1F4:
    ctx->pc = 0x7F42E1F4u;
    // 7F42E1F4: lfs     f0, -10172(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42E1F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10172);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42E1F8:
    ctx->pc = 0x7F42E1F8u;
    // 7F42E1F8: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42E1F8u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F42E1FC:
    ctx->pc = 0x7F42E1FCu;
    // 7F42E1FC: stfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F42E1FCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42E200:
    ctx->pc = 0x7F42E200u;
    ctx->downcount -= 3;
    // 7F42E200: li      r3, 98
    ctx->gpr[3] = (u32)(s32)(98);

label_7F42E204:
    ctx->pc = 0x7F42E204u;
    // 7F42E204: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F42E208:
    ctx->pc = 0x7F42E208u;
    // 7F42E208: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F42E20Cu;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F42E20C:
    ctx->pc = 0x7F42E20Cu;
    ctx->downcount -= 4;
    // 7F42E20C: stw     r3, 1000(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1000);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42E210:
    ctx->pc = 0x7F42E210u;
    // 7F42E210: li      r3, 69
    ctx->gpr[3] = (u32)(s32)(69);

label_7F42E214:
    ctx->pc = 0x7F42E214u;
    // 7F42E214: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F42E218:
    ctx->pc = 0x7F42E218u;
    // 7F42E218: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F42E21Cu;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F42E21C:
    ctx->pc = 0x7F42E21Cu;
    ctx->downcount -= 2;
    // 7F42E21C: stw     r3, 996(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(996);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42E220:
    ctx->pc = 0x7F42E220u;
    // 7F42E220: bl      0x7F42E3F4
    {
            ctx->lr = 0x7F42E224u;
            goto label_7F42E3F4;
    }

label_7F42E224:
    ctx->pc = 0x7F42E224u;
    ctx->downcount -= 13;
    // 7F42E224: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42E228:
    ctx->pc = 0x7F42E228u;
    // 7F42E228: li      r3, 109
    ctx->gpr[3] = (u32)(s32)(109);

label_7F42E22C:
    ctx->pc = 0x7F42E22Cu;
    // 7F42E22C: lfs     f0, -10168(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42E22Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10168);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42E230:
    ctx->pc = 0x7F42E230u;
    // 7F42E230: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42E230u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F42E234:
    ctx->pc = 0x7F42E234u;
    // 7F42E234: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42E234u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F42E238:
    ctx->pc = 0x7F42E238u;
    // 7F42E238: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42E238u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42E23C:
    ctx->pc = 0x7F42E23Cu;
    // 7F42E23C: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42E240:
    ctx->pc = 0x7F42E240u;
    // 7F42E240: sth     r0, 34(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42E244:
    ctx->pc = 0x7F42E244u;
    // 7F42E244: lwz     r4, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F42E248:
    ctx->pc = 0x7F42E248u;
    // 7F42E248: lwz     r0, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42E24C:
    ctx->pc = 0x7F42E24Cu;
    // 7F42E24C: stw     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F42E250:
    ctx->pc = 0x7F42E250u;
    // 7F42E250: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42E254:
    ctx->pc = 0x7F42E254u;
    // 7F42E254: bl      0x7F3C664C
    {
            ctx->lr = 0x7F42E258u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F42E258:
    ctx->pc = 0x7F42E258u;
    ctx->downcount -= 2;
    // 7F42E258: cmplwi  r3, 0x0000
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

label_7F42E25C:
    ctx->pc = 0x7F42E25Cu;
    // 7F42E25C: bc    4, 2, 0x7F42E268
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42E268;
        }
    }

label_7F42E260:
    ctx->pc = 0x7F42E260u;
    ctx->downcount -= 2;
    // 7F42E260: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F42E264:
    ctx->pc = 0x7F42E264u;
    // 7F42E264: b       0x7F42E3E0
    {
            goto label_7F42E3E0;
    }

label_7F42E268:
    ctx->pc = 0x7F42E268u;
    ctx->downcount -= 1;
    // 7F42E268: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F42E26Cu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F42E26C:
    ctx->pc = 0x7F42E26Cu;
    ctx->downcount -= 2;
    // 7F42E26C: stw     r3, 976(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(976);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42E270:
    ctx->pc = 0x7F42E270u;
    // 7F42E270: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F42E274u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F42E274:
    ctx->pc = 0x7F42E274u;
    ctx->downcount -= 5;
    // 7F42E274: stw     r3, 980(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(980);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42E278:
    ctx->pc = 0x7F42E278u;
    // 7F42E278: addi    r28, r29, 432
    ctx->gpr[28] = ctx->gpr[29] + (u32)(s32)(432);

label_7F42E27C:
    ctx->pc = 0x7F42E27Cu;
    // 7F42E27C: lwz     r0, 1000(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1000);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42E280:
    ctx->pc = 0x7F42E280u;
    // 7F42E280: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42E284:
    ctx->pc = 0x7F42E284u;
    // 7F42E284: bc    12, 2, 0x7F42E2A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42E2A4;
        }
    }

label_7F42E288:
    ctx->pc = 0x7F42E288u;
    ctx->downcount -= 6;
    // 7F42E288: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F42E28C:
    ctx->pc = 0x7F42E28Cu;
    // 7F42E28C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F42E290:
    ctx->pc = 0x7F42E290u;
    // 7F42E290: stw     r0, 992(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(992);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42E294:
    ctx->pc = 0x7F42E294u;
    // 7F42E294: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F42E298:
    ctx->pc = 0x7F42E298u;
    // 7F42E298: lwz     r4, 980(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(980);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F42E29C:
    ctx->pc = 0x7F42E29Cu;
    // 7F42E29C: bl      0x7F04272C
    {
            ctx->lr = 0x7F42E2A0u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F42E2A0:
    ctx->pc = 0x7F42E2A0u;
    ctx->downcount -= 1;
    // 7F42E2A0: b       0x7F42E2B4
    {
            goto label_7F42E2B4;
    }

label_7F42E2A4:
    ctx->pc = 0x7F42E2A4u;
    ctx->downcount -= 4;
    // 7F42E2A4: lwz     r4, 976(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(976);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F42E2A8:
    ctx->pc = 0x7F42E2A8u;
    // 7F42E2A8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F42E2AC:
    ctx->pc = 0x7F42E2ACu;
    // 7F42E2AC: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F42E2B0:
    ctx->pc = 0x7F42E2B0u;
    // 7F42E2B0: bl      0x7F04272C
    {
            ctx->lr = 0x7F42E2B4u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F42E2B4:
    ctx->pc = 0x7F42E2B4u;
    ctx->downcount -= 3;
    // 7F42E2B4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F42E2B8:
    ctx->pc = 0x7F42E2B8u;
    // 7F42E2B8: addi    r4, r29, 476
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(476);

label_7F42E2BC:
    ctx->pc = 0x7F42E2BCu;
    // 7F42E2BC: bl      0x7F042B20
    {
            ctx->lr = 0x7F42E2C0u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F42E2C0:
    ctx->pc = 0x7F42E2C0u;
    ctx->downcount -= 12;
    // 7F42E2C0: lwz     r5, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F42E2C4:
    ctx->pc = 0x7F42E2C4u;
    // 7F42E2C4: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42E2C8:
    ctx->pc = 0x7F42E2C8u;
    // 7F42E2C8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42E2CC:
    ctx->pc = 0x7F42E2CCu;
    // 7F42E2CC: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F42E2D0:
    ctx->pc = 0x7F42E2D0u;
    // 7F42E2D0: lfd     f3, -10200(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42E2D0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10200);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42E2D4:
    ctx->pc = 0x7F42E2D4u;
    // 7F42E2D4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F42E2D8:
    ctx->pc = 0x7F42E2D8u;
    // 7F42E2D8: lfs     f2, -10208(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42E2D8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10208);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F42E2DC:
    ctx->pc = 0x7F42E2DCu;
    // 7F42E2DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F42E2E0:
    ctx->pc = 0x7F42E2E0u;
    // 7F42E2E0: lwz     r6, 72(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F42E2E4:
    ctx->pc = 0x7F42E2E4u;
    // 7F42E2E4: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_7F42E2E8:
    ctx->pc = 0x7F42E2E8u;
    // 7F42E2E8: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F42E2EC:
    ctx->downcount -= 8;
    // 7F42E2EC: rlwinm r0, r7, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0x00000001u;
    }

label_7F42E2F0:
    ctx->pc = 0x7F42E2F0u;
    // 7F42E2F0: stw     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F42E2F4:
    // 7F42E2F4: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F42E2F8:
    ctx->pc = 0x7F42E2F8u;
    // 7F42E2F8: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42E2FC:
    ctx->pc = 0x7F42E2FCu;
    // 7F42E2FC: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42E2FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42E300:
    ctx->pc = 0x7F42E300u;
    // 7F42E300: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F42E300u)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F42E304:
    ctx->pc = 0x7F42E304u;
    // 7F42E304: fcmpu   cr0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F42E304u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[2], false);

label_7F42E308:
    // 7F42E308: bc    12, 2, 0x7F42E314
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42E314;
        }
    }

label_7F42E30C:
    ctx->pc = 0x7F42E30Cu;
    ctx->downcount -= 2;
    // 7F42E30C: lfs     f1, 36(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42E30Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42E310:
    // 7F42E310: b       0x7F42E318
    {
            goto label_7F42E318;
    }

label_7F42E314:
    ctx->pc = 0x7F42E314u;
    ctx->downcount -= 1;
    // 7F42E314: lfs     f1, 24(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42E314u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42E318:
    ctx->downcount -= 10;
    // 7F42E318: rlwinm r0, r7, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0x00000002u;
    }

label_7F42E31C:
    // 7F42E31C: add   r5, r29, r3
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F42E320:
    // 7F42E320: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F42E324:
    ctx->pc = 0x7F42E324u;
    // 7F42E324: stw     r4, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F42E328:
    ctx->pc = 0x7F42E328u;
    // 7F42E328: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42E32C:
    ctx->pc = 0x7F42E32Cu;
    // 7F42E32C: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42E32Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42E330:
    ctx->pc = 0x7F42E330u;
    // 7F42E330: stfs     f1, 848(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F42E330u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(848);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F42E334:
    ctx->pc = 0x7F42E334u;
    // 7F42E334: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F42E334u)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F42E338:
    ctx->pc = 0x7F42E338u;
    // 7F42E338: fcmpu   cr0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F42E338u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[2], false);

label_7F42E33C:
    // 7F42E33C: bc    12, 2, 0x7F42E348
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42E348;
        }
    }

label_7F42E340:
    ctx->pc = 0x7F42E340u;
    ctx->downcount -= 2;
    // 7F42E340: lfs     f1, 40(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42E340u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42E344:
    // 7F42E344: b       0x7F42E34C
    {
            goto label_7F42E34C;
    }

label_7F42E348:
    ctx->pc = 0x7F42E348u;
    ctx->downcount -= 1;
    // 7F42E348: lfs     f1, 28(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42E348u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42E34C:
    ctx->downcount -= 9;
    // 7F42E34C: rlwinm r0, r7, 0, 29, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0x00000004u;
    }

label_7F42E350:
    ctx->pc = 0x7F42E350u;
    // 7F42E350: stw     r4, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F42E354:
    // 7F42E354: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F42E358:
    ctx->pc = 0x7F42E358u;
    // 7F42E358: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42E35C:
    ctx->pc = 0x7F42E35Cu;
    // 7F42E35C: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42E35Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42E360:
    ctx->pc = 0x7F42E360u;
    // 7F42E360: stfs     f1, 852(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F42E360u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(852);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F42E364:
    ctx->pc = 0x7F42E364u;
    // 7F42E364: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F42E364u)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F42E368:
    ctx->pc = 0x7F42E368u;
    // 7F42E368: fcmpu   cr0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F42E368u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[2], false);

label_7F42E36C:
    // 7F42E36C: bc    12, 2, 0x7F42E378
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42E378;
        }
    }

label_7F42E370:
    ctx->pc = 0x7F42E370u;
    ctx->downcount -= 2;
    // 7F42E370: lfs     f0, 44(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42E370u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42E374:
    // 7F42E374: b       0x7F42E37C
    {
            goto label_7F42E37C;
    }

label_7F42E378:
    ctx->pc = 0x7F42E378u;
    ctx->downcount -= 1;
    // 7F42E378: lfs     f0, 32(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42E378u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42E37C:
    ctx->pc = 0x7F42E37Cu;
    ctx->downcount -= 4;
    // 7F42E37C: stfs     f0, 856(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F42E37Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(856);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42E380:
    // 7F42E380: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_7F42E384:
    // 7F42E384: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

label_7F42E388:
    // 7F42E388: bc    16, 0, 0x7F42E2EC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42E2ECu;
                return;
            }
            goto label_7F42E2EC;
        }
    }

label_7F42E38C:
    ctx->pc = 0x7F42E38Cu;
    ctx->downcount -= 3;
    // 7F42E38C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F42E390:
    ctx->pc = 0x7F42E390u;
    // 7F42E390: addi    r4, r31, 32
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(32);

label_7F42E394:
    ctx->pc = 0x7F42E394u;
    // 7F42E394: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F42E398u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F42E398:
    ctx->pc = 0x7F42E398u;
    ctx->downcount -= 2;
    // 7F42E398: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F42E39C:
    ctx->pc = 0x7F42E39Cu;
    // 7F42E39C: bl      0x7F42DB54
    {
            ctx->lr = 0x7F42E3A0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42DB54u;
                return;
            }
            goto label_7F42DB54;
    }

label_7F42E3A0:
    ctx->pc = 0x7F42E3A0u;
    ctx->downcount -= 13;
    // 7F42E3A0: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F42E3A4:
    ctx->pc = 0x7F42E3A4u;
    // 7F42E3A4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F42E3A8:
    ctx->pc = 0x7F42E3A8u;
    // 7F42E3A8: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42E3AC:
    ctx->pc = 0x7F42E3ACu;
    // 7F42E3AC: stw     r3, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42E3B0:
    ctx->pc = 0x7F42E3B0u;
    // 7F42E3B0: addi    r5, r4, -10200
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-10200);

label_7F42E3B4:
    ctx->pc = 0x7F42E3B4u;
    // 7F42E3B4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F42E3B8:
    ctx->pc = 0x7F42E3B8u;
    // 7F42E3B8: stw     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42E3BC:
    ctx->pc = 0x7F42E3BCu;
    // 7F42E3BC: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F42E3C0:
    ctx->pc = 0x7F42E3C0u;
    // 7F42E3C0: lfd     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F42E3C0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42E3C4:
    ctx->pc = 0x7F42E3C4u;
    // 7F42E3C4: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42E3C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42E3C8:
    ctx->pc = 0x7F42E3C8u;
    // 7F42E3C8: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42E3C8u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F42E3CC:
    ctx->pc = 0x7F42E3CCu;
    // 7F42E3CC: stfs     f0, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F42E3CCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42E3D0:
    ctx->pc = 0x7F42E3D0u;
    // 7F42E3D0: bl      0x7F42E010
    {
            ctx->lr = 0x7F42E3D4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42E010u;
                return;
            }
            goto label_7F42E010;
    }

label_7F42E3D4:
    ctx->pc = 0x7F42E3D4u;
    ctx->downcount -= 3;
    // 7F42E3D4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F42E3D8:
    ctx->pc = 0x7F42E3D8u;
    // 7F42E3D8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F42E3DC:
    ctx->pc = 0x7F42E3DCu;
    // 7F42E3DC: stw     r0, 984(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(984);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42E3E0:
    ctx->pc = 0x7F42E3E0u;
    ctx->downcount -= 16;
    // 7F42E3E0: lmw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F42E3E4:
    ctx->pc = 0x7F42E3E4u;
    // 7F42E3E4: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42E3E8:
    ctx->pc = 0x7F42E3E8u;
    // 7F42E3E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42E3EC:
    ctx->pc = 0x7F42E3ECu;
    // 7F42E3EC: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F42E3F0:
    ctx->pc = 0x7F42E3F0u;
    // 7F42E3F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42E3F4:
    ctx->pc = 0x7F42E3F4u;
    ctx->downcount -= 4;
    // 7F42E3F4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42E3F8:
    ctx->pc = 0x7F42E3F8u;
    // 7F42E3F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42E3FC:
    ctx->pc = 0x7F42E3FCu;
    // 7F42E3FC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42E400:
    ctx->pc = 0x7F42E400u;
    // 7F42E400: bl      0x7F42E43C
    {
            ctx->lr = 0x7F42E404u;
            goto label_7F42E43C;
    }

label_7F42E404:
    ctx->pc = 0x7F42E404u;
    ctx->downcount -= 31;
    // 7F42E404: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F42E408:
    ctx->pc = 0x7F42E408u;
    // 7F42E408: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42E40C:
    ctx->pc = 0x7F42E40Cu;
    // 7F42E40C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42E410:
    ctx->pc = 0x7F42E410u;
    // 7F42E410: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42E414:
    ctx->pc = 0x7F42E414u;
    // 7F42E414: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42E418:
    ctx->pc = 0x7F42E418u;
    // 7F42E418: lfd     f2, -10160(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42E418u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10160);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42E41C:
    ctx->pc = 0x7F42E41Cu;
    // 7F42E41C: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42E41Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42E420:
    ctx->pc = 0x7F42E420u;
    // 7F42E420: lfs     f0, -10164(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42E420u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10164);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42E424:
    ctx->pc = 0x7F42E424u;
    // 7F42E424: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F42E424u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F42E428:
    ctx->pc = 0x7F42E428u;
    // 7F42E428: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42E42C:
    ctx->pc = 0x7F42E42Cu;
    // 7F42E42C: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42E42Cu)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F42E430:
    ctx->pc = 0x7F42E430u;
    // 7F42E430: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42E434:
    ctx->pc = 0x7F42E434u;
    // 7F42E434: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F42E438:
    ctx->pc = 0x7F42E438u;
    // 7F42E438: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42E43C:
    ctx->pc = 0x7F42E43Cu;
    ctx->downcount -= 13;
    // 7F42E43C: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F42E440:
    ctx->pc = 0x7F42E440u;
    // 7F42E440: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F42E444:
    ctx->pc = 0x7F42E444u;
    // 7F42E444: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F42E448:
    ctx->pc = 0x7F42E448u;
    // 7F42E448: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F42E44C:
    ctx->pc = 0x7F42E44Cu;
    // 7F42E44C: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F42E450:
    ctx->pc = 0x7F42E450u;
    // 7F42E450: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F42E454:
    ctx->pc = 0x7F42E454u;
    // 7F42E454: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F42E458:
    ctx->pc = 0x7F42E458u;
    // 7F42E458: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42E45C:
    ctx->pc = 0x7F42E45Cu;
    // 7F42E45C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42E460:
    ctx->pc = 0x7F42E460u;
    ctx->downcount -= 17;
    // 7F42E460: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42E464:
    ctx->pc = 0x7F42E464u;
    // 7F42E464: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42E468:
    ctx->pc = 0x7F42E468u;
    // 7F42E468: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42E46C:
    ctx->pc = 0x7F42E46Cu;
    // 7F42E46C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F42E470:
    ctx->pc = 0x7F42E470u;
    // 7F42E470: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42E474:
    ctx->pc = 0x7F42E474u;
    // 7F42E474: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F42E478:
    ctx->pc = 0x7F42E478u;
    // 7F42E478: bl      0x7F42E4B4
    {
            ctx->lr = 0x7F42E47Cu;
            goto label_7F42E4B4;
    }

label_7F42E47C:
    ctx->pc = 0x7F42E47Cu;
    ctx->downcount -= 3;
    // 7F42E47C: addi    r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(4);

label_7F42E480:
    ctx->pc = 0x7F42E480u;
    // 7F42E480: addi    r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(4);

label_7F42E484:
    ctx->pc = 0x7F42E484u;
    // 7F42E484: bl      0x7F42E4B4
    {
            ctx->lr = 0x7F42E488u;
            goto label_7F42E4B4;
    }

label_7F42E488:
    ctx->pc = 0x7F42E488u;
    ctx->downcount -= 3;
    // 7F42E488: addi    r3, r30, 8
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(8);

label_7F42E48C:
    ctx->pc = 0x7F42E48Cu;
    // 7F42E48C: addi    r4, r31, 8
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(8);

label_7F42E490:
    ctx->pc = 0x7F42E490u;
    // 7F42E490: bl      0x7F42E4B4
    {
            ctx->lr = 0x7F42E494u;
            goto label_7F42E4B4;
    }

label_7F42E494:
    ctx->pc = 0x7F42E494u;
    ctx->downcount -= 3;
    // 7F42E494: addi    r3, r30, 12
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(12);

label_7F42E498:
    ctx->pc = 0x7F42E498u;
    // 7F42E498: addi    r4, r31, 12
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(12);

label_7F42E49C:
    ctx->pc = 0x7F42E49Cu;
    // 7F42E49C: bl      0x7F42E4B4
    {
            ctx->lr = 0x7F42E4A0u;
            goto label_7F42E4B4;
    }

label_7F42E4A0:
    ctx->pc = 0x7F42E4A0u;
    ctx->downcount -= 16;
    // 7F42E4A0: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F42E4A4:
    ctx->pc = 0x7F42E4A4u;
    // 7F42E4A4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42E4A8:
    ctx->pc = 0x7F42E4A8u;
    // 7F42E4A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42E4AC:
    ctx->pc = 0x7F42E4ACu;
    // 7F42E4AC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F42E4B0:
    ctx->pc = 0x7F42E4B0u;
    // 7F42E4B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42E4B4:
    ctx->pc = 0x7F42E4B4u;
    ctx->downcount -= 6;
    // 7F42E4B4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42E4B8:
    ctx->pc = 0x7F42E4B8u;
    // 7F42E4B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42E4BC:
    ctx->pc = 0x7F42E4BCu;
    // 7F42E4BC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42E4C0:
    ctx->pc = 0x7F42E4C0u;
    // 7F42E4C0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F42E4C4:
    ctx->pc = 0x7F42E4C4u;
    // 7F42E4C4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F42E4C8:
    ctx->pc = 0x7F42E4C8u;
    // 7F42E4C8: bl      0x7F42E4E4
    {
            ctx->lr = 0x7F42E4CCu;
            goto label_7F42E4E4;
    }

label_7F42E4CC:
    ctx->pc = 0x7F42E4CCu;
    ctx->downcount -= 7;
    // 7F42E4CC: stfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F42E4CCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F42E4D0:
    ctx->pc = 0x7F42E4D0u;
    // 7F42E4D0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42E4D4:
    ctx->pc = 0x7F42E4D4u;
    // 7F42E4D4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F42E4D8:
    ctx->pc = 0x7F42E4D8u;
    // 7F42E4D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42E4DC:
    ctx->pc = 0x7F42E4DCu;
    // 7F42E4DC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F42E4E0:
    ctx->pc = 0x7F42E4E0u;
    // 7F42E4E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42E4E4:
    ctx->pc = 0x7F42E4E4u;
    ctx->downcount -= 4;
    // 7F42E4E4: psq_l   f0, 2(r3), 1, 3
    if (!ppc_fp_available_inline(ctx, 0x7F42E4E4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ppc_psq_load_inline(ctx, 0u, ea, true, 3u, false, 0x7F42E4E4u);
        if (ctx->exception) return;
    }

label_7F42E4E8:
    ctx->pc = 0x7F42E4E8u;
    // 7F42E4E8: psq_l   f1, 0(r3), 1, 6
    if (!ppc_fp_available_inline(ctx, 0x7F42E4E8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 1u, ea, true, 6u, false, 0x7F42E4E8u);
        if (ctx->exception) return;
    }

label_7F42E4EC:
    ctx->pc = 0x7F42E4ECu;
    // 7F42E4EC: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42E4ECu)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_7F42E4F0:
    ctx->pc = 0x7F42E4F0u;
    // 7F42E4F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42E4F4:
    ctx->pc = 0x7F42E4F4u;
    ctx->downcount -= 21;
    // 7F42E4F4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42E4F8:
    ctx->pc = 0x7F42E4F8u;
    // 7F42E4F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42E4FC:
    ctx->pc = 0x7F42E4FCu;
    // 7F42E4FC: li      r5, 1008
    ctx->gpr[5] = (u32)(s32)(1008);

label_7F42E500:
    ctx->pc = 0x7F42E500u;
    // 7F42E500: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F42E504:
    ctx->pc = 0x7F42E504u;
    // 7F42E504: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42E508:
    ctx->pc = 0x7F42E508u;
    // 7F42E508: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F42E50C:
    ctx->pc = 0x7F42E50Cu;
    // 7F42E50C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42E510:
    ctx->pc = 0x7F42E510u;
    // 7F42E510: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F42E514:
    ctx->pc = 0x7F42E514u;
    // 7F42E514: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F42E518:
    ctx->pc = 0x7F42E518u;
    // 7F42E518: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F42E51C:
    ctx->pc = 0x7F42E51Cu;
    // 7F42E51C: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F42E520u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F42E520:
    ctx->pc = 0x7F42E520u;
    ctx->downcount -= 2;
    // 7F42E520: or.   r31, r3, r3
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

label_7F42E524:
    ctx->pc = 0x7F42E524u;
    // 7F42E524: bc    12, 2, 0x7F42E564
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42E564;
        }
    }

label_7F42E528:
    ctx->pc = 0x7F42E528u;
    ctx->downcount -= 5;
    // 7F42E528: lis     r4, 32579
    ctx->gpr[4] = ((u32)(s32)(32579) << 16);

label_7F42E52C:
    ctx->pc = 0x7F42E52Cu;
    // 7F42E52C: lis     r5, 32579
    ctx->gpr[5] = ((u32)(s32)(32579) << 16);

label_7F42E530:
    ctx->pc = 0x7F42E530u;
    // 7F42E530: addi    r4, r4, -8856
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8856);

label_7F42E534:
    ctx->pc = 0x7F42E534u;
    // 7F42E534: addi    r5, r5, -8244
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8244);

label_7F42E538:
    ctx->pc = 0x7F42E538u;
    // 7F42E538: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F42E53Cu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F42E53C:
    ctx->pc = 0x7F42E53Cu;
    ctx->downcount -= 4;
    // 7F42E53C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F42E540:
    ctx->pc = 0x7F42E540u;
    // 7F42E540: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F42E544:
    ctx->pc = 0x7F42E544u;
    // 7F42E544: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F42E548:
    ctx->pc = 0x7F42E548u;
    // 7F42E548: bl      0x7F42E16C
    {
            ctx->lr = 0x7F42E54Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42E16Cu;
                return;
            }
            goto label_7F42E16C;
    }

label_7F42E54C:
    ctx->pc = 0x7F42E54Cu;
    ctx->downcount -= 2;
    // 7F42E54C: cmpwi   r3, 0
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

label_7F42E550:
    ctx->pc = 0x7F42E550u;
    // 7F42E550: bc    4, 0, 0x7F42E564
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42E564;
        }
    }

label_7F42E554:
    ctx->pc = 0x7F42E554u;
    ctx->downcount -= 2;
    // 7F42E554: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F42E558:
    ctx->pc = 0x7F42E558u;
    // 7F42E558: bl      0x7F3C8210
    {
            ctx->lr = 0x7F42E55Cu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F42E55C:
    ctx->pc = 0x7F42E55Cu;
    ctx->downcount -= 2;
    // 7F42E55C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F42E560:
    ctx->pc = 0x7F42E560u;
    // 7F42E560: b       0x7F42E568
    {
            goto label_7F42E568;
    }

label_7F42E564:
    ctx->pc = 0x7F42E564u;
    ctx->downcount -= 1;
    // 7F42E564: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F42E568:
    ctx->pc = 0x7F42E568u;
    ctx->downcount -= 16;
    // 7F42E568: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F42E56C:
    ctx->pc = 0x7F42E56Cu;
    // 7F42E56C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42E570:
    ctx->pc = 0x7F42E570u;
    // 7F42E570: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42E574:
    ctx->pc = 0x7F42E574u;
    // 7F42E574: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F42E578:
    ctx->pc = 0x7F42E578u;
    // 7F42E578: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42E57C:
    ctx->pc = 0x7F42E57Cu;
    ctx->downcount -= 10;
    // 7F42E57C: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F42E580:
    ctx->pc = 0x7F42E580u;
    // 7F42E580: lis     r4, 32592
    ctx->gpr[4] = ((u32)(s32)(32592) << 16);

label_7F42E584:
    ctx->pc = 0x7F42E584u;
    // 7F42E584: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F42E588:
    ctx->pc = 0x7F42E588u;
    // 7F42E588: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F42E58C:
    ctx->pc = 0x7F42E58Cu;
    // 7F42E58C: addi    r5, r3, -2128
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-2128);

label_7F42E590:
    ctx->pc = 0x7F42E590u;
    // 7F42E590: addi    r4, r4, -2124
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-2124);

label_7F42E594:
    ctx->pc = 0x7F42E594u;
    // 7F42E594: or   r3, r6, r6
    {
        ctx->gpr[3] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F42E598:
    ctx->pc = 0x7F42E598u;
    // 7F42E598: stw     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F42E59C:
    ctx->pc = 0x7F42E59Cu;
    // 7F42E59C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F42E5A0:
    loop_7F42E5A0(ctx);
    if (ctx->pc == 0x7F42E5ACu) goto label_7F42E5AC;
    return;
label_7F42E5A4:
    // 7F42E5A4: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F42E5A8:
    // 7F42E5A8: bc    16, 0, 0x7F42E5A0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42E5A0u;
                return;
            }
            goto label_7F42E5A0;
        }
    }

label_7F42E5AC:
    ctx->pc = 0x7F42E5ACu;
    ctx->downcount -= 1;
    // 7F42E5AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42E5B0:
    ctx->pc = 0x7F42E5B0u;
    ctx->downcount -= 5;
    // 7F42E5B0: li      r0, 9
    ctx->gpr[0] = (u32)(s32)(9);

label_7F42E5B4:
    ctx->pc = 0x7F42E5B4u;
    // 7F42E5B4: lwz     r4, 1116(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1116);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F42E5B8:
    ctx->pc = 0x7F42E5B8u;
    // 7F42E5B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F42E5BC:
    ctx->pc = 0x7F42E5BCu;
    // 7F42E5BC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F42E5C0:
    ctx->pc = 0x7F42E5C0u;
    ctx->downcount -= 3;
    // 7F42E5C0: lha     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F42E5C4:
    // 7F42E5C4: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42E5C8:
    ctx->pc = 0x7F42E5C8u;
    // 7F42E5C8: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42E5CC:
    ctx->downcount -= 3;
    // 7F42E5CC: addi    r4, r4, 2
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2);

label_7F42E5D0:
    // 7F42E5D0: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F42E5D4:
    // 7F42E5D4: bc    16, 0, 0x7F42E5C0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42E5C0u;
                return;
            }
            goto label_7F42E5C0;
        }
    }

label_7F42E5D8:
    ctx->pc = 0x7F42E5D8u;
    ctx->downcount -= 2;
    // 7F42E5D8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F42E5DC:
    ctx->pc = 0x7F42E5DCu;
    // 7F42E5DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42E5E0:
    ctx->pc = 0x7F42E5E0u;
    ctx->downcount -= 20;
    // 7F42E5E0: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42E5E4:
    ctx->pc = 0x7F42E5E4u;
    // 7F42E5E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42E5E8:
    ctx->pc = 0x7F42E5E8u;
    // 7F42E5E8: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42E5EC:
    ctx->pc = 0x7F42E5ECu;
    // 7F42E5EC: stmw     r26, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F42E5F0:
    ctx->pc = 0x7F42E5F0u;
    // 7F42E5F0: or   r26, r4, r4
    {
        ctx->gpr[26] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F42E5F4:
    ctx->pc = 0x7F42E5F4u;
    // 7F42E5F4: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F42E5F8:
    ctx->pc = 0x7F42E5F8u;
    // 7F42E5F8: lwz     r30, 1104(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1104);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F42E5FC:
    ctx->pc = 0x7F42E5FCu;
    // 7F42E5FC: lwz     r29, 1108(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1108);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F42E600:
    ctx->pc = 0x7F42E600u;
    // 7F42E600: lwz     r28, 1112(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1112);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F42E604:
    ctx->pc = 0x7F42E604u;
    // 7F42E604: lwz     r27, 1116(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1116);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F42E608:
    ctx->pc = 0x7F42E608u;
    ctx->downcount -= 3;
    // 7F42E608: lha     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F42E60C:
    // 7F42E60C: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42E610:
    // 7F42E610: bc    4, 1, 0x7F42E678
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42E678;
        }
    }

label_7F42E614:
    ctx->pc = 0x7F42E614u;
    ctx->downcount -= 4;
    // 7F42E614: lfs     f1, 0(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F42E614u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42E618:
    // 7F42E618: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F42E61C:
    // 7F42E61C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F42E620:
    // 7F42E620: bl      0x800261FC
    {
            ctx->lr = 0x7F42E624u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F42E624:
    ctx->downcount -= 4;
    // 7F42E624: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F42E628:
    // 7F42E628: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F42E62C:
    // 7F42E62C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F42E630:
    // 7F42E630: bl      0x800261B4
    {
            ctx->lr = 0x7F42E634u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F42E634:
    ctx->downcount -= 14;
    // 7F42E634: xoris   r3, r26, 0x8000
    ctx->gpr[3] = ctx->gpr[26] ^ (0x8000u << 16);

label_7F42E638:
    // 7F42E638: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F42E63C:
    ctx->pc = 0x7F42E63Cu;
    // 7F42E63C: stw     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42E640:
    // 7F42E640: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42E644:
    ctx->pc = 0x7F42E644u;
    // 7F42E644: lfd     f1, -10136(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42E644u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10136);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42E648:
    // 7F42E648: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F42E64C:
    ctx->pc = 0x7F42E64Cu;
    // 7F42E64C: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42E650:
    // 7F42E650: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F42E654:
    ctx->pc = 0x7F42E654u;
    // 7F42E654: lfs     f2, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42E654u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F42E658:
    ctx->pc = 0x7F42E658u;
    // 7F42E658: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42E658u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42E65C:
    ctx->pc = 0x7F42E65Cu;
    // 7F42E65C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42E65Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F42E660:
    ctx->pc = 0x7F42E660u;
    // 7F42E660: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42E660u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F42E664:
    ctx->pc = 0x7F42E664u;
    // 7F42E664: stfs     f0, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42E664u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42E668:
    // 7F42E668: bl      0x7F114F50
    {
            ctx->lr = 0x7F42E66Cu;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F42E66C:
    ctx->pc = 0x7F42E66Cu;
    ctx->downcount -= 3;
    // 7F42E66C: lha     r3, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F42E670:
    // 7F42E670: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F42E674:
    ctx->pc = 0x7F42E674u;
    // 7F42E674: sth     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42E678:
    ctx->downcount -= 7;
    // 7F42E678: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F42E67C:
    // 7F42E67C: addi    r29, r29, 16
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(16);

label_7F42E680:
    // 7F42E680: cmpwi   r31, 9
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(9);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42E684:
    // 7F42E684: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_7F42E688:
    // 7F42E688: addi    r27, r27, 2
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(2);

label_7F42E68C:
    // 7F42E68C: addi    r30, r30, 16
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(16);

label_7F42E690:
    // 7F42E690: bc    12, 0, 0x7F42E608
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42E608u;
                return;
            }
            goto label_7F42E608;
        }
    }

label_7F42E694:
    ctx->pc = 0x7F42E694u;
    ctx->downcount -= 16;
    // 7F42E694: lmw     r26, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F42E698:
    ctx->pc = 0x7F42E698u;
    // 7F42E698: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42E69C:
    ctx->pc = 0x7F42E69Cu;
    // 7F42E69C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42E6A0:
    ctx->pc = 0x7F42E6A0u;
    // 7F42E6A0: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F42E6A4:
    ctx->pc = 0x7F42E6A4u;
    // 7F42E6A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42E6A8:
    ctx->pc = 0x7F42E6A8u;
    ctx->downcount -= 6;
    // 7F42E6A8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42E6AC:
    ctx->pc = 0x7F42E6ACu;
    // 7F42E6AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42E6B0:
    ctx->pc = 0x7F42E6B0u;
    // 7F42E6B0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42E6B4:
    ctx->pc = 0x7F42E6B4u;
    // 7F42E6B4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F42E6B8:
    ctx->pc = 0x7F42E6B8u;
    // 7F42E6B8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42E6BC:
    ctx->pc = 0x7F42E6BCu;
    // 7F42E6BC: bl      0x7F42E6E4
    {
            ctx->lr = 0x7F42E6C0u;
            goto label_7F42E6E4;
    }

label_7F42E6C0:
    ctx->pc = 0x7F42E6C0u;
    ctx->downcount -= 10;
    // 7F42E6C0: rlwinm r4, r31, 1, 0, 30
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[31], 1u) & 0xFFFFFFFEu;
    }

label_7F42E6C4:
    ctx->pc = 0x7F42E6C4u;
    // 7F42E6C4: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F42E6C8:
    ctx->pc = 0x7F42E6C8u;
    // 7F42E6C8: and   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[3];
    }

label_7F42E6CC:
    ctx->pc = 0x7F42E6CCu;
    // 7F42E6CC: subf   r3, r31, r0
    {
        u32 a = ~ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F42E6D0:
    ctx->pc = 0x7F42E6D0u;
    // 7F42E6D0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F42E6D4:
    ctx->pc = 0x7F42E6D4u;
    // 7F42E6D4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42E6D8:
    ctx->pc = 0x7F42E6D8u;
    // 7F42E6D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42E6DC:
    ctx->pc = 0x7F42E6DCu;
    // 7F42E6DC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F42E6E0:
    ctx->pc = 0x7F42E6E0u;
    // 7F42E6E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42E6E4:
    ctx->pc = 0x7F42E6E4u;
    ctx->downcount -= 13;
    // 7F42E6E4: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F42E6E8:
    ctx->pc = 0x7F42E6E8u;
    // 7F42E6E8: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F42E6EC:
    ctx->pc = 0x7F42E6ECu;
    // 7F42E6EC: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F42E6F0:
    ctx->pc = 0x7F42E6F0u;
    // 7F42E6F0: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F42E6F4:
    ctx->pc = 0x7F42E6F4u;
    // 7F42E6F4: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F42E6F8:
    ctx->pc = 0x7F42E6F8u;
    // 7F42E6F8: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F42E6FC:
    ctx->pc = 0x7F42E6FCu;
    // 7F42E6FC: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F42E700:
    ctx->pc = 0x7F42E700u;
    // 7F42E700: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42E704:
    ctx->pc = 0x7F42E704u;
    // 7F42E704: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42E708:
    ctx->pc = 0x7F42E708u;
    ctx->downcount -= 6;
    // 7F42E708: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42E70C:
    ctx->pc = 0x7F42E70Cu;
    // 7F42E70C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42E710:
    ctx->pc = 0x7F42E710u;
    // 7F42E710: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42E714:
    ctx->pc = 0x7F42E714u;
    // 7F42E714: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F42E718:
    ctx->pc = 0x7F42E718u;
    // 7F42E718: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42E71C:
    ctx->pc = 0x7F42E71Cu;
    // 7F42E71C: bl      0x7F42E6E4
    {
            ctx->lr = 0x7F42E720u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42E6E4u;
                return;
            }
            goto label_7F42E6E4;
    }

label_7F42E720:
    ctx->pc = 0x7F42E720u;
    ctx->downcount -= 8;
    // 7F42E720: addi    r0, r31, -1
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(-1);

label_7F42E724:
    ctx->pc = 0x7F42E724u;
    // 7F42E724: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F42E728:
    ctx->pc = 0x7F42E728u;
    // 7F42E728: and   r3, r0, r3
    {
        ctx->gpr[3] = ctx->gpr[0] & ctx->gpr[3];
    }

label_7F42E72C:
    ctx->pc = 0x7F42E72Cu;
    // 7F42E72C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42E730:
    ctx->pc = 0x7F42E730u;
    // 7F42E730: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42E734:
    ctx->pc = 0x7F42E734u;
    // 7F42E734: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F42E738:
    ctx->pc = 0x7F42E738u;
    // 7F42E738: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42E73C:
    ctx->pc = 0x7F42E73Cu;
    ctx->downcount -= 27;
    // 7F42E73C: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42E740:
    ctx->pc = 0x7F42E740u;
    // 7F42E740: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42E744:
    ctx->pc = 0x7F42E744u;
    // 7F42E744: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42E748:
    ctx->pc = 0x7F42E748u;
    // 7F42E748: stfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42E748u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F42E74C:
    ctx->pc = 0x7F42E74Cu;
    // 7F42E74C: psq_st   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F42E74Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F42E74Cu);
        if (ctx->exception) return;
    }

label_7F42E750:
    ctx->pc = 0x7F42E750u;
    // 7F42E750: stfd     f30, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42E750u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F42E754:
    ctx->pc = 0x7F42E754u;
    // 7F42E754: psq_st   f30, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F42E754u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F42E754u);
        if (ctx->exception) return;
    }

label_7F42E758:
    ctx->pc = 0x7F42E758u;
    // 7F42E758: stmw     r26, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F42E75C:
    ctx->pc = 0x7F42E75Cu;
    // 7F42E75C: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F42E760:
    ctx->pc = 0x7F42E760u;
    // 7F42E760: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42E764:
    ctx->pc = 0x7F42E764u;
    // 7F42E764: lfs     f3, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42E764u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F42E768:
    ctx->pc = 0x7F42E768u;
    // 7F42E768: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F42E76C:
    ctx->pc = 0x7F42E76Cu;
    // 7F42E76C: lfs     f0, -5708(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F42E76Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-5708);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42E770:
    ctx->pc = 0x7F42E770u;
    // 7F42E770: lfs     f4, 56(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F42E770u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F42E774:
    ctx->pc = 0x7F42E774u;
    // 7F42E774: fcmpo   cr0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42E774u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[3], ctx->fpr[0], true);

label_7F42E778:
    ctx->pc = 0x7F42E778u;
    // 7F42E778: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F42E77C:
    ctx->pc = 0x7F42E77Cu;
    // 7F42E77C: bc    4, 2, 0x7F42E788
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42E788;
        }
    }

label_7F42E780:
    ctx->pc = 0x7F42E780u;
    ctx->downcount -= 2;
    // 7F42E780: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F42E784:
    ctx->pc = 0x7F42E784u;
    // 7F42E784: b       0x7F42E78C
    {
            goto label_7F42E78C;
    }

label_7F42E788:
    ctx->pc = 0x7F42E788u;
    ctx->downcount -= 1;
    // 7F42E788: neg  r3, r4
    {
        u32 a = ctx->gpr[4];
        ctx->gpr[3] = (~a) + 1u;
    }

label_7F42E78C:
    ctx->pc = 0x7F42E78Cu;
    ctx->downcount -= 15;
    // 7F42E78C: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F42E790:
    ctx->pc = 0x7F42E790u;
    // 7F42E790: lis     r5, 17200
    ctx->gpr[5] = ((u32)(s32)(17200) << 16);

label_7F42E794:
    ctx->pc = 0x7F42E794u;
    // 7F42E794: stw     r3, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42E798:
    ctx->pc = 0x7F42E798u;
    // 7F42E798: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F42E79C:
    ctx->pc = 0x7F42E79Cu;
    // 7F42E79C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F42E7A0:
    ctx->pc = 0x7F42E7A0u;
    // 7F42E7A0: lfd     f2, -10136(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42E7A0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-10136);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42E7A4:
    ctx->pc = 0x7F42E7A4u;
    // 7F42E7A4: stw     r5, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F42E7A8:
    ctx->pc = 0x7F42E7A8u;
    // 7F42E7A8: addi    r3, r3, -5708
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5708);

label_7F42E7AC:
    ctx->pc = 0x7F42E7ACu;
    // 7F42E7AC: lfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42E7ACu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42E7B0:
    ctx->pc = 0x7F42E7B0u;
    // 7F42E7B0: lfd     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42E7B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42E7B4:
    ctx->pc = 0x7F42E7B4u;
    // 7F42E7B4: fcmpo   cr0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42E7B4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[4], ctx->fpr[0], true);

label_7F42E7B8:
    ctx->pc = 0x7F42E7B8u;
    // 7F42E7B8: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F42E7B8u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F42E7BC:
    ctx->pc = 0x7F42E7BCu;
    // 7F42E7BC: fadds   f31, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42E7BCu)) return;
    ppc_fadds(ctx, 31, 3, 1);

label_7F42E7C0:
    ctx->pc = 0x7F42E7C0u;
    // 7F42E7C0: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F42E7C4:
    ctx->pc = 0x7F42E7C4u;
    // 7F42E7C4: bc    4, 2, 0x7F42E7CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42E7CC;
        }
    }

label_7F42E7C8:
    ctx->pc = 0x7F42E7C8u;
    ctx->downcount -= 1;
    // 7F42E7C8: b       0x7F42E7D0
    {
            goto label_7F42E7D0;
    }

label_7F42E7CC:
    ctx->pc = 0x7F42E7CCu;
    ctx->downcount -= 1;
    // 7F42E7CC: neg  r4, r4
    {
        u32 a = ctx->gpr[4];
        ctx->gpr[4] = (~a) + 1u;
    }

label_7F42E7D0:
    ctx->pc = 0x7F42E7D0u;
    ctx->downcount -= 18;
    // 7F42E7D0: xoris   r3, r4, 0x8000
    ctx->gpr[3] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F42E7D4:
    ctx->pc = 0x7F42E7D4u;
    // 7F42E7D4: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_7F42E7D8:
    ctx->pc = 0x7F42E7D8u;
    // 7F42E7D8: stw     r3, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42E7DC:
    ctx->pc = 0x7F42E7DCu;
    // 7F42E7DC: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F42E7E0:
    ctx->pc = 0x7F42E7E0u;
    // 7F42E7E0: lfd     f1, -10136(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F42E7E0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-10136);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42E7E4:
    ctx->pc = 0x7F42E7E4u;
    // 7F42E7E4: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F42E7E8:
    ctx->pc = 0x7F42E7E8u;
    // 7F42E7E8: stw     r4, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F42E7EC:
    ctx->pc = 0x7F42E7ECu;
    // 7F42E7EC: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F42E7F0:
    ctx->pc = 0x7F42E7F0u;
    // 7F42E7F0: lwz     r5, -2128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2128);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F42E7F4:
    ctx->pc = 0x7F42E7F4u;
    // 7F42E7F4: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F42E7F8:
    ctx->pc = 0x7F42E7F8u;
    // 7F42E7F8: lfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42E7F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42E7FC:
    ctx->pc = 0x7F42E7FCu;
    // 7F42E7FC: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_7F42E800:
    ctx->pc = 0x7F42E800u;
    // 7F42E800: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42E800u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F42E804:
    ctx->pc = 0x7F42E804u;
    // 7F42E804: fadds   f30, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42E804u)) return;
    ppc_fadds(ctx, 30, 4, 0);

label_7F42E808:
    ctx->pc = 0x7F42E808u;
    // 7F42E808: mtctr    r3
    ctx->ctr = ctx->gpr[3];

label_7F42E80C:
    ctx->pc = 0x7F42E80Cu;
    // 7F42E80C: cmpwi   r5, 1
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

label_7F42E810:
    ctx->pc = 0x7F42E810u;
    // 7F42E810: bc    4, 1, 0x7F42E890
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42E890;
        }
    }

label_7F42E814:
    ctx->pc = 0x7F42E814u;
    ctx->downcount -= 3;
    // 7F42E814: lwz     r3, 1180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42E818:
    // 7F42E818: cmpw    r3, r7
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(ctx->gpr[7]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42E81C:
    // 7F42E81C: bc    12, 2, 0x7F42E884
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42E884;
        }
    }

label_7F42E820:
    ctx->downcount -= 13;
    // 7F42E820: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F42E824:
    // 7F42E824: addi    r3, r3, -2124
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2124);

label_7F42E828:
    ctx->pc = 0x7F42E828u;
    // 7F42E828: lwzx    r6, r3, r4
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[4];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F42E82C:
    ctx->pc = 0x7F42E82Cu;
    // 7F42E82C: lfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42E82Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42E830:
    ctx->pc = 0x7F42E830u;
    // 7F42E830: fsubs   f0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42E830u)) return;
    ppc_fsubs(ctx, 0, 31, 0);

label_7F42E834:
    ctx->pc = 0x7F42E834u;
    // 7F42E834: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42E834u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F42E838:
    ctx->pc = 0x7F42E838u;
    // 7F42E838: stfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42E838u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42E83C:
    ctx->pc = 0x7F42E83Cu;
    // 7F42E83C: lwz     r3, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42E840:
    // 7F42E840: srawi r5, r3, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[3];
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

label_7F42E844:
    // 7F42E844: xor   r3, r5, r3
    {
        ctx->gpr[3] = ctx->gpr[5] ^ ctx->gpr[3];
    }

label_7F42E848:
    // 7F42E848: subf   r3, r5, r3
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F42E84C:
    // 7F42E84C: cmpwi   r3, 1400
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(1400);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42E850:
    // 7F42E850: bc    4, 0, 0x7F42E884
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42E884;
        }
    }

label_7F42E854:
    ctx->pc = 0x7F42E854u;
    ctx->downcount -= 10;
    // 7F42E854: lfs     f0, 8(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42E854u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42E858:
    ctx->pc = 0x7F42E858u;
    // 7F42E858: fsubs   f0, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42E858u)) return;
    ppc_fsubs(ctx, 0, 30, 0);

label_7F42E85C:
    ctx->pc = 0x7F42E85Cu;
    // 7F42E85C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42E85Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F42E860:
    ctx->pc = 0x7F42E860u;
    // 7F42E860: stfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42E860u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42E864:
    ctx->pc = 0x7F42E864u;
    // 7F42E864: lwz     r3, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42E868:
    // 7F42E868: srawi r5, r3, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[3];
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

label_7F42E86C:
    // 7F42E86C: xor   r3, r5, r3
    {
        ctx->gpr[3] = ctx->gpr[5] ^ ctx->gpr[3];
    }

label_7F42E870:
    // 7F42E870: subf   r3, r5, r3
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F42E874:
    // 7F42E874: cmpwi   r3, 1400
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(1400);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42E878:
    // 7F42E878: bc    4, 0, 0x7F42E884
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42E884;
        }
    }

label_7F42E87C:
    ctx->downcount -= 2;
    // 7F42E87C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F42E880:
    // 7F42E880: b       0x7F42E890
    {
            goto label_7F42E890;
    }

label_7F42E884:
    ctx->downcount -= 3;
    // 7F42E884: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_7F42E888:
    // 7F42E888: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F42E88C:
    // 7F42E88C: bc    16, 0, 0x7F42E814
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42E814u;
                return;
            }
            goto label_7F42E814;
        }
    }

label_7F42E890:
    ctx->pc = 0x7F42E890u;
    ctx->downcount -= 2;
    // 7F42E890: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42E894:
    ctx->pc = 0x7F42E894u;
    // 7F42E894: bc    12, 2, 0x7F42EB54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42EB54;
        }
    }

label_7F42E898:
    ctx->pc = 0x7F42E898u;
    ctx->downcount -= 4;
    // 7F42E898: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42E89C:
    ctx->pc = 0x7F42E89Cu;
    // 7F42E89C: lfs     f1, -10128(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42E89Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10128);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42E8A0:
    ctx->pc = 0x7F42E8A0u;
    // 7F42E8A0: fcmpo   cr0, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42E8A0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[3], ctx->fpr[1], true);

label_7F42E8A4:
    ctx->pc = 0x7F42E8A4u;
    // 7F42E8A4: bc    4, 0, 0x7F42E8F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42E8F0;
        }
    }

label_7F42E8A8:
    ctx->pc = 0x7F42E8A8u;
    ctx->downcount -= 4;
    // 7F42E8A8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42E8AC:
    ctx->pc = 0x7F42E8ACu;
    // 7F42E8AC: lfs     f0, -10124(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42E8ACu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10124);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42E8B0:
    ctx->pc = 0x7F42E8B0u;
    // 7F42E8B0: fcmpo   cr0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42E8B0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[0], true);

label_7F42E8B4:
    ctx->pc = 0x7F42E8B4u;
    // 7F42E8B4: bc    4, 0, 0x7F42E8BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42E8BC;
        }
    }

label_7F42E8B8:
    ctx->pc = 0x7F42E8B8u;
    ctx->downcount -= 1;
    // 7F42E8B8: fmr    f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42E8B8u)) return;
    ctx->fpr[31] = ctx->fpr[0];

label_7F42E8BC:
    ctx->pc = 0x7F42E8BCu;
    ctx->downcount -= 5;
    // 7F42E8BC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42E8C0:
    ctx->pc = 0x7F42E8C0u;
    // 7F42E8C0: lfs     f0, -10120(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42E8C0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42E8C4:
    ctx->pc = 0x7F42E8C4u;
    // 7F42E8C4: fcmpo   cr0, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42E8C4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[30], ctx->fpr[0], true);

label_7F42E8C8:
    ctx->pc = 0x7F42E8C8u;
    // 7F42E8C8: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F42E8CC:
    ctx->pc = 0x7F42E8CCu;
    // 7F42E8CC: bc    4, 2, 0x7F42E8D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42E8D8;
        }
    }

label_7F42E8D0:
    ctx->pc = 0x7F42E8D0u;
    ctx->downcount -= 2;
    // 7F42E8D0: fmr    f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42E8D0u)) return;
    ctx->fpr[30] = ctx->fpr[0];

label_7F42E8D4:
    ctx->pc = 0x7F42E8D4u;
    // 7F42E8D4: b       0x7F42EA5C
    {
            goto label_7F42EA5C;
    }

label_7F42E8D8:
    ctx->pc = 0x7F42E8D8u;
    ctx->downcount -= 4;
    // 7F42E8D8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42E8DC:
    ctx->pc = 0x7F42E8DCu;
    // 7F42E8DC: lfs     f0, -10116(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42E8DCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10116);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42E8E0:
    ctx->pc = 0x7F42E8E0u;
    // 7F42E8E0: fcmpo   cr0, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42E8E0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[30], ctx->fpr[0], true);

label_7F42E8E4:
    ctx->pc = 0x7F42E8E4u;
    // 7F42E8E4: bc    4, 1, 0x7F42EA5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42EA5C;
        }
    }

label_7F42E8E8:
    ctx->pc = 0x7F42E8E8u;
    ctx->downcount -= 2;
    // 7F42E8E8: fmr    f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42E8E8u)) return;
    ctx->fpr[30] = ctx->fpr[0];

label_7F42E8EC:
    ctx->pc = 0x7F42E8ECu;
    // 7F42E8EC: b       0x7F42EA5C
    {
            goto label_7F42EA5C;
    }

label_7F42E8F0:
    ctx->pc = 0x7F42E8F0u;
    ctx->downcount -= 4;
    // 7F42E8F0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42E8F4:
    ctx->pc = 0x7F42E8F4u;
    // 7F42E8F4: lfs     f2, -10112(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42E8F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F42E8F8:
    ctx->pc = 0x7F42E8F8u;
    // 7F42E8F8: fcmpo   cr0, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F42E8F8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[3], ctx->fpr[2], true);

label_7F42E8FC:
    ctx->pc = 0x7F42E8FCu;
    // 7F42E8FC: bc    4, 0, 0x7F42E964
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42E964;
        }
    }

label_7F42E900:
    ctx->pc = 0x7F42E900u;
    ctx->downcount -= 4;
    // 7F42E900: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42E904:
    ctx->pc = 0x7F42E904u;
    // 7F42E904: lfs     f0, -10120(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42E904u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42E908:
    ctx->pc = 0x7F42E908u;
    // 7F42E908: fcmpo   cr0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42E908u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[4], ctx->fpr[0], true);

label_7F42E90C:
    ctx->pc = 0x7F42E90Cu;
    // 7F42E90C: bc    4, 0, 0x7F42E938
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42E938;
        }
    }

label_7F42E910:
    ctx->pc = 0x7F42E910u;
    ctx->downcount -= 2;
    // 7F42E910: fcmpo   cr0, f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42E910u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[1], true);

label_7F42E914:
    ctx->pc = 0x7F42E914u;
    // 7F42E914: bc    4, 0, 0x7F42E91C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42E91C;
        }
    }

label_7F42E918:
    ctx->pc = 0x7F42E918u;
    ctx->downcount -= 1;
    // 7F42E918: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42E918u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F42E91C:
    ctx->pc = 0x7F42E91Cu;
    ctx->downcount -= 5;
    // 7F42E91C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42E920:
    ctx->pc = 0x7F42E920u;
    // 7F42E920: lfs     f0, -10108(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42E920u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10108);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42E924:
    ctx->pc = 0x7F42E924u;
    // 7F42E924: fcmpo   cr0, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42E924u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[30], ctx->fpr[0], true);

label_7F42E928:
    ctx->pc = 0x7F42E928u;
    // 7F42E928: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F42E92C:
    ctx->pc = 0x7F42E92Cu;
    // 7F42E92C: bc    4, 2, 0x7F42EA5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42EA5C;
        }
    }

label_7F42E930:
    ctx->pc = 0x7F42E930u;
    ctx->downcount -= 2;
    // 7F42E930: fmr    f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42E930u)) return;
    ctx->fpr[30] = ctx->fpr[0];

label_7F42E934:
    ctx->pc = 0x7F42E934u;
    // 7F42E934: b       0x7F42EA5C
    {
            goto label_7F42EA5C;
    }

label_7F42E938:
    ctx->pc = 0x7F42E938u;
    ctx->downcount -= 3;
    // 7F42E938: fcmpo   cr0, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42E938u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[30], ctx->fpr[0], true);

label_7F42E93C:
    ctx->pc = 0x7F42E93Cu;
    // 7F42E93C: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F42E940:
    ctx->pc = 0x7F42E940u;
    // 7F42E940: bc    4, 2, 0x7F42E94C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42E94C;
        }
    }

label_7F42E944:
    ctx->pc = 0x7F42E944u;
    ctx->downcount -= 2;
    // 7F42E944: fmr    f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42E944u)) return;
    ctx->fpr[30] = ctx->fpr[0];

label_7F42E948:
    ctx->pc = 0x7F42E948u;
    // 7F42E948: b       0x7F42EA5C
    {
            goto label_7F42EA5C;
    }

label_7F42E94C:
    ctx->pc = 0x7F42E94Cu;
    ctx->downcount -= 4;
    // 7F42E94C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42E950:
    ctx->pc = 0x7F42E950u;
    // 7F42E950: lfs     f0, -10116(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42E950u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10116);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42E954:
    ctx->pc = 0x7F42E954u;
    // 7F42E954: fcmpo   cr0, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42E954u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[30], ctx->fpr[0], true);

label_7F42E958:
    ctx->pc = 0x7F42E958u;
    // 7F42E958: bc    4, 1, 0x7F42EA5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42EA5C;
        }
    }

label_7F42E95C:
    ctx->pc = 0x7F42E95Cu;
    ctx->downcount -= 2;
    // 7F42E95C: fmr    f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42E95Cu)) return;
    ctx->fpr[30] = ctx->fpr[0];

label_7F42E960:
    ctx->pc = 0x7F42E960u;
    // 7F42E960: b       0x7F42EA5C
    {
            goto label_7F42EA5C;
    }

label_7F42E964:
    ctx->pc = 0x7F42E964u;
    ctx->downcount -= 5;
    // 7F42E964: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42E968:
    ctx->pc = 0x7F42E968u;
    // 7F42E968: lfs     f1, -10104(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42E968u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42E96C:
    ctx->pc = 0x7F42E96Cu;
    // 7F42E96C: fcmpo   cr0, f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42E96Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[1], true);

label_7F42E970:
    ctx->pc = 0x7F42E970u;
    // 7F42E970: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F42E974:
    ctx->pc = 0x7F42E974u;
    // 7F42E974: bc    4, 2, 0x7F42E9E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42E9E4;
        }
    }

label_7F42E978:
    ctx->pc = 0x7F42E978u;
    ctx->downcount -= 4;
    // 7F42E978: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42E97C:
    ctx->pc = 0x7F42E97Cu;
    // 7F42E97C: lfs     f0, -10108(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42E97Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10108);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42E980:
    ctx->pc = 0x7F42E980u;
    // 7F42E980: fcmpo   cr0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42E980u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[4], ctx->fpr[0], true);

label_7F42E984:
    ctx->pc = 0x7F42E984u;
    // 7F42E984: bc    4, 0, 0x7F42E9B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42E9B0;
        }
    }

label_7F42E988:
    ctx->pc = 0x7F42E988u;
    ctx->downcount -= 2;
    // 7F42E988: fcmpo   cr0, f31, f2
    if (!ppc_fp_available_inline(ctx, 0x7F42E988u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[2], true);

label_7F42E98C:
    ctx->pc = 0x7F42E98Cu;
    // 7F42E98C: bc    4, 0, 0x7F42E994
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42E994;
        }
    }

label_7F42E990:
    ctx->pc = 0x7F42E990u;
    ctx->downcount -= 1;
    // 7F42E990: fmr    f31, f2
    if (!ppc_fp_available_inline(ctx, 0x7F42E990u)) return;
    ctx->fpr[31] = ctx->fpr[2];

label_7F42E994:
    ctx->pc = 0x7F42E994u;
    ctx->downcount -= 5;
    // 7F42E994: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42E998:
    ctx->pc = 0x7F42E998u;
    // 7F42E998: lfs     f0, -10100(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42E998u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42E99C:
    ctx->pc = 0x7F42E99Cu;
    // 7F42E99C: fcmpo   cr0, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42E99Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[30], ctx->fpr[0], true);

label_7F42E9A0:
    ctx->pc = 0x7F42E9A0u;
    // 7F42E9A0: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F42E9A4:
    ctx->pc = 0x7F42E9A4u;
    // 7F42E9A4: bc    4, 2, 0x7F42EA5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42EA5C;
        }
    }

label_7F42E9A8:
    ctx->pc = 0x7F42E9A8u;
    ctx->downcount -= 2;
    // 7F42E9A8: fmr    f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42E9A8u)) return;
    ctx->fpr[30] = ctx->fpr[0];

label_7F42E9AC:
    ctx->pc = 0x7F42E9ACu;
    // 7F42E9AC: b       0x7F42EA5C
    {
            goto label_7F42EA5C;
    }

label_7F42E9B0:
    ctx->pc = 0x7F42E9B0u;
    ctx->downcount -= 5;
    // 7F42E9B0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42E9B4:
    ctx->pc = 0x7F42E9B4u;
    // 7F42E9B4: lfs     f0, -10100(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42E9B4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42E9B8:
    ctx->pc = 0x7F42E9B8u;
    // 7F42E9B8: fcmpo   cr0, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42E9B8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[30], ctx->fpr[0], true);

label_7F42E9BC:
    ctx->pc = 0x7F42E9BCu;
    // 7F42E9BC: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F42E9C0:
    ctx->pc = 0x7F42E9C0u;
    // 7F42E9C0: bc    4, 2, 0x7F42E9CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42E9CC;
        }
    }

label_7F42E9C4:
    ctx->pc = 0x7F42E9C4u;
    ctx->downcount -= 2;
    // 7F42E9C4: fmr    f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42E9C4u)) return;
    ctx->fpr[30] = ctx->fpr[0];

label_7F42E9C8:
    ctx->pc = 0x7F42E9C8u;
    // 7F42E9C8: b       0x7F42EA5C
    {
            goto label_7F42EA5C;
    }

label_7F42E9CC:
    ctx->pc = 0x7F42E9CCu;
    ctx->downcount -= 4;
    // 7F42E9CC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42E9D0:
    ctx->pc = 0x7F42E9D0u;
    // 7F42E9D0: lfs     f0, -10116(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42E9D0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10116);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42E9D4:
    ctx->pc = 0x7F42E9D4u;
    // 7F42E9D4: fcmpo   cr0, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42E9D4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[30], ctx->fpr[0], true);

label_7F42E9D8:
    ctx->pc = 0x7F42E9D8u;
    // 7F42E9D8: bc    4, 1, 0x7F42EA5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42EA5C;
        }
    }

label_7F42E9DC:
    ctx->pc = 0x7F42E9DCu;
    ctx->downcount -= 2;
    // 7F42E9DC: fmr    f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42E9DCu)) return;
    ctx->fpr[30] = ctx->fpr[0];

label_7F42E9E0:
    ctx->pc = 0x7F42E9E0u;
    // 7F42E9E0: b       0x7F42EA5C
    {
            goto label_7F42EA5C;
    }

label_7F42E9E4:
    ctx->pc = 0x7F42E9E4u;
    ctx->downcount -= 4;
    // 7F42E9E4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42E9E8:
    ctx->pc = 0x7F42E9E8u;
    // 7F42E9E8: lfs     f0, -10096(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42E9E8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10096);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42E9EC:
    ctx->pc = 0x7F42E9ECu;
    // 7F42E9EC: fcmpo   cr0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42E9ECu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[4], ctx->fpr[0], true);

label_7F42E9F0:
    ctx->pc = 0x7F42E9F0u;
    // 7F42E9F0: bc    4, 0, 0x7F42EA18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42EA18;
        }
    }

label_7F42E9F4:
    ctx->pc = 0x7F42E9F4u;
    ctx->downcount -= 2;
    // 7F42E9F4: fcmpo   cr0, f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42E9F4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[1], true);

label_7F42E9F8:
    ctx->pc = 0x7F42E9F8u;
    // 7F42E9F8: bc    4, 1, 0x7F42EA00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42EA00;
        }
    }

label_7F42E9FC:
    ctx->pc = 0x7F42E9FCu;
    ctx->downcount -= 1;
    // 7F42E9FC: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42E9FCu)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F42EA00:
    ctx->pc = 0x7F42EA00u;
    ctx->downcount -= 4;
    // 7F42EA00: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42EA04:
    ctx->pc = 0x7F42EA04u;
    // 7F42EA04: lfs     f0, -10100(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42EA04u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42EA08:
    ctx->pc = 0x7F42EA08u;
    // 7F42EA08: fcmpo   cr0, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42EA08u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[30], ctx->fpr[0], true);

label_7F42EA0C:
    ctx->pc = 0x7F42EA0Cu;
    // 7F42EA0C: bc    4, 0, 0x7F42EA5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42EA5C;
        }
    }

label_7F42EA10:
    ctx->pc = 0x7F42EA10u;
    ctx->downcount -= 2;
    // 7F42EA10: fmr    f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42EA10u)) return;
    ctx->fpr[30] = ctx->fpr[0];

label_7F42EA14:
    ctx->pc = 0x7F42EA14u;
    // 7F42EA14: b       0x7F42EA5C
    {
            goto label_7F42EA5C;
    }

label_7F42EA18:
    ctx->pc = 0x7F42EA18u;
    ctx->downcount -= 4;
    // 7F42EA18: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42EA1C:
    ctx->pc = 0x7F42EA1Cu;
    // 7F42EA1C: lfs     f0, -10092(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42EA1Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10092);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42EA20:
    ctx->pc = 0x7F42EA20u;
    // 7F42EA20: fcmpo   cr0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42EA20u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[0], true);

label_7F42EA24:
    ctx->pc = 0x7F42EA24u;
    // 7F42EA24: bc    4, 1, 0x7F42EA2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42EA2C;
        }
    }

label_7F42EA28:
    ctx->pc = 0x7F42EA28u;
    ctx->downcount -= 1;
    // 7F42EA28: fmr    f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42EA28u)) return;
    ctx->fpr[31] = ctx->fpr[0];

label_7F42EA2C:
    ctx->pc = 0x7F42EA2Cu;
    ctx->downcount -= 5;
    // 7F42EA2C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42EA30:
    ctx->pc = 0x7F42EA30u;
    // 7F42EA30: lfs     f0, -10096(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42EA30u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10096);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42EA34:
    ctx->pc = 0x7F42EA34u;
    // 7F42EA34: fcmpo   cr0, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42EA34u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[30], ctx->fpr[0], true);

label_7F42EA38:
    ctx->pc = 0x7F42EA38u;
    // 7F42EA38: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F42EA3C:
    ctx->pc = 0x7F42EA3Cu;
    // 7F42EA3C: bc    4, 2, 0x7F42EA48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42EA48;
        }
    }

label_7F42EA40:
    ctx->pc = 0x7F42EA40u;
    ctx->downcount -= 2;
    // 7F42EA40: fmr    f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42EA40u)) return;
    ctx->fpr[30] = ctx->fpr[0];

label_7F42EA44:
    ctx->pc = 0x7F42EA44u;
    // 7F42EA44: b       0x7F42EA5C
    {
            goto label_7F42EA5C;
    }

label_7F42EA48:
    ctx->pc = 0x7F42EA48u;
    ctx->downcount -= 4;
    // 7F42EA48: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42EA4C:
    ctx->pc = 0x7F42EA4Cu;
    // 7F42EA4C: lfs     f0, -10116(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42EA4Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10116);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42EA50:
    ctx->pc = 0x7F42EA50u;
    // 7F42EA50: fcmpo   cr0, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42EA50u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[30], ctx->fpr[0], true);

label_7F42EA54:
    ctx->pc = 0x7F42EA54u;
    // 7F42EA54: bc    4, 1, 0x7F42EA5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42EA5C;
        }
    }

label_7F42EA58:
    ctx->pc = 0x7F42EA58u;
    ctx->downcount -= 1;
    // 7F42EA58: fmr    f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42EA58u)) return;
    ctx->fpr[30] = ctx->fpr[0];

label_7F42EA5C:
    ctx->pc = 0x7F42EA5Cu;
    ctx->downcount -= 3;
    // 7F42EA5C: lfs     f0, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F42EA5Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42EA60:
    ctx->pc = 0x7F42EA60u;
    // 7F42EA60: fcmpu   cr0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42EA60u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[0], false);

label_7F42EA64:
    ctx->pc = 0x7F42EA64u;
    // 7F42EA64: bc    4, 2, 0x7F42EA74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42EA74;
        }
    }

label_7F42EA68:
    ctx->pc = 0x7F42EA68u;
    ctx->downcount -= 3;
    // 7F42EA68: lfs     f0, 56(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F42EA68u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42EA6C:
    ctx->pc = 0x7F42EA6Cu;
    // 7F42EA6C: fcmpu   cr0, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42EA6Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[30], ctx->fpr[0], false);

label_7F42EA70:
    ctx->pc = 0x7F42EA70u;
    // 7F42EA70: bc    12, 2, 0x7F42EB7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42EB7C;
        }
    }

label_7F42EA74:
    ctx->pc = 0x7F42EA74u;
    ctx->downcount -= 3;
    // 7F42EA74: lwz     r0, 1180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42EA78:
    ctx->pc = 0x7F42EA78u;
    // 7F42EA78: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42EA7C:
    ctx->pc = 0x7F42EA7Cu;
    // 7F42EA7C: bc    12, 2, 0x7F42EB48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42EB48;
        }
    }

label_7F42EA80:
    ctx->pc = 0x7F42EA80u;
    ctx->downcount -= 31;
    // 7F42EA80: fctiwz    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F42EA80u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[31], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F42EA84:
    ctx->pc = 0x7F42EA84u;
    // 7F42EA84: addi    r29, r1, 24
    ctx->gpr[29] = ctx->gpr[1] + (u32)(s32)(24);

label_7F42EA88:
    ctx->pc = 0x7F42EA88u;
    // 7F42EA88: fctiwz    f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F42EA88u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[30], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F42EA8C:
    ctx->pc = 0x7F42EA8Cu;
    // 7F42EA8C: li      r6, 1000
    ctx->gpr[6] = (u32)(s32)(1000);

label_7F42EA90:
    ctx->pc = 0x7F42EA90u;
    // 7F42EA90: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F42EA94:
    ctx->pc = 0x7F42EA94u;
    // 7F42EA94: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F42EA98:
    ctx->pc = 0x7F42EA98u;
    // 7F42EA98: stfd     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42EA98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F42EA9C:
    ctx->pc = 0x7F42EA9Cu;
    // 7F42EA9C: lwz     r3, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42EAA0:
    ctx->pc = 0x7F42EAA0u;
    // 7F42EAA0: stfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42EAA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42EAA4:
    ctx->pc = 0x7F42EAA4u;
    // 7F42EAA4: addi    r26, r3, 500
    ctx->gpr[26] = ctx->gpr[3] + (u32)(s32)(500);

label_7F42EAA8:
    ctx->pc = 0x7F42EAA8u;
    // 7F42EAA8: addi    r27, r3, -500
    ctx->gpr[27] = ctx->gpr[3] + (u32)(s32)(-500);

label_7F42EAAC:
    ctx->pc = 0x7F42EAACu;
    // 7F42EAAC: stw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F42EAB0:
    ctx->pc = 0x7F42EAB0u;
    // 7F42EAB0: lwz     r28, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F42EAB4:
    ctx->pc = 0x7F42EAB4u;
    // 7F42EAB4: lfs     f0, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F42EAB4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42EAB8:
    ctx->pc = 0x7F42EAB8u;
    // 7F42EAB8: addi    r30, r28, 500
    ctx->gpr[30] = ctx->gpr[28] + (u32)(s32)(500);

label_7F42EABC:
    ctx->pc = 0x7F42EABCu;
    // 7F42EABC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42EABCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F42EAC0:
    ctx->pc = 0x7F42EAC0u;
    // 7F42EAC0: stw     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F42EAC4:
    ctx->pc = 0x7F42EAC4u;
    // 7F42EAC4: stw     r6, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F42EAC8:
    ctx->pc = 0x7F42EAC8u;
    // 7F42EAC8: stfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42EAC8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42EACC:
    ctx->pc = 0x7F42EACCu;
    // 7F42EACC: stfd     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42EACCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42EAD0:
    ctx->pc = 0x7F42EAD0u;
    // 7F42EAD0: lwz     r7, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F42EAD4:
    ctx->pc = 0x7F42EAD4u;
    // 7F42EAD4: lwz     r3, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42EAD8:
    ctx->pc = 0x7F42EAD8u;
    // 7F42EAD8: addi    r7, r7, -1000
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-1000);

label_7F42EADC:
    ctx->pc = 0x7F42EADCu;
    // 7F42EADC: stw     r27, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F42EAE0:
    ctx->pc = 0x7F42EAE0u;
    // 7F42EAE0: addi    r0, r3, -1000
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1000);

label_7F42EAE4:
    ctx->pc = 0x7F42EAE4u;
    // 7F42EAE4: stw     r7, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F42EAE8:
    ctx->pc = 0x7F42EAE8u;
    // 7F42EAE8: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42EAEC:
    ctx->pc = 0x7F42EAECu;
    // 7F42EAEC: stw     r30, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F42EAF0:
    ctx->pc = 0x7F42EAF0u;
    // 7F42EAF0: stw     r6, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F42EAF4:
    ctx->pc = 0x7F42EAF4u;
    // 7F42EAF4: lwz     r3, 620(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(620);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42EAF8:
    ctx->pc = 0x7F42EAF8u;
    // 7F42EAF8: bl      0x7F10BB20
    {
            ctx->lr = 0x7F42EAFCu;
            ctx->pc = 0x7F10BB20u;
            return;
    }

label_7F42EAFC:
    ctx->pc = 0x7F42EAFCu;
    ctx->downcount -= 7;
    // 7F42EAFC: addi    r0, r28, -500
    ctx->gpr[0] = ctx->gpr[28] + (u32)(s32)(-500);

label_7F42EB00:
    ctx->pc = 0x7F42EB00u;
    // 7F42EB00: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F42EB04:
    ctx->pc = 0x7F42EB04u;
    // 7F42EB04: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42EB08:
    ctx->pc = 0x7F42EB08u;
    // 7F42EB08: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F42EB0C:
    ctx->pc = 0x7F42EB0Cu;
    // 7F42EB0C: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42EB10:
    ctx->pc = 0x7F42EB10u;
    // 7F42EB10: lwz     r3, 624(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(624);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42EB14:
    ctx->pc = 0x7F42EB14u;
    // 7F42EB14: bl      0x7F10BB20
    {
            ctx->lr = 0x7F42EB18u;
            ctx->pc = 0x7F10BB20u;
            return;
    }

label_7F42EB18:
    ctx->pc = 0x7F42EB18u;
    ctx->downcount -= 6;
    // 7F42EB18: stw     r27, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F42EB1C:
    ctx->pc = 0x7F42EB1Cu;
    // 7F42EB1C: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F42EB20:
    ctx->pc = 0x7F42EB20u;
    // 7F42EB20: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F42EB24:
    ctx->pc = 0x7F42EB24u;
    // 7F42EB24: stw     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F42EB28:
    ctx->pc = 0x7F42EB28u;
    // 7F42EB28: lwz     r3, 628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(628);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42EB2C:
    ctx->pc = 0x7F42EB2Cu;
    // 7F42EB2C: bl      0x7F10BB20
    {
            ctx->lr = 0x7F42EB30u;
            ctx->pc = 0x7F10BB20u;
            return;
    }

label_7F42EB30:
    ctx->pc = 0x7F42EB30u;
    ctx->downcount -= 6;
    // 7F42EB30: stw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F42EB34:
    ctx->pc = 0x7F42EB34u;
    // 7F42EB34: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F42EB38:
    ctx->pc = 0x7F42EB38u;
    // 7F42EB38: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F42EB3C:
    ctx->pc = 0x7F42EB3Cu;
    // 7F42EB3C: stw     r26, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F42EB40:
    ctx->pc = 0x7F42EB40u;
    // 7F42EB40: lwz     r3, 632(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(632);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42EB44:
    ctx->pc = 0x7F42EB44u;
    // 7F42EB44: bl      0x7F10BB20
    {
            ctx->lr = 0x7F42EB48u;
            ctx->pc = 0x7F10BB20u;
            return;
    }

label_7F42EB48:
    ctx->pc = 0x7F42EB48u;
    ctx->downcount -= 3;
    // 7F42EB48: stfs     f31, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F42EB48u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F42EB4C:
    ctx->pc = 0x7F42EB4Cu;
    // 7F42EB4C: stfs     f30, 56(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F42EB4Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

label_7F42EB50:
    ctx->pc = 0x7F42EB50u;
    // 7F42EB50: b       0x7F42EB7C
    {
            goto label_7F42EB7C;
    }

label_7F42EB54:
    ctx->pc = 0x7F42EB54u;
    ctx->downcount -= 3;
    // 7F42EB54: lwz     r0, 1184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1184);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42EB58:
    ctx->pc = 0x7F42EB58u;
    // 7F42EB58: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42EB5C:
    ctx->pc = 0x7F42EB5Cu;
    // 7F42EB5C: bc    4, 2, 0x7F42EB7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42EB7C;
        }
    }

label_7F42EB60:
    ctx->pc = 0x7F42EB60u;
    ctx->downcount -= 4;
    // 7F42EB60: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_7F42EB64:
    ctx->pc = 0x7F42EB64u;
    // 7F42EB64: li      r3, 2176
    ctx->gpr[3] = (u32)(s32)(2176);

label_7F42EB68:
    ctx->pc = 0x7F42EB68u;
    // 7F42EB68: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F42EB6C:
    ctx->pc = 0x7F42EB6Cu;
    // 7F42EB6C: bl      0x7F0117B8
    {
            ctx->lr = 0x7F42EB70u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F42EB70:
    ctx->pc = 0x7F42EB70u;
    ctx->downcount -= 3;
    // 7F42EB70: lwz     r3, 1184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42EB74:
    ctx->pc = 0x7F42EB74u;
    // 7F42EB74: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F42EB78:
    ctx->pc = 0x7F42EB78u;
    // 7F42EB78: stw     r0, 1184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1184);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42EB7C:
    ctx->pc = 0x7F42EB7Cu;
    ctx->downcount -= 20;
    // 7F42EB7C: psq_l   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F42EB7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F42EB7Cu);
        if (ctx->exception) return;
    }

label_7F42EB80:
    ctx->pc = 0x7F42EB80u;
    // 7F42EB80: lfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42EB80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42EB84:
    ctx->pc = 0x7F42EB84u;
    // 7F42EB84: psq_l   f30, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F42EB84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F42EB84u);
        if (ctx->exception) return;
    }

label_7F42EB88:
    ctx->pc = 0x7F42EB88u;
    // 7F42EB88: lfd     f30, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42EB88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42EB8C:
    ctx->pc = 0x7F42EB8Cu;
    // 7F42EB8C: lmw     r26, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F42EB90:
    ctx->pc = 0x7F42EB90u;
    // 7F42EB90: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42EB94:
    ctx->pc = 0x7F42EB94u;
    // 7F42EB94: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42EB98:
    ctx->pc = 0x7F42EB98u;
    // 7F42EB98: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_7F42EB9C:
    ctx->pc = 0x7F42EB9Cu;
    // 7F42EB9C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42EBA0:
    ctx->pc = 0x7F42EBA0u;
    ctx->downcount -= 28;
    // 7F42EBA0: stwu     r1, -208(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-208);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42EBA4:
    ctx->pc = 0x7F42EBA4u;
    // 7F42EBA4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42EBA8:
    ctx->pc = 0x7F42EBA8u;
    // 7F42EBA8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F42EBAC:
    ctx->pc = 0x7F42EBACu;
    // 7F42EBAC: stw     r0, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42EBB0:
    ctx->pc = 0x7F42EBB0u;
    // 7F42EBB0: stmw     r27, 188(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F42EBB4:
    ctx->pc = 0x7F42EBB4u;
    // 7F42EBB4: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F42EBB8:
    ctx->pc = 0x7F42EBB8u;
    // 7F42EBB8: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42EBBC:
    ctx->pc = 0x7F42EBBCu;
    // 7F42EBBC: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F42EBC0:
    ctx->pc = 0x7F42EBC0u;
    // 7F42EBC0: lwz     r0, 152(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(152);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42EBC4:
    ctx->pc = 0x7F42EBC4u;
    // 7F42EBC4: lwz     r7, 156(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(156);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F42EBC8:
    ctx->pc = 0x7F42EBC8u;
    // 7F42EBC8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F42EBCC:
    ctx->pc = 0x7F42EBCCu;
    // 7F42EBCC: and   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[6];
    }

label_7F42EBD0:
    ctx->pc = 0x7F42EBD0u;
    // 7F42EBD0: and   r3, r7, r4
    {
        ctx->gpr[3] = ctx->gpr[7] & ctx->gpr[4];
    }

label_7F42EBD4:
    ctx->pc = 0x7F42EBD4u;
    // 7F42EBD4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F42EBD8:
    ctx->pc = 0x7F42EBD8u;
    // 7F42EBD8: xor   r3, r3, r6
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[6];
    }

label_7F42EBDC:
    ctx->pc = 0x7F42EBDCu;
    // 7F42EBDC: xor   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[6];
    }

label_7F42EBE0:
    ctx->pc = 0x7F42EBE0u;
    // 7F42EBE0: or.   r0, r3, r0
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

label_7F42EBE4:
    ctx->pc = 0x7F42EBE4u;
    // 7F42EBE4: bc    12, 2, 0x7F42EE9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42EE9C;
        }
    }

label_7F42EBE8:
    ctx->pc = 0x7F42EBE8u;
    ctx->downcount -= 3;
    // 7F42EBE8: lwz     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42EBEC:
    ctx->pc = 0x7F42EBECu;
    // 7F42EBEC: rlwinm. r0, r0, 0, 31, 31
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

label_7F42EBF0:
    ctx->pc = 0x7F42EBF0u;
    // 7F42EBF0: bc    12, 2, 0x7F42EE9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42EE9C;
        }
    }

label_7F42EBF4:
    ctx->pc = 0x7F42EBF4u;
    ctx->downcount -= 11;
    // 7F42EBF4: lis     r3, 5
    ctx->gpr[3] = ((u32)(s32)(5) << 16);

label_7F42EBF8:
    ctx->pc = 0x7F42EBF8u;
    // 7F42EBF8: lwz     r4, 144(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(144);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F42EBFC:
    ctx->pc = 0x7F42EBFCu;
    // 7F42EBFC: lis     r0, 8
    ctx->gpr[0] = ((u32)(s32)(8) << 16);

label_7F42EC00:
    ctx->pc = 0x7F42EC00u;
    // 7F42EC00: lwz     r5, 148(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(148);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F42EC04:
    ctx->pc = 0x7F42EC04u;
    // 7F42EC04: addi    r3, r3, -32740
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32740);

label_7F42EC08:
    ctx->pc = 0x7F42EC08u;
    // 7F42EC08: and   r3, r5, r3
    {
        ctx->gpr[3] = ctx->gpr[5] & ctx->gpr[3];
    }

label_7F42EC0C:
    ctx->pc = 0x7F42EC0Cu;
    // 7F42EC0C: and   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] & ctx->gpr[0];
    }

label_7F42EC10:
    ctx->pc = 0x7F42EC10u;
    // 7F42EC10: xor   r3, r3, r6
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[6];
    }

label_7F42EC14:
    ctx->pc = 0x7F42EC14u;
    // 7F42EC14: xor   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[6];
    }

label_7F42EC18:
    ctx->pc = 0x7F42EC18u;
    // 7F42EC18: or.   r0, r3, r0
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

label_7F42EC1C:
    ctx->pc = 0x7F42EC1Cu;
    // 7F42EC1C: bc    12, 2, 0x7F42EE9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42EE9C;
        }
    }

label_7F42EC20:
    ctx->pc = 0x7F42EC20u;
    ctx->downcount -= 6;
    // 7F42EC20: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F42EC24:
    ctx->pc = 0x7F42EC24u;
    // 7F42EC24: addi    r4, r29, 128
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(128);

label_7F42EC28:
    ctx->pc = 0x7F42EC28u;
    // 7F42EC28: addi    r3, r3, 28636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28636);

label_7F42EC2C:
    ctx->pc = 0x7F42EC2Cu;
    // 7F42EC2C: addi    r5, r1, 40
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(40);

label_7F42EC30:
    ctx->pc = 0x7F42EC30u;
    // 7F42EC30: addi    r3, r3, 176
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(176);

label_7F42EC34:
    ctx->pc = 0x7F42EC34u;
    // 7F42EC34: bl      0x80025FFC
    {
            ctx->lr = 0x7F42EC38u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F42EC38:
    ctx->pc = 0x7F42EC38u;
    ctx->downcount -= 8;
    // 7F42EC38: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42EC3C:
    ctx->pc = 0x7F42EC3Cu;
    // 7F42EC3C: lfs     f1, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42EC3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42EC40:
    ctx->pc = 0x7F42EC40u;
    // 7F42EC40: lfs     f0, -10088(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42EC40u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10088);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42EC44:
    ctx->pc = 0x7F42EC44u;
    // 7F42EC44: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F42EC48:
    ctx->pc = 0x7F42EC48u;
    // 7F42EC48: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42EC4C:
    ctx->pc = 0x7F42EC4Cu;
    // 7F42EC4C: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42EC4Cu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F42EC50:
    ctx->pc = 0x7F42EC50u;
    // 7F42EC50: stfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42EC50u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42EC54:
    ctx->pc = 0x7F42EC54u;
    // 7F42EC54: bl      0x7F114F50
    {
            ctx->lr = 0x7F42EC58u;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F42EC58:
    ctx->pc = 0x7F42EC58u;
    ctx->downcount -= 4;
    // 7F42EC58: addi    r3, r29, 128
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(128);

label_7F42EC5C:
    ctx->pc = 0x7F42EC5Cu;
    // 7F42EC5C: addi    r4, r28, 80
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(80);

label_7F42EC60:
    ctx->pc = 0x7F42EC60u;
    // 7F42EC60: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F42EC64:
    ctx->pc = 0x7F42EC64u;
    // 7F42EC64: bl      0x80025FFC
    {
            ctx->lr = 0x7F42EC68u;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F42EC68:
    ctx->pc = 0x7F42EC68u;
    ctx->downcount -= 2;
    // 7F42EC68: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F42EC6C:
    ctx->pc = 0x7F42EC6Cu;
    // 7F42EC6C: bl      0x80026080
    {
            ctx->lr = 0x7F42EC70u;
            ctx->pc = 0x80026080u;
            return;
    }

label_7F42EC70:
    ctx->pc = 0x7F42EC70u;
    ctx->downcount -= 4;
    // 7F42EC70: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42EC74:
    ctx->pc = 0x7F42EC74u;
    // 7F42EC74: lfs     f0, -10152(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42EC74u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10152);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42EC78:
    ctx->pc = 0x7F42EC78u;
    // 7F42EC78: fcmpu   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42EC78u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], false);

label_7F42EC7C:
    ctx->pc = 0x7F42EC7Cu;
    // 7F42EC7C: bc    12, 2, 0x7F42ECA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42ECA0;
        }
    }

label_7F42EC80:
    ctx->pc = 0x7F42EC80u;
    ctx->downcount -= 4;
    // 7F42EC80: addi    r3, r1, 104
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(104);

label_7F42EC84:
    ctx->pc = 0x7F42EC84u;
    // 7F42EC84: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F42EC88:
    ctx->pc = 0x7F42EC88u;
    // 7F42EC88: addi    r5, r29, 128
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(128);

label_7F42EC8C:
    ctx->pc = 0x7F42EC8Cu;
    // 7F42EC8C: bl      0x7F22F07C
    {
            ctx->lr = 0x7F42EC90u;
            ctx->pc = 0x7F22F07Cu;
            return;
    }

label_7F42EC90:
    ctx->pc = 0x7F42EC90u;
    ctx->downcount -= 4;
    // 7F42EC90: lwz     r3, 1192(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1192);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42EC94:
    ctx->pc = 0x7F42EC94u;
    // 7F42EC94: addi    r4, r1, 104
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(104);

label_7F42EC98:
    ctx->pc = 0x7F42EC98u;
    // 7F42EC98: addi    r5, r1, 40
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(40);

label_7F42EC9C:
    ctx->pc = 0x7F42EC9Cu;
    // 7F42EC9C: bl      0x7F018110
    {
            ctx->lr = 0x7F42ECA0u;
            ctx->pc = 0x7F018110u;
            return;
    }

label_7F42ECA0:
    ctx->pc = 0x7F42ECA0u;
    ctx->downcount -= 42;
    // 7F42ECA0: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42ECA4:
    ctx->pc = 0x7F42ECA4u;
    // 7F42ECA4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42ECA8:
    ctx->pc = 0x7F42ECA8u;
    // 7F42ECA8: lfs     f1, -10084(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42ECA8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10084);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42ECAC:
    ctx->pc = 0x7F42ECACu;
    // 7F42ECAC: addi    r5, r3, -10076
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-10076);

label_7F42ECB0:
    ctx->pc = 0x7F42ECB0u;
    // 7F42ECB0: lfs     f2, 1072(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42ECB0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1072);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F42ECB4:
    ctx->pc = 0x7F42ECB4u;
    // 7F42ECB4: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F42ECB8:
    ctx->pc = 0x7F42ECB8u;
    // 7F42ECB8: lfs     f3, 1080(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42ECB8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1080);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F42ECBC:
    ctx->pc = 0x7F42ECBCu;
    // 7F42ECBC: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42ECC0:
    ctx->pc = 0x7F42ECC0u;
    // 7F42ECC0: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F42ECC0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42ECC4:
    ctx->pc = 0x7F42ECC4u;
    // 7F42ECC4: fmuls   f8, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F42ECC4u)) return;
    ppc_fmuls(ctx, 8, 1, 2);

label_7F42ECC8:
    ctx->pc = 0x7F42ECC8u;
    // 7F42ECC8: fmuls   f12, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F42ECC8u)) return;
    ppc_fmuls(ctx, 12, 1, 3);

label_7F42ECCC:
    ctx->pc = 0x7F42ECCCu;
    // 7F42ECCC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42ECD0:
    ctx->pc = 0x7F42ECD0u;
    // 7F42ECD0: fmuls   f5, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F42ECD0u)) return;
    ppc_fmuls(ctx, 5, 0, 2);

label_7F42ECD4:
    ctx->pc = 0x7F42ECD4u;
    // 7F42ECD4: lfs     f11, 48(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42ECD4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[11] = value;
        ctx->ps1[11] = value;
    }

label_7F42ECD8:
    ctx->pc = 0x7F42ECD8u;
    // 7F42ECD8: fneg    f2, f8
    if (!ppc_fp_available_inline(ctx, 0x7F42ECD8u)) return;
    ctx->fpr[2] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[8]) ^ 0x8000000000000000ull);

label_7F42ECDC:
    ctx->pc = 0x7F42ECDCu;
    // 7F42ECDC: fmuls   f3, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F42ECDCu)) return;
    ppc_fmuls(ctx, 3, 0, 3);

label_7F42ECE0:
    ctx->pc = 0x7F42ECE0u;
    // 7F42ECE0: lfs     f7, 56(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42ECE0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[7] = value;
        ctx->ps1[7] = value;
    }

label_7F42ECE4:
    ctx->pc = 0x7F42ECE4u;
    // 7F42ECE4: fneg    f0, f12
    if (!ppc_fp_available_inline(ctx, 0x7F42ECE4u)) return;
    ctx->fpr[0] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[12]) ^ 0x8000000000000000ull);

label_7F42ECE8:
    ctx->pc = 0x7F42ECE8u;
    // 7F42ECE8: fadds   f10, f8, f11
    if (!ppc_fp_available_inline(ctx, 0x7F42ECE8u)) return;
    ppc_fadds(ctx, 10, 8, 11);

label_7F42ECEC:
    ctx->pc = 0x7F42ECECu;
    // 7F42ECEC: lfs     f9, 52(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42ECECu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[9] = value;
        ctx->ps1[9] = value;
    }

label_7F42ECF0:
    ctx->pc = 0x7F42ECF0u;
    // 7F42ECF0: lfs     f6, -10080(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42ECF0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-10080);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_7F42ECF4:
    ctx->pc = 0x7F42ECF4u;
    // 7F42ECF4: lfs     f4, -10072(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42ECF4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10072);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F42ECF8:
    ctx->pc = 0x7F42ECF8u;
    // 7F42ECF8: fadds   f5, f5, f11
    if (!ppc_fp_available_inline(ctx, 0x7F42ECF8u)) return;
    ppc_fadds(ctx, 5, 5, 11);

label_7F42ECFC:
    ctx->pc = 0x7F42ECFCu;
    // 7F42ECFC: fsubs   f8, f9, f6
    if (!ppc_fp_available_inline(ctx, 0x7F42ECFCu)) return;
    ppc_fsubs(ctx, 8, 9, 6);

label_7F42ED00:
    ctx->pc = 0x7F42ED00u;
    // 7F42ED00: lfs     f1, -10068(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42ED00u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10068);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42ED04:
    ctx->pc = 0x7F42ED04u;
    // 7F42ED04: fadds   f6, f12, f7
    if (!ppc_fp_available_inline(ctx, 0x7F42ED04u)) return;
    ppc_fadds(ctx, 6, 12, 7);

label_7F42ED08:
    ctx->pc = 0x7F42ED08u;
    // 7F42ED08: fsubs   f4, f9, f4
    if (!ppc_fp_available_inline(ctx, 0x7F42ED08u)) return;
    ppc_fsubs(ctx, 4, 9, 4);

label_7F42ED0C:
    ctx->pc = 0x7F42ED0Cu;
    // 7F42ED0C: stfs     f10, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42ED0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[10]));
    }

label_7F42ED10:
    ctx->pc = 0x7F42ED10u;
    // 7F42ED10: fadds   f3, f3, f7
    if (!ppc_fp_available_inline(ctx, 0x7F42ED10u)) return;
    ppc_fadds(ctx, 3, 3, 7);

label_7F42ED14:
    ctx->pc = 0x7F42ED14u;
    // 7F42ED14: fadds   f2, f2, f11
    if (!ppc_fp_available_inline(ctx, 0x7F42ED14u)) return;
    ppc_fadds(ctx, 2, 2, 11);

label_7F42ED18:
    ctx->pc = 0x7F42ED18u;
    // 7F42ED18: stfs     f8, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42ED18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[8]));
    }

label_7F42ED1C:
    ctx->pc = 0x7F42ED1Cu;
    // 7F42ED1C: fsubs   f1, f9, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42ED1Cu)) return;
    ppc_fsubs(ctx, 1, 9, 1);

label_7F42ED20:
    ctx->pc = 0x7F42ED20u;
    // 7F42ED20: fadds   f0, f0, f7
    if (!ppc_fp_available_inline(ctx, 0x7F42ED20u)) return;
    ppc_fadds(ctx, 0, 0, 7);

label_7F42ED24:
    ctx->pc = 0x7F42ED24u;
    // 7F42ED24: stfs     f6, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42ED24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

label_7F42ED28:
    ctx->pc = 0x7F42ED28u;
    // 7F42ED28: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F42ED2C:
    ctx->pc = 0x7F42ED2Cu;
    // 7F42ED2C: stfs     f5, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42ED2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F42ED30:
    ctx->pc = 0x7F42ED30u;
    // 7F42ED30: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F42ED34:
    ctx->pc = 0x7F42ED34u;
    // 7F42ED34: stfs     f4, 76(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42ED34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F42ED38:
    ctx->pc = 0x7F42ED38u;
    // 7F42ED38: stfs     f3, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42ED38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F42ED3C:
    ctx->pc = 0x7F42ED3Cu;
    // 7F42ED3C: stfs     f2, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42ED3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F42ED40:
    ctx->pc = 0x7F42ED40u;
    // 7F42ED40: stfs     f1, 92(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42ED40u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F42ED44:
    ctx->pc = 0x7F42ED44u;
    // 7F42ED44: stfs     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42ED44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42ED48:
    ctx->downcount -= 2;
    // 7F42ED48: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F42ED4C:
    // 7F42ED4C: bl      0x7F42E5B0
    {
            ctx->lr = 0x7F42ED50u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42E5B0u;
                return;
            }
            goto label_7F42E5B0;
    }

label_7F42ED50:
    ctx->downcount -= 2;
    // 7F42ED50: or.   r31, r3, r3
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

label_7F42ED54:
    // 7F42ED54: bc    12, 0, 0x7F42EE88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42EE88;
        }
    }

label_7F42ED58:
    ctx->downcount -= 49;
    // 7F42ED58: addi    r11, r1, 56
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(56);

label_7F42ED5C:
    // 7F42ED5C: rlwinm r3, r31, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[31], 4u) & 0xFFFFFFF0u;
    }

label_7F42ED60:
    // 7F42ED60: add   r11, r11, r27
    {
        u32 a = ctx->gpr[11];
        u32 b = ctx->gpr[27];
        u32 res = a + b;
        ctx->gpr[11] = res;
    }

label_7F42ED64:
    ctx->pc = 0x7F42ED64u;
    // 7F42ED64: lwz     r4, 1104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1104);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F42ED68:
    ctx->pc = 0x7F42ED68u;
    // 7F42ED68: lwz     r0, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42ED6C:
    // 7F42ED6C: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F42ED70:
    // 7F42ED70: add   r10, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[10] = res;
    }

label_7F42ED74:
    // 7F42ED74: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42ED78:
    // 7F42ED78: addi    r8, r5, -10064
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(-10064);

label_7F42ED7C:
    ctx->pc = 0x7F42ED7Cu;
    // 7F42ED7C: stw     r0, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42ED80:
    ctx->pc = 0x7F42ED80u;
    // 7F42ED80: lwz     r5, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F42ED84:
    // 7F42ED84: addi    r6, r4, -10060
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-10060);

label_7F42ED88:
    ctx->pc = 0x7F42ED88u;
    // 7F42ED88: lwz     r0, 8(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42ED8C:
    // 7F42ED8C: addi    r7, r3, 12
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(12);

label_7F42ED90:
    ctx->pc = 0x7F42ED90u;
    // 7F42ED90: stw     r5, 4(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F42ED94:
    // 7F42ED94: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42ED98:
    ctx->pc = 0x7F42ED98u;
    // 7F42ED98: lwz     r9, 12(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(12);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F42ED9C:
    // 7F42ED9C: addi    r5, r4, -10056
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-10056);

label_7F42EDA0:
    ctx->pc = 0x7F42EDA0u;
    // 7F42EDA0: stw     r0, 8(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42EDA4:
    // 7F42EDA4: addi    r4, r3, 4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(4);

label_7F42EDA8:
    ctx->pc = 0x7F42EDA8u;
    // 7F42EDA8: lfs     f5, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F42EDA8u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F42EDAC:
    // 7F42EDAC: addi    r0, r3, 8
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(8);

label_7F42EDB0:
    ctx->pc = 0x7F42EDB0u;
    // 7F42EDB0: stw     r9, 12(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F42EDB4:
    ctx->pc = 0x7F42EDB4u;
    // 7F42EDB4: lfs     f4, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42EDB4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F42EDB8:
    ctx->pc = 0x7F42EDB8u;
    // 7F42EDB8: lwz     r8, 1104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1104);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F42EDBC:
    ctx->pc = 0x7F42EDBCu;
    // 7F42EDBC: lfs     f2, 0(r11)
    if (!ppc_fp_available_inline(ctx, 0x7F42EDBCu)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F42EDC0:
    ctx->pc = 0x7F42EDC0u;
    // 7F42EDC0: stfsx    f5, r8, r7
    if (!ppc_fp_available_inline(ctx, 0x7F42EDC0u)) return;
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[7];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F42EDC4:
    ctx->pc = 0x7F42EDC4u;
    // 7F42EDC4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F42EDC4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42EDC8:
    ctx->pc = 0x7F42EDC8u;
    // 7F42EDC8: lwz     r6, 1104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1104);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F42EDCC:
    ctx->pc = 0x7F42EDCCu;
    // 7F42EDCC: lwz     r5, 1108(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1108);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F42EDD0:
    ctx->pc = 0x7F42EDD0u;
    // 7F42EDD0: lfsx    f3, r6, r3
    if (!ppc_fp_available_inline(ctx, 0x7F42EDD0u)) return;
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[3];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F42EDD4:
    ctx->pc = 0x7F42EDD4u;
    // 7F42EDD4: lfs     f0, 8(r11)
    if (!ppc_fp_available_inline(ctx, 0x7F42EDD4u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42EDD8:
    ctx->pc = 0x7F42EDD8u;
    // 7F42EDD8: fsubs   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F42EDD8u)) return;
    ppc_fsubs(ctx, 2, 3, 2);

label_7F42EDDC:
    ctx->pc = 0x7F42EDDCu;
    // 7F42EDDC: fmuls   f2, f4, f2
    if (!ppc_fp_available_inline(ctx, 0x7F42EDDCu)) return;
    ppc_fmuls(ctx, 2, 4, 2);

label_7F42EDE0:
    ctx->pc = 0x7F42EDE0u;
    // 7F42EDE0: stfsx    f2, r5, r3
    if (!ppc_fp_available_inline(ctx, 0x7F42EDE0u)) return;
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[3];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F42EDE4:
    ctx->pc = 0x7F42EDE4u;
    // 7F42EDE4: lwz     r5, 1108(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1108);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F42EDE8:
    ctx->pc = 0x7F42EDE8u;
    // 7F42EDE8: stfsx    f1, r5, r4
    if (!ppc_fp_available_inline(ctx, 0x7F42EDE8u)) return;
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[4];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F42EDEC:
    ctx->pc = 0x7F42EDECu;
    // 7F42EDEC: lwz     r5, 1104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1104);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F42EDF0:
    ctx->pc = 0x7F42EDF0u;
    // 7F42EDF0: lwz     r4, 1108(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1108);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F42EDF4:
    ctx->pc = 0x7F42EDF4u;
    // 7F42EDF4: lfsx    f1, r5, r0
    if (!ppc_fp_available_inline(ctx, 0x7F42EDF4u)) return;
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42EDF8:
    ctx->pc = 0x7F42EDF8u;
    // 7F42EDF8: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42EDF8u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F42EDFC:
    ctx->pc = 0x7F42EDFCu;
    // 7F42EDFC: fmuls   f0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42EDFCu)) return;
    ppc_fmuls(ctx, 0, 4, 0);

label_7F42EE00:
    ctx->pc = 0x7F42EE00u;
    // 7F42EE00: stfsx    f0, r4, r0
    if (!ppc_fp_available_inline(ctx, 0x7F42EE00u)) return;
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42EE04:
    ctx->pc = 0x7F42EE04u;
    // 7F42EE04: lwz     r4, 1108(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1108);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F42EE08:
    ctx->pc = 0x7F42EE08u;
    // 7F42EE08: stfsx    f5, r4, r7
    if (!ppc_fp_available_inline(ctx, 0x7F42EE08u)) return;
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[7];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F42EE0C:
    ctx->pc = 0x7F42EE0Cu;
    // 7F42EE0C: lwz     r0, 1108(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42EE10:
    // 7F42EE10: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F42EE14:
    // 7F42EE14: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42EE18:
    // 7F42EE18: bl      0x7F114F50
    {
            ctx->lr = 0x7F42EE1Cu;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F42EE1C:
    ctx->downcount -= 1;
    // 7F42EE1C: bl      0x800147F8
    {
            ctx->lr = 0x7F42EE20u;
            ctx->pc = 0x800147F8u;
            return;
    }

label_7F42EE20:
    ctx->downcount -= 61;
    // 7F42EE20: li      r7, 11
    ctx->gpr[7] = (u32)(s32)(11);

label_7F42EE24:
    // 7F42EE24: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F42EE28:
    // 7F42EE28: divw   r6, r3, r7
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[7];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[6] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F42EE2C:
    // 7F42EE2C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42EE30:
    ctx->pc = 0x7F42EE30u;
    // 7F42EE30: stw     r0, 168(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42EE34:
    // 7F42EE34: rlwinm r0, r31, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_7F42EE38:
    // 7F42EE38: addi    r5, r4, -10136
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-10136);

label_7F42EE3C:
    ctx->pc = 0x7F42EE3Cu;
    // 7F42EE3C: lwz     r4, 1112(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1112);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F42EE40:
    // 7F42EE40: mullw   r6, r6, r7
    {
        s64 product = (s64)(s32)ctx->gpr[6] * (s64)(s32)ctx->gpr[7];
        ctx->gpr[6] = (u32)product;
    }

label_7F42EE44:
    ctx->pc = 0x7F42EE44u;
    // 7F42EE44: lfd     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F42EE44u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42EE48:
    // 7F42EE48: subf   r3, r6, r3
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F42EE4C:
    // 7F42EE4C: addi    r3, r3, 20
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(20);

label_7F42EE50:
    // 7F42EE50: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F42EE54:
    ctx->pc = 0x7F42EE54u;
    // 7F42EE54: stw     r3, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42EE58:
    ctx->pc = 0x7F42EE58u;
    // 7F42EE58: lfd     f0, 168(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42EE58u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42EE5C:
    ctx->pc = 0x7F42EE5Cu;
    // 7F42EE5C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42EE5Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F42EE60:
    ctx->pc = 0x7F42EE60u;
    // 7F42EE60: stfsx    f0, r4, r0
    if (!ppc_fp_available_inline(ctx, 0x7F42EE60u)) return;
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42EE64:
    // 7F42EE64: bl      0x800147F8
    {
            ctx->lr = 0x7F42EE68u;
            ctx->pc = 0x800147F8u;
            return;
    }

label_7F42EE68:
    ctx->downcount -= 51;
    // 7F42EE68: li      r6, 11
    ctx->gpr[6] = (u32)(s32)(11);

label_7F42EE6C:
    ctx->pc = 0x7F42EE6Cu;
    // 7F42EE6C: lwz     r4, 1116(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1116);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F42EE70:
    // 7F42EE70: divw   r5, r3, r6
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[6];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[5] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F42EE74:
    // 7F42EE74: rlwinm r0, r31, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 1u) & 0xFFFFFFFEu;
    }

label_7F42EE78:
    // 7F42EE78: mullw   r5, r5, r6
    {
        s64 product = (s64)(s32)ctx->gpr[5] * (s64)(s32)ctx->gpr[6];
        ctx->gpr[5] = (u32)product;
    }

label_7F42EE7C:
    // 7F42EE7C: subf   r3, r5, r3
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F42EE80:
    // 7F42EE80: addi    r3, r3, 94
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(94);

label_7F42EE84:
    ctx->pc = 0x7F42EE84u;
    // 7F42EE84: sthx    r3, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F42EE88:
    ctx->downcount -= 4;
    // 7F42EE88: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F42EE8C:
    // 7F42EE8C: addi    r27, r27, 16
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(16);

label_7F42EE90:
    // 7F42EE90: cmpwi   r29, 3
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

label_7F42EE94:
    // 7F42EE94: bc    12, 0, 0x7F42ED48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42ED48u;
                return;
            }
            goto label_7F42ED48;
        }
    }

label_7F42EE98:
    ctx->pc = 0x7F42EE98u;
    ctx->downcount -= 1;
    // 7F42EE98: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F42EE9C:
    ctx->pc = 0x7F42EE9Cu;
    ctx->downcount -= 8;
    // 7F42EE9C: lwz     r4, 144(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(144);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F42EEA0:
    ctx->pc = 0x7F42EEA0u;
    // 7F42EEA0: li      r0, 64
    ctx->gpr[0] = (u32)(s32)(64);

label_7F42EEA4:
    ctx->pc = 0x7F42EEA4u;
    // 7F42EEA4: lwz     r5, 148(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(148);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F42EEA8:
    ctx->pc = 0x7F42EEA8u;
    // 7F42EEA8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F42EEAC:
    ctx->pc = 0x7F42EEACu;
    // 7F42EEAC: xor   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F42EEB0:
    ctx->pc = 0x7F42EEB0u;
    // 7F42EEB0: xor   r3, r5, r3
    {
        ctx->gpr[3] = ctx->gpr[5] ^ ctx->gpr[3];
    }

label_7F42EEB4:
    ctx->pc = 0x7F42EEB4u;
    // 7F42EEB4: or.   r0, r3, r0
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

label_7F42EEB8:
    ctx->pc = 0x7F42EEB8u;
    // 7F42EEB8: bc    4, 2, 0x7F42EF14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42EF14;
        }
    }

label_7F42EEBC:
    ctx->pc = 0x7F42EEBCu;
    ctx->downcount -= 3;
    // 7F42EEBC: lwz     r0, 1180(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42EEC0:
    ctx->pc = 0x7F42EEC0u;
    // 7F42EEC0: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42EEC4:
    ctx->pc = 0x7F42EEC4u;
    // 7F42EEC4: bc    12, 2, 0x7F42EF14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42EF14;
        }
    }

label_7F42EEC8:
    ctx->pc = 0x7F42EEC8u;
    ctx->downcount -= 3;
    // 7F42EEC8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F42EECC:
    ctx->pc = 0x7F42EECCu;
    // 7F42EECC: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_7F42EED0:
    ctx->pc = 0x7F42EED0u;
    // 7F42EED0: bl      0x7F42E73C
    {
            ctx->lr = 0x7F42EED4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42E73Cu;
                return;
            }
            goto label_7F42E73C;
    }

label_7F42EED4:
    ctx->pc = 0x7F42EED4u;
    ctx->downcount -= 3;
    // 7F42EED4: lwz     r0, 1176(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1176);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42EED8:
    ctx->pc = 0x7F42EED8u;
    // 7F42EED8: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42EEDC:
    ctx->pc = 0x7F42EEDCu;
    // 7F42EEDC: bc    4, 2, 0x7F42EF08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42EF08;
        }
    }

label_7F42EEE0:
    ctx->pc = 0x7F42EEE0u;
    ctx->downcount -= 3;
    // 7F42EEE0: lwz     r0, 1188(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1188);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42EEE4:
    ctx->pc = 0x7F42EEE4u;
    // 7F42EEE4: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42EEE8:
    ctx->pc = 0x7F42EEE8u;
    // 7F42EEE8: bc    4, 2, 0x7F42EF08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42EF08;
        }
    }

label_7F42EEEC:
    ctx->pc = 0x7F42EEECu;
    ctx->downcount -= 4;
    // 7F42EEEC: addi    r4, r30, 48
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(48);

label_7F42EEF0:
    ctx->pc = 0x7F42EEF0u;
    // 7F42EEF0: li      r3, 2175
    ctx->gpr[3] = (u32)(s32)(2175);

label_7F42EEF4:
    ctx->pc = 0x7F42EEF4u;
    // 7F42EEF4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F42EEF8:
    ctx->pc = 0x7F42EEF8u;
    // 7F42EEF8: bl      0x7F0117B8
    {
            ctx->lr = 0x7F42EEFCu;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F42EEFC:
    ctx->pc = 0x7F42EEFCu;
    ctx->downcount -= 3;
    // 7F42EEFC: lwz     r3, 1188(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42EF00:
    ctx->pc = 0x7F42EF00u;
    // 7F42EF00: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F42EF04:
    ctx->pc = 0x7F42EF04u;
    // 7F42EF04: stw     r0, 1188(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1188);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42EF08:
    ctx->pc = 0x7F42EF08u;
    ctx->downcount -= 3;
    // 7F42EF08: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F42EF0C:
    ctx->pc = 0x7F42EF0Cu;
    // 7F42EF0C: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F42EF10:
    ctx->pc = 0x7F42EF10u;
    // 7F42EF10: stw     r0, 1160(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1160);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42EF14:
    ctx->pc = 0x7F42EF14u;
    ctx->downcount -= 2;
    // 7F42EF14: cmpwi   r7, 0
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

label_7F42EF18:
    ctx->pc = 0x7F42EF18u;
    // 7F42EF18: bc    12, 2, 0x7F42EFA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42EFA0;
        }
    }

label_7F42EF1C:
    ctx->pc = 0x7F42EF1Cu;
    ctx->downcount -= 3;
    // 7F42EF1C: lwz     r0, 1156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42EF20:
    ctx->pc = 0x7F42EF20u;
    // 7F42EF20: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42EF24:
    ctx->pc = 0x7F42EF24u;
    // 7F42EF24: bc    4, 2, 0x7F42EFA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42EFA0;
        }
    }

label_7F42EF28:
    ctx->pc = 0x7F42EF28u;
    ctx->downcount -= 27;
    // 7F42EF28: lwz     r7, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F42EF2C:
    ctx->pc = 0x7F42EF2Cu;
    // 7F42EF2C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F42EF30:
    ctx->pc = 0x7F42EF30u;
    // 7F42EF30: lwz     r0, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42EF34:
    ctx->pc = 0x7F42EF34u;
    // 7F42EF34: addi    r6, r3, 19564
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(19564);

label_7F42EF38:
    ctx->pc = 0x7F42EF38u;
    // 7F42EF38: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F42EF3C:
    ctx->pc = 0x7F42EF3Cu;
    // 7F42EF3C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42EF40:
    ctx->pc = 0x7F42EF40u;
    // 7F42EF40: stw     r7, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F42EF44:
    ctx->pc = 0x7F42EF44u;
    // 7F42EF44: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42EF48:
    ctx->pc = 0x7F42EF48u;
    // 7F42EF48: lfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42EF48u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42EF4C:
    ctx->pc = 0x7F42EF4Cu;
    // 7F42EF4C: addi    r6, r5, -10052
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-10052);

label_7F42EF50:
    ctx->pc = 0x7F42EF50u;
    // 7F42EF50: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42EF54:
    ctx->pc = 0x7F42EF54u;
    // 7F42EF54: addi    r5, r4, -10048
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-10048);

label_7F42EF58:
    ctx->pc = 0x7F42EF58u;
    // 7F42EF58: addi    r7, r3, -10044
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(-10044);

label_7F42EF5C:
    ctx->pc = 0x7F42EF5Cu;
    // 7F42EF5C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42EF5Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42EF60:
    ctx->pc = 0x7F42EF60u;
    // 7F42EF60: lwz     r6, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F42EF64:
    ctx->pc = 0x7F42EF64u;
    // 7F42EF64: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F42EF68:
    ctx->pc = 0x7F42EF68u;
    // 7F42EF68: lwz     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42EF6C:
    ctx->pc = 0x7F42EF6Cu;
    // 7F42EF6C: li      r4, 60
    ctx->gpr[4] = (u32)(s32)(60);

label_7F42EF70:
    ctx->pc = 0x7F42EF70u;
    // 7F42EF70: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F42EF70u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F42EF74:
    ctx->pc = 0x7F42EF74u;
    // 7F42EF74: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F42EF78:
    ctx->pc = 0x7F42EF78u;
    // 7F42EF78: stw     r6, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F42EF7C:
    ctx->pc = 0x7F42EF7Cu;
    // 7F42EF7C: li      r6, 5
    ctx->gpr[6] = (u32)(s32)(5);

label_7F42EF80:
    ctx->pc = 0x7F42EF80u;
    // 7F42EF80: lfs     f3, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F42EF80u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F42EF84:
    ctx->pc = 0x7F42EF84u;
    // 7F42EF84: li      r7, 6
    ctx->gpr[7] = (u32)(s32)(6);

label_7F42EF88:
    ctx->pc = 0x7F42EF88u;
    // 7F42EF88: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42EF8C:
    ctx->pc = 0x7F42EF8Cu;
    // 7F42EF8C: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42EF8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42EF90:
    ctx->pc = 0x7F42EF90u;
    // 7F42EF90: bl      0x7F35B368
    {
            ctx->lr = 0x7F42EF94u;
            ctx->pc = 0x7F35B368u;
            return;
    }

label_7F42EF94:
    ctx->pc = 0x7F42EF94u;
    ctx->downcount -= 3;
    // 7F42EF94: lwz     r3, 1156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42EF98:
    ctx->pc = 0x7F42EF98u;
    // 7F42EF98: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F42EF9C:
    ctx->pc = 0x7F42EF9Cu;
    // 7F42EF9C: stw     r0, 1156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42EFA0:
    ctx->pc = 0x7F42EFA0u;
    ctx->downcount -= 16;
    // 7F42EFA0: lmw     r27, 188(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F42EFA4:
    ctx->pc = 0x7F42EFA4u;
    // 7F42EFA4: lwz     r0, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42EFA8:
    ctx->pc = 0x7F42EFA8u;
    // 7F42EFA8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42EFAC:
    ctx->pc = 0x7F42EFACu;
    // 7F42EFAC: addi    r1, r1, 208
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(208);

label_7F42EFB0:
    ctx->pc = 0x7F42EFB0u;
    // 7F42EFB0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42EFB4:
    ctx->pc = 0x7F42EFB4u;
    ctx->downcount -= 20;
    // 7F42EFB4: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42EFB8:
    ctx->pc = 0x7F42EFB8u;
    // 7F42EFB8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42EFBC:
    ctx->pc = 0x7F42EFBCu;
    // 7F42EFBC: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42EFC0:
    ctx->pc = 0x7F42EFC0u;
    // 7F42EFC0: stmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F42EFC4:
    ctx->pc = 0x7F42EFC4u;
    // 7F42EFC4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42EFC8:
    ctx->pc = 0x7F42EFC8u;
    // 7F42EFC8: addi    r31, r29, 640
    ctx->gpr[31] = ctx->gpr[29] + (u32)(s32)(640);

label_7F42EFCC:
    ctx->pc = 0x7F42EFCCu;
    // 7F42EFCC: addi    r30, r29, 48
    ctx->gpr[30] = ctx->gpr[29] + (u32)(s32)(48);

label_7F42EFD0:
    ctx->pc = 0x7F42EFD0u;
    // 7F42EFD0: lwz     r0, 1160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1160);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42EFD4:
    ctx->pc = 0x7F42EFD4u;
    // 7F42EFD4: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42EFD8:
    ctx->pc = 0x7F42EFD8u;
    // 7F42EFD8: bc    12, 2, 0x7F42EFF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42EFF8;
        }
    }

label_7F42EFDC:
    ctx->pc = 0x7F42EFDCu;
    ctx->downcount -= 7;
    // 7F42EFDC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F42EFE0:
    ctx->pc = 0x7F42EFE0u;
    // 7F42EFE0: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F42EFE4:
    ctx->pc = 0x7F42EFE4u;
    // 7F42EFE4: stw     r3, 1164(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1164);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42EFE8:
    ctx->pc = 0x7F42EFE8u;
    // 7F42EFE8: stw     r3, 1168(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1168);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42EFEC:
    ctx->pc = 0x7F42EFECu;
    // 7F42EFEC: stw     r0, 1172(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1172);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42EFF0:
    ctx->pc = 0x7F42EFF0u;
    // 7F42EFF0: stw     r3, 1176(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1176);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42EFF4:
    ctx->pc = 0x7F42EFF4u;
    // 7F42EFF4: b       0x7F42F048
    {
            goto label_7F42F048;
    }

label_7F42EFF8:
    ctx->pc = 0x7F42EFF8u;
    ctx->downcount -= 5;
    // 7F42EFF8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F42EFFC:
    ctx->pc = 0x7F42EFFCu;
    // 7F42EFFC: stw     r5, 1176(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1176);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F42F000:
    ctx->pc = 0x7F42F000u;
    // 7F42F000: lwz     r0, 1164(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42F004:
    ctx->pc = 0x7F42F004u;
    // 7F42F004: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42F008:
    ctx->pc = 0x7F42F008u;
    // 7F42F008: bc    12, 2, 0x7F42F048
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42F048;
        }
    }

label_7F42F00C:
    ctx->pc = 0x7F42F00Cu;
    ctx->downcount -= 3;
    // 7F42F00C: lwz     r4, 1172(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1172);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F42F010:
    ctx->pc = 0x7F42F010u;
    // 7F42F010: cmpwi   r4, 1
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

label_7F42F014:
    ctx->pc = 0x7F42F014u;
    // 7F42F014: bc    12, 0, 0x7F42F044
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42F044;
        }
    }

label_7F42F018:
    ctx->pc = 0x7F42F018u;
    ctx->downcount -= 1;
    // 7F42F018: bl      0x7F42E73C
    {
            ctx->lr = 0x7F42F01Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42E73Cu;
                return;
            }
            goto label_7F42E73C;
    }

label_7F42F01C:
    ctx->pc = 0x7F42F01Cu;
    ctx->downcount -= 3;
    // 7F42F01C: lwz     r0, 1168(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1168);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42F020:
    ctx->pc = 0x7F42F020u;
    // 7F42F020: rlwinm. r0, r0, 0, 28, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000000Fu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F42F024:
    ctx->pc = 0x7F42F024u;
    // 7F42F024: bc    4, 2, 0x7F42F034
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42F034;
        }
    }

label_7F42F028:
    ctx->pc = 0x7F42F028u;
    ctx->downcount -= 3;
    // 7F42F028: lwz     r3, 1172(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42F02C:
    ctx->pc = 0x7F42F02Cu;
    // 7F42F02C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F42F030:
    ctx->pc = 0x7F42F030u;
    // 7F42F030: stw     r0, 1172(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1172);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42F034:
    ctx->pc = 0x7F42F034u;
    ctx->downcount -= 4;
    // 7F42F034: lwz     r3, 1168(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42F038:
    ctx->pc = 0x7F42F038u;
    // 7F42F038: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F42F03C:
    ctx->pc = 0x7F42F03Cu;
    // 7F42F03C: stw     r0, 1168(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42F040:
    ctx->pc = 0x7F42F040u;
    // 7F42F040: b       0x7F42F048
    {
            goto label_7F42F048;
    }

label_7F42F044:
    ctx->pc = 0x7F42F044u;
    ctx->downcount -= 1;
    // 7F42F044: stw     r5, 1164(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1164);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F42F048:
    ctx->pc = 0x7F42F048u;
    ctx->downcount -= 10;
    // 7F42F048: lwz     r0, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42F04C:
    ctx->pc = 0x7F42F04Cu;
    // 7F42F04C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F42F050:
    ctx->pc = 0x7F42F050u;
    // 7F42F050: lwz     r5, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F42F054:
    ctx->pc = 0x7F42F054u;
    // 7F42F054: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F42F058:
    ctx->pc = 0x7F42F058u;
    // 7F42F058: and   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[4];
    }

label_7F42F05C:
    ctx->pc = 0x7F42F05Cu;
    // 7F42F05C: and   r3, r5, r3
    {
        ctx->gpr[3] = ctx->gpr[5] & ctx->gpr[3];
    }

label_7F42F060:
    ctx->pc = 0x7F42F060u;
    // 7F42F060: xor   r3, r3, r4
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[4];
    }

label_7F42F064:
    ctx->pc = 0x7F42F064u;
    // 7F42F064: xor   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[4];
    }

label_7F42F068:
    ctx->pc = 0x7F42F068u;
    // 7F42F068: or.   r0, r3, r0
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

label_7F42F06C:
    ctx->pc = 0x7F42F06Cu;
    // 7F42F06C: bc    4, 2, 0x7F42F07C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42F07C;
        }
    }

label_7F42F070:
    ctx->pc = 0x7F42F070u;
    ctx->downcount -= 3;
    // 7F42F070: lwz     r0, 1160(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1160);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42F074:
    ctx->pc = 0x7F42F074u;
    // 7F42F074: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42F078:
    ctx->pc = 0x7F42F078u;
    // 7F42F078: bc    12, 2, 0x7F42F140
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42F140;
        }
    }

label_7F42F07C:
    ctx->pc = 0x7F42F07Cu;
    ctx->downcount -= 3;
    // 7F42F07C: lwz     r0, 1140(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1140);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42F080:
    ctx->pc = 0x7F42F080u;
    // 7F42F080: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42F084:
    ctx->pc = 0x7F42F084u;
    // 7F42F084: bc    4, 2, 0x7F42F140
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42F140;
        }
    }

label_7F42F088:
    ctx->pc = 0x7F42F088u;
    ctx->downcount -= 6;
    // 7F42F088: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F42F08C:
    ctx->pc = 0x7F42F08Cu;
    // 7F42F08C: li      r28, 128
    ctx->gpr[28] = (u32)(s32)(128);

label_7F42F090:
    ctx->pc = 0x7F42F090u;
    // 7F42F090: stw     r0, 1140(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42F094:
    ctx->pc = 0x7F42F094u;
    // 7F42F094: lwz     r0, 1160(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1160);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42F098:
    ctx->pc = 0x7F42F098u;
    // 7F42F098: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42F09C:
    ctx->pc = 0x7F42F09Cu;
    // 7F42F09C: bc    12, 2, 0x7F42F0A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42F0A4;
        }
    }

label_7F42F0A0:
    ctx->pc = 0x7F42F0A0u;
    ctx->downcount -= 1;
    // 7F42F0A0: li      r28, 196
    ctx->gpr[28] = (u32)(s32)(196);

label_7F42F0A4:
    ctx->pc = 0x7F42F0A4u;
    ctx->downcount -= 2;
    // 7F42F0A4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F42F0A8:
    ctx->pc = 0x7F42F0A8u;
    // 7F42F0A8: bl      0x7F42E6A8
    {
            ctx->lr = 0x7F42F0ACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42E6A8u;
                return;
            }
            goto label_7F42E6A8;
    }

label_7F42F0AC:
    ctx->pc = 0x7F42F0ACu;
    ctx->downcount -= 5;
    // 7F42F0AC: lha     r0, 42(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(42);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F42F0B0:
    ctx->pc = 0x7F42F0B0u;
    // 7F42F0B0: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F42F0B4:
    ctx->pc = 0x7F42F0B4u;
    // 7F42F0B4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F42F0B8:
    ctx->pc = 0x7F42F0B8u;
    // 7F42F0B8: sth     r0, 42(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42F0BC:
    ctx->pc = 0x7F42F0BCu;
    // 7F42F0BC: bl      0x7F42E708
    {
            ctx->lr = 0x7F42F0C0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42E708u;
                return;
            }
            goto label_7F42E708;
    }

label_7F42F0C0:
    ctx->pc = 0x7F42F0C0u;
    ctx->downcount -= 2;
    // 7F42F0C0: cmpwi   r3, 0
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

label_7F42F0C4:
    ctx->pc = 0x7F42F0C4u;
    // 7F42F0C4: bc    12, 2, 0x7F42F0E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42F0E4;
        }
    }

label_7F42F0C8:
    ctx->pc = 0x7F42F0C8u;
    ctx->downcount -= 2;
    // 7F42F0C8: li      r3, 64
    ctx->gpr[3] = (u32)(s32)(64);

label_7F42F0CC:
    ctx->pc = 0x7F42F0CCu;
    // 7F42F0CC: bl      0x7F42E6A8
    {
            ctx->lr = 0x7F42F0D0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42E6A8u;
                return;
            }
            goto label_7F42E6A8;
    }

label_7F42F0D0:
    ctx->pc = 0x7F42F0D0u;
    ctx->downcount -= 5;
    // 7F42F0D0: lha     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F42F0D4:
    ctx->pc = 0x7F42F0D4u;
    // 7F42F0D4: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F42F0D8:
    ctx->pc = 0x7F42F0D8u;
    // 7F42F0D8: addi    r0, r3, -16
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-16);

label_7F42F0DC:
    ctx->pc = 0x7F42F0DCu;
    // 7F42F0DC: sth     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42F0E0:
    ctx->pc = 0x7F42F0E0u;
    // 7F42F0E0: b       0x7F42F0FC
    {
            goto label_7F42F0FC;
    }

label_7F42F0E4:
    ctx->pc = 0x7F42F0E4u;
    ctx->downcount -= 2;
    // 7F42F0E4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F42F0E8:
    ctx->pc = 0x7F42F0E8u;
    // 7F42F0E8: bl      0x7F42E6A8
    {
            ctx->lr = 0x7F42F0ECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42E6A8u;
                return;
            }
            goto label_7F42E6A8;
    }

label_7F42F0EC:
    ctx->pc = 0x7F42F0ECu;
    ctx->downcount -= 4;
    // 7F42F0EC: lha     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F42F0F0:
    ctx->pc = 0x7F42F0F0u;
    // 7F42F0F0: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F42F0F4:
    ctx->pc = 0x7F42F0F4u;
    // 7F42F0F4: addi    r0, r3, 32
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32);

label_7F42F0F8:
    ctx->pc = 0x7F42F0F8u;
    // 7F42F0F8: sth     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42F0FC:
    ctx->pc = 0x7F42F0FCu;
    ctx->downcount -= 2;
    // 7F42F0FC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F42F100:
    ctx->pc = 0x7F42F100u;
    // 7F42F100: bl      0x7F42E708
    {
            ctx->lr = 0x7F42F104u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42E708u;
                return;
            }
            goto label_7F42E708;
    }

label_7F42F104:
    ctx->pc = 0x7F42F104u;
    ctx->downcount -= 2;
    // 7F42F104: cmpwi   r3, 0
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

label_7F42F108:
    ctx->pc = 0x7F42F108u;
    // 7F42F108: bc    12, 2, 0x7F42F128
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42F128;
        }
    }

label_7F42F10C:
    ctx->pc = 0x7F42F10Cu;
    ctx->downcount -= 2;
    // 7F42F10C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F42F110:
    ctx->pc = 0x7F42F110u;
    // 7F42F110: bl      0x7F42E6A8
    {
            ctx->lr = 0x7F42F114u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42E6A8u;
                return;
            }
            goto label_7F42E6A8;
    }

label_7F42F114:
    ctx->pc = 0x7F42F114u;
    ctx->downcount -= 5;
    // 7F42F114: lha     r0, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F42F118:
    ctx->pc = 0x7F42F118u;
    // 7F42F118: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F42F11C:
    ctx->pc = 0x7F42F11Cu;
    // 7F42F11C: addi    r0, r3, -48
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-48);

label_7F42F120:
    ctx->pc = 0x7F42F120u;
    // 7F42F120: sth     r0, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42F124:
    ctx->pc = 0x7F42F124u;
    // 7F42F124: b       0x7F42F140
    {
            goto label_7F42F140;
    }

label_7F42F128:
    ctx->pc = 0x7F42F128u;
    ctx->downcount -= 2;
    // 7F42F128: li      r3, 164
    ctx->gpr[3] = (u32)(s32)(164);

label_7F42F12C:
    ctx->pc = 0x7F42F12Cu;
    // 7F42F12C: bl      0x7F42E6A8
    {
            ctx->lr = 0x7F42F130u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42E6A8u;
                return;
            }
            goto label_7F42E6A8;
    }

label_7F42F130:
    ctx->pc = 0x7F42F130u;
    ctx->downcount -= 4;
    // 7F42F130: lha     r0, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F42F134:
    ctx->pc = 0x7F42F134u;
    // 7F42F134: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F42F138:
    ctx->pc = 0x7F42F138u;
    // 7F42F138: addi    r0, r3, 72
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(72);

label_7F42F13C:
    ctx->pc = 0x7F42F13Cu;
    // 7F42F13C: sth     r0, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42F140:
    ctx->pc = 0x7F42F140u;
    ctx->downcount -= 3;
    // 7F42F140: lwz     r0, 1140(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1140);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42F144:
    ctx->pc = 0x7F42F144u;
    // 7F42F144: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42F148:
    ctx->pc = 0x7F42F148u;
    // 7F42F148: bc    12, 2, 0x7F42F250
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42F250;
        }
    }

label_7F42F14C:
    ctx->pc = 0x7F42F14Cu;
    ctx->downcount -= 4;
    // 7F42F14C: lha     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F42F150:
    ctx->pc = 0x7F42F150u;
    // 7F42F150: lha     r0, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F42F154:
    ctx->pc = 0x7F42F154u;
    // 7F42F154: cmpw    r3, r0
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

label_7F42F158:
    ctx->pc = 0x7F42F158u;
    // 7F42F158: bc    4, 2, 0x7F42F2C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42F2C4;
        }
    }

label_7F42F15C:
    ctx->pc = 0x7F42F15Cu;
    ctx->downcount -= 4;
    // 7F42F15C: lha     r3, 34(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(34);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F42F160:
    ctx->pc = 0x7F42F160u;
    // 7F42F160: lha     r0, 42(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(42);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F42F164:
    ctx->pc = 0x7F42F164u;
    // 7F42F164: cmpw    r3, r0
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

label_7F42F168:
    ctx->pc = 0x7F42F168u;
    // 7F42F168: bc    4, 2, 0x7F42F2C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42F2C4;
        }
    }

label_7F42F16C:
    ctx->pc = 0x7F42F16Cu;
    ctx->downcount -= 4;
    // 7F42F16C: lha     r3, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F42F170:
    ctx->pc = 0x7F42F170u;
    // 7F42F170: lha     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F42F174:
    ctx->pc = 0x7F42F174u;
    // 7F42F174: cmpw    r3, r0
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

label_7F42F178:
    ctx->pc = 0x7F42F178u;
    // 7F42F178: bc    4, 2, 0x7F42F2C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42F2C4;
        }
    }

label_7F42F17C:
    ctx->pc = 0x7F42F17Cu;
    ctx->downcount -= 5;
    // 7F42F17C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F42F180:
    ctx->pc = 0x7F42F180u;
    // 7F42F180: stw     r0, 1140(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42F184:
    ctx->pc = 0x7F42F184u;
    // 7F42F184: lha     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F42F188:
    ctx->pc = 0x7F42F188u;
    // 7F42F188: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42F18C:
    ctx->pc = 0x7F42F18Cu;
    // 7F42F18C: bc    4, 0, 0x7F42F1F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42F1F0;
        }
    }

label_7F42F190:
    ctx->pc = 0x7F42F190u;
    ctx->downcount -= 13;
    // 7F42F190: lha     r4, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F42F194:
    ctx->pc = 0x7F42F194u;
    // 7F42F194: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F42F198:
    ctx->pc = 0x7F42F198u;
    // 7F42F198: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42F19C:
    ctx->pc = 0x7F42F19Cu;
    // 7F42F19C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42F1A0:
    ctx->pc = 0x7F42F1A0u;
    // 7F42F1A0: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F42F1A4:
    ctx->pc = 0x7F42F1A4u;
    // 7F42F1A4: lfd     f1, -10136(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42F1A4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10136);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42F1A8:
    ctx->pc = 0x7F42F1A8u;
    // 7F42F1A8: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42F1AC:
    ctx->pc = 0x7F42F1ACu;
    // 7F42F1AC: lfs     f2, 1124(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42F1ACu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1124);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F42F1B0:
    ctx->pc = 0x7F42F1B0u;
    // 7F42F1B0: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42F1B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42F1B4:
    ctx->pc = 0x7F42F1B4u;
    // 7F42F1B4: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42F1B4u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F42F1B8:
    ctx->pc = 0x7F42F1B8u;
    // 7F42F1B8: fcmpo   cr0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F42F1B8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[2], true);

label_7F42F1BC:
    ctx->pc = 0x7F42F1BCu;
    // 7F42F1BC: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F42F1C0:
    ctx->pc = 0x7F42F1C0u;
    // 7F42F1C0: bc    4, 2, 0x7F42F1DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42F1DC;
        }
    }

label_7F42F1C4:
    ctx->pc = 0x7F42F1C4u;
    ctx->downcount -= 6;
    // 7F42F1C4: lfs     f0, 1120(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42F1C4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42F1C8:
    ctx->pc = 0x7F42F1C8u;
    // 7F42F1C8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42F1C8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F42F1CC:
    ctx->pc = 0x7F42F1CCu;
    // 7F42F1CC: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42F1CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42F1D0:
    ctx->pc = 0x7F42F1D0u;
    // 7F42F1D0: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42F1D4:
    ctx->pc = 0x7F42F1D4u;
    // 7F42F1D4: sth     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42F1D8:
    ctx->pc = 0x7F42F1D8u;
    // 7F42F1D8: b       0x7F42F2C4
    {
            goto label_7F42F2C4;
    }

label_7F42F1DC:
    ctx->pc = 0x7F42F1DCu;
    ctx->downcount -= 5;
    // 7F42F1DC: fctiwz    f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F42F1DCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[2], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F42F1E0:
    ctx->pc = 0x7F42F1E0u;
    // 7F42F1E0: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42F1E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42F1E4:
    ctx->pc = 0x7F42F1E4u;
    // 7F42F1E4: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42F1E8:
    ctx->pc = 0x7F42F1E8u;
    // 7F42F1E8: sth     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42F1EC:
    ctx->pc = 0x7F42F1ECu;
    // 7F42F1EC: b       0x7F42F2C4
    {
            goto label_7F42F2C4;
    }

label_7F42F1F0:
    ctx->pc = 0x7F42F1F0u;
    ctx->downcount -= 13;
    // 7F42F1F0: lha     r4, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F42F1F4:
    ctx->pc = 0x7F42F1F4u;
    // 7F42F1F4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F42F1F8:
    ctx->pc = 0x7F42F1F8u;
    // 7F42F1F8: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42F1FC:
    ctx->pc = 0x7F42F1FCu;
    // 7F42F1FC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42F200:
    ctx->pc = 0x7F42F200u;
    // 7F42F200: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F42F204:
    ctx->pc = 0x7F42F204u;
    // 7F42F204: lfd     f1, -10136(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42F204u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10136);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42F208:
    ctx->pc = 0x7F42F208u;
    // 7F42F208: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42F20C:
    ctx->pc = 0x7F42F20Cu;
    // 7F42F20C: lfs     f2, 1120(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42F20Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F42F210:
    ctx->pc = 0x7F42F210u;
    // 7F42F210: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42F210u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42F214:
    ctx->pc = 0x7F42F214u;
    // 7F42F214: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42F214u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F42F218:
    ctx->pc = 0x7F42F218u;
    // 7F42F218: fcmpo   cr0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F42F218u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[2], true);

label_7F42F21C:
    ctx->pc = 0x7F42F21Cu;
    // 7F42F21C: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F42F220:
    ctx->pc = 0x7F42F220u;
    // 7F42F220: bc    4, 2, 0x7F42F23C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42F23C;
        }
    }

label_7F42F224:
    ctx->pc = 0x7F42F224u;
    ctx->downcount -= 6;
    // 7F42F224: lfs     f0, 1124(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42F224u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1124);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42F228:
    ctx->pc = 0x7F42F228u;
    // 7F42F228: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42F228u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F42F22C:
    ctx->pc = 0x7F42F22Cu;
    // 7F42F22C: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42F22Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42F230:
    ctx->pc = 0x7F42F230u;
    // 7F42F230: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42F234:
    ctx->pc = 0x7F42F234u;
    // 7F42F234: sth     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42F238:
    ctx->pc = 0x7F42F238u;
    // 7F42F238: b       0x7F42F2C4
    {
            goto label_7F42F2C4;
    }

label_7F42F23C:
    ctx->pc = 0x7F42F23Cu;
    ctx->downcount -= 5;
    // 7F42F23C: fctiwz    f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F42F23Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[2], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F42F240:
    ctx->pc = 0x7F42F240u;
    // 7F42F240: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42F240u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42F244:
    ctx->pc = 0x7F42F244u;
    // 7F42F244: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42F248:
    ctx->pc = 0x7F42F248u;
    // 7F42F248: sth     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42F24C:
    ctx->pc = 0x7F42F24Cu;
    // 7F42F24C: b       0x7F42F2C4
    {
            goto label_7F42F2C4;
    }

label_7F42F250:
    ctx->pc = 0x7F42F250u;
    ctx->downcount -= 12;
    // 7F42F250: lha     r3, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F42F254:
    ctx->pc = 0x7F42F254u;
    // 7F42F254: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F42F258:
    ctx->pc = 0x7F42F258u;
    // 7F42F258: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42F25C:
    ctx->pc = 0x7F42F25Cu;
    // 7F42F25C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42F260:
    ctx->pc = 0x7F42F260u;
    // 7F42F260: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F42F264:
    ctx->pc = 0x7F42F264u;
    // 7F42F264: lfd     f2, -10136(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42F264u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10136);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42F268:
    ctx->pc = 0x7F42F268u;
    // 7F42F268: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42F26C:
    ctx->pc = 0x7F42F26Cu;
    // 7F42F26C: lfs     f3, 1120(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42F26Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F42F270:
    ctx->pc = 0x7F42F270u;
    // 7F42F270: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42F270u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42F274:
    ctx->pc = 0x7F42F274u;
    // 7F42F274: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F42F274u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F42F278:
    ctx->pc = 0x7F42F278u;
    // 7F42F278: fcmpu   cr0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F42F278u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[3], false);

label_7F42F27C:
    ctx->pc = 0x7F42F27Cu;
    // 7F42F27C: bc    4, 2, 0x7F42F298
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42F298;
        }
    }

label_7F42F280:
    ctx->pc = 0x7F42F280u;
    ctx->downcount -= 6;
    // 7F42F280: lfs     f0, 1124(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42F280u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1124);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42F284:
    ctx->pc = 0x7F42F284u;
    // 7F42F284: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42F284u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F42F288:
    ctx->pc = 0x7F42F288u;
    // 7F42F288: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42F288u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42F28C:
    ctx->pc = 0x7F42F28Cu;
    // 7F42F28C: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42F290:
    ctx->pc = 0x7F42F290u;
    // 7F42F290: sth     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42F294:
    ctx->pc = 0x7F42F294u;
    // 7F42F294: b       0x7F42F2C4
    {
            goto label_7F42F2C4;
    }

label_7F42F298:
    ctx->pc = 0x7F42F298u;
    ctx->downcount -= 7;
    // 7F42F298: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42F29C:
    ctx->pc = 0x7F42F29Cu;
    // 7F42F29C: lfs     f0, 1124(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42F29Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1124);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42F2A0:
    ctx->pc = 0x7F42F2A0u;
    // 7F42F2A0: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42F2A4:
    ctx->pc = 0x7F42F2A4u;
    // 7F42F2A4: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42F2A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42F2A8:
    ctx->pc = 0x7F42F2A8u;
    // 7F42F2A8: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F42F2A8u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F42F2AC:
    ctx->pc = 0x7F42F2ACu;
    // 7F42F2AC: fcmpu   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42F2ACu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], false);

label_7F42F2B0:
    ctx->pc = 0x7F42F2B0u;
    // 7F42F2B0: bc    4, 2, 0x7F42F2C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42F2C4;
        }
    }

label_7F42F2B4:
    ctx->pc = 0x7F42F2B4u;
    ctx->downcount -= 4;
    // 7F42F2B4: fctiwz    f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F42F2B4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[3], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F42F2B8:
    ctx->pc = 0x7F42F2B8u;
    // 7F42F2B8: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42F2B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42F2BC:
    ctx->pc = 0x7F42F2BCu;
    // 7F42F2BC: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42F2C0:
    ctx->pc = 0x7F42F2C0u;
    // 7F42F2C0: sth     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42F2C4:
    ctx->pc = 0x7F42F2C4u;
    ctx->downcount -= 5;
    // 7F42F2C4: lfs     f2, 4(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42F2C4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F42F2C8:
    ctx->pc = 0x7F42F2C8u;
    // 7F42F2C8: lfs     f3, 1128(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42F2C8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1128);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F42F2CC:
    ctx->pc = 0x7F42F2CCu;
    // 7F42F2CC: fcmpo   cr0, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F42F2CCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[3], true);

label_7F42F2D0:
    ctx->pc = 0x7F42F2D0u;
    // 7F42F2D0: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F42F2D4:
    ctx->pc = 0x7F42F2D4u;
    // 7F42F2D4: bc    4, 2, 0x7F42F328
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42F328;
        }
    }

label_7F42F2D8:
    ctx->pc = 0x7F42F2D8u;
    ctx->downcount -= 6;
    // 7F42F2D8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42F2DC:
    ctx->pc = 0x7F42F2DCu;
    // 7F42F2DC: lfs     f1, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42F2DCu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42F2E0:
    ctx->pc = 0x7F42F2E0u;
    // 7F42F2E0: lfs     f0, -10152(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42F2E0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10152);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42F2E4:
    ctx->pc = 0x7F42F2E4u;
    // 7F42F2E4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42F2E4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F42F2E8:
    ctx->pc = 0x7F42F2E8u;
    // 7F42F2E8: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F42F2EC:
    ctx->pc = 0x7F42F2ECu;
    // 7F42F2EC: bc    4, 2, 0x7F42F42C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42F42C;
        }
    }

label_7F42F2F0:
    ctx->pc = 0x7F42F2F0u;
    ctx->downcount -= 3;
    // 7F42F2F0: lwz     r0, 1144(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1144);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42F2F4:
    ctx->pc = 0x7F42F2F4u;
    // 7F42F2F4: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42F2F8:
    ctx->pc = 0x7F42F2F8u;
    // 7F42F2F8: bc    4, 1, 0x7F42F310
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42F310;
        }
    }

label_7F42F2FC:
    ctx->pc = 0x7F42F2FCu;
    ctx->downcount -= 5;
    // 7F42F2FC: stfs     f0, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42F2FCu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42F300:
    ctx->pc = 0x7F42F300u;
    // 7F42F300: lwz     r3, 1144(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1144);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42F304:
    ctx->pc = 0x7F42F304u;
    // 7F42F304: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F42F308:
    ctx->pc = 0x7F42F308u;
    // 7F42F308: stw     r0, 1144(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42F30C:
    ctx->pc = 0x7F42F30Cu;
    // 7F42F30C: b       0x7F42F42C
    {
            goto label_7F42F42C;
    }

label_7F42F310:
    ctx->pc = 0x7F42F310u;
    ctx->downcount -= 6;
    // 7F42F310: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42F314:
    ctx->pc = 0x7F42F314u;
    // 7F42F314: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F42F318:
    ctx->pc = 0x7F42F318u;
    // 7F42F318: lfs     f0, -10040(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42F318u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10040);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42F31C:
    ctx->pc = 0x7F42F31Cu;
    // 7F42F31C: stfs     f0, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42F31Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42F320:
    ctx->pc = 0x7F42F320u;
    // 7F42F320: stw     r0, 1144(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42F324:
    ctx->pc = 0x7F42F324u;
    // 7F42F324: b       0x7F42F42C
    {
            goto label_7F42F42C;
    }

label_7F42F328:
    ctx->pc = 0x7F42F328u;
    ctx->downcount -= 4;
    // 7F42F328: lfs     f0, 1132(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42F328u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1132);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42F32C:
    ctx->pc = 0x7F42F32Cu;
    // 7F42F32C: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42F32Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F42F330:
    ctx->pc = 0x7F42F330u;
    // 7F42F330: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F42F334:
    ctx->pc = 0x7F42F334u;
    // 7F42F334: bc    4, 2, 0x7F42F388
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42F388;
        }
    }

label_7F42F338:
    ctx->pc = 0x7F42F338u;
    ctx->downcount -= 6;
    // 7F42F338: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42F33C:
    ctx->pc = 0x7F42F33Cu;
    // 7F42F33C: lfs     f1, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42F33Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42F340:
    ctx->pc = 0x7F42F340u;
    // 7F42F340: lfs     f0, -10152(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42F340u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10152);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42F344:
    ctx->pc = 0x7F42F344u;
    // 7F42F344: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42F344u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F42F348:
    ctx->pc = 0x7F42F348u;
    // 7F42F348: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F42F34C:
    ctx->pc = 0x7F42F34Cu;
    // 7F42F34C: bc    4, 2, 0x7F42F42C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42F42C;
        }
    }

label_7F42F350:
    ctx->pc = 0x7F42F350u;
    ctx->downcount -= 3;
    // 7F42F350: lwz     r0, 1144(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1144);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42F354:
    ctx->pc = 0x7F42F354u;
    // 7F42F354: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42F358:
    ctx->pc = 0x7F42F358u;
    // 7F42F358: bc    4, 1, 0x7F42F370
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42F370;
        }
    }

label_7F42F35C:
    ctx->pc = 0x7F42F35Cu;
    ctx->downcount -= 5;
    // 7F42F35C: stfs     f0, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42F35Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42F360:
    ctx->pc = 0x7F42F360u;
    // 7F42F360: lwz     r3, 1144(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1144);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42F364:
    ctx->pc = 0x7F42F364u;
    // 7F42F364: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F42F368:
    ctx->pc = 0x7F42F368u;
    // 7F42F368: stw     r0, 1144(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42F36C:
    ctx->pc = 0x7F42F36Cu;
    // 7F42F36C: b       0x7F42F42C
    {
            goto label_7F42F42C;
    }

label_7F42F370:
    ctx->pc = 0x7F42F370u;
    ctx->downcount -= 6;
    // 7F42F370: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42F374:
    ctx->pc = 0x7F42F374u;
    // 7F42F374: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F42F378:
    ctx->pc = 0x7F42F378u;
    // 7F42F378: lfs     f0, -10064(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42F378u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10064);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42F37C:
    ctx->pc = 0x7F42F37Cu;
    // 7F42F37C: stfs     f0, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42F37Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42F380:
    ctx->pc = 0x7F42F380u;
    // 7F42F380: stw     r0, 1144(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42F384:
    ctx->pc = 0x7F42F384u;
    // 7F42F384: b       0x7F42F42C
    {
            goto label_7F42F42C;
    }

label_7F42F388:
    ctx->pc = 0x7F42F388u;
    ctx->downcount -= 5;
    // 7F42F388: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42F38C:
    ctx->pc = 0x7F42F38Cu;
    // 7F42F38C: lfs     f1, -10036(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42F38Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10036);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42F390:
    ctx->pc = 0x7F42F390u;
    // 7F42F390: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42F390u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F42F394:
    ctx->pc = 0x7F42F394u;
    // 7F42F394: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42F394u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F42F398:
    ctx->pc = 0x7F42F398u;
    // 7F42F398: bc    4, 1, 0x7F42F3EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42F3EC;
        }
    }

label_7F42F39C:
    ctx->pc = 0x7F42F39Cu;
    ctx->downcount -= 3;
    // 7F42F39C: fsubs   f0, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42F39Cu)) return;
    ppc_fsubs(ctx, 0, 3, 1);

label_7F42F3A0:
    ctx->pc = 0x7F42F3A0u;
    // 7F42F3A0: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42F3A0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F42F3A4:
    ctx->pc = 0x7F42F3A4u;
    // 7F42F3A4: bc    4, 0, 0x7F42F3EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42F3EC;
        }
    }

label_7F42F3A8:
    ctx->pc = 0x7F42F3A8u;
    ctx->downcount -= 5;
    // 7F42F3A8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42F3AC:
    ctx->pc = 0x7F42F3ACu;
    // 7F42F3AC: lfs     f1, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42F3ACu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42F3B0:
    ctx->pc = 0x7F42F3B0u;
    // 7F42F3B0: lfs     f0, -10040(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42F3B0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10040);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42F3B4:
    ctx->pc = 0x7F42F3B4u;
    // 7F42F3B4: fcmpu   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42F3B4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], false);

label_7F42F3B8:
    ctx->pc = 0x7F42F3B8u;
    // 7F42F3B8: bc    4, 2, 0x7F42F3CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42F3CC;
        }
    }

label_7F42F3BC:
    ctx->pc = 0x7F42F3BCu;
    ctx->downcount -= 4;
    // 7F42F3BC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42F3C0:
    ctx->pc = 0x7F42F3C0u;
    // 7F42F3C0: lfs     f0, -10032(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42F3C0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10032);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42F3C4:
    ctx->pc = 0x7F42F3C4u;
    // 7F42F3C4: stfs     f0, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42F3C4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42F3C8:
    ctx->pc = 0x7F42F3C8u;
    // 7F42F3C8: b       0x7F42F42C
    {
            goto label_7F42F42C;
    }

label_7F42F3CC:
    ctx->pc = 0x7F42F3CCu;
    ctx->downcount -= 4;
    // 7F42F3CC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42F3D0:
    ctx->pc = 0x7F42F3D0u;
    // 7F42F3D0: lfs     f0, -10064(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42F3D0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10064);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42F3D4:
    ctx->pc = 0x7F42F3D4u;
    // 7F42F3D4: fcmpu   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42F3D4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], false);

label_7F42F3D8:
    ctx->pc = 0x7F42F3D8u;
    // 7F42F3D8: bc    4, 2, 0x7F42F42C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42F42C;
        }
    }

label_7F42F3DC:
    ctx->pc = 0x7F42F3DCu;
    ctx->downcount -= 4;
    // 7F42F3DC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42F3E0:
    ctx->pc = 0x7F42F3E0u;
    // 7F42F3E0: lfs     f0, -10056(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42F3E0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10056);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42F3E4:
    ctx->pc = 0x7F42F3E4u;
    // 7F42F3E4: stfs     f0, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42F3E4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42F3E8:
    ctx->pc = 0x7F42F3E8u;
    // 7F42F3E8: b       0x7F42F42C
    {
            goto label_7F42F42C;
    }

label_7F42F3EC:
    ctx->pc = 0x7F42F3ECu;
    ctx->downcount -= 5;
    // 7F42F3EC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42F3F0:
    ctx->pc = 0x7F42F3F0u;
    // 7F42F3F0: lfs     f1, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42F3F0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42F3F4:
    ctx->pc = 0x7F42F3F4u;
    // 7F42F3F4: lfs     f0, -10032(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42F3F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10032);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42F3F8:
    ctx->pc = 0x7F42F3F8u;
    // 7F42F3F8: fcmpu   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42F3F8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], false);

label_7F42F3FC:
    ctx->pc = 0x7F42F3FCu;
    // 7F42F3FC: bc    4, 2, 0x7F42F410
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42F410;
        }
    }

label_7F42F400:
    ctx->pc = 0x7F42F400u;
    ctx->downcount -= 4;
    // 7F42F400: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42F404:
    ctx->pc = 0x7F42F404u;
    // 7F42F404: lfs     f0, -10040(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42F404u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10040);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42F408:
    ctx->pc = 0x7F42F408u;
    // 7F42F408: stfs     f0, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42F408u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42F40C:
    ctx->pc = 0x7F42F40Cu;
    // 7F42F40C: b       0x7F42F42C
    {
            goto label_7F42F42C;
    }

label_7F42F410:
    ctx->pc = 0x7F42F410u;
    ctx->downcount -= 4;
    // 7F42F410: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42F414:
    ctx->pc = 0x7F42F414u;
    // 7F42F414: lfs     f0, -10056(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42F414u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10056);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42F418:
    ctx->pc = 0x7F42F418u;
    // 7F42F418: fcmpu   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42F418u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], false);

label_7F42F41C:
    ctx->pc = 0x7F42F41Cu;
    // 7F42F41C: bc    4, 2, 0x7F42F42C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42F42C;
        }
    }

label_7F42F420:
    ctx->pc = 0x7F42F420u;
    ctx->downcount -= 3;
    // 7F42F420: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42F424:
    ctx->pc = 0x7F42F424u;
    // 7F42F424: lfs     f0, -10064(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42F424u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10064);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42F428:
    ctx->pc = 0x7F42F428u;
    // 7F42F428: stfs     f0, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42F428u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42F42C:
    ctx->pc = 0x7F42F42Cu;
    ctx->downcount -= 3;
    // 7F42F42C: lwz     r5, 448(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(448);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F42F430:
    ctx->pc = 0x7F42F430u;
    // 7F42F430: cmplwi  r5, 0x0000
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

label_7F42F434:
    ctx->pc = 0x7F42F434u;
    // 7F42F434: bc    12, 2, 0x7F42F458
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42F458;
        }
    }

label_7F42F438:
    ctx->pc = 0x7F42F438u;
    ctx->downcount -= 4;
    // 7F42F438: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F42F43C:
    ctx->pc = 0x7F42F43Cu;
    // 7F42F43C: addi    r4, r29, 492
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(492);

label_7F42F440:
    ctx->pc = 0x7F42F440u;
    // 7F42F440: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F42F444:
    ctx->pc = 0x7F42F444u;
    // 7F42F444: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F42F448u;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F42F448:
    ctx->pc = 0x7F42F448u;
    ctx->downcount -= 2;
    // 7F42F448: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F42F44C:
    ctx->pc = 0x7F42F44Cu;
    // 7F42F44C: bl      0x7F023170
    {
            ctx->lr = 0x7F42F450u;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F42F450:
    ctx->pc = 0x7F42F450u;
    ctx->downcount -= 2;
    // 7F42F450: addi    r3, r29, 448
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(448);

label_7F42F454:
    ctx->pc = 0x7F42F454u;
    // 7F42F454: bl      0x7F0427FC
    {
            ctx->lr = 0x7F42F458u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F42F458:
    ctx->pc = 0x7F42F458u;
    ctx->downcount -= 15;
    // 7F42F458: lwz     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42F45C:
    ctx->pc = 0x7F42F45Cu;
    // 7F42F45C: li      r0, -2
    ctx->gpr[0] = (u32)(s32)(-2);

label_7F42F460:
    ctx->pc = 0x7F42F460u;
    // 7F42F460: lwz     r5, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F42F464:
    ctx->pc = 0x7F42F464u;
    // 7F42F464: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F42F468:
    ctx->pc = 0x7F42F468u;
    // 7F42F468: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_7F42F46C:
    ctx->pc = 0x7F42F46Cu;
    // 7F42F46C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F42F470:
    ctx->pc = 0x7F42F470u;
    // 7F42F470: stw     r0, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42F474:
    ctx->pc = 0x7F42F474u;
    // 7F42F474: and   r0, r5, r4
    {
        ctx->gpr[0] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F42F478:
    ctx->pc = 0x7F42F478u;
    // 7F42F478: addi    r4, r3, 18312
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18312);

label_7F42F47C:
    ctx->pc = 0x7F42F47Cu;
    // 7F42F47C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F42F480:
    ctx->pc = 0x7F42F480u;
    // 7F42F480: stw     r0, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42F484:
    ctx->pc = 0x7F42F484u;
    // 7F42F484: lwz     r6, 448(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(448);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F42F488:
    ctx->pc = 0x7F42F488u;
    // 7F42F488: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F42F48C:
    ctx->pc = 0x7F42F48Cu;
    // 7F42F48C: addi    r4, r6, 4
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(4);

label_7F42F490:
    ctx->pc = 0x7F42F490u;
    // 7F42F490: bl      0x7F014964
    {
            ctx->lr = 0x7F42F494u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F42F494:
    ctx->pc = 0x7F42F494u;
    ctx->downcount -= 7;
    // 7F42F494: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F42F498:
    ctx->pc = 0x7F42F498u;
    // 7F42F498: lwz     r6, 448(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(448);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F42F49C:
    ctx->pc = 0x7F42F49Cu;
    // 7F42F49C: addi    r4, r3, 18312
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18312);

label_7F42F4A0:
    ctx->pc = 0x7F42F4A0u;
    // 7F42F4A0: addi    r3, r29, 864
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(864);

label_7F42F4A4:
    ctx->pc = 0x7F42F4A4u;
    // 7F42F4A4: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F42F4A8:
    ctx->pc = 0x7F42F4A8u;
    // 7F42F4A8: addi    r4, r6, 4
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(4);

label_7F42F4AC:
    ctx->pc = 0x7F42F4ACu;
    // 7F42F4AC: bl      0x7F014964
    {
            ctx->lr = 0x7F42F4B0u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F42F4B0:
    ctx->pc = 0x7F42F4B0u;
    ctx->downcount -= 32;
    // 7F42F4B0: lha     r3, 34(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(34);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F42F4B4:
    ctx->pc = 0x7F42F4B4u;
    // 7F42F4B4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F42F4B8:
    ctx->pc = 0x7F42F4B8u;
    // 7F42F4B8: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F42F4BC:
    ctx->pc = 0x7F42F4BCu;
    // 7F42F4BC: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F42F4C0:
    ctx->pc = 0x7F42F4C0u;
    // 7F42F4C0: xoris   r4, r3, 0x8000
    ctx->gpr[4] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F42F4C4:
    ctx->pc = 0x7F42F4C4u;
    // 7F42F4C4: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42F4C8:
    ctx->pc = 0x7F42F4C8u;
    // 7F42F4C8: lfd     f1, -10136(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F42F4C8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-10136);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42F4CC:
    ctx->pc = 0x7F42F4CCu;
    // 7F42F4CC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42F4D0:
    ctx->pc = 0x7F42F4D0u;
    // 7F42F4D0: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F42F4D4:
    ctx->pc = 0x7F42F4D4u;
    // 7F42F4D4: lfs     f2, -10148(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42F4D4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-10148);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F42F4D8:
    ctx->pc = 0x7F42F4D8u;
    // 7F42F4D8: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42F4D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42F4DC:
    ctx->pc = 0x7F42F4DCu;
    // 7F42F4DC: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42F4DCu)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F42F4E0:
    ctx->pc = 0x7F42F4E0u;
    // 7F42F4E0: lfs     f0, -10144(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42F4E0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42F4E4:
    ctx->pc = 0x7F42F4E4u;
    // 7F42F4E4: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42F4E4u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F42F4E8:
    ctx->pc = 0x7F42F4E8u;
    // 7F42F4E8: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42F4E8u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F42F4EC:
    ctx->pc = 0x7F42F4ECu;
    // 7F42F4EC: bl      0x7F00FAF4
    {
            ctx->lr = 0x7F42F4F0u;
            ctx->pc = 0x7F00FAF4u;
            return;
    }

label_7F42F4F0:
    ctx->pc = 0x7F42F4F0u;
    ctx->downcount -= 34;
    // 7F42F4F0: stfs     f1, 1072(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42F4F0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1072);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F42F4F4:
    ctx->pc = 0x7F42F4F4u;
    // 7F42F4F4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F42F4F8:
    ctx->pc = 0x7F42F4F8u;
    // 7F42F4F8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42F4FC:
    ctx->pc = 0x7F42F4FCu;
    // 7F42F4FC: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F42F500:
    ctx->pc = 0x7F42F500u;
    // 7F42F500: lha     r4, 34(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(34);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F42F504:
    ctx->pc = 0x7F42F504u;
    // 7F42F504: addi    r5, r3, -10136
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-10136);

label_7F42F508:
    ctx->pc = 0x7F42F508u;
    // 7F42F508: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42F50C:
    ctx->pc = 0x7F42F50Cu;
    // 7F42F50C: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42F510:
    ctx->pc = 0x7F42F510u;
    // 7F42F510: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F42F514:
    ctx->pc = 0x7F42F514u;
    // 7F42F514: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F42F514u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42F518:
    ctx->pc = 0x7F42F518u;
    // 7F42F518: stw     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F42F51C:
    ctx->pc = 0x7F42F51Cu;
    // 7F42F51C: lfs     f3, -10148(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42F51Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-10148);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F42F520:
    ctx->pc = 0x7F42F520u;
    // 7F42F520: lfd     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42F520u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42F524:
    ctx->pc = 0x7F42F524u;
    // 7F42F524: lfs     f0, -10144(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42F524u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42F528:
    ctx->pc = 0x7F42F528u;
    // 7F42F528: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F42F528u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F42F52C:
    ctx->pc = 0x7F42F52Cu;
    // 7F42F52C: fmuls   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42F52Cu)) return;
    ppc_fmuls(ctx, 1, 3, 1);

label_7F42F530:
    ctx->pc = 0x7F42F530u;
    // 7F42F530: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42F530u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F42F534:
    ctx->pc = 0x7F42F534u;
    // 7F42F534: bl      0x7F008330
    {
            ctx->lr = 0x7F42F538u;
            ctx->pc = 0x7F008330u;
            return;
    }

label_7F42F538:
    ctx->pc = 0x7F42F538u;
    ctx->downcount -= 16;
    // 7F42F538: stfs     f1, 1080(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42F538u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1080);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F42F53C:
    ctx->pc = 0x7F42F53Cu;
    // 7F42F53C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42F540:
    ctx->pc = 0x7F42F540u;
    // 7F42F540: addi    r4, r3, -10028
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-10028);

label_7F42F544:
    ctx->pc = 0x7F42F544u;
    // 7F42F544: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42F548:
    ctx->pc = 0x7F42F548u;
    // 7F42F548: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42F548u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F42F54C:
    ctx->pc = 0x7F42F54Cu;
    // 7F42F54C: addi    r4, r3, -10024
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-10024);

label_7F42F550:
    ctx->pc = 0x7F42F550u;
    // 7F42F550: lfs     f0, 1072(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42F550u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1072);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42F554:
    ctx->pc = 0x7F42F554u;
    // 7F42F554: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F42F558:
    ctx->pc = 0x7F42F558u;
    // 7F42F558: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42F558u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42F55C:
    ctx->pc = 0x7F42F55Cu;
    // 7F42F55C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F42F560:
    ctx->pc = 0x7F42F560u;
    // 7F42F560: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42F560u)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F42F564:
    ctx->pc = 0x7F42F564u;
    // 7F42F564: stfs     f0, 1088(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42F564u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1088);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42F568:
    ctx->pc = 0x7F42F568u;
    // 7F42F568: lfs     f0, 1080(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42F568u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1080);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42F56C:
    ctx->pc = 0x7F42F56Cu;
    // 7F42F56C: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42F56Cu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F42F570:
    ctx->pc = 0x7F42F570u;
    // 7F42F570: stfs     f0, 1096(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F42F570u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1096);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42F574:
    ctx->pc = 0x7F42F574u;
    // 7F42F574: bl      0x7F42E5E0
    {
            ctx->lr = 0x7F42F578u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42E5E0u;
                return;
            }
            goto label_7F42E5E0;
    }

label_7F42F578:
    ctx->pc = 0x7F42F578u;
    ctx->downcount -= 3;
    // 7F42F578: lwz     r3, 1148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42F57C:
    ctx->pc = 0x7F42F57Cu;
    // 7F42F57C: cmpwi   r3, 0
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

label_7F42F580:
    ctx->pc = 0x7F42F580u;
    // 7F42F580: bc    4, 1, 0x7F42F590
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42F590;
        }
    }

label_7F42F584:
    ctx->pc = 0x7F42F584u;
    ctx->downcount -= 3;
    // 7F42F584: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F42F588:
    ctx->pc = 0x7F42F588u;
    // 7F42F588: stw     r0, 1148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42F58C:
    ctx->pc = 0x7F42F58Cu;
    // 7F42F58C: b       0x7F42F5E8
    {
            goto label_7F42F5E8;
    }

label_7F42F590:
    ctx->pc = 0x7F42F590u;
    ctx->downcount -= 1;
    // 7F42F590: bc    4, 2, 0x7F42F5E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42F5E8;
        }
    }

label_7F42F594:
    ctx->pc = 0x7F42F594u;
    ctx->downcount -= 16;
    // 7F42F594: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42F598:
    ctx->pc = 0x7F42F598u;
    // 7F42F598: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F42F59C:
    ctx->pc = 0x7F42F59Cu;
    // 7F42F59C: lfs     f3, -10052(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42F59Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10052);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F42F5A0:
    ctx->pc = 0x7F42F5A0u;
    // 7F42F5A0: addi    r6, r5, -10048
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-10048);

label_7F42F5A4:
    ctx->pc = 0x7F42F5A4u;
    // 7F42F5A4: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42F5A8:
    ctx->pc = 0x7F42F5A8u;
    // 7F42F5A8: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42F5A8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42F5AC:
    ctx->pc = 0x7F42F5ACu;
    // 7F42F5AC: addi    r5, r4, -10020
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-10020);

label_7F42F5B0:
    ctx->pc = 0x7F42F5B0u;
    // 7F42F5B0: lwz     r3, 1152(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42F5B4:
    ctx->pc = 0x7F42F5B4u;
    // 7F42F5B4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F42F5B4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F42F5B8:
    ctx->pc = 0x7F42F5B8u;
    // 7F42F5B8: fmr    f4, f3
    if (!ppc_fp_available_inline(ctx, 0x7F42F5B8u)) return;
    ctx->fpr[4] = ctx->fpr[3];

label_7F42F5BC:
    ctx->pc = 0x7F42F5BCu;
    // 7F42F5BC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42F5C0:
    ctx->pc = 0x7F42F5C0u;
    // 7F42F5C0: addi    r7, r29, 1088
    ctx->gpr[7] = ctx->gpr[29] + (u32)(s32)(1088);

label_7F42F5C4:
    ctx->pc = 0x7F42F5C4u;
    // 7F42F5C4: li      r5, 108
    ctx->gpr[5] = (u32)(s32)(108);

label_7F42F5C8:
    ctx->pc = 0x7F42F5C8u;
    // 7F42F5C8: li      r6, 108
    ctx->gpr[6] = (u32)(s32)(108);

label_7F42F5CC:
    ctx->pc = 0x7F42F5CCu;
    // 7F42F5CC: li      r8, 3
    ctx->gpr[8] = (u32)(s32)(3);

label_7F42F5D0:
    ctx->pc = 0x7F42F5D0u;
    // 7F42F5D0: bl      0x7F3533D8
    {
            ctx->lr = 0x7F42F5D4u;
            ctx->pc = 0x7F3533D8u;
            return;
    }

label_7F42F5D4:
    ctx->pc = 0x7F42F5D4u;
    ctx->downcount -= 3;
    // 7F42F5D4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42F5D8:
    ctx->pc = 0x7F42F5D8u;
    // 7F42F5D8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F42F5DC:
    ctx->pc = 0x7F42F5DCu;
    // 7F42F5DC: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F42F5E0u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F42F5E0:
    ctx->pc = 0x7F42F5E0u;
    ctx->downcount -= 2;
    // 7F42F5E0: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F42F5E4:
    ctx->pc = 0x7F42F5E4u;
    // 7F42F5E4: stw     r0, 1148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42F5E8:
    ctx->pc = 0x7F42F5E8u;
    ctx->downcount -= 3;
    // 7F42F5E8: lwz     r3, 1156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42F5EC:
    ctx->pc = 0x7F42F5ECu;
    // 7F42F5EC: cmpwi   r3, 0
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

label_7F42F5F0:
    ctx->pc = 0x7F42F5F0u;
    // 7F42F5F0: bc    4, 1, 0x7F42F608
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42F608;
        }
    }

label_7F42F5F4:
    ctx->pc = 0x7F42F5F4u;
    ctx->downcount -= 2;
    // 7F42F5F4: cmpwi   r3, 60
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

label_7F42F5F8:
    ctx->pc = 0x7F42F5F8u;
    // 7F42F5F8: bc    4, 0, 0x7F42F608
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42F608;
        }
    }

label_7F42F5FC:
    ctx->pc = 0x7F42F5FCu;
    ctx->downcount -= 3;
    // 7F42F5FC: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F42F600:
    ctx->pc = 0x7F42F600u;
    // 7F42F600: stw     r0, 1156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42F604:
    ctx->pc = 0x7F42F604u;
    // 7F42F604: b       0x7F42F610
    {
            goto label_7F42F610;
    }

label_7F42F608:
    ctx->pc = 0x7F42F608u;
    ctx->downcount -= 2;
    // 7F42F608: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F42F60C:
    ctx->pc = 0x7F42F60Cu;
    // 7F42F60C: stw     r0, 1156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42F610:
    ctx->pc = 0x7F42F610u;
    ctx->downcount -= 5;
    // 7F42F610: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F42F614:
    ctx->pc = 0x7F42F614u;
    // 7F42F614: stw     r0, 1160(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1160);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42F618:
    ctx->pc = 0x7F42F618u;
    // 7F42F618: lwz     r3, 1184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42F61C:
    ctx->pc = 0x7F42F61Cu;
    // 7F42F61C: cmpwi   r3, 0
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

label_7F42F620:
    ctx->pc = 0x7F42F620u;
    // 7F42F620: bc    4, 1, 0x7F42F638
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42F638;
        }
    }

label_7F42F624:
    ctx->pc = 0x7F42F624u;
    ctx->downcount -= 2;
    // 7F42F624: cmpwi   r3, 90
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

label_7F42F628:
    ctx->pc = 0x7F42F628u;
    // 7F42F628: bc    4, 0, 0x7F42F638
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42F638;
        }
    }

label_7F42F62C:
    ctx->pc = 0x7F42F62Cu;
    ctx->downcount -= 3;
    // 7F42F62C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F42F630:
    ctx->pc = 0x7F42F630u;
    // 7F42F630: stw     r0, 1184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1184);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42F634:
    ctx->pc = 0x7F42F634u;
    // 7F42F634: b       0x7F42F640
    {
            goto label_7F42F640;
    }

label_7F42F638:
    ctx->pc = 0x7F42F638u;
    ctx->downcount -= 2;
    // 7F42F638: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F42F63C:
    ctx->pc = 0x7F42F63Cu;
    // 7F42F63C: stw     r0, 1184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1184);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42F640:
    ctx->pc = 0x7F42F640u;
    ctx->downcount -= 3;
    // 7F42F640: lwz     r3, 1188(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42F644:
    ctx->pc = 0x7F42F644u;
    // 7F42F644: cmpwi   r3, 0
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

label_7F42F648:
    ctx->pc = 0x7F42F648u;
    // 7F42F648: bc    4, 1, 0x7F42F660
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42F660;
        }
    }

label_7F42F64C:
    ctx->pc = 0x7F42F64Cu;
    ctx->downcount -= 2;
    // 7F42F64C: cmpwi   r3, 60
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

label_7F42F650:
    ctx->pc = 0x7F42F650u;
    // 7F42F650: bc    4, 0, 0x7F42F660
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42F660;
        }
    }

label_7F42F654:
    ctx->pc = 0x7F42F654u;
    ctx->downcount -= 3;
    // 7F42F654: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F42F658:
    ctx->pc = 0x7F42F658u;
    // 7F42F658: stw     r0, 1188(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1188);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42F65C:
    ctx->pc = 0x7F42F65Cu;
    // 7F42F65C: b       0x7F42F668
    {
            goto label_7F42F668;
    }

label_7F42F660:
    ctx->pc = 0x7F42F660u;
    ctx->downcount -= 2;
    // 7F42F660: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F42F664:
    ctx->pc = 0x7F42F664u;
    // 7F42F664: stw     r0, 1188(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1188);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42F668:
    ctx->pc = 0x7F42F668u;
    ctx->downcount -= 16;
    // 7F42F668: lmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F42F66C:
    ctx->pc = 0x7F42F66Cu;
    // 7F42F66C: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42F670:
    ctx->pc = 0x7F42F670u;
    // 7F42F670: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42F674:
    ctx->pc = 0x7F42F674u;
    // 7F42F674: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F42F678:
    ctx->pc = 0x7F42F678u;
    // 7F42F678: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42F67C:
    ctx->pc = 0x7F42F67Cu;
    ctx->downcount -= 18;
    // 7F42F67C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42F680:
    ctx->pc = 0x7F42F680u;
    // 7F42F680: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42F684:
    ctx->pc = 0x7F42F684u;
    // 7F42F684: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42F688:
    ctx->pc = 0x7F42F688u;
    // 7F42F688: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F42F68C:
    ctx->pc = 0x7F42F68Cu;
    // 7F42F68C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42F690:
    ctx->pc = 0x7F42F690u;
    // 7F42F690: lwz     r0, 448(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(448);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42F694:
    ctx->pc = 0x7F42F694u;
    // 7F42F694: cmplwi  r0, 0x0000
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

label_7F42F698:
    ctx->pc = 0x7F42F698u;
    // 7F42F698: bc    12, 2, 0x7F42F6AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42F6AC;
        }
    }

label_7F42F69C:
    ctx->pc = 0x7F42F69Cu;
    ctx->downcount -= 2;
    // 7F42F69C: addi    r3, r29, 48
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(48);

label_7F42F6A0:
    ctx->pc = 0x7F42F6A0u;
    // 7F42F6A0: bl      0x7F023E10
    {
            ctx->lr = 0x7F42F6A4u;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F42F6A4:
    ctx->pc = 0x7F42F6A4u;
    ctx->downcount -= 2;
    // 7F42F6A4: addi    r3, r29, 448
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(448);

label_7F42F6A8:
    ctx->pc = 0x7F42F6A8u;
    // 7F42F6A8: bl      0x7F042AAC
    {
            ctx->lr = 0x7F42F6ACu;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F42F6AC:
    ctx->pc = 0x7F42F6ACu;
    ctx->downcount -= 3;
    // 7F42F6AC: lwz     r3, 1104(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1104);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42F6B0:
    ctx->pc = 0x7F42F6B0u;
    // 7F42F6B0: cmplwi  r3, 0x0000
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

label_7F42F6B4:
    ctx->pc = 0x7F42F6B4u;
    // 7F42F6B4: bc    12, 2, 0x7F42F6BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42F6BC;
        }
    }

label_7F42F6B8:
    ctx->pc = 0x7F42F6B8u;
    ctx->downcount -= 1;
    // 7F42F6B8: bl      0x7F3C91A8
    {
            ctx->lr = 0x7F42F6BCu;
            ctx->pc = 0x7F3C91A8u;
            return;
    }

label_7F42F6BC:
    ctx->pc = 0x7F42F6BCu;
    ctx->downcount -= 3;
    // 7F42F6BC: lwz     r3, 1108(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1108);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42F6C0:
    ctx->pc = 0x7F42F6C0u;
    // 7F42F6C0: cmplwi  r3, 0x0000
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

label_7F42F6C4:
    ctx->pc = 0x7F42F6C4u;
    // 7F42F6C4: bc    12, 2, 0x7F42F6CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42F6CC;
        }
    }

label_7F42F6C8:
    ctx->pc = 0x7F42F6C8u;
    ctx->downcount -= 1;
    // 7F42F6C8: bl      0x7F3C91A8
    {
            ctx->lr = 0x7F42F6CCu;
            ctx->pc = 0x7F3C91A8u;
            return;
    }

label_7F42F6CC:
    ctx->pc = 0x7F42F6CCu;
    ctx->downcount -= 3;
    // 7F42F6CC: lwz     r3, 1112(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1112);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42F6D0:
    ctx->pc = 0x7F42F6D0u;
    // 7F42F6D0: cmplwi  r3, 0x0000
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

label_7F42F6D4:
    ctx->pc = 0x7F42F6D4u;
    // 7F42F6D4: bc    12, 2, 0x7F42F6DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42F6DC;
        }
    }

label_7F42F6D8:
    ctx->pc = 0x7F42F6D8u;
    ctx->downcount -= 1;
    // 7F42F6D8: bl      0x7F3C91A8
    {
            ctx->lr = 0x7F42F6DCu;
            ctx->pc = 0x7F3C91A8u;
            return;
    }

label_7F42F6DC:
    ctx->pc = 0x7F42F6DCu;
    ctx->downcount -= 3;
    // 7F42F6DC: lwz     r3, 1116(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1116);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42F6E0:
    ctx->pc = 0x7F42F6E0u;
    // 7F42F6E0: cmplwi  r3, 0x0000
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

label_7F42F6E4:
    ctx->pc = 0x7F42F6E4u;
    // 7F42F6E4: bc    12, 2, 0x7F42F6EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42F6EC;
        }
    }

label_7F42F6E8:
    ctx->pc = 0x7F42F6E8u;
    ctx->downcount -= 1;
    // 7F42F6E8: bl      0x7F3C91A8
    {
            ctx->lr = 0x7F42F6ECu;
            ctx->pc = 0x7F3C91A8u;
            return;
    }

label_7F42F6EC:
    ctx->pc = 0x7F42F6ECu;
    ctx->downcount -= 3;
    // 7F42F6EC: lwz     r0, 1180(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42F6F0:
    ctx->pc = 0x7F42F6F0u;
    // 7F42F6F0: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42F6F4:
    ctx->pc = 0x7F42F6F4u;
    // 7F42F6F4: bc    12, 2, 0x7F42F724
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42F724;
        }
    }

label_7F42F6F8:
    ctx->pc = 0x7F42F6F8u;
    ctx->downcount -= 2;
    // 7F42F6F8: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F42F6FC:
    ctx->pc = 0x7F42F6FCu;
    // 7F42F6FC: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F42F700:
    ctx->downcount -= 4;
    // 7F42F700: addi    r0, r31, 620
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(620);

label_7F42F704:
    ctx->pc = 0x7F42F704u;
    // 7F42F704: lwzx    r3, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42F708:
    // 7F42F708: cmplwi  r3, 0x0000
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

label_7F42F70C:
    // 7F42F70C: bc    12, 2, 0x7F42F714
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42F714;
        }
    }

label_7F42F710:
    ctx->downcount -= 1;
    // 7F42F710: bl      0x7F10C3F0
    {
            ctx->lr = 0x7F42F714u;
            ctx->pc = 0x7F10C3F0u;
            return;
    }

label_7F42F714:
    ctx->downcount -= 4;
    // 7F42F714: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F42F718:
    // 7F42F718: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F42F71C:
    // 7F42F71C: cmpwi   r30, 4
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

label_7F42F720:
    // 7F42F720: bc    12, 0, 0x7F42F700
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42F700u;
                return;
            }
            goto label_7F42F700;
        }
    }

label_7F42F724:
    ctx->pc = 0x7F42F724u;
    ctx->downcount -= 16;
    // 7F42F724: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F42F728:
    ctx->pc = 0x7F42F728u;
    // 7F42F728: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42F72C:
    ctx->pc = 0x7F42F72Cu;
    // 7F42F72C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42F730:
    ctx->pc = 0x7F42F730u;
    // 7F42F730: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F42F734:
    ctx->pc = 0x7F42F734u;
    // 7F42F734: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42F738:
    ctx->pc = 0x7F42F738u;
    ctx->downcount -= 51;
    // 7F42F738: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42F73C:
    ctx->pc = 0x7F42F73Cu;
    // 7F42F73C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42F740:
    ctx->pc = 0x7F42F740u;
    // 7F42F740: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42F744:
    ctx->pc = 0x7F42F744u;
    // 7F42F744: stmw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F42F748:
    ctx->pc = 0x7F42F748u;
    // 7F42F748: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42F74C:
    ctx->pc = 0x7F42F74Cu;
    // 7F42F74C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42F750:
    ctx->pc = 0x7F42F750u;
    // 7F42F750: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F42F754:
    ctx->pc = 0x7F42F754u;
    // 7F42F754: lfs     f1, -10064(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42F754u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10064);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42F758:
    ctx->pc = 0x7F42F758u;
    // 7F42F758: addi    r4, r30, 1056
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(1056);

label_7F42F75C:
    ctx->pc = 0x7F42F75Cu;
    // 7F42F75C: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F42F760:
    ctx->pc = 0x7F42F760u;
    // 7F42F760: lwz     r5, 448(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(448);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F42F764:
    ctx->pc = 0x7F42F764u;
    // 7F42F764: lwz     r6, 72(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F42F768:
    ctx->pc = 0x7F42F768u;
    // 7F42F768: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F42F76C:
    ctx->pc = 0x7F42F76Cu;
    // 7F42F76C: lfs     f0, 36(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42F76Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42F770:
    ctx->pc = 0x7F42F770u;
    // 7F42F770: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42F770u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42F774:
    ctx->pc = 0x7F42F774u;
    // 7F42F774: lfs     f0, 40(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42F774u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42F778:
    ctx->pc = 0x7F42F778u;
    // 7F42F778: stfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42F778u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42F77C:
    ctx->pc = 0x7F42F77Cu;
    // 7F42F77C: lfs     f0, 44(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42F77Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42F780:
    ctx->pc = 0x7F42F780u;
    // 7F42F780: stfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42F780u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42F784:
    ctx->pc = 0x7F42F784u;
    // 7F42F784: stfs     f1, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42F784u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F42F788:
    ctx->pc = 0x7F42F788u;
    // 7F42F788: lfs     f0, 24(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42F788u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42F78C:
    ctx->pc = 0x7F42F78Cu;
    // 7F42F78C: stfs     f0, 1056(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42F78Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1056);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42F790:
    ctx->pc = 0x7F42F790u;
    // 7F42F790: lwz     r6, 448(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(448);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F42F794:
    ctx->pc = 0x7F42F794u;
    // 7F42F794: lwz     r6, 72(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F42F798:
    ctx->pc = 0x7F42F798u;
    // 7F42F798: lfs     f0, 28(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42F798u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42F79C:
    ctx->pc = 0x7F42F79Cu;
    // 7F42F79C: stfs     f0, 1060(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42F79Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1060);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42F7A0:
    ctx->pc = 0x7F42F7A0u;
    // 7F42F7A0: lwz     r6, 448(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(448);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F42F7A4:
    ctx->pc = 0x7F42F7A4u;
    // 7F42F7A4: lwz     r6, 72(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F42F7A8:
    ctx->pc = 0x7F42F7A8u;
    // 7F42F7A8: lfs     f0, 32(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42F7A8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42F7AC:
    ctx->pc = 0x7F42F7ACu;
    // 7F42F7AC: stfs     f0, 1064(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42F7ACu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1064);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42F7B0:
    ctx->pc = 0x7F42F7B0u;
    // 7F42F7B0: stfs     f1, 1068(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42F7B0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1068);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F42F7B4:
    ctx->pc = 0x7F42F7B4u;
    // 7F42F7B4: lwz     r6, 448(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(448);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F42F7B8:
    ctx->pc = 0x7F42F7B8u;
    // 7F42F7B8: lwz     r6, 72(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F42F7BC:
    ctx->pc = 0x7F42F7BCu;
    // 7F42F7BC: lfs     f0, 24(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42F7BCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42F7C0:
    ctx->pc = 0x7F42F7C0u;
    // 7F42F7C0: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42F7C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42F7C4:
    ctx->pc = 0x7F42F7C4u;
    // 7F42F7C4: lfs     f0, 28(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42F7C4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42F7C8:
    ctx->pc = 0x7F42F7C8u;
    // 7F42F7C8: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42F7C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42F7CC:
    ctx->pc = 0x7F42F7CCu;
    // 7F42F7CC: lfs     f0, 32(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42F7CCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42F7D0:
    ctx->pc = 0x7F42F7D0u;
    // 7F42F7D0: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42F7D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42F7D4:
    ctx->pc = 0x7F42F7D4u;
    // 7F42F7D4: stfs     f1, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42F7D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F42F7D8:
    ctx->pc = 0x7F42F7D8u;
    // 7F42F7D8: bl      0x800261D8
    {
            ctx->lr = 0x7F42F7DCu;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F42F7DC:
    ctx->pc = 0x7F42F7DCu;
    ctx->downcount -= 5;
    // 7F42F7DC: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42F7E0:
    ctx->pc = 0x7F42F7E0u;
    // 7F42F7E0: addi    r3, r30, 1056
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(1056);

label_7F42F7E4:
    ctx->pc = 0x7F42F7E4u;
    // 7F42F7E4: lfs     f1, -10016(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42F7E4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10016);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42F7E8:
    ctx->pc = 0x7F42F7E8u;
    // 7F42F7E8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42F7EC:
    ctx->pc = 0x7F42F7ECu;
    // 7F42F7EC: bl      0x800261FC
    {
            ctx->lr = 0x7F42F7F0u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F42F7F0:
    ctx->pc = 0x7F42F7F0u;
    ctx->downcount -= 4;
    // 7F42F7F0: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F42F7F4:
    ctx->pc = 0x7F42F7F4u;
    // 7F42F7F4: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F42F7F8:
    ctx->pc = 0x7F42F7F8u;
    // 7F42F7F8: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42F7FC:
    ctx->pc = 0x7F42F7FCu;
    // 7F42F7FC: bl      0x800261B4
    {
            ctx->lr = 0x7F42F800u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F42F800:
    ctx->pc = 0x7F42F800u;
    ctx->downcount -= 5;
    // 7F42F800: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42F804:
    ctx->pc = 0x7F42F804u;
    // 7F42F804: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F42F808:
    ctx->pc = 0x7F42F808u;
    // 7F42F808: lfs     f1, -10016(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42F808u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10016);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42F80C:
    ctx->pc = 0x7F42F80Cu;
    // 7F42F80C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42F810:
    ctx->pc = 0x7F42F810u;
    // 7F42F810: bl      0x800261FC
    {
            ctx->lr = 0x7F42F814u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F42F814:
    ctx->pc = 0x7F42F814u;
    ctx->downcount -= 7;
    // 7F42F814: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F42F818:
    ctx->pc = 0x7F42F818u;
    // 7F42F818: addi    r3, r30, 640
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(640);

label_7F42F81C:
    ctx->pc = 0x7F42F81Cu;
    // 7F42F81C: addi    r7, r30, 1056
    ctx->gpr[7] = ctx->gpr[30] + (u32)(s32)(1056);

label_7F42F820:
    ctx->pc = 0x7F42F820u;
    // 7F42F820: addi    r8, r1, 24
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(24);

label_7F42F824:
    ctx->pc = 0x7F42F824u;
    // 7F42F824: li      r4, 16401
    ctx->gpr[4] = (u32)(s32)(16401);

label_7F42F828:
    ctx->pc = 0x7F42F828u;
    // 7F42F828: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_7F42F82C:
    ctx->pc = 0x7F42F82Cu;
    // 7F42F82C: bl      0x7F014788
    {
            ctx->lr = 0x7F42F830u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F42F830:
    ctx->pc = 0x7F42F830u;
    ctx->downcount -= 13;
    // 7F42F830: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F42F834:
    ctx->pc = 0x7F42F834u;
    // 7F42F834: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F42F838:
    ctx->pc = 0x7F42F838u;
    // 7F42F838: addi    r5, r3, 13880
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F42F83C:
    ctx->pc = 0x7F42F83Cu;
    // 7F42F83C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F42F840:
    ctx->pc = 0x7F42F840u;
    // 7F42F840: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F42F844:
    ctx->pc = 0x7F42F844u;
    // 7F42F844: addi    r9, r4, 12832
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F42F848:
    ctx->pc = 0x7F42F848u;
    // 7F42F848: addi    r3, r30, 640
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(640);

label_7F42F84C:
    ctx->pc = 0x7F42F84Cu;
    // 7F42F84C: addi    r4, r30, 832
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(832);

label_7F42F850:
    ctx->pc = 0x7F42F850u;
    // 7F42F850: lha     r0, 286(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(286);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F42F854:
    ctx->pc = 0x7F42F854u;
    // 7F42F854: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F42F858:
    ctx->pc = 0x7F42F858u;
    // 7F42F858: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F42F85C:
    ctx->pc = 0x7F42F85Cu;
    // 7F42F85C: rlwinm r6, r0, 0, 16, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F42F860:
    ctx->pc = 0x7F42F860u;
    // 7F42F860: bl      0x7F014B78
    {
            ctx->lr = 0x7F42F864u;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F42F864:
    ctx->pc = 0x7F42F864u;
    ctx->downcount -= 2;
    // 7F42F864: addi    r3, r30, 640
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(640);

label_7F42F868:
    ctx->pc = 0x7F42F868u;
    // 7F42F868: bl      0x7F0148A0
    {
            ctx->lr = 0x7F42F86Cu;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F42F86C:
    ctx->pc = 0x7F42F86Cu;
    ctx->downcount -= 5;
    // 7F42F86C: lis     r3, 32579
    ctx->gpr[3] = ((u32)(s32)(32579) << 16);

label_7F42F870:
    ctx->pc = 0x7F42F870u;
    // 7F42F870: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F42F874:
    ctx->pc = 0x7F42F874u;
    // 7F42F874: addi    r4, r3, -5216
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-5216);

label_7F42F878:
    ctx->pc = 0x7F42F878u;
    // 7F42F878: addi    r3, r30, 640
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(640);

label_7F42F87C:
    ctx->pc = 0x7F42F87Cu;
    // 7F42F87C: bl      0x7F014B6C
    {
            ctx->lr = 0x7F42F880u;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F42F880:
    ctx->pc = 0x7F42F880u;
    ctx->downcount -= 4;
    // 7F42F880: lis     r4, 151
    ctx->gpr[4] = ((u32)(s32)(151) << 16);

label_7F42F884:
    ctx->pc = 0x7F42F884u;
    // 7F42F884: addi    r3, r30, 640
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(640);

label_7F42F888:
    ctx->pc = 0x7F42F888u;
    // 7F42F888: addi    r4, r4, -5570
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5570);

label_7F42F88C:
    ctx->pc = 0x7F42F88Cu;
    // 7F42F88C: bl      0x7F01488C
    {
            ctx->lr = 0x7F42F890u;
            ctx->pc = 0x7F01488Cu;
            return;
    }

label_7F42F890:
    ctx->pc = 0x7F42F890u;
    ctx->downcount -= 18;
    // 7F42F890: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42F894:
    ctx->pc = 0x7F42F894u;
    // 7F42F894: lfs     f0, 1056(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42F894u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1056);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42F898:
    ctx->pc = 0x7F42F898u;
    // 7F42F898: lfs     f1, -10012(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42F898u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10012);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42F89C:
    ctx->pc = 0x7F42F89Cu;
    // 7F42F89C: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F42F8A0:
    ctx->pc = 0x7F42F8A0u;
    // 7F42F8A0: addi    r3, r30, 864
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(864);

label_7F42F8A4:
    ctx->pc = 0x7F42F8A4u;
    // 7F42F8A4: addi    r7, r1, 8
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(8);

label_7F42F8A8:
    ctx->pc = 0x7F42F8A8u;
    // 7F42F8A8: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42F8A8u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F42F8AC:
    ctx->pc = 0x7F42F8ACu;
    // 7F42F8AC: addi    r8, r1, 24
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(24);

label_7F42F8B0:
    ctx->pc = 0x7F42F8B0u;
    // 7F42F8B0: li      r4, 16404
    ctx->gpr[4] = (u32)(s32)(16404);

label_7F42F8B4:
    ctx->pc = 0x7F42F8B4u;
    // 7F42F8B4: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F42F8B8:
    ctx->pc = 0x7F42F8B8u;
    // 7F42F8B8: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42F8B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42F8BC:
    ctx->pc = 0x7F42F8BCu;
    // 7F42F8BC: lfs     f0, 1060(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42F8BCu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1060);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42F8C0:
    ctx->pc = 0x7F42F8C0u;
    // 7F42F8C0: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42F8C0u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F42F8C4:
    ctx->pc = 0x7F42F8C4u;
    // 7F42F8C4: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42F8C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42F8C8:
    ctx->pc = 0x7F42F8C8u;
    // 7F42F8C8: lfs     f0, 1064(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F42F8C8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1064);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42F8CC:
    ctx->pc = 0x7F42F8CCu;
    // 7F42F8CC: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42F8CCu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F42F8D0:
    ctx->pc = 0x7F42F8D0u;
    // 7F42F8D0: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42F8D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42F8D4:
    ctx->pc = 0x7F42F8D4u;
    // 7F42F8D4: bl      0x7F014788
    {
            ctx->lr = 0x7F42F8D8u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F42F8D8:
    ctx->pc = 0x7F42F8D8u;
    ctx->downcount -= 2;
    // 7F42F8D8: addi    r3, r30, 864
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(864);

label_7F42F8DC:
    ctx->pc = 0x7F42F8DCu;
    // 7F42F8DC: bl      0x7F0148A0
    {
            ctx->lr = 0x7F42F8E0u;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F42F8E0:
    ctx->pc = 0x7F42F8E0u;
    ctx->downcount -= 5;
    // 7F42F8E0: lis     r3, 32579
    ctx->gpr[3] = ((u32)(s32)(32579) << 16);

label_7F42F8E4:
    ctx->pc = 0x7F42F8E4u;
    // 7F42F8E4: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F42F8E8:
    ctx->pc = 0x7F42F8E8u;
    // 7F42F8E8: addi    r4, r3, -5216
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-5216);

label_7F42F8EC:
    ctx->pc = 0x7F42F8ECu;
    // 7F42F8EC: addi    r3, r30, 864
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(864);

label_7F42F8F0:
    ctx->pc = 0x7F42F8F0u;
    // 7F42F8F0: bl      0x7F014B6C
    {
            ctx->lr = 0x7F42F8F4u;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F42F8F4:
    ctx->pc = 0x7F42F8F4u;
    ctx->downcount -= 4;
    // 7F42F8F4: lis     r4, 151
    ctx->gpr[4] = ((u32)(s32)(151) << 16);

label_7F42F8F8:
    ctx->pc = 0x7F42F8F8u;
    // 7F42F8F8: addi    r3, r30, 864
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(864);

label_7F42F8FC:
    ctx->pc = 0x7F42F8FCu;
    // 7F42F8FC: addi    r4, r4, -5570
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5570);

label_7F42F900:
    ctx->pc = 0x7F42F900u;
    // 7F42F900: bl      0x7F01488C
    {
            ctx->lr = 0x7F42F904u;
            ctx->pc = 0x7F01488Cu;
            return;
    }

label_7F42F904:
    ctx->pc = 0x7F42F904u;
    ctx->downcount -= 16;
    // 7F42F904: lmw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F42F908:
    ctx->pc = 0x7F42F908u;
    // 7F42F908: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42F90C:
    ctx->pc = 0x7F42F90Cu;
    // 7F42F90C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42F910:
    ctx->pc = 0x7F42F910u;
    // 7F42F910: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F42F914:
    ctx->pc = 0x7F42F914u;
    // 7F42F914: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42F918:
    ctx->pc = 0x7F42F918u;
    ctx->downcount -= 35;
    // 7F42F918: stwu     r1, -192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-192);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42F91C:
    ctx->pc = 0x7F42F91Cu;
    // 7F42F91C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42F920:
    ctx->pc = 0x7F42F920u;
    // 7F42F920: stw     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42F924:
    ctx->pc = 0x7F42F924u;
    // 7F42F924: stfd     f31, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42F924u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F42F928:
    ctx->pc = 0x7F42F928u;
    // 7F42F928: psq_st   f31, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F42F928u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F42F928u);
        if (ctx->exception) return;
    }

label_7F42F92C:
    ctx->pc = 0x7F42F92Cu;
    // 7F42F92C: stmw     r27, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F42F930:
    ctx->pc = 0x7F42F930u;
    // 7F42F930: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42F934:
    ctx->pc = 0x7F42F934u;
    // 7F42F934: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F42F938:
    ctx->pc = 0x7F42F938u;
    // 7F42F938: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F42F93C:
    ctx->pc = 0x7F42F93Cu;
    // 7F42F93C: stw     r29, 1152(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1152);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F42F940:
    ctx->pc = 0x7F42F940u;
    // 7F42F940: addi    r10, r3, -2128
    ctx->gpr[10] = ctx->gpr[3] + (u32)(s32)(-2128);

label_7F42F944:
    ctx->pc = 0x7F42F944u;
    // 7F42F944: lis     r6, 32592
    ctx->gpr[6] = ((u32)(s32)(32592) << 16);

label_7F42F948:
    ctx->pc = 0x7F42F948u;
    // 7F42F948: lwz     r0, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42F94C:
    ctx->pc = 0x7F42F94Cu;
    // 7F42F94C: addi    r3, r28, 48
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(48);

label_7F42F950:
    ctx->pc = 0x7F42F950u;
    // 7F42F950: addi    r7, r6, -2124
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(-2124);

label_7F42F954:
    ctx->pc = 0x7F42F954u;
    // 7F42F954: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F42F958:
    ctx->pc = 0x7F42F958u;
    // 7F42F958: stw     r0, 1180(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42F95C:
    ctx->pc = 0x7F42F95Cu;
    // 7F42F95C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42F960:
    ctx->pc = 0x7F42F960u;
    // 7F42F960: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F42F964:
    ctx->pc = 0x7F42F964u;
    // 7F42F964: lwz     r9, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F42F968:
    ctx->pc = 0x7F42F968u;
    // 7F42F968: rlwinm r8, r9, 2, 0, 29
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[9], 2u) & 0xFFFFFFFCu;
    }

label_7F42F96C:
    ctx->pc = 0x7F42F96Cu;
    // 7F42F96C: addi    r0, r9, 1
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(1);

label_7F42F970:
    ctx->pc = 0x7F42F970u;
    // 7F42F970: stwx    r3, r7, r8
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[8];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42F974:
    ctx->pc = 0x7F42F974u;
    // 7F42F974: stw     r0, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42F978:
    ctx->pc = 0x7F42F978u;
    // 7F42F978: bl      0x7F022FB4
    {
            ctx->lr = 0x7F42F97Cu;
            ctx->pc = 0x7F022FB4u;
            return;
    }

label_7F42F97C:
    ctx->pc = 0x7F42F97Cu;
    ctx->downcount -= 2;
    // 7F42F97C: cmpwi   r3, 0
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

label_7F42F980:
    ctx->pc = 0x7F42F980u;
    // 7F42F980: bc    4, 0, 0x7F42F98C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42F98C;
        }
    }

label_7F42F984:
    ctx->pc = 0x7F42F984u;
    ctx->downcount -= 2;
    // 7F42F984: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F42F988:
    ctx->pc = 0x7F42F988u;
    // 7F42F988: b       0x7F42FE9C
    {
            goto label_7F42FE9C;
    }

label_7F42F98C:
    ctx->pc = 0x7F42F98Cu;
    ctx->downcount -= 5;
    // 7F42F98C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F42F990:
    ctx->pc = 0x7F42F990u;
    // 7F42F990: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F42F994:
    ctx->pc = 0x7F42F994u;
    // 7F42F994: li      r5, -2
    ctx->gpr[5] = (u32)(s32)(-2);

label_7F42F998:
    ctx->pc = 0x7F42F998u;
    // 7F42F998: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_7F42F99C:
    ctx->pc = 0x7F42F99Cu;
    // 7F42F99C: bl      0x7F023F7C
    {
            ctx->lr = 0x7F42F9A0u;
            ctx->pc = 0x7F023F7Cu;
            return;
    }

label_7F42F9A0:
    ctx->pc = 0x7F42F9A0u;
    ctx->downcount -= 9;
    // 7F42F9A0: lhz     r5, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_7F42F9A4:
    ctx->pc = 0x7F42F9A4u;
    // 7F42F9A4: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F42F9A8:
    ctx->pc = 0x7F42F9A8u;
    // 7F42F9A8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F42F9AC:
    ctx->pc = 0x7F42F9ACu;
    // 7F42F9AC: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F42F9B0:
    ctx->pc = 0x7F42F9B0u;
    // 7F42F9B0: rlwinm r5, r5, 0, 16, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x0000FFFCu;
    }

label_7F42F9B4:
    ctx->pc = 0x7F42F9B4u;
    // 7F42F9B4: sth     r5, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F42F9B8:
    ctx->pc = 0x7F42F9B8u;
    // 7F42F9B8: stw     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F42F9BC:
    ctx->pc = 0x7F42F9BCu;
    // 7F42F9BC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42F9C0:
    ctx->pc = 0x7F42F9C0u;
    // 7F42F9C0: bl      0x7F3C664C
    {
            ctx->lr = 0x7F42F9C4u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F42F9C4:
    ctx->pc = 0x7F42F9C4u;
    ctx->downcount -= 2;
    // 7F42F9C4: cmplwi  r3, 0x0000
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

label_7F42F9C8:
    ctx->pc = 0x7F42F9C8u;
    // 7F42F9C8: bc    12, 2, 0x7F42F9E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42F9E0;
        }
    }

label_7F42F9CC:
    ctx->pc = 0x7F42F9CCu;
    ctx->downcount -= 2;
    // 7F42F9CC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F42F9D0:
    ctx->pc = 0x7F42F9D0u;
    // 7F42F9D0: bl      0x7F3C6A78
    {
            ctx->lr = 0x7F42F9D4u;
            ctx->pc = 0x7F3C6A78u;
            return;
    }

label_7F42F9D4:
    ctx->pc = 0x7F42F9D4u;
    ctx->downcount -= 3;
    // 7F42F9D4: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F42F9D8:
    ctx->pc = 0x7F42F9D8u;
    // 7F42F9D8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F42F9DC:
    ctx->pc = 0x7F42F9DCu;
    // 7F42F9DC: bl      0x7F42FF00
    {
            ctx->lr = 0x7F42F9E0u;
            goto label_7F42FF00;
    }

label_7F42F9E0:
    ctx->pc = 0x7F42F9E0u;
    ctx->downcount -= 13;
    // 7F42F9E0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42F9E4:
    ctx->pc = 0x7F42F9E4u;
    // 7F42F9E4: lfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F42F9E4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42F9E8:
    ctx->pc = 0x7F42F9E8u;
    // 7F42F9E8: lfs     f1, -10068(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42F9E8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10068);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42F9EC:
    ctx->pc = 0x7F42F9ECu;
    // 7F42F9EC: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F42F9F0:
    ctx->pc = 0x7F42F9F0u;
    // 7F42F9F0: li      r3, 114
    ctx->gpr[3] = (u32)(s32)(114);

label_7F42F9F4:
    ctx->pc = 0x7F42F9F4u;
    // 7F42F9F4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F42F9F8:
    ctx->pc = 0x7F42F9F8u;
    // 7F42F9F8: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42F9F8u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F42F9FC:
    ctx->pc = 0x7F42F9FCu;
    // 7F42F9FC: stfs     f0, 1128(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F42F9FCu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1128);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42FA00:
    ctx->pc = 0x7F42FA00u;
    // 7F42FA00: lfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F42FA00u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42FA04:
    ctx->pc = 0x7F42FA04u;
    // 7F42FA04: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42FA04u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F42FA08:
    ctx->pc = 0x7F42FA08u;
    // 7F42FA08: stfs     f0, 1132(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F42FA08u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1132);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42FA0C:
    ctx->pc = 0x7F42FA0Cu;
    // 7F42FA0C: stw     r0, 1144(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42FA10:
    ctx->pc = 0x7F42FA10u;
    // 7F42FA10: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F42FA14u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F42FA14:
    ctx->pc = 0x7F42FA14u;
    ctx->downcount -= 9;
    // 7F42FA14: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F42FA18:
    ctx->pc = 0x7F42FA18u;
    // 7F42FA18: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F42FA1C:
    ctx->pc = 0x7F42FA1Cu;
    // 7F42FA1C: stw     r3, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42FA20:
    ctx->pc = 0x7F42FA20u;
    // 7F42FA20: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42FA24:
    ctx->pc = 0x7F42FA24u;
    // 7F42FA24: lfd     f1, -10136(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42FA24u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10136);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42FA28:
    ctx->pc = 0x7F42FA28u;
    // 7F42FA28: stw     r0, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42FA2C:
    ctx->pc = 0x7F42FA2Cu;
    // 7F42FA2C: lfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42FA2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42FA30:
    ctx->pc = 0x7F42FA30u;
    // 7F42FA30: fsubs   f31, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42FA30u)) return;
    ppc_fsubs(ctx, 31, 0, 1);

label_7F42FA34:
    ctx->pc = 0x7F42FA34u;
    // 7F42FA34: bl      0x7F42FEB8
    {
            ctx->lr = 0x7F42FA38u;
            goto label_7F42FEB8;
    }

label_7F42FA38:
    ctx->pc = 0x7F42FA38u;
    ctx->downcount -= 33;
    // 7F42FA38: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42FA3C:
    ctx->pc = 0x7F42FA3Cu;
    // 7F42FA3C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42FA40:
    ctx->pc = 0x7F42FA40u;
    // 7F42FA40: addi    r5, r3, -10008
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-10008);

label_7F42FA44:
    ctx->pc = 0x7F42FA44u;
    // 7F42FA44: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42FA48:
    ctx->pc = 0x7F42FA48u;
    // 7F42FA48: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F42FA48u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42FA4C:
    ctx->pc = 0x7F42FA4Cu;
    // 7F42FA4C: addi    r6, r4, -10056
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-10056);

label_7F42FA50:
    ctx->pc = 0x7F42FA50u;
    // 7F42FA50: addi    r5, r3, -10004
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-10004);

label_7F42FA54:
    ctx->pc = 0x7F42FA54u;
    // 7F42FA54: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42FA58:
    ctx->pc = 0x7F42FA58u;
    // 7F42FA58: fmadds f0, f0, f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F42FA58u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[0], ctx->fpr[1], ctx->fpr[31], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F42FA5C:
    ctx->pc = 0x7F42FA5Cu;
    // 7F42FA5C: addi    r4, r3, -10000
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-10000);

label_7F42FA60:
    ctx->pc = 0x7F42FA60u;
    // 7F42FA60: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42FA60u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F42FA64:
    ctx->pc = 0x7F42FA64u;
    // 7F42FA64: li      r0, 300
    ctx->gpr[0] = (u32)(s32)(300);

label_7F42FA68:
    ctx->pc = 0x7F42FA68u;
    // 7F42FA68: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F42FA68u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42FA6C:
    ctx->pc = 0x7F42FA6Cu;
    // 7F42FA6C: li      r3, 109
    ctx->gpr[3] = (u32)(s32)(109);

label_7F42FA70:
    ctx->pc = 0x7F42FA70u;
    // 7F42FA70: fctiwz    f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42FA70u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[3] = dolrecomp_f64_from_bits(result); }

label_7F42FA74:
    ctx->pc = 0x7F42FA74u;
    // 7F42FA74: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42FA74u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42FA78:
    ctx->pc = 0x7F42FA78u;
    // 7F42FA78: stfd     f3, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42FA78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[3]));
    }

label_7F42FA7C:
    ctx->pc = 0x7F42FA7Cu;
    // 7F42FA7C: lwz     r4, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F42FA80:
    ctx->pc = 0x7F42FA80u;
    // 7F42FA80: sth     r4, 34(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F42FA84:
    ctx->pc = 0x7F42FA84u;
    // 7F42FA84: lwz     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F42FA88:
    ctx->pc = 0x7F42FA88u;
    // 7F42FA88: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F42FA8C:
    ctx->pc = 0x7F42FA8Cu;
    // 7F42FA8C: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F42FA90:
    ctx->pc = 0x7F42FA90u;
    // 7F42FA90: stw     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F42FA94:
    ctx->pc = 0x7F42FA94u;
    // 7F42FA94: stfs     f2, 20(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F42FA94u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F42FA98:
    ctx->pc = 0x7F42FA98u;
    // 7F42FA98: stfs     f1, 1120(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F42FA98u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1120);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F42FA9C:
    ctx->pc = 0x7F42FA9Cu;
    // 7F42FA9C: stfs     f0, 1124(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F42FA9Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1124);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42FAA0:
    ctx->pc = 0x7F42FAA0u;
    // 7F42FAA0: sth     r0, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42FAA4:
    ctx->pc = 0x7F42FAA4u;
    // 7F42FAA4: lfs     f0, 1120(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F42FAA4u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42FAA8:
    ctx->pc = 0x7F42FAA8u;
    // 7F42FAA8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42FAA8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F42FAAC:
    ctx->pc = 0x7F42FAACu;
    // 7F42FAAC: stfd     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42FAACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42FAB0:
    ctx->pc = 0x7F42FAB0u;
    // 7F42FAB0: lwz     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42FAB4:
    ctx->pc = 0x7F42FAB4u;
    // 7F42FAB4: sth     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F42FAB8:
    ctx->pc = 0x7F42FAB8u;
    // 7F42FAB8: bl      0x7F3C664C
    {
            ctx->lr = 0x7F42FABCu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F42FABC:
    ctx->pc = 0x7F42FABCu;
    ctx->downcount -= 2;
    // 7F42FABC: cmplwi  r3, 0x0000
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

label_7F42FAC0:
    ctx->pc = 0x7F42FAC0u;
    // 7F42FAC0: bc    4, 2, 0x7F42FACC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42FACC;
        }
    }

label_7F42FAC4:
    ctx->pc = 0x7F42FAC4u;
    ctx->downcount -= 2;
    // 7F42FAC4: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F42FAC8:
    ctx->pc = 0x7F42FAC8u;
    // 7F42FAC8: b       0x7F42FE9C
    {
            goto label_7F42FE9C;
    }

label_7F42FACC:
    ctx->pc = 0x7F42FACCu;
    ctx->downcount -= 1;
    // 7F42FACC: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F42FAD0u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F42FAD0:
    ctx->pc = 0x7F42FAD0u;
    ctx->downcount -= 4;
    // 7F42FAD0: stw     r3, 1136(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1136);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42FAD4:
    ctx->pc = 0x7F42FAD4u;
    // 7F42FAD4: li      r3, 78
    ctx->gpr[3] = (u32)(s32)(78);

label_7F42FAD8:
    ctx->pc = 0x7F42FAD8u;
    // 7F42FAD8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F42FADC:
    ctx->pc = 0x7F42FADCu;
    // 7F42FADC: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F42FAE0u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F42FAE0:
    ctx->pc = 0x7F42FAE0u;
    ctx->downcount -= 6;
    // 7F42FAE0: stw     r3, 1192(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1192);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42FAE4:
    ctx->pc = 0x7F42FAE4u;
    // 7F42FAE4: addi    r27, r28, 448
    ctx->gpr[27] = ctx->gpr[28] + (u32)(s32)(448);

label_7F42FAE8:
    ctx->pc = 0x7F42FAE8u;
    // 7F42FAE8: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F42FAEC:
    ctx->pc = 0x7F42FAECu;
    // 7F42FAEC: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F42FAF0:
    ctx->pc = 0x7F42FAF0u;
    // 7F42FAF0: lwz     r4, 1136(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1136);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F42FAF4:
    ctx->pc = 0x7F42FAF4u;
    // 7F42FAF4: bl      0x7F04272C
    {
            ctx->lr = 0x7F42FAF8u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F42FAF8:
    ctx->pc = 0x7F42FAF8u;
    ctx->downcount -= 3;
    // 7F42FAF8: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F42FAFC:
    ctx->pc = 0x7F42FAFCu;
    // 7F42FAFC: addi    r4, r28, 492
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(492);

label_7F42FB00:
    ctx->pc = 0x7F42FB00u;
    // 7F42FB00: bl      0x7F042B20
    {
            ctx->lr = 0x7F42FB04u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F42FB04:
    ctx->pc = 0x7F42FB04u;
    ctx->downcount -= 3;
    // 7F42FB04: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F42FB08:
    ctx->pc = 0x7F42FB08u;
    // 7F42FB08: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F42FB0C:
    ctx->pc = 0x7F42FB0Cu;
    // 7F42FB0C: bl      0x7F42F738
    {
            ctx->lr = 0x7F42FB10u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42F738u;
                return;
            }
            goto label_7F42F738;
    }

label_7F42FB10:
    ctx->pc = 0x7F42FB10u;
    ctx->downcount -= 36;
    // 7F42FB10: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F42FB14:
    ctx->pc = 0x7F42FB14u;
    // 7F42FB14: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F42FB18:
    ctx->pc = 0x7F42FB18u;
    // 7F42FB18: stw     r3, 1140(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1140);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42FB1C:
    ctx->pc = 0x7F42FB1Cu;
    // 7F42FB1C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42FB20:
    ctx->pc = 0x7F42FB20u;
    // 7F42FB20: addi    r4, r3, -10136
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-10136);

label_7F42FB24:
    ctx->pc = 0x7F42FB24u;
    // 7F42FB24: lha     r5, 34(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(34);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F42FB28:
    ctx->pc = 0x7F42FB28u;
    // 7F42FB28: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42FB2C:
    ctx->pc = 0x7F42FB2Cu;
    // 7F42FB2C: addi    r6, r3, -10148
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-10148);

label_7F42FB30:
    ctx->pc = 0x7F42FB30u;
    // 7F42FB30: stw     r0, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42FB34:
    ctx->pc = 0x7F42FB34u;
    // 7F42FB34: xoris   r0, r5, 0x8000
    ctx->gpr[0] = ctx->gpr[5] ^ (0x8000u << 16);

label_7F42FB38:
    ctx->pc = 0x7F42FB38u;
    // 7F42FB38: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42FB3C:
    ctx->pc = 0x7F42FB3Cu;
    // 7F42FB3C: stw     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42FB40:
    ctx->pc = 0x7F42FB40u;
    // 7F42FB40: lfd     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42FB40u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42FB44:
    ctx->pc = 0x7F42FB44u;
    // 7F42FB44: lfd     f1, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42FB44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42FB48:
    ctx->pc = 0x7F42FB48u;
    // 7F42FB48: lfs     f3, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42FB48u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F42FB4C:
    ctx->pc = 0x7F42FB4Cu;
    // 7F42FB4C: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F42FB4Cu)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F42FB50:
    ctx->pc = 0x7F42FB50u;
    // 7F42FB50: lfs     f0, -10144(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42FB50u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42FB54:
    ctx->pc = 0x7F42FB54u;
    // 7F42FB54: fmuls   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42FB54u)) return;
    ppc_fmuls(ctx, 1, 3, 1);

label_7F42FB58:
    ctx->pc = 0x7F42FB58u;
    // 7F42FB58: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42FB58u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F42FB5C:
    ctx->pc = 0x7F42FB5Cu;
    // 7F42FB5C: bl      0x7F00FAF4
    {
            ctx->lr = 0x7F42FB60u;
            ctx->pc = 0x7F00FAF4u;
            return;
    }

label_7F42FB60:
    ctx->pc = 0x7F42FB60u;
    ctx->downcount -= 41;
    // 7F42FB60: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42FB64:
    ctx->pc = 0x7F42FB64u;
    // 7F42FB64: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42FB68:
    ctx->pc = 0x7F42FB68u;
    // 7F42FB68: lfs     f0, -10028(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42FB68u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10028);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42FB6C:
    ctx->pc = 0x7F42FB6Cu;
    // 7F42FB6C: addi    r6, r3, -10152
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-10152);

label_7F42FB70:
    ctx->pc = 0x7F42FB70u;
    // 7F42FB70: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42FB74:
    ctx->pc = 0x7F42FB74u;
    // 7F42FB74: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F42FB78:
    ctx->pc = 0x7F42FB78u;
    // 7F42FB78: fmuls   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42FB78u)) return;
    ppc_fmuls(ctx, 1, 0, 1);

label_7F42FB7C:
    ctx->pc = 0x7F42FB7Cu;
    // 7F42FB7C: addi    r4, r3, -10136
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-10136);

label_7F42FB80:
    ctx->pc = 0x7F42FB80u;
    // 7F42FB80: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F42FB84:
    ctx->pc = 0x7F42FB84u;
    // 7F42FB84: lfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F42FB84u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42FB88:
    ctx->pc = 0x7F42FB88u;
    // 7F42FB88: lfd     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42FB88u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42FB8C:
    ctx->pc = 0x7F42FB8Cu;
    // 7F42FB8C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42FB90:
    ctx->pc = 0x7F42FB90u;
    // 7F42FB90: stfs     f1, 1088(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F42FB90u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1088);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F42FB94:
    ctx->pc = 0x7F42FB94u;
    // 7F42FB94: lfs     f3, -10148(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F42FB94u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-10148);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F42FB98:
    ctx->pc = 0x7F42FB98u;
    // 7F42FB98: stfs     f0, 1092(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F42FB98u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1092);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42FB9C:
    ctx->pc = 0x7F42FB9Cu;
    // 7F42FB9C: lfs     f0, -10144(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42FB9Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42FBA0:
    ctx->pc = 0x7F42FBA0u;
    // 7F42FBA0: lha     r4, 34(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(34);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F42FBA4:
    ctx->pc = 0x7F42FBA4u;
    // 7F42FBA4: stw     r0, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42FBA8:
    ctx->pc = 0x7F42FBA8u;
    // 7F42FBA8: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F42FBAC:
    ctx->pc = 0x7F42FBACu;
    // 7F42FBAC: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42FBB0:
    ctx->pc = 0x7F42FBB0u;
    // 7F42FBB0: lfd     f1, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42FBB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42FBB4:
    ctx->pc = 0x7F42FBB4u;
    // 7F42FBB4: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F42FBB4u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F42FBB8:
    ctx->pc = 0x7F42FBB8u;
    // 7F42FBB8: fmuls   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42FBB8u)) return;
    ppc_fmuls(ctx, 1, 3, 1);

label_7F42FBBC:
    ctx->pc = 0x7F42FBBCu;
    // 7F42FBBC: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42FBBCu)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F42FBC0:
    ctx->pc = 0x7F42FBC0u;
    // 7F42FBC0: bl      0x7F008330
    {
            ctx->lr = 0x7F42FBC4u;
            ctx->pc = 0x7F008330u;
            return;
    }

label_7F42FBC4:
    ctx->pc = 0x7F42FBC4u;
    ctx->downcount -= 24;
    // 7F42FBC4: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42FBC8:
    ctx->pc = 0x7F42FBC8u;
    // 7F42FBC8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42FBCC:
    ctx->pc = 0x7F42FBCCu;
    // 7F42FBCC: addi    r5, r4, -10024
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-10024);

label_7F42FBD0:
    ctx->pc = 0x7F42FBD0u;
    // 7F42FBD0: lfs     f3, -10052(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42FBD0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10052);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F42FBD4:
    ctx->pc = 0x7F42FBD4u;
    // 7F42FBD4: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F42FBD4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42FBD8:
    ctx->pc = 0x7F42FBD8u;
    // 7F42FBD8: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42FBDC:
    ctx->pc = 0x7F42FBDCu;
    // 7F42FBDC: addi    r5, r4, -10152
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-10152);

label_7F42FBE0:
    ctx->pc = 0x7F42FBE0u;
    // 7F42FBE0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42FBE4:
    ctx->pc = 0x7F42FBE4u;
    // 7F42FBE4: fmuls   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F42FBE4u)) return;
    ppc_fmuls(ctx, 1, 0, 1);

label_7F42FBE8:
    ctx->pc = 0x7F42FBE8u;
    // 7F42FBE8: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F42FBE8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42FBEC:
    ctx->pc = 0x7F42FBECu;
    // 7F42FBEC: addi    r5, r3, -10020
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-10020);

label_7F42FBF0:
    ctx->pc = 0x7F42FBF0u;
    // 7F42FBF0: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42FBF4:
    ctx->pc = 0x7F42FBF4u;
    // 7F42FBF4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F42FBF4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F42FBF8:
    ctx->pc = 0x7F42FBF8u;
    // 7F42FBF8: fmr    f4, f3
    if (!ppc_fp_available_inline(ctx, 0x7F42FBF8u)) return;
    ctx->fpr[4] = ctx->fpr[3];

label_7F42FBFC:
    ctx->pc = 0x7F42FBFCu;
    // 7F42FBFC: stfs     f1, 1096(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F42FBFCu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1096);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F42FC00:
    ctx->pc = 0x7F42FC00u;
    // 7F42FC00: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F42FC04:
    ctx->pc = 0x7F42FC04u;
    // 7F42FC04: lfs     f1, -10048(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42FC04u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10048);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F42FC08:
    ctx->pc = 0x7F42FC08u;
    // 7F42FC08: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F42FC0C:
    ctx->pc = 0x7F42FC0Cu;
    // 7F42FC0C: stfs     f0, 1100(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F42FC0Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1100);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F42FC10:
    ctx->pc = 0x7F42FC10u;
    // 7F42FC10: addi    r7, r28, 1088
    ctx->gpr[7] = ctx->gpr[28] + (u32)(s32)(1088);

label_7F42FC14:
    ctx->pc = 0x7F42FC14u;
    // 7F42FC14: li      r5, 108
    ctx->gpr[5] = (u32)(s32)(108);

label_7F42FC18:
    ctx->pc = 0x7F42FC18u;
    // 7F42FC18: li      r6, 108
    ctx->gpr[6] = (u32)(s32)(108);

label_7F42FC1C:
    ctx->pc = 0x7F42FC1Cu;
    // 7F42FC1C: li      r8, 3
    ctx->gpr[8] = (u32)(s32)(3);

label_7F42FC20:
    ctx->pc = 0x7F42FC20u;
    // 7F42FC20: bl      0x7F3533D8
    {
            ctx->lr = 0x7F42FC24u;
            ctx->pc = 0x7F3533D8u;
            return;
    }

label_7F42FC24:
    ctx->pc = 0x7F42FC24u;
    ctx->downcount -= 3;
    // 7F42FC24: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42FC28:
    ctx->pc = 0x7F42FC28u;
    // 7F42FC28: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F42FC2C:
    ctx->pc = 0x7F42FC2Cu;
    // 7F42FC2C: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F42FC30u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F42FC30:
    ctx->pc = 0x7F42FC30u;
    ctx->downcount -= 4;
    // 7F42FC30: li      r0, 20
    ctx->gpr[0] = (u32)(s32)(20);

label_7F42FC34:
    ctx->pc = 0x7F42FC34u;
    // 7F42FC34: li      r3, 144
    ctx->gpr[3] = (u32)(s32)(144);

label_7F42FC38:
    ctx->pc = 0x7F42FC38u;
    // 7F42FC38: stw     r0, 1148(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42FC3C:
    ctx->pc = 0x7F42FC3Cu;
    // 7F42FC3C: bl      0x7F3C9148
    {
            ctx->lr = 0x7F42FC40u;
            ctx->pc = 0x7F3C9148u;
            return;
    }

label_7F42FC40:
    ctx->pc = 0x7F42FC40u;
    ctx->downcount -= 3;
    // 7F42FC40: cmplwi  r3, 0x0000
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

label_7F42FC44:
    ctx->pc = 0x7F42FC44u;
    // 7F42FC44: stw     r3, 1104(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1104);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42FC48:
    ctx->pc = 0x7F42FC48u;
    // 7F42FC48: bc    4, 2, 0x7F42FC54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42FC54;
        }
    }

label_7F42FC4C:
    ctx->pc = 0x7F42FC4Cu;
    ctx->downcount -= 2;
    // 7F42FC4C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F42FC50:
    ctx->pc = 0x7F42FC50u;
    // 7F42FC50: b       0x7F42FE9C
    {
            goto label_7F42FE9C;
    }

label_7F42FC54:
    ctx->pc = 0x7F42FC54u;
    ctx->downcount -= 3;
    // 7F42FC54: lwz     r3, 1104(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1104);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42FC58:
    ctx->pc = 0x7F42FC58u;
    // 7F42FC58: li      r4, 144
    ctx->gpr[4] = (u32)(s32)(144);

label_7F42FC5C:
    ctx->pc = 0x7F42FC5Cu;
    // 7F42FC5C: bl      0x7F3C9120
    {
            ctx->lr = 0x7F42FC60u;
            ctx->pc = 0x7F3C9120u;
            return;
    }

label_7F42FC60:
    ctx->pc = 0x7F42FC60u;
    ctx->downcount -= 2;
    // 7F42FC60: li      r3, 144
    ctx->gpr[3] = (u32)(s32)(144);

label_7F42FC64:
    ctx->pc = 0x7F42FC64u;
    // 7F42FC64: bl      0x7F3C9148
    {
            ctx->lr = 0x7F42FC68u;
            ctx->pc = 0x7F3C9148u;
            return;
    }

label_7F42FC68:
    ctx->pc = 0x7F42FC68u;
    ctx->downcount -= 3;
    // 7F42FC68: cmplwi  r3, 0x0000
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

label_7F42FC6C:
    ctx->pc = 0x7F42FC6Cu;
    // 7F42FC6C: stw     r3, 1108(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1108);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42FC70:
    ctx->pc = 0x7F42FC70u;
    // 7F42FC70: bc    4, 2, 0x7F42FC7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42FC7C;
        }
    }

label_7F42FC74:
    ctx->pc = 0x7F42FC74u;
    ctx->downcount -= 2;
    // 7F42FC74: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F42FC78:
    ctx->pc = 0x7F42FC78u;
    // 7F42FC78: b       0x7F42FE9C
    {
            goto label_7F42FE9C;
    }

label_7F42FC7C:
    ctx->pc = 0x7F42FC7Cu;
    ctx->downcount -= 3;
    // 7F42FC7C: lwz     r3, 1108(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1108);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42FC80:
    ctx->pc = 0x7F42FC80u;
    // 7F42FC80: li      r4, 144
    ctx->gpr[4] = (u32)(s32)(144);

label_7F42FC84:
    ctx->pc = 0x7F42FC84u;
    // 7F42FC84: bl      0x7F3C9120
    {
            ctx->lr = 0x7F42FC88u;
            ctx->pc = 0x7F3C9120u;
            return;
    }

label_7F42FC88:
    ctx->pc = 0x7F42FC88u;
    ctx->downcount -= 2;
    // 7F42FC88: li      r3, 36
    ctx->gpr[3] = (u32)(s32)(36);

label_7F42FC8C:
    ctx->pc = 0x7F42FC8Cu;
    // 7F42FC8C: bl      0x7F3C9148
    {
            ctx->lr = 0x7F42FC90u;
            ctx->pc = 0x7F3C9148u;
            return;
    }

label_7F42FC90:
    ctx->pc = 0x7F42FC90u;
    ctx->downcount -= 3;
    // 7F42FC90: cmplwi  r3, 0x0000
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

label_7F42FC94:
    ctx->pc = 0x7F42FC94u;
    // 7F42FC94: stw     r3, 1112(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1112);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42FC98:
    ctx->pc = 0x7F42FC98u;
    // 7F42FC98: bc    4, 2, 0x7F42FCA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42FCA4;
        }
    }

label_7F42FC9C:
    ctx->pc = 0x7F42FC9Cu;
    ctx->downcount -= 2;
    // 7F42FC9C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F42FCA0:
    ctx->pc = 0x7F42FCA0u;
    // 7F42FCA0: b       0x7F42FE9C
    {
            goto label_7F42FE9C;
    }

label_7F42FCA4:
    ctx->pc = 0x7F42FCA4u;
    ctx->downcount -= 3;
    // 7F42FCA4: lwz     r3, 1112(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1112);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42FCA8:
    ctx->pc = 0x7F42FCA8u;
    // 7F42FCA8: li      r4, 36
    ctx->gpr[4] = (u32)(s32)(36);

label_7F42FCAC:
    ctx->pc = 0x7F42FCACu;
    // 7F42FCAC: bl      0x7F3C9120
    {
            ctx->lr = 0x7F42FCB0u;
            ctx->pc = 0x7F3C9120u;
            return;
    }

label_7F42FCB0:
    ctx->pc = 0x7F42FCB0u;
    ctx->downcount -= 2;
    // 7F42FCB0: li      r3, 18
    ctx->gpr[3] = (u32)(s32)(18);

label_7F42FCB4:
    ctx->pc = 0x7F42FCB4u;
    // 7F42FCB4: bl      0x7F3C9148
    {
            ctx->lr = 0x7F42FCB8u;
            ctx->pc = 0x7F3C9148u;
            return;
    }

label_7F42FCB8:
    ctx->pc = 0x7F42FCB8u;
    ctx->downcount -= 3;
    // 7F42FCB8: cmplwi  r3, 0x0000
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

label_7F42FCBC:
    ctx->pc = 0x7F42FCBCu;
    // 7F42FCBC: stw     r3, 1116(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1116);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42FCC0:
    ctx->pc = 0x7F42FCC0u;
    // 7F42FCC0: bc    4, 2, 0x7F42FCCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F42FCCC;
        }
    }

label_7F42FCC4:
    ctx->pc = 0x7F42FCC4u;
    ctx->downcount -= 2;
    // 7F42FCC4: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F42FCC8:
    ctx->pc = 0x7F42FCC8u;
    // 7F42FCC8: b       0x7F42FE9C
    {
            goto label_7F42FE9C;
    }

label_7F42FCCC:
    ctx->pc = 0x7F42FCCCu;
    ctx->downcount -= 3;
    // 7F42FCCC: lwz     r3, 1116(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1116);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F42FCD0:
    ctx->pc = 0x7F42FCD0u;
    // 7F42FCD0: li      r4, 18
    ctx->gpr[4] = (u32)(s32)(18);

label_7F42FCD4:
    ctx->pc = 0x7F42FCD4u;
    // 7F42FCD4: bl      0x7F3C9120
    {
            ctx->lr = 0x7F42FCD8u;
            ctx->pc = 0x7F3C9120u;
            return;
    }

label_7F42FCD8:
    ctx->pc = 0x7F42FCD8u;
    ctx->downcount -= 8;
    // 7F42FCD8: lwz     r4, 1104(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1104);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F42FCDC:
    ctx->pc = 0x7F42FCDCu;
    // 7F42FCDC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F42FCE0:
    ctx->pc = 0x7F42FCE0u;
    // 7F42FCE0: lwz     r5, 1116(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1116);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F42FCE4:
    ctx->pc = 0x7F42FCE4u;
    // 7F42FCE4: li      r6, 9
    ctx->gpr[6] = (u32)(s32)(9);

label_7F42FCE8:
    ctx->pc = 0x7F42FCE8u;
    // 7F42FCE8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F42FCEC:
    ctx->pc = 0x7F42FCECu;
    // 7F42FCEC: li      r8, 3
    ctx->gpr[8] = (u32)(s32)(3);

label_7F42FCF0:
    ctx->pc = 0x7F42FCF0u;
    // 7F42FCF0: li      r9, 4
    ctx->gpr[9] = (u32)(s32)(4);

label_7F42FCF4:
    ctx->pc = 0x7F42FCF4u;
    // 7F42FCF4: bl      0x7F35C618
    {
            ctx->lr = 0x7F42FCF8u;
            ctx->pc = 0x7F35C618u;
            return;
    }

label_7F42FCF8:
    ctx->pc = 0x7F42FCF8u;
    ctx->downcount -= 3;
    // 7F42FCF8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42FCFC:
    ctx->pc = 0x7F42FCFCu;
    // 7F42FCFC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F42FD00:
    ctx->pc = 0x7F42FD00u;
    // 7F42FD00: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F42FD04u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F42FD04:
    ctx->pc = 0x7F42FD04u;
    ctx->downcount -= 3;
    // 7F42FD04: lwz     r0, 1180(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42FD08:
    ctx->pc = 0x7F42FD08u;
    // 7F42FD08: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F42FD0C:
    ctx->pc = 0x7F42FD0Cu;
    // 7F42FD0C: bc    12, 2, 0x7F42FE98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F42FE98;
        }
    }

label_7F42FD10:
    ctx->pc = 0x7F42FD10u;
    ctx->downcount -= 2;
    // 7F42FD10: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F42FD14:
    ctx->pc = 0x7F42FD14u;
    // 7F42FD14: bl      0x7F01B1CC
    {
            ctx->lr = 0x7F42FD18u;
            ctx->pc = 0x7F01B1CCu;
            return;
    }

label_7F42FD18:
    ctx->pc = 0x7F42FD18u;
    ctx->downcount -= 1;
    // 7F42FD18: bl      0x7F01A1F0
    {
            ctx->lr = 0x7F42FD1Cu;
            ctx->pc = 0x7F01A1F0u;
            return;
    }

label_7F42FD1C:
    ctx->pc = 0x7F42FD1Cu;
    ctx->downcount -= 1;
    // 7F42FD1C: bl      0x7F01C018
    {
            ctx->lr = 0x7F42FD20u;
            ctx->pc = 0x7F01C018u;
            return;
    }

label_7F42FD20:
    ctx->pc = 0x7F42FD20u;
    ctx->downcount -= 40;
    // 7F42FD20: lfs     f0, 48(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F42FD20u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42FD24:
    ctx->pc = 0x7F42FD24u;
    // 7F42FD24: addi    r31, r1, 40
    ctx->gpr[31] = ctx->gpr[1] + (u32)(s32)(40);

label_7F42FD28:
    ctx->pc = 0x7F42FD28u;
    // 7F42FD28: lis     r6, 2
    ctx->gpr[6] = ((u32)(s32)(2) << 16);

label_7F42FD2C:
    ctx->pc = 0x7F42FD2Cu;
    // 7F42FD2C: li      r9, 1000
    ctx->gpr[9] = (u32)(s32)(1000);

label_7F42FD30:
    ctx->pc = 0x7F42FD30u;
    // 7F42FD30: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42FD30u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F42FD34:
    ctx->pc = 0x7F42FD34u;
    // 7F42FD34: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42FD38:
    ctx->pc = 0x7F42FD38u;
    // 7F42FD38: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F42FD3C:
    ctx->pc = 0x7F42FD3Cu;
    // 7F42FD3C: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F42FD40:
    ctx->pc = 0x7F42FD40u;
    // 7F42FD40: addi    r6, r6, 31808
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(31808);

label_7F42FD44:
    ctx->pc = 0x7F42FD44u;
    // 7F42FD44: stfd     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42FD44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42FD48:
    ctx->pc = 0x7F42FD48u;
    // 7F42FD48: lwz     r7, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F42FD4C:
    ctx->pc = 0x7F42FD4Cu;
    // 7F42FD4C: stfd     f0, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42FD4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42FD50:
    ctx->pc = 0x7F42FD50u;
    // 7F42FD50: addi    r0, r7, 500
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(500);

label_7F42FD54:
    ctx->pc = 0x7F42FD54u;
    // 7F42FD54: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42FD58:
    ctx->pc = 0x7F42FD58u;
    // 7F42FD58: lwz     r7, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F42FD5C:
    ctx->pc = 0x7F42FD5Cu;
    // 7F42FD5C: lfs     f0, 52(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F42FD5Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42FD60:
    ctx->pc = 0x7F42FD60u;
    // 7F42FD60: addi    r8, r7, -500
    ctx->gpr[8] = ctx->gpr[7] + (u32)(s32)(-500);

label_7F42FD64:
    ctx->pc = 0x7F42FD64u;
    // 7F42FD64: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42FD64u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F42FD68:
    ctx->pc = 0x7F42FD68u;
    // 7F42FD68: stfd     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42FD68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42FD6C:
    ctx->pc = 0x7F42FD6Cu;
    // 7F42FD6C: lwz     r7, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F42FD70:
    ctx->pc = 0x7F42FD70u;
    // 7F42FD70: stfd     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42FD70u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42FD74:
    ctx->pc = 0x7F42FD74u;
    // 7F42FD74: addi    r0, r7, -1000
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(-1000);

label_7F42FD78:
    ctx->pc = 0x7F42FD78u;
    // 7F42FD78: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42FD7C:
    ctx->pc = 0x7F42FD7Cu;
    // 7F42FD7C: lwz     r7, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F42FD80:
    ctx->pc = 0x7F42FD80u;
    // 7F42FD80: lfs     f0, 56(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F42FD80u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42FD84:
    ctx->pc = 0x7F42FD84u;
    // 7F42FD84: addi    r0, r7, -1000
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(-1000);

label_7F42FD88:
    ctx->pc = 0x7F42FD88u;
    // 7F42FD88: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42FD88u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F42FD8C:
    ctx->pc = 0x7F42FD8Cu;
    // 7F42FD8C: stw     r8, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F42FD90:
    ctx->pc = 0x7F42FD90u;
    // 7F42FD90: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42FD94:
    ctx->pc = 0x7F42FD94u;
    // 7F42FD94: stfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42FD94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42FD98:
    ctx->pc = 0x7F42FD98u;
    // 7F42FD98: stfd     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42FD98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42FD9C:
    ctx->pc = 0x7F42FD9Cu;
    // 7F42FD9C: lwz     r8, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F42FDA0:
    ctx->pc = 0x7F42FDA0u;
    // 7F42FDA0: lwz     r7, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F42FDA4:
    ctx->pc = 0x7F42FDA4u;
    // 7F42FDA4: addi    r8, r8, 500
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(500);

label_7F42FDA8:
    ctx->pc = 0x7F42FDA8u;
    // 7F42FDA8: stw     r9, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F42FDAC:
    ctx->pc = 0x7F42FDACu;
    // 7F42FDAC: addi    r0, r7, 500
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(500);

label_7F42FDB0:
    ctx->pc = 0x7F42FDB0u;
    // 7F42FDB0: stw     r8, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F42FDB4:
    ctx->pc = 0x7F42FDB4u;
    // 7F42FDB4: stw     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42FDB8:
    ctx->pc = 0x7F42FDB8u;
    // 7F42FDB8: stw     r9, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F42FDBC:
    ctx->pc = 0x7F42FDBCu;
    // 7F42FDBC: bl      0x7F10C1C8
    {
            ctx->lr = 0x7F42FDC0u;
            ctx->pc = 0x7F10C1C8u;
            return;
    }

label_7F42FDC0:
    ctx->pc = 0x7F42FDC0u;
    ctx->downcount -= 17;
    // 7F42FDC0: stw     r3, 620(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(620);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42FDC4:
    ctx->pc = 0x7F42FDC4u;
    // 7F42FDC4: lis     r6, 2
    ctx->gpr[6] = ((u32)(s32)(2) << 16);

label_7F42FDC8:
    ctx->pc = 0x7F42FDC8u;
    // 7F42FDC8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F42FDCC:
    ctx->pc = 0x7F42FDCCu;
    // 7F42FDCC: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F42FDD0:
    ctx->pc = 0x7F42FDD0u;
    // 7F42FDD0: lfs     f0, 56(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F42FDD0u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42FDD4:
    ctx->pc = 0x7F42FDD4u;
    // 7F42FDD4: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F42FDD8:
    ctx->pc = 0x7F42FDD8u;
    // 7F42FDD8: addi    r6, r6, 31808
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(31808);

label_7F42FDDC:
    ctx->pc = 0x7F42FDDCu;
    // 7F42FDDC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42FDDCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F42FDE0:
    ctx->pc = 0x7F42FDE0u;
    // 7F42FDE0: stfd     f0, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42FDE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42FDE4:
    ctx->pc = 0x7F42FDE4u;
    // 7F42FDE4: stfd     f0, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42FDE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42FDE8:
    ctx->pc = 0x7F42FDE8u;
    // 7F42FDE8: lwz     r8, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F42FDEC:
    ctx->pc = 0x7F42FDECu;
    // 7F42FDEC: lwz     r7, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F42FDF0:
    ctx->pc = 0x7F42FDF0u;
    // 7F42FDF0: addi    r8, r8, -500
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(-500);

label_7F42FDF4:
    ctx->pc = 0x7F42FDF4u;
    // 7F42FDF4: addi    r0, r7, -500
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(-500);

label_7F42FDF8:
    ctx->pc = 0x7F42FDF8u;
    // 7F42FDF8: stw     r8, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F42FDFC:
    ctx->pc = 0x7F42FDFCu;
    // 7F42FDFC: stw     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42FE00:
    ctx->pc = 0x7F42FE00u;
    // 7F42FE00: bl      0x7F10C1C8
    {
            ctx->lr = 0x7F42FE04u;
            ctx->pc = 0x7F10C1C8u;
            return;
    }

label_7F42FE04:
    ctx->pc = 0x7F42FE04u;
    ctx->downcount -= 19;
    // 7F42FE04: stw     r3, 624(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(624);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42FE08:
    ctx->pc = 0x7F42FE08u;
    // 7F42FE08: lis     r6, 2
    ctx->gpr[6] = ((u32)(s32)(2) << 16);

label_7F42FE0C:
    ctx->pc = 0x7F42FE0Cu;
    // 7F42FE0C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F42FE10:
    ctx->pc = 0x7F42FE10u;
    // 7F42FE10: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F42FE14:
    ctx->pc = 0x7F42FE14u;
    // 7F42FE14: lfs     f0, 48(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F42FE14u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42FE18:
    ctx->pc = 0x7F42FE18u;
    // 7F42FE18: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F42FE1C:
    ctx->pc = 0x7F42FE1Cu;
    // 7F42FE1C: addi    r6, r6, 31808
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(31808);

label_7F42FE20:
    ctx->pc = 0x7F42FE20u;
    // 7F42FE20: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42FE20u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F42FE24:
    ctx->pc = 0x7F42FE24u;
    // 7F42FE24: stfd     f0, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42FE24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42FE28:
    ctx->pc = 0x7F42FE28u;
    // 7F42FE28: lwz     r7, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F42FE2C:
    ctx->pc = 0x7F42FE2Cu;
    // 7F42FE2C: addi    r0, r7, -500
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(-500);

label_7F42FE30:
    ctx->pc = 0x7F42FE30u;
    // 7F42FE30: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42FE34:
    ctx->pc = 0x7F42FE34u;
    // 7F42FE34: lfs     f0, 56(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F42FE34u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42FE38:
    ctx->pc = 0x7F42FE38u;
    // 7F42FE38: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42FE38u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F42FE3C:
    ctx->pc = 0x7F42FE3Cu;
    // 7F42FE3C: stfd     f0, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42FE3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42FE40:
    ctx->pc = 0x7F42FE40u;
    // 7F42FE40: lwz     r7, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F42FE44:
    ctx->pc = 0x7F42FE44u;
    // 7F42FE44: addi    r0, r7, 500
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(500);

label_7F42FE48:
    ctx->pc = 0x7F42FE48u;
    // 7F42FE48: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42FE4C:
    ctx->pc = 0x7F42FE4Cu;
    // 7F42FE4C: bl      0x7F10C1C8
    {
            ctx->lr = 0x7F42FE50u;
            ctx->pc = 0x7F10C1C8u;
            return;
    }

label_7F42FE50:
    ctx->pc = 0x7F42FE50u;
    ctx->downcount -= 17;
    // 7F42FE50: stw     r3, 628(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(628);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42FE54:
    ctx->pc = 0x7F42FE54u;
    // 7F42FE54: lis     r6, 2
    ctx->gpr[6] = ((u32)(s32)(2) << 16);

label_7F42FE58:
    ctx->pc = 0x7F42FE58u;
    // 7F42FE58: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F42FE5C:
    ctx->pc = 0x7F42FE5Cu;
    // 7F42FE5C: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F42FE60:
    ctx->pc = 0x7F42FE60u;
    // 7F42FE60: lfs     f0, 48(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F42FE60u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42FE64:
    ctx->pc = 0x7F42FE64u;
    // 7F42FE64: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F42FE68:
    ctx->pc = 0x7F42FE68u;
    // 7F42FE68: addi    r6, r6, 31808
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(31808);

label_7F42FE6C:
    ctx->pc = 0x7F42FE6Cu;
    // 7F42FE6C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42FE6Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F42FE70:
    ctx->pc = 0x7F42FE70u;
    // 7F42FE70: stfd     f0, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42FE70u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42FE74:
    ctx->pc = 0x7F42FE74u;
    // 7F42FE74: stfd     f0, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42FE74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F42FE78:
    ctx->pc = 0x7F42FE78u;
    // 7F42FE78: lwz     r8, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F42FE7C:
    ctx->pc = 0x7F42FE7Cu;
    // 7F42FE7C: lwz     r7, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F42FE80:
    ctx->pc = 0x7F42FE80u;
    // 7F42FE80: addi    r8, r8, 500
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(500);

label_7F42FE84:
    ctx->pc = 0x7F42FE84u;
    // 7F42FE84: addi    r0, r7, 500
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(500);

label_7F42FE88:
    ctx->pc = 0x7F42FE88u;
    // 7F42FE88: stw     r8, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F42FE8C:
    ctx->pc = 0x7F42FE8Cu;
    // 7F42FE8C: stw     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42FE90:
    ctx->pc = 0x7F42FE90u;
    // 7F42FE90: bl      0x7F10C1C8
    {
            ctx->lr = 0x7F42FE94u;
            ctx->pc = 0x7F10C1C8u;
            return;
    }

label_7F42FE94:
    ctx->pc = 0x7F42FE94u;
    ctx->downcount -= 1;
    // 7F42FE94: stw     r3, 632(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(632);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42FE98:
    ctx->pc = 0x7F42FE98u;
    ctx->downcount -= 1;
    // 7F42FE98: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F42FE9C:
    ctx->pc = 0x7F42FE9Cu;
    ctx->downcount -= 18;
    // 7F42FE9C: psq_l   f31, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F42FE9Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F42FE9Cu);
        if (ctx->exception) return;
    }

label_7F42FEA0:
    ctx->pc = 0x7F42FEA0u;
    // 7F42FEA0: lfd     f31, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42FEA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42FEA4:
    ctx->pc = 0x7F42FEA4u;
    // 7F42FEA4: lmw     r27, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F42FEA8:
    ctx->pc = 0x7F42FEA8u;
    // 7F42FEA8: lwz     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42FEAC:
    ctx->pc = 0x7F42FEACu;
    // 7F42FEAC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42FEB0:
    ctx->pc = 0x7F42FEB0u;
    // 7F42FEB0: addi    r1, r1, 192
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(192);

label_7F42FEB4:
    ctx->pc = 0x7F42FEB4u;
    // 7F42FEB4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42FEB8:
    ctx->pc = 0x7F42FEB8u;
    ctx->downcount -= 4;
    // 7F42FEB8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42FEBC:
    ctx->pc = 0x7F42FEBCu;
    // 7F42FEBC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42FEC0:
    ctx->pc = 0x7F42FEC0u;
    // 7F42FEC0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42FEC4:
    ctx->pc = 0x7F42FEC4u;
    // 7F42FEC4: bl      0x7F42E6E4
    {
            ctx->lr = 0x7F42FEC8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42E6E4u;
                return;
            }
            goto label_7F42E6E4;
    }

label_7F42FEC8:
    ctx->pc = 0x7F42FEC8u;
    ctx->downcount -= 31;
    // 7F42FEC8: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F42FECC:
    ctx->pc = 0x7F42FECCu;
    // 7F42FECC: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F42FED0:
    ctx->pc = 0x7F42FED0u;
    // 7F42FED0: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F42FED4:
    ctx->pc = 0x7F42FED4u;
    // 7F42FED4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F42FED8:
    ctx->pc = 0x7F42FED8u;
    // 7F42FED8: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42FEDC:
    ctx->pc = 0x7F42FEDCu;
    // 7F42FEDC: lfd     f2, -9992(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F42FEDCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9992);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42FEE0:
    ctx->pc = 0x7F42FEE0u;
    // 7F42FEE0: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F42FEE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F42FEE4:
    ctx->pc = 0x7F42FEE4u;
    // 7F42FEE4: lfs     f0, -9996(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F42FEE4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9996);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F42FEE8:
    ctx->pc = 0x7F42FEE8u;
    // 7F42FEE8: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F42FEE8u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F42FEEC:
    ctx->pc = 0x7F42FEECu;
    // 7F42FEEC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42FEF0:
    ctx->pc = 0x7F42FEF0u;
    // 7F42FEF0: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42FEF0u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F42FEF4:
    ctx->pc = 0x7F42FEF4u;
    // 7F42FEF4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42FEF8:
    ctx->pc = 0x7F42FEF8u;
    // 7F42FEF8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F42FEFC:
    ctx->pc = 0x7F42FEFCu;
    // 7F42FEFC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42FF00:
    ctx->pc = 0x7F42FF00u;
    ctx->downcount -= 17;
    // 7F42FF00: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42FF04:
    ctx->pc = 0x7F42FF04u;
    // 7F42FF04: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42FF08:
    ctx->pc = 0x7F42FF08u;
    // 7F42FF08: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42FF0C:
    ctx->pc = 0x7F42FF0Cu;
    // 7F42FF0C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F42FF10:
    ctx->pc = 0x7F42FF10u;
    // 7F42FF10: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42FF14:
    ctx->pc = 0x7F42FF14u;
    // 7F42FF14: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F42FF18:
    ctx->pc = 0x7F42FF18u;
    // 7F42FF18: bl      0x7F42FF54
    {
            ctx->lr = 0x7F42FF1Cu;
            goto label_7F42FF54;
    }

label_7F42FF1C:
    ctx->pc = 0x7F42FF1Cu;
    ctx->downcount -= 3;
    // 7F42FF1C: addi    r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(4);

label_7F42FF20:
    ctx->pc = 0x7F42FF20u;
    // 7F42FF20: addi    r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(4);

label_7F42FF24:
    ctx->pc = 0x7F42FF24u;
    // 7F42FF24: bl      0x7F42FF54
    {
            ctx->lr = 0x7F42FF28u;
            goto label_7F42FF54;
    }

label_7F42FF28:
    ctx->pc = 0x7F42FF28u;
    ctx->downcount -= 3;
    // 7F42FF28: addi    r3, r30, 8
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(8);

label_7F42FF2C:
    ctx->pc = 0x7F42FF2Cu;
    // 7F42FF2C: addi    r4, r31, 8
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(8);

label_7F42FF30:
    ctx->pc = 0x7F42FF30u;
    // 7F42FF30: bl      0x7F42FF54
    {
            ctx->lr = 0x7F42FF34u;
            goto label_7F42FF54;
    }

label_7F42FF34:
    ctx->pc = 0x7F42FF34u;
    ctx->downcount -= 3;
    // 7F42FF34: addi    r3, r30, 12
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(12);

label_7F42FF38:
    ctx->pc = 0x7F42FF38u;
    // 7F42FF38: addi    r4, r31, 12
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(12);

label_7F42FF3C:
    ctx->pc = 0x7F42FF3Cu;
    // 7F42FF3C: bl      0x7F42FF54
    {
            ctx->lr = 0x7F42FF40u;
            goto label_7F42FF54;
    }

label_7F42FF40:
    ctx->pc = 0x7F42FF40u;
    ctx->downcount -= 16;
    // 7F42FF40: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F42FF44:
    ctx->pc = 0x7F42FF44u;
    // 7F42FF44: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42FF48:
    ctx->pc = 0x7F42FF48u;
    // 7F42FF48: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42FF4C:
    ctx->pc = 0x7F42FF4Cu;
    // 7F42FF4C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F42FF50:
    ctx->pc = 0x7F42FF50u;
    // 7F42FF50: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42FF54:
    ctx->pc = 0x7F42FF54u;
    ctx->downcount -= 6;
    // 7F42FF54: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42FF58:
    ctx->pc = 0x7F42FF58u;
    // 7F42FF58: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42FF5C:
    ctx->pc = 0x7F42FF5Cu;
    // 7F42FF5C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42FF60:
    ctx->pc = 0x7F42FF60u;
    // 7F42FF60: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F42FF64:
    ctx->pc = 0x7F42FF64u;
    // 7F42FF64: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F42FF68:
    ctx->pc = 0x7F42FF68u;
    // 7F42FF68: bl      0x7F42FF84
    {
            ctx->lr = 0x7F42FF6Cu;
            goto label_7F42FF84;
    }

label_7F42FF6C:
    ctx->pc = 0x7F42FF6Cu;
    ctx->downcount -= 7;
    // 7F42FF6C: stfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F42FF6Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F42FF70:
    ctx->pc = 0x7F42FF70u;
    // 7F42FF70: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42FF74:
    ctx->pc = 0x7F42FF74u;
    // 7F42FF74: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F42FF78:
    ctx->pc = 0x7F42FF78u;
    // 7F42FF78: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F42FF7C:
    ctx->pc = 0x7F42FF7Cu;
    // 7F42FF7C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F42FF80:
    ctx->pc = 0x7F42FF80u;
    // 7F42FF80: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42FF84:
    ctx->pc = 0x7F42FF84u;
    ctx->downcount -= 4;
    // 7F42FF84: psq_l   f0, 2(r3), 1, 3
    if (!ppc_fp_available_inline(ctx, 0x7F42FF84u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ppc_psq_load_inline(ctx, 0u, ea, true, 3u, false, 0x7F42FF84u);
        if (ctx->exception) return;
    }

label_7F42FF88:
    ctx->pc = 0x7F42FF88u;
    // 7F42FF88: psq_l   f1, 0(r3), 1, 6
    if (!ppc_fp_available_inline(ctx, 0x7F42FF88u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 1u, ea, true, 6u, false, 0x7F42FF88u);
        if (ctx->exception) return;
    }

label_7F42FF8C:
    ctx->pc = 0x7F42FF8Cu;
    // 7F42FF8C: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F42FF8Cu)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_7F42FF90:
    ctx->pc = 0x7F42FF90u;
    // 7F42FF90: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F42FF94:
    ctx->pc = 0x7F42FF94u;
    ctx->downcount -= 21;
    // 7F42FF94: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F42FF98:
    ctx->pc = 0x7F42FF98u;
    // 7F42FF98: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F42FF9C:
    ctx->pc = 0x7F42FF9Cu;
    // 7F42FF9C: li      r5, 1200
    ctx->gpr[5] = (u32)(s32)(1200);

label_7F42FFA0:
    ctx->pc = 0x7F42FFA0u;
    // 7F42FFA0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F42FFA4:
    ctx->pc = 0x7F42FFA4u;
    // 7F42FFA4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F42FFA8:
    ctx->pc = 0x7F42FFA8u;
    // 7F42FFA8: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F42FFAC:
    ctx->pc = 0x7F42FFACu;
    // 7F42FFAC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F42FFB0:
    ctx->pc = 0x7F42FFB0u;
    // 7F42FFB0: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F42FFB4:
    ctx->pc = 0x7F42FFB4u;
    // 7F42FFB4: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F42FFB8:
    ctx->pc = 0x7F42FFB8u;
    // 7F42FFB8: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F42FFBC:
    ctx->pc = 0x7F42FFBCu;
    // 7F42FFBC: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F42FFC0u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F42FFC0:
    ctx->pc = 0x7F42FFC0u;
    ctx->downcount -= 2;
    // 7F42FFC0: or.   r31, r3, r3
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

label_7F42FFC4:
    ctx->pc = 0x7F42FFC4u;
    // 7F42FFC4: bc    12, 2, 0x7F43002C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F43002C;
        }
    }

label_7F42FFC8:
    ctx->pc = 0x7F42FFC8u;
    ctx->downcount -= 5;
    // 7F42FFC8: lis     r4, 32579
    ctx->gpr[4] = ((u32)(s32)(32579) << 16);

label_7F42FFCC:
    ctx->pc = 0x7F42FFCCu;
    // 7F42FFCC: lis     r5, 32579
    ctx->gpr[5] = ((u32)(s32)(32579) << 16);

label_7F42FFD0:
    ctx->pc = 0x7F42FFD0u;
    // 7F42FFD0: addi    r4, r4, -4172
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4172);

label_7F42FFD4:
    ctx->pc = 0x7F42FFD4u;
    // 7F42FFD4: addi    r5, r5, -2436
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-2436);

label_7F42FFD8:
    ctx->pc = 0x7F42FFD8u;
    // 7F42FFD8: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F42FFDCu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F42FFDC:
    ctx->pc = 0x7F42FFDCu;
    ctx->downcount -= 14;
    // 7F42FFDC: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F42FFE0:
    ctx->pc = 0x7F42FFE0u;
    // 7F42FFE0: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F42FFE4:
    ctx->pc = 0x7F42FFE4u;
    // 7F42FFE4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F42FFE8:
    ctx->pc = 0x7F42FFE8u;
    // 7F42FFE8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F42FFEC:
    ctx->pc = 0x7F42FFECu;
    // 7F42FFEC: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F42FFF0:
    ctx->pc = 0x7F42FFF0u;
    // 7F42FFF0: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F42FFF4:
    ctx->pc = 0x7F42FFF4u;
    // 7F42FFF4: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F42FFF8:
    ctx->pc = 0x7F42FFF8u;
    // 7F42FFF8: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F42FFFC:
    ctx->pc = 0x7F42FFFCu;
    // 7F42FFFC: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F430000:
    ctx->pc = 0x7F430000u;
    // 7F430000: stw     r6, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F430004:
    ctx->pc = 0x7F430004u;
    // 7F430004: stw     r6, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F430008:
    ctx->pc = 0x7F430008u;
    // 7F430008: stw     r6, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F43000C:
    ctx->pc = 0x7F43000Cu;
    // 7F43000C: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F430010:
    ctx->pc = 0x7F430010u;
    // 7F430010: bl      0x7F42F918
    {
            ctx->lr = 0x7F430014u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F42F918u;
                return;
            }
            goto label_7F42F918;
    }

label_7F430014:
    ctx->pc = 0x7F430014u;
    ctx->downcount -= 2;
    // 7F430014: cmpwi   r3, 0
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

label_7F430018:
    ctx->pc = 0x7F430018u;
    // 7F430018: bc    4, 0, 0x7F43002C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F43002C;
        }
    }

label_7F43001C:
    ctx->pc = 0x7F43001Cu;
    ctx->downcount -= 2;
    // 7F43001C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F430020:
    ctx->pc = 0x7F430020u;
    // 7F430020: bl      0x7F3C8210
    {
            ctx->lr = 0x7F430024u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F430024:
    ctx->pc = 0x7F430024u;
    ctx->downcount -= 2;
    // 7F430024: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F430028:
    ctx->pc = 0x7F430028u;
    // 7F430028: b       0x7F430030
    {
            goto label_7F430030;
    }

label_7F43002C:
    ctx->pc = 0x7F43002Cu;
    ctx->downcount -= 1;
    // 7F43002C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F430030:
    ctx->pc = 0x7F430030u;
    ctx->downcount -= 16;
    // 7F430030: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F430034:
    ctx->pc = 0x7F430034u;
    // 7F430034: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F430038:
    ctx->pc = 0x7F430038u;
    // 7F430038: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F43003C:
    ctx->pc = 0x7F43003Cu;
    // 7F43003C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F430040:
    ctx->pc = 0x7F430040u;
    // 7F430040: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F430044:
    ctx->pc = 0x7F430044u;
    ctx->downcount -= 18;
    // 7F430044: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F430048:
    ctx->pc = 0x7F430048u;
    // 7F430048: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F43004C:
    ctx->pc = 0x7F43004Cu;
    // 7F43004C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F430050:
    ctx->pc = 0x7F430050u;
    // 7F430050: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F430054:
    ctx->pc = 0x7F430054u;
    // 7F430054: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F430058:
    ctx->pc = 0x7F430058u;
    // 7F430058: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F43005C:
    ctx->pc = 0x7F43005Cu;
    // 7F43005C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F430060:
    ctx->pc = 0x7F430060u;
    // 7F430060: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F430064:
    ctx->downcount -= 10;
    // 7F430064: addi    r29, r30, 3888
    ctx->gpr[29] = ctx->gpr[30] + (u32)(s32)(3888);

label_7F430068:
    ctx->pc = 0x7F430068u;
    // 7F430068: lwz     r4, 2432(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(2432);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F43006C:
    // 7F43006C: add   r29, r27, r29
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_7F430070:
    // 7F430070: addi    r5, r27, 2432
    ctx->gpr[5] = ctx->gpr[27] + (u32)(s32)(2432);

label_7F430074:
    // 7F430074: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F430078:
    // 7F430078: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F43007C:
    // 7F43007C: addi    r6, r27, 196
    ctx->gpr[6] = ctx->gpr[27] + (u32)(s32)(196);

label_7F430080:
    // 7F430080: addi    r7, r27, 32
    ctx->gpr[7] = ctx->gpr[27] + (u32)(s32)(32);

label_7F430084:
    // 7F430084: li      r8, 2
    ctx->gpr[8] = (u32)(s32)(2);

label_7F430088:
    // 7F430088: bl      0x7F01D42C
    {
            ctx->lr = 0x7F43008Cu;
            ctx->pc = 0x7F01D42Cu;
            return;
    }

label_7F43008C:
    ctx->downcount -= 4;
    // 7F43008C: addi    r4, r31, 3472
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(3472);

label_7F430090:
    // 7F430090: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F430094:
    // 7F430094: add   r4, r27, r4
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F430098:
    // 7F430098: bl      0x7F01D46C
    {
            ctx->lr = 0x7F43009Cu;
            ctx->pc = 0x7F01D46Cu;
            return;
    }

label_7F43009C:
    ctx->downcount -= 2;
    // 7F43009C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F4300A0:
    // 7F4300A0: bl      0x7F01D474
    {
            ctx->lr = 0x7F4300A4u;
            ctx->pc = 0x7F01D474u;
            return;
    }

label_7F4300A4:
    ctx->downcount -= 5;
    // 7F4300A4: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F4300A8:
    // 7F4300A8: addi    r30, r30, 32
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(32);

label_7F4300AC:
    // 7F4300AC: cmpwi   r28, 2
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

label_7F4300B0:
    // 7F4300B0: addi    r31, r31, 192
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(192);

label_7F4300B4:
    // 7F4300B4: bc    12, 0, 0x7F430064
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F430064u;
                return;
            }
            goto label_7F430064;
        }
    }

label_7F4300B8:
    ctx->pc = 0x7F4300B8u;
    ctx->downcount -= 16;
    // 7F4300B8: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F4300BC:
    ctx->pc = 0x7F4300BCu;
    // 7F4300BC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F4300C0:
    ctx->pc = 0x7F4300C0u;
    // 7F4300C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F4300C4:
    ctx->pc = 0x7F4300C4u;
    // 7F4300C4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F4300C8:
    ctx->pc = 0x7F4300C8u;
    // 7F4300C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F42C0EC;
        }
    }

label_7F4300CC:
    ctx->pc = 0x7F4300CCu;
    ctx->downcount -= 18;
    // 7F4300CC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F4300D0:
    ctx->pc = 0x7F4300D0u;
    // 7F4300D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F4300D4:
    ctx->pc = 0x7F4300D4u;
    // 7F4300D4: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F4300D8:
    ctx->pc = 0x7F4300D8u;
    // 7F4300D8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F4300DC:
    ctx->pc = 0x7F4300DCu;
    // 7F4300DC: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F4300E0:
    ctx->pc = 0x7F4300E0u;
    // 7F4300E0: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F4300E4:
    ctx->pc = 0x7F4300E4u;
    // 7F4300E4: addi    r3, r4, 29504
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(29504);

label_7F4300E8:
    ctx->pc = 0x7F4300E8u;
    // 7F4300E8: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

    ctx->pc = 0x7F4300ECu;
    return;
return_dispatch_7F42C0EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F42C0FCu: goto label_7F42C0FC;
    case 0x7F42C13Cu: goto label_7F42C13C;
    case 0x7F42C17Cu: goto label_7F42C17C;
    case 0x7F42C18Cu: goto label_7F42C18C;
    case 0x7F42C198u: goto label_7F42C198;
    case 0x7F42C1A0u: goto label_7F42C1A0;
    case 0x7F42C1D8u: goto label_7F42C1D8;
    case 0x7F42C1E4u: goto label_7F42C1E4;
    case 0x7F42C1ECu: goto label_7F42C1EC;
    case 0x7F42C1F4u: goto label_7F42C1F4;
    case 0x7F42C218u: goto label_7F42C218;
    case 0x7F42C220u: goto label_7F42C220;
    case 0x7F42C228u: goto label_7F42C228;
    case 0x7F42C260u: goto label_7F42C260;
    case 0x7F42C270u: goto label_7F42C270;
    case 0x7F42C280u: goto label_7F42C280;
    case 0x7F42C2C4u: goto label_7F42C2C4;
    case 0x7F42C310u: goto label_7F42C310;
    case 0x7F42C330u: goto label_7F42C330;
    case 0x7F42C348u: goto label_7F42C348;
    case 0x7F42C374u: goto label_7F42C374;
    case 0x7F42C3A8u: goto label_7F42C3A8;
    case 0x7F42C424u: goto label_7F42C424;
    case 0x7F42C42Cu: goto label_7F42C42C;
    case 0x7F42C438u: goto label_7F42C438;
    case 0x7F42C45Cu: goto label_7F42C45C;
    case 0x7F42C464u: goto label_7F42C464;
    case 0x7F42C488u: goto label_7F42C488;
    case 0x7F42C494u: goto label_7F42C494;
    case 0x7F42C5A0u: goto label_7F42C5A0;
    case 0x7F42C5B0u: goto label_7F42C5B0;
    case 0x7F42C5C0u: goto label_7F42C5C0;
    case 0x7F42C5D0u: goto label_7F42C5D0;
    case 0x7F42C5F4u: goto label_7F42C5F4;
    case 0x7F42C618u: goto label_7F42C618;
    case 0x7F42C620u: goto label_7F42C620;
    case 0x7F42C630u: goto label_7F42C630;
    case 0x7F42C6A0u: goto label_7F42C6A0;
    case 0x7F42C6BCu: goto label_7F42C6BC;
    case 0x7F42C6DCu: goto label_7F42C6DC;
    case 0x7F42C700u: goto label_7F42C700;
    case 0x7F42C740u: goto label_7F42C740;
    case 0x7F42C764u: goto label_7F42C764;
    case 0x7F42C7B4u: goto label_7F42C7B4;
    case 0x7F42C7D8u: goto label_7F42C7D8;
    case 0x7F42C80Cu: goto label_7F42C80C;
    case 0x7F42C81Cu: goto label_7F42C81C;
    case 0x7F42C828u: goto label_7F42C828;
    case 0x7F42C834u: goto label_7F42C834;
    case 0x7F42C83Cu: goto label_7F42C83C;
    case 0x7F42C84Cu: goto label_7F42C84C;
    case 0x7F42C858u: goto label_7F42C858;
    case 0x7F42C8B0u: goto label_7F42C8B0;
    case 0x7F42C8C4u: goto label_7F42C8C4;
    case 0x7F42C8ECu: goto label_7F42C8EC;
    case 0x7F42C934u: goto label_7F42C934;
    case 0x7F42C9A8u: goto label_7F42C9A8;
    case 0x7F42C9BCu: goto label_7F42C9BC;
    case 0x7F42C9E4u: goto label_7F42C9E4;
    case 0x7F42CA2Cu: goto label_7F42CA2C;
    case 0x7F42CAA4u: goto label_7F42CAA4;
    case 0x7F42CAB0u: goto label_7F42CAB0;
    case 0x7F42CAB8u: goto label_7F42CAB8;
    case 0x7F42CAF8u: goto label_7F42CAF8;
    case 0x7F42CB3Cu: goto label_7F42CB3C;
    case 0x7F42CB50u: goto label_7F42CB50;
    case 0x7F42CB58u: goto label_7F42CB58;
    case 0x7F42CB60u: goto label_7F42CB60;
    case 0x7F42CB68u: goto label_7F42CB68;
    case 0x7F42CBA0u: goto label_7F42CBA0;
    case 0x7F42CBB0u: goto label_7F42CBB0;
    case 0x7F42CBD4u: goto label_7F42CBD4;
    case 0x7F42CBFCu: goto label_7F42CBFC;
    case 0x7F42CC0Cu: goto label_7F42CC0C;
    case 0x7F42CC38u: goto label_7F42CC38;
    case 0x7F42CC44u: goto label_7F42CC44;
    case 0x7F42CC50u: goto label_7F42CC50;
    case 0x7F42CC5Cu: goto label_7F42CC5C;
    case 0x7F42CCB8u: goto label_7F42CCB8;
    case 0x7F42CCC4u: goto label_7F42CCC4;
    case 0x7F42CCD0u: goto label_7F42CCD0;
    case 0x7F42CCDCu: goto label_7F42CCDC;
    case 0x7F42CD08u: goto label_7F42CD08;
    case 0x7F42CD5Cu: goto label_7F42CD5C;
    case 0x7F42CD78u: goto label_7F42CD78;
    case 0x7F42CD88u: goto label_7F42CD88;
    case 0x7F42CD98u: goto label_7F42CD98;
    case 0x7F42CDDCu: goto label_7F42CDDC;
    case 0x7F42CE08u: goto label_7F42CE08;
    case 0x7F42CE24u: goto label_7F42CE24;
    case 0x7F42CE74u: goto label_7F42CE74;
    case 0x7F42CE7Cu: goto label_7F42CE7C;
    case 0x7F42CE84u: goto label_7F42CE84;
    case 0x7F42CEC4u: goto label_7F42CEC4;
    case 0x7F42CECCu: goto label_7F42CECC;
    case 0x7F42CED4u: goto label_7F42CED4;
    case 0x7F42CFD0u: goto label_7F42CFD0;
    case 0x7F42CFE0u: goto label_7F42CFE0;
    case 0x7F42CFF0u: goto label_7F42CFF0;
    case 0x7F42CFFCu: goto label_7F42CFFC;
    case 0x7F42D010u: goto label_7F42D010;
    case 0x7F42D018u: goto label_7F42D018;
    case 0x7F42D020u: goto label_7F42D020;
    case 0x7F42D054u: goto label_7F42D054;
    case 0x7F42D068u: goto label_7F42D068;
    case 0x7F42D08Cu: goto label_7F42D08C;
    case 0x7F42D094u: goto label_7F42D094;
    case 0x7F42D09Cu: goto label_7F42D09C;
    case 0x7F42D0B0u: goto label_7F42D0B0;
    case 0x7F42D0BCu: goto label_7F42D0BC;
    case 0x7F42D0C0u: goto label_7F42D0C0;
    case 0x7F42D0DCu: goto label_7F42D0DC;
    case 0x7F42D11Cu: goto label_7F42D11C;
    case 0x7F42D12Cu: goto label_7F42D12C;
    case 0x7F42D148u: goto label_7F42D148;
    case 0x7F42D14Cu: goto label_7F42D14C;
    case 0x7F42D170u: goto label_7F42D170;
    case 0x7F42D190u: goto label_7F42D190;
    case 0x7F42D1B0u: goto label_7F42D1B0;
    case 0x7F42D1F4u: goto label_7F42D1F4;
    case 0x7F42D220u: goto label_7F42D220;
    case 0x7F42D250u: goto label_7F42D250;
    case 0x7F42D2C0u: goto label_7F42D2C0;
    case 0x7F42D2D0u: goto label_7F42D2D0;
    case 0x7F42D340u: goto label_7F42D340;
    case 0x7F42D350u: goto label_7F42D350;
    case 0x7F42D3C0u: goto label_7F42D3C0;
    case 0x7F42D3D8u: goto label_7F42D3D8;
    case 0x7F42D3F4u: goto label_7F42D3F4;
    case 0x7F42D40Cu: goto label_7F42D40C;
    case 0x7F42D464u: goto label_7F42D464;
    case 0x7F42D46Cu: goto label_7F42D46C;
    case 0x7F42D584u: goto label_7F42D584;
    case 0x7F42D5F0u: goto label_7F42D5F0;
    case 0x7F42D654u: goto label_7F42D654;
    case 0x7F42D65Cu: goto label_7F42D65C;
    case 0x7F42D684u: goto label_7F42D684;
    case 0x7F42D690u: goto label_7F42D690;
    case 0x7F42D6FCu: goto label_7F42D6FC;
    case 0x7F42D70Cu: goto label_7F42D70C;
    case 0x7F42D72Cu: goto label_7F42D72C;
    case 0x7F42D750u: goto label_7F42D750;
    case 0x7F42D794u: goto label_7F42D794;
    case 0x7F42D7A8u: goto label_7F42D7A8;
    case 0x7F42D7B0u: goto label_7F42D7B0;
    case 0x7F42D7D0u: goto label_7F42D7D0;
    case 0x7F42D804u: goto label_7F42D804;
    case 0x7F42D84Cu: goto label_7F42D84C;
    case 0x7F42D860u: goto label_7F42D860;
    case 0x7F42D8B8u: goto label_7F42D8B8;
    case 0x7F42D8C8u: goto label_7F42D8C8;
    case 0x7F42D8D4u: goto label_7F42D8D4;
    case 0x7F42D8E8u: goto label_7F42D8E8;
    case 0x7F42D904u: goto label_7F42D904;
    case 0x7F42D920u: goto label_7F42D920;
    case 0x7F42D930u: goto label_7F42D930;
    case 0x7F42D93Cu: goto label_7F42D93C;
    case 0x7F42D95Cu: goto label_7F42D95C;
    case 0x7F42D970u: goto label_7F42D970;
    case 0x7F42D97Cu: goto label_7F42D97C;
    case 0x7F42D990u: goto label_7F42D990;
    case 0x7F42D9BCu: goto label_7F42D9BC;
    case 0x7F42DA20u: goto label_7F42DA20;
    case 0x7F42DA2Cu: goto label_7F42DA2C;
    case 0x7F42DA38u: goto label_7F42DA38;
    case 0x7F42DA44u: goto label_7F42DA44;
    case 0x7F42DA70u: goto label_7F42DA70;
    case 0x7F42DAC4u: goto label_7F42DAC4;
    case 0x7F42DAE0u: goto label_7F42DAE0;
    case 0x7F42DAF0u: goto label_7F42DAF0;
    case 0x7F42DB00u: goto label_7F42DB00;
    case 0x7F42DB44u: goto label_7F42DB44;
    case 0x7F42DB7Cu: goto label_7F42DB7C;
    case 0x7F42DC84u: goto label_7F42DC84;
    case 0x7F42DCA4u: goto label_7F42DCA4;
    case 0x7F42DCB4u: goto label_7F42DCB4;
    case 0x7F42DCBCu: goto label_7F42DCBC;
    case 0x7F42DCDCu: goto label_7F42DCDC;
    case 0x7F42DCECu: goto label_7F42DCEC;
    case 0x7F42DD04u: goto label_7F42DD04;
    case 0x7F42DD14u: goto label_7F42DD14;
    case 0x7F42DD20u: goto label_7F42DD20;
    case 0x7F42DD28u: goto label_7F42DD28;
    case 0x7F42DD30u: goto label_7F42DD30;
    case 0x7F42DD4Cu: goto label_7F42DD4C;
    case 0x7F42DDC8u: goto label_7F42DDC8;
    case 0x7F42DDDCu: goto label_7F42DDDC;
    case 0x7F42DDECu: goto label_7F42DDEC;
    case 0x7F42DE00u: goto label_7F42DE00;
    case 0x7F42DE10u: goto label_7F42DE10;
    case 0x7F42DE20u: goto label_7F42DE20;
    case 0x7F42DE34u: goto label_7F42DE34;
    case 0x7F42DF00u: goto label_7F42DF00;
    case 0x7F42DF18u: goto label_7F42DF18;
    case 0x7F42DF24u: goto label_7F42DF24;
    case 0x7F42DF2Cu: goto label_7F42DF2C;
    case 0x7F42DF6Cu: goto label_7F42DF6C;
    case 0x7F42DF74u: goto label_7F42DF74;
    case 0x7F42DF7Cu: goto label_7F42DF7C;
    case 0x7F42DFB8u: goto label_7F42DFB8;
    case 0x7F42DFF4u: goto label_7F42DFF4;
    case 0x7F42DFFCu: goto label_7F42DFFC;
    case 0x7F42E0B4u: goto label_7F42E0B4;
    case 0x7F42E0C8u: goto label_7F42E0C8;
    case 0x7F42E0D8u: goto label_7F42E0D8;
    case 0x7F42E0ECu: goto label_7F42E0EC;
    case 0x7F42E108u: goto label_7F42E108;
    case 0x7F42E13Cu: goto label_7F42E13C;
    case 0x7F42E144u: goto label_7F42E144;
    case 0x7F42E158u: goto label_7F42E158;
    case 0x7F42E194u: goto label_7F42E194;
    case 0x7F42E1B8u: goto label_7F42E1B8;
    case 0x7F42E1D0u: goto label_7F42E1D0;
    case 0x7F42E1E0u: goto label_7F42E1E0;
    case 0x7F42E1ECu: goto label_7F42E1EC;
    case 0x7F42E20Cu: goto label_7F42E20C;
    case 0x7F42E21Cu: goto label_7F42E21C;
    case 0x7F42E224u: goto label_7F42E224;
    case 0x7F42E258u: goto label_7F42E258;
    case 0x7F42E26Cu: goto label_7F42E26C;
    case 0x7F42E274u: goto label_7F42E274;
    case 0x7F42E2A0u: goto label_7F42E2A0;
    case 0x7F42E2B4u: goto label_7F42E2B4;
    case 0x7F42E2C0u: goto label_7F42E2C0;
    case 0x7F42E398u: goto label_7F42E398;
    case 0x7F42E3A0u: goto label_7F42E3A0;
    case 0x7F42E3D4u: goto label_7F42E3D4;
    case 0x7F42E404u: goto label_7F42E404;
    case 0x7F42E47Cu: goto label_7F42E47C;
    case 0x7F42E488u: goto label_7F42E488;
    case 0x7F42E494u: goto label_7F42E494;
    case 0x7F42E4A0u: goto label_7F42E4A0;
    case 0x7F42E4CCu: goto label_7F42E4CC;
    case 0x7F42E520u: goto label_7F42E520;
    case 0x7F42E53Cu: goto label_7F42E53C;
    case 0x7F42E54Cu: goto label_7F42E54C;
    case 0x7F42E55Cu: goto label_7F42E55C;
    case 0x7F42E624u: goto label_7F42E624;
    case 0x7F42E634u: goto label_7F42E634;
    case 0x7F42E66Cu: goto label_7F42E66C;
    case 0x7F42E6C0u: goto label_7F42E6C0;
    case 0x7F42E720u: goto label_7F42E720;
    case 0x7F42EAFCu: goto label_7F42EAFC;
    case 0x7F42EB18u: goto label_7F42EB18;
    case 0x7F42EB30u: goto label_7F42EB30;
    case 0x7F42EB48u: goto label_7F42EB48;
    case 0x7F42EB70u: goto label_7F42EB70;
    case 0x7F42EC38u: goto label_7F42EC38;
    case 0x7F42EC58u: goto label_7F42EC58;
    case 0x7F42EC68u: goto label_7F42EC68;
    case 0x7F42EC70u: goto label_7F42EC70;
    case 0x7F42EC90u: goto label_7F42EC90;
    case 0x7F42ECA0u: goto label_7F42ECA0;
    case 0x7F42ED50u: goto label_7F42ED50;
    case 0x7F42EE1Cu: goto label_7F42EE1C;
    case 0x7F42EE20u: goto label_7F42EE20;
    case 0x7F42EE68u: goto label_7F42EE68;
    case 0x7F42EED4u: goto label_7F42EED4;
    case 0x7F42EEFCu: goto label_7F42EEFC;
    case 0x7F42EF94u: goto label_7F42EF94;
    case 0x7F42F01Cu: goto label_7F42F01C;
    case 0x7F42F0ACu: goto label_7F42F0AC;
    case 0x7F42F0C0u: goto label_7F42F0C0;
    case 0x7F42F0D0u: goto label_7F42F0D0;
    case 0x7F42F0ECu: goto label_7F42F0EC;
    case 0x7F42F104u: goto label_7F42F104;
    case 0x7F42F114u: goto label_7F42F114;
    case 0x7F42F130u: goto label_7F42F130;
    case 0x7F42F448u: goto label_7F42F448;
    case 0x7F42F450u: goto label_7F42F450;
    case 0x7F42F458u: goto label_7F42F458;
    case 0x7F42F494u: goto label_7F42F494;
    case 0x7F42F4B0u: goto label_7F42F4B0;
    case 0x7F42F4F0u: goto label_7F42F4F0;
    case 0x7F42F538u: goto label_7F42F538;
    case 0x7F42F578u: goto label_7F42F578;
    case 0x7F42F5D4u: goto label_7F42F5D4;
    case 0x7F42F5E0u: goto label_7F42F5E0;
    case 0x7F42F6A4u: goto label_7F42F6A4;
    case 0x7F42F6ACu: goto label_7F42F6AC;
    case 0x7F42F6BCu: goto label_7F42F6BC;
    case 0x7F42F6CCu: goto label_7F42F6CC;
    case 0x7F42F6DCu: goto label_7F42F6DC;
    case 0x7F42F6ECu: goto label_7F42F6EC;
    case 0x7F42F714u: goto label_7F42F714;
    case 0x7F42F7DCu: goto label_7F42F7DC;
    case 0x7F42F7F0u: goto label_7F42F7F0;
    case 0x7F42F800u: goto label_7F42F800;
    case 0x7F42F814u: goto label_7F42F814;
    case 0x7F42F830u: goto label_7F42F830;
    case 0x7F42F864u: goto label_7F42F864;
    case 0x7F42F86Cu: goto label_7F42F86C;
    case 0x7F42F880u: goto label_7F42F880;
    case 0x7F42F890u: goto label_7F42F890;
    case 0x7F42F8D8u: goto label_7F42F8D8;
    case 0x7F42F8E0u: goto label_7F42F8E0;
    case 0x7F42F8F4u: goto label_7F42F8F4;
    case 0x7F42F904u: goto label_7F42F904;
    case 0x7F42F97Cu: goto label_7F42F97C;
    case 0x7F42F9A0u: goto label_7F42F9A0;
    case 0x7F42F9C4u: goto label_7F42F9C4;
    case 0x7F42F9D4u: goto label_7F42F9D4;
    case 0x7F42F9E0u: goto label_7F42F9E0;
    case 0x7F42FA14u: goto label_7F42FA14;
    case 0x7F42FA38u: goto label_7F42FA38;
    case 0x7F42FABCu: goto label_7F42FABC;
    case 0x7F42FAD0u: goto label_7F42FAD0;
    case 0x7F42FAE0u: goto label_7F42FAE0;
    case 0x7F42FAF8u: goto label_7F42FAF8;
    case 0x7F42FB04u: goto label_7F42FB04;
    case 0x7F42FB10u: goto label_7F42FB10;
    case 0x7F42FB60u: goto label_7F42FB60;
    case 0x7F42FBC4u: goto label_7F42FBC4;
    case 0x7F42FC24u: goto label_7F42FC24;
    case 0x7F42FC30u: goto label_7F42FC30;
    case 0x7F42FC40u: goto label_7F42FC40;
    case 0x7F42FC60u: goto label_7F42FC60;
    case 0x7F42FC68u: goto label_7F42FC68;
    case 0x7F42FC88u: goto label_7F42FC88;
    case 0x7F42FC90u: goto label_7F42FC90;
    case 0x7F42FCB0u: goto label_7F42FCB0;
    case 0x7F42FCB8u: goto label_7F42FCB8;
    case 0x7F42FCD8u: goto label_7F42FCD8;
    case 0x7F42FCF8u: goto label_7F42FCF8;
    case 0x7F42FD04u: goto label_7F42FD04;
    case 0x7F42FD18u: goto label_7F42FD18;
    case 0x7F42FD1Cu: goto label_7F42FD1C;
    case 0x7F42FD20u: goto label_7F42FD20;
    case 0x7F42FDC0u: goto label_7F42FDC0;
    case 0x7F42FE04u: goto label_7F42FE04;
    case 0x7F42FE50u: goto label_7F42FE50;
    case 0x7F42FE94u: goto label_7F42FE94;
    case 0x7F42FEC8u: goto label_7F42FEC8;
    case 0x7F42FF1Cu: goto label_7F42FF1C;
    case 0x7F42FF28u: goto label_7F42FF28;
    case 0x7F42FF34u: goto label_7F42FF34;
    case 0x7F42FF40u: goto label_7F42FF40;
    case 0x7F42FF6Cu: goto label_7F42FF6C;
    case 0x7F42FFC0u: goto label_7F42FFC0;
    case 0x7F42FFDCu: goto label_7F42FFDC;
    case 0x7F430014u: goto label_7F430014;
    case 0x7F430024u: goto label_7F430024;
    case 0x7F43008Cu: goto label_7F43008C;
    case 0x7F43009Cu: goto label_7F43009C;
    case 0x7F4300A4u: goto label_7F4300A4;
    default: return;
    }
}

