// DolRecomp output
#include "../generated.h"

static void loop_80006C94(CPUState* ctx) {
label_80006C94:
    ctx->downcount -= 9;
    // 80006C94: add   r5, r28, r6
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    // 80006C98: addi    r6, r6, 2
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(2);

    ctx->pc = 0x80006C9Cu;
    // 80006C9C: lbz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

    // 80006CA0: addi    r4, r4, -6
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6);

    // 80006CA4: srawi r0, r4, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[4];
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

    // 80006CA8: andc   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] & ~ctx->gpr[0];
    }

    ctx->pc = 0x80006CACu;
    // 80006CAC: stb     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    ctx->pc = 0x80006CB0u;
    // 80006CB0: stb     r3, 1(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

    // 80006CB4: bc    16, 0, 0x80006C94
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80006C94u;
                return;
            }
            goto label_80006C94;
        }
    }

    ctx->pc = 0x80006CB8u;
}

static void loop_80006EC4(CPUState* ctx) {
label_80006EC4:
    ctx->downcount -= 6;
    // 80006EC4: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    // 80006EC8: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

    ctx->pc = 0x80006ECCu;
    // 80006ECC: stw     r6, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    ctx->pc = 0x80006ED0u;
    // 80006ED0: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 80006ED4: add   r6, r6, r0
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

    // 80006ED8: bc    16, 0, 0x80006EC4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80006EC4u;
                return;
            }
            goto label_80006EC4;
        }
    }

    ctx->pc = 0x80006EDCu;
}

static void loop_8000726C(CPUState* ctx) {
label_8000726C:
    ctx->downcount -= 10;
    // 8000726C: add   r5, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    // 80007270: add   r6, r30, r3
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

    ctx->pc = 0x80007274u;
    // 80007274: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    // 80007278: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

    ctx->pc = 0x8000727Cu;
    // 8000727C: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80007280u;
    // 80007280: stw     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x80007284u;
    // 80007284: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x80007288u;
    // 80007288: lwz     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x8000728Cu;
    // 8000728C: stw     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 80007290: bc    16, 0, 0x8000726C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000726Cu;
                return;
            }
            goto label_8000726C;
        }
    }

    ctx->pc = 0x80007294u;
}

void func_800055E0(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x800055E0u: goto label_800055E0;
    case 0x800055E4u: goto label_800055E4;
    case 0x800055E8u: goto label_800055E8;
    case 0x800055ECu: goto label_800055EC;
    case 0x800055F0u: goto label_800055F0;
    case 0x800055F4u: goto label_800055F4;
    case 0x800055F8u: goto label_800055F8;
    case 0x800055FCu: goto label_800055FC;
    case 0x80005600u: goto label_80005600;
    case 0x80005604u: goto label_80005604;
    case 0x80005608u: goto label_80005608;
    case 0x8000560Cu: goto label_8000560C;
    case 0x80005610u: goto label_80005610;
    case 0x80005614u: goto label_80005614;
    case 0x80005618u: goto label_80005618;
    case 0x8000561Cu: goto label_8000561C;
    case 0x80005620u: goto label_80005620;
    case 0x80005624u: goto label_80005624;
    case 0x80005628u: goto label_80005628;
    case 0x8000562Cu: goto label_8000562C;
    case 0x80005630u: goto label_80005630;
    case 0x80005634u: goto label_80005634;
    case 0x80005638u: goto label_80005638;
    case 0x8000563Cu: goto label_8000563C;
    case 0x80005640u: goto label_80005640;
    case 0x80005644u: goto label_80005644;
    case 0x80005648u: goto label_80005648;
    case 0x8000564Cu: goto label_8000564C;
    case 0x80005650u: goto label_80005650;
    case 0x80005654u: goto label_80005654;
    case 0x80005658u: goto label_80005658;
    case 0x8000565Cu: goto label_8000565C;
    case 0x80005660u: goto label_80005660;
    case 0x80005664u: goto label_80005664;
    case 0x80005668u: goto label_80005668;
    case 0x8000566Cu: goto label_8000566C;
    case 0x80005670u: goto label_80005670;
    case 0x80005674u: goto label_80005674;
    case 0x80005678u: goto label_80005678;
    case 0x8000567Cu: goto label_8000567C;
    case 0x80005680u: goto label_80005680;
    case 0x80005684u: goto label_80005684;
    case 0x80005688u: goto label_80005688;
    case 0x8000568Cu: goto label_8000568C;
    case 0x80005690u: goto label_80005690;
    case 0x80005694u: goto label_80005694;
    case 0x80005698u: goto label_80005698;
    case 0x8000569Cu: goto label_8000569C;
    case 0x800056A0u: goto label_800056A0;
    case 0x800056A4u: goto label_800056A4;
    case 0x800056A8u: goto label_800056A8;
    case 0x800056ACu: goto label_800056AC;
    case 0x800056B0u: goto label_800056B0;
    case 0x800056B4u: goto label_800056B4;
    case 0x800056B8u: goto label_800056B8;
    case 0x800056BCu: goto label_800056BC;
    case 0x800056C0u: goto label_800056C0;
    case 0x800056C4u: goto label_800056C4;
    case 0x800056C8u: goto label_800056C8;
    case 0x800056CCu: goto label_800056CC;
    case 0x800056D0u: goto label_800056D0;
    case 0x800056D4u: goto label_800056D4;
    case 0x800056D8u: goto label_800056D8;
    case 0x800056DCu: goto label_800056DC;
    case 0x800056E0u: goto label_800056E0;
    case 0x800056E4u: goto label_800056E4;
    case 0x800056E8u: goto label_800056E8;
    case 0x800056ECu: goto label_800056EC;
    case 0x800056F0u: goto label_800056F0;
    case 0x800056F4u: goto label_800056F4;
    case 0x800056F8u: goto label_800056F8;
    case 0x800056FCu: goto label_800056FC;
    case 0x80005700u: goto label_80005700;
    case 0x80005704u: goto label_80005704;
    case 0x80005708u: goto label_80005708;
    case 0x8000570Cu: goto label_8000570C;
    case 0x80005710u: goto label_80005710;
    case 0x80005714u: goto label_80005714;
    case 0x80005718u: goto label_80005718;
    case 0x8000571Cu: goto label_8000571C;
    case 0x80005720u: goto label_80005720;
    case 0x80005724u: goto label_80005724;
    case 0x80005728u: goto label_80005728;
    case 0x8000572Cu: goto label_8000572C;
    case 0x80005730u: goto label_80005730;
    case 0x80005734u: goto label_80005734;
    case 0x80005738u: goto label_80005738;
    case 0x8000573Cu: goto label_8000573C;
    case 0x80005740u: goto label_80005740;
    case 0x80005744u: goto label_80005744;
    case 0x80005748u: goto label_80005748;
    case 0x8000574Cu: goto label_8000574C;
    case 0x80005750u: goto label_80005750;
    case 0x80005754u: goto label_80005754;
    case 0x80005758u: goto label_80005758;
    case 0x8000575Cu: goto label_8000575C;
    case 0x80005760u: goto label_80005760;
    case 0x80005764u: goto label_80005764;
    case 0x80005768u: goto label_80005768;
    case 0x8000576Cu: goto label_8000576C;
    case 0x80005770u: goto label_80005770;
    case 0x80005774u: goto label_80005774;
    case 0x80005778u: goto label_80005778;
    case 0x8000577Cu: goto label_8000577C;
    case 0x80005780u: goto label_80005780;
    case 0x80005784u: goto label_80005784;
    case 0x80005788u: goto label_80005788;
    case 0x8000578Cu: goto label_8000578C;
    case 0x80005790u: goto label_80005790;
    case 0x80005794u: goto label_80005794;
    case 0x80005798u: goto label_80005798;
    case 0x8000579Cu: goto label_8000579C;
    case 0x800057A0u: goto label_800057A0;
    case 0x800057A4u: goto label_800057A4;
    case 0x800057A8u: goto label_800057A8;
    case 0x800057ACu: goto label_800057AC;
    case 0x800057B0u: goto label_800057B0;
    case 0x800057B4u: goto label_800057B4;
    case 0x800057B8u: goto label_800057B8;
    case 0x800057BCu: goto label_800057BC;
    case 0x800057C0u: goto label_800057C0;
    case 0x800057C4u: goto label_800057C4;
    case 0x800057C8u: goto label_800057C8;
    case 0x800057CCu: goto label_800057CC;
    case 0x800057D0u: goto label_800057D0;
    case 0x800057D4u: goto label_800057D4;
    case 0x800057D8u: goto label_800057D8;
    case 0x800057DCu: goto label_800057DC;
    case 0x800057E0u: goto label_800057E0;
    case 0x800057E4u: goto label_800057E4;
    case 0x800057E8u: goto label_800057E8;
    case 0x800057ECu: goto label_800057EC;
    case 0x800057F0u: goto label_800057F0;
    case 0x800057F4u: goto label_800057F4;
    case 0x800057F8u: goto label_800057F8;
    case 0x800057FCu: goto label_800057FC;
    case 0x80005800u: goto label_80005800;
    case 0x80005804u: goto label_80005804;
    case 0x80005808u: goto label_80005808;
    case 0x8000580Cu: goto label_8000580C;
    case 0x80005810u: goto label_80005810;
    case 0x80005814u: goto label_80005814;
    case 0x80005818u: goto label_80005818;
    case 0x8000581Cu: goto label_8000581C;
    case 0x80005820u: goto label_80005820;
    case 0x80005824u: goto label_80005824;
    case 0x80005828u: goto label_80005828;
    case 0x8000582Cu: goto label_8000582C;
    case 0x80005830u: goto label_80005830;
    case 0x80005834u: goto label_80005834;
    case 0x80005838u: goto label_80005838;
    case 0x8000583Cu: goto label_8000583C;
    case 0x80005840u: goto label_80005840;
    case 0x80005844u: goto label_80005844;
    case 0x80005848u: goto label_80005848;
    case 0x8000584Cu: goto label_8000584C;
    case 0x80005850u: goto label_80005850;
    case 0x80005854u: goto label_80005854;
    case 0x80005858u: goto label_80005858;
    case 0x8000585Cu: goto label_8000585C;
    case 0x80005860u: goto label_80005860;
    case 0x80005864u: goto label_80005864;
    case 0x80005868u: goto label_80005868;
    case 0x8000586Cu: goto label_8000586C;
    case 0x80005870u: goto label_80005870;
    case 0x80005874u: goto label_80005874;
    case 0x80005878u: goto label_80005878;
    case 0x8000587Cu: goto label_8000587C;
    case 0x80005880u: goto label_80005880;
    case 0x80005884u: goto label_80005884;
    case 0x80005888u: goto label_80005888;
    case 0x8000588Cu: goto label_8000588C;
    case 0x80005890u: goto label_80005890;
    case 0x80005894u: goto label_80005894;
    case 0x80005898u: goto label_80005898;
    case 0x8000589Cu: goto label_8000589C;
    case 0x800058A0u: goto label_800058A0;
    case 0x800058A4u: goto label_800058A4;
    case 0x800058A8u: goto label_800058A8;
    case 0x800058ACu: goto label_800058AC;
    case 0x800058B0u: goto label_800058B0;
    case 0x800058B4u: goto label_800058B4;
    case 0x800058B8u: goto label_800058B8;
    case 0x800058BCu: goto label_800058BC;
    case 0x800058C0u: goto label_800058C0;
    case 0x800058C4u: goto label_800058C4;
    case 0x800058C8u: goto label_800058C8;
    case 0x800058CCu: goto label_800058CC;
    case 0x800058D0u: goto label_800058D0;
    case 0x800058D4u: goto label_800058D4;
    case 0x800058D8u: goto label_800058D8;
    case 0x800058DCu: goto label_800058DC;
    case 0x800058E0u: goto label_800058E0;
    case 0x800058E4u: goto label_800058E4;
    case 0x800058E8u: goto label_800058E8;
    case 0x800058ECu: goto label_800058EC;
    case 0x800058F0u: goto label_800058F0;
    case 0x800058F4u: goto label_800058F4;
    case 0x800058F8u: goto label_800058F8;
    case 0x800058FCu: goto label_800058FC;
    case 0x80005900u: goto label_80005900;
    case 0x80005904u: goto label_80005904;
    case 0x80005908u: goto label_80005908;
    case 0x8000590Cu: goto label_8000590C;
    case 0x80005910u: goto label_80005910;
    case 0x80005914u: goto label_80005914;
    case 0x80005918u: goto label_80005918;
    case 0x8000591Cu: goto label_8000591C;
    case 0x80005920u: goto label_80005920;
    case 0x80005924u: goto label_80005924;
    case 0x80005928u: goto label_80005928;
    case 0x8000592Cu: goto label_8000592C;
    case 0x80005930u: goto label_80005930;
    case 0x80005934u: goto label_80005934;
    case 0x80005938u: goto label_80005938;
    case 0x8000593Cu: goto label_8000593C;
    case 0x80005940u: goto label_80005940;
    case 0x80005944u: goto label_80005944;
    case 0x80005948u: goto label_80005948;
    case 0x8000594Cu: goto label_8000594C;
    case 0x80005950u: goto label_80005950;
    case 0x80005954u: goto label_80005954;
    case 0x80005958u: goto label_80005958;
    case 0x8000595Cu: goto label_8000595C;
    case 0x80005960u: goto label_80005960;
    case 0x80005964u: goto label_80005964;
    case 0x80005968u: goto label_80005968;
    case 0x8000596Cu: goto label_8000596C;
    case 0x80005970u: goto label_80005970;
    case 0x80005974u: goto label_80005974;
    case 0x80005978u: goto label_80005978;
    case 0x8000597Cu: goto label_8000597C;
    case 0x80005980u: goto label_80005980;
    case 0x80005984u: goto label_80005984;
    case 0x80005988u: goto label_80005988;
    case 0x8000598Cu: goto label_8000598C;
    case 0x80005990u: goto label_80005990;
    case 0x80005994u: goto label_80005994;
    case 0x80005998u: goto label_80005998;
    case 0x8000599Cu: goto label_8000599C;
    case 0x800059A0u: goto label_800059A0;
    case 0x800059A4u: goto label_800059A4;
    case 0x800059A8u: goto label_800059A8;
    case 0x800059ACu: goto label_800059AC;
    case 0x800059B0u: goto label_800059B0;
    case 0x800059B4u: goto label_800059B4;
    case 0x800059B8u: goto label_800059B8;
    case 0x800059BCu: goto label_800059BC;
    case 0x800059C0u: goto label_800059C0;
    case 0x800059C4u: goto label_800059C4;
    case 0x800059C8u: goto label_800059C8;
    case 0x800059CCu: goto label_800059CC;
    case 0x800059D0u: goto label_800059D0;
    case 0x800059D4u: goto label_800059D4;
    case 0x800059D8u: goto label_800059D8;
    case 0x800059DCu: goto label_800059DC;
    case 0x800059E0u: goto label_800059E0;
    case 0x800059E4u: goto label_800059E4;
    case 0x800059E8u: goto label_800059E8;
    case 0x800059ECu: goto label_800059EC;
    case 0x800059F0u: goto label_800059F0;
    case 0x800059F4u: goto label_800059F4;
    case 0x800059F8u: goto label_800059F8;
    case 0x800059FCu: goto label_800059FC;
    case 0x80005A00u: goto label_80005A00;
    case 0x80005A04u: goto label_80005A04;
    case 0x80005A08u: goto label_80005A08;
    case 0x80005A0Cu: goto label_80005A0C;
    case 0x80005A10u: goto label_80005A10;
    case 0x80005A14u: goto label_80005A14;
    case 0x80005A18u: goto label_80005A18;
    case 0x80005A1Cu: goto label_80005A1C;
    case 0x80005A20u: goto label_80005A20;
    case 0x80005A24u: goto label_80005A24;
    case 0x80005A28u: goto label_80005A28;
    case 0x80005A2Cu: goto label_80005A2C;
    case 0x80005A30u: goto label_80005A30;
    case 0x80005A34u: goto label_80005A34;
    case 0x80005A38u: goto label_80005A38;
    case 0x80005A3Cu: goto label_80005A3C;
    case 0x80005A40u: goto label_80005A40;
    case 0x80005A44u: goto label_80005A44;
    case 0x80005A48u: goto label_80005A48;
    case 0x80005A4Cu: goto label_80005A4C;
    case 0x80005A50u: goto label_80005A50;
    case 0x80005A54u: goto label_80005A54;
    case 0x80005A58u: goto label_80005A58;
    case 0x80005A5Cu: goto label_80005A5C;
    case 0x80005A60u: goto label_80005A60;
    case 0x80005A64u: goto label_80005A64;
    case 0x80005A68u: goto label_80005A68;
    case 0x80005A6Cu: goto label_80005A6C;
    case 0x80005A70u: goto label_80005A70;
    case 0x80005A74u: goto label_80005A74;
    case 0x80005A78u: goto label_80005A78;
    case 0x80005A7Cu: goto label_80005A7C;
    case 0x80005A80u: goto label_80005A80;
    case 0x80005A84u: goto label_80005A84;
    case 0x80005A88u: goto label_80005A88;
    case 0x80005A8Cu: goto label_80005A8C;
    case 0x80005A90u: goto label_80005A90;
    case 0x80005A94u: goto label_80005A94;
    case 0x80005A98u: goto label_80005A98;
    case 0x80005A9Cu: goto label_80005A9C;
    case 0x80005AA0u: goto label_80005AA0;
    case 0x80005AA4u: goto label_80005AA4;
    case 0x80005AA8u: goto label_80005AA8;
    case 0x80005AACu: goto label_80005AAC;
    case 0x80005AB0u: goto label_80005AB0;
    case 0x80005AB4u: goto label_80005AB4;
    case 0x80005AB8u: goto label_80005AB8;
    case 0x80005ABCu: goto label_80005ABC;
    case 0x80005AC0u: goto label_80005AC0;
    case 0x80005AC4u: goto label_80005AC4;
    case 0x80005AC8u: goto label_80005AC8;
    case 0x80005ACCu: goto label_80005ACC;
    case 0x80005AD0u: goto label_80005AD0;
    case 0x80005AD4u: goto label_80005AD4;
    case 0x80005AD8u: goto label_80005AD8;
    case 0x80005ADCu: goto label_80005ADC;
    case 0x80005AE0u: goto label_80005AE0;
    case 0x80005AE4u: goto label_80005AE4;
    case 0x80005AE8u: goto label_80005AE8;
    case 0x80005AECu: goto label_80005AEC;
    case 0x80005AF0u: goto label_80005AF0;
    case 0x80005AF4u: goto label_80005AF4;
    case 0x80005AF8u: goto label_80005AF8;
    case 0x80005AFCu: goto label_80005AFC;
    case 0x80005B00u: goto label_80005B00;
    case 0x80005B04u: goto label_80005B04;
    case 0x80005B08u: goto label_80005B08;
    case 0x80005B0Cu: goto label_80005B0C;
    case 0x80005B10u: goto label_80005B10;
    case 0x80005B14u: goto label_80005B14;
    case 0x80005B18u: goto label_80005B18;
    case 0x80005B1Cu: goto label_80005B1C;
    case 0x80005B20u: goto label_80005B20;
    case 0x80005B24u: goto label_80005B24;
    case 0x80005B28u: goto label_80005B28;
    case 0x80005B2Cu: goto label_80005B2C;
    case 0x80005B30u: goto label_80005B30;
    case 0x80005B34u: goto label_80005B34;
    case 0x80005B38u: goto label_80005B38;
    case 0x80005B3Cu: goto label_80005B3C;
    case 0x80005B40u: goto label_80005B40;
    case 0x80005B44u: goto label_80005B44;
    case 0x80005B48u: goto label_80005B48;
    case 0x80005B4Cu: goto label_80005B4C;
    case 0x80005B50u: goto label_80005B50;
    case 0x80005B54u: goto label_80005B54;
    case 0x80005B58u: goto label_80005B58;
    case 0x80005B5Cu: goto label_80005B5C;
    case 0x80005B60u: goto label_80005B60;
    case 0x80005B64u: goto label_80005B64;
    case 0x80005B68u: goto label_80005B68;
    case 0x80005B6Cu: goto label_80005B6C;
    case 0x80005B70u: goto label_80005B70;
    case 0x80005B74u: goto label_80005B74;
    case 0x80005B78u: goto label_80005B78;
    case 0x80005B7Cu: goto label_80005B7C;
    case 0x80005B80u: goto label_80005B80;
    case 0x80005B84u: goto label_80005B84;
    case 0x80005B88u: goto label_80005B88;
    case 0x80005B8Cu: goto label_80005B8C;
    case 0x80005B90u: goto label_80005B90;
    case 0x80005B94u: goto label_80005B94;
    case 0x80005B98u: goto label_80005B98;
    case 0x80005B9Cu: goto label_80005B9C;
    case 0x80005BA0u: goto label_80005BA0;
    case 0x80005BA4u: goto label_80005BA4;
    case 0x80005BA8u: goto label_80005BA8;
    case 0x80005BACu: goto label_80005BAC;
    case 0x80005BB0u: goto label_80005BB0;
    case 0x80005BB4u: goto label_80005BB4;
    case 0x80005BB8u: goto label_80005BB8;
    case 0x80005BBCu: goto label_80005BBC;
    case 0x80005BC0u: goto label_80005BC0;
    case 0x80005BC4u: goto label_80005BC4;
    case 0x80005BC8u: goto label_80005BC8;
    case 0x80005BCCu: goto label_80005BCC;
    case 0x80005BD0u: goto label_80005BD0;
    case 0x80005BD4u: goto label_80005BD4;
    case 0x80005BD8u: goto label_80005BD8;
    case 0x80005BDCu: goto label_80005BDC;
    case 0x80005BE0u: goto label_80005BE0;
    case 0x80005BE4u: goto label_80005BE4;
    case 0x80005BE8u: goto label_80005BE8;
    case 0x80005BECu: goto label_80005BEC;
    case 0x80005BF0u: goto label_80005BF0;
    case 0x80005BF4u: goto label_80005BF4;
    case 0x80005BF8u: goto label_80005BF8;
    case 0x80005BFCu: goto label_80005BFC;
    case 0x80005C00u: goto label_80005C00;
    case 0x80005C04u: goto label_80005C04;
    case 0x80005C08u: goto label_80005C08;
    case 0x80005C0Cu: goto label_80005C0C;
    case 0x80005C10u: goto label_80005C10;
    case 0x80005C14u: goto label_80005C14;
    case 0x80005C18u: goto label_80005C18;
    case 0x80005C1Cu: goto label_80005C1C;
    case 0x80005C20u: goto label_80005C20;
    case 0x80005C24u: goto label_80005C24;
    case 0x80005C28u: goto label_80005C28;
    case 0x80005C2Cu: goto label_80005C2C;
    case 0x80005C30u: goto label_80005C30;
    case 0x80005C34u: goto label_80005C34;
    case 0x80005C38u: goto label_80005C38;
    case 0x80005C3Cu: goto label_80005C3C;
    case 0x80005C40u: goto label_80005C40;
    case 0x80005C44u: goto label_80005C44;
    case 0x80005C48u: goto label_80005C48;
    case 0x80005C4Cu: goto label_80005C4C;
    case 0x80005C50u: goto label_80005C50;
    case 0x80005C54u: goto label_80005C54;
    case 0x80005C58u: goto label_80005C58;
    case 0x80005C5Cu: goto label_80005C5C;
    case 0x80005C60u: goto label_80005C60;
    case 0x80005C64u: goto label_80005C64;
    case 0x80005C68u: goto label_80005C68;
    case 0x80005C6Cu: goto label_80005C6C;
    case 0x80005C70u: goto label_80005C70;
    case 0x80005C74u: goto label_80005C74;
    case 0x80005C78u: goto label_80005C78;
    case 0x80005C7Cu: goto label_80005C7C;
    case 0x80005C80u: goto label_80005C80;
    case 0x80005C84u: goto label_80005C84;
    case 0x80005C88u: goto label_80005C88;
    case 0x80005C8Cu: goto label_80005C8C;
    case 0x80005C90u: goto label_80005C90;
    case 0x80005C94u: goto label_80005C94;
    case 0x80005C98u: goto label_80005C98;
    case 0x80005C9Cu: goto label_80005C9C;
    case 0x80005CA0u: goto label_80005CA0;
    case 0x80005CA4u: goto label_80005CA4;
    case 0x80005CA8u: goto label_80005CA8;
    case 0x80005CACu: goto label_80005CAC;
    case 0x80005CB0u: goto label_80005CB0;
    case 0x80005CB4u: goto label_80005CB4;
    case 0x80005CB8u: goto label_80005CB8;
    case 0x80005CBCu: goto label_80005CBC;
    case 0x80005CC0u: goto label_80005CC0;
    case 0x80005CC4u: goto label_80005CC4;
    case 0x80005CC8u: goto label_80005CC8;
    case 0x80005CCCu: goto label_80005CCC;
    case 0x80005CD0u: goto label_80005CD0;
    case 0x80005CD4u: goto label_80005CD4;
    case 0x80005CD8u: goto label_80005CD8;
    case 0x80005CDCu: goto label_80005CDC;
    case 0x80005CE0u: goto label_80005CE0;
    case 0x80005CE4u: goto label_80005CE4;
    case 0x80005CE8u: goto label_80005CE8;
    case 0x80005CECu: goto label_80005CEC;
    case 0x80005CF0u: goto label_80005CF0;
    case 0x80005CF4u: goto label_80005CF4;
    case 0x80005CF8u: goto label_80005CF8;
    case 0x80005CFCu: goto label_80005CFC;
    case 0x80005D00u: goto label_80005D00;
    case 0x80005D04u: goto label_80005D04;
    case 0x80005D08u: goto label_80005D08;
    case 0x80005D0Cu: goto label_80005D0C;
    case 0x80005D10u: goto label_80005D10;
    case 0x80005D14u: goto label_80005D14;
    case 0x80005D18u: goto label_80005D18;
    case 0x80005D1Cu: goto label_80005D1C;
    case 0x80005D20u: goto label_80005D20;
    case 0x80005D24u: goto label_80005D24;
    case 0x80005D28u: goto label_80005D28;
    case 0x80005D2Cu: goto label_80005D2C;
    case 0x80005D30u: goto label_80005D30;
    case 0x80005D34u: goto label_80005D34;
    case 0x80005D38u: goto label_80005D38;
    case 0x80005D3Cu: goto label_80005D3C;
    case 0x80005D40u: goto label_80005D40;
    case 0x80005D44u: goto label_80005D44;
    case 0x80005D48u: goto label_80005D48;
    case 0x80005D4Cu: goto label_80005D4C;
    case 0x80005D50u: goto label_80005D50;
    case 0x80005D54u: goto label_80005D54;
    case 0x80005D58u: goto label_80005D58;
    case 0x80005D5Cu: goto label_80005D5C;
    case 0x80005D60u: goto label_80005D60;
    case 0x80005D64u: goto label_80005D64;
    case 0x80005D68u: goto label_80005D68;
    case 0x80005D6Cu: goto label_80005D6C;
    case 0x80005D70u: goto label_80005D70;
    case 0x80005D74u: goto label_80005D74;
    case 0x80005D78u: goto label_80005D78;
    case 0x80005D7Cu: goto label_80005D7C;
    case 0x80005D80u: goto label_80005D80;
    case 0x80005D84u: goto label_80005D84;
    case 0x80005D88u: goto label_80005D88;
    case 0x80005D8Cu: goto label_80005D8C;
    case 0x80005D90u: goto label_80005D90;
    case 0x80005D94u: goto label_80005D94;
    case 0x80005D98u: goto label_80005D98;
    case 0x80005D9Cu: goto label_80005D9C;
    case 0x80005DA0u: goto label_80005DA0;
    case 0x80005DA4u: goto label_80005DA4;
    case 0x80005DA8u: goto label_80005DA8;
    case 0x80005DACu: goto label_80005DAC;
    case 0x80005DB0u: goto label_80005DB0;
    case 0x80005DB4u: goto label_80005DB4;
    case 0x80005DB8u: goto label_80005DB8;
    case 0x80005DBCu: goto label_80005DBC;
    case 0x80005DC0u: goto label_80005DC0;
    case 0x80005DC4u: goto label_80005DC4;
    case 0x80005DC8u: goto label_80005DC8;
    case 0x80005DCCu: goto label_80005DCC;
    case 0x80005DD0u: goto label_80005DD0;
    case 0x80005DD4u: goto label_80005DD4;
    case 0x80005DD8u: goto label_80005DD8;
    case 0x80005DDCu: goto label_80005DDC;
    case 0x80005DE0u: goto label_80005DE0;
    case 0x80005DE4u: goto label_80005DE4;
    case 0x80005DE8u: goto label_80005DE8;
    case 0x80005DECu: goto label_80005DEC;
    case 0x80005DF0u: goto label_80005DF0;
    case 0x80005DF4u: goto label_80005DF4;
    case 0x80005DF8u: goto label_80005DF8;
    case 0x80005DFCu: goto label_80005DFC;
    case 0x80005E00u: goto label_80005E00;
    case 0x80005E04u: goto label_80005E04;
    case 0x80005E08u: goto label_80005E08;
    case 0x80005E0Cu: goto label_80005E0C;
    case 0x80005E10u: goto label_80005E10;
    case 0x80005E14u: goto label_80005E14;
    case 0x80005E18u: goto label_80005E18;
    case 0x80005E1Cu: goto label_80005E1C;
    case 0x80005E20u: goto label_80005E20;
    case 0x80005E24u: goto label_80005E24;
    case 0x80005E28u: goto label_80005E28;
    case 0x80005E2Cu: goto label_80005E2C;
    case 0x80005E30u: goto label_80005E30;
    case 0x80005E34u: goto label_80005E34;
    case 0x80005E38u: goto label_80005E38;
    case 0x80005E3Cu: goto label_80005E3C;
    case 0x80005E40u: goto label_80005E40;
    case 0x80005E44u: goto label_80005E44;
    case 0x80005E48u: goto label_80005E48;
    case 0x80005E4Cu: goto label_80005E4C;
    case 0x80005E50u: goto label_80005E50;
    case 0x80005E54u: goto label_80005E54;
    case 0x80005E58u: goto label_80005E58;
    case 0x80005E5Cu: goto label_80005E5C;
    case 0x80005E60u: goto label_80005E60;
    case 0x80005E64u: goto label_80005E64;
    case 0x80005E68u: goto label_80005E68;
    case 0x80005E6Cu: goto label_80005E6C;
    case 0x80005E70u: goto label_80005E70;
    case 0x80005E74u: goto label_80005E74;
    case 0x80005E78u: goto label_80005E78;
    case 0x80005E7Cu: goto label_80005E7C;
    case 0x80005E80u: goto label_80005E80;
    case 0x80005E84u: goto label_80005E84;
    case 0x80005E88u: goto label_80005E88;
    case 0x80005E8Cu: goto label_80005E8C;
    case 0x80005E90u: goto label_80005E90;
    case 0x80005E94u: goto label_80005E94;
    case 0x80005E98u: goto label_80005E98;
    case 0x80005E9Cu: goto label_80005E9C;
    case 0x80005EA0u: goto label_80005EA0;
    case 0x80005EA4u: goto label_80005EA4;
    case 0x80005EA8u: goto label_80005EA8;
    case 0x80005EACu: goto label_80005EAC;
    case 0x80005EB0u: goto label_80005EB0;
    case 0x80005EB4u: goto label_80005EB4;
    case 0x80005EB8u: goto label_80005EB8;
    case 0x80005EBCu: goto label_80005EBC;
    case 0x80005EC0u: goto label_80005EC0;
    case 0x80005EC4u: goto label_80005EC4;
    case 0x80005EC8u: goto label_80005EC8;
    case 0x80005ECCu: goto label_80005ECC;
    case 0x80005ED0u: goto label_80005ED0;
    case 0x80005ED4u: goto label_80005ED4;
    case 0x80005ED8u: goto label_80005ED8;
    case 0x80005EDCu: goto label_80005EDC;
    case 0x80005EE0u: goto label_80005EE0;
    case 0x80005EE4u: goto label_80005EE4;
    case 0x80005EE8u: goto label_80005EE8;
    case 0x80005EECu: goto label_80005EEC;
    case 0x80005EF0u: goto label_80005EF0;
    case 0x80005EF4u: goto label_80005EF4;
    case 0x80005EF8u: goto label_80005EF8;
    case 0x80005EFCu: goto label_80005EFC;
    case 0x80005F00u: goto label_80005F00;
    case 0x80005F04u: goto label_80005F04;
    case 0x80005F08u: goto label_80005F08;
    case 0x80005F0Cu: goto label_80005F0C;
    case 0x80005F10u: goto label_80005F10;
    case 0x80005F14u: goto label_80005F14;
    case 0x80005F18u: goto label_80005F18;
    case 0x80005F1Cu: goto label_80005F1C;
    case 0x80005F20u: goto label_80005F20;
    case 0x80005F24u: goto label_80005F24;
    case 0x80005F28u: goto label_80005F28;
    case 0x80005F2Cu: goto label_80005F2C;
    case 0x80005F30u: goto label_80005F30;
    case 0x80005F34u: goto label_80005F34;
    case 0x80005F38u: goto label_80005F38;
    case 0x80005F3Cu: goto label_80005F3C;
    case 0x80005F40u: goto label_80005F40;
    case 0x80005F44u: goto label_80005F44;
    case 0x80005F48u: goto label_80005F48;
    case 0x80005F4Cu: goto label_80005F4C;
    case 0x80005F50u: goto label_80005F50;
    case 0x80005F54u: goto label_80005F54;
    case 0x80005F58u: goto label_80005F58;
    case 0x80005F5Cu: goto label_80005F5C;
    case 0x80005F60u: goto label_80005F60;
    case 0x80005F64u: goto label_80005F64;
    case 0x80005F68u: goto label_80005F68;
    case 0x80005F6Cu: goto label_80005F6C;
    case 0x80005F70u: goto label_80005F70;
    case 0x80005F74u: goto label_80005F74;
    case 0x80005F78u: goto label_80005F78;
    case 0x80005F7Cu: goto label_80005F7C;
    case 0x80005F80u: goto label_80005F80;
    case 0x80005F84u: goto label_80005F84;
    case 0x80005F88u: goto label_80005F88;
    case 0x80005F8Cu: goto label_80005F8C;
    case 0x80005F90u: goto label_80005F90;
    case 0x80005F94u: goto label_80005F94;
    case 0x80005F98u: goto label_80005F98;
    case 0x80005F9Cu: goto label_80005F9C;
    case 0x80005FA0u: goto label_80005FA0;
    case 0x80005FA4u: goto label_80005FA4;
    case 0x80005FA8u: goto label_80005FA8;
    case 0x80005FACu: goto label_80005FAC;
    case 0x80005FB0u: goto label_80005FB0;
    case 0x80005FB4u: goto label_80005FB4;
    case 0x80005FB8u: goto label_80005FB8;
    case 0x80005FBCu: goto label_80005FBC;
    case 0x80005FC0u: goto label_80005FC0;
    case 0x80005FC4u: goto label_80005FC4;
    case 0x80005FC8u: goto label_80005FC8;
    case 0x80005FCCu: goto label_80005FCC;
    case 0x80005FD0u: goto label_80005FD0;
    case 0x80005FD4u: goto label_80005FD4;
    case 0x80005FD8u: goto label_80005FD8;
    case 0x80005FDCu: goto label_80005FDC;
    case 0x80005FE0u: goto label_80005FE0;
    case 0x80005FE4u: goto label_80005FE4;
    case 0x80005FE8u: goto label_80005FE8;
    case 0x80005FECu: goto label_80005FEC;
    case 0x80005FF0u: goto label_80005FF0;
    case 0x80005FF4u: goto label_80005FF4;
    case 0x80005FF8u: goto label_80005FF8;
    case 0x80005FFCu: goto label_80005FFC;
    case 0x80006000u: goto label_80006000;
    case 0x80006004u: goto label_80006004;
    case 0x80006008u: goto label_80006008;
    case 0x8000600Cu: goto label_8000600C;
    case 0x80006010u: goto label_80006010;
    case 0x80006014u: goto label_80006014;
    case 0x80006018u: goto label_80006018;
    case 0x8000601Cu: goto label_8000601C;
    case 0x80006020u: goto label_80006020;
    case 0x80006024u: goto label_80006024;
    case 0x80006028u: goto label_80006028;
    case 0x8000602Cu: goto label_8000602C;
    case 0x80006030u: goto label_80006030;
    case 0x80006034u: goto label_80006034;
    case 0x80006038u: goto label_80006038;
    case 0x8000603Cu: goto label_8000603C;
    case 0x80006040u: goto label_80006040;
    case 0x80006044u: goto label_80006044;
    case 0x80006048u: goto label_80006048;
    case 0x8000604Cu: goto label_8000604C;
    case 0x80006050u: goto label_80006050;
    case 0x80006054u: goto label_80006054;
    case 0x80006058u: goto label_80006058;
    case 0x8000605Cu: goto label_8000605C;
    case 0x80006060u: goto label_80006060;
    case 0x80006064u: goto label_80006064;
    case 0x80006068u: goto label_80006068;
    case 0x8000606Cu: goto label_8000606C;
    case 0x80006070u: goto label_80006070;
    case 0x80006074u: goto label_80006074;
    case 0x80006078u: goto label_80006078;
    case 0x8000607Cu: goto label_8000607C;
    case 0x80006080u: goto label_80006080;
    case 0x80006084u: goto label_80006084;
    case 0x80006088u: goto label_80006088;
    case 0x8000608Cu: goto label_8000608C;
    case 0x80006090u: goto label_80006090;
    case 0x80006094u: goto label_80006094;
    case 0x80006098u: goto label_80006098;
    case 0x8000609Cu: goto label_8000609C;
    case 0x800060A0u: goto label_800060A0;
    case 0x800060A4u: goto label_800060A4;
    case 0x800060A8u: goto label_800060A8;
    case 0x800060ACu: goto label_800060AC;
    case 0x800060B0u: goto label_800060B0;
    case 0x800060B4u: goto label_800060B4;
    case 0x800060B8u: goto label_800060B8;
    case 0x800060BCu: goto label_800060BC;
    case 0x800060C0u: goto label_800060C0;
    case 0x800060C4u: goto label_800060C4;
    case 0x800060C8u: goto label_800060C8;
    case 0x800060CCu: goto label_800060CC;
    case 0x800060D0u: goto label_800060D0;
    case 0x800060D4u: goto label_800060D4;
    case 0x800060D8u: goto label_800060D8;
    case 0x800060DCu: goto label_800060DC;
    case 0x800060E0u: goto label_800060E0;
    case 0x800060E4u: goto label_800060E4;
    case 0x800060E8u: goto label_800060E8;
    case 0x800060ECu: goto label_800060EC;
    case 0x800060F0u: goto label_800060F0;
    case 0x800060F4u: goto label_800060F4;
    case 0x800060F8u: goto label_800060F8;
    case 0x800060FCu: goto label_800060FC;
    case 0x80006100u: goto label_80006100;
    case 0x80006104u: goto label_80006104;
    case 0x80006108u: goto label_80006108;
    case 0x8000610Cu: goto label_8000610C;
    case 0x80006110u: goto label_80006110;
    case 0x80006114u: goto label_80006114;
    case 0x80006118u: goto label_80006118;
    case 0x8000611Cu: goto label_8000611C;
    case 0x80006120u: goto label_80006120;
    case 0x80006124u: goto label_80006124;
    case 0x80006128u: goto label_80006128;
    case 0x8000612Cu: goto label_8000612C;
    case 0x80006130u: goto label_80006130;
    case 0x80006134u: goto label_80006134;
    case 0x80006138u: goto label_80006138;
    case 0x8000613Cu: goto label_8000613C;
    case 0x80006140u: goto label_80006140;
    case 0x80006144u: goto label_80006144;
    case 0x80006148u: goto label_80006148;
    case 0x8000614Cu: goto label_8000614C;
    case 0x80006150u: goto label_80006150;
    case 0x80006154u: goto label_80006154;
    case 0x80006158u: goto label_80006158;
    case 0x8000615Cu: goto label_8000615C;
    case 0x80006160u: goto label_80006160;
    case 0x80006164u: goto label_80006164;
    case 0x80006168u: goto label_80006168;
    case 0x8000616Cu: goto label_8000616C;
    case 0x80006170u: goto label_80006170;
    case 0x80006174u: goto label_80006174;
    case 0x80006178u: goto label_80006178;
    case 0x8000617Cu: goto label_8000617C;
    case 0x80006180u: goto label_80006180;
    case 0x80006184u: goto label_80006184;
    case 0x80006188u: goto label_80006188;
    case 0x8000618Cu: goto label_8000618C;
    case 0x80006190u: goto label_80006190;
    case 0x80006194u: goto label_80006194;
    case 0x80006198u: goto label_80006198;
    case 0x8000619Cu: goto label_8000619C;
    case 0x800061A0u: goto label_800061A0;
    case 0x800061A4u: goto label_800061A4;
    case 0x800061A8u: goto label_800061A8;
    case 0x800061ACu: goto label_800061AC;
    case 0x800061B0u: goto label_800061B0;
    case 0x800061B4u: goto label_800061B4;
    case 0x800061B8u: goto label_800061B8;
    case 0x800061BCu: goto label_800061BC;
    case 0x800061C0u: goto label_800061C0;
    case 0x800061C4u: goto label_800061C4;
    case 0x800061C8u: goto label_800061C8;
    case 0x800061CCu: goto label_800061CC;
    case 0x800061D0u: goto label_800061D0;
    case 0x800061D4u: goto label_800061D4;
    case 0x800061D8u: goto label_800061D8;
    case 0x800061DCu: goto label_800061DC;
    case 0x800061E0u: goto label_800061E0;
    case 0x800061E4u: goto label_800061E4;
    case 0x800061E8u: goto label_800061E8;
    case 0x800061ECu: goto label_800061EC;
    case 0x800061F0u: goto label_800061F0;
    case 0x800061F4u: goto label_800061F4;
    case 0x800061F8u: goto label_800061F8;
    case 0x800061FCu: goto label_800061FC;
    case 0x80006200u: goto label_80006200;
    case 0x80006204u: goto label_80006204;
    case 0x80006208u: goto label_80006208;
    case 0x8000620Cu: goto label_8000620C;
    case 0x80006210u: goto label_80006210;
    case 0x80006214u: goto label_80006214;
    case 0x80006218u: goto label_80006218;
    case 0x8000621Cu: goto label_8000621C;
    case 0x80006220u: goto label_80006220;
    case 0x80006224u: goto label_80006224;
    case 0x80006228u: goto label_80006228;
    case 0x8000622Cu: goto label_8000622C;
    case 0x80006230u: goto label_80006230;
    case 0x80006234u: goto label_80006234;
    case 0x80006238u: goto label_80006238;
    case 0x8000623Cu: goto label_8000623C;
    case 0x80006240u: goto label_80006240;
    case 0x80006244u: goto label_80006244;
    case 0x80006248u: goto label_80006248;
    case 0x8000624Cu: goto label_8000624C;
    case 0x80006250u: goto label_80006250;
    case 0x80006254u: goto label_80006254;
    case 0x80006258u: goto label_80006258;
    case 0x8000625Cu: goto label_8000625C;
    case 0x80006260u: goto label_80006260;
    case 0x80006264u: goto label_80006264;
    case 0x80006268u: goto label_80006268;
    case 0x8000626Cu: goto label_8000626C;
    case 0x80006270u: goto label_80006270;
    case 0x80006274u: goto label_80006274;
    case 0x80006278u: goto label_80006278;
    case 0x8000627Cu: goto label_8000627C;
    case 0x80006280u: goto label_80006280;
    case 0x80006284u: goto label_80006284;
    case 0x80006288u: goto label_80006288;
    case 0x8000628Cu: goto label_8000628C;
    case 0x80006290u: goto label_80006290;
    case 0x80006294u: goto label_80006294;
    case 0x80006298u: goto label_80006298;
    case 0x8000629Cu: goto label_8000629C;
    case 0x800062A0u: goto label_800062A0;
    case 0x800062A4u: goto label_800062A4;
    case 0x800062A8u: goto label_800062A8;
    case 0x800062ACu: goto label_800062AC;
    case 0x800062B0u: goto label_800062B0;
    case 0x800062B4u: goto label_800062B4;
    case 0x800062B8u: goto label_800062B8;
    case 0x800062BCu: goto label_800062BC;
    case 0x800062C0u: goto label_800062C0;
    case 0x800062C4u: goto label_800062C4;
    case 0x800062C8u: goto label_800062C8;
    case 0x800062CCu: goto label_800062CC;
    case 0x800062D0u: goto label_800062D0;
    case 0x800062D4u: goto label_800062D4;
    case 0x800062D8u: goto label_800062D8;
    case 0x800062DCu: goto label_800062DC;
    case 0x800062E0u: goto label_800062E0;
    case 0x800062E4u: goto label_800062E4;
    case 0x800062E8u: goto label_800062E8;
    case 0x800062ECu: goto label_800062EC;
    case 0x800062F0u: goto label_800062F0;
    case 0x800062F4u: goto label_800062F4;
    case 0x800062F8u: goto label_800062F8;
    case 0x800062FCu: goto label_800062FC;
    case 0x80006300u: goto label_80006300;
    case 0x80006304u: goto label_80006304;
    case 0x80006308u: goto label_80006308;
    case 0x8000630Cu: goto label_8000630C;
    case 0x80006310u: goto label_80006310;
    case 0x80006314u: goto label_80006314;
    case 0x80006318u: goto label_80006318;
    case 0x8000631Cu: goto label_8000631C;
    case 0x80006320u: goto label_80006320;
    case 0x80006324u: goto label_80006324;
    case 0x80006328u: goto label_80006328;
    case 0x8000632Cu: goto label_8000632C;
    case 0x80006330u: goto label_80006330;
    case 0x80006334u: goto label_80006334;
    case 0x80006338u: goto label_80006338;
    case 0x8000633Cu: goto label_8000633C;
    case 0x80006340u: goto label_80006340;
    case 0x80006344u: goto label_80006344;
    case 0x80006348u: goto label_80006348;
    case 0x8000634Cu: goto label_8000634C;
    case 0x80006350u: goto label_80006350;
    case 0x80006354u: goto label_80006354;
    case 0x80006358u: goto label_80006358;
    case 0x8000635Cu: goto label_8000635C;
    case 0x80006360u: goto label_80006360;
    case 0x80006364u: goto label_80006364;
    case 0x80006368u: goto label_80006368;
    case 0x8000636Cu: goto label_8000636C;
    case 0x80006370u: goto label_80006370;
    case 0x80006374u: goto label_80006374;
    case 0x80006378u: goto label_80006378;
    case 0x8000637Cu: goto label_8000637C;
    case 0x80006380u: goto label_80006380;
    case 0x80006384u: goto label_80006384;
    case 0x80006388u: goto label_80006388;
    case 0x8000638Cu: goto label_8000638C;
    case 0x80006390u: goto label_80006390;
    case 0x80006394u: goto label_80006394;
    case 0x80006398u: goto label_80006398;
    case 0x8000639Cu: goto label_8000639C;
    case 0x800063A0u: goto label_800063A0;
    case 0x800063A4u: goto label_800063A4;
    case 0x800063A8u: goto label_800063A8;
    case 0x800063ACu: goto label_800063AC;
    case 0x800063B0u: goto label_800063B0;
    case 0x800063B4u: goto label_800063B4;
    case 0x800063B8u: goto label_800063B8;
    case 0x800063BCu: goto label_800063BC;
    case 0x800063C0u: goto label_800063C0;
    case 0x800063C4u: goto label_800063C4;
    case 0x800063C8u: goto label_800063C8;
    case 0x800063CCu: goto label_800063CC;
    case 0x800063D0u: goto label_800063D0;
    case 0x800063D4u: goto label_800063D4;
    case 0x800063D8u: goto label_800063D8;
    case 0x800063DCu: goto label_800063DC;
    case 0x800063E0u: goto label_800063E0;
    case 0x800063E4u: goto label_800063E4;
    case 0x800063E8u: goto label_800063E8;
    case 0x800063ECu: goto label_800063EC;
    case 0x800063F0u: goto label_800063F0;
    case 0x800063F4u: goto label_800063F4;
    case 0x800063F8u: goto label_800063F8;
    case 0x800063FCu: goto label_800063FC;
    case 0x80006400u: goto label_80006400;
    case 0x80006404u: goto label_80006404;
    case 0x80006408u: goto label_80006408;
    case 0x8000640Cu: goto label_8000640C;
    case 0x80006410u: goto label_80006410;
    case 0x80006414u: goto label_80006414;
    case 0x80006418u: goto label_80006418;
    case 0x8000641Cu: goto label_8000641C;
    case 0x80006420u: goto label_80006420;
    case 0x80006424u: goto label_80006424;
    case 0x80006428u: goto label_80006428;
    case 0x8000642Cu: goto label_8000642C;
    case 0x80006430u: goto label_80006430;
    case 0x80006434u: goto label_80006434;
    case 0x80006438u: goto label_80006438;
    case 0x8000643Cu: goto label_8000643C;
    case 0x80006440u: goto label_80006440;
    case 0x80006444u: goto label_80006444;
    case 0x80006448u: goto label_80006448;
    case 0x8000644Cu: goto label_8000644C;
    case 0x80006450u: goto label_80006450;
    case 0x80006454u: goto label_80006454;
    case 0x80006458u: goto label_80006458;
    case 0x8000645Cu: goto label_8000645C;
    case 0x80006460u: goto label_80006460;
    case 0x80006464u: goto label_80006464;
    case 0x80006468u: goto label_80006468;
    case 0x8000646Cu: goto label_8000646C;
    case 0x80006470u: goto label_80006470;
    case 0x80006474u: goto label_80006474;
    case 0x80006478u: goto label_80006478;
    case 0x8000647Cu: goto label_8000647C;
    case 0x80006480u: goto label_80006480;
    case 0x80006484u: goto label_80006484;
    case 0x80006488u: goto label_80006488;
    case 0x8000648Cu: goto label_8000648C;
    case 0x80006490u: goto label_80006490;
    case 0x80006494u: goto label_80006494;
    case 0x80006498u: goto label_80006498;
    case 0x8000649Cu: goto label_8000649C;
    case 0x800064A0u: goto label_800064A0;
    case 0x800064A4u: goto label_800064A4;
    case 0x800064A8u: goto label_800064A8;
    case 0x800064ACu: goto label_800064AC;
    case 0x800064B0u: goto label_800064B0;
    case 0x800064B4u: goto label_800064B4;
    case 0x800064B8u: goto label_800064B8;
    case 0x800064BCu: goto label_800064BC;
    case 0x800064C0u: goto label_800064C0;
    case 0x800064C4u: goto label_800064C4;
    case 0x800064C8u: goto label_800064C8;
    case 0x800064CCu: goto label_800064CC;
    case 0x800064D0u: goto label_800064D0;
    case 0x800064D4u: goto label_800064D4;
    case 0x800064D8u: goto label_800064D8;
    case 0x800064DCu: goto label_800064DC;
    case 0x800064E0u: goto label_800064E0;
    case 0x800064E4u: goto label_800064E4;
    case 0x800064E8u: goto label_800064E8;
    case 0x800064ECu: goto label_800064EC;
    case 0x800064F0u: goto label_800064F0;
    case 0x800064F4u: goto label_800064F4;
    case 0x800064F8u: goto label_800064F8;
    case 0x800064FCu: goto label_800064FC;
    case 0x80006500u: goto label_80006500;
    case 0x80006504u: goto label_80006504;
    case 0x80006508u: goto label_80006508;
    case 0x8000650Cu: goto label_8000650C;
    case 0x80006510u: goto label_80006510;
    case 0x80006514u: goto label_80006514;
    case 0x80006518u: goto label_80006518;
    case 0x8000651Cu: goto label_8000651C;
    case 0x80006520u: goto label_80006520;
    case 0x80006524u: goto label_80006524;
    case 0x80006528u: goto label_80006528;
    case 0x8000652Cu: goto label_8000652C;
    case 0x80006530u: goto label_80006530;
    case 0x80006534u: goto label_80006534;
    case 0x80006538u: goto label_80006538;
    case 0x8000653Cu: goto label_8000653C;
    case 0x80006540u: goto label_80006540;
    case 0x80006544u: goto label_80006544;
    case 0x80006548u: goto label_80006548;
    case 0x8000654Cu: goto label_8000654C;
    case 0x80006550u: goto label_80006550;
    case 0x80006554u: goto label_80006554;
    case 0x80006558u: goto label_80006558;
    case 0x8000655Cu: goto label_8000655C;
    case 0x80006560u: goto label_80006560;
    case 0x80006564u: goto label_80006564;
    case 0x80006568u: goto label_80006568;
    case 0x8000656Cu: goto label_8000656C;
    case 0x80006570u: goto label_80006570;
    case 0x80006574u: goto label_80006574;
    case 0x80006578u: goto label_80006578;
    case 0x8000657Cu: goto label_8000657C;
    case 0x80006580u: goto label_80006580;
    case 0x80006584u: goto label_80006584;
    case 0x80006588u: goto label_80006588;
    case 0x8000658Cu: goto label_8000658C;
    case 0x80006590u: goto label_80006590;
    case 0x80006594u: goto label_80006594;
    case 0x80006598u: goto label_80006598;
    case 0x8000659Cu: goto label_8000659C;
    case 0x800065A0u: goto label_800065A0;
    case 0x800065A4u: goto label_800065A4;
    case 0x800065A8u: goto label_800065A8;
    case 0x800065ACu: goto label_800065AC;
    case 0x800065B0u: goto label_800065B0;
    case 0x800065B4u: goto label_800065B4;
    case 0x800065B8u: goto label_800065B8;
    case 0x800065BCu: goto label_800065BC;
    case 0x800065C0u: goto label_800065C0;
    case 0x800065C4u: goto label_800065C4;
    case 0x800065C8u: goto label_800065C8;
    case 0x800065CCu: goto label_800065CC;
    case 0x800065D0u: goto label_800065D0;
    case 0x800065D4u: goto label_800065D4;
    case 0x800065D8u: goto label_800065D8;
    case 0x800065DCu: goto label_800065DC;
    case 0x800065E0u: goto label_800065E0;
    case 0x800065E4u: goto label_800065E4;
    case 0x800065E8u: goto label_800065E8;
    case 0x800065ECu: goto label_800065EC;
    case 0x800065F0u: goto label_800065F0;
    case 0x800065F4u: goto label_800065F4;
    case 0x800065F8u: goto label_800065F8;
    case 0x800065FCu: goto label_800065FC;
    case 0x80006600u: goto label_80006600;
    case 0x80006604u: goto label_80006604;
    case 0x80006608u: goto label_80006608;
    case 0x8000660Cu: goto label_8000660C;
    case 0x80006610u: goto label_80006610;
    case 0x80006614u: goto label_80006614;
    case 0x80006618u: goto label_80006618;
    case 0x8000661Cu: goto label_8000661C;
    case 0x80006620u: goto label_80006620;
    case 0x80006624u: goto label_80006624;
    case 0x80006628u: goto label_80006628;
    case 0x8000662Cu: goto label_8000662C;
    case 0x80006630u: goto label_80006630;
    case 0x80006634u: goto label_80006634;
    case 0x80006638u: goto label_80006638;
    case 0x8000663Cu: goto label_8000663C;
    case 0x80006640u: goto label_80006640;
    case 0x80006644u: goto label_80006644;
    case 0x80006648u: goto label_80006648;
    case 0x8000664Cu: goto label_8000664C;
    case 0x80006650u: goto label_80006650;
    case 0x80006654u: goto label_80006654;
    case 0x80006658u: goto label_80006658;
    case 0x8000665Cu: goto label_8000665C;
    case 0x80006660u: goto label_80006660;
    case 0x80006664u: goto label_80006664;
    case 0x80006668u: goto label_80006668;
    case 0x8000666Cu: goto label_8000666C;
    case 0x80006670u: goto label_80006670;
    case 0x80006674u: goto label_80006674;
    case 0x80006678u: goto label_80006678;
    case 0x8000667Cu: goto label_8000667C;
    case 0x80006680u: goto label_80006680;
    case 0x80006684u: goto label_80006684;
    case 0x80006688u: goto label_80006688;
    case 0x8000668Cu: goto label_8000668C;
    case 0x80006690u: goto label_80006690;
    case 0x80006694u: goto label_80006694;
    case 0x80006698u: goto label_80006698;
    case 0x8000669Cu: goto label_8000669C;
    case 0x800066A0u: goto label_800066A0;
    case 0x800066A4u: goto label_800066A4;
    case 0x800066A8u: goto label_800066A8;
    case 0x800066ACu: goto label_800066AC;
    case 0x800066B0u: goto label_800066B0;
    case 0x800066B4u: goto label_800066B4;
    case 0x800066B8u: goto label_800066B8;
    case 0x800066BCu: goto label_800066BC;
    case 0x800066C0u: goto label_800066C0;
    case 0x800066C4u: goto label_800066C4;
    case 0x800066C8u: goto label_800066C8;
    case 0x800066CCu: goto label_800066CC;
    case 0x800066D0u: goto label_800066D0;
    case 0x800066D4u: goto label_800066D4;
    case 0x800066D8u: goto label_800066D8;
    case 0x800066DCu: goto label_800066DC;
    case 0x800066E0u: goto label_800066E0;
    case 0x800066E4u: goto label_800066E4;
    case 0x800066E8u: goto label_800066E8;
    case 0x800066ECu: goto label_800066EC;
    case 0x800066F0u: goto label_800066F0;
    case 0x800066F4u: goto label_800066F4;
    case 0x800066F8u: goto label_800066F8;
    case 0x800066FCu: goto label_800066FC;
    case 0x80006700u: goto label_80006700;
    case 0x80006704u: goto label_80006704;
    case 0x80006708u: goto label_80006708;
    case 0x8000670Cu: goto label_8000670C;
    case 0x80006710u: goto label_80006710;
    case 0x80006714u: goto label_80006714;
    case 0x80006718u: goto label_80006718;
    case 0x8000671Cu: goto label_8000671C;
    case 0x80006720u: goto label_80006720;
    case 0x80006724u: goto label_80006724;
    case 0x80006728u: goto label_80006728;
    case 0x8000672Cu: goto label_8000672C;
    case 0x80006730u: goto label_80006730;
    case 0x80006734u: goto label_80006734;
    case 0x80006738u: goto label_80006738;
    case 0x8000673Cu: goto label_8000673C;
    case 0x80006740u: goto label_80006740;
    case 0x80006744u: goto label_80006744;
    case 0x80006748u: goto label_80006748;
    case 0x8000674Cu: goto label_8000674C;
    case 0x80006750u: goto label_80006750;
    case 0x80006754u: goto label_80006754;
    case 0x80006758u: goto label_80006758;
    case 0x8000675Cu: goto label_8000675C;
    case 0x80006760u: goto label_80006760;
    case 0x80006764u: goto label_80006764;
    case 0x80006768u: goto label_80006768;
    case 0x8000676Cu: goto label_8000676C;
    case 0x80006770u: goto label_80006770;
    case 0x80006774u: goto label_80006774;
    case 0x80006778u: goto label_80006778;
    case 0x8000677Cu: goto label_8000677C;
    case 0x80006780u: goto label_80006780;
    case 0x80006784u: goto label_80006784;
    case 0x80006788u: goto label_80006788;
    case 0x8000678Cu: goto label_8000678C;
    case 0x80006790u: goto label_80006790;
    case 0x80006794u: goto label_80006794;
    case 0x80006798u: goto label_80006798;
    case 0x8000679Cu: goto label_8000679C;
    case 0x800067A0u: goto label_800067A0;
    case 0x800067A4u: goto label_800067A4;
    case 0x800067A8u: goto label_800067A8;
    case 0x800067ACu: goto label_800067AC;
    case 0x800067B0u: goto label_800067B0;
    case 0x800067B4u: goto label_800067B4;
    case 0x800067B8u: goto label_800067B8;
    case 0x800067BCu: goto label_800067BC;
    case 0x800067C0u: goto label_800067C0;
    case 0x800067C4u: goto label_800067C4;
    case 0x800067C8u: goto label_800067C8;
    case 0x800067CCu: goto label_800067CC;
    case 0x800067D0u: goto label_800067D0;
    case 0x800067D4u: goto label_800067D4;
    case 0x800067D8u: goto label_800067D8;
    case 0x800067DCu: goto label_800067DC;
    case 0x800067E0u: goto label_800067E0;
    case 0x800067E4u: goto label_800067E4;
    case 0x800067E8u: goto label_800067E8;
    case 0x800067ECu: goto label_800067EC;
    case 0x800067F0u: goto label_800067F0;
    case 0x800067F4u: goto label_800067F4;
    case 0x800067F8u: goto label_800067F8;
    case 0x800067FCu: goto label_800067FC;
    case 0x80006800u: goto label_80006800;
    case 0x80006804u: goto label_80006804;
    case 0x80006808u: goto label_80006808;
    case 0x8000680Cu: goto label_8000680C;
    case 0x80006810u: goto label_80006810;
    case 0x80006814u: goto label_80006814;
    case 0x80006818u: goto label_80006818;
    case 0x8000681Cu: goto label_8000681C;
    case 0x80006820u: goto label_80006820;
    case 0x80006824u: goto label_80006824;
    case 0x80006828u: goto label_80006828;
    case 0x8000682Cu: goto label_8000682C;
    case 0x80006830u: goto label_80006830;
    case 0x80006834u: goto label_80006834;
    case 0x80006838u: goto label_80006838;
    case 0x8000683Cu: goto label_8000683C;
    case 0x80006840u: goto label_80006840;
    case 0x80006844u: goto label_80006844;
    case 0x80006848u: goto label_80006848;
    case 0x8000684Cu: goto label_8000684C;
    case 0x80006850u: goto label_80006850;
    case 0x80006854u: goto label_80006854;
    case 0x80006858u: goto label_80006858;
    case 0x8000685Cu: goto label_8000685C;
    case 0x80006860u: goto label_80006860;
    case 0x80006864u: goto label_80006864;
    case 0x80006868u: goto label_80006868;
    case 0x8000686Cu: goto label_8000686C;
    case 0x80006870u: goto label_80006870;
    case 0x80006874u: goto label_80006874;
    case 0x80006878u: goto label_80006878;
    case 0x8000687Cu: goto label_8000687C;
    case 0x80006880u: goto label_80006880;
    case 0x80006884u: goto label_80006884;
    case 0x80006888u: goto label_80006888;
    case 0x8000688Cu: goto label_8000688C;
    case 0x80006890u: goto label_80006890;
    case 0x80006894u: goto label_80006894;
    case 0x80006898u: goto label_80006898;
    case 0x8000689Cu: goto label_8000689C;
    case 0x800068A0u: goto label_800068A0;
    case 0x800068A4u: goto label_800068A4;
    case 0x800068A8u: goto label_800068A8;
    case 0x800068ACu: goto label_800068AC;
    case 0x800068B0u: goto label_800068B0;
    case 0x800068B4u: goto label_800068B4;
    case 0x800068B8u: goto label_800068B8;
    case 0x800068BCu: goto label_800068BC;
    case 0x800068C0u: goto label_800068C0;
    case 0x800068C4u: goto label_800068C4;
    case 0x800068C8u: goto label_800068C8;
    case 0x800068CCu: goto label_800068CC;
    case 0x800068D0u: goto label_800068D0;
    case 0x800068D4u: goto label_800068D4;
    case 0x800068D8u: goto label_800068D8;
    case 0x800068DCu: goto label_800068DC;
    case 0x800068E0u: goto label_800068E0;
    case 0x800068E4u: goto label_800068E4;
    case 0x800068E8u: goto label_800068E8;
    case 0x800068ECu: goto label_800068EC;
    case 0x800068F0u: goto label_800068F0;
    case 0x800068F4u: goto label_800068F4;
    case 0x800068F8u: goto label_800068F8;
    case 0x800068FCu: goto label_800068FC;
    case 0x80006900u: goto label_80006900;
    case 0x80006904u: goto label_80006904;
    case 0x80006908u: goto label_80006908;
    case 0x8000690Cu: goto label_8000690C;
    case 0x80006910u: goto label_80006910;
    case 0x80006914u: goto label_80006914;
    case 0x80006918u: goto label_80006918;
    case 0x8000691Cu: goto label_8000691C;
    case 0x80006920u: goto label_80006920;
    case 0x80006924u: goto label_80006924;
    case 0x80006928u: goto label_80006928;
    case 0x8000692Cu: goto label_8000692C;
    case 0x80006930u: goto label_80006930;
    case 0x80006934u: goto label_80006934;
    case 0x80006938u: goto label_80006938;
    case 0x8000693Cu: goto label_8000693C;
    case 0x80006940u: goto label_80006940;
    case 0x80006944u: goto label_80006944;
    case 0x80006948u: goto label_80006948;
    case 0x8000694Cu: goto label_8000694C;
    case 0x80006950u: goto label_80006950;
    case 0x80006954u: goto label_80006954;
    case 0x80006958u: goto label_80006958;
    case 0x8000695Cu: goto label_8000695C;
    case 0x80006960u: goto label_80006960;
    case 0x80006964u: goto label_80006964;
    case 0x80006968u: goto label_80006968;
    case 0x8000696Cu: goto label_8000696C;
    case 0x80006970u: goto label_80006970;
    case 0x80006974u: goto label_80006974;
    case 0x80006978u: goto label_80006978;
    case 0x8000697Cu: goto label_8000697C;
    case 0x80006980u: goto label_80006980;
    case 0x80006984u: goto label_80006984;
    case 0x80006988u: goto label_80006988;
    case 0x8000698Cu: goto label_8000698C;
    case 0x80006990u: goto label_80006990;
    case 0x80006994u: goto label_80006994;
    case 0x80006998u: goto label_80006998;
    case 0x8000699Cu: goto label_8000699C;
    case 0x800069A0u: goto label_800069A0;
    case 0x800069A4u: goto label_800069A4;
    case 0x800069A8u: goto label_800069A8;
    case 0x800069ACu: goto label_800069AC;
    case 0x800069B0u: goto label_800069B0;
    case 0x800069B4u: goto label_800069B4;
    case 0x800069B8u: goto label_800069B8;
    case 0x800069BCu: goto label_800069BC;
    case 0x800069C0u: goto label_800069C0;
    case 0x800069C4u: goto label_800069C4;
    case 0x800069C8u: goto label_800069C8;
    case 0x800069CCu: goto label_800069CC;
    case 0x800069D0u: goto label_800069D0;
    case 0x800069D4u: goto label_800069D4;
    case 0x800069D8u: goto label_800069D8;
    case 0x800069DCu: goto label_800069DC;
    case 0x800069E0u: goto label_800069E0;
    case 0x800069E4u: goto label_800069E4;
    case 0x800069E8u: goto label_800069E8;
    case 0x800069ECu: goto label_800069EC;
    case 0x800069F0u: goto label_800069F0;
    case 0x800069F4u: goto label_800069F4;
    case 0x800069F8u: goto label_800069F8;
    case 0x800069FCu: goto label_800069FC;
    case 0x80006A00u: goto label_80006A00;
    case 0x80006A04u: goto label_80006A04;
    case 0x80006A08u: goto label_80006A08;
    case 0x80006A0Cu: goto label_80006A0C;
    case 0x80006A10u: goto label_80006A10;
    case 0x80006A14u: goto label_80006A14;
    case 0x80006A18u: goto label_80006A18;
    case 0x80006A1Cu: goto label_80006A1C;
    case 0x80006A20u: goto label_80006A20;
    case 0x80006A24u: goto label_80006A24;
    case 0x80006A28u: goto label_80006A28;
    case 0x80006A2Cu: goto label_80006A2C;
    case 0x80006A30u: goto label_80006A30;
    case 0x80006A34u: goto label_80006A34;
    case 0x80006A38u: goto label_80006A38;
    case 0x80006A3Cu: goto label_80006A3C;
    case 0x80006A40u: goto label_80006A40;
    case 0x80006A44u: goto label_80006A44;
    case 0x80006A48u: goto label_80006A48;
    case 0x80006A4Cu: goto label_80006A4C;
    case 0x80006A50u: goto label_80006A50;
    case 0x80006A54u: goto label_80006A54;
    case 0x80006A58u: goto label_80006A58;
    case 0x80006A5Cu: goto label_80006A5C;
    case 0x80006A60u: goto label_80006A60;
    case 0x80006A64u: goto label_80006A64;
    case 0x80006A68u: goto label_80006A68;
    case 0x80006A6Cu: goto label_80006A6C;
    case 0x80006A70u: goto label_80006A70;
    case 0x80006A74u: goto label_80006A74;
    case 0x80006A78u: goto label_80006A78;
    case 0x80006A7Cu: goto label_80006A7C;
    case 0x80006A80u: goto label_80006A80;
    case 0x80006A84u: goto label_80006A84;
    case 0x80006A88u: goto label_80006A88;
    case 0x80006A8Cu: goto label_80006A8C;
    case 0x80006A90u: goto label_80006A90;
    case 0x80006A94u: goto label_80006A94;
    case 0x80006A98u: goto label_80006A98;
    case 0x80006A9Cu: goto label_80006A9C;
    case 0x80006AA0u: goto label_80006AA0;
    case 0x80006AA4u: goto label_80006AA4;
    case 0x80006AA8u: goto label_80006AA8;
    case 0x80006AACu: goto label_80006AAC;
    case 0x80006AB0u: goto label_80006AB0;
    case 0x80006AB4u: goto label_80006AB4;
    case 0x80006AB8u: goto label_80006AB8;
    case 0x80006ABCu: goto label_80006ABC;
    case 0x80006AC0u: goto label_80006AC0;
    case 0x80006AC4u: goto label_80006AC4;
    case 0x80006AC8u: goto label_80006AC8;
    case 0x80006ACCu: goto label_80006ACC;
    case 0x80006AD0u: goto label_80006AD0;
    case 0x80006AD4u: goto label_80006AD4;
    case 0x80006AD8u: goto label_80006AD8;
    case 0x80006ADCu: goto label_80006ADC;
    case 0x80006AE0u: goto label_80006AE0;
    case 0x80006AE4u: goto label_80006AE4;
    case 0x80006AE8u: goto label_80006AE8;
    case 0x80006AECu: goto label_80006AEC;
    case 0x80006AF0u: goto label_80006AF0;
    case 0x80006AF4u: goto label_80006AF4;
    case 0x80006AF8u: goto label_80006AF8;
    case 0x80006AFCu: goto label_80006AFC;
    case 0x80006B00u: goto label_80006B00;
    case 0x80006B04u: goto label_80006B04;
    case 0x80006B08u: goto label_80006B08;
    case 0x80006B0Cu: goto label_80006B0C;
    case 0x80006B10u: goto label_80006B10;
    case 0x80006B14u: goto label_80006B14;
    case 0x80006B18u: goto label_80006B18;
    case 0x80006B1Cu: goto label_80006B1C;
    case 0x80006B20u: goto label_80006B20;
    case 0x80006B24u: goto label_80006B24;
    case 0x80006B28u: goto label_80006B28;
    case 0x80006B2Cu: goto label_80006B2C;
    case 0x80006B30u: goto label_80006B30;
    case 0x80006B34u: goto label_80006B34;
    case 0x80006B38u: goto label_80006B38;
    case 0x80006B3Cu: goto label_80006B3C;
    case 0x80006B40u: goto label_80006B40;
    case 0x80006B44u: goto label_80006B44;
    case 0x80006B48u: goto label_80006B48;
    case 0x80006B4Cu: goto label_80006B4C;
    case 0x80006B50u: goto label_80006B50;
    case 0x80006B54u: goto label_80006B54;
    case 0x80006B58u: goto label_80006B58;
    case 0x80006B5Cu: goto label_80006B5C;
    case 0x80006B60u: goto label_80006B60;
    case 0x80006B64u: goto label_80006B64;
    case 0x80006B68u: goto label_80006B68;
    case 0x80006B6Cu: goto label_80006B6C;
    case 0x80006B70u: goto label_80006B70;
    case 0x80006B74u: goto label_80006B74;
    case 0x80006B78u: goto label_80006B78;
    case 0x80006B7Cu: goto label_80006B7C;
    case 0x80006B80u: goto label_80006B80;
    case 0x80006B84u: goto label_80006B84;
    case 0x80006B88u: goto label_80006B88;
    case 0x80006B8Cu: goto label_80006B8C;
    case 0x80006B90u: goto label_80006B90;
    case 0x80006B94u: goto label_80006B94;
    case 0x80006B98u: goto label_80006B98;
    case 0x80006B9Cu: goto label_80006B9C;
    case 0x80006BA0u: goto label_80006BA0;
    case 0x80006BA4u: goto label_80006BA4;
    case 0x80006BA8u: goto label_80006BA8;
    case 0x80006BACu: goto label_80006BAC;
    case 0x80006BB0u: goto label_80006BB0;
    case 0x80006BB4u: goto label_80006BB4;
    case 0x80006BB8u: goto label_80006BB8;
    case 0x80006BBCu: goto label_80006BBC;
    case 0x80006BC0u: goto label_80006BC0;
    case 0x80006BC4u: goto label_80006BC4;
    case 0x80006BC8u: goto label_80006BC8;
    case 0x80006BCCu: goto label_80006BCC;
    case 0x80006BD0u: goto label_80006BD0;
    case 0x80006BD4u: goto label_80006BD4;
    case 0x80006BD8u: goto label_80006BD8;
    case 0x80006BDCu: goto label_80006BDC;
    case 0x80006BE0u: goto label_80006BE0;
    case 0x80006BE4u: goto label_80006BE4;
    case 0x80006BE8u: goto label_80006BE8;
    case 0x80006BECu: goto label_80006BEC;
    case 0x80006BF0u: goto label_80006BF0;
    case 0x80006BF4u: goto label_80006BF4;
    case 0x80006BF8u: goto label_80006BF8;
    case 0x80006BFCu: goto label_80006BFC;
    case 0x80006C00u: goto label_80006C00;
    case 0x80006C04u: goto label_80006C04;
    case 0x80006C08u: goto label_80006C08;
    case 0x80006C0Cu: goto label_80006C0C;
    case 0x80006C10u: goto label_80006C10;
    case 0x80006C14u: goto label_80006C14;
    case 0x80006C18u: goto label_80006C18;
    case 0x80006C1Cu: goto label_80006C1C;
    case 0x80006C20u: goto label_80006C20;
    case 0x80006C24u: goto label_80006C24;
    case 0x80006C28u: goto label_80006C28;
    case 0x80006C2Cu: goto label_80006C2C;
    case 0x80006C30u: goto label_80006C30;
    case 0x80006C34u: goto label_80006C34;
    case 0x80006C38u: goto label_80006C38;
    case 0x80006C3Cu: goto label_80006C3C;
    case 0x80006C40u: goto label_80006C40;
    case 0x80006C44u: goto label_80006C44;
    case 0x80006C48u: goto label_80006C48;
    case 0x80006C4Cu: goto label_80006C4C;
    case 0x80006C50u: goto label_80006C50;
    case 0x80006C54u: goto label_80006C54;
    case 0x80006C58u: goto label_80006C58;
    case 0x80006C5Cu: goto label_80006C5C;
    case 0x80006C60u: goto label_80006C60;
    case 0x80006C64u: goto label_80006C64;
    case 0x80006C68u: goto label_80006C68;
    case 0x80006C6Cu: goto label_80006C6C;
    case 0x80006C70u: goto label_80006C70;
    case 0x80006C74u: goto label_80006C74;
    case 0x80006C78u: goto label_80006C78;
    case 0x80006C7Cu: goto label_80006C7C;
    case 0x80006C80u: goto label_80006C80;
    case 0x80006C84u: goto label_80006C84;
    case 0x80006C88u: goto label_80006C88;
    case 0x80006C8Cu: goto label_80006C8C;
    case 0x80006C90u: goto label_80006C90;
    case 0x80006C94u: goto label_80006C94;
    case 0x80006C98u: goto label_80006C98;
    case 0x80006C9Cu: goto label_80006C9C;
    case 0x80006CA0u: goto label_80006CA0;
    case 0x80006CA4u: goto label_80006CA4;
    case 0x80006CA8u: goto label_80006CA8;
    case 0x80006CACu: goto label_80006CAC;
    case 0x80006CB0u: goto label_80006CB0;
    case 0x80006CB4u: goto label_80006CB4;
    case 0x80006CB8u: goto label_80006CB8;
    case 0x80006CBCu: goto label_80006CBC;
    case 0x80006CC0u: goto label_80006CC0;
    case 0x80006CC4u: goto label_80006CC4;
    case 0x80006CC8u: goto label_80006CC8;
    case 0x80006CCCu: goto label_80006CCC;
    case 0x80006CD0u: goto label_80006CD0;
    case 0x80006CD4u: goto label_80006CD4;
    case 0x80006CD8u: goto label_80006CD8;
    case 0x80006CDCu: goto label_80006CDC;
    case 0x80006CE0u: goto label_80006CE0;
    case 0x80006CE4u: goto label_80006CE4;
    case 0x80006CE8u: goto label_80006CE8;
    case 0x80006CECu: goto label_80006CEC;
    case 0x80006CF0u: goto label_80006CF0;
    case 0x80006CF4u: goto label_80006CF4;
    case 0x80006CF8u: goto label_80006CF8;
    case 0x80006CFCu: goto label_80006CFC;
    case 0x80006D00u: goto label_80006D00;
    case 0x80006D04u: goto label_80006D04;
    case 0x80006D08u: goto label_80006D08;
    case 0x80006D0Cu: goto label_80006D0C;
    case 0x80006D10u: goto label_80006D10;
    case 0x80006D14u: goto label_80006D14;
    case 0x80006D18u: goto label_80006D18;
    case 0x80006D1Cu: goto label_80006D1C;
    case 0x80006D20u: goto label_80006D20;
    case 0x80006D24u: goto label_80006D24;
    case 0x80006D28u: goto label_80006D28;
    case 0x80006D2Cu: goto label_80006D2C;
    case 0x80006D30u: goto label_80006D30;
    case 0x80006D34u: goto label_80006D34;
    case 0x80006D38u: goto label_80006D38;
    case 0x80006D3Cu: goto label_80006D3C;
    case 0x80006D40u: goto label_80006D40;
    case 0x80006D44u: goto label_80006D44;
    case 0x80006D48u: goto label_80006D48;
    case 0x80006D4Cu: goto label_80006D4C;
    case 0x80006D50u: goto label_80006D50;
    case 0x80006D54u: goto label_80006D54;
    case 0x80006D58u: goto label_80006D58;
    case 0x80006D5Cu: goto label_80006D5C;
    case 0x80006D60u: goto label_80006D60;
    case 0x80006D64u: goto label_80006D64;
    case 0x80006D68u: goto label_80006D68;
    case 0x80006D6Cu: goto label_80006D6C;
    case 0x80006D70u: goto label_80006D70;
    case 0x80006D74u: goto label_80006D74;
    case 0x80006D78u: goto label_80006D78;
    case 0x80006D7Cu: goto label_80006D7C;
    case 0x80006D80u: goto label_80006D80;
    case 0x80006D84u: goto label_80006D84;
    case 0x80006D88u: goto label_80006D88;
    case 0x80006D8Cu: goto label_80006D8C;
    case 0x80006D90u: goto label_80006D90;
    case 0x80006D94u: goto label_80006D94;
    case 0x80006D98u: goto label_80006D98;
    case 0x80006D9Cu: goto label_80006D9C;
    case 0x80006DA0u: goto label_80006DA0;
    case 0x80006DA4u: goto label_80006DA4;
    case 0x80006DA8u: goto label_80006DA8;
    case 0x80006DACu: goto label_80006DAC;
    case 0x80006DB0u: goto label_80006DB0;
    case 0x80006DB4u: goto label_80006DB4;
    case 0x80006DB8u: goto label_80006DB8;
    case 0x80006DBCu: goto label_80006DBC;
    case 0x80006DC0u: goto label_80006DC0;
    case 0x80006DC4u: goto label_80006DC4;
    case 0x80006DC8u: goto label_80006DC8;
    case 0x80006DCCu: goto label_80006DCC;
    case 0x80006DD0u: goto label_80006DD0;
    case 0x80006DD4u: goto label_80006DD4;
    case 0x80006DD8u: goto label_80006DD8;
    case 0x80006DDCu: goto label_80006DDC;
    case 0x80006DE0u: goto label_80006DE0;
    case 0x80006DE4u: goto label_80006DE4;
    case 0x80006DE8u: goto label_80006DE8;
    case 0x80006DECu: goto label_80006DEC;
    case 0x80006DF0u: goto label_80006DF0;
    case 0x80006DF4u: goto label_80006DF4;
    case 0x80006DF8u: goto label_80006DF8;
    case 0x80006DFCu: goto label_80006DFC;
    case 0x80006E00u: goto label_80006E00;
    case 0x80006E04u: goto label_80006E04;
    case 0x80006E08u: goto label_80006E08;
    case 0x80006E0Cu: goto label_80006E0C;
    case 0x80006E10u: goto label_80006E10;
    case 0x80006E14u: goto label_80006E14;
    case 0x80006E18u: goto label_80006E18;
    case 0x80006E1Cu: goto label_80006E1C;
    case 0x80006E20u: goto label_80006E20;
    case 0x80006E24u: goto label_80006E24;
    case 0x80006E28u: goto label_80006E28;
    case 0x80006E2Cu: goto label_80006E2C;
    case 0x80006E30u: goto label_80006E30;
    case 0x80006E34u: goto label_80006E34;
    case 0x80006E38u: goto label_80006E38;
    case 0x80006E3Cu: goto label_80006E3C;
    case 0x80006E40u: goto label_80006E40;
    case 0x80006E44u: goto label_80006E44;
    case 0x80006E48u: goto label_80006E48;
    case 0x80006E4Cu: goto label_80006E4C;
    case 0x80006E50u: goto label_80006E50;
    case 0x80006E54u: goto label_80006E54;
    case 0x80006E58u: goto label_80006E58;
    case 0x80006E5Cu: goto label_80006E5C;
    case 0x80006E60u: goto label_80006E60;
    case 0x80006E64u: goto label_80006E64;
    case 0x80006E68u: goto label_80006E68;
    case 0x80006E6Cu: goto label_80006E6C;
    case 0x80006E70u: goto label_80006E70;
    case 0x80006E74u: goto label_80006E74;
    case 0x80006E78u: goto label_80006E78;
    case 0x80006E7Cu: goto label_80006E7C;
    case 0x80006E80u: goto label_80006E80;
    case 0x80006E84u: goto label_80006E84;
    case 0x80006E88u: goto label_80006E88;
    case 0x80006E8Cu: goto label_80006E8C;
    case 0x80006E90u: goto label_80006E90;
    case 0x80006E94u: goto label_80006E94;
    case 0x80006E98u: goto label_80006E98;
    case 0x80006E9Cu: goto label_80006E9C;
    case 0x80006EA0u: goto label_80006EA0;
    case 0x80006EA4u: goto label_80006EA4;
    case 0x80006EA8u: goto label_80006EA8;
    case 0x80006EACu: goto label_80006EAC;
    case 0x80006EB0u: goto label_80006EB0;
    case 0x80006EB4u: goto label_80006EB4;
    case 0x80006EB8u: goto label_80006EB8;
    case 0x80006EBCu: goto label_80006EBC;
    case 0x80006EC0u: goto label_80006EC0;
    case 0x80006EC4u: goto label_80006EC4;
    case 0x80006EC8u: goto label_80006EC8;
    case 0x80006ECCu: goto label_80006ECC;
    case 0x80006ED0u: goto label_80006ED0;
    case 0x80006ED4u: goto label_80006ED4;
    case 0x80006ED8u: goto label_80006ED8;
    case 0x80006EDCu: goto label_80006EDC;
    case 0x80006EE0u: goto label_80006EE0;
    case 0x80006EE4u: goto label_80006EE4;
    case 0x80006EE8u: goto label_80006EE8;
    case 0x80006EECu: goto label_80006EEC;
    case 0x80006EF0u: goto label_80006EF0;
    case 0x80006EF4u: goto label_80006EF4;
    case 0x80006EF8u: goto label_80006EF8;
    case 0x80006EFCu: goto label_80006EFC;
    case 0x80006F00u: goto label_80006F00;
    case 0x80006F04u: goto label_80006F04;
    case 0x80006F08u: goto label_80006F08;
    case 0x80006F0Cu: goto label_80006F0C;
    case 0x80006F10u: goto label_80006F10;
    case 0x80006F14u: goto label_80006F14;
    case 0x80006F18u: goto label_80006F18;
    case 0x80006F1Cu: goto label_80006F1C;
    case 0x80006F20u: goto label_80006F20;
    case 0x80006F24u: goto label_80006F24;
    case 0x80006F28u: goto label_80006F28;
    case 0x80006F2Cu: goto label_80006F2C;
    case 0x80006F30u: goto label_80006F30;
    case 0x80006F34u: goto label_80006F34;
    case 0x80006F38u: goto label_80006F38;
    case 0x80006F3Cu: goto label_80006F3C;
    case 0x80006F40u: goto label_80006F40;
    case 0x80006F44u: goto label_80006F44;
    case 0x80006F48u: goto label_80006F48;
    case 0x80006F4Cu: goto label_80006F4C;
    case 0x80006F50u: goto label_80006F50;
    case 0x80006F54u: goto label_80006F54;
    case 0x80006F58u: goto label_80006F58;
    case 0x80006F5Cu: goto label_80006F5C;
    case 0x80006F60u: goto label_80006F60;
    case 0x80006F64u: goto label_80006F64;
    case 0x80006F68u: goto label_80006F68;
    case 0x80006F6Cu: goto label_80006F6C;
    case 0x80006F70u: goto label_80006F70;
    case 0x80006F74u: goto label_80006F74;
    case 0x80006F78u: goto label_80006F78;
    case 0x80006F7Cu: goto label_80006F7C;
    case 0x80006F80u: goto label_80006F80;
    case 0x80006F84u: goto label_80006F84;
    case 0x80006F88u: goto label_80006F88;
    case 0x80006F8Cu: goto label_80006F8C;
    case 0x80006F90u: goto label_80006F90;
    case 0x80006F94u: goto label_80006F94;
    case 0x80006F98u: goto label_80006F98;
    case 0x80006F9Cu: goto label_80006F9C;
    case 0x80006FA0u: goto label_80006FA0;
    case 0x80006FA4u: goto label_80006FA4;
    case 0x80006FA8u: goto label_80006FA8;
    case 0x80006FACu: goto label_80006FAC;
    case 0x80006FB0u: goto label_80006FB0;
    case 0x80006FB4u: goto label_80006FB4;
    case 0x80006FB8u: goto label_80006FB8;
    case 0x80006FBCu: goto label_80006FBC;
    case 0x80006FC0u: goto label_80006FC0;
    case 0x80006FC4u: goto label_80006FC4;
    case 0x80006FC8u: goto label_80006FC8;
    case 0x80006FCCu: goto label_80006FCC;
    case 0x80006FD0u: goto label_80006FD0;
    case 0x80006FD4u: goto label_80006FD4;
    case 0x80006FD8u: goto label_80006FD8;
    case 0x80006FDCu: goto label_80006FDC;
    case 0x80006FE0u: goto label_80006FE0;
    case 0x80006FE4u: goto label_80006FE4;
    case 0x80006FE8u: goto label_80006FE8;
    case 0x80006FECu: goto label_80006FEC;
    case 0x80006FF0u: goto label_80006FF0;
    case 0x80006FF4u: goto label_80006FF4;
    case 0x80006FF8u: goto label_80006FF8;
    case 0x80006FFCu: goto label_80006FFC;
    case 0x80007000u: goto label_80007000;
    case 0x80007004u: goto label_80007004;
    case 0x80007008u: goto label_80007008;
    case 0x8000700Cu: goto label_8000700C;
    case 0x80007010u: goto label_80007010;
    case 0x80007014u: goto label_80007014;
    case 0x80007018u: goto label_80007018;
    case 0x8000701Cu: goto label_8000701C;
    case 0x80007020u: goto label_80007020;
    case 0x80007024u: goto label_80007024;
    case 0x80007028u: goto label_80007028;
    case 0x8000702Cu: goto label_8000702C;
    case 0x80007030u: goto label_80007030;
    case 0x80007034u: goto label_80007034;
    case 0x80007038u: goto label_80007038;
    case 0x8000703Cu: goto label_8000703C;
    case 0x80007040u: goto label_80007040;
    case 0x80007044u: goto label_80007044;
    case 0x80007048u: goto label_80007048;
    case 0x8000704Cu: goto label_8000704C;
    case 0x80007050u: goto label_80007050;
    case 0x80007054u: goto label_80007054;
    case 0x80007058u: goto label_80007058;
    case 0x8000705Cu: goto label_8000705C;
    case 0x80007060u: goto label_80007060;
    case 0x80007064u: goto label_80007064;
    case 0x80007068u: goto label_80007068;
    case 0x8000706Cu: goto label_8000706C;
    case 0x80007070u: goto label_80007070;
    case 0x80007074u: goto label_80007074;
    case 0x80007078u: goto label_80007078;
    case 0x8000707Cu: goto label_8000707C;
    case 0x80007080u: goto label_80007080;
    case 0x80007084u: goto label_80007084;
    case 0x80007088u: goto label_80007088;
    case 0x8000708Cu: goto label_8000708C;
    case 0x80007090u: goto label_80007090;
    case 0x80007094u: goto label_80007094;
    case 0x80007098u: goto label_80007098;
    case 0x8000709Cu: goto label_8000709C;
    case 0x800070A0u: goto label_800070A0;
    case 0x800070A4u: goto label_800070A4;
    case 0x800070A8u: goto label_800070A8;
    case 0x800070ACu: goto label_800070AC;
    case 0x800070B0u: goto label_800070B0;
    case 0x800070B4u: goto label_800070B4;
    case 0x800070B8u: goto label_800070B8;
    case 0x800070BCu: goto label_800070BC;
    case 0x800070C0u: goto label_800070C0;
    case 0x800070C4u: goto label_800070C4;
    case 0x800070C8u: goto label_800070C8;
    case 0x800070CCu: goto label_800070CC;
    case 0x800070D0u: goto label_800070D0;
    case 0x800070D4u: goto label_800070D4;
    case 0x800070D8u: goto label_800070D8;
    case 0x800070DCu: goto label_800070DC;
    case 0x800070E0u: goto label_800070E0;
    case 0x800070E4u: goto label_800070E4;
    case 0x800070E8u: goto label_800070E8;
    case 0x800070ECu: goto label_800070EC;
    case 0x800070F0u: goto label_800070F0;
    case 0x800070F4u: goto label_800070F4;
    case 0x800070F8u: goto label_800070F8;
    case 0x800070FCu: goto label_800070FC;
    case 0x80007100u: goto label_80007100;
    case 0x80007104u: goto label_80007104;
    case 0x80007108u: goto label_80007108;
    case 0x8000710Cu: goto label_8000710C;
    case 0x80007110u: goto label_80007110;
    case 0x80007114u: goto label_80007114;
    case 0x80007118u: goto label_80007118;
    case 0x8000711Cu: goto label_8000711C;
    case 0x80007120u: goto label_80007120;
    case 0x80007124u: goto label_80007124;
    case 0x80007128u: goto label_80007128;
    case 0x8000712Cu: goto label_8000712C;
    case 0x80007130u: goto label_80007130;
    case 0x80007134u: goto label_80007134;
    case 0x80007138u: goto label_80007138;
    case 0x8000713Cu: goto label_8000713C;
    case 0x80007140u: goto label_80007140;
    case 0x80007144u: goto label_80007144;
    case 0x80007148u: goto label_80007148;
    case 0x8000714Cu: goto label_8000714C;
    case 0x80007150u: goto label_80007150;
    case 0x80007154u: goto label_80007154;
    case 0x80007158u: goto label_80007158;
    case 0x8000715Cu: goto label_8000715C;
    case 0x80007160u: goto label_80007160;
    case 0x80007164u: goto label_80007164;
    case 0x80007168u: goto label_80007168;
    case 0x8000716Cu: goto label_8000716C;
    case 0x80007170u: goto label_80007170;
    case 0x80007174u: goto label_80007174;
    case 0x80007178u: goto label_80007178;
    case 0x8000717Cu: goto label_8000717C;
    case 0x80007180u: goto label_80007180;
    case 0x80007184u: goto label_80007184;
    case 0x80007188u: goto label_80007188;
    case 0x8000718Cu: goto label_8000718C;
    case 0x80007190u: goto label_80007190;
    case 0x80007194u: goto label_80007194;
    case 0x80007198u: goto label_80007198;
    case 0x8000719Cu: goto label_8000719C;
    case 0x800071A0u: goto label_800071A0;
    case 0x800071A4u: goto label_800071A4;
    case 0x800071A8u: goto label_800071A8;
    case 0x800071ACu: goto label_800071AC;
    case 0x800071B0u: goto label_800071B0;
    case 0x800071B4u: goto label_800071B4;
    case 0x800071B8u: goto label_800071B8;
    case 0x800071BCu: goto label_800071BC;
    case 0x800071C0u: goto label_800071C0;
    case 0x800071C4u: goto label_800071C4;
    case 0x800071C8u: goto label_800071C8;
    case 0x800071CCu: goto label_800071CC;
    case 0x800071D0u: goto label_800071D0;
    case 0x800071D4u: goto label_800071D4;
    case 0x800071D8u: goto label_800071D8;
    case 0x800071DCu: goto label_800071DC;
    case 0x800071E0u: goto label_800071E0;
    case 0x800071E4u: goto label_800071E4;
    case 0x800071E8u: goto label_800071E8;
    case 0x800071ECu: goto label_800071EC;
    case 0x800071F0u: goto label_800071F0;
    case 0x800071F4u: goto label_800071F4;
    case 0x800071F8u: goto label_800071F8;
    case 0x800071FCu: goto label_800071FC;
    case 0x80007200u: goto label_80007200;
    case 0x80007204u: goto label_80007204;
    case 0x80007208u: goto label_80007208;
    case 0x8000720Cu: goto label_8000720C;
    case 0x80007210u: goto label_80007210;
    case 0x80007214u: goto label_80007214;
    case 0x80007218u: goto label_80007218;
    case 0x8000721Cu: goto label_8000721C;
    case 0x80007220u: goto label_80007220;
    case 0x80007224u: goto label_80007224;
    case 0x80007228u: goto label_80007228;
    case 0x8000722Cu: goto label_8000722C;
    case 0x80007230u: goto label_80007230;
    case 0x80007234u: goto label_80007234;
    case 0x80007238u: goto label_80007238;
    case 0x8000723Cu: goto label_8000723C;
    case 0x80007240u: goto label_80007240;
    case 0x80007244u: goto label_80007244;
    case 0x80007248u: goto label_80007248;
    case 0x8000724Cu: goto label_8000724C;
    case 0x80007250u: goto label_80007250;
    case 0x80007254u: goto label_80007254;
    case 0x80007258u: goto label_80007258;
    case 0x8000725Cu: goto label_8000725C;
    case 0x80007260u: goto label_80007260;
    case 0x80007264u: goto label_80007264;
    case 0x80007268u: goto label_80007268;
    case 0x8000726Cu: goto label_8000726C;
    case 0x80007270u: goto label_80007270;
    case 0x80007274u: goto label_80007274;
    case 0x80007278u: goto label_80007278;
    case 0x8000727Cu: goto label_8000727C;
    case 0x80007280u: goto label_80007280;
    case 0x80007284u: goto label_80007284;
    case 0x80007288u: goto label_80007288;
    case 0x8000728Cu: goto label_8000728C;
    case 0x80007290u: goto label_80007290;
    case 0x80007294u: goto label_80007294;
    case 0x80007298u: goto label_80007298;
    case 0x8000729Cu: goto label_8000729C;
    case 0x800072A0u: goto label_800072A0;
    case 0x800072A4u: goto label_800072A4;
    case 0x800072A8u: goto label_800072A8;
    case 0x800072ACu: goto label_800072AC;
    case 0x800072B0u: goto label_800072B0;
    case 0x800072B4u: goto label_800072B4;
    case 0x800072B8u: goto label_800072B8;
    case 0x800072BCu: goto label_800072BC;
    case 0x800072C0u: goto label_800072C0;
    case 0x800072C4u: goto label_800072C4;
    case 0x800072C8u: goto label_800072C8;
    case 0x800072CCu: goto label_800072CC;
    case 0x800072D0u: goto label_800072D0;
    case 0x800072D4u: goto label_800072D4;
    case 0x800072D8u: goto label_800072D8;
    case 0x800072DCu: goto label_800072DC;
    case 0x800072E0u: goto label_800072E0;
    case 0x800072E4u: goto label_800072E4;
    case 0x800072E8u: goto label_800072E8;
    case 0x800072ECu: goto label_800072EC;
    case 0x800072F0u: goto label_800072F0;
    case 0x800072F4u: goto label_800072F4;
    case 0x800072F8u: goto label_800072F8;
    case 0x800072FCu: goto label_800072FC;
    case 0x80007300u: goto label_80007300;
    case 0x80007304u: goto label_80007304;
    case 0x80007308u: goto label_80007308;
    case 0x8000730Cu: goto label_8000730C;
    case 0x80007310u: goto label_80007310;
    case 0x80007314u: goto label_80007314;
    case 0x80007318u: goto label_80007318;
    case 0x8000731Cu: goto label_8000731C;
    case 0x80007320u: goto label_80007320;
    case 0x80007324u: goto label_80007324;
    case 0x80007328u: goto label_80007328;
    case 0x8000732Cu: goto label_8000732C;
    case 0x80007330u: goto label_80007330;
    case 0x80007334u: goto label_80007334;
    case 0x80007338u: goto label_80007338;
    case 0x8000733Cu: goto label_8000733C;
    case 0x80007340u: goto label_80007340;
    case 0x80007344u: goto label_80007344;
    case 0x80007348u: goto label_80007348;
    case 0x8000734Cu: goto label_8000734C;
    case 0x80007350u: goto label_80007350;
    case 0x80007354u: goto label_80007354;
    case 0x80007358u: goto label_80007358;
    case 0x8000735Cu: goto label_8000735C;
    case 0x80007360u: goto label_80007360;
    case 0x80007364u: goto label_80007364;
    case 0x80007368u: goto label_80007368;
    case 0x8000736Cu: goto label_8000736C;
    case 0x80007370u: goto label_80007370;
    case 0x80007374u: goto label_80007374;
    case 0x80007378u: goto label_80007378;
    case 0x8000737Cu: goto label_8000737C;
    case 0x80007380u: goto label_80007380;
    case 0x80007384u: goto label_80007384;
    case 0x80007388u: goto label_80007388;
    case 0x8000738Cu: goto label_8000738C;
    case 0x80007390u: goto label_80007390;
    case 0x80007394u: goto label_80007394;
    case 0x80007398u: goto label_80007398;
    case 0x8000739Cu: goto label_8000739C;
    case 0x800073A0u: goto label_800073A0;
    case 0x800073A4u: goto label_800073A4;
    case 0x800073A8u: goto label_800073A8;
    case 0x800073ACu: goto label_800073AC;
    case 0x800073B0u: goto label_800073B0;
    case 0x800073B4u: goto label_800073B4;
    case 0x800073B8u: goto label_800073B8;
    case 0x800073BCu: goto label_800073BC;
    case 0x800073C0u: goto label_800073C0;
    case 0x800073C4u: goto label_800073C4;
    case 0x800073C8u: goto label_800073C8;
    case 0x800073CCu: goto label_800073CC;
    case 0x800073D0u: goto label_800073D0;
    case 0x800073D4u: goto label_800073D4;
    case 0x800073D8u: goto label_800073D8;
    case 0x800073DCu: goto label_800073DC;
    case 0x800073E0u: goto label_800073E0;
    case 0x800073E4u: goto label_800073E4;
    case 0x800073E8u: goto label_800073E8;
    case 0x800073ECu: goto label_800073EC;
    case 0x800073F0u: goto label_800073F0;
    case 0x800073F4u: goto label_800073F4;
    case 0x800073F8u: goto label_800073F8;
    case 0x800073FCu: goto label_800073FC;
    case 0x80007400u: goto label_80007400;
    case 0x80007404u: goto label_80007404;
    case 0x80007408u: goto label_80007408;
    case 0x8000740Cu: goto label_8000740C;
    case 0x80007410u: goto label_80007410;
    case 0x80007414u: goto label_80007414;
    case 0x80007418u: goto label_80007418;
    case 0x8000741Cu: goto label_8000741C;
    case 0x80007420u: goto label_80007420;
    case 0x80007424u: goto label_80007424;
    case 0x80007428u: goto label_80007428;
    case 0x8000742Cu: goto label_8000742C;
    case 0x80007430u: goto label_80007430;
    case 0x80007434u: goto label_80007434;
    case 0x80007438u: goto label_80007438;
    case 0x8000743Cu: goto label_8000743C;
    case 0x80007440u: goto label_80007440;
    case 0x80007444u: goto label_80007444;
    case 0x80007448u: goto label_80007448;
    case 0x8000744Cu: goto label_8000744C;
    case 0x80007450u: goto label_80007450;
    case 0x80007454u: goto label_80007454;
    case 0x80007458u: goto label_80007458;
    case 0x8000745Cu: goto label_8000745C;
    case 0x80007460u: goto label_80007460;
    case 0x80007464u: goto label_80007464;
    case 0x80007468u: goto label_80007468;
    case 0x8000746Cu: goto label_8000746C;
    case 0x80007470u: goto label_80007470;
    case 0x80007474u: goto label_80007474;
    case 0x80007478u: goto label_80007478;
    case 0x8000747Cu: goto label_8000747C;
    case 0x80007480u: goto label_80007480;
    case 0x80007484u: goto label_80007484;
    case 0x80007488u: goto label_80007488;
    case 0x8000748Cu: goto label_8000748C;
    case 0x80007490u: goto label_80007490;
    case 0x80007494u: goto label_80007494;
    case 0x80007498u: goto label_80007498;
    case 0x8000749Cu: goto label_8000749C;
    case 0x800074A0u: goto label_800074A0;
    case 0x800074A4u: goto label_800074A4;
    case 0x800074A8u: goto label_800074A8;
    case 0x800074ACu: goto label_800074AC;
    case 0x800074B0u: goto label_800074B0;
    case 0x800074B4u: goto label_800074B4;
    case 0x800074B8u: goto label_800074B8;
    case 0x800074BCu: goto label_800074BC;
    case 0x800074C0u: goto label_800074C0;
    case 0x800074C4u: goto label_800074C4;
    case 0x800074C8u: goto label_800074C8;
    case 0x800074CCu: goto label_800074CC;
    case 0x800074D0u: goto label_800074D0;
    case 0x800074D4u: goto label_800074D4;
    case 0x800074D8u: goto label_800074D8;
    case 0x800074DCu: goto label_800074DC;
    case 0x800074E0u: goto label_800074E0;
    case 0x800074E4u: goto label_800074E4;
    case 0x800074E8u: goto label_800074E8;
    case 0x800074ECu: goto label_800074EC;
    case 0x800074F0u: goto label_800074F0;
    case 0x800074F4u: goto label_800074F4;
    case 0x800074F8u: goto label_800074F8;
    case 0x800074FCu: goto label_800074FC;
    case 0x80007500u: goto label_80007500;
    case 0x80007504u: goto label_80007504;
    case 0x80007508u: goto label_80007508;
    case 0x8000750Cu: goto label_8000750C;
    case 0x80007510u: goto label_80007510;
    case 0x80007514u: goto label_80007514;
    case 0x80007518u: goto label_80007518;
    case 0x8000751Cu: goto label_8000751C;
    case 0x80007520u: goto label_80007520;
    case 0x80007524u: goto label_80007524;
    case 0x80007528u: goto label_80007528;
    case 0x8000752Cu: goto label_8000752C;
    case 0x80007530u: goto label_80007530;
    case 0x80007534u: goto label_80007534;
    case 0x80007538u: goto label_80007538;
    case 0x8000753Cu: goto label_8000753C;
    case 0x80007540u: goto label_80007540;
    case 0x80007544u: goto label_80007544;
    case 0x80007548u: goto label_80007548;
    case 0x8000754Cu: goto label_8000754C;
    case 0x80007550u: goto label_80007550;
    case 0x80007554u: goto label_80007554;
    case 0x80007558u: goto label_80007558;
    case 0x8000755Cu: goto label_8000755C;
    case 0x80007560u: goto label_80007560;
    case 0x80007564u: goto label_80007564;
    case 0x80007568u: goto label_80007568;
    case 0x8000756Cu: goto label_8000756C;
    case 0x80007570u: goto label_80007570;
    case 0x80007574u: goto label_80007574;
    case 0x80007578u: goto label_80007578;
    case 0x8000757Cu: goto label_8000757C;
    case 0x80007580u: goto label_80007580;
    case 0x80007584u: goto label_80007584;
    case 0x80007588u: goto label_80007588;
    case 0x8000758Cu: goto label_8000758C;
    case 0x80007590u: goto label_80007590;
    case 0x80007594u: goto label_80007594;
    case 0x80007598u: goto label_80007598;
    case 0x8000759Cu: goto label_8000759C;
    case 0x800075A0u: goto label_800075A0;
    case 0x800075A4u: goto label_800075A4;
    case 0x800075A8u: goto label_800075A8;
    case 0x800075ACu: goto label_800075AC;
    case 0x800075B0u: goto label_800075B0;
    case 0x800075B4u: goto label_800075B4;
    case 0x800075B8u: goto label_800075B8;
    case 0x800075BCu: goto label_800075BC;
    case 0x800075C0u: goto label_800075C0;
    case 0x800075C4u: goto label_800075C4;
    case 0x800075C8u: goto label_800075C8;
    case 0x800075CCu: goto label_800075CC;
    case 0x800075D0u: goto label_800075D0;
    case 0x800075D4u: goto label_800075D4;
    case 0x800075D8u: goto label_800075D8;
    case 0x800075DCu: goto label_800075DC;
    case 0x800075E0u: goto label_800075E0;
    case 0x800075E4u: goto label_800075E4;
    case 0x800075E8u: goto label_800075E8;
    case 0x800075ECu: goto label_800075EC;
    case 0x800075F0u: goto label_800075F0;
    case 0x800075F4u: goto label_800075F4;
    case 0x800075F8u: goto label_800075F8;
    case 0x800075FCu: goto label_800075FC;
    case 0x80007600u: goto label_80007600;
    case 0x80007604u: goto label_80007604;
    case 0x80007608u: goto label_80007608;
    case 0x8000760Cu: goto label_8000760C;
    case 0x80007610u: goto label_80007610;
    case 0x80007614u: goto label_80007614;
    case 0x80007618u: goto label_80007618;
    case 0x8000761Cu: goto label_8000761C;
    case 0x80007620u: goto label_80007620;
    case 0x80007624u: goto label_80007624;
    case 0x80007628u: goto label_80007628;
    case 0x8000762Cu: goto label_8000762C;
    case 0x80007630u: goto label_80007630;
    case 0x80007634u: goto label_80007634;
    case 0x80007638u: goto label_80007638;
    case 0x8000763Cu: goto label_8000763C;
    case 0x80007640u: goto label_80007640;
    case 0x80007644u: goto label_80007644;
    case 0x80007648u: goto label_80007648;
    case 0x8000764Cu: goto label_8000764C;
    case 0x80007650u: goto label_80007650;
    case 0x80007654u: goto label_80007654;
    case 0x80007658u: goto label_80007658;
    case 0x8000765Cu: goto label_8000765C;
    case 0x80007660u: goto label_80007660;
    case 0x80007664u: goto label_80007664;
    case 0x80007668u: goto label_80007668;
    case 0x8000766Cu: goto label_8000766C;
    case 0x80007670u: goto label_80007670;
    case 0x80007674u: goto label_80007674;
    case 0x80007678u: goto label_80007678;
    case 0x8000767Cu: goto label_8000767C;
    case 0x80007680u: goto label_80007680;
    case 0x80007684u: goto label_80007684;
    case 0x80007688u: goto label_80007688;
    case 0x8000768Cu: goto label_8000768C;
    case 0x80007690u: goto label_80007690;
    case 0x80007694u: goto label_80007694;
    case 0x80007698u: goto label_80007698;
    case 0x8000769Cu: goto label_8000769C;
    case 0x800076A0u: goto label_800076A0;
    case 0x800076A4u: goto label_800076A4;
    case 0x800076A8u: goto label_800076A8;
    case 0x800076ACu: goto label_800076AC;
    case 0x800076B0u: goto label_800076B0;
    case 0x800076B4u: goto label_800076B4;
    case 0x800076B8u: goto label_800076B8;
    case 0x800076BCu: goto label_800076BC;
    case 0x800076C0u: goto label_800076C0;
    case 0x800076C4u: goto label_800076C4;
    case 0x800076C8u: goto label_800076C8;
    case 0x800076CCu: goto label_800076CC;
    case 0x800076D0u: goto label_800076D0;
    case 0x800076D4u: goto label_800076D4;
    case 0x800076D8u: goto label_800076D8;
    case 0x800076DCu: goto label_800076DC;
    case 0x800076E0u: goto label_800076E0;
    case 0x800076E4u: goto label_800076E4;
    case 0x800076E8u: goto label_800076E8;
    case 0x800076ECu: goto label_800076EC;
    case 0x800076F0u: goto label_800076F0;
    case 0x800076F4u: goto label_800076F4;
    case 0x800076F8u: goto label_800076F8;
    case 0x800076FCu: goto label_800076FC;
    case 0x80007700u: goto label_80007700;
    case 0x80007704u: goto label_80007704;
    case 0x80007708u: goto label_80007708;
    case 0x8000770Cu: goto label_8000770C;
    case 0x80007710u: goto label_80007710;
    case 0x80007714u: goto label_80007714;
    case 0x80007718u: goto label_80007718;
    case 0x8000771Cu: goto label_8000771C;
    case 0x80007720u: goto label_80007720;
    case 0x80007724u: goto label_80007724;
    case 0x80007728u: goto label_80007728;
    case 0x8000772Cu: goto label_8000772C;
    case 0x80007730u: goto label_80007730;
    case 0x80007734u: goto label_80007734;
    case 0x80007738u: goto label_80007738;
    case 0x8000773Cu: goto label_8000773C;
    case 0x80007740u: goto label_80007740;
    case 0x80007744u: goto label_80007744;
    case 0x80007748u: goto label_80007748;
    case 0x8000774Cu: goto label_8000774C;
    case 0x80007750u: goto label_80007750;
    case 0x80007754u: goto label_80007754;
    case 0x80007758u: goto label_80007758;
    case 0x8000775Cu: goto label_8000775C;
    case 0x80007760u: goto label_80007760;
    case 0x80007764u: goto label_80007764;
    case 0x80007768u: goto label_80007768;
    case 0x8000776Cu: goto label_8000776C;
    case 0x80007770u: goto label_80007770;
    case 0x80007774u: goto label_80007774;
    case 0x80007778u: goto label_80007778;
    case 0x8000777Cu: goto label_8000777C;
    case 0x80007780u: goto label_80007780;
    case 0x80007784u: goto label_80007784;
    case 0x80007788u: goto label_80007788;
    case 0x8000778Cu: goto label_8000778C;
    case 0x80007790u: goto label_80007790;
    case 0x80007794u: goto label_80007794;
    case 0x80007798u: goto label_80007798;
    case 0x8000779Cu: goto label_8000779C;
    case 0x800077A0u: goto label_800077A0;
    case 0x800077A4u: goto label_800077A4;
    case 0x800077A8u: goto label_800077A8;
    case 0x800077ACu: goto label_800077AC;
    case 0x800077B0u: goto label_800077B0;
    case 0x800077B4u: goto label_800077B4;
    case 0x800077B8u: goto label_800077B8;
    case 0x800077BCu: goto label_800077BC;
    case 0x800077C0u: goto label_800077C0;
    case 0x800077C4u: goto label_800077C4;
    case 0x800077C8u: goto label_800077C8;
    case 0x800077CCu: goto label_800077CC;
    case 0x800077D0u: goto label_800077D0;
    case 0x800077D4u: goto label_800077D4;
    case 0x800077D8u: goto label_800077D8;
    case 0x800077DCu: goto label_800077DC;
    case 0x800077E0u: goto label_800077E0;
    case 0x800077E4u: goto label_800077E4;
    case 0x800077E8u: goto label_800077E8;
    case 0x800077ECu: goto label_800077EC;
    case 0x800077F0u: goto label_800077F0;
    case 0x800077F4u: goto label_800077F4;
    case 0x800077F8u: goto label_800077F8;
    case 0x800077FCu: goto label_800077FC;
    case 0x80007800u: goto label_80007800;
    case 0x80007804u: goto label_80007804;
    case 0x80007808u: goto label_80007808;
    case 0x8000780Cu: goto label_8000780C;
    case 0x80007810u: goto label_80007810;
    case 0x80007814u: goto label_80007814;
    case 0x80007818u: goto label_80007818;
    case 0x8000781Cu: goto label_8000781C;
    case 0x80007820u: goto label_80007820;
    case 0x80007824u: goto label_80007824;
    case 0x80007828u: goto label_80007828;
    case 0x8000782Cu: goto label_8000782C;
    case 0x80007830u: goto label_80007830;
    case 0x80007834u: goto label_80007834;
    case 0x80007838u: goto label_80007838;
    case 0x8000783Cu: goto label_8000783C;
    case 0x80007840u: goto label_80007840;
    case 0x80007844u: goto label_80007844;
    case 0x80007848u: goto label_80007848;
    case 0x8000784Cu: goto label_8000784C;
    case 0x80007850u: goto label_80007850;
    case 0x80007854u: goto label_80007854;
    case 0x80007858u: goto label_80007858;
    case 0x8000785Cu: goto label_8000785C;
    case 0x80007860u: goto label_80007860;
    case 0x80007864u: goto label_80007864;
    case 0x80007868u: goto label_80007868;
    case 0x8000786Cu: goto label_8000786C;
    case 0x80007870u: goto label_80007870;
    case 0x80007874u: goto label_80007874;
    case 0x80007878u: goto label_80007878;
    case 0x8000787Cu: goto label_8000787C;
    case 0x80007880u: goto label_80007880;
    case 0x80007884u: goto label_80007884;
    case 0x80007888u: goto label_80007888;
    case 0x8000788Cu: goto label_8000788C;
    case 0x80007890u: goto label_80007890;
    case 0x80007894u: goto label_80007894;
    case 0x80007898u: goto label_80007898;
    case 0x8000789Cu: goto label_8000789C;
    case 0x800078A0u: goto label_800078A0;
    case 0x800078A4u: goto label_800078A4;
    case 0x800078A8u: goto label_800078A8;
    case 0x800078ACu: goto label_800078AC;
    case 0x800078B0u: goto label_800078B0;
    case 0x800078B4u: goto label_800078B4;
    case 0x800078B8u: goto label_800078B8;
    case 0x800078BCu: goto label_800078BC;
    case 0x800078C0u: goto label_800078C0;
    case 0x800078C4u: goto label_800078C4;
    case 0x800078C8u: goto label_800078C8;
    case 0x800078CCu: goto label_800078CC;
    case 0x800078D0u: goto label_800078D0;
    case 0x800078D4u: goto label_800078D4;
    case 0x800078D8u: goto label_800078D8;
    case 0x800078DCu: goto label_800078DC;
    case 0x800078E0u: goto label_800078E0;
    case 0x800078E4u: goto label_800078E4;
    case 0x800078E8u: goto label_800078E8;
    case 0x800078ECu: goto label_800078EC;
    case 0x800078F0u: goto label_800078F0;
    case 0x800078F4u: goto label_800078F4;
    case 0x800078F8u: goto label_800078F8;
    case 0x800078FCu: goto label_800078FC;
    case 0x80007900u: goto label_80007900;
    case 0x80007904u: goto label_80007904;
    case 0x80007908u: goto label_80007908;
    case 0x8000790Cu: goto label_8000790C;
    case 0x80007910u: goto label_80007910;
    case 0x80007914u: goto label_80007914;
    case 0x80007918u: goto label_80007918;
    case 0x8000791Cu: goto label_8000791C;
    case 0x80007920u: goto label_80007920;
    case 0x80007924u: goto label_80007924;
    case 0x80007928u: goto label_80007928;
    case 0x8000792Cu: goto label_8000792C;
    case 0x80007930u: goto label_80007930;
    case 0x80007934u: goto label_80007934;
    case 0x80007938u: goto label_80007938;
    case 0x8000793Cu: goto label_8000793C;
    case 0x80007940u: goto label_80007940;
    case 0x80007944u: goto label_80007944;
    case 0x80007948u: goto label_80007948;
    case 0x8000794Cu: goto label_8000794C;
    case 0x80007950u: goto label_80007950;
    case 0x80007954u: goto label_80007954;
    case 0x80007958u: goto label_80007958;
    case 0x8000795Cu: goto label_8000795C;
    case 0x80007960u: goto label_80007960;
    case 0x80007964u: goto label_80007964;
    case 0x80007968u: goto label_80007968;
    case 0x8000796Cu: goto label_8000796C;
    case 0x80007970u: goto label_80007970;
    case 0x80007974u: goto label_80007974;
    case 0x80007978u: goto label_80007978;
    case 0x8000797Cu: goto label_8000797C;
    case 0x80007980u: goto label_80007980;
    case 0x80007984u: goto label_80007984;
    case 0x80007988u: goto label_80007988;
    case 0x8000798Cu: goto label_8000798C;
    case 0x80007990u: goto label_80007990;
    case 0x80007994u: goto label_80007994;
    case 0x80007998u: goto label_80007998;
    case 0x8000799Cu: goto label_8000799C;
    case 0x800079A0u: goto label_800079A0;
    case 0x800079A4u: goto label_800079A4;
    case 0x800079A8u: goto label_800079A8;
    case 0x800079ACu: goto label_800079AC;
    case 0x800079B0u: goto label_800079B0;
    case 0x800079B4u: goto label_800079B4;
    case 0x800079B8u: goto label_800079B8;
    case 0x800079BCu: goto label_800079BC;
    case 0x800079C0u: goto label_800079C0;
    case 0x800079C4u: goto label_800079C4;
    case 0x800079C8u: goto label_800079C8;
    case 0x800079CCu: goto label_800079CC;
    case 0x800079D0u: goto label_800079D0;
    case 0x800079D4u: goto label_800079D4;
    case 0x800079D8u: goto label_800079D8;
    case 0x800079DCu: goto label_800079DC;
    case 0x800079E0u: goto label_800079E0;
    case 0x800079E4u: goto label_800079E4;
    case 0x800079E8u: goto label_800079E8;
    case 0x800079ECu: goto label_800079EC;
    case 0x800079F0u: goto label_800079F0;
    case 0x800079F4u: goto label_800079F4;
    case 0x800079F8u: goto label_800079F8;
    case 0x800079FCu: goto label_800079FC;
    case 0x80007A00u: goto label_80007A00;
    case 0x80007A04u: goto label_80007A04;
    case 0x80007A08u: goto label_80007A08;
    case 0x80007A0Cu: goto label_80007A0C;
    case 0x80007A10u: goto label_80007A10;
    case 0x80007A14u: goto label_80007A14;
    case 0x80007A18u: goto label_80007A18;
    case 0x80007A1Cu: goto label_80007A1C;
    case 0x80007A20u: goto label_80007A20;
    case 0x80007A24u: goto label_80007A24;
    case 0x80007A28u: goto label_80007A28;
    case 0x80007A2Cu: goto label_80007A2C;
    case 0x80007A30u: goto label_80007A30;
    case 0x80007A34u: goto label_80007A34;
    case 0x80007A38u: goto label_80007A38;
    case 0x80007A3Cu: goto label_80007A3C;
    case 0x80007A40u: goto label_80007A40;
    case 0x80007A44u: goto label_80007A44;
    case 0x80007A48u: goto label_80007A48;
    case 0x80007A4Cu: goto label_80007A4C;
    case 0x80007A50u: goto label_80007A50;
    case 0x80007A54u: goto label_80007A54;
    case 0x80007A58u: goto label_80007A58;
    case 0x80007A5Cu: goto label_80007A5C;
    case 0x80007A60u: goto label_80007A60;
    case 0x80007A64u: goto label_80007A64;
    case 0x80007A68u: goto label_80007A68;
    case 0x80007A6Cu: goto label_80007A6C;
    case 0x80007A70u: goto label_80007A70;
    case 0x80007A74u: goto label_80007A74;
    case 0x80007A78u: goto label_80007A78;
    case 0x80007A7Cu: goto label_80007A7C;
    case 0x80007A80u: goto label_80007A80;
    case 0x80007A84u: goto label_80007A84;
    case 0x80007A88u: goto label_80007A88;
    case 0x80007A8Cu: goto label_80007A8C;
    case 0x80007A90u: goto label_80007A90;
    case 0x80007A94u: goto label_80007A94;
    case 0x80007A98u: goto label_80007A98;
    case 0x80007A9Cu: goto label_80007A9C;
    case 0x80007AA0u: goto label_80007AA0;
    case 0x80007AA4u: goto label_80007AA4;
    case 0x80007AA8u: goto label_80007AA8;
    case 0x80007AACu: goto label_80007AAC;
    case 0x80007AB0u: goto label_80007AB0;
    case 0x80007AB4u: goto label_80007AB4;
    case 0x80007AB8u: goto label_80007AB8;
    case 0x80007ABCu: goto label_80007ABC;
    case 0x80007AC0u: goto label_80007AC0;
    case 0x80007AC4u: goto label_80007AC4;
    case 0x80007AC8u: goto label_80007AC8;
    case 0x80007ACCu: goto label_80007ACC;
    case 0x80007AD0u: goto label_80007AD0;
    case 0x80007AD4u: goto label_80007AD4;
    case 0x80007AD8u: goto label_80007AD8;
    case 0x80007ADCu: goto label_80007ADC;
    case 0x80007AE0u: goto label_80007AE0;
    case 0x80007AE4u: goto label_80007AE4;
    case 0x80007AE8u: goto label_80007AE8;
    case 0x80007AECu: goto label_80007AEC;
    case 0x80007AF0u: goto label_80007AF0;
    case 0x80007AF4u: goto label_80007AF4;
    case 0x80007AF8u: goto label_80007AF8;
    case 0x80007AFCu: goto label_80007AFC;
    case 0x80007B00u: goto label_80007B00;
    case 0x80007B04u: goto label_80007B04;
    case 0x80007B08u: goto label_80007B08;
    case 0x80007B0Cu: goto label_80007B0C;
    case 0x80007B10u: goto label_80007B10;
    case 0x80007B14u: goto label_80007B14;
    case 0x80007B18u: goto label_80007B18;
    case 0x80007B1Cu: goto label_80007B1C;
    case 0x80007B20u: goto label_80007B20;
    case 0x80007B24u: goto label_80007B24;
    case 0x80007B28u: goto label_80007B28;
    case 0x80007B2Cu: goto label_80007B2C;
    case 0x80007B30u: goto label_80007B30;
    case 0x80007B34u: goto label_80007B34;
    case 0x80007B38u: goto label_80007B38;
    case 0x80007B3Cu: goto label_80007B3C;
    case 0x80007B40u: goto label_80007B40;
    case 0x80007B44u: goto label_80007B44;
    case 0x80007B48u: goto label_80007B48;
    case 0x80007B4Cu: goto label_80007B4C;
    case 0x80007B50u: goto label_80007B50;
    case 0x80007B54u: goto label_80007B54;
    case 0x80007B58u: goto label_80007B58;
    case 0x80007B5Cu: goto label_80007B5C;
    case 0x80007B60u: goto label_80007B60;
    case 0x80007B64u: goto label_80007B64;
    case 0x80007B68u: goto label_80007B68;
    case 0x80007B6Cu: goto label_80007B6C;
    case 0x80007B70u: goto label_80007B70;
    case 0x80007B74u: goto label_80007B74;
    case 0x80007B78u: goto label_80007B78;
    case 0x80007B7Cu: goto label_80007B7C;
    case 0x80007B80u: goto label_80007B80;
    case 0x80007B84u: goto label_80007B84;
    case 0x80007B88u: goto label_80007B88;
    case 0x80007B8Cu: goto label_80007B8C;
    case 0x80007B90u: goto label_80007B90;
    case 0x80007B94u: goto label_80007B94;
    case 0x80007B98u: goto label_80007B98;
    case 0x80007B9Cu: goto label_80007B9C;
    case 0x80007BA0u: goto label_80007BA0;
    case 0x80007BA4u: goto label_80007BA4;
    case 0x80007BA8u: goto label_80007BA8;
    case 0x80007BACu: goto label_80007BAC;
    case 0x80007BB0u: goto label_80007BB0;
    case 0x80007BB4u: goto label_80007BB4;
    case 0x80007BB8u: goto label_80007BB8;
    case 0x80007BBCu: goto label_80007BBC;
    case 0x80007BC0u: goto label_80007BC0;
    case 0x80007BC4u: goto label_80007BC4;
    case 0x80007BC8u: goto label_80007BC8;
    case 0x80007BCCu: goto label_80007BCC;
    case 0x80007BD0u: goto label_80007BD0;
    case 0x80007BD4u: goto label_80007BD4;
    case 0x80007BD8u: goto label_80007BD8;
    case 0x80007BDCu: goto label_80007BDC;
    case 0x80007BE0u: goto label_80007BE0;
    case 0x80007BE4u: goto label_80007BE4;
    case 0x80007BE8u: goto label_80007BE8;
    case 0x80007BECu: goto label_80007BEC;
    case 0x80007BF0u: goto label_80007BF0;
    case 0x80007BF4u: goto label_80007BF4;
    case 0x80007BF8u: goto label_80007BF8;
    case 0x80007BFCu: goto label_80007BFC;
    case 0x80007C00u: goto label_80007C00;
    case 0x80007C04u: goto label_80007C04;
    case 0x80007C08u: goto label_80007C08;
    case 0x80007C0Cu: goto label_80007C0C;
    case 0x80007C10u: goto label_80007C10;
    case 0x80007C14u: goto label_80007C14;
    case 0x80007C18u: goto label_80007C18;
    case 0x80007C1Cu: goto label_80007C1C;
    case 0x80007C20u: goto label_80007C20;
    case 0x80007C24u: goto label_80007C24;
    case 0x80007C28u: goto label_80007C28;
    case 0x80007C2Cu: goto label_80007C2C;
    case 0x80007C30u: goto label_80007C30;
    case 0x80007C34u: goto label_80007C34;
    case 0x80007C38u: goto label_80007C38;
    case 0x80007C3Cu: goto label_80007C3C;
    case 0x80007C40u: goto label_80007C40;
    case 0x80007C44u: goto label_80007C44;
    case 0x80007C48u: goto label_80007C48;
    case 0x80007C4Cu: goto label_80007C4C;
    case 0x80007C50u: goto label_80007C50;
    case 0x80007C54u: goto label_80007C54;
    case 0x80007C58u: goto label_80007C58;
    case 0x80007C5Cu: goto label_80007C5C;
    case 0x80007C60u: goto label_80007C60;
    case 0x80007C64u: goto label_80007C64;
    case 0x80007C68u: goto label_80007C68;
    case 0x80007C6Cu: goto label_80007C6C;
    case 0x80007C70u: goto label_80007C70;
    case 0x80007C74u: goto label_80007C74;
    case 0x80007C78u: goto label_80007C78;
    case 0x80007C7Cu: goto label_80007C7C;
    case 0x80007C80u: goto label_80007C80;
    case 0x80007C84u: goto label_80007C84;
    case 0x80007C88u: goto label_80007C88;
    case 0x80007C8Cu: goto label_80007C8C;
    case 0x80007C90u: goto label_80007C90;
    case 0x80007C94u: goto label_80007C94;
    case 0x80007C98u: goto label_80007C98;
    case 0x80007C9Cu: goto label_80007C9C;
    case 0x80007CA0u: goto label_80007CA0;
    case 0x80007CA4u: goto label_80007CA4;
    case 0x80007CA8u: goto label_80007CA8;
    case 0x80007CACu: goto label_80007CAC;
    case 0x80007CB0u: goto label_80007CB0;
    case 0x80007CB4u: goto label_80007CB4;
    case 0x80007CB8u: goto label_80007CB8;
    case 0x80007CBCu: goto label_80007CBC;
    case 0x80007CC0u: goto label_80007CC0;
    case 0x80007CC4u: goto label_80007CC4;
    case 0x80007CC8u: goto label_80007CC8;
    case 0x80007CCCu: goto label_80007CCC;
    case 0x80007CD0u: goto label_80007CD0;
    case 0x80007CD4u: goto label_80007CD4;
    case 0x80007CD8u: goto label_80007CD8;
    case 0x80007CDCu: goto label_80007CDC;
    case 0x80007CE0u: goto label_80007CE0;
    case 0x80007CE4u: goto label_80007CE4;
    case 0x80007CE8u: goto label_80007CE8;
    case 0x80007CECu: goto label_80007CEC;
    case 0x80007CF0u: goto label_80007CF0;
    case 0x80007CF4u: goto label_80007CF4;
    case 0x80007CF8u: goto label_80007CF8;
    case 0x80007CFCu: goto label_80007CFC;
    case 0x80007D00u: goto label_80007D00;
    case 0x80007D04u: goto label_80007D04;
    case 0x80007D08u: goto label_80007D08;
    case 0x80007D0Cu: goto label_80007D0C;
    case 0x80007D10u: goto label_80007D10;
    case 0x80007D14u: goto label_80007D14;
    case 0x80007D18u: goto label_80007D18;
    case 0x80007D1Cu: goto label_80007D1C;
    case 0x80007D20u: goto label_80007D20;
    case 0x80007D24u: goto label_80007D24;
    case 0x80007D28u: goto label_80007D28;
    case 0x80007D2Cu: goto label_80007D2C;
    case 0x80007D30u: goto label_80007D30;
    case 0x80007D34u: goto label_80007D34;
    case 0x80007D38u: goto label_80007D38;
    case 0x80007D3Cu: goto label_80007D3C;
    case 0x80007D40u: goto label_80007D40;
    case 0x80007D44u: goto label_80007D44;
    case 0x80007D48u: goto label_80007D48;
    case 0x80007D4Cu: goto label_80007D4C;
    case 0x80007D50u: goto label_80007D50;
    case 0x80007D54u: goto label_80007D54;
    case 0x80007D58u: goto label_80007D58;
    case 0x80007D5Cu: goto label_80007D5C;
    case 0x80007D60u: goto label_80007D60;
    case 0x80007D64u: goto label_80007D64;
    case 0x80007D68u: goto label_80007D68;
    case 0x80007D6Cu: goto label_80007D6C;
    case 0x80007D70u: goto label_80007D70;
    case 0x80007D74u: goto label_80007D74;
    case 0x80007D78u: goto label_80007D78;
    case 0x80007D7Cu: goto label_80007D7C;
    case 0x80007D80u: goto label_80007D80;
    case 0x80007D84u: goto label_80007D84;
    case 0x80007D88u: goto label_80007D88;
    case 0x80007D8Cu: goto label_80007D8C;
    case 0x80007D90u: goto label_80007D90;
    case 0x80007D94u: goto label_80007D94;
    case 0x80007D98u: goto label_80007D98;
    case 0x80007D9Cu: goto label_80007D9C;
    case 0x80007DA0u: goto label_80007DA0;
    case 0x80007DA4u: goto label_80007DA4;
    case 0x80007DA8u: goto label_80007DA8;
    case 0x80007DACu: goto label_80007DAC;
    case 0x80007DB0u: goto label_80007DB0;
    case 0x80007DB4u: goto label_80007DB4;
    case 0x80007DB8u: goto label_80007DB8;
    case 0x80007DBCu: goto label_80007DBC;
    case 0x80007DC0u: goto label_80007DC0;
    case 0x80007DC4u: goto label_80007DC4;
    case 0x80007DC8u: goto label_80007DC8;
    case 0x80007DCCu: goto label_80007DCC;
    case 0x80007DD0u: goto label_80007DD0;
    case 0x80007DD4u: goto label_80007DD4;
    case 0x80007DD8u: goto label_80007DD8;
    case 0x80007DDCu: goto label_80007DDC;
    case 0x80007DE0u: goto label_80007DE0;
    case 0x80007DE4u: goto label_80007DE4;
    case 0x80007DE8u: goto label_80007DE8;
    case 0x80007DECu: goto label_80007DEC;
    case 0x80007DF0u: goto label_80007DF0;
    case 0x80007DF4u: goto label_80007DF4;
    case 0x80007DF8u: goto label_80007DF8;
    case 0x80007DFCu: goto label_80007DFC;
    case 0x80007E00u: goto label_80007E00;
    case 0x80007E04u: goto label_80007E04;
    case 0x80007E08u: goto label_80007E08;
    case 0x80007E0Cu: goto label_80007E0C;
    case 0x80007E10u: goto label_80007E10;
    case 0x80007E14u: goto label_80007E14;
    case 0x80007E18u: goto label_80007E18;
    case 0x80007E1Cu: goto label_80007E1C;
    case 0x80007E20u: goto label_80007E20;
    case 0x80007E24u: goto label_80007E24;
    case 0x80007E28u: goto label_80007E28;
    case 0x80007E2Cu: goto label_80007E2C;
    case 0x80007E30u: goto label_80007E30;
    case 0x80007E34u: goto label_80007E34;
    case 0x80007E38u: goto label_80007E38;
    case 0x80007E3Cu: goto label_80007E3C;
    case 0x80007E40u: goto label_80007E40;
    case 0x80007E44u: goto label_80007E44;
    case 0x80007E48u: goto label_80007E48;
    case 0x80007E4Cu: goto label_80007E4C;
    case 0x80007E50u: goto label_80007E50;
    case 0x80007E54u: goto label_80007E54;
    case 0x80007E58u: goto label_80007E58;
    case 0x80007E5Cu: goto label_80007E5C;
    case 0x80007E60u: goto label_80007E60;
    case 0x80007E64u: goto label_80007E64;
    case 0x80007E68u: goto label_80007E68;
    case 0x80007E6Cu: goto label_80007E6C;
    case 0x80007E70u: goto label_80007E70;
    case 0x80007E74u: goto label_80007E74;
    case 0x80007E78u: goto label_80007E78;
    case 0x80007E7Cu: goto label_80007E7C;
    case 0x80007E80u: goto label_80007E80;
    case 0x80007E84u: goto label_80007E84;
    case 0x80007E88u: goto label_80007E88;
    case 0x80007E8Cu: goto label_80007E8C;
    case 0x80007E90u: goto label_80007E90;
    case 0x80007E94u: goto label_80007E94;
    case 0x80007E98u: goto label_80007E98;
    case 0x80007E9Cu: goto label_80007E9C;
    case 0x80007EA0u: goto label_80007EA0;
    case 0x80007EA4u: goto label_80007EA4;
    case 0x80007EA8u: goto label_80007EA8;
    case 0x80007EACu: goto label_80007EAC;
    case 0x80007EB0u: goto label_80007EB0;
    case 0x80007EB4u: goto label_80007EB4;
    case 0x80007EB8u: goto label_80007EB8;
    case 0x80007EBCu: goto label_80007EBC;
    case 0x80007EC0u: goto label_80007EC0;
    case 0x80007EC4u: goto label_80007EC4;
    case 0x80007EC8u: goto label_80007EC8;
    case 0x80007ECCu: goto label_80007ECC;
    case 0x80007ED0u: goto label_80007ED0;
    case 0x80007ED4u: goto label_80007ED4;
    case 0x80007ED8u: goto label_80007ED8;
    case 0x80007EDCu: goto label_80007EDC;
    case 0x80007EE0u: goto label_80007EE0;
    case 0x80007EE4u: goto label_80007EE4;
    case 0x80007EE8u: goto label_80007EE8;
    case 0x80007EECu: goto label_80007EEC;
    case 0x80007EF0u: goto label_80007EF0;
    case 0x80007EF4u: goto label_80007EF4;
    case 0x80007EF8u: goto label_80007EF8;
    case 0x80007EFCu: goto label_80007EFC;
    case 0x80007F00u: goto label_80007F00;
    case 0x80007F04u: goto label_80007F04;
    case 0x80007F08u: goto label_80007F08;
    case 0x80007F0Cu: goto label_80007F0C;
    case 0x80007F10u: goto label_80007F10;
    case 0x80007F14u: goto label_80007F14;
    case 0x80007F18u: goto label_80007F18;
    case 0x80007F1Cu: goto label_80007F1C;
    case 0x80007F20u: goto label_80007F20;
    case 0x80007F24u: goto label_80007F24;
    case 0x80007F28u: goto label_80007F28;
    case 0x80007F2Cu: goto label_80007F2C;
    case 0x80007F30u: goto label_80007F30;
    case 0x80007F34u: goto label_80007F34;
    case 0x80007F38u: goto label_80007F38;
    case 0x80007F3Cu: goto label_80007F3C;
    case 0x80007F40u: goto label_80007F40;
    case 0x80007F44u: goto label_80007F44;
    case 0x80007F48u: goto label_80007F48;
    case 0x80007F4Cu: goto label_80007F4C;
    case 0x80007F50u: goto label_80007F50;
    case 0x80007F54u: goto label_80007F54;
    case 0x80007F58u: goto label_80007F58;
    case 0x80007F5Cu: goto label_80007F5C;
    case 0x80007F60u: goto label_80007F60;
    case 0x80007F64u: goto label_80007F64;
    case 0x80007F68u: goto label_80007F68;
    case 0x80007F6Cu: goto label_80007F6C;
    case 0x80007F70u: goto label_80007F70;
    case 0x80007F74u: goto label_80007F74;
    case 0x80007F78u: goto label_80007F78;
    case 0x80007F7Cu: goto label_80007F7C;
    case 0x80007F80u: goto label_80007F80;
    case 0x80007F84u: goto label_80007F84;
    case 0x80007F88u: goto label_80007F88;
    case 0x80007F8Cu: goto label_80007F8C;
    case 0x80007F90u: goto label_80007F90;
    case 0x80007F94u: goto label_80007F94;
    case 0x80007F98u: goto label_80007F98;
    case 0x80007F9Cu: goto label_80007F9C;
    case 0x80007FA0u: goto label_80007FA0;
    case 0x80007FA4u: goto label_80007FA4;
    case 0x80007FA8u: goto label_80007FA8;
    case 0x80007FACu: goto label_80007FAC;
    case 0x80007FB0u: goto label_80007FB0;
    case 0x80007FB4u: goto label_80007FB4;
    case 0x80007FB8u: goto label_80007FB8;
    case 0x80007FBCu: goto label_80007FBC;
    case 0x80007FC0u: goto label_80007FC0;
    case 0x80007FC4u: goto label_80007FC4;
    case 0x80007FC8u: goto label_80007FC8;
    case 0x80007FCCu: goto label_80007FCC;
    case 0x80007FD0u: goto label_80007FD0;
    case 0x80007FD4u: goto label_80007FD4;
    case 0x80007FD8u: goto label_80007FD8;
    case 0x80007FDCu: goto label_80007FDC;
    case 0x80007FE0u: goto label_80007FE0;
    case 0x80007FE4u: goto label_80007FE4;
    case 0x80007FE8u: goto label_80007FE8;
    case 0x80007FECu: goto label_80007FEC;
    case 0x80007FF0u: goto label_80007FF0;
    case 0x80007FF4u: goto label_80007FF4;
    case 0x80007FF8u: goto label_80007FF8;
    case 0x80007FFCu: goto label_80007FFC;
    case 0x80008000u: goto label_80008000;
    case 0x80008004u: goto label_80008004;
    case 0x80008008u: goto label_80008008;
    case 0x8000800Cu: goto label_8000800C;
    case 0x80008010u: goto label_80008010;
    case 0x80008014u: goto label_80008014;
    case 0x80008018u: goto label_80008018;
    case 0x8000801Cu: goto label_8000801C;
    case 0x80008020u: goto label_80008020;
    case 0x80008024u: goto label_80008024;
    case 0x80008028u: goto label_80008028;
    case 0x8000802Cu: goto label_8000802C;
    case 0x80008030u: goto label_80008030;
    case 0x80008034u: goto label_80008034;
    case 0x80008038u: goto label_80008038;
    case 0x8000803Cu: goto label_8000803C;
    case 0x80008040u: goto label_80008040;
    case 0x80008044u: goto label_80008044;
    case 0x80008048u: goto label_80008048;
    case 0x8000804Cu: goto label_8000804C;
    case 0x80008050u: goto label_80008050;
    case 0x80008054u: goto label_80008054;
    case 0x80008058u: goto label_80008058;
    case 0x8000805Cu: goto label_8000805C;
    case 0x80008060u: goto label_80008060;
    case 0x80008064u: goto label_80008064;
    case 0x80008068u: goto label_80008068;
    case 0x8000806Cu: goto label_8000806C;
    case 0x80008070u: goto label_80008070;
    case 0x80008074u: goto label_80008074;
    case 0x80008078u: goto label_80008078;
    case 0x8000807Cu: goto label_8000807C;
    case 0x80008080u: goto label_80008080;
    case 0x80008084u: goto label_80008084;
    case 0x80008088u: goto label_80008088;
    case 0x8000808Cu: goto label_8000808C;
    case 0x80008090u: goto label_80008090;
    case 0x80008094u: goto label_80008094;
    case 0x80008098u: goto label_80008098;
    case 0x8000809Cu: goto label_8000809C;
    case 0x800080A0u: goto label_800080A0;
    case 0x800080A4u: goto label_800080A4;
    case 0x800080A8u: goto label_800080A8;
    case 0x800080ACu: goto label_800080AC;
    case 0x800080B0u: goto label_800080B0;
    case 0x800080B4u: goto label_800080B4;
    case 0x800080B8u: goto label_800080B8;
    case 0x800080BCu: goto label_800080BC;
    case 0x800080C0u: goto label_800080C0;
    case 0x800080C4u: goto label_800080C4;
    case 0x800080C8u: goto label_800080C8;
    case 0x800080CCu: goto label_800080CC;
    case 0x800080D0u: goto label_800080D0;
    case 0x800080D4u: goto label_800080D4;
    case 0x800080D8u: goto label_800080D8;
    case 0x800080DCu: goto label_800080DC;
    case 0x800080E0u: goto label_800080E0;
    case 0x800080E4u: goto label_800080E4;
    case 0x800080E8u: goto label_800080E8;
    case 0x800080ECu: goto label_800080EC;
    case 0x800080F0u: goto label_800080F0;
    case 0x800080F4u: goto label_800080F4;
    case 0x800080F8u: goto label_800080F8;
    case 0x800080FCu: goto label_800080FC;
    case 0x80008100u: goto label_80008100;
    case 0x80008104u: goto label_80008104;
    case 0x80008108u: goto label_80008108;
    case 0x8000810Cu: goto label_8000810C;
    case 0x80008110u: goto label_80008110;
    case 0x80008114u: goto label_80008114;
    case 0x80008118u: goto label_80008118;
    case 0x8000811Cu: goto label_8000811C;
    case 0x80008120u: goto label_80008120;
    case 0x80008124u: goto label_80008124;
    case 0x80008128u: goto label_80008128;
    case 0x8000812Cu: goto label_8000812C;
    case 0x80008130u: goto label_80008130;
    case 0x80008134u: goto label_80008134;
    case 0x80008138u: goto label_80008138;
    case 0x8000813Cu: goto label_8000813C;
    case 0x80008140u: goto label_80008140;
    case 0x80008144u: goto label_80008144;
    case 0x80008148u: goto label_80008148;
    case 0x8000814Cu: goto label_8000814C;
    case 0x80008150u: goto label_80008150;
    case 0x80008154u: goto label_80008154;
    case 0x80008158u: goto label_80008158;
    case 0x8000815Cu: goto label_8000815C;
    case 0x80008160u: goto label_80008160;
    case 0x80008164u: goto label_80008164;
    case 0x80008168u: goto label_80008168;
    case 0x8000816Cu: goto label_8000816C;
    case 0x80008170u: goto label_80008170;
    case 0x80008174u: goto label_80008174;
    case 0x80008178u: goto label_80008178;
    case 0x8000817Cu: goto label_8000817C;
    case 0x80008180u: goto label_80008180;
    case 0x80008184u: goto label_80008184;
    case 0x80008188u: goto label_80008188;
    case 0x8000818Cu: goto label_8000818C;
    case 0x80008190u: goto label_80008190;
    case 0x80008194u: goto label_80008194;
    case 0x80008198u: goto label_80008198;
    case 0x8000819Cu: goto label_8000819C;
    case 0x800081A0u: goto label_800081A0;
    case 0x800081A4u: goto label_800081A4;
    case 0x800081A8u: goto label_800081A8;
    case 0x800081ACu: goto label_800081AC;
    case 0x800081B0u: goto label_800081B0;
    case 0x800081B4u: goto label_800081B4;
    case 0x800081B8u: goto label_800081B8;
    case 0x800081BCu: goto label_800081BC;
    case 0x800081C0u: goto label_800081C0;
    case 0x800081C4u: goto label_800081C4;
    case 0x800081C8u: goto label_800081C8;
    case 0x800081CCu: goto label_800081CC;
    case 0x800081D0u: goto label_800081D0;
    case 0x800081D4u: goto label_800081D4;
    case 0x800081D8u: goto label_800081D8;
    case 0x800081DCu: goto label_800081DC;
    case 0x800081E0u: goto label_800081E0;
    case 0x800081E4u: goto label_800081E4;
    case 0x800081E8u: goto label_800081E8;
    case 0x800081ECu: goto label_800081EC;
    case 0x800081F0u: goto label_800081F0;
    case 0x800081F4u: goto label_800081F4;
    case 0x800081F8u: goto label_800081F8;
    case 0x800081FCu: goto label_800081FC;
    case 0x80008200u: goto label_80008200;
    case 0x80008204u: goto label_80008204;
    case 0x80008208u: goto label_80008208;
    case 0x8000820Cu: goto label_8000820C;
    case 0x80008210u: goto label_80008210;
    case 0x80008214u: goto label_80008214;
    case 0x80008218u: goto label_80008218;
    case 0x8000821Cu: goto label_8000821C;
    case 0x80008220u: goto label_80008220;
    case 0x80008224u: goto label_80008224;
    case 0x80008228u: goto label_80008228;
    case 0x8000822Cu: goto label_8000822C;
    case 0x80008230u: goto label_80008230;
    case 0x80008234u: goto label_80008234;
    case 0x80008238u: goto label_80008238;
    case 0x8000823Cu: goto label_8000823C;
    case 0x80008240u: goto label_80008240;
    case 0x80008244u: goto label_80008244;
    case 0x80008248u: goto label_80008248;
    case 0x8000824Cu: goto label_8000824C;
    case 0x80008250u: goto label_80008250;
    case 0x80008254u: goto label_80008254;
    case 0x80008258u: goto label_80008258;
    case 0x8000825Cu: goto label_8000825C;
    case 0x80008260u: goto label_80008260;
    case 0x80008264u: goto label_80008264;
    case 0x80008268u: goto label_80008268;
    case 0x8000826Cu: goto label_8000826C;
    case 0x80008270u: goto label_80008270;
    case 0x80008274u: goto label_80008274;
    case 0x80008278u: goto label_80008278;
    case 0x8000827Cu: goto label_8000827C;
    case 0x80008280u: goto label_80008280;
    case 0x80008284u: goto label_80008284;
    case 0x80008288u: goto label_80008288;
    case 0x8000828Cu: goto label_8000828C;
    case 0x80008290u: goto label_80008290;
    case 0x80008294u: goto label_80008294;
    case 0x80008298u: goto label_80008298;
    case 0x8000829Cu: goto label_8000829C;
    case 0x800082A0u: goto label_800082A0;
    case 0x800082A4u: goto label_800082A4;
    case 0x800082A8u: goto label_800082A8;
    case 0x800082ACu: goto label_800082AC;
    case 0x800082B0u: goto label_800082B0;
    case 0x800082B4u: goto label_800082B4;
    case 0x800082B8u: goto label_800082B8;
    case 0x800082BCu: goto label_800082BC;
    case 0x800082C0u: goto label_800082C0;
    case 0x800082C4u: goto label_800082C4;
    case 0x800082C8u: goto label_800082C8;
    case 0x800082CCu: goto label_800082CC;
    case 0x800082D0u: goto label_800082D0;
    case 0x800082D4u: goto label_800082D4;
    case 0x800082D8u: goto label_800082D8;
    case 0x800082DCu: goto label_800082DC;
    case 0x800082E0u: goto label_800082E0;
    case 0x800082E4u: goto label_800082E4;
    case 0x800082E8u: goto label_800082E8;
    case 0x800082ECu: goto label_800082EC;
    case 0x800082F0u: goto label_800082F0;
    case 0x800082F4u: goto label_800082F4;
    case 0x800082F8u: goto label_800082F8;
    case 0x800082FCu: goto label_800082FC;
    case 0x80008300u: goto label_80008300;
    case 0x80008304u: goto label_80008304;
    case 0x80008308u: goto label_80008308;
    case 0x8000830Cu: goto label_8000830C;
    case 0x80008310u: goto label_80008310;
    case 0x80008314u: goto label_80008314;
    case 0x80008318u: goto label_80008318;
    case 0x8000831Cu: goto label_8000831C;
    case 0x80008320u: goto label_80008320;
    case 0x80008324u: goto label_80008324;
    case 0x80008328u: goto label_80008328;
    case 0x8000832Cu: goto label_8000832C;
    case 0x80008330u: goto label_80008330;
    case 0x80008334u: goto label_80008334;
    case 0x80008338u: goto label_80008338;
    case 0x8000833Cu: goto label_8000833C;
    case 0x80008340u: goto label_80008340;
    case 0x80008344u: goto label_80008344;
    case 0x80008348u: goto label_80008348;
    case 0x8000834Cu: goto label_8000834C;
    case 0x80008350u: goto label_80008350;
    case 0x80008354u: goto label_80008354;
    case 0x80008358u: goto label_80008358;
    case 0x8000835Cu: goto label_8000835C;
    case 0x80008360u: goto label_80008360;
    case 0x80008364u: goto label_80008364;
    case 0x80008368u: goto label_80008368;
    case 0x8000836Cu: goto label_8000836C;
    case 0x80008370u: goto label_80008370;
    case 0x80008374u: goto label_80008374;
    case 0x80008378u: goto label_80008378;
    case 0x8000837Cu: goto label_8000837C;
    case 0x80008380u: goto label_80008380;
    case 0x80008384u: goto label_80008384;
    case 0x80008388u: goto label_80008388;
    case 0x8000838Cu: goto label_8000838C;
    case 0x80008390u: goto label_80008390;
    case 0x80008394u: goto label_80008394;
    case 0x80008398u: goto label_80008398;
    case 0x8000839Cu: goto label_8000839C;
    case 0x800083A0u: goto label_800083A0;
    case 0x800083A4u: goto label_800083A4;
    case 0x800083A8u: goto label_800083A8;
    case 0x800083ACu: goto label_800083AC;
    case 0x800083B0u: goto label_800083B0;
    case 0x800083B4u: goto label_800083B4;
    case 0x800083B8u: goto label_800083B8;
    case 0x800083BCu: goto label_800083BC;
    case 0x800083C0u: goto label_800083C0;
    case 0x800083C4u: goto label_800083C4;
    case 0x800083C8u: goto label_800083C8;
    case 0x800083CCu: goto label_800083CC;
    case 0x800083D0u: goto label_800083D0;
    case 0x800083D4u: goto label_800083D4;
    case 0x800083D8u: goto label_800083D8;
    case 0x800083DCu: goto label_800083DC;
    case 0x800083E0u: goto label_800083E0;
    case 0x800083E4u: goto label_800083E4;
    case 0x800083E8u: goto label_800083E8;
    case 0x800083ECu: goto label_800083EC;
    case 0x800083F0u: goto label_800083F0;
    case 0x800083F4u: goto label_800083F4;
    case 0x800083F8u: goto label_800083F8;
    case 0x800083FCu: goto label_800083FC;
    case 0x80008400u: goto label_80008400;
    case 0x80008404u: goto label_80008404;
    case 0x80008408u: goto label_80008408;
    case 0x8000840Cu: goto label_8000840C;
    case 0x80008410u: goto label_80008410;
    case 0x80008414u: goto label_80008414;
    case 0x80008418u: goto label_80008418;
    case 0x8000841Cu: goto label_8000841C;
    case 0x80008420u: goto label_80008420;
    case 0x80008424u: goto label_80008424;
    case 0x80008428u: goto label_80008428;
    case 0x8000842Cu: goto label_8000842C;
    case 0x80008430u: goto label_80008430;
    case 0x80008434u: goto label_80008434;
    case 0x80008438u: goto label_80008438;
    case 0x8000843Cu: goto label_8000843C;
    case 0x80008440u: goto label_80008440;
    case 0x80008444u: goto label_80008444;
    case 0x80008448u: goto label_80008448;
    case 0x8000844Cu: goto label_8000844C;
    case 0x80008450u: goto label_80008450;
    case 0x80008454u: goto label_80008454;
    case 0x80008458u: goto label_80008458;
    case 0x8000845Cu: goto label_8000845C;
    case 0x80008460u: goto label_80008460;
    case 0x80008464u: goto label_80008464;
    case 0x80008468u: goto label_80008468;
    case 0x8000846Cu: goto label_8000846C;
    case 0x80008470u: goto label_80008470;
    case 0x80008474u: goto label_80008474;
    case 0x80008478u: goto label_80008478;
    case 0x8000847Cu: goto label_8000847C;
    case 0x80008480u: goto label_80008480;
    case 0x80008484u: goto label_80008484;
    case 0x80008488u: goto label_80008488;
    case 0x8000848Cu: goto label_8000848C;
    case 0x80008490u: goto label_80008490;
    case 0x80008494u: goto label_80008494;
    case 0x80008498u: goto label_80008498;
    case 0x8000849Cu: goto label_8000849C;
    case 0x800084A0u: goto label_800084A0;
    case 0x800084A4u: goto label_800084A4;
    case 0x800084A8u: goto label_800084A8;
    case 0x800084ACu: goto label_800084AC;
    case 0x800084B0u: goto label_800084B0;
    case 0x800084B4u: goto label_800084B4;
    case 0x800084B8u: goto label_800084B8;
    case 0x800084BCu: goto label_800084BC;
    case 0x800084C0u: goto label_800084C0;
    case 0x800084C4u: goto label_800084C4;
    case 0x800084C8u: goto label_800084C8;
    case 0x800084CCu: goto label_800084CC;
    case 0x800084D0u: goto label_800084D0;
    case 0x800084D4u: goto label_800084D4;
    case 0x800084D8u: goto label_800084D8;
    case 0x800084DCu: goto label_800084DC;
    case 0x800084E0u: goto label_800084E0;
    case 0x800084E4u: goto label_800084E4;
    case 0x800084E8u: goto label_800084E8;
    case 0x800084ECu: goto label_800084EC;
    case 0x800084F0u: goto label_800084F0;
    case 0x800084F4u: goto label_800084F4;
    case 0x800084F8u: goto label_800084F8;
    case 0x800084FCu: goto label_800084FC;
    case 0x80008500u: goto label_80008500;
    case 0x80008504u: goto label_80008504;
    case 0x80008508u: goto label_80008508;
    case 0x8000850Cu: goto label_8000850C;
    case 0x80008510u: goto label_80008510;
    case 0x80008514u: goto label_80008514;
    case 0x80008518u: goto label_80008518;
    case 0x8000851Cu: goto label_8000851C;
    case 0x80008520u: goto label_80008520;
    case 0x80008524u: goto label_80008524;
    case 0x80008528u: goto label_80008528;
    case 0x8000852Cu: goto label_8000852C;
    case 0x80008530u: goto label_80008530;
    case 0x80008534u: goto label_80008534;
    case 0x80008538u: goto label_80008538;
    case 0x8000853Cu: goto label_8000853C;
    case 0x80008540u: goto label_80008540;
    case 0x80008544u: goto label_80008544;
    case 0x80008548u: goto label_80008548;
    case 0x8000854Cu: goto label_8000854C;
    case 0x80008550u: goto label_80008550;
    case 0x80008554u: goto label_80008554;
    case 0x80008558u: goto label_80008558;
    case 0x8000855Cu: goto label_8000855C;
    case 0x80008560u: goto label_80008560;
    case 0x80008564u: goto label_80008564;
    case 0x80008568u: goto label_80008568;
    case 0x8000856Cu: goto label_8000856C;
    case 0x80008570u: goto label_80008570;
    case 0x80008574u: goto label_80008574;
    case 0x80008578u: goto label_80008578;
    case 0x8000857Cu: goto label_8000857C;
    case 0x80008580u: goto label_80008580;
    case 0x80008584u: goto label_80008584;
    case 0x80008588u: goto label_80008588;
    case 0x8000858Cu: goto label_8000858C;
    case 0x80008590u: goto label_80008590;
    case 0x80008594u: goto label_80008594;
    case 0x80008598u: goto label_80008598;
    case 0x8000859Cu: goto label_8000859C;
    case 0x800085A0u: goto label_800085A0;
    case 0x800085A4u: goto label_800085A4;
    case 0x800085A8u: goto label_800085A8;
    case 0x800085ACu: goto label_800085AC;
    case 0x800085B0u: goto label_800085B0;
    case 0x800085B4u: goto label_800085B4;
    case 0x800085B8u: goto label_800085B8;
    case 0x800085BCu: goto label_800085BC;
    case 0x800085C0u: goto label_800085C0;
    case 0x800085C4u: goto label_800085C4;
    case 0x800085C8u: goto label_800085C8;
    case 0x800085CCu: goto label_800085CC;
    case 0x800085D0u: goto label_800085D0;
    case 0x800085D4u: goto label_800085D4;
    case 0x800085D8u: goto label_800085D8;
    case 0x800085DCu: goto label_800085DC;
    case 0x800085E0u: goto label_800085E0;
    case 0x800085E4u: goto label_800085E4;
    case 0x800085E8u: goto label_800085E8;
    case 0x800085ECu: goto label_800085EC;
    case 0x800085F0u: goto label_800085F0;
    case 0x800085F4u: goto label_800085F4;
    case 0x800085F8u: goto label_800085F8;
    case 0x800085FCu: goto label_800085FC;
    case 0x80008600u: goto label_80008600;
    case 0x80008604u: goto label_80008604;
    case 0x80008608u: goto label_80008608;
    case 0x8000860Cu: goto label_8000860C;
    case 0x80008610u: goto label_80008610;
    case 0x80008614u: goto label_80008614;
    case 0x80008618u: goto label_80008618;
    case 0x8000861Cu: goto label_8000861C;
    case 0x80008620u: goto label_80008620;
    case 0x80008624u: goto label_80008624;
    case 0x80008628u: goto label_80008628;
    case 0x8000862Cu: goto label_8000862C;
    case 0x80008630u: goto label_80008630;
    case 0x80008634u: goto label_80008634;
    case 0x80008638u: goto label_80008638;
    case 0x8000863Cu: goto label_8000863C;
    case 0x80008640u: goto label_80008640;
    case 0x80008644u: goto label_80008644;
    case 0x80008648u: goto label_80008648;
    case 0x8000864Cu: goto label_8000864C;
    case 0x80008650u: goto label_80008650;
    case 0x80008654u: goto label_80008654;
    case 0x80008658u: goto label_80008658;
    case 0x8000865Cu: goto label_8000865C;
    case 0x80008660u: goto label_80008660;
    case 0x80008664u: goto label_80008664;
    case 0x80008668u: goto label_80008668;
    case 0x8000866Cu: goto label_8000866C;
    case 0x80008670u: goto label_80008670;
    case 0x80008674u: goto label_80008674;
    case 0x80008678u: goto label_80008678;
    case 0x8000867Cu: goto label_8000867C;
    case 0x80008680u: goto label_80008680;
    case 0x80008684u: goto label_80008684;
    case 0x80008688u: goto label_80008688;
    case 0x8000868Cu: goto label_8000868C;
    case 0x80008690u: goto label_80008690;
    case 0x80008694u: goto label_80008694;
    case 0x80008698u: goto label_80008698;
    case 0x8000869Cu: goto label_8000869C;
    case 0x800086A0u: goto label_800086A0;
    case 0x800086A4u: goto label_800086A4;
    case 0x800086A8u: goto label_800086A8;
    case 0x800086ACu: goto label_800086AC;
    case 0x800086B0u: goto label_800086B0;
    case 0x800086B4u: goto label_800086B4;
    case 0x800086B8u: goto label_800086B8;
    case 0x800086BCu: goto label_800086BC;
    case 0x800086C0u: goto label_800086C0;
    case 0x800086C4u: goto label_800086C4;
    case 0x800086C8u: goto label_800086C8;
    case 0x800086CCu: goto label_800086CC;
    case 0x800086D0u: goto label_800086D0;
    case 0x800086D4u: goto label_800086D4;
    case 0x800086D8u: goto label_800086D8;
    case 0x800086DCu: goto label_800086DC;
    case 0x800086E0u: goto label_800086E0;
    case 0x800086E4u: goto label_800086E4;
    case 0x800086E8u: goto label_800086E8;
    case 0x800086ECu: goto label_800086EC;
    case 0x800086F0u: goto label_800086F0;
    case 0x800086F4u: goto label_800086F4;
    case 0x800086F8u: goto label_800086F8;
    case 0x800086FCu: goto label_800086FC;
    case 0x80008700u: goto label_80008700;
    case 0x80008704u: goto label_80008704;
    case 0x80008708u: goto label_80008708;
    case 0x8000870Cu: goto label_8000870C;
    case 0x80008710u: goto label_80008710;
    case 0x80008714u: goto label_80008714;
    case 0x80008718u: goto label_80008718;
    case 0x8000871Cu: goto label_8000871C;
    case 0x80008720u: goto label_80008720;
    case 0x80008724u: goto label_80008724;
    case 0x80008728u: goto label_80008728;
    case 0x8000872Cu: goto label_8000872C;
    case 0x80008730u: goto label_80008730;
    case 0x80008734u: goto label_80008734;
    case 0x80008738u: goto label_80008738;
    case 0x8000873Cu: goto label_8000873C;
    case 0x80008740u: goto label_80008740;
    case 0x80008744u: goto label_80008744;
    case 0x80008748u: goto label_80008748;
    case 0x8000874Cu: goto label_8000874C;
    case 0x80008750u: goto label_80008750;
    case 0x80008754u: goto label_80008754;
    case 0x80008758u: goto label_80008758;
    case 0x8000875Cu: goto label_8000875C;
    case 0x80008760u: goto label_80008760;
    case 0x80008764u: goto label_80008764;
    case 0x80008768u: goto label_80008768;
    case 0x8000876Cu: goto label_8000876C;
    case 0x80008770u: goto label_80008770;
    case 0x80008774u: goto label_80008774;
    case 0x80008778u: goto label_80008778;
    case 0x8000877Cu: goto label_8000877C;
    case 0x80008780u: goto label_80008780;
    case 0x80008784u: goto label_80008784;
    case 0x80008788u: goto label_80008788;
    case 0x8000878Cu: goto label_8000878C;
    case 0x80008790u: goto label_80008790;
    case 0x80008794u: goto label_80008794;
    case 0x80008798u: goto label_80008798;
    case 0x8000879Cu: goto label_8000879C;
    case 0x800087A0u: goto label_800087A0;
    case 0x800087A4u: goto label_800087A4;
    case 0x800087A8u: goto label_800087A8;
    case 0x800087ACu: goto label_800087AC;
    case 0x800087B0u: goto label_800087B0;
    case 0x800087B4u: goto label_800087B4;
    case 0x800087B8u: goto label_800087B8;
    case 0x800087BCu: goto label_800087BC;
    case 0x800087C0u: goto label_800087C0;
    case 0x800087C4u: goto label_800087C4;
    case 0x800087C8u: goto label_800087C8;
    case 0x800087CCu: goto label_800087CC;
    case 0x800087D0u: goto label_800087D0;
    case 0x800087D4u: goto label_800087D4;
    case 0x800087D8u: goto label_800087D8;
    case 0x800087DCu: goto label_800087DC;
    case 0x800087E0u: goto label_800087E0;
    case 0x800087E4u: goto label_800087E4;
    case 0x800087E8u: goto label_800087E8;
    case 0x800087ECu: goto label_800087EC;
    case 0x800087F0u: goto label_800087F0;
    case 0x800087F4u: goto label_800087F4;
    case 0x800087F8u: goto label_800087F8;
    case 0x800087FCu: goto label_800087FC;
    case 0x80008800u: goto label_80008800;
    case 0x80008804u: goto label_80008804;
    case 0x80008808u: goto label_80008808;
    case 0x8000880Cu: goto label_8000880C;
    case 0x80008810u: goto label_80008810;
    case 0x80008814u: goto label_80008814;
    case 0x80008818u: goto label_80008818;
    case 0x8000881Cu: goto label_8000881C;
    case 0x80008820u: goto label_80008820;
    case 0x80008824u: goto label_80008824;
    case 0x80008828u: goto label_80008828;
    case 0x8000882Cu: goto label_8000882C;
    case 0x80008830u: goto label_80008830;
    case 0x80008834u: goto label_80008834;
    case 0x80008838u: goto label_80008838;
    case 0x8000883Cu: goto label_8000883C;
    case 0x80008840u: goto label_80008840;
    case 0x80008844u: goto label_80008844;
    case 0x80008848u: goto label_80008848;
    case 0x8000884Cu: goto label_8000884C;
    case 0x80008850u: goto label_80008850;
    case 0x80008854u: goto label_80008854;
    case 0x80008858u: goto label_80008858;
    case 0x8000885Cu: goto label_8000885C;
    case 0x80008860u: goto label_80008860;
    case 0x80008864u: goto label_80008864;
    case 0x80008868u: goto label_80008868;
    case 0x8000886Cu: goto label_8000886C;
    case 0x80008870u: goto label_80008870;
    case 0x80008874u: goto label_80008874;
    case 0x80008878u: goto label_80008878;
    case 0x8000887Cu: goto label_8000887C;
    case 0x80008880u: goto label_80008880;
    case 0x80008884u: goto label_80008884;
    case 0x80008888u: goto label_80008888;
    case 0x8000888Cu: goto label_8000888C;
    case 0x80008890u: goto label_80008890;
    case 0x80008894u: goto label_80008894;
    case 0x80008898u: goto label_80008898;
    case 0x8000889Cu: goto label_8000889C;
    case 0x800088A0u: goto label_800088A0;
    case 0x800088A4u: goto label_800088A4;
    case 0x800088A8u: goto label_800088A8;
    case 0x800088ACu: goto label_800088AC;
    case 0x800088B0u: goto label_800088B0;
    case 0x800088B4u: goto label_800088B4;
    case 0x800088B8u: goto label_800088B8;
    case 0x800088BCu: goto label_800088BC;
    case 0x800088C0u: goto label_800088C0;
    case 0x800088C4u: goto label_800088C4;
    case 0x800088C8u: goto label_800088C8;
    case 0x800088CCu: goto label_800088CC;
    case 0x800088D0u: goto label_800088D0;
    case 0x800088D4u: goto label_800088D4;
    case 0x800088D8u: goto label_800088D8;
    case 0x800088DCu: goto label_800088DC;
    case 0x800088E0u: goto label_800088E0;
    case 0x800088E4u: goto label_800088E4;
    case 0x800088E8u: goto label_800088E8;
    case 0x800088ECu: goto label_800088EC;
    case 0x800088F0u: goto label_800088F0;
    case 0x800088F4u: goto label_800088F4;
    case 0x800088F8u: goto label_800088F8;
    case 0x800088FCu: goto label_800088FC;
    case 0x80008900u: goto label_80008900;
    case 0x80008904u: goto label_80008904;
    case 0x80008908u: goto label_80008908;
    case 0x8000890Cu: goto label_8000890C;
    case 0x80008910u: goto label_80008910;
    case 0x80008914u: goto label_80008914;
    case 0x80008918u: goto label_80008918;
    case 0x8000891Cu: goto label_8000891C;
    case 0x80008920u: goto label_80008920;
    case 0x80008924u: goto label_80008924;
    case 0x80008928u: goto label_80008928;
    case 0x8000892Cu: goto label_8000892C;
    case 0x80008930u: goto label_80008930;
    case 0x80008934u: goto label_80008934;
    case 0x80008938u: goto label_80008938;
    case 0x8000893Cu: goto label_8000893C;
    case 0x80008940u: goto label_80008940;
    case 0x80008944u: goto label_80008944;
    case 0x80008948u: goto label_80008948;
    case 0x8000894Cu: goto label_8000894C;
    case 0x80008950u: goto label_80008950;
    case 0x80008954u: goto label_80008954;
    case 0x80008958u: goto label_80008958;
    case 0x8000895Cu: goto label_8000895C;
    case 0x80008960u: goto label_80008960;
    case 0x80008964u: goto label_80008964;
    case 0x80008968u: goto label_80008968;
    case 0x8000896Cu: goto label_8000896C;
    case 0x80008970u: goto label_80008970;
    case 0x80008974u: goto label_80008974;
    case 0x80008978u: goto label_80008978;
    case 0x8000897Cu: goto label_8000897C;
    case 0x80008980u: goto label_80008980;
    case 0x80008984u: goto label_80008984;
    case 0x80008988u: goto label_80008988;
    case 0x8000898Cu: goto label_8000898C;
    case 0x80008990u: goto label_80008990;
    case 0x80008994u: goto label_80008994;
    case 0x80008998u: goto label_80008998;
    case 0x8000899Cu: goto label_8000899C;
    case 0x800089A0u: goto label_800089A0;
    case 0x800089A4u: goto label_800089A4;
    case 0x800089A8u: goto label_800089A8;
    case 0x800089ACu: goto label_800089AC;
    case 0x800089B0u: goto label_800089B0;
    case 0x800089B4u: goto label_800089B4;
    case 0x800089B8u: goto label_800089B8;
    case 0x800089BCu: goto label_800089BC;
    case 0x800089C0u: goto label_800089C0;
    case 0x800089C4u: goto label_800089C4;
    case 0x800089C8u: goto label_800089C8;
    case 0x800089CCu: goto label_800089CC;
    case 0x800089D0u: goto label_800089D0;
    case 0x800089D4u: goto label_800089D4;
    case 0x800089D8u: goto label_800089D8;
    case 0x800089DCu: goto label_800089DC;
    case 0x800089E0u: goto label_800089E0;
    case 0x800089E4u: goto label_800089E4;
    case 0x800089E8u: goto label_800089E8;
    case 0x800089ECu: goto label_800089EC;
    case 0x800089F0u: goto label_800089F0;
    case 0x800089F4u: goto label_800089F4;
    case 0x800089F8u: goto label_800089F8;
    case 0x800089FCu: goto label_800089FC;
    case 0x80008A00u: goto label_80008A00;
    case 0x80008A04u: goto label_80008A04;
    case 0x80008A08u: goto label_80008A08;
    case 0x80008A0Cu: goto label_80008A0C;
    case 0x80008A10u: goto label_80008A10;
    case 0x80008A14u: goto label_80008A14;
    case 0x80008A18u: goto label_80008A18;
    case 0x80008A1Cu: goto label_80008A1C;
    case 0x80008A20u: goto label_80008A20;
    case 0x80008A24u: goto label_80008A24;
    case 0x80008A28u: goto label_80008A28;
    case 0x80008A2Cu: goto label_80008A2C;
    case 0x80008A30u: goto label_80008A30;
    case 0x80008A34u: goto label_80008A34;
    case 0x80008A38u: goto label_80008A38;
    case 0x80008A3Cu: goto label_80008A3C;
    case 0x80008A40u: goto label_80008A40;
    case 0x80008A44u: goto label_80008A44;
    case 0x80008A48u: goto label_80008A48;
    case 0x80008A4Cu: goto label_80008A4C;
    case 0x80008A50u: goto label_80008A50;
    case 0x80008A54u: goto label_80008A54;
    case 0x80008A58u: goto label_80008A58;
    case 0x80008A5Cu: goto label_80008A5C;
    case 0x80008A60u: goto label_80008A60;
    case 0x80008A64u: goto label_80008A64;
    case 0x80008A68u: goto label_80008A68;
    case 0x80008A6Cu: goto label_80008A6C;
    case 0x80008A70u: goto label_80008A70;
    case 0x80008A74u: goto label_80008A74;
    case 0x80008A78u: goto label_80008A78;
    case 0x80008A7Cu: goto label_80008A7C;
    case 0x80008A80u: goto label_80008A80;
    case 0x80008A84u: goto label_80008A84;
    case 0x80008A88u: goto label_80008A88;
    case 0x80008A8Cu: goto label_80008A8C;
    case 0x80008A90u: goto label_80008A90;
    case 0x80008A94u: goto label_80008A94;
    case 0x80008A98u: goto label_80008A98;
    case 0x80008A9Cu: goto label_80008A9C;
    case 0x80008AA0u: goto label_80008AA0;
    case 0x80008AA4u: goto label_80008AA4;
    case 0x80008AA8u: goto label_80008AA8;
    case 0x80008AACu: goto label_80008AAC;
    case 0x80008AB0u: goto label_80008AB0;
    case 0x80008AB4u: goto label_80008AB4;
    case 0x80008AB8u: goto label_80008AB8;
    case 0x80008ABCu: goto label_80008ABC;
    case 0x80008AC0u: goto label_80008AC0;
    case 0x80008AC4u: goto label_80008AC4;
    case 0x80008AC8u: goto label_80008AC8;
    case 0x80008ACCu: goto label_80008ACC;
    case 0x80008AD0u: goto label_80008AD0;
    case 0x80008AD4u: goto label_80008AD4;
    case 0x80008AD8u: goto label_80008AD8;
    case 0x80008ADCu: goto label_80008ADC;
    case 0x80008AE0u: goto label_80008AE0;
    case 0x80008AE4u: goto label_80008AE4;
    case 0x80008AE8u: goto label_80008AE8;
    case 0x80008AECu: goto label_80008AEC;
    case 0x80008AF0u: goto label_80008AF0;
    case 0x80008AF4u: goto label_80008AF4;
    case 0x80008AF8u: goto label_80008AF8;
    case 0x80008AFCu: goto label_80008AFC;
    case 0x80008B00u: goto label_80008B00;
    case 0x80008B04u: goto label_80008B04;
    case 0x80008B08u: goto label_80008B08;
    case 0x80008B0Cu: goto label_80008B0C;
    case 0x80008B10u: goto label_80008B10;
    case 0x80008B14u: goto label_80008B14;
    case 0x80008B18u: goto label_80008B18;
    case 0x80008B1Cu: goto label_80008B1C;
    case 0x80008B20u: goto label_80008B20;
    case 0x80008B24u: goto label_80008B24;
    case 0x80008B28u: goto label_80008B28;
    case 0x80008B2Cu: goto label_80008B2C;
    case 0x80008B30u: goto label_80008B30;
    case 0x80008B34u: goto label_80008B34;
    case 0x80008B38u: goto label_80008B38;
    case 0x80008B3Cu: goto label_80008B3C;
    case 0x80008B40u: goto label_80008B40;
    case 0x80008B44u: goto label_80008B44;
    case 0x80008B48u: goto label_80008B48;
    case 0x80008B4Cu: goto label_80008B4C;
    case 0x80008B50u: goto label_80008B50;
    case 0x80008B54u: goto label_80008B54;
    case 0x80008B58u: goto label_80008B58;
    case 0x80008B5Cu: goto label_80008B5C;
    case 0x80008B60u: goto label_80008B60;
    case 0x80008B64u: goto label_80008B64;
    case 0x80008B68u: goto label_80008B68;
    case 0x80008B6Cu: goto label_80008B6C;
    case 0x80008B70u: goto label_80008B70;
    case 0x80008B74u: goto label_80008B74;
    case 0x80008B78u: goto label_80008B78;
    case 0x80008B7Cu: goto label_80008B7C;
    case 0x80008B80u: goto label_80008B80;
    case 0x80008B84u: goto label_80008B84;
    case 0x80008B88u: goto label_80008B88;
    case 0x80008B8Cu: goto label_80008B8C;
    case 0x80008B90u: goto label_80008B90;
    case 0x80008B94u: goto label_80008B94;
    case 0x80008B98u: goto label_80008B98;
    case 0x80008B9Cu: goto label_80008B9C;
    case 0x80008BA0u: goto label_80008BA0;
    case 0x80008BA4u: goto label_80008BA4;
    case 0x80008BA8u: goto label_80008BA8;
    case 0x80008BACu: goto label_80008BAC;
    case 0x80008BB0u: goto label_80008BB0;
    case 0x80008BB4u: goto label_80008BB4;
    case 0x80008BB8u: goto label_80008BB8;
    case 0x80008BBCu: goto label_80008BBC;
    case 0x80008BC0u: goto label_80008BC0;
    case 0x80008BC4u: goto label_80008BC4;
    case 0x80008BC8u: goto label_80008BC8;
    case 0x80008BCCu: goto label_80008BCC;
    case 0x80008BD0u: goto label_80008BD0;
    case 0x80008BD4u: goto label_80008BD4;
    case 0x80008BD8u: goto label_80008BD8;
    case 0x80008BDCu: goto label_80008BDC;
    case 0x80008BE0u: goto label_80008BE0;
    case 0x80008BE4u: goto label_80008BE4;
    case 0x80008BE8u: goto label_80008BE8;
    case 0x80008BECu: goto label_80008BEC;
    case 0x80008BF0u: goto label_80008BF0;
    case 0x80008BF4u: goto label_80008BF4;
    case 0x80008BF8u: goto label_80008BF8;
    case 0x80008BFCu: goto label_80008BFC;
    case 0x80008C00u: goto label_80008C00;
    case 0x80008C04u: goto label_80008C04;
    case 0x80008C08u: goto label_80008C08;
    case 0x80008C0Cu: goto label_80008C0C;
    case 0x80008C10u: goto label_80008C10;
    case 0x80008C14u: goto label_80008C14;
    case 0x80008C18u: goto label_80008C18;
    case 0x80008C1Cu: goto label_80008C1C;
    case 0x80008C20u: goto label_80008C20;
    case 0x80008C24u: goto label_80008C24;
    case 0x80008C28u: goto label_80008C28;
    case 0x80008C2Cu: goto label_80008C2C;
    case 0x80008C30u: goto label_80008C30;
    case 0x80008C34u: goto label_80008C34;
    case 0x80008C38u: goto label_80008C38;
    case 0x80008C3Cu: goto label_80008C3C;
    case 0x80008C40u: goto label_80008C40;
    case 0x80008C44u: goto label_80008C44;
    case 0x80008C48u: goto label_80008C48;
    case 0x80008C4Cu: goto label_80008C4C;
    case 0x80008C50u: goto label_80008C50;
    case 0x80008C54u: goto label_80008C54;
    case 0x80008C58u: goto label_80008C58;
    case 0x80008C5Cu: goto label_80008C5C;
    case 0x80008C60u: goto label_80008C60;
    case 0x80008C64u: goto label_80008C64;
    case 0x80008C68u: goto label_80008C68;
    case 0x80008C6Cu: goto label_80008C6C;
    case 0x80008C70u: goto label_80008C70;
    case 0x80008C74u: goto label_80008C74;
    case 0x80008C78u: goto label_80008C78;
    case 0x80008C7Cu: goto label_80008C7C;
    case 0x80008C80u: goto label_80008C80;
    case 0x80008C84u: goto label_80008C84;
    case 0x80008C88u: goto label_80008C88;
    case 0x80008C8Cu: goto label_80008C8C;
    case 0x80008C90u: goto label_80008C90;
    case 0x80008C94u: goto label_80008C94;
    case 0x80008C98u: goto label_80008C98;
    case 0x80008C9Cu: goto label_80008C9C;
    case 0x80008CA0u: goto label_80008CA0;
    case 0x80008CA4u: goto label_80008CA4;
    case 0x80008CA8u: goto label_80008CA8;
    case 0x80008CACu: goto label_80008CAC;
    case 0x80008CB0u: goto label_80008CB0;
    case 0x80008CB4u: goto label_80008CB4;
    case 0x80008CB8u: goto label_80008CB8;
    case 0x80008CBCu: goto label_80008CBC;
    case 0x80008CC0u: goto label_80008CC0;
    case 0x80008CC4u: goto label_80008CC4;
    case 0x80008CC8u: goto label_80008CC8;
    case 0x80008CCCu: goto label_80008CCC;
    case 0x80008CD0u: goto label_80008CD0;
    case 0x80008CD4u: goto label_80008CD4;
    case 0x80008CD8u: goto label_80008CD8;
    case 0x80008CDCu: goto label_80008CDC;
    case 0x80008CE0u: goto label_80008CE0;
    case 0x80008CE4u: goto label_80008CE4;
    case 0x80008CE8u: goto label_80008CE8;
    case 0x80008CECu: goto label_80008CEC;
    case 0x80008CF0u: goto label_80008CF0;
    case 0x80008CF4u: goto label_80008CF4;
    case 0x80008CF8u: goto label_80008CF8;
    case 0x80008CFCu: goto label_80008CFC;
    case 0x80008D00u: goto label_80008D00;
    case 0x80008D04u: goto label_80008D04;
    case 0x80008D08u: goto label_80008D08;
    case 0x80008D0Cu: goto label_80008D0C;
    case 0x80008D10u: goto label_80008D10;
    case 0x80008D14u: goto label_80008D14;
    case 0x80008D18u: goto label_80008D18;
    case 0x80008D1Cu: goto label_80008D1C;
    case 0x80008D20u: goto label_80008D20;
    case 0x80008D24u: goto label_80008D24;
    case 0x80008D28u: goto label_80008D28;
    case 0x80008D2Cu: goto label_80008D2C;
    case 0x80008D30u: goto label_80008D30;
    case 0x80008D34u: goto label_80008D34;
    case 0x80008D38u: goto label_80008D38;
    case 0x80008D3Cu: goto label_80008D3C;
    case 0x80008D40u: goto label_80008D40;
    case 0x80008D44u: goto label_80008D44;
    case 0x80008D48u: goto label_80008D48;
    case 0x80008D4Cu: goto label_80008D4C;
    case 0x80008D50u: goto label_80008D50;
    case 0x80008D54u: goto label_80008D54;
    case 0x80008D58u: goto label_80008D58;
    case 0x80008D5Cu: goto label_80008D5C;
    case 0x80008D60u: goto label_80008D60;
    case 0x80008D64u: goto label_80008D64;
    case 0x80008D68u: goto label_80008D68;
    case 0x80008D6Cu: goto label_80008D6C;
    case 0x80008D70u: goto label_80008D70;
    case 0x80008D74u: goto label_80008D74;
    case 0x80008D78u: goto label_80008D78;
    case 0x80008D7Cu: goto label_80008D7C;
    case 0x80008D80u: goto label_80008D80;
    case 0x80008D84u: goto label_80008D84;
    case 0x80008D88u: goto label_80008D88;
    case 0x80008D8Cu: goto label_80008D8C;
    case 0x80008D90u: goto label_80008D90;
    case 0x80008D94u: goto label_80008D94;
    case 0x80008D98u: goto label_80008D98;
    case 0x80008D9Cu: goto label_80008D9C;
    case 0x80008DA0u: goto label_80008DA0;
    case 0x80008DA4u: goto label_80008DA4;
    case 0x80008DA8u: goto label_80008DA8;
    case 0x80008DACu: goto label_80008DAC;
    case 0x80008DB0u: goto label_80008DB0;
    case 0x80008DB4u: goto label_80008DB4;
    case 0x80008DB8u: goto label_80008DB8;
    case 0x80008DBCu: goto label_80008DBC;
    case 0x80008DC0u: goto label_80008DC0;
    case 0x80008DC4u: goto label_80008DC4;
    case 0x80008DC8u: goto label_80008DC8;
    case 0x80008DCCu: goto label_80008DCC;
    case 0x80008DD0u: goto label_80008DD0;
    case 0x80008DD4u: goto label_80008DD4;
    case 0x80008DD8u: goto label_80008DD8;
    case 0x80008DDCu: goto label_80008DDC;
    case 0x80008DE0u: goto label_80008DE0;
    case 0x80008DE4u: goto label_80008DE4;
    case 0x80008DE8u: goto label_80008DE8;
    case 0x80008DECu: goto label_80008DEC;
    case 0x80008DF0u: goto label_80008DF0;
    case 0x80008DF4u: goto label_80008DF4;
    case 0x80008DF8u: goto label_80008DF8;
    case 0x80008DFCu: goto label_80008DFC;
    case 0x80008E00u: goto label_80008E00;
    case 0x80008E04u: goto label_80008E04;
    case 0x80008E08u: goto label_80008E08;
    case 0x80008E0Cu: goto label_80008E0C;
    case 0x80008E10u: goto label_80008E10;
    case 0x80008E14u: goto label_80008E14;
    case 0x80008E18u: goto label_80008E18;
    case 0x80008E1Cu: goto label_80008E1C;
    case 0x80008E20u: goto label_80008E20;
    case 0x80008E24u: goto label_80008E24;
    case 0x80008E28u: goto label_80008E28;
    case 0x80008E2Cu: goto label_80008E2C;
    case 0x80008E30u: goto label_80008E30;
    case 0x80008E34u: goto label_80008E34;
    case 0x80008E38u: goto label_80008E38;
    case 0x80008E3Cu: goto label_80008E3C;
    case 0x80008E40u: goto label_80008E40;
    case 0x80008E44u: goto label_80008E44;
    case 0x80008E48u: goto label_80008E48;
    case 0x80008E4Cu: goto label_80008E4C;
    case 0x80008E50u: goto label_80008E50;
    case 0x80008E54u: goto label_80008E54;
    case 0x80008E58u: goto label_80008E58;
    case 0x80008E5Cu: goto label_80008E5C;
    case 0x80008E60u: goto label_80008E60;
    case 0x80008E64u: goto label_80008E64;
    case 0x80008E68u: goto label_80008E68;
    case 0x80008E6Cu: goto label_80008E6C;
    case 0x80008E70u: goto label_80008E70;
    case 0x80008E74u: goto label_80008E74;
    case 0x80008E78u: goto label_80008E78;
    case 0x80008E7Cu: goto label_80008E7C;
    case 0x80008E80u: goto label_80008E80;
    case 0x80008E84u: goto label_80008E84;
    case 0x80008E88u: goto label_80008E88;
    case 0x80008E8Cu: goto label_80008E8C;
    case 0x80008E90u: goto label_80008E90;
    case 0x80008E94u: goto label_80008E94;
    case 0x80008E98u: goto label_80008E98;
    case 0x80008E9Cu: goto label_80008E9C;
    case 0x80008EA0u: goto label_80008EA0;
    case 0x80008EA4u: goto label_80008EA4;
    case 0x80008EA8u: goto label_80008EA8;
    case 0x80008EACu: goto label_80008EAC;
    case 0x80008EB0u: goto label_80008EB0;
    case 0x80008EB4u: goto label_80008EB4;
    case 0x80008EB8u: goto label_80008EB8;
    case 0x80008EBCu: goto label_80008EBC;
    case 0x80008EC0u: goto label_80008EC0;
    case 0x80008EC4u: goto label_80008EC4;
    case 0x80008EC8u: goto label_80008EC8;
    case 0x80008ECCu: goto label_80008ECC;
    case 0x80008ED0u: goto label_80008ED0;
    case 0x80008ED4u: goto label_80008ED4;
    case 0x80008ED8u: goto label_80008ED8;
    case 0x80008EDCu: goto label_80008EDC;
    case 0x80008EE0u: goto label_80008EE0;
    case 0x80008EE4u: goto label_80008EE4;
    case 0x80008EE8u: goto label_80008EE8;
    case 0x80008EECu: goto label_80008EEC;
    case 0x80008EF0u: goto label_80008EF0;
    case 0x80008EF4u: goto label_80008EF4;
    case 0x80008EF8u: goto label_80008EF8;
    case 0x80008EFCu: goto label_80008EFC;
    case 0x80008F00u: goto label_80008F00;
    case 0x80008F04u: goto label_80008F04;
    case 0x80008F08u: goto label_80008F08;
    case 0x80008F0Cu: goto label_80008F0C;
    case 0x80008F10u: goto label_80008F10;
    case 0x80008F14u: goto label_80008F14;
    case 0x80008F18u: goto label_80008F18;
    case 0x80008F1Cu: goto label_80008F1C;
    case 0x80008F20u: goto label_80008F20;
    case 0x80008F24u: goto label_80008F24;
    case 0x80008F28u: goto label_80008F28;
    case 0x80008F2Cu: goto label_80008F2C;
    case 0x80008F30u: goto label_80008F30;
    case 0x80008F34u: goto label_80008F34;
    case 0x80008F38u: goto label_80008F38;
    case 0x80008F3Cu: goto label_80008F3C;
    case 0x80008F40u: goto label_80008F40;
    case 0x80008F44u: goto label_80008F44;
    case 0x80008F48u: goto label_80008F48;
    case 0x80008F4Cu: goto label_80008F4C;
    case 0x80008F50u: goto label_80008F50;
    case 0x80008F54u: goto label_80008F54;
    case 0x80008F58u: goto label_80008F58;
    case 0x80008F5Cu: goto label_80008F5C;
    case 0x80008F60u: goto label_80008F60;
    case 0x80008F64u: goto label_80008F64;
    case 0x80008F68u: goto label_80008F68;
    case 0x80008F6Cu: goto label_80008F6C;
    case 0x80008F70u: goto label_80008F70;
    case 0x80008F74u: goto label_80008F74;
    case 0x80008F78u: goto label_80008F78;
    case 0x80008F7Cu: goto label_80008F7C;
    case 0x80008F80u: goto label_80008F80;
    case 0x80008F84u: goto label_80008F84;
    case 0x80008F88u: goto label_80008F88;
    case 0x80008F8Cu: goto label_80008F8C;
    case 0x80008F90u: goto label_80008F90;
    case 0x80008F94u: goto label_80008F94;
    case 0x80008F98u: goto label_80008F98;
    case 0x80008F9Cu: goto label_80008F9C;
    case 0x80008FA0u: goto label_80008FA0;
    case 0x80008FA4u: goto label_80008FA4;
    case 0x80008FA8u: goto label_80008FA8;
    case 0x80008FACu: goto label_80008FAC;
    case 0x80008FB0u: goto label_80008FB0;
    case 0x80008FB4u: goto label_80008FB4;
    case 0x80008FB8u: goto label_80008FB8;
    case 0x80008FBCu: goto label_80008FBC;
    case 0x80008FC0u: goto label_80008FC0;
    case 0x80008FC4u: goto label_80008FC4;
    case 0x80008FC8u: goto label_80008FC8;
    case 0x80008FCCu: goto label_80008FCC;
    case 0x80008FD0u: goto label_80008FD0;
    case 0x80008FD4u: goto label_80008FD4;
    case 0x80008FD8u: goto label_80008FD8;
    case 0x80008FDCu: goto label_80008FDC;
    case 0x80008FE0u: goto label_80008FE0;
    case 0x80008FE4u: goto label_80008FE4;
    case 0x80008FE8u: goto label_80008FE8;
    case 0x80008FECu: goto label_80008FEC;
    case 0x80008FF0u: goto label_80008FF0;
    case 0x80008FF4u: goto label_80008FF4;
    case 0x80008FF8u: goto label_80008FF8;
    case 0x80008FFCu: goto label_80008FFC;
    case 0x80009000u: goto label_80009000;
    case 0x80009004u: goto label_80009004;
    case 0x80009008u: goto label_80009008;
    case 0x8000900Cu: goto label_8000900C;
    case 0x80009010u: goto label_80009010;
    case 0x80009014u: goto label_80009014;
    case 0x80009018u: goto label_80009018;
    case 0x8000901Cu: goto label_8000901C;
    case 0x80009020u: goto label_80009020;
    case 0x80009024u: goto label_80009024;
    case 0x80009028u: goto label_80009028;
    case 0x8000902Cu: goto label_8000902C;
    case 0x80009030u: goto label_80009030;
    case 0x80009034u: goto label_80009034;
    case 0x80009038u: goto label_80009038;
    case 0x8000903Cu: goto label_8000903C;
    case 0x80009040u: goto label_80009040;
    case 0x80009044u: goto label_80009044;
    case 0x80009048u: goto label_80009048;
    case 0x8000904Cu: goto label_8000904C;
    case 0x80009050u: goto label_80009050;
    case 0x80009054u: goto label_80009054;
    case 0x80009058u: goto label_80009058;
    case 0x8000905Cu: goto label_8000905C;
    case 0x80009060u: goto label_80009060;
    case 0x80009064u: goto label_80009064;
    case 0x80009068u: goto label_80009068;
    case 0x8000906Cu: goto label_8000906C;
    case 0x80009070u: goto label_80009070;
    case 0x80009074u: goto label_80009074;
    case 0x80009078u: goto label_80009078;
    case 0x8000907Cu: goto label_8000907C;
    case 0x80009080u: goto label_80009080;
    case 0x80009084u: goto label_80009084;
    case 0x80009088u: goto label_80009088;
    case 0x8000908Cu: goto label_8000908C;
    case 0x80009090u: goto label_80009090;
    case 0x80009094u: goto label_80009094;
    case 0x80009098u: goto label_80009098;
    case 0x8000909Cu: goto label_8000909C;
    case 0x800090A0u: goto label_800090A0;
    case 0x800090A4u: goto label_800090A4;
    case 0x800090A8u: goto label_800090A8;
    case 0x800090ACu: goto label_800090AC;
    case 0x800090B0u: goto label_800090B0;
    case 0x800090B4u: goto label_800090B4;
    case 0x800090B8u: goto label_800090B8;
    case 0x800090BCu: goto label_800090BC;
    case 0x800090C0u: goto label_800090C0;
    case 0x800090C4u: goto label_800090C4;
    case 0x800090C8u: goto label_800090C8;
    case 0x800090CCu: goto label_800090CC;
    case 0x800090D0u: goto label_800090D0;
    case 0x800090D4u: goto label_800090D4;
    case 0x800090D8u: goto label_800090D8;
    case 0x800090DCu: goto label_800090DC;
    case 0x800090E0u: goto label_800090E0;
    case 0x800090E4u: goto label_800090E4;
    case 0x800090E8u: goto label_800090E8;
    case 0x800090ECu: goto label_800090EC;
    case 0x800090F0u: goto label_800090F0;
    case 0x800090F4u: goto label_800090F4;
    case 0x800090F8u: goto label_800090F8;
    case 0x800090FCu: goto label_800090FC;
    case 0x80009100u: goto label_80009100;
    case 0x80009104u: goto label_80009104;
    case 0x80009108u: goto label_80009108;
    case 0x8000910Cu: goto label_8000910C;
    case 0x80009110u: goto label_80009110;
    case 0x80009114u: goto label_80009114;
    case 0x80009118u: goto label_80009118;
    case 0x8000911Cu: goto label_8000911C;
    case 0x80009120u: goto label_80009120;
    case 0x80009124u: goto label_80009124;
    case 0x80009128u: goto label_80009128;
    case 0x8000912Cu: goto label_8000912C;
    case 0x80009130u: goto label_80009130;
    case 0x80009134u: goto label_80009134;
    case 0x80009138u: goto label_80009138;
    case 0x8000913Cu: goto label_8000913C;
    case 0x80009140u: goto label_80009140;
    case 0x80009144u: goto label_80009144;
    case 0x80009148u: goto label_80009148;
    case 0x8000914Cu: goto label_8000914C;
    case 0x80009150u: goto label_80009150;
    case 0x80009154u: goto label_80009154;
    case 0x80009158u: goto label_80009158;
    case 0x8000915Cu: goto label_8000915C;
    case 0x80009160u: goto label_80009160;
    case 0x80009164u: goto label_80009164;
    case 0x80009168u: goto label_80009168;
    case 0x8000916Cu: goto label_8000916C;
    case 0x80009170u: goto label_80009170;
    case 0x80009174u: goto label_80009174;
    case 0x80009178u: goto label_80009178;
    case 0x8000917Cu: goto label_8000917C;
    case 0x80009180u: goto label_80009180;
    case 0x80009184u: goto label_80009184;
    case 0x80009188u: goto label_80009188;
    case 0x8000918Cu: goto label_8000918C;
    case 0x80009190u: goto label_80009190;
    case 0x80009194u: goto label_80009194;
    case 0x80009198u: goto label_80009198;
    case 0x8000919Cu: goto label_8000919C;
    case 0x800091A0u: goto label_800091A0;
    case 0x800091A4u: goto label_800091A4;
    case 0x800091A8u: goto label_800091A8;
    case 0x800091ACu: goto label_800091AC;
    case 0x800091B0u: goto label_800091B0;
    case 0x800091B4u: goto label_800091B4;
    case 0x800091B8u: goto label_800091B8;
    case 0x800091BCu: goto label_800091BC;
    case 0x800091C0u: goto label_800091C0;
    case 0x800091C4u: goto label_800091C4;
    case 0x800091C8u: goto label_800091C8;
    case 0x800091CCu: goto label_800091CC;
    case 0x800091D0u: goto label_800091D0;
    case 0x800091D4u: goto label_800091D4;
    case 0x800091D8u: goto label_800091D8;
    case 0x800091DCu: goto label_800091DC;
    case 0x800091E0u: goto label_800091E0;
    case 0x800091E4u: goto label_800091E4;
    case 0x800091E8u: goto label_800091E8;
    case 0x800091ECu: goto label_800091EC;
    case 0x800091F0u: goto label_800091F0;
    case 0x800091F4u: goto label_800091F4;
    case 0x800091F8u: goto label_800091F8;
    case 0x800091FCu: goto label_800091FC;
    case 0x80009200u: goto label_80009200;
    case 0x80009204u: goto label_80009204;
    case 0x80009208u: goto label_80009208;
    case 0x8000920Cu: goto label_8000920C;
    case 0x80009210u: goto label_80009210;
    case 0x80009214u: goto label_80009214;
    case 0x80009218u: goto label_80009218;
    case 0x8000921Cu: goto label_8000921C;
    case 0x80009220u: goto label_80009220;
    case 0x80009224u: goto label_80009224;
    case 0x80009228u: goto label_80009228;
    case 0x8000922Cu: goto label_8000922C;
    case 0x80009230u: goto label_80009230;
    case 0x80009234u: goto label_80009234;
    case 0x80009238u: goto label_80009238;
    case 0x8000923Cu: goto label_8000923C;
    case 0x80009240u: goto label_80009240;
    case 0x80009244u: goto label_80009244;
    case 0x80009248u: goto label_80009248;
    case 0x8000924Cu: goto label_8000924C;
    case 0x80009250u: goto label_80009250;
    case 0x80009254u: goto label_80009254;
    case 0x80009258u: goto label_80009258;
    case 0x8000925Cu: goto label_8000925C;
    case 0x80009260u: goto label_80009260;
    case 0x80009264u: goto label_80009264;
    case 0x80009268u: goto label_80009268;
    case 0x8000926Cu: goto label_8000926C;
    case 0x80009270u: goto label_80009270;
    case 0x80009274u: goto label_80009274;
    case 0x80009278u: goto label_80009278;
    case 0x8000927Cu: goto label_8000927C;
    case 0x80009280u: goto label_80009280;
    case 0x80009284u: goto label_80009284;
    case 0x80009288u: goto label_80009288;
    case 0x8000928Cu: goto label_8000928C;
    case 0x80009290u: goto label_80009290;
    case 0x80009294u: goto label_80009294;
    case 0x80009298u: goto label_80009298;
    case 0x8000929Cu: goto label_8000929C;
    case 0x800092A0u: goto label_800092A0;
    case 0x800092A4u: goto label_800092A4;
    case 0x800092A8u: goto label_800092A8;
    case 0x800092ACu: goto label_800092AC;
    case 0x800092B0u: goto label_800092B0;
    case 0x800092B4u: goto label_800092B4;
    case 0x800092B8u: goto label_800092B8;
    case 0x800092BCu: goto label_800092BC;
    case 0x800092C0u: goto label_800092C0;
    case 0x800092C4u: goto label_800092C4;
    case 0x800092C8u: goto label_800092C8;
    case 0x800092CCu: goto label_800092CC;
    case 0x800092D0u: goto label_800092D0;
    case 0x800092D4u: goto label_800092D4;
    case 0x800092D8u: goto label_800092D8;
    case 0x800092DCu: goto label_800092DC;
    case 0x800092E0u: goto label_800092E0;
    case 0x800092E4u: goto label_800092E4;
    case 0x800092E8u: goto label_800092E8;
    case 0x800092ECu: goto label_800092EC;
    case 0x800092F0u: goto label_800092F0;
    case 0x800092F4u: goto label_800092F4;
    case 0x800092F8u: goto label_800092F8;
    case 0x800092FCu: goto label_800092FC;
    case 0x80009300u: goto label_80009300;
    case 0x80009304u: goto label_80009304;
    case 0x80009308u: goto label_80009308;
    case 0x8000930Cu: goto label_8000930C;
    case 0x80009310u: goto label_80009310;
    case 0x80009314u: goto label_80009314;
    case 0x80009318u: goto label_80009318;
    case 0x8000931Cu: goto label_8000931C;
    case 0x80009320u: goto label_80009320;
    case 0x80009324u: goto label_80009324;
    case 0x80009328u: goto label_80009328;
    case 0x8000932Cu: goto label_8000932C;
    case 0x80009330u: goto label_80009330;
    case 0x80009334u: goto label_80009334;
    case 0x80009338u: goto label_80009338;
    case 0x8000933Cu: goto label_8000933C;
    case 0x80009340u: goto label_80009340;
    case 0x80009344u: goto label_80009344;
    case 0x80009348u: goto label_80009348;
    case 0x8000934Cu: goto label_8000934C;
    case 0x80009350u: goto label_80009350;
    case 0x80009354u: goto label_80009354;
    case 0x80009358u: goto label_80009358;
    case 0x8000935Cu: goto label_8000935C;
    case 0x80009360u: goto label_80009360;
    case 0x80009364u: goto label_80009364;
    case 0x80009368u: goto label_80009368;
    case 0x8000936Cu: goto label_8000936C;
    case 0x80009370u: goto label_80009370;
    case 0x80009374u: goto label_80009374;
    case 0x80009378u: goto label_80009378;
    case 0x8000937Cu: goto label_8000937C;
    case 0x80009380u: goto label_80009380;
    case 0x80009384u: goto label_80009384;
    case 0x80009388u: goto label_80009388;
    case 0x8000938Cu: goto label_8000938C;
    case 0x80009390u: goto label_80009390;
    case 0x80009394u: goto label_80009394;
    case 0x80009398u: goto label_80009398;
    case 0x8000939Cu: goto label_8000939C;
    case 0x800093A0u: goto label_800093A0;
    case 0x800093A4u: goto label_800093A4;
    case 0x800093A8u: goto label_800093A8;
    case 0x800093ACu: goto label_800093AC;
    case 0x800093B0u: goto label_800093B0;
    case 0x800093B4u: goto label_800093B4;
    case 0x800093B8u: goto label_800093B8;
    case 0x800093BCu: goto label_800093BC;
    case 0x800093C0u: goto label_800093C0;
    case 0x800093C4u: goto label_800093C4;
    case 0x800093C8u: goto label_800093C8;
    case 0x800093CCu: goto label_800093CC;
    case 0x800093D0u: goto label_800093D0;
    case 0x800093D4u: goto label_800093D4;
    case 0x800093D8u: goto label_800093D8;
    case 0x800093DCu: goto label_800093DC;
    case 0x800093E0u: goto label_800093E0;
    case 0x800093E4u: goto label_800093E4;
    case 0x800093E8u: goto label_800093E8;
    case 0x800093ECu: goto label_800093EC;
    case 0x800093F0u: goto label_800093F0;
    case 0x800093F4u: goto label_800093F4;
    case 0x800093F8u: goto label_800093F8;
    case 0x800093FCu: goto label_800093FC;
    case 0x80009400u: goto label_80009400;
    case 0x80009404u: goto label_80009404;
    case 0x80009408u: goto label_80009408;
    case 0x8000940Cu: goto label_8000940C;
    case 0x80009410u: goto label_80009410;
    case 0x80009414u: goto label_80009414;
    case 0x80009418u: goto label_80009418;
    case 0x8000941Cu: goto label_8000941C;
    case 0x80009420u: goto label_80009420;
    case 0x80009424u: goto label_80009424;
    case 0x80009428u: goto label_80009428;
    case 0x8000942Cu: goto label_8000942C;
    case 0x80009430u: goto label_80009430;
    case 0x80009434u: goto label_80009434;
    case 0x80009438u: goto label_80009438;
    case 0x8000943Cu: goto label_8000943C;
    case 0x80009440u: goto label_80009440;
    case 0x80009444u: goto label_80009444;
    case 0x80009448u: goto label_80009448;
    case 0x8000944Cu: goto label_8000944C;
    case 0x80009450u: goto label_80009450;
    case 0x80009454u: goto label_80009454;
    case 0x80009458u: goto label_80009458;
    case 0x8000945Cu: goto label_8000945C;
    case 0x80009460u: goto label_80009460;
    case 0x80009464u: goto label_80009464;
    case 0x80009468u: goto label_80009468;
    case 0x8000946Cu: goto label_8000946C;
    case 0x80009470u: goto label_80009470;
    case 0x80009474u: goto label_80009474;
    case 0x80009478u: goto label_80009478;
    case 0x8000947Cu: goto label_8000947C;
    case 0x80009480u: goto label_80009480;
    case 0x80009484u: goto label_80009484;
    case 0x80009488u: goto label_80009488;
    case 0x8000948Cu: goto label_8000948C;
    case 0x80009490u: goto label_80009490;
    case 0x80009494u: goto label_80009494;
    case 0x80009498u: goto label_80009498;
    case 0x8000949Cu: goto label_8000949C;
    case 0x800094A0u: goto label_800094A0;
    case 0x800094A4u: goto label_800094A4;
    case 0x800094A8u: goto label_800094A8;
    case 0x800094ACu: goto label_800094AC;
    case 0x800094B0u: goto label_800094B0;
    case 0x800094B4u: goto label_800094B4;
    case 0x800094B8u: goto label_800094B8;
    case 0x800094BCu: goto label_800094BC;
    case 0x800094C0u: goto label_800094C0;
    case 0x800094C4u: goto label_800094C4;
    case 0x800094C8u: goto label_800094C8;
    case 0x800094CCu: goto label_800094CC;
    case 0x800094D0u: goto label_800094D0;
    case 0x800094D4u: goto label_800094D4;
    case 0x800094D8u: goto label_800094D8;
    case 0x800094DCu: goto label_800094DC;
    case 0x800094E0u: goto label_800094E0;
    case 0x800094E4u: goto label_800094E4;
    case 0x800094E8u: goto label_800094E8;
    case 0x800094ECu: goto label_800094EC;
    case 0x800094F0u: goto label_800094F0;
    case 0x800094F4u: goto label_800094F4;
    case 0x800094F8u: goto label_800094F8;
    case 0x800094FCu: goto label_800094FC;
    case 0x80009500u: goto label_80009500;
    case 0x80009504u: goto label_80009504;
    case 0x80009508u: goto label_80009508;
    case 0x8000950Cu: goto label_8000950C;
    case 0x80009510u: goto label_80009510;
    case 0x80009514u: goto label_80009514;
    case 0x80009518u: goto label_80009518;
    case 0x8000951Cu: goto label_8000951C;
    case 0x80009520u: goto label_80009520;
    case 0x80009524u: goto label_80009524;
    case 0x80009528u: goto label_80009528;
    case 0x8000952Cu: goto label_8000952C;
    case 0x80009530u: goto label_80009530;
    case 0x80009534u: goto label_80009534;
    case 0x80009538u: goto label_80009538;
    case 0x8000953Cu: goto label_8000953C;
    case 0x80009540u: goto label_80009540;
    case 0x80009544u: goto label_80009544;
    case 0x80009548u: goto label_80009548;
    case 0x8000954Cu: goto label_8000954C;
    case 0x80009550u: goto label_80009550;
    case 0x80009554u: goto label_80009554;
    case 0x80009558u: goto label_80009558;
    case 0x8000955Cu: goto label_8000955C;
    case 0x80009560u: goto label_80009560;
    case 0x80009564u: goto label_80009564;
    case 0x80009568u: goto label_80009568;
    case 0x8000956Cu: goto label_8000956C;
    case 0x80009570u: goto label_80009570;
    case 0x80009574u: goto label_80009574;
    case 0x80009578u: goto label_80009578;
    case 0x8000957Cu: goto label_8000957C;
    case 0x80009580u: goto label_80009580;
    case 0x80009584u: goto label_80009584;
    case 0x80009588u: goto label_80009588;
    case 0x8000958Cu: goto label_8000958C;
    case 0x80009590u: goto label_80009590;
    case 0x80009594u: goto label_80009594;
    case 0x80009598u: goto label_80009598;
    case 0x8000959Cu: goto label_8000959C;
    case 0x800095A0u: goto label_800095A0;
    case 0x800095A4u: goto label_800095A4;
    case 0x800095A8u: goto label_800095A8;
    case 0x800095ACu: goto label_800095AC;
    case 0x800095B0u: goto label_800095B0;
    case 0x800095B4u: goto label_800095B4;
    case 0x800095B8u: goto label_800095B8;
    case 0x800095BCu: goto label_800095BC;
    case 0x800095C0u: goto label_800095C0;
    case 0x800095C4u: goto label_800095C4;
    case 0x800095C8u: goto label_800095C8;
    case 0x800095CCu: goto label_800095CC;
    case 0x800095D0u: goto label_800095D0;
    case 0x800095D4u: goto label_800095D4;
    case 0x800095D8u: goto label_800095D8;
    case 0x800095DCu: goto label_800095DC;
    default: return;
    }
label_800055E0:
    ctx->pc = 0x800055E0u;
    ctx->downcount -= 21;
    // 800055E0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800055E4:
    ctx->pc = 0x800055E4u;
    // 800055E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800055E8:
    ctx->pc = 0x800055E8u;
    // 800055E8: lis     r6, -32737
    ctx->gpr[6] = ((u32)(s32)(-32737) << 16);

label_800055EC:
    ctx->pc = 0x800055ECu;
    // 800055EC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800055F0:
    ctx->pc = 0x800055F0u;
    // 800055F0: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_800055F4:
    ctx->pc = 0x800055F4u;
    // 800055F4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800055F8:
    ctx->pc = 0x800055F8u;
    // 800055F8: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_800055FC:
    ctx->pc = 0x800055FCu;
    // 800055FC: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80005600:
    ctx->pc = 0x80005600u;
    // 80005600: lwz     r0, -32748(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-32748);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80005604:
    ctx->pc = 0x80005604u;
    // 80005604: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80005608:
    ctx->pc = 0x80005608u;
    // 80005608: bc    4, 2, 0x80005674
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80005674;
        }
    }

label_8000560C:
    ctx->pc = 0x8000560Cu;
    ctx->downcount -= 1;
    // 8000560C: bl      0x80020680
    {
            ctx->lr = 0x80005610u;
            ctx->pc = 0x80020680u;
            return;
    }

label_80005610:
    ctx->pc = 0x80005610u;
    ctx->downcount -= 20;
    // 80005610: lis     r7, -32762
    ctx->gpr[7] = ((u32)(s32)(-32762) << 16);

label_80005614:
    ctx->pc = 0x80005614u;
    // 80005614: lis     r6, -32737
    ctx->gpr[6] = ((u32)(s32)(-32737) << 16);

label_80005618:
    ctx->pc = 0x80005618u;
    // 80005618: addi    r8, r6, -32760
    ctx->gpr[8] = ctx->gpr[6] + (u32)(s32)(-32760);

label_8000561C:
    ctx->pc = 0x8000561Cu;
    // 8000561C: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_80005620:
    ctx->pc = 0x80005620u;
    // 80005620: addi    r9, r7, 26176
    ctx->gpr[9] = ctx->gpr[7] + (u32)(s32)(26176);

label_80005624:
    ctx->pc = 0x80005624u;
    // 80005624: lis     r10, -32737
    ctx->gpr[10] = ((u32)(s32)(-32737) << 16);

label_80005628:
    ctx->pc = 0x80005628u;
    // 80005628: addi    r7, r4, -32768
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(-32768);

label_8000562C:
    ctx->pc = 0x8000562Cu;
    // 8000562C: lis     r4, -32768
    ctx->gpr[4] = ((u32)(s32)(-32768) << 16);

label_80005630:
    ctx->pc = 0x80005630u;
    // 80005630: li      r11, 1
    ctx->gpr[11] = (u32)(s32)(1);

label_80005634:
    ctx->pc = 0x80005634u;
    // 80005634: lis     r5, -32737
    ctx->gpr[5] = ((u32)(s32)(-32737) << 16);

label_80005638:
    ctx->pc = 0x80005638u;
    // 80005638: rlwinm r6, r29, 20, 12, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[29], 20u) & 0x000FFFFFu;
    }

label_8000563C:
    ctx->pc = 0x8000563Cu;
    // 8000563C: addi    r0, r4, 22280
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(22280);

label_80005640:
    ctx->pc = 0x80005640u;
    // 80005640: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80005644:
    ctx->pc = 0x80005644u;
    // 80005644: stw     r11, -32748(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(-32748);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_80005648:
    ctx->pc = 0x80005648u;
    // 80005648: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_8000564C:
    ctx->pc = 0x8000564Cu;
    // 8000564C: stw     r30, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80005650:
    ctx->pc = 0x80005650u;
    // 80005650: stw     r31, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80005654:
    ctx->pc = 0x80005654u;
    // 80005654: stw     r29, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80005658:
    ctx->pc = 0x80005658u;
    // 80005658: stw     r6, -32756(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32756);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8000565C:
    ctx->pc = 0x8000565Cu;
    // 8000565C: bl      0x80049060
    {
            ctx->lr = 0x80005660u;
            ctx->pc = 0x80049060u;
            return;
    }

label_80005660:
    ctx->pc = 0x80005660u;
    ctx->downcount -= 1;
    // 80005660: bl      0x80048F18
    {
            ctx->lr = 0x80005664u;
            ctx->pc = 0x80048F18u;
            return;
    }

label_80005664:
    ctx->pc = 0x80005664u;
    ctx->downcount -= 1;
    // 80005664: bl      0x80048FC0
    {
            ctx->lr = 0x80005668u;
            ctx->pc = 0x80048FC0u;
            return;
    }

label_80005668:
    ctx->pc = 0x80005668u;
    ctx->downcount -= 1;
    // 80005668: bl      0x800056D0
    {
            ctx->lr = 0x8000566Cu;
            goto label_800056D0;
    }

label_8000566C:
    ctx->pc = 0x8000566Cu;
    ctx->downcount -= 2;
    // 8000566C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80005670:
    ctx->pc = 0x80005670u;
    // 80005670: bl      0x800206A8
    {
            ctx->lr = 0x80005674u;
            ctx->pc = 0x800206A8u;
            return;
    }

label_80005674:
    ctx->pc = 0x80005674u;
    ctx->downcount -= 16;
    // 80005674: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80005678:
    ctx->pc = 0x80005678u;
    // 80005678: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000567C:
    ctx->pc = 0x8000567Cu;
    // 8000567C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80005680:
    ctx->pc = 0x80005680u;
    // 80005680: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80005684:
    ctx->pc = 0x80005684u;
    // 80005684: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80005688:
    ctx->pc = 0x80005688u;
    ctx->downcount -= 6;
    // 80005688: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_8000568C:
    ctx->pc = 0x8000568Cu;
    // 8000568C: rlwinm r0, r3, 12, 0, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 12u) & 0xFFFFF000u;
    }

label_80005690:
    ctx->pc = 0x80005690u;
    // 80005690: addi    r3, r4, -32764
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-32764);

label_80005694:
    ctx->pc = 0x80005694u;
    // 80005694: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80005698:
    ctx->pc = 0x80005698u;
    // 80005698: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8000569C:
    ctx->pc = 0x8000569Cu;
    // 8000569C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_800056A0:
    ctx->pc = 0x800056A0u;
    ctx->downcount -= 4;
    // 800056A0: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_800056A4:
    ctx->pc = 0x800056A4u;
    // 800056A4: addi    r3, r3, -32756
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32756);

label_800056A8:
    ctx->pc = 0x800056A8u;
    // 800056A8: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800056AC:
    ctx->pc = 0x800056ACu;
    // 800056AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_800056B0:
    ctx->pc = 0x800056B0u;
    ctx->downcount -= 4;
    // 800056B0: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_800056B4:
    ctx->pc = 0x800056B4u;
    // 800056B4: addi    r3, r3, -32760
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32760);

label_800056B8:
    ctx->pc = 0x800056B8u;
    // 800056B8: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800056BC:
    ctx->pc = 0x800056BCu;
    // 800056BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_800056C0:
    ctx->pc = 0x800056C0u;
    ctx->downcount -= 4;
    // 800056C0: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_800056C4:
    ctx->pc = 0x800056C4u;
    // 800056C4: addi    r3, r3, 26176
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(26176);

label_800056C8:
    ctx->pc = 0x800056C8u;
    // 800056C8: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800056CC:
    ctx->pc = 0x800056CCu;
    // 800056CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_800056D0:
    ctx->pc = 0x800056D0u;
    ctx->downcount -= 4;
    // 800056D0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800056D4:
    ctx->pc = 0x800056D4u;
    // 800056D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800056D8:
    ctx->pc = 0x800056D8u;
    // 800056D8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800056DC:
    ctx->pc = 0x800056DCu;
    // 800056DC: bl      0x8001D734
    {
            ctx->lr = 0x800056E0u;
            ctx->pc = 0x8001D734u;
            return;
    }

label_800056E0:
    ctx->pc = 0x800056E0u;
    ctx->downcount -= 6;
    // 800056E0: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_800056E4:
    ctx->pc = 0x800056E4u;
    // 800056E4: lis     r5, -32737
    ctx->gpr[5] = ((u32)(s32)(-32737) << 16);

label_800056E8:
    ctx->pc = 0x800056E8u;
    // 800056E8: lwz     r0, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800056EC:
    ctx->pc = 0x800056ECu;
    // 800056EC: stw     r3, -32764(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32764);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800056F0:
    ctx->pc = 0x800056F0u;
    // 800056F0: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_800056F4:
    ctx->pc = 0x800056F4u;
    // 800056F4: bl      0x8001D744
    {
            ctx->lr = 0x800056F8u;
            ctx->pc = 0x8001D744u;
            return;
    }

label_800056F8:
    ctx->pc = 0x800056F8u;
    ctx->downcount -= 5;
    // 800056F8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800056FC:
    ctx->pc = 0x800056FCu;
    // 800056FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80005700:
    ctx->pc = 0x80005700u;
    // 80005700: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80005704:
    ctx->pc = 0x80005704u;
    // 80005704: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80005708:
    ctx->pc = 0x80005708u;
    ctx->downcount -= 16;
    // 80005708: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000570C:
    ctx->pc = 0x8000570Cu;
    // 8000570C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80005710:
    ctx->pc = 0x80005710u;
    // 80005710: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80005714:
    ctx->pc = 0x80005714u;
    // 80005714: stmw     r23, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80005718:
    ctx->pc = 0x80005718u;
    // 80005718: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000571C:
    ctx->pc = 0x8000571Cu;
    // 8000571C: bl      0x80020680
    {
            ctx->lr = 0x80005720u;
            ctx->pc = 0x80020680u;
            return;
    }

label_80005720:
    ctx->pc = 0x80005720u;
    ctx->downcount -= 2;
    // 80005720: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80005724:
    ctx->pc = 0x80005724u;
    // 80005724: bl      0x80024A8C
    {
            ctx->lr = 0x80005728u;
            ctx->pc = 0x80024A8Cu;
            return;
    }

label_80005728:
    ctx->pc = 0x80005728u;
    ctx->downcount -= 50;
    // 80005728: lis     r6, -32768
    ctx->gpr[6] = ((u32)(s32)(-32768) << 16);

label_8000572C:
    ctx->pc = 0x8000572Cu;
    // 8000572C: rlwinm r3, r3, 3, 0, 28
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 3u) & 0xFFFFFFF8u;
    }

label_80005730:
    ctx->pc = 0x80005730u;
    // 80005730: lwz     r0, 248(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(248);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80005734:
    ctx->pc = 0x80005734u;
    // 80005734: rlwimi r3, r4, 3, 29, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 3u);
        ctx->gpr[3] = (ctx->gpr[3] & ~0x00000007u) | (rot & 0x00000007u);
    }

label_80005738:
    ctx->pc = 0x80005738u;
    // 80005738: lis     r5, 2
    ctx->gpr[5] = ((u32)(s32)(2) << 16);

label_8000573C:
    ctx->pc = 0x8000573Cu;
    // 8000573C: rlwinm r4, r4, 3, 0, 28
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 3u) & 0xFFFFFFF8u;
    }

label_80005740:
    ctx->pc = 0x80005740u;
    // 80005740: rlwinm r6, r0, 30, 2, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[0], 30u) & 0x3FFFFFFFu;
    }

label_80005744:
    ctx->pc = 0x80005744u;
    // 80005744: addi    r0, r5, -6072
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-6072);

label_80005748:
    ctx->pc = 0x80005748u;
    // 80005748: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8000574C:
    ctx->pc = 0x8000574Cu;
    // 8000574C: divwu   r6, r6, r0
    {
        u32 divisor = ctx->gpr[0];
        ctx->gpr[6] = divisor == 0 ? 0u : ctx->gpr[6] / divisor;
    }

label_80005750:
    ctx->pc = 0x80005750u;
    // 80005750: bl      0x8000DE64
    {
            ctx->lr = 0x80005754u;
            ctx->pc = 0x8000DE64u;
            return;
    }

label_80005754:
    ctx->pc = 0x80005754u;
    ctx->downcount -= 4;
    // 80005754: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80005758:
    ctx->pc = 0x80005758u;
    // 80005758: rlwinm r25, r26, 0, 0, 19
    {
        ctx->gpr[25] = dolrecomp_rotl32(ctx->gpr[26], 0u) & 0xFFFFF000u;
    }

label_8000575C:
    ctx->pc = 0x8000575Cu;
    // 8000575C: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80005760:
    ctx->pc = 0x80005760u;
    // 80005760: bl      0x80048A18
    {
            ctx->lr = 0x80005764u;
            ctx->pc = 0x80048A18u;
            return;
    }

label_80005764:
    ctx->pc = 0x80005764u;
    ctx->downcount -= 2;
    // 80005764: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80005768:
    ctx->pc = 0x80005768u;
    // 80005768: bl      0x80005688
    {
            ctx->lr = 0x8000576Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80005688u;
                return;
            }
            goto label_80005688;
    }

label_8000576C:
    ctx->pc = 0x8000576Cu;
    ctx->downcount -= 4;
    // 8000576C: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80005770:
    ctx->pc = 0x80005770u;
    // 80005770: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80005774:
    ctx->pc = 0x80005774u;
    // 80005774: or   r27, r0, r0
    {
        ctx->gpr[27] = ctx->gpr[0] | ctx->gpr[0];
    }

label_80005778:
    ctx->pc = 0x80005778u;
    // 80005778: bl      0x80049308
    {
            ctx->lr = 0x8000577Cu;
            ctx->pc = 0x80049308u;
            return;
    }

label_8000577C:
    ctx->pc = 0x8000577Cu;
    ctx->downcount -= 1;
    // 8000577C: or   r23, r3, r3
    {
        ctx->gpr[23] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80005780:
    ctx->downcount -= 1;
    // 80005780: bl      0x80030198
    {
            ctx->lr = 0x80005784u;
            ctx->pc = 0x80030198u;
            return;
    }

label_80005784:
    ctx->downcount -= 2;
    // 80005784: cmplwi  r3, 0x0000
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

label_80005788:
    // 80005788: bc    4, 2, 0x80005780
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80005780u;
                return;
            }
            goto label_80005780;
        }
    }

label_8000578C:
    ctx->pc = 0x8000578Cu;
    ctx->downcount -= 1;
    // 8000578C: bl      0x80030490
    {
            ctx->lr = 0x80005790u;
            ctx->pc = 0x80030490u;
            return;
    }

label_80005790:
    ctx->pc = 0x80005790u;
    ctx->downcount -= 3;
    // 80005790: cmplwi  r23, 0x0000
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

label_80005794:
    ctx->pc = 0x80005794u;
    // 80005794: rlwinm r24, r3, 0, 16, 31
    {
        ctx->gpr[24] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_80005798:
    ctx->pc = 0x80005798u;
    // 80005798: bc    12, 2, 0x800057F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800057F8;
        }
    }

label_8000579C:
    ctx->pc = 0x8000579Cu;
    ctx->downcount -= 2;
    // 8000579C: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_800057A0:
    ctx->pc = 0x800057A0u;
    // 800057A0: bl      0x80049254
    {
            ctx->lr = 0x800057A4u;
            ctx->pc = 0x80049254u;
            return;
    }

label_800057A4:
    ctx->pc = 0x800057A4u;
    ctx->downcount -= 2;
    // 800057A4: cmpwi   r3, 0
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

label_800057A8:
    ctx->pc = 0x800057A8u;
    // 800057A8: bc    12, 2, 0x800057EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800057EC;
        }
    }

label_800057AC:
    ctx->pc = 0x800057ACu;
    ctx->downcount -= 2;
    // 800057AC: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_800057B0:
    ctx->pc = 0x800057B0u;
    // 800057B0: bl      0x80048EEC
    {
            ctx->lr = 0x800057B4u;
            ctx->pc = 0x80048EECu;
            return;
    }

label_800057B4:
    ctx->pc = 0x800057B4u;
    ctx->downcount -= 4;
    // 800057B4: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_800057B8:
    ctx->pc = 0x800057B8u;
    // 800057B8: li      r29, 1
    ctx->gpr[29] = (u32)(s32)(1);

label_800057BC:
    ctx->pc = 0x800057BCu;
    // 800057BC: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_800057C0:
    ctx->pc = 0x800057C0u;
    // 800057C0: bl      0x8001DA4C
    {
            ctx->lr = 0x800057C4u;
            ctx->pc = 0x8001DA4Cu;
            return;
    }

label_800057C4:
    ctx->pc = 0x800057C4u;
    ctx->downcount -= 2;
    // 800057C4: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_800057C8:
    ctx->pc = 0x800057C8u;
    // 800057C8: bl      0x80048E54
    {
            ctx->lr = 0x800057CCu;
            ctx->pc = 0x80048E54u;
            return;
    }

label_800057CC:
    ctx->pc = 0x800057CCu;
    ctx->downcount -= 5;
    // 800057CC: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800057D0:
    ctx->pc = 0x800057D0u;
    // 800057D0: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_800057D4:
    ctx->pc = 0x800057D4u;
    // 800057D4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800057D8:
    ctx->pc = 0x800057D8u;
    // 800057D8: li      r6, 4096
    ctx->gpr[6] = (u32)(s32)(4096);

label_800057DC:
    ctx->pc = 0x800057DCu;
    // 800057DC: bl      0x800301D4
    {
            ctx->lr = 0x800057E0u;
            ctx->pc = 0x800301D4u;
            return;
    }

label_800057E0:
    ctx->downcount -= 1;
    // 800057E0: bl      0x80030198
    {
            ctx->lr = 0x800057E4u;
            ctx->pc = 0x80030198u;
            return;
    }

label_800057E4:
    ctx->downcount -= 2;
    // 800057E4: cmplwi  r3, 0x0000
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

label_800057E8:
    // 800057E8: bc    4, 2, 0x800057E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800057E0u;
                return;
            }
            goto label_800057E0;
        }
    }

label_800057EC:
    ctx->pc = 0x800057ECu;
    ctx->downcount -= 3;
    // 800057EC: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_800057F0:
    ctx->pc = 0x800057F0u;
    // 800057F0: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_800057F4:
    ctx->pc = 0x800057F4u;
    // 800057F4: bl      0x80049198
    {
            ctx->lr = 0x800057F8u;
            ctx->pc = 0x80049198u;
            return;
    }

label_800057F8:
    ctx->pc = 0x800057F8u;
    ctx->downcount -= 2;
    // 800057F8: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_800057FC:
    ctx->pc = 0x800057FCu;
    // 800057FC: bl      0x80048F04
    {
            ctx->lr = 0x80005800u;
            ctx->pc = 0x80048F04u;
            return;
    }

label_80005800:
    ctx->pc = 0x80005800u;
    ctx->downcount -= 2;
    // 80005800: cmpwi   r3, 0
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

label_80005804:
    ctx->pc = 0x80005804u;
    // 80005804: bc    12, 2, 0x8000584C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000584C;
        }
    }

label_80005808:
    ctx->pc = 0x80005808u;
    ctx->downcount -= 2;
    // 80005808: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_8000580C:
    ctx->pc = 0x8000580Cu;
    // 8000580C: bl      0x80048E54
    {
            ctx->lr = 0x80005810u;
            ctx->pc = 0x80048E54u;
            return;
    }

label_80005810:
    ctx->pc = 0x80005810u;
    ctx->downcount -= 5;
    // 80005810: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80005814:
    ctx->pc = 0x80005814u;
    // 80005814: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80005818:
    ctx->pc = 0x80005818u;
    // 80005818: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8000581C:
    ctx->pc = 0x8000581Cu;
    // 8000581C: li      r6, 4096
    ctx->gpr[6] = (u32)(s32)(4096);

label_80005820:
    ctx->pc = 0x80005820u;
    // 80005820: bl      0x800301D4
    {
            ctx->lr = 0x80005824u;
            ctx->pc = 0x800301D4u;
            return;
    }

label_80005824:
    ctx->downcount -= 1;
    // 80005824: bl      0x80030198
    {
            ctx->lr = 0x80005828u;
            ctx->pc = 0x80030198u;
            return;
    }

label_80005828:
    ctx->downcount -= 2;
    // 80005828: cmplwi  r3, 0x0000
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

label_8000582C:
    // 8000582C: bc    4, 2, 0x80005824
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80005824u;
                return;
            }
            goto label_80005824;
        }
    }

label_80005830:
    ctx->pc = 0x80005830u;
    ctx->downcount -= 3;
    // 80005830: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80005834:
    ctx->pc = 0x80005834u;
    // 80005834: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_80005838:
    ctx->pc = 0x80005838u;
    // 80005838: bl      0x8001DA20
    {
            ctx->lr = 0x8000583Cu;
            ctx->pc = 0x8001DA20u;
            return;
    }

label_8000583C:
    ctx->pc = 0x8000583Cu;
    ctx->downcount -= 3;
    // 8000583C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80005840:
    ctx->pc = 0x80005840u;
    // 80005840: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_80005844:
    ctx->pc = 0x80005844u;
    // 80005844: bl      0x8001DB04
    {
            ctx->lr = 0x80005848u;
            ctx->pc = 0x8001DB04u;
            return;
    }

label_80005848:
    ctx->pc = 0x80005848u;
    ctx->downcount -= 1;
    // 80005848: b       0x80005864
    {
            goto label_80005864;
    }

label_8000584C:
    ctx->pc = 0x8000584Cu;
    ctx->downcount -= 2;
    // 8000584C: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_80005850:
    ctx->pc = 0x80005850u;
    // 80005850: bl      0x80048E94
    {
            ctx->lr = 0x80005854u;
            ctx->pc = 0x80048E94u;
            return;
    }

label_80005854:
    ctx->pc = 0x80005854u;
    ctx->downcount -= 2;
    // 80005854: cmpwi   r3, 0
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

label_80005858:
    ctx->pc = 0x80005858u;
    // 80005858: bc    4, 2, 0x80005864
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80005864;
        }
    }

label_8000585C:
    ctx->pc = 0x8000585Cu;
    ctx->downcount -= 2;
    // 8000585C: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_80005860:
    ctx->pc = 0x80005860u;
    // 80005860: bl      0x80048EB4
    {
            ctx->lr = 0x80005864u;
            ctx->pc = 0x80048EB4u;
            return;
    }

label_80005864:
    ctx->pc = 0x80005864u;
    ctx->downcount -= 2;
    // 80005864: cmpwi   r24, 0
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

label_80005868:
    ctx->pc = 0x80005868u;
    // 80005868: bc    4, 2, 0x80005870
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80005870;
        }
    }

label_8000586C:
    ctx->pc = 0x8000586Cu;
    ctx->downcount -= 1;
    // 8000586C: bl      0x80030470
    {
            ctx->lr = 0x80005870u;
            ctx->pc = 0x80030470u;
            return;
    }

label_80005870:
    ctx->pc = 0x80005870u;
    ctx->downcount -= 4;
    // 80005870: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_80005874:
    ctx->pc = 0x80005874u;
    // 80005874: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80005878:
    ctx->pc = 0x80005878u;
    // 80005878: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8000587C:
    ctx->pc = 0x8000587Cu;
    // 8000587C: bl      0x8004912C
    {
            ctx->lr = 0x80005880u;
            ctx->pc = 0x8004912Cu;
            return;
    }

label_80005880:
    ctx->pc = 0x80005880u;
    ctx->downcount -= 2;
    // 80005880: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80005884:
    ctx->pc = 0x80005884u;
    // 80005884: bl      0x800206A8
    {
            ctx->lr = 0x80005888u;
            ctx->pc = 0x800206A8u;
            return;
    }

label_80005888:
    ctx->pc = 0x80005888u;
    ctx->downcount -= 4;
    // 80005888: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000588C:
    ctx->pc = 0x8000588Cu;
    // 8000588C: lwz     r0, -32752(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32752);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80005890:
    ctx->pc = 0x80005890u;
    // 80005890: cmplwi  r0, 0x0000
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

label_80005894:
    ctx->pc = 0x80005894u;
    // 80005894: bc    12, 2, 0x800058F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800058F0;
        }
    }

label_80005898:
    ctx->pc = 0x80005898u;
    ctx->downcount -= 1;
    // 80005898: bl      0x80024A8C
    {
            ctx->lr = 0x8000589Cu;
            ctx->pc = 0x80024A8Cu;
            return;
    }

label_8000589C:
    ctx->pc = 0x8000589Cu;
    ctx->downcount -= 50;
    // 8000589C: lis     r6, -32768
    ctx->gpr[6] = ((u32)(s32)(-32768) << 16);

label_800058A0:
    ctx->pc = 0x800058A0u;
    // 800058A0: rlwinm r3, r3, 3, 0, 28
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 3u) & 0xFFFFFFF8u;
    }

label_800058A4:
    ctx->pc = 0x800058A4u;
    // 800058A4: lwz     r0, 248(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(248);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800058A8:
    ctx->pc = 0x800058A8u;
    // 800058A8: rlwimi r3, r4, 3, 29, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 3u);
        ctx->gpr[3] = (ctx->gpr[3] & ~0x00000007u) | (rot & 0x00000007u);
    }

label_800058AC:
    ctx->pc = 0x800058ACu;
    // 800058AC: lis     r5, 2
    ctx->gpr[5] = ((u32)(s32)(2) << 16);

label_800058B0:
    ctx->pc = 0x800058B0u;
    // 800058B0: rlwinm r4, r4, 3, 0, 28
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 3u) & 0xFFFFFFF8u;
    }

label_800058B4:
    ctx->pc = 0x800058B4u;
    // 800058B4: rlwinm r6, r0, 30, 2, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[0], 30u) & 0x3FFFFFFFu;
    }

label_800058B8:
    ctx->pc = 0x800058B8u;
    // 800058B8: addi    r0, r5, -6072
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-6072);

label_800058BC:
    ctx->pc = 0x800058BCu;
    // 800058BC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_800058C0:
    ctx->pc = 0x800058C0u;
    // 800058C0: divwu   r6, r6, r0
    {
        u32 divisor = ctx->gpr[0];
        ctx->gpr[6] = divisor == 0 ? 0u : ctx->gpr[6] / divisor;
    }

label_800058C4:
    ctx->pc = 0x800058C4u;
    // 800058C4: bl      0x8000DE64
    {
            ctx->lr = 0x800058C8u;
            ctx->pc = 0x8000DE64u;
            return;
    }

label_800058C8:
    ctx->pc = 0x800058C8u;
    ctx->downcount -= 11;
    // 800058C8: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_800058CC:
    ctx->pc = 0x800058CCu;
    // 800058CC: subf   r6, r31, r4
    {
        u32 a = ~ctx->gpr[31];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[6] = res;
    }

label_800058D0:
    ctx->pc = 0x800058D0u;
    // 800058D0: addi    r4, r3, -32752
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-32752);

label_800058D4:
    ctx->pc = 0x800058D4u;
    // 800058D4: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_800058D8:
    ctx->pc = 0x800058D8u;
    // 800058D8: lwz     r12, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_800058DC:
    ctx->pc = 0x800058DCu;
    // 800058DC: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_800058E0:
    ctx->pc = 0x800058E0u;
    // 800058E0: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_800058E4:
    ctx->pc = 0x800058E4u;
    // 800058E4: or   r7, r29, r29
    {
        ctx->gpr[7] = ctx->gpr[29] | ctx->gpr[29];
    }

label_800058E8:
    ctx->pc = 0x800058E8u;
    // 800058E8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_800058EC:
    ctx->pc = 0x800058ECu;
    // 800058EC: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x800058F0u;
            ctx->pc = target;
            return;
        }
    }

label_800058F0:
    ctx->pc = 0x800058F0u;
    ctx->downcount -= 16;
    // 800058F0: lmw     r23, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_800058F4:
    ctx->pc = 0x800058F4u;
    // 800058F4: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800058F8:
    ctx->pc = 0x800058F8u;
    // 800058F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800058FC:
    ctx->pc = 0x800058FCu;
    // 800058FC: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80005900:
    ctx->pc = 0x80005900u;
    // 80005900: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80005904:
    ctx->pc = 0x80005904u;
    ctx->downcount -= 16;
    // 80005904: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80005908:
    ctx->pc = 0x80005908u;
    // 80005908: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000590C:
    ctx->pc = 0x8000590Cu;
    // 8000590C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80005910:
    ctx->pc = 0x80005910u;
    // 80005910: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80005914:
    ctx->pc = 0x80005914u;
    // 80005914: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80005918:
    ctx->pc = 0x80005918u;
    // 80005918: bl      0x800492DC
    {
            ctx->lr = 0x8000591Cu;
            ctx->pc = 0x800492DCu;
            return;
    }

label_8000591C:
    ctx->pc = 0x8000591Cu;
    ctx->downcount -= 2;
    // 8000591C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80005920:
    ctx->pc = 0x80005920u;
    // 80005920: bl      0x80020680
    {
            ctx->lr = 0x80005924u;
            ctx->pc = 0x80020680u;
            return;
    }

label_80005924:
    ctx->pc = 0x80005924u;
    ctx->downcount -= 1;
    // 80005924: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80005928:
    ctx->downcount -= 1;
    // 80005928: bl      0x80030198
    {
            ctx->lr = 0x8000592Cu;
            ctx->pc = 0x80030198u;
            return;
    }

label_8000592C:
    ctx->downcount -= 2;
    // 8000592C: cmplwi  r3, 0x0000
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

label_80005930:
    // 80005930: bc    4, 2, 0x80005928
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80005928u;
                return;
            }
            goto label_80005928;
        }
    }

label_80005934:
    ctx->pc = 0x80005934u;
    ctx->downcount -= 1;
    // 80005934: bl      0x80030490
    {
            ctx->lr = 0x80005938u;
            ctx->pc = 0x80030490u;
            return;
    }

label_80005938:
    ctx->pc = 0x80005938u;
    ctx->downcount -= 4;
    // 80005938: rlwinm r30, r3, 0, 16, 31
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_8000593C:
    ctx->pc = 0x8000593Cu;
    // 8000593C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80005940:
    ctx->pc = 0x80005940u;
    // 80005940: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_80005944:
    ctx->pc = 0x80005944u;
    // 80005944: bl      0x8001DA4C
    {
            ctx->lr = 0x80005948u;
            ctx->pc = 0x8001DA4Cu;
            return;
    }

label_80005948:
    ctx->pc = 0x80005948u;
    ctx->downcount -= 2;
    // 80005948: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8000594C:
    ctx->pc = 0x8000594Cu;
    // 8000594C: bl      0x80048E54
    {
            ctx->lr = 0x80005950u;
            ctx->pc = 0x80048E54u;
            return;
    }

label_80005950:
    ctx->pc = 0x80005950u;
    ctx->downcount -= 5;
    // 80005950: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80005954:
    ctx->pc = 0x80005954u;
    // 80005954: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80005958:
    ctx->pc = 0x80005958u;
    // 80005958: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000595C:
    ctx->pc = 0x8000595Cu;
    // 8000595C: li      r6, 4096
    ctx->gpr[6] = (u32)(s32)(4096);

label_80005960:
    ctx->pc = 0x80005960u;
    // 80005960: bl      0x800301D4
    {
            ctx->lr = 0x80005964u;
            ctx->pc = 0x800301D4u;
            return;
    }

label_80005964:
    ctx->downcount -= 1;
    // 80005964: bl      0x80030198
    {
            ctx->lr = 0x80005968u;
            ctx->pc = 0x80030198u;
            return;
    }

label_80005968:
    ctx->downcount -= 2;
    // 80005968: cmplwi  r3, 0x0000
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

label_8000596C:
    // 8000596C: bc    4, 2, 0x80005964
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80005964u;
                return;
            }
            goto label_80005964;
        }
    }

label_80005970:
    ctx->pc = 0x80005970u;
    ctx->downcount -= 2;
    // 80005970: cmpwi   r30, 0
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

label_80005974:
    ctx->pc = 0x80005974u;
    // 80005974: bc    4, 2, 0x8000597C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000597C;
        }
    }

label_80005978:
    ctx->pc = 0x80005978u;
    ctx->downcount -= 1;
    // 80005978: bl      0x80030470
    {
            ctx->lr = 0x8000597Cu;
            ctx->pc = 0x80030470u;
            return;
    }

label_8000597C:
    ctx->pc = 0x8000597Cu;
    ctx->downcount -= 2;
    // 8000597C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80005980:
    ctx->pc = 0x80005980u;
    // 80005980: bl      0x800206A8
    {
            ctx->lr = 0x80005984u;
            ctx->pc = 0x800206A8u;
            return;
    }

label_80005984:
    ctx->pc = 0x80005984u;
    ctx->downcount -= 2;
    // 80005984: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80005988:
    ctx->pc = 0x80005988u;
    // 80005988: bl      0x80048EEC
    {
            ctx->lr = 0x8000598Cu;
            ctx->pc = 0x80048EECu;
            return;
    }

label_8000598C:
    ctx->pc = 0x8000598Cu;
    ctx->downcount -= 16;
    // 8000598C: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80005990:
    ctx->pc = 0x80005990u;
    // 80005990: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80005994:
    ctx->pc = 0x80005994u;
    // 80005994: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80005998:
    ctx->pc = 0x80005998u;
    // 80005998: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8000599C:
    ctx->pc = 0x8000599Cu;
    // 8000599C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_800059A0:
    ctx->pc = 0x800059A0u;
    ctx->downcount -= 6;
    // 800059A0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800059A4:
    ctx->pc = 0x800059A4u;
    // 800059A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800059A8:
    ctx->pc = 0x800059A8u;
    // 800059A8: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_800059AC:
    ctx->pc = 0x800059ACu;
    // 800059AC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800059B0:
    ctx->pc = 0x800059B0u;
    // 800059B0: addi    r3, r3, 22788
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22788);

label_800059B4:
    ctx->pc = 0x800059B4u;
    // 800059B4: bl      0x8004968C
    {
            ctx->lr = 0x800059B8u;
            ctx->pc = 0x8004968Cu;
            return;
    }

label_800059B8:
    ctx->pc = 0x800059B8u;
    ctx->downcount -= 5;
    // 800059B8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800059BC:
    ctx->pc = 0x800059BCu;
    // 800059BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800059C0:
    ctx->pc = 0x800059C0u;
    // 800059C0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_800059C4:
    ctx->pc = 0x800059C4u;
    // 800059C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_800059C8:
    ctx->pc = 0x800059C8u;
    ctx->downcount -= 7;
    // 800059C8: stwu     r1, -736(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-736);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800059CC:
    ctx->pc = 0x800059CCu;
    // 800059CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800059D0:
    ctx->pc = 0x800059D0u;
    // 800059D0: stw     r0, 740(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(740);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800059D4:
    ctx->pc = 0x800059D4u;
    // 800059D4: stw     r31, 732(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(732);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_800059D8:
    ctx->pc = 0x800059D8u;
    // 800059D8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800059DC:
    ctx->pc = 0x800059DCu;
    // 800059DC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_800059E0:
    ctx->pc = 0x800059E0u;
    // 800059E0: bl      0x8001E4A4
    {
            ctx->lr = 0x800059E4u;
            ctx->pc = 0x8001E4A4u;
            return;
    }

label_800059E4:
    ctx->pc = 0x800059E4u;
    ctx->downcount -= 2;
    // 800059E4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_800059E8:
    ctx->pc = 0x800059E8u;
    // 800059E8: bl      0x8001E2AC
    {
            ctx->lr = 0x800059ECu;
            ctx->pc = 0x8001E2ACu;
            return;
    }

label_800059EC:
    ctx->pc = 0x800059ECu;
    ctx->downcount -= 2;
    // 800059EC: lwz     r3, 408(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(408);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800059F0:
    ctx->pc = 0x800059F0u;
    // 800059F0: bl      0x80005708
    {
            ctx->lr = 0x800059F4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80005708u;
                return;
            }
            goto label_80005708;
    }

label_800059F4:
    ctx->pc = 0x800059F4u;
    ctx->downcount -= 2;
    // 800059F4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_800059F8:
    ctx->pc = 0x800059F8u;
    // 800059F8: bl      0x8001E2AC
    {
            ctx->lr = 0x800059FCu;
            ctx->pc = 0x8001E2ACu;
            return;
    }

label_800059FC:
    ctx->pc = 0x800059FCu;
    ctx->downcount -= 2;
    // 800059FC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80005A00:
    ctx->pc = 0x80005A00u;
    // 80005A00: bl      0x8001E394
    {
            ctx->lr = 0x80005A04u;
            ctx->pc = 0x8001E394u;
            return;
    }

label_80005A04:
    ctx->pc = 0x80005A04u;
    ctx->downcount -= 6;
    // 80005A04: lwz     r0, 740(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(740);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80005A08:
    ctx->pc = 0x80005A08u;
    // 80005A08: lwz     r31, 732(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(732);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80005A0C:
    ctx->pc = 0x80005A0Cu;
    // 80005A0C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80005A10:
    ctx->pc = 0x80005A10u;
    // 80005A10: addi    r1, r1, 736
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(736);

label_80005A14:
    ctx->pc = 0x80005A14u;
    // 80005A14: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80005A18:
    ctx->pc = 0x80005A18u;
    ctx->downcount -= 9;
    // 80005A18: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80005A1C:
    ctx->pc = 0x80005A1Cu;
    // 80005A1C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80005A20:
    ctx->pc = 0x80005A20u;
    // 80005A20: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80005A24:
    ctx->pc = 0x80005A24u;
    // 80005A24: li      r4, 9
    ctx->gpr[4] = (u32)(s32)(9);

label_80005A28:
    ctx->pc = 0x80005A28u;
    // 80005A28: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80005A2C:
    ctx->pc = 0x80005A2Cu;
    // 80005A2C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80005A30:
    ctx->pc = 0x80005A30u;
    // 80005A30: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_80005A34:
    ctx->pc = 0x80005A34u;
    // 80005A34: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80005A38:
    ctx->pc = 0x80005A38u;
    // 80005A38: bl      0x80041C0C
    {
            ctx->lr = 0x80005A3Cu;
            ctx->pc = 0x80041C0Cu;
            return;
    }

label_80005A3C:
    ctx->pc = 0x80005A3Cu;
    ctx->downcount -= 6;
    // 80005A3C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80005A40:
    ctx->pc = 0x80005A40u;
    // 80005A40: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_80005A44:
    ctx->pc = 0x80005A44u;
    // 80005A44: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80005A48:
    ctx->pc = 0x80005A48u;
    // 80005A48: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80005A4C:
    ctx->pc = 0x80005A4Cu;
    // 80005A4C: li      r7, 6
    ctx->gpr[7] = (u32)(s32)(6);

label_80005A50:
    ctx->pc = 0x80005A50u;
    // 80005A50: bl      0x80041C0C
    {
            ctx->lr = 0x80005A54u;
            ctx->pc = 0x80041C0Cu;
            return;
    }

label_80005A54:
    ctx->pc = 0x80005A54u;
    ctx->downcount -= 6;
    // 80005A54: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80005A58:
    ctx->pc = 0x80005A58u;
    // 80005A58: li      r4, 11
    ctx->gpr[4] = (u32)(s32)(11);

label_80005A5C:
    ctx->pc = 0x80005A5Cu;
    // 80005A5C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80005A60:
    ctx->pc = 0x80005A60u;
    // 80005A60: li      r6, 5
    ctx->gpr[6] = (u32)(s32)(5);

label_80005A64:
    ctx->pc = 0x80005A64u;
    // 80005A64: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80005A68:
    ctx->pc = 0x80005A68u;
    // 80005A68: bl      0x80041C0C
    {
            ctx->lr = 0x80005A6Cu;
            ctx->pc = 0x80041C0Cu;
            return;
    }

label_80005A6C:
    ctx->pc = 0x80005A6Cu;
    ctx->downcount -= 6;
    // 80005A6C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80005A70:
    ctx->pc = 0x80005A70u;
    // 80005A70: li      r4, 13
    ctx->gpr[4] = (u32)(s32)(13);

label_80005A74:
    ctx->pc = 0x80005A74u;
    // 80005A74: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80005A78:
    ctx->pc = 0x80005A78u;
    // 80005A78: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_80005A7C:
    ctx->pc = 0x80005A7Cu;
    // 80005A7C: li      r7, 12
    ctx->gpr[7] = (u32)(s32)(12);

label_80005A80:
    ctx->pc = 0x80005A80u;
    // 80005A80: bl      0x80041C0C
    {
            ctx->lr = 0x80005A84u;
            ctx->pc = 0x80041C0Cu;
            return;
    }

label_80005A84:
    ctx->pc = 0x80005A84u;
    ctx->downcount -= 6;
    // 80005A84: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80005A88:
    ctx->pc = 0x80005A88u;
    // 80005A88: li      r4, 14
    ctx->gpr[4] = (u32)(s32)(14);

label_80005A8C:
    ctx->pc = 0x80005A8Cu;
    // 80005A8C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80005A90:
    ctx->pc = 0x80005A90u;
    // 80005A90: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_80005A94:
    ctx->pc = 0x80005A94u;
    // 80005A94: li      r7, 12
    ctx->gpr[7] = (u32)(s32)(12);

label_80005A98:
    ctx->pc = 0x80005A98u;
    // 80005A98: bl      0x80041C0C
    {
            ctx->lr = 0x80005A9Cu;
            ctx->pc = 0x80041C0Cu;
            return;
    }

label_80005A9C:
    ctx->pc = 0x80005A9Cu;
    ctx->downcount -= 6;
    // 80005A9C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80005AA0:
    ctx->pc = 0x80005AA0u;
    // 80005AA0: li      r4, 9
    ctx->gpr[4] = (u32)(s32)(9);

label_80005AA4:
    ctx->pc = 0x80005AA4u;
    // 80005AA4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80005AA8:
    ctx->pc = 0x80005AA8u;
    // 80005AA8: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80005AAC:
    ctx->pc = 0x80005AACu;
    // 80005AAC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80005AB0:
    ctx->pc = 0x80005AB0u;
    // 80005AB0: bl      0x80041C0C
    {
            ctx->lr = 0x80005AB4u;
            ctx->pc = 0x80041C0Cu;
            return;
    }

label_80005AB4:
    ctx->pc = 0x80005AB4u;
    ctx->downcount -= 6;
    // 80005AB4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80005AB8:
    ctx->pc = 0x80005AB8u;
    // 80005AB8: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_80005ABC:
    ctx->pc = 0x80005ABCu;
    // 80005ABC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80005AC0:
    ctx->pc = 0x80005AC0u;
    // 80005AC0: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80005AC4:
    ctx->pc = 0x80005AC4u;
    // 80005AC4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80005AC8:
    ctx->pc = 0x80005AC8u;
    // 80005AC8: bl      0x80041C0C
    {
            ctx->lr = 0x80005ACCu;
            ctx->pc = 0x80041C0Cu;
            return;
    }

label_80005ACC:
    ctx->pc = 0x80005ACCu;
    ctx->downcount -= 6;
    // 80005ACC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80005AD0:
    ctx->pc = 0x80005AD0u;
    // 80005AD0: li      r4, 11
    ctx->gpr[4] = (u32)(s32)(11);

label_80005AD4:
    ctx->pc = 0x80005AD4u;
    // 80005AD4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80005AD8:
    ctx->pc = 0x80005AD8u;
    // 80005AD8: li      r6, 5
    ctx->gpr[6] = (u32)(s32)(5);

label_80005ADC:
    ctx->pc = 0x80005ADCu;
    // 80005ADC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80005AE0:
    ctx->pc = 0x80005AE0u;
    // 80005AE0: bl      0x80041C0C
    {
            ctx->lr = 0x80005AE4u;
            ctx->pc = 0x80041C0Cu;
            return;
    }

label_80005AE4:
    ctx->pc = 0x80005AE4u;
    ctx->downcount -= 6;
    // 80005AE4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80005AE8:
    ctx->pc = 0x80005AE8u;
    // 80005AE8: li      r4, 13
    ctx->gpr[4] = (u32)(s32)(13);

label_80005AEC:
    ctx->pc = 0x80005AECu;
    // 80005AEC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80005AF0:
    ctx->pc = 0x80005AF0u;
    // 80005AF0: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80005AF4:
    ctx->pc = 0x80005AF4u;
    // 80005AF4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80005AF8:
    ctx->pc = 0x80005AF8u;
    // 80005AF8: bl      0x80041C0C
    {
            ctx->lr = 0x80005AFCu;
            ctx->pc = 0x80041C0Cu;
            return;
    }

label_80005AFC:
    ctx->pc = 0x80005AFCu;
    ctx->downcount -= 6;
    // 80005AFC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80005B00:
    ctx->pc = 0x80005B00u;
    // 80005B00: li      r4, 14
    ctx->gpr[4] = (u32)(s32)(14);

label_80005B04:
    ctx->pc = 0x80005B04u;
    // 80005B04: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80005B08:
    ctx->pc = 0x80005B08u;
    // 80005B08: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80005B0C:
    ctx->pc = 0x80005B0Cu;
    // 80005B0C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80005B10:
    ctx->pc = 0x80005B10u;
    // 80005B10: bl      0x80041C0C
    {
            ctx->lr = 0x80005B14u;
            ctx->pc = 0x80041C0Cu;
            return;
    }

label_80005B14:
    ctx->pc = 0x80005B14u;
    ctx->downcount -= 6;
    // 80005B14: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80005B18:
    ctx->pc = 0x80005B18u;
    // 80005B18: li      r4, 9
    ctx->gpr[4] = (u32)(s32)(9);

label_80005B1C:
    ctx->pc = 0x80005B1Cu;
    // 80005B1C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80005B20:
    ctx->pc = 0x80005B20u;
    // 80005B20: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_80005B24:
    ctx->pc = 0x80005B24u;
    // 80005B24: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80005B28:
    ctx->pc = 0x80005B28u;
    // 80005B28: bl      0x80041C0C
    {
            ctx->lr = 0x80005B2Cu;
            ctx->pc = 0x80041C0Cu;
            return;
    }

label_80005B2C:
    ctx->pc = 0x80005B2Cu;
    ctx->downcount -= 6;
    // 80005B2C: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80005B30:
    ctx->pc = 0x80005B30u;
    // 80005B30: li      r4, 25
    ctx->gpr[4] = (u32)(s32)(25);

label_80005B34:
    ctx->pc = 0x80005B34u;
    // 80005B34: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_80005B38:
    ctx->pc = 0x80005B38u;
    // 80005B38: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80005B3C:
    ctx->pc = 0x80005B3Cu;
    // 80005B3C: li      r7, 6
    ctx->gpr[7] = (u32)(s32)(6);

label_80005B40:
    ctx->pc = 0x80005B40u;
    // 80005B40: bl      0x80041C0C
    {
            ctx->lr = 0x80005B44u;
            ctx->pc = 0x80041C0Cu;
            return;
    }

label_80005B44:
    ctx->pc = 0x80005B44u;
    ctx->downcount -= 6;
    // 80005B44: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80005B48:
    ctx->pc = 0x80005B48u;
    // 80005B48: li      r4, 11
    ctx->gpr[4] = (u32)(s32)(11);

label_80005B4C:
    ctx->pc = 0x80005B4Cu;
    // 80005B4C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80005B50:
    ctx->pc = 0x80005B50u;
    // 80005B50: li      r6, 5
    ctx->gpr[6] = (u32)(s32)(5);

label_80005B54:
    ctx->pc = 0x80005B54u;
    // 80005B54: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80005B58:
    ctx->pc = 0x80005B58u;
    // 80005B58: bl      0x80041C0C
    {
            ctx->lr = 0x80005B5Cu;
            ctx->pc = 0x80041C0Cu;
            return;
    }

label_80005B5C:
    ctx->pc = 0x80005B5Cu;
    ctx->downcount -= 6;
    // 80005B5C: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80005B60:
    ctx->pc = 0x80005B60u;
    // 80005B60: li      r4, 13
    ctx->gpr[4] = (u32)(s32)(13);

label_80005B64:
    ctx->pc = 0x80005B64u;
    // 80005B64: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80005B68:
    ctx->pc = 0x80005B68u;
    // 80005B68: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_80005B6C:
    ctx->pc = 0x80005B6Cu;
    // 80005B6C: li      r7, 12
    ctx->gpr[7] = (u32)(s32)(12);

label_80005B70:
    ctx->pc = 0x80005B70u;
    // 80005B70: bl      0x80041C0C
    {
            ctx->lr = 0x80005B74u;
            ctx->pc = 0x80041C0Cu;
            return;
    }

label_80005B74:
    ctx->pc = 0x80005B74u;
    ctx->downcount -= 6;
    // 80005B74: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80005B78:
    ctx->pc = 0x80005B78u;
    // 80005B78: li      r4, 14
    ctx->gpr[4] = (u32)(s32)(14);

label_80005B7C:
    ctx->pc = 0x80005B7Cu;
    // 80005B7C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80005B80:
    ctx->pc = 0x80005B80u;
    // 80005B80: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_80005B84:
    ctx->pc = 0x80005B84u;
    // 80005B84: li      r7, 12
    ctx->gpr[7] = (u32)(s32)(12);

label_80005B88:
    ctx->pc = 0x80005B88u;
    // 80005B88: bl      0x80041C0C
    {
            ctx->lr = 0x80005B8Cu;
            ctx->pc = 0x80041C0Cu;
            return;
    }

label_80005B8C:
    ctx->pc = 0x80005B8Cu;
    ctx->downcount -= 6;
    // 80005B8C: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80005B90:
    ctx->pc = 0x80005B90u;
    // 80005B90: li      r4, 9
    ctx->gpr[4] = (u32)(s32)(9);

label_80005B94:
    ctx->pc = 0x80005B94u;
    // 80005B94: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80005B98:
    ctx->pc = 0x80005B98u;
    // 80005B98: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_80005B9C:
    ctx->pc = 0x80005B9Cu;
    // 80005B9C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80005BA0:
    ctx->pc = 0x80005BA0u;
    // 80005BA0: bl      0x80041C0C
    {
            ctx->lr = 0x80005BA4u;
            ctx->pc = 0x80041C0Cu;
            return;
    }

label_80005BA4:
    ctx->pc = 0x80005BA4u;
    ctx->downcount -= 6;
    // 80005BA4: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80005BA8:
    ctx->pc = 0x80005BA8u;
    // 80005BA8: li      r4, 11
    ctx->gpr[4] = (u32)(s32)(11);

label_80005BAC:
    ctx->pc = 0x80005BACu;
    // 80005BAC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80005BB0:
    ctx->pc = 0x80005BB0u;
    // 80005BB0: li      r6, 5
    ctx->gpr[6] = (u32)(s32)(5);

label_80005BB4:
    ctx->pc = 0x80005BB4u;
    // 80005BB4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80005BB8:
    ctx->pc = 0x80005BB8u;
    // 80005BB8: bl      0x80041C0C
    {
            ctx->lr = 0x80005BBCu;
            ctx->pc = 0x80041C0Cu;
            return;
    }

label_80005BBC:
    ctx->pc = 0x80005BBCu;
    ctx->downcount -= 6;
    // 80005BBC: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80005BC0:
    ctx->pc = 0x80005BC0u;
    // 80005BC0: li      r4, 13
    ctx->gpr[4] = (u32)(s32)(13);

label_80005BC4:
    ctx->pc = 0x80005BC4u;
    // 80005BC4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80005BC8:
    ctx->pc = 0x80005BC8u;
    // 80005BC8: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_80005BCC:
    ctx->pc = 0x80005BCCu;
    // 80005BCC: li      r7, 12
    ctx->gpr[7] = (u32)(s32)(12);

label_80005BD0:
    ctx->pc = 0x80005BD0u;
    // 80005BD0: bl      0x80041C0C
    {
            ctx->lr = 0x80005BD4u;
            ctx->pc = 0x80041C0Cu;
            return;
    }

label_80005BD4:
    ctx->pc = 0x80005BD4u;
    ctx->downcount -= 6;
    // 80005BD4: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80005BD8:
    ctx->pc = 0x80005BD8u;
    // 80005BD8: li      r4, 9
    ctx->gpr[4] = (u32)(s32)(9);

label_80005BDC:
    ctx->pc = 0x80005BDCu;
    // 80005BDC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80005BE0:
    ctx->pc = 0x80005BE0u;
    // 80005BE0: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80005BE4:
    ctx->pc = 0x80005BE4u;
    // 80005BE4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80005BE8:
    ctx->pc = 0x80005BE8u;
    // 80005BE8: bl      0x80041C0C
    {
            ctx->lr = 0x80005BECu;
            ctx->pc = 0x80041C0Cu;
            return;
    }

label_80005BEC:
    ctx->pc = 0x80005BECu;
    ctx->downcount -= 6;
    // 80005BEC: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80005BF0:
    ctx->pc = 0x80005BF0u;
    // 80005BF0: li      r4, 11
    ctx->gpr[4] = (u32)(s32)(11);

label_80005BF4:
    ctx->pc = 0x80005BF4u;
    // 80005BF4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80005BF8:
    ctx->pc = 0x80005BF8u;
    // 80005BF8: li      r6, 5
    ctx->gpr[6] = (u32)(s32)(5);

label_80005BFC:
    ctx->pc = 0x80005BFCu;
    // 80005BFC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80005C00:
    ctx->pc = 0x80005C00u;
    // 80005C00: bl      0x80041C0C
    {
            ctx->lr = 0x80005C04u;
            ctx->pc = 0x80041C0Cu;
            return;
    }

label_80005C04:
    ctx->pc = 0x80005C04u;
    ctx->downcount -= 6;
    // 80005C04: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80005C08:
    ctx->pc = 0x80005C08u;
    // 80005C08: li      r4, 13
    ctx->gpr[4] = (u32)(s32)(13);

label_80005C0C:
    ctx->pc = 0x80005C0Cu;
    // 80005C0C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80005C10:
    ctx->pc = 0x80005C10u;
    // 80005C10: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_80005C14:
    ctx->pc = 0x80005C14u;
    // 80005C14: li      r7, 12
    ctx->gpr[7] = (u32)(s32)(12);

label_80005C18:
    ctx->pc = 0x80005C18u;
    // 80005C18: bl      0x80041C0C
    {
            ctx->lr = 0x80005C1Cu;
            ctx->pc = 0x80041C0Cu;
            return;
    }

label_80005C1C:
    ctx->pc = 0x80005C1Cu;
    ctx->downcount -= 6;
    // 80005C1C: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80005C20:
    ctx->pc = 0x80005C20u;
    // 80005C20: li      r4, 9
    ctx->gpr[4] = (u32)(s32)(9);

label_80005C24:
    ctx->pc = 0x80005C24u;
    // 80005C24: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80005C28:
    ctx->pc = 0x80005C28u;
    // 80005C28: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80005C2C:
    ctx->pc = 0x80005C2Cu;
    // 80005C2C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80005C30:
    ctx->pc = 0x80005C30u;
    // 80005C30: bl      0x80041C0C
    {
            ctx->lr = 0x80005C34u;
            ctx->pc = 0x80041C0Cu;
            return;
    }

label_80005C34:
    ctx->pc = 0x80005C34u;
    ctx->downcount -= 6;
    // 80005C34: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80005C38:
    ctx->pc = 0x80005C38u;
    // 80005C38: li      r4, 11
    ctx->gpr[4] = (u32)(s32)(11);

label_80005C3C:
    ctx->pc = 0x80005C3Cu;
    // 80005C3C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80005C40:
    ctx->pc = 0x80005C40u;
    // 80005C40: li      r6, 5
    ctx->gpr[6] = (u32)(s32)(5);

label_80005C44:
    ctx->pc = 0x80005C44u;
    // 80005C44: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80005C48:
    ctx->pc = 0x80005C48u;
    // 80005C48: bl      0x80041C0C
    {
            ctx->lr = 0x80005C4Cu;
            ctx->pc = 0x80041C0Cu;
            return;
    }

label_80005C4C:
    ctx->pc = 0x80005C4Cu;
    ctx->downcount -= 6;
    // 80005C4C: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80005C50:
    ctx->pc = 0x80005C50u;
    // 80005C50: li      r4, 13
    ctx->gpr[4] = (u32)(s32)(13);

label_80005C54:
    ctx->pc = 0x80005C54u;
    // 80005C54: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80005C58:
    ctx->pc = 0x80005C58u;
    // 80005C58: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_80005C5C:
    ctx->pc = 0x80005C5Cu;
    // 80005C5C: li      r7, 12
    ctx->gpr[7] = (u32)(s32)(12);

label_80005C60:
    ctx->pc = 0x80005C60u;
    // 80005C60: bl      0x80041C0C
    {
            ctx->lr = 0x80005C64u;
            ctx->pc = 0x80041C0Cu;
            return;
    }

label_80005C64:
    ctx->pc = 0x80005C64u;
    ctx->downcount -= 6;
    // 80005C64: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_80005C68:
    ctx->pc = 0x80005C68u;
    // 80005C68: li      r4, 9
    ctx->gpr[4] = (u32)(s32)(9);

label_80005C6C:
    ctx->pc = 0x80005C6Cu;
    // 80005C6C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80005C70:
    ctx->pc = 0x80005C70u;
    // 80005C70: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_80005C74:
    ctx->pc = 0x80005C74u;
    // 80005C74: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80005C78:
    ctx->pc = 0x80005C78u;
    // 80005C78: bl      0x80041C0C
    {
            ctx->lr = 0x80005C7Cu;
            ctx->pc = 0x80041C0Cu;
            return;
    }

label_80005C7C:
    ctx->pc = 0x80005C7Cu;
    ctx->downcount -= 6;
    // 80005C7C: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_80005C80:
    ctx->pc = 0x80005C80u;
    // 80005C80: li      r4, 13
    ctx->gpr[4] = (u32)(s32)(13);

label_80005C84:
    ctx->pc = 0x80005C84u;
    // 80005C84: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80005C88:
    ctx->pc = 0x80005C88u;
    // 80005C88: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80005C8C:
    ctx->pc = 0x80005C8Cu;
    // 80005C8C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80005C90:
    ctx->pc = 0x80005C90u;
    // 80005C90: bl      0x80041C0C
    {
            ctx->lr = 0x80005C94u;
            ctx->pc = 0x80041C0Cu;
            return;
    }

label_80005C94:
    ctx->pc = 0x80005C94u;
    ctx->downcount -= 5;
    // 80005C94: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80005C98:
    ctx->pc = 0x80005C98u;
    // 80005C98: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80005C9C:
    ctx->pc = 0x80005C9Cu;
    // 80005C9C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80005CA0:
    ctx->pc = 0x80005CA0u;
    // 80005CA0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80005CA4:
    ctx->pc = 0x80005CA4u;
    ctx->downcount -= 18;
    // 80005CA4: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80005CA8:
    ctx->pc = 0x80005CA8u;
    // 80005CA8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80005CAC:
    ctx->pc = 0x80005CACu;
    // 80005CAC: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80005CB0:
    ctx->pc = 0x80005CB0u;
    // 80005CB0: stmw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80005CB4:
    ctx->pc = 0x80005CB4u;
    // 80005CB4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80005CB8:
    ctx->pc = 0x80005CB8u;
    // 80005CB8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80005CBC:
    ctx->pc = 0x80005CBCu;
    // 80005CBC: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80005CC0:
    ctx->pc = 0x80005CC0u;
    // 80005CC0: bl      0x80007204
    {
            ctx->lr = 0x80005CC4u;
            goto label_80007204;
    }

label_80005CC4:
    ctx->pc = 0x80005CC4u;
    ctx->downcount -= 2;
    // 80005CC4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80005CC8:
    ctx->pc = 0x80005CC8u;
    // 80005CC8: bl      0x8002DE34
    {
            ctx->lr = 0x80005CCCu;
            ctx->pc = 0x8002DE34u;
            return;
    }

label_80005CCC:
    ctx->pc = 0x80005CCCu;
    ctx->downcount -= 3;
    // 80005CCC: lbz     r3, 18(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(18);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_80005CD0:
    ctx->pc = 0x80005CD0u;
    // 80005CD0: extsb. r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80005CD4:
    ctx->pc = 0x80005CD4u;
    // 80005CD4: bc    12, 2, 0x80005CF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80005CF0;
        }
    }

label_80005CD8:
    ctx->pc = 0x80005CD8u;
    ctx->downcount -= 3;
    // 80005CD8: extsb r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_80005CDC:
    ctx->pc = 0x80005CDCu;
    // 80005CDC: cmpwi   r0, -1
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

label_80005CE0:
    ctx->pc = 0x80005CE0u;
    // 80005CE0: bc    4, 2, 0x80005D44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80005D44;
        }
    }

label_80005CE4:
    ctx->pc = 0x80005CE4u;
    ctx->downcount -= 2;
    // 80005CE4: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_80005CE8:
    ctx->pc = 0x80005CE8u;
    // 80005CE8: bl      0x800072AC
    {
            ctx->lr = 0x80005CECu;
            goto label_800072AC;
    }

label_80005CEC:
    ctx->pc = 0x80005CECu;
    ctx->downcount -= 1;
    // 80005CEC: b       0x80005D44
    {
            goto label_80005D44;
    }

label_80005CF0:
    ctx->pc = 0x80005CF0u;
    ctx->downcount -= 4;
    // 80005CF0: lbz     r3, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_80005CF4:
    ctx->pc = 0x80005CF4u;
    // 80005CF4: lhz     r31, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[31] = mem_read16(ctx, ea);
    }

label_80005CF8:
    ctx->pc = 0x80005CF8u;
    // 80005CF8: extsb. r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80005CFC:
    ctx->pc = 0x80005CFCu;
    // 80005CFC: bc    4, 1, 0x80005D0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80005D0C;
        }
    }

label_80005D00:
    ctx->pc = 0x80005D00u;
    ctx->downcount -= 3;
    // 80005D00: ori     r0, r31, 0x0002
    ctx->gpr[0] = ctx->gpr[31] | 0x0002u;

label_80005D04:
    ctx->pc = 0x80005D04u;
    // 80005D04: rlwinm r31, r0, 0, 16, 31
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80005D08:
    ctx->pc = 0x80005D08u;
    // 80005D08: b       0x80005D1C
    {
            goto label_80005D1C;
    }

label_80005D0C:
    ctx->pc = 0x80005D0Cu;
    ctx->downcount -= 2;
    // 80005D0C: extsb. r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80005D10:
    ctx->pc = 0x80005D10u;
    // 80005D10: bc    4, 0, 0x80005D1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80005D1C;
        }
    }

label_80005D14:
    ctx->pc = 0x80005D14u;
    ctx->downcount -= 2;
    // 80005D14: ori     r0, r31, 0x0001
    ctx->gpr[0] = ctx->gpr[31] | 0x0001u;

label_80005D18:
    ctx->pc = 0x80005D18u;
    // 80005D18: rlwinm r31, r0, 0, 16, 31
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80005D1C:
    ctx->pc = 0x80005D1Cu;
    ctx->downcount -= 3;
    // 80005D1C: lbz     r3, 11(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(11);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_80005D20:
    ctx->pc = 0x80005D20u;
    // 80005D20: extsb. r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80005D24:
    ctx->pc = 0x80005D24u;
    // 80005D24: bc    4, 1, 0x80005D34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80005D34;
        }
    }

label_80005D28:
    ctx->pc = 0x80005D28u;
    ctx->downcount -= 3;
    // 80005D28: ori     r0, r31, 0x0008
    ctx->gpr[0] = ctx->gpr[31] | 0x0008u;

label_80005D2C:
    ctx->pc = 0x80005D2Cu;
    // 80005D2C: rlwinm r31, r0, 0, 16, 31
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80005D30:
    ctx->pc = 0x80005D30u;
    // 80005D30: b       0x80005D44
    {
            goto label_80005D44;
    }

label_80005D34:
    ctx->pc = 0x80005D34u;
    ctx->downcount -= 2;
    // 80005D34: extsb. r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80005D38:
    ctx->pc = 0x80005D38u;
    // 80005D38: bc    4, 0, 0x80005D44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80005D44;
        }
    }

label_80005D3C:
    ctx->pc = 0x80005D3Cu;
    ctx->downcount -= 2;
    // 80005D3C: ori     r0, r31, 0x0004
    ctx->gpr[0] = ctx->gpr[31] | 0x0004u;

label_80005D40:
    ctx->pc = 0x80005D40u;
    // 80005D40: rlwinm r31, r0, 0, 16, 31
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80005D44:
    ctx->pc = 0x80005D44u;
    ctx->downcount -= 20;
    // 80005D44: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80005D48:
    ctx->pc = 0x80005D48u;
    // 80005D48: sth     r31, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_80005D4C:
    ctx->pc = 0x80005D4Cu;
    // 80005D4C: andc   r0, r31, r0
    {
        ctx->gpr[0] = ctx->gpr[31] & ~ctx->gpr[0];
    }

label_80005D50:
    ctx->pc = 0x80005D50u;
    // 80005D50: rlwinm r3, r0, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80005D54:
    ctx->pc = 0x80005D54u;
    // 80005D54: lmw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80005D58:
    ctx->pc = 0x80005D58u;
    // 80005D58: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80005D5C:
    ctx->pc = 0x80005D5Cu;
    // 80005D5C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80005D60:
    ctx->pc = 0x80005D60u;
    // 80005D60: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80005D64:
    ctx->pc = 0x80005D64u;
    // 80005D64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80005D68:
    ctx->pc = 0x80005D68u;
    ctx->downcount -= 18;
    // 80005D68: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80005D6C:
    ctx->pc = 0x80005D6Cu;
    // 80005D6C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80005D70:
    ctx->pc = 0x80005D70u;
    // 80005D70: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_80005D74:
    ctx->pc = 0x80005D74u;
    // 80005D74: lis     r5, -32762
    ctx->gpr[5] = ((u32)(s32)(-32762) << 16);

label_80005D78:
    ctx->pc = 0x80005D78u;
    // 80005D78: lfs     f1, 8832(r3)
    if (!ppc_fp_available_inline(ctx, 0x80005D78u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8832);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80005D7C:
    ctx->pc = 0x80005D7Cu;
    // 80005D7C: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_80005D80:
    ctx->pc = 0x80005D80u;
    // 80005D80: addi    r6, r5, 8836
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(8836);

label_80005D84:
    ctx->pc = 0x80005D84u;
    // 80005D84: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_80005D88:
    ctx->pc = 0x80005D88u;
    // 80005D88: addi    r5, r4, 8840
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(8840);

label_80005D8C:
    ctx->pc = 0x80005D8Cu;
    // 80005D8C: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80005D8Cu)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80005D90:
    ctx->pc = 0x80005D90u;
    // 80005D90: addi    r4, r3, 8844
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(8844);

label_80005D94:
    ctx->pc = 0x80005D94u;
    // 80005D94: fmr    f5, f1
    if (!ppc_fp_available_inline(ctx, 0x80005D94u)) return;
    ctx->fpr[5] = ctx->fpr[1];

label_80005D98:
    ctx->pc = 0x80005D98u;
    // 80005D98: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80005D9C:
    ctx->pc = 0x80005D9Cu;
    // 80005D9C: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_80005DA0:
    ctx->pc = 0x80005DA0u;
    // 80005DA0: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80005DA0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_80005DA4:
    ctx->pc = 0x80005DA4u;
    // 80005DA4: lfs     f4, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80005DA4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_80005DA8:
    ctx->pc = 0x80005DA8u;
    // 80005DA8: lfs     f6, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80005DA8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_80005DAC:
    ctx->pc = 0x80005DACu;
    // 80005DAC: bl      0x80025970
    {
            ctx->lr = 0x80005DB0u;
            ctx->pc = 0x80025970u;
            return;
    }

label_80005DB0:
    ctx->pc = 0x80005DB0u;
    ctx->downcount -= 2;
    // 80005DB0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80005DB4:
    ctx->pc = 0x80005DB4u;
    // 80005DB4: bl      0x80025030
    {
            ctx->lr = 0x80005DB8u;
            ctx->pc = 0x80025030u;
            return;
    }

label_80005DB8:
    ctx->pc = 0x80005DB8u;
    ctx->downcount -= 1;
    // 80005DB8: bl      0x8004BACC
    {
            ctx->lr = 0x80005DBCu;
            ctx->pc = 0x8004BACCu;
            return;
    }

label_80005DBC:
    ctx->pc = 0x80005DBCu;
    ctx->downcount -= 1;
    // 80005DBC: bl      0x8004C820
    {
            ctx->lr = 0x80005DC0u;
            ctx->pc = 0x8004C820u;
            return;
    }

label_80005DC0:
    ctx->pc = 0x80005DC0u;
    ctx->downcount -= 2;
    // 80005DC0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80005DC4:
    ctx->pc = 0x80005DC4u;
    // 80005DC4: bl      0x800424A0
    {
            ctx->lr = 0x80005DC8u;
            ctx->pc = 0x800424A0u;
            return;
    }

label_80005DC8:
    ctx->pc = 0x80005DC8u;
    ctx->downcount -= 2;
    // 80005DC8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80005DCC:
    ctx->pc = 0x80005DCCu;
    // 80005DCC: bl      0x80045EC8
    {
            ctx->lr = 0x80005DD0u;
            ctx->pc = 0x80045EC8u;
            return;
    }

label_80005DD0:
    ctx->pc = 0x80005DD0u;
    ctx->downcount -= 2;
    // 80005DD0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80005DD4:
    ctx->pc = 0x80005DD4u;
    // 80005DD4: bl      0x80044084
    {
            ctx->lr = 0x80005DD8u;
            ctx->pc = 0x80044084u;
            return;
    }

label_80005DD8:
    ctx->pc = 0x80005DD8u;
    ctx->downcount -= 2;
    // 80005DD8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80005DDC:
    ctx->pc = 0x80005DDCu;
    // 80005DDC: bl      0x800455BC
    {
            ctx->lr = 0x80005DE0u;
            ctx->pc = 0x800455BCu;
            return;
    }

label_80005DE0:
    ctx->pc = 0x80005DE0u;
    ctx->downcount -= 2;
    // 80005DE0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80005DE4:
    ctx->pc = 0x80005DE4u;
    // 80005DE4: bl      0x800455E0
    {
            ctx->lr = 0x80005DE8u;
            ctx->pc = 0x800455E0u;
            return;
    }

label_80005DE8:
    ctx->pc = 0x80005DE8u;
    ctx->downcount -= 5;
    // 80005DE8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80005DEC:
    ctx->pc = 0x80005DECu;
    // 80005DEC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80005DF0:
    ctx->pc = 0x80005DF0u;
    // 80005DF0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80005DF4:
    ctx->pc = 0x80005DF4u;
    // 80005DF4: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80005DF8:
    ctx->pc = 0x80005DF8u;
    // 80005DF8: bl      0x80045D2C
    {
            ctx->lr = 0x80005DFCu;
            ctx->pc = 0x80045D2Cu;
            return;
    }

label_80005DFC:
    ctx->pc = 0x80005DFCu;
    ctx->downcount -= 5;
    // 80005DFC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80005E00:
    ctx->pc = 0x80005E00u;
    // 80005E00: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80005E04:
    ctx->pc = 0x80005E04u;
    // 80005E04: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80005E08:
    ctx->pc = 0x80005E08u;
    // 80005E08: li      r6, 60
    ctx->gpr[6] = (u32)(s32)(60);

label_80005E0C:
    ctx->pc = 0x80005E0Cu;
    // 80005E0C: bl      0x80005F00
    {
            ctx->lr = 0x80005E10u;
            goto label_80005F00;
    }

label_80005E10:
    ctx->pc = 0x80005E10u;
    ctx->downcount -= 8;
    // 80005E10: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80005E14:
    ctx->pc = 0x80005E14u;
    // 80005E14: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80005E18:
    ctx->pc = 0x80005E18u;
    // 80005E18: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80005E1C:
    ctx->pc = 0x80005E1Cu;
    // 80005E1C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80005E20:
    ctx->pc = 0x80005E20u;
    // 80005E20: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80005E24:
    ctx->pc = 0x80005E24u;
    // 80005E24: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80005E28:
    ctx->pc = 0x80005E28u;
    // 80005E28: li      r9, 2
    ctx->gpr[9] = (u32)(s32)(2);

label_80005E2C:
    ctx->pc = 0x80005E2Cu;
    // 80005E2C: bl      0x800440C0
    {
            ctx->lr = 0x80005E30u;
            ctx->pc = 0x800440C0u;
            return;
    }

label_80005E30:
    ctx->pc = 0x80005E30u;
    ctx->downcount -= 5;
    // 80005E30: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80005E34:
    ctx->pc = 0x80005E34u;
    // 80005E34: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80005E38:
    ctx->pc = 0x80005E38u;
    // 80005E38: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80005E3C:
    ctx->pc = 0x80005E3Cu;
    // 80005E3C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80005E40:
    ctx->pc = 0x80005E40u;
    // 80005E40: bl      0x80046238
    {
            ctx->lr = 0x80005E44u;
            ctx->pc = 0x80046238u;
            return;
    }

label_80005E44:
    ctx->pc = 0x80005E44u;
    ctx->downcount -= 7;
    // 80005E44: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80005E48:
    ctx->pc = 0x80005E48u;
    // 80005E48: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80005E4C:
    ctx->pc = 0x80005E4Cu;
    // 80005E4C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80005E50:
    ctx->pc = 0x80005E50u;
    // 80005E50: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80005E54:
    ctx->pc = 0x80005E54u;
    // 80005E54: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80005E58:
    ctx->pc = 0x80005E58u;
    // 80005E58: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80005E5C:
    ctx->pc = 0x80005E5Cu;
    // 80005E5C: bl      0x80045908
    {
            ctx->lr = 0x80005E60u;
            ctx->pc = 0x80045908u;
            return;
    }

label_80005E60:
    ctx->pc = 0x80005E60u;
    ctx->downcount -= 7;
    // 80005E60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80005E64:
    ctx->pc = 0x80005E64u;
    // 80005E64: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80005E68:
    ctx->pc = 0x80005E68u;
    // 80005E68: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80005E6C:
    ctx->pc = 0x80005E6Cu;
    // 80005E6C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80005E70:
    ctx->pc = 0x80005E70u;
    // 80005E70: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80005E74:
    ctx->pc = 0x80005E74u;
    // 80005E74: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80005E78:
    ctx->pc = 0x80005E78u;
    // 80005E78: bl      0x800458A0
    {
            ctx->lr = 0x80005E7Cu;
            ctx->pc = 0x800458A0u;
            return;
    }

label_80005E7C:
    ctx->pc = 0x80005E7Cu;
    ctx->downcount -= 6;
    // 80005E7C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80005E80:
    ctx->pc = 0x80005E80u;
    // 80005E80: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_80005E84:
    ctx->pc = 0x80005E84u;
    // 80005E84: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_80005E88:
    ctx->pc = 0x80005E88u;
    // 80005E88: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_80005E8C:
    ctx->pc = 0x80005E8Cu;
    // 80005E8C: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80005E90:
    ctx->pc = 0x80005E90u;
    // 80005E90: bl      0x8004585C
    {
            ctx->lr = 0x80005E94u;
            ctx->pc = 0x8004585Cu;
            return;
    }

label_80005E94:
    ctx->pc = 0x80005E94u;
    ctx->downcount -= 6;
    // 80005E94: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80005E98:
    ctx->pc = 0x80005E98u;
    // 80005E98: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_80005E9C:
    ctx->pc = 0x80005E9Cu;
    // 80005E9C: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_80005EA0:
    ctx->pc = 0x80005EA0u;
    // 80005EA0: li      r6, 8
    ctx->gpr[6] = (u32)(s32)(8);

label_80005EA4:
    ctx->pc = 0x80005EA4u;
    // 80005EA4: li      r7, 15
    ctx->gpr[7] = (u32)(s32)(15);

label_80005EA8:
    ctx->pc = 0x80005EA8u;
    // 80005EA8: bl      0x80045818
    {
            ctx->lr = 0x80005EACu;
            ctx->pc = 0x80045818u;
            return;
    }

label_80005EAC:
    ctx->pc = 0x80005EACu;
    ctx->downcount -= 1;
    // 80005EAC: bl      0x80041BD4
    {
            ctx->lr = 0x80005EB0u;
            ctx->pc = 0x80041BD4u;
            return;
    }

label_80005EB0:
    ctx->pc = 0x80005EB0u;
    ctx->downcount -= 3;
    // 80005EB0: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_80005EB4:
    ctx->pc = 0x80005EB4u;
    // 80005EB4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80005EB8:
    ctx->pc = 0x80005EB8u;
    // 80005EB8: bl      0x80041500
    {
            ctx->lr = 0x80005EBCu;
            ctx->pc = 0x80041500u;
            return;
    }

label_80005EBC:
    ctx->pc = 0x80005EBCu;
    ctx->downcount -= 3;
    // 80005EBC: li      r3, 13
    ctx->gpr[3] = (u32)(s32)(13);

label_80005EC0:
    ctx->pc = 0x80005EC0u;
    // 80005EC0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80005EC4:
    ctx->pc = 0x80005EC4u;
    // 80005EC4: bl      0x80041500
    {
            ctx->lr = 0x80005EC8u;
            ctx->pc = 0x80041500u;
            return;
    }

label_80005EC8:
    ctx->pc = 0x80005EC8u;
    ctx->downcount -= 2;
    // 80005EC8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80005ECC:
    ctx->pc = 0x80005ECCu;
    // 80005ECC: bl      0x80046420
    {
            ctx->lr = 0x80005ED0u;
            ctx->pc = 0x80046420u;
            return;
    }

label_80005ED0:
    ctx->pc = 0x80005ED0u;
    ctx->downcount -= 3;
    // 80005ED0: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_80005ED4:
    ctx->pc = 0x80005ED4u;
    // 80005ED4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80005ED8:
    ctx->pc = 0x80005ED8u;
    // 80005ED8: bl      0x800468B8
    {
            ctx->lr = 0x80005EDCu;
            ctx->pc = 0x800468B8u;
            return;
    }

label_80005EDC:
    ctx->pc = 0x80005EDCu;
    ctx->downcount -= 3;
    // 80005EDC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80005EE0:
    ctx->pc = 0x80005EE0u;
    // 80005EE0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80005EE4:
    ctx->pc = 0x80005EE4u;
    // 80005EE4: bl      0x80046A30
    {
            ctx->lr = 0x80005EE8u;
            ctx->pc = 0x80046A30u;
            return;
    }

label_80005EE8:
    ctx->pc = 0x80005EE8u;
    ctx->downcount -= 2;
    // 80005EE8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80005EEC:
    ctx->pc = 0x80005EECu;
    // 80005EEC: bl      0x80046B34
    {
            ctx->lr = 0x80005EF0u;
            ctx->pc = 0x80046B34u;
            return;
    }

label_80005EF0:
    ctx->pc = 0x80005EF0u;
    ctx->downcount -= 5;
    // 80005EF0: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80005EF4:
    ctx->pc = 0x80005EF4u;
    // 80005EF4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80005EF8:
    ctx->pc = 0x80005EF8u;
    // 80005EF8: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_80005EFC:
    ctx->pc = 0x80005EFCu;
    // 80005EFC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80005F00:
    ctx->pc = 0x80005F00u;
    ctx->downcount -= 6;
    // 80005F00: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80005F04:
    ctx->pc = 0x80005F04u;
    // 80005F04: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80005F08:
    ctx->pc = 0x80005F08u;
    // 80005F08: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80005F0C:
    ctx->pc = 0x80005F0Cu;
    // 80005F0C: li      r8, 125
    ctx->gpr[8] = (u32)(s32)(125);

label_80005F10:
    ctx->pc = 0x80005F10u;
    // 80005F10: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80005F14:
    ctx->pc = 0x80005F14u;
    // 80005F14: bl      0x80042220
    {
            ctx->lr = 0x80005F18u;
            ctx->pc = 0x80042220u;
            return;
    }

label_80005F18:
    ctx->pc = 0x80005F18u;
    ctx->downcount -= 5;
    // 80005F18: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80005F1C:
    ctx->pc = 0x80005F1Cu;
    // 80005F1C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80005F20:
    ctx->pc = 0x80005F20u;
    // 80005F20: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80005F24:
    ctx->pc = 0x80005F24u;
    // 80005F24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80005F28:
    ctx->pc = 0x80005F28u;
    ctx->downcount -= 6;
    // 80005F28: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80005F2C:
    ctx->pc = 0x80005F2Cu;
    // 80005F2C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80005F30:
    ctx->pc = 0x80005F30u;
    // 80005F30: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80005F34:
    ctx->pc = 0x80005F34u;
    // 80005F34: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80005F38:
    ctx->pc = 0x80005F38u;
    // 80005F38: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80005F3C:
    ctx->pc = 0x80005F3Cu;
    // 80005F3C: bl      0x8004C830
    {
            ctx->lr = 0x80005F40u;
            ctx->pc = 0x8004C830u;
            return;
    }

label_80005F40:
    ctx->pc = 0x80005F40u;
    ctx->downcount -= 2;
    // 80005F40: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80005F44:
    ctx->pc = 0x80005F44u;
    // 80005F44: bl      0x8004B8A8
    {
            ctx->lr = 0x80005F48u;
            ctx->pc = 0x8004B8A8u;
            return;
    }

label_80005F48:
    ctx->pc = 0x80005F48u;
    ctx->downcount -= 2;
    // 80005F48: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80005F4C:
    ctx->pc = 0x80005F4Cu;
    // 80005F4C: bl      0x8004C2F0
    {
            ctx->lr = 0x80005F50u;
            ctx->pc = 0x8004C2F0u;
            return;
    }

label_80005F50:
    ctx->pc = 0x80005F50u;
    ctx->downcount -= 1;
    // 80005F50: bl      0x8004C388
    {
            ctx->lr = 0x80005F54u;
            ctx->pc = 0x8004C388u;
            return;
    }

label_80005F54:
    ctx->pc = 0x80005F54u;
    ctx->downcount -= 5;
    // 80005F54: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80005F58:
    ctx->pc = 0x80005F58u;
    // 80005F58: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80005F5C:
    ctx->pc = 0x80005F5Cu;
    // 80005F5C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80005F60:
    ctx->pc = 0x80005F60u;
    // 80005F60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80005F64:
    ctx->pc = 0x80005F64u;
    ctx->downcount -= 22;
    // 80005F64: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80005F68:
    ctx->pc = 0x80005F68u;
    // 80005F68: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80005F6C:
    ctx->pc = 0x80005F6Cu;
    // 80005F6C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80005F70:
    ctx->pc = 0x80005F70u;
    // 80005F70: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80005F74:
    ctx->pc = 0x80005F74u;
    // 80005F74: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80005F78:
    ctx->pc = 0x80005F78u;
    // 80005F78: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80005F7C:
    ctx->pc = 0x80005F7Cu;
    // 80005F7C: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80005F80:
    ctx->pc = 0x80005F80u;
    // 80005F80: or   r28, r6, r6
    {
        ctx->gpr[28] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80005F84:
    ctx->pc = 0x80005F84u;
    // 80005F84: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_80005F88:
    ctx->pc = 0x80005F88u;
    // 80005F88: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80005F8C:
    ctx->pc = 0x80005F8Cu;
    // 80005F8C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80005F90:
    ctx->pc = 0x80005F90u;
    // 80005F90: bl      0x80042E0C
    {
            ctx->lr = 0x80005F94u;
            ctx->pc = 0x80042E0Cu;
            return;
    }

label_80005F94:
    ctx->pc = 0x80005F94u;
    ctx->downcount -= 5;
    // 80005F94: extsh r29, r29
    {
        ctx->gpr[29] = (u32)(s32)(s16)ctx->gpr[29];
    }

label_80005F98:
    ctx->pc = 0x80005F98u;
    // 80005F98: extsh r31, r31
    {
        ctx->gpr[31] = (u32)(s32)(s16)ctx->gpr[31];
    }

label_80005F9C:
    ctx->pc = 0x80005F9Cu;
    // 80005F9C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80005FA0:
    ctx->pc = 0x80005FA0u;
    // 80005FA0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80005FA4:
    ctx->pc = 0x80005FA4u;
    // 80005FA4: bl      0x80006030
    {
            ctx->lr = 0x80005FA8u;
            goto label_80006030;
    }

label_80005FA8:
    ctx->pc = 0x80005FA8u;
    ctx->downcount -= 3;
    // 80005FA8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80005FAC:
    ctx->pc = 0x80005FACu;
    // 80005FAC: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_80005FB0:
    ctx->pc = 0x80005FB0u;
    // 80005FB0: bl      0x80006020
    {
            ctx->lr = 0x80005FB4u;
            goto label_80006020;
    }

label_80005FB4:
    ctx->pc = 0x80005FB4u;
    ctx->downcount -= 4;
    // 80005FB4: extsh r30, r30
    {
        ctx->gpr[30] = (u32)(s32)(s16)ctx->gpr[30];
    }

label_80005FB8:
    ctx->pc = 0x80005FB8u;
    // 80005FB8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80005FBC:
    ctx->pc = 0x80005FBCu;
    // 80005FBC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80005FC0:
    ctx->pc = 0x80005FC0u;
    // 80005FC0: bl      0x80006030
    {
            ctx->lr = 0x80005FC4u;
            goto label_80006030;
    }

label_80005FC4:
    ctx->pc = 0x80005FC4u;
    ctx->downcount -= 3;
    // 80005FC4: li      r3, 4096
    ctx->gpr[3] = (u32)(s32)(4096);

label_80005FC8:
    ctx->pc = 0x80005FC8u;
    // 80005FC8: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_80005FCC:
    ctx->pc = 0x80005FCCu;
    // 80005FCC: bl      0x80006020
    {
            ctx->lr = 0x80005FD0u;
            goto label_80006020;
    }

label_80005FD0:
    ctx->pc = 0x80005FD0u;
    ctx->downcount -= 4;
    // 80005FD0: extsh r31, r28
    {
        ctx->gpr[31] = (u32)(s32)(s16)ctx->gpr[28];
    }

label_80005FD4:
    ctx->pc = 0x80005FD4u;
    // 80005FD4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80005FD8:
    ctx->pc = 0x80005FD8u;
    // 80005FD8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80005FDC:
    ctx->pc = 0x80005FDCu;
    // 80005FDC: bl      0x80006030
    {
            ctx->lr = 0x80005FE0u;
            goto label_80006030;
    }

label_80005FE0:
    ctx->pc = 0x80005FE0u;
    ctx->downcount -= 3;
    // 80005FE0: li      r3, 4096
    ctx->gpr[3] = (u32)(s32)(4096);

label_80005FE4:
    ctx->pc = 0x80005FE4u;
    // 80005FE4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80005FE8:
    ctx->pc = 0x80005FE8u;
    // 80005FE8: bl      0x80006020
    {
            ctx->lr = 0x80005FECu;
            goto label_80006020;
    }

label_80005FEC:
    ctx->pc = 0x80005FECu;
    ctx->downcount -= 3;
    // 80005FEC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80005FF0:
    ctx->pc = 0x80005FF0u;
    // 80005FF0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80005FF4:
    ctx->pc = 0x80005FF4u;
    // 80005FF4: bl      0x80006030
    {
            ctx->lr = 0x80005FF8u;
            goto label_80006030;
    }

label_80005FF8:
    ctx->pc = 0x80005FF8u;
    ctx->downcount -= 3;
    // 80005FF8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80005FFC:
    ctx->pc = 0x80005FFCu;
    // 80005FFC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80006000:
    ctx->pc = 0x80006000u;
    // 80006000: bl      0x80006020
    {
            ctx->lr = 0x80006004u;
            goto label_80006020;
    }

label_80006004:
    ctx->pc = 0x80006004u;
    ctx->downcount -= 1;
    // 80006004: bl      0x8000601C
    {
            ctx->lr = 0x80006008u;
            goto label_8000601C;
    }

label_80006008:
    ctx->pc = 0x80006008u;
    ctx->downcount -= 16;
    // 80006008: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8000600C:
    ctx->pc = 0x8000600Cu;
    // 8000600C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80006010:
    ctx->pc = 0x80006010u;
    // 80006010: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80006014:
    ctx->pc = 0x80006014u;
    // 80006014: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80006018:
    ctx->pc = 0x80006018u;
    // 80006018: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_8000601C:
    ctx->pc = 0x8000601Cu;
    ctx->downcount -= 1;
    // 8000601C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80006020:
    ctx->pc = 0x80006020u;
    ctx->downcount -= 4;
    // 80006020: lis     r5, -13311
    ctx->gpr[5] = ((u32)(s32)(-13311) << 16);

label_80006024:
    ctx->pc = 0x80006024u;
    // 80006024: sth     r3, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_80006028:
    ctx->pc = 0x80006028u;
    // 80006028: sth     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8000602C:
    ctx->pc = 0x8000602Cu;
    // 8000602C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80006030:
    ctx->pc = 0x80006030u;
    ctx->downcount -= 4;
    // 80006030: lis     r5, -13311
    ctx->gpr[5] = ((u32)(s32)(-13311) << 16);

label_80006034:
    ctx->pc = 0x80006034u;
    // 80006034: sth     r3, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_80006038:
    ctx->pc = 0x80006038u;
    // 80006038: sth     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8000603C:
    ctx->pc = 0x8000603Cu;
    // 8000603C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80006040:
    ctx->pc = 0x80006040u;
    ctx->downcount -= 26;
    // 80006040: stwu     r1, -448(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-448);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80006044:
    ctx->pc = 0x80006044u;
    // 80006044: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80006048:
    ctx->pc = 0x80006048u;
    // 80006048: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8000604C:
    ctx->pc = 0x8000604Cu;
    // 8000604C: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_80006050:
    ctx->pc = 0x80006050u;
    // 80006050: stw     r0, 452(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(452);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80006054:
    ctx->pc = 0x80006054u;
    // 80006054: addi    r4, r4, 8848
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8848);

label_80006058:
    ctx->pc = 0x80006058u;
    // 80006058: addi    r3, r3, 26208
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(26208);

label_8000605C:
    ctx->pc = 0x8000605Cu;
    // 8000605C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80006060:
    ctx->pc = 0x80006060u;
    // 80006060: stmw     r23, 412(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(412);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80006064:
    ctx->pc = 0x80006064u;
    // 80006064: addis   r24, r3, 8
    ctx->gpr[24] = ctx->gpr[3] + ((u32)(s32)(8) << 16);

label_80006068:
    ctx->pc = 0x80006068u;
    // 80006068: addi    r24, r24, 16384
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(16384);

label_8000606C:
    ctx->pc = 0x8000606Cu;
    // 8000606C: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_80006070:
    ctx->pc = 0x80006070u;
    // 80006070: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80006074:
    ctx->pc = 0x80006074u;
    // 80006074: sth     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80006078:
    ctx->pc = 0x80006078u;
    // 80006078: stw     r4, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000607C:
    ctx->pc = 0x8000607Cu;
    // 8000607C: bl      0x80049C9C
    {
            ctx->lr = 0x80006080u;
            ctx->pc = 0x80049C9Cu;
            return;
    }

label_80006080:
    ctx->pc = 0x80006080u;
    ctx->downcount -= 2;
    // 80006080: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_80006084:
    ctx->pc = 0x80006084u;
    // 80006084: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_80006088:
    ctx->downcount -= 5;
    // 80006088: addi    r4, r1, 52
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(52);

label_8000608C:
    // 8000608C: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_80006090:
    // 80006090: or   r5, r23, r23
    {
        ctx->gpr[5] = ctx->gpr[23] | ctx->gpr[23];
    }

label_80006094:
    // 80006094: add   r4, r4, r25
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[25];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80006098:
    // 80006098: bl      0x80047A1C
    {
            ctx->lr = 0x8000609Cu;
            ctx->pc = 0x80047A1Cu;
            return;
    }

label_8000609C:
    ctx->downcount -= 4;
    // 8000609C: addi    r23, r23, 1
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(1);

label_800060A0:
    // 800060A0: addi    r25, r25, 32
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(32);

label_800060A4:
    // 800060A4: cmpwi   r23, 11
    {
        s32 val_a = (s32)(ctx->gpr[23]);
        s32 val_b = (s32)(11);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800060A8:
    // 800060A8: bc    12, 0, 0x80006088
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80006088u;
                return;
            }
            goto label_80006088;
        }
    }

label_800060AC:
    ctx->pc = 0x800060ACu;
    ctx->downcount -= 1;
    // 800060AC: bl      0x800223D4
    {
            ctx->lr = 0x800060B0u;
            ctx->pc = 0x800223D4u;
            return;
    }

label_800060B0:
    ctx->pc = 0x800060B0u;
    ctx->downcount -= 5;
    // 800060B0: lis     r0, -32768
    ctx->gpr[0] = ((u32)(s32)(-32768) << 16);

label_800060B4:
    ctx->pc = 0x800060B4u;
    // 800060B4: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_800060B8:
    ctx->pc = 0x800060B8u;
    // 800060B8: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_800060BC:
    ctx->pc = 0x800060BCu;
    // 800060BC: rlwinm. r0, r0, 27, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800060C0:
    ctx->pc = 0x800060C0u;
    // 800060C0: bc    4, 2, 0x80006420
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80006420;
        }
    }

label_800060C4:
    ctx->pc = 0x800060C4u;
    ctx->downcount -= 1;
    // 800060C4: bl      0x8004DB8C
    {
            ctx->lr = 0x800060C8u;
            ctx->pc = 0x8004DB8Cu;
            return;
    }

label_800060C8:
    ctx->pc = 0x800060C8u;
    ctx->downcount -= 6;
    // 800060C8: lbz     r23, 3(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3);
        ctx->gpr[23] = mem_read8(ctx, ea);
    }

label_800060CC:
    ctx->pc = 0x800060CCu;
    // 800060CC: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_800060D0:
    ctx->pc = 0x800060D0u;
    // 800060D0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_800060D4:
    ctx->pc = 0x800060D4u;
    // 800060D4: cmpwi   r23, 80
    {
        s32 val_a = (s32)(ctx->gpr[23]);
        s32 val_b = (s32)(80);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800060D8:
    ctx->pc = 0x800060D8u;
    // 800060D8: stw     r4, -32740(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32740);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_800060DC:
    ctx->pc = 0x800060DCu;
    // 800060DC: bc    12, 2, 0x8000642C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000642C;
        }
    }

label_800060E0:
    ctx->pc = 0x800060E0u;
    ctx->downcount -= 1;
    // 800060E0: bl      0x8002CA58
    {
            ctx->lr = 0x800060E4u;
            ctx->pc = 0x8002CA58u;
            return;
    }

label_800060E4:
    ctx->pc = 0x800060E4u;
    ctx->downcount -= 2;
    // 800060E4: cmplwi  r3, 0x0000
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

label_800060E8:
    ctx->pc = 0x800060E8u;
    // 800060E8: bc    12, 2, 0x8000642C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000642C;
        }
    }

label_800060EC:
    ctx->pc = 0x800060ECu;
    ctx->downcount -= 3;
    // 800060EC: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_800060F0:
    ctx->pc = 0x800060F0u;
    // 800060F0: li      r27, 600
    ctx->gpr[27] = (u32)(s32)(600);

label_800060F4:
    ctx->pc = 0x800060F4u;
    // 800060F4: bl      0x800230D8
    {
            ctx->lr = 0x800060F8u;
            ctx->pc = 0x800230D8u;
            return;
    }

label_800060F8:
    ctx->pc = 0x800060F8u;
    ctx->downcount -= 2;
    // 800060F8: cmplwi  r3, 0x0001
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0001u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800060FC:
    ctx->pc = 0x800060FCu;
    // 800060FC: bc    4, 2, 0x80006108
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80006108;
        }
    }

label_80006100:
    ctx->pc = 0x80006100u;
    ctx->downcount -= 2;
    // 80006100: li      r24, 1
    ctx->gpr[24] = (u32)(s32)(1);

label_80006104:
    ctx->pc = 0x80006104u;
    // 80006104: b       0x80006130
    {
            goto label_80006130;
    }

label_80006108:
    ctx->pc = 0x80006108u;
    ctx->downcount -= 1;
    // 80006108: li      r25, 60
    ctx->gpr[25] = (u32)(s32)(60);

label_8000610C:
    ctx->downcount -= 2;
    // 8000610C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80006110:
    // 80006110: bl      0x80005CA4
    {
            ctx->lr = 0x80006114u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80005CA4u;
                return;
            }
            goto label_80005CA4;
    }

label_80006114:
    ctx->downcount -= 2;
    // 80006114: rlwinm. r0, r3, 0, 22, 22
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000200u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80006118:
    // 80006118: bc    12, 2, 0x80006124
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80006124;
        }
    }

label_8000611C:
    ctx->downcount -= 2;
    // 8000611C: li      r24, 1
    ctx->gpr[24] = (u32)(s32)(1);

label_80006120:
    // 80006120: b       0x80006130
    {
            goto label_80006130;
    }

label_80006124:
    ctx->downcount -= 1;
    // 80006124: bl      0x8002B64C
    {
            ctx->lr = 0x80006128u;
            ctx->pc = 0x8002B64Cu;
            return;
    }

label_80006128:
    ctx->downcount -= 2;
    // 80006128: addic.  r25, r25, -1
    {
        u64 a = ctx->gpr[25];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[25] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[25];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8000612C:
    // 8000612C: bc    4, 2, 0x8000610C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000610Cu;
                return;
            }
            goto label_8000610C;
        }
    }

label_80006130:
    ctx->pc = 0x80006130u;
    ctx->downcount -= 1;
    // 80006130: bl      0x8002B64C
    {
            ctx->lr = 0x80006134u;
            ctx->pc = 0x8002B64Cu;
            return;
    }

label_80006134:
    ctx->pc = 0x80006134u;
    ctx->downcount -= 2;
    // 80006134: cmpwi   r24, 0
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

label_80006138:
    ctx->pc = 0x80006138u;
    // 80006138: bc    12, 2, 0x8000642C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000642C;
        }
    }

label_8000613C:
    ctx->pc = 0x8000613Cu;
    ctx->downcount -= 25;
    // 8000613C: extsb r3, r23
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[23];
    }

label_80006140:
    ctx->pc = 0x80006140u;
    // 80006140: addi    r30, r1, 52
    ctx->gpr[30] = ctx->gpr[1] + (u32)(s32)(52);

label_80006144:
    ctx->pc = 0x80006144u;
    // 80006144: addi    r0, r3, -74
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-74);

label_80006148:
    ctx->pc = 0x80006148u;
    // 80006148: lis     r5, -32762
    ctx->gpr[5] = ((u32)(s32)(-32762) << 16);

label_8000614C:
    ctx->pc = 0x8000614Cu;
    // 8000614C: addic   r3, r0, -1
    {
        u64 a = ctx->gpr[0];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[3] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80006150:
    ctx->pc = 0x80006150u;
    // 80006150: lwz     r31, 8852(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8852);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80006154:
    ctx->pc = 0x80006154u;
    // 80006154: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_80006158:
    ctx->pc = 0x80006158u;
    // 80006158: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_8000615C:
    ctx->pc = 0x8000615Cu;
    // 8000615C: subfe   r3, r3, r3
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80006160:
    ctx->pc = 0x80006160u;
    // 80006160: lwz     r5, 8856(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8856);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80006164:
    ctx->pc = 0x80006164u;
    // 80006164: and   r26, r0, r3
    {
        ctx->gpr[26] = ctx->gpr[0] & ctx->gpr[3];
    }

label_80006168:
    ctx->pc = 0x80006168u;
    // 80006168: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8000616C:
    ctx->pc = 0x8000616Cu;
    // 8000616C: addi    r4, r26, 1
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(1);

label_80006170:
    ctx->pc = 0x80006170u;
    // 80006170: or   r29, r30, r30
    {
        ctx->gpr[29] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80006174:
    ctx->pc = 0x80006174u;
    // 80006174: addi    r3, r26, 4
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(4);

label_80006178:
    ctx->pc = 0x80006178u;
    // 80006178: addi    r0, r26, 5
    ctx->gpr[0] = ctx->gpr[26] + (u32)(s32)(5);

label_8000617C:
    ctx->pc = 0x8000617Cu;
    // 8000617C: rlwinm r3, r3, 5, 0, 26
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 5u) & 0xFFFFFFE0u;
    }

label_80006180:
    ctx->pc = 0x80006180u;
    // 80006180: stw     r5, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80006184:
    ctx->pc = 0x80006184u;
    // 80006184: rlwinm r4, r4, 5, 0, 26
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 5u) & 0xFFFFFFE0u;
    }

label_80006188:
    ctx->pc = 0x80006188u;
    // 80006188: or   r28, r30, r30
    {
        ctx->gpr[28] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8000618C:
    ctx->pc = 0x8000618Cu;
    // 8000618C: rlwinm r0, r0, 5, 0, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 5u) & 0xFFFFFFE0u;
    }

label_80006190:
    ctx->pc = 0x80006190u;
    // 80006190: add   r29, r29, r3
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_80006194:
    ctx->pc = 0x80006194u;
    // 80006194: add   r30, r30, r4
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_80006198:
    ctx->pc = 0x80006198u;
    // 80006198: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_8000619C:
    ctx->pc = 0x8000619Cu;
    // 8000619C: add   r28, r28, r0
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[28] = res;
    }

label_800061A0:
    ctx->downcount -= 2;
    // 800061A0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_800061A4:
    // 800061A4: bl      0x80005CA4
    {
            ctx->lr = 0x800061A8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80005CA4u;
                return;
            }
            goto label_80005CA4;
    }

label_800061A8:
    ctx->downcount -= 3;
    // 800061A8: rlwinm r0, r3, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_800061AC:
    // 800061AC: cmpwi   r0, 2
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

label_800061B0:
    // 800061B0: bc    12, 2, 0x800061E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800061E4;
        }
    }

label_800061B4:
    ctx->downcount -= 1;
    // 800061B4: bc    4, 0, 0x800061C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800061C4;
        }
    }

label_800061B8:
    ctx->downcount -= 2;
    // 800061B8: cmpwi   r0, 1
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

label_800061BC:
    // 800061BC: bc    4, 0, 0x800061D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800061D8;
        }
    }

label_800061C0:
    ctx->downcount -= 1;
    // 800061C0: b       0x800061EC
    {
            goto label_800061EC;
    }

label_800061C4:
    ctx->downcount -= 2;
    // 800061C4: cmpwi   r0, 256
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(256);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800061C8:
    // 800061C8: bc    12, 2, 0x800061D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800061D0;
        }
    }

label_800061CC:
    ctx->downcount -= 1;
    // 800061CC: b       0x800061EC
    {
            goto label_800061EC;
    }

label_800061D0:
    ctx->downcount -= 2;
    // 800061D0: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_800061D4:
    // 800061D4: b       0x800061EC
    {
            goto label_800061EC;
    }

label_800061D8:
    ctx->downcount -= 3;
    // 800061D8: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_800061DC:
    // 800061DC: li      r27, -1
    ctx->gpr[27] = (u32)(s32)(-1);

label_800061E0:
    // 800061E0: b       0x800061EC
    {
            goto label_800061EC;
    }

label_800061E4:
    ctx->downcount -= 2;
    // 800061E4: li      r25, 1
    ctx->gpr[25] = (u32)(s32)(1);

label_800061E8:
    // 800061E8: li      r27, -1
    ctx->gpr[27] = (u32)(s32)(-1);

label_800061EC:
    ctx->downcount -= 2;
    // 800061EC: cmpwi   r27, 0
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

label_800061F0:
    // 800061F0: bc    4, 1, 0x800061F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800061F8;
        }
    }

label_800061F4:
    ctx->downcount -= 1;
    // 800061F4: addi    r27, r27, -1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(-1);

label_800061F8:
    ctx->downcount -= 1;
    // 800061F8: bl      0x80005D68
    {
            ctx->lr = 0x800061FCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80005D68u;
                return;
            }
            goto label_80005D68;
    }

label_800061FC:
    ctx->pc = 0x800061FCu;
    ctx->downcount -= 4;
    // 800061FC: stw     r31, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80006200:
    // 80006200: addi    r4, r1, 36
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(36);

label_80006204:
    // 80006204: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80006208:
    // 80006208: bl      0x80045970
    {
            ctx->lr = 0x8000620Cu;
            ctx->pc = 0x80045970u;
            return;
    }

label_8000620C:
    ctx->downcount -= 3;
    // 8000620C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80006210:
    // 80006210: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80006214:
    // 80006214: bl      0x80044978
    {
            ctx->lr = 0x80006218u;
            ctx->pc = 0x80044978u;
            return;
    }

label_80006218:
    ctx->downcount -= 2;
    // 80006218: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8000621C:
    // 8000621C: bl      0x800447BC
    {
            ctx->lr = 0x80006220u;
            ctx->pc = 0x800447BCu;
            return;
    }

label_80006220:
    ctx->downcount -= 6;
    // 80006220: rlwinm r4, r3, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_80006224:
    // 80006224: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80006228:
    // 80006228: addi    r0, r4, 512
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(512);

label_8000622C:
    // 8000622C: srawi r0, r0, 1
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

label_80006230:
    // 80006230: extsh r23, r0
    {
        ctx->gpr[23] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_80006234:
    // 80006234: bl      0x800447CC
    {
            ctx->lr = 0x80006238u;
            ctx->pc = 0x800447CCu;
            return;
    }

label_80006238:
    ctx->downcount -= 4;
    // 80006238: subfic  r0, r3, 380
    {
        u64 res = (u64)(u32)(s32)(380) + (u64)(~ctx->gpr[3]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8000623C:
    // 8000623C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80006240:
    // 80006240: extsh r24, r0
    {
        ctx->gpr[24] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_80006244:
    // 80006244: bl      0x800447BC
    {
            ctx->lr = 0x80006248u;
            ctx->pc = 0x800447BCu;
            return;
    }

label_80006248:
    ctx->downcount -= 8;
    // 80006248: rlwinm r0, r3, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_8000624C:
    // 8000624C: or   r4, r24, r24
    {
        ctx->gpr[4] = ctx->gpr[24] | ctx->gpr[24];
    }

label_80006250:
    // 80006250: subfic  r0, r0, 512
    {
        u64 res = (u64)(u32)(s32)(512) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80006254:
    // 80006254: or   r5, r23, r23
    {
        ctx->gpr[5] = ctx->gpr[23] | ctx->gpr[23];
    }

label_80006258:
    // 80006258: srawi r0, r0, 1
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

label_8000625C:
    // 8000625C: li      r6, 380
    ctx->gpr[6] = (u32)(s32)(380);

label_80006260:
    // 80006260: extsh r3, r0
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_80006264:
    // 80006264: bl      0x80005F64
    {
            ctx->lr = 0x80006268u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80005F64u;
                return;
            }
            goto label_80005F64;
    }

label_80006268:
    ctx->downcount -= 2;
    // 80006268: cmpwi   r25, 0
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000626C:
    // 8000626C: bc    4, 2, 0x80006288
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80006288;
        }
    }

label_80006270:
    ctx->pc = 0x80006270u;
    ctx->downcount -= 5;
    // 80006270: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80006274:
    // 80006274: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_80006278:
    // 80006278: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8000627C:
    ctx->pc = 0x8000627Cu;
    // 8000627C: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80006280:
    // 80006280: bl      0x80045970
    {
            ctx->lr = 0x80006284u;
            ctx->pc = 0x80045970u;
            return;
    }

label_80006284:
    ctx->downcount -= 1;
    // 80006284: b       0x8000629C
    {
            goto label_8000629C;
    }

label_80006288:
    ctx->pc = 0x80006288u;
    ctx->downcount -= 5;
    // 80006288: lwz     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000628C:
    // 8000628C: addi    r4, r1, 28
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(28);

label_80006290:
    // 80006290: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80006294:
    ctx->pc = 0x80006294u;
    // 80006294: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80006298:
    // 80006298: bl      0x80045970
    {
            ctx->lr = 0x8000629Cu;
            ctx->pc = 0x80045970u;
            return;
    }

label_8000629C:
    ctx->downcount -= 3;
    // 8000629C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_800062A0:
    // 800062A0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800062A4:
    // 800062A4: bl      0x80044978
    {
            ctx->lr = 0x800062A8u;
            ctx->pc = 0x80044978u;
            return;
    }

label_800062A8:
    ctx->downcount -= 2;
    // 800062A8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_800062AC:
    // 800062AC: bl      0x800447CC
    {
            ctx->lr = 0x800062B0u;
            ctx->pc = 0x800447CCu;
            return;
    }

label_800062B0:
    ctx->downcount -= 4;
    // 800062B0: addi    r0, r3, 400
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(400);

label_800062B4:
    // 800062B4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_800062B8:
    // 800062B8: extsh r24, r0
    {
        ctx->gpr[24] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_800062BC:
    // 800062BC: bl      0x800447BC
    {
            ctx->lr = 0x800062C0u;
            ctx->pc = 0x800447BCu;
            return;
    }

label_800062C0:
    ctx->downcount -= 6;
    // 800062C0: subfic  r0, r3, 236
    {
        u64 res = (u64)(u32)(s32)(236) + (u64)(~ctx->gpr[3]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_800062C4:
    // 800062C4: or   r6, r24, r24
    {
        ctx->gpr[6] = ctx->gpr[24] | ctx->gpr[24];
    }

label_800062C8:
    // 800062C8: extsh r3, r0
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_800062CC:
    // 800062CC: li      r4, 400
    ctx->gpr[4] = (u32)(s32)(400);

label_800062D0:
    // 800062D0: li      r5, 236
    ctx->gpr[5] = (u32)(s32)(236);

label_800062D4:
    // 800062D4: bl      0x80005F64
    {
            ctx->lr = 0x800062D8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80005F64u;
                return;
            }
            goto label_80005F64;
    }

label_800062D8:
    ctx->downcount -= 2;
    // 800062D8: cmpwi   r25, 1
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800062DC:
    // 800062DC: bc    4, 2, 0x800062F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800062F8;
        }
    }

label_800062E0:
    ctx->pc = 0x800062E0u;
    ctx->downcount -= 5;
    // 800062E0: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800062E4:
    // 800062E4: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_800062E8:
    // 800062E8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_800062EC:
    ctx->pc = 0x800062ECu;
    // 800062EC: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800062F0:
    // 800062F0: bl      0x80045970
    {
            ctx->lr = 0x800062F4u;
            ctx->pc = 0x80045970u;
            return;
    }

label_800062F4:
    ctx->downcount -= 1;
    // 800062F4: b       0x8000630C
    {
            goto label_8000630C;
    }

label_800062F8:
    ctx->pc = 0x800062F8u;
    ctx->downcount -= 5;
    // 800062F8: lwz     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800062FC:
    // 800062FC: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_80006300:
    // 80006300: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80006304:
    ctx->pc = 0x80006304u;
    // 80006304: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80006308:
    // 80006308: bl      0x80045970
    {
            ctx->lr = 0x8000630Cu;
            ctx->pc = 0x80045970u;
            return;
    }

label_8000630C:
    ctx->downcount -= 3;
    // 8000630C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80006310:
    // 80006310: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80006314:
    // 80006314: bl      0x80044978
    {
            ctx->lr = 0x80006318u;
            ctx->pc = 0x80044978u;
            return;
    }

label_80006318:
    ctx->downcount -= 2;
    // 80006318: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8000631C:
    // 8000631C: bl      0x800447CC
    {
            ctx->lr = 0x80006320u;
            ctx->pc = 0x800447CCu;
            return;
    }

label_80006320:
    ctx->downcount -= 4;
    // 80006320: addi    r0, r3, 400
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(400);

label_80006324:
    // 80006324: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80006328:
    // 80006328: extsh r24, r0
    {
        ctx->gpr[24] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_8000632C:
    // 8000632C: bl      0x800447BC
    {
            ctx->lr = 0x80006330u;
            ctx->pc = 0x800447BCu;
            return;
    }

label_80006330:
    ctx->downcount -= 6;
    // 80006330: addi    r0, r3, 276
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(276);

label_80006334:
    // 80006334: or   r6, r24, r24
    {
        ctx->gpr[6] = ctx->gpr[24] | ctx->gpr[24];
    }

label_80006338:
    // 80006338: extsh r5, r0
    {
        ctx->gpr[5] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_8000633C:
    // 8000633C: li      r3, 276
    ctx->gpr[3] = (u32)(s32)(276);

label_80006340:
    // 80006340: li      r4, 400
    ctx->gpr[4] = (u32)(s32)(400);

label_80006344:
    // 80006344: bl      0x80005F64
    {
            ctx->lr = 0x80006348u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80005F64u;
                return;
            }
            goto label_80005F64;
    }

label_80006348:
    ctx->downcount -= 1;
    // 80006348: bl      0x80005F28
    {
            ctx->lr = 0x8000634Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80005F28u;
                return;
            }
            goto label_80005F28;
    }

label_8000634C:
    ctx->downcount -= 2;
    // 8000634C: cmpwi   r27, 0
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

label_80006350:
    // 80006350: bc    4, 2, 0x800061A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800061A0u;
                return;
            }
            goto label_800061A0;
        }
    }

label_80006354:
    ctx->pc = 0x80006354u;
    ctx->downcount -= 2;
    // 80006354: cmpwi   r25, 0
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80006358:
    ctx->pc = 0x80006358u;
    // 80006358: bc    12, 2, 0x80006360
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80006360;
        }
    }

label_8000635C:
    ctx->pc = 0x8000635Cu;
    ctx->downcount -= 1;
    // 8000635C: b       0x80006380
    {
            goto label_80006380;
    }

label_80006360:
    ctx->pc = 0x80006360u;
    ctx->downcount -= 2;
    // 80006360: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80006364:
    ctx->pc = 0x80006364u;
    // 80006364: bl      0x80023148
    {
            ctx->lr = 0x80006368u;
            ctx->pc = 0x80023148u;
            return;
    }

label_80006368:
    ctx->pc = 0x80006368u;
    ctx->downcount -= 5;
    // 80006368: addi    r0, r26, 2
    ctx->gpr[0] = ctx->gpr[26] + (u32)(s32)(2);

label_8000636C:
    ctx->pc = 0x8000636Cu;
    // 8000636C: addi    r24, r1, 52
    ctx->gpr[24] = ctx->gpr[1] + (u32)(s32)(52);

label_80006370:
    ctx->pc = 0x80006370u;
    // 80006370: rlwinm r0, r0, 5, 0, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 5u) & 0xFFFFFFE0u;
    }

label_80006374:
    ctx->pc = 0x80006374u;
    // 80006374: add   r24, r24, r0
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[24] = res;
    }

label_80006378:
    ctx->pc = 0x80006378u;
    // 80006378: bl      0x8004BB44
    {
            ctx->lr = 0x8000637Cu;
            ctx->pc = 0x8004BB44u;
            return;
    }

label_8000637C:
    ctx->pc = 0x8000637Cu;
    ctx->downcount -= 1;
    // 8000637C: b       0x80006398
    {
            goto label_80006398;
    }

label_80006380:
    ctx->pc = 0x80006380u;
    ctx->downcount -= 2;
    // 80006380: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80006384:
    ctx->pc = 0x80006384u;
    // 80006384: bl      0x80023148
    {
            ctx->lr = 0x80006388u;
            ctx->pc = 0x80023148u;
            return;
    }

label_80006388:
    ctx->pc = 0x80006388u;
    ctx->downcount -= 4;
    // 80006388: addi    r0, r26, 3
    ctx->gpr[0] = ctx->gpr[26] + (u32)(s32)(3);

label_8000638C:
    ctx->pc = 0x8000638Cu;
    // 8000638C: addi    r24, r1, 52
    ctx->gpr[24] = ctx->gpr[1] + (u32)(s32)(52);

label_80006390:
    ctx->pc = 0x80006390u;
    // 80006390: rlwinm r0, r0, 5, 0, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 5u) & 0xFFFFFFE0u;
    }

label_80006394:
    ctx->pc = 0x80006394u;
    // 80006394: add   r24, r24, r0
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[24] = res;
    }

label_80006398:
    ctx->pc = 0x80006398u;
    ctx->downcount -= 2;
    // 80006398: li      r23, 300
    ctx->gpr[23] = (u32)(s32)(300);

label_8000639C:
    ctx->pc = 0x8000639Cu;
    // 8000639C: lwz     r27, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_800063A0:
    ctx->downcount -= 1;
    // 800063A0: bl      0x80005D68
    {
            ctx->lr = 0x800063A4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80005D68u;
                return;
            }
            goto label_80005D68;
    }

label_800063A4:
    ctx->pc = 0x800063A4u;
    ctx->downcount -= 4;
    // 800063A4: stw     r27, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_800063A8:
    // 800063A8: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_800063AC:
    // 800063AC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_800063B0:
    // 800063B0: bl      0x80045970
    {
            ctx->lr = 0x800063B4u;
            ctx->pc = 0x80045970u;
            return;
    }

label_800063B4:
    ctx->downcount -= 3;
    // 800063B4: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_800063B8:
    // 800063B8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800063BC:
    // 800063BC: bl      0x80044978
    {
            ctx->lr = 0x800063C0u;
            ctx->pc = 0x80044978u;
            return;
    }

label_800063C0:
    ctx->downcount -= 2;
    // 800063C0: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_800063C4:
    // 800063C4: bl      0x800447BC
    {
            ctx->lr = 0x800063C8u;
            ctx->pc = 0x800447BCu;
            return;
    }

label_800063C8:
    ctx->downcount -= 6;
    // 800063C8: rlwinm r4, r3, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_800063CC:
    // 800063CC: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_800063D0:
    // 800063D0: addi    r0, r4, 512
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(512);

label_800063D4:
    // 800063D4: srawi r0, r0, 1
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

label_800063D8:
    // 800063D8: extsh r26, r0
    {
        ctx->gpr[26] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_800063DC:
    // 800063DC: bl      0x800447CC
    {
            ctx->lr = 0x800063E0u;
            ctx->pc = 0x800447CCu;
            return;
    }

label_800063E0:
    ctx->downcount -= 4;
    // 800063E0: subfic  r0, r3, 380
    {
        u64 res = (u64)(u32)(s32)(380) + (u64)(~ctx->gpr[3]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_800063E4:
    // 800063E4: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_800063E8:
    // 800063E8: extsh r25, r0
    {
        ctx->gpr[25] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_800063EC:
    // 800063EC: bl      0x800447BC
    {
            ctx->lr = 0x800063F0u;
            ctx->pc = 0x800447BCu;
            return;
    }

label_800063F0:
    ctx->downcount -= 8;
    // 800063F0: rlwinm r0, r3, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_800063F4:
    // 800063F4: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_800063F8:
    // 800063F8: subfic  r0, r0, 512
    {
        u64 res = (u64)(u32)(s32)(512) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_800063FC:
    // 800063FC: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_80006400:
    // 80006400: srawi r0, r0, 1
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

label_80006404:
    // 80006404: li      r6, 380
    ctx->gpr[6] = (u32)(s32)(380);

label_80006408:
    // 80006408: extsh r3, r0
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_8000640C:
    // 8000640C: bl      0x80005F64
    {
            ctx->lr = 0x80006410u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80005F64u;
                return;
            }
            goto label_80005F64;
    }

label_80006410:
    ctx->downcount -= 1;
    // 80006410: bl      0x80005F28
    {
            ctx->lr = 0x80006414u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80005F28u;
                return;
            }
            goto label_80005F28;
    }

label_80006414:
    ctx->downcount -= 2;
    // 80006414: addic.  r23, r23, -1
    {
        u64 a = ctx->gpr[23];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[23] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[23];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80006418:
    // 80006418: bc    4, 2, 0x800063A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800063A0u;
                return;
            }
            goto label_800063A0;
        }
    }

label_8000641C:
    ctx->pc = 0x8000641Cu;
    ctx->downcount -= 1;
    // 8000641C: b       0x8000642C
    {
            goto label_8000642C;
    }

label_80006420:
    ctx->pc = 0x80006420u;
    ctx->downcount -= 3;
    // 80006420: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_80006424:
    ctx->pc = 0x80006424u;
    // 80006424: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80006428:
    ctx->pc = 0x80006428u;
    // 80006428: stw     r0, -32740(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32740);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000642C:
    ctx->pc = 0x8000642Cu;
    ctx->downcount -= 2;
    // 8000642C: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_80006430:
    ctx->pc = 0x80006430u;
    // 80006430: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_80006434:
    ctx->downcount -= 4;
    // 80006434: srawi r0, r25, 6
    {
        u32 sh = 6u;
        u32 value = ctx->gpr[25];
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

label_80006438:
    // 80006438: addze  r0, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8000643C:
    ctx->pc = 0x8000643Cu;
    // 8000643C: stb     r0, 51(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(51);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80006440:
    // 80006440: bl      0x80005D68
    {
            ctx->lr = 0x80006444u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80005D68u;
                return;
            }
            goto label_80005D68;
    }

label_80006444:
    ctx->downcount -= 3;
    // 80006444: addi    r3, r1, 52
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(52);

label_80006448:
    // 80006448: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8000644C:
    // 8000644C: bl      0x80044978
    {
            ctx->lr = 0x80006450u;
            ctx->pc = 0x80044978u;
            return;
    }

label_80006450:
    ctx->pc = 0x80006450u;
    ctx->downcount -= 5;
    // 80006450: lwz     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80006454:
    // 80006454: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_80006458:
    // 80006458: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8000645C:
    ctx->pc = 0x8000645Cu;
    // 8000645C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80006460:
    // 80006460: bl      0x80045970
    {
            ctx->lr = 0x80006464u;
            ctx->pc = 0x80045970u;
            return;
    }

label_80006464:
    ctx->downcount -= 5;
    // 80006464: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80006468:
    // 80006468: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8000646C:
    // 8000646C: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_80006470:
    // 80006470: li      r6, 448
    ctx->gpr[6] = (u32)(s32)(448);

label_80006474:
    // 80006474: bl      0x80005F64
    {
            ctx->lr = 0x80006478u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80005F64u;
                return;
            }
            goto label_80005F64;
    }

label_80006478:
    ctx->downcount -= 1;
    // 80006478: bl      0x80005F28
    {
            ctx->lr = 0x8000647Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80005F28u;
                return;
            }
            goto label_80005F28;
    }

label_8000647C:
    ctx->downcount -= 4;
    // 8000647C: addi    r23, r23, 1
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(1);

label_80006480:
    // 80006480: addi    r25, r25, 255
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(255);

label_80006484:
    // 80006484: cmpwi   r23, 64
    {
        s32 val_a = (s32)(ctx->gpr[23]);
        s32 val_b = (s32)(64);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80006488:
    // 80006488: bc    4, 1, 0x80006434
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80006434u;
                return;
            }
            goto label_80006434;
        }
    }

label_8000648C:
    ctx->pc = 0x8000648Cu;
    ctx->downcount -= 16;
    // 8000648C: lmw     r23, 412(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(412);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80006490:
    ctx->pc = 0x80006490u;
    // 80006490: lwz     r0, 452(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(452);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80006494:
    ctx->pc = 0x80006494u;
    // 80006494: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80006498:
    ctx->pc = 0x80006498u;
    // 80006498: addi    r1, r1, 448
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(448);

label_8000649C:
    ctx->pc = 0x8000649Cu;
    // 8000649C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_800064A0:
    ctx->pc = 0x800064A0u;
    ctx->downcount -= 4;
    // 800064A0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800064A4:
    ctx->pc = 0x800064A4u;
    // 800064A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800064A8:
    ctx->pc = 0x800064A8u;
    // 800064A8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800064AC:
    ctx->pc = 0x800064ACu;
    // 800064AC: bl      0x800069AC
    {
            ctx->lr = 0x800064B0u;
            goto label_800069AC;
    }

label_800064B0:
    ctx->pc = 0x800064B0u;
    ctx->downcount -= 1;
    // 800064B0: bl      0x800066EC
    {
            ctx->lr = 0x800064B4u;
            goto label_800066EC;
    }

label_800064B4:
    ctx->pc = 0x800064B4u;
    ctx->downcount -= 5;
    // 800064B4: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_800064B8:
    ctx->pc = 0x800064B8u;
    // 800064B8: lis     r3, 32512
    ctx->gpr[3] = ((u32)(s32)(32512) << 16);

label_800064BC:
    ctx->pc = 0x800064BCu;
    // 800064BC: addi    r4, r4, 26208
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(26208);

label_800064C0:
    ctx->pc = 0x800064C0u;
    // 800064C0: li      r5, 17738
    ctx->gpr[5] = (u32)(s32)(17738);

label_800064C4:
    ctx->pc = 0x800064C4u;
    // 800064C4: bl      0x8000519C
    {
            ctx->lr = 0x800064C8u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_800064C8:
    ctx->pc = 0x800064C8u;
    ctx->downcount -= 5;
    // 800064C8: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_800064CC:
    ctx->pc = 0x800064CCu;
    // 800064CC: lis     r4, 24
    ctx->gpr[4] = ((u32)(s32)(24) << 16);

label_800064D0:
    ctx->pc = 0x800064D0u;
    // 800064D0: addi    r3, r3, 26208
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(26208);

label_800064D4:
    ctx->pc = 0x800064D4u;
    // 800064D4: addi    r4, r4, -32768
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32768);

label_800064D8:
    ctx->pc = 0x800064D8u;
    // 800064D8: bl      0x8004AC68
    {
            ctx->lr = 0x800064DCu;
            ctx->pc = 0x8004AC68u;
            return;
    }

label_800064DC:
    ctx->pc = 0x800064DCu;
    ctx->downcount -= 1;
    // 800064DC: bl      0x8004DB8C
    {
            ctx->lr = 0x800064E0u;
            ctx->pc = 0x8004DB8Cu;
            return;
    }

label_800064E0:
    ctx->pc = 0x800064E0u;
    ctx->downcount -= 4;
    // 800064E0: lbz     r0, 3(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800064E4:
    ctx->pc = 0x800064E4u;
    // 800064E4: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_800064E8:
    ctx->pc = 0x800064E8u;
    // 800064E8: cmpwi   r0, 80
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(80);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800064EC:
    ctx->pc = 0x800064ECu;
    // 800064EC: bc    12, 2, 0x8000650C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000650C;
        }
    }

label_800064F0:
    ctx->pc = 0x800064F0u;
    ctx->downcount -= 1;
    // 800064F0: bc    4, 0, 0x800064FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800064FC;
        }
    }

label_800064F4:
    ctx->pc = 0x800064F4u;
    ctx->downcount -= 2;
    // 800064F4: cmpwi   r0, 74
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(74);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800064F8:
    ctx->pc = 0x800064F8u;
    // 800064F8: bc    12, 2, 0x8000658C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000658C;
        }
    }

label_800064FC:
    ctx->pc = 0x800064FCu;
    ctx->downcount -= 4;
    // 800064FC: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_80006500:
    ctx->pc = 0x80006500u;
    // 80006500: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80006504:
    ctx->pc = 0x80006504u;
    // 80006504: stb     r0, -32744(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32744);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80006508:
    ctx->pc = 0x80006508u;
    // 80006508: b       0x80006598
    {
            goto label_80006598;
    }

label_8000650C:
    ctx->pc = 0x8000650Cu;
    ctx->downcount -= 1;
    // 8000650C: bl      0x800231EC
    {
            ctx->lr = 0x80006510u;
            ctx->pc = 0x800231ECu;
            return;
    }

label_80006510:
    ctx->pc = 0x80006510u;
    ctx->downcount -= 3;
    // 80006510: rlwinm r0, r3, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_80006514:
    ctx->pc = 0x80006514u;
    // 80006514: cmpwi   r0, 3
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

label_80006518:
    ctx->pc = 0x80006518u;
    // 80006518: bc    12, 2, 0x8000656C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000656C;
        }
    }

label_8000651C:
    ctx->pc = 0x8000651Cu;
    ctx->downcount -= 1;
    // 8000651C: bc    4, 0, 0x80006530
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80006530;
        }
    }

label_80006520:
    ctx->pc = 0x80006520u;
    ctx->downcount -= 2;
    // 80006520: cmpwi   r0, 1
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

label_80006524:
    ctx->pc = 0x80006524u;
    // 80006524: bc    12, 2, 0x8000654C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000654C;
        }
    }

label_80006528:
    ctx->pc = 0x80006528u;
    ctx->downcount -= 1;
    // 80006528: bc    4, 0, 0x8000655C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000655C;
        }
    }

label_8000652C:
    ctx->pc = 0x8000652Cu;
    ctx->downcount -= 1;
    // 8000652C: b       0x8000653C
    {
            goto label_8000653C;
    }

label_80006530:
    ctx->pc = 0x80006530u;
    ctx->downcount -= 2;
    // 80006530: cmpwi   r0, 5
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

label_80006534:
    ctx->pc = 0x80006534u;
    // 80006534: bc    4, 0, 0x8000653C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000653C;
        }
    }

label_80006538:
    ctx->pc = 0x80006538u;
    ctx->downcount -= 1;
    // 80006538: b       0x8000657C
    {
            goto label_8000657C;
    }

label_8000653C:
    ctx->pc = 0x8000653Cu;
    ctx->downcount -= 4;
    // 8000653C: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_80006540:
    ctx->pc = 0x80006540u;
    // 80006540: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80006544:
    ctx->pc = 0x80006544u;
    // 80006544: stb     r0, -32744(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32744);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80006548:
    ctx->pc = 0x80006548u;
    // 80006548: b       0x80006598
    {
            goto label_80006598;
    }

label_8000654C:
    ctx->pc = 0x8000654Cu;
    ctx->downcount -= 4;
    // 8000654C: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_80006550:
    ctx->pc = 0x80006550u;
    // 80006550: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_80006554:
    ctx->pc = 0x80006554u;
    // 80006554: stb     r0, -32744(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32744);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80006558:
    ctx->pc = 0x80006558u;
    // 80006558: b       0x80006598
    {
            goto label_80006598;
    }

label_8000655C:
    ctx->pc = 0x8000655Cu;
    ctx->downcount -= 4;
    // 8000655C: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_80006560:
    ctx->pc = 0x80006560u;
    // 80006560: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80006564:
    ctx->pc = 0x80006564u;
    // 80006564: stb     r0, -32744(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32744);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80006568:
    ctx->pc = 0x80006568u;
    // 80006568: b       0x80006598
    {
            goto label_80006598;
    }

label_8000656C:
    ctx->pc = 0x8000656Cu;
    ctx->downcount -= 4;
    // 8000656C: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_80006570:
    ctx->pc = 0x80006570u;
    // 80006570: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_80006574:
    ctx->pc = 0x80006574u;
    // 80006574: stb     r0, -32744(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32744);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80006578:
    ctx->pc = 0x80006578u;
    // 80006578: b       0x80006598
    {
            goto label_80006598;
    }

label_8000657C:
    ctx->pc = 0x8000657Cu;
    ctx->downcount -= 4;
    // 8000657C: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_80006580:
    ctx->pc = 0x80006580u;
    // 80006580: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_80006584:
    ctx->pc = 0x80006584u;
    // 80006584: stb     r0, -32744(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32744);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80006588:
    ctx->pc = 0x80006588u;
    // 80006588: b       0x80006598
    {
            goto label_80006598;
    }

label_8000658C:
    ctx->pc = 0x8000658Cu;
    ctx->downcount -= 3;
    // 8000658C: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_80006590:
    ctx->pc = 0x80006590u;
    // 80006590: li      r0, 7
    ctx->gpr[0] = (u32)(s32)(7);

label_80006594:
    ctx->pc = 0x80006594u;
    // 80006594: stb     r0, -32744(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32744);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80006598:
    ctx->pc = 0x80006598u;
    ctx->downcount -= 2;
    // 80006598: lis     r3, 32512
    ctx->gpr[3] = ((u32)(s32)(32512) << 16);

label_8000659C:
    ctx->pc = 0x8000659Cu;
    // 8000659C: bl      0x800070E4
    {
            ctx->lr = 0x800065A0u;
            goto label_800070E4;
    }

label_800065A0:
    ctx->pc = 0x800065A0u;
    ctx->downcount -= 1;
    // 800065A0: bl      0x80006B08
    {
            ctx->lr = 0x800065A4u;
            goto label_80006B08;
    }

label_800065A4:
    ctx->pc = 0x800065A4u;
    ctx->downcount -= 1;
    // 800065A4: bl      0x80005A18
    {
            ctx->lr = 0x800065A8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80005A18u;
                return;
            }
            goto label_80005A18;
    }

label_800065A8:
    ctx->pc = 0x800065A8u;
    ctx->downcount -= 1;
    // 800065A8: bl      0x80006040
    {
            ctx->lr = 0x800065ACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80006040u;
                return;
            }
            goto label_80006040;
    }

label_800065AC:
    ctx->pc = 0x800065ACu;
    ctx->downcount -= 5;
    // 800065AC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800065B0:
    ctx->pc = 0x800065B0u;
    // 800065B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800065B4:
    ctx->pc = 0x800065B4u;
    // 800065B4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_800065B8:
    ctx->pc = 0x800065B8u;
    // 800065B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_800065BC:
    ctx->pc = 0x800065BCu;
    ctx->downcount -= 2;
    // 800065BC: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800065C0:
    ctx->pc = 0x800065C0u;
    // 800065C0: bc    4, 6, 0x800065E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x02000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800065E4;
        }
    }

label_800065C4:
    ctx->pc = 0x800065C4u;
    ctx->downcount -= 8;
    // 800065C4: stfd     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x800065C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_800065C8:
    ctx->pc = 0x800065C8u;
    // 800065C8: stfd     f2, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x800065C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[2]));
    }

label_800065CC:
    ctx->pc = 0x800065CCu;
    // 800065CC: stfd     f3, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x800065CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[3]));
    }

label_800065D0:
    ctx->pc = 0x800065D0u;
    // 800065D0: stfd     f4, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x800065D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[4]));
    }

label_800065D4:
    ctx->pc = 0x800065D4u;
    // 800065D4: stfd     f5, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x800065D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[5]));
    }

label_800065D8:
    ctx->pc = 0x800065D8u;
    // 800065D8: stfd     f6, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x800065D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[6]));
    }

label_800065DC:
    ctx->pc = 0x800065DCu;
    // 800065DC: stfd     f7, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x800065DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[7]));
    }

label_800065E0:
    ctx->pc = 0x800065E0u;
    // 800065E0: stfd     f8, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x800065E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[8]));
    }

label_800065E4:
    ctx->pc = 0x800065E4u;
    ctx->downcount -= 10;
    // 800065E4: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800065E8:
    ctx->pc = 0x800065E8u;
    // 800065E8: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_800065EC:
    ctx->pc = 0x800065ECu;
    // 800065EC: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_800065F0:
    ctx->pc = 0x800065F0u;
    // 800065F0: stw     r6, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_800065F4:
    ctx->pc = 0x800065F4u;
    // 800065F4: stw     r7, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_800065F8:
    ctx->pc = 0x800065F8u;
    // 800065F8: stw     r8, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_800065FC:
    ctx->pc = 0x800065FCu;
    // 800065FC: stw     r9, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80006600:
    ctx->pc = 0x80006600u;
    // 80006600: stw     r10, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_80006604:
    ctx->pc = 0x80006604u;
    // 80006604: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_80006608:
    ctx->pc = 0x80006608u;
    // 80006608: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_8000660C:
    ctx->pc = 0x8000660Cu;
    ctx->downcount -= 6;
    // 8000660C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80006610:
    ctx->pc = 0x80006610u;
    // 80006610: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80006614:
    ctx->pc = 0x80006614u;
    // 80006614: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80006618:
    ctx->pc = 0x80006618u;
    // 80006618: lis     r0, -32768
    ctx->gpr[0] = ((u32)(s32)(-32768) << 16);

label_8000661C:
    ctx->pc = 0x8000661Cu;
    // 8000661C: cmplw   r3, r0
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

label_80006620:
    ctx->pc = 0x80006620u;
    // 80006620: bc    12, 0, 0x80006634
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80006634;
        }
    }

label_80006624:
    ctx->pc = 0x80006624u;
    ctx->downcount -= 2;
    // 80006624: cmplw   r4, r0
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80006628:
    ctx->pc = 0x80006628u;
    // 80006628: bc    12, 0, 0x80006634
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80006634;
        }
    }

label_8000662C:
    ctx->pc = 0x8000662Cu;
    ctx->downcount -= 2;
    // 8000662C: subf   r4, r3, r4
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_80006630:
    ctx->pc = 0x80006630u;
    // 80006630: bl      0x8001DA20
    {
            ctx->lr = 0x80006634u;
            ctx->pc = 0x8001DA20u;
            return;
    }

label_80006634:
    ctx->pc = 0x80006634u;
    ctx->downcount -= 5;
    // 80006634: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80006638:
    ctx->pc = 0x80006638u;
    // 80006638: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000663C:
    ctx->pc = 0x8000663Cu;
    // 8000663C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80006640:
    ctx->pc = 0x80006640u;
    // 80006640: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80006644:
    ctx->pc = 0x80006644u;
    ctx->downcount -= 4;
    // 80006644: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80006648:
    ctx->pc = 0x80006648u;
    // 80006648: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000664C:
    ctx->pc = 0x8000664Cu;
    // 8000664C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80006650:
    ctx->pc = 0x80006650u;
    // 80006650: bl      0x8000660C
    {
            ctx->lr = 0x80006654u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000660Cu;
                return;
            }
            goto label_8000660C;
    }

label_80006654:
    ctx->pc = 0x80006654u;
    ctx->downcount -= 6;
    // 80006654: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80006658:
    ctx->pc = 0x80006658u;
    // 80006658: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000665C:
    ctx->pc = 0x8000665Cu;
    // 8000665C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80006660:
    ctx->pc = 0x80006660u;
    // 80006660: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80006664:
    ctx->pc = 0x80006664u;
    // 80006664: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80006668:
    ctx->pc = 0x80006668u;
    ctx->downcount -= 10;
    // 80006668: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000666C:
    ctx->pc = 0x8000666Cu;
    // 8000666C: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_80006670:
    ctx->pc = 0x80006670u;
    // 80006670: lfs     f0, 8832(r3)
    if (!ppc_fp_available_inline(ctx, 0x80006670u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8832);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80006674:
    ctx->pc = 0x80006674u;
    // 80006674: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80006674u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_80006678:
    ctx->pc = 0x80006678u;
    // 80006678: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000667C:
    ctx->pc = 0x8000667Cu;
    // 8000667C: rlwinm r0, r0, 0, 1, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x7FFFFFFFu;
    }

label_80006680:
    ctx->pc = 0x80006680u;
    // 80006680: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80006684:
    ctx->pc = 0x80006684u;
    // 80006684: lfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80006684u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80006688:
    ctx->pc = 0x80006688u;
    // 80006688: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80006688u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_8000668C:
    ctx->pc = 0x8000668Cu;
    // 8000668C: bc    4, 1, 0x800066E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800066E4;
        }
    }

label_80006690:
    ctx->pc = 0x80006690u;
    ctx->downcount -= 21;
    // 80006690: frsqrte    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80006690u)) return;
    { f64 result; if (ppc_frsqrte(ctx, ctx->fpr[1], &result)) ctx->fpr[2] = result; }

label_80006694:
    ctx->pc = 0x80006694u;
    // 80006694: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_80006698:
    ctx->pc = 0x80006698u;
    // 80006698: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8000669C:
    ctx->pc = 0x8000669Cu;
    // 8000669C: lfd     f4, 8864(r4)
    if (!ppc_fp_available_inline(ctx, 0x8000669Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8864);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_800066A0:
    ctx->pc = 0x800066A0u;
    // 800066A0: lfd     f3, 8872(r3)
    if (!ppc_fp_available_inline(ctx, 0x800066A0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8872);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_800066A4:
    ctx->pc = 0x800066A4u;
    // 800066A4: fmul   f0, f2, f2
    if (!ppc_fp_available_inline(ctx, 0x800066A4u)) return;
    ppc_fmul(ctx, 0, 2, 2);

label_800066A8:
    ctx->pc = 0x800066A8u;
    // 800066A8: fmul   f2, f4, f2
    if (!ppc_fp_available_inline(ctx, 0x800066A8u)) return;
    ppc_fmul(ctx, 2, 4, 2);

label_800066AC:
    ctx->pc = 0x800066ACu;
    // 800066AC: fnmsub f0, f1, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x800066ACu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[0], ctx->fpr[3], false, true, true, &result))
            ctx->fpr[0] = result;
    }

label_800066B0:
    ctx->pc = 0x800066B0u;
    // 800066B0: fmul   f2, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x800066B0u)) return;
    ppc_fmul(ctx, 2, 2, 0);

label_800066B4:
    ctx->pc = 0x800066B4u;
    // 800066B4: fmul   f0, f2, f2
    if (!ppc_fp_available_inline(ctx, 0x800066B4u)) return;
    ppc_fmul(ctx, 0, 2, 2);

label_800066B8:
    ctx->pc = 0x800066B8u;
    // 800066B8: fmul   f2, f4, f2
    if (!ppc_fp_available_inline(ctx, 0x800066B8u)) return;
    ppc_fmul(ctx, 2, 4, 2);

label_800066BC:
    ctx->pc = 0x800066BCu;
    // 800066BC: fnmsub f0, f1, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x800066BCu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[0], ctx->fpr[3], false, true, true, &result))
            ctx->fpr[0] = result;
    }

label_800066C0:
    ctx->pc = 0x800066C0u;
    // 800066C0: fmul   f2, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x800066C0u)) return;
    ppc_fmul(ctx, 2, 2, 0);

label_800066C4:
    ctx->pc = 0x800066C4u;
    // 800066C4: fmul   f0, f2, f2
    if (!ppc_fp_available_inline(ctx, 0x800066C4u)) return;
    ppc_fmul(ctx, 0, 2, 2);

label_800066C8:
    ctx->pc = 0x800066C8u;
    // 800066C8: fmul   f2, f4, f2
    if (!ppc_fp_available_inline(ctx, 0x800066C8u)) return;
    ppc_fmul(ctx, 2, 4, 2);

label_800066CC:
    ctx->pc = 0x800066CCu;
    // 800066CC: fnmsub f0, f1, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x800066CCu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[0], ctx->fpr[3], false, true, true, &result))
            ctx->fpr[0] = result;
    }

label_800066D0:
    ctx->pc = 0x800066D0u;
    // 800066D0: fmul   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x800066D0u)) return;
    ppc_fmul(ctx, 0, 2, 0);

label_800066D4:
    ctx->pc = 0x800066D4u;
    // 800066D4: fmul   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x800066D4u)) return;
    ppc_fmul(ctx, 0, 1, 0);

label_800066D8:
    ctx->pc = 0x800066D8u;
    // 800066D8: frsp    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x800066D8u)) return;
    ppc_frsp(ctx, 0, 0);

label_800066DC:
    ctx->pc = 0x800066DCu;
    // 800066DC: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x800066DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_800066E0:
    ctx->pc = 0x800066E0u;
    // 800066E0: lfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x800066E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_800066E4:
    ctx->pc = 0x800066E4u;
    ctx->downcount -= 2;
    // 800066E4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_800066E8:
    ctx->pc = 0x800066E8u;
    // 800066E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_800066EC:
    ctx->pc = 0x800066ECu;
    ctx->downcount -= 1;
    // 800066EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_800066F0:
    ctx->pc = 0x800066F0u;
    ctx->downcount -= 2;
    // 800066F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800066F4:
    ctx->pc = 0x800066F4u;
    // 800066F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_800066F8:
    ctx->pc = 0x800066F8u;
    ctx->downcount -= 19;
    // 800066F8: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800066FC:
    ctx->pc = 0x800066FCu;
    // 800066FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80006700:
    ctx->pc = 0x80006700u;
    // 80006700: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80006704:
    ctx->pc = 0x80006704u;
    // 80006704: stmw     r28, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80006708:
    ctx->pc = 0x80006708u;
    // 80006708: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8000670C:
    ctx->pc = 0x8000670Cu;
    // 8000670C: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80006710:
    ctx->pc = 0x80006710u;
    // 80006710: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80006714:
    ctx->pc = 0x80006714u;
    // 80006714: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80006718:
    ctx->pc = 0x80006718u;
    // 80006718: bl      0x8002768C
    {
            ctx->lr = 0x8000671Cu;
            ctx->pc = 0x8002768Cu;
            return;
    }

label_8000671C:
    ctx->pc = 0x8000671Cu;
    ctx->downcount -= 2;
    // 8000671C: cmpwi   r3, 0
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

label_80006720:
    ctx->pc = 0x80006720u;
    // 80006720: bc    12, 2, 0x800067C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800067C8;
        }
    }

label_80006724:
    ctx->pc = 0x80006724u;
    ctx->downcount -= 5;
    // 80006724: lwz     r3, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80006728:
    ctx->pc = 0x80006728u;
    // 80006728: addi    r0, r3, 31
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(31);

label_8000672C:
    ctx->pc = 0x8000672Cu;
    // 8000672C: rlwinm r31, r0, 0, 0, 26
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFE0u;
    }

label_80006730:
    ctx->pc = 0x80006730u;
    // 80006730: cmplw   r31, r29
    {
        u32 val_a = (u32)(ctx->gpr[31]);
        u32 val_b = (u32)(ctx->gpr[29]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80006734:
    ctx->pc = 0x80006734u;
    // 80006734: bc    12, 1, 0x800067C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800067C8;
        }
    }

label_80006738:
    ctx->pc = 0x80006738u;
    ctx->downcount -= 6;
    // 80006738: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8000673C:
    ctx->pc = 0x8000673Cu;
    // 8000673C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80006740:
    ctx->pc = 0x80006740u;
    // 80006740: addi    r5, r4, 8880
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(8880);

label_80006744:
    ctx->pc = 0x80006744u;
    // 80006744: li      r6, 123
    ctx->gpr[6] = (u32)(s32)(123);

label_80006748:
    ctx->pc = 0x80006748u;
    // 80006748: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8000674C:
    ctx->pc = 0x8000674Cu;
    // 8000674C: bl      0x8004DD4C
    {
            ctx->lr = 0x80006750u;
            ctx->pc = 0x8004DD4Cu;
            return;
    }

label_80006750:
    ctx->pc = 0x80006750u;
    ctx->downcount -= 2;
    // 80006750: or.   r29, r3, r3
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

label_80006754:
    ctx->pc = 0x80006754u;
    // 80006754: bc    12, 2, 0x800067C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800067C8;
        }
    }

label_80006758:
    ctx->pc = 0x80006758u;
    ctx->downcount -= 6;
    // 80006758: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8000675C:
    ctx->pc = 0x8000675Cu;
    // 8000675C: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80006760:
    ctx->pc = 0x80006760u;
    // 80006760: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80006764:
    ctx->pc = 0x80006764u;
    // 80006764: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80006768:
    ctx->pc = 0x80006768u;
    // 80006768: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_8000676C:
    ctx->pc = 0x8000676Cu;
    // 8000676C: bl      0x80027A8C
    {
            ctx->lr = 0x80006770u;
            ctx->pc = 0x80027A8Cu;
            return;
    }

label_80006770:
    ctx->pc = 0x80006770u;
    ctx->downcount -= 2;
    // 80006770: cmpwi   r3, 0
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

label_80006774:
    ctx->pc = 0x80006774u;
    // 80006774: bc    12, 2, 0x800067C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800067C8;
        }
    }

label_80006778:
    ctx->pc = 0x80006778u;
    ctx->downcount -= 5;
    // 80006778: or   r30, r28, r28
    {
        ctx->gpr[30] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8000677C:
    ctx->pc = 0x8000677Cu;
    // 8000677C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80006780:
    ctx->pc = 0x80006780u;
    // 80006780: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80006784:
    ctx->pc = 0x80006784u;
    // 80006784: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80006788:
    ctx->pc = 0x80006788u;
    // 80006788: bl      0x8000519C
    {
            ctx->lr = 0x8000678Cu;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_8000678C:
    ctx->pc = 0x8000678Cu;
    ctx->downcount -= 5;
    // 8000678C: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_80006790:
    ctx->pc = 0x80006790u;
    // 80006790: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80006794:
    ctx->pc = 0x80006794u;
    // 80006794: addi    r4, r4, 8880
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8880);

label_80006798:
    ctx->pc = 0x80006798u;
    // 80006798: li      r5, 131
    ctx->gpr[5] = (u32)(s32)(131);

label_8000679C:
    ctx->pc = 0x8000679Cu;
    // 8000679C: bl      0x8004DDC0
    {
            ctx->lr = 0x800067A0u;
            ctx->pc = 0x8004DDC0u;
            return;
    }

label_800067A0:
    ctx->pc = 0x800067A0u;
    ctx->downcount -= 6;
    // 800067A0: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_800067A4:
    ctx->pc = 0x800067A4u;
    // 800067A4: lwz     r3, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800067A8:
    ctx->pc = 0x800067A8u;
    // 800067A8: addi    r5, r4, 8880
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(8880);

label_800067AC:
    ctx->pc = 0x800067ACu;
    // 800067AC: li      r6, 132
    ctx->gpr[6] = (u32)(s32)(132);

label_800067B0:
    ctx->pc = 0x800067B0u;
    // 800067B0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_800067B4:
    ctx->pc = 0x800067B4u;
    // 800067B4: bl      0x8004DD4C
    {
            ctx->lr = 0x800067B8u;
            ctx->pc = 0x8004DD4Cu;
            return;
    }

label_800067B8:
    ctx->pc = 0x800067B8u;
    ctx->downcount -= 4;
    // 800067B8: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800067BC:
    ctx->pc = 0x800067BCu;
    // 800067BC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_800067C0:
    ctx->pc = 0x800067C0u;
    // 800067C0: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_800067C4:
    ctx->pc = 0x800067C4u;
    // 800067C4: bl      0x8002148C
    {
            ctx->lr = 0x800067C8u;
            ctx->pc = 0x8002148Cu;
            return;
    }

label_800067C8:
    ctx->pc = 0x800067C8u;
    ctx->downcount -= 17;
    // 800067C8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_800067CC:
    ctx->pc = 0x800067CCu;
    // 800067CC: lmw     r28, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_800067D0:
    ctx->pc = 0x800067D0u;
    // 800067D0: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800067D4:
    ctx->pc = 0x800067D4u;
    // 800067D4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800067D8:
    ctx->pc = 0x800067D8u;
    // 800067D8: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_800067DC:
    ctx->pc = 0x800067DCu;
    // 800067DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_800067E0:
    ctx->pc = 0x800067E0u;
    ctx->downcount -= 10;
    // 800067E0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800067E4:
    ctx->pc = 0x800067E4u;
    // 800067E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800067E8:
    ctx->pc = 0x800067E8u;
    // 800067E8: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_800067EC:
    ctx->pc = 0x800067ECu;
    // 800067EC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800067F0:
    ctx->pc = 0x800067F0u;
    // 800067F0: lwz     r0, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800067F4:
    ctx->pc = 0x800067F4u;
    // 800067F4: stw     r0, -32736(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32736);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800067F8:
    ctx->pc = 0x800067F8u;
    // 800067F8: lwz     r12, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_800067FC:
    ctx->pc = 0x800067FCu;
    // 800067FC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80006800:
    ctx->pc = 0x80006800u;
    // 80006800: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80006804u;
            ctx->pc = target;
            return;
        }
    }

label_80006804:
    ctx->pc = 0x80006804u;
    ctx->downcount -= 5;
    // 80006804: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80006808:
    ctx->pc = 0x80006808u;
    // 80006808: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000680C:
    ctx->pc = 0x8000680Cu;
    // 8000680C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80006810:
    ctx->pc = 0x80006810u;
    // 80006810: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80006814:
    ctx->pc = 0x80006814u;
    ctx->downcount -= 16;
    // 80006814: stwu     r1, -288(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-288);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80006818:
    ctx->pc = 0x80006818u;
    // 80006818: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000681C:
    ctx->pc = 0x8000681Cu;
    // 8000681C: stw     r0, 292(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80006820:
    ctx->pc = 0x80006820u;
    // 80006820: stmw     r29, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80006824:
    ctx->pc = 0x80006824u;
    // 80006824: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80006828:
    ctx->pc = 0x80006828u;
    // 80006828: bl      0x8004DB8C
    {
            ctx->lr = 0x8000682Cu;
            ctx->pc = 0x8004DB8Cu;
            return;
    }

label_8000682C:
    ctx->pc = 0x8000682Cu;
    ctx->downcount -= 5;
    // 8000682C: lbz     r0, 3(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80006830:
    ctx->pc = 0x80006830u;
    // 80006830: extsb r3, r0
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80006834:
    ctx->pc = 0x80006834u;
    // 80006834: addi    r0, r3, -69
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-69);

label_80006838:
    ctx->pc = 0x80006838u;
    // 80006838: cmplwi  r0, 0x0012
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

label_8000683C:
    ctx->pc = 0x8000683Cu;
    // 8000683C: bc    12, 1, 0x800068A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800068A4;
        }
    }

label_80006840:
    ctx->pc = 0x80006840u;
    ctx->downcount -= 7;
    // 80006840: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_80006844:
    ctx->pc = 0x80006844u;
    // 80006844: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80006848:
    ctx->pc = 0x80006848u;
    // 80006848: addi    r3, r3, -6528
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6528);

label_8000684C:
    ctx->pc = 0x8000684Cu;
    // 8000684C: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80006850:
    ctx->pc = 0x80006850u;
    // 80006850: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80006854:
    ctx->pc = 0x80006854u;
    // 80006854: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80006858:
    ctx->pc = 0x80006858u;
    ctx->downcount -= 5;
    // 80006858: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8000685C:
    ctx->pc = 0x8000685Cu;
    // 8000685C: addi    r3, r3, -6560
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6560);

label_80006860:
    ctx->pc = 0x80006860u;
    // 80006860: lwz     r30, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80006864:
    ctx->pc = 0x80006864u;
    // 80006864: lwz     r29, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80006868:
    ctx->pc = 0x80006868u;
    // 80006868: b       0x800068A4
    {
            goto label_800068A4;
    }

label_8000686C:
    ctx->pc = 0x8000686Cu;
    ctx->downcount -= 5;
    // 8000686C: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_80006870:
    ctx->pc = 0x80006870u;
    // 80006870: addi    r3, r3, -6560
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6560);

label_80006874:
    ctx->pc = 0x80006874u;
    // 80006874: lwz     r30, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80006878:
    ctx->pc = 0x80006878u;
    // 80006878: lwz     r29, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8000687C:
    ctx->pc = 0x8000687Cu;
    // 8000687C: b       0x800068A4
    {
            goto label_800068A4;
    }

label_80006880:
    ctx->pc = 0x80006880u;
    ctx->downcount -= 5;
    // 80006880: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_80006884:
    ctx->pc = 0x80006884u;
    // 80006884: addi    r3, r3, -6560
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6560);

label_80006888:
    ctx->pc = 0x80006888u;
    // 80006888: lwz     r30, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8000688C:
    ctx->pc = 0x8000688Cu;
    // 8000688C: lwz     r29, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80006890:
    ctx->pc = 0x80006890u;
    // 80006890: b       0x800068A4
    {
            goto label_800068A4;
    }

label_80006894:
    ctx->pc = 0x80006894u;
    ctx->downcount -= 4;
    // 80006894: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_80006898:
    ctx->pc = 0x80006898u;
    // 80006898: addi    r3, r3, -6560
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6560);

label_8000689C:
    ctx->pc = 0x8000689Cu;
    // 8000689C: lwz     r30, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_800068A0:
    ctx->pc = 0x800068A0u;
    // 800068A0: lwz     r29, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_800068A4:
    ctx->pc = 0x800068A4u;
    ctx->downcount -= 2;
    // 800068A4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_800068A8:
    ctx->pc = 0x800068A8u;
    // 800068A8: bl      0x800066F0
    {
            ctx->lr = 0x800068ACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800066F0u;
                return;
            }
            goto label_800066F0;
    }

label_800068AC:
    ctx->pc = 0x800068ACu;
    ctx->downcount -= 6;
    // 800068AC: lis     r4, 32513
    ctx->gpr[4] = ((u32)(s32)(32513) << 16);

label_800068B0:
    ctx->pc = 0x800068B0u;
    // 800068B0: lis     r5, 124
    ctx->gpr[5] = ((u32)(s32)(124) << 16);

label_800068B4:
    ctx->pc = 0x800068B4u;
    // 800068B4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_800068B8:
    ctx->pc = 0x800068B8u;
    // 800068B8: addi    r4, r4, -32768
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32768);

label_800068BC:
    ctx->pc = 0x800068BCu;
    // 800068BC: addi    r5, r5, 8192
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8192);

label_800068C0:
    ctx->pc = 0x800068C0u;
    // 800068C0: bl      0x800066F8
    {
            ctx->lr = 0x800068C4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800066F8u;
                return;
            }
            goto label_800066F8;
    }

label_800068C4:
    ctx->pc = 0x800068C4u;
    ctx->downcount -= 2;
    // 800068C4: cmplwi  r3, 0x0000
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

label_800068C8:
    ctx->pc = 0x800068C8u;
    // 800068C8: bc    12, 2, 0x8000693C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000693C;
        }
    }

label_800068CC:
    ctx->pc = 0x800068CCu;
    ctx->downcount -= 6;
    // 800068CC: lwz     r0, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800068D0:
    ctx->pc = 0x800068D0u;
    // 800068D0: lis     r4, 74
    ctx->gpr[4] = ((u32)(s32)(74) << 16);

label_800068D4:
    ctx->pc = 0x800068D4u;
    // 800068D4: addi    r6, r4, 18432
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(18432);

label_800068D8:
    ctx->pc = 0x800068D8u;
    // 800068D8: subf   r7, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[7] = res;
    }

label_800068DC:
    ctx->pc = 0x800068DCu;
    // 800068DC: cmplw   r7, r6
    {
        u32 val_a = (u32)(ctx->gpr[7]);
        u32 val_b = (u32)(ctx->gpr[6]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800068E0:
    ctx->pc = 0x800068E0u;
    // 800068E0: bc    4, 1, 0x80006934
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80006934;
        }
    }

label_800068E4:
    ctx->pc = 0x800068E4u;
    ctx->downcount -= 8;
    // 800068E4: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_800068E8:
    ctx->pc = 0x800068E8u;
    // 800068E8: addis   r8, r7, -74
    ctx->gpr[8] = ctx->gpr[7] + ((u32)(s32)(-74) << 16);

label_800068EC:
    ctx->pc = 0x800068ECu;
    // 800068EC: addi    r4, r3, 9016
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(9016);

label_800068F0:
    ctx->pc = 0x800068F0u;
    // 800068F0: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_800068F4:
    ctx->pc = 0x800068F4u;
    // 800068F4: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_800068F8:
    ctx->pc = 0x800068F8u;
    // 800068F8: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_800068FC:
    ctx->pc = 0x800068FCu;
    // 800068FC: addi    r8, r8, -18432
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(-18432);

label_80006900:
    ctx->pc = 0x80006900u;
    // 80006900: bl      0x8001258C
    {
            ctx->lr = 0x80006904u;
            ctx->pc = 0x8001258Cu;
            return;
    }

label_80006904:
    ctx->pc = 0x80006904u;
    ctx->downcount -= 11;
    // 80006904: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_80006908:
    ctx->pc = 0x80006908u;
    // 80006908: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8000690C:
    ctx->pc = 0x8000690Cu;
    // 8000690C: addi    r5, r3, 9012
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(9012);

label_80006910:
    ctx->pc = 0x80006910u;
    // 80006910: lwz     r0, 9008(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(9008);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80006914:
    ctx->pc = 0x80006914u;
    // 80006914: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80006918:
    ctx->pc = 0x80006918u;
    // 80006918: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_8000691C:
    ctx->pc = 0x8000691Cu;
    // 8000691C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80006920:
    ctx->pc = 0x80006920u;
    // 80006920: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80006924:
    ctx->pc = 0x80006924u;
    // 80006924: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80006928:
    ctx->pc = 0x80006928u;
    // 80006928: addi    r5, r1, 16
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(16);

label_8000692C:
    ctx->pc = 0x8000692Cu;
    // 8000692C: bl      0x8001F47C
    {
            ctx->lr = 0x80006930u;
            ctx->pc = 0x8001F47Cu;
            return;
    }

label_80006930:
    ctx->pc = 0x80006930u;
    ctx->downcount -= 1;
    // 80006930: b       0x8000693C
    {
            goto label_8000693C;
    }

label_80006934:
    ctx->pc = 0x80006934u;
    ctx->downcount -= 1;
    // 80006934: bl      0x800067E0
    {
            ctx->lr = 0x80006938u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800067E0u;
                return;
            }
            goto label_800067E0;
    }

label_80006938:
    ctx->pc = 0x80006938u;
    ctx->downcount -= 1;
    // 80006938: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000693C:
    ctx->pc = 0x8000693Cu;
    ctx->downcount -= 17;
    // 8000693C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80006940:
    ctx->pc = 0x80006940u;
    // 80006940: lmw     r29, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80006944:
    ctx->pc = 0x80006944u;
    // 80006944: lwz     r0, 292(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(292);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80006948:
    ctx->pc = 0x80006948u;
    // 80006948: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000694C:
    ctx->pc = 0x8000694Cu;
    // 8000694C: addi    r1, r1, 288
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(288);

label_80006950:
    ctx->pc = 0x80006950u;
    // 80006950: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80006954:
    ctx->pc = 0x80006954u;
    ctx->downcount -= 1;
    // 80006954: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80006958:
    ctx->pc = 0x80006958u;
    ctx->downcount -= 4;
    // 80006958: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000695C:
    ctx->pc = 0x8000695Cu;
    // 8000695C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80006960:
    ctx->pc = 0x80006960u;
    // 80006960: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80006964:
    ctx->pc = 0x80006964u;
    // 80006964: bl      0x800064A0
    {
            ctx->lr = 0x80006968u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800064A0u;
                return;
            }
            goto label_800064A0;
    }

label_80006968:
    ctx->pc = 0x80006968u;
    ctx->downcount -= 1;
    // 80006968: bl      0x80006814
    {
            ctx->lr = 0x8000696Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80006814u;
                return;
            }
            goto label_80006814;
    }

label_8000696C:
    ctx->pc = 0x8000696Cu;
    ctx->downcount -= 5;
    // 8000696C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80006970:
    ctx->pc = 0x80006970u;
    // 80006970: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80006974:
    ctx->pc = 0x80006974u;
    // 80006974: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80006978:
    ctx->pc = 0x80006978u;
    // 80006978: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_8000697C:
    ctx->pc = 0x8000697Cu;
    ctx->downcount -= 2;
    // 8000697C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80006980:
    ctx->pc = 0x80006980u;
    // 80006980: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80006984:
    ctx->pc = 0x80006984u;
    ctx->downcount -= 4;
    // 80006984: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80006988:
    ctx->pc = 0x80006988u;
    // 80006988: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000698C:
    ctx->pc = 0x8000698Cu;
    // 8000698C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80006990:
    ctx->pc = 0x80006990u;
    // 80006990: bl      0x800059A0
    {
            ctx->lr = 0x80006994u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800059A0u;
                return;
            }
            goto label_800059A0;
    }

label_80006994:
    ctx->pc = 0x80006994u;
    ctx->downcount -= 5;
    // 80006994: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80006998:
    ctx->pc = 0x80006998u;
    // 80006998: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000699C:
    ctx->pc = 0x8000699Cu;
    // 8000699C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_800069A0:
    ctx->pc = 0x800069A0u;
    // 800069A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_800069A4:
    ctx->pc = 0x800069A4u;
    ctx->downcount -= 2;
    // 800069A4: lis     r3, 32512
    ctx->gpr[3] = ((u32)(s32)(32512) << 16);

label_800069A8:
    ctx->pc = 0x800069A8u;
    // 800069A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_800069AC:
    ctx->pc = 0x800069ACu;
    ctx->downcount -= 4;
    // 800069AC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800069B0:
    ctx->pc = 0x800069B0u;
    // 800069B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800069B4:
    ctx->pc = 0x800069B4u;
    // 800069B4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800069B8:
    ctx->pc = 0x800069B8u;
    // 800069B8: bl      0x800303F0
    {
            ctx->lr = 0x800069BCu;
            ctx->pc = 0x800303F0u;
            return;
    }

label_800069BC:
    ctx->pc = 0x800069BCu;
    ctx->downcount -= 5;
    // 800069BC: lis     r5, 168
    ctx->gpr[5] = ((u32)(s32)(168) << 16);

label_800069C0:
    ctx->pc = 0x800069C0u;
    // 800069C0: addis   r4, r3, 88
    ctx->gpr[4] = ctx->gpr[3] + ((u32)(s32)(88) << 16);

label_800069C4:
    ctx->pc = 0x800069C4u;
    // 800069C4: lis     r3, 26
    ctx->gpr[3] = ((u32)(s32)(26) << 16);

label_800069C8:
    ctx->pc = 0x800069C8u;
    // 800069C8: addi    r5, r5, -16384
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-16384);

label_800069CC:
    ctx->pc = 0x800069CCu;
    // 800069CC: bl      0x800055E0
    {
            ctx->lr = 0x800069D0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800055E0u;
                return;
            }
            goto label_800055E0;
    }

label_800069D0:
    ctx->pc = 0x800069D0u;
    ctx->downcount -= 2;
    // 800069D0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_800069D4:
    ctx->pc = 0x800069D4u;
    // 800069D4: bl      0x80048A10
    {
            ctx->lr = 0x800069D8u;
            ctx->pc = 0x80048A10u;
            return;
    }

label_800069D8:
    ctx->pc = 0x800069D8u;
    ctx->downcount -= 1;
    // 800069D8: bl      0x80048E2C
    {
            ctx->lr = 0x800069DCu;
            ctx->pc = 0x80048E2Cu;
            return;
    }

label_800069DC:
    ctx->pc = 0x800069DCu;
    ctx->downcount -= 4;
    // 800069DC: lis     r4, 168
    ctx->gpr[4] = ((u32)(s32)(168) << 16);

label_800069E0:
    ctx->pc = 0x800069E0u;
    // 800069E0: lis     r3, 32512
    ctx->gpr[3] = ((u32)(s32)(32512) << 16);

label_800069E4:
    ctx->pc = 0x800069E4u;
    // 800069E4: addi    r4, r4, -16384
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16384);

label_800069E8:
    ctx->pc = 0x800069E8u;
    // 800069E8: bl      0x80048D2C
    {
            ctx->lr = 0x800069ECu;
            ctx->pc = 0x80048D2Cu;
            return;
    }

label_800069EC:
    ctx->pc = 0x800069ECu;
    ctx->downcount -= 5;
    // 800069EC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800069F0:
    ctx->pc = 0x800069F0u;
    // 800069F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800069F4:
    ctx->pc = 0x800069F4u;
    // 800069F4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_800069F8:
    ctx->pc = 0x800069F8u;
    // 800069F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_800069FC:
    ctx->pc = 0x800069FCu;
    ctx->downcount -= 1;
    // 800069FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80006A00:
    ctx->pc = 0x80006A00u;
    ctx->downcount -= 1;
    // 80006A00: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80006A04:
    ctx->pc = 0x80006A04u;
    ctx->downcount -= 1;
    // 80006A04: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80006A08:
    ctx->pc = 0x80006A08u;
    ctx->downcount -= 3;
    // 80006A08: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_80006A0C:
    ctx->pc = 0x80006A0Cu;
    // 80006A0C: stw     r3, -32664(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32664);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80006A10:
    ctx->pc = 0x80006A10u;
    // 80006A10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80006A14:
    ctx->pc = 0x80006A14u;
    ctx->downcount -= 6;
    // 80006A14: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_80006A18:
    ctx->pc = 0x80006A18u;
    // 80006A18: addi    r4, r4, -32712
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32712);

label_80006A1C:
    ctx->pc = 0x80006A1Cu;
    // 80006A1C: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80006A20:
    ctx->pc = 0x80006A20u;
    // 80006A20: stw     r3, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80006A24:
    ctx->pc = 0x80006A24u;
    // 80006A24: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_80006A28:
    ctx->pc = 0x80006A28u;
    // 80006A28: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80006A2C:
    ctx->pc = 0x80006A2Cu;
    ctx->downcount -= 6;
    // 80006A2C: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_80006A30:
    ctx->pc = 0x80006A30u;
    // 80006A30: addi    r4, r4, -32712
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32712);

label_80006A34:
    ctx->pc = 0x80006A34u;
    // 80006A34: lwz     r0, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80006A38:
    ctx->pc = 0x80006A38u;
    // 80006A38: stw     r3, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80006A3C:
    ctx->pc = 0x80006A3Cu;
    // 80006A3C: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_80006A40:
    ctx->pc = 0x80006A40u;
    // 80006A40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80006A44:
    ctx->pc = 0x80006A44u;
    ctx->downcount -= 3;
    // 80006A44: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_80006A48:
    ctx->pc = 0x80006A48u;
    // 80006A48: addi    r3, r3, 220
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(220);

label_80006A4C:
    ctx->pc = 0x80006A4Cu;
    // 80006A4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80006A50:
    ctx->pc = 0x80006A50u;
    ctx->downcount -= 8;
    // 80006A50: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_80006A54:
    ctx->pc = 0x80006A54u;
    // 80006A54: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80006A58:
    ctx->pc = 0x80006A58u;
    // 80006A58: addi    r5, r4, -32712
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-32712);

label_80006A5C:
    ctx->pc = 0x80006A5Cu;
    // 80006A5C: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80006A60:
    ctx->pc = 0x80006A60u;
    // 80006A60: slw   r0, r0, r3
    {
        u32 sh = ctx->gpr[3] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_80006A64:
    ctx->pc = 0x80006A64u;
    // 80006A64: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80006A68:
    ctx->pc = 0x80006A68u;
    // 80006A68: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80006A6C:
    ctx->pc = 0x80006A6Cu;
    // 80006A6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80006A70:
    ctx->pc = 0x80006A70u;
    ctx->downcount -= 7;
    // 80006A70: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80006A74:
    ctx->pc = 0x80006A74u;
    // 80006A74: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_80006A78:
    ctx->pc = 0x80006A78u;
    // 80006A78: slw   r0, r0, r3
    {
        u32 sh = ctx->gpr[3] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_80006A7C:
    ctx->pc = 0x80006A7Cu;
    // 80006A7C: lwzu     r3, -32712(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32712);
        ctx->gpr[3] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_80006A80:
    ctx->pc = 0x80006A80u;
    // 80006A80: andc   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ~ctx->gpr[0];
    }

label_80006A84:
    ctx->pc = 0x80006A84u;
    // 80006A84: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80006A88:
    ctx->pc = 0x80006A88u;
    // 80006A88: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80006A8C:
    ctx->pc = 0x80006A8Cu;
    ctx->downcount -= 16;
    // 80006A8C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80006A90:
    ctx->pc = 0x80006A90u;
    // 80006A90: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80006A94:
    ctx->pc = 0x80006A94u;
    // 80006A94: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80006A98:
    ctx->pc = 0x80006A98u;
    // 80006A98: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80006A9C:
    ctx->pc = 0x80006A9Cu;
    // 80006A9C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80006AA0:
    ctx->pc = 0x80006AA0u;
    // 80006AA0: bl      0x80006A44
    {
            ctx->lr = 0x80006AA4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80006A44u;
                return;
            }
            goto label_80006A44;
    }

label_80006AA4:
    ctx->pc = 0x80006AA4u;
    ctx->downcount -= 2;
    // 80006AA4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80006AA8:
    ctx->pc = 0x80006AA8u;
    // 80006AA8: bl      0x80020680
    {
            ctx->lr = 0x80006AACu;
            ctx->pc = 0x80020680u;
            return;
    }

label_80006AAC:
    ctx->pc = 0x80006AACu;
    ctx->downcount -= 3;
    // 80006AAC: lwz     r31, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80006AB0:
    ctx->pc = 0x80006AB0u;
    // 80006AB0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80006AB4:
    ctx->pc = 0x80006AB4u;
    // 80006AB4: b       0x80006AE4
    {
            goto label_80006AE4;
    }

label_80006AB8:
    ctx->pc = 0x80006AB8u;
    ctx->downcount -= 3;
    // 80006AB8: lwz     r0, 720(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(720);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80006ABC:
    // 80006ABC: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80006AC0:
    // 80006AC0: bc    12, 2, 0x80006AE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80006AE0;
        }
    }

label_80006AC4:
    ctx->downcount -= 2;
    // 80006AC4: cmpwi   r29, 0
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

label_80006AC8:
    // 80006AC8: bc    12, 2, 0x80006AD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80006AD8;
        }
    }

label_80006ACC:
    ctx->downcount -= 2;
    // 80006ACC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80006AD0:
    // 80006AD0: bl      0x80024680
    {
            ctx->lr = 0x80006AD4u;
            ctx->pc = 0x80024680u;
            return;
    }

label_80006AD4:
    ctx->downcount -= 1;
    // 80006AD4: b       0x80006AE0
    {
            goto label_80006AE0;
    }

label_80006AD8:
    ctx->downcount -= 2;
    // 80006AD8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80006ADC:
    // 80006ADC: bl      0x800243F8
    {
            ctx->lr = 0x80006AE0u;
            ctx->pc = 0x800243F8u;
            return;
    }

label_80006AE0:
    ctx->pc = 0x80006AE0u;
    ctx->downcount -= 1;
    // 80006AE0: lwz     r31, 764(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(764);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80006AE4:
    ctx->downcount -= 2;
    // 80006AE4: cmplwi  r31, 0x0000
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

label_80006AE8:
    // 80006AE8: bc    4, 2, 0x80006AB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80006AB8u;
                return;
            }
            goto label_80006AB8;
        }
    }

label_80006AEC:
    ctx->pc = 0x80006AECu;
    ctx->downcount -= 2;
    // 80006AEC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80006AF0:
    ctx->pc = 0x80006AF0u;
    // 80006AF0: bl      0x800206A8
    {
            ctx->lr = 0x80006AF4u;
            ctx->pc = 0x800206A8u;
            return;
    }

label_80006AF4:
    ctx->pc = 0x80006AF4u;
    ctx->downcount -= 16;
    // 80006AF4: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80006AF8:
    ctx->pc = 0x80006AF8u;
    // 80006AF8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80006AFC:
    ctx->pc = 0x80006AFCu;
    // 80006AFC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80006B00:
    ctx->pc = 0x80006B00u;
    // 80006B00: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80006B04:
    ctx->pc = 0x80006B04u;
    // 80006B04: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80006B08:
    ctx->pc = 0x80006B08u;
    ctx->downcount -= 4;
    // 80006B08: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80006B0C:
    ctx->pc = 0x80006B0Cu;
    // 80006B0C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80006B10:
    ctx->pc = 0x80006B10u;
    // 80006B10: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80006B14:
    ctx->pc = 0x80006B14u;
    // 80006B14: bl      0x8002A1B8
    {
            ctx->lr = 0x80006B18u;
            ctx->pc = 0x8002A1B8u;
            return;
    }

label_80006B18:
    ctx->pc = 0x80006B18u;
    ctx->downcount -= 8;
    // 80006B18: lbz     r0, 6(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80006B1C:
    ctx->pc = 0x80006B1Cu;
    // 80006B1C: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_80006B20:
    ctx->pc = 0x80006B20u;
    // 80006B20: stw     r0, -32720(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32720);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80006B24:
    ctx->pc = 0x80006B24u;
    // 80006B24: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80006B28:
    ctx->pc = 0x80006B28u;
    // 80006B28: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80006B2C:
    ctx->pc = 0x80006B2Cu;
    // 80006B2C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80006B30:
    ctx->pc = 0x80006B30u;
    // 80006B30: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80006B34:
    ctx->pc = 0x80006B34u;
    ctx->downcount -= 4;
    // 80006B34: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_80006B38:
    ctx->pc = 0x80006B38u;
    // 80006B38: lbz     r0, -32744(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32744);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80006B3C:
    ctx->pc = 0x80006B3Cu;
    // 80006B3C: cmpwi   r0, 5
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

label_80006B40:
    ctx->pc = 0x80006B40u;
    // 80006B40: bc    12, 2, 0x80006B88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80006B88;
        }
    }

label_80006B44:
    ctx->pc = 0x80006B44u;
    ctx->downcount -= 1;
    // 80006B44: bc    4, 0, 0x80006B60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80006B60;
        }
    }

label_80006B48:
    ctx->pc = 0x80006B48u;
    ctx->downcount -= 2;
    // 80006B48: cmpwi   r0, 3
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

label_80006B4C:
    ctx->pc = 0x80006B4Cu;
    // 80006B4C: bc    12, 2, 0x80006B78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80006B78;
        }
    }

label_80006B50:
    ctx->pc = 0x80006B50u;
    ctx->downcount -= 1;
    // 80006B50: bc    4, 0, 0x80006B80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80006B80;
        }
    }

label_80006B54:
    ctx->pc = 0x80006B54u;
    ctx->downcount -= 2;
    // 80006B54: cmpwi   r0, 2
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

label_80006B58:
    ctx->pc = 0x80006B58u;
    // 80006B58: bc    4, 0, 0x80006B70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80006B70;
        }
    }

label_80006B5C:
    ctx->pc = 0x80006B5Cu;
    ctx->downcount -= 1;
    // 80006B5C: b       0x80006B68
    {
            goto label_80006B68;
    }

label_80006B60:
    ctx->pc = 0x80006B60u;
    ctx->downcount -= 2;
    // 80006B60: cmpwi   r0, 7
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

label_80006B64:
    ctx->pc = 0x80006B64u;
    // 80006B64: bc    12, 2, 0x80006B90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80006B90;
        }
    }

label_80006B68:
    ctx->pc = 0x80006B68u;
    ctx->downcount -= 2;
    // 80006B68: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80006B6C:
    ctx->pc = 0x80006B6Cu;
    // 80006B6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80006B70:
    ctx->pc = 0x80006B70u;
    ctx->downcount -= 2;
    // 80006B70: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80006B74:
    ctx->pc = 0x80006B74u;
    // 80006B74: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80006B78:
    ctx->pc = 0x80006B78u;
    ctx->downcount -= 2;
    // 80006B78: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80006B7C:
    ctx->pc = 0x80006B7Cu;
    // 80006B7C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80006B80:
    ctx->pc = 0x80006B80u;
    ctx->downcount -= 2;
    // 80006B80: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80006B84:
    ctx->pc = 0x80006B84u;
    // 80006B84: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80006B88:
    ctx->pc = 0x80006B88u;
    ctx->downcount -= 2;
    // 80006B88: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80006B8C:
    ctx->pc = 0x80006B8Cu;
    // 80006B8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80006B90:
    ctx->pc = 0x80006B90u;
    ctx->downcount -= 2;
    // 80006B90: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80006B94:
    ctx->pc = 0x80006B94u;
    // 80006B94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80006B98:
    ctx->pc = 0x80006B98u;
    ctx->downcount -= 17;
    // 80006B98: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80006B9C:
    ctx->pc = 0x80006B9Cu;
    // 80006B9C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80006BA0:
    ctx->pc = 0x80006BA0u;
    // 80006BA0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80006BA4:
    ctx->pc = 0x80006BA4u;
    // 80006BA4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80006BA8:
    ctx->pc = 0x80006BA8u;
    // 80006BA8: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80006BAC:
    ctx->pc = 0x80006BACu;
    // 80006BAC: li      r31, 50
    ctx->gpr[31] = (u32)(s32)(50);

label_80006BB0:
    ctx->pc = 0x80006BB0u;
    // 80006BB0: bl      0x80006A8C
    {
            ctx->lr = 0x80006BB4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80006A8Cu;
                return;
            }
            goto label_80006A8C;
    }

label_80006BB4:
    ctx->pc = 0x80006BB4u;
    ctx->downcount -= 2;
    // 80006BB4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80006BB8:
    ctx->pc = 0x80006BB8u;
    // 80006BB8: bl      0x8004DBBC
    {
            ctx->lr = 0x80006BBCu;
            ctx->pc = 0x8004DBBCu;
            return;
    }

label_80006BBC:
    ctx->pc = 0x80006BBCu;
    ctx->downcount -= 5;
    // 80006BBC: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_80006BC0:
    ctx->pc = 0x80006BC0u;
    // 80006BC0: addi    r3, r3, -32712
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32712);

label_80006BC4:
    ctx->pc = 0x80006BC4u;
    // 80006BC4: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80006BC8:
    ctx->pc = 0x80006BC8u;
    // 80006BC8: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80006BCC:
    ctx->pc = 0x80006BCCu;
    // 80006BCC: bc    4, 2, 0x80006BDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80006BDC;
        }
    }

label_80006BD0:
    ctx->pc = 0x80006BD0u;
    ctx->downcount -= 1;
    // 80006BD0: bl      0x8002A1C0
    {
            ctx->lr = 0x80006BD4u;
            ctx->pc = 0x8002A1C0u;
            return;
    }

label_80006BD4:
    ctx->pc = 0x80006BD4u;
    ctx->downcount -= 2;
    // 80006BD4: rlwinm. r0, r3, 0, 24, 31
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

label_80006BD8:
    ctx->pc = 0x80006BD8u;
    // 80006BD8: bc    4, 2, 0x80006BEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80006BEC;
        }
    }

label_80006BDC:
    ctx->pc = 0x80006BDCu;
    ctx->downcount -= 4;
    // 80006BDC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80006BE0:
    ctx->pc = 0x80006BE0u;
    // 80006BE0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80006BE4:
    ctx->pc = 0x80006BE4u;
    // 80006BE4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80006BE8:
    ctx->pc = 0x80006BE8u;
    // 80006BE8: bl      0x8002211C
    {
            ctx->lr = 0x80006BECu;
            ctx->pc = 0x8002211Cu;
            return;
    }

label_80006BEC:
    ctx->pc = 0x80006BECu;
    ctx->downcount -= 5;
    // 80006BEC: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_80006BF0:
    ctx->pc = 0x80006BF0u;
    // 80006BF0: addi    r3, r3, -32712
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32712);

label_80006BF4:
    ctx->pc = 0x80006BF4u;
    // 80006BF4: lwz     r12, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80006BF8:
    ctx->pc = 0x80006BF8u;
    // 80006BF8: cmplwi  r12, 0x0000
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

label_80006BFC:
    ctx->pc = 0x80006BFCu;
    // 80006BFC: bc    12, 2, 0x80006C0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80006C0C;
        }
    }

label_80006C00:
    ctx->pc = 0x80006C00u;
    ctx->downcount -= 4;
    // 80006C00: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80006C04:
    ctx->pc = 0x80006C04u;
    // 80006C04: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80006C08:
    ctx->pc = 0x80006C08u;
    // 80006C08: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80006C0Cu;
            ctx->pc = target;
            return;
        }
    }

label_80006C0C:
    ctx->pc = 0x80006C0Cu;
    ctx->downcount -= 1;
    // 80006C0C: bl      0x800071B8
    {
            ctx->lr = 0x80006C10u;
            goto label_800071B8;
    }

label_80006C10:
    ctx->downcount -= 6;
    // 80006C10: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_80006C14:
    // 80006C14: addi    r4, r1, 11
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(11);

label_80006C18:
    // 80006C18: addi    r5, r1, 10
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(10);

label_80006C1C:
    // 80006C1C: addi    r6, r1, 9
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(9);

label_80006C20:
    // 80006C20: addi    r7, r1, 8
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(8);

label_80006C24:
    // 80006C24: bl      0x800410AC
    {
            ctx->lr = 0x80006C28u;
            ctx->pc = 0x800410ACu;
            return;
    }

label_80006C28:
    ctx->pc = 0x80006C28u;
    ctx->downcount -= 3;
    // 80006C28: lbz     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80006C2C:
    // 80006C2C: cmplwi  r0, 0x0000
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

label_80006C30:
    // 80006C30: bc    4, 2, 0x80006C40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80006C40;
        }
    }

label_80006C34:
    ctx->pc = 0x80006C34u;
    ctx->downcount -= 3;
    // 80006C34: lbz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80006C38:
    // 80006C38: cmplwi  r0, 0x0000
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

label_80006C3C:
    // 80006C3C: bc    12, 2, 0x80006C10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80006C10u;
                return;
            }
            goto label_80006C10;
        }
    }

label_80006C40:
    ctx->pc = 0x80006C40u;
    ctx->downcount -= 2;
    // 80006C40: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_80006C44:
    ctx->pc = 0x80006C44u;
    // 80006C44: addi    r29, r3, -32712
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(-32712);

label_80006C48:
    ctx->downcount -= 1;
    // 80006C48: bl      0x8004CA18
    {
            ctx->lr = 0x80006C4Cu;
            ctx->pc = 0x8004CA18u;
            return;
    }

label_80006C4C:
    ctx->downcount -= 2;
    // 80006C4C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80006C50:
    // 80006C50: bl      0x8004D070
    {
            ctx->lr = 0x80006C54u;
            ctx->pc = 0x8004D070u;
            return;
    }

label_80006C54:
    ctx->downcount -= 2;
    // 80006C54: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80006C58:
    // 80006C58: bl      0x8004D084
    {
            ctx->lr = 0x80006C5Cu;
            ctx->pc = 0x8004D084u;
            return;
    }

label_80006C5C:
    ctx->downcount -= 9;
    // 80006C5C: mullw   r0, r30, r3
    {
        s64 product = (s64)(s32)ctx->gpr[30] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[0] = (u32)product;
    }

label_80006C60:
    ctx->pc = 0x80006C60u;
    // 80006C60: lwz     r12, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80006C64:
    // 80006C64: cmplwi  r12, 0x0000
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

label_80006C68:
    // 80006C68: rlwinm r30, r0, 1, 0, 30
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_80006C6C:
    // 80006C6C: bc    12, 2, 0x80006C78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80006C78;
        }
    }

label_80006C70:
    ctx->pc = 0x80006C70u;
    ctx->downcount -= 3;
    // 80006C70: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80006C74:
    ctx->pc = 0x80006C74u;
    // 80006C74: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80006C78u;
            ctx->pc = target;
            return;
        }
    }

label_80006C78:
    ctx->downcount -= 8;
    // 80006C78: addi    r0, r30, 1
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(1);

label_80006C7C:
    // 80006C7C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80006C80:
    // 80006C80: rlwinm r0, r0, 31, 1, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 31u) & 0x7FFFFFFFu;
    }

label_80006C84:
    // 80006C84: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_80006C88:
    ctx->pc = 0x80006C88u;
    // 80006C88: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80006C8C:
    // 80006C8C: cmpwi   r30, 0
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

label_80006C90:
    // 80006C90: bc    4, 1, 0x80006CB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80006CB8;
        }
    }

label_80006C94:
    loop_80006C94(ctx);
    if (ctx->pc == 0x80006CB8u) goto label_80006CB8;
    return;
label_80006C98:
    // 80006C98: addi    r6, r6, 2
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(2);

label_80006C9C:
    ctx->pc = 0x80006C9Cu;
    // 80006C9C: lbz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80006CA0:
    // 80006CA0: addi    r4, r4, -6
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6);

label_80006CA4:
    // 80006CA4: srawi r0, r4, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[4];
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

label_80006CA8:
    // 80006CA8: andc   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] & ~ctx->gpr[0];
    }

label_80006CAC:
    ctx->pc = 0x80006CACu;
    // 80006CAC: stb     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80006CB0:
    ctx->pc = 0x80006CB0u;
    // 80006CB0: stb     r3, 1(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_80006CB4:
    // 80006CB4: bc    16, 0, 0x80006C94
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80006C94u;
                return;
            }
            goto label_80006C94;
        }
    }

label_80006CB8:
    ctx->downcount -= 3;
    // 80006CB8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80006CBC:
    // 80006CBC: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80006CC0:
    // 80006CC0: bl      0x8001DA7C
    {
            ctx->lr = 0x80006CC4u;
            ctx->pc = 0x8001DA7Cu;
            return;
    }

label_80006CC4:
    ctx->downcount -= 1;
    // 80006CC4: bl      0x8002B64C
    {
            ctx->lr = 0x80006CC8u;
            ctx->pc = 0x8002B64Cu;
            return;
    }

label_80006CC8:
    ctx->downcount -= 3;
    // 80006CC8: cmpwi   r31, 0
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

label_80006CCC:
    // 80006CCC: addi    r31, r31, -1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(-1);

label_80006CD0:
    // 80006CD0: bc    4, 2, 0x80006C48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80006C48u;
                return;
            }
            goto label_80006C48;
        }
    }

label_80006CD4:
    ctx->pc = 0x80006CD4u;
    ctx->downcount -= 2;
    // 80006CD4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80006CD8:
    ctx->pc = 0x80006CD8u;
    // 80006CD8: bl      0x8002C86C
    {
            ctx->lr = 0x80006CDCu;
            ctx->pc = 0x8002C86Cu;
            return;
    }

label_80006CDC:
    ctx->pc = 0x80006CDCu;
    ctx->downcount -= 1;
    // 80006CDC: bl      0x8002C6D0
    {
            ctx->lr = 0x80006CE0u;
            ctx->pc = 0x8002C6D0u;
            return;
    }

label_80006CE0:
    ctx->pc = 0x80006CE0u;
    ctx->downcount -= 1;
    // 80006CE0: bl      0x8002B64C
    {
            ctx->lr = 0x80006CE4u;
            ctx->pc = 0x8002B64Cu;
            return;
    }

label_80006CE4:
    ctx->pc = 0x80006CE4u;
    ctx->downcount -= 4;
    // 80006CE4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80006CE8:
    ctx->pc = 0x80006CE8u;
    // 80006CE8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80006CEC:
    ctx->pc = 0x80006CECu;
    // 80006CEC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80006CF0:
    ctx->pc = 0x80006CF0u;
    // 80006CF0: bl      0x8002211C
    {
            ctx->lr = 0x80006CF4u;
            ctx->pc = 0x8002211Cu;
            return;
    }

label_80006CF4:
    ctx->pc = 0x80006CF4u;
    ctx->downcount -= 16;
    // 80006CF4: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80006CF8:
    ctx->pc = 0x80006CF8u;
    // 80006CF8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80006CFC:
    ctx->pc = 0x80006CFCu;
    // 80006CFC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80006D00:
    ctx->pc = 0x80006D00u;
    // 80006D00: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80006D04:
    ctx->pc = 0x80006D04u;
    // 80006D04: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80006D08:
    ctx->pc = 0x80006D08u;
    ctx->downcount -= 6;
    // 80006D08: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80006D0C:
    ctx->pc = 0x80006D0Cu;
    // 80006D0C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80006D10:
    ctx->pc = 0x80006D10u;
    // 80006D10: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80006D14:
    ctx->pc = 0x80006D14u;
    // 80006D14: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80006D18:
    ctx->pc = 0x80006D18u;
    // 80006D18: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80006D1C:
    ctx->pc = 0x80006D1Cu;
    // 80006D1C: bl      0x800224F8
    {
            ctx->lr = 0x80006D20u;
            ctx->pc = 0x800224F8u;
            return;
    }

label_80006D20:
    ctx->pc = 0x80006D20u;
    ctx->downcount -= 2;
    // 80006D20: rlwinm. r3, r3, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80006D24:
    ctx->pc = 0x80006D24u;
    // 80006D24: bc    12, 2, 0x80006D30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80006D30;
        }
    }

label_80006D28:
    ctx->pc = 0x80006D28u;
    ctx->downcount -= 2;
    // 80006D28: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80006D2C:
    ctx->pc = 0x80006D2Cu;
    // 80006D2C: stw     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80006D30:
    ctx->pc = 0x80006D30u;
    ctx->downcount -= 10;
    // 80006D30: cntlzw r0, r3
    {
        u32 v = ctx->gpr[3];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_80006D34:
    ctx->pc = 0x80006D34u;
    // 80006D34: lwz     r3, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80006D38:
    ctx->pc = 0x80006D38u;
    // 80006D38: rlwinm r0, r0, 27, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_80006D3C:
    ctx->pc = 0x80006D3Cu;
    // 80006D3C: and   r3, r3, r0
    {
        ctx->gpr[3] = ctx->gpr[3] & ctx->gpr[0];
    }

label_80006D40:
    ctx->pc = 0x80006D40u;
    // 80006D40: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80006D44:
    ctx->pc = 0x80006D44u;
    // 80006D44: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80006D48:
    ctx->pc = 0x80006D48u;
    // 80006D48: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80006D4C:
    ctx->pc = 0x80006D4Cu;
    // 80006D4C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80006D50:
    ctx->pc = 0x80006D50u;
    // 80006D50: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80006D54:
    ctx->pc = 0x80006D54u;
    ctx->downcount -= 7;
    // 80006D54: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80006D58:
    ctx->pc = 0x80006D58u;
    // 80006D58: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80006D5C:
    ctx->pc = 0x80006D5Cu;
    // 80006D5C: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80006D60:
    ctx->pc = 0x80006D60u;
    // 80006D60: stw     r31, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80006D64:
    ctx->pc = 0x80006D64u;
    // 80006D64: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80006D68:
    ctx->pc = 0x80006D68u;
    // 80006D68: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80006D6C:
    ctx->pc = 0x80006D6Cu;
    // 80006D6C: bl      0x80007204
    {
            ctx->lr = 0x80006D70u;
            goto label_80007204;
    }

label_80006D70:
    ctx->pc = 0x80006D70u;
    ctx->downcount -= 5;
    // 80006D70: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_80006D74:
    ctx->pc = 0x80006D74u;
    // 80006D74: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80006D78:
    ctx->pc = 0x80006D78u;
    // 80006D78: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80006D7C:
    ctx->pc = 0x80006D7Cu;
    // 80006D7C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80006D80:
    ctx->downcount -= 5;
    // 80006D80: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_80006D84:
    // 80006D84: add   r5, r5, r4
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80006D88:
    ctx->pc = 0x80006D88u;
    // 80006D88: lbz     r0, 10(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(10);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80006D8C:
    // 80006D8C: extsb. r0, r0
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

label_80006D90:
    // 80006D90: bc    4, 2, 0x80006DEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80006DEC;
        }
    }

label_80006D94:
    ctx->pc = 0x80006D94u;
    ctx->downcount -= 4;
    // 80006D94: lhz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80006D98:
    // 80006D98: andi.   r0, r0, 0x1600
    {
        ctx->gpr[0] = ctx->gpr[0] & 0x1600u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80006D9C:
    // 80006D9C: cmpwi   r0, 5632
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(5632);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80006DA0:
    // 80006DA0: bc    4, 2, 0x80006DD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80006DD8;
        }
    }

label_80006DA4:
    ctx->pc = 0x80006DA4u;
    ctx->downcount -= 3;
    // 80006DA4: lwz     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80006DA8:
    // 80006DA8: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80006DAC:
    // 80006DAC: bc    12, 2, 0x80006DEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80006DEC;
        }
    }

label_80006DB0:
    ctx->downcount -= 7;
    // 80006DB0: addi    r6, r3, 28
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(28);

label_80006DB4:
    ctx->pc = 0x80006DB4u;
    // 80006DB4: lwzx    r5, r31, r6
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[6];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80006DB8:
    // 80006DB8: addi    r0, r5, 1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(1);

label_80006DBC:
    ctx->pc = 0x80006DBCu;
    // 80006DBC: stwx    r0, r31, r6
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[6];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80006DC0:
    ctx->pc = 0x80006DC0u;
    // 80006DC0: lwzx    r0, r31, r6
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[6];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80006DC4:
    // 80006DC4: cmpwi   r0, 60
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

label_80006DC8:
    // 80006DC8: bc    12, 0, 0x80006DEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80006DEC;
        }
    }

label_80006DCC:
    ctx->downcount -= 3;
    // 80006DCC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80006DD0:
    ctx->pc = 0x80006DD0u;
    // 80006DD0: stw     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80006DD4:
    // 80006DD4: b       0x80006DEC
    {
            goto label_80006DEC;
    }

label_80006DD8:
    ctx->downcount -= 5;
    // 80006DD8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80006DDC:
    // 80006DDC: addi    r0, r3, 28
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(28);

label_80006DE0:
    ctx->pc = 0x80006DE0u;
    // 80006DE0: stw     r5, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80006DE4:
    // 80006DE4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80006DE8:
    ctx->pc = 0x80006DE8u;
    // 80006DE8: stwx    r5, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80006DEC:
    ctx->downcount -= 3;
    // 80006DEC: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_80006DF0:
    // 80006DF0: addi    r4, r4, 12
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12);

label_80006DF4:
    // 80006DF4: bc    16, 0, 0x80006D80
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80006D80u;
                return;
            }
            goto label_80006D80;
        }
    }

label_80006DF8:
    ctx->pc = 0x80006DF8u;
    ctx->downcount -= 7;
    // 80006DF8: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80006DFC:
    ctx->pc = 0x80006DFCu;
    // 80006DFC: lwz     r3, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80006E00:
    ctx->pc = 0x80006E00u;
    // 80006E00: lwz     r31, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80006E04:
    ctx->pc = 0x80006E04u;
    // 80006E04: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80006E08:
    ctx->pc = 0x80006E08u;
    // 80006E08: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80006E0C:
    ctx->pc = 0x80006E0Cu;
    // 80006E0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80006E10:
    ctx->pc = 0x80006E10u;
    ctx->downcount -= 17;
    // 80006E10: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80006E14:
    ctx->pc = 0x80006E14u;
    // 80006E14: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80006E18:
    ctx->pc = 0x80006E18u;
    // 80006E18: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80006E1C:
    ctx->pc = 0x80006E1Cu;
    // 80006E1C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80006E20:
    ctx->pc = 0x80006E20u;
    // 80006E20: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80006E24:
    ctx->pc = 0x80006E24u;
    // 80006E24: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80006E28:
    ctx->pc = 0x80006E28u;
    // 80006E28: bl      0x80006D08
    {
            ctx->lr = 0x80006E2Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80006D08u;
                return;
            }
            goto label_80006D08;
    }

label_80006E2C:
    ctx->pc = 0x80006E2Cu;
    ctx->downcount -= 2;
    // 80006E2C: cmpwi   r3, 0
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

label_80006E30:
    ctx->pc = 0x80006E30u;
    // 80006E30: bc    4, 2, 0x80006E44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80006E44;
        }
    }

label_80006E34:
    ctx->pc = 0x80006E34u;
    ctx->downcount -= 2;
    // 80006E34: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80006E38:
    ctx->pc = 0x80006E38u;
    // 80006E38: bl      0x80006D54
    {
            ctx->lr = 0x80006E3Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80006D54u;
                return;
            }
            goto label_80006D54;
    }

label_80006E3C:
    ctx->pc = 0x80006E3Cu;
    ctx->downcount -= 2;
    // 80006E3C: cmpwi   r3, 0
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

label_80006E40:
    ctx->pc = 0x80006E40u;
    // 80006E40: bc    12, 2, 0x80006E48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80006E48;
        }
    }

label_80006E44:
    ctx->pc = 0x80006E44u;
    ctx->downcount -= 1;
    // 80006E44: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_80006E48:
    ctx->pc = 0x80006E48u;
    ctx->downcount -= 17;
    // 80006E48: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80006E4C:
    ctx->pc = 0x80006E4Cu;
    // 80006E4C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80006E50:
    ctx->pc = 0x80006E50u;
    // 80006E50: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80006E54:
    ctx->pc = 0x80006E54u;
    // 80006E54: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80006E58:
    ctx->pc = 0x80006E58u;
    // 80006E58: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80006E5C:
    ctx->pc = 0x80006E5Cu;
    // 80006E5C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80006E60:
    ctx->pc = 0x80006E60u;
    ctx->downcount -= 29;
    // 80006E60: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80006E64:
    ctx->pc = 0x80006E64u;
    // 80006E64: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80006E68:
    ctx->pc = 0x80006E68u;
    // 80006E68: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_80006E6C:
    ctx->pc = 0x80006E6Cu;
    // 80006E6C: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_80006E70:
    ctx->pc = 0x80006E70u;
    // 80006E70: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80006E74:
    ctx->pc = 0x80006E74u;
    // 80006E74: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80006E78:
    ctx->pc = 0x80006E78u;
    // 80006E78: stmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80006E7C:
    ctx->pc = 0x80006E7Cu;
    // 80006E7C: addi    r29, r4, -32712
    ctx->gpr[29] = ctx->gpr[4] + (u32)(s32)(-32712);

label_80006E80:
    ctx->pc = 0x80006E80u;
    // 80006E80: or   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80006E84:
    ctx->pc = 0x80006E84u;
    // 80006E84: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80006E88:
    ctx->pc = 0x80006E88u;
    // 80006E88: addi    r3, r29, 28
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(28);

label_80006E8C:
    ctx->pc = 0x80006E8Cu;
    // 80006E8C: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_80006E90:
    ctx->pc = 0x80006E90u;
    // 80006E90: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_80006E94:
    ctx->pc = 0x80006E94u;
    // 80006E94: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80006E98:
    ctx->pc = 0x80006E98u;
    // 80006E98: stw     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80006E9C:
    ctx->pc = 0x80006E9Cu;
    // 80006E9C: stw     r0, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80006EA0:
    ctx->pc = 0x80006EA0u;
    // 80006EA0: stw     r0, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80006EA4:
    ctx->pc = 0x80006EA4u;
    // 80006EA4: stw     r0, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80006EA8:
    ctx->pc = 0x80006EA8u;
    // 80006EA8: bl      0x800050B4
    {
            ctx->lr = 0x80006EACu;
            ctx->pc = 0x800050B4u;
            return;
    }

label_80006EAC:
    ctx->pc = 0x80006EACu;
    ctx->downcount -= 7;
    // 80006EAC: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_80006EB0:
    ctx->pc = 0x80006EB0u;
    // 80006EB0: li      r0, 30
    ctx->gpr[0] = (u32)(s32)(30);

label_80006EB4:
    ctx->pc = 0x80006EB4u;
    // 80006EB4: addi    r4, r3, -6444
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6444);

label_80006EB8:
    ctx->pc = 0x80006EB8u;
    // 80006EB8: or   r6, r24, r24
    {
        ctx->gpr[6] = ctx->gpr[24] | ctx->gpr[24];
    }

label_80006EBC:
    ctx->pc = 0x80006EBCu;
    // 80006EBC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80006EC0:
    ctx->pc = 0x80006EC0u;
    // 80006EC0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80006EC4:
    loop_80006EC4(ctx);
    if (ctx->pc == 0x80006EDCu) goto label_80006EDC;
    return;
label_80006EC8:
    // 80006EC8: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

label_80006ECC:
    ctx->pc = 0x80006ECCu;
    // 80006ECC: stw     r6, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80006ED0:
    ctx->pc = 0x80006ED0u;
    // 80006ED0: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80006ED4:
    // 80006ED4: add   r6, r6, r0
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_80006ED8:
    // 80006ED8: bc    16, 0, 0x80006EC4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80006EC4u;
                return;
            }
            goto label_80006EC4;
        }
    }

label_80006EDC:
    ctx->pc = 0x80006EDCu;
    ctx->downcount -= 2;
    // 80006EDC: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_80006EE0:
    ctx->pc = 0x80006EE0u;
    // 80006EE0: addi    r30, r3, -32712
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(-32712);

label_80006EE4:
    ctx->downcount -= 1;
    // 80006EE4: bl      0x80029D60
    {
            ctx->lr = 0x80006EE8u;
            ctx->pc = 0x80029D60u;
            return;
    }

label_80006EE8:
    ctx->downcount -= 10;
    // 80006EE8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80006EEC:
    // 80006EEC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80006EF0:
    ctx->pc = 0x80006EF0u;
    // 80006EF0: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80006EF4:
    // 80006EF4: slw   r0, r0, r31
    {
        u32 sh = ctx->gpr[31] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_80006EF8:
    // 80006EF8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80006EFC:
    // 80006EFC: li      r25, 24
    ctx->gpr[25] = (u32)(s32)(24);

label_80006F00:
    // 80006F00: and   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] & ctx->gpr[0];
    }

label_80006F04:
    // 80006F04: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_80006F08:
    // 80006F08: rlwinm r24, r0, 27, 5, 31
    {
        ctx->gpr[24] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_80006F0C:
    // 80006F0C: bl      0x80006E10
    {
            ctx->lr = 0x80006F10u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80006E10u;
                return;
            }
            goto label_80006E10;
    }

label_80006F10:
    ctx->pc = 0x80006F10u;
    ctx->downcount -= 4;
    // 80006F10: lwz     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80006F14:
    // 80006F14: or.   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80006F18:
    ctx->pc = 0x80006F18u;
    // 80006F18: stw     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80006F1C:
    // 80006F1C: bc    12, 2, 0x80006F34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80006F34;
        }
    }

label_80006F20:
    ctx->downcount -= 4;
    // 80006F20: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_80006F24:
    ctx->pc = 0x80006F24u;
    // 80006F24: lwz     r0, -32664(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32664);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80006F28:
    // 80006F28: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80006F2C:
    // 80006F2C: bc    4, 2, 0x80006F34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80006F34;
        }
    }

label_80006F30:
    ctx->downcount -= 1;
    // 80006F30: bl      0x80006B98
    {
            ctx->lr = 0x80006F34u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80006B98u;
                return;
            }
            goto label_80006B98;
    }

label_80006F34:
    ctx->downcount -= 2;
    // 80006F34: cmpwi   r24, 0
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

label_80006F38:
    // 80006F38: bc    12, 2, 0x80006FAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80006FAC;
        }
    }

label_80006F3C:
    ctx->downcount -= 2;
    // 80006F3C: cmpwi   r31, 6
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80006F40:
    // 80006F40: bc    12, 2, 0x80006F70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80006F70;
        }
    }

label_80006F44:
    ctx->downcount -= 1;
    // 80006F44: bc    4, 0, 0x80006F58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80006F58;
        }
    }

label_80006F48:
    ctx->downcount -= 2;
    // 80006F48: cmpwi   r31, 4
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80006F4C:
    // 80006F4C: bc    12, 2, 0x80006F70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80006F70;
        }
    }

label_80006F50:
    ctx->downcount -= 1;
    // 80006F50: bc    4, 0, 0x80006F64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80006F64;
        }
    }

label_80006F54:
    ctx->downcount -= 1;
    // 80006F54: b       0x80006FA0
    {
            goto label_80006FA0;
    }

label_80006F58:
    ctx->downcount -= 2;
    // 80006F58: cmpwi   r31, 11
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(11);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80006F5C:
    // 80006F5C: bc    12, 2, 0x80006F94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80006F94;
        }
    }

label_80006F60:
    ctx->downcount -= 1;
    // 80006F60: b       0x80006FA0
    {
            goto label_80006FA0;
    }

label_80006F64:
    ctx->downcount -= 3;
    // 80006F64: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_80006F68:
    // 80006F68: li      r28, 5
    ctx->gpr[28] = (u32)(s32)(5);

label_80006F6C:
    // 80006F6C: b       0x80006FAC
    {
            goto label_80006FAC;
    }

label_80006F70:
    ctx->downcount -= 5;
    // 80006F70: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_80006F74:
    // 80006F74: li      r4, 18
    ctx->gpr[4] = (u32)(s32)(18);

label_80006F78:
    ctx->pc = 0x80006F78u;
    // 80006F78: lwz     r0, -32720(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32720);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80006F7C:
    // 80006F7C: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80006F80:
    // 80006F80: bc    4, 2, 0x80006F88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80006F88;
        }
    }

label_80006F84:
    ctx->downcount -= 1;
    // 80006F84: li      r4, 12
    ctx->gpr[4] = (u32)(s32)(12);

label_80006F88:
    ctx->downcount -= 3;
    // 80006F88: or   r25, r4, r4
    {
        ctx->gpr[25] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80006F8C:
    // 80006F8C: li      r28, 5
    ctx->gpr[28] = (u32)(s32)(5);

label_80006F90:
    // 80006F90: b       0x80006FAC
    {
            goto label_80006FAC;
    }

label_80006F94:
    ctx->downcount -= 3;
    // 80006F94: li      r25, 6
    ctx->gpr[25] = (u32)(s32)(6);

label_80006F98:
    // 80006F98: li      r28, 5
    ctx->gpr[28] = (u32)(s32)(5);

label_80006F9C:
    // 80006F9C: b       0x80006FAC
    {
            goto label_80006FAC;
    }

label_80006FA0:
    ctx->downcount -= 2;
    // 80006FA0: cmpwi   r28, 0
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

label_80006FA4:
    // 80006FA4: bc    4, 1, 0x80006FAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80006FAC;
        }
    }

label_80006FA8:
    ctx->downcount -= 1;
    // 80006FA8: addi    r28, r28, -1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(-1);

label_80006FAC:
    ctx->downcount -= 2;
    // 80006FAC: cmpwi   r28, 0
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

label_80006FB0:
    // 80006FB0: bc    12, 2, 0x80007050
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80007050;
        }
    }

label_80006FB4:
    ctx->downcount -= 1;
    // 80006FB4: bl      0x80006B34
    {
            ctx->lr = 0x80006FB8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80006B34u;
                return;
            }
            goto label_80006B34;
    }

label_80006FB8:
    ctx->pc = 0x80006FB8u;
    ctx->downcount -= 4;
    // 80006FB8: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80006FBC:
    // 80006FBC: add   r25, r25, r3
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[25] = res;
    }

label_80006FC0:
    // 80006FC0: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80006FC4:
    // 80006FC4: bc    4, 2, 0x80006FF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80006FF4;
        }
    }

label_80006FC8:
    ctx->downcount -= 2;
    // 80006FC8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80006FCC:
    // 80006FCC: bl      0x80006A8C
    {
            ctx->lr = 0x80006FD0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80006A8Cu;
                return;
            }
            goto label_80006A8C;
    }

label_80006FD0:
    ctx->pc = 0x80006FD0u;
    ctx->downcount -= 3;
    // 80006FD0: lwz     r12, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80006FD4:
    // 80006FD4: cmplwi  r12, 0x0000
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

label_80006FD8:
    // 80006FD8: bc    12, 2, 0x80006FE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80006FE8;
        }
    }

label_80006FDC:
    ctx->downcount -= 4;
    // 80006FDC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80006FE0:
    ctx->pc = 0x80006FE0u;
    // 80006FE0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80006FE4:
    ctx->pc = 0x80006FE4u;
    // 80006FE4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80006FE8u;
            ctx->pc = target;
            return;
        }
    }

label_80006FE8:
    ctx->downcount -= 1;
    // 80006FE8: bl      0x800071B8
    {
            ctx->lr = 0x80006FECu;
            goto label_800071B8;
    }

label_80006FEC:
    ctx->downcount -= 2;
    // 80006FEC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80006FF0:
    ctx->pc = 0x80006FF0u;
    // 80006FF0: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80006FF4:
    ctx->pc = 0x80006FF4u;
    ctx->downcount -= 3;
    // 80006FF4: lwz     r12, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80006FF8:
    // 80006FF8: cmplwi  r12, 0x0000
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

label_80006FFC:
    // 80006FFC: bc    12, 2, 0x80007008
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80007008;
        }
    }

label_80007000:
    ctx->pc = 0x80007000u;
    ctx->downcount -= 3;
    // 80007000: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80007004:
    ctx->pc = 0x80007004u;
    // 80007004: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80007008u;
            ctx->pc = target;
            return;
        }
    }

label_80007008:
    ctx->downcount -= 9;
    // 80007008: mulli   r4, r25, 12
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[25] * (s64)(s32)12);

label_8000700C:
    // 8000700C: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_80007010:
    // 80007010: addi    r0, r3, -6444
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-6444);

label_80007014:
    // 80007014: add   r6, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_80007018:
    ctx->pc = 0x80007018u;
    // 80007018: lwz     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000701C:
    // 8000701C: cmplw   r26, r3
    {
        u32 val_a = (u32)(ctx->gpr[26]);
        u32 val_b = (u32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80007020:
    // 80007020: bc    12, 2, 0x8000702C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000702C;
        }
    }

label_80007024:
    ctx->downcount -= 2;
    // 80007024: li      r27, 4
    ctx->gpr[27] = (u32)(s32)(4);

label_80007028:
    // 80007028: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000702C:
    ctx->downcount -= 2;
    // 8000702C: cmpwi   r27, 0
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

label_80007030:
    // 80007030: bc    4, 1, 0x80007048
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80007048;
        }
    }

label_80007034:
    ctx->pc = 0x80007034u;
    ctx->downcount -= 5;
    // 80007034: lha     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80007038:
    // 80007038: addi    r27, r27, -1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(-1);

label_8000703C:
    ctx->pc = 0x8000703Cu;
    // 8000703C: lha     r5, 2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80007040:
    ctx->pc = 0x80007040u;
    // 80007040: lwz     r6, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80007044:
    // 80007044: bl      0x8004D6B4
    {
            ctx->lr = 0x80007048u;
            ctx->pc = 0x8004D6B4u;
            return;
    }

label_80007048:
    ctx->downcount -= 1;
    // 80007048: bl      0x8002C6D0
    {
            ctx->lr = 0x8000704Cu;
            ctx->pc = 0x8002C6D0u;
            return;
    }

label_8000704C:
    ctx->downcount -= 1;
    // 8000704C: b       0x800070DC
    {
            goto label_800070DC;
    }

label_80007050:
    ctx->pc = 0x80007050u;
    ctx->downcount -= 3;
    // 80007050: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80007054:
    // 80007054: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80007058:
    // 80007058: bc    12, 2, 0x800070D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800070D8;
        }
    }

label_8000705C:
    ctx->downcount -= 1;
    // 8000705C: bl      0x8002A1C0
    {
            ctx->lr = 0x80007060u;
            ctx->pc = 0x8002A1C0u;
            return;
    }

label_80007060:
    ctx->downcount -= 3;
    // 80007060: rlwinm r0, r3, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_80007064:
    // 80007064: cmplwi  r0, 0x0001
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

label_80007068:
    // 80007068: bc    12, 2, 0x8000707C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000707C;
        }
    }

label_8000706C:
    ctx->downcount -= 4;
    // 8000706C: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_80007070:
    ctx->pc = 0x80007070u;
    // 80007070: lwz     r0, -32712(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32712);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80007074:
    // 80007074: cmplwi  r0, 0x0000
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

label_80007078:
    // 80007078: bc    12, 2, 0x800070D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800070D0;
        }
    }

label_8000707C:
    ctx->downcount -= 1;
    // 8000707C: bl      0x80006B34
    {
            ctx->lr = 0x80007080u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80006B34u;
                return;
            }
            goto label_80006B34;
    }

label_80007080:
    ctx->downcount -= 3;
    // 80007080: addi    r24, r3, 24
    ctx->gpr[24] = ctx->gpr[3] + (u32)(s32)(24);

label_80007084:
    // 80007084: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80007088:
    // 80007088: bl      0x80006A8C
    {
            ctx->lr = 0x8000708Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80006A8Cu;
                return;
            }
            goto label_80006A8C;
    }

label_8000708C:
    ctx->pc = 0x8000708Cu;
    ctx->downcount -= 3;
    // 8000708C: lwz     r12, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80007090:
    // 80007090: cmplwi  r12, 0x0000
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

label_80007094:
    // 80007094: bc    12, 2, 0x800070A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800070A4;
        }
    }

label_80007098:
    ctx->downcount -= 4;
    // 80007098: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8000709C:
    ctx->pc = 0x8000709Cu;
    // 8000709C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_800070A0:
    ctx->pc = 0x800070A0u;
    // 800070A0: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x800070A4u;
            ctx->pc = target;
            return;
        }
    }

label_800070A4:
    ctx->downcount -= 13;
    // 800070A4: mulli   r4, r24, 12
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[24] * (s64)(s32)12);

label_800070A8:
    // 800070A8: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_800070AC:
    // 800070AC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_800070B0:
    // 800070B0: addi    r0, r3, -6444
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-6444);

label_800070B4:
    ctx->pc = 0x800070B4u;
    // 800070B4: stw     r5, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_800070B8:
    // 800070B8: add   r6, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_800070BC:
    ctx->pc = 0x800070BCu;
    // 800070BC: lwz     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800070C0:
    ctx->pc = 0x800070C0u;
    // 800070C0: lha     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_800070C4:
    ctx->pc = 0x800070C4u;
    // 800070C4: lha     r5, 2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_800070C8:
    ctx->pc = 0x800070C8u;
    // 800070C8: lwz     r6, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_800070CC:
    // 800070CC: bl      0x8004D6B4
    {
            ctx->lr = 0x800070D0u;
            ctx->pc = 0x8004D6B4u;
            return;
    }

label_800070D0:
    ctx->downcount -= 2;
    // 800070D0: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_800070D4:
    // 800070D4: b       0x800070DC
    {
            goto label_800070DC;
    }

label_800070D8:
    ctx->downcount -= 1;
    // 800070D8: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_800070DC:
    ctx->downcount -= 1;
    // 800070DC: bl      0x8002B64C
    {
            ctx->lr = 0x800070E0u;
            ctx->pc = 0x8002B64Cu;
            return;
    }

label_800070E0:
    ctx->downcount -= 1;
    // 800070E0: b       0x80006EE4
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80006EE4u;
                return;
            }
            goto label_80006EE4;
    }

label_800070E4:
    ctx->pc = 0x800070E4u;
    ctx->downcount -= 10;
    // 800070E4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800070E8:
    ctx->pc = 0x800070E8u;
    // 800070E8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800070EC:
    ctx->pc = 0x800070ECu;
    // 800070EC: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_800070F0:
    ctx->pc = 0x800070F0u;
    // 800070F0: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_800070F4:
    ctx->pc = 0x800070F4u;
    // 800070F4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800070F8:
    ctx->pc = 0x800070F8u;
    // 800070F8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_800070FC:
    ctx->pc = 0x800070FCu;
    // 800070FC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80007100:
    ctx->pc = 0x80007100u;
    // 80007100: addi    r3, r4, -32712
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-32712);

label_80007104:
    ctx->pc = 0x80007104u;
    // 80007104: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80007108:
    ctx->pc = 0x80007108u;
    // 80007108: bl      0x800050B4
    {
            ctx->lr = 0x8000710Cu;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8000710C:
    ctx->pc = 0x8000710Cu;
    ctx->downcount -= 2;
    // 8000710C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80007110:
    ctx->pc = 0x80007110u;
    // 80007110: bl      0x8002A920
    {
            ctx->lr = 0x80007114u;
            ctx->pc = 0x8002A920u;
            return;
    }

label_80007114:
    ctx->pc = 0x80007114u;
    ctx->downcount -= 4;
    // 80007114: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_80007118:
    ctx->pc = 0x80007118u;
    // 80007118: lwz     r0, -32716(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32716);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000711C:
    ctx->pc = 0x8000711Cu;
    // 8000711C: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80007120:
    ctx->pc = 0x80007120u;
    // 80007120: bc    4, 2, 0x8000716C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000716C;
        }
    }

label_80007124:
    ctx->pc = 0x80007124u;
    ctx->downcount -= 12;
    // 80007124: lis     r6, -32737
    ctx->gpr[6] = ((u32)(s32)(-32737) << 16);

label_80007128:
    ctx->pc = 0x80007128u;
    // 80007128: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000712C:
    ctx->pc = 0x8000712Cu;
    // 8000712C: lis     r4, -32768
    ctx->gpr[4] = ((u32)(s32)(-32768) << 16);

label_80007130:
    ctx->pc = 0x80007130u;
    // 80007130: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80007134:
    ctx->pc = 0x80007134u;
    // 80007134: addi    r6, r6, -32656
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-32656);

label_80007138:
    ctx->pc = 0x80007138u;
    // 80007138: addi    r3, r3, -28560
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28560);

label_8000713C:
    ctx->pc = 0x8000713Cu;
    // 8000713C: addi    r4, r4, 28256
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28256);

label_80007140:
    ctx->pc = 0x80007140u;
    // 80007140: li      r7, 4096
    ctx->gpr[7] = (u32)(s32)(4096);

label_80007144:
    ctx->pc = 0x80007144u;
    // 80007144: addi    r6, r6, 4096
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(4096);

label_80007148:
    ctx->pc = 0x80007148u;
    // 80007148: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8000714C:
    ctx->pc = 0x8000714Cu;
    // 8000714C: li      r9, 1
    ctx->gpr[9] = (u32)(s32)(1);

label_80007150:
    ctx->pc = 0x80007150u;
    // 80007150: bl      0x80023F70
    {
            ctx->lr = 0x80007154u;
            ctx->pc = 0x80023F70u;
            return;
    }

label_80007154:
    ctx->pc = 0x80007154u;
    ctx->downcount -= 3;
    // 80007154: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_80007158:
    ctx->pc = 0x80007158u;
    // 80007158: addi    r3, r3, -28560
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28560);

label_8000715C:
    ctx->pc = 0x8000715Cu;
    // 8000715C: bl      0x800243F8
    {
            ctx->lr = 0x80007160u;
            ctx->pc = 0x800243F8u;
            return;
    }

label_80007160:
    ctx->pc = 0x80007160u;
    ctx->downcount -= 3;
    // 80007160: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_80007164:
    ctx->pc = 0x80007164u;
    // 80007164: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80007168:
    ctx->pc = 0x80007168u;
    // 80007168: stw     r0, -32716(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32716);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000716C:
    ctx->pc = 0x8000716Cu;
    ctx->downcount -= 6;
    // 8000716C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80007170:
    ctx->pc = 0x80007170u;
    // 80007170: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80007174:
    ctx->pc = 0x80007174u;
    // 80007174: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80007178:
    ctx->pc = 0x80007178u;
    // 80007178: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000717C:
    ctx->pc = 0x8000717Cu;
    // 8000717C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80007180:
    ctx->pc = 0x80007180u;
    ctx->downcount -= 4;
    // 80007180: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_80007184:
    ctx->pc = 0x80007184u;
    // 80007184: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80007188:
    ctx->pc = 0x80007188u;
    // 80007188: stw     r0, -6448(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6448);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000718C:
    ctx->pc = 0x8000718Cu;
    // 8000718C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80007190:
    ctx->pc = 0x80007190u;
    ctx->downcount -= 4;
    // 80007190: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80007194:
    ctx->pc = 0x80007194u;
    // 80007194: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80007198:
    ctx->pc = 0x80007198u;
    // 80007198: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000719C:
    ctx->pc = 0x8000719Cu;
    // 8000719C: bl      0x8002399C
    {
            ctx->lr = 0x800071A0u;
            ctx->pc = 0x8002399Cu;
            return;
    }

label_800071A0:
    ctx->pc = 0x800071A0u;
    ctx->downcount -= 7;
    // 800071A0: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_800071A4:
    ctx->pc = 0x800071A4u;
    // 800071A4: stw     r3, -32660(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32660);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800071A8:
    ctx->pc = 0x800071A8u;
    // 800071A8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800071AC:
    ctx->pc = 0x800071ACu;
    // 800071AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800071B0:
    ctx->pc = 0x800071B0u;
    // 800071B0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_800071B4:
    ctx->pc = 0x800071B4u;
    // 800071B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_800071B8:
    ctx->pc = 0x800071B8u;
    ctx->downcount -= 6;
    // 800071B8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800071BC:
    ctx->pc = 0x800071BCu;
    // 800071BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800071C0:
    ctx->pc = 0x800071C0u;
    // 800071C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800071C4:
    ctx->pc = 0x800071C4u;
    // 800071C4: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_800071C8:
    ctx->pc = 0x800071C8u;
    // 800071C8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800071CC:
    ctx->pc = 0x800071CCu;
    // 800071CC: bl      0x8002EE2C
    {
            ctx->lr = 0x800071D0u;
            ctx->pc = 0x8002EE2Cu;
            return;
    }

label_800071D0:
    ctx->pc = 0x800071D0u;
    ctx->downcount -= 3;
    // 800071D0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_800071D4:
    ctx->pc = 0x800071D4u;
    // 800071D4: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_800071D8:
    ctx->pc = 0x800071D8u;
    // 800071D8: bl      0x8002EE2C
    {
            ctx->lr = 0x800071DCu;
            ctx->pc = 0x8002EE2Cu;
            return;
    }

label_800071DC:
    ctx->pc = 0x800071DCu;
    ctx->downcount -= 3;
    // 800071DC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_800071E0:
    ctx->pc = 0x800071E0u;
    // 800071E0: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_800071E4:
    ctx->pc = 0x800071E4u;
    // 800071E4: bl      0x8002EE2C
    {
            ctx->lr = 0x800071E8u;
            ctx->pc = 0x8002EE2Cu;
            return;
    }

label_800071E8:
    ctx->pc = 0x800071E8u;
    ctx->downcount -= 3;
    // 800071E8: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_800071EC:
    ctx->pc = 0x800071ECu;
    // 800071EC: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_800071F0:
    ctx->pc = 0x800071F0u;
    // 800071F0: bl      0x8002EE2C
    {
            ctx->lr = 0x800071F4u;
            ctx->pc = 0x8002EE2Cu;
            return;
    }

label_800071F4:
    ctx->pc = 0x800071F4u;
    ctx->downcount -= 5;
    // 800071F4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800071F8:
    ctx->pc = 0x800071F8u;
    // 800071F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800071FC:
    ctx->pc = 0x800071FCu;
    // 800071FC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80007200:
    ctx->pc = 0x80007200u;
    // 80007200: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80007204:
    ctx->pc = 0x80007204u;
    ctx->downcount -= 16;
    // 80007204: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80007208:
    ctx->pc = 0x80007208u;
    // 80007208: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000720C:
    ctx->pc = 0x8000720Cu;
    // 8000720C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80007210:
    ctx->pc = 0x80007210u;
    // 80007210: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80007214:
    ctx->pc = 0x80007214u;
    // 80007214: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80007218:
    ctx->pc = 0x80007218u;
    // 80007218: bl      0x8002C8E8
    {
            ctx->lr = 0x8000721Cu;
            ctx->pc = 0x8002C8E8u;
            return;
    }

label_8000721C:
    ctx->pc = 0x8000721Cu;
    ctx->downcount -= 5;
    // 8000721C: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_80007220:
    ctx->pc = 0x80007220u;
    // 80007220: addi    r31, r4, -27768
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(-27768);

label_80007224:
    ctx->pc = 0x80007224u;
    // 80007224: lwz     r0, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80007228:
    ctx->pc = 0x80007228u;
    // 80007228: cmplw   r0, r3
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

label_8000722C:
    ctx->pc = 0x8000722Cu;
    // 8000722C: bc    12, 2, 0x80007260
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80007260;
        }
    }

label_80007230:
    ctx->pc = 0x80007230u;
    ctx->downcount -= 3;
    // 80007230: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80007234:
    ctx->pc = 0x80007234u;
    // 80007234: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80007238:
    ctx->pc = 0x80007238u;
    // 80007238: bl      0x8002EB2C
    {
            ctx->lr = 0x8000723Cu;
            ctx->pc = 0x8002EB2Cu;
            return;
    }

label_8000723C:
    ctx->pc = 0x8000723Cu;
    ctx->downcount -= 4;
    // 8000723C: lbz     r4, 10(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80007240:
    ctx->pc = 0x80007240u;
    // 80007240: stw     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80007244:
    ctx->pc = 0x80007244u;
    // 80007244: extsb. r0, r4
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

label_80007248:
    ctx->pc = 0x80007248u;
    // 80007248: bc    12, 2, 0x80007260
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80007260;
        }
    }

label_8000724C:
    ctx->pc = 0x8000724Cu;
    ctx->downcount -= 3;
    // 8000724C: extsb r0, r4
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[4];
    }

label_80007250:
    ctx->pc = 0x80007250u;
    // 80007250: cmpwi   r0, -1
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

label_80007254:
    ctx->pc = 0x80007254u;
    // 80007254: bc    4, 2, 0x80007260
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80007260;
        }
    }

label_80007258:
    ctx->pc = 0x80007258u;
    ctx->downcount -= 2;
    // 80007258: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_8000725C:
    ctx->pc = 0x8000725Cu;
    // 8000725C: bl      0x8002E7B8
    {
            ctx->lr = 0x80007260u;
            ctx->pc = 0x8002E7B8u;
            return;
    }

label_80007260:
    ctx->pc = 0x80007260u;
    ctx->downcount -= 4;
    // 80007260: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_80007264:
    ctx->pc = 0x80007264u;
    // 80007264: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80007268:
    ctx->pc = 0x80007268u;
    // 80007268: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_8000726C:
    loop_8000726C(ctx);
    if (ctx->pc == 0x80007294u) goto label_80007294;
    return;
label_80007270:
    // 80007270: add   r6, r30, r3
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_80007274:
    ctx->pc = 0x80007274u;
    // 80007274: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80007278:
    // 80007278: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

label_8000727C:
    ctx->pc = 0x8000727Cu;
    // 8000727C: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80007280:
    ctx->pc = 0x80007280u;
    // 80007280: stw     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80007284:
    ctx->pc = 0x80007284u;
    // 80007284: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80007288:
    ctx->pc = 0x80007288u;
    // 80007288: lwz     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000728C:
    ctx->pc = 0x8000728Cu;
    // 8000728C: stw     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80007290:
    // 80007290: bc    16, 0, 0x8000726C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000726Cu;
                return;
            }
            goto label_8000726C;
        }
    }

label_80007294:
    ctx->pc = 0x80007294u;
    ctx->downcount -= 17;
    // 80007294: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80007298:
    ctx->pc = 0x80007298u;
    // 80007298: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8000729C:
    ctx->pc = 0x8000729Cu;
    // 8000729C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800072A0:
    ctx->pc = 0x800072A0u;
    // 800072A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800072A4:
    ctx->pc = 0x800072A4u;
    // 800072A4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_800072A8:
    ctx->pc = 0x800072A8u;
    // 800072A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_800072AC:
    ctx->pc = 0x800072ACu;
    ctx->downcount -= 4;
    // 800072AC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800072B0:
    ctx->pc = 0x800072B0u;
    // 800072B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800072B4:
    ctx->pc = 0x800072B4u;
    // 800072B4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800072B8:
    ctx->pc = 0x800072B8u;
    // 800072B8: bl      0x8002E7B8
    {
            ctx->lr = 0x800072BCu;
            ctx->pc = 0x8002E7B8u;
            return;
    }

label_800072BC:
    ctx->pc = 0x800072BCu;
    ctx->downcount -= 5;
    // 800072BC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800072C0:
    ctx->pc = 0x800072C0u;
    // 800072C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800072C4:
    ctx->pc = 0x800072C4u;
    // 800072C4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_800072C8:
    ctx->pc = 0x800072C8u;
    // 800072C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_800072CC:
    ctx->pc = 0x800072CCu;
    ctx->downcount -= 8;
    // 800072CC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800072D0:
    ctx->pc = 0x800072D0u;
    // 800072D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800072D4:
    ctx->pc = 0x800072D4u;
    // 800072D4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800072D8:
    ctx->pc = 0x800072D8u;
    // 800072D8: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_800072DC:
    ctx->pc = 0x800072DCu;
    // 800072DC: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_800072E0:
    ctx->pc = 0x800072E0u;
    // 800072E0: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_800072E4:
    ctx->pc = 0x800072E4u;
    // 800072E4: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_800072E8:
    ctx->pc = 0x800072E8u;
    // 800072E8: b       0x800073A4
    {
            goto label_800073A4;
    }

label_800072EC:
    ctx->downcount -= 2;
    // 800072EC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_800072F0:
    // 800072F0: bl      0x800074E0
    {
            ctx->lr = 0x800072F4u;
            goto label_800074E0;
    }

label_800072F4:
    ctx->downcount -= 2;
    // 800072F4: cmpwi   r3, 0
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

label_800072F8:
    // 800072F8: bc    12, 2, 0x80007364
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80007364;
        }
    }

label_800072FC:
    ctx->pc = 0x800072FCu;
    ctx->downcount -= 4;
    // 800072FC: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80007300:
    // 80007300: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80007304:
    // 80007304: cmpwi   r0, 2
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

label_80007308:
    // 80007308: bc    12, 2, 0x80007330
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80007330;
        }
    }

label_8000730C:
    ctx->downcount -= 1;
    // 8000730C: bc    4, 0, 0x80007320
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80007320;
        }
    }

label_80007310:
    ctx->downcount -= 2;
    // 80007310: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80007314:
    // 80007314: bc    12, 2, 0x80007358
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80007358;
        }
    }

label_80007318:
    ctx->downcount -= 1;
    // 80007318: bc    4, 0, 0x80007340
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80007340;
        }
    }

label_8000731C:
    ctx->downcount -= 1;
    // 8000731C: b       0x80007358
    {
            goto label_80007358;
    }

label_80007320:
    ctx->downcount -= 2;
    // 80007320: cmpwi   r0, 5
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

label_80007324:
    // 80007324: bc    12, 2, 0x80007354
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80007354;
        }
    }

label_80007328:
    ctx->downcount -= 1;
    // 80007328: bc    4, 0, 0x80007358
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80007358;
        }
    }

label_8000732C:
    ctx->downcount -= 1;
    // 8000732C: b       0x80007348
    {
            goto label_80007348;
    }

label_80007330:
    ctx->pc = 0x80007330u;
    ctx->downcount -= 2;
    // 80007330: lwz     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80007334:
    // 80007334: bl      0x80007E9C
    {
            ctx->lr = 0x80007338u;
            goto label_80007E9C;
    }

label_80007338:
    ctx->downcount -= 1;
    // 80007338: bl      0x80008348
    {
            ctx->lr = 0x8000733Cu;
            goto label_80008348;
    }

label_8000733C:
    ctx->downcount -= 1;
    // 8000733C: b       0x80007358
    {
            goto label_80007358;
    }

label_80007340:
    ctx->downcount -= 2;
    // 80007340: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_80007344:
    // 80007344: b       0x80007358
    {
            goto label_80007358;
    }

label_80007348:
    ctx->downcount -= 2;
    // 80007348: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8000734C:
    // 8000734C: bl      0x8000A5C4
    {
            ctx->lr = 0x80007350u;
            ctx->pc = 0x8000A5C4u;
            return;
    }

label_80007350:
    ctx->downcount -= 1;
    // 80007350: b       0x80007358
    {
            goto label_80007358;
    }

label_80007354:
    ctx->downcount -= 1;
    // 80007354: bl      0x8000A140
    {
            ctx->lr = 0x80007358u;
            ctx->pc = 0x8000A140u;
            return;
    }

label_80007358:
    ctx->downcount -= 2;
    // 80007358: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8000735C:
    // 8000735C: bl      0x800073C4
    {
            ctx->lr = 0x80007360u;
            goto label_800073C4;
    }

label_80007360:
    ctx->downcount -= 1;
    // 80007360: b       0x800073A4
    {
            goto label_800073A4;
    }

label_80007364:
    ctx->downcount -= 2;
    // 80007364: cmpwi   r30, 0
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

label_80007368:
    // 80007368: bc    12, 2, 0x80007384
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80007384;
        }
    }

label_8000736C:
    ctx->downcount -= 6;
    // 8000736C: lis     r3, -32728
    ctx->gpr[3] = ((u32)(s32)(-32728) << 16);

label_80007370:
    // 80007370: addi    r3, r3, -8320
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8320);

label_80007374:
    ctx->pc = 0x80007374u;
    // 80007374: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80007378:
    ctx->pc = 0x80007378u;
    // 80007378: lbz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8000737C:
    // 8000737C: cmplwi  r0, 0x0000
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

label_80007380:
    // 80007380: bc    12, 2, 0x80007390
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80007390;
        }
    }

label_80007384:
    ctx->downcount -= 2;
    // 80007384: li      r30, 1
    ctx->gpr[30] = (u32)(s32)(1);

label_80007388:
    // 80007388: bl      0x80008120
    {
            ctx->lr = 0x8000738Cu;
            goto label_80008120;
    }

label_8000738C:
    ctx->downcount -= 1;
    // 8000738C: b       0x800073A4
    {
            goto label_800073A4;
    }

label_80007390:
    ctx->downcount -= 1;
    // 80007390: bl      0x8000A130
    {
            ctx->lr = 0x80007394u;
            ctx->pc = 0x8000A130u;
            return;
    }

label_80007394:
    ctx->downcount -= 2;
    // 80007394: cmpwi   r3, 0
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

label_80007398:
    // 80007398: bc    4, 2, 0x800073A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800073A0;
        }
    }

label_8000739C:
    ctx->downcount -= 1;
    // 8000739C: bl      0x8000C40C
    {
            ctx->lr = 0x800073A0u;
            ctx->pc = 0x8000C40Cu;
            return;
    }

label_800073A0:
    ctx->downcount -= 1;
    // 800073A0: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_800073A4:
    ctx->downcount -= 2;
    // 800073A4: cmpwi   r31, 0
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

label_800073A8:
    // 800073A8: bc    12, 2, 0x800072EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800072ECu;
                return;
            }
            goto label_800072EC;
        }
    }

label_800073AC:
    ctx->pc = 0x800073ACu;
    ctx->downcount -= 7;
    // 800073AC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800073B0:
    ctx->pc = 0x800073B0u;
    // 800073B0: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_800073B4:
    ctx->pc = 0x800073B4u;
    // 800073B4: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_800073B8:
    ctx->pc = 0x800073B8u;
    // 800073B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800073BC:
    ctx->pc = 0x800073BCu;
    // 800073BC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_800073C0:
    ctx->pc = 0x800073C0u;
    // 800073C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_800073C4:
    ctx->pc = 0x800073C4u;
    ctx->downcount -= 5;
    // 800073C4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800073C8:
    ctx->pc = 0x800073C8u;
    // 800073C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800073CC:
    ctx->pc = 0x800073CCu;
    // 800073CC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800073D0:
    ctx->pc = 0x800073D0u;
    // 800073D0: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800073D4:
    ctx->pc = 0x800073D4u;
    // 800073D4: bl      0x80007E38
    {
            ctx->lr = 0x800073D8u;
            goto label_80007E38;
    }

label_800073D8:
    ctx->pc = 0x800073D8u;
    ctx->downcount -= 5;
    // 800073D8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800073DC:
    ctx->pc = 0x800073DCu;
    // 800073DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800073E0:
    ctx->pc = 0x800073E0u;
    // 800073E0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_800073E4:
    ctx->pc = 0x800073E4u;
    // 800073E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_800073E8:
    ctx->pc = 0x800073E8u;
    ctx->downcount -= 6;
    // 800073E8: stw     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_800073EC:
    ctx->pc = 0x800073ECu;
    // 800073EC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800073F0:
    ctx->pc = 0x800073F0u;
    // 800073F0: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_800073F4:
    ctx->pc = 0x800073F4u;
    // 800073F4: stw     r4, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_800073F8:
    ctx->pc = 0x800073F8u;
    // 800073F8: stw     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800073FC:
    ctx->pc = 0x800073FCu;
    // 800073FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80007400:
    ctx->pc = 0x80007400u;
    ctx->downcount -= 11;
    // 80007400: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80007404:
    ctx->pc = 0x80007404u;
    // 80007404: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80007408:
    ctx->pc = 0x80007408u;
    // 80007408: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_8000740C:
    ctx->pc = 0x8000740Cu;
    // 8000740C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80007410:
    ctx->pc = 0x80007410u;
    // 80007410: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80007414:
    ctx->pc = 0x80007414u;
    // 80007414: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80007418:
    ctx->pc = 0x80007418u;
    // 80007418: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8000741C:
    ctx->pc = 0x8000741Cu;
    // 8000741C: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80007420:
    ctx->pc = 0x80007420u;
    // 80007420: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80007424:
    ctx->pc = 0x80007424u;
    // 80007424: addi    r3, r4, -27712
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-27712);

label_80007428:
    ctx->pc = 0x80007428u;
    // 80007428: bl      0x80009BCC
    {
            ctx->lr = 0x8000742Cu;
            ctx->pc = 0x80009BCCu;
            return;
    }

label_8000742C:
    ctx->pc = 0x8000742Cu;
    ctx->downcount -= 5;
    // 8000742C: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_80007430:
    ctx->pc = 0x80007430u;
    // 80007430: addi    r30, r3, -27712
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(-27712);

label_80007434:
    ctx->pc = 0x80007434u;
    // 80007434: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80007438:
    ctx->pc = 0x80007438u;
    // 80007438: cmpwi   r3, 2
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

label_8000743C:
    ctx->pc = 0x8000743Cu;
    // 8000743C: bc    4, 2, 0x80007448
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80007448;
        }
    }

label_80007440:
    ctx->pc = 0x80007440u;
    ctx->downcount -= 2;
    // 80007440: li      r31, 256
    ctx->gpr[31] = (u32)(s32)(256);

label_80007444:
    ctx->pc = 0x80007444u;
    // 80007444: b       0x800074B4
    {
            goto label_800074B4;
    }

label_80007448:
    ctx->pc = 0x80007448u;
    ctx->downcount -= 14;
    // 80007448: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000744C:
    ctx->pc = 0x8000744Cu;
    // 8000744C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80007450:
    ctx->pc = 0x80007450u;
    // 80007450: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_80007454:
    ctx->pc = 0x80007454u;
    // 80007454: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80007458:
    ctx->pc = 0x80007458u;
    // 80007458: rlwinm r3, r0, 1, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0x00000001u;
    }

label_8000745C:
    ctx->pc = 0x8000745Cu;
    // 8000745C: rlwinm r0, r0, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000001u;
    }

label_80007460:
    ctx->pc = 0x80007460u;
    // 80007460: xor   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[3];
    }

label_80007464:
    ctx->pc = 0x80007464u;
    // 80007464: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80007468:
    ctx->pc = 0x80007468u;
    // 80007468: mulli   r29, r0, 12
    ctx->gpr[29] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_8000746C:
    ctx->pc = 0x8000746Cu;
    // 8000746C: add   r3, r30, r29
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80007470:
    ctx->pc = 0x80007470u;
    // 80007470: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

label_80007474:
    ctx->pc = 0x80007474u;
    // 80007474: bl      0x80003130
    {
            ctx->lr = 0x80007478u;
            ctx->pc = 0x80003130u;
            return;
    }

label_80007478:
    ctx->pc = 0x80007478u;
    ctx->downcount -= 10;
    // 80007478: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000747C:
    ctx->pc = 0x8000747Cu;
    // 8000747C: addi    r4, r3, -27712
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-27712);

label_80007480:
    ctx->pc = 0x80007480u;
    // 80007480: lwz     r0, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80007484:
    ctx->pc = 0x80007484u;
    // 80007484: add   r3, r4, r29
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80007488:
    ctx->pc = 0x80007488u;
    // 80007488: stw     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000748C:
    ctx->pc = 0x8000748Cu;
    // 8000748C: lwz     r3, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80007490:
    ctx->pc = 0x80007490u;
    // 80007490: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80007494:
    ctx->pc = 0x80007494u;
    // 80007494: cmplwi  r0, 0x0100
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0100u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80007498:
    ctx->pc = 0x80007498u;
    // 80007498: stw     r0, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000749C:
    ctx->pc = 0x8000749Cu;
    // 8000749C: bc    4, 0, 0x800074A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800074A8;
        }
    }

label_800074A0:
    ctx->pc = 0x800074A0u;
    ctx->downcount -= 2;
    // 800074A0: li      r0, 256
    ctx->gpr[0] = (u32)(s32)(256);

label_800074A4:
    ctx->pc = 0x800074A4u;
    // 800074A4: stw     r0, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800074A8:
    ctx->pc = 0x800074A8u;
    ctx->downcount -= 3;
    // 800074A8: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800074AC:
    ctx->pc = 0x800074ACu;
    // 800074AC: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_800074B0:
    ctx->pc = 0x800074B0u;
    // 800074B0: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800074B4:
    ctx->pc = 0x800074B4u;
    ctx->downcount -= 3;
    // 800074B4: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_800074B8:
    ctx->pc = 0x800074B8u;
    // 800074B8: addi    r3, r3, -27712
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27712);

label_800074BC:
    ctx->pc = 0x800074BCu;
    // 800074BC: bl      0x80009BC4
    {
            ctx->lr = 0x800074C0u;
            ctx->pc = 0x80009BC4u;
            return;
    }

label_800074C0:
    ctx->pc = 0x800074C0u;
    ctx->downcount -= 9;
    // 800074C0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800074C4:
    ctx->pc = 0x800074C4u;
    // 800074C4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_800074C8:
    ctx->pc = 0x800074C8u;
    // 800074C8: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_800074CC:
    ctx->pc = 0x800074CCu;
    // 800074CC: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_800074D0:
    ctx->pc = 0x800074D0u;
    // 800074D0: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_800074D4:
    ctx->pc = 0x800074D4u;
    // 800074D4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800074D8:
    ctx->pc = 0x800074D8u;
    // 800074D8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_800074DC:
    ctx->pc = 0x800074DCu;
    // 800074DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_800074E0:
    ctx->pc = 0x800074E0u;
    ctx->downcount -= 11;
    // 800074E0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800074E4:
    ctx->pc = 0x800074E4u;
    // 800074E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800074E8:
    ctx->pc = 0x800074E8u;
    // 800074E8: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_800074EC:
    ctx->pc = 0x800074ECu;
    // 800074EC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800074F0:
    ctx->pc = 0x800074F0u;
    // 800074F0: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_800074F4:
    ctx->pc = 0x800074F4u;
    // 800074F4: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_800074F8:
    ctx->pc = 0x800074F8u;
    // 800074F8: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_800074FC:
    ctx->pc = 0x800074FCu;
    // 800074FC: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80007500:
    ctx->pc = 0x80007500u;
    // 80007500: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80007504:
    ctx->pc = 0x80007504u;
    // 80007504: addi    r3, r4, -27712
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-27712);

label_80007508:
    ctx->pc = 0x80007508u;
    // 80007508: bl      0x80009BCC
    {
            ctx->lr = 0x8000750Cu;
            ctx->pc = 0x80009BCCu;
            return;
    }

label_8000750C:
    ctx->pc = 0x8000750Cu;
    ctx->downcount -= 5;
    // 8000750C: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_80007510:
    ctx->pc = 0x80007510u;
    // 80007510: addi    r31, r3, -27712
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-27712);

label_80007514:
    ctx->pc = 0x80007514u;
    // 80007514: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80007518:
    ctx->pc = 0x80007518u;
    // 80007518: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000751C:
    ctx->pc = 0x8000751Cu;
    // 8000751C: bc    4, 1, 0x80007568
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80007568;
        }
    }

label_80007520:
    ctx->pc = 0x80007520u;
    ctx->downcount -= 9;
    // 80007520: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80007524:
    ctx->pc = 0x80007524u;
    // 80007524: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80007528:
    ctx->pc = 0x80007528u;
    // 80007528: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_8000752C:
    ctx->pc = 0x8000752Cu;
    // 8000752C: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80007530:
    ctx->pc = 0x80007530u;
    // 80007530: add   r4, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80007534:
    ctx->pc = 0x80007534u;
    // 80007534: addi    r4, r4, 12
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12);

label_80007538:
    ctx->pc = 0x80007538u;
    // 80007538: bl      0x80003130
    {
            ctx->lr = 0x8000753Cu;
            ctx->pc = 0x80003130u;
            return;
    }

label_8000753C:
    ctx->pc = 0x8000753Cu;
    ctx->downcount -= 8;
    // 8000753C: lwz     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80007540:
    ctx->pc = 0x80007540u;
    // 80007540: lwz     r4, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80007544:
    ctx->pc = 0x80007544u;
    // 80007544: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80007548:
    ctx->pc = 0x80007548u;
    // 80007548: addi    r3, r4, -1
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-1);

label_8000754C:
    ctx->pc = 0x8000754Cu;
    // 8000754C: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80007550:
    ctx->pc = 0x80007550u;
    // 80007550: cmpwi   r0, 2
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

label_80007554:
    ctx->pc = 0x80007554u;
    // 80007554: stw     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80007558:
    ctx->pc = 0x80007558u;
    // 80007558: bc    4, 2, 0x80007564
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80007564;
        }
    }

label_8000755C:
    ctx->pc = 0x8000755Cu;
    ctx->downcount -= 2;
    // 8000755C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80007560:
    ctx->pc = 0x80007560u;
    // 80007560: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80007564:
    ctx->pc = 0x80007564u;
    ctx->downcount -= 1;
    // 80007564: li      r30, 1
    ctx->gpr[30] = (u32)(s32)(1);

label_80007568:
    ctx->pc = 0x80007568u;
    ctx->downcount -= 3;
    // 80007568: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000756C:
    ctx->pc = 0x8000756Cu;
    // 8000756C: addi    r3, r3, -27712
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27712);

label_80007570:
    ctx->pc = 0x80007570u;
    // 80007570: bl      0x80009BC4
    {
            ctx->lr = 0x80007574u;
            ctx->pc = 0x80009BC4u;
            return;
    }

label_80007574:
    ctx->pc = 0x80007574u;
    ctx->downcount -= 9;
    // 80007574: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80007578:
    ctx->pc = 0x80007578u;
    // 80007578: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8000757C:
    ctx->pc = 0x8000757Cu;
    // 8000757C: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80007580:
    ctx->pc = 0x80007580u;
    // 80007580: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80007584:
    ctx->pc = 0x80007584u;
    // 80007584: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80007588:
    ctx->pc = 0x80007588u;
    // 80007588: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000758C:
    ctx->pc = 0x8000758Cu;
    // 8000758C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80007590:
    ctx->pc = 0x80007590u;
    // 80007590: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80007594:
    ctx->pc = 0x80007594u;
    ctx->downcount -= 6;
    // 80007594: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80007598:
    ctx->pc = 0x80007598u;
    // 80007598: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000759C:
    ctx->pc = 0x8000759Cu;
    // 8000759C: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_800075A0:
    ctx->pc = 0x800075A0u;
    // 800075A0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800075A4:
    ctx->pc = 0x800075A4u;
    // 800075A4: addi    r3, r3, -27712
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27712);

label_800075A8:
    ctx->pc = 0x800075A8u;
    // 800075A8: bl      0x80009BD4
    {
            ctx->lr = 0x800075ACu;
            ctx->pc = 0x80009BD4u;
            return;
    }

label_800075AC:
    ctx->pc = 0x800075ACu;
    ctx->downcount -= 3;
    // 800075AC: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_800075B0:
    ctx->pc = 0x800075B0u;
    // 800075B0: addi    r3, r3, -27712
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27712);

label_800075B4:
    ctx->pc = 0x800075B4u;
    // 800075B4: bl      0x80009BCC
    {
            ctx->lr = 0x800075B8u;
            ctx->pc = 0x80009BCCu;
            return;
    }

label_800075B8:
    ctx->pc = 0x800075B8u;
    ctx->downcount -= 8;
    // 800075B8: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_800075BC:
    ctx->pc = 0x800075BCu;
    // 800075BC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800075C0:
    ctx->pc = 0x800075C0u;
    // 800075C0: addi    r3, r3, -27712
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27712);

label_800075C4:
    ctx->pc = 0x800075C4u;
    // 800075C4: li      r0, 256
    ctx->gpr[0] = (u32)(s32)(256);

label_800075C8:
    ctx->pc = 0x800075C8u;
    // 800075C8: stw     r4, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_800075CC:
    ctx->pc = 0x800075CCu;
    // 800075CC: stw     r4, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_800075D0:
    ctx->pc = 0x800075D0u;
    // 800075D0: stw     r0, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800075D4:
    ctx->pc = 0x800075D4u;
    // 800075D4: bl      0x80009BC4
    {
            ctx->lr = 0x800075D8u;
            ctx->pc = 0x80009BC4u;
            return;
    }

label_800075D8:
    ctx->pc = 0x800075D8u;
    ctx->downcount -= 6;
    // 800075D8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800075DC:
    ctx->pc = 0x800075DCu;
    // 800075DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800075E0:
    ctx->pc = 0x800075E0u;
    // 800075E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800075E4:
    ctx->pc = 0x800075E4u;
    // 800075E4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_800075E8:
    ctx->pc = 0x800075E8u;
    // 800075E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_800075EC:
    ctx->pc = 0x800075ECu;
    ctx->downcount -= 6;
    // 800075EC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800075F0:
    ctx->pc = 0x800075F0u;
    // 800075F0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800075F4:
    ctx->pc = 0x800075F4u;
    // 800075F4: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_800075F8:
    ctx->pc = 0x800075F8u;
    // 800075F8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800075FC:
    ctx->pc = 0x800075FCu;
    // 800075FC: addi    r3, r3, 9080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9080);

label_80007600:
    ctx->pc = 0x80007600u;
    // 80007600: bl      0x8000BF98
    {
            ctx->lr = 0x80007604u;
            ctx->pc = 0x8000BF98u;
            return;
    }

label_80007604:
    ctx->pc = 0x80007604u;
    ctx->downcount -= 5;
    // 80007604: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80007608:
    ctx->pc = 0x80007608u;
    // 80007608: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000760C:
    ctx->pc = 0x8000760Cu;
    // 8000760C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80007610:
    ctx->pc = 0x80007610u;
    // 80007610: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80007614:
    ctx->pc = 0x80007614u;
    ctx->downcount -= 4;
    // 80007614: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80007618:
    ctx->pc = 0x80007618u;
    // 80007618: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000761C:
    ctx->pc = 0x8000761Cu;
    // 8000761C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80007620:
    ctx->pc = 0x80007620u;
    // 80007620: bl      0x80008004
    {
            ctx->lr = 0x80007624u;
            goto label_80008004;
    }

label_80007624:
    ctx->pc = 0x80007624u;
    ctx->downcount -= 6;
    // 80007624: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80007628:
    ctx->pc = 0x80007628u;
    // 80007628: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000762C:
    ctx->pc = 0x8000762Cu;
    // 8000762C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80007630:
    ctx->pc = 0x80007630u;
    // 80007630: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80007634:
    ctx->pc = 0x80007634u;
    // 80007634: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80007638:
    ctx->pc = 0x80007638u;
    ctx->downcount -= 21;
    // 80007638: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000763C:
    ctx->pc = 0x8000763Cu;
    // 8000763C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80007640:
    ctx->pc = 0x80007640u;
    // 80007640: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_80007644:
    ctx->pc = 0x80007644u;
    // 80007644: li      r4, 52
    ctx->gpr[4] = (u32)(s32)(52);

label_80007648:
    ctx->pc = 0x80007648u;
    // 80007648: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000764C:
    ctx->pc = 0x8000764Cu;
    // 8000764C: li      r3, 86
    ctx->gpr[3] = (u32)(s32)(86);

label_80007650:
    ctx->pc = 0x80007650u;
    // 80007650: li      r0, 120
    ctx->gpr[0] = (u32)(s32)(120);

label_80007654:
    ctx->pc = 0x80007654u;
    // 80007654: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80007658:
    ctx->pc = 0x80007658u;
    // 80007658: stb     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_8000765C:
    ctx->pc = 0x8000765Cu;
    // 8000765C: lis     r5, -32737
    ctx->gpr[5] = ((u32)(s32)(-32737) << 16);

label_80007660:
    ctx->pc = 0x80007660u;
    // 80007660: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80007664:
    ctx->pc = 0x80007664u;
    // 80007664: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80007668:
    ctx->pc = 0x80007668u;
    // 80007668: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8000766C:
    ctx->pc = 0x8000766Cu;
    // 8000766C: stb     r4, 9(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_80007670:
    ctx->pc = 0x80007670u;
    // 80007670: stb     r3, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_80007674:
    ctx->pc = 0x80007674u;
    // 80007674: stb     r0, 11(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(11);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80007678:
    ctx->pc = 0x80007678u;
    // 80007678: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000767C:
    ctx->pc = 0x8000767Cu;
    // 8000767C: stwu     r6, -27672(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-27672);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
        ctx->gpr[5] = ea;
    }

label_80007680:
    ctx->pc = 0x80007680u;
    // 80007680: addis   r0, r3, -4660
    ctx->gpr[0] = ctx->gpr[3] + ((u32)(s32)(-4660) << 16);

label_80007684:
    ctx->pc = 0x80007684u;
    // 80007684: cmplwi  r0, 0x5678
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x5678u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80007688:
    ctx->pc = 0x80007688u;
    // 80007688: bc    4, 2, 0x80007694
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80007694;
        }
    }

label_8000768C:
    ctx->pc = 0x8000768Cu;
    ctx->downcount -= 2;
    // 8000768C: stw     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80007690:
    ctx->pc = 0x80007690u;
    // 80007690: b       0x800076AC
    {
            goto label_800076AC;
    }

label_80007694:
    ctx->pc = 0x80007694u;
    ctx->downcount -= 3;
    // 80007694: addis   r0, r3, -30806
    ctx->gpr[0] = ctx->gpr[3] + ((u32)(s32)(-30806) << 16);

label_80007698:
    ctx->pc = 0x80007698u;
    // 80007698: cmplwi  r0, 0x3412
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x3412u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000769C:
    ctx->pc = 0x8000769Cu;
    // 8000769C: bc    4, 2, 0x800076A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800076A8;
        }
    }

label_800076A0:
    ctx->pc = 0x800076A0u;
    ctx->downcount -= 2;
    // 800076A0: stw     r31, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_800076A4:
    ctx->pc = 0x800076A4u;
    // 800076A4: b       0x800076AC
    {
            goto label_800076AC;
    }

label_800076A8:
    ctx->pc = 0x800076A8u;
    ctx->downcount -= 1;
    // 800076A8: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_800076AC:
    ctx->pc = 0x800076ACu;
    ctx->downcount -= 5;
    // 800076AC: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_800076B0:
    ctx->pc = 0x800076B0u;
    // 800076B0: addi    r4, r3, 9108
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(9108);

label_800076B4:
    ctx->pc = 0x800076B4u;
    // 800076B4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_800076B8:
    ctx->pc = 0x800076B8u;
    // 800076B8: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_800076BC:
    ctx->pc = 0x800076BCu;
    // 800076BC: bl      0x8000CF98
    {
            ctx->lr = 0x800076C0u;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_800076C0:
    ctx->pc = 0x800076C0u;
    ctx->downcount -= 2;
    // 800076C0: cmpwi   r31, 0
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

label_800076C4:
    ctx->pc = 0x800076C4u;
    // 800076C4: bc    4, 2, 0x800076CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800076CC;
        }
    }

label_800076C8:
    ctx->pc = 0x800076C8u;
    ctx->downcount -= 1;
    // 800076C8: bl      0x800082BC
    {
            ctx->lr = 0x800076CCu;
            goto label_800082BC;
    }

label_800076CC:
    ctx->pc = 0x800076CCu;
    ctx->downcount -= 2;
    // 800076CC: cmpwi   r31, 0
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

label_800076D0:
    ctx->pc = 0x800076D0u;
    // 800076D0: bc    4, 2, 0x800076DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800076DC;
        }
    }

label_800076D4:
    ctx->pc = 0x800076D4u;
    ctx->downcount -= 1;
    // 800076D4: bl      0x80007594
    {
            ctx->lr = 0x800076D8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007594u;
                return;
            }
            goto label_80007594;
    }

label_800076D8:
    ctx->pc = 0x800076D8u;
    ctx->downcount -= 1;
    // 800076D8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800076DC:
    ctx->pc = 0x800076DCu;
    ctx->downcount -= 2;
    // 800076DC: cmpwi   r31, 0
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

label_800076E0:
    ctx->pc = 0x800076E0u;
    // 800076E0: bc    4, 2, 0x800076EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800076EC;
        }
    }

label_800076E4:
    ctx->pc = 0x800076E4u;
    ctx->downcount -= 1;
    // 800076E4: bl      0x80007F90
    {
            ctx->lr = 0x800076E8u;
            goto label_80007F90;
    }

label_800076E8:
    ctx->pc = 0x800076E8u;
    ctx->downcount -= 1;
    // 800076E8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800076EC:
    ctx->pc = 0x800076ECu;
    ctx->downcount -= 2;
    // 800076EC: cmpwi   r31, 0
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

label_800076F0:
    ctx->pc = 0x800076F0u;
    // 800076F0: bc    4, 2, 0x800076FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800076FC;
        }
    }

label_800076F4:
    ctx->pc = 0x800076F4u;
    ctx->downcount -= 1;
    // 800076F4: bl      0x800084B8
    {
            ctx->lr = 0x800076F8u;
            goto label_800084B8;
    }

label_800076F8:
    ctx->pc = 0x800076F8u;
    ctx->downcount -= 1;
    // 800076F8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800076FC:
    ctx->pc = 0x800076FCu;
    ctx->downcount -= 1;
    // 800076FC: bl      0x8000BF40
    {
            ctx->lr = 0x80007700u;
            ctx->pc = 0x8000BF40u;
            return;
    }

label_80007700:
    ctx->pc = 0x80007700u;
    ctx->downcount -= 2;
    // 80007700: cmpwi   r31, 0
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

label_80007704:
    ctx->pc = 0x80007704u;
    // 80007704: bc    4, 2, 0x80007710
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80007710;
        }
    }

label_80007708:
    ctx->pc = 0x80007708u;
    ctx->downcount -= 1;
    // 80007708: bl      0x8000800C
    {
            ctx->lr = 0x8000770Cu;
            goto label_8000800C;
    }

label_8000770C:
    ctx->pc = 0x8000770Cu;
    ctx->downcount -= 1;
    // 8000770C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80007710:
    ctx->pc = 0x80007710u;
    ctx->downcount -= 2;
    // 80007710: cmpwi   r31, 0
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

label_80007714:
    ctx->pc = 0x80007714u;
    // 80007714: bc    4, 2, 0x80007720
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80007720;
        }
    }

label_80007718:
    ctx->pc = 0x80007718u;
    ctx->downcount -= 1;
    // 80007718: bl      0x8000BC6C
    {
            ctx->lr = 0x8000771Cu;
            ctx->pc = 0x8000BC6Cu;
            return;
    }

label_8000771C:
    ctx->pc = 0x8000771Cu;
    ctx->downcount -= 1;
    // 8000771C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80007720:
    ctx->pc = 0x80007720u;
    ctx->downcount -= 2;
    // 80007720: cmpwi   r31, 0
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

label_80007724:
    ctx->pc = 0x80007724u;
    // 80007724: bc    4, 2, 0x80007768
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80007768;
        }
    }

label_80007728:
    ctx->pc = 0x80007728u;
    ctx->downcount -= 7;
    // 80007728: lis     r3, -32728
    ctx->gpr[3] = ((u32)(s32)(-32728) << 16);

label_8000772C:
    ctx->pc = 0x8000772Cu;
    // 8000772C: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80007730:
    ctx->pc = 0x80007730u;
    // 80007730: addi    r6, r3, -8320
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-8320);

label_80007734:
    ctx->pc = 0x80007734u;
    // 80007734: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80007738:
    ctx->pc = 0x80007738u;
    // 80007738: addi    r3, r5, -7936
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-7936);

label_8000773C:
    ctx->pc = 0x8000773Cu;
    // 8000773C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80007740:
    ctx->pc = 0x80007740u;
    // 80007740: bl      0x8000C118
    {
            ctx->lr = 0x80007744u;
            ctx->pc = 0x8000C118u;
            return;
    }

label_80007744:
    ctx->pc = 0x80007744u;
    ctx->downcount -= 6;
    // 80007744: lis     r4, -32728
    ctx->gpr[4] = ((u32)(s32)(-32728) << 16);

label_80007748:
    ctx->pc = 0x80007748u;
    // 80007748: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000774C:
    ctx->pc = 0x8000774Cu;
    // 8000774C: addi    r3, r4, -8320
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-8320);

label_80007750:
    ctx->pc = 0x80007750u;
    // 80007750: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80007754:
    ctx->pc = 0x80007754u;
    // 80007754: or   r30, r0, r0
    {
        ctx->gpr[30] = ctx->gpr[0] | ctx->gpr[0];
    }

label_80007758:
    ctx->pc = 0x80007758u;
    // 80007758: bl      0x8000A0F8
    {
            ctx->lr = 0x8000775Cu;
            ctx->pc = 0x8000A0F8u;
            return;
    }

label_8000775C:
    ctx->pc = 0x8000775Cu;
    ctx->downcount -= 2;
    // 8000775C: cmpwi   r30, 0
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

label_80007760:
    ctx->pc = 0x80007760u;
    // 80007760: bc    12, 2, 0x80007768
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80007768;
        }
    }

label_80007764:
    ctx->pc = 0x80007764u;
    ctx->downcount -= 1;
    // 80007764: or   r31, r30, r30
    {
        ctx->gpr[31] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80007768:
    ctx->pc = 0x80007768u;
    ctx->downcount -= 8;
    // 80007768: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000776C:
    ctx->pc = 0x8000776Cu;
    // 8000776C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80007770:
    ctx->pc = 0x80007770u;
    // 80007770: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80007774:
    ctx->pc = 0x80007774u;
    // 80007774: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80007778:
    ctx->pc = 0x80007778u;
    // 80007778: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000777C:
    ctx->pc = 0x8000777Cu;
    // 8000777C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80007780:
    ctx->pc = 0x80007780u;
    // 80007780: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80007784:
    ctx->pc = 0x80007784u;
    ctx->downcount -= 6;
    // 80007784: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80007788:
    ctx->pc = 0x80007788u;
    // 80007788: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000778C:
    ctx->pc = 0x8000778Cu;
    // 8000778C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80007790:
    ctx->pc = 0x80007790u;
    // 80007790: lwz     r4, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80007794:
    ctx->pc = 0x80007794u;
    // 80007794: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

label_80007798:
    ctx->pc = 0x80007798u;
    // 80007798: bl      0x8000C028
    {
            ctx->lr = 0x8000779Cu;
            ctx->pc = 0x8000C028u;
            return;
    }

label_8000779C:
    ctx->pc = 0x8000779Cu;
    ctx->downcount -= 6;
    // 8000779C: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_800077A0:
    ctx->pc = 0x800077A0u;
    // 800077A0: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800077A4:
    ctx->pc = 0x800077A4u;
    // 800077A4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_800077A8:
    ctx->pc = 0x800077A8u;
    // 800077A8: addi    r4, r4, 9128
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9128);

label_800077AC:
    ctx->pc = 0x800077ACu;
    // 800077AC: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_800077B0:
    ctx->pc = 0x800077B0u;
    // 800077B0: bl      0x8000CF98
    {
            ctx->lr = 0x800077B4u;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_800077B4:
    ctx->pc = 0x800077B4u;
    ctx->downcount -= 6;
    // 800077B4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800077B8:
    ctx->pc = 0x800077B8u;
    // 800077B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800077BC:
    ctx->pc = 0x800077BCu;
    // 800077BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800077C0:
    ctx->pc = 0x800077C0u;
    // 800077C0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_800077C4:
    ctx->pc = 0x800077C4u;
    // 800077C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_800077C8:
    ctx->pc = 0x800077C8u;
    ctx->downcount -= 22;
    // 800077C8: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800077CC:
    ctx->pc = 0x800077CCu;
    // 800077CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800077D0:
    ctx->pc = 0x800077D0u;
    // 800077D0: lis     r6, -32737
    ctx->gpr[6] = ((u32)(s32)(-32737) << 16);

label_800077D4:
    ctx->pc = 0x800077D4u;
    // 800077D4: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800077D8:
    ctx->pc = 0x800077D8u;
    // 800077D8: stmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_800077DC:
    ctx->pc = 0x800077DCu;
    // 800077DC: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800077E0:
    ctx->pc = 0x800077E0u;
    // 800077E0: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_800077E4:
    ctx->pc = 0x800077E4u;
    // 800077E4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_800077E8:
    ctx->pc = 0x800077E8u;
    // 800077E8: addi    r27, r6, -27672
    ctx->gpr[27] = ctx->gpr[6] + (u32)(s32)(-27672);

label_800077EC:
    ctx->pc = 0x800077ECu;
    // 800077EC: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_800077F0:
    ctx->pc = 0x800077F0u;
    // 800077F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800077F4:
    ctx->pc = 0x800077F4u;
    // 800077F4: b       0x80007894
    {
            goto label_80007894;
    }

label_800077F8:
    ctx->pc = 0x800077F8u;
    ctx->downcount -= 3;
    // 800077F8: lwz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800077FC:
    // 800077FC: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80007800:
    // 80007800: bc    12, 2, 0x8000780C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000780C;
        }
    }

label_80007804:
    ctx->downcount -= 2;
    // 80007804: or   r25, r31, r31
    {
        ctx->gpr[25] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80007808:
    // 80007808: b       0x80007810
    {
            goto label_80007810;
    }

label_8000780C:
    ctx->downcount -= 1;
    // 8000780C: addi    r25, r1, 8
    ctx->gpr[25] = ctx->gpr[1] + (u32)(s32)(8);

label_80007810:
    ctx->pc = 0x80007810u;
    ctx->downcount -= 7;
    // 80007810: lwz     r3, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80007814:
    // 80007814: li      r24, 4
    ctx->gpr[24] = (u32)(s32)(4);

label_80007818:
    ctx->pc = 0x80007818u;
    // 80007818: lwz     r0, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000781C:
    // 8000781C: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_80007820:
    // 80007820: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80007824:
    // 80007824: cmplw   r24, r0
    {
        u32 val_a = (u32)(ctx->gpr[24]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80007828:
    // 80007828: bc    4, 1, 0x80007834
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80007834;
        }
    }

label_8000782C:
    ctx->downcount -= 2;
    // 8000782C: li      r26, 770
    ctx->gpr[26] = (u32)(s32)(770);

label_80007830:
    // 80007830: or   r24, r0, r0
    {
        ctx->gpr[24] = ctx->gpr[0] | ctx->gpr[0];
    }

label_80007834:
    ctx->downcount -= 5;
    // 80007834: addi    r4, r3, 16
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(16);

label_80007838:
    // 80007838: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_8000783C:
    // 8000783C: or   r5, r24, r24
    {
        ctx->gpr[5] = ctx->gpr[24] | ctx->gpr[24];
    }

label_80007840:
    // 80007840: add   r4, r28, r4
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80007844:
    // 80007844: bl      0x80003130
    {
            ctx->lr = 0x80007848u;
            ctx->pc = 0x80003130u;
            return;
    }

label_80007848:
    ctx->pc = 0x80007848u;
    ctx->downcount -= 6;
    // 80007848: lwz     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000784C:
    // 8000784C: add   r0, r0, r24
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80007850:
    ctx->pc = 0x80007850u;
    // 80007850: stw     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80007854:
    ctx->pc = 0x80007854u;
    // 80007854: lwz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80007858:
    // 80007858: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000785C:
    // 8000785C: bc    4, 2, 0x80007888
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80007888;
        }
    }

label_80007860:
    ctx->downcount -= 2;
    // 80007860: cmpwi   r26, 0
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

label_80007864:
    // 80007864: bc    4, 2, 0x80007888
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80007888;
        }
    }

label_80007868:
    ctx->pc = 0x80007868u;
    ctx->downcount -= 8;
    // 80007868: lbz     r0, 3(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8000786C:
    ctx->pc = 0x8000786Cu;
    // 8000786C: stb     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80007870:
    ctx->pc = 0x80007870u;
    // 80007870: lbz     r0, 2(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(2);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80007874:
    ctx->pc = 0x80007874u;
    // 80007874: stb     r0, 1(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80007878:
    ctx->pc = 0x80007878u;
    // 80007878: lbz     r0, 1(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8000787C:
    ctx->pc = 0x8000787Cu;
    // 8000787C: stb     r0, 2(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80007880:
    ctx->pc = 0x80007880u;
    // 80007880: lbz     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80007884:
    ctx->pc = 0x80007884u;
    // 80007884: stb     r0, 3(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80007888:
    ctx->downcount -= 3;
    // 80007888: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_8000788C:
    // 8000788C: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_80007890:
    // 80007890: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_80007894:
    ctx->downcount -= 2;
    // 80007894: cmpwi   r3, 0
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

label_80007898:
    // 80007898: bc    4, 2, 0x800078A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800078A4;
        }
    }

label_8000789C:
    ctx->downcount -= 2;
    // 8000789C: cmpw    r30, r29
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(ctx->gpr[29]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800078A0:
    // 800078A0: bc    12, 0, 0x800077F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800077F8u;
                return;
            }
            goto label_800077F8;
        }
    }

label_800078A4:
    ctx->pc = 0x800078A4u;
    ctx->downcount -= 16;
    // 800078A4: lmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_800078A8:
    ctx->pc = 0x800078A8u;
    // 800078A8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800078AC:
    ctx->pc = 0x800078ACu;
    // 800078AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800078B0:
    ctx->pc = 0x800078B0u;
    // 800078B0: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_800078B4:
    ctx->pc = 0x800078B4u;
    // 800078B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_800078B8:
    ctx->pc = 0x800078B8u;
    ctx->downcount -= 20;
    // 800078B8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800078BC:
    ctx->pc = 0x800078BCu;
    // 800078BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800078C0:
    ctx->pc = 0x800078C0u;
    // 800078C0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800078C4:
    ctx->pc = 0x800078C4u;
    // 800078C4: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_800078C8:
    ctx->pc = 0x800078C8u;
    // 800078C8: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800078CC:
    ctx->pc = 0x800078CCu;
    // 800078CC: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_800078D0:
    ctx->pc = 0x800078D0u;
    // 800078D0: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_800078D4:
    ctx->pc = 0x800078D4u;
    // 800078D4: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_800078D8:
    ctx->pc = 0x800078D8u;
    // 800078D8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800078DC:
    ctx->pc = 0x800078DCu;
    // 800078DC: b       0x8000792C
    {
            goto label_8000792C;
    }

label_800078E0:
    ctx->pc = 0x800078E0u;
    ctx->downcount -= 7;
    // 800078E0: lwz     r3, 12(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800078E4:
    // 800078E4: li      r30, 1
    ctx->gpr[30] = (u32)(s32)(1);

label_800078E8:
    ctx->pc = 0x800078E8u;
    // 800078E8: lwz     r0, 8(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800078EC:
    // 800078EC: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_800078F0:
    // 800078F0: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_800078F4:
    // 800078F4: cmplw   r30, r0
    {
        u32 val_a = (u32)(ctx->gpr[30]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800078F8:
    // 800078F8: bc    4, 1, 0x80007904
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80007904;
        }
    }

label_800078FC:
    ctx->downcount -= 2;
    // 800078FC: li      r31, 770
    ctx->gpr[31] = (u32)(s32)(770);

label_80007900:
    // 80007900: or   r30, r0, r0
    {
        ctx->gpr[30] = ctx->gpr[0] | ctx->gpr[0];
    }

label_80007904:
    ctx->downcount -= 5;
    // 80007904: addi    r4, r3, 16
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(16);

label_80007908:
    // 80007908: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8000790C:
    // 8000790C: add   r3, r27, r29
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80007910:
    // 80007910: add   r4, r26, r4
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80007914:
    // 80007914: bl      0x80003130
    {
            ctx->lr = 0x80007918u;
            ctx->pc = 0x80003130u;
            return;
    }

label_80007918:
    ctx->pc = 0x80007918u;
    ctx->downcount -= 5;
    // 80007918: lwz     r0, 12(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000791C:
    // 8000791C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80007920:
    // 80007920: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_80007924:
    // 80007924: add   r0, r0, r30
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80007928:
    ctx->pc = 0x80007928u;
    // 80007928: stw     r0, 12(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000792C:
    ctx->downcount -= 2;
    // 8000792C: cmpwi   r3, 0
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

label_80007930:
    // 80007930: bc    4, 2, 0x8000793C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000793C;
        }
    }

label_80007934:
    ctx->downcount -= 2;
    // 80007934: cmpw    r29, r28
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

label_80007938:
    // 80007938: bc    12, 0, 0x800078E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800078E0u;
                return;
            }
            goto label_800078E0;
        }
    }

label_8000793C:
    ctx->pc = 0x8000793Cu;
    ctx->downcount -= 16;
    // 8000793C: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80007940:
    ctx->pc = 0x80007940u;
    // 80007940: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80007944:
    ctx->pc = 0x80007944u;
    // 80007944: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80007948:
    ctx->pc = 0x80007948u;
    // 80007948: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8000794C:
    ctx->pc = 0x8000794Cu;
    // 8000794C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80007950:
    ctx->pc = 0x80007950u;
    ctx->downcount -= 20;
    // 80007950: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80007954:
    ctx->pc = 0x80007954u;
    // 80007954: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80007958:
    ctx->pc = 0x80007958u;
    // 80007958: lis     r5, -32737
    ctx->gpr[5] = ((u32)(s32)(-32737) << 16);

label_8000795C:
    ctx->pc = 0x8000795Cu;
    // 8000795C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80007960:
    ctx->pc = 0x80007960u;
    // 80007960: stmw     r27, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80007964:
    ctx->pc = 0x80007964u;
    // 80007964: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80007968:
    ctx->pc = 0x80007968u;
    // 80007968: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8000796C:
    ctx->pc = 0x8000796Cu;
    // 8000796C: lwz     r0, -27672(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-27672);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80007970:
    ctx->pc = 0x80007970u;
    // 80007970: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80007974:
    ctx->pc = 0x80007974u;
    // 80007974: bc    12, 2, 0x80007980
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80007980;
        }
    }

label_80007978:
    ctx->pc = 0x80007978u;
    ctx->downcount -= 2;
    // 80007978: or   r31, r30, r30
    {
        ctx->gpr[31] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8000797C:
    ctx->pc = 0x8000797Cu;
    // 8000797C: b       0x80007984
    {
            goto label_80007984;
    }

label_80007980:
    ctx->pc = 0x80007980u;
    ctx->downcount -= 1;
    // 80007980: addi    r31, r1, 8
    ctx->gpr[31] = ctx->gpr[1] + (u32)(s32)(8);

label_80007984:
    ctx->pc = 0x80007984u;
    ctx->downcount -= 7;
    // 80007984: lwz     r3, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80007988:
    ctx->pc = 0x80007988u;
    // 80007988: li      r28, 8
    ctx->gpr[28] = (u32)(s32)(8);

label_8000798C:
    ctx->pc = 0x8000798Cu;
    // 8000798C: lwz     r0, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80007990:
    ctx->pc = 0x80007990u;
    // 80007990: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80007994:
    ctx->pc = 0x80007994u;
    // 80007994: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80007998:
    ctx->pc = 0x80007998u;
    // 80007998: cmplw   r28, r0
    {
        u32 val_a = (u32)(ctx->gpr[28]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000799C:
    ctx->pc = 0x8000799Cu;
    // 8000799C: bc    4, 1, 0x800079A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800079A8;
        }
    }

label_800079A0:
    ctx->pc = 0x800079A0u;
    ctx->downcount -= 2;
    // 800079A0: li      r29, 770
    ctx->gpr[29] = (u32)(s32)(770);

label_800079A4:
    ctx->pc = 0x800079A4u;
    // 800079A4: or   r28, r0, r0
    {
        ctx->gpr[28] = ctx->gpr[0] | ctx->gpr[0];
    }

label_800079A8:
    ctx->pc = 0x800079A8u;
    ctx->downcount -= 5;
    // 800079A8: addi    r4, r3, 16
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(16);

label_800079AC:
    ctx->pc = 0x800079ACu;
    // 800079AC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_800079B0:
    ctx->pc = 0x800079B0u;
    // 800079B0: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_800079B4:
    ctx->pc = 0x800079B4u;
    // 800079B4: add   r4, r27, r4
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_800079B8:
    ctx->pc = 0x800079B8u;
    // 800079B8: bl      0x80003130
    {
            ctx->lr = 0x800079BCu;
            ctx->pc = 0x80003130u;
            return;
    }

label_800079BC:
    ctx->pc = 0x800079BCu;
    ctx->downcount -= 7;
    // 800079BC: lwz     r0, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800079C0:
    ctx->pc = 0x800079C0u;
    // 800079C0: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_800079C4:
    ctx->pc = 0x800079C4u;
    // 800079C4: add   r0, r0, r28
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_800079C8:
    ctx->pc = 0x800079C8u;
    // 800079C8: stw     r0, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800079CC:
    ctx->pc = 0x800079CCu;
    // 800079CC: lwz     r0, -27672(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-27672);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800079D0:
    ctx->pc = 0x800079D0u;
    // 800079D0: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800079D4:
    ctx->pc = 0x800079D4u;
    // 800079D4: bc    4, 2, 0x80007A20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80007A20;
        }
    }

label_800079D8:
    ctx->pc = 0x800079D8u;
    ctx->downcount -= 2;
    // 800079D8: cmpwi   r29, 0
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

label_800079DC:
    ctx->pc = 0x800079DCu;
    // 800079DC: bc    4, 2, 0x80007A20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80007A20;
        }
    }

label_800079E0:
    ctx->pc = 0x800079E0u;
    ctx->downcount -= 16;
    // 800079E0: lbz     r0, 7(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(7);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800079E4:
    ctx->pc = 0x800079E4u;
    // 800079E4: stb     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800079E8:
    ctx->pc = 0x800079E8u;
    // 800079E8: lbz     r0, 6(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800079EC:
    ctx->pc = 0x800079ECu;
    // 800079EC: stb     r0, 1(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800079F0:
    ctx->pc = 0x800079F0u;
    // 800079F0: lbz     r0, 5(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800079F4:
    ctx->pc = 0x800079F4u;
    // 800079F4: stb     r0, 2(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800079F8:
    ctx->pc = 0x800079F8u;
    // 800079F8: lbz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800079FC:
    ctx->pc = 0x800079FCu;
    // 800079FC: stb     r0, 3(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80007A00:
    ctx->pc = 0x80007A00u;
    // 80007A00: lbz     r0, 3(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80007A04:
    ctx->pc = 0x80007A04u;
    // 80007A04: stb     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80007A08:
    ctx->pc = 0x80007A08u;
    // 80007A08: lbz     r0, 2(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80007A0C:
    ctx->pc = 0x80007A0Cu;
    // 80007A0C: stb     r0, 5(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(5);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80007A10:
    ctx->pc = 0x80007A10u;
    // 80007A10: lbz     r0, 1(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80007A14:
    ctx->pc = 0x80007A14u;
    // 80007A14: stb     r0, 6(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80007A18:
    ctx->pc = 0x80007A18u;
    // 80007A18: lbz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80007A1C:
    ctx->pc = 0x80007A1Cu;
    // 80007A1C: stb     r0, 7(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(7);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80007A20:
    ctx->pc = 0x80007A20u;
    ctx->downcount -= 17;
    // 80007A20: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80007A24:
    ctx->pc = 0x80007A24u;
    // 80007A24: lmw     r27, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80007A28:
    ctx->pc = 0x80007A28u;
    // 80007A28: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80007A2C:
    ctx->pc = 0x80007A2Cu;
    // 80007A2C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80007A30:
    ctx->pc = 0x80007A30u;
    // 80007A30: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80007A34:
    ctx->pc = 0x80007A34u;
    // 80007A34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80007A38:
    ctx->pc = 0x80007A38u;
    ctx->downcount -= 22;
    // 80007A38: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80007A3C:
    ctx->pc = 0x80007A3Cu;
    // 80007A3C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80007A40:
    ctx->pc = 0x80007A40u;
    // 80007A40: lis     r6, -32737
    ctx->gpr[6] = ((u32)(s32)(-32737) << 16);

label_80007A44:
    ctx->pc = 0x80007A44u;
    // 80007A44: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80007A48:
    ctx->pc = 0x80007A48u;
    // 80007A48: stmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80007A4C:
    ctx->pc = 0x80007A4Cu;
    // 80007A4C: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80007A50:
    ctx->pc = 0x80007A50u;
    // 80007A50: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80007A54:
    ctx->pc = 0x80007A54u;
    // 80007A54: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80007A58:
    ctx->pc = 0x80007A58u;
    // 80007A58: addi    r31, r6, -27672
    ctx->gpr[31] = ctx->gpr[6] + (u32)(s32)(-27672);

label_80007A5C:
    ctx->pc = 0x80007A5Cu;
    // 80007A5C: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80007A60:
    ctx->pc = 0x80007A60u;
    // 80007A60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80007A64:
    ctx->pc = 0x80007A64u;
    // 80007A64: b       0x80007B10
    {
            goto label_80007B10;
    }

label_80007A68:
    ctx->pc = 0x80007A68u;
    ctx->downcount -= 5;
    // 80007A68: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80007A6C:
    ctx->pc = 0x80007A6Cu;
    // 80007A6C: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80007A70:
    // 80007A70: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80007A74:
    ctx->pc = 0x80007A74u;
    // 80007A74: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80007A78:
    // 80007A78: bc    12, 2, 0x80007A84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80007A84;
        }
    }

label_80007A7C:
    ctx->downcount -= 2;
    // 80007A7C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80007A80:
    // 80007A80: b       0x80007AA8
    {
            goto label_80007AA8;
    }

label_80007A84:
    ctx->pc = 0x80007A84u;
    ctx->downcount -= 9;
    // 80007A84: lbz     r6, 11(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(11);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_80007A88:
    // 80007A88: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_80007A8C:
    ctx->pc = 0x80007A8Cu;
    // 80007A8C: lbz     r5, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80007A90:
    ctx->pc = 0x80007A90u;
    // 80007A90: lbz     r3, 9(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(9);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_80007A94:
    ctx->pc = 0x80007A94u;
    // 80007A94: lbz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80007A98:
    ctx->pc = 0x80007A98u;
    // 80007A98: stb     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_80007A9C:
    ctx->pc = 0x80007A9Cu;
    // 80007A9C: stb     r5, 13(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_80007AA0:
    ctx->pc = 0x80007AA0u;
    // 80007AA0: stb     r3, 14(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_80007AA4:
    ctx->pc = 0x80007AA4u;
    // 80007AA4: stb     r0, 15(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80007AA8:
    ctx->pc = 0x80007AA8u;
    ctx->downcount -= 6;
    // 80007AA8: lwz     r5, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80007AAC:
    // 80007AAC: li      r25, 4
    ctx->gpr[25] = (u32)(s32)(4);

label_80007AB0:
    // 80007AB0: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_80007AB4:
    // 80007AB4: subfic  r0, r5, 2176
    {
        u64 res = (u64)(u32)(s32)(2176) + (u64)(~ctx->gpr[5]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80007AB8:
    // 80007AB8: cmplwi  r0, 0x0004
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0004u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80007ABC:
    // 80007ABC: bc    4, 0, 0x80007AC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80007AC8;
        }
    }

label_80007AC0:
    ctx->downcount -= 2;
    // 80007AC0: li      r26, 769
    ctx->gpr[26] = (u32)(s32)(769);

label_80007AC4:
    // 80007AC4: or   r25, r0, r0
    {
        ctx->gpr[25] = ctx->gpr[0] | ctx->gpr[0];
    }

label_80007AC8:
    ctx->downcount -= 2;
    // 80007AC8: cmplwi  r25, 0x0001
    {
        u32 val_a = (u32)(ctx->gpr[25]);
        u32 val_b = (u32)(0x0001u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80007ACC:
    // 80007ACC: bc    4, 2, 0x80007AE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80007AE0;
        }
    }

label_80007AD0:
    ctx->pc = 0x80007AD0u;
    ctx->downcount -= 4;
    // 80007AD0: lbz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_80007AD4:
    // 80007AD4: addi    r0, r5, 16
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(16);

label_80007AD8:
    ctx->pc = 0x80007AD8u;
    // 80007AD8: stbx    r3, r27, r0
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[0];
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_80007ADC:
    // 80007ADC: b       0x80007AF0
    {
            goto label_80007AF0;
    }

label_80007AE0:
    ctx->downcount -= 4;
    // 80007AE0: addi    r3, r5, 16
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(16);

label_80007AE4:
    // 80007AE4: or   r5, r25, r25
    {
        ctx->gpr[5] = ctx->gpr[25] | ctx->gpr[25];
    }

label_80007AE8:
    // 80007AE8: add   r3, r27, r3
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80007AEC:
    // 80007AEC: bl      0x80003130
    {
            ctx->lr = 0x80007AF0u;
            ctx->pc = 0x80003130u;
            return;
    }

label_80007AF0:
    ctx->pc = 0x80007AF0u;
    ctx->downcount -= 8;
    // 80007AF0: lwz     r0, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80007AF4:
    // 80007AF4: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_80007AF8:
    // 80007AF8: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_80007AFC:
    // 80007AFC: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_80007B00:
    // 80007B00: add   r0, r0, r25
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[25];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80007B04:
    ctx->pc = 0x80007B04u;
    // 80007B04: stw     r0, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80007B08:
    ctx->pc = 0x80007B08u;
    // 80007B08: lwz     r0, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80007B0C:
    ctx->pc = 0x80007B0Cu;
    // 80007B0C: stw     r0, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80007B10:
    ctx->downcount -= 2;
    // 80007B10: cmpwi   r3, 0
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

label_80007B14:
    // 80007B14: bc    4, 2, 0x80007B20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80007B20;
        }
    }

label_80007B18:
    ctx->downcount -= 2;
    // 80007B18: cmpw    r29, r28
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

label_80007B1C:
    // 80007B1C: bc    12, 0, 0x80007A68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007A68u;
                return;
            }
            goto label_80007A68;
        }
    }

label_80007B20:
    ctx->pc = 0x80007B20u;
    ctx->downcount -= 16;
    // 80007B20: lmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80007B24:
    ctx->pc = 0x80007B24u;
    // 80007B24: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80007B28:
    ctx->pc = 0x80007B28u;
    // 80007B28: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80007B2C:
    ctx->pc = 0x80007B2Cu;
    // 80007B2C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80007B30:
    ctx->pc = 0x80007B30u;
    // 80007B30: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80007B34:
    ctx->pc = 0x80007B34u;
    ctx->downcount -= 3;
    // 80007B34: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_80007B38:
    ctx->pc = 0x80007B38u;
    // 80007B38: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80007B3C:
    ctx->pc = 0x80007B3Cu;
    // 80007B3C: b       0x80007B84
    {
            goto label_80007B84;
    }

label_80007B40:
    ctx->pc = 0x80007B40u;
    ctx->downcount -= 4;
    // 80007B40: lwz     r7, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80007B44:
    ctx->pc = 0x80007B44u;
    // 80007B44: lbz     r8, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read8(ctx, ea);
    }

label_80007B48:
    // 80007B48: cmplwi  r7, 0x0880
    {
        u32 val_a = (u32)(ctx->gpr[7]);
        u32 val_b = (u32)(0x0880u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80007B4C:
    // 80007B4C: bc    12, 0, 0x80007B58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80007B58;
        }
    }

label_80007B50:
    ctx->downcount -= 2;
    // 80007B50: li      r7, 769
    ctx->gpr[7] = (u32)(s32)(769);

label_80007B54:
    // 80007B54: b       0x80007B78
    {
            goto label_80007B78;
    }

label_80007B58:
    ctx->downcount -= 8;
    // 80007B58: addi    r6, r7, 1
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(1);

label_80007B5C:
    // 80007B5C: addi    r0, r7, 16
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(16);

label_80007B60:
    ctx->pc = 0x80007B60u;
    // 80007B60: stw     r6, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80007B64:
    // 80007B64: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80007B68:
    ctx->pc = 0x80007B68u;
    // 80007B68: stbx    r8, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_80007B6C:
    ctx->pc = 0x80007B6Cu;
    // 80007B6C: lwz     r6, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80007B70:
    // 80007B70: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_80007B74:
    ctx->pc = 0x80007B74u;
    // 80007B74: stw     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80007B78:
    ctx->downcount -= 3;
    // 80007B78: or   r0, r7, r7
    {
        ctx->gpr[0] = ctx->gpr[7] | ctx->gpr[7];
    }

label_80007B7C:
    // 80007B7C: addi    r9, r9, 1
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(1);

label_80007B80:
    // 80007B80: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_80007B84:
    ctx->downcount -= 2;
    // 80007B84: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80007B88:
    // 80007B88: bc    4, 2, 0x80007B94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80007B94;
        }
    }

label_80007B8C:
    ctx->downcount -= 2;
    // 80007B8C: cmpw    r9, r5
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(ctx->gpr[5]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80007B90:
    // 80007B90: bc    12, 0, 0x80007B40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007B40u;
                return;
            }
            goto label_80007B40;
        }
    }

label_80007B94:
    ctx->pc = 0x80007B94u;
    ctx->downcount -= 2;
    // 80007B94: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_80007B98:
    ctx->pc = 0x80007B98u;
    // 80007B98: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80007B9C:
    ctx->pc = 0x80007B9Cu;
    ctx->downcount -= 13;
    // 80007B9C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80007BA0:
    ctx->pc = 0x80007BA0u;
    // 80007BA0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80007BA4:
    ctx->pc = 0x80007BA4u;
    // 80007BA4: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_80007BA8:
    ctx->pc = 0x80007BA8u;
    // 80007BA8: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80007BAC:
    ctx->pc = 0x80007BACu;
    // 80007BAC: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80007BB0:
    ctx->pc = 0x80007BB0u;
    // 80007BB0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80007BB4:
    ctx->pc = 0x80007BB4u;
    // 80007BB4: stw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80007BB8:
    ctx->pc = 0x80007BB8u;
    // 80007BB8: stw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80007BBC:
    ctx->pc = 0x80007BBCu;
    // 80007BBC: lwz     r0, -27672(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-27672);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80007BC0:
    ctx->pc = 0x80007BC0u;
    // 80007BC0: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80007BC4:
    ctx->pc = 0x80007BC4u;
    // 80007BC4: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80007BC8:
    ctx->pc = 0x80007BC8u;
    // 80007BC8: stw     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80007BCC:
    ctx->pc = 0x80007BCCu;
    // 80007BCC: bc    12, 2, 0x80007BD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80007BD8;
        }
    }

label_80007BD0:
    ctx->pc = 0x80007BD0u;
    ctx->downcount -= 2;
    // 80007BD0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80007BD4:
    ctx->pc = 0x80007BD4u;
    // 80007BD4: b       0x80007C1C
    {
            goto label_80007C1C;
    }

label_80007BD8:
    ctx->pc = 0x80007BD8u;
    ctx->downcount -= 17;
    // 80007BD8: lbz     r10, 15(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(15);
        ctx->gpr[10] = mem_read8(ctx, ea);
    }

label_80007BDC:
    ctx->pc = 0x80007BDCu;
    // 80007BDC: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_80007BE0:
    ctx->pc = 0x80007BE0u;
    // 80007BE0: lbz     r9, 14(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(14);
        ctx->gpr[9] = mem_read8(ctx, ea);
    }

label_80007BE4:
    ctx->pc = 0x80007BE4u;
    // 80007BE4: lbz     r8, 13(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(13);
        ctx->gpr[8] = mem_read8(ctx, ea);
    }

label_80007BE8:
    ctx->pc = 0x80007BE8u;
    // 80007BE8: lbz     r7, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_80007BEC:
    ctx->pc = 0x80007BECu;
    // 80007BEC: lbz     r6, 11(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(11);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_80007BF0:
    ctx->pc = 0x80007BF0u;
    // 80007BF0: lbz     r5, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80007BF4:
    ctx->pc = 0x80007BF4u;
    // 80007BF4: lbz     r3, 9(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(9);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_80007BF8:
    ctx->pc = 0x80007BF8u;
    // 80007BF8: lbz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80007BFC:
    ctx->pc = 0x80007BFCu;
    // 80007BFC: stb     r10, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

label_80007C00:
    ctx->pc = 0x80007C00u;
    // 80007C00: stb     r9, 17(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(17);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_80007C04:
    ctx->pc = 0x80007C04u;
    // 80007C04: stb     r8, 18(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(18);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_80007C08:
    ctx->pc = 0x80007C08u;
    // 80007C08: stb     r7, 19(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(19);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_80007C0C:
    ctx->pc = 0x80007C0Cu;
    // 80007C0C: stb     r6, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_80007C10:
    ctx->pc = 0x80007C10u;
    // 80007C10: stb     r5, 21(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(21);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_80007C14:
    ctx->pc = 0x80007C14u;
    // 80007C14: stb     r3, 22(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(22);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_80007C18:
    ctx->pc = 0x80007C18u;
    // 80007C18: stb     r0, 23(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(23);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80007C1C:
    ctx->pc = 0x80007C1Cu;
    ctx->downcount -= 6;
    // 80007C1C: lwz     r3, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80007C20:
    ctx->pc = 0x80007C20u;
    // 80007C20: li      r29, 8
    ctx->gpr[29] = (u32)(s32)(8);

label_80007C24:
    ctx->pc = 0x80007C24u;
    // 80007C24: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80007C28:
    ctx->pc = 0x80007C28u;
    // 80007C28: subfic  r0, r3, 2176
    {
        u64 res = (u64)(u32)(s32)(2176) + (u64)(~ctx->gpr[3]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80007C2C:
    ctx->pc = 0x80007C2Cu;
    // 80007C2C: cmplwi  r0, 0x0008
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

label_80007C30:
    ctx->pc = 0x80007C30u;
    // 80007C30: bc    4, 0, 0x80007C3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80007C3C;
        }
    }

label_80007C34:
    ctx->pc = 0x80007C34u;
    ctx->downcount -= 2;
    // 80007C34: li      r30, 769
    ctx->gpr[30] = (u32)(s32)(769);

label_80007C38:
    ctx->pc = 0x80007C38u;
    // 80007C38: or   r29, r0, r0
    {
        ctx->gpr[29] = ctx->gpr[0] | ctx->gpr[0];
    }

label_80007C3C:
    ctx->pc = 0x80007C3Cu;
    ctx->downcount -= 2;
    // 80007C3C: cmplwi  r29, 0x0001
    {
        u32 val_a = (u32)(ctx->gpr[29]);
        u32 val_b = (u32)(0x0001u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80007C40:
    ctx->pc = 0x80007C40u;
    // 80007C40: bc    4, 2, 0x80007C54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80007C54;
        }
    }

label_80007C44:
    ctx->pc = 0x80007C44u;
    ctx->downcount -= 4;
    // 80007C44: lbz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80007C48:
    ctx->pc = 0x80007C48u;
    // 80007C48: add   r3, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80007C4C:
    ctx->pc = 0x80007C4Cu;
    // 80007C4C: stb     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80007C50:
    ctx->pc = 0x80007C50u;
    // 80007C50: b       0x80007C64
    {
            goto label_80007C64;
    }

label_80007C54:
    ctx->pc = 0x80007C54u;
    ctx->downcount -= 4;
    // 80007C54: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

label_80007C58:
    ctx->pc = 0x80007C58u;
    // 80007C58: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80007C5C:
    ctx->pc = 0x80007C5Cu;
    // 80007C5C: add   r3, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80007C60:
    ctx->pc = 0x80007C60u;
    // 80007C60: bl      0x80003130
    {
            ctx->lr = 0x80007C64u;
            ctx->pc = 0x80003130u;
            return;
    }

label_80007C64:
    ctx->pc = 0x80007C64u;
    ctx->downcount -= 14;
    // 80007C64: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80007C68:
    ctx->pc = 0x80007C68u;
    // 80007C68: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80007C6C:
    ctx->pc = 0x80007C6Cu;
    // 80007C6C: add   r0, r0, r29
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80007C70:
    ctx->pc = 0x80007C70u;
    // 80007C70: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80007C74:
    ctx->pc = 0x80007C74u;
    // 80007C74: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80007C78:
    ctx->pc = 0x80007C78u;
    // 80007C78: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80007C7C:
    ctx->pc = 0x80007C7Cu;
    // 80007C7C: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80007C80:
    ctx->pc = 0x80007C80u;
    // 80007C80: lwz     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80007C84:
    ctx->pc = 0x80007C84u;
    // 80007C84: lwz     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80007C88:
    ctx->pc = 0x80007C88u;
    // 80007C88: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80007C8C:
    ctx->pc = 0x80007C8Cu;
    // 80007C8C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80007C90:
    ctx->pc = 0x80007C90u;
    // 80007C90: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80007C94:
    ctx->pc = 0x80007C94u;
    // 80007C94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80007C98:
    ctx->pc = 0x80007C98u;
    ctx->downcount -= 11;
    // 80007C98: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80007C9C:
    ctx->pc = 0x80007C9Cu;
    // 80007C9C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80007CA0:
    ctx->pc = 0x80007CA0u;
    // 80007CA0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80007CA4:
    ctx->pc = 0x80007CA4u;
    // 80007CA4: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80007CA8:
    ctx->pc = 0x80007CA8u;
    // 80007CA8: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80007CAC:
    ctx->pc = 0x80007CACu;
    // 80007CAC: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80007CB0:
    ctx->pc = 0x80007CB0u;
    // 80007CB0: or.   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[30];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80007CB4:
    ctx->pc = 0x80007CB4u;
    // 80007CB4: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80007CB8:
    ctx->pc = 0x80007CB8u;
    // 80007CB8: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80007CBC:
    ctx->pc = 0x80007CBCu;
    // 80007CBC: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80007CC0:
    ctx->pc = 0x80007CC0u;
    // 80007CC0: bc    4, 2, 0x80007CCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80007CCC;
        }
    }

label_80007CC4:
    ctx->pc = 0x80007CC4u;
    ctx->downcount -= 2;
    // 80007CC4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80007CC8:
    ctx->pc = 0x80007CC8u;
    // 80007CC8: b       0x80007D08
    {
            goto label_80007D08;
    }

label_80007CCC:
    ctx->pc = 0x80007CCCu;
    ctx->downcount -= 5;
    // 80007CCC: lwz     r4, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80007CD0:
    ctx->pc = 0x80007CD0u;
    // 80007CD0: lwz     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80007CD4:
    ctx->pc = 0x80007CD4u;
    // 80007CD4: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80007CD8:
    ctx->pc = 0x80007CD8u;
    // 80007CD8: cmplw   r30, r0
    {
        u32 val_a = (u32)(ctx->gpr[30]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80007CDC:
    ctx->pc = 0x80007CDCu;
    // 80007CDC: bc    4, 1, 0x80007CE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80007CE8;
        }
    }

label_80007CE0:
    ctx->pc = 0x80007CE0u;
    ctx->downcount -= 2;
    // 80007CE0: li      r31, 770
    ctx->gpr[31] = (u32)(s32)(770);

label_80007CE4:
    ctx->pc = 0x80007CE4u;
    // 80007CE4: or   r30, r0, r0
    {
        ctx->gpr[30] = ctx->gpr[0] | ctx->gpr[0];
    }

label_80007CE8:
    ctx->pc = 0x80007CE8u;
    ctx->downcount -= 4;
    // 80007CE8: addi    r4, r4, 16
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16);

label_80007CEC:
    ctx->pc = 0x80007CECu;
    // 80007CEC: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80007CF0:
    ctx->pc = 0x80007CF0u;
    // 80007CF0: add   r4, r29, r4
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80007CF4:
    ctx->pc = 0x80007CF4u;
    // 80007CF4: bl      0x80003130
    {
            ctx->lr = 0x80007CF8u;
            ctx->pc = 0x80003130u;
            return;
    }

label_80007CF8:
    ctx->pc = 0x80007CF8u;
    ctx->downcount -= 4;
    // 80007CF8: lwz     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80007CFC:
    ctx->pc = 0x80007CFCu;
    // 80007CFC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80007D00:
    ctx->pc = 0x80007D00u;
    // 80007D00: add   r0, r0, r30
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80007D04:
    ctx->pc = 0x80007D04u;
    // 80007D04: stw     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80007D08:
    ctx->pc = 0x80007D08u;
    ctx->downcount -= 8;
    // 80007D08: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80007D0C:
    ctx->pc = 0x80007D0Cu;
    // 80007D0C: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80007D10:
    ctx->pc = 0x80007D10u;
    // 80007D10: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80007D14:
    ctx->pc = 0x80007D14u;
    // 80007D14: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80007D18:
    ctx->pc = 0x80007D18u;
    // 80007D18: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80007D1C:
    ctx->pc = 0x80007D1Cu;
    // 80007D1C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80007D20:
    ctx->pc = 0x80007D20u;
    // 80007D20: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80007D24:
    ctx->pc = 0x80007D24u;
    ctx->downcount -= 10;
    // 80007D24: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80007D28:
    ctx->pc = 0x80007D28u;
    // 80007D28: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80007D2C:
    ctx->pc = 0x80007D2Cu;
    // 80007D2C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80007D30:
    ctx->pc = 0x80007D30u;
    // 80007D30: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80007D34:
    ctx->pc = 0x80007D34u;
    // 80007D34: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80007D38:
    ctx->pc = 0x80007D38u;
    // 80007D38: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80007D3C:
    ctx->pc = 0x80007D3Cu;
    // 80007D3C: or.   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[30];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80007D40:
    ctx->pc = 0x80007D40u;
    // 80007D40: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80007D44:
    ctx->pc = 0x80007D44u;
    // 80007D44: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80007D48:
    ctx->pc = 0x80007D48u;
    // 80007D48: bc    4, 2, 0x80007D54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80007D54;
        }
    }

label_80007D4C:
    ctx->pc = 0x80007D4Cu;
    ctx->downcount -= 2;
    // 80007D4C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80007D50:
    ctx->pc = 0x80007D50u;
    // 80007D50: b       0x80007DAC
    {
            goto label_80007DAC;
    }

label_80007D54:
    ctx->pc = 0x80007D54u;
    ctx->downcount -= 4;
    // 80007D54: lwz     r3, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80007D58:
    ctx->pc = 0x80007D58u;
    // 80007D58: subfic  r0, r3, 2176
    {
        u64 res = (u64)(u32)(s32)(2176) + (u64)(~ctx->gpr[3]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80007D5C:
    ctx->pc = 0x80007D5Cu;
    // 80007D5C: cmplw   r0, r30
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[30]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80007D60:
    ctx->pc = 0x80007D60u;
    // 80007D60: bc    4, 0, 0x80007D6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80007D6C;
        }
    }

label_80007D64:
    ctx->pc = 0x80007D64u;
    ctx->downcount -= 2;
    // 80007D64: li      r31, 769
    ctx->gpr[31] = (u32)(s32)(769);

label_80007D68:
    ctx->pc = 0x80007D68u;
    // 80007D68: or   r30, r0, r0
    {
        ctx->gpr[30] = ctx->gpr[0] | ctx->gpr[0];
    }

label_80007D6C:
    ctx->pc = 0x80007D6Cu;
    ctx->downcount -= 2;
    // 80007D6C: cmplwi  r30, 0x0001
    {
        u32 val_a = (u32)(ctx->gpr[30]);
        u32 val_b = (u32)(0x0001u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80007D70:
    ctx->pc = 0x80007D70u;
    // 80007D70: bc    4, 2, 0x80007D84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80007D84;
        }
    }

label_80007D74:
    ctx->pc = 0x80007D74u;
    ctx->downcount -= 4;
    // 80007D74: lbz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80007D78:
    ctx->pc = 0x80007D78u;
    // 80007D78: add   r3, r29, r3
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80007D7C:
    ctx->pc = 0x80007D7Cu;
    // 80007D7C: stb     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80007D80:
    ctx->pc = 0x80007D80u;
    // 80007D80: b       0x80007D94
    {
            goto label_80007D94;
    }

label_80007D84:
    ctx->pc = 0x80007D84u;
    ctx->downcount -= 4;
    // 80007D84: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

label_80007D88:
    ctx->pc = 0x80007D88u;
    // 80007D88: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80007D8C:
    ctx->pc = 0x80007D8Cu;
    // 80007D8C: add   r3, r29, r3
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80007D90:
    ctx->pc = 0x80007D90u;
    // 80007D90: bl      0x80003130
    {
            ctx->lr = 0x80007D94u;
            ctx->pc = 0x80003130u;
            return;
    }

label_80007D94:
    ctx->pc = 0x80007D94u;
    ctx->downcount -= 6;
    // 80007D94: lwz     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80007D98:
    ctx->pc = 0x80007D98u;
    // 80007D98: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80007D9C:
    ctx->pc = 0x80007D9Cu;
    // 80007D9C: add   r0, r0, r30
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80007DA0:
    ctx->pc = 0x80007DA0u;
    // 80007DA0: stw     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80007DA4:
    ctx->pc = 0x80007DA4u;
    // 80007DA4: lwz     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80007DA8:
    ctx->pc = 0x80007DA8u;
    // 80007DA8: stw     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80007DAC:
    ctx->pc = 0x80007DACu;
    ctx->downcount -= 8;
    // 80007DAC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80007DB0:
    ctx->pc = 0x80007DB0u;
    // 80007DB0: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80007DB4:
    ctx->pc = 0x80007DB4u;
    // 80007DB4: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80007DB8:
    ctx->pc = 0x80007DB8u;
    // 80007DB8: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80007DBC:
    ctx->pc = 0x80007DBCu;
    // 80007DBC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80007DC0:
    ctx->pc = 0x80007DC0u;
    // 80007DC0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80007DC4:
    ctx->pc = 0x80007DC4u;
    // 80007DC4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80007DC8:
    ctx->pc = 0x80007DC8u;
    ctx->downcount -= 3;
    // 80007DC8: cmplwi  r4, 0x0880
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x0880u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80007DCC:
    ctx->pc = 0x80007DCCu;
    // 80007DCC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80007DD0:
    ctx->pc = 0x80007DD0u;
    // 80007DD0: bc    4, 1, 0x80007DDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80007DDC;
        }
    }

label_80007DD4:
    ctx->pc = 0x80007DD4u;
    ctx->downcount -= 2;
    // 80007DD4: li      r5, 769
    ctx->gpr[5] = (u32)(s32)(769);

label_80007DD8:
    ctx->pc = 0x80007DD8u;
    // 80007DD8: b       0x80007DF0
    {
            goto label_80007DF0;
    }

label_80007DDC:
    ctx->pc = 0x80007DDCu;
    ctx->downcount -= 4;
    // 80007DDC: stw     r4, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80007DE0:
    ctx->pc = 0x80007DE0u;
    // 80007DE0: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80007DE4:
    ctx->pc = 0x80007DE4u;
    // 80007DE4: cmplw   r4, r0
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80007DE8:
    ctx->pc = 0x80007DE8u;
    // 80007DE8: bc    4, 1, 0x80007DF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80007DF0;
        }
    }

label_80007DEC:
    ctx->pc = 0x80007DECu;
    ctx->downcount -= 1;
    // 80007DEC: stw     r4, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80007DF0:
    ctx->pc = 0x80007DF0u;
    ctx->downcount -= 2;
    // 80007DF0: or   r3, r5, r5
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80007DF4:
    ctx->pc = 0x80007DF4u;
    // 80007DF4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80007DF8:
    ctx->pc = 0x80007DF8u;
    ctx->downcount -= 8;
    // 80007DF8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80007DFC:
    ctx->pc = 0x80007DFCu;
    // 80007DFC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80007E00:
    ctx->pc = 0x80007E00u;
    // 80007E00: cmpwi   r4, 0
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

label_80007E04:
    ctx->pc = 0x80007E04u;
    // 80007E04: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80007E08:
    ctx->pc = 0x80007E08u;
    // 80007E08: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80007E0C:
    ctx->pc = 0x80007E0Cu;
    // 80007E0C: stw     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80007E10:
    ctx->pc = 0x80007E10u;
    // 80007E10: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80007E14:
    ctx->pc = 0x80007E14u;
    // 80007E14: bc    4, 2, 0x80007E28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80007E28;
        }
    }

label_80007E18:
    ctx->pc = 0x80007E18u;
    ctx->downcount -= 4;
    // 80007E18: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

label_80007E1C:
    ctx->pc = 0x80007E1Cu;
    // 80007E1C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80007E20:
    ctx->pc = 0x80007E20u;
    // 80007E20: li      r5, 2176
    ctx->gpr[5] = (u32)(s32)(2176);

label_80007E24:
    ctx->pc = 0x80007E24u;
    // 80007E24: bl      0x80003100
    {
            ctx->lr = 0x80007E28u;
            ctx->pc = 0x80003100u;
            return;
    }

label_80007E28:
    ctx->pc = 0x80007E28u;
    ctx->downcount -= 5;
    // 80007E28: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80007E2C:
    ctx->pc = 0x80007E2Cu;
    // 80007E2C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80007E30:
    ctx->pc = 0x80007E30u;
    // 80007E30: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80007E34:
    ctx->pc = 0x80007E34u;
    // 80007E34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80007E38:
    ctx->pc = 0x80007E38u;
    ctx->downcount -= 6;
    // 80007E38: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80007E3C:
    ctx->pc = 0x80007E3Cu;
    // 80007E3C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80007E40:
    ctx->pc = 0x80007E40u;
    // 80007E40: cmpwi   r3, -1
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

label_80007E44:
    ctx->pc = 0x80007E44u;
    // 80007E44: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80007E48:
    ctx->pc = 0x80007E48u;
    // 80007E48: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80007E4C:
    ctx->pc = 0x80007E4Cu;
    // 80007E4C: bc    12, 2, 0x80007E88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80007E88;
        }
    }

label_80007E50:
    ctx->pc = 0x80007E50u;
    ctx->downcount -= 2;
    // 80007E50: cmpwi   r3, 0
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

label_80007E54:
    ctx->pc = 0x80007E54u;
    // 80007E54: bc    12, 0, 0x80007E88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80007E88;
        }
    }

label_80007E58:
    ctx->pc = 0x80007E58u;
    ctx->downcount -= 2;
    // 80007E58: cmpwi   r3, 3
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

label_80007E5C:
    ctx->pc = 0x80007E5Cu;
    // 80007E5C: bc    4, 0, 0x80007E88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80007E88;
        }
    }

label_80007E60:
    ctx->pc = 0x80007E60u;
    ctx->downcount -= 8;
    // 80007E60: mulli   r4, r3, 2192
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)2192);

label_80007E64:
    ctx->pc = 0x80007E64u;
    // 80007E64: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_80007E68:
    ctx->pc = 0x80007E68u;
    // 80007E68: addi    r0, r3, -27664
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-27664);

label_80007E6C:
    ctx->pc = 0x80007E6Cu;
    // 80007E6C: add   r31, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_80007E70:
    ctx->pc = 0x80007E70u;
    // 80007E70: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80007E74:
    ctx->pc = 0x80007E74u;
    // 80007E74: bl      0x80009BCC
    {
            ctx->lr = 0x80007E78u;
            ctx->pc = 0x80009BCCu;
            return;
    }

label_80007E78:
    ctx->pc = 0x80007E78u;
    ctx->downcount -= 4;
    // 80007E78: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80007E7C:
    ctx->pc = 0x80007E7Cu;
    // 80007E7C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80007E80:
    ctx->pc = 0x80007E80u;
    // 80007E80: stw     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80007E84:
    ctx->pc = 0x80007E84u;
    // 80007E84: bl      0x80009BC4
    {
            ctx->lr = 0x80007E88u;
            ctx->pc = 0x80009BC4u;
            return;
    }

label_80007E88:
    ctx->pc = 0x80007E88u;
    ctx->downcount -= 6;
    // 80007E88: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80007E8C:
    ctx->pc = 0x80007E8Cu;
    // 80007E8C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80007E90:
    ctx->pc = 0x80007E90u;
    // 80007E90: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80007E94:
    ctx->pc = 0x80007E94u;
    // 80007E94: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80007E98:
    ctx->pc = 0x80007E98u;
    // 80007E98: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80007E9C:
    ctx->pc = 0x80007E9Cu;
    ctx->downcount -= 3;
    // 80007E9C: cmpwi   r3, 0
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

label_80007EA0:
    ctx->pc = 0x80007EA0u;
    // 80007EA0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80007EA4:
    ctx->pc = 0x80007EA4u;
    // 80007EA4: bc    12, 0, 0x80007EC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80007EC0;
        }
    }

label_80007EA8:
    ctx->pc = 0x80007EA8u;
    ctx->downcount -= 2;
    // 80007EA8: cmpwi   r3, 3
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

label_80007EAC:
    ctx->pc = 0x80007EACu;
    // 80007EAC: bc    4, 0, 0x80007EC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80007EC0;
        }
    }

label_80007EB0:
    ctx->pc = 0x80007EB0u;
    ctx->downcount -= 6;
    // 80007EB0: mulli   r4, r3, 2192
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)2192);

label_80007EB4:
    ctx->pc = 0x80007EB4u;
    // 80007EB4: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_80007EB8:
    ctx->pc = 0x80007EB8u;
    // 80007EB8: addi    r0, r3, -27664
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-27664);

label_80007EBC:
    ctx->pc = 0x80007EBCu;
    // 80007EBC: add   r0, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80007EC0:
    ctx->pc = 0x80007EC0u;
    ctx->downcount -= 2;
    // 80007EC0: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_80007EC4:
    ctx->pc = 0x80007EC4u;
    // 80007EC4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80007EC8:
    ctx->pc = 0x80007EC8u;
    ctx->downcount -= 21;
    // 80007EC8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80007ECC:
    ctx->pc = 0x80007ECCu;
    // 80007ECC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80007ED0:
    ctx->pc = 0x80007ED0u;
    // 80007ED0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80007ED4:
    ctx->pc = 0x80007ED4u;
    // 80007ED4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80007ED8:
    ctx->pc = 0x80007ED8u;
    // 80007ED8: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80007EDC:
    ctx->pc = 0x80007EDCu;
    // 80007EDC: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80007EE0:
    ctx->pc = 0x80007EE0u;
    // 80007EE0: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80007EE4:
    ctx->pc = 0x80007EE4u;
    // 80007EE4: li      r30, 768
    ctx->gpr[30] = (u32)(s32)(768);

label_80007EE8:
    ctx->pc = 0x80007EE8u;
    // 80007EE8: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80007EEC:
    ctx->pc = 0x80007EECu;
    // 80007EEC: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80007EF0:
    ctx->pc = 0x80007EF0u;
    // 80007EF0: b       0x80007F5C
    {
            goto label_80007F5C;
    }

label_80007EF4:
    ctx->downcount -= 3;
    // 80007EF4: cmpwi   r29, 0
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

label_80007EF8:
    // 80007EF8: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80007EFC:
    // 80007EFC: bc    12, 0, 0x80007F18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80007F18;
        }
    }

label_80007F00:
    ctx->downcount -= 2;
    // 80007F00: cmpwi   r29, 3
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

label_80007F04:
    // 80007F04: bc    4, 0, 0x80007F18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80007F18;
        }
    }

label_80007F08:
    ctx->downcount -= 6;
    // 80007F08: mulli   r4, r29, 2192
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[29] * (s64)(s32)2192);

label_80007F0C:
    // 80007F0C: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_80007F10:
    // 80007F10: addi    r0, r3, -27664
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-27664);

label_80007F14:
    // 80007F14: add   r31, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_80007F18:
    ctx->downcount -= 2;
    // 80007F18: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80007F1C:
    // 80007F1C: bl      0x80009BCC
    {
            ctx->lr = 0x80007F20u;
            ctx->pc = 0x80009BCCu;
            return;
    }

label_80007F20:
    ctx->pc = 0x80007F20u;
    ctx->downcount -= 3;
    // 80007F20: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80007F24:
    // 80007F24: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80007F28:
    // 80007F28: bc    4, 2, 0x80007F50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80007F50;
        }
    }

label_80007F2C:
    ctx->downcount -= 9;
    // 80007F2C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80007F30:
    // 80007F30: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80007F34:
    ctx->pc = 0x80007F34u;
    // 80007F34: stw     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80007F38:
    // 80007F38: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80007F3C:
    ctx->pc = 0x80007F3Cu;
    // 80007F3C: stw     r3, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80007F40:
    ctx->pc = 0x80007F40u;
    // 80007F40: stw     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80007F44:
    ctx->pc = 0x80007F44u;
    // 80007F44: stw     r31, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80007F48:
    ctx->pc = 0x80007F48u;
    // 80007F48: stw     r29, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80007F4C:
    // 80007F4C: li      r29, 3
    ctx->gpr[29] = (u32)(s32)(3);

label_80007F50:
    ctx->downcount -= 2;
    // 80007F50: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80007F54:
    // 80007F54: bl      0x80009BC4
    {
            ctx->lr = 0x80007F58u;
            ctx->pc = 0x80009BC4u;
            return;
    }

label_80007F58:
    ctx->downcount -= 1;
    // 80007F58: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_80007F5C:
    ctx->downcount -= 2;
    // 80007F5C: cmpwi   r29, 3
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

label_80007F60:
    // 80007F60: bc    12, 0, 0x80007EF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007EF4u;
                return;
            }
            goto label_80007EF4;
        }
    }

label_80007F64:
    ctx->pc = 0x80007F64u;
    ctx->downcount -= 2;
    // 80007F64: cmpwi   r30, 768
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(768);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80007F68:
    ctx->pc = 0x80007F68u;
    // 80007F68: bc    4, 2, 0x80007F78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80007F78;
        }
    }

label_80007F6C:
    ctx->pc = 0x80007F6Cu;
    ctx->downcount -= 3;
    // 80007F6C: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_80007F70:
    ctx->pc = 0x80007F70u;
    // 80007F70: addi    r3, r3, 9168
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9168);

label_80007F74:
    ctx->pc = 0x80007F74u;
    // 80007F74: bl      0x800082C0
    {
            ctx->lr = 0x80007F78u;
            goto label_800082C0;
    }

label_80007F78:
    ctx->pc = 0x80007F78u;
    ctx->downcount -= 17;
    // 80007F78: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80007F7C:
    ctx->pc = 0x80007F7Cu;
    // 80007F7C: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80007F80:
    ctx->pc = 0x80007F80u;
    // 80007F80: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80007F84:
    ctx->pc = 0x80007F84u;
    // 80007F84: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80007F88:
    ctx->pc = 0x80007F88u;
    // 80007F88: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80007F8C:
    ctx->pc = 0x80007F8Cu;
    // 80007F8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80007F90:
    ctx->pc = 0x80007F90u;
    ctx->downcount -= 10;
    // 80007F90: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80007F94:
    ctx->pc = 0x80007F94u;
    // 80007F94: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80007F98:
    ctx->pc = 0x80007F98u;
    // 80007F98: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_80007F9C:
    ctx->pc = 0x80007F9Cu;
    // 80007F9C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80007FA0:
    ctx->pc = 0x80007FA0u;
    // 80007FA0: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80007FA4:
    ctx->pc = 0x80007FA4u;
    // 80007FA4: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80007FA8:
    ctx->pc = 0x80007FA8u;
    // 80007FA8: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80007FAC:
    ctx->pc = 0x80007FACu;
    // 80007FAC: addi    r30, r3, -27664
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(-27664);

label_80007FB0:
    ctx->pc = 0x80007FB0u;
    // 80007FB0: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80007FB4:
    ctx->pc = 0x80007FB4u;
    // 80007FB4: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80007FB8:
    ctx->downcount -= 2;
    // 80007FB8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80007FBC:
    // 80007FBC: bl      0x80009BD4
    {
            ctx->lr = 0x80007FC0u;
            ctx->pc = 0x80009BD4u;
            return;
    }

label_80007FC0:
    ctx->downcount -= 2;
    // 80007FC0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80007FC4:
    // 80007FC4: bl      0x80009BCC
    {
            ctx->lr = 0x80007FC8u;
            ctx->pc = 0x80009BCCu;
            return;
    }

label_80007FC8:
    ctx->pc = 0x80007FC8u;
    ctx->downcount -= 3;
    // 80007FC8: stw     r31, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80007FCC:
    // 80007FCC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80007FD0:
    // 80007FD0: bl      0x80009BC4
    {
            ctx->lr = 0x80007FD4u;
            ctx->pc = 0x80009BC4u;
            return;
    }

label_80007FD4:
    ctx->downcount -= 4;
    // 80007FD4: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_80007FD8:
    // 80007FD8: addi    r30, r30, 2192
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(2192);

label_80007FDC:
    // 80007FDC: cmpwi   r29, 3
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

label_80007FE0:
    // 80007FE0: bc    12, 0, 0x80007FB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007FB8u;
                return;
            }
            goto label_80007FB8;
        }
    }

label_80007FE4:
    ctx->pc = 0x80007FE4u;
    ctx->downcount -= 9;
    // 80007FE4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80007FE8:
    ctx->pc = 0x80007FE8u;
    // 80007FE8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80007FEC:
    ctx->pc = 0x80007FECu;
    // 80007FEC: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80007FF0:
    ctx->pc = 0x80007FF0u;
    // 80007FF0: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80007FF4:
    ctx->pc = 0x80007FF4u;
    // 80007FF4: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80007FF8:
    ctx->pc = 0x80007FF8u;
    // 80007FF8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80007FFC:
    ctx->pc = 0x80007FFCu;
    // 80007FFC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80008000:
    ctx->pc = 0x80008000u;
    // 80008000: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80008004:
    ctx->pc = 0x80008004u;
    ctx->downcount -= 2;
    // 80008004: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80008008:
    ctx->pc = 0x80008008u;
    // 80008008: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_8000800C:
    ctx->pc = 0x8000800Cu;
    ctx->downcount -= 18;
    // 8000800C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80008010:
    ctx->pc = 0x80008010u;
    // 80008010: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80008014:
    ctx->pc = 0x80008014u;
    // 80008014: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_80008018:
    ctx->pc = 0x80008018u;
    // 80008018: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8000801C:
    ctx->pc = 0x8000801Cu;
    // 8000801C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80008020:
    ctx->pc = 0x80008020u;
    // 80008020: addi    r6, r3, -21088
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-21088);

label_80008024:
    ctx->pc = 0x80008024u;
    // 80008024: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80008028:
    ctx->pc = 0x80008028u;
    // 80008028: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_8000802C:
    ctx->pc = 0x8000802Cu;
    // 8000802C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80008030:
    ctx->pc = 0x80008030u;
    // 80008030: addi    r31, r4, 9200
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(9200);

label_80008034:
    ctx->pc = 0x80008034u;
    // 80008034: addi    r4, r31, 0
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(0);

label_80008038:
    ctx->pc = 0x80008038u;
    // 80008038: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_8000803C:
    ctx->pc = 0x8000803Cu;
    // 8000803C: stw     r3, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80008040:
    ctx->pc = 0x80008040u;
    // 80008040: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80008044:
    ctx->pc = 0x80008044u;
    // 80008044: stw     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80008048:
    ctx->pc = 0x80008048u;
    // 80008048: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000804C:
    ctx->pc = 0x8000804Cu;
    // 8000804C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80008050:
    ctx->pc = 0x80008050u;
    // 80008050: bl      0x8000CF98
    {
            ctx->lr = 0x80008054u;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_80008054:
    ctx->pc = 0x80008054u;
    ctx->downcount -= 5;
    // 80008054: addi    r4, r31, 36
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(36);

label_80008058:
    ctx->pc = 0x80008058u;
    // 80008058: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8000805C:
    ctx->pc = 0x8000805Cu;
    // 8000805C: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80008060:
    ctx->pc = 0x80008060u;
    // 80008060: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80008064:
    ctx->pc = 0x80008064u;
    // 80008064: bl      0x8000CF98
    {
            ctx->lr = 0x80008068u;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_80008068:
    ctx->pc = 0x80008068u;
    ctx->downcount -= 5;
    // 80008068: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_8000806C:
    ctx->pc = 0x8000806Cu;
    // 8000806C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80008070:
    ctx->pc = 0x80008070u;
    // 80008070: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80008074:
    ctx->pc = 0x80008074u;
    // 80008074: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80008078:
    ctx->pc = 0x80008078u;
    // 80008078: bl      0x8000CF98
    {
            ctx->lr = 0x8000807Cu;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_8000807C:
    ctx->pc = 0x8000807Cu;
    ctx->downcount -= 5;
    // 8000807C: addi    r4, r31, 108
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(108);

label_80008080:
    ctx->pc = 0x80008080u;
    // 80008080: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80008084:
    ctx->pc = 0x80008084u;
    // 80008084: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80008088:
    ctx->pc = 0x80008088u;
    // 80008088: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8000808C:
    ctx->pc = 0x8000808Cu;
    // 8000808C: bl      0x8000CF98
    {
            ctx->lr = 0x80008090u;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_80008090:
    ctx->pc = 0x80008090u;
    ctx->downcount -= 5;
    // 80008090: addi    r4, r31, 140
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(140);

label_80008094:
    ctx->pc = 0x80008094u;
    // 80008094: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80008098:
    ctx->pc = 0x80008098u;
    // 80008098: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_8000809C:
    ctx->pc = 0x8000809Cu;
    // 8000809C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_800080A0:
    ctx->pc = 0x800080A0u;
    // 800080A0: bl      0x8000CF98
    {
            ctx->lr = 0x800080A4u;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_800080A4:
    ctx->pc = 0x800080A4u;
    ctx->downcount -= 5;
    // 800080A4: addi    r4, r31, 172
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(172);

label_800080A8:
    ctx->pc = 0x800080A8u;
    // 800080A8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_800080AC:
    ctx->pc = 0x800080ACu;
    // 800080AC: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_800080B0:
    ctx->pc = 0x800080B0u;
    // 800080B0: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_800080B4:
    ctx->pc = 0x800080B4u;
    // 800080B4: bl      0x8000CF98
    {
            ctx->lr = 0x800080B8u;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_800080B8:
    ctx->pc = 0x800080B8u;
    ctx->downcount -= 7;
    // 800080B8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800080BC:
    ctx->pc = 0x800080BCu;
    // 800080BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800080C0:
    ctx->pc = 0x800080C0u;
    // 800080C0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_800080C4:
    ctx->pc = 0x800080C4u;
    // 800080C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800080C8:
    ctx->pc = 0x800080C8u;
    // 800080C8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_800080CC:
    ctx->pc = 0x800080CCu;
    // 800080CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_800080D0:
    ctx->pc = 0x800080D0u;
    ctx->downcount -= 8;
    // 800080D0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800080D4:
    ctx->pc = 0x800080D4u;
    // 800080D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800080D8:
    ctx->pc = 0x800080D8u;
    // 800080D8: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_800080DC:
    ctx->pc = 0x800080DCu;
    // 800080DC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800080E0:
    ctx->pc = 0x800080E0u;
    // 800080E0: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_800080E4:
    ctx->pc = 0x800080E4u;
    // 800080E4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800080E8:
    ctx->pc = 0x800080E8u;
    // 800080E8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_800080EC:
    ctx->pc = 0x800080ECu;
    // 800080EC: bl      0x800073E8
    {
            ctx->lr = 0x800080F0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800073E8u;
                return;
            }
            goto label_800073E8;
    }

label_800080F0:
    ctx->pc = 0x800080F0u;
    ctx->downcount -= 7;
    // 800080F0: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_800080F4:
    ctx->pc = 0x800080F4u;
    // 800080F4: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_800080F8:
    ctx->pc = 0x800080F8u;
    // 800080F8: addi    r4, r3, -21088
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-21088);

label_800080FC:
    ctx->pc = 0x800080FCu;
    // 800080FC: stw     r31, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80008100:
    ctx->pc = 0x80008100u;
    // 80008100: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80008104:
    ctx->pc = 0x80008104u;
    // 80008104: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80008108:
    ctx->pc = 0x80008108u;
    // 80008108: bl      0x80007400
    {
            ctx->lr = 0x8000810Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007400u;
                return;
            }
            goto label_80007400;
    }

label_8000810C:
    ctx->pc = 0x8000810Cu;
    ctx->downcount -= 6;
    // 8000810C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80008110:
    ctx->pc = 0x80008110u;
    // 80008110: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80008114:
    ctx->pc = 0x80008114u;
    // 80008114: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80008118:
    ctx->pc = 0x80008118u;
    // 80008118: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8000811C:
    ctx->pc = 0x8000811Cu;
    // 8000811C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80008120:
    ctx->pc = 0x80008120u;
    ctx->downcount -= 5;
    // 80008120: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80008124:
    ctx->pc = 0x80008124u;
    // 80008124: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80008128:
    ctx->pc = 0x80008128u;
    // 80008128: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000812C:
    ctx->pc = 0x8000812Cu;
    // 8000812C: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80008130:
    ctx->pc = 0x80008130u;
    // 80008130: bl      0x80008180
    {
            ctx->lr = 0x80008134u;
            goto label_80008180;
    }

label_80008134:
    ctx->pc = 0x80008134u;
    ctx->downcount -= 3;
    // 80008134: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80008138:
    ctx->pc = 0x80008138u;
    // 80008138: cmpwi   r31, -1
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000813C:
    ctx->pc = 0x8000813Cu;
    // 8000813C: bc    12, 2, 0x8000816C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000816C;
        }
    }

label_80008140:
    ctx->pc = 0x80008140u;
    ctx->downcount -= 1;
    // 80008140: bl      0x80007E9C
    {
            ctx->lr = 0x80008144u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007E9Cu;
                return;
            }
            goto label_80007E9C;
    }

label_80008144:
    ctx->pc = 0x80008144u;
    ctx->downcount -= 3;
    // 80008144: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80008148:
    ctx->pc = 0x80008148u;
    // 80008148: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_8000814C:
    ctx->pc = 0x8000814Cu;
    // 8000814C: bl      0x800073E8
    {
            ctx->lr = 0x80008150u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800073E8u;
                return;
            }
            goto label_800073E8;
    }

label_80008150:
    ctx->pc = 0x80008150u;
    ctx->downcount -= 7;
    // 80008150: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_80008154:
    ctx->pc = 0x80008154u;
    // 80008154: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_80008158:
    ctx->pc = 0x80008158u;
    // 80008158: addi    r4, r3, -21088
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-21088);

label_8000815C:
    ctx->pc = 0x8000815Cu;
    // 8000815C: stw     r31, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80008160:
    ctx->pc = 0x80008160u;
    // 80008160: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80008164:
    ctx->pc = 0x80008164u;
    // 80008164: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80008168:
    ctx->pc = 0x80008168u;
    // 80008168: bl      0x80007400
    {
            ctx->lr = 0x8000816Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007400u;
                return;
            }
            goto label_80007400;
    }

label_8000816C:
    ctx->pc = 0x8000816Cu;
    ctx->downcount -= 6;
    // 8000816C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80008170:
    ctx->pc = 0x80008170u;
    // 80008170: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80008174:
    ctx->pc = 0x80008174u;
    // 80008174: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80008178:
    ctx->pc = 0x80008178u;
    // 80008178: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8000817C:
    ctx->pc = 0x8000817Cu;
    // 8000817C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80008180:
    ctx->pc = 0x80008180u;
    ctx->downcount -= 8;
    // 80008180: stwu     r1, -2272(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-2272);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80008184:
    ctx->pc = 0x80008184u;
    // 80008184: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80008188:
    ctx->pc = 0x80008188u;
    // 80008188: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8000818C:
    ctx->pc = 0x8000818Cu;
    // 8000818C: stw     r0, 2276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(2276);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80008190:
    ctx->pc = 0x80008190u;
    // 80008190: stw     r31, 2268(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(2268);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80008194:
    ctx->pc = 0x80008194u;
    // 80008194: addi    r31, r3, 9200
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(9200);

label_80008198:
    ctx->pc = 0x80008198u;
    // 80008198: stw     r30, 2264(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(2264);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8000819C:
    ctx->pc = 0x8000819Cu;
    // 8000819C: bl      0x8000C0A0
    {
            ctx->lr = 0x800081A0u;
            ctx->pc = 0x8000C0A0u;
            return;
    }

label_800081A0:
    ctx->pc = 0x800081A0u;
    ctx->downcount -= 2;
    // 800081A0: cmpwi   r3, 0
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

label_800081A4:
    ctx->pc = 0x800081A4u;
    // 800081A4: bc    12, 1, 0x800081B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800081B0;
        }
    }

label_800081A8:
    ctx->pc = 0x800081A8u;
    ctx->downcount -= 2;
    // 800081A8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_800081AC:
    ctx->pc = 0x800081ACu;
    // 800081AC: b       0x800082A4
    {
            goto label_800082A4;
    }

label_800081B0:
    ctx->pc = 0x800081B0u;
    ctx->downcount -= 3;
    // 800081B0: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_800081B4:
    ctx->pc = 0x800081B4u;
    // 800081B4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_800081B8:
    ctx->pc = 0x800081B8u;
    // 800081B8: bl      0x80007EC8
    {
            ctx->lr = 0x800081BCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007EC8u;
                return;
            }
            goto label_80007EC8;
    }

label_800081BC:
    ctx->pc = 0x800081BCu;
    ctx->downcount -= 6;
    // 800081BC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800081C0:
    ctx->pc = 0x800081C0u;
    // 800081C0: addi    r4, r31, 208
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(208);

label_800081C4:
    ctx->pc = 0x800081C4u;
    // 800081C4: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_800081C8:
    ctx->pc = 0x800081C8u;
    // 800081C8: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_800081CC:
    ctx->pc = 0x800081CCu;
    // 800081CC: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_800081D0:
    ctx->pc = 0x800081D0u;
    // 800081D0: bl      0x8000CF98
    {
            ctx->lr = 0x800081D4u;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_800081D4:
    ctx->pc = 0x800081D4u;
    ctx->downcount -= 3;
    // 800081D4: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800081D8:
    ctx->pc = 0x800081D8u;
    // 800081D8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800081DC:
    ctx->pc = 0x800081DCu;
    // 800081DC: bl      0x80007DC8
    {
            ctx->lr = 0x800081E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007DC8u;
                return;
            }
            goto label_80007DC8;
    }

label_800081E0:
    ctx->pc = 0x800081E0u;
    ctx->downcount -= 3;
    // 800081E0: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_800081E4:
    ctx->pc = 0x800081E4u;
    // 800081E4: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_800081E8:
    ctx->pc = 0x800081E8u;
    // 800081E8: bl      0x8000C064
    {
            ctx->lr = 0x800081ECu;
            ctx->pc = 0x8000C064u;
            return;
    }

label_800081EC:
    ctx->pc = 0x800081ECu;
    ctx->downcount -= 2;
    // 800081EC: cmpwi   r3, 0
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

label_800081F0:
    ctx->pc = 0x800081F0u;
    // 800081F0: bc    4, 2, 0x80008270
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80008270;
        }
    }

label_800081F4:
    ctx->pc = 0x800081F4u;
    ctx->downcount -= 4;
    // 800081F4: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800081F8:
    ctx->pc = 0x800081F8u;
    // 800081F8: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_800081FC:
    ctx->pc = 0x800081FCu;
    // 800081FC: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80008200:
    ctx->pc = 0x80008200u;
    // 80008200: bl      0x80007B34
    {
            ctx->lr = 0x80008204u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007B34u;
                return;
            }
            goto label_80007B34;
    }

label_80008204:
    ctx->pc = 0x80008204u;
    ctx->downcount -= 4;
    // 80008204: lwz     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80008208:
    ctx->pc = 0x80008208u;
    // 80008208: lwz     r30, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8000820C:
    ctx->pc = 0x8000820Cu;
    // 8000820C: addic.  r5, r3, -64
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-64);
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

label_80008210:
    ctx->pc = 0x80008210u;
    // 80008210: bc    4, 1, 0x8000828C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000828C;
        }
    }

label_80008214:
    ctx->pc = 0x80008214u;
    ctx->downcount -= 4;
    // 80008214: addi    r4, r31, 244
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(244);

label_80008218:
    ctx->pc = 0x80008218u;
    // 80008218: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8000821C:
    ctx->pc = 0x8000821Cu;
    // 8000821C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80008220:
    ctx->pc = 0x80008220u;
    // 80008220: bl      0x8000CF98
    {
            ctx->lr = 0x80008224u;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_80008224:
    ctx->pc = 0x80008224u;
    ctx->downcount -= 4;
    // 80008224: lwz     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80008228:
    ctx->pc = 0x80008228u;
    // 80008228: addi    r3, r1, 80
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(80);

label_8000822C:
    ctx->pc = 0x8000822Cu;
    // 8000822C: addi    r4, r4, -64
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-64);

label_80008230:
    ctx->pc = 0x80008230u;
    // 80008230: bl      0x8000C064
    {
            ctx->lr = 0x80008234u;
            ctx->pc = 0x8000C064u;
            return;
    }

label_80008234:
    ctx->pc = 0x80008234u;
    ctx->downcount -= 2;
    // 80008234: cmpwi   r3, 0
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

label_80008238:
    ctx->pc = 0x80008238u;
    // 80008238: bc    4, 2, 0x80008250
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80008250;
        }
    }

label_8000823C:
    ctx->pc = 0x8000823Cu;
    ctx->downcount -= 4;
    // 8000823C: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80008240:
    ctx->pc = 0x80008240u;
    // 80008240: addi    r4, r1, 80
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(80);

label_80008244:
    ctx->pc = 0x80008244u;
    // 80008244: lwz     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80008248:
    ctx->pc = 0x80008248u;
    // 80008248: bl      0x80007B34
    {
            ctx->lr = 0x8000824Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007B34u;
                return;
            }
            goto label_80007B34;
    }

label_8000824C:
    ctx->pc = 0x8000824Cu;
    ctx->downcount -= 1;
    // 8000824C: b       0x8000828C
    {
            goto label_8000828C;
    }

label_80008250:
    ctx->pc = 0x80008250u;
    ctx->downcount -= 4;
    // 80008250: addi    r4, r31, 272
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(272);

label_80008254:
    ctx->pc = 0x80008254u;
    // 80008254: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_80008258:
    ctx->pc = 0x80008258u;
    // 80008258: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8000825C:
    ctx->pc = 0x8000825Cu;
    // 8000825C: bl      0x8000CF98
    {
            ctx->lr = 0x80008260u;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_80008260:
    ctx->pc = 0x80008260u;
    ctx->downcount -= 2;
    // 80008260: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80008264:
    ctx->pc = 0x80008264u;
    // 80008264: bl      0x80007E38
    {
            ctx->lr = 0x80008268u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007E38u;
                return;
            }
            goto label_80007E38;
    }

label_80008268:
    ctx->pc = 0x80008268u;
    ctx->downcount -= 2;
    // 80008268: li      r30, -1
    ctx->gpr[30] = (u32)(s32)(-1);

label_8000826C:
    ctx->pc = 0x8000826Cu;
    // 8000826C: b       0x8000828C
    {
            goto label_8000828C;
    }

label_80008270:
    ctx->pc = 0x80008270u;
    ctx->downcount -= 4;
    // 80008270: addi    r4, r31, 324
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(324);

label_80008274:
    ctx->pc = 0x80008274u;
    // 80008274: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_80008278:
    ctx->pc = 0x80008278u;
    // 80008278: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8000827C:
    ctx->pc = 0x8000827Cu;
    // 8000827C: bl      0x8000CF98
    {
            ctx->lr = 0x80008280u;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_80008280:
    ctx->pc = 0x80008280u;
    ctx->downcount -= 2;
    // 80008280: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80008284:
    ctx->pc = 0x80008284u;
    // 80008284: bl      0x80007E38
    {
            ctx->lr = 0x80008288u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007E38u;
                return;
            }
            goto label_80007E38;
    }

label_80008288:
    ctx->pc = 0x80008288u;
    ctx->downcount -= 1;
    // 80008288: li      r30, -1
    ctx->gpr[30] = (u32)(s32)(-1);

label_8000828C:
    ctx->pc = 0x8000828Cu;
    ctx->downcount -= 5;
    // 8000828C: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80008290:
    ctx->pc = 0x80008290u;
    // 80008290: addi    r4, r31, 364
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(364);

label_80008294:
    ctx->pc = 0x80008294u;
    // 80008294: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80008298:
    ctx->pc = 0x80008298u;
    // 80008298: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8000829C:
    ctx->pc = 0x8000829Cu;
    // 8000829C: bl      0x8000CF98
    {
            ctx->lr = 0x800082A0u;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_800082A0:
    ctx->pc = 0x800082A0u;
    ctx->downcount -= 1;
    // 800082A0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_800082A4:
    ctx->pc = 0x800082A4u;
    ctx->downcount -= 7;
    // 800082A4: lwz     r0, 2276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(2276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800082A8:
    ctx->pc = 0x800082A8u;
    // 800082A8: lwz     r31, 2268(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(2268);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_800082AC:
    ctx->pc = 0x800082ACu;
    // 800082AC: lwz     r30, 2264(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(2264);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_800082B0:
    ctx->pc = 0x800082B0u;
    // 800082B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800082B4:
    ctx->pc = 0x800082B4u;
    // 800082B4: addi    r1, r1, 2272
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(2272);

label_800082B8:
    ctx->pc = 0x800082B8u;
    // 800082B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_800082BC:
    ctx->pc = 0x800082BCu;
    ctx->downcount -= 1;
    // 800082BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_800082C0:
    ctx->pc = 0x800082C0u;
    ctx->downcount -= 10;
    // 800082C0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800082C4:
    ctx->pc = 0x800082C4u;
    // 800082C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800082C8:
    ctx->pc = 0x800082C8u;
    // 800082C8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800082CC:
    ctx->pc = 0x800082CCu;
    // 800082CC: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_800082D0:
    ctx->pc = 0x800082D0u;
    // 800082D0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_800082D4:
    ctx->pc = 0x800082D4u;
    // 800082D4: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_800082D8:
    ctx->pc = 0x800082D8u;
    // 800082D8: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_800082DC:
    ctx->pc = 0x800082DCu;
    // 800082DC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800082E0:
    ctx->pc = 0x800082E0u;
    // 800082E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800082E4:
    ctx->pc = 0x800082E4u;
    // 800082E4: b       0x80008314
    {
            goto label_80008314;
    }

label_800082E8:
    ctx->downcount -= 1;
    // 800082E8: bl      0x800093D8
    {
            ctx->lr = 0x800082ECu;
            goto label_800093D8;
    }

label_800082EC:
    ctx->pc = 0x800082ECu;
    ctx->downcount -= 5;
    // 800082EC: stb     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_800082F0:
    // 800082F0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800082F4:
    // 800082F4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800082F8:
    ctx->pc = 0x800082F8u;
    // 800082F8: stb     r31, 9(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[31]);
    }

label_800082FC:
    // 800082FC: bl      0x800093CC
    {
            ctx->lr = 0x80008300u;
            goto label_800093CC;
    }

label_80008300:
    ctx->downcount -= 2;
    // 80008300: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80008304:
    // 80008304: bl      0x8001E8F8
    {
            ctx->lr = 0x80008308u;
            ctx->pc = 0x8001E8F8u;
            return;
    }

label_80008308:
    ctx->downcount -= 2;
    // 80008308: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8000830C:
    // 8000830C: bl      0x800093CC
    {
            ctx->lr = 0x80008310u;
            goto label_800093CC;
    }

label_80008310:
    ctx->downcount -= 1;
    // 80008310: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80008314:
    ctx->downcount -= 2;
    // 80008314: cmpwi   r3, 0
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

label_80008318:
    // 80008318: bc    4, 2, 0x8000832C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000832C;
        }
    }

label_8000831C:
    ctx->pc = 0x8000831Cu;
    ctx->downcount -= 4;
    // 8000831C: lbz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80008320:
    // 80008320: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_80008324:
    // 80008324: extsb. r30, r0
    {
        ctx->gpr[30] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[30];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80008328:
    // 80008328: bc    4, 2, 0x800082E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800082E8u;
                return;
            }
            goto label_800082E8;
        }
    }

label_8000832C:
    ctx->pc = 0x8000832Cu;
    ctx->downcount -= 8;
    // 8000832C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80008330:
    ctx->pc = 0x80008330u;
    // 80008330: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80008334:
    ctx->pc = 0x80008334u;
    // 80008334: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80008338:
    ctx->pc = 0x80008338u;
    // 80008338: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8000833C:
    ctx->pc = 0x8000833Cu;
    // 8000833C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80008340:
    ctx->pc = 0x80008340u;
    // 80008340: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80008344:
    ctx->pc = 0x80008344u;
    // 80008344: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80008348:
    ctx->pc = 0x80008348u;
    ctx->downcount -= 9;
    // 80008348: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000834C:
    ctx->pc = 0x8000834Cu;
    // 8000834C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80008350:
    ctx->pc = 0x80008350u;
    // 80008350: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80008354:
    ctx->pc = 0x80008354u;
    // 80008354: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80008358:
    ctx->pc = 0x80008358u;
    // 80008358: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8000835C:
    ctx->pc = 0x8000835Cu;
    // 8000835C: li      r31, 1280
    ctx->gpr[31] = (u32)(s32)(1280);

label_80008360:
    ctx->pc = 0x80008360u;
    // 80008360: stw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80008364:
    ctx->pc = 0x80008364u;
    // 80008364: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80008368:
    ctx->pc = 0x80008368u;
    // 80008368: bl      0x80007DC8
    {
            ctx->lr = 0x8000836Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007DC8u;
                return;
            }
            goto label_80007DC8;
    }

label_8000836C:
    ctx->pc = 0x8000836Cu;
    ctx->downcount -= 6;
    // 8000836C: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_80008370:
    ctx->pc = 0x80008370u;
    // 80008370: lbz     r5, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80008374:
    ctx->pc = 0x80008374u;
    // 80008374: addi    r4, r3, 9600
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(9600);

label_80008378:
    ctx->pc = 0x80008378u;
    // 80008378: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8000837C:
    ctx->pc = 0x8000837Cu;
    // 8000837C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80008380:
    ctx->pc = 0x80008380u;
    // 80008380: bl      0x8000CF98
    {
            ctx->lr = 0x80008384u;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_80008384:
    ctx->pc = 0x80008384u;
    ctx->downcount -= 3;
    // 80008384: lbz     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80008388:
    ctx->pc = 0x80008388u;
    // 80008388: cmplwi  r0, 0x001A
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x001Au);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000838C:
    ctx->pc = 0x8000838Cu;
    // 8000838C: bc    12, 1, 0x80008484
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80008484;
        }
    }

label_80008390:
    ctx->pc = 0x80008390u;
    ctx->downcount -= 7;
    // 80008390: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_80008394:
    ctx->pc = 0x80008394u;
    // 80008394: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80008398:
    ctx->pc = 0x80008398u;
    // 80008398: addi    r3, r3, -6080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6080);

label_8000839C:
    ctx->pc = 0x8000839Cu;
    // 8000839C: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800083A0:
    ctx->pc = 0x800083A0u;
    // 800083A0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_800083A4:
    ctx->pc = 0x800083A4u;
    // 800083A4: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_800083A8:
    ctx->pc = 0x800083A8u;
    ctx->downcount -= 2;
    // 800083A8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_800083AC:
    ctx->pc = 0x800083ACu;
    // 800083AC: bl      0x80009368
    {
            ctx->lr = 0x800083B0u;
            goto label_80009368;
    }

label_800083B0:
    ctx->pc = 0x800083B0u;
    ctx->downcount -= 2;
    // 800083B0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800083B4:
    ctx->pc = 0x800083B4u;
    // 800083B4: b       0x80008484
    {
            goto label_80008484;
    }

label_800083B8:
    ctx->pc = 0x800083B8u;
    ctx->downcount -= 2;
    // 800083B8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_800083BC:
    ctx->pc = 0x800083BCu;
    // 800083BC: bl      0x800092F0
    {
            ctx->lr = 0x800083C0u;
            goto label_800092F0;
    }

label_800083C0:
    ctx->pc = 0x800083C0u;
    ctx->downcount -= 2;
    // 800083C0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800083C4:
    ctx->pc = 0x800083C4u;
    // 800083C4: b       0x80008484
    {
            goto label_80008484;
    }

label_800083C8:
    ctx->pc = 0x800083C8u;
    ctx->downcount -= 2;
    // 800083C8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_800083CC:
    ctx->pc = 0x800083CCu;
    // 800083CC: bl      0x80009298
    {
            ctx->lr = 0x800083D0u;
            goto label_80009298;
    }

label_800083D0:
    ctx->pc = 0x800083D0u;
    ctx->downcount -= 2;
    // 800083D0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800083D4:
    ctx->pc = 0x800083D4u;
    // 800083D4: b       0x80008484
    {
            goto label_80008484;
    }

label_800083D8:
    ctx->pc = 0x800083D8u;
    ctx->downcount -= 2;
    // 800083D8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_800083DC:
    ctx->pc = 0x800083DCu;
    // 800083DC: bl      0x80009240
    {
            ctx->lr = 0x800083E0u;
            goto label_80009240;
    }

label_800083E0:
    ctx->pc = 0x800083E0u;
    ctx->downcount -= 2;
    // 800083E0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800083E4:
    ctx->pc = 0x800083E4u;
    // 800083E4: b       0x80008484
    {
            goto label_80008484;
    }

label_800083E8:
    ctx->pc = 0x800083E8u;
    ctx->downcount -= 2;
    // 800083E8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_800083EC:
    ctx->pc = 0x800083ECu;
    // 800083EC: bl      0x80009238
    {
            ctx->lr = 0x800083F0u;
            goto label_80009238;
    }

label_800083F0:
    ctx->pc = 0x800083F0u;
    ctx->downcount -= 2;
    // 800083F0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800083F4:
    ctx->pc = 0x800083F4u;
    // 800083F4: b       0x80008484
    {
            goto label_80008484;
    }

label_800083F8:
    ctx->pc = 0x800083F8u;
    ctx->downcount -= 2;
    // 800083F8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_800083FC:
    ctx->pc = 0x800083FCu;
    // 800083FC: bl      0x80009230
    {
            ctx->lr = 0x80008400u;
            goto label_80009230;
    }

label_80008400:
    ctx->pc = 0x80008400u;
    ctx->downcount -= 2;
    // 80008400: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80008404:
    ctx->pc = 0x80008404u;
    // 80008404: b       0x80008484
    {
            goto label_80008484;
    }

label_80008408:
    ctx->pc = 0x80008408u;
    ctx->downcount -= 2;
    // 80008408: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8000840C:
    ctx->pc = 0x8000840Cu;
    // 8000840C: bl      0x80009044
    {
            ctx->lr = 0x80008410u;
            goto label_80009044;
    }

label_80008410:
    ctx->pc = 0x80008410u;
    ctx->downcount -= 2;
    // 80008410: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80008414:
    ctx->pc = 0x80008414u;
    // 80008414: b       0x80008484
    {
            goto label_80008484;
    }

label_80008418:
    ctx->pc = 0x80008418u;
    ctx->downcount -= 2;
    // 80008418: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8000841C:
    ctx->pc = 0x8000841Cu;
    // 8000841C: bl      0x80008E50
    {
            ctx->lr = 0x80008420u;
            goto label_80008E50;
    }

label_80008420:
    ctx->pc = 0x80008420u;
    ctx->downcount -= 2;
    // 80008420: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80008424:
    ctx->pc = 0x80008424u;
    // 80008424: b       0x80008484
    {
            goto label_80008484;
    }

label_80008428:
    ctx->pc = 0x80008428u;
    ctx->downcount -= 2;
    // 80008428: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8000842C:
    ctx->pc = 0x8000842Cu;
    // 8000842C: bl      0x80008B70
    {
            ctx->lr = 0x80008430u;
            goto label_80008B70;
    }

label_80008430:
    ctx->pc = 0x80008430u;
    ctx->downcount -= 2;
    // 80008430: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80008434:
    ctx->pc = 0x80008434u;
    // 80008434: b       0x80008484
    {
            goto label_80008484;
    }

label_80008438:
    ctx->pc = 0x80008438u;
    ctx->downcount -= 2;
    // 80008438: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8000843C:
    ctx->pc = 0x8000843Cu;
    // 8000843C: bl      0x800088E0
    {
            ctx->lr = 0x80008440u;
            goto label_800088E0;
    }

label_80008440:
    ctx->pc = 0x80008440u;
    ctx->downcount -= 2;
    // 80008440: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80008444:
    ctx->pc = 0x80008444u;
    // 80008444: b       0x80008484
    {
            goto label_80008484;
    }

label_80008448:
    ctx->pc = 0x80008448u;
    ctx->downcount -= 2;
    // 80008448: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8000844C:
    ctx->pc = 0x8000844Cu;
    // 8000844C: bl      0x80008830
    {
            ctx->lr = 0x80008450u;
            goto label_80008830;
    }

label_80008450:
    ctx->pc = 0x80008450u;
    ctx->downcount -= 2;
    // 80008450: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80008454:
    ctx->pc = 0x80008454u;
    // 80008454: b       0x80008484
    {
            goto label_80008484;
    }

label_80008458:
    ctx->pc = 0x80008458u;
    ctx->downcount -= 2;
    // 80008458: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8000845C:
    ctx->pc = 0x8000845Cu;
    // 8000845C: bl      0x80008610
    {
            ctx->lr = 0x80008460u;
            goto label_80008610;
    }

label_80008460:
    ctx->pc = 0x80008460u;
    ctx->downcount -= 2;
    // 80008460: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80008464:
    ctx->pc = 0x80008464u;
    // 80008464: b       0x80008484
    {
            goto label_80008484;
    }

label_80008468:
    ctx->pc = 0x80008468u;
    ctx->downcount -= 2;
    // 80008468: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8000846C:
    ctx->pc = 0x8000846Cu;
    // 8000846C: bl      0x80008568
    {
            ctx->lr = 0x80008470u;
            goto label_80008568;
    }

label_80008470:
    ctx->pc = 0x80008470u;
    ctx->downcount -= 2;
    // 80008470: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80008474:
    ctx->pc = 0x80008474u;
    // 80008474: b       0x80008484
    {
            goto label_80008484;
    }

label_80008478:
    ctx->pc = 0x80008478u;
    ctx->downcount -= 2;
    // 80008478: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8000847C:
    ctx->pc = 0x8000847Cu;
    // 8000847C: bl      0x800084C0
    {
            ctx->lr = 0x80008480u;
            goto label_800084C0;
    }

label_80008480:
    ctx->pc = 0x80008480u;
    ctx->downcount -= 1;
    // 80008480: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80008484:
    ctx->pc = 0x80008484u;
    ctx->downcount -= 6;
    // 80008484: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_80008488:
    ctx->pc = 0x80008488u;
    // 80008488: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8000848C:
    ctx->pc = 0x8000848Cu;
    // 8000848C: addi    r4, r3, 9628
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(9628);

label_80008490:
    ctx->pc = 0x80008490u;
    // 80008490: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80008494:
    ctx->pc = 0x80008494u;
    // 80008494: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80008498:
    ctx->pc = 0x80008498u;
    // 80008498: bl      0x8000CF98
    {
            ctx->lr = 0x8000849Cu;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_8000849C:
    ctx->pc = 0x8000849Cu;
    ctx->downcount -= 8;
    // 8000849C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800084A0:
    ctx->pc = 0x800084A0u;
    // 800084A0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_800084A4:
    ctx->pc = 0x800084A4u;
    // 800084A4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_800084A8:
    ctx->pc = 0x800084A8u;
    // 800084A8: lwz     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_800084AC:
    ctx->pc = 0x800084ACu;
    // 800084AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800084B0:
    ctx->pc = 0x800084B0u;
    // 800084B0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_800084B4:
    ctx->pc = 0x800084B4u;
    // 800084B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_800084B8:
    ctx->pc = 0x800084B8u;
    ctx->downcount -= 2;
    // 800084B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800084BC:
    ctx->pc = 0x800084BCu;
    // 800084BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_800084C0:
    ctx->pc = 0x800084C0u;
    ctx->downcount -= 11;
    // 800084C0: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800084C4:
    ctx->pc = 0x800084C4u;
    // 800084C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800084C8:
    ctx->pc = 0x800084C8u;
    // 800084C8: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_800084CC:
    ctx->pc = 0x800084CCu;
    // 800084CC: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800084D0:
    ctx->pc = 0x800084D0u;
    // 800084D0: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_800084D4:
    ctx->pc = 0x800084D4u;
    // 800084D4: addi    r31, r4, 9664
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(9664);

label_800084D8:
    ctx->pc = 0x800084D8u;
    // 800084D8: stw     r30, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_800084DC:
    ctx->pc = 0x800084DCu;
    // 800084DC: lbz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800084E0:
    ctx->pc = 0x800084E0u;
    // 800084E0: lbz     r30, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[30] = mem_read8(ctx, ea);
    }

label_800084E4:
    ctx->pc = 0x800084E4u;
    // 800084E4: cmplwi  r0, 0x0001
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

label_800084E8:
    ctx->pc = 0x800084E8u;
    // 800084E8: bc    4, 2, 0x80008518
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80008518;
        }
    }

label_800084EC:
    ctx->pc = 0x800084ECu;
    ctx->downcount -= 2;
    // 800084EC: addi    r3, r31, 0
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(0);

label_800084F0:
    ctx->pc = 0x800084F0u;
    // 800084F0: bl      0x800082C0
    {
            ctx->lr = 0x800084F4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800082C0u;
                return;
            }
            goto label_800082C0;
    }

label_800084F4:
    ctx->pc = 0x800084F4u;
    ctx->downcount -= 2;
    // 800084F4: cmplwi  r30, 0x0000
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

label_800084F8:
    ctx->pc = 0x800084F8u;
    // 800084F8: bc    12, 2, 0x80008508
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80008508;
        }
    }

label_800084FC:
    ctx->pc = 0x800084FCu;
    ctx->downcount -= 2;
    // 800084FC: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_80008500:
    ctx->pc = 0x80008500u;
    // 80008500: bl      0x800082C0
    {
            ctx->lr = 0x80008504u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800082C0u;
                return;
            }
            goto label_800082C0;
    }

label_80008504:
    ctx->pc = 0x80008504u;
    ctx->downcount -= 1;
    // 80008504: b       0x80008510
    {
            goto label_80008510;
    }

label_80008508:
    ctx->pc = 0x80008508u;
    ctx->downcount -= 2;
    // 80008508: addi    r3, r31, 40
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(40);

label_8000850C:
    ctx->pc = 0x8000850Cu;
    // 8000850C: bl      0x800082C0
    {
            ctx->lr = 0x80008510u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800082C0u;
                return;
            }
            goto label_800082C0;
    }

label_80008510:
    ctx->pc = 0x80008510u;
    ctx->downcount -= 2;
    // 80008510: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80008514:
    ctx->pc = 0x80008514u;
    // 80008514: bl      0x8000C450
    {
            ctx->lr = 0x80008518u;
            ctx->pc = 0x8000C450u;
            return;
    }

label_80008518:
    ctx->pc = 0x80008518u;
    ctx->downcount -= 4;
    // 80008518: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8000851C:
    ctx->pc = 0x8000851Cu;
    // 8000851C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80008520:
    ctx->pc = 0x80008520u;
    // 80008520: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80008524:
    ctx->pc = 0x80008524u;
    // 80008524: bl      0x800050B4
    {
            ctx->lr = 0x80008528u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_80008528:
    ctx->pc = 0x80008528u;
    ctx->downcount -= 9;
    // 80008528: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_8000852C:
    ctx->pc = 0x8000852Cu;
    // 8000852C: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80008530:
    ctx->pc = 0x80008530u;
    // 80008530: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80008534:
    ctx->pc = 0x80008534u;
    // 80008534: stb     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_80008538:
    ctx->pc = 0x80008538u;
    // 80008538: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8000853C:
    ctx->pc = 0x8000853Cu;
    // 8000853C: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_80008540:
    ctx->pc = 0x80008540u;
    // 80008540: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80008544:
    ctx->pc = 0x80008544u;
    // 80008544: stb     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80008548:
    ctx->pc = 0x80008548u;
    // 80008548: bl      0x8000C028
    {
            ctx->lr = 0x8000854Cu;
            ctx->pc = 0x8000C028u;
            return;
    }

label_8000854C:
    ctx->pc = 0x8000854Cu;
    ctx->downcount -= 8;
    // 8000854C: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80008550:
    ctx->pc = 0x80008550u;
    // 80008550: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80008554:
    ctx->pc = 0x80008554u;
    // 80008554: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80008558:
    ctx->pc = 0x80008558u;
    // 80008558: lwz     r30, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8000855C:
    ctx->pc = 0x8000855Cu;
    // 8000855C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80008560:
    ctx->pc = 0x80008560u;
    // 80008560: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_80008564:
    ctx->pc = 0x80008564u;
    // 80008564: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80008568:
    ctx->pc = 0x80008568u;
    ctx->downcount -= 5;
    // 80008568: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000856C:
    ctx->pc = 0x8000856Cu;
    // 8000856C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80008570:
    ctx->pc = 0x80008570u;
    // 80008570: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80008574:
    ctx->pc = 0x80008574u;
    // 80008574: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80008578:
    ctx->pc = 0x80008578u;
    // 80008578: bl      0x8000A108
    {
            ctx->lr = 0x8000857Cu;
            ctx->pc = 0x8000A108u;
            return;
    }

label_8000857C:
    ctx->pc = 0x8000857Cu;
    ctx->downcount -= 2;
    // 8000857C: cmpwi   r3, 1796
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(1796);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80008580:
    ctx->pc = 0x80008580u;
    // 80008580: bc    12, 2, 0x800085AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800085AC;
        }
    }

label_80008584:
    ctx->pc = 0x80008584u;
    ctx->downcount -= 1;
    // 80008584: bc    4, 0, 0x80008594
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80008594;
        }
    }

label_80008588:
    ctx->pc = 0x80008588u;
    ctx->downcount -= 2;
    // 80008588: cmpwi   r3, 0
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

label_8000858C:
    ctx->pc = 0x8000858Cu;
    // 8000858C: bc    12, 2, 0x800085A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800085A4;
        }
    }

label_80008590:
    ctx->pc = 0x80008590u;
    ctx->downcount -= 1;
    // 80008590: b       0x800085C4
    {
            goto label_800085C4;
    }

label_80008594:
    ctx->pc = 0x80008594u;
    ctx->downcount -= 2;
    // 80008594: cmpwi   r3, 1798
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(1798);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80008598:
    ctx->pc = 0x80008598u;
    // 80008598: bc    12, 2, 0x800085BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800085BC;
        }
    }

label_8000859C:
    ctx->pc = 0x8000859Cu;
    ctx->downcount -= 1;
    // 8000859C: bc    4, 0, 0x800085C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800085C4;
        }
    }

label_800085A0:
    ctx->pc = 0x800085A0u;
    ctx->downcount -= 1;
    // 800085A0: b       0x800085B4
    {
            goto label_800085B4;
    }

label_800085A4:
    ctx->pc = 0x800085A4u;
    ctx->downcount -= 2;
    // 800085A4: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_800085A8:
    ctx->pc = 0x800085A8u;
    // 800085A8: b       0x800085C8
    {
            goto label_800085C8;
    }

label_800085AC:
    ctx->pc = 0x800085ACu;
    ctx->downcount -= 2;
    // 800085AC: li      r31, 33
    ctx->gpr[31] = (u32)(s32)(33);

label_800085B0:
    ctx->pc = 0x800085B0u;
    // 800085B0: b       0x800085C8
    {
            goto label_800085C8;
    }

label_800085B4:
    ctx->pc = 0x800085B4u;
    ctx->downcount -= 2;
    // 800085B4: li      r31, 34
    ctx->gpr[31] = (u32)(s32)(34);

label_800085B8:
    ctx->pc = 0x800085B8u;
    // 800085B8: b       0x800085C8
    {
            goto label_800085C8;
    }

label_800085BC:
    ctx->pc = 0x800085BCu;
    ctx->downcount -= 2;
    // 800085BC: li      r31, 32
    ctx->gpr[31] = (u32)(s32)(32);

label_800085C0:
    ctx->pc = 0x800085C0u;
    // 800085C0: b       0x800085C8
    {
            goto label_800085C8;
    }

label_800085C4:
    ctx->pc = 0x800085C4u;
    ctx->downcount -= 1;
    // 800085C4: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_800085C8:
    ctx->pc = 0x800085C8u;
    ctx->downcount -= 4;
    // 800085C8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_800085CC:
    ctx->pc = 0x800085CCu;
    // 800085CC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800085D0:
    ctx->pc = 0x800085D0u;
    // 800085D0: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_800085D4:
    ctx->pc = 0x800085D4u;
    // 800085D4: bl      0x800050B4
    {
            ctx->lr = 0x800085D8u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_800085D8:
    ctx->pc = 0x800085D8u;
    ctx->downcount -= 8;
    // 800085D8: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_800085DC:
    ctx->pc = 0x800085DCu;
    // 800085DC: li      r0, 64
    ctx->gpr[0] = (u32)(s32)(64);

label_800085E0:
    ctx->pc = 0x800085E0u;
    // 800085E0: stb     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_800085E4:
    ctx->pc = 0x800085E4u;
    // 800085E4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_800085E8:
    ctx->pc = 0x800085E8u;
    // 800085E8: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_800085EC:
    ctx->pc = 0x800085ECu;
    // 800085EC: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800085F0:
    ctx->pc = 0x800085F0u;
    // 800085F0: stb     r31, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write8(ctx, ea, (u8)ctx->gpr[31]);
    }

label_800085F4:
    ctx->pc = 0x800085F4u;
    // 800085F4: bl      0x8000C028
    {
            ctx->lr = 0x800085F8u;
            ctx->pc = 0x8000C028u;
            return;
    }

label_800085F8:
    ctx->pc = 0x800085F8u;
    ctx->downcount -= 7;
    // 800085F8: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800085FC:
    ctx->pc = 0x800085FCu;
    // 800085FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80008600:
    ctx->pc = 0x80008600u;
    // 80008600: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80008604:
    ctx->pc = 0x80008604u;
    // 80008604: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80008608:
    ctx->pc = 0x80008608u;
    // 80008608: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_8000860C:
    ctx->pc = 0x8000860Cu;
    // 8000860C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80008610:
    ctx->pc = 0x80008610u;
    ctx->downcount -= 17;
    // 80008610: stwu     r1, -352(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-352);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80008614:
    ctx->pc = 0x80008614u;
    // 80008614: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80008618:
    ctx->pc = 0x80008618u;
    // 80008618: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8000861C:
    ctx->pc = 0x8000861Cu;
    // 8000861C: stw     r0, 356(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(356);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80008620:
    ctx->pc = 0x80008620u;
    // 80008620: stmw     r27, 332(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(332);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80008624:
    ctx->pc = 0x80008624u;
    // 80008624: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80008628:
    ctx->pc = 0x80008628u;
    // 80008628: bl      0x80007DC8
    {
            ctx->lr = 0x8000862Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007DC8u;
                return;
            }
            goto label_80007DC8;
    }

label_8000862C:
    ctx->pc = 0x8000862Cu;
    ctx->downcount -= 5;
    // 8000862C: lbz     r31, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        ctx->gpr[31] = mem_read8(ctx, ea);
    }

label_80008630:
    ctx->pc = 0x80008630u;
    // 80008630: lwz     r29, 32(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(32);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80008634:
    ctx->pc = 0x80008634u;
    // 80008634: cmpwi   r31, 16
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

label_80008638:
    ctx->pc = 0x80008638u;
    // 80008638: lwz     r28, 36(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(36);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_8000863C:
    ctx->pc = 0x8000863Cu;
    // 8000863C: bc    12, 2, 0x80008668
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80008668;
        }
    }

label_80008640:
    ctx->pc = 0x80008640u;
    ctx->downcount -= 1;
    // 80008640: bc    4, 0, 0x8000865C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000865C;
        }
    }

label_80008644:
    ctx->pc = 0x80008644u;
    ctx->downcount -= 2;
    // 80008644: cmpwi   r31, 1
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

label_80008648:
    ctx->pc = 0x80008648u;
    // 80008648: bc    12, 2, 0x800086B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800086B0;
        }
    }

label_8000864C:
    ctx->pc = 0x8000864Cu;
    ctx->downcount -= 1;
    // 8000864C: bc    4, 0, 0x80008700
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80008700;
        }
    }

label_80008650:
    ctx->pc = 0x80008650u;
    ctx->downcount -= 2;
    // 80008650: cmpwi   r31, 0
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

label_80008654:
    ctx->pc = 0x80008654u;
    // 80008654: bc    4, 0, 0x80008668
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80008668;
        }
    }

label_80008658:
    ctx->pc = 0x80008658u;
    ctx->downcount -= 1;
    // 80008658: b       0x80008700
    {
            goto label_80008700;
    }

label_8000865C:
    ctx->pc = 0x8000865Cu;
    ctx->downcount -= 2;
    // 8000865C: cmpwi   r31, 18
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(18);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80008660:
    ctx->pc = 0x80008660u;
    // 80008660: bc    4, 0, 0x80008700
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80008700;
        }
    }

label_80008664:
    ctx->pc = 0x80008664u;
    ctx->downcount -= 1;
    // 80008664: b       0x800086B0
    {
            goto label_800086B0;
    }

label_80008668:
    ctx->pc = 0x80008668u;
    ctx->downcount -= 3;
    // 80008668: lbz     r30, 28(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(28);
        ctx->gpr[30] = mem_read8(ctx, ea);
    }

label_8000866C:
    ctx->pc = 0x8000866Cu;
    // 8000866C: cmplwi  r30, 0x0001
    {
        u32 val_a = (u32)(ctx->gpr[30]);
        u32 val_b = (u32)(0x0001u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80008670:
    ctx->pc = 0x80008670u;
    // 80008670: bc    4, 0, 0x8000873C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000873C;
        }
    }

label_80008674:
    ctx->pc = 0x80008674u;
    ctx->downcount -= 4;
    // 80008674: addi    r3, r1, 264
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(264);

label_80008678:
    ctx->pc = 0x80008678u;
    // 80008678: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8000867C:
    ctx->pc = 0x8000867Cu;
    // 8000867C: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80008680:
    ctx->pc = 0x80008680u;
    // 80008680: bl      0x800050B4
    {
            ctx->lr = 0x80008684u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_80008684:
    ctx->pc = 0x80008684u;
    ctx->downcount -= 9;
    // 80008684: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_80008688:
    ctx->pc = 0x80008688u;
    // 80008688: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_8000868C:
    ctx->pc = 0x8000868Cu;
    // 8000868C: li      r0, 17
    ctx->gpr[0] = (u32)(s32)(17);

label_80008690:
    ctx->pc = 0x80008690u;
    // 80008690: stb     r3, 268(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(268);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_80008694:
    ctx->pc = 0x80008694u;
    // 80008694: addi    r3, r1, 264
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(264);

label_80008698:
    ctx->pc = 0x80008698u;
    // 80008698: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_8000869C:
    ctx->pc = 0x8000869Cu;
    // 8000869C: stw     r5, 264(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_800086A0:
    ctx->pc = 0x800086A0u;
    // 800086A0: stb     r0, 272(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800086A4:
    ctx->pc = 0x800086A4u;
    // 800086A4: bl      0x8000C028
    {
            ctx->lr = 0x800086A8u;
            ctx->pc = 0x8000C028u;
            return;
    }

label_800086A8:
    ctx->pc = 0x800086A8u;
    ctx->downcount -= 2;
    // 800086A8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800086AC:
    ctx->pc = 0x800086ACu;
    // 800086AC: b       0x8000881C
    {
            goto label_8000881C;
    }

label_800086B0:
    ctx->pc = 0x800086B0u;
    ctx->downcount -= 1;
    // 800086B0: bl      0x8000A340
    {
            ctx->lr = 0x800086B4u;
            ctx->pc = 0x8000A340u;
            return;
    }

label_800086B4:
    ctx->pc = 0x800086B4u;
    ctx->downcount -= 2;
    // 800086B4: cmplw   r3, r29
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(ctx->gpr[29]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800086B8:
    ctx->pc = 0x800086B8u;
    // 800086B8: bc    12, 0, 0x800086C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800086C4;
        }
    }

label_800086BC:
    ctx->pc = 0x800086BCu;
    ctx->downcount -= 2;
    // 800086BC: cmplw   r3, r28
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(ctx->gpr[28]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800086C0:
    ctx->pc = 0x800086C0u;
    // 800086C0: bc    4, 1, 0x8000873C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000873C;
        }
    }

label_800086C4:
    ctx->pc = 0x800086C4u;
    ctx->downcount -= 4;
    // 800086C4: addi    r3, r1, 200
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(200);

label_800086C8:
    ctx->pc = 0x800086C8u;
    // 800086C8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800086CC:
    ctx->pc = 0x800086CCu;
    // 800086CC: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_800086D0:
    ctx->pc = 0x800086D0u;
    // 800086D0: bl      0x800050B4
    {
            ctx->lr = 0x800086D4u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_800086D4:
    ctx->pc = 0x800086D4u;
    ctx->downcount -= 9;
    // 800086D4: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_800086D8:
    ctx->pc = 0x800086D8u;
    // 800086D8: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_800086DC:
    ctx->pc = 0x800086DCu;
    // 800086DC: li      r0, 17
    ctx->gpr[0] = (u32)(s32)(17);

label_800086E0:
    ctx->pc = 0x800086E0u;
    // 800086E0: stb     r3, 204(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_800086E4:
    ctx->pc = 0x800086E4u;
    // 800086E4: addi    r3, r1, 200
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(200);

label_800086E8:
    ctx->pc = 0x800086E8u;
    // 800086E8: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_800086EC:
    ctx->pc = 0x800086ECu;
    // 800086EC: stw     r5, 200(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_800086F0:
    ctx->pc = 0x800086F0u;
    // 800086F0: stb     r0, 208(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800086F4:
    ctx->pc = 0x800086F4u;
    // 800086F4: bl      0x8000C028
    {
            ctx->lr = 0x800086F8u;
            ctx->pc = 0x8000C028u;
            return;
    }

label_800086F8:
    ctx->pc = 0x800086F8u;
    ctx->downcount -= 2;
    // 800086F8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800086FC:
    ctx->pc = 0x800086FCu;
    // 800086FC: b       0x8000881C
    {
            goto label_8000881C;
    }

label_80008700:
    ctx->pc = 0x80008700u;
    ctx->downcount -= 4;
    // 80008700: addi    r3, r1, 136
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(136);

label_80008704:
    ctx->pc = 0x80008704u;
    // 80008704: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80008708:
    ctx->pc = 0x80008708u;
    // 80008708: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_8000870C:
    ctx->pc = 0x8000870Cu;
    // 8000870C: bl      0x800050B4
    {
            ctx->lr = 0x80008710u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_80008710:
    ctx->pc = 0x80008710u;
    ctx->downcount -= 9;
    // 80008710: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_80008714:
    ctx->pc = 0x80008714u;
    // 80008714: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80008718:
    ctx->pc = 0x80008718u;
    // 80008718: li      r0, 18
    ctx->gpr[0] = (u32)(s32)(18);

label_8000871C:
    ctx->pc = 0x8000871Cu;
    // 8000871C: stb     r3, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_80008720:
    ctx->pc = 0x80008720u;
    // 80008720: addi    r3, r1, 136
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(136);

label_80008724:
    ctx->pc = 0x80008724u;
    // 80008724: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_80008728:
    ctx->pc = 0x80008728u;
    // 80008728: stw     r5, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8000872C:
    ctx->pc = 0x8000872Cu;
    // 8000872C: stb     r0, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80008730:
    ctx->pc = 0x80008730u;
    // 80008730: bl      0x8000C028
    {
            ctx->lr = 0x80008734u;
            ctx->pc = 0x8000C028u;
            return;
    }

label_80008734:
    ctx->pc = 0x80008734u;
    ctx->downcount -= 2;
    // 80008734: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80008738:
    ctx->pc = 0x80008738u;
    // 80008738: b       0x8000881C
    {
            goto label_8000881C;
    }

label_8000873C:
    ctx->pc = 0x8000873Cu;
    ctx->downcount -= 1;
    // 8000873C: bl      0x8000A130
    {
            ctx->lr = 0x80008740u;
            ctx->pc = 0x8000A130u;
            return;
    }

label_80008740:
    ctx->pc = 0x80008740u;
    ctx->downcount -= 2;
    // 80008740: cmpwi   r3, 0
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

label_80008744:
    ctx->pc = 0x80008744u;
    // 80008744: bc    4, 2, 0x80008784
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80008784;
        }
    }

label_80008748:
    ctx->pc = 0x80008748u;
    ctx->downcount -= 4;
    // 80008748: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_8000874C:
    ctx->pc = 0x8000874Cu;
    // 8000874C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80008750:
    ctx->pc = 0x80008750u;
    // 80008750: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80008754:
    ctx->pc = 0x80008754u;
    // 80008754: bl      0x800050B4
    {
            ctx->lr = 0x80008758u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_80008758:
    ctx->pc = 0x80008758u;
    ctx->downcount -= 9;
    // 80008758: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_8000875C:
    ctx->pc = 0x8000875Cu;
    // 8000875C: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80008760:
    ctx->pc = 0x80008760u;
    // 80008760: li      r0, 22
    ctx->gpr[0] = (u32)(s32)(22);

label_80008764:
    ctx->pc = 0x80008764u;
    // 80008764: stb     r3, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_80008768:
    ctx->pc = 0x80008768u;
    // 80008768: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_8000876C:
    ctx->pc = 0x8000876Cu;
    // 8000876C: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_80008770:
    ctx->pc = 0x80008770u;
    // 80008770: stw     r5, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80008774:
    ctx->pc = 0x80008774u;
    // 80008774: stb     r0, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80008778:
    ctx->pc = 0x80008778u;
    // 80008778: bl      0x8000C028
    {
            ctx->lr = 0x8000877Cu;
            ctx->pc = 0x8000C028u;
            return;
    }

label_8000877C:
    ctx->pc = 0x8000877Cu;
    ctx->downcount -= 2;
    // 8000877C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80008780:
    ctx->pc = 0x80008780u;
    // 80008780: b       0x8000881C
    {
            goto label_8000881C;
    }

label_80008784:
    ctx->pc = 0x80008784u;
    ctx->downcount -= 4;
    // 80008784: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80008788:
    ctx->pc = 0x80008788u;
    // 80008788: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8000878C:
    ctx->pc = 0x8000878Cu;
    // 8000878C: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80008790:
    ctx->pc = 0x80008790u;
    // 80008790: bl      0x800050B4
    {
            ctx->lr = 0x80008794u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_80008794:
    ctx->pc = 0x80008794u;
    ctx->downcount -= 9;
    // 80008794: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_80008798:
    ctx->pc = 0x80008798u;
    // 80008798: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_8000879C:
    ctx->pc = 0x8000879Cu;
    // 8000879C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_800087A0:
    ctx->pc = 0x800087A0u;
    // 800087A0: stb     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_800087A4:
    ctx->pc = 0x800087A4u;
    // 800087A4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_800087A8:
    ctx->pc = 0x800087A8u;
    // 800087A8: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_800087AC:
    ctx->pc = 0x800087ACu;
    // 800087AC: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_800087B0:
    ctx->pc = 0x800087B0u;
    // 800087B0: stb     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800087B4:
    ctx->pc = 0x800087B4u;
    // 800087B4: bl      0x8000C028
    {
            ctx->lr = 0x800087B8u;
            ctx->pc = 0x8000C028u;
            return;
    }

label_800087B8:
    ctx->pc = 0x800087B8u;
    ctx->downcount -= 3;
    // 800087B8: cmpwi   r31, 16
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

label_800087BC:
    ctx->pc = 0x800087BCu;
    // 800087BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800087C0:
    ctx->pc = 0x800087C0u;
    // 800087C0: bc    12, 2, 0x800087EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800087EC;
        }
    }

label_800087C4:
    ctx->pc = 0x800087C4u;
    ctx->downcount -= 1;
    // 800087C4: bc    4, 0, 0x800087E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800087E0;
        }
    }

label_800087C8:
    ctx->pc = 0x800087C8u;
    ctx->downcount -= 2;
    // 800087C8: cmpwi   r31, 1
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

label_800087CC:
    ctx->pc = 0x800087CCu;
    // 800087CC: bc    12, 2, 0x80008804
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80008804;
        }
    }

label_800087D0:
    ctx->pc = 0x800087D0u;
    ctx->downcount -= 1;
    // 800087D0: bc    4, 0, 0x8000881C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000881C;
        }
    }

label_800087D4:
    ctx->pc = 0x800087D4u;
    ctx->downcount -= 2;
    // 800087D4: cmpwi   r31, 0
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

label_800087D8:
    ctx->pc = 0x800087D8u;
    // 800087D8: bc    4, 0, 0x800087EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800087EC;
        }
    }

label_800087DC:
    ctx->pc = 0x800087DCu;
    ctx->downcount -= 1;
    // 800087DC: b       0x8000881C
    {
            goto label_8000881C;
    }

label_800087E0:
    ctx->pc = 0x800087E0u;
    ctx->downcount -= 2;
    // 800087E0: cmpwi   r31, 18
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(18);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800087E4:
    ctx->pc = 0x800087E4u;
    // 800087E4: bc    4, 0, 0x8000881C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000881C;
        }
    }

label_800087E8:
    ctx->pc = 0x800087E8u;
    ctx->downcount -= 1;
    // 800087E8: b       0x80008804
    {
            goto label_80008804;
    }

label_800087EC:
    ctx->pc = 0x800087ECu;
    ctx->downcount -= 5;
    // 800087EC: subfic  r0, r31, 16
    {
        u64 res = (u64)(u32)(s32)(16) + (u64)(~ctx->gpr[31]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_800087F0:
    ctx->pc = 0x800087F0u;
    // 800087F0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_800087F4:
    ctx->pc = 0x800087F4u;
    // 800087F4: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_800087F8:
    ctx->pc = 0x800087F8u;
    // 800087F8: rlwinm r4, r0, 27, 5, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_800087FC:
    ctx->pc = 0x800087FCu;
    // 800087FC: bl      0x8000A408
    {
            ctx->lr = 0x80008800u;
            ctx->pc = 0x8000A408u;
            return;
    }

label_80008800:
    ctx->pc = 0x80008800u;
    ctx->downcount -= 1;
    // 80008800: b       0x8000881C
    {
            goto label_8000881C;
    }

label_80008804:
    ctx->pc = 0x80008804u;
    ctx->downcount -= 6;
    // 80008804: subfic  r0, r31, 17
    {
        u64 res = (u64)(u32)(s32)(17) + (u64)(~ctx->gpr[31]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80008808:
    ctx->pc = 0x80008808u;
    // 80008808: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8000880C:
    ctx->pc = 0x8000880Cu;
    // 8000880C: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_80008810:
    ctx->pc = 0x80008810u;
    // 80008810: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80008814:
    ctx->pc = 0x80008814u;
    // 80008814: rlwinm r5, r0, 27, 5, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_80008818:
    ctx->pc = 0x80008818u;
    // 80008818: bl      0x8000A350
    {
            ctx->lr = 0x8000881Cu;
            ctx->pc = 0x8000A350u;
            return;
    }

label_8000881C:
    ctx->pc = 0x8000881Cu;
    ctx->downcount -= 16;
    // 8000881C: lmw     r27, 332(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(332);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80008820:
    ctx->pc = 0x80008820u;
    // 80008820: lwz     r0, 356(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(356);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80008824:
    ctx->pc = 0x80008824u;
    // 80008824: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80008828:
    ctx->pc = 0x80008828u;
    // 80008828: addi    r1, r1, 352
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(352);

label_8000882C:
    ctx->pc = 0x8000882Cu;
    // 8000882C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80008830:
    ctx->pc = 0x80008830u;
    ctx->downcount -= 8;
    // 80008830: stwu     r1, -144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-144);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80008834:
    ctx->pc = 0x80008834u;
    // 80008834: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80008838:
    ctx->pc = 0x80008838u;
    // 80008838: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8000883C:
    ctx->pc = 0x8000883Cu;
    // 8000883C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80008840:
    ctx->pc = 0x80008840u;
    // 80008840: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80008844:
    ctx->pc = 0x80008844u;
    // 80008844: addi    r4, r4, 9716
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9716);

label_80008848:
    ctx->pc = 0x80008848u;
    // 80008848: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8000884C:
    ctx->pc = 0x8000884Cu;
    // 8000884C: bl      0x8000CF98
    {
            ctx->lr = 0x80008850u;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_80008850:
    ctx->pc = 0x80008850u;
    ctx->downcount -= 1;
    // 80008850: bl      0x8000A130
    {
            ctx->lr = 0x80008854u;
            ctx->pc = 0x8000A130u;
            return;
    }

label_80008854:
    ctx->pc = 0x80008854u;
    ctx->downcount -= 2;
    // 80008854: cmpwi   r3, 0
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

label_80008858:
    ctx->pc = 0x80008858u;
    // 80008858: bc    4, 2, 0x80008898
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80008898;
        }
    }

label_8000885C:
    ctx->pc = 0x8000885Cu;
    ctx->downcount -= 4;
    // 8000885C: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_80008860:
    ctx->pc = 0x80008860u;
    // 80008860: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80008864:
    ctx->pc = 0x80008864u;
    // 80008864: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80008868:
    ctx->pc = 0x80008868u;
    // 80008868: bl      0x800050B4
    {
            ctx->lr = 0x8000886Cu;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8000886C:
    ctx->pc = 0x8000886Cu;
    ctx->downcount -= 9;
    // 8000886C: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_80008870:
    ctx->pc = 0x80008870u;
    // 80008870: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80008874:
    ctx->pc = 0x80008874u;
    // 80008874: li      r0, 22
    ctx->gpr[0] = (u32)(s32)(22);

label_80008878:
    ctx->pc = 0x80008878u;
    // 80008878: stb     r3, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_8000887C:
    ctx->pc = 0x8000887Cu;
    // 8000887C: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_80008880:
    ctx->pc = 0x80008880u;
    // 80008880: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_80008884:
    ctx->pc = 0x80008884u;
    // 80008884: stw     r5, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80008888:
    ctx->pc = 0x80008888u;
    // 80008888: stb     r0, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8000888C:
    ctx->pc = 0x8000888Cu;
    // 8000888C: bl      0x8000C028
    {
            ctx->lr = 0x80008890u;
            ctx->pc = 0x8000C028u;
            return;
    }

label_80008890:
    ctx->pc = 0x80008890u;
    ctx->downcount -= 2;
    // 80008890: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80008894:
    ctx->pc = 0x80008894u;
    // 80008894: b       0x800088D0
    {
            goto label_800088D0;
    }

label_80008898:
    ctx->pc = 0x80008898u;
    ctx->downcount -= 4;
    // 80008898: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8000889C:
    ctx->pc = 0x8000889Cu;
    // 8000889C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800088A0:
    ctx->pc = 0x800088A0u;
    // 800088A0: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_800088A4:
    ctx->pc = 0x800088A4u;
    // 800088A4: bl      0x800050B4
    {
            ctx->lr = 0x800088A8u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_800088A8:
    ctx->pc = 0x800088A8u;
    ctx->downcount -= 9;
    // 800088A8: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_800088AC:
    ctx->pc = 0x800088ACu;
    // 800088AC: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_800088B0:
    ctx->pc = 0x800088B0u;
    // 800088B0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_800088B4:
    ctx->pc = 0x800088B4u;
    // 800088B4: stb     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_800088B8:
    ctx->pc = 0x800088B8u;
    // 800088B8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_800088BC:
    ctx->pc = 0x800088BCu;
    // 800088BC: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_800088C0:
    ctx->pc = 0x800088C0u;
    // 800088C0: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_800088C4:
    ctx->pc = 0x800088C4u;
    // 800088C4: stb     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800088C8:
    ctx->pc = 0x800088C8u;
    // 800088C8: bl      0x8000C028
    {
            ctx->lr = 0x800088CCu;
            ctx->pc = 0x8000C028u;
            return;
    }

label_800088CC:
    ctx->pc = 0x800088CCu;
    ctx->downcount -= 1;
    // 800088CC: bl      0x8000C40C
    {
            ctx->lr = 0x800088D0u;
            ctx->pc = 0x8000C40Cu;
            return;
    }

label_800088D0:
    ctx->pc = 0x800088D0u;
    ctx->downcount -= 5;
    // 800088D0: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800088D4:
    ctx->pc = 0x800088D4u;
    // 800088D4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800088D8:
    ctx->pc = 0x800088D8u;
    // 800088D8: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_800088DC:
    ctx->pc = 0x800088DCu;
    // 800088DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_800088E0:
    ctx->pc = 0x800088E0u;
    ctx->downcount -= 13;
    // 800088E0: stwu     r1, -224(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-224);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800088E4:
    ctx->pc = 0x800088E4u;
    // 800088E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800088E8:
    ctx->pc = 0x800088E8u;
    // 800088E8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800088EC:
    ctx->pc = 0x800088ECu;
    // 800088EC: stw     r0, 228(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800088F0:
    ctx->pc = 0x800088F0u;
    // 800088F0: stw     r31, 220(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_800088F4:
    ctx->pc = 0x800088F4u;
    // 800088F4: stw     r30, 216(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_800088F8:
    ctx->pc = 0x800088F8u;
    // 800088F8: stw     r29, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_800088FC:
    ctx->pc = 0x800088FCu;
    // 800088FC: stw     r28, 208(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_80008900:
    ctx->pc = 0x80008900u;
    // 80008900: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80008904:
    ctx->pc = 0x80008904u;
    // 80008904: lbz     r31, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[31] = mem_read8(ctx, ea);
    }

label_80008908:
    ctx->pc = 0x80008908u;
    // 80008908: lhz     r30, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[30] = mem_read16(ctx, ea);
    }

label_8000890C:
    ctx->pc = 0x8000890Cu;
    // 8000890C: lhz     r29, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[29] = mem_read16(ctx, ea);
    }

label_80008910:
    ctx->pc = 0x80008910u;
    // 80008910: bl      0x80007DC8
    {
            ctx->lr = 0x80008914u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007DC8u;
                return;
            }
            goto label_80007DC8;
    }

label_80008914:
    ctx->pc = 0x80008914u;
    ctx->downcount -= 2;
    // 80008914: cmplw   r30, r29
    {
        u32 val_a = (u32)(ctx->gpr[30]);
        u32 val_b = (u32)(ctx->gpr[29]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80008918:
    ctx->pc = 0x80008918u;
    // 80008918: bc    4, 1, 0x80008958
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80008958;
        }
    }

label_8000891C:
    ctx->pc = 0x8000891Cu;
    ctx->downcount -= 4;
    // 8000891C: addi    r3, r1, 76
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(76);

label_80008920:
    ctx->pc = 0x80008920u;
    // 80008920: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80008924:
    ctx->pc = 0x80008924u;
    // 80008924: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80008928:
    ctx->pc = 0x80008928u;
    // 80008928: bl      0x800050B4
    {
            ctx->lr = 0x8000892Cu;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8000892C:
    ctx->pc = 0x8000892Cu;
    ctx->downcount -= 9;
    // 8000892C: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_80008930:
    ctx->pc = 0x80008930u;
    // 80008930: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80008934:
    ctx->pc = 0x80008934u;
    // 80008934: li      r0, 20
    ctx->gpr[0] = (u32)(s32)(20);

label_80008938:
    ctx->pc = 0x80008938u;
    // 80008938: stb     r3, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_8000893C:
    ctx->pc = 0x8000893Cu;
    // 8000893C: addi    r3, r1, 76
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(76);

label_80008940:
    ctx->pc = 0x80008940u;
    // 80008940: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_80008944:
    ctx->pc = 0x80008944u;
    // 80008944: stw     r5, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80008948:
    ctx->pc = 0x80008948u;
    // 80008948: stb     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8000894C:
    ctx->pc = 0x8000894Cu;
    // 8000894C: bl      0x8000C028
    {
            ctx->lr = 0x80008950u;
            ctx->pc = 0x8000C028u;
            return;
    }

label_80008950:
    ctx->pc = 0x80008950u;
    ctx->downcount -= 2;
    // 80008950: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80008954:
    ctx->pc = 0x80008954u;
    // 80008954: b       0x80008B50
    {
            goto label_80008B50;
    }

label_80008958:
    ctx->pc = 0x80008958u;
    ctx->downcount -= 3;
    // 80008958: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8000895C:
    ctx->pc = 0x8000895Cu;
    // 8000895C: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_80008960:
    ctx->pc = 0x80008960u;
    // 80008960: bl      0x80007DC8
    {
            ctx->lr = 0x80008964u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007DC8u;
                return;
            }
            goto label_80007DC8;
    }

label_80008964:
    ctx->pc = 0x80008964u;
    ctx->downcount -= 2;
    // 80008964: cmpwi   r31, 2
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

label_80008968:
    ctx->pc = 0x80008968u;
    // 80008968: bc    12, 2, 0x800089CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800089CC;
        }
    }

label_8000896C:
    ctx->pc = 0x8000896Cu;
    ctx->downcount -= 1;
    // 8000896C: bc    4, 0, 0x80008980
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80008980;
        }
    }

label_80008970:
    ctx->pc = 0x80008970u;
    ctx->downcount -= 2;
    // 80008970: cmpwi   r31, 0
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

label_80008974:
    ctx->pc = 0x80008974u;
    // 80008974: bc    12, 2, 0x8000898C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000898C;
        }
    }

label_80008978:
    ctx->pc = 0x80008978u;
    ctx->downcount -= 1;
    // 80008978: bc    4, 0, 0x800089AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800089AC;
        }
    }

label_8000897C:
    ctx->pc = 0x8000897Cu;
    ctx->downcount -= 1;
    // 8000897C: b       0x80008A0C
    {
            goto label_80008A0C;
    }

label_80008980:
    ctx->pc = 0x80008980u;
    ctx->downcount -= 2;
    // 80008980: cmpwi   r31, 4
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80008984:
    ctx->pc = 0x80008984u;
    // 80008984: bc    4, 0, 0x80008A0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80008A0C;
        }
    }

label_80008988:
    ctx->pc = 0x80008988u;
    ctx->downcount -= 1;
    // 80008988: b       0x800089EC
    {
            goto label_800089EC;
    }

label_8000898C:
    ctx->pc = 0x8000898Cu;
    ctx->downcount -= 6;
    // 8000898C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80008990:
    ctx->pc = 0x80008990u;
    // 80008990: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80008994:
    ctx->pc = 0x80008994u;
    // 80008994: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80008998:
    ctx->pc = 0x80008998u;
    // 80008998: addi    r6, r1, 8
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(8);

label_8000899C:
    ctx->pc = 0x8000899Cu;
    // 8000899C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_800089A0:
    ctx->pc = 0x800089A0u;
    // 800089A0: bl      0x8000B274
    {
            ctx->lr = 0x800089A4u;
            ctx->pc = 0x8000B274u;
            return;
    }

label_800089A4:
    ctx->pc = 0x800089A4u;
    ctx->downcount -= 2;
    // 800089A4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800089A8:
    ctx->pc = 0x800089A8u;
    // 800089A8: b       0x80008A10
    {
            goto label_80008A10;
    }

label_800089AC:
    ctx->pc = 0x800089ACu;
    ctx->downcount -= 6;
    // 800089AC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_800089B0:
    ctx->pc = 0x800089B0u;
    // 800089B0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_800089B4:
    ctx->pc = 0x800089B4u;
    // 800089B4: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_800089B8:
    ctx->pc = 0x800089B8u;
    // 800089B8: addi    r6, r1, 8
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(8);

label_800089BC:
    ctx->pc = 0x800089BCu;
    // 800089BC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_800089C0:
    ctx->pc = 0x800089C0u;
    // 800089C0: bl      0x8000ADA8
    {
            ctx->lr = 0x800089C4u;
            ctx->pc = 0x8000ADA8u;
            return;
    }

label_800089C4:
    ctx->pc = 0x800089C4u;
    ctx->downcount -= 2;
    // 800089C4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800089C8:
    ctx->pc = 0x800089C8u;
    // 800089C8: b       0x80008A10
    {
            goto label_80008A10;
    }

label_800089CC:
    ctx->pc = 0x800089CCu;
    ctx->downcount -= 6;
    // 800089CC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_800089D0:
    ctx->pc = 0x800089D0u;
    // 800089D0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_800089D4:
    ctx->pc = 0x800089D4u;
    // 800089D4: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_800089D8:
    ctx->pc = 0x800089D8u;
    // 800089D8: addi    r6, r1, 8
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(8);

label_800089DC:
    ctx->pc = 0x800089DCu;
    // 800089DC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_800089E0:
    ctx->pc = 0x800089E0u;
    // 800089E0: bl      0x8000AC38
    {
            ctx->lr = 0x800089E4u;
            ctx->pc = 0x8000AC38u;
            return;
    }

label_800089E4:
    ctx->pc = 0x800089E4u;
    ctx->downcount -= 2;
    // 800089E4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800089E8:
    ctx->pc = 0x800089E8u;
    // 800089E8: b       0x80008A10
    {
            goto label_80008A10;
    }

label_800089EC:
    ctx->pc = 0x800089ECu;
    ctx->downcount -= 6;
    // 800089EC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_800089F0:
    ctx->pc = 0x800089F0u;
    // 800089F0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_800089F4:
    ctx->pc = 0x800089F4u;
    // 800089F4: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_800089F8:
    ctx->pc = 0x800089F8u;
    // 800089F8: addi    r6, r1, 8
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(8);

label_800089FC:
    ctx->pc = 0x800089FCu;
    // 800089FC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80008A00:
    ctx->pc = 0x80008A00u;
    // 80008A00: bl      0x8000A800
    {
            ctx->lr = 0x80008A04u;
            ctx->pc = 0x8000A800u;
            return;
    }

label_80008A04:
    ctx->pc = 0x80008A04u;
    ctx->downcount -= 2;
    // 80008A04: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80008A08:
    ctx->pc = 0x80008A08u;
    // 80008A08: b       0x80008A10
    {
            goto label_80008A10;
    }

label_80008A0C:
    ctx->pc = 0x80008A0Cu;
    ctx->downcount -= 1;
    // 80008A0C: li      r31, 1795
    ctx->gpr[31] = (u32)(s32)(1795);

label_80008A10:
    ctx->pc = 0x80008A10u;
    ctx->downcount -= 3;
    // 80008A10: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80008A14:
    ctx->pc = 0x80008A14u;
    // 80008A14: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80008A18:
    ctx->pc = 0x80008A18u;
    // 80008A18: bl      0x80007DF8
    {
            ctx->lr = 0x80008A1Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007DF8u;
                return;
            }
            goto label_80007DF8;
    }

label_80008A1C:
    ctx->pc = 0x80008A1Cu;
    ctx->downcount -= 2;
    // 80008A1C: cmpwi   r31, 0
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

label_80008A20:
    ctx->pc = 0x80008A20u;
    // 80008A20: bc    4, 2, 0x80008A5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80008A5C;
        }
    }

label_80008A24:
    ctx->pc = 0x80008A24u;
    ctx->downcount -= 4;
    // 80008A24: addi    r3, r1, 140
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(140);

label_80008A28:
    ctx->pc = 0x80008A28u;
    // 80008A28: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80008A2C:
    ctx->pc = 0x80008A2Cu;
    // 80008A2C: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80008A30:
    ctx->pc = 0x80008A30u;
    // 80008A30: bl      0x800050B4
    {
            ctx->lr = 0x80008A34u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_80008A34:
    ctx->pc = 0x80008A34u;
    ctx->downcount -= 9;
    // 80008A34: li      r3, 64
    ctx->gpr[3] = (u32)(s32)(64);

label_80008A38:
    ctx->pc = 0x80008A38u;
    // 80008A38: li      r0, 128
    ctx->gpr[0] = (u32)(s32)(128);

label_80008A3C:
    ctx->pc = 0x80008A3Cu;
    // 80008A3C: stw     r3, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80008A40:
    ctx->pc = 0x80008A40u;
    // 80008A40: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80008A44:
    ctx->pc = 0x80008A44u;
    // 80008A44: addi    r4, r1, 140
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(140);

label_80008A48:
    ctx->pc = 0x80008A48u;
    // 80008A48: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80008A4C:
    ctx->pc = 0x80008A4Cu;
    // 80008A4C: stb     r0, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80008A50:
    ctx->pc = 0x80008A50u;
    // 80008A50: stb     r31, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write8(ctx, ea, (u8)ctx->gpr[31]);
    }

label_80008A54:
    ctx->pc = 0x80008A54u;
    // 80008A54: bl      0x80007D24
    {
            ctx->lr = 0x80008A58u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007D24u;
                return;
            }
            goto label_80007D24;
    }

label_80008A58:
    ctx->pc = 0x80008A58u;
    ctx->downcount -= 1;
    // 80008A58: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80008A5C:
    ctx->pc = 0x80008A5Cu;
    ctx->downcount -= 2;
    // 80008A5C: cmpwi   r31, 0
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

label_80008A60:
    ctx->pc = 0x80008A60u;
    // 80008A60: bc    12, 2, 0x80008B14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80008B14;
        }
    }

label_80008A64:
    ctx->pc = 0x80008A64u;
    ctx->downcount -= 2;
    // 80008A64: cmpwi   r31, 1795
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(1795);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80008A68:
    ctx->pc = 0x80008A68u;
    // 80008A68: bc    12, 2, 0x80008AA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80008AA0;
        }
    }

label_80008A6C:
    ctx->pc = 0x80008A6Cu;
    ctx->downcount -= 1;
    // 80008A6C: bc    4, 0, 0x80008A88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80008A88;
        }
    }

label_80008A70:
    ctx->pc = 0x80008A70u;
    ctx->downcount -= 2;
    // 80008A70: cmpwi   r31, 1793
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(1793);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80008A74:
    ctx->pc = 0x80008A74u;
    // 80008A74: bc    12, 2, 0x80008AA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80008AA8;
        }
    }

label_80008A78:
    ctx->pc = 0x80008A78u;
    ctx->downcount -= 1;
    // 80008A78: bc    4, 0, 0x80008AB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80008AB8;
        }
    }

label_80008A7C:
    ctx->pc = 0x80008A7Cu;
    ctx->downcount -= 2;
    // 80008A7C: cmpwi   r31, 770
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(770);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80008A80:
    ctx->pc = 0x80008A80u;
    // 80008A80: bc    12, 2, 0x80008AB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80008AB0;
        }
    }

label_80008A84:
    ctx->pc = 0x80008A84u;
    ctx->downcount -= 1;
    // 80008A84: b       0x80008AD8
    {
            goto label_80008AD8;
    }

label_80008A88:
    ctx->pc = 0x80008A88u;
    ctx->downcount -= 2;
    // 80008A88: cmpwi   r31, 1798
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(1798);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80008A8C:
    ctx->pc = 0x80008A8Cu;
    // 80008A8C: bc    12, 2, 0x80008AD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80008AD0;
        }
    }

label_80008A90:
    ctx->pc = 0x80008A90u;
    ctx->downcount -= 1;
    // 80008A90: bc    4, 0, 0x80008AD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80008AD8;
        }
    }

label_80008A94:
    ctx->pc = 0x80008A94u;
    ctx->downcount -= 2;
    // 80008A94: cmpwi   r31, 1797
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(1797);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80008A98:
    ctx->pc = 0x80008A98u;
    // 80008A98: bc    4, 0, 0x80008AC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80008AC8;
        }
    }

label_80008A9C:
    ctx->pc = 0x80008A9Cu;
    ctx->downcount -= 1;
    // 80008A9C: b       0x80008AC0
    {
            goto label_80008AC0;
    }

label_80008AA0:
    ctx->pc = 0x80008AA0u;
    ctx->downcount -= 2;
    // 80008AA0: li      r31, 18
    ctx->gpr[31] = (u32)(s32)(18);

label_80008AA4:
    ctx->pc = 0x80008AA4u;
    // 80008AA4: b       0x80008ADC
    {
            goto label_80008ADC;
    }

label_80008AA8:
    ctx->pc = 0x80008AA8u;
    ctx->downcount -= 2;
    // 80008AA8: li      r31, 20
    ctx->gpr[31] = (u32)(s32)(20);

label_80008AAC:
    ctx->pc = 0x80008AACu;
    // 80008AAC: b       0x80008ADC
    {
            goto label_80008ADC;
    }

label_80008AB0:
    ctx->pc = 0x80008AB0u;
    ctx->downcount -= 2;
    // 80008AB0: li      r31, 2
    ctx->gpr[31] = (u32)(s32)(2);

label_80008AB4:
    ctx->pc = 0x80008AB4u;
    // 80008AB4: b       0x80008ADC
    {
            goto label_80008ADC;
    }

label_80008AB8:
    ctx->pc = 0x80008AB8u;
    ctx->downcount -= 2;
    // 80008AB8: li      r31, 21
    ctx->gpr[31] = (u32)(s32)(21);

label_80008ABC:
    ctx->pc = 0x80008ABCu;
    // 80008ABC: b       0x80008ADC
    {
            goto label_80008ADC;
    }

label_80008AC0:
    ctx->pc = 0x80008AC0u;
    ctx->downcount -= 2;
    // 80008AC0: li      r31, 33
    ctx->gpr[31] = (u32)(s32)(33);

label_80008AC4:
    ctx->pc = 0x80008AC4u;
    // 80008AC4: b       0x80008ADC
    {
            goto label_80008ADC;
    }

label_80008AC8:
    ctx->pc = 0x80008AC8u;
    ctx->downcount -= 2;
    // 80008AC8: li      r31, 34
    ctx->gpr[31] = (u32)(s32)(34);

label_80008ACC:
    ctx->pc = 0x80008ACCu;
    // 80008ACC: b       0x80008ADC
    {
            goto label_80008ADC;
    }

label_80008AD0:
    ctx->pc = 0x80008AD0u;
    ctx->downcount -= 2;
    // 80008AD0: li      r31, 32
    ctx->gpr[31] = (u32)(s32)(32);

label_80008AD4:
    ctx->pc = 0x80008AD4u;
    // 80008AD4: b       0x80008ADC
    {
            goto label_80008ADC;
    }

label_80008AD8:
    ctx->pc = 0x80008AD8u;
    ctx->downcount -= 1;
    // 80008AD8: li      r31, 3
    ctx->gpr[31] = (u32)(s32)(3);

label_80008ADC:
    ctx->pc = 0x80008ADCu;
    ctx->downcount -= 4;
    // 80008ADC: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_80008AE0:
    ctx->pc = 0x80008AE0u;
    // 80008AE0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80008AE4:
    ctx->pc = 0x80008AE4u;
    // 80008AE4: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80008AE8:
    ctx->pc = 0x80008AE8u;
    // 80008AE8: bl      0x800050B4
    {
            ctx->lr = 0x80008AECu;
            ctx->pc = 0x800050B4u;
            return;
    }

label_80008AEC:
    ctx->pc = 0x80008AECu;
    ctx->downcount -= 8;
    // 80008AEC: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_80008AF0:
    ctx->pc = 0x80008AF0u;
    // 80008AF0: li      r0, 64
    ctx->gpr[0] = (u32)(s32)(64);

label_80008AF4:
    ctx->pc = 0x80008AF4u;
    // 80008AF4: stb     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_80008AF8:
    ctx->pc = 0x80008AF8u;
    // 80008AF8: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_80008AFC:
    ctx->pc = 0x80008AFCu;
    // 80008AFC: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_80008B00:
    ctx->pc = 0x80008B00u;
    // 80008B00: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80008B04:
    ctx->pc = 0x80008B04u;
    // 80008B04: stb     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write8(ctx, ea, (u8)ctx->gpr[31]);
    }

label_80008B08:
    ctx->pc = 0x80008B08u;
    // 80008B08: bl      0x8000C028
    {
            ctx->lr = 0x80008B0Cu;
            ctx->pc = 0x8000C028u;
            return;
    }

label_80008B0C:
    ctx->pc = 0x80008B0Cu;
    ctx->downcount -= 2;
    // 80008B0C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80008B10:
    ctx->pc = 0x80008B10u;
    // 80008B10: b       0x80008B50
    {
            goto label_80008B50;
    }

label_80008B14:
    ctx->pc = 0x80008B14u;
    ctx->downcount -= 5;
    // 80008B14: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_80008B18:
    ctx->pc = 0x80008B18u;
    // 80008B18: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80008B1C:
    ctx->pc = 0x80008B1Cu;
    // 80008B1C: addi    r4, r4, 9760
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9760);

label_80008B20:
    ctx->pc = 0x80008B20u;
    // 80008B20: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80008B24:
    ctx->pc = 0x80008B24u;
    // 80008B24: bl      0x8000CF98
    {
            ctx->lr = 0x80008B28u;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_80008B28:
    ctx->pc = 0x80008B28u;
    ctx->downcount -= 2;
    // 80008B28: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80008B2C:
    ctx->pc = 0x80008B2Cu;
    // 80008B2C: bl      0x80007784
    {
            ctx->lr = 0x80008B30u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007784u;
                return;
            }
            goto label_80007784;
    }

label_80008B30:
    ctx->pc = 0x80008B30u;
    ctx->downcount -= 7;
    // 80008B30: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80008B34:
    ctx->pc = 0x80008B34u;
    // 80008B34: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_80008B38:
    ctx->pc = 0x80008B38u;
    // 80008B38: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80008B3C:
    ctx->pc = 0x80008B3Cu;
    // 80008B3C: addi    r4, r4, 9792
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9792);

label_80008B40:
    ctx->pc = 0x80008B40u;
    // 80008B40: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80008B44:
    ctx->pc = 0x80008B44u;
    // 80008B44: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80008B48:
    ctx->pc = 0x80008B48u;
    // 80008B48: bl      0x8000CF98
    {
            ctx->lr = 0x80008B4Cu;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_80008B4C:
    ctx->pc = 0x80008B4Cu;
    ctx->downcount -= 1;
    // 80008B4C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80008B50:
    ctx->pc = 0x80008B50u;
    ctx->downcount -= 9;
    // 80008B50: lwz     r0, 228(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80008B54:
    ctx->pc = 0x80008B54u;
    // 80008B54: lwz     r31, 220(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(220);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80008B58:
    ctx->pc = 0x80008B58u;
    // 80008B58: lwz     r30, 216(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80008B5C:
    ctx->pc = 0x80008B5Cu;
    // 80008B5C: lwz     r29, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80008B60:
    ctx->pc = 0x80008B60u;
    // 80008B60: lwz     r28, 208(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_80008B64:
    ctx->pc = 0x80008B64u;
    // 80008B64: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80008B68:
    ctx->pc = 0x80008B68u;
    // 80008B68: addi    r1, r1, 224
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(224);

label_80008B6C:
    ctx->pc = 0x80008B6Cu;
    // 80008B6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80008B70:
    ctx->pc = 0x80008B70u;
    ctx->downcount -= 13;
    // 80008B70: stwu     r1, -224(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-224);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80008B74:
    ctx->pc = 0x80008B74u;
    // 80008B74: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80008B78:
    ctx->pc = 0x80008B78u;
    // 80008B78: lis     r5, -32762
    ctx->gpr[5] = ((u32)(s32)(-32762) << 16);

label_80008B7C:
    ctx->pc = 0x80008B7Cu;
    // 80008B7C: stw     r0, 228(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80008B80:
    ctx->pc = 0x80008B80u;
    // 80008B80: stw     r31, 220(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80008B84:
    ctx->pc = 0x80008B84u;
    // 80008B84: addi    r31, r5, 9664
    ctx->gpr[31] = ctx->gpr[5] + (u32)(s32)(9664);

label_80008B88:
    ctx->pc = 0x80008B88u;
    // 80008B88: stw     r30, 216(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80008B8C:
    ctx->pc = 0x80008B8Cu;
    // 80008B8C: stw     r29, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80008B90:
    ctx->pc = 0x80008B90u;
    // 80008B90: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80008B94:
    ctx->pc = 0x80008B94u;
    // 80008B94: lhz     r4, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_80008B98:
    ctx->pc = 0x80008B98u;
    // 80008B98: lhz     r0, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80008B9C:
    ctx->pc = 0x80008B9Cu;
    // 80008B9C: cmplw   r4, r0
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80008BA0:
    ctx->pc = 0x80008BA0u;
    // 80008BA0: bc    4, 1, 0x80008BE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80008BE0;
        }
    }

label_80008BA4:
    ctx->pc = 0x80008BA4u;
    ctx->downcount -= 4;
    // 80008BA4: addi    r3, r1, 76
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(76);

label_80008BA8:
    ctx->pc = 0x80008BA8u;
    // 80008BA8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80008BAC:
    ctx->pc = 0x80008BACu;
    // 80008BAC: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80008BB0:
    ctx->pc = 0x80008BB0u;
    // 80008BB0: bl      0x800050B4
    {
            ctx->lr = 0x80008BB4u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_80008BB4:
    ctx->pc = 0x80008BB4u;
    ctx->downcount -= 9;
    // 80008BB4: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_80008BB8:
    ctx->pc = 0x80008BB8u;
    // 80008BB8: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80008BBC:
    ctx->pc = 0x80008BBCu;
    // 80008BBC: li      r0, 20
    ctx->gpr[0] = (u32)(s32)(20);

label_80008BC0:
    ctx->pc = 0x80008BC0u;
    // 80008BC0: stb     r3, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_80008BC4:
    ctx->pc = 0x80008BC4u;
    // 80008BC4: addi    r3, r1, 76
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(76);

label_80008BC8:
    ctx->pc = 0x80008BC8u;
    // 80008BC8: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_80008BCC:
    ctx->pc = 0x80008BCCu;
    // 80008BCC: stw     r5, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80008BD0:
    ctx->pc = 0x80008BD0u;
    // 80008BD0: stb     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80008BD4:
    ctx->pc = 0x80008BD4u;
    // 80008BD4: bl      0x8000C028
    {
            ctx->lr = 0x80008BD8u;
            ctx->pc = 0x8000C028u;
            return;
    }

label_80008BD8:
    ctx->pc = 0x80008BD8u;
    ctx->downcount -= 2;
    // 80008BD8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80008BDC:
    ctx->pc = 0x80008BDCu;
    // 80008BDC: b       0x80008E34
    {
            goto label_80008E34;
    }

label_80008BE0:
    ctx->pc = 0x80008BE0u;
    ctx->downcount -= 6;
    // 80008BE0: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_80008BE4:
    ctx->pc = 0x80008BE4u;
    // 80008BE4: li      r0, 1128
    ctx->gpr[0] = (u32)(s32)(1128);

label_80008BE8:
    ctx->pc = 0x80008BE8u;
    // 80008BE8: stb     r4, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_80008BEC:
    ctx->pc = 0x80008BECu;
    // 80008BEC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80008BF0:
    ctx->pc = 0x80008BF0u;
    // 80008BF0: stw     r0, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80008BF4:
    ctx->pc = 0x80008BF4u;
    // 80008BF4: bl      0x80007DF8
    {
            ctx->lr = 0x80008BF8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007DF8u;
                return;
            }
            goto label_80007DF8;
    }

label_80008BF8:
    ctx->pc = 0x80008BF8u;
    ctx->downcount -= 5;
    // 80008BF8: lwz     r5, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80008BFC:
    ctx->pc = 0x80008BFCu;
    // 80008BFC: addi    r4, r31, 152
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(152);

label_80008C00:
    ctx->pc = 0x80008C00u;
    // 80008C00: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80008C04:
    ctx->pc = 0x80008C04u;
    // 80008C04: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80008C08:
    ctx->pc = 0x80008C08u;
    // 80008C08: bl      0x8000CF98
    {
            ctx->lr = 0x80008C0Cu;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_80008C0C:
    ctx->pc = 0x80008C0Cu;
    ctx->downcount -= 4;
    // 80008C0C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80008C10:
    ctx->pc = 0x80008C10u;
    // 80008C10: addi    r4, r1, 140
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(140);

label_80008C14:
    ctx->pc = 0x80008C14u;
    // 80008C14: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80008C18:
    ctx->pc = 0x80008C18u;
    // 80008C18: bl      0x80007B34
    {
            ctx->lr = 0x80008C1Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007B34u;
                return;
            }
            goto label_80007B34;
    }

label_80008C1C:
    ctx->pc = 0x80008C1Cu;
    ctx->downcount -= 5;
    // 80008C1C: lwz     r5, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80008C20:
    ctx->pc = 0x80008C20u;
    // 80008C20: addi    r4, r31, 152
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(152);

label_80008C24:
    ctx->pc = 0x80008C24u;
    // 80008C24: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80008C28:
    ctx->pc = 0x80008C28u;
    // 80008C28: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80008C2C:
    ctx->pc = 0x80008C2Cu;
    // 80008C2C: bl      0x8000CF98
    {
            ctx->lr = 0x80008C30u;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_80008C30:
    ctx->pc = 0x80008C30u;
    ctx->downcount -= 6;
    // 80008C30: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80008C34:
    ctx->pc = 0x80008C34u;
    // 80008C34: addi    r6, r1, 8
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(8);

label_80008C38:
    ctx->pc = 0x80008C38u;
    // 80008C38: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80008C3C:
    ctx->pc = 0x80008C3Cu;
    // 80008C3C: li      r4, 36
    ctx->gpr[4] = (u32)(s32)(36);

label_80008C40:
    ctx->pc = 0x80008C40u;
    // 80008C40: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80008C44:
    ctx->pc = 0x80008C44u;
    // 80008C44: bl      0x8000B274
    {
            ctx->lr = 0x80008C48u;
            ctx->pc = 0x8000B274u;
            return;
    }

label_80008C48:
    ctx->pc = 0x80008C48u;
    ctx->downcount -= 6;
    // 80008C48: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80008C4C:
    ctx->pc = 0x80008C4Cu;
    // 80008C4C: addi    r4, r31, 192
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(192);

label_80008C50:
    ctx->pc = 0x80008C50u;
    // 80008C50: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80008C54:
    ctx->pc = 0x80008C54u;
    // 80008C54: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80008C58:
    ctx->pc = 0x80008C58u;
    // 80008C58: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80008C5C:
    ctx->pc = 0x80008C5Cu;
    // 80008C5C: bl      0x8000CF98
    {
            ctx->lr = 0x80008C60u;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_80008C60:
    ctx->pc = 0x80008C60u;
    ctx->downcount -= 5;
    // 80008C60: lwz     r5, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80008C64:
    ctx->pc = 0x80008C64u;
    // 80008C64: addi    r4, r31, 152
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(152);

label_80008C68:
    ctx->pc = 0x80008C68u;
    // 80008C68: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80008C6C:
    ctx->pc = 0x80008C6Cu;
    // 80008C6C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80008C70:
    ctx->pc = 0x80008C70u;
    // 80008C70: bl      0x8000CF98
    {
            ctx->lr = 0x80008C74u;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_80008C74:
    ctx->pc = 0x80008C74u;
    ctx->downcount -= 2;
    // 80008C74: cmpwi   r30, 0
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

label_80008C78:
    ctx->pc = 0x80008C78u;
    // 80008C78: bc    4, 2, 0x80008C98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80008C98;
        }
    }

label_80008C7C:
    ctx->pc = 0x80008C7Cu;
    ctx->downcount -= 6;
    // 80008C7C: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80008C80:
    ctx->pc = 0x80008C80u;
    // 80008C80: addi    r6, r1, 8
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(8);

label_80008C84:
    ctx->pc = 0x80008C84u;
    // 80008C84: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80008C88:
    ctx->pc = 0x80008C88u;
    // 80008C88: li      r4, 33
    ctx->gpr[4] = (u32)(s32)(33);

label_80008C8C:
    ctx->pc = 0x80008C8Cu;
    // 80008C8C: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80008C90:
    ctx->pc = 0x80008C90u;
    // 80008C90: bl      0x8000ADA8
    {
            ctx->lr = 0x80008C94u;
            ctx->pc = 0x8000ADA8u;
            return;
    }

label_80008C94:
    ctx->pc = 0x80008C94u;
    ctx->downcount -= 1;
    // 80008C94: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80008C98:
    ctx->pc = 0x80008C98u;
    ctx->downcount -= 5;
    // 80008C98: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80008C9C:
    ctx->pc = 0x80008C9Cu;
    // 80008C9C: addi    r4, r31, 248
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(248);

label_80008CA0:
    ctx->pc = 0x80008CA0u;
    // 80008CA0: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80008CA4:
    ctx->pc = 0x80008CA4u;
    // 80008CA4: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80008CA8:
    ctx->pc = 0x80008CA8u;
    // 80008CA8: bl      0x8000CF98
    {
            ctx->lr = 0x80008CACu;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_80008CAC:
    ctx->pc = 0x80008CACu;
    ctx->downcount -= 5;
    // 80008CAC: lwz     r5, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80008CB0:
    ctx->pc = 0x80008CB0u;
    // 80008CB0: addi    r4, r31, 152
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(152);

label_80008CB4:
    ctx->pc = 0x80008CB4u;
    // 80008CB4: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80008CB8:
    ctx->pc = 0x80008CB8u;
    // 80008CB8: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80008CBC:
    ctx->pc = 0x80008CBCu;
    // 80008CBC: bl      0x8000CF98
    {
            ctx->lr = 0x80008CC0u;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_80008CC0:
    ctx->pc = 0x80008CC0u;
    ctx->downcount -= 2;
    // 80008CC0: cmpwi   r30, 0
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

label_80008CC4:
    ctx->pc = 0x80008CC4u;
    // 80008CC4: bc    4, 2, 0x80008CE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80008CE4;
        }
    }

label_80008CC8:
    ctx->pc = 0x80008CC8u;
    ctx->downcount -= 6;
    // 80008CC8: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80008CCC:
    ctx->pc = 0x80008CCCu;
    // 80008CCC: addi    r6, r1, 8
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(8);

label_80008CD0:
    ctx->pc = 0x80008CD0u;
    // 80008CD0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80008CD4:
    ctx->pc = 0x80008CD4u;
    // 80008CD4: li      r4, 96
    ctx->gpr[4] = (u32)(s32)(96);

label_80008CD8:
    ctx->pc = 0x80008CD8u;
    // 80008CD8: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80008CDC:
    ctx->pc = 0x80008CDCu;
    // 80008CDC: bl      0x8000AC38
    {
            ctx->lr = 0x80008CE0u;
            ctx->pc = 0x8000AC38u;
            return;
    }

label_80008CE0:
    ctx->pc = 0x80008CE0u;
    ctx->downcount -= 1;
    // 80008CE0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80008CE4:
    ctx->pc = 0x80008CE4u;
    ctx->downcount -= 5;
    // 80008CE4: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80008CE8:
    ctx->pc = 0x80008CE8u;
    // 80008CE8: addi    r4, r31, 288
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(288);

label_80008CEC:
    ctx->pc = 0x80008CECu;
    // 80008CEC: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80008CF0:
    ctx->pc = 0x80008CF0u;
    // 80008CF0: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80008CF4:
    ctx->pc = 0x80008CF4u;
    // 80008CF4: bl      0x8000CF98
    {
            ctx->lr = 0x80008CF8u;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_80008CF8:
    ctx->pc = 0x80008CF8u;
    ctx->downcount -= 5;
    // 80008CF8: lwz     r5, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80008CFC:
    ctx->pc = 0x80008CFCu;
    // 80008CFC: addi    r4, r31, 152
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(152);

label_80008D00:
    ctx->pc = 0x80008D00u;
    // 80008D00: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80008D04:
    ctx->pc = 0x80008D04u;
    // 80008D04: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80008D08:
    ctx->pc = 0x80008D08u;
    // 80008D08: bl      0x8000CF98
    {
            ctx->lr = 0x80008D0Cu;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_80008D0C:
    ctx->pc = 0x80008D0Cu;
    ctx->downcount -= 2;
    // 80008D0C: cmpwi   r30, 0
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

label_80008D10:
    ctx->pc = 0x80008D10u;
    // 80008D10: bc    4, 2, 0x80008D30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80008D30;
        }
    }

label_80008D14:
    ctx->pc = 0x80008D14u;
    ctx->downcount -= 6;
    // 80008D14: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80008D18:
    ctx->pc = 0x80008D18u;
    // 80008D18: addi    r6, r1, 8
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(8);

label_80008D1C:
    ctx->pc = 0x80008D1Cu;
    // 80008D1C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80008D20:
    ctx->pc = 0x80008D20u;
    // 80008D20: li      r4, 31
    ctx->gpr[4] = (u32)(s32)(31);

label_80008D24:
    ctx->pc = 0x80008D24u;
    // 80008D24: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80008D28:
    ctx->pc = 0x80008D28u;
    // 80008D28: bl      0x8000A800
    {
            ctx->lr = 0x80008D2Cu;
            ctx->pc = 0x8000A800u;
            return;
    }

label_80008D2C:
    ctx->pc = 0x80008D2Cu;
    ctx->downcount -= 1;
    // 80008D2C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80008D30:
    ctx->pc = 0x80008D30u;
    ctx->downcount -= 5;
    // 80008D30: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80008D34:
    ctx->pc = 0x80008D34u;
    // 80008D34: addi    r4, r31, 336
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(336);

label_80008D38:
    ctx->pc = 0x80008D38u;
    // 80008D38: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80008D3C:
    ctx->pc = 0x80008D3Cu;
    // 80008D3C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80008D40:
    ctx->pc = 0x80008D40u;
    // 80008D40: bl      0x8000CF98
    {
            ctx->lr = 0x80008D44u;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_80008D44:
    ctx->pc = 0x80008D44u;
    ctx->downcount -= 5;
    // 80008D44: lwz     r5, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80008D48:
    ctx->pc = 0x80008D48u;
    // 80008D48: addi    r4, r31, 152
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(152);

label_80008D4C:
    ctx->pc = 0x80008D4Cu;
    // 80008D4C: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80008D50:
    ctx->pc = 0x80008D50u;
    // 80008D50: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80008D54:
    ctx->pc = 0x80008D54u;
    // 80008D54: bl      0x8000CF98
    {
            ctx->lr = 0x80008D58u;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_80008D58:
    ctx->pc = 0x80008D58u;
    ctx->downcount -= 2;
    // 80008D58: cmpwi   r30, 0
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

label_80008D5C:
    ctx->pc = 0x80008D5Cu;
    // 80008D5C: bc    12, 2, 0x80008E00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80008E00;
        }
    }

label_80008D60:
    ctx->pc = 0x80008D60u;
    ctx->downcount -= 2;
    // 80008D60: cmpwi   r30, 1796
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(1796);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80008D64:
    ctx->pc = 0x80008D64u;
    // 80008D64: bc    12, 2, 0x80008DAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80008DAC;
        }
    }

label_80008D68:
    ctx->pc = 0x80008D68u;
    ctx->downcount -= 1;
    // 80008D68: bc    4, 0, 0x80008D84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80008D84;
        }
    }

label_80008D6C:
    ctx->pc = 0x80008D6Cu;
    ctx->downcount -= 2;
    // 80008D6C: cmpwi   r30, 1794
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(1794);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80008D70:
    ctx->pc = 0x80008D70u;
    // 80008D70: bc    12, 2, 0x80008DA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80008DA4;
        }
    }

label_80008D74:
    ctx->pc = 0x80008D74u;
    ctx->downcount -= 1;
    // 80008D74: bc    4, 0, 0x80008D94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80008D94;
        }
    }

label_80008D78:
    ctx->pc = 0x80008D78u;
    ctx->downcount -= 2;
    // 80008D78: cmpwi   r30, 1793
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(1793);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80008D7C:
    ctx->pc = 0x80008D7Cu;
    // 80008D7C: bc    4, 0, 0x80008D9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80008D9C;
        }
    }

label_80008D80:
    ctx->pc = 0x80008D80u;
    ctx->downcount -= 1;
    // 80008D80: b       0x80008DC4
    {
            goto label_80008DC4;
    }

label_80008D84:
    ctx->pc = 0x80008D84u;
    ctx->downcount -= 2;
    // 80008D84: cmpwi   r30, 1798
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(1798);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80008D88:
    ctx->pc = 0x80008D88u;
    // 80008D88: bc    12, 2, 0x80008DBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80008DBC;
        }
    }

label_80008D8C:
    ctx->pc = 0x80008D8Cu;
    ctx->downcount -= 1;
    // 80008D8C: bc    4, 0, 0x80008DC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80008DC4;
        }
    }

label_80008D90:
    ctx->pc = 0x80008D90u;
    ctx->downcount -= 1;
    // 80008D90: b       0x80008DB4
    {
            goto label_80008DB4;
    }

label_80008D94:
    ctx->pc = 0x80008D94u;
    ctx->downcount -= 2;
    // 80008D94: li      r30, 18
    ctx->gpr[30] = (u32)(s32)(18);

label_80008D98:
    ctx->pc = 0x80008D98u;
    // 80008D98: b       0x80008DC8
    {
            goto label_80008DC8;
    }

label_80008D9C:
    ctx->pc = 0x80008D9Cu;
    ctx->downcount -= 2;
    // 80008D9C: li      r30, 20
    ctx->gpr[30] = (u32)(s32)(20);

label_80008DA0:
    ctx->pc = 0x80008DA0u;
    // 80008DA0: b       0x80008DC8
    {
            goto label_80008DC8;
    }

label_80008DA4:
    ctx->pc = 0x80008DA4u;
    ctx->downcount -= 2;
    // 80008DA4: li      r30, 21
    ctx->gpr[30] = (u32)(s32)(21);

label_80008DA8:
    ctx->pc = 0x80008DA8u;
    // 80008DA8: b       0x80008DC8
    {
            goto label_80008DC8;
    }

label_80008DAC:
    ctx->pc = 0x80008DACu;
    ctx->downcount -= 2;
    // 80008DAC: li      r30, 33
    ctx->gpr[30] = (u32)(s32)(33);

label_80008DB0:
    ctx->pc = 0x80008DB0u;
    // 80008DB0: b       0x80008DC8
    {
            goto label_80008DC8;
    }

label_80008DB4:
    ctx->pc = 0x80008DB4u;
    ctx->downcount -= 2;
    // 80008DB4: li      r30, 34
    ctx->gpr[30] = (u32)(s32)(34);

label_80008DB8:
    ctx->pc = 0x80008DB8u;
    // 80008DB8: b       0x80008DC8
    {
            goto label_80008DC8;
    }

label_80008DBC:
    ctx->pc = 0x80008DBCu;
    ctx->downcount -= 2;
    // 80008DBC: li      r30, 32
    ctx->gpr[30] = (u32)(s32)(32);

label_80008DC0:
    ctx->pc = 0x80008DC0u;
    // 80008DC0: b       0x80008DC8
    {
            goto label_80008DC8;
    }

label_80008DC4:
    ctx->pc = 0x80008DC4u;
    ctx->downcount -= 1;
    // 80008DC4: li      r30, 3
    ctx->gpr[30] = (u32)(s32)(3);

label_80008DC8:
    ctx->pc = 0x80008DC8u;
    ctx->downcount -= 4;
    // 80008DC8: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_80008DCC:
    ctx->pc = 0x80008DCCu;
    // 80008DCC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80008DD0:
    ctx->pc = 0x80008DD0u;
    // 80008DD0: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80008DD4:
    ctx->pc = 0x80008DD4u;
    // 80008DD4: bl      0x800050B4
    {
            ctx->lr = 0x80008DD8u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_80008DD8:
    ctx->pc = 0x80008DD8u;
    ctx->downcount -= 8;
    // 80008DD8: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_80008DDC:
    ctx->pc = 0x80008DDCu;
    // 80008DDC: li      r0, 64
    ctx->gpr[0] = (u32)(s32)(64);

label_80008DE0:
    ctx->pc = 0x80008DE0u;
    // 80008DE0: stb     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_80008DE4:
    ctx->pc = 0x80008DE4u;
    // 80008DE4: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_80008DE8:
    ctx->pc = 0x80008DE8u;
    // 80008DE8: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_80008DEC:
    ctx->pc = 0x80008DECu;
    // 80008DEC: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80008DF0:
    ctx->pc = 0x80008DF0u;
    // 80008DF0: stb     r30, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_80008DF4:
    ctx->pc = 0x80008DF4u;
    // 80008DF4: bl      0x8000C028
    {
            ctx->lr = 0x80008DF8u;
            ctx->pc = 0x8000C028u;
            return;
    }

label_80008DF8:
    ctx->pc = 0x80008DF8u;
    ctx->downcount -= 2;
    // 80008DF8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80008DFC:
    ctx->pc = 0x80008DFCu;
    // 80008DFC: b       0x80008E34
    {
            goto label_80008E34;
    }

label_80008E00:
    ctx->pc = 0x80008E00u;
    ctx->downcount -= 4;
    // 80008E00: addi    r4, r31, 96
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(96);

label_80008E04:
    ctx->pc = 0x80008E04u;
    // 80008E04: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80008E08:
    ctx->pc = 0x80008E08u;
    // 80008E08: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80008E0C:
    ctx->pc = 0x80008E0Cu;
    // 80008E0C: bl      0x8000CF98
    {
            ctx->lr = 0x80008E10u;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_80008E10:
    ctx->pc = 0x80008E10u;
    ctx->downcount -= 2;
    // 80008E10: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80008E14:
    ctx->pc = 0x80008E14u;
    // 80008E14: bl      0x80007784
    {
            ctx->lr = 0x80008E18u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007784u;
                return;
            }
            goto label_80007784;
    }

label_80008E18:
    ctx->pc = 0x80008E18u;
    ctx->downcount -= 6;
    // 80008E18: addi    r4, r31, 128
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(128);

label_80008E1C:
    ctx->pc = 0x80008E1Cu;
    // 80008E1C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80008E20:
    ctx->pc = 0x80008E20u;
    // 80008E20: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80008E24:
    ctx->pc = 0x80008E24u;
    // 80008E24: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80008E28:
    ctx->pc = 0x80008E28u;
    // 80008E28: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80008E2C:
    ctx->pc = 0x80008E2Cu;
    // 80008E2C: bl      0x8000CF98
    {
            ctx->lr = 0x80008E30u;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_80008E30:
    ctx->pc = 0x80008E30u;
    ctx->downcount -= 1;
    // 80008E30: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80008E34:
    ctx->pc = 0x80008E34u;
    ctx->downcount -= 8;
    // 80008E34: lwz     r0, 228(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80008E38:
    ctx->pc = 0x80008E38u;
    // 80008E38: lwz     r31, 220(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(220);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80008E3C:
    ctx->pc = 0x80008E3Cu;
    // 80008E3C: lwz     r30, 216(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80008E40:
    ctx->pc = 0x80008E40u;
    // 80008E40: lwz     r29, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80008E44:
    ctx->pc = 0x80008E44u;
    // 80008E44: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80008E48:
    ctx->pc = 0x80008E48u;
    // 80008E48: addi    r1, r1, 224
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(224);

label_80008E4C:
    ctx->pc = 0x80008E4Cu;
    // 80008E4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80008E50:
    ctx->pc = 0x80008E50u;
    ctx->downcount -= 28;
    // 80008E50: stwu     r1, -2288(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-2288);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80008E54:
    ctx->pc = 0x80008E54u;
    // 80008E54: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80008E58:
    ctx->pc = 0x80008E58u;
    // 80008E58: stw     r0, 2292(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(2292);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80008E5C:
    ctx->pc = 0x80008E5Cu;
    // 80008E5C: stmw     r27, 2268(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(2268);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80008E60:
    ctx->pc = 0x80008E60u;
    // 80008E60: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80008E64:
    ctx->pc = 0x80008E64u;
    // 80008E64: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_80008E68:
    ctx->pc = 0x80008E68u;
    // 80008E68: addi    r31, r3, 9664
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(9664);

label_80008E6C:
    ctx->pc = 0x80008E6Cu;
    // 80008E6C: addi    r4, r31, 384
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(384);

label_80008E70:
    ctx->pc = 0x80008E70u;
    // 80008E70: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80008E74:
    ctx->pc = 0x80008E74u;
    // 80008E74: lwz     r28, 32(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(32);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_80008E78:
    ctx->pc = 0x80008E78u;
    // 80008E78: lhz     r29, 28(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(28);
        ctx->gpr[29] = mem_read16(ctx, ea);
    }

label_80008E7C:
    ctx->pc = 0x80008E7Cu;
    // 80008E7C: lbz     r30, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read8(ctx, ea);
    }

label_80008E80:
    ctx->pc = 0x80008E80u;
    // 80008E80: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80008E84:
    ctx->pc = 0x80008E84u;
    // 80008E84: lbz     r5, 20(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80008E88:
    ctx->pc = 0x80008E88u;
    // 80008E88: or   r7, r29, r29
    {
        ctx->gpr[7] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80008E8C:
    ctx->pc = 0x80008E8Cu;
    // 80008E8C: or   r8, r30, r30
    {
        ctx->gpr[8] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80008E90:
    ctx->pc = 0x80008E90u;
    // 80008E90: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80008E94:
    ctx->pc = 0x80008E94u;
    // 80008E94: bl      0x8000CF98
    {
            ctx->lr = 0x80008E98u;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_80008E98:
    ctx->pc = 0x80008E98u;
    ctx->downcount -= 2;
    // 80008E98: rlwinm. r0, r30, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x00000002u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80008E9C:
    ctx->pc = 0x80008E9Cu;
    // 80008E9C: bc    12, 2, 0x80008EDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80008EDC;
        }
    }

label_80008EA0:
    ctx->pc = 0x80008EA0u;
    ctx->downcount -= 4;
    // 80008EA0: addi    r3, r1, 76
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(76);

label_80008EA4:
    ctx->pc = 0x80008EA4u;
    // 80008EA4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80008EA8:
    ctx->pc = 0x80008EA8u;
    // 80008EA8: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80008EAC:
    ctx->pc = 0x80008EACu;
    // 80008EAC: bl      0x800050B4
    {
            ctx->lr = 0x80008EB0u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_80008EB0:
    ctx->pc = 0x80008EB0u;
    ctx->downcount -= 9;
    // 80008EB0: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_80008EB4:
    ctx->pc = 0x80008EB4u;
    // 80008EB4: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80008EB8:
    ctx->pc = 0x80008EB8u;
    // 80008EB8: li      r0, 18
    ctx->gpr[0] = (u32)(s32)(18);

label_80008EBC:
    ctx->pc = 0x80008EBCu;
    // 80008EBC: stb     r3, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_80008EC0:
    ctx->pc = 0x80008EC0u;
    // 80008EC0: addi    r3, r1, 76
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(76);

label_80008EC4:
    ctx->pc = 0x80008EC4u;
    // 80008EC4: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_80008EC8:
    ctx->pc = 0x80008EC8u;
    // 80008EC8: stw     r5, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80008ECC:
    ctx->pc = 0x80008ECCu;
    // 80008ECC: stb     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80008ED0:
    ctx->pc = 0x80008ED0u;
    // 80008ED0: bl      0x8000C028
    {
            ctx->lr = 0x80008ED4u;
            ctx->pc = 0x8000C028u;
            return;
    }

label_80008ED4:
    ctx->pc = 0x80008ED4u;
    ctx->downcount -= 2;
    // 80008ED4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80008ED8:
    ctx->pc = 0x80008ED8u;
    // 80008ED8: b       0x80009030
    {
            goto label_80009030;
    }

label_80008EDC:
    ctx->pc = 0x80008EDCu;
    ctx->downcount -= 4;
    // 80008EDC: stw     r29, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80008EE0:
    ctx->pc = 0x80008EE0u;
    // 80008EE0: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80008EE4:
    ctx->pc = 0x80008EE4u;
    // 80008EE4: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_80008EE8:
    ctx->pc = 0x80008EE8u;
    // 80008EE8: bl      0x80007DC8
    {
            ctx->lr = 0x80008EECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007DC8u;
                return;
            }
            goto label_80007DC8;
    }

label_80008EEC:
    ctx->pc = 0x80008EECu;
    ctx->downcount -= 4;
    // 80008EEC: lwz     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80008EF0:
    ctx->pc = 0x80008EF0u;
    // 80008EF0: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80008EF4:
    ctx->pc = 0x80008EF4u;
    // 80008EF4: addi    r4, r1, 204
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(204);

label_80008EF8:
    ctx->pc = 0x80008EF8u;
    // 80008EF8: bl      0x80007C98
    {
            ctx->lr = 0x80008EFCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007C98u;
                return;
            }
            goto label_80007C98;
    }

label_80008EFC:
    ctx->pc = 0x80008EFCu;
    ctx->downcount -= 7;
    // 80008EFC: rlwinm r0, r30, 29, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 29u) & 0x00000001u;
    }

label_80008F00:
    ctx->pc = 0x80008F00u;
    // 80008F00: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80008F04:
    ctx->pc = 0x80008F04u;
    // 80008F04: addi    r3, r1, 204
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(204);

label_80008F08:
    ctx->pc = 0x80008F08u;
    // 80008F08: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_80008F0C:
    ctx->pc = 0x80008F0Cu;
    // 80008F0C: xori    r6, r0, 0x0001
    ctx->gpr[6] = ctx->gpr[0] ^ 0x0001u;

label_80008F10:
    ctx->pc = 0x80008F10u;
    // 80008F10: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80008F14:
    ctx->pc = 0x80008F14u;
    // 80008F14: bl      0x8000B3B4
    {
            ctx->lr = 0x80008F18u;
            ctx->pc = 0x8000B3B4u;
            return;
    }

label_80008F18:
    ctx->pc = 0x80008F18u;
    ctx->downcount -= 5;
    // 80008F18: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80008F1C:
    ctx->pc = 0x80008F1Cu;
    // 80008F1C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80008F20:
    ctx->pc = 0x80008F20u;
    // 80008F20: or   r30, r0, r0
    {
        ctx->gpr[30] = ctx->gpr[0] | ctx->gpr[0];
    }

label_80008F24:
    ctx->pc = 0x80008F24u;
    // 80008F24: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80008F28:
    ctx->pc = 0x80008F28u;
    // 80008F28: bl      0x80007DF8
    {
            ctx->lr = 0x80008F2Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007DF8u;
                return;
            }
            goto label_80007DF8;
    }

label_80008F2C:
    ctx->pc = 0x80008F2Cu;
    ctx->downcount -= 2;
    // 80008F2C: cmpwi   r30, 0
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

label_80008F30:
    ctx->pc = 0x80008F30u;
    // 80008F30: bc    4, 2, 0x80008F6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80008F6C;
        }
    }

label_80008F34:
    ctx->pc = 0x80008F34u;
    ctx->downcount -= 4;
    // 80008F34: addi    r3, r1, 140
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(140);

label_80008F38:
    ctx->pc = 0x80008F38u;
    // 80008F38: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80008F3C:
    ctx->pc = 0x80008F3Cu;
    // 80008F3C: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80008F40:
    ctx->pc = 0x80008F40u;
    // 80008F40: bl      0x800050B4
    {
            ctx->lr = 0x80008F44u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_80008F44:
    ctx->pc = 0x80008F44u;
    ctx->downcount -= 9;
    // 80008F44: li      r3, 64
    ctx->gpr[3] = (u32)(s32)(64);

label_80008F48:
    ctx->pc = 0x80008F48u;
    // 80008F48: li      r0, 128
    ctx->gpr[0] = (u32)(s32)(128);

label_80008F4C:
    ctx->pc = 0x80008F4Cu;
    // 80008F4C: stw     r3, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80008F50:
    ctx->pc = 0x80008F50u;
    // 80008F50: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80008F54:
    ctx->pc = 0x80008F54u;
    // 80008F54: addi    r4, r1, 140
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(140);

label_80008F58:
    ctx->pc = 0x80008F58u;
    // 80008F58: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80008F5C:
    ctx->pc = 0x80008F5Cu;
    // 80008F5C: stb     r0, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80008F60:
    ctx->pc = 0x80008F60u;
    // 80008F60: stb     r30, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_80008F64:
    ctx->pc = 0x80008F64u;
    // 80008F64: bl      0x80007D24
    {
            ctx->lr = 0x80008F68u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007D24u;
                return;
            }
            goto label_80007D24;
    }

label_80008F68:
    ctx->pc = 0x80008F68u;
    ctx->downcount -= 1;
    // 80008F68: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80008F6C:
    ctx->pc = 0x80008F6Cu;
    ctx->downcount -= 2;
    // 80008F6C: cmpwi   r30, 0
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

label_80008F70:
    ctx->pc = 0x80008F70u;
    // 80008F70: bc    12, 2, 0x80008FFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80008FFC;
        }
    }

label_80008F74:
    ctx->pc = 0x80008F74u;
    ctx->downcount -= 3;
    // 80008F74: addi    r0, r30, -1792
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(-1792);

label_80008F78:
    ctx->pc = 0x80008F78u;
    // 80008F78: cmplwi  r0, 0x0006
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0006u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80008F7C:
    ctx->pc = 0x80008F7Cu;
    // 80008F7C: bc    12, 1, 0x80008FC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80008FC0;
        }
    }

label_80008F80:
    ctx->pc = 0x80008F80u;
    ctx->downcount -= 7;
    // 80008F80: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_80008F84:
    ctx->pc = 0x80008F84u;
    // 80008F84: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80008F88:
    ctx->pc = 0x80008F88u;
    // 80008F88: addi    r3, r3, -5968
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5968);

label_80008F8C:
    ctx->pc = 0x80008F8Cu;
    // 80008F8C: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80008F90:
    ctx->pc = 0x80008F90u;
    // 80008F90: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80008F94:
    ctx->pc = 0x80008F94u;
    // 80008F94: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80008F98:
    ctx->pc = 0x80008F98u;
    ctx->downcount -= 2;
    // 80008F98: li      r30, 21
    ctx->gpr[30] = (u32)(s32)(21);

label_80008F9C:
    ctx->pc = 0x80008F9Cu;
    // 80008F9C: b       0x80008FC4
    {
            goto label_80008FC4;
    }

label_80008FA0:
    ctx->pc = 0x80008FA0u;
    ctx->downcount -= 2;
    // 80008FA0: li      r30, 19
    ctx->gpr[30] = (u32)(s32)(19);

label_80008FA4:
    ctx->pc = 0x80008FA4u;
    // 80008FA4: b       0x80008FC4
    {
            goto label_80008FC4;
    }

label_80008FA8:
    ctx->pc = 0x80008FA8u;
    ctx->downcount -= 2;
    // 80008FA8: li      r30, 33
    ctx->gpr[30] = (u32)(s32)(33);

label_80008FAC:
    ctx->pc = 0x80008FACu;
    // 80008FAC: b       0x80008FC4
    {
            goto label_80008FC4;
    }

label_80008FB0:
    ctx->pc = 0x80008FB0u;
    ctx->downcount -= 2;
    // 80008FB0: li      r30, 34
    ctx->gpr[30] = (u32)(s32)(34);

label_80008FB4:
    ctx->pc = 0x80008FB4u;
    // 80008FB4: b       0x80008FC4
    {
            goto label_80008FC4;
    }

label_80008FB8:
    ctx->pc = 0x80008FB8u;
    ctx->downcount -= 2;
    // 80008FB8: li      r30, 32
    ctx->gpr[30] = (u32)(s32)(32);

label_80008FBC:
    ctx->pc = 0x80008FBCu;
    // 80008FBC: b       0x80008FC4
    {
            goto label_80008FC4;
    }

label_80008FC0:
    ctx->pc = 0x80008FC0u;
    ctx->downcount -= 1;
    // 80008FC0: li      r30, 3
    ctx->gpr[30] = (u32)(s32)(3);

label_80008FC4:
    ctx->pc = 0x80008FC4u;
    ctx->downcount -= 4;
    // 80008FC4: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_80008FC8:
    ctx->pc = 0x80008FC8u;
    // 80008FC8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80008FCC:
    ctx->pc = 0x80008FCCu;
    // 80008FCC: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80008FD0:
    ctx->pc = 0x80008FD0u;
    // 80008FD0: bl      0x800050B4
    {
            ctx->lr = 0x80008FD4u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_80008FD4:
    ctx->pc = 0x80008FD4u;
    ctx->downcount -= 8;
    // 80008FD4: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_80008FD8:
    ctx->pc = 0x80008FD8u;
    // 80008FD8: li      r0, 64
    ctx->gpr[0] = (u32)(s32)(64);

label_80008FDC:
    ctx->pc = 0x80008FDCu;
    // 80008FDC: stb     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_80008FE0:
    ctx->pc = 0x80008FE0u;
    // 80008FE0: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_80008FE4:
    ctx->pc = 0x80008FE4u;
    // 80008FE4: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_80008FE8:
    ctx->pc = 0x80008FE8u;
    // 80008FE8: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80008FEC:
    ctx->pc = 0x80008FECu;
    // 80008FEC: stb     r30, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_80008FF0:
    ctx->pc = 0x80008FF0u;
    // 80008FF0: bl      0x8000C028
    {
            ctx->lr = 0x80008FF4u;
            ctx->pc = 0x8000C028u;
            return;
    }

label_80008FF4:
    ctx->pc = 0x80008FF4u;
    ctx->downcount -= 2;
    // 80008FF4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80008FF8:
    ctx->pc = 0x80008FF8u;
    // 80008FF8: b       0x80009030
    {
            goto label_80009030;
    }

label_80008FFC:
    ctx->pc = 0x80008FFCu;
    ctx->downcount -= 4;
    // 80008FFC: addi    r4, r31, 96
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(96);

label_80009000:
    ctx->pc = 0x80009000u;
    // 80009000: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80009004:
    ctx->pc = 0x80009004u;
    // 80009004: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80009008:
    ctx->pc = 0x80009008u;
    // 80009008: bl      0x8000CF98
    {
            ctx->lr = 0x8000900Cu;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_8000900C:
    ctx->pc = 0x8000900Cu;
    ctx->downcount -= 2;
    // 8000900C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80009010:
    ctx->pc = 0x80009010u;
    // 80009010: bl      0x80007784
    {
            ctx->lr = 0x80009014u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007784u;
                return;
            }
            goto label_80007784;
    }

label_80009014:
    ctx->pc = 0x80009014u;
    ctx->downcount -= 6;
    // 80009014: addi    r4, r31, 128
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(128);

label_80009018:
    ctx->pc = 0x80009018u;
    // 80009018: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000901C:
    ctx->pc = 0x8000901Cu;
    // 8000901C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80009020:
    ctx->pc = 0x80009020u;
    // 80009020: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80009024:
    ctx->pc = 0x80009024u;
    // 80009024: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80009028:
    ctx->pc = 0x80009028u;
    // 80009028: bl      0x8000CF98
    {
            ctx->lr = 0x8000902Cu;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_8000902C:
    ctx->pc = 0x8000902Cu;
    ctx->downcount -= 1;
    // 8000902C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80009030:
    ctx->pc = 0x80009030u;
    ctx->downcount -= 16;
    // 80009030: lmw     r27, 2268(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(2268);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80009034:
    ctx->pc = 0x80009034u;
    // 80009034: lwz     r0, 2292(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(2292);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80009038:
    ctx->pc = 0x80009038u;
    // 80009038: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000903C:
    ctx->pc = 0x8000903Cu;
    // 8000903C: addi    r1, r1, 2288
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(2288);

label_80009040:
    ctx->pc = 0x80009040u;
    // 80009040: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80009044:
    ctx->pc = 0x80009044u;
    ctx->downcount -= 28;
    // 80009044: stwu     r1, -2288(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-2288);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80009048:
    ctx->pc = 0x80009048u;
    // 80009048: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000904C:
    ctx->pc = 0x8000904Cu;
    // 8000904C: stw     r0, 2292(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(2292);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80009050:
    ctx->pc = 0x80009050u;
    // 80009050: stmw     r27, 2268(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(2268);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80009054:
    ctx->pc = 0x80009054u;
    // 80009054: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80009058:
    ctx->pc = 0x80009058u;
    // 80009058: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8000905C:
    ctx->pc = 0x8000905Cu;
    // 8000905C: addi    r31, r3, 9664
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(9664);

label_80009060:
    ctx->pc = 0x80009060u;
    // 80009060: addi    r4, r31, 432
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(432);

label_80009064:
    ctx->pc = 0x80009064u;
    // 80009064: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80009068:
    ctx->pc = 0x80009068u;
    // 80009068: lwz     r28, 32(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(32);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_8000906C:
    ctx->pc = 0x8000906Cu;
    // 8000906C: lhz     r29, 28(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(28);
        ctx->gpr[29] = mem_read16(ctx, ea);
    }

label_80009070:
    ctx->pc = 0x80009070u;
    // 80009070: lbz     r30, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read8(ctx, ea);
    }

label_80009074:
    ctx->pc = 0x80009074u;
    // 80009074: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80009078:
    ctx->pc = 0x80009078u;
    // 80009078: lbz     r5, 20(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8000907C:
    ctx->pc = 0x8000907Cu;
    // 8000907C: or   r7, r29, r29
    {
        ctx->gpr[7] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80009080:
    ctx->pc = 0x80009080u;
    // 80009080: or   r8, r30, r30
    {
        ctx->gpr[8] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80009084:
    ctx->pc = 0x80009084u;
    // 80009084: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80009088:
    ctx->pc = 0x80009088u;
    // 80009088: bl      0x8000CF98
    {
            ctx->lr = 0x8000908Cu;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_8000908C:
    ctx->pc = 0x8000908Cu;
    ctx->downcount -= 2;
    // 8000908C: rlwinm. r0, r30, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x00000002u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80009090:
    ctx->pc = 0x80009090u;
    // 80009090: bc    12, 2, 0x800090D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800090D0;
        }
    }

label_80009094:
    ctx->pc = 0x80009094u;
    ctx->downcount -= 4;
    // 80009094: addi    r3, r1, 76
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(76);

label_80009098:
    ctx->pc = 0x80009098u;
    // 80009098: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8000909C:
    ctx->pc = 0x8000909Cu;
    // 8000909C: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_800090A0:
    ctx->pc = 0x800090A0u;
    // 800090A0: bl      0x800050B4
    {
            ctx->lr = 0x800090A4u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_800090A4:
    ctx->pc = 0x800090A4u;
    ctx->downcount -= 9;
    // 800090A4: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_800090A8:
    ctx->pc = 0x800090A8u;
    // 800090A8: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_800090AC:
    ctx->pc = 0x800090ACu;
    // 800090AC: li      r0, 18
    ctx->gpr[0] = (u32)(s32)(18);

label_800090B0:
    ctx->pc = 0x800090B0u;
    // 800090B0: stb     r3, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_800090B4:
    ctx->pc = 0x800090B4u;
    // 800090B4: addi    r3, r1, 76
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(76);

label_800090B8:
    ctx->pc = 0x800090B8u;
    // 800090B8: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_800090BC:
    ctx->pc = 0x800090BCu;
    // 800090BC: stw     r5, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_800090C0:
    ctx->pc = 0x800090C0u;
    // 800090C0: stb     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800090C4:
    ctx->pc = 0x800090C4u;
    // 800090C4: bl      0x8000C028
    {
            ctx->lr = 0x800090C8u;
            ctx->pc = 0x8000C028u;
            return;
    }

label_800090C8:
    ctx->pc = 0x800090C8u;
    ctx->downcount -= 2;
    // 800090C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800090CC:
    ctx->pc = 0x800090CCu;
    // 800090CC: b       0x8000921C
    {
            goto label_8000921C;
    }

label_800090D0:
    ctx->pc = 0x800090D0u;
    ctx->downcount -= 8;
    // 800090D0: rlwinm r0, r30, 29, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 29u) & 0x00000001u;
    }

label_800090D4:
    ctx->pc = 0x800090D4u;
    // 800090D4: stw     r29, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_800090D8:
    ctx->pc = 0x800090D8u;
    // 800090D8: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_800090DC:
    ctx->pc = 0x800090DCu;
    // 800090DC: addi    r3, r1, 204
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(204);

label_800090E0:
    ctx->pc = 0x800090E0u;
    // 800090E0: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_800090E4:
    ctx->pc = 0x800090E4u;
    // 800090E4: xori    r6, r0, 0x0001
    ctx->gpr[6] = ctx->gpr[0] ^ 0x0001u;

label_800090E8:
    ctx->pc = 0x800090E8u;
    // 800090E8: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_800090EC:
    ctx->pc = 0x800090ECu;
    // 800090EC: bl      0x8000B3B4
    {
            ctx->lr = 0x800090F0u;
            ctx->pc = 0x8000B3B4u;
            return;
    }

label_800090F0:
    ctx->pc = 0x800090F0u;
    ctx->downcount -= 5;
    // 800090F0: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800090F4:
    ctx->pc = 0x800090F4u;
    // 800090F4: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_800090F8:
    ctx->pc = 0x800090F8u;
    // 800090F8: or   r30, r0, r0
    {
        ctx->gpr[30] = ctx->gpr[0] | ctx->gpr[0];
    }

label_800090FC:
    ctx->pc = 0x800090FCu;
    // 800090FC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80009100:
    ctx->pc = 0x80009100u;
    // 80009100: bl      0x80007DF8
    {
            ctx->lr = 0x80009104u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007DF8u;
                return;
            }
            goto label_80007DF8;
    }

label_80009104:
    ctx->pc = 0x80009104u;
    ctx->downcount -= 2;
    // 80009104: cmpwi   r30, 0
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

label_80009108:
    ctx->pc = 0x80009108u;
    // 80009108: bc    4, 2, 0x80009158
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80009158;
        }
    }

label_8000910C:
    ctx->pc = 0x8000910Cu;
    ctx->downcount -= 4;
    // 8000910C: addi    r3, r1, 140
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(140);

label_80009110:
    ctx->pc = 0x80009110u;
    // 80009110: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80009114:
    ctx->pc = 0x80009114u;
    // 80009114: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80009118:
    ctx->pc = 0x80009118u;
    // 80009118: bl      0x800050B4
    {
            ctx->lr = 0x8000911Cu;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8000911C:
    ctx->pc = 0x8000911Cu;
    ctx->downcount -= 10;
    // 8000911C: lwz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80009120:
    ctx->pc = 0x80009120u;
    // 80009120: li      r0, 128
    ctx->gpr[0] = (u32)(s32)(128);

label_80009124:
    ctx->pc = 0x80009124u;
    // 80009124: stb     r30, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_80009128:
    ctx->pc = 0x80009128u;
    // 80009128: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8000912C:
    ctx->pc = 0x8000912Cu;
    // 8000912C: addi    r4, r4, 64
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(64);

label_80009130:
    ctx->pc = 0x80009130u;
    // 80009130: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80009134:
    ctx->pc = 0x80009134u;
    // 80009134: stw     r4, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80009138:
    ctx->pc = 0x80009138u;
    // 80009138: addi    r4, r1, 140
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(140);

label_8000913C:
    ctx->pc = 0x8000913Cu;
    // 8000913C: stb     r0, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80009140:
    ctx->pc = 0x80009140u;
    // 80009140: bl      0x80007D24
    {
            ctx->lr = 0x80009144u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007D24u;
                return;
            }
            goto label_80007D24;
    }

label_80009144:
    ctx->pc = 0x80009144u;
    ctx->downcount -= 4;
    // 80009144: lwz     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80009148:
    ctx->pc = 0x80009148u;
    // 80009148: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8000914C:
    ctx->pc = 0x8000914Cu;
    // 8000914C: addi    r4, r1, 204
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(204);

label_80009150:
    ctx->pc = 0x80009150u;
    // 80009150: bl      0x80007D24
    {
            ctx->lr = 0x80009154u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007D24u;
                return;
            }
            goto label_80007D24;
    }

label_80009154:
    ctx->pc = 0x80009154u;
    ctx->downcount -= 1;
    // 80009154: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80009158:
    ctx->pc = 0x80009158u;
    ctx->downcount -= 2;
    // 80009158: cmpwi   r30, 0
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

label_8000915C:
    ctx->pc = 0x8000915Cu;
    // 8000915C: bc    12, 2, 0x800091E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800091E8;
        }
    }

label_80009160:
    ctx->pc = 0x80009160u;
    ctx->downcount -= 3;
    // 80009160: addi    r0, r30, -1792
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(-1792);

label_80009164:
    ctx->pc = 0x80009164u;
    // 80009164: cmplwi  r0, 0x0006
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0006u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80009168:
    ctx->pc = 0x80009168u;
    // 80009168: bc    12, 1, 0x800091AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800091AC;
        }
    }

label_8000916C:
    ctx->pc = 0x8000916Cu;
    ctx->downcount -= 7;
    // 8000916C: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_80009170:
    ctx->pc = 0x80009170u;
    // 80009170: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80009174:
    ctx->pc = 0x80009174u;
    // 80009174: addi    r3, r3, -5940
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5940);

label_80009178:
    ctx->pc = 0x80009178u;
    // 80009178: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000917C:
    ctx->pc = 0x8000917Cu;
    // 8000917C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80009180:
    ctx->pc = 0x80009180u;
    // 80009180: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80009184:
    ctx->pc = 0x80009184u;
    ctx->downcount -= 2;
    // 80009184: li      r30, 21
    ctx->gpr[30] = (u32)(s32)(21);

label_80009188:
    ctx->pc = 0x80009188u;
    // 80009188: b       0x800091B0
    {
            goto label_800091B0;
    }

label_8000918C:
    ctx->pc = 0x8000918Cu;
    ctx->downcount -= 2;
    // 8000918C: li      r30, 19
    ctx->gpr[30] = (u32)(s32)(19);

label_80009190:
    ctx->pc = 0x80009190u;
    // 80009190: b       0x800091B0
    {
            goto label_800091B0;
    }

label_80009194:
    ctx->pc = 0x80009194u;
    ctx->downcount -= 2;
    // 80009194: li      r30, 33
    ctx->gpr[30] = (u32)(s32)(33);

label_80009198:
    ctx->pc = 0x80009198u;
    // 80009198: b       0x800091B0
    {
            goto label_800091B0;
    }

label_8000919C:
    ctx->pc = 0x8000919Cu;
    ctx->downcount -= 2;
    // 8000919C: li      r30, 34
    ctx->gpr[30] = (u32)(s32)(34);

label_800091A0:
    ctx->pc = 0x800091A0u;
    // 800091A0: b       0x800091B0
    {
            goto label_800091B0;
    }

label_800091A4:
    ctx->pc = 0x800091A4u;
    ctx->downcount -= 2;
    // 800091A4: li      r30, 32
    ctx->gpr[30] = (u32)(s32)(32);

label_800091A8:
    ctx->pc = 0x800091A8u;
    // 800091A8: b       0x800091B0
    {
            goto label_800091B0;
    }

label_800091AC:
    ctx->pc = 0x800091ACu;
    ctx->downcount -= 1;
    // 800091AC: li      r30, 3
    ctx->gpr[30] = (u32)(s32)(3);

label_800091B0:
    ctx->pc = 0x800091B0u;
    ctx->downcount -= 4;
    // 800091B0: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_800091B4:
    ctx->pc = 0x800091B4u;
    // 800091B4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800091B8:
    ctx->pc = 0x800091B8u;
    // 800091B8: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_800091BC:
    ctx->pc = 0x800091BCu;
    // 800091BC: bl      0x800050B4
    {
            ctx->lr = 0x800091C0u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_800091C0:
    ctx->pc = 0x800091C0u;
    ctx->downcount -= 8;
    // 800091C0: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_800091C4:
    ctx->pc = 0x800091C4u;
    // 800091C4: li      r0, 64
    ctx->gpr[0] = (u32)(s32)(64);

label_800091C8:
    ctx->pc = 0x800091C8u;
    // 800091C8: stb     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_800091CC:
    ctx->pc = 0x800091CCu;
    // 800091CC: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_800091D0:
    ctx->pc = 0x800091D0u;
    // 800091D0: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_800091D4:
    ctx->pc = 0x800091D4u;
    // 800091D4: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800091D8:
    ctx->pc = 0x800091D8u;
    // 800091D8: stb     r30, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_800091DC:
    ctx->pc = 0x800091DCu;
    // 800091DC: bl      0x8000C028
    {
            ctx->lr = 0x800091E0u;
            ctx->pc = 0x8000C028u;
            return;
    }

label_800091E0:
    ctx->pc = 0x800091E0u;
    ctx->downcount -= 2;
    // 800091E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800091E4:
    ctx->pc = 0x800091E4u;
    // 800091E4: b       0x8000921C
    {
            goto label_8000921C;
    }

label_800091E8:
    ctx->pc = 0x800091E8u;
    ctx->downcount -= 4;
    // 800091E8: addi    r4, r31, 96
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(96);

label_800091EC:
    ctx->pc = 0x800091ECu;
    // 800091EC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_800091F0:
    ctx->pc = 0x800091F0u;
    // 800091F0: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_800091F4:
    ctx->pc = 0x800091F4u;
    // 800091F4: bl      0x8000CF98
    {
            ctx->lr = 0x800091F8u;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_800091F8:
    ctx->pc = 0x800091F8u;
    ctx->downcount -= 2;
    // 800091F8: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_800091FC:
    ctx->pc = 0x800091FCu;
    // 800091FC: bl      0x80007784
    {
            ctx->lr = 0x80009200u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007784u;
                return;
            }
            goto label_80007784;
    }

label_80009200:
    ctx->pc = 0x80009200u;
    ctx->downcount -= 6;
    // 80009200: addi    r4, r31, 128
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(128);

label_80009204:
    ctx->pc = 0x80009204u;
    // 80009204: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80009208:
    ctx->pc = 0x80009208u;
    // 80009208: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8000920C:
    ctx->pc = 0x8000920Cu;
    // 8000920C: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80009210:
    ctx->pc = 0x80009210u;
    // 80009210: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80009214:
    ctx->pc = 0x80009214u;
    // 80009214: bl      0x8000CF98
    {
            ctx->lr = 0x80009218u;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_80009218:
    ctx->pc = 0x80009218u;
    ctx->downcount -= 1;
    // 80009218: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8000921C:
    ctx->pc = 0x8000921Cu;
    ctx->downcount -= 16;
    // 8000921C: lmw     r27, 2268(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(2268);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80009220:
    ctx->pc = 0x80009220u;
    // 80009220: lwz     r0, 2292(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(2292);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80009224:
    ctx->pc = 0x80009224u;
    // 80009224: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80009228:
    ctx->pc = 0x80009228u;
    // 80009228: addi    r1, r1, 2288
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(2288);

label_8000922C:
    ctx->pc = 0x8000922Cu;
    // 8000922C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80009230:
    ctx->pc = 0x80009230u;
    ctx->downcount -= 2;
    // 80009230: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80009234:
    ctx->pc = 0x80009234u;
    // 80009234: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80009238:
    ctx->pc = 0x80009238u;
    ctx->downcount -= 2;
    // 80009238: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000923C:
    ctx->pc = 0x8000923Cu;
    // 8000923C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80009240:
    ctx->pc = 0x80009240u;
    ctx->downcount -= 7;
    // 80009240: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80009244:
    ctx->pc = 0x80009244u;
    // 80009244: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80009248:
    ctx->pc = 0x80009248u;
    // 80009248: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8000924C:
    ctx->pc = 0x8000924Cu;
    // 8000924C: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80009250:
    ctx->pc = 0x80009250u;
    // 80009250: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80009254:
    ctx->pc = 0x80009254u;
    // 80009254: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80009258:
    ctx->pc = 0x80009258u;
    // 80009258: bl      0x800050B4
    {
            ctx->lr = 0x8000925Cu;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8000925C:
    ctx->pc = 0x8000925Cu;
    ctx->downcount -= 9;
    // 8000925C: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_80009260:
    ctx->pc = 0x80009260u;
    // 80009260: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80009264:
    ctx->pc = 0x80009264u;
    // 80009264: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80009268:
    ctx->pc = 0x80009268u;
    // 80009268: stb     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_8000926C:
    ctx->pc = 0x8000926Cu;
    // 8000926C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80009270:
    ctx->pc = 0x80009270u;
    // 80009270: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_80009274:
    ctx->pc = 0x80009274u;
    // 80009274: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80009278:
    ctx->pc = 0x80009278u;
    // 80009278: stb     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8000927C:
    ctx->pc = 0x8000927Cu;
    // 8000927C: bl      0x8000C028
    {
            ctx->lr = 0x80009280u;
            ctx->pc = 0x8000C028u;
            return;
    }

label_80009280:
    ctx->pc = 0x80009280u;
    ctx->downcount -= 1;
    // 80009280: bl      0x8000BCB8
    {
            ctx->lr = 0x80009284u;
            ctx->pc = 0x8000BCB8u;
            return;
    }

label_80009284:
    ctx->pc = 0x80009284u;
    ctx->downcount -= 6;
    // 80009284: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80009288:
    ctx->pc = 0x80009288u;
    // 80009288: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000928C:
    ctx->pc = 0x8000928Cu;
    // 8000928C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80009290:
    ctx->pc = 0x80009290u;
    // 80009290: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_80009294:
    ctx->pc = 0x80009294u;
    // 80009294: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80009298:
    ctx->pc = 0x80009298u;
    ctx->downcount -= 7;
    // 80009298: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000929C:
    ctx->pc = 0x8000929Cu;
    // 8000929C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800092A0:
    ctx->pc = 0x800092A0u;
    // 800092A0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800092A4:
    ctx->pc = 0x800092A4u;
    // 800092A4: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_800092A8:
    ctx->pc = 0x800092A8u;
    // 800092A8: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800092AC:
    ctx->pc = 0x800092ACu;
    // 800092AC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_800092B0:
    ctx->pc = 0x800092B0u;
    // 800092B0: bl      0x800050B4
    {
            ctx->lr = 0x800092B4u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_800092B4:
    ctx->pc = 0x800092B4u;
    ctx->downcount -= 9;
    // 800092B4: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_800092B8:
    ctx->pc = 0x800092B8u;
    // 800092B8: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_800092BC:
    ctx->pc = 0x800092BCu;
    // 800092BC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_800092C0:
    ctx->pc = 0x800092C0u;
    // 800092C0: stb     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_800092C4:
    ctx->pc = 0x800092C4u;
    // 800092C4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_800092C8:
    ctx->pc = 0x800092C8u;
    // 800092C8: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_800092CC:
    ctx->pc = 0x800092CCu;
    // 800092CC: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_800092D0:
    ctx->pc = 0x800092D0u;
    // 800092D0: stb     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800092D4:
    ctx->pc = 0x800092D4u;
    // 800092D4: bl      0x8000C028
    {
            ctx->lr = 0x800092D8u;
            ctx->pc = 0x8000C028u;
            return;
    }

label_800092D8:
    ctx->pc = 0x800092D8u;
    ctx->downcount -= 1;
    // 800092D8: bl      0x80005088
    {
            ctx->lr = 0x800092DCu;
            ctx->pc = 0x80005088u;
            return;
    }

label_800092DC:
    ctx->pc = 0x800092DCu;
    ctx->downcount -= 6;
    // 800092DC: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800092E0:
    ctx->pc = 0x800092E0u;
    // 800092E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800092E4:
    ctx->pc = 0x800092E4u;
    // 800092E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800092E8:
    ctx->pc = 0x800092E8u;
    // 800092E8: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_800092EC:
    ctx->pc = 0x800092ECu;
    // 800092EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_800092F0:
    ctx->pc = 0x800092F0u;
    ctx->downcount -= 11;
    // 800092F0: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800092F4:
    ctx->pc = 0x800092F4u;
    // 800092F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800092F8:
    ctx->pc = 0x800092F8u;
    // 800092F8: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_800092FC:
    ctx->pc = 0x800092FCu;
    // 800092FC: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80009300:
    ctx->pc = 0x80009300u;
    // 80009300: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80009304:
    ctx->pc = 0x80009304u;
    // 80009304: addi    r4, r3, -21064
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-21064);

label_80009308:
    ctx->pc = 0x80009308u;
    // 80009308: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8000930C:
    ctx->pc = 0x8000930Cu;
    // 8000930C: addi    r3, r1, 20
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(20);

label_80009310:
    ctx->pc = 0x80009310u;
    // 80009310: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80009314:
    ctx->pc = 0x80009314u;
    // 80009314: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80009318:
    ctx->pc = 0x80009318u;
    // 80009318: bl      0x800050B4
    {
            ctx->lr = 0x8000931Cu;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8000931C:
    ctx->pc = 0x8000931Cu;
    ctx->downcount -= 9;
    // 8000931C: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_80009320:
    ctx->pc = 0x80009320u;
    // 80009320: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80009324:
    ctx->pc = 0x80009324u;
    // 80009324: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80009328:
    ctx->pc = 0x80009328u;
    // 80009328: stb     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_8000932C:
    ctx->pc = 0x8000932Cu;
    // 8000932C: addi    r3, r1, 20
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(20);

label_80009330:
    ctx->pc = 0x80009330u;
    // 80009330: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_80009334:
    ctx->pc = 0x80009334u;
    // 80009334: stw     r5, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80009338:
    ctx->pc = 0x80009338u;
    // 80009338: stb     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8000933C:
    ctx->pc = 0x8000933Cu;
    // 8000933C: bl      0x8000C028
    {
            ctx->lr = 0x80009340u;
            ctx->pc = 0x8000C028u;
            return;
    }

label_80009340:
    ctx->pc = 0x80009340u;
    ctx->downcount -= 3;
    // 80009340: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80009344:
    ctx->pc = 0x80009344u;
    // 80009344: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80009348:
    ctx->pc = 0x80009348u;
    // 80009348: bl      0x800073E8
    {
            ctx->lr = 0x8000934Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800073E8u;
                return;
            }
            goto label_800073E8;
    }

label_8000934C:
    ctx->pc = 0x8000934Cu;
    ctx->downcount -= 2;
    // 8000934C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80009350:
    ctx->pc = 0x80009350u;
    // 80009350: bl      0x80007400
    {
            ctx->lr = 0x80009354u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007400u;
                return;
            }
            goto label_80007400;
    }

label_80009354:
    ctx->pc = 0x80009354u;
    ctx->downcount -= 6;
    // 80009354: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80009358:
    ctx->pc = 0x80009358u;
    // 80009358: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000935C:
    ctx->pc = 0x8000935Cu;
    // 8000935C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80009360:
    ctx->pc = 0x80009360u;
    // 80009360: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80009364:
    ctx->pc = 0x80009364u;
    // 80009364: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80009368:
    ctx->pc = 0x80009368u;
    ctx->downcount -= 11;
    // 80009368: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000936C:
    ctx->pc = 0x8000936Cu;
    // 8000936C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80009370:
    ctx->pc = 0x80009370u;
    // 80009370: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_80009374:
    ctx->pc = 0x80009374u;
    // 80009374: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80009378:
    ctx->pc = 0x80009378u;
    // 80009378: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000937C:
    ctx->pc = 0x8000937Cu;
    // 8000937C: addi    r4, r3, -21064
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-21064);

label_80009380:
    ctx->pc = 0x80009380u;
    // 80009380: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80009384:
    ctx->pc = 0x80009384u;
    // 80009384: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80009388:
    ctx->pc = 0x80009388u;
    // 80009388: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000938C:
    ctx->pc = 0x8000938Cu;
    // 8000938C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80009390:
    ctx->pc = 0x80009390u;
    // 80009390: bl      0x800050B4
    {
            ctx->lr = 0x80009394u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_80009394:
    ctx->pc = 0x80009394u;
    ctx->downcount -= 9;
    // 80009394: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_80009398:
    ctx->pc = 0x80009398u;
    // 80009398: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_8000939C:
    ctx->pc = 0x8000939Cu;
    // 8000939C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_800093A0:
    ctx->pc = 0x800093A0u;
    // 800093A0: stb     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_800093A4:
    ctx->pc = 0x800093A4u;
    // 800093A4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_800093A8:
    ctx->pc = 0x800093A8u;
    // 800093A8: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_800093AC:
    ctx->pc = 0x800093ACu;
    // 800093AC: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_800093B0:
    ctx->pc = 0x800093B0u;
    // 800093B0: stb     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800093B4:
    ctx->pc = 0x800093B4u;
    // 800093B4: bl      0x8000C028
    {
            ctx->lr = 0x800093B8u;
            ctx->pc = 0x8000C028u;
            return;
    }

label_800093B8:
    ctx->pc = 0x800093B8u;
    ctx->downcount -= 6;
    // 800093B8: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800093BC:
    ctx->pc = 0x800093BCu;
    // 800093BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800093C0:
    ctx->pc = 0x800093C0u;
    // 800093C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800093C4:
    ctx->pc = 0x800093C4u;
    // 800093C4: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_800093C8:
    ctx->pc = 0x800093C8u;
    // 800093C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_800093CC:
    ctx->pc = 0x800093CCu;
    ctx->downcount -= 3;
    // 800093CC: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_800093D0:
    ctx->pc = 0x800093D0u;
    // 800093D0: stw     r3, -21064(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21064);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800093D4:
    ctx->pc = 0x800093D4u;
    // 800093D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_800093D8:
    ctx->pc = 0x800093D8u;
    ctx->downcount -= 4;
    // 800093D8: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_800093DC:
    ctx->pc = 0x800093DCu;
    // 800093DC: addi    r3, r3, -21064
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-21064);

label_800093E0:
    ctx->pc = 0x800093E0u;
    // 800093E0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800093E4:
    ctx->pc = 0x800093E4u;
    // 800093E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_800093E8:
    ctx->pc = 0x800093E8u;
    ctx->downcount -= 22;
    // 800093E8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800093EC:
    ctx->pc = 0x800093ECu;
    // 800093EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800093F0:
    ctx->pc = 0x800093F0u;
    // 800093F0: lis     r6, -32762
    ctx->gpr[6] = ((u32)(s32)(-32762) << 16);

label_800093F4:
    ctx->pc = 0x800093F4u;
    // 800093F4: lis     r5, -32762
    ctx->gpr[5] = ((u32)(s32)(-32762) << 16);

label_800093F8:
    ctx->pc = 0x800093F8u;
    // 800093F8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800093FC:
    ctx->pc = 0x800093FCu;
    // 800093FC: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80009400:
    ctx->pc = 0x80009400u;
    // 80009400: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80009404:
    ctx->pc = 0x80009404u;
    // 80009404: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80009408:
    ctx->pc = 0x80009408u;
    // 80009408: addi    r29, r6, 10140
    ctx->gpr[29] = ctx->gpr[6] + (u32)(s32)(10140);

label_8000940C:
    ctx->pc = 0x8000940Cu;
    // 8000940C: addi    r30, r5, 10148
    ctx->gpr[30] = ctx->gpr[5] + (u32)(s32)(10148);

label_80009410:
    ctx->pc = 0x80009410u;
    // 80009410: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80009414:
    ctx->pc = 0x80009414u;
    // 80009414: b       0x80009460
    {
            goto label_80009460;
    }

label_80009418:
    ctx->pc = 0x80009418u;
    ctx->downcount -= 5;
    // 80009418: lbz     r5, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8000941C:
    // 8000941C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80009420:
    // 80009420: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_80009424:
    // 80009424: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80009428:
    // 80009428: bl      0x8000CF98
    {
            ctx->lr = 0x8000942Cu;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_8000942C:
    ctx->downcount -= 7;
    // 8000942C: rlwinm r0, r28, 28, 0, 3
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[28], 28u) & 0xF0000000u;
    }

label_80009430:
    // 80009430: rlwinm r3, r28, 1, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[28], 1u) & 0x00000001u;
    }

label_80009434:
    // 80009434: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80009438:
    // 80009438: rlwinm r0, r0, 4, 0, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFFFu;
    }

label_8000943C:
    // 8000943C: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80009440:
    // 80009440: cmpwi   r0, 15
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

label_80009444:
    // 80009444: bc    4, 2, 0x80009458
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80009458;
        }
    }

label_80009448:
    ctx->downcount -= 4;
    // 80009448: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8000944C:
    // 8000944C: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_80009450:
    // 80009450: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80009454:
    // 80009454: bl      0x8000CF98
    {
            ctx->lr = 0x80009458u;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_80009458:
    ctx->downcount -= 2;
    // 80009458: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_8000945C:
    // 8000945C: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_80009460:
    ctx->downcount -= 2;
    // 80009460: cmpw    r28, r27
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(ctx->gpr[27]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80009464:
    // 80009464: bc    12, 0, 0x80009418
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80009418u;
                return;
            }
            goto label_80009418;
        }
    }

label_80009468:
    ctx->pc = 0x80009468u;
    ctx->downcount -= 5;
    // 80009468: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8000946C:
    ctx->pc = 0x8000946Cu;
    // 8000946C: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_80009470:
    ctx->pc = 0x80009470u;
    // 80009470: addi    r4, r4, 10148
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10148);

label_80009474:
    ctx->pc = 0x80009474u;
    // 80009474: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80009478:
    ctx->pc = 0x80009478u;
    // 80009478: bl      0x8000CF98
    {
            ctx->lr = 0x8000947Cu;
            ctx->pc = 0x8000CF98u;
            return;
    }

label_8000947C:
    ctx->pc = 0x8000947Cu;
    ctx->downcount -= 16;
    // 8000947C: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80009480:
    ctx->pc = 0x80009480u;
    // 80009480: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80009484:
    ctx->pc = 0x80009484u;
    // 80009484: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80009488:
    ctx->pc = 0x80009488u;
    // 80009488: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8000948C:
    ctx->pc = 0x8000948Cu;
    // 8000948C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_80009490:
    ctx->pc = 0x80009490u;
    ctx->downcount -= 15;
    // 80009490: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80009494:
    ctx->pc = 0x80009494u;
    // 80009494: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80009498:
    ctx->pc = 0x80009498u;
    // 80009498: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000949C:
    ctx->pc = 0x8000949Cu;
    // 8000949C: stw     r31, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_800094A0:
    ctx->pc = 0x800094A0u;
    // 800094A0: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_800094A4:
    ctx->pc = 0x800094A4u;
    // 800094A4: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_800094A8:
    ctx->pc = 0x800094A8u;
    // 800094A8: stw     r30, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_800094AC:
    ctx->pc = 0x800094ACu;
    // 800094AC: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_800094B0:
    ctx->pc = 0x800094B0u;
    // 800094B0: stw     r29, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_800094B4:
    ctx->pc = 0x800094B4u;
    // 800094B4: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_800094B8:
    ctx->pc = 0x800094B8u;
    // 800094B8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800094BC:
    ctx->pc = 0x800094BCu;
    // 800094BC: stw     r28, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_800094C0:
    ctx->pc = 0x800094C0u;
    // 800094C0: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800094C4:
    ctx->pc = 0x800094C4u;
    // 800094C4: addi    r3, r1, 20
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(20);

label_800094C8:
    ctx->pc = 0x800094C8u;
    // 800094C8: bl      0x800050B4
    {
            ctx->lr = 0x800094CCu;
            ctx->pc = 0x800050B4u;
            return;
    }

label_800094CC:
    ctx->pc = 0x800094CCu;
    ctx->downcount -= 11;
    // 800094CC: li      r3, 212
    ctx->gpr[3] = (u32)(s32)(212);

label_800094D0:
    ctx->pc = 0x800094D0u;
    // 800094D0: li      r0, 64
    ctx->gpr[0] = (u32)(s32)(64);

label_800094D4:
    ctx->pc = 0x800094D4u;
    // 800094D4: stb     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_800094D8:
    ctx->pc = 0x800094D8u;
    // 800094D8: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_800094DC:
    ctx->pc = 0x800094DCu;
    // 800094DC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_800094E0:
    ctx->pc = 0x800094E0u;
    // 800094E0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800094E4:
    ctx->pc = 0x800094E4u;
    // 800094E4: stw     r28, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_800094E8:
    ctx->pc = 0x800094E8u;
    // 800094E8: lwz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800094EC:
    ctx->pc = 0x800094ECu;
    // 800094EC: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800094F0:
    ctx->pc = 0x800094F0u;
    // 800094F0: stb     r31, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write8(ctx, ea, (u8)ctx->gpr[31]);
    }

label_800094F4:
    ctx->pc = 0x800094F4u;
    // 800094F4: bl      0x80007EC8
    {
            ctx->lr = 0x800094F8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007EC8u;
                return;
            }
            goto label_80007EC8;
    }

label_800094F8:
    ctx->pc = 0x800094F8u;
    ctx->downcount -= 2;
    // 800094F8: or.   r31, r3, r3
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

label_800094FC:
    ctx->pc = 0x800094FCu;
    // 800094FC: bc    4, 2, 0x80009514
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80009514;
        }
    }

label_80009500:
    ctx->pc = 0x80009500u;
    ctx->downcount -= 4;
    // 80009500: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80009504:
    ctx->pc = 0x80009504u;
    // 80009504: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_80009508:
    ctx->pc = 0x80009508u;
    // 80009508: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_8000950C:
    ctx->pc = 0x8000950Cu;
    // 8000950C: bl      0x80007B34
    {
            ctx->lr = 0x80009510u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007B34u;
                return;
            }
            goto label_80007B34;
    }

label_80009510:
    ctx->pc = 0x80009510u;
    ctx->downcount -= 1;
    // 80009510: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80009514:
    ctx->pc = 0x80009514u;
    ctx->downcount -= 2;
    // 80009514: cmpwi   r31, 0
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

label_80009518:
    ctx->pc = 0x80009518u;
    // 80009518: bc    4, 2, 0x80009574
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80009574;
        }
    }

label_8000951C:
    ctx->pc = 0x8000951Cu;
    ctx->downcount -= 10;
    // 8000951C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80009520:
    ctx->pc = 0x80009520u;
    // 80009520: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_80009524:
    ctx->pc = 0x80009524u;
    // 80009524: stw     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80009528:
    ctx->pc = 0x80009528u;
    // 80009528: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_8000952C:
    ctx->pc = 0x8000952Cu;
    // 8000952C: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_80009530:
    ctx->pc = 0x80009530u;
    // 80009530: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_80009534:
    ctx->pc = 0x80009534u;
    // 80009534: stw     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80009538:
    ctx->pc = 0x80009538u;
    // 80009538: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_8000953C:
    ctx->pc = 0x8000953Cu;
    // 8000953C: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80009540:
    ctx->pc = 0x80009540u;
    // 80009540: bl      0x800097A4
    {
            ctx->lr = 0x80009544u;
            ctx->pc = 0x800097A4u;
            return;
    }

label_80009544:
    ctx->pc = 0x80009544u;
    ctx->downcount -= 2;
    // 80009544: or.   r31, r3, r3
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

label_80009548:
    ctx->pc = 0x80009548u;
    // 80009548: bc    4, 2, 0x8000956C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000956C;
        }
    }

label_8000954C:
    ctx->pc = 0x8000954Cu;
    ctx->downcount -= 2;
    // 8000954C: lwz     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80009550:
    ctx->pc = 0x80009550u;
    // 80009550: bl      0x80007E9C
    {
            ctx->lr = 0x80009554u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007E9Cu;
                return;
            }
            goto label_80007E9C;
    }

label_80009554:
    ctx->pc = 0x80009554u;
    ctx->downcount -= 2;
    // 80009554: cmplwi  r3, 0x0000
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

label_80009558:
    ctx->pc = 0x80009558u;
    // 80009558: bc    12, 2, 0x8000956C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000956C;
        }
    }

label_8000955C:
    ctx->pc = 0x8000955Cu;
    ctx->downcount -= 4;
    // 8000955C: lwz     r0, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80009560:
    ctx->pc = 0x80009560u;
    // 80009560: stw     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80009564:
    ctx->pc = 0x80009564u;
    // 80009564: lwz     r0, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80009568:
    ctx->pc = 0x80009568u;
    // 80009568: stw     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000956C:
    ctx->pc = 0x8000956Cu;
    ctx->downcount -= 2;
    // 8000956C: lwz     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80009570:
    ctx->pc = 0x80009570u;
    // 80009570: bl      0x80007E38
    {
            ctx->lr = 0x80009574u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007E38u;
                return;
            }
            goto label_80007E38;
    }

label_80009574:
    ctx->pc = 0x80009574u;
    ctx->downcount -= 2;
    // 80009574: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80009578:
    ctx->pc = 0x80009578u;
    // 80009578: bl      0x80007E38
    {
            ctx->lr = 0x8000957Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80007E38u;
                return;
            }
            goto label_80007E38;
    }

label_8000957C:
    ctx->pc = 0x8000957Cu;
    ctx->downcount -= 10;
    // 8000957C: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80009580:
    ctx->pc = 0x80009580u;
    // 80009580: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80009584:
    ctx->pc = 0x80009584u;
    // 80009584: lwz     r31, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80009588:
    ctx->pc = 0x80009588u;
    // 80009588: lwz     r30, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8000958C:
    ctx->pc = 0x8000958Cu;
    // 8000958C: lwz     r29, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80009590:
    ctx->pc = 0x80009590u;
    // 80009590: lwz     r28, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_80009594:
    ctx->pc = 0x80009594u;
    // 80009594: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80009598:
    ctx->pc = 0x80009598u;
    // 80009598: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_8000959C:
    ctx->pc = 0x8000959Cu;
    // 8000959C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800055E0;
        }
    }

label_800095A0:
    ctx->pc = 0x800095A0u;
    ctx->downcount -= 12;
    // 800095A0: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800095A4:
    ctx->pc = 0x800095A4u;
    // 800095A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800095A8:
    ctx->pc = 0x800095A8u;
    // 800095A8: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_800095AC:
    ctx->pc = 0x800095ACu;
    // 800095AC: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800095B0:
    ctx->pc = 0x800095B0u;
    // 800095B0: stw     r31, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_800095B4:
    ctx->pc = 0x800095B4u;
    // 800095B4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800095B8:
    ctx->pc = 0x800095B8u;
    // 800095B8: addi    r3, r1, 20
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(20);

label_800095BC:
    ctx->pc = 0x800095BCu;
    // 800095BC: stw     r30, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_800095C0:
    ctx->pc = 0x800095C0u;
    // 800095C0: stw     r29, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_800095C4:
    ctx->pc = 0x800095C4u;
    // 800095C4: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_800095C8:
    ctx->pc = 0x800095C8u;
    // 800095C8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800095CC:
    ctx->pc = 0x800095CCu;
    // 800095CC: bl      0x800050B4
    {
            ctx->lr = 0x800095D0u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_800095D0:
    ctx->pc = 0x800095D0u;
    ctx->downcount -= 4;
    // 800095D0: li      r3, 211
    ctx->gpr[3] = (u32)(s32)(211);

label_800095D4:
    ctx->pc = 0x800095D4u;
    // 800095D4: li      r0, 64
    ctx->gpr[0] = (u32)(s32)(64);

label_800095D8:
    ctx->pc = 0x800095D8u;
    // 800095D8: stb     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_800095DC:
    ctx->pc = 0x800095DCu;
    // 800095DC: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

    ctx->pc = 0x800095E0u;
    return;
return_dispatch_800055E0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80005610u: goto label_80005610;
    case 0x80005660u: goto label_80005660;
    case 0x80005664u: goto label_80005664;
    case 0x80005668u: goto label_80005668;
    case 0x8000566Cu: goto label_8000566C;
    case 0x80005674u: goto label_80005674;
    case 0x800056E0u: goto label_800056E0;
    case 0x800056F8u: goto label_800056F8;
    case 0x80005720u: goto label_80005720;
    case 0x80005728u: goto label_80005728;
    case 0x80005754u: goto label_80005754;
    case 0x80005764u: goto label_80005764;
    case 0x8000576Cu: goto label_8000576C;
    case 0x8000577Cu: goto label_8000577C;
    case 0x80005784u: goto label_80005784;
    case 0x80005790u: goto label_80005790;
    case 0x800057A4u: goto label_800057A4;
    case 0x800057B4u: goto label_800057B4;
    case 0x800057C4u: goto label_800057C4;
    case 0x800057CCu: goto label_800057CC;
    case 0x800057E0u: goto label_800057E0;
    case 0x800057E4u: goto label_800057E4;
    case 0x800057F8u: goto label_800057F8;
    case 0x80005800u: goto label_80005800;
    case 0x80005810u: goto label_80005810;
    case 0x80005824u: goto label_80005824;
    case 0x80005828u: goto label_80005828;
    case 0x8000583Cu: goto label_8000583C;
    case 0x80005848u: goto label_80005848;
    case 0x80005854u: goto label_80005854;
    case 0x80005864u: goto label_80005864;
    case 0x80005870u: goto label_80005870;
    case 0x80005880u: goto label_80005880;
    case 0x80005888u: goto label_80005888;
    case 0x8000589Cu: goto label_8000589C;
    case 0x800058C8u: goto label_800058C8;
    case 0x800058F0u: goto label_800058F0;
    case 0x8000591Cu: goto label_8000591C;
    case 0x80005924u: goto label_80005924;
    case 0x8000592Cu: goto label_8000592C;
    case 0x80005938u: goto label_80005938;
    case 0x80005948u: goto label_80005948;
    case 0x80005950u: goto label_80005950;
    case 0x80005964u: goto label_80005964;
    case 0x80005968u: goto label_80005968;
    case 0x8000597Cu: goto label_8000597C;
    case 0x80005984u: goto label_80005984;
    case 0x8000598Cu: goto label_8000598C;
    case 0x800059B8u: goto label_800059B8;
    case 0x800059E4u: goto label_800059E4;
    case 0x800059ECu: goto label_800059EC;
    case 0x800059F4u: goto label_800059F4;
    case 0x800059FCu: goto label_800059FC;
    case 0x80005A04u: goto label_80005A04;
    case 0x80005A3Cu: goto label_80005A3C;
    case 0x80005A54u: goto label_80005A54;
    case 0x80005A6Cu: goto label_80005A6C;
    case 0x80005A84u: goto label_80005A84;
    case 0x80005A9Cu: goto label_80005A9C;
    case 0x80005AB4u: goto label_80005AB4;
    case 0x80005ACCu: goto label_80005ACC;
    case 0x80005AE4u: goto label_80005AE4;
    case 0x80005AFCu: goto label_80005AFC;
    case 0x80005B14u: goto label_80005B14;
    case 0x80005B2Cu: goto label_80005B2C;
    case 0x80005B44u: goto label_80005B44;
    case 0x80005B5Cu: goto label_80005B5C;
    case 0x80005B74u: goto label_80005B74;
    case 0x80005B8Cu: goto label_80005B8C;
    case 0x80005BA4u: goto label_80005BA4;
    case 0x80005BBCu: goto label_80005BBC;
    case 0x80005BD4u: goto label_80005BD4;
    case 0x80005BECu: goto label_80005BEC;
    case 0x80005C04u: goto label_80005C04;
    case 0x80005C1Cu: goto label_80005C1C;
    case 0x80005C34u: goto label_80005C34;
    case 0x80005C4Cu: goto label_80005C4C;
    case 0x80005C64u: goto label_80005C64;
    case 0x80005C7Cu: goto label_80005C7C;
    case 0x80005C94u: goto label_80005C94;
    case 0x80005CC4u: goto label_80005CC4;
    case 0x80005CCCu: goto label_80005CCC;
    case 0x80005CECu: goto label_80005CEC;
    case 0x80005DB0u: goto label_80005DB0;
    case 0x80005DB8u: goto label_80005DB8;
    case 0x80005DBCu: goto label_80005DBC;
    case 0x80005DC0u: goto label_80005DC0;
    case 0x80005DC8u: goto label_80005DC8;
    case 0x80005DD0u: goto label_80005DD0;
    case 0x80005DD8u: goto label_80005DD8;
    case 0x80005DE0u: goto label_80005DE0;
    case 0x80005DE8u: goto label_80005DE8;
    case 0x80005DFCu: goto label_80005DFC;
    case 0x80005E10u: goto label_80005E10;
    case 0x80005E30u: goto label_80005E30;
    case 0x80005E44u: goto label_80005E44;
    case 0x80005E60u: goto label_80005E60;
    case 0x80005E7Cu: goto label_80005E7C;
    case 0x80005E94u: goto label_80005E94;
    case 0x80005EACu: goto label_80005EAC;
    case 0x80005EB0u: goto label_80005EB0;
    case 0x80005EBCu: goto label_80005EBC;
    case 0x80005EC8u: goto label_80005EC8;
    case 0x80005ED0u: goto label_80005ED0;
    case 0x80005EDCu: goto label_80005EDC;
    case 0x80005EE8u: goto label_80005EE8;
    case 0x80005EF0u: goto label_80005EF0;
    case 0x80005F18u: goto label_80005F18;
    case 0x80005F40u: goto label_80005F40;
    case 0x80005F48u: goto label_80005F48;
    case 0x80005F50u: goto label_80005F50;
    case 0x80005F54u: goto label_80005F54;
    case 0x80005F94u: goto label_80005F94;
    case 0x80005FA8u: goto label_80005FA8;
    case 0x80005FB4u: goto label_80005FB4;
    case 0x80005FC4u: goto label_80005FC4;
    case 0x80005FD0u: goto label_80005FD0;
    case 0x80005FE0u: goto label_80005FE0;
    case 0x80005FECu: goto label_80005FEC;
    case 0x80005FF8u: goto label_80005FF8;
    case 0x80006004u: goto label_80006004;
    case 0x80006008u: goto label_80006008;
    case 0x80006080u: goto label_80006080;
    case 0x8000609Cu: goto label_8000609C;
    case 0x800060B0u: goto label_800060B0;
    case 0x800060C8u: goto label_800060C8;
    case 0x800060E4u: goto label_800060E4;
    case 0x800060F8u: goto label_800060F8;
    case 0x80006114u: goto label_80006114;
    case 0x80006128u: goto label_80006128;
    case 0x80006134u: goto label_80006134;
    case 0x800061A8u: goto label_800061A8;
    case 0x800061FCu: goto label_800061FC;
    case 0x8000620Cu: goto label_8000620C;
    case 0x80006218u: goto label_80006218;
    case 0x80006220u: goto label_80006220;
    case 0x80006238u: goto label_80006238;
    case 0x80006248u: goto label_80006248;
    case 0x80006268u: goto label_80006268;
    case 0x80006284u: goto label_80006284;
    case 0x8000629Cu: goto label_8000629C;
    case 0x800062A8u: goto label_800062A8;
    case 0x800062B0u: goto label_800062B0;
    case 0x800062C0u: goto label_800062C0;
    case 0x800062D8u: goto label_800062D8;
    case 0x800062F4u: goto label_800062F4;
    case 0x8000630Cu: goto label_8000630C;
    case 0x80006318u: goto label_80006318;
    case 0x80006320u: goto label_80006320;
    case 0x80006330u: goto label_80006330;
    case 0x80006348u: goto label_80006348;
    case 0x8000634Cu: goto label_8000634C;
    case 0x80006368u: goto label_80006368;
    case 0x8000637Cu: goto label_8000637C;
    case 0x80006388u: goto label_80006388;
    case 0x800063A4u: goto label_800063A4;
    case 0x800063B4u: goto label_800063B4;
    case 0x800063C0u: goto label_800063C0;
    case 0x800063C8u: goto label_800063C8;
    case 0x800063E0u: goto label_800063E0;
    case 0x800063F0u: goto label_800063F0;
    case 0x80006410u: goto label_80006410;
    case 0x80006414u: goto label_80006414;
    case 0x80006444u: goto label_80006444;
    case 0x80006450u: goto label_80006450;
    case 0x80006464u: goto label_80006464;
    case 0x80006478u: goto label_80006478;
    case 0x8000647Cu: goto label_8000647C;
    case 0x800064B0u: goto label_800064B0;
    case 0x800064B4u: goto label_800064B4;
    case 0x800064C8u: goto label_800064C8;
    case 0x800064DCu: goto label_800064DC;
    case 0x800064E0u: goto label_800064E0;
    case 0x80006510u: goto label_80006510;
    case 0x800065A0u: goto label_800065A0;
    case 0x800065A4u: goto label_800065A4;
    case 0x800065A8u: goto label_800065A8;
    case 0x800065ACu: goto label_800065AC;
    case 0x80006634u: goto label_80006634;
    case 0x80006654u: goto label_80006654;
    case 0x8000671Cu: goto label_8000671C;
    case 0x80006750u: goto label_80006750;
    case 0x80006770u: goto label_80006770;
    case 0x8000678Cu: goto label_8000678C;
    case 0x800067A0u: goto label_800067A0;
    case 0x800067B8u: goto label_800067B8;
    case 0x800067C8u: goto label_800067C8;
    case 0x80006804u: goto label_80006804;
    case 0x8000682Cu: goto label_8000682C;
    case 0x800068ACu: goto label_800068AC;
    case 0x800068C4u: goto label_800068C4;
    case 0x80006904u: goto label_80006904;
    case 0x80006930u: goto label_80006930;
    case 0x80006938u: goto label_80006938;
    case 0x80006968u: goto label_80006968;
    case 0x8000696Cu: goto label_8000696C;
    case 0x80006994u: goto label_80006994;
    case 0x800069BCu: goto label_800069BC;
    case 0x800069D0u: goto label_800069D0;
    case 0x800069D8u: goto label_800069D8;
    case 0x800069DCu: goto label_800069DC;
    case 0x800069ECu: goto label_800069EC;
    case 0x80006AA4u: goto label_80006AA4;
    case 0x80006AACu: goto label_80006AAC;
    case 0x80006AD4u: goto label_80006AD4;
    case 0x80006AE0u: goto label_80006AE0;
    case 0x80006AF4u: goto label_80006AF4;
    case 0x80006B18u: goto label_80006B18;
    case 0x80006BB4u: goto label_80006BB4;
    case 0x80006BBCu: goto label_80006BBC;
    case 0x80006BD4u: goto label_80006BD4;
    case 0x80006BECu: goto label_80006BEC;
    case 0x80006C0Cu: goto label_80006C0C;
    case 0x80006C10u: goto label_80006C10;
    case 0x80006C28u: goto label_80006C28;
    case 0x80006C4Cu: goto label_80006C4C;
    case 0x80006C54u: goto label_80006C54;
    case 0x80006C5Cu: goto label_80006C5C;
    case 0x80006C78u: goto label_80006C78;
    case 0x80006CC4u: goto label_80006CC4;
    case 0x80006CC8u: goto label_80006CC8;
    case 0x80006CDCu: goto label_80006CDC;
    case 0x80006CE0u: goto label_80006CE0;
    case 0x80006CE4u: goto label_80006CE4;
    case 0x80006CF4u: goto label_80006CF4;
    case 0x80006D20u: goto label_80006D20;
    case 0x80006D70u: goto label_80006D70;
    case 0x80006E2Cu: goto label_80006E2C;
    case 0x80006E3Cu: goto label_80006E3C;
    case 0x80006EACu: goto label_80006EAC;
    case 0x80006EE8u: goto label_80006EE8;
    case 0x80006F10u: goto label_80006F10;
    case 0x80006F34u: goto label_80006F34;
    case 0x80006FB8u: goto label_80006FB8;
    case 0x80006FD0u: goto label_80006FD0;
    case 0x80006FE8u: goto label_80006FE8;
    case 0x80006FECu: goto label_80006FEC;
    case 0x80007008u: goto label_80007008;
    case 0x80007048u: goto label_80007048;
    case 0x8000704Cu: goto label_8000704C;
    case 0x80007060u: goto label_80007060;
    case 0x80007080u: goto label_80007080;
    case 0x8000708Cu: goto label_8000708C;
    case 0x800070A4u: goto label_800070A4;
    case 0x800070D0u: goto label_800070D0;
    case 0x800070E0u: goto label_800070E0;
    case 0x8000710Cu: goto label_8000710C;
    case 0x80007114u: goto label_80007114;
    case 0x80007154u: goto label_80007154;
    case 0x80007160u: goto label_80007160;
    case 0x800071A0u: goto label_800071A0;
    case 0x800071D0u: goto label_800071D0;
    case 0x800071DCu: goto label_800071DC;
    case 0x800071E8u: goto label_800071E8;
    case 0x800071F4u: goto label_800071F4;
    case 0x8000721Cu: goto label_8000721C;
    case 0x8000723Cu: goto label_8000723C;
    case 0x80007260u: goto label_80007260;
    case 0x800072BCu: goto label_800072BC;
    case 0x800072F4u: goto label_800072F4;
    case 0x80007338u: goto label_80007338;
    case 0x8000733Cu: goto label_8000733C;
    case 0x80007350u: goto label_80007350;
    case 0x80007358u: goto label_80007358;
    case 0x80007360u: goto label_80007360;
    case 0x8000738Cu: goto label_8000738C;
    case 0x80007394u: goto label_80007394;
    case 0x800073A0u: goto label_800073A0;
    case 0x800073D8u: goto label_800073D8;
    case 0x8000742Cu: goto label_8000742C;
    case 0x80007478u: goto label_80007478;
    case 0x800074C0u: goto label_800074C0;
    case 0x8000750Cu: goto label_8000750C;
    case 0x8000753Cu: goto label_8000753C;
    case 0x80007574u: goto label_80007574;
    case 0x800075ACu: goto label_800075AC;
    case 0x800075B8u: goto label_800075B8;
    case 0x800075D8u: goto label_800075D8;
    case 0x80007604u: goto label_80007604;
    case 0x80007624u: goto label_80007624;
    case 0x800076C0u: goto label_800076C0;
    case 0x800076CCu: goto label_800076CC;
    case 0x800076D8u: goto label_800076D8;
    case 0x800076E8u: goto label_800076E8;
    case 0x800076F8u: goto label_800076F8;
    case 0x80007700u: goto label_80007700;
    case 0x8000770Cu: goto label_8000770C;
    case 0x8000771Cu: goto label_8000771C;
    case 0x80007744u: goto label_80007744;
    case 0x8000775Cu: goto label_8000775C;
    case 0x8000779Cu: goto label_8000779C;
    case 0x800077B4u: goto label_800077B4;
    case 0x80007848u: goto label_80007848;
    case 0x80007918u: goto label_80007918;
    case 0x800079BCu: goto label_800079BC;
    case 0x80007AF0u: goto label_80007AF0;
    case 0x80007C64u: goto label_80007C64;
    case 0x80007CF8u: goto label_80007CF8;
    case 0x80007D94u: goto label_80007D94;
    case 0x80007E28u: goto label_80007E28;
    case 0x80007E78u: goto label_80007E78;
    case 0x80007E88u: goto label_80007E88;
    case 0x80007F20u: goto label_80007F20;
    case 0x80007F58u: goto label_80007F58;
    case 0x80007F78u: goto label_80007F78;
    case 0x80007FC0u: goto label_80007FC0;
    case 0x80007FC8u: goto label_80007FC8;
    case 0x80007FD4u: goto label_80007FD4;
    case 0x80008054u: goto label_80008054;
    case 0x80008068u: goto label_80008068;
    case 0x8000807Cu: goto label_8000807C;
    case 0x80008090u: goto label_80008090;
    case 0x800080A4u: goto label_800080A4;
    case 0x800080B8u: goto label_800080B8;
    case 0x800080F0u: goto label_800080F0;
    case 0x8000810Cu: goto label_8000810C;
    case 0x80008134u: goto label_80008134;
    case 0x80008144u: goto label_80008144;
    case 0x80008150u: goto label_80008150;
    case 0x8000816Cu: goto label_8000816C;
    case 0x800081A0u: goto label_800081A0;
    case 0x800081BCu: goto label_800081BC;
    case 0x800081D4u: goto label_800081D4;
    case 0x800081E0u: goto label_800081E0;
    case 0x800081ECu: goto label_800081EC;
    case 0x80008204u: goto label_80008204;
    case 0x80008224u: goto label_80008224;
    case 0x80008234u: goto label_80008234;
    case 0x8000824Cu: goto label_8000824C;
    case 0x80008260u: goto label_80008260;
    case 0x80008268u: goto label_80008268;
    case 0x80008280u: goto label_80008280;
    case 0x80008288u: goto label_80008288;
    case 0x800082A0u: goto label_800082A0;
    case 0x800082ECu: goto label_800082EC;
    case 0x80008300u: goto label_80008300;
    case 0x80008308u: goto label_80008308;
    case 0x80008310u: goto label_80008310;
    case 0x8000836Cu: goto label_8000836C;
    case 0x80008384u: goto label_80008384;
    case 0x800083B0u: goto label_800083B0;
    case 0x800083C0u: goto label_800083C0;
    case 0x800083D0u: goto label_800083D0;
    case 0x800083E0u: goto label_800083E0;
    case 0x800083F0u: goto label_800083F0;
    case 0x80008400u: goto label_80008400;
    case 0x80008410u: goto label_80008410;
    case 0x80008420u: goto label_80008420;
    case 0x80008430u: goto label_80008430;
    case 0x80008440u: goto label_80008440;
    case 0x80008450u: goto label_80008450;
    case 0x80008460u: goto label_80008460;
    case 0x80008470u: goto label_80008470;
    case 0x80008480u: goto label_80008480;
    case 0x8000849Cu: goto label_8000849C;
    case 0x800084F4u: goto label_800084F4;
    case 0x80008504u: goto label_80008504;
    case 0x80008510u: goto label_80008510;
    case 0x80008518u: goto label_80008518;
    case 0x80008528u: goto label_80008528;
    case 0x8000854Cu: goto label_8000854C;
    case 0x8000857Cu: goto label_8000857C;
    case 0x800085D8u: goto label_800085D8;
    case 0x800085F8u: goto label_800085F8;
    case 0x8000862Cu: goto label_8000862C;
    case 0x80008684u: goto label_80008684;
    case 0x800086A8u: goto label_800086A8;
    case 0x800086B4u: goto label_800086B4;
    case 0x800086D4u: goto label_800086D4;
    case 0x800086F8u: goto label_800086F8;
    case 0x80008710u: goto label_80008710;
    case 0x80008734u: goto label_80008734;
    case 0x80008740u: goto label_80008740;
    case 0x80008758u: goto label_80008758;
    case 0x8000877Cu: goto label_8000877C;
    case 0x80008794u: goto label_80008794;
    case 0x800087B8u: goto label_800087B8;
    case 0x80008800u: goto label_80008800;
    case 0x8000881Cu: goto label_8000881C;
    case 0x80008850u: goto label_80008850;
    case 0x80008854u: goto label_80008854;
    case 0x8000886Cu: goto label_8000886C;
    case 0x80008890u: goto label_80008890;
    case 0x800088A8u: goto label_800088A8;
    case 0x800088CCu: goto label_800088CC;
    case 0x800088D0u: goto label_800088D0;
    case 0x80008914u: goto label_80008914;
    case 0x8000892Cu: goto label_8000892C;
    case 0x80008950u: goto label_80008950;
    case 0x80008964u: goto label_80008964;
    case 0x800089A4u: goto label_800089A4;
    case 0x800089C4u: goto label_800089C4;
    case 0x800089E4u: goto label_800089E4;
    case 0x80008A04u: goto label_80008A04;
    case 0x80008A1Cu: goto label_80008A1C;
    case 0x80008A34u: goto label_80008A34;
    case 0x80008A58u: goto label_80008A58;
    case 0x80008AECu: goto label_80008AEC;
    case 0x80008B0Cu: goto label_80008B0C;
    case 0x80008B28u: goto label_80008B28;
    case 0x80008B30u: goto label_80008B30;
    case 0x80008B4Cu: goto label_80008B4C;
    case 0x80008BB4u: goto label_80008BB4;
    case 0x80008BD8u: goto label_80008BD8;
    case 0x80008BF8u: goto label_80008BF8;
    case 0x80008C0Cu: goto label_80008C0C;
    case 0x80008C1Cu: goto label_80008C1C;
    case 0x80008C30u: goto label_80008C30;
    case 0x80008C48u: goto label_80008C48;
    case 0x80008C60u: goto label_80008C60;
    case 0x80008C74u: goto label_80008C74;
    case 0x80008C94u: goto label_80008C94;
    case 0x80008CACu: goto label_80008CAC;
    case 0x80008CC0u: goto label_80008CC0;
    case 0x80008CE0u: goto label_80008CE0;
    case 0x80008CF8u: goto label_80008CF8;
    case 0x80008D0Cu: goto label_80008D0C;
    case 0x80008D2Cu: goto label_80008D2C;
    case 0x80008D44u: goto label_80008D44;
    case 0x80008D58u: goto label_80008D58;
    case 0x80008DD8u: goto label_80008DD8;
    case 0x80008DF8u: goto label_80008DF8;
    case 0x80008E10u: goto label_80008E10;
    case 0x80008E18u: goto label_80008E18;
    case 0x80008E30u: goto label_80008E30;
    case 0x80008E98u: goto label_80008E98;
    case 0x80008EB0u: goto label_80008EB0;
    case 0x80008ED4u: goto label_80008ED4;
    case 0x80008EECu: goto label_80008EEC;
    case 0x80008EFCu: goto label_80008EFC;
    case 0x80008F18u: goto label_80008F18;
    case 0x80008F2Cu: goto label_80008F2C;
    case 0x80008F44u: goto label_80008F44;
    case 0x80008F68u: goto label_80008F68;
    case 0x80008FD4u: goto label_80008FD4;
    case 0x80008FF4u: goto label_80008FF4;
    case 0x8000900Cu: goto label_8000900C;
    case 0x80009014u: goto label_80009014;
    case 0x8000902Cu: goto label_8000902C;
    case 0x8000908Cu: goto label_8000908C;
    case 0x800090A4u: goto label_800090A4;
    case 0x800090C8u: goto label_800090C8;
    case 0x800090F0u: goto label_800090F0;
    case 0x80009104u: goto label_80009104;
    case 0x8000911Cu: goto label_8000911C;
    case 0x80009144u: goto label_80009144;
    case 0x80009154u: goto label_80009154;
    case 0x800091C0u: goto label_800091C0;
    case 0x800091E0u: goto label_800091E0;
    case 0x800091F8u: goto label_800091F8;
    case 0x80009200u: goto label_80009200;
    case 0x80009218u: goto label_80009218;
    case 0x8000925Cu: goto label_8000925C;
    case 0x80009280u: goto label_80009280;
    case 0x80009284u: goto label_80009284;
    case 0x800092B4u: goto label_800092B4;
    case 0x800092D8u: goto label_800092D8;
    case 0x800092DCu: goto label_800092DC;
    case 0x8000931Cu: goto label_8000931C;
    case 0x80009340u: goto label_80009340;
    case 0x8000934Cu: goto label_8000934C;
    case 0x80009354u: goto label_80009354;
    case 0x80009394u: goto label_80009394;
    case 0x800093B8u: goto label_800093B8;
    case 0x8000942Cu: goto label_8000942C;
    case 0x80009458u: goto label_80009458;
    case 0x8000947Cu: goto label_8000947C;
    case 0x800094CCu: goto label_800094CC;
    case 0x800094F8u: goto label_800094F8;
    case 0x80009510u: goto label_80009510;
    case 0x80009544u: goto label_80009544;
    case 0x80009554u: goto label_80009554;
    case 0x80009574u: goto label_80009574;
    case 0x8000957Cu: goto label_8000957C;
    case 0x800095D0u: goto label_800095D0;
    default: return;
    }
}

