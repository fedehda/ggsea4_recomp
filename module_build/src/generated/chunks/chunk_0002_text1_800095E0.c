// DolRecomp output
#include "../generated.h"

static void loop_80009CD0(CPUState* ctx) {
label_80009CD0:
    ctx->downcount -= 3;
    // 80009CD0: addic.  r3, r3, -1
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

    ctx->pc = 0x80009CD4u;
    // 80009CD4: stbu     r7, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
        ctx->gpr[6] = ea;
    }

    // 80009CD8: bc    4, 2, 0x80009CD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80009CD0u;
                return;
            }
            goto label_80009CD0;
        }
    }

    ctx->pc = 0x80009CDCu;
}

static void loop_80009D08(CPUState* ctx) {
label_80009D08:
    ctx->downcount -= 10;
    ctx->pc = 0x80009D08u;
    // 80009D08: stw     r7, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    // 80009D0C: addic.  r4, r4, -1
    {
        u64 a = ctx->gpr[4];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[4] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[4];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

    ctx->pc = 0x80009D10u;
    // 80009D10: stw     r7, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    ctx->pc = 0x80009D14u;
    // 80009D14: stw     r7, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    ctx->pc = 0x80009D18u;
    // 80009D18: stw     r7, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    ctx->pc = 0x80009D1Cu;
    // 80009D1C: stw     r7, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    ctx->pc = 0x80009D20u;
    // 80009D20: stw     r7, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    ctx->pc = 0x80009D24u;
    // 80009D24: stw     r7, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    ctx->pc = 0x80009D28u;
    // 80009D28: stwu     r7, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
        ctx->gpr[3] = ea;
    }

    // 80009D2C: bc    4, 2, 0x80009D08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80009D08u;
                return;
            }
            goto label_80009D08;
        }
    }

    ctx->pc = 0x80009D30u;
}

static void loop_80009D38(CPUState* ctx) {
label_80009D38:
    ctx->downcount -= 3;
    // 80009D38: addic.  r4, r4, -1
    {
        u64 a = ctx->gpr[4];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[4] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[4];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

    ctx->pc = 0x80009D3Cu;
    // 80009D3C: stwu     r7, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
        ctx->gpr[3] = ea;
    }

    // 80009D40: bc    4, 2, 0x80009D38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80009D38u;
                return;
            }
            goto label_80009D38;
        }
    }

    ctx->pc = 0x80009D44u;
}

static void loop_80009D54(CPUState* ctx) {
label_80009D54:
    ctx->downcount -= 3;
    // 80009D54: addic.  r5, r5, -1
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

    ctx->pc = 0x80009D58u;
    // 80009D58: stbu     r7, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
        ctx->gpr[6] = ea;
    }

    // 80009D5C: bc    4, 2, 0x80009D54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80009D54u;
                return;
            }
            goto label_80009D54;
        }
    }

    ctx->pc = 0x80009D60u;
}

static void loop_8000D53C(CPUState* ctx) {
label_8000D53C:
    ctx->downcount -= 4;
    // 8000D53C: add   r3, r6, r4
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

    // 8000D540: addi    r4, r4, 20
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20);

    ctx->pc = 0x8000D544u;
    // 8000D544: stw     r5, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    // 8000D548: bc    16, 0, 0x8000D53C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000D53Cu;
                return;
            }
            goto label_8000D53C;
        }
    }

    ctx->pc = 0x8000D54Cu;
}

void func_800095E0(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x800095E0u: goto label_800095E0;
    case 0x800095E4u: goto label_800095E4;
    case 0x800095E8u: goto label_800095E8;
    case 0x800095ECu: goto label_800095EC;
    case 0x800095F0u: goto label_800095F0;
    case 0x800095F4u: goto label_800095F4;
    case 0x800095F8u: goto label_800095F8;
    case 0x800095FCu: goto label_800095FC;
    case 0x80009600u: goto label_80009600;
    case 0x80009604u: goto label_80009604;
    case 0x80009608u: goto label_80009608;
    case 0x8000960Cu: goto label_8000960C;
    case 0x80009610u: goto label_80009610;
    case 0x80009614u: goto label_80009614;
    case 0x80009618u: goto label_80009618;
    case 0x8000961Cu: goto label_8000961C;
    case 0x80009620u: goto label_80009620;
    case 0x80009624u: goto label_80009624;
    case 0x80009628u: goto label_80009628;
    case 0x8000962Cu: goto label_8000962C;
    case 0x80009630u: goto label_80009630;
    case 0x80009634u: goto label_80009634;
    case 0x80009638u: goto label_80009638;
    case 0x8000963Cu: goto label_8000963C;
    case 0x80009640u: goto label_80009640;
    case 0x80009644u: goto label_80009644;
    case 0x80009648u: goto label_80009648;
    case 0x8000964Cu: goto label_8000964C;
    case 0x80009650u: goto label_80009650;
    case 0x80009654u: goto label_80009654;
    case 0x80009658u: goto label_80009658;
    case 0x8000965Cu: goto label_8000965C;
    case 0x80009660u: goto label_80009660;
    case 0x80009664u: goto label_80009664;
    case 0x80009668u: goto label_80009668;
    case 0x8000966Cu: goto label_8000966C;
    case 0x80009670u: goto label_80009670;
    case 0x80009674u: goto label_80009674;
    case 0x80009678u: goto label_80009678;
    case 0x8000967Cu: goto label_8000967C;
    case 0x80009680u: goto label_80009680;
    case 0x80009684u: goto label_80009684;
    case 0x80009688u: goto label_80009688;
    case 0x8000968Cu: goto label_8000968C;
    case 0x80009690u: goto label_80009690;
    case 0x80009694u: goto label_80009694;
    case 0x80009698u: goto label_80009698;
    case 0x8000969Cu: goto label_8000969C;
    case 0x800096A0u: goto label_800096A0;
    case 0x800096A4u: goto label_800096A4;
    case 0x800096A8u: goto label_800096A8;
    case 0x800096ACu: goto label_800096AC;
    case 0x800096B0u: goto label_800096B0;
    case 0x800096B4u: goto label_800096B4;
    case 0x800096B8u: goto label_800096B8;
    case 0x800096BCu: goto label_800096BC;
    case 0x800096C0u: goto label_800096C0;
    case 0x800096C4u: goto label_800096C4;
    case 0x800096C8u: goto label_800096C8;
    case 0x800096CCu: goto label_800096CC;
    case 0x800096D0u: goto label_800096D0;
    case 0x800096D4u: goto label_800096D4;
    case 0x800096D8u: goto label_800096D8;
    case 0x800096DCu: goto label_800096DC;
    case 0x800096E0u: goto label_800096E0;
    case 0x800096E4u: goto label_800096E4;
    case 0x800096E8u: goto label_800096E8;
    case 0x800096ECu: goto label_800096EC;
    case 0x800096F0u: goto label_800096F0;
    case 0x800096F4u: goto label_800096F4;
    case 0x800096F8u: goto label_800096F8;
    case 0x800096FCu: goto label_800096FC;
    case 0x80009700u: goto label_80009700;
    case 0x80009704u: goto label_80009704;
    case 0x80009708u: goto label_80009708;
    case 0x8000970Cu: goto label_8000970C;
    case 0x80009710u: goto label_80009710;
    case 0x80009714u: goto label_80009714;
    case 0x80009718u: goto label_80009718;
    case 0x8000971Cu: goto label_8000971C;
    case 0x80009720u: goto label_80009720;
    case 0x80009724u: goto label_80009724;
    case 0x80009728u: goto label_80009728;
    case 0x8000972Cu: goto label_8000972C;
    case 0x80009730u: goto label_80009730;
    case 0x80009734u: goto label_80009734;
    case 0x80009738u: goto label_80009738;
    case 0x8000973Cu: goto label_8000973C;
    case 0x80009740u: goto label_80009740;
    case 0x80009744u: goto label_80009744;
    case 0x80009748u: goto label_80009748;
    case 0x8000974Cu: goto label_8000974C;
    case 0x80009750u: goto label_80009750;
    case 0x80009754u: goto label_80009754;
    case 0x80009758u: goto label_80009758;
    case 0x8000975Cu: goto label_8000975C;
    case 0x80009760u: goto label_80009760;
    case 0x80009764u: goto label_80009764;
    case 0x80009768u: goto label_80009768;
    case 0x8000976Cu: goto label_8000976C;
    case 0x80009770u: goto label_80009770;
    case 0x80009774u: goto label_80009774;
    case 0x80009778u: goto label_80009778;
    case 0x8000977Cu: goto label_8000977C;
    case 0x80009780u: goto label_80009780;
    case 0x80009784u: goto label_80009784;
    case 0x80009788u: goto label_80009788;
    case 0x8000978Cu: goto label_8000978C;
    case 0x80009790u: goto label_80009790;
    case 0x80009794u: goto label_80009794;
    case 0x80009798u: goto label_80009798;
    case 0x8000979Cu: goto label_8000979C;
    case 0x800097A0u: goto label_800097A0;
    case 0x800097A4u: goto label_800097A4;
    case 0x800097A8u: goto label_800097A8;
    case 0x800097ACu: goto label_800097AC;
    case 0x800097B0u: goto label_800097B0;
    case 0x800097B4u: goto label_800097B4;
    case 0x800097B8u: goto label_800097B8;
    case 0x800097BCu: goto label_800097BC;
    case 0x800097C0u: goto label_800097C0;
    case 0x800097C4u: goto label_800097C4;
    case 0x800097C8u: goto label_800097C8;
    case 0x800097CCu: goto label_800097CC;
    case 0x800097D0u: goto label_800097D0;
    case 0x800097D4u: goto label_800097D4;
    case 0x800097D8u: goto label_800097D8;
    case 0x800097DCu: goto label_800097DC;
    case 0x800097E0u: goto label_800097E0;
    case 0x800097E4u: goto label_800097E4;
    case 0x800097E8u: goto label_800097E8;
    case 0x800097ECu: goto label_800097EC;
    case 0x800097F0u: goto label_800097F0;
    case 0x800097F4u: goto label_800097F4;
    case 0x800097F8u: goto label_800097F8;
    case 0x800097FCu: goto label_800097FC;
    case 0x80009800u: goto label_80009800;
    case 0x80009804u: goto label_80009804;
    case 0x80009808u: goto label_80009808;
    case 0x8000980Cu: goto label_8000980C;
    case 0x80009810u: goto label_80009810;
    case 0x80009814u: goto label_80009814;
    case 0x80009818u: goto label_80009818;
    case 0x8000981Cu: goto label_8000981C;
    case 0x80009820u: goto label_80009820;
    case 0x80009824u: goto label_80009824;
    case 0x80009828u: goto label_80009828;
    case 0x8000982Cu: goto label_8000982C;
    case 0x80009830u: goto label_80009830;
    case 0x80009834u: goto label_80009834;
    case 0x80009838u: goto label_80009838;
    case 0x8000983Cu: goto label_8000983C;
    case 0x80009840u: goto label_80009840;
    case 0x80009844u: goto label_80009844;
    case 0x80009848u: goto label_80009848;
    case 0x8000984Cu: goto label_8000984C;
    case 0x80009850u: goto label_80009850;
    case 0x80009854u: goto label_80009854;
    case 0x80009858u: goto label_80009858;
    case 0x8000985Cu: goto label_8000985C;
    case 0x80009860u: goto label_80009860;
    case 0x80009864u: goto label_80009864;
    case 0x80009868u: goto label_80009868;
    case 0x8000986Cu: goto label_8000986C;
    case 0x80009870u: goto label_80009870;
    case 0x80009874u: goto label_80009874;
    case 0x80009878u: goto label_80009878;
    case 0x8000987Cu: goto label_8000987C;
    case 0x80009880u: goto label_80009880;
    case 0x80009884u: goto label_80009884;
    case 0x80009888u: goto label_80009888;
    case 0x8000988Cu: goto label_8000988C;
    case 0x80009890u: goto label_80009890;
    case 0x80009894u: goto label_80009894;
    case 0x80009898u: goto label_80009898;
    case 0x8000989Cu: goto label_8000989C;
    case 0x800098A0u: goto label_800098A0;
    case 0x800098A4u: goto label_800098A4;
    case 0x800098A8u: goto label_800098A8;
    case 0x800098ACu: goto label_800098AC;
    case 0x800098B0u: goto label_800098B0;
    case 0x800098B4u: goto label_800098B4;
    case 0x800098B8u: goto label_800098B8;
    case 0x800098BCu: goto label_800098BC;
    case 0x800098C0u: goto label_800098C0;
    case 0x800098C4u: goto label_800098C4;
    case 0x800098C8u: goto label_800098C8;
    case 0x800098CCu: goto label_800098CC;
    case 0x800098D0u: goto label_800098D0;
    case 0x800098D4u: goto label_800098D4;
    case 0x800098D8u: goto label_800098D8;
    case 0x800098DCu: goto label_800098DC;
    case 0x800098E0u: goto label_800098E0;
    case 0x800098E4u: goto label_800098E4;
    case 0x800098E8u: goto label_800098E8;
    case 0x800098ECu: goto label_800098EC;
    case 0x800098F0u: goto label_800098F0;
    case 0x800098F4u: goto label_800098F4;
    case 0x800098F8u: goto label_800098F8;
    case 0x800098FCu: goto label_800098FC;
    case 0x80009900u: goto label_80009900;
    case 0x80009904u: goto label_80009904;
    case 0x80009908u: goto label_80009908;
    case 0x8000990Cu: goto label_8000990C;
    case 0x80009910u: goto label_80009910;
    case 0x80009914u: goto label_80009914;
    case 0x80009918u: goto label_80009918;
    case 0x8000991Cu: goto label_8000991C;
    case 0x80009920u: goto label_80009920;
    case 0x80009924u: goto label_80009924;
    case 0x80009928u: goto label_80009928;
    case 0x8000992Cu: goto label_8000992C;
    case 0x80009930u: goto label_80009930;
    case 0x80009934u: goto label_80009934;
    case 0x80009938u: goto label_80009938;
    case 0x8000993Cu: goto label_8000993C;
    case 0x80009940u: goto label_80009940;
    case 0x80009944u: goto label_80009944;
    case 0x80009948u: goto label_80009948;
    case 0x8000994Cu: goto label_8000994C;
    case 0x80009950u: goto label_80009950;
    case 0x80009954u: goto label_80009954;
    case 0x80009958u: goto label_80009958;
    case 0x8000995Cu: goto label_8000995C;
    case 0x80009960u: goto label_80009960;
    case 0x80009964u: goto label_80009964;
    case 0x80009968u: goto label_80009968;
    case 0x8000996Cu: goto label_8000996C;
    case 0x80009970u: goto label_80009970;
    case 0x80009974u: goto label_80009974;
    case 0x80009978u: goto label_80009978;
    case 0x8000997Cu: goto label_8000997C;
    case 0x80009980u: goto label_80009980;
    case 0x80009984u: goto label_80009984;
    case 0x80009988u: goto label_80009988;
    case 0x8000998Cu: goto label_8000998C;
    case 0x80009990u: goto label_80009990;
    case 0x80009994u: goto label_80009994;
    case 0x80009998u: goto label_80009998;
    case 0x8000999Cu: goto label_8000999C;
    case 0x800099A0u: goto label_800099A0;
    case 0x800099A4u: goto label_800099A4;
    case 0x800099A8u: goto label_800099A8;
    case 0x800099ACu: goto label_800099AC;
    case 0x800099B0u: goto label_800099B0;
    case 0x800099B4u: goto label_800099B4;
    case 0x800099B8u: goto label_800099B8;
    case 0x800099BCu: goto label_800099BC;
    case 0x800099C0u: goto label_800099C0;
    case 0x800099C4u: goto label_800099C4;
    case 0x800099C8u: goto label_800099C8;
    case 0x800099CCu: goto label_800099CC;
    case 0x800099D0u: goto label_800099D0;
    case 0x800099D4u: goto label_800099D4;
    case 0x800099D8u: goto label_800099D8;
    case 0x800099DCu: goto label_800099DC;
    case 0x800099E0u: goto label_800099E0;
    case 0x800099E4u: goto label_800099E4;
    case 0x800099E8u: goto label_800099E8;
    case 0x800099ECu: goto label_800099EC;
    case 0x800099F0u: goto label_800099F0;
    case 0x800099F4u: goto label_800099F4;
    case 0x800099F8u: goto label_800099F8;
    case 0x800099FCu: goto label_800099FC;
    case 0x80009A00u: goto label_80009A00;
    case 0x80009A04u: goto label_80009A04;
    case 0x80009A08u: goto label_80009A08;
    case 0x80009A0Cu: goto label_80009A0C;
    case 0x80009A10u: goto label_80009A10;
    case 0x80009A14u: goto label_80009A14;
    case 0x80009A18u: goto label_80009A18;
    case 0x80009A1Cu: goto label_80009A1C;
    case 0x80009A20u: goto label_80009A20;
    case 0x80009A24u: goto label_80009A24;
    case 0x80009A28u: goto label_80009A28;
    case 0x80009A2Cu: goto label_80009A2C;
    case 0x80009A30u: goto label_80009A30;
    case 0x80009A34u: goto label_80009A34;
    case 0x80009A38u: goto label_80009A38;
    case 0x80009A3Cu: goto label_80009A3C;
    case 0x80009A40u: goto label_80009A40;
    case 0x80009A44u: goto label_80009A44;
    case 0x80009A48u: goto label_80009A48;
    case 0x80009A4Cu: goto label_80009A4C;
    case 0x80009A50u: goto label_80009A50;
    case 0x80009A54u: goto label_80009A54;
    case 0x80009A58u: goto label_80009A58;
    case 0x80009A5Cu: goto label_80009A5C;
    case 0x80009A60u: goto label_80009A60;
    case 0x80009A64u: goto label_80009A64;
    case 0x80009A68u: goto label_80009A68;
    case 0x80009A6Cu: goto label_80009A6C;
    case 0x80009A70u: goto label_80009A70;
    case 0x80009A74u: goto label_80009A74;
    case 0x80009A78u: goto label_80009A78;
    case 0x80009A7Cu: goto label_80009A7C;
    case 0x80009A80u: goto label_80009A80;
    case 0x80009A84u: goto label_80009A84;
    case 0x80009A88u: goto label_80009A88;
    case 0x80009A8Cu: goto label_80009A8C;
    case 0x80009A90u: goto label_80009A90;
    case 0x80009A94u: goto label_80009A94;
    case 0x80009A98u: goto label_80009A98;
    case 0x80009A9Cu: goto label_80009A9C;
    case 0x80009AA0u: goto label_80009AA0;
    case 0x80009AA4u: goto label_80009AA4;
    case 0x80009AA8u: goto label_80009AA8;
    case 0x80009AACu: goto label_80009AAC;
    case 0x80009AB0u: goto label_80009AB0;
    case 0x80009AB4u: goto label_80009AB4;
    case 0x80009AB8u: goto label_80009AB8;
    case 0x80009ABCu: goto label_80009ABC;
    case 0x80009AC0u: goto label_80009AC0;
    case 0x80009AC4u: goto label_80009AC4;
    case 0x80009AC8u: goto label_80009AC8;
    case 0x80009ACCu: goto label_80009ACC;
    case 0x80009AD0u: goto label_80009AD0;
    case 0x80009AD4u: goto label_80009AD4;
    case 0x80009AD8u: goto label_80009AD8;
    case 0x80009ADCu: goto label_80009ADC;
    case 0x80009AE0u: goto label_80009AE0;
    case 0x80009AE4u: goto label_80009AE4;
    case 0x80009AE8u: goto label_80009AE8;
    case 0x80009AECu: goto label_80009AEC;
    case 0x80009AF0u: goto label_80009AF0;
    case 0x80009AF4u: goto label_80009AF4;
    case 0x80009AF8u: goto label_80009AF8;
    case 0x80009AFCu: goto label_80009AFC;
    case 0x80009B00u: goto label_80009B00;
    case 0x80009B04u: goto label_80009B04;
    case 0x80009B08u: goto label_80009B08;
    case 0x80009B0Cu: goto label_80009B0C;
    case 0x80009B10u: goto label_80009B10;
    case 0x80009B14u: goto label_80009B14;
    case 0x80009B18u: goto label_80009B18;
    case 0x80009B1Cu: goto label_80009B1C;
    case 0x80009B20u: goto label_80009B20;
    case 0x80009B24u: goto label_80009B24;
    case 0x80009B28u: goto label_80009B28;
    case 0x80009B2Cu: goto label_80009B2C;
    case 0x80009B30u: goto label_80009B30;
    case 0x80009B34u: goto label_80009B34;
    case 0x80009B38u: goto label_80009B38;
    case 0x80009B3Cu: goto label_80009B3C;
    case 0x80009B40u: goto label_80009B40;
    case 0x80009B44u: goto label_80009B44;
    case 0x80009B48u: goto label_80009B48;
    case 0x80009B4Cu: goto label_80009B4C;
    case 0x80009B50u: goto label_80009B50;
    case 0x80009B54u: goto label_80009B54;
    case 0x80009B58u: goto label_80009B58;
    case 0x80009B5Cu: goto label_80009B5C;
    case 0x80009B60u: goto label_80009B60;
    case 0x80009B64u: goto label_80009B64;
    case 0x80009B68u: goto label_80009B68;
    case 0x80009B6Cu: goto label_80009B6C;
    case 0x80009B70u: goto label_80009B70;
    case 0x80009B74u: goto label_80009B74;
    case 0x80009B78u: goto label_80009B78;
    case 0x80009B7Cu: goto label_80009B7C;
    case 0x80009B80u: goto label_80009B80;
    case 0x80009B84u: goto label_80009B84;
    case 0x80009B88u: goto label_80009B88;
    case 0x80009B8Cu: goto label_80009B8C;
    case 0x80009B90u: goto label_80009B90;
    case 0x80009B94u: goto label_80009B94;
    case 0x80009B98u: goto label_80009B98;
    case 0x80009B9Cu: goto label_80009B9C;
    case 0x80009BA0u: goto label_80009BA0;
    case 0x80009BA4u: goto label_80009BA4;
    case 0x80009BA8u: goto label_80009BA8;
    case 0x80009BACu: goto label_80009BAC;
    case 0x80009BB0u: goto label_80009BB0;
    case 0x80009BB4u: goto label_80009BB4;
    case 0x80009BB8u: goto label_80009BB8;
    case 0x80009BBCu: goto label_80009BBC;
    case 0x80009BC0u: goto label_80009BC0;
    case 0x80009BC4u: goto label_80009BC4;
    case 0x80009BC8u: goto label_80009BC8;
    case 0x80009BCCu: goto label_80009BCC;
    case 0x80009BD0u: goto label_80009BD0;
    case 0x80009BD4u: goto label_80009BD4;
    case 0x80009BD8u: goto label_80009BD8;
    case 0x80009BDCu: goto label_80009BDC;
    case 0x80009BE0u: goto label_80009BE0;
    case 0x80009BE4u: goto label_80009BE4;
    case 0x80009BE8u: goto label_80009BE8;
    case 0x80009BECu: goto label_80009BEC;
    case 0x80009BF0u: goto label_80009BF0;
    case 0x80009BF4u: goto label_80009BF4;
    case 0x80009BF8u: goto label_80009BF8;
    case 0x80009BFCu: goto label_80009BFC;
    case 0x80009C00u: goto label_80009C00;
    case 0x80009C04u: goto label_80009C04;
    case 0x80009C08u: goto label_80009C08;
    case 0x80009C0Cu: goto label_80009C0C;
    case 0x80009C10u: goto label_80009C10;
    case 0x80009C14u: goto label_80009C14;
    case 0x80009C18u: goto label_80009C18;
    case 0x80009C1Cu: goto label_80009C1C;
    case 0x80009C20u: goto label_80009C20;
    case 0x80009C24u: goto label_80009C24;
    case 0x80009C28u: goto label_80009C28;
    case 0x80009C2Cu: goto label_80009C2C;
    case 0x80009C30u: goto label_80009C30;
    case 0x80009C34u: goto label_80009C34;
    case 0x80009C38u: goto label_80009C38;
    case 0x80009C3Cu: goto label_80009C3C;
    case 0x80009C40u: goto label_80009C40;
    case 0x80009C44u: goto label_80009C44;
    case 0x80009C48u: goto label_80009C48;
    case 0x80009C4Cu: goto label_80009C4C;
    case 0x80009C50u: goto label_80009C50;
    case 0x80009C54u: goto label_80009C54;
    case 0x80009C58u: goto label_80009C58;
    case 0x80009C5Cu: goto label_80009C5C;
    case 0x80009C60u: goto label_80009C60;
    case 0x80009C64u: goto label_80009C64;
    case 0x80009C68u: goto label_80009C68;
    case 0x80009C6Cu: goto label_80009C6C;
    case 0x80009C70u: goto label_80009C70;
    case 0x80009C74u: goto label_80009C74;
    case 0x80009C78u: goto label_80009C78;
    case 0x80009C7Cu: goto label_80009C7C;
    case 0x80009C80u: goto label_80009C80;
    case 0x80009C84u: goto label_80009C84;
    case 0x80009C88u: goto label_80009C88;
    case 0x80009C8Cu: goto label_80009C8C;
    case 0x80009C90u: goto label_80009C90;
    case 0x80009C94u: goto label_80009C94;
    case 0x80009C98u: goto label_80009C98;
    case 0x80009C9Cu: goto label_80009C9C;
    case 0x80009CA0u: goto label_80009CA0;
    case 0x80009CA4u: goto label_80009CA4;
    case 0x80009CA8u: goto label_80009CA8;
    case 0x80009CACu: goto label_80009CAC;
    case 0x80009CB0u: goto label_80009CB0;
    case 0x80009CB4u: goto label_80009CB4;
    case 0x80009CB8u: goto label_80009CB8;
    case 0x80009CBCu: goto label_80009CBC;
    case 0x80009CC0u: goto label_80009CC0;
    case 0x80009CC4u: goto label_80009CC4;
    case 0x80009CC8u: goto label_80009CC8;
    case 0x80009CCCu: goto label_80009CCC;
    case 0x80009CD0u: goto label_80009CD0;
    case 0x80009CD4u: goto label_80009CD4;
    case 0x80009CD8u: goto label_80009CD8;
    case 0x80009CDCu: goto label_80009CDC;
    case 0x80009CE0u: goto label_80009CE0;
    case 0x80009CE4u: goto label_80009CE4;
    case 0x80009CE8u: goto label_80009CE8;
    case 0x80009CECu: goto label_80009CEC;
    case 0x80009CF0u: goto label_80009CF0;
    case 0x80009CF4u: goto label_80009CF4;
    case 0x80009CF8u: goto label_80009CF8;
    case 0x80009CFCu: goto label_80009CFC;
    case 0x80009D00u: goto label_80009D00;
    case 0x80009D04u: goto label_80009D04;
    case 0x80009D08u: goto label_80009D08;
    case 0x80009D0Cu: goto label_80009D0C;
    case 0x80009D10u: goto label_80009D10;
    case 0x80009D14u: goto label_80009D14;
    case 0x80009D18u: goto label_80009D18;
    case 0x80009D1Cu: goto label_80009D1C;
    case 0x80009D20u: goto label_80009D20;
    case 0x80009D24u: goto label_80009D24;
    case 0x80009D28u: goto label_80009D28;
    case 0x80009D2Cu: goto label_80009D2C;
    case 0x80009D30u: goto label_80009D30;
    case 0x80009D34u: goto label_80009D34;
    case 0x80009D38u: goto label_80009D38;
    case 0x80009D3Cu: goto label_80009D3C;
    case 0x80009D40u: goto label_80009D40;
    case 0x80009D44u: goto label_80009D44;
    case 0x80009D48u: goto label_80009D48;
    case 0x80009D4Cu: goto label_80009D4C;
    case 0x80009D50u: goto label_80009D50;
    case 0x80009D54u: goto label_80009D54;
    case 0x80009D58u: goto label_80009D58;
    case 0x80009D5Cu: goto label_80009D5C;
    case 0x80009D60u: goto label_80009D60;
    case 0x80009D64u: goto label_80009D64;
    case 0x80009D68u: goto label_80009D68;
    case 0x80009D6Cu: goto label_80009D6C;
    case 0x80009D70u: goto label_80009D70;
    case 0x80009D74u: goto label_80009D74;
    case 0x80009D78u: goto label_80009D78;
    case 0x80009D7Cu: goto label_80009D7C;
    case 0x80009D80u: goto label_80009D80;
    case 0x80009D84u: goto label_80009D84;
    case 0x80009D88u: goto label_80009D88;
    case 0x80009D8Cu: goto label_80009D8C;
    case 0x80009D90u: goto label_80009D90;
    case 0x80009D94u: goto label_80009D94;
    case 0x80009D98u: goto label_80009D98;
    case 0x80009D9Cu: goto label_80009D9C;
    case 0x80009DA0u: goto label_80009DA0;
    case 0x80009DA4u: goto label_80009DA4;
    case 0x80009DA8u: goto label_80009DA8;
    case 0x80009DACu: goto label_80009DAC;
    case 0x80009DB0u: goto label_80009DB0;
    case 0x80009DB4u: goto label_80009DB4;
    case 0x80009DB8u: goto label_80009DB8;
    case 0x80009DBCu: goto label_80009DBC;
    case 0x80009DC0u: goto label_80009DC0;
    case 0x80009DC4u: goto label_80009DC4;
    case 0x80009DC8u: goto label_80009DC8;
    case 0x80009DCCu: goto label_80009DCC;
    case 0x80009DD0u: goto label_80009DD0;
    case 0x80009DD4u: goto label_80009DD4;
    case 0x80009DD8u: goto label_80009DD8;
    case 0x80009DDCu: goto label_80009DDC;
    case 0x80009DE0u: goto label_80009DE0;
    case 0x80009DE4u: goto label_80009DE4;
    case 0x80009DE8u: goto label_80009DE8;
    case 0x80009DECu: goto label_80009DEC;
    case 0x80009DF0u: goto label_80009DF0;
    case 0x80009DF4u: goto label_80009DF4;
    case 0x80009DF8u: goto label_80009DF8;
    case 0x80009DFCu: goto label_80009DFC;
    case 0x80009E00u: goto label_80009E00;
    case 0x80009E04u: goto label_80009E04;
    case 0x80009E08u: goto label_80009E08;
    case 0x80009E0Cu: goto label_80009E0C;
    case 0x80009E10u: goto label_80009E10;
    case 0x80009E14u: goto label_80009E14;
    case 0x80009E18u: goto label_80009E18;
    case 0x80009E1Cu: goto label_80009E1C;
    case 0x80009E20u: goto label_80009E20;
    case 0x80009E24u: goto label_80009E24;
    case 0x80009E28u: goto label_80009E28;
    case 0x80009E2Cu: goto label_80009E2C;
    case 0x80009E30u: goto label_80009E30;
    case 0x80009E34u: goto label_80009E34;
    case 0x80009E38u: goto label_80009E38;
    case 0x80009E3Cu: goto label_80009E3C;
    case 0x80009E40u: goto label_80009E40;
    case 0x80009E44u: goto label_80009E44;
    case 0x80009E48u: goto label_80009E48;
    case 0x80009E4Cu: goto label_80009E4C;
    case 0x80009E50u: goto label_80009E50;
    case 0x80009E54u: goto label_80009E54;
    case 0x80009E58u: goto label_80009E58;
    case 0x80009E5Cu: goto label_80009E5C;
    case 0x80009E60u: goto label_80009E60;
    case 0x80009E64u: goto label_80009E64;
    case 0x80009E68u: goto label_80009E68;
    case 0x80009E6Cu: goto label_80009E6C;
    case 0x80009E70u: goto label_80009E70;
    case 0x80009E74u: goto label_80009E74;
    case 0x80009E78u: goto label_80009E78;
    case 0x80009E7Cu: goto label_80009E7C;
    case 0x80009E80u: goto label_80009E80;
    case 0x80009E84u: goto label_80009E84;
    case 0x80009E88u: goto label_80009E88;
    case 0x80009E8Cu: goto label_80009E8C;
    case 0x80009E90u: goto label_80009E90;
    case 0x80009E94u: goto label_80009E94;
    case 0x80009E98u: goto label_80009E98;
    case 0x80009E9Cu: goto label_80009E9C;
    case 0x80009EA0u: goto label_80009EA0;
    case 0x80009EA4u: goto label_80009EA4;
    case 0x80009EA8u: goto label_80009EA8;
    case 0x80009EACu: goto label_80009EAC;
    case 0x80009EB0u: goto label_80009EB0;
    case 0x80009EB4u: goto label_80009EB4;
    case 0x80009EB8u: goto label_80009EB8;
    case 0x80009EBCu: goto label_80009EBC;
    case 0x80009EC0u: goto label_80009EC0;
    case 0x80009EC4u: goto label_80009EC4;
    case 0x80009EC8u: goto label_80009EC8;
    case 0x80009ECCu: goto label_80009ECC;
    case 0x80009ED0u: goto label_80009ED0;
    case 0x80009ED4u: goto label_80009ED4;
    case 0x80009ED8u: goto label_80009ED8;
    case 0x80009EDCu: goto label_80009EDC;
    case 0x80009EE0u: goto label_80009EE0;
    case 0x80009EE4u: goto label_80009EE4;
    case 0x80009EE8u: goto label_80009EE8;
    case 0x80009EECu: goto label_80009EEC;
    case 0x80009EF0u: goto label_80009EF0;
    case 0x80009EF4u: goto label_80009EF4;
    case 0x80009EF8u: goto label_80009EF8;
    case 0x80009EFCu: goto label_80009EFC;
    case 0x80009F00u: goto label_80009F00;
    case 0x80009F04u: goto label_80009F04;
    case 0x80009F08u: goto label_80009F08;
    case 0x80009F0Cu: goto label_80009F0C;
    case 0x80009F10u: goto label_80009F10;
    case 0x80009F14u: goto label_80009F14;
    case 0x80009F18u: goto label_80009F18;
    case 0x80009F1Cu: goto label_80009F1C;
    case 0x80009F20u: goto label_80009F20;
    case 0x80009F24u: goto label_80009F24;
    case 0x80009F28u: goto label_80009F28;
    case 0x80009F2Cu: goto label_80009F2C;
    case 0x80009F30u: goto label_80009F30;
    case 0x80009F34u: goto label_80009F34;
    case 0x80009F38u: goto label_80009F38;
    case 0x80009F3Cu: goto label_80009F3C;
    case 0x80009F40u: goto label_80009F40;
    case 0x80009F44u: goto label_80009F44;
    case 0x80009F48u: goto label_80009F48;
    case 0x80009F4Cu: goto label_80009F4C;
    case 0x80009F50u: goto label_80009F50;
    case 0x80009F54u: goto label_80009F54;
    case 0x80009F58u: goto label_80009F58;
    case 0x80009F5Cu: goto label_80009F5C;
    case 0x80009F60u: goto label_80009F60;
    case 0x80009F64u: goto label_80009F64;
    case 0x80009F68u: goto label_80009F68;
    case 0x80009F6Cu: goto label_80009F6C;
    case 0x80009F70u: goto label_80009F70;
    case 0x80009F74u: goto label_80009F74;
    case 0x80009F78u: goto label_80009F78;
    case 0x80009F7Cu: goto label_80009F7C;
    case 0x80009F80u: goto label_80009F80;
    case 0x80009F84u: goto label_80009F84;
    case 0x80009F88u: goto label_80009F88;
    case 0x80009F8Cu: goto label_80009F8C;
    case 0x80009F90u: goto label_80009F90;
    case 0x80009F94u: goto label_80009F94;
    case 0x80009F98u: goto label_80009F98;
    case 0x80009F9Cu: goto label_80009F9C;
    case 0x80009FA0u: goto label_80009FA0;
    case 0x80009FA4u: goto label_80009FA4;
    case 0x80009FA8u: goto label_80009FA8;
    case 0x80009FACu: goto label_80009FAC;
    case 0x80009FB0u: goto label_80009FB0;
    case 0x80009FB4u: goto label_80009FB4;
    case 0x80009FB8u: goto label_80009FB8;
    case 0x80009FBCu: goto label_80009FBC;
    case 0x80009FC0u: goto label_80009FC0;
    case 0x80009FC4u: goto label_80009FC4;
    case 0x80009FC8u: goto label_80009FC8;
    case 0x80009FCCu: goto label_80009FCC;
    case 0x80009FD0u: goto label_80009FD0;
    case 0x80009FD4u: goto label_80009FD4;
    case 0x80009FD8u: goto label_80009FD8;
    case 0x80009FDCu: goto label_80009FDC;
    case 0x80009FE0u: goto label_80009FE0;
    case 0x80009FE4u: goto label_80009FE4;
    case 0x80009FE8u: goto label_80009FE8;
    case 0x80009FECu: goto label_80009FEC;
    case 0x80009FF0u: goto label_80009FF0;
    case 0x80009FF4u: goto label_80009FF4;
    case 0x80009FF8u: goto label_80009FF8;
    case 0x80009FFCu: goto label_80009FFC;
    case 0x8000A000u: goto label_8000A000;
    case 0x8000A004u: goto label_8000A004;
    case 0x8000A008u: goto label_8000A008;
    case 0x8000A00Cu: goto label_8000A00C;
    case 0x8000A010u: goto label_8000A010;
    case 0x8000A014u: goto label_8000A014;
    case 0x8000A018u: goto label_8000A018;
    case 0x8000A01Cu: goto label_8000A01C;
    case 0x8000A020u: goto label_8000A020;
    case 0x8000A024u: goto label_8000A024;
    case 0x8000A028u: goto label_8000A028;
    case 0x8000A02Cu: goto label_8000A02C;
    case 0x8000A030u: goto label_8000A030;
    case 0x8000A034u: goto label_8000A034;
    case 0x8000A038u: goto label_8000A038;
    case 0x8000A03Cu: goto label_8000A03C;
    case 0x8000A040u: goto label_8000A040;
    case 0x8000A044u: goto label_8000A044;
    case 0x8000A048u: goto label_8000A048;
    case 0x8000A04Cu: goto label_8000A04C;
    case 0x8000A050u: goto label_8000A050;
    case 0x8000A054u: goto label_8000A054;
    case 0x8000A058u: goto label_8000A058;
    case 0x8000A05Cu: goto label_8000A05C;
    case 0x8000A060u: goto label_8000A060;
    case 0x8000A064u: goto label_8000A064;
    case 0x8000A068u: goto label_8000A068;
    case 0x8000A06Cu: goto label_8000A06C;
    case 0x8000A070u: goto label_8000A070;
    case 0x8000A074u: goto label_8000A074;
    case 0x8000A078u: goto label_8000A078;
    case 0x8000A07Cu: goto label_8000A07C;
    case 0x8000A080u: goto label_8000A080;
    case 0x8000A084u: goto label_8000A084;
    case 0x8000A088u: goto label_8000A088;
    case 0x8000A08Cu: goto label_8000A08C;
    case 0x8000A090u: goto label_8000A090;
    case 0x8000A094u: goto label_8000A094;
    case 0x8000A098u: goto label_8000A098;
    case 0x8000A09Cu: goto label_8000A09C;
    case 0x8000A0A0u: goto label_8000A0A0;
    case 0x8000A0A4u: goto label_8000A0A4;
    case 0x8000A0A8u: goto label_8000A0A8;
    case 0x8000A0ACu: goto label_8000A0AC;
    case 0x8000A0B0u: goto label_8000A0B0;
    case 0x8000A0B4u: goto label_8000A0B4;
    case 0x8000A0B8u: goto label_8000A0B8;
    case 0x8000A0BCu: goto label_8000A0BC;
    case 0x8000A0C0u: goto label_8000A0C0;
    case 0x8000A0C4u: goto label_8000A0C4;
    case 0x8000A0C8u: goto label_8000A0C8;
    case 0x8000A0CCu: goto label_8000A0CC;
    case 0x8000A0D0u: goto label_8000A0D0;
    case 0x8000A0D4u: goto label_8000A0D4;
    case 0x8000A0D8u: goto label_8000A0D8;
    case 0x8000A0DCu: goto label_8000A0DC;
    case 0x8000A0E0u: goto label_8000A0E0;
    case 0x8000A0E4u: goto label_8000A0E4;
    case 0x8000A0E8u: goto label_8000A0E8;
    case 0x8000A0ECu: goto label_8000A0EC;
    case 0x8000A0F0u: goto label_8000A0F0;
    case 0x8000A0F4u: goto label_8000A0F4;
    case 0x8000A0F8u: goto label_8000A0F8;
    case 0x8000A0FCu: goto label_8000A0FC;
    case 0x8000A100u: goto label_8000A100;
    case 0x8000A104u: goto label_8000A104;
    case 0x8000A108u: goto label_8000A108;
    case 0x8000A10Cu: goto label_8000A10C;
    case 0x8000A110u: goto label_8000A110;
    case 0x8000A114u: goto label_8000A114;
    case 0x8000A118u: goto label_8000A118;
    case 0x8000A11Cu: goto label_8000A11C;
    case 0x8000A120u: goto label_8000A120;
    case 0x8000A124u: goto label_8000A124;
    case 0x8000A128u: goto label_8000A128;
    case 0x8000A12Cu: goto label_8000A12C;
    case 0x8000A130u: goto label_8000A130;
    case 0x8000A134u: goto label_8000A134;
    case 0x8000A138u: goto label_8000A138;
    case 0x8000A13Cu: goto label_8000A13C;
    case 0x8000A140u: goto label_8000A140;
    case 0x8000A144u: goto label_8000A144;
    case 0x8000A148u: goto label_8000A148;
    case 0x8000A14Cu: goto label_8000A14C;
    case 0x8000A150u: goto label_8000A150;
    case 0x8000A154u: goto label_8000A154;
    case 0x8000A158u: goto label_8000A158;
    case 0x8000A15Cu: goto label_8000A15C;
    case 0x8000A160u: goto label_8000A160;
    case 0x8000A164u: goto label_8000A164;
    case 0x8000A168u: goto label_8000A168;
    case 0x8000A16Cu: goto label_8000A16C;
    case 0x8000A170u: goto label_8000A170;
    case 0x8000A174u: goto label_8000A174;
    case 0x8000A178u: goto label_8000A178;
    case 0x8000A17Cu: goto label_8000A17C;
    case 0x8000A180u: goto label_8000A180;
    case 0x8000A184u: goto label_8000A184;
    case 0x8000A188u: goto label_8000A188;
    case 0x8000A18Cu: goto label_8000A18C;
    case 0x8000A190u: goto label_8000A190;
    case 0x8000A194u: goto label_8000A194;
    case 0x8000A198u: goto label_8000A198;
    case 0x8000A19Cu: goto label_8000A19C;
    case 0x8000A1A0u: goto label_8000A1A0;
    case 0x8000A1A4u: goto label_8000A1A4;
    case 0x8000A1A8u: goto label_8000A1A8;
    case 0x8000A1ACu: goto label_8000A1AC;
    case 0x8000A1B0u: goto label_8000A1B0;
    case 0x8000A1B4u: goto label_8000A1B4;
    case 0x8000A1B8u: goto label_8000A1B8;
    case 0x8000A1BCu: goto label_8000A1BC;
    case 0x8000A1C0u: goto label_8000A1C0;
    case 0x8000A1C4u: goto label_8000A1C4;
    case 0x8000A1C8u: goto label_8000A1C8;
    case 0x8000A1CCu: goto label_8000A1CC;
    case 0x8000A1D0u: goto label_8000A1D0;
    case 0x8000A1D4u: goto label_8000A1D4;
    case 0x8000A1D8u: goto label_8000A1D8;
    case 0x8000A1DCu: goto label_8000A1DC;
    case 0x8000A1E0u: goto label_8000A1E0;
    case 0x8000A1E4u: goto label_8000A1E4;
    case 0x8000A1E8u: goto label_8000A1E8;
    case 0x8000A1ECu: goto label_8000A1EC;
    case 0x8000A1F0u: goto label_8000A1F0;
    case 0x8000A1F4u: goto label_8000A1F4;
    case 0x8000A1F8u: goto label_8000A1F8;
    case 0x8000A1FCu: goto label_8000A1FC;
    case 0x8000A200u: goto label_8000A200;
    case 0x8000A204u: goto label_8000A204;
    case 0x8000A208u: goto label_8000A208;
    case 0x8000A20Cu: goto label_8000A20C;
    case 0x8000A210u: goto label_8000A210;
    case 0x8000A214u: goto label_8000A214;
    case 0x8000A218u: goto label_8000A218;
    case 0x8000A21Cu: goto label_8000A21C;
    case 0x8000A220u: goto label_8000A220;
    case 0x8000A224u: goto label_8000A224;
    case 0x8000A228u: goto label_8000A228;
    case 0x8000A22Cu: goto label_8000A22C;
    case 0x8000A230u: goto label_8000A230;
    case 0x8000A234u: goto label_8000A234;
    case 0x8000A238u: goto label_8000A238;
    case 0x8000A23Cu: goto label_8000A23C;
    case 0x8000A240u: goto label_8000A240;
    case 0x8000A244u: goto label_8000A244;
    case 0x8000A248u: goto label_8000A248;
    case 0x8000A24Cu: goto label_8000A24C;
    case 0x8000A250u: goto label_8000A250;
    case 0x8000A254u: goto label_8000A254;
    case 0x8000A258u: goto label_8000A258;
    case 0x8000A25Cu: goto label_8000A25C;
    case 0x8000A260u: goto label_8000A260;
    case 0x8000A264u: goto label_8000A264;
    case 0x8000A268u: goto label_8000A268;
    case 0x8000A26Cu: goto label_8000A26C;
    case 0x8000A270u: goto label_8000A270;
    case 0x8000A274u: goto label_8000A274;
    case 0x8000A278u: goto label_8000A278;
    case 0x8000A27Cu: goto label_8000A27C;
    case 0x8000A280u: goto label_8000A280;
    case 0x8000A284u: goto label_8000A284;
    case 0x8000A288u: goto label_8000A288;
    case 0x8000A28Cu: goto label_8000A28C;
    case 0x8000A290u: goto label_8000A290;
    case 0x8000A294u: goto label_8000A294;
    case 0x8000A298u: goto label_8000A298;
    case 0x8000A29Cu: goto label_8000A29C;
    case 0x8000A2A0u: goto label_8000A2A0;
    case 0x8000A2A4u: goto label_8000A2A4;
    case 0x8000A2A8u: goto label_8000A2A8;
    case 0x8000A2ACu: goto label_8000A2AC;
    case 0x8000A2B0u: goto label_8000A2B0;
    case 0x8000A2B4u: goto label_8000A2B4;
    case 0x8000A2B8u: goto label_8000A2B8;
    case 0x8000A2BCu: goto label_8000A2BC;
    case 0x8000A2C0u: goto label_8000A2C0;
    case 0x8000A2C4u: goto label_8000A2C4;
    case 0x8000A2C8u: goto label_8000A2C8;
    case 0x8000A2CCu: goto label_8000A2CC;
    case 0x8000A2D0u: goto label_8000A2D0;
    case 0x8000A2D4u: goto label_8000A2D4;
    case 0x8000A2D8u: goto label_8000A2D8;
    case 0x8000A2DCu: goto label_8000A2DC;
    case 0x8000A2E0u: goto label_8000A2E0;
    case 0x8000A2E4u: goto label_8000A2E4;
    case 0x8000A2E8u: goto label_8000A2E8;
    case 0x8000A2ECu: goto label_8000A2EC;
    case 0x8000A2F0u: goto label_8000A2F0;
    case 0x8000A2F4u: goto label_8000A2F4;
    case 0x8000A2F8u: goto label_8000A2F8;
    case 0x8000A2FCu: goto label_8000A2FC;
    case 0x8000A300u: goto label_8000A300;
    case 0x8000A304u: goto label_8000A304;
    case 0x8000A308u: goto label_8000A308;
    case 0x8000A30Cu: goto label_8000A30C;
    case 0x8000A310u: goto label_8000A310;
    case 0x8000A314u: goto label_8000A314;
    case 0x8000A318u: goto label_8000A318;
    case 0x8000A31Cu: goto label_8000A31C;
    case 0x8000A320u: goto label_8000A320;
    case 0x8000A324u: goto label_8000A324;
    case 0x8000A328u: goto label_8000A328;
    case 0x8000A32Cu: goto label_8000A32C;
    case 0x8000A330u: goto label_8000A330;
    case 0x8000A334u: goto label_8000A334;
    case 0x8000A338u: goto label_8000A338;
    case 0x8000A33Cu: goto label_8000A33C;
    case 0x8000A340u: goto label_8000A340;
    case 0x8000A344u: goto label_8000A344;
    case 0x8000A348u: goto label_8000A348;
    case 0x8000A34Cu: goto label_8000A34C;
    case 0x8000A350u: goto label_8000A350;
    case 0x8000A354u: goto label_8000A354;
    case 0x8000A358u: goto label_8000A358;
    case 0x8000A35Cu: goto label_8000A35C;
    case 0x8000A360u: goto label_8000A360;
    case 0x8000A364u: goto label_8000A364;
    case 0x8000A368u: goto label_8000A368;
    case 0x8000A36Cu: goto label_8000A36C;
    case 0x8000A370u: goto label_8000A370;
    case 0x8000A374u: goto label_8000A374;
    case 0x8000A378u: goto label_8000A378;
    case 0x8000A37Cu: goto label_8000A37C;
    case 0x8000A380u: goto label_8000A380;
    case 0x8000A384u: goto label_8000A384;
    case 0x8000A388u: goto label_8000A388;
    case 0x8000A38Cu: goto label_8000A38C;
    case 0x8000A390u: goto label_8000A390;
    case 0x8000A394u: goto label_8000A394;
    case 0x8000A398u: goto label_8000A398;
    case 0x8000A39Cu: goto label_8000A39C;
    case 0x8000A3A0u: goto label_8000A3A0;
    case 0x8000A3A4u: goto label_8000A3A4;
    case 0x8000A3A8u: goto label_8000A3A8;
    case 0x8000A3ACu: goto label_8000A3AC;
    case 0x8000A3B0u: goto label_8000A3B0;
    case 0x8000A3B4u: goto label_8000A3B4;
    case 0x8000A3B8u: goto label_8000A3B8;
    case 0x8000A3BCu: goto label_8000A3BC;
    case 0x8000A3C0u: goto label_8000A3C0;
    case 0x8000A3C4u: goto label_8000A3C4;
    case 0x8000A3C8u: goto label_8000A3C8;
    case 0x8000A3CCu: goto label_8000A3CC;
    case 0x8000A3D0u: goto label_8000A3D0;
    case 0x8000A3D4u: goto label_8000A3D4;
    case 0x8000A3D8u: goto label_8000A3D8;
    case 0x8000A3DCu: goto label_8000A3DC;
    case 0x8000A3E0u: goto label_8000A3E0;
    case 0x8000A3E4u: goto label_8000A3E4;
    case 0x8000A3E8u: goto label_8000A3E8;
    case 0x8000A3ECu: goto label_8000A3EC;
    case 0x8000A3F0u: goto label_8000A3F0;
    case 0x8000A3F4u: goto label_8000A3F4;
    case 0x8000A3F8u: goto label_8000A3F8;
    case 0x8000A3FCu: goto label_8000A3FC;
    case 0x8000A400u: goto label_8000A400;
    case 0x8000A404u: goto label_8000A404;
    case 0x8000A408u: goto label_8000A408;
    case 0x8000A40Cu: goto label_8000A40C;
    case 0x8000A410u: goto label_8000A410;
    case 0x8000A414u: goto label_8000A414;
    case 0x8000A418u: goto label_8000A418;
    case 0x8000A41Cu: goto label_8000A41C;
    case 0x8000A420u: goto label_8000A420;
    case 0x8000A424u: goto label_8000A424;
    case 0x8000A428u: goto label_8000A428;
    case 0x8000A42Cu: goto label_8000A42C;
    case 0x8000A430u: goto label_8000A430;
    case 0x8000A434u: goto label_8000A434;
    case 0x8000A438u: goto label_8000A438;
    case 0x8000A43Cu: goto label_8000A43C;
    case 0x8000A440u: goto label_8000A440;
    case 0x8000A444u: goto label_8000A444;
    case 0x8000A448u: goto label_8000A448;
    case 0x8000A44Cu: goto label_8000A44C;
    case 0x8000A450u: goto label_8000A450;
    case 0x8000A454u: goto label_8000A454;
    case 0x8000A458u: goto label_8000A458;
    case 0x8000A45Cu: goto label_8000A45C;
    case 0x8000A460u: goto label_8000A460;
    case 0x8000A464u: goto label_8000A464;
    case 0x8000A468u: goto label_8000A468;
    case 0x8000A46Cu: goto label_8000A46C;
    case 0x8000A470u: goto label_8000A470;
    case 0x8000A474u: goto label_8000A474;
    case 0x8000A478u: goto label_8000A478;
    case 0x8000A47Cu: goto label_8000A47C;
    case 0x8000A480u: goto label_8000A480;
    case 0x8000A484u: goto label_8000A484;
    case 0x8000A488u: goto label_8000A488;
    case 0x8000A48Cu: goto label_8000A48C;
    case 0x8000A490u: goto label_8000A490;
    case 0x8000A494u: goto label_8000A494;
    case 0x8000A498u: goto label_8000A498;
    case 0x8000A49Cu: goto label_8000A49C;
    case 0x8000A4A0u: goto label_8000A4A0;
    case 0x8000A4A4u: goto label_8000A4A4;
    case 0x8000A4A8u: goto label_8000A4A8;
    case 0x8000A4ACu: goto label_8000A4AC;
    case 0x8000A4B0u: goto label_8000A4B0;
    case 0x8000A4B4u: goto label_8000A4B4;
    case 0x8000A4B8u: goto label_8000A4B8;
    case 0x8000A4BCu: goto label_8000A4BC;
    case 0x8000A4C0u: goto label_8000A4C0;
    case 0x8000A4C4u: goto label_8000A4C4;
    case 0x8000A4C8u: goto label_8000A4C8;
    case 0x8000A4CCu: goto label_8000A4CC;
    case 0x8000A4D0u: goto label_8000A4D0;
    case 0x8000A4D4u: goto label_8000A4D4;
    case 0x8000A4D8u: goto label_8000A4D8;
    case 0x8000A4DCu: goto label_8000A4DC;
    case 0x8000A4E0u: goto label_8000A4E0;
    case 0x8000A4E4u: goto label_8000A4E4;
    case 0x8000A4E8u: goto label_8000A4E8;
    case 0x8000A4ECu: goto label_8000A4EC;
    case 0x8000A4F0u: goto label_8000A4F0;
    case 0x8000A4F4u: goto label_8000A4F4;
    case 0x8000A4F8u: goto label_8000A4F8;
    case 0x8000A4FCu: goto label_8000A4FC;
    case 0x8000A500u: goto label_8000A500;
    case 0x8000A504u: goto label_8000A504;
    case 0x8000A508u: goto label_8000A508;
    case 0x8000A50Cu: goto label_8000A50C;
    case 0x8000A510u: goto label_8000A510;
    case 0x8000A514u: goto label_8000A514;
    case 0x8000A518u: goto label_8000A518;
    case 0x8000A51Cu: goto label_8000A51C;
    case 0x8000A520u: goto label_8000A520;
    case 0x8000A524u: goto label_8000A524;
    case 0x8000A528u: goto label_8000A528;
    case 0x8000A52Cu: goto label_8000A52C;
    case 0x8000A530u: goto label_8000A530;
    case 0x8000A534u: goto label_8000A534;
    case 0x8000A538u: goto label_8000A538;
    case 0x8000A53Cu: goto label_8000A53C;
    case 0x8000A540u: goto label_8000A540;
    case 0x8000A544u: goto label_8000A544;
    case 0x8000A548u: goto label_8000A548;
    case 0x8000A54Cu: goto label_8000A54C;
    case 0x8000A550u: goto label_8000A550;
    case 0x8000A554u: goto label_8000A554;
    case 0x8000A558u: goto label_8000A558;
    case 0x8000A55Cu: goto label_8000A55C;
    case 0x8000A560u: goto label_8000A560;
    case 0x8000A564u: goto label_8000A564;
    case 0x8000A568u: goto label_8000A568;
    case 0x8000A56Cu: goto label_8000A56C;
    case 0x8000A570u: goto label_8000A570;
    case 0x8000A574u: goto label_8000A574;
    case 0x8000A578u: goto label_8000A578;
    case 0x8000A57Cu: goto label_8000A57C;
    case 0x8000A580u: goto label_8000A580;
    case 0x8000A584u: goto label_8000A584;
    case 0x8000A588u: goto label_8000A588;
    case 0x8000A58Cu: goto label_8000A58C;
    case 0x8000A590u: goto label_8000A590;
    case 0x8000A594u: goto label_8000A594;
    case 0x8000A598u: goto label_8000A598;
    case 0x8000A59Cu: goto label_8000A59C;
    case 0x8000A5A0u: goto label_8000A5A0;
    case 0x8000A5A4u: goto label_8000A5A4;
    case 0x8000A5A8u: goto label_8000A5A8;
    case 0x8000A5ACu: goto label_8000A5AC;
    case 0x8000A5B0u: goto label_8000A5B0;
    case 0x8000A5B4u: goto label_8000A5B4;
    case 0x8000A5B8u: goto label_8000A5B8;
    case 0x8000A5BCu: goto label_8000A5BC;
    case 0x8000A5C0u: goto label_8000A5C0;
    case 0x8000A5C4u: goto label_8000A5C4;
    case 0x8000A5C8u: goto label_8000A5C8;
    case 0x8000A5CCu: goto label_8000A5CC;
    case 0x8000A5D0u: goto label_8000A5D0;
    case 0x8000A5D4u: goto label_8000A5D4;
    case 0x8000A5D8u: goto label_8000A5D8;
    case 0x8000A5DCu: goto label_8000A5DC;
    case 0x8000A5E0u: goto label_8000A5E0;
    case 0x8000A5E4u: goto label_8000A5E4;
    case 0x8000A5E8u: goto label_8000A5E8;
    case 0x8000A5ECu: goto label_8000A5EC;
    case 0x8000A5F0u: goto label_8000A5F0;
    case 0x8000A5F4u: goto label_8000A5F4;
    case 0x8000A5F8u: goto label_8000A5F8;
    case 0x8000A5FCu: goto label_8000A5FC;
    case 0x8000A600u: goto label_8000A600;
    case 0x8000A604u: goto label_8000A604;
    case 0x8000A608u: goto label_8000A608;
    case 0x8000A60Cu: goto label_8000A60C;
    case 0x8000A610u: goto label_8000A610;
    case 0x8000A614u: goto label_8000A614;
    case 0x8000A618u: goto label_8000A618;
    case 0x8000A61Cu: goto label_8000A61C;
    case 0x8000A620u: goto label_8000A620;
    case 0x8000A624u: goto label_8000A624;
    case 0x8000A628u: goto label_8000A628;
    case 0x8000A62Cu: goto label_8000A62C;
    case 0x8000A630u: goto label_8000A630;
    case 0x8000A634u: goto label_8000A634;
    case 0x8000A638u: goto label_8000A638;
    case 0x8000A63Cu: goto label_8000A63C;
    case 0x8000A640u: goto label_8000A640;
    case 0x8000A644u: goto label_8000A644;
    case 0x8000A648u: goto label_8000A648;
    case 0x8000A64Cu: goto label_8000A64C;
    case 0x8000A650u: goto label_8000A650;
    case 0x8000A654u: goto label_8000A654;
    case 0x8000A658u: goto label_8000A658;
    case 0x8000A65Cu: goto label_8000A65C;
    case 0x8000A660u: goto label_8000A660;
    case 0x8000A664u: goto label_8000A664;
    case 0x8000A668u: goto label_8000A668;
    case 0x8000A66Cu: goto label_8000A66C;
    case 0x8000A670u: goto label_8000A670;
    case 0x8000A674u: goto label_8000A674;
    case 0x8000A678u: goto label_8000A678;
    case 0x8000A67Cu: goto label_8000A67C;
    case 0x8000A680u: goto label_8000A680;
    case 0x8000A684u: goto label_8000A684;
    case 0x8000A688u: goto label_8000A688;
    case 0x8000A68Cu: goto label_8000A68C;
    case 0x8000A690u: goto label_8000A690;
    case 0x8000A694u: goto label_8000A694;
    case 0x8000A698u: goto label_8000A698;
    case 0x8000A69Cu: goto label_8000A69C;
    case 0x8000A6A0u: goto label_8000A6A0;
    case 0x8000A6A4u: goto label_8000A6A4;
    case 0x8000A6A8u: goto label_8000A6A8;
    case 0x8000A6ACu: goto label_8000A6AC;
    case 0x8000A6B0u: goto label_8000A6B0;
    case 0x8000A6B4u: goto label_8000A6B4;
    case 0x8000A6B8u: goto label_8000A6B8;
    case 0x8000A6BCu: goto label_8000A6BC;
    case 0x8000A6C0u: goto label_8000A6C0;
    case 0x8000A6C4u: goto label_8000A6C4;
    case 0x8000A6C8u: goto label_8000A6C8;
    case 0x8000A6CCu: goto label_8000A6CC;
    case 0x8000A6D0u: goto label_8000A6D0;
    case 0x8000A6D4u: goto label_8000A6D4;
    case 0x8000A6D8u: goto label_8000A6D8;
    case 0x8000A6DCu: goto label_8000A6DC;
    case 0x8000A6E0u: goto label_8000A6E0;
    case 0x8000A6E4u: goto label_8000A6E4;
    case 0x8000A6E8u: goto label_8000A6E8;
    case 0x8000A6ECu: goto label_8000A6EC;
    case 0x8000A6F0u: goto label_8000A6F0;
    case 0x8000A6F4u: goto label_8000A6F4;
    case 0x8000A6F8u: goto label_8000A6F8;
    case 0x8000A6FCu: goto label_8000A6FC;
    case 0x8000A700u: goto label_8000A700;
    case 0x8000A704u: goto label_8000A704;
    case 0x8000A708u: goto label_8000A708;
    case 0x8000A70Cu: goto label_8000A70C;
    case 0x8000A710u: goto label_8000A710;
    case 0x8000A714u: goto label_8000A714;
    case 0x8000A718u: goto label_8000A718;
    case 0x8000A71Cu: goto label_8000A71C;
    case 0x8000A720u: goto label_8000A720;
    case 0x8000A724u: goto label_8000A724;
    case 0x8000A728u: goto label_8000A728;
    case 0x8000A72Cu: goto label_8000A72C;
    case 0x8000A730u: goto label_8000A730;
    case 0x8000A734u: goto label_8000A734;
    case 0x8000A738u: goto label_8000A738;
    case 0x8000A73Cu: goto label_8000A73C;
    case 0x8000A740u: goto label_8000A740;
    case 0x8000A744u: goto label_8000A744;
    case 0x8000A748u: goto label_8000A748;
    case 0x8000A74Cu: goto label_8000A74C;
    case 0x8000A750u: goto label_8000A750;
    case 0x8000A754u: goto label_8000A754;
    case 0x8000A758u: goto label_8000A758;
    case 0x8000A75Cu: goto label_8000A75C;
    case 0x8000A760u: goto label_8000A760;
    case 0x8000A764u: goto label_8000A764;
    case 0x8000A768u: goto label_8000A768;
    case 0x8000A76Cu: goto label_8000A76C;
    case 0x8000A770u: goto label_8000A770;
    case 0x8000A774u: goto label_8000A774;
    case 0x8000A778u: goto label_8000A778;
    case 0x8000A77Cu: goto label_8000A77C;
    case 0x8000A780u: goto label_8000A780;
    case 0x8000A784u: goto label_8000A784;
    case 0x8000A788u: goto label_8000A788;
    case 0x8000A78Cu: goto label_8000A78C;
    case 0x8000A790u: goto label_8000A790;
    case 0x8000A794u: goto label_8000A794;
    case 0x8000A798u: goto label_8000A798;
    case 0x8000A79Cu: goto label_8000A79C;
    case 0x8000A7A0u: goto label_8000A7A0;
    case 0x8000A7A4u: goto label_8000A7A4;
    case 0x8000A7A8u: goto label_8000A7A8;
    case 0x8000A7ACu: goto label_8000A7AC;
    case 0x8000A7B0u: goto label_8000A7B0;
    case 0x8000A7B4u: goto label_8000A7B4;
    case 0x8000A7B8u: goto label_8000A7B8;
    case 0x8000A7BCu: goto label_8000A7BC;
    case 0x8000A7C0u: goto label_8000A7C0;
    case 0x8000A7C4u: goto label_8000A7C4;
    case 0x8000A7C8u: goto label_8000A7C8;
    case 0x8000A7CCu: goto label_8000A7CC;
    case 0x8000A7D0u: goto label_8000A7D0;
    case 0x8000A7D4u: goto label_8000A7D4;
    case 0x8000A7D8u: goto label_8000A7D8;
    case 0x8000A7DCu: goto label_8000A7DC;
    case 0x8000A7E0u: goto label_8000A7E0;
    case 0x8000A7E4u: goto label_8000A7E4;
    case 0x8000A7E8u: goto label_8000A7E8;
    case 0x8000A7ECu: goto label_8000A7EC;
    case 0x8000A7F0u: goto label_8000A7F0;
    case 0x8000A7F4u: goto label_8000A7F4;
    case 0x8000A7F8u: goto label_8000A7F8;
    case 0x8000A7FCu: goto label_8000A7FC;
    case 0x8000A800u: goto label_8000A800;
    case 0x8000A804u: goto label_8000A804;
    case 0x8000A808u: goto label_8000A808;
    case 0x8000A80Cu: goto label_8000A80C;
    case 0x8000A810u: goto label_8000A810;
    case 0x8000A814u: goto label_8000A814;
    case 0x8000A818u: goto label_8000A818;
    case 0x8000A81Cu: goto label_8000A81C;
    case 0x8000A820u: goto label_8000A820;
    case 0x8000A824u: goto label_8000A824;
    case 0x8000A828u: goto label_8000A828;
    case 0x8000A82Cu: goto label_8000A82C;
    case 0x8000A830u: goto label_8000A830;
    case 0x8000A834u: goto label_8000A834;
    case 0x8000A838u: goto label_8000A838;
    case 0x8000A83Cu: goto label_8000A83C;
    case 0x8000A840u: goto label_8000A840;
    case 0x8000A844u: goto label_8000A844;
    case 0x8000A848u: goto label_8000A848;
    case 0x8000A84Cu: goto label_8000A84C;
    case 0x8000A850u: goto label_8000A850;
    case 0x8000A854u: goto label_8000A854;
    case 0x8000A858u: goto label_8000A858;
    case 0x8000A85Cu: goto label_8000A85C;
    case 0x8000A860u: goto label_8000A860;
    case 0x8000A864u: goto label_8000A864;
    case 0x8000A868u: goto label_8000A868;
    case 0x8000A86Cu: goto label_8000A86C;
    case 0x8000A870u: goto label_8000A870;
    case 0x8000A874u: goto label_8000A874;
    case 0x8000A878u: goto label_8000A878;
    case 0x8000A87Cu: goto label_8000A87C;
    case 0x8000A880u: goto label_8000A880;
    case 0x8000A884u: goto label_8000A884;
    case 0x8000A888u: goto label_8000A888;
    case 0x8000A88Cu: goto label_8000A88C;
    case 0x8000A890u: goto label_8000A890;
    case 0x8000A894u: goto label_8000A894;
    case 0x8000A898u: goto label_8000A898;
    case 0x8000A89Cu: goto label_8000A89C;
    case 0x8000A8A0u: goto label_8000A8A0;
    case 0x8000A8A4u: goto label_8000A8A4;
    case 0x8000A8A8u: goto label_8000A8A8;
    case 0x8000A8ACu: goto label_8000A8AC;
    case 0x8000A8B0u: goto label_8000A8B0;
    case 0x8000A8B4u: goto label_8000A8B4;
    case 0x8000A8B8u: goto label_8000A8B8;
    case 0x8000A8BCu: goto label_8000A8BC;
    case 0x8000A8C0u: goto label_8000A8C0;
    case 0x8000A8C4u: goto label_8000A8C4;
    case 0x8000A8C8u: goto label_8000A8C8;
    case 0x8000A8CCu: goto label_8000A8CC;
    case 0x8000A8D0u: goto label_8000A8D0;
    case 0x8000A8D4u: goto label_8000A8D4;
    case 0x8000A8D8u: goto label_8000A8D8;
    case 0x8000A8DCu: goto label_8000A8DC;
    case 0x8000A8E0u: goto label_8000A8E0;
    case 0x8000A8E4u: goto label_8000A8E4;
    case 0x8000A8E8u: goto label_8000A8E8;
    case 0x8000A8ECu: goto label_8000A8EC;
    case 0x8000A8F0u: goto label_8000A8F0;
    case 0x8000A8F4u: goto label_8000A8F4;
    case 0x8000A8F8u: goto label_8000A8F8;
    case 0x8000A8FCu: goto label_8000A8FC;
    case 0x8000A900u: goto label_8000A900;
    case 0x8000A904u: goto label_8000A904;
    case 0x8000A908u: goto label_8000A908;
    case 0x8000A90Cu: goto label_8000A90C;
    case 0x8000A910u: goto label_8000A910;
    case 0x8000A914u: goto label_8000A914;
    case 0x8000A918u: goto label_8000A918;
    case 0x8000A91Cu: goto label_8000A91C;
    case 0x8000A920u: goto label_8000A920;
    case 0x8000A924u: goto label_8000A924;
    case 0x8000A928u: goto label_8000A928;
    case 0x8000A92Cu: goto label_8000A92C;
    case 0x8000A930u: goto label_8000A930;
    case 0x8000A934u: goto label_8000A934;
    case 0x8000A938u: goto label_8000A938;
    case 0x8000A93Cu: goto label_8000A93C;
    case 0x8000A940u: goto label_8000A940;
    case 0x8000A944u: goto label_8000A944;
    case 0x8000A948u: goto label_8000A948;
    case 0x8000A94Cu: goto label_8000A94C;
    case 0x8000A950u: goto label_8000A950;
    case 0x8000A954u: goto label_8000A954;
    case 0x8000A958u: goto label_8000A958;
    case 0x8000A95Cu: goto label_8000A95C;
    case 0x8000A960u: goto label_8000A960;
    case 0x8000A964u: goto label_8000A964;
    case 0x8000A968u: goto label_8000A968;
    case 0x8000A96Cu: goto label_8000A96C;
    case 0x8000A970u: goto label_8000A970;
    case 0x8000A974u: goto label_8000A974;
    case 0x8000A978u: goto label_8000A978;
    case 0x8000A97Cu: goto label_8000A97C;
    case 0x8000A980u: goto label_8000A980;
    case 0x8000A984u: goto label_8000A984;
    case 0x8000A988u: goto label_8000A988;
    case 0x8000A98Cu: goto label_8000A98C;
    case 0x8000A990u: goto label_8000A990;
    case 0x8000A994u: goto label_8000A994;
    case 0x8000A998u: goto label_8000A998;
    case 0x8000A99Cu: goto label_8000A99C;
    case 0x8000A9A0u: goto label_8000A9A0;
    case 0x8000A9A4u: goto label_8000A9A4;
    case 0x8000A9A8u: goto label_8000A9A8;
    case 0x8000A9ACu: goto label_8000A9AC;
    case 0x8000A9B0u: goto label_8000A9B0;
    case 0x8000A9B4u: goto label_8000A9B4;
    case 0x8000A9B8u: goto label_8000A9B8;
    case 0x8000A9BCu: goto label_8000A9BC;
    case 0x8000A9C0u: goto label_8000A9C0;
    case 0x8000A9C4u: goto label_8000A9C4;
    case 0x8000A9C8u: goto label_8000A9C8;
    case 0x8000A9CCu: goto label_8000A9CC;
    case 0x8000A9D0u: goto label_8000A9D0;
    case 0x8000A9D4u: goto label_8000A9D4;
    case 0x8000A9D8u: goto label_8000A9D8;
    case 0x8000A9DCu: goto label_8000A9DC;
    case 0x8000A9E0u: goto label_8000A9E0;
    case 0x8000A9E4u: goto label_8000A9E4;
    case 0x8000A9E8u: goto label_8000A9E8;
    case 0x8000A9ECu: goto label_8000A9EC;
    case 0x8000A9F0u: goto label_8000A9F0;
    case 0x8000A9F4u: goto label_8000A9F4;
    case 0x8000A9F8u: goto label_8000A9F8;
    case 0x8000A9FCu: goto label_8000A9FC;
    case 0x8000AA00u: goto label_8000AA00;
    case 0x8000AA04u: goto label_8000AA04;
    case 0x8000AA08u: goto label_8000AA08;
    case 0x8000AA0Cu: goto label_8000AA0C;
    case 0x8000AA10u: goto label_8000AA10;
    case 0x8000AA14u: goto label_8000AA14;
    case 0x8000AA18u: goto label_8000AA18;
    case 0x8000AA1Cu: goto label_8000AA1C;
    case 0x8000AA20u: goto label_8000AA20;
    case 0x8000AA24u: goto label_8000AA24;
    case 0x8000AA28u: goto label_8000AA28;
    case 0x8000AA2Cu: goto label_8000AA2C;
    case 0x8000AA30u: goto label_8000AA30;
    case 0x8000AA34u: goto label_8000AA34;
    case 0x8000AA38u: goto label_8000AA38;
    case 0x8000AA3Cu: goto label_8000AA3C;
    case 0x8000AA40u: goto label_8000AA40;
    case 0x8000AA44u: goto label_8000AA44;
    case 0x8000AA48u: goto label_8000AA48;
    case 0x8000AA4Cu: goto label_8000AA4C;
    case 0x8000AA50u: goto label_8000AA50;
    case 0x8000AA54u: goto label_8000AA54;
    case 0x8000AA58u: goto label_8000AA58;
    case 0x8000AA5Cu: goto label_8000AA5C;
    case 0x8000AA60u: goto label_8000AA60;
    case 0x8000AA64u: goto label_8000AA64;
    case 0x8000AA68u: goto label_8000AA68;
    case 0x8000AA6Cu: goto label_8000AA6C;
    case 0x8000AA70u: goto label_8000AA70;
    case 0x8000AA74u: goto label_8000AA74;
    case 0x8000AA78u: goto label_8000AA78;
    case 0x8000AA7Cu: goto label_8000AA7C;
    case 0x8000AA80u: goto label_8000AA80;
    case 0x8000AA84u: goto label_8000AA84;
    case 0x8000AA88u: goto label_8000AA88;
    case 0x8000AA8Cu: goto label_8000AA8C;
    case 0x8000AA90u: goto label_8000AA90;
    case 0x8000AA94u: goto label_8000AA94;
    case 0x8000AA98u: goto label_8000AA98;
    case 0x8000AA9Cu: goto label_8000AA9C;
    case 0x8000AAA0u: goto label_8000AAA0;
    case 0x8000AAA4u: goto label_8000AAA4;
    case 0x8000AAA8u: goto label_8000AAA8;
    case 0x8000AAACu: goto label_8000AAAC;
    case 0x8000AAB0u: goto label_8000AAB0;
    case 0x8000AAB4u: goto label_8000AAB4;
    case 0x8000AAB8u: goto label_8000AAB8;
    case 0x8000AABCu: goto label_8000AABC;
    case 0x8000AAC0u: goto label_8000AAC0;
    case 0x8000AAC4u: goto label_8000AAC4;
    case 0x8000AAC8u: goto label_8000AAC8;
    case 0x8000AACCu: goto label_8000AACC;
    case 0x8000AAD0u: goto label_8000AAD0;
    case 0x8000AAD4u: goto label_8000AAD4;
    case 0x8000AAD8u: goto label_8000AAD8;
    case 0x8000AADCu: goto label_8000AADC;
    case 0x8000AAE0u: goto label_8000AAE0;
    case 0x8000AAE4u: goto label_8000AAE4;
    case 0x8000AAE8u: goto label_8000AAE8;
    case 0x8000AAECu: goto label_8000AAEC;
    case 0x8000AAF0u: goto label_8000AAF0;
    case 0x8000AAF4u: goto label_8000AAF4;
    case 0x8000AAF8u: goto label_8000AAF8;
    case 0x8000AAFCu: goto label_8000AAFC;
    case 0x8000AB00u: goto label_8000AB00;
    case 0x8000AB04u: goto label_8000AB04;
    case 0x8000AB08u: goto label_8000AB08;
    case 0x8000AB0Cu: goto label_8000AB0C;
    case 0x8000AB10u: goto label_8000AB10;
    case 0x8000AB14u: goto label_8000AB14;
    case 0x8000AB18u: goto label_8000AB18;
    case 0x8000AB1Cu: goto label_8000AB1C;
    case 0x8000AB20u: goto label_8000AB20;
    case 0x8000AB24u: goto label_8000AB24;
    case 0x8000AB28u: goto label_8000AB28;
    case 0x8000AB2Cu: goto label_8000AB2C;
    case 0x8000AB30u: goto label_8000AB30;
    case 0x8000AB34u: goto label_8000AB34;
    case 0x8000AB38u: goto label_8000AB38;
    case 0x8000AB3Cu: goto label_8000AB3C;
    case 0x8000AB40u: goto label_8000AB40;
    case 0x8000AB44u: goto label_8000AB44;
    case 0x8000AB48u: goto label_8000AB48;
    case 0x8000AB4Cu: goto label_8000AB4C;
    case 0x8000AB50u: goto label_8000AB50;
    case 0x8000AB54u: goto label_8000AB54;
    case 0x8000AB58u: goto label_8000AB58;
    case 0x8000AB5Cu: goto label_8000AB5C;
    case 0x8000AB60u: goto label_8000AB60;
    case 0x8000AB64u: goto label_8000AB64;
    case 0x8000AB68u: goto label_8000AB68;
    case 0x8000AB6Cu: goto label_8000AB6C;
    case 0x8000AB70u: goto label_8000AB70;
    case 0x8000AB74u: goto label_8000AB74;
    case 0x8000AB78u: goto label_8000AB78;
    case 0x8000AB7Cu: goto label_8000AB7C;
    case 0x8000AB80u: goto label_8000AB80;
    case 0x8000AB84u: goto label_8000AB84;
    case 0x8000AB88u: goto label_8000AB88;
    case 0x8000AB8Cu: goto label_8000AB8C;
    case 0x8000AB90u: goto label_8000AB90;
    case 0x8000AB94u: goto label_8000AB94;
    case 0x8000AB98u: goto label_8000AB98;
    case 0x8000AB9Cu: goto label_8000AB9C;
    case 0x8000ABA0u: goto label_8000ABA0;
    case 0x8000ABA4u: goto label_8000ABA4;
    case 0x8000ABA8u: goto label_8000ABA8;
    case 0x8000ABACu: goto label_8000ABAC;
    case 0x8000ABB0u: goto label_8000ABB0;
    case 0x8000ABB4u: goto label_8000ABB4;
    case 0x8000ABB8u: goto label_8000ABB8;
    case 0x8000ABBCu: goto label_8000ABBC;
    case 0x8000ABC0u: goto label_8000ABC0;
    case 0x8000ABC4u: goto label_8000ABC4;
    case 0x8000ABC8u: goto label_8000ABC8;
    case 0x8000ABCCu: goto label_8000ABCC;
    case 0x8000ABD0u: goto label_8000ABD0;
    case 0x8000ABD4u: goto label_8000ABD4;
    case 0x8000ABD8u: goto label_8000ABD8;
    case 0x8000ABDCu: goto label_8000ABDC;
    case 0x8000ABE0u: goto label_8000ABE0;
    case 0x8000ABE4u: goto label_8000ABE4;
    case 0x8000ABE8u: goto label_8000ABE8;
    case 0x8000ABECu: goto label_8000ABEC;
    case 0x8000ABF0u: goto label_8000ABF0;
    case 0x8000ABF4u: goto label_8000ABF4;
    case 0x8000ABF8u: goto label_8000ABF8;
    case 0x8000ABFCu: goto label_8000ABFC;
    case 0x8000AC00u: goto label_8000AC00;
    case 0x8000AC04u: goto label_8000AC04;
    case 0x8000AC08u: goto label_8000AC08;
    case 0x8000AC0Cu: goto label_8000AC0C;
    case 0x8000AC10u: goto label_8000AC10;
    case 0x8000AC14u: goto label_8000AC14;
    case 0x8000AC18u: goto label_8000AC18;
    case 0x8000AC1Cu: goto label_8000AC1C;
    case 0x8000AC20u: goto label_8000AC20;
    case 0x8000AC24u: goto label_8000AC24;
    case 0x8000AC28u: goto label_8000AC28;
    case 0x8000AC2Cu: goto label_8000AC2C;
    case 0x8000AC30u: goto label_8000AC30;
    case 0x8000AC34u: goto label_8000AC34;
    case 0x8000AC38u: goto label_8000AC38;
    case 0x8000AC3Cu: goto label_8000AC3C;
    case 0x8000AC40u: goto label_8000AC40;
    case 0x8000AC44u: goto label_8000AC44;
    case 0x8000AC48u: goto label_8000AC48;
    case 0x8000AC4Cu: goto label_8000AC4C;
    case 0x8000AC50u: goto label_8000AC50;
    case 0x8000AC54u: goto label_8000AC54;
    case 0x8000AC58u: goto label_8000AC58;
    case 0x8000AC5Cu: goto label_8000AC5C;
    case 0x8000AC60u: goto label_8000AC60;
    case 0x8000AC64u: goto label_8000AC64;
    case 0x8000AC68u: goto label_8000AC68;
    case 0x8000AC6Cu: goto label_8000AC6C;
    case 0x8000AC70u: goto label_8000AC70;
    case 0x8000AC74u: goto label_8000AC74;
    case 0x8000AC78u: goto label_8000AC78;
    case 0x8000AC7Cu: goto label_8000AC7C;
    case 0x8000AC80u: goto label_8000AC80;
    case 0x8000AC84u: goto label_8000AC84;
    case 0x8000AC88u: goto label_8000AC88;
    case 0x8000AC8Cu: goto label_8000AC8C;
    case 0x8000AC90u: goto label_8000AC90;
    case 0x8000AC94u: goto label_8000AC94;
    case 0x8000AC98u: goto label_8000AC98;
    case 0x8000AC9Cu: goto label_8000AC9C;
    case 0x8000ACA0u: goto label_8000ACA0;
    case 0x8000ACA4u: goto label_8000ACA4;
    case 0x8000ACA8u: goto label_8000ACA8;
    case 0x8000ACACu: goto label_8000ACAC;
    case 0x8000ACB0u: goto label_8000ACB0;
    case 0x8000ACB4u: goto label_8000ACB4;
    case 0x8000ACB8u: goto label_8000ACB8;
    case 0x8000ACBCu: goto label_8000ACBC;
    case 0x8000ACC0u: goto label_8000ACC0;
    case 0x8000ACC4u: goto label_8000ACC4;
    case 0x8000ACC8u: goto label_8000ACC8;
    case 0x8000ACCCu: goto label_8000ACCC;
    case 0x8000ACD0u: goto label_8000ACD0;
    case 0x8000ACD4u: goto label_8000ACD4;
    case 0x8000ACD8u: goto label_8000ACD8;
    case 0x8000ACDCu: goto label_8000ACDC;
    case 0x8000ACE0u: goto label_8000ACE0;
    case 0x8000ACE4u: goto label_8000ACE4;
    case 0x8000ACE8u: goto label_8000ACE8;
    case 0x8000ACECu: goto label_8000ACEC;
    case 0x8000ACF0u: goto label_8000ACF0;
    case 0x8000ACF4u: goto label_8000ACF4;
    case 0x8000ACF8u: goto label_8000ACF8;
    case 0x8000ACFCu: goto label_8000ACFC;
    case 0x8000AD00u: goto label_8000AD00;
    case 0x8000AD04u: goto label_8000AD04;
    case 0x8000AD08u: goto label_8000AD08;
    case 0x8000AD0Cu: goto label_8000AD0C;
    case 0x8000AD10u: goto label_8000AD10;
    case 0x8000AD14u: goto label_8000AD14;
    case 0x8000AD18u: goto label_8000AD18;
    case 0x8000AD1Cu: goto label_8000AD1C;
    case 0x8000AD20u: goto label_8000AD20;
    case 0x8000AD24u: goto label_8000AD24;
    case 0x8000AD28u: goto label_8000AD28;
    case 0x8000AD2Cu: goto label_8000AD2C;
    case 0x8000AD30u: goto label_8000AD30;
    case 0x8000AD34u: goto label_8000AD34;
    case 0x8000AD38u: goto label_8000AD38;
    case 0x8000AD3Cu: goto label_8000AD3C;
    case 0x8000AD40u: goto label_8000AD40;
    case 0x8000AD44u: goto label_8000AD44;
    case 0x8000AD48u: goto label_8000AD48;
    case 0x8000AD4Cu: goto label_8000AD4C;
    case 0x8000AD50u: goto label_8000AD50;
    case 0x8000AD54u: goto label_8000AD54;
    case 0x8000AD58u: goto label_8000AD58;
    case 0x8000AD5Cu: goto label_8000AD5C;
    case 0x8000AD60u: goto label_8000AD60;
    case 0x8000AD64u: goto label_8000AD64;
    case 0x8000AD68u: goto label_8000AD68;
    case 0x8000AD6Cu: goto label_8000AD6C;
    case 0x8000AD70u: goto label_8000AD70;
    case 0x8000AD74u: goto label_8000AD74;
    case 0x8000AD78u: goto label_8000AD78;
    case 0x8000AD7Cu: goto label_8000AD7C;
    case 0x8000AD80u: goto label_8000AD80;
    case 0x8000AD84u: goto label_8000AD84;
    case 0x8000AD88u: goto label_8000AD88;
    case 0x8000AD8Cu: goto label_8000AD8C;
    case 0x8000AD90u: goto label_8000AD90;
    case 0x8000AD94u: goto label_8000AD94;
    case 0x8000AD98u: goto label_8000AD98;
    case 0x8000AD9Cu: goto label_8000AD9C;
    case 0x8000ADA0u: goto label_8000ADA0;
    case 0x8000ADA4u: goto label_8000ADA4;
    case 0x8000ADA8u: goto label_8000ADA8;
    case 0x8000ADACu: goto label_8000ADAC;
    case 0x8000ADB0u: goto label_8000ADB0;
    case 0x8000ADB4u: goto label_8000ADB4;
    case 0x8000ADB8u: goto label_8000ADB8;
    case 0x8000ADBCu: goto label_8000ADBC;
    case 0x8000ADC0u: goto label_8000ADC0;
    case 0x8000ADC4u: goto label_8000ADC4;
    case 0x8000ADC8u: goto label_8000ADC8;
    case 0x8000ADCCu: goto label_8000ADCC;
    case 0x8000ADD0u: goto label_8000ADD0;
    case 0x8000ADD4u: goto label_8000ADD4;
    case 0x8000ADD8u: goto label_8000ADD8;
    case 0x8000ADDCu: goto label_8000ADDC;
    case 0x8000ADE0u: goto label_8000ADE0;
    case 0x8000ADE4u: goto label_8000ADE4;
    case 0x8000ADE8u: goto label_8000ADE8;
    case 0x8000ADECu: goto label_8000ADEC;
    case 0x8000ADF0u: goto label_8000ADF0;
    case 0x8000ADF4u: goto label_8000ADF4;
    case 0x8000ADF8u: goto label_8000ADF8;
    case 0x8000ADFCu: goto label_8000ADFC;
    case 0x8000AE00u: goto label_8000AE00;
    case 0x8000AE04u: goto label_8000AE04;
    case 0x8000AE08u: goto label_8000AE08;
    case 0x8000AE0Cu: goto label_8000AE0C;
    case 0x8000AE10u: goto label_8000AE10;
    case 0x8000AE14u: goto label_8000AE14;
    case 0x8000AE18u: goto label_8000AE18;
    case 0x8000AE1Cu: goto label_8000AE1C;
    case 0x8000AE20u: goto label_8000AE20;
    case 0x8000AE24u: goto label_8000AE24;
    case 0x8000AE28u: goto label_8000AE28;
    case 0x8000AE2Cu: goto label_8000AE2C;
    case 0x8000AE30u: goto label_8000AE30;
    case 0x8000AE34u: goto label_8000AE34;
    case 0x8000AE38u: goto label_8000AE38;
    case 0x8000AE3Cu: goto label_8000AE3C;
    case 0x8000AE40u: goto label_8000AE40;
    case 0x8000AE44u: goto label_8000AE44;
    case 0x8000AE48u: goto label_8000AE48;
    case 0x8000AE4Cu: goto label_8000AE4C;
    case 0x8000AE50u: goto label_8000AE50;
    case 0x8000AE54u: goto label_8000AE54;
    case 0x8000AE58u: goto label_8000AE58;
    case 0x8000AE5Cu: goto label_8000AE5C;
    case 0x8000AE60u: goto label_8000AE60;
    case 0x8000AE64u: goto label_8000AE64;
    case 0x8000AE68u: goto label_8000AE68;
    case 0x8000AE6Cu: goto label_8000AE6C;
    case 0x8000AE70u: goto label_8000AE70;
    case 0x8000AE74u: goto label_8000AE74;
    case 0x8000AE78u: goto label_8000AE78;
    case 0x8000AE7Cu: goto label_8000AE7C;
    case 0x8000AE80u: goto label_8000AE80;
    case 0x8000AE84u: goto label_8000AE84;
    case 0x8000AE88u: goto label_8000AE88;
    case 0x8000AE8Cu: goto label_8000AE8C;
    case 0x8000AE90u: goto label_8000AE90;
    case 0x8000AE94u: goto label_8000AE94;
    case 0x8000AE98u: goto label_8000AE98;
    case 0x8000AE9Cu: goto label_8000AE9C;
    case 0x8000AEA0u: goto label_8000AEA0;
    case 0x8000AEA4u: goto label_8000AEA4;
    case 0x8000AEA8u: goto label_8000AEA8;
    case 0x8000AEACu: goto label_8000AEAC;
    case 0x8000AEB0u: goto label_8000AEB0;
    case 0x8000AEB4u: goto label_8000AEB4;
    case 0x8000AEB8u: goto label_8000AEB8;
    case 0x8000AEBCu: goto label_8000AEBC;
    case 0x8000AEC0u: goto label_8000AEC0;
    case 0x8000AEC4u: goto label_8000AEC4;
    case 0x8000AEC8u: goto label_8000AEC8;
    case 0x8000AECCu: goto label_8000AECC;
    case 0x8000AED0u: goto label_8000AED0;
    case 0x8000AED4u: goto label_8000AED4;
    case 0x8000AED8u: goto label_8000AED8;
    case 0x8000AEDCu: goto label_8000AEDC;
    case 0x8000AEE0u: goto label_8000AEE0;
    case 0x8000AEE4u: goto label_8000AEE4;
    case 0x8000AEE8u: goto label_8000AEE8;
    case 0x8000AEECu: goto label_8000AEEC;
    case 0x8000AEF0u: goto label_8000AEF0;
    case 0x8000AEF4u: goto label_8000AEF4;
    case 0x8000AEF8u: goto label_8000AEF8;
    case 0x8000AEFCu: goto label_8000AEFC;
    case 0x8000AF00u: goto label_8000AF00;
    case 0x8000AF04u: goto label_8000AF04;
    case 0x8000AF08u: goto label_8000AF08;
    case 0x8000AF0Cu: goto label_8000AF0C;
    case 0x8000AF10u: goto label_8000AF10;
    case 0x8000AF14u: goto label_8000AF14;
    case 0x8000AF18u: goto label_8000AF18;
    case 0x8000AF1Cu: goto label_8000AF1C;
    case 0x8000AF20u: goto label_8000AF20;
    case 0x8000AF24u: goto label_8000AF24;
    case 0x8000AF28u: goto label_8000AF28;
    case 0x8000AF2Cu: goto label_8000AF2C;
    case 0x8000AF30u: goto label_8000AF30;
    case 0x8000AF34u: goto label_8000AF34;
    case 0x8000AF38u: goto label_8000AF38;
    case 0x8000AF3Cu: goto label_8000AF3C;
    case 0x8000AF40u: goto label_8000AF40;
    case 0x8000AF44u: goto label_8000AF44;
    case 0x8000AF48u: goto label_8000AF48;
    case 0x8000AF4Cu: goto label_8000AF4C;
    case 0x8000AF50u: goto label_8000AF50;
    case 0x8000AF54u: goto label_8000AF54;
    case 0x8000AF58u: goto label_8000AF58;
    case 0x8000AF5Cu: goto label_8000AF5C;
    case 0x8000AF60u: goto label_8000AF60;
    case 0x8000AF64u: goto label_8000AF64;
    case 0x8000AF68u: goto label_8000AF68;
    case 0x8000AF6Cu: goto label_8000AF6C;
    case 0x8000AF70u: goto label_8000AF70;
    case 0x8000AF74u: goto label_8000AF74;
    case 0x8000AF78u: goto label_8000AF78;
    case 0x8000AF7Cu: goto label_8000AF7C;
    case 0x8000AF80u: goto label_8000AF80;
    case 0x8000AF84u: goto label_8000AF84;
    case 0x8000AF88u: goto label_8000AF88;
    case 0x8000AF8Cu: goto label_8000AF8C;
    case 0x8000AF90u: goto label_8000AF90;
    case 0x8000AF94u: goto label_8000AF94;
    case 0x8000AF98u: goto label_8000AF98;
    case 0x8000AF9Cu: goto label_8000AF9C;
    case 0x8000AFA0u: goto label_8000AFA0;
    case 0x8000AFA4u: goto label_8000AFA4;
    case 0x8000AFA8u: goto label_8000AFA8;
    case 0x8000AFACu: goto label_8000AFAC;
    case 0x8000AFB0u: goto label_8000AFB0;
    case 0x8000AFB4u: goto label_8000AFB4;
    case 0x8000AFB8u: goto label_8000AFB8;
    case 0x8000AFBCu: goto label_8000AFBC;
    case 0x8000AFC0u: goto label_8000AFC0;
    case 0x8000AFC4u: goto label_8000AFC4;
    case 0x8000AFC8u: goto label_8000AFC8;
    case 0x8000AFCCu: goto label_8000AFCC;
    case 0x8000AFD0u: goto label_8000AFD0;
    case 0x8000AFD4u: goto label_8000AFD4;
    case 0x8000AFD8u: goto label_8000AFD8;
    case 0x8000AFDCu: goto label_8000AFDC;
    case 0x8000AFE0u: goto label_8000AFE0;
    case 0x8000AFE4u: goto label_8000AFE4;
    case 0x8000AFE8u: goto label_8000AFE8;
    case 0x8000AFECu: goto label_8000AFEC;
    case 0x8000AFF0u: goto label_8000AFF0;
    case 0x8000AFF4u: goto label_8000AFF4;
    case 0x8000AFF8u: goto label_8000AFF8;
    case 0x8000AFFCu: goto label_8000AFFC;
    case 0x8000B000u: goto label_8000B000;
    case 0x8000B004u: goto label_8000B004;
    case 0x8000B008u: goto label_8000B008;
    case 0x8000B00Cu: goto label_8000B00C;
    case 0x8000B010u: goto label_8000B010;
    case 0x8000B014u: goto label_8000B014;
    case 0x8000B018u: goto label_8000B018;
    case 0x8000B01Cu: goto label_8000B01C;
    case 0x8000B020u: goto label_8000B020;
    case 0x8000B024u: goto label_8000B024;
    case 0x8000B028u: goto label_8000B028;
    case 0x8000B02Cu: goto label_8000B02C;
    case 0x8000B030u: goto label_8000B030;
    case 0x8000B034u: goto label_8000B034;
    case 0x8000B038u: goto label_8000B038;
    case 0x8000B03Cu: goto label_8000B03C;
    case 0x8000B040u: goto label_8000B040;
    case 0x8000B044u: goto label_8000B044;
    case 0x8000B048u: goto label_8000B048;
    case 0x8000B04Cu: goto label_8000B04C;
    case 0x8000B050u: goto label_8000B050;
    case 0x8000B054u: goto label_8000B054;
    case 0x8000B058u: goto label_8000B058;
    case 0x8000B05Cu: goto label_8000B05C;
    case 0x8000B060u: goto label_8000B060;
    case 0x8000B064u: goto label_8000B064;
    case 0x8000B068u: goto label_8000B068;
    case 0x8000B06Cu: goto label_8000B06C;
    case 0x8000B070u: goto label_8000B070;
    case 0x8000B074u: goto label_8000B074;
    case 0x8000B078u: goto label_8000B078;
    case 0x8000B07Cu: goto label_8000B07C;
    case 0x8000B080u: goto label_8000B080;
    case 0x8000B084u: goto label_8000B084;
    case 0x8000B088u: goto label_8000B088;
    case 0x8000B08Cu: goto label_8000B08C;
    case 0x8000B090u: goto label_8000B090;
    case 0x8000B094u: goto label_8000B094;
    case 0x8000B098u: goto label_8000B098;
    case 0x8000B09Cu: goto label_8000B09C;
    case 0x8000B0A0u: goto label_8000B0A0;
    case 0x8000B0A4u: goto label_8000B0A4;
    case 0x8000B0A8u: goto label_8000B0A8;
    case 0x8000B0ACu: goto label_8000B0AC;
    case 0x8000B0B0u: goto label_8000B0B0;
    case 0x8000B0B4u: goto label_8000B0B4;
    case 0x8000B0B8u: goto label_8000B0B8;
    case 0x8000B0BCu: goto label_8000B0BC;
    case 0x8000B0C0u: goto label_8000B0C0;
    case 0x8000B0C4u: goto label_8000B0C4;
    case 0x8000B0C8u: goto label_8000B0C8;
    case 0x8000B0CCu: goto label_8000B0CC;
    case 0x8000B0D0u: goto label_8000B0D0;
    case 0x8000B0D4u: goto label_8000B0D4;
    case 0x8000B0D8u: goto label_8000B0D8;
    case 0x8000B0DCu: goto label_8000B0DC;
    case 0x8000B0E0u: goto label_8000B0E0;
    case 0x8000B0E4u: goto label_8000B0E4;
    case 0x8000B0E8u: goto label_8000B0E8;
    case 0x8000B0ECu: goto label_8000B0EC;
    case 0x8000B0F0u: goto label_8000B0F0;
    case 0x8000B0F4u: goto label_8000B0F4;
    case 0x8000B0F8u: goto label_8000B0F8;
    case 0x8000B0FCu: goto label_8000B0FC;
    case 0x8000B100u: goto label_8000B100;
    case 0x8000B104u: goto label_8000B104;
    case 0x8000B108u: goto label_8000B108;
    case 0x8000B10Cu: goto label_8000B10C;
    case 0x8000B110u: goto label_8000B110;
    case 0x8000B114u: goto label_8000B114;
    case 0x8000B118u: goto label_8000B118;
    case 0x8000B11Cu: goto label_8000B11C;
    case 0x8000B120u: goto label_8000B120;
    case 0x8000B124u: goto label_8000B124;
    case 0x8000B128u: goto label_8000B128;
    case 0x8000B12Cu: goto label_8000B12C;
    case 0x8000B130u: goto label_8000B130;
    case 0x8000B134u: goto label_8000B134;
    case 0x8000B138u: goto label_8000B138;
    case 0x8000B13Cu: goto label_8000B13C;
    case 0x8000B140u: goto label_8000B140;
    case 0x8000B144u: goto label_8000B144;
    case 0x8000B148u: goto label_8000B148;
    case 0x8000B14Cu: goto label_8000B14C;
    case 0x8000B150u: goto label_8000B150;
    case 0x8000B154u: goto label_8000B154;
    case 0x8000B158u: goto label_8000B158;
    case 0x8000B15Cu: goto label_8000B15C;
    case 0x8000B160u: goto label_8000B160;
    case 0x8000B164u: goto label_8000B164;
    case 0x8000B168u: goto label_8000B168;
    case 0x8000B16Cu: goto label_8000B16C;
    case 0x8000B170u: goto label_8000B170;
    case 0x8000B174u: goto label_8000B174;
    case 0x8000B178u: goto label_8000B178;
    case 0x8000B17Cu: goto label_8000B17C;
    case 0x8000B180u: goto label_8000B180;
    case 0x8000B184u: goto label_8000B184;
    case 0x8000B188u: goto label_8000B188;
    case 0x8000B18Cu: goto label_8000B18C;
    case 0x8000B190u: goto label_8000B190;
    case 0x8000B194u: goto label_8000B194;
    case 0x8000B198u: goto label_8000B198;
    case 0x8000B19Cu: goto label_8000B19C;
    case 0x8000B1A0u: goto label_8000B1A0;
    case 0x8000B1A4u: goto label_8000B1A4;
    case 0x8000B1A8u: goto label_8000B1A8;
    case 0x8000B1ACu: goto label_8000B1AC;
    case 0x8000B1B0u: goto label_8000B1B0;
    case 0x8000B1B4u: goto label_8000B1B4;
    case 0x8000B1B8u: goto label_8000B1B8;
    case 0x8000B1BCu: goto label_8000B1BC;
    case 0x8000B1C0u: goto label_8000B1C0;
    case 0x8000B1C4u: goto label_8000B1C4;
    case 0x8000B1C8u: goto label_8000B1C8;
    case 0x8000B1CCu: goto label_8000B1CC;
    case 0x8000B1D0u: goto label_8000B1D0;
    case 0x8000B1D4u: goto label_8000B1D4;
    case 0x8000B1D8u: goto label_8000B1D8;
    case 0x8000B1DCu: goto label_8000B1DC;
    case 0x8000B1E0u: goto label_8000B1E0;
    case 0x8000B1E4u: goto label_8000B1E4;
    case 0x8000B1E8u: goto label_8000B1E8;
    case 0x8000B1ECu: goto label_8000B1EC;
    case 0x8000B1F0u: goto label_8000B1F0;
    case 0x8000B1F4u: goto label_8000B1F4;
    case 0x8000B1F8u: goto label_8000B1F8;
    case 0x8000B1FCu: goto label_8000B1FC;
    case 0x8000B200u: goto label_8000B200;
    case 0x8000B204u: goto label_8000B204;
    case 0x8000B208u: goto label_8000B208;
    case 0x8000B20Cu: goto label_8000B20C;
    case 0x8000B210u: goto label_8000B210;
    case 0x8000B214u: goto label_8000B214;
    case 0x8000B218u: goto label_8000B218;
    case 0x8000B21Cu: goto label_8000B21C;
    case 0x8000B220u: goto label_8000B220;
    case 0x8000B224u: goto label_8000B224;
    case 0x8000B228u: goto label_8000B228;
    case 0x8000B22Cu: goto label_8000B22C;
    case 0x8000B230u: goto label_8000B230;
    case 0x8000B234u: goto label_8000B234;
    case 0x8000B238u: goto label_8000B238;
    case 0x8000B23Cu: goto label_8000B23C;
    case 0x8000B240u: goto label_8000B240;
    case 0x8000B244u: goto label_8000B244;
    case 0x8000B248u: goto label_8000B248;
    case 0x8000B24Cu: goto label_8000B24C;
    case 0x8000B250u: goto label_8000B250;
    case 0x8000B254u: goto label_8000B254;
    case 0x8000B258u: goto label_8000B258;
    case 0x8000B25Cu: goto label_8000B25C;
    case 0x8000B260u: goto label_8000B260;
    case 0x8000B264u: goto label_8000B264;
    case 0x8000B268u: goto label_8000B268;
    case 0x8000B26Cu: goto label_8000B26C;
    case 0x8000B270u: goto label_8000B270;
    case 0x8000B274u: goto label_8000B274;
    case 0x8000B278u: goto label_8000B278;
    case 0x8000B27Cu: goto label_8000B27C;
    case 0x8000B280u: goto label_8000B280;
    case 0x8000B284u: goto label_8000B284;
    case 0x8000B288u: goto label_8000B288;
    case 0x8000B28Cu: goto label_8000B28C;
    case 0x8000B290u: goto label_8000B290;
    case 0x8000B294u: goto label_8000B294;
    case 0x8000B298u: goto label_8000B298;
    case 0x8000B29Cu: goto label_8000B29C;
    case 0x8000B2A0u: goto label_8000B2A0;
    case 0x8000B2A4u: goto label_8000B2A4;
    case 0x8000B2A8u: goto label_8000B2A8;
    case 0x8000B2ACu: goto label_8000B2AC;
    case 0x8000B2B0u: goto label_8000B2B0;
    case 0x8000B2B4u: goto label_8000B2B4;
    case 0x8000B2B8u: goto label_8000B2B8;
    case 0x8000B2BCu: goto label_8000B2BC;
    case 0x8000B2C0u: goto label_8000B2C0;
    case 0x8000B2C4u: goto label_8000B2C4;
    case 0x8000B2C8u: goto label_8000B2C8;
    case 0x8000B2CCu: goto label_8000B2CC;
    case 0x8000B2D0u: goto label_8000B2D0;
    case 0x8000B2D4u: goto label_8000B2D4;
    case 0x8000B2D8u: goto label_8000B2D8;
    case 0x8000B2DCu: goto label_8000B2DC;
    case 0x8000B2E0u: goto label_8000B2E0;
    case 0x8000B2E4u: goto label_8000B2E4;
    case 0x8000B2E8u: goto label_8000B2E8;
    case 0x8000B2ECu: goto label_8000B2EC;
    case 0x8000B2F0u: goto label_8000B2F0;
    case 0x8000B2F4u: goto label_8000B2F4;
    case 0x8000B2F8u: goto label_8000B2F8;
    case 0x8000B2FCu: goto label_8000B2FC;
    case 0x8000B300u: goto label_8000B300;
    case 0x8000B304u: goto label_8000B304;
    case 0x8000B308u: goto label_8000B308;
    case 0x8000B30Cu: goto label_8000B30C;
    case 0x8000B310u: goto label_8000B310;
    case 0x8000B314u: goto label_8000B314;
    case 0x8000B318u: goto label_8000B318;
    case 0x8000B31Cu: goto label_8000B31C;
    case 0x8000B320u: goto label_8000B320;
    case 0x8000B324u: goto label_8000B324;
    case 0x8000B328u: goto label_8000B328;
    case 0x8000B32Cu: goto label_8000B32C;
    case 0x8000B330u: goto label_8000B330;
    case 0x8000B334u: goto label_8000B334;
    case 0x8000B338u: goto label_8000B338;
    case 0x8000B33Cu: goto label_8000B33C;
    case 0x8000B340u: goto label_8000B340;
    case 0x8000B344u: goto label_8000B344;
    case 0x8000B348u: goto label_8000B348;
    case 0x8000B34Cu: goto label_8000B34C;
    case 0x8000B350u: goto label_8000B350;
    case 0x8000B354u: goto label_8000B354;
    case 0x8000B358u: goto label_8000B358;
    case 0x8000B35Cu: goto label_8000B35C;
    case 0x8000B360u: goto label_8000B360;
    case 0x8000B364u: goto label_8000B364;
    case 0x8000B368u: goto label_8000B368;
    case 0x8000B36Cu: goto label_8000B36C;
    case 0x8000B370u: goto label_8000B370;
    case 0x8000B374u: goto label_8000B374;
    case 0x8000B378u: goto label_8000B378;
    case 0x8000B37Cu: goto label_8000B37C;
    case 0x8000B380u: goto label_8000B380;
    case 0x8000B384u: goto label_8000B384;
    case 0x8000B388u: goto label_8000B388;
    case 0x8000B38Cu: goto label_8000B38C;
    case 0x8000B390u: goto label_8000B390;
    case 0x8000B394u: goto label_8000B394;
    case 0x8000B398u: goto label_8000B398;
    case 0x8000B39Cu: goto label_8000B39C;
    case 0x8000B3A0u: goto label_8000B3A0;
    case 0x8000B3A4u: goto label_8000B3A4;
    case 0x8000B3A8u: goto label_8000B3A8;
    case 0x8000B3ACu: goto label_8000B3AC;
    case 0x8000B3B0u: goto label_8000B3B0;
    case 0x8000B3B4u: goto label_8000B3B4;
    case 0x8000B3B8u: goto label_8000B3B8;
    case 0x8000B3BCu: goto label_8000B3BC;
    case 0x8000B3C0u: goto label_8000B3C0;
    case 0x8000B3C4u: goto label_8000B3C4;
    case 0x8000B3C8u: goto label_8000B3C8;
    case 0x8000B3CCu: goto label_8000B3CC;
    case 0x8000B3D0u: goto label_8000B3D0;
    case 0x8000B3D4u: goto label_8000B3D4;
    case 0x8000B3D8u: goto label_8000B3D8;
    case 0x8000B3DCu: goto label_8000B3DC;
    case 0x8000B3E0u: goto label_8000B3E0;
    case 0x8000B3E4u: goto label_8000B3E4;
    case 0x8000B3E8u: goto label_8000B3E8;
    case 0x8000B3ECu: goto label_8000B3EC;
    case 0x8000B3F0u: goto label_8000B3F0;
    case 0x8000B3F4u: goto label_8000B3F4;
    case 0x8000B3F8u: goto label_8000B3F8;
    case 0x8000B3FCu: goto label_8000B3FC;
    case 0x8000B400u: goto label_8000B400;
    case 0x8000B404u: goto label_8000B404;
    case 0x8000B408u: goto label_8000B408;
    case 0x8000B40Cu: goto label_8000B40C;
    case 0x8000B410u: goto label_8000B410;
    case 0x8000B414u: goto label_8000B414;
    case 0x8000B418u: goto label_8000B418;
    case 0x8000B41Cu: goto label_8000B41C;
    case 0x8000B420u: goto label_8000B420;
    case 0x8000B424u: goto label_8000B424;
    case 0x8000B428u: goto label_8000B428;
    case 0x8000B42Cu: goto label_8000B42C;
    case 0x8000B430u: goto label_8000B430;
    case 0x8000B434u: goto label_8000B434;
    case 0x8000B438u: goto label_8000B438;
    case 0x8000B43Cu: goto label_8000B43C;
    case 0x8000B440u: goto label_8000B440;
    case 0x8000B444u: goto label_8000B444;
    case 0x8000B448u: goto label_8000B448;
    case 0x8000B44Cu: goto label_8000B44C;
    case 0x8000B450u: goto label_8000B450;
    case 0x8000B454u: goto label_8000B454;
    case 0x8000B458u: goto label_8000B458;
    case 0x8000B45Cu: goto label_8000B45C;
    case 0x8000B460u: goto label_8000B460;
    case 0x8000B464u: goto label_8000B464;
    case 0x8000B468u: goto label_8000B468;
    case 0x8000B46Cu: goto label_8000B46C;
    case 0x8000B470u: goto label_8000B470;
    case 0x8000B474u: goto label_8000B474;
    case 0x8000B478u: goto label_8000B478;
    case 0x8000B47Cu: goto label_8000B47C;
    case 0x8000B480u: goto label_8000B480;
    case 0x8000B484u: goto label_8000B484;
    case 0x8000B488u: goto label_8000B488;
    case 0x8000B48Cu: goto label_8000B48C;
    case 0x8000B490u: goto label_8000B490;
    case 0x8000B494u: goto label_8000B494;
    case 0x8000B498u: goto label_8000B498;
    case 0x8000B49Cu: goto label_8000B49C;
    case 0x8000B4A0u: goto label_8000B4A0;
    case 0x8000B4A4u: goto label_8000B4A4;
    case 0x8000B4A8u: goto label_8000B4A8;
    case 0x8000B4ACu: goto label_8000B4AC;
    case 0x8000B4B0u: goto label_8000B4B0;
    case 0x8000B4B4u: goto label_8000B4B4;
    case 0x8000B4B8u: goto label_8000B4B8;
    case 0x8000B4BCu: goto label_8000B4BC;
    case 0x8000B4C0u: goto label_8000B4C0;
    case 0x8000B4C4u: goto label_8000B4C4;
    case 0x8000B4C8u: goto label_8000B4C8;
    case 0x8000B4CCu: goto label_8000B4CC;
    case 0x8000B4D0u: goto label_8000B4D0;
    case 0x8000B4D4u: goto label_8000B4D4;
    case 0x8000B4D8u: goto label_8000B4D8;
    case 0x8000B4DCu: goto label_8000B4DC;
    case 0x8000B4E0u: goto label_8000B4E0;
    case 0x8000B4E4u: goto label_8000B4E4;
    case 0x8000B4E8u: goto label_8000B4E8;
    case 0x8000B4ECu: goto label_8000B4EC;
    case 0x8000B4F0u: goto label_8000B4F0;
    case 0x8000B4F4u: goto label_8000B4F4;
    case 0x8000B4F8u: goto label_8000B4F8;
    case 0x8000B4FCu: goto label_8000B4FC;
    case 0x8000B500u: goto label_8000B500;
    case 0x8000B504u: goto label_8000B504;
    case 0x8000B508u: goto label_8000B508;
    case 0x8000B50Cu: goto label_8000B50C;
    case 0x8000B510u: goto label_8000B510;
    case 0x8000B514u: goto label_8000B514;
    case 0x8000B518u: goto label_8000B518;
    case 0x8000B51Cu: goto label_8000B51C;
    case 0x8000B520u: goto label_8000B520;
    case 0x8000B524u: goto label_8000B524;
    case 0x8000B528u: goto label_8000B528;
    case 0x8000B52Cu: goto label_8000B52C;
    case 0x8000B530u: goto label_8000B530;
    case 0x8000B534u: goto label_8000B534;
    case 0x8000B538u: goto label_8000B538;
    case 0x8000B53Cu: goto label_8000B53C;
    case 0x8000B540u: goto label_8000B540;
    case 0x8000B544u: goto label_8000B544;
    case 0x8000B548u: goto label_8000B548;
    case 0x8000B54Cu: goto label_8000B54C;
    case 0x8000B550u: goto label_8000B550;
    case 0x8000B554u: goto label_8000B554;
    case 0x8000B558u: goto label_8000B558;
    case 0x8000B55Cu: goto label_8000B55C;
    case 0x8000B560u: goto label_8000B560;
    case 0x8000B564u: goto label_8000B564;
    case 0x8000B568u: goto label_8000B568;
    case 0x8000B56Cu: goto label_8000B56C;
    case 0x8000B570u: goto label_8000B570;
    case 0x8000B574u: goto label_8000B574;
    case 0x8000B578u: goto label_8000B578;
    case 0x8000B57Cu: goto label_8000B57C;
    case 0x8000B580u: goto label_8000B580;
    case 0x8000B584u: goto label_8000B584;
    case 0x8000B588u: goto label_8000B588;
    case 0x8000B58Cu: goto label_8000B58C;
    case 0x8000B590u: goto label_8000B590;
    case 0x8000B594u: goto label_8000B594;
    case 0x8000B598u: goto label_8000B598;
    case 0x8000B59Cu: goto label_8000B59C;
    case 0x8000B5A0u: goto label_8000B5A0;
    case 0x8000B5A4u: goto label_8000B5A4;
    case 0x8000B5A8u: goto label_8000B5A8;
    case 0x8000B5ACu: goto label_8000B5AC;
    case 0x8000B5B0u: goto label_8000B5B0;
    case 0x8000B5B4u: goto label_8000B5B4;
    case 0x8000B5B8u: goto label_8000B5B8;
    case 0x8000B5BCu: goto label_8000B5BC;
    case 0x8000B5C0u: goto label_8000B5C0;
    case 0x8000B5C4u: goto label_8000B5C4;
    case 0x8000B5C8u: goto label_8000B5C8;
    case 0x8000B5CCu: goto label_8000B5CC;
    case 0x8000B5D0u: goto label_8000B5D0;
    case 0x8000B5D4u: goto label_8000B5D4;
    case 0x8000B5D8u: goto label_8000B5D8;
    case 0x8000B5DCu: goto label_8000B5DC;
    case 0x8000B5E0u: goto label_8000B5E0;
    case 0x8000B5E4u: goto label_8000B5E4;
    case 0x8000B5E8u: goto label_8000B5E8;
    case 0x8000B5ECu: goto label_8000B5EC;
    case 0x8000B5F0u: goto label_8000B5F0;
    case 0x8000B5F4u: goto label_8000B5F4;
    case 0x8000B5F8u: goto label_8000B5F8;
    case 0x8000B5FCu: goto label_8000B5FC;
    case 0x8000B600u: goto label_8000B600;
    case 0x8000B604u: goto label_8000B604;
    case 0x8000B608u: goto label_8000B608;
    case 0x8000B60Cu: goto label_8000B60C;
    case 0x8000B610u: goto label_8000B610;
    case 0x8000B614u: goto label_8000B614;
    case 0x8000B618u: goto label_8000B618;
    case 0x8000B61Cu: goto label_8000B61C;
    case 0x8000B620u: goto label_8000B620;
    case 0x8000B624u: goto label_8000B624;
    case 0x8000B628u: goto label_8000B628;
    case 0x8000B62Cu: goto label_8000B62C;
    case 0x8000B630u: goto label_8000B630;
    case 0x8000B634u: goto label_8000B634;
    case 0x8000B638u: goto label_8000B638;
    case 0x8000B63Cu: goto label_8000B63C;
    case 0x8000B640u: goto label_8000B640;
    case 0x8000B644u: goto label_8000B644;
    case 0x8000B648u: goto label_8000B648;
    case 0x8000B64Cu: goto label_8000B64C;
    case 0x8000B650u: goto label_8000B650;
    case 0x8000B654u: goto label_8000B654;
    case 0x8000B658u: goto label_8000B658;
    case 0x8000B65Cu: goto label_8000B65C;
    case 0x8000B660u: goto label_8000B660;
    case 0x8000B664u: goto label_8000B664;
    case 0x8000B668u: goto label_8000B668;
    case 0x8000B66Cu: goto label_8000B66C;
    case 0x8000B670u: goto label_8000B670;
    case 0x8000B674u: goto label_8000B674;
    case 0x8000B678u: goto label_8000B678;
    case 0x8000B67Cu: goto label_8000B67C;
    case 0x8000B680u: goto label_8000B680;
    case 0x8000B684u: goto label_8000B684;
    case 0x8000B688u: goto label_8000B688;
    case 0x8000B68Cu: goto label_8000B68C;
    case 0x8000B690u: goto label_8000B690;
    case 0x8000B694u: goto label_8000B694;
    case 0x8000B698u: goto label_8000B698;
    case 0x8000B69Cu: goto label_8000B69C;
    case 0x8000B6A0u: goto label_8000B6A0;
    case 0x8000B6A4u: goto label_8000B6A4;
    case 0x8000B6A8u: goto label_8000B6A8;
    case 0x8000B6ACu: goto label_8000B6AC;
    case 0x8000B6B0u: goto label_8000B6B0;
    case 0x8000B6B4u: goto label_8000B6B4;
    case 0x8000B6B8u: goto label_8000B6B8;
    case 0x8000B6BCu: goto label_8000B6BC;
    case 0x8000B6C0u: goto label_8000B6C0;
    case 0x8000B6C4u: goto label_8000B6C4;
    case 0x8000B6C8u: goto label_8000B6C8;
    case 0x8000B6CCu: goto label_8000B6CC;
    case 0x8000B6D0u: goto label_8000B6D0;
    case 0x8000B6D4u: goto label_8000B6D4;
    case 0x8000B6D8u: goto label_8000B6D8;
    case 0x8000B6DCu: goto label_8000B6DC;
    case 0x8000B6E0u: goto label_8000B6E0;
    case 0x8000B6E4u: goto label_8000B6E4;
    case 0x8000B6E8u: goto label_8000B6E8;
    case 0x8000B6ECu: goto label_8000B6EC;
    case 0x8000B6F0u: goto label_8000B6F0;
    case 0x8000B6F4u: goto label_8000B6F4;
    case 0x8000B6F8u: goto label_8000B6F8;
    case 0x8000B6FCu: goto label_8000B6FC;
    case 0x8000B700u: goto label_8000B700;
    case 0x8000B704u: goto label_8000B704;
    case 0x8000B708u: goto label_8000B708;
    case 0x8000B70Cu: goto label_8000B70C;
    case 0x8000B710u: goto label_8000B710;
    case 0x8000B714u: goto label_8000B714;
    case 0x8000B718u: goto label_8000B718;
    case 0x8000B71Cu: goto label_8000B71C;
    case 0x8000B720u: goto label_8000B720;
    case 0x8000B724u: goto label_8000B724;
    case 0x8000B728u: goto label_8000B728;
    case 0x8000B72Cu: goto label_8000B72C;
    case 0x8000B730u: goto label_8000B730;
    case 0x8000B734u: goto label_8000B734;
    case 0x8000B738u: goto label_8000B738;
    case 0x8000B73Cu: goto label_8000B73C;
    case 0x8000B740u: goto label_8000B740;
    case 0x8000B744u: goto label_8000B744;
    case 0x8000B748u: goto label_8000B748;
    case 0x8000B74Cu: goto label_8000B74C;
    case 0x8000B750u: goto label_8000B750;
    case 0x8000B754u: goto label_8000B754;
    case 0x8000B758u: goto label_8000B758;
    case 0x8000B75Cu: goto label_8000B75C;
    case 0x8000B760u: goto label_8000B760;
    case 0x8000B764u: goto label_8000B764;
    case 0x8000B768u: goto label_8000B768;
    case 0x8000B76Cu: goto label_8000B76C;
    case 0x8000B770u: goto label_8000B770;
    case 0x8000B774u: goto label_8000B774;
    case 0x8000B778u: goto label_8000B778;
    case 0x8000B77Cu: goto label_8000B77C;
    case 0x8000B780u: goto label_8000B780;
    case 0x8000B784u: goto label_8000B784;
    case 0x8000B788u: goto label_8000B788;
    case 0x8000B78Cu: goto label_8000B78C;
    case 0x8000B790u: goto label_8000B790;
    case 0x8000B794u: goto label_8000B794;
    case 0x8000B798u: goto label_8000B798;
    case 0x8000B79Cu: goto label_8000B79C;
    case 0x8000B7A0u: goto label_8000B7A0;
    case 0x8000B7A4u: goto label_8000B7A4;
    case 0x8000B7A8u: goto label_8000B7A8;
    case 0x8000B7ACu: goto label_8000B7AC;
    case 0x8000B7B0u: goto label_8000B7B0;
    case 0x8000B7B4u: goto label_8000B7B4;
    case 0x8000B7B8u: goto label_8000B7B8;
    case 0x8000B7BCu: goto label_8000B7BC;
    case 0x8000B7C0u: goto label_8000B7C0;
    case 0x8000B7C4u: goto label_8000B7C4;
    case 0x8000B7C8u: goto label_8000B7C8;
    case 0x8000B7CCu: goto label_8000B7CC;
    case 0x8000B7D0u: goto label_8000B7D0;
    case 0x8000B7D4u: goto label_8000B7D4;
    case 0x8000B7D8u: goto label_8000B7D8;
    case 0x8000B7DCu: goto label_8000B7DC;
    case 0x8000B7E0u: goto label_8000B7E0;
    case 0x8000B7E4u: goto label_8000B7E4;
    case 0x8000B7E8u: goto label_8000B7E8;
    case 0x8000B7ECu: goto label_8000B7EC;
    case 0x8000B7F0u: goto label_8000B7F0;
    case 0x8000B7F4u: goto label_8000B7F4;
    case 0x8000B7F8u: goto label_8000B7F8;
    case 0x8000B7FCu: goto label_8000B7FC;
    case 0x8000B800u: goto label_8000B800;
    case 0x8000B804u: goto label_8000B804;
    case 0x8000B808u: goto label_8000B808;
    case 0x8000B80Cu: goto label_8000B80C;
    case 0x8000B810u: goto label_8000B810;
    case 0x8000B814u: goto label_8000B814;
    case 0x8000B818u: goto label_8000B818;
    case 0x8000B81Cu: goto label_8000B81C;
    case 0x8000B820u: goto label_8000B820;
    case 0x8000B824u: goto label_8000B824;
    case 0x8000B828u: goto label_8000B828;
    case 0x8000B82Cu: goto label_8000B82C;
    case 0x8000B830u: goto label_8000B830;
    case 0x8000B834u: goto label_8000B834;
    case 0x8000B838u: goto label_8000B838;
    case 0x8000B83Cu: goto label_8000B83C;
    case 0x8000B840u: goto label_8000B840;
    case 0x8000B844u: goto label_8000B844;
    case 0x8000B848u: goto label_8000B848;
    case 0x8000B84Cu: goto label_8000B84C;
    case 0x8000B850u: goto label_8000B850;
    case 0x8000B854u: goto label_8000B854;
    case 0x8000B858u: goto label_8000B858;
    case 0x8000B85Cu: goto label_8000B85C;
    case 0x8000B860u: goto label_8000B860;
    case 0x8000B864u: goto label_8000B864;
    case 0x8000B868u: goto label_8000B868;
    case 0x8000B86Cu: goto label_8000B86C;
    case 0x8000B870u: goto label_8000B870;
    case 0x8000B874u: goto label_8000B874;
    case 0x8000B878u: goto label_8000B878;
    case 0x8000B87Cu: goto label_8000B87C;
    case 0x8000B880u: goto label_8000B880;
    case 0x8000B884u: goto label_8000B884;
    case 0x8000B888u: goto label_8000B888;
    case 0x8000B88Cu: goto label_8000B88C;
    case 0x8000B890u: goto label_8000B890;
    case 0x8000B894u: goto label_8000B894;
    case 0x8000B898u: goto label_8000B898;
    case 0x8000B89Cu: goto label_8000B89C;
    case 0x8000B8A0u: goto label_8000B8A0;
    case 0x8000B8A4u: goto label_8000B8A4;
    case 0x8000B8A8u: goto label_8000B8A8;
    case 0x8000B8ACu: goto label_8000B8AC;
    case 0x8000B8B0u: goto label_8000B8B0;
    case 0x8000B8B4u: goto label_8000B8B4;
    case 0x8000B8B8u: goto label_8000B8B8;
    case 0x8000B8BCu: goto label_8000B8BC;
    case 0x8000B8C0u: goto label_8000B8C0;
    case 0x8000B8C4u: goto label_8000B8C4;
    case 0x8000B8C8u: goto label_8000B8C8;
    case 0x8000B8CCu: goto label_8000B8CC;
    case 0x8000B8D0u: goto label_8000B8D0;
    case 0x8000B8D4u: goto label_8000B8D4;
    case 0x8000B8D8u: goto label_8000B8D8;
    case 0x8000B8DCu: goto label_8000B8DC;
    case 0x8000B8E0u: goto label_8000B8E0;
    case 0x8000B8E4u: goto label_8000B8E4;
    case 0x8000B8E8u: goto label_8000B8E8;
    case 0x8000B8ECu: goto label_8000B8EC;
    case 0x8000B8F0u: goto label_8000B8F0;
    case 0x8000B8F4u: goto label_8000B8F4;
    case 0x8000B8F8u: goto label_8000B8F8;
    case 0x8000B8FCu: goto label_8000B8FC;
    case 0x8000B900u: goto label_8000B900;
    case 0x8000B904u: goto label_8000B904;
    case 0x8000B908u: goto label_8000B908;
    case 0x8000B90Cu: goto label_8000B90C;
    case 0x8000B910u: goto label_8000B910;
    case 0x8000B914u: goto label_8000B914;
    case 0x8000B918u: goto label_8000B918;
    case 0x8000B91Cu: goto label_8000B91C;
    case 0x8000B920u: goto label_8000B920;
    case 0x8000B924u: goto label_8000B924;
    case 0x8000B928u: goto label_8000B928;
    case 0x8000B92Cu: goto label_8000B92C;
    case 0x8000B930u: goto label_8000B930;
    case 0x8000B934u: goto label_8000B934;
    case 0x8000B938u: goto label_8000B938;
    case 0x8000B93Cu: goto label_8000B93C;
    case 0x8000B940u: goto label_8000B940;
    case 0x8000B944u: goto label_8000B944;
    case 0x8000B948u: goto label_8000B948;
    case 0x8000B94Cu: goto label_8000B94C;
    case 0x8000B950u: goto label_8000B950;
    case 0x8000B954u: goto label_8000B954;
    case 0x8000B958u: goto label_8000B958;
    case 0x8000B95Cu: goto label_8000B95C;
    case 0x8000B960u: goto label_8000B960;
    case 0x8000B964u: goto label_8000B964;
    case 0x8000B968u: goto label_8000B968;
    case 0x8000B96Cu: goto label_8000B96C;
    case 0x8000B970u: goto label_8000B970;
    case 0x8000B974u: goto label_8000B974;
    case 0x8000B978u: goto label_8000B978;
    case 0x8000B97Cu: goto label_8000B97C;
    case 0x8000B980u: goto label_8000B980;
    case 0x8000B984u: goto label_8000B984;
    case 0x8000B988u: goto label_8000B988;
    case 0x8000B98Cu: goto label_8000B98C;
    case 0x8000B990u: goto label_8000B990;
    case 0x8000B994u: goto label_8000B994;
    case 0x8000B998u: goto label_8000B998;
    case 0x8000B99Cu: goto label_8000B99C;
    case 0x8000B9A0u: goto label_8000B9A0;
    case 0x8000B9A4u: goto label_8000B9A4;
    case 0x8000B9A8u: goto label_8000B9A8;
    case 0x8000B9ACu: goto label_8000B9AC;
    case 0x8000B9B0u: goto label_8000B9B0;
    case 0x8000B9B4u: goto label_8000B9B4;
    case 0x8000B9B8u: goto label_8000B9B8;
    case 0x8000B9BCu: goto label_8000B9BC;
    case 0x8000B9C0u: goto label_8000B9C0;
    case 0x8000B9C4u: goto label_8000B9C4;
    case 0x8000B9C8u: goto label_8000B9C8;
    case 0x8000B9CCu: goto label_8000B9CC;
    case 0x8000B9D0u: goto label_8000B9D0;
    case 0x8000B9D4u: goto label_8000B9D4;
    case 0x8000B9D8u: goto label_8000B9D8;
    case 0x8000B9DCu: goto label_8000B9DC;
    case 0x8000B9E0u: goto label_8000B9E0;
    case 0x8000B9E4u: goto label_8000B9E4;
    case 0x8000B9E8u: goto label_8000B9E8;
    case 0x8000B9ECu: goto label_8000B9EC;
    case 0x8000B9F0u: goto label_8000B9F0;
    case 0x8000B9F4u: goto label_8000B9F4;
    case 0x8000B9F8u: goto label_8000B9F8;
    case 0x8000B9FCu: goto label_8000B9FC;
    case 0x8000BA00u: goto label_8000BA00;
    case 0x8000BA04u: goto label_8000BA04;
    case 0x8000BA08u: goto label_8000BA08;
    case 0x8000BA0Cu: goto label_8000BA0C;
    case 0x8000BA10u: goto label_8000BA10;
    case 0x8000BA14u: goto label_8000BA14;
    case 0x8000BA18u: goto label_8000BA18;
    case 0x8000BA1Cu: goto label_8000BA1C;
    case 0x8000BA20u: goto label_8000BA20;
    case 0x8000BA24u: goto label_8000BA24;
    case 0x8000BA28u: goto label_8000BA28;
    case 0x8000BA2Cu: goto label_8000BA2C;
    case 0x8000BA30u: goto label_8000BA30;
    case 0x8000BA34u: goto label_8000BA34;
    case 0x8000BA38u: goto label_8000BA38;
    case 0x8000BA3Cu: goto label_8000BA3C;
    case 0x8000BA40u: goto label_8000BA40;
    case 0x8000BA44u: goto label_8000BA44;
    case 0x8000BA48u: goto label_8000BA48;
    case 0x8000BA4Cu: goto label_8000BA4C;
    case 0x8000BA50u: goto label_8000BA50;
    case 0x8000BA54u: goto label_8000BA54;
    case 0x8000BA58u: goto label_8000BA58;
    case 0x8000BA5Cu: goto label_8000BA5C;
    case 0x8000BA60u: goto label_8000BA60;
    case 0x8000BA64u: goto label_8000BA64;
    case 0x8000BA68u: goto label_8000BA68;
    case 0x8000BA6Cu: goto label_8000BA6C;
    case 0x8000BA70u: goto label_8000BA70;
    case 0x8000BA74u: goto label_8000BA74;
    case 0x8000BA78u: goto label_8000BA78;
    case 0x8000BA7Cu: goto label_8000BA7C;
    case 0x8000BA80u: goto label_8000BA80;
    case 0x8000BA84u: goto label_8000BA84;
    case 0x8000BA88u: goto label_8000BA88;
    case 0x8000BA8Cu: goto label_8000BA8C;
    case 0x8000BA90u: goto label_8000BA90;
    case 0x8000BA94u: goto label_8000BA94;
    case 0x8000BA98u: goto label_8000BA98;
    case 0x8000BA9Cu: goto label_8000BA9C;
    case 0x8000BAA0u: goto label_8000BAA0;
    case 0x8000BAA4u: goto label_8000BAA4;
    case 0x8000BAA8u: goto label_8000BAA8;
    case 0x8000BAACu: goto label_8000BAAC;
    case 0x8000BAB0u: goto label_8000BAB0;
    case 0x8000BAB4u: goto label_8000BAB4;
    case 0x8000BAB8u: goto label_8000BAB8;
    case 0x8000BABCu: goto label_8000BABC;
    case 0x8000BAC0u: goto label_8000BAC0;
    case 0x8000BAC4u: goto label_8000BAC4;
    case 0x8000BAC8u: goto label_8000BAC8;
    case 0x8000BACCu: goto label_8000BACC;
    case 0x8000BAD0u: goto label_8000BAD0;
    case 0x8000BAD4u: goto label_8000BAD4;
    case 0x8000BAD8u: goto label_8000BAD8;
    case 0x8000BADCu: goto label_8000BADC;
    case 0x8000BAE0u: goto label_8000BAE0;
    case 0x8000BAE4u: goto label_8000BAE4;
    case 0x8000BAE8u: goto label_8000BAE8;
    case 0x8000BAECu: goto label_8000BAEC;
    case 0x8000BAF0u: goto label_8000BAF0;
    case 0x8000BAF4u: goto label_8000BAF4;
    case 0x8000BAF8u: goto label_8000BAF8;
    case 0x8000BAFCu: goto label_8000BAFC;
    case 0x8000BB00u: goto label_8000BB00;
    case 0x8000BB04u: goto label_8000BB04;
    case 0x8000BB08u: goto label_8000BB08;
    case 0x8000BB0Cu: goto label_8000BB0C;
    case 0x8000BB10u: goto label_8000BB10;
    case 0x8000BB14u: goto label_8000BB14;
    case 0x8000BB18u: goto label_8000BB18;
    case 0x8000BB1Cu: goto label_8000BB1C;
    case 0x8000BB20u: goto label_8000BB20;
    case 0x8000BB24u: goto label_8000BB24;
    case 0x8000BB28u: goto label_8000BB28;
    case 0x8000BB2Cu: goto label_8000BB2C;
    case 0x8000BB30u: goto label_8000BB30;
    case 0x8000BB34u: goto label_8000BB34;
    case 0x8000BB38u: goto label_8000BB38;
    case 0x8000BB3Cu: goto label_8000BB3C;
    case 0x8000BB40u: goto label_8000BB40;
    case 0x8000BB44u: goto label_8000BB44;
    case 0x8000BB48u: goto label_8000BB48;
    case 0x8000BB4Cu: goto label_8000BB4C;
    case 0x8000BB50u: goto label_8000BB50;
    case 0x8000BB54u: goto label_8000BB54;
    case 0x8000BB58u: goto label_8000BB58;
    case 0x8000BB5Cu: goto label_8000BB5C;
    case 0x8000BB60u: goto label_8000BB60;
    case 0x8000BB64u: goto label_8000BB64;
    case 0x8000BB68u: goto label_8000BB68;
    case 0x8000BB6Cu: goto label_8000BB6C;
    case 0x8000BB70u: goto label_8000BB70;
    case 0x8000BB74u: goto label_8000BB74;
    case 0x8000BB78u: goto label_8000BB78;
    case 0x8000BB7Cu: goto label_8000BB7C;
    case 0x8000BB80u: goto label_8000BB80;
    case 0x8000BB84u: goto label_8000BB84;
    case 0x8000BB88u: goto label_8000BB88;
    case 0x8000BB8Cu: goto label_8000BB8C;
    case 0x8000BB90u: goto label_8000BB90;
    case 0x8000BB94u: goto label_8000BB94;
    case 0x8000BB98u: goto label_8000BB98;
    case 0x8000BB9Cu: goto label_8000BB9C;
    case 0x8000BBA0u: goto label_8000BBA0;
    case 0x8000BBA4u: goto label_8000BBA4;
    case 0x8000BBA8u: goto label_8000BBA8;
    case 0x8000BBACu: goto label_8000BBAC;
    case 0x8000BBB0u: goto label_8000BBB0;
    case 0x8000BBB4u: goto label_8000BBB4;
    case 0x8000BBB8u: goto label_8000BBB8;
    case 0x8000BBBCu: goto label_8000BBBC;
    case 0x8000BBC0u: goto label_8000BBC0;
    case 0x8000BBC4u: goto label_8000BBC4;
    case 0x8000BBC8u: goto label_8000BBC8;
    case 0x8000BBCCu: goto label_8000BBCC;
    case 0x8000BBD0u: goto label_8000BBD0;
    case 0x8000BBD4u: goto label_8000BBD4;
    case 0x8000BBD8u: goto label_8000BBD8;
    case 0x8000BBDCu: goto label_8000BBDC;
    case 0x8000BBE0u: goto label_8000BBE0;
    case 0x8000BBE4u: goto label_8000BBE4;
    case 0x8000BBE8u: goto label_8000BBE8;
    case 0x8000BBECu: goto label_8000BBEC;
    case 0x8000BBF0u: goto label_8000BBF0;
    case 0x8000BBF4u: goto label_8000BBF4;
    case 0x8000BBF8u: goto label_8000BBF8;
    case 0x8000BBFCu: goto label_8000BBFC;
    case 0x8000BC00u: goto label_8000BC00;
    case 0x8000BC04u: goto label_8000BC04;
    case 0x8000BC08u: goto label_8000BC08;
    case 0x8000BC0Cu: goto label_8000BC0C;
    case 0x8000BC10u: goto label_8000BC10;
    case 0x8000BC14u: goto label_8000BC14;
    case 0x8000BC18u: goto label_8000BC18;
    case 0x8000BC1Cu: goto label_8000BC1C;
    case 0x8000BC20u: goto label_8000BC20;
    case 0x8000BC24u: goto label_8000BC24;
    case 0x8000BC28u: goto label_8000BC28;
    case 0x8000BC2Cu: goto label_8000BC2C;
    case 0x8000BC30u: goto label_8000BC30;
    case 0x8000BC34u: goto label_8000BC34;
    case 0x8000BC38u: goto label_8000BC38;
    case 0x8000BC3Cu: goto label_8000BC3C;
    case 0x8000BC40u: goto label_8000BC40;
    case 0x8000BC44u: goto label_8000BC44;
    case 0x8000BC48u: goto label_8000BC48;
    case 0x8000BC4Cu: goto label_8000BC4C;
    case 0x8000BC50u: goto label_8000BC50;
    case 0x8000BC54u: goto label_8000BC54;
    case 0x8000BC58u: goto label_8000BC58;
    case 0x8000BC5Cu: goto label_8000BC5C;
    case 0x8000BC60u: goto label_8000BC60;
    case 0x8000BC64u: goto label_8000BC64;
    case 0x8000BC68u: goto label_8000BC68;
    case 0x8000BC6Cu: goto label_8000BC6C;
    case 0x8000BC70u: goto label_8000BC70;
    case 0x8000BC74u: goto label_8000BC74;
    case 0x8000BC78u: goto label_8000BC78;
    case 0x8000BC7Cu: goto label_8000BC7C;
    case 0x8000BC80u: goto label_8000BC80;
    case 0x8000BC84u: goto label_8000BC84;
    case 0x8000BC88u: goto label_8000BC88;
    case 0x8000BC8Cu: goto label_8000BC8C;
    case 0x8000BC90u: goto label_8000BC90;
    case 0x8000BC94u: goto label_8000BC94;
    case 0x8000BC98u: goto label_8000BC98;
    case 0x8000BC9Cu: goto label_8000BC9C;
    case 0x8000BCA0u: goto label_8000BCA0;
    case 0x8000BCA4u: goto label_8000BCA4;
    case 0x8000BCA8u: goto label_8000BCA8;
    case 0x8000BCACu: goto label_8000BCAC;
    case 0x8000BCB0u: goto label_8000BCB0;
    case 0x8000BCB4u: goto label_8000BCB4;
    case 0x8000BCB8u: goto label_8000BCB8;
    case 0x8000BCBCu: goto label_8000BCBC;
    case 0x8000BCC0u: goto label_8000BCC0;
    case 0x8000BCC4u: goto label_8000BCC4;
    case 0x8000BCC8u: goto label_8000BCC8;
    case 0x8000BCCCu: goto label_8000BCCC;
    case 0x8000BCD0u: goto label_8000BCD0;
    case 0x8000BCD4u: goto label_8000BCD4;
    case 0x8000BCD8u: goto label_8000BCD8;
    case 0x8000BCDCu: goto label_8000BCDC;
    case 0x8000BCE0u: goto label_8000BCE0;
    case 0x8000BCE4u: goto label_8000BCE4;
    case 0x8000BCE8u: goto label_8000BCE8;
    case 0x8000BCECu: goto label_8000BCEC;
    case 0x8000BCF0u: goto label_8000BCF0;
    case 0x8000BCF4u: goto label_8000BCF4;
    case 0x8000BCF8u: goto label_8000BCF8;
    case 0x8000BCFCu: goto label_8000BCFC;
    case 0x8000BD00u: goto label_8000BD00;
    case 0x8000BD04u: goto label_8000BD04;
    case 0x8000BD08u: goto label_8000BD08;
    case 0x8000BD0Cu: goto label_8000BD0C;
    case 0x8000BD10u: goto label_8000BD10;
    case 0x8000BD14u: goto label_8000BD14;
    case 0x8000BD18u: goto label_8000BD18;
    case 0x8000BD1Cu: goto label_8000BD1C;
    case 0x8000BD20u: goto label_8000BD20;
    case 0x8000BD24u: goto label_8000BD24;
    case 0x8000BD28u: goto label_8000BD28;
    case 0x8000BD2Cu: goto label_8000BD2C;
    case 0x8000BD30u: goto label_8000BD30;
    case 0x8000BD34u: goto label_8000BD34;
    case 0x8000BD38u: goto label_8000BD38;
    case 0x8000BD3Cu: goto label_8000BD3C;
    case 0x8000BD40u: goto label_8000BD40;
    case 0x8000BD44u: goto label_8000BD44;
    case 0x8000BD48u: goto label_8000BD48;
    case 0x8000BD4Cu: goto label_8000BD4C;
    case 0x8000BD50u: goto label_8000BD50;
    case 0x8000BD54u: goto label_8000BD54;
    case 0x8000BD58u: goto label_8000BD58;
    case 0x8000BD5Cu: goto label_8000BD5C;
    case 0x8000BD60u: goto label_8000BD60;
    case 0x8000BD64u: goto label_8000BD64;
    case 0x8000BD68u: goto label_8000BD68;
    case 0x8000BD6Cu: goto label_8000BD6C;
    case 0x8000BD70u: goto label_8000BD70;
    case 0x8000BD74u: goto label_8000BD74;
    case 0x8000BD78u: goto label_8000BD78;
    case 0x8000BD7Cu: goto label_8000BD7C;
    case 0x8000BD80u: goto label_8000BD80;
    case 0x8000BD84u: goto label_8000BD84;
    case 0x8000BD88u: goto label_8000BD88;
    case 0x8000BD8Cu: goto label_8000BD8C;
    case 0x8000BD90u: goto label_8000BD90;
    case 0x8000BD94u: goto label_8000BD94;
    case 0x8000BD98u: goto label_8000BD98;
    case 0x8000BD9Cu: goto label_8000BD9C;
    case 0x8000BDA0u: goto label_8000BDA0;
    case 0x8000BDA4u: goto label_8000BDA4;
    case 0x8000BDA8u: goto label_8000BDA8;
    case 0x8000BDACu: goto label_8000BDAC;
    case 0x8000BDB0u: goto label_8000BDB0;
    case 0x8000BDB4u: goto label_8000BDB4;
    case 0x8000BDB8u: goto label_8000BDB8;
    case 0x8000BDBCu: goto label_8000BDBC;
    case 0x8000BDC0u: goto label_8000BDC0;
    case 0x8000BDC4u: goto label_8000BDC4;
    case 0x8000BDC8u: goto label_8000BDC8;
    case 0x8000BDCCu: goto label_8000BDCC;
    case 0x8000BDD0u: goto label_8000BDD0;
    case 0x8000BDD4u: goto label_8000BDD4;
    case 0x8000BDD8u: goto label_8000BDD8;
    case 0x8000BDDCu: goto label_8000BDDC;
    case 0x8000BDE0u: goto label_8000BDE0;
    case 0x8000BDE4u: goto label_8000BDE4;
    case 0x8000BDE8u: goto label_8000BDE8;
    case 0x8000BDECu: goto label_8000BDEC;
    case 0x8000BDF0u: goto label_8000BDF0;
    case 0x8000BDF4u: goto label_8000BDF4;
    case 0x8000BDF8u: goto label_8000BDF8;
    case 0x8000BDFCu: goto label_8000BDFC;
    case 0x8000BE00u: goto label_8000BE00;
    case 0x8000BE04u: goto label_8000BE04;
    case 0x8000BE08u: goto label_8000BE08;
    case 0x8000BE0Cu: goto label_8000BE0C;
    case 0x8000BE10u: goto label_8000BE10;
    case 0x8000BE14u: goto label_8000BE14;
    case 0x8000BE18u: goto label_8000BE18;
    case 0x8000BE1Cu: goto label_8000BE1C;
    case 0x8000BE20u: goto label_8000BE20;
    case 0x8000BE24u: goto label_8000BE24;
    case 0x8000BE28u: goto label_8000BE28;
    case 0x8000BE2Cu: goto label_8000BE2C;
    case 0x8000BE30u: goto label_8000BE30;
    case 0x8000BE34u: goto label_8000BE34;
    case 0x8000BE38u: goto label_8000BE38;
    case 0x8000BE3Cu: goto label_8000BE3C;
    case 0x8000BE40u: goto label_8000BE40;
    case 0x8000BE44u: goto label_8000BE44;
    case 0x8000BE48u: goto label_8000BE48;
    case 0x8000BE4Cu: goto label_8000BE4C;
    case 0x8000BE50u: goto label_8000BE50;
    case 0x8000BE54u: goto label_8000BE54;
    case 0x8000BE58u: goto label_8000BE58;
    case 0x8000BE5Cu: goto label_8000BE5C;
    case 0x8000BE60u: goto label_8000BE60;
    case 0x8000BE64u: goto label_8000BE64;
    case 0x8000BE68u: goto label_8000BE68;
    case 0x8000BE6Cu: goto label_8000BE6C;
    case 0x8000BE70u: goto label_8000BE70;
    case 0x8000BE74u: goto label_8000BE74;
    case 0x8000BE78u: goto label_8000BE78;
    case 0x8000BE7Cu: goto label_8000BE7C;
    case 0x8000BE80u: goto label_8000BE80;
    case 0x8000BE84u: goto label_8000BE84;
    case 0x8000BE88u: goto label_8000BE88;
    case 0x8000BE8Cu: goto label_8000BE8C;
    case 0x8000BE90u: goto label_8000BE90;
    case 0x8000BE94u: goto label_8000BE94;
    case 0x8000BE98u: goto label_8000BE98;
    case 0x8000BE9Cu: goto label_8000BE9C;
    case 0x8000BEA0u: goto label_8000BEA0;
    case 0x8000BEA4u: goto label_8000BEA4;
    case 0x8000BEA8u: goto label_8000BEA8;
    case 0x8000BEACu: goto label_8000BEAC;
    case 0x8000BEB0u: goto label_8000BEB0;
    case 0x8000BEB4u: goto label_8000BEB4;
    case 0x8000BEB8u: goto label_8000BEB8;
    case 0x8000BEBCu: goto label_8000BEBC;
    case 0x8000BEC0u: goto label_8000BEC0;
    case 0x8000BEC4u: goto label_8000BEC4;
    case 0x8000BEC8u: goto label_8000BEC8;
    case 0x8000BECCu: goto label_8000BECC;
    case 0x8000BED0u: goto label_8000BED0;
    case 0x8000BED4u: goto label_8000BED4;
    case 0x8000BED8u: goto label_8000BED8;
    case 0x8000BEDCu: goto label_8000BEDC;
    case 0x8000BEE0u: goto label_8000BEE0;
    case 0x8000BEE4u: goto label_8000BEE4;
    case 0x8000BEE8u: goto label_8000BEE8;
    case 0x8000BEECu: goto label_8000BEEC;
    case 0x8000BEF0u: goto label_8000BEF0;
    case 0x8000BEF4u: goto label_8000BEF4;
    case 0x8000BEF8u: goto label_8000BEF8;
    case 0x8000BEFCu: goto label_8000BEFC;
    case 0x8000BF00u: goto label_8000BF00;
    case 0x8000BF04u: goto label_8000BF04;
    case 0x8000BF08u: goto label_8000BF08;
    case 0x8000BF0Cu: goto label_8000BF0C;
    case 0x8000BF10u: goto label_8000BF10;
    case 0x8000BF14u: goto label_8000BF14;
    case 0x8000BF18u: goto label_8000BF18;
    case 0x8000BF1Cu: goto label_8000BF1C;
    case 0x8000BF20u: goto label_8000BF20;
    case 0x8000BF24u: goto label_8000BF24;
    case 0x8000BF28u: goto label_8000BF28;
    case 0x8000BF2Cu: goto label_8000BF2C;
    case 0x8000BF30u: goto label_8000BF30;
    case 0x8000BF34u: goto label_8000BF34;
    case 0x8000BF38u: goto label_8000BF38;
    case 0x8000BF3Cu: goto label_8000BF3C;
    case 0x8000BF40u: goto label_8000BF40;
    case 0x8000BF44u: goto label_8000BF44;
    case 0x8000BF48u: goto label_8000BF48;
    case 0x8000BF4Cu: goto label_8000BF4C;
    case 0x8000BF50u: goto label_8000BF50;
    case 0x8000BF54u: goto label_8000BF54;
    case 0x8000BF58u: goto label_8000BF58;
    case 0x8000BF5Cu: goto label_8000BF5C;
    case 0x8000BF60u: goto label_8000BF60;
    case 0x8000BF64u: goto label_8000BF64;
    case 0x8000BF68u: goto label_8000BF68;
    case 0x8000BF6Cu: goto label_8000BF6C;
    case 0x8000BF70u: goto label_8000BF70;
    case 0x8000BF74u: goto label_8000BF74;
    case 0x8000BF78u: goto label_8000BF78;
    case 0x8000BF7Cu: goto label_8000BF7C;
    case 0x8000BF80u: goto label_8000BF80;
    case 0x8000BF84u: goto label_8000BF84;
    case 0x8000BF88u: goto label_8000BF88;
    case 0x8000BF8Cu: goto label_8000BF8C;
    case 0x8000BF90u: goto label_8000BF90;
    case 0x8000BF94u: goto label_8000BF94;
    case 0x8000BF98u: goto label_8000BF98;
    case 0x8000BF9Cu: goto label_8000BF9C;
    case 0x8000BFA0u: goto label_8000BFA0;
    case 0x8000BFA4u: goto label_8000BFA4;
    case 0x8000BFA8u: goto label_8000BFA8;
    case 0x8000BFACu: goto label_8000BFAC;
    case 0x8000BFB0u: goto label_8000BFB0;
    case 0x8000BFB4u: goto label_8000BFB4;
    case 0x8000BFB8u: goto label_8000BFB8;
    case 0x8000BFBCu: goto label_8000BFBC;
    case 0x8000BFC0u: goto label_8000BFC0;
    case 0x8000BFC4u: goto label_8000BFC4;
    case 0x8000BFC8u: goto label_8000BFC8;
    case 0x8000BFCCu: goto label_8000BFCC;
    case 0x8000BFD0u: goto label_8000BFD0;
    case 0x8000BFD4u: goto label_8000BFD4;
    case 0x8000BFD8u: goto label_8000BFD8;
    case 0x8000BFDCu: goto label_8000BFDC;
    case 0x8000BFE0u: goto label_8000BFE0;
    case 0x8000BFE4u: goto label_8000BFE4;
    case 0x8000BFE8u: goto label_8000BFE8;
    case 0x8000BFECu: goto label_8000BFEC;
    case 0x8000BFF0u: goto label_8000BFF0;
    case 0x8000BFF4u: goto label_8000BFF4;
    case 0x8000BFF8u: goto label_8000BFF8;
    case 0x8000BFFCu: goto label_8000BFFC;
    case 0x8000C000u: goto label_8000C000;
    case 0x8000C004u: goto label_8000C004;
    case 0x8000C008u: goto label_8000C008;
    case 0x8000C00Cu: goto label_8000C00C;
    case 0x8000C010u: goto label_8000C010;
    case 0x8000C014u: goto label_8000C014;
    case 0x8000C018u: goto label_8000C018;
    case 0x8000C01Cu: goto label_8000C01C;
    case 0x8000C020u: goto label_8000C020;
    case 0x8000C024u: goto label_8000C024;
    case 0x8000C028u: goto label_8000C028;
    case 0x8000C02Cu: goto label_8000C02C;
    case 0x8000C030u: goto label_8000C030;
    case 0x8000C034u: goto label_8000C034;
    case 0x8000C038u: goto label_8000C038;
    case 0x8000C03Cu: goto label_8000C03C;
    case 0x8000C040u: goto label_8000C040;
    case 0x8000C044u: goto label_8000C044;
    case 0x8000C048u: goto label_8000C048;
    case 0x8000C04Cu: goto label_8000C04C;
    case 0x8000C050u: goto label_8000C050;
    case 0x8000C054u: goto label_8000C054;
    case 0x8000C058u: goto label_8000C058;
    case 0x8000C05Cu: goto label_8000C05C;
    case 0x8000C060u: goto label_8000C060;
    case 0x8000C064u: goto label_8000C064;
    case 0x8000C068u: goto label_8000C068;
    case 0x8000C06Cu: goto label_8000C06C;
    case 0x8000C070u: goto label_8000C070;
    case 0x8000C074u: goto label_8000C074;
    case 0x8000C078u: goto label_8000C078;
    case 0x8000C07Cu: goto label_8000C07C;
    case 0x8000C080u: goto label_8000C080;
    case 0x8000C084u: goto label_8000C084;
    case 0x8000C088u: goto label_8000C088;
    case 0x8000C08Cu: goto label_8000C08C;
    case 0x8000C090u: goto label_8000C090;
    case 0x8000C094u: goto label_8000C094;
    case 0x8000C098u: goto label_8000C098;
    case 0x8000C09Cu: goto label_8000C09C;
    case 0x8000C0A0u: goto label_8000C0A0;
    case 0x8000C0A4u: goto label_8000C0A4;
    case 0x8000C0A8u: goto label_8000C0A8;
    case 0x8000C0ACu: goto label_8000C0AC;
    case 0x8000C0B0u: goto label_8000C0B0;
    case 0x8000C0B4u: goto label_8000C0B4;
    case 0x8000C0B8u: goto label_8000C0B8;
    case 0x8000C0BCu: goto label_8000C0BC;
    case 0x8000C0C0u: goto label_8000C0C0;
    case 0x8000C0C4u: goto label_8000C0C4;
    case 0x8000C0C8u: goto label_8000C0C8;
    case 0x8000C0CCu: goto label_8000C0CC;
    case 0x8000C0D0u: goto label_8000C0D0;
    case 0x8000C0D4u: goto label_8000C0D4;
    case 0x8000C0D8u: goto label_8000C0D8;
    case 0x8000C0DCu: goto label_8000C0DC;
    case 0x8000C0E0u: goto label_8000C0E0;
    case 0x8000C0E4u: goto label_8000C0E4;
    case 0x8000C0E8u: goto label_8000C0E8;
    case 0x8000C0ECu: goto label_8000C0EC;
    case 0x8000C0F0u: goto label_8000C0F0;
    case 0x8000C0F4u: goto label_8000C0F4;
    case 0x8000C0F8u: goto label_8000C0F8;
    case 0x8000C0FCu: goto label_8000C0FC;
    case 0x8000C100u: goto label_8000C100;
    case 0x8000C104u: goto label_8000C104;
    case 0x8000C108u: goto label_8000C108;
    case 0x8000C10Cu: goto label_8000C10C;
    case 0x8000C110u: goto label_8000C110;
    case 0x8000C114u: goto label_8000C114;
    case 0x8000C118u: goto label_8000C118;
    case 0x8000C11Cu: goto label_8000C11C;
    case 0x8000C120u: goto label_8000C120;
    case 0x8000C124u: goto label_8000C124;
    case 0x8000C128u: goto label_8000C128;
    case 0x8000C12Cu: goto label_8000C12C;
    case 0x8000C130u: goto label_8000C130;
    case 0x8000C134u: goto label_8000C134;
    case 0x8000C138u: goto label_8000C138;
    case 0x8000C13Cu: goto label_8000C13C;
    case 0x8000C140u: goto label_8000C140;
    case 0x8000C144u: goto label_8000C144;
    case 0x8000C148u: goto label_8000C148;
    case 0x8000C14Cu: goto label_8000C14C;
    case 0x8000C150u: goto label_8000C150;
    case 0x8000C154u: goto label_8000C154;
    case 0x8000C158u: goto label_8000C158;
    case 0x8000C15Cu: goto label_8000C15C;
    case 0x8000C160u: goto label_8000C160;
    case 0x8000C164u: goto label_8000C164;
    case 0x8000C168u: goto label_8000C168;
    case 0x8000C16Cu: goto label_8000C16C;
    case 0x8000C170u: goto label_8000C170;
    case 0x8000C174u: goto label_8000C174;
    case 0x8000C178u: goto label_8000C178;
    case 0x8000C17Cu: goto label_8000C17C;
    case 0x8000C180u: goto label_8000C180;
    case 0x8000C184u: goto label_8000C184;
    case 0x8000C188u: goto label_8000C188;
    case 0x8000C18Cu: goto label_8000C18C;
    case 0x8000C190u: goto label_8000C190;
    case 0x8000C194u: goto label_8000C194;
    case 0x8000C198u: goto label_8000C198;
    case 0x8000C19Cu: goto label_8000C19C;
    case 0x8000C1A0u: goto label_8000C1A0;
    case 0x8000C1A4u: goto label_8000C1A4;
    case 0x8000C1A8u: goto label_8000C1A8;
    case 0x8000C1ACu: goto label_8000C1AC;
    case 0x8000C1B0u: goto label_8000C1B0;
    case 0x8000C1B4u: goto label_8000C1B4;
    case 0x8000C1B8u: goto label_8000C1B8;
    case 0x8000C1BCu: goto label_8000C1BC;
    case 0x8000C1C0u: goto label_8000C1C0;
    case 0x8000C1C4u: goto label_8000C1C4;
    case 0x8000C1C8u: goto label_8000C1C8;
    case 0x8000C1CCu: goto label_8000C1CC;
    case 0x8000C1D0u: goto label_8000C1D0;
    case 0x8000C1D4u: goto label_8000C1D4;
    case 0x8000C1D8u: goto label_8000C1D8;
    case 0x8000C1DCu: goto label_8000C1DC;
    case 0x8000C1E0u: goto label_8000C1E0;
    case 0x8000C1E4u: goto label_8000C1E4;
    case 0x8000C1E8u: goto label_8000C1E8;
    case 0x8000C1ECu: goto label_8000C1EC;
    case 0x8000C1F0u: goto label_8000C1F0;
    case 0x8000C1F4u: goto label_8000C1F4;
    case 0x8000C1F8u: goto label_8000C1F8;
    case 0x8000C1FCu: goto label_8000C1FC;
    case 0x8000C200u: goto label_8000C200;
    case 0x8000C204u: goto label_8000C204;
    case 0x8000C208u: goto label_8000C208;
    case 0x8000C20Cu: goto label_8000C20C;
    case 0x8000C210u: goto label_8000C210;
    case 0x8000C214u: goto label_8000C214;
    case 0x8000C218u: goto label_8000C218;
    case 0x8000C21Cu: goto label_8000C21C;
    case 0x8000C220u: goto label_8000C220;
    case 0x8000C224u: goto label_8000C224;
    case 0x8000C228u: goto label_8000C228;
    case 0x8000C22Cu: goto label_8000C22C;
    case 0x8000C230u: goto label_8000C230;
    case 0x8000C234u: goto label_8000C234;
    case 0x8000C238u: goto label_8000C238;
    case 0x8000C23Cu: goto label_8000C23C;
    case 0x8000C240u: goto label_8000C240;
    case 0x8000C244u: goto label_8000C244;
    case 0x8000C248u: goto label_8000C248;
    case 0x8000C24Cu: goto label_8000C24C;
    case 0x8000C250u: goto label_8000C250;
    case 0x8000C254u: goto label_8000C254;
    case 0x8000C258u: goto label_8000C258;
    case 0x8000C25Cu: goto label_8000C25C;
    case 0x8000C260u: goto label_8000C260;
    case 0x8000C264u: goto label_8000C264;
    case 0x8000C268u: goto label_8000C268;
    case 0x8000C26Cu: goto label_8000C26C;
    case 0x8000C270u: goto label_8000C270;
    case 0x8000C274u: goto label_8000C274;
    case 0x8000C278u: goto label_8000C278;
    case 0x8000C27Cu: goto label_8000C27C;
    case 0x8000C280u: goto label_8000C280;
    case 0x8000C284u: goto label_8000C284;
    case 0x8000C288u: goto label_8000C288;
    case 0x8000C28Cu: goto label_8000C28C;
    case 0x8000C290u: goto label_8000C290;
    case 0x8000C294u: goto label_8000C294;
    case 0x8000C298u: goto label_8000C298;
    case 0x8000C29Cu: goto label_8000C29C;
    case 0x8000C2A0u: goto label_8000C2A0;
    case 0x8000C2A4u: goto label_8000C2A4;
    case 0x8000C2A8u: goto label_8000C2A8;
    case 0x8000C2ACu: goto label_8000C2AC;
    case 0x8000C2B0u: goto label_8000C2B0;
    case 0x8000C2B4u: goto label_8000C2B4;
    case 0x8000C2B8u: goto label_8000C2B8;
    case 0x8000C2BCu: goto label_8000C2BC;
    case 0x8000C2C0u: goto label_8000C2C0;
    case 0x8000C2C4u: goto label_8000C2C4;
    case 0x8000C2C8u: goto label_8000C2C8;
    case 0x8000C2CCu: goto label_8000C2CC;
    case 0x8000C2D0u: goto label_8000C2D0;
    case 0x8000C2D4u: goto label_8000C2D4;
    case 0x8000C2D8u: goto label_8000C2D8;
    case 0x8000C2DCu: goto label_8000C2DC;
    case 0x8000C2E0u: goto label_8000C2E0;
    case 0x8000C2E4u: goto label_8000C2E4;
    case 0x8000C2E8u: goto label_8000C2E8;
    case 0x8000C2ECu: goto label_8000C2EC;
    case 0x8000C2F0u: goto label_8000C2F0;
    case 0x8000C2F4u: goto label_8000C2F4;
    case 0x8000C2F8u: goto label_8000C2F8;
    case 0x8000C2FCu: goto label_8000C2FC;
    case 0x8000C300u: goto label_8000C300;
    case 0x8000C304u: goto label_8000C304;
    case 0x8000C308u: goto label_8000C308;
    case 0x8000C30Cu: goto label_8000C30C;
    case 0x8000C310u: goto label_8000C310;
    case 0x8000C314u: goto label_8000C314;
    case 0x8000C318u: goto label_8000C318;
    case 0x8000C31Cu: goto label_8000C31C;
    case 0x8000C320u: goto label_8000C320;
    case 0x8000C324u: goto label_8000C324;
    case 0x8000C328u: goto label_8000C328;
    case 0x8000C32Cu: goto label_8000C32C;
    case 0x8000C330u: goto label_8000C330;
    case 0x8000C334u: goto label_8000C334;
    case 0x8000C338u: goto label_8000C338;
    case 0x8000C33Cu: goto label_8000C33C;
    case 0x8000C340u: goto label_8000C340;
    case 0x8000C344u: goto label_8000C344;
    case 0x8000C348u: goto label_8000C348;
    case 0x8000C34Cu: goto label_8000C34C;
    case 0x8000C350u: goto label_8000C350;
    case 0x8000C354u: goto label_8000C354;
    case 0x8000C358u: goto label_8000C358;
    case 0x8000C35Cu: goto label_8000C35C;
    case 0x8000C360u: goto label_8000C360;
    case 0x8000C364u: goto label_8000C364;
    case 0x8000C368u: goto label_8000C368;
    case 0x8000C36Cu: goto label_8000C36C;
    case 0x8000C370u: goto label_8000C370;
    case 0x8000C374u: goto label_8000C374;
    case 0x8000C378u: goto label_8000C378;
    case 0x8000C37Cu: goto label_8000C37C;
    case 0x8000C380u: goto label_8000C380;
    case 0x8000C384u: goto label_8000C384;
    case 0x8000C388u: goto label_8000C388;
    case 0x8000C38Cu: goto label_8000C38C;
    case 0x8000C390u: goto label_8000C390;
    case 0x8000C394u: goto label_8000C394;
    case 0x8000C398u: goto label_8000C398;
    case 0x8000C39Cu: goto label_8000C39C;
    case 0x8000C3A0u: goto label_8000C3A0;
    case 0x8000C3A4u: goto label_8000C3A4;
    case 0x8000C3A8u: goto label_8000C3A8;
    case 0x8000C3ACu: goto label_8000C3AC;
    case 0x8000C3B0u: goto label_8000C3B0;
    case 0x8000C3B4u: goto label_8000C3B4;
    case 0x8000C3B8u: goto label_8000C3B8;
    case 0x8000C3BCu: goto label_8000C3BC;
    case 0x8000C3C0u: goto label_8000C3C0;
    case 0x8000C3C4u: goto label_8000C3C4;
    case 0x8000C3C8u: goto label_8000C3C8;
    case 0x8000C3CCu: goto label_8000C3CC;
    case 0x8000C3D0u: goto label_8000C3D0;
    case 0x8000C3D4u: goto label_8000C3D4;
    case 0x8000C3D8u: goto label_8000C3D8;
    case 0x8000C3DCu: goto label_8000C3DC;
    case 0x8000C3E0u: goto label_8000C3E0;
    case 0x8000C3E4u: goto label_8000C3E4;
    case 0x8000C3E8u: goto label_8000C3E8;
    case 0x8000C3ECu: goto label_8000C3EC;
    case 0x8000C3F0u: goto label_8000C3F0;
    case 0x8000C3F4u: goto label_8000C3F4;
    case 0x8000C3F8u: goto label_8000C3F8;
    case 0x8000C3FCu: goto label_8000C3FC;
    case 0x8000C400u: goto label_8000C400;
    case 0x8000C404u: goto label_8000C404;
    case 0x8000C408u: goto label_8000C408;
    case 0x8000C40Cu: goto label_8000C40C;
    case 0x8000C410u: goto label_8000C410;
    case 0x8000C414u: goto label_8000C414;
    case 0x8000C418u: goto label_8000C418;
    case 0x8000C41Cu: goto label_8000C41C;
    case 0x8000C420u: goto label_8000C420;
    case 0x8000C424u: goto label_8000C424;
    case 0x8000C428u: goto label_8000C428;
    case 0x8000C42Cu: goto label_8000C42C;
    case 0x8000C430u: goto label_8000C430;
    case 0x8000C434u: goto label_8000C434;
    case 0x8000C438u: goto label_8000C438;
    case 0x8000C43Cu: goto label_8000C43C;
    case 0x8000C440u: goto label_8000C440;
    case 0x8000C444u: goto label_8000C444;
    case 0x8000C448u: goto label_8000C448;
    case 0x8000C44Cu: goto label_8000C44C;
    case 0x8000C450u: goto label_8000C450;
    case 0x8000C454u: goto label_8000C454;
    case 0x8000C458u: goto label_8000C458;
    case 0x8000C45Cu: goto label_8000C45C;
    case 0x8000C460u: goto label_8000C460;
    case 0x8000C464u: goto label_8000C464;
    case 0x8000C468u: goto label_8000C468;
    case 0x8000C46Cu: goto label_8000C46C;
    case 0x8000C470u: goto label_8000C470;
    case 0x8000C474u: goto label_8000C474;
    case 0x8000C478u: goto label_8000C478;
    case 0x8000C47Cu: goto label_8000C47C;
    case 0x8000C480u: goto label_8000C480;
    case 0x8000C484u: goto label_8000C484;
    case 0x8000C488u: goto label_8000C488;
    case 0x8000C48Cu: goto label_8000C48C;
    case 0x8000C490u: goto label_8000C490;
    case 0x8000C494u: goto label_8000C494;
    case 0x8000C498u: goto label_8000C498;
    case 0x8000C49Cu: goto label_8000C49C;
    case 0x8000C4A0u: goto label_8000C4A0;
    case 0x8000C4A4u: goto label_8000C4A4;
    case 0x8000C4A8u: goto label_8000C4A8;
    case 0x8000C4ACu: goto label_8000C4AC;
    case 0x8000C4B0u: goto label_8000C4B0;
    case 0x8000C4B4u: goto label_8000C4B4;
    case 0x8000C4B8u: goto label_8000C4B8;
    case 0x8000C4BCu: goto label_8000C4BC;
    case 0x8000C4C0u: goto label_8000C4C0;
    case 0x8000C4C4u: goto label_8000C4C4;
    case 0x8000C4C8u: goto label_8000C4C8;
    case 0x8000C4CCu: goto label_8000C4CC;
    case 0x8000C4D0u: goto label_8000C4D0;
    case 0x8000C4D4u: goto label_8000C4D4;
    case 0x8000C4D8u: goto label_8000C4D8;
    case 0x8000C4DCu: goto label_8000C4DC;
    case 0x8000C4E0u: goto label_8000C4E0;
    case 0x8000C4E4u: goto label_8000C4E4;
    case 0x8000C4E8u: goto label_8000C4E8;
    case 0x8000C4ECu: goto label_8000C4EC;
    case 0x8000C4F0u: goto label_8000C4F0;
    case 0x8000C4F4u: goto label_8000C4F4;
    case 0x8000C4F8u: goto label_8000C4F8;
    case 0x8000C4FCu: goto label_8000C4FC;
    case 0x8000C500u: goto label_8000C500;
    case 0x8000C504u: goto label_8000C504;
    case 0x8000C508u: goto label_8000C508;
    case 0x8000C50Cu: goto label_8000C50C;
    case 0x8000C510u: goto label_8000C510;
    case 0x8000C514u: goto label_8000C514;
    case 0x8000C518u: goto label_8000C518;
    case 0x8000C51Cu: goto label_8000C51C;
    case 0x8000C520u: goto label_8000C520;
    case 0x8000C524u: goto label_8000C524;
    case 0x8000C528u: goto label_8000C528;
    case 0x8000C52Cu: goto label_8000C52C;
    case 0x8000C530u: goto label_8000C530;
    case 0x8000C534u: goto label_8000C534;
    case 0x8000C538u: goto label_8000C538;
    case 0x8000C53Cu: goto label_8000C53C;
    case 0x8000C540u: goto label_8000C540;
    case 0x8000C544u: goto label_8000C544;
    case 0x8000C548u: goto label_8000C548;
    case 0x8000C54Cu: goto label_8000C54C;
    case 0x8000C550u: goto label_8000C550;
    case 0x8000C554u: goto label_8000C554;
    case 0x8000C558u: goto label_8000C558;
    case 0x8000C55Cu: goto label_8000C55C;
    case 0x8000C560u: goto label_8000C560;
    case 0x8000C564u: goto label_8000C564;
    case 0x8000C568u: goto label_8000C568;
    case 0x8000C56Cu: goto label_8000C56C;
    case 0x8000C570u: goto label_8000C570;
    case 0x8000C574u: goto label_8000C574;
    case 0x8000C578u: goto label_8000C578;
    case 0x8000C57Cu: goto label_8000C57C;
    case 0x8000C580u: goto label_8000C580;
    case 0x8000C584u: goto label_8000C584;
    case 0x8000C588u: goto label_8000C588;
    case 0x8000C58Cu: goto label_8000C58C;
    case 0x8000C590u: goto label_8000C590;
    case 0x8000C594u: goto label_8000C594;
    case 0x8000C598u: goto label_8000C598;
    case 0x8000C59Cu: goto label_8000C59C;
    case 0x8000C5A0u: goto label_8000C5A0;
    case 0x8000C5A4u: goto label_8000C5A4;
    case 0x8000C5A8u: goto label_8000C5A8;
    case 0x8000C5ACu: goto label_8000C5AC;
    case 0x8000C5B0u: goto label_8000C5B0;
    case 0x8000C5B4u: goto label_8000C5B4;
    case 0x8000C5B8u: goto label_8000C5B8;
    case 0x8000C5BCu: goto label_8000C5BC;
    case 0x8000C5C0u: goto label_8000C5C0;
    case 0x8000C5C4u: goto label_8000C5C4;
    case 0x8000C5C8u: goto label_8000C5C8;
    case 0x8000C5CCu: goto label_8000C5CC;
    case 0x8000C5D0u: goto label_8000C5D0;
    case 0x8000C5D4u: goto label_8000C5D4;
    case 0x8000C5D8u: goto label_8000C5D8;
    case 0x8000C5DCu: goto label_8000C5DC;
    case 0x8000C5E0u: goto label_8000C5E0;
    case 0x8000C5E4u: goto label_8000C5E4;
    case 0x8000C5E8u: goto label_8000C5E8;
    case 0x8000C5ECu: goto label_8000C5EC;
    case 0x8000C5F0u: goto label_8000C5F0;
    case 0x8000C5F4u: goto label_8000C5F4;
    case 0x8000C5F8u: goto label_8000C5F8;
    case 0x8000C5FCu: goto label_8000C5FC;
    case 0x8000C600u: goto label_8000C600;
    case 0x8000C604u: goto label_8000C604;
    case 0x8000C608u: goto label_8000C608;
    case 0x8000C60Cu: goto label_8000C60C;
    case 0x8000C610u: goto label_8000C610;
    case 0x8000C614u: goto label_8000C614;
    case 0x8000C618u: goto label_8000C618;
    case 0x8000C61Cu: goto label_8000C61C;
    case 0x8000C620u: goto label_8000C620;
    case 0x8000C624u: goto label_8000C624;
    case 0x8000C628u: goto label_8000C628;
    case 0x8000C62Cu: goto label_8000C62C;
    case 0x8000C630u: goto label_8000C630;
    case 0x8000C634u: goto label_8000C634;
    case 0x8000C638u: goto label_8000C638;
    case 0x8000C63Cu: goto label_8000C63C;
    case 0x8000C640u: goto label_8000C640;
    case 0x8000C644u: goto label_8000C644;
    case 0x8000C648u: goto label_8000C648;
    case 0x8000C64Cu: goto label_8000C64C;
    case 0x8000C650u: goto label_8000C650;
    case 0x8000C654u: goto label_8000C654;
    case 0x8000C658u: goto label_8000C658;
    case 0x8000C65Cu: goto label_8000C65C;
    case 0x8000C660u: goto label_8000C660;
    case 0x8000C664u: goto label_8000C664;
    case 0x8000C668u: goto label_8000C668;
    case 0x8000C66Cu: goto label_8000C66C;
    case 0x8000C670u: goto label_8000C670;
    case 0x8000C674u: goto label_8000C674;
    case 0x8000C678u: goto label_8000C678;
    case 0x8000C67Cu: goto label_8000C67C;
    case 0x8000C680u: goto label_8000C680;
    case 0x8000C684u: goto label_8000C684;
    case 0x8000C688u: goto label_8000C688;
    case 0x8000C68Cu: goto label_8000C68C;
    case 0x8000C690u: goto label_8000C690;
    case 0x8000C694u: goto label_8000C694;
    case 0x8000C698u: goto label_8000C698;
    case 0x8000C69Cu: goto label_8000C69C;
    case 0x8000C6A0u: goto label_8000C6A0;
    case 0x8000C6A4u: goto label_8000C6A4;
    case 0x8000C6A8u: goto label_8000C6A8;
    case 0x8000C6ACu: goto label_8000C6AC;
    case 0x8000C6B0u: goto label_8000C6B0;
    case 0x8000C6B4u: goto label_8000C6B4;
    case 0x8000C6B8u: goto label_8000C6B8;
    case 0x8000C6BCu: goto label_8000C6BC;
    case 0x8000C6C0u: goto label_8000C6C0;
    case 0x8000C6C4u: goto label_8000C6C4;
    case 0x8000C6C8u: goto label_8000C6C8;
    case 0x8000C6CCu: goto label_8000C6CC;
    case 0x8000C6D0u: goto label_8000C6D0;
    case 0x8000C6D4u: goto label_8000C6D4;
    case 0x8000C6D8u: goto label_8000C6D8;
    case 0x8000C6DCu: goto label_8000C6DC;
    case 0x8000C6E0u: goto label_8000C6E0;
    case 0x8000C6E4u: goto label_8000C6E4;
    case 0x8000C6E8u: goto label_8000C6E8;
    case 0x8000C6ECu: goto label_8000C6EC;
    case 0x8000C6F0u: goto label_8000C6F0;
    case 0x8000C6F4u: goto label_8000C6F4;
    case 0x8000C6F8u: goto label_8000C6F8;
    case 0x8000C6FCu: goto label_8000C6FC;
    case 0x8000C700u: goto label_8000C700;
    case 0x8000C704u: goto label_8000C704;
    case 0x8000C708u: goto label_8000C708;
    case 0x8000C70Cu: goto label_8000C70C;
    case 0x8000C710u: goto label_8000C710;
    case 0x8000C714u: goto label_8000C714;
    case 0x8000C718u: goto label_8000C718;
    case 0x8000C71Cu: goto label_8000C71C;
    case 0x8000C720u: goto label_8000C720;
    case 0x8000C724u: goto label_8000C724;
    case 0x8000C728u: goto label_8000C728;
    case 0x8000C72Cu: goto label_8000C72C;
    case 0x8000C730u: goto label_8000C730;
    case 0x8000C734u: goto label_8000C734;
    case 0x8000C738u: goto label_8000C738;
    case 0x8000C73Cu: goto label_8000C73C;
    case 0x8000C740u: goto label_8000C740;
    case 0x8000C744u: goto label_8000C744;
    case 0x8000C748u: goto label_8000C748;
    case 0x8000C74Cu: goto label_8000C74C;
    case 0x8000C750u: goto label_8000C750;
    case 0x8000C754u: goto label_8000C754;
    case 0x8000C758u: goto label_8000C758;
    case 0x8000C75Cu: goto label_8000C75C;
    case 0x8000C760u: goto label_8000C760;
    case 0x8000C764u: goto label_8000C764;
    case 0x8000C768u: goto label_8000C768;
    case 0x8000C76Cu: goto label_8000C76C;
    case 0x8000C770u: goto label_8000C770;
    case 0x8000C774u: goto label_8000C774;
    case 0x8000C778u: goto label_8000C778;
    case 0x8000C77Cu: goto label_8000C77C;
    case 0x8000C780u: goto label_8000C780;
    case 0x8000C784u: goto label_8000C784;
    case 0x8000C788u: goto label_8000C788;
    case 0x8000C78Cu: goto label_8000C78C;
    case 0x8000C790u: goto label_8000C790;
    case 0x8000C794u: goto label_8000C794;
    case 0x8000C798u: goto label_8000C798;
    case 0x8000C79Cu: goto label_8000C79C;
    case 0x8000C7A0u: goto label_8000C7A0;
    case 0x8000C7A4u: goto label_8000C7A4;
    case 0x8000C7A8u: goto label_8000C7A8;
    case 0x8000C7ACu: goto label_8000C7AC;
    case 0x8000C7B0u: goto label_8000C7B0;
    case 0x8000C7B4u: goto label_8000C7B4;
    case 0x8000C7B8u: goto label_8000C7B8;
    case 0x8000C7BCu: goto label_8000C7BC;
    case 0x8000C7C0u: goto label_8000C7C0;
    case 0x8000C7C4u: goto label_8000C7C4;
    case 0x8000C7C8u: goto label_8000C7C8;
    case 0x8000C7CCu: goto label_8000C7CC;
    case 0x8000C7D0u: goto label_8000C7D0;
    case 0x8000C7D4u: goto label_8000C7D4;
    case 0x8000C7D8u: goto label_8000C7D8;
    case 0x8000C7DCu: goto label_8000C7DC;
    case 0x8000C7E0u: goto label_8000C7E0;
    case 0x8000C7E4u: goto label_8000C7E4;
    case 0x8000C7E8u: goto label_8000C7E8;
    case 0x8000C7ECu: goto label_8000C7EC;
    case 0x8000C7F0u: goto label_8000C7F0;
    case 0x8000C7F4u: goto label_8000C7F4;
    case 0x8000C7F8u: goto label_8000C7F8;
    case 0x8000C7FCu: goto label_8000C7FC;
    case 0x8000C800u: goto label_8000C800;
    case 0x8000C804u: goto label_8000C804;
    case 0x8000C808u: goto label_8000C808;
    case 0x8000C80Cu: goto label_8000C80C;
    case 0x8000C810u: goto label_8000C810;
    case 0x8000C814u: goto label_8000C814;
    case 0x8000C818u: goto label_8000C818;
    case 0x8000C81Cu: goto label_8000C81C;
    case 0x8000C820u: goto label_8000C820;
    case 0x8000C824u: goto label_8000C824;
    case 0x8000C828u: goto label_8000C828;
    case 0x8000C82Cu: goto label_8000C82C;
    case 0x8000C830u: goto label_8000C830;
    case 0x8000C834u: goto label_8000C834;
    case 0x8000C838u: goto label_8000C838;
    case 0x8000C83Cu: goto label_8000C83C;
    case 0x8000C840u: goto label_8000C840;
    case 0x8000C844u: goto label_8000C844;
    case 0x8000C848u: goto label_8000C848;
    case 0x8000C84Cu: goto label_8000C84C;
    case 0x8000C850u: goto label_8000C850;
    case 0x8000C854u: goto label_8000C854;
    case 0x8000C858u: goto label_8000C858;
    case 0x8000C85Cu: goto label_8000C85C;
    case 0x8000C860u: goto label_8000C860;
    case 0x8000C864u: goto label_8000C864;
    case 0x8000C868u: goto label_8000C868;
    case 0x8000C86Cu: goto label_8000C86C;
    case 0x8000C870u: goto label_8000C870;
    case 0x8000C874u: goto label_8000C874;
    case 0x8000C878u: goto label_8000C878;
    case 0x8000C87Cu: goto label_8000C87C;
    case 0x8000C880u: goto label_8000C880;
    case 0x8000C884u: goto label_8000C884;
    case 0x8000C888u: goto label_8000C888;
    case 0x8000C88Cu: goto label_8000C88C;
    case 0x8000C890u: goto label_8000C890;
    case 0x8000C894u: goto label_8000C894;
    case 0x8000C898u: goto label_8000C898;
    case 0x8000C89Cu: goto label_8000C89C;
    case 0x8000C8A0u: goto label_8000C8A0;
    case 0x8000C8A4u: goto label_8000C8A4;
    case 0x8000C8A8u: goto label_8000C8A8;
    case 0x8000C8ACu: goto label_8000C8AC;
    case 0x8000C8B0u: goto label_8000C8B0;
    case 0x8000C8B4u: goto label_8000C8B4;
    case 0x8000C8B8u: goto label_8000C8B8;
    case 0x8000C8BCu: goto label_8000C8BC;
    case 0x8000C8C0u: goto label_8000C8C0;
    case 0x8000C8C4u: goto label_8000C8C4;
    case 0x8000C8C8u: goto label_8000C8C8;
    case 0x8000C8CCu: goto label_8000C8CC;
    case 0x8000C8D0u: goto label_8000C8D0;
    case 0x8000C8D4u: goto label_8000C8D4;
    case 0x8000C8D8u: goto label_8000C8D8;
    case 0x8000C8DCu: goto label_8000C8DC;
    case 0x8000C8E0u: goto label_8000C8E0;
    case 0x8000C8E4u: goto label_8000C8E4;
    case 0x8000C8E8u: goto label_8000C8E8;
    case 0x8000C8ECu: goto label_8000C8EC;
    case 0x8000C8F0u: goto label_8000C8F0;
    case 0x8000C8F4u: goto label_8000C8F4;
    case 0x8000C8F8u: goto label_8000C8F8;
    case 0x8000C8FCu: goto label_8000C8FC;
    case 0x8000C900u: goto label_8000C900;
    case 0x8000C904u: goto label_8000C904;
    case 0x8000C908u: goto label_8000C908;
    case 0x8000C90Cu: goto label_8000C90C;
    case 0x8000C910u: goto label_8000C910;
    case 0x8000C914u: goto label_8000C914;
    case 0x8000C918u: goto label_8000C918;
    case 0x8000C91Cu: goto label_8000C91C;
    case 0x8000C920u: goto label_8000C920;
    case 0x8000C924u: goto label_8000C924;
    case 0x8000C928u: goto label_8000C928;
    case 0x8000C92Cu: goto label_8000C92C;
    case 0x8000C930u: goto label_8000C930;
    case 0x8000C934u: goto label_8000C934;
    case 0x8000C938u: goto label_8000C938;
    case 0x8000C93Cu: goto label_8000C93C;
    case 0x8000C940u: goto label_8000C940;
    case 0x8000C944u: goto label_8000C944;
    case 0x8000C948u: goto label_8000C948;
    case 0x8000C94Cu: goto label_8000C94C;
    case 0x8000C950u: goto label_8000C950;
    case 0x8000C954u: goto label_8000C954;
    case 0x8000C958u: goto label_8000C958;
    case 0x8000C95Cu: goto label_8000C95C;
    case 0x8000C960u: goto label_8000C960;
    case 0x8000C964u: goto label_8000C964;
    case 0x8000C968u: goto label_8000C968;
    case 0x8000C96Cu: goto label_8000C96C;
    case 0x8000C970u: goto label_8000C970;
    case 0x8000C974u: goto label_8000C974;
    case 0x8000C978u: goto label_8000C978;
    case 0x8000C97Cu: goto label_8000C97C;
    case 0x8000C980u: goto label_8000C980;
    case 0x8000C984u: goto label_8000C984;
    case 0x8000C988u: goto label_8000C988;
    case 0x8000C98Cu: goto label_8000C98C;
    case 0x8000C990u: goto label_8000C990;
    case 0x8000C994u: goto label_8000C994;
    case 0x8000C998u: goto label_8000C998;
    case 0x8000C99Cu: goto label_8000C99C;
    case 0x8000C9A0u: goto label_8000C9A0;
    case 0x8000C9A4u: goto label_8000C9A4;
    case 0x8000C9A8u: goto label_8000C9A8;
    case 0x8000C9ACu: goto label_8000C9AC;
    case 0x8000C9B0u: goto label_8000C9B0;
    case 0x8000C9B4u: goto label_8000C9B4;
    case 0x8000C9B8u: goto label_8000C9B8;
    case 0x8000C9BCu: goto label_8000C9BC;
    case 0x8000C9C0u: goto label_8000C9C0;
    case 0x8000C9C4u: goto label_8000C9C4;
    case 0x8000C9C8u: goto label_8000C9C8;
    case 0x8000C9CCu: goto label_8000C9CC;
    case 0x8000C9D0u: goto label_8000C9D0;
    case 0x8000C9D4u: goto label_8000C9D4;
    case 0x8000C9D8u: goto label_8000C9D8;
    case 0x8000C9DCu: goto label_8000C9DC;
    case 0x8000C9E0u: goto label_8000C9E0;
    case 0x8000C9E4u: goto label_8000C9E4;
    case 0x8000C9E8u: goto label_8000C9E8;
    case 0x8000C9ECu: goto label_8000C9EC;
    case 0x8000C9F0u: goto label_8000C9F0;
    case 0x8000C9F4u: goto label_8000C9F4;
    case 0x8000C9F8u: goto label_8000C9F8;
    case 0x8000C9FCu: goto label_8000C9FC;
    case 0x8000CA00u: goto label_8000CA00;
    case 0x8000CA04u: goto label_8000CA04;
    case 0x8000CA08u: goto label_8000CA08;
    case 0x8000CA0Cu: goto label_8000CA0C;
    case 0x8000CA10u: goto label_8000CA10;
    case 0x8000CA14u: goto label_8000CA14;
    case 0x8000CA18u: goto label_8000CA18;
    case 0x8000CA1Cu: goto label_8000CA1C;
    case 0x8000CA20u: goto label_8000CA20;
    case 0x8000CA24u: goto label_8000CA24;
    case 0x8000CA28u: goto label_8000CA28;
    case 0x8000CA2Cu: goto label_8000CA2C;
    case 0x8000CA30u: goto label_8000CA30;
    case 0x8000CA34u: goto label_8000CA34;
    case 0x8000CA38u: goto label_8000CA38;
    case 0x8000CA3Cu: goto label_8000CA3C;
    case 0x8000CA40u: goto label_8000CA40;
    case 0x8000CA44u: goto label_8000CA44;
    case 0x8000CA48u: goto label_8000CA48;
    case 0x8000CA4Cu: goto label_8000CA4C;
    case 0x8000CA50u: goto label_8000CA50;
    case 0x8000CA54u: goto label_8000CA54;
    case 0x8000CA58u: goto label_8000CA58;
    case 0x8000CA5Cu: goto label_8000CA5C;
    case 0x8000CA60u: goto label_8000CA60;
    case 0x8000CA64u: goto label_8000CA64;
    case 0x8000CA68u: goto label_8000CA68;
    case 0x8000CA6Cu: goto label_8000CA6C;
    case 0x8000CA70u: goto label_8000CA70;
    case 0x8000CA74u: goto label_8000CA74;
    case 0x8000CA78u: goto label_8000CA78;
    case 0x8000CA7Cu: goto label_8000CA7C;
    case 0x8000CA80u: goto label_8000CA80;
    case 0x8000CA84u: goto label_8000CA84;
    case 0x8000CA88u: goto label_8000CA88;
    case 0x8000CA8Cu: goto label_8000CA8C;
    case 0x8000CA90u: goto label_8000CA90;
    case 0x8000CA94u: goto label_8000CA94;
    case 0x8000CA98u: goto label_8000CA98;
    case 0x8000CA9Cu: goto label_8000CA9C;
    case 0x8000CAA0u: goto label_8000CAA0;
    case 0x8000CAA4u: goto label_8000CAA4;
    case 0x8000CAA8u: goto label_8000CAA8;
    case 0x8000CAACu: goto label_8000CAAC;
    case 0x8000CAB0u: goto label_8000CAB0;
    case 0x8000CAB4u: goto label_8000CAB4;
    case 0x8000CAB8u: goto label_8000CAB8;
    case 0x8000CABCu: goto label_8000CABC;
    case 0x8000CAC0u: goto label_8000CAC0;
    case 0x8000CAC4u: goto label_8000CAC4;
    case 0x8000CAC8u: goto label_8000CAC8;
    case 0x8000CACCu: goto label_8000CACC;
    case 0x8000CAD0u: goto label_8000CAD0;
    case 0x8000CAD4u: goto label_8000CAD4;
    case 0x8000CAD8u: goto label_8000CAD8;
    case 0x8000CADCu: goto label_8000CADC;
    case 0x8000CAE0u: goto label_8000CAE0;
    case 0x8000CAE4u: goto label_8000CAE4;
    case 0x8000CAE8u: goto label_8000CAE8;
    case 0x8000CAECu: goto label_8000CAEC;
    case 0x8000CAF0u: goto label_8000CAF0;
    case 0x8000CAF4u: goto label_8000CAF4;
    case 0x8000CAF8u: goto label_8000CAF8;
    case 0x8000CAFCu: goto label_8000CAFC;
    case 0x8000CB00u: goto label_8000CB00;
    case 0x8000CB04u: goto label_8000CB04;
    case 0x8000CB08u: goto label_8000CB08;
    case 0x8000CB0Cu: goto label_8000CB0C;
    case 0x8000CB10u: goto label_8000CB10;
    case 0x8000CB14u: goto label_8000CB14;
    case 0x8000CB18u: goto label_8000CB18;
    case 0x8000CB1Cu: goto label_8000CB1C;
    case 0x8000CB20u: goto label_8000CB20;
    case 0x8000CB24u: goto label_8000CB24;
    case 0x8000CB28u: goto label_8000CB28;
    case 0x8000CB2Cu: goto label_8000CB2C;
    case 0x8000CB30u: goto label_8000CB30;
    case 0x8000CB34u: goto label_8000CB34;
    case 0x8000CB38u: goto label_8000CB38;
    case 0x8000CB3Cu: goto label_8000CB3C;
    case 0x8000CB40u: goto label_8000CB40;
    case 0x8000CB44u: goto label_8000CB44;
    case 0x8000CB48u: goto label_8000CB48;
    case 0x8000CB4Cu: goto label_8000CB4C;
    case 0x8000CB50u: goto label_8000CB50;
    case 0x8000CB54u: goto label_8000CB54;
    case 0x8000CB58u: goto label_8000CB58;
    case 0x8000CB5Cu: goto label_8000CB5C;
    case 0x8000CB60u: goto label_8000CB60;
    case 0x8000CB64u: goto label_8000CB64;
    case 0x8000CB68u: goto label_8000CB68;
    case 0x8000CB6Cu: goto label_8000CB6C;
    case 0x8000CB70u: goto label_8000CB70;
    case 0x8000CB74u: goto label_8000CB74;
    case 0x8000CB78u: goto label_8000CB78;
    case 0x8000CB7Cu: goto label_8000CB7C;
    case 0x8000CB80u: goto label_8000CB80;
    case 0x8000CB84u: goto label_8000CB84;
    case 0x8000CB88u: goto label_8000CB88;
    case 0x8000CB8Cu: goto label_8000CB8C;
    case 0x8000CB90u: goto label_8000CB90;
    case 0x8000CB94u: goto label_8000CB94;
    case 0x8000CB98u: goto label_8000CB98;
    case 0x8000CB9Cu: goto label_8000CB9C;
    case 0x8000CBA0u: goto label_8000CBA0;
    case 0x8000CBA4u: goto label_8000CBA4;
    case 0x8000CBA8u: goto label_8000CBA8;
    case 0x8000CBACu: goto label_8000CBAC;
    case 0x8000CBB0u: goto label_8000CBB0;
    case 0x8000CBB4u: goto label_8000CBB4;
    case 0x8000CBB8u: goto label_8000CBB8;
    case 0x8000CBBCu: goto label_8000CBBC;
    case 0x8000CBC0u: goto label_8000CBC0;
    case 0x8000CBC4u: goto label_8000CBC4;
    case 0x8000CBC8u: goto label_8000CBC8;
    case 0x8000CBCCu: goto label_8000CBCC;
    case 0x8000CBD0u: goto label_8000CBD0;
    case 0x8000CBD4u: goto label_8000CBD4;
    case 0x8000CBD8u: goto label_8000CBD8;
    case 0x8000CBDCu: goto label_8000CBDC;
    case 0x8000CBE0u: goto label_8000CBE0;
    case 0x8000CBE4u: goto label_8000CBE4;
    case 0x8000CBE8u: goto label_8000CBE8;
    case 0x8000CBECu: goto label_8000CBEC;
    case 0x8000CBF0u: goto label_8000CBF0;
    case 0x8000CBF4u: goto label_8000CBF4;
    case 0x8000CBF8u: goto label_8000CBF8;
    case 0x8000CBFCu: goto label_8000CBFC;
    case 0x8000CC00u: goto label_8000CC00;
    case 0x8000CC04u: goto label_8000CC04;
    case 0x8000CC08u: goto label_8000CC08;
    case 0x8000CC0Cu: goto label_8000CC0C;
    case 0x8000CC10u: goto label_8000CC10;
    case 0x8000CC14u: goto label_8000CC14;
    case 0x8000CC18u: goto label_8000CC18;
    case 0x8000CC1Cu: goto label_8000CC1C;
    case 0x8000CC20u: goto label_8000CC20;
    case 0x8000CC24u: goto label_8000CC24;
    case 0x8000CC28u: goto label_8000CC28;
    case 0x8000CC2Cu: goto label_8000CC2C;
    case 0x8000CC30u: goto label_8000CC30;
    case 0x8000CC34u: goto label_8000CC34;
    case 0x8000CC38u: goto label_8000CC38;
    case 0x8000CC3Cu: goto label_8000CC3C;
    case 0x8000CC40u: goto label_8000CC40;
    case 0x8000CC44u: goto label_8000CC44;
    case 0x8000CC48u: goto label_8000CC48;
    case 0x8000CC4Cu: goto label_8000CC4C;
    case 0x8000CC50u: goto label_8000CC50;
    case 0x8000CC54u: goto label_8000CC54;
    case 0x8000CC58u: goto label_8000CC58;
    case 0x8000CC5Cu: goto label_8000CC5C;
    case 0x8000CC60u: goto label_8000CC60;
    case 0x8000CC64u: goto label_8000CC64;
    case 0x8000CC68u: goto label_8000CC68;
    case 0x8000CC6Cu: goto label_8000CC6C;
    case 0x8000CC70u: goto label_8000CC70;
    case 0x8000CC74u: goto label_8000CC74;
    case 0x8000CC78u: goto label_8000CC78;
    case 0x8000CC7Cu: goto label_8000CC7C;
    case 0x8000CC80u: goto label_8000CC80;
    case 0x8000CC84u: goto label_8000CC84;
    case 0x8000CC88u: goto label_8000CC88;
    case 0x8000CC8Cu: goto label_8000CC8C;
    case 0x8000CC90u: goto label_8000CC90;
    case 0x8000CC94u: goto label_8000CC94;
    case 0x8000CC98u: goto label_8000CC98;
    case 0x8000CC9Cu: goto label_8000CC9C;
    case 0x8000CCA0u: goto label_8000CCA0;
    case 0x8000CCA4u: goto label_8000CCA4;
    case 0x8000CCA8u: goto label_8000CCA8;
    case 0x8000CCACu: goto label_8000CCAC;
    case 0x8000CCB0u: goto label_8000CCB0;
    case 0x8000CCB4u: goto label_8000CCB4;
    case 0x8000CCB8u: goto label_8000CCB8;
    case 0x8000CCBCu: goto label_8000CCBC;
    case 0x8000CCC0u: goto label_8000CCC0;
    case 0x8000CCC4u: goto label_8000CCC4;
    case 0x8000CCC8u: goto label_8000CCC8;
    case 0x8000CCCCu: goto label_8000CCCC;
    case 0x8000CCD0u: goto label_8000CCD0;
    case 0x8000CCD4u: goto label_8000CCD4;
    case 0x8000CCD8u: goto label_8000CCD8;
    case 0x8000CCDCu: goto label_8000CCDC;
    case 0x8000CCE0u: goto label_8000CCE0;
    case 0x8000CCE4u: goto label_8000CCE4;
    case 0x8000CCE8u: goto label_8000CCE8;
    case 0x8000CCECu: goto label_8000CCEC;
    case 0x8000CCF0u: goto label_8000CCF0;
    case 0x8000CCF4u: goto label_8000CCF4;
    case 0x8000CCF8u: goto label_8000CCF8;
    case 0x8000CCFCu: goto label_8000CCFC;
    case 0x8000CD00u: goto label_8000CD00;
    case 0x8000CD04u: goto label_8000CD04;
    case 0x8000CD08u: goto label_8000CD08;
    case 0x8000CD0Cu: goto label_8000CD0C;
    case 0x8000CD10u: goto label_8000CD10;
    case 0x8000CD14u: goto label_8000CD14;
    case 0x8000CD18u: goto label_8000CD18;
    case 0x8000CD1Cu: goto label_8000CD1C;
    case 0x8000CD20u: goto label_8000CD20;
    case 0x8000CD24u: goto label_8000CD24;
    case 0x8000CD28u: goto label_8000CD28;
    case 0x8000CD2Cu: goto label_8000CD2C;
    case 0x8000CD30u: goto label_8000CD30;
    case 0x8000CD34u: goto label_8000CD34;
    case 0x8000CD38u: goto label_8000CD38;
    case 0x8000CD3Cu: goto label_8000CD3C;
    case 0x8000CD40u: goto label_8000CD40;
    case 0x8000CD44u: goto label_8000CD44;
    case 0x8000CD48u: goto label_8000CD48;
    case 0x8000CD4Cu: goto label_8000CD4C;
    case 0x8000CD50u: goto label_8000CD50;
    case 0x8000CD54u: goto label_8000CD54;
    case 0x8000CD58u: goto label_8000CD58;
    case 0x8000CD5Cu: goto label_8000CD5C;
    case 0x8000CD60u: goto label_8000CD60;
    case 0x8000CD64u: goto label_8000CD64;
    case 0x8000CD68u: goto label_8000CD68;
    case 0x8000CD6Cu: goto label_8000CD6C;
    case 0x8000CD70u: goto label_8000CD70;
    case 0x8000CD74u: goto label_8000CD74;
    case 0x8000CD78u: goto label_8000CD78;
    case 0x8000CD7Cu: goto label_8000CD7C;
    case 0x8000CD80u: goto label_8000CD80;
    case 0x8000CD84u: goto label_8000CD84;
    case 0x8000CD88u: goto label_8000CD88;
    case 0x8000CD8Cu: goto label_8000CD8C;
    case 0x8000CD90u: goto label_8000CD90;
    case 0x8000CD94u: goto label_8000CD94;
    case 0x8000CD98u: goto label_8000CD98;
    case 0x8000CD9Cu: goto label_8000CD9C;
    case 0x8000CDA0u: goto label_8000CDA0;
    case 0x8000CDA4u: goto label_8000CDA4;
    case 0x8000CDA8u: goto label_8000CDA8;
    case 0x8000CDACu: goto label_8000CDAC;
    case 0x8000CDB0u: goto label_8000CDB0;
    case 0x8000CDB4u: goto label_8000CDB4;
    case 0x8000CDB8u: goto label_8000CDB8;
    case 0x8000CDBCu: goto label_8000CDBC;
    case 0x8000CDC0u: goto label_8000CDC0;
    case 0x8000CDC4u: goto label_8000CDC4;
    case 0x8000CDC8u: goto label_8000CDC8;
    case 0x8000CDCCu: goto label_8000CDCC;
    case 0x8000CDD0u: goto label_8000CDD0;
    case 0x8000CDD4u: goto label_8000CDD4;
    case 0x8000CDD8u: goto label_8000CDD8;
    case 0x8000CDDCu: goto label_8000CDDC;
    case 0x8000CDE0u: goto label_8000CDE0;
    case 0x8000CDE4u: goto label_8000CDE4;
    case 0x8000CDE8u: goto label_8000CDE8;
    case 0x8000CDECu: goto label_8000CDEC;
    case 0x8000CDF0u: goto label_8000CDF0;
    case 0x8000CDF4u: goto label_8000CDF4;
    case 0x8000CDF8u: goto label_8000CDF8;
    case 0x8000CDFCu: goto label_8000CDFC;
    case 0x8000CE00u: goto label_8000CE00;
    case 0x8000CE04u: goto label_8000CE04;
    case 0x8000CE08u: goto label_8000CE08;
    case 0x8000CE0Cu: goto label_8000CE0C;
    case 0x8000CE10u: goto label_8000CE10;
    case 0x8000CE14u: goto label_8000CE14;
    case 0x8000CE18u: goto label_8000CE18;
    case 0x8000CE1Cu: goto label_8000CE1C;
    case 0x8000CE20u: goto label_8000CE20;
    case 0x8000CE24u: goto label_8000CE24;
    case 0x8000CE28u: goto label_8000CE28;
    case 0x8000CE2Cu: goto label_8000CE2C;
    case 0x8000CE30u: goto label_8000CE30;
    case 0x8000CE34u: goto label_8000CE34;
    case 0x8000CE38u: goto label_8000CE38;
    case 0x8000CE3Cu: goto label_8000CE3C;
    case 0x8000CE40u: goto label_8000CE40;
    case 0x8000CE44u: goto label_8000CE44;
    case 0x8000CE48u: goto label_8000CE48;
    case 0x8000CE4Cu: goto label_8000CE4C;
    case 0x8000CE50u: goto label_8000CE50;
    case 0x8000CE54u: goto label_8000CE54;
    case 0x8000CE58u: goto label_8000CE58;
    case 0x8000CE5Cu: goto label_8000CE5C;
    case 0x8000CE60u: goto label_8000CE60;
    case 0x8000CE64u: goto label_8000CE64;
    case 0x8000CE68u: goto label_8000CE68;
    case 0x8000CE6Cu: goto label_8000CE6C;
    case 0x8000CE70u: goto label_8000CE70;
    case 0x8000CE74u: goto label_8000CE74;
    case 0x8000CE78u: goto label_8000CE78;
    case 0x8000CE7Cu: goto label_8000CE7C;
    case 0x8000CE80u: goto label_8000CE80;
    case 0x8000CE84u: goto label_8000CE84;
    case 0x8000CE88u: goto label_8000CE88;
    case 0x8000CE8Cu: goto label_8000CE8C;
    case 0x8000CE90u: goto label_8000CE90;
    case 0x8000CE94u: goto label_8000CE94;
    case 0x8000CE98u: goto label_8000CE98;
    case 0x8000CE9Cu: goto label_8000CE9C;
    case 0x8000CEA0u: goto label_8000CEA0;
    case 0x8000CEA4u: goto label_8000CEA4;
    case 0x8000CEA8u: goto label_8000CEA8;
    case 0x8000CEACu: goto label_8000CEAC;
    case 0x8000CEB0u: goto label_8000CEB0;
    case 0x8000CEB4u: goto label_8000CEB4;
    case 0x8000CEB8u: goto label_8000CEB8;
    case 0x8000CEBCu: goto label_8000CEBC;
    case 0x8000CEC0u: goto label_8000CEC0;
    case 0x8000CEC4u: goto label_8000CEC4;
    case 0x8000CEC8u: goto label_8000CEC8;
    case 0x8000CECCu: goto label_8000CECC;
    case 0x8000CED0u: goto label_8000CED0;
    case 0x8000CED4u: goto label_8000CED4;
    case 0x8000CED8u: goto label_8000CED8;
    case 0x8000CEDCu: goto label_8000CEDC;
    case 0x8000CEE0u: goto label_8000CEE0;
    case 0x8000CEE4u: goto label_8000CEE4;
    case 0x8000CEE8u: goto label_8000CEE8;
    case 0x8000CEECu: goto label_8000CEEC;
    case 0x8000CEF0u: goto label_8000CEF0;
    case 0x8000CEF4u: goto label_8000CEF4;
    case 0x8000CEF8u: goto label_8000CEF8;
    case 0x8000CEFCu: goto label_8000CEFC;
    case 0x8000CF00u: goto label_8000CF00;
    case 0x8000CF04u: goto label_8000CF04;
    case 0x8000CF08u: goto label_8000CF08;
    case 0x8000CF0Cu: goto label_8000CF0C;
    case 0x8000CF10u: goto label_8000CF10;
    case 0x8000CF14u: goto label_8000CF14;
    case 0x8000CF18u: goto label_8000CF18;
    case 0x8000CF1Cu: goto label_8000CF1C;
    case 0x8000CF20u: goto label_8000CF20;
    case 0x8000CF24u: goto label_8000CF24;
    case 0x8000CF28u: goto label_8000CF28;
    case 0x8000CF2Cu: goto label_8000CF2C;
    case 0x8000CF30u: goto label_8000CF30;
    case 0x8000CF34u: goto label_8000CF34;
    case 0x8000CF38u: goto label_8000CF38;
    case 0x8000CF3Cu: goto label_8000CF3C;
    case 0x8000CF40u: goto label_8000CF40;
    case 0x8000CF44u: goto label_8000CF44;
    case 0x8000CF48u: goto label_8000CF48;
    case 0x8000CF4Cu: goto label_8000CF4C;
    case 0x8000CF50u: goto label_8000CF50;
    case 0x8000CF54u: goto label_8000CF54;
    case 0x8000CF58u: goto label_8000CF58;
    case 0x8000CF5Cu: goto label_8000CF5C;
    case 0x8000CF60u: goto label_8000CF60;
    case 0x8000CF64u: goto label_8000CF64;
    case 0x8000CF68u: goto label_8000CF68;
    case 0x8000CF6Cu: goto label_8000CF6C;
    case 0x8000CF70u: goto label_8000CF70;
    case 0x8000CF74u: goto label_8000CF74;
    case 0x8000CF78u: goto label_8000CF78;
    case 0x8000CF7Cu: goto label_8000CF7C;
    case 0x8000CF80u: goto label_8000CF80;
    case 0x8000CF84u: goto label_8000CF84;
    case 0x8000CF88u: goto label_8000CF88;
    case 0x8000CF8Cu: goto label_8000CF8C;
    case 0x8000CF90u: goto label_8000CF90;
    case 0x8000CF94u: goto label_8000CF94;
    case 0x8000CF98u: goto label_8000CF98;
    case 0x8000CF9Cu: goto label_8000CF9C;
    case 0x8000CFA0u: goto label_8000CFA0;
    case 0x8000CFA4u: goto label_8000CFA4;
    case 0x8000CFA8u: goto label_8000CFA8;
    case 0x8000CFACu: goto label_8000CFAC;
    case 0x8000CFB0u: goto label_8000CFB0;
    case 0x8000CFB4u: goto label_8000CFB4;
    case 0x8000CFB8u: goto label_8000CFB8;
    case 0x8000CFBCu: goto label_8000CFBC;
    case 0x8000CFC0u: goto label_8000CFC0;
    case 0x8000CFC4u: goto label_8000CFC4;
    case 0x8000CFC8u: goto label_8000CFC8;
    case 0x8000CFCCu: goto label_8000CFCC;
    case 0x8000CFD0u: goto label_8000CFD0;
    case 0x8000CFD4u: goto label_8000CFD4;
    case 0x8000CFD8u: goto label_8000CFD8;
    case 0x8000CFDCu: goto label_8000CFDC;
    case 0x8000CFE0u: goto label_8000CFE0;
    case 0x8000CFE4u: goto label_8000CFE4;
    case 0x8000CFE8u: goto label_8000CFE8;
    case 0x8000CFECu: goto label_8000CFEC;
    case 0x8000CFF0u: goto label_8000CFF0;
    case 0x8000CFF4u: goto label_8000CFF4;
    case 0x8000CFF8u: goto label_8000CFF8;
    case 0x8000CFFCu: goto label_8000CFFC;
    case 0x8000D000u: goto label_8000D000;
    case 0x8000D004u: goto label_8000D004;
    case 0x8000D008u: goto label_8000D008;
    case 0x8000D00Cu: goto label_8000D00C;
    case 0x8000D010u: goto label_8000D010;
    case 0x8000D014u: goto label_8000D014;
    case 0x8000D018u: goto label_8000D018;
    case 0x8000D01Cu: goto label_8000D01C;
    case 0x8000D020u: goto label_8000D020;
    case 0x8000D024u: goto label_8000D024;
    case 0x8000D028u: goto label_8000D028;
    case 0x8000D02Cu: goto label_8000D02C;
    case 0x8000D030u: goto label_8000D030;
    case 0x8000D034u: goto label_8000D034;
    case 0x8000D038u: goto label_8000D038;
    case 0x8000D03Cu: goto label_8000D03C;
    case 0x8000D040u: goto label_8000D040;
    case 0x8000D044u: goto label_8000D044;
    case 0x8000D048u: goto label_8000D048;
    case 0x8000D04Cu: goto label_8000D04C;
    case 0x8000D050u: goto label_8000D050;
    case 0x8000D054u: goto label_8000D054;
    case 0x8000D058u: goto label_8000D058;
    case 0x8000D05Cu: goto label_8000D05C;
    case 0x8000D060u: goto label_8000D060;
    case 0x8000D064u: goto label_8000D064;
    case 0x8000D068u: goto label_8000D068;
    case 0x8000D06Cu: goto label_8000D06C;
    case 0x8000D070u: goto label_8000D070;
    case 0x8000D074u: goto label_8000D074;
    case 0x8000D078u: goto label_8000D078;
    case 0x8000D07Cu: goto label_8000D07C;
    case 0x8000D080u: goto label_8000D080;
    case 0x8000D084u: goto label_8000D084;
    case 0x8000D088u: goto label_8000D088;
    case 0x8000D08Cu: goto label_8000D08C;
    case 0x8000D090u: goto label_8000D090;
    case 0x8000D094u: goto label_8000D094;
    case 0x8000D098u: goto label_8000D098;
    case 0x8000D09Cu: goto label_8000D09C;
    case 0x8000D0A0u: goto label_8000D0A0;
    case 0x8000D0A4u: goto label_8000D0A4;
    case 0x8000D0A8u: goto label_8000D0A8;
    case 0x8000D0ACu: goto label_8000D0AC;
    case 0x8000D0B0u: goto label_8000D0B0;
    case 0x8000D0B4u: goto label_8000D0B4;
    case 0x8000D0B8u: goto label_8000D0B8;
    case 0x8000D0BCu: goto label_8000D0BC;
    case 0x8000D0C0u: goto label_8000D0C0;
    case 0x8000D0C4u: goto label_8000D0C4;
    case 0x8000D0C8u: goto label_8000D0C8;
    case 0x8000D0CCu: goto label_8000D0CC;
    case 0x8000D0D0u: goto label_8000D0D0;
    case 0x8000D0D4u: goto label_8000D0D4;
    case 0x8000D0D8u: goto label_8000D0D8;
    case 0x8000D0DCu: goto label_8000D0DC;
    case 0x8000D0E0u: goto label_8000D0E0;
    case 0x8000D0E4u: goto label_8000D0E4;
    case 0x8000D0E8u: goto label_8000D0E8;
    case 0x8000D0ECu: goto label_8000D0EC;
    case 0x8000D0F0u: goto label_8000D0F0;
    case 0x8000D0F4u: goto label_8000D0F4;
    case 0x8000D0F8u: goto label_8000D0F8;
    case 0x8000D0FCu: goto label_8000D0FC;
    case 0x8000D100u: goto label_8000D100;
    case 0x8000D104u: goto label_8000D104;
    case 0x8000D108u: goto label_8000D108;
    case 0x8000D10Cu: goto label_8000D10C;
    case 0x8000D110u: goto label_8000D110;
    case 0x8000D114u: goto label_8000D114;
    case 0x8000D118u: goto label_8000D118;
    case 0x8000D11Cu: goto label_8000D11C;
    case 0x8000D120u: goto label_8000D120;
    case 0x8000D124u: goto label_8000D124;
    case 0x8000D128u: goto label_8000D128;
    case 0x8000D12Cu: goto label_8000D12C;
    case 0x8000D130u: goto label_8000D130;
    case 0x8000D134u: goto label_8000D134;
    case 0x8000D138u: goto label_8000D138;
    case 0x8000D13Cu: goto label_8000D13C;
    case 0x8000D140u: goto label_8000D140;
    case 0x8000D144u: goto label_8000D144;
    case 0x8000D148u: goto label_8000D148;
    case 0x8000D14Cu: goto label_8000D14C;
    case 0x8000D150u: goto label_8000D150;
    case 0x8000D154u: goto label_8000D154;
    case 0x8000D158u: goto label_8000D158;
    case 0x8000D15Cu: goto label_8000D15C;
    case 0x8000D160u: goto label_8000D160;
    case 0x8000D164u: goto label_8000D164;
    case 0x8000D168u: goto label_8000D168;
    case 0x8000D16Cu: goto label_8000D16C;
    case 0x8000D170u: goto label_8000D170;
    case 0x8000D174u: goto label_8000D174;
    case 0x8000D178u: goto label_8000D178;
    case 0x8000D17Cu: goto label_8000D17C;
    case 0x8000D180u: goto label_8000D180;
    case 0x8000D184u: goto label_8000D184;
    case 0x8000D188u: goto label_8000D188;
    case 0x8000D18Cu: goto label_8000D18C;
    case 0x8000D190u: goto label_8000D190;
    case 0x8000D194u: goto label_8000D194;
    case 0x8000D198u: goto label_8000D198;
    case 0x8000D19Cu: goto label_8000D19C;
    case 0x8000D1A0u: goto label_8000D1A0;
    case 0x8000D1A4u: goto label_8000D1A4;
    case 0x8000D1A8u: goto label_8000D1A8;
    case 0x8000D1ACu: goto label_8000D1AC;
    case 0x8000D1B0u: goto label_8000D1B0;
    case 0x8000D1B4u: goto label_8000D1B4;
    case 0x8000D1B8u: goto label_8000D1B8;
    case 0x8000D1BCu: goto label_8000D1BC;
    case 0x8000D1C0u: goto label_8000D1C0;
    case 0x8000D1C4u: goto label_8000D1C4;
    case 0x8000D1C8u: goto label_8000D1C8;
    case 0x8000D1CCu: goto label_8000D1CC;
    case 0x8000D1D0u: goto label_8000D1D0;
    case 0x8000D1D4u: goto label_8000D1D4;
    case 0x8000D1D8u: goto label_8000D1D8;
    case 0x8000D1DCu: goto label_8000D1DC;
    case 0x8000D1E0u: goto label_8000D1E0;
    case 0x8000D1E4u: goto label_8000D1E4;
    case 0x8000D1E8u: goto label_8000D1E8;
    case 0x8000D1ECu: goto label_8000D1EC;
    case 0x8000D1F0u: goto label_8000D1F0;
    case 0x8000D1F4u: goto label_8000D1F4;
    case 0x8000D1F8u: goto label_8000D1F8;
    case 0x8000D1FCu: goto label_8000D1FC;
    case 0x8000D200u: goto label_8000D200;
    case 0x8000D204u: goto label_8000D204;
    case 0x8000D208u: goto label_8000D208;
    case 0x8000D20Cu: goto label_8000D20C;
    case 0x8000D210u: goto label_8000D210;
    case 0x8000D214u: goto label_8000D214;
    case 0x8000D218u: goto label_8000D218;
    case 0x8000D21Cu: goto label_8000D21C;
    case 0x8000D220u: goto label_8000D220;
    case 0x8000D224u: goto label_8000D224;
    case 0x8000D228u: goto label_8000D228;
    case 0x8000D22Cu: goto label_8000D22C;
    case 0x8000D230u: goto label_8000D230;
    case 0x8000D234u: goto label_8000D234;
    case 0x8000D238u: goto label_8000D238;
    case 0x8000D23Cu: goto label_8000D23C;
    case 0x8000D240u: goto label_8000D240;
    case 0x8000D244u: goto label_8000D244;
    case 0x8000D248u: goto label_8000D248;
    case 0x8000D24Cu: goto label_8000D24C;
    case 0x8000D250u: goto label_8000D250;
    case 0x8000D254u: goto label_8000D254;
    case 0x8000D258u: goto label_8000D258;
    case 0x8000D25Cu: goto label_8000D25C;
    case 0x8000D260u: goto label_8000D260;
    case 0x8000D264u: goto label_8000D264;
    case 0x8000D268u: goto label_8000D268;
    case 0x8000D26Cu: goto label_8000D26C;
    case 0x8000D270u: goto label_8000D270;
    case 0x8000D274u: goto label_8000D274;
    case 0x8000D278u: goto label_8000D278;
    case 0x8000D27Cu: goto label_8000D27C;
    case 0x8000D280u: goto label_8000D280;
    case 0x8000D284u: goto label_8000D284;
    case 0x8000D288u: goto label_8000D288;
    case 0x8000D28Cu: goto label_8000D28C;
    case 0x8000D290u: goto label_8000D290;
    case 0x8000D294u: goto label_8000D294;
    case 0x8000D298u: goto label_8000D298;
    case 0x8000D29Cu: goto label_8000D29C;
    case 0x8000D2A0u: goto label_8000D2A0;
    case 0x8000D2A4u: goto label_8000D2A4;
    case 0x8000D2A8u: goto label_8000D2A8;
    case 0x8000D2ACu: goto label_8000D2AC;
    case 0x8000D2B0u: goto label_8000D2B0;
    case 0x8000D2B4u: goto label_8000D2B4;
    case 0x8000D2B8u: goto label_8000D2B8;
    case 0x8000D2BCu: goto label_8000D2BC;
    case 0x8000D2C0u: goto label_8000D2C0;
    case 0x8000D2C4u: goto label_8000D2C4;
    case 0x8000D2C8u: goto label_8000D2C8;
    case 0x8000D2CCu: goto label_8000D2CC;
    case 0x8000D2D0u: goto label_8000D2D0;
    case 0x8000D2D4u: goto label_8000D2D4;
    case 0x8000D2D8u: goto label_8000D2D8;
    case 0x8000D2DCu: goto label_8000D2DC;
    case 0x8000D2E0u: goto label_8000D2E0;
    case 0x8000D2E4u: goto label_8000D2E4;
    case 0x8000D2E8u: goto label_8000D2E8;
    case 0x8000D2ECu: goto label_8000D2EC;
    case 0x8000D2F0u: goto label_8000D2F0;
    case 0x8000D2F4u: goto label_8000D2F4;
    case 0x8000D2F8u: goto label_8000D2F8;
    case 0x8000D2FCu: goto label_8000D2FC;
    case 0x8000D300u: goto label_8000D300;
    case 0x8000D304u: goto label_8000D304;
    case 0x8000D308u: goto label_8000D308;
    case 0x8000D30Cu: goto label_8000D30C;
    case 0x8000D310u: goto label_8000D310;
    case 0x8000D314u: goto label_8000D314;
    case 0x8000D318u: goto label_8000D318;
    case 0x8000D31Cu: goto label_8000D31C;
    case 0x8000D320u: goto label_8000D320;
    case 0x8000D324u: goto label_8000D324;
    case 0x8000D328u: goto label_8000D328;
    case 0x8000D32Cu: goto label_8000D32C;
    case 0x8000D330u: goto label_8000D330;
    case 0x8000D334u: goto label_8000D334;
    case 0x8000D338u: goto label_8000D338;
    case 0x8000D33Cu: goto label_8000D33C;
    case 0x8000D340u: goto label_8000D340;
    case 0x8000D344u: goto label_8000D344;
    case 0x8000D348u: goto label_8000D348;
    case 0x8000D34Cu: goto label_8000D34C;
    case 0x8000D350u: goto label_8000D350;
    case 0x8000D354u: goto label_8000D354;
    case 0x8000D358u: goto label_8000D358;
    case 0x8000D35Cu: goto label_8000D35C;
    case 0x8000D360u: goto label_8000D360;
    case 0x8000D364u: goto label_8000D364;
    case 0x8000D368u: goto label_8000D368;
    case 0x8000D36Cu: goto label_8000D36C;
    case 0x8000D370u: goto label_8000D370;
    case 0x8000D374u: goto label_8000D374;
    case 0x8000D378u: goto label_8000D378;
    case 0x8000D37Cu: goto label_8000D37C;
    case 0x8000D380u: goto label_8000D380;
    case 0x8000D384u: goto label_8000D384;
    case 0x8000D388u: goto label_8000D388;
    case 0x8000D38Cu: goto label_8000D38C;
    case 0x8000D390u: goto label_8000D390;
    case 0x8000D394u: goto label_8000D394;
    case 0x8000D398u: goto label_8000D398;
    case 0x8000D39Cu: goto label_8000D39C;
    case 0x8000D3A0u: goto label_8000D3A0;
    case 0x8000D3A4u: goto label_8000D3A4;
    case 0x8000D3A8u: goto label_8000D3A8;
    case 0x8000D3ACu: goto label_8000D3AC;
    case 0x8000D3B0u: goto label_8000D3B0;
    case 0x8000D3B4u: goto label_8000D3B4;
    case 0x8000D3B8u: goto label_8000D3B8;
    case 0x8000D3BCu: goto label_8000D3BC;
    case 0x8000D3C0u: goto label_8000D3C0;
    case 0x8000D3C4u: goto label_8000D3C4;
    case 0x8000D3C8u: goto label_8000D3C8;
    case 0x8000D3CCu: goto label_8000D3CC;
    case 0x8000D3D0u: goto label_8000D3D0;
    case 0x8000D3D4u: goto label_8000D3D4;
    case 0x8000D3D8u: goto label_8000D3D8;
    case 0x8000D3DCu: goto label_8000D3DC;
    case 0x8000D3E0u: goto label_8000D3E0;
    case 0x8000D3E4u: goto label_8000D3E4;
    case 0x8000D3E8u: goto label_8000D3E8;
    case 0x8000D3ECu: goto label_8000D3EC;
    case 0x8000D3F0u: goto label_8000D3F0;
    case 0x8000D3F4u: goto label_8000D3F4;
    case 0x8000D3F8u: goto label_8000D3F8;
    case 0x8000D3FCu: goto label_8000D3FC;
    case 0x8000D400u: goto label_8000D400;
    case 0x8000D404u: goto label_8000D404;
    case 0x8000D408u: goto label_8000D408;
    case 0x8000D40Cu: goto label_8000D40C;
    case 0x8000D410u: goto label_8000D410;
    case 0x8000D414u: goto label_8000D414;
    case 0x8000D418u: goto label_8000D418;
    case 0x8000D41Cu: goto label_8000D41C;
    case 0x8000D420u: goto label_8000D420;
    case 0x8000D424u: goto label_8000D424;
    case 0x8000D428u: goto label_8000D428;
    case 0x8000D42Cu: goto label_8000D42C;
    case 0x8000D430u: goto label_8000D430;
    case 0x8000D434u: goto label_8000D434;
    case 0x8000D438u: goto label_8000D438;
    case 0x8000D43Cu: goto label_8000D43C;
    case 0x8000D440u: goto label_8000D440;
    case 0x8000D444u: goto label_8000D444;
    case 0x8000D448u: goto label_8000D448;
    case 0x8000D44Cu: goto label_8000D44C;
    case 0x8000D450u: goto label_8000D450;
    case 0x8000D454u: goto label_8000D454;
    case 0x8000D458u: goto label_8000D458;
    case 0x8000D45Cu: goto label_8000D45C;
    case 0x8000D460u: goto label_8000D460;
    case 0x8000D464u: goto label_8000D464;
    case 0x8000D468u: goto label_8000D468;
    case 0x8000D46Cu: goto label_8000D46C;
    case 0x8000D470u: goto label_8000D470;
    case 0x8000D474u: goto label_8000D474;
    case 0x8000D478u: goto label_8000D478;
    case 0x8000D47Cu: goto label_8000D47C;
    case 0x8000D480u: goto label_8000D480;
    case 0x8000D484u: goto label_8000D484;
    case 0x8000D488u: goto label_8000D488;
    case 0x8000D48Cu: goto label_8000D48C;
    case 0x8000D490u: goto label_8000D490;
    case 0x8000D494u: goto label_8000D494;
    case 0x8000D498u: goto label_8000D498;
    case 0x8000D49Cu: goto label_8000D49C;
    case 0x8000D4A0u: goto label_8000D4A0;
    case 0x8000D4A4u: goto label_8000D4A4;
    case 0x8000D4A8u: goto label_8000D4A8;
    case 0x8000D4ACu: goto label_8000D4AC;
    case 0x8000D4B0u: goto label_8000D4B0;
    case 0x8000D4B4u: goto label_8000D4B4;
    case 0x8000D4B8u: goto label_8000D4B8;
    case 0x8000D4BCu: goto label_8000D4BC;
    case 0x8000D4C0u: goto label_8000D4C0;
    case 0x8000D4C4u: goto label_8000D4C4;
    case 0x8000D4C8u: goto label_8000D4C8;
    case 0x8000D4CCu: goto label_8000D4CC;
    case 0x8000D4D0u: goto label_8000D4D0;
    case 0x8000D4D4u: goto label_8000D4D4;
    case 0x8000D4D8u: goto label_8000D4D8;
    case 0x8000D4DCu: goto label_8000D4DC;
    case 0x8000D4E0u: goto label_8000D4E0;
    case 0x8000D4E4u: goto label_8000D4E4;
    case 0x8000D4E8u: goto label_8000D4E8;
    case 0x8000D4ECu: goto label_8000D4EC;
    case 0x8000D4F0u: goto label_8000D4F0;
    case 0x8000D4F4u: goto label_8000D4F4;
    case 0x8000D4F8u: goto label_8000D4F8;
    case 0x8000D4FCu: goto label_8000D4FC;
    case 0x8000D500u: goto label_8000D500;
    case 0x8000D504u: goto label_8000D504;
    case 0x8000D508u: goto label_8000D508;
    case 0x8000D50Cu: goto label_8000D50C;
    case 0x8000D510u: goto label_8000D510;
    case 0x8000D514u: goto label_8000D514;
    case 0x8000D518u: goto label_8000D518;
    case 0x8000D51Cu: goto label_8000D51C;
    case 0x8000D520u: goto label_8000D520;
    case 0x8000D524u: goto label_8000D524;
    case 0x8000D528u: goto label_8000D528;
    case 0x8000D52Cu: goto label_8000D52C;
    case 0x8000D530u: goto label_8000D530;
    case 0x8000D534u: goto label_8000D534;
    case 0x8000D538u: goto label_8000D538;
    case 0x8000D53Cu: goto label_8000D53C;
    case 0x8000D540u: goto label_8000D540;
    case 0x8000D544u: goto label_8000D544;
    case 0x8000D548u: goto label_8000D548;
    case 0x8000D54Cu: goto label_8000D54C;
    case 0x8000D550u: goto label_8000D550;
    case 0x8000D554u: goto label_8000D554;
    case 0x8000D558u: goto label_8000D558;
    case 0x8000D55Cu: goto label_8000D55C;
    case 0x8000D560u: goto label_8000D560;
    case 0x8000D564u: goto label_8000D564;
    case 0x8000D568u: goto label_8000D568;
    case 0x8000D56Cu: goto label_8000D56C;
    case 0x8000D570u: goto label_8000D570;
    case 0x8000D574u: goto label_8000D574;
    case 0x8000D578u: goto label_8000D578;
    case 0x8000D57Cu: goto label_8000D57C;
    case 0x8000D580u: goto label_8000D580;
    case 0x8000D584u: goto label_8000D584;
    case 0x8000D588u: goto label_8000D588;
    case 0x8000D58Cu: goto label_8000D58C;
    case 0x8000D590u: goto label_8000D590;
    case 0x8000D594u: goto label_8000D594;
    case 0x8000D598u: goto label_8000D598;
    case 0x8000D59Cu: goto label_8000D59C;
    case 0x8000D5A0u: goto label_8000D5A0;
    case 0x8000D5A4u: goto label_8000D5A4;
    case 0x8000D5A8u: goto label_8000D5A8;
    case 0x8000D5ACu: goto label_8000D5AC;
    case 0x8000D5B0u: goto label_8000D5B0;
    case 0x8000D5B4u: goto label_8000D5B4;
    case 0x8000D5B8u: goto label_8000D5B8;
    case 0x8000D5BCu: goto label_8000D5BC;
    case 0x8000D5C0u: goto label_8000D5C0;
    case 0x8000D5C4u: goto label_8000D5C4;
    case 0x8000D5C8u: goto label_8000D5C8;
    case 0x8000D5CCu: goto label_8000D5CC;
    case 0x8000D5D0u: goto label_8000D5D0;
    case 0x8000D5D4u: goto label_8000D5D4;
    case 0x8000D5D8u: goto label_8000D5D8;
    case 0x8000D5DCu: goto label_8000D5DC;
    default: return;
    }
label_800095E0:
    ctx->pc = 0x800095E0u;
    ctx->downcount -= 4;
    // 800095E0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_800095E4:
    ctx->pc = 0x800095E4u;
    // 800095E4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800095E8:
    ctx->pc = 0x800095E8u;
    // 800095E8: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_800095EC:
    ctx->pc = 0x800095ECu;
    // 800095EC: bl      0x80007EC8
    {
            ctx->lr = 0x800095F0u;
            ctx->pc = 0x80007EC8u;
            return;
    }

label_800095F0:
    ctx->pc = 0x800095F0u;
    ctx->downcount -= 2;
    // 800095F0: or.   r31, r3, r3
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

label_800095F4:
    ctx->pc = 0x800095F4u;
    // 800095F4: bc    4, 2, 0x8000960C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000960C;
        }
    }

label_800095F8:
    ctx->pc = 0x800095F8u;
    ctx->downcount -= 4;
    // 800095F8: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800095FC:
    ctx->pc = 0x800095FCu;
    // 800095FC: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_80009600:
    ctx->pc = 0x80009600u;
    // 80009600: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80009604:
    ctx->pc = 0x80009604u;
    // 80009604: bl      0x80007B34
    {
            ctx->lr = 0x80009608u;
            ctx->pc = 0x80007B34u;
            return;
    }

label_80009608:
    ctx->pc = 0x80009608u;
    ctx->downcount -= 1;
    // 80009608: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000960C:
    ctx->pc = 0x8000960Cu;
    ctx->downcount -= 2;
    // 8000960C: cmpwi   r31, 0
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

label_80009610:
    ctx->pc = 0x80009610u;
    // 80009610: bc    4, 2, 0x80009660
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80009660;
        }
    }

label_80009614:
    ctx->pc = 0x80009614u;
    ctx->downcount -= 8;
    // 80009614: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80009618:
    ctx->pc = 0x80009618u;
    // 80009618: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_8000961C:
    ctx->pc = 0x8000961Cu;
    // 8000961C: stw     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80009620:
    ctx->pc = 0x80009620u;
    // 80009620: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_80009624:
    ctx->pc = 0x80009624u;
    // 80009624: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_80009628:
    ctx->pc = 0x80009628u;
    // 80009628: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_8000962C:
    ctx->pc = 0x8000962Cu;
    // 8000962C: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80009630:
    ctx->pc = 0x80009630u;
    // 80009630: bl      0x800097A4
    {
            ctx->lr = 0x80009634u;
            goto label_800097A4;
    }

label_80009634:
    ctx->pc = 0x80009634u;
    ctx->downcount -= 2;
    // 80009634: or.   r31, r3, r3
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

label_80009638:
    ctx->pc = 0x80009638u;
    // 80009638: bc    4, 2, 0x80009648
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80009648;
        }
    }

label_8000963C:
    ctx->pc = 0x8000963Cu;
    ctx->downcount -= 2;
    // 8000963C: lwz     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80009640:
    ctx->pc = 0x80009640u;
    // 80009640: bl      0x80007E9C
    {
            ctx->lr = 0x80009644u;
            ctx->pc = 0x80007E9Cu;
            return;
    }

label_80009644:
    ctx->pc = 0x80009644u;
    ctx->downcount -= 1;
    // 80009644: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80009648:
    ctx->pc = 0x80009648u;
    ctx->downcount -= 2;
    // 80009648: cmpwi   r31, 0
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

label_8000964C:
    ctx->pc = 0x8000964Cu;
    // 8000964C: bc    4, 2, 0x80009658
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80009658;
        }
    }

label_80009650:
    ctx->pc = 0x80009650u;
    ctx->downcount -= 2;
    // 80009650: lwz     r0, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80009654:
    ctx->pc = 0x80009654u;
    // 80009654: stw     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80009658:
    ctx->pc = 0x80009658u;
    ctx->downcount -= 2;
    // 80009658: lwz     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000965C:
    ctx->pc = 0x8000965Cu;
    // 8000965C: bl      0x80007E38
    {
            ctx->lr = 0x80009660u;
            ctx->pc = 0x80007E38u;
            return;
    }

label_80009660:
    ctx->pc = 0x80009660u;
    ctx->downcount -= 2;
    // 80009660: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80009664:
    ctx->pc = 0x80009664u;
    // 80009664: bl      0x80007E38
    {
            ctx->lr = 0x80009668u;
            ctx->pc = 0x80007E38u;
            return;
    }

label_80009668:
    ctx->pc = 0x80009668u;
    ctx->downcount -= 9;
    // 80009668: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000966C:
    ctx->pc = 0x8000966Cu;
    // 8000966C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80009670:
    ctx->pc = 0x80009670u;
    // 80009670: lwz     r31, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80009674:
    ctx->pc = 0x80009674u;
    // 80009674: lwz     r30, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80009678:
    ctx->pc = 0x80009678u;
    // 80009678: lwz     r29, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8000967C:
    ctx->pc = 0x8000967Cu;
    // 8000967C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80009680:
    ctx->pc = 0x80009680u;
    // 80009680: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_80009684:
    ctx->pc = 0x80009684u;
    // 80009684: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_80009688:
    ctx->pc = 0x80009688u;
    ctx->downcount -= 22;
    // 80009688: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000968C:
    ctx->pc = 0x8000968Cu;
    // 8000968C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80009690:
    ctx->pc = 0x80009690u;
    // 80009690: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80009694:
    ctx->pc = 0x80009694u;
    // 80009694: stmw     r27, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80009698:
    ctx->pc = 0x80009698u;
    // 80009698: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000969C:
    ctx->pc = 0x8000969Cu;
    // 8000969C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_800096A0:
    ctx->pc = 0x800096A0u;
    // 800096A0: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_800096A4:
    ctx->pc = 0x800096A4u;
    // 800096A4: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_800096A8:
    ctx->pc = 0x800096A8u;
    // 800096A8: addi    r3, r1, 20
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(20);

label_800096AC:
    ctx->pc = 0x800096ACu;
    // 800096AC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800096B0:
    ctx->pc = 0x800096B0u;
    // 800096B0: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_800096B4:
    ctx->pc = 0x800096B4u;
    // 800096B4: bl      0x800050B4
    {
            ctx->lr = 0x800096B8u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_800096B8:
    ctx->pc = 0x800096B8u;
    ctx->downcount -= 6;
    // 800096B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800096BC:
    ctx->pc = 0x800096BCu;
    // 800096BC: li      r0, 210
    ctx->gpr[0] = (u32)(s32)(210);

label_800096C0:
    ctx->pc = 0x800096C0u;
    // 800096C0: stw     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800096C4:
    ctx->pc = 0x800096C4u;
    // 800096C4: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_800096C8:
    ctx->pc = 0x800096C8u;
    // 800096C8: stb     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800096CC:
    ctx->pc = 0x800096CCu;
    // 800096CC: bl      0x80014B68
    {
            ctx->lr = 0x800096D0u;
            ctx->pc = 0x80014B68u;
            return;
    }

label_800096D0:
    ctx->pc = 0x800096D0u;
    ctx->downcount -= 5;
    // 800096D0: addi    r0, r3, 65
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(65);

label_800096D4:
    ctx->pc = 0x800096D4u;
    // 800096D4: stb     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write8(ctx, ea, (u8)ctx->gpr[31]);
    }

label_800096D8:
    ctx->pc = 0x800096D8u;
    // 800096D8: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_800096DC:
    ctx->pc = 0x800096DCu;
    // 800096DC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800096E0:
    ctx->pc = 0x800096E0u;
    // 800096E0: bl      0x80014B68
    {
            ctx->lr = 0x800096E4u;
            ctx->pc = 0x80014B68u;
            return;
    }

label_800096E4:
    ctx->pc = 0x800096E4u;
    ctx->downcount -= 5;
    // 800096E4: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_800096E8:
    ctx->pc = 0x800096E8u;
    // 800096E8: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_800096EC:
    ctx->pc = 0x800096ECu;
    // 800096EC: sth     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800096F0:
    ctx->pc = 0x800096F0u;
    // 800096F0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_800096F4:
    ctx->pc = 0x800096F4u;
    // 800096F4: bl      0x80007EC8
    {
            ctx->lr = 0x800096F8u;
            ctx->pc = 0x80007EC8u;
            return;
    }

label_800096F8:
    ctx->pc = 0x800096F8u;
    ctx->downcount -= 4;
    // 800096F8: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800096FC:
    ctx->pc = 0x800096FCu;
    // 800096FC: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_80009700:
    ctx->pc = 0x80009700u;
    // 80009700: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80009704:
    ctx->pc = 0x80009704u;
    // 80009704: bl      0x80007B34
    {
            ctx->lr = 0x80009708u;
            ctx->pc = 0x80007B34u;
            return;
    }

label_80009708:
    ctx->pc = 0x80009708u;
    ctx->downcount -= 2;
    // 80009708: or.   r31, r3, r3
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

label_8000970C:
    ctx->pc = 0x8000970Cu;
    // 8000970C: bc    4, 2, 0x80009730
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80009730;
        }
    }

label_80009710:
    ctx->pc = 0x80009710u;
    ctx->downcount -= 2;
    // 80009710: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80009714:
    ctx->pc = 0x80009714u;
    // 80009714: bl      0x80014B68
    {
            ctx->lr = 0x80009718u;
            ctx->pc = 0x80014B68u;
            return;
    }

label_80009718:
    ctx->pc = 0x80009718u;
    ctx->downcount -= 5;
    // 80009718: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000971C:
    ctx->pc = 0x8000971Cu;
    // 8000971C: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80009720:
    ctx->pc = 0x80009720u;
    // 80009720: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80009724:
    ctx->pc = 0x80009724u;
    // 80009724: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_80009728:
    ctx->pc = 0x80009728u;
    // 80009728: bl      0x80007B34
    {
            ctx->lr = 0x8000972Cu;
            ctx->pc = 0x80007B34u;
            return;
    }

label_8000972C:
    ctx->pc = 0x8000972Cu;
    ctx->downcount -= 1;
    // 8000972C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80009730:
    ctx->pc = 0x80009730u;
    ctx->downcount -= 2;
    // 80009730: cmpwi   r31, 0
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

label_80009734:
    ctx->pc = 0x80009734u;
    // 80009734: bc    4, 2, 0x80009784
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80009784;
        }
    }

label_80009738:
    ctx->pc = 0x80009738u;
    ctx->downcount -= 8;
    // 80009738: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8000973C:
    ctx->pc = 0x8000973Cu;
    // 8000973C: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_80009740:
    ctx->pc = 0x80009740u;
    // 80009740: stw     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80009744:
    ctx->pc = 0x80009744u;
    // 80009744: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_80009748:
    ctx->pc = 0x80009748u;
    // 80009748: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_8000974C:
    ctx->pc = 0x8000974Cu;
    // 8000974C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80009750:
    ctx->pc = 0x80009750u;
    // 80009750: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80009754:
    ctx->pc = 0x80009754u;
    // 80009754: bl      0x800097A4
    {
            ctx->lr = 0x80009758u;
            goto label_800097A4;
    }

label_80009758:
    ctx->pc = 0x80009758u;
    ctx->downcount -= 2;
    // 80009758: or.   r31, r3, r3
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

label_8000975C:
    ctx->pc = 0x8000975Cu;
    // 8000975C: bc    4, 2, 0x8000976C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000976C;
        }
    }

label_80009760:
    ctx->pc = 0x80009760u;
    ctx->downcount -= 2;
    // 80009760: lwz     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80009764:
    ctx->pc = 0x80009764u;
    // 80009764: bl      0x80007E9C
    {
            ctx->lr = 0x80009768u;
            ctx->pc = 0x80007E9Cu;
            return;
    }

label_80009768:
    ctx->pc = 0x80009768u;
    ctx->downcount -= 1;
    // 80009768: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000976C:
    ctx->pc = 0x8000976Cu;
    ctx->downcount -= 6;
    // 8000976C: lwz     r0, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80009770:
    ctx->pc = 0x80009770u;
    // 80009770: stw     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80009774:
    ctx->pc = 0x80009774u;
    // 80009774: lwz     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80009778:
    ctx->pc = 0x80009778u;
    // 80009778: stw     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000977C:
    ctx->pc = 0x8000977Cu;
    // 8000977C: lwz     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80009780:
    ctx->pc = 0x80009780u;
    // 80009780: bl      0x80007E38
    {
            ctx->lr = 0x80009784u;
            ctx->pc = 0x80007E38u;
            return;
    }

label_80009784:
    ctx->pc = 0x80009784u;
    ctx->downcount -= 2;
    // 80009784: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80009788:
    ctx->pc = 0x80009788u;
    // 80009788: bl      0x80007E38
    {
            ctx->lr = 0x8000978Cu;
            ctx->pc = 0x80007E38u;
            return;
    }

label_8000978C:
    ctx->pc = 0x8000978Cu;
    ctx->downcount -= 17;
    // 8000978C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80009790:
    ctx->pc = 0x80009790u;
    // 80009790: lmw     r27, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80009794:
    ctx->pc = 0x80009794u;
    // 80009794: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80009798:
    ctx->pc = 0x80009798u;
    // 80009798: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000979C:
    ctx->pc = 0x8000979Cu;
    // 8000979C: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_800097A0:
    ctx->pc = 0x800097A0u;
    // 800097A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_800097A4:
    ctx->pc = 0x800097A4u;
    ctx->downcount -= 25;
    // 800097A4: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800097A8:
    ctx->pc = 0x800097A8u;
    // 800097A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800097AC:
    ctx->pc = 0x800097ACu;
    // 800097AC: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800097B0:
    ctx->pc = 0x800097B0u;
    // 800097B0: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_800097B4:
    ctx->pc = 0x800097B4u;
    // 800097B4: stmw     r21, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 21; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_800097B8:
    ctx->pc = 0x800097B8u;
    // 800097B8: or   r22, r4, r4
    {
        ctx->gpr[22] = ctx->gpr[4] | ctx->gpr[4];
    }

label_800097BC:
    ctx->pc = 0x800097BCu;
    // 800097BC: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_800097C0:
    ctx->pc = 0x800097C0u;
    // 800097C0: or   r21, r3, r3
    {
        ctx->gpr[21] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800097C4:
    ctx->pc = 0x800097C4u;
    // 800097C4: or   r23, r7, r7
    {
        ctx->gpr[23] = ctx->gpr[7] | ctx->gpr[7];
    }

label_800097C8:
    ctx->pc = 0x800097C8u;
    // 800097C8: addi    r27, r6, 1
    ctx->gpr[27] = ctx->gpr[6] + (u32)(s32)(1);

label_800097CC:
    ctx->pc = 0x800097CCu;
    // 800097CC: addi    r31, r4, 10152
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(10152);

label_800097D0:
    ctx->pc = 0x800097D0u;
    // 800097D0: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_800097D4:
    ctx->pc = 0x800097D4u;
    // 800097D4: li      r24, 1
    ctx->gpr[24] = (u32)(s32)(1);

label_800097D8:
    ctx->pc = 0x800097D8u;
    // 800097D8: stw     r0, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800097DC:
    ctx->pc = 0x800097DCu;
    // 800097DC: b       0x80009940
    {
            goto label_80009940;
    }

label_800097E0:
    ctx->downcount -= 4;
    // 800097E0: addi    r4, r31, 0
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(0);

label_800097E4:
    // 800097E4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_800097E8:
    // 800097E8: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_800097EC:
    // 800097EC: bl      0x8000CF98
    {
            ctx->lr = 0x800097F0u;
            goto label_8000CF98;
    }

label_800097F0:
    ctx->downcount -= 2;
    // 800097F0: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_800097F4:
    // 800097F4: bl      0x80007784
    {
            ctx->lr = 0x800097F8u;
            ctx->pc = 0x80007784u;
            return;
    }

label_800097F8:
    ctx->downcount -= 2;
    // 800097F8: or.   r30, r3, r3
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

label_800097FC:
    // 800097FC: bc    4, 2, 0x8000993C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000993C;
        }
    }

label_80009800:
    ctx->downcount -= 2;
    // 80009800: cmpwi   r23, 0
    {
        s32 val_a = (s32)(ctx->gpr[23]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80009804:
    // 80009804: bc    12, 2, 0x8000980C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000980C;
        }
    }

label_80009808:
    ctx->downcount -= 1;
    // 80009808: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_8000980C:
    ctx->downcount -= 1;
    // 8000980C: bl      0x80008180
    {
            ctx->lr = 0x80009810u;
            ctx->pc = 0x80008180u;
            return;
    }

label_80009810:
    ctx->pc = 0x80009810u;
    ctx->downcount -= 4;
    // 80009810: stw     r3, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80009814:
    ctx->pc = 0x80009814u;
    // 80009814: lwz     r3, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80009818:
    // 80009818: cmpwi   r3, -1
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

label_8000981C:
    // 8000981C: bc    4, 2, 0x8000983C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000983C;
        }
    }

label_80009820:
    ctx->downcount -= 2;
    // 80009820: cmpwi   r23, 0
    {
        s32 val_a = (s32)(ctx->gpr[23]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80009824:
    // 80009824: bc    12, 2, 0x8000980C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000980Cu;
                return;
            }
            goto label_8000980C;
        }
    }

label_80009828:
    ctx->downcount -= 5;
    // 80009828: lis     r4, 1221
    ctx->gpr[4] = ((u32)(s32)(1221) << 16);

label_8000982C:
    // 8000982C: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80009830:
    // 80009830: addi    r0, r4, -19476
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-19476);

label_80009834:
    // 80009834: cmplw   r28, r0
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

label_80009838:
    // 80009838: bc    12, 0, 0x8000980C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000980Cu;
                return;
            }
            goto label_8000980C;
        }
    }

label_8000983C:
    ctx->downcount -= 2;
    // 8000983C: cmpwi   r3, -1
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

label_80009840:
    // 80009840: bc    12, 2, 0x8000989C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000989C;
        }
    }

label_80009844:
    ctx->downcount -= 2;
    // 80009844: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_80009848:
    // 80009848: bl      0x80007E9C
    {
            ctx->lr = 0x8000984Cu;
            ctx->pc = 0x80007E9Cu;
            return;
    }

label_8000984C:
    ctx->downcount -= 3;
    // 8000984C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80009850:
    // 80009850: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80009854:
    // 80009854: bl      0x80007DC8
    {
            ctx->lr = 0x80009858u;
            ctx->pc = 0x80007DC8u;
            return;
    }

label_80009858:
    ctx->pc = 0x80009858u;
    ctx->downcount -= 3;
    // 80009858: lwz     r4, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000985C:
    // 8000985C: addi    r3, r29, 16
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(16);

label_80009860:
    // 80009860: bl      0x800093E8
    {
            ctx->lr = 0x80009864u;
            ctx->pc = 0x800093E8u;
            return;
    }

label_80009864:
    ctx->pc = 0x80009864u;
    ctx->downcount -= 7;
    // 80009864: lbz     r26, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        ctx->gpr[26] = mem_read8(ctx, ea);
    }

label_80009868:
    // 80009868: addi    r4, r31, 24
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(24);

label_8000986C:
    // 8000986C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80009870:
    // 80009870: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_80009874:
    // 80009874: or   r6, r26, r26
    {
        ctx->gpr[6] = ctx->gpr[26] | ctx->gpr[26];
    }

label_80009878:
    // 80009878: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8000987C:
    // 8000987C: bl      0x8000CF98
    {
            ctx->lr = 0x80009880u;
            goto label_8000CF98;
    }

label_80009880:
    ctx->downcount -= 2;
    // 80009880: cmplwi  r26, 0x0080
    {
        u32 val_a = (u32)(ctx->gpr[26]);
        u32 val_b = (u32)(0x0080u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80009884:
    // 80009884: bc    4, 0, 0x8000989C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000989C;
        }
    }

label_80009888:
    ctx->pc = 0x80009888u;
    ctx->downcount -= 2;
    // 80009888: lwz     r3, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000988C:
    // 8000988C: bl      0x800080D0
    {
            ctx->lr = 0x80009890u;
            ctx->pc = 0x800080D0u;
            return;
    }

label_80009890:
    ctx->downcount -= 3;
    // 80009890: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_80009894:
    ctx->pc = 0x80009894u;
    // 80009894: stw     r0, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80009898:
    // 80009898: b       0x8000980C
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000980Cu;
                return;
            }
            goto label_8000980C;
    }

label_8000989C:
    ctx->pc = 0x8000989Cu;
    ctx->downcount -= 3;
    // 8000989C: lwz     r0, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800098A0:
    // 800098A0: cmpwi   r0, -1
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

label_800098A4:
    // 800098A4: bc    12, 2, 0x8000993C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000993C;
        }
    }

label_800098A8:
    ctx->pc = 0x800098A8u;
    ctx->downcount -= 3;
    // 800098A8: lwz     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800098AC:
    // 800098AC: cmplwi  r0, 0x0040
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0040u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800098B0:
    // 800098B0: bc    4, 0, 0x800098B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800098B8;
        }
    }

label_800098B4:
    ctx->downcount -= 1;
    // 800098B4: li      r24, 1
    ctx->gpr[24] = (u32)(s32)(1);

label_800098B8:
    ctx->downcount -= 2;
    // 800098B8: cmpwi   r30, 0
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

label_800098BC:
    // 800098BC: bc    4, 2, 0x800098E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800098E0;
        }
    }

label_800098C0:
    ctx->downcount -= 2;
    // 800098C0: cmpwi   r24, 0
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

label_800098C4:
    // 800098C4: bc    4, 2, 0x800098E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800098E0;
        }
    }

label_800098C8:
    ctx->pc = 0x800098C8u;
    ctx->downcount -= 6;
    // 800098C8: lbz     r25, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        ctx->gpr[25] = mem_read8(ctx, ea);
    }

label_800098CC:
    // 800098CC: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_800098D0:
    // 800098D0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_800098D4:
    // 800098D4: or   r5, r25, r25
    {
        ctx->gpr[5] = ctx->gpr[25] | ctx->gpr[25];
    }

label_800098D8:
    // 800098D8: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_800098DC:
    // 800098DC: bl      0x8000CF98
    {
            ctx->lr = 0x800098E0u;
            goto label_8000CF98;
    }

label_800098E0:
    ctx->downcount -= 2;
    // 800098E0: cmpwi   r30, 0
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

label_800098E4:
    // 800098E4: bc    4, 2, 0x8000991C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000991C;
        }
    }

label_800098E8:
    ctx->downcount -= 2;
    // 800098E8: cmpwi   r24, 0
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

label_800098EC:
    // 800098EC: bc    4, 2, 0x8000991C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000991C;
        }
    }

label_800098F0:
    ctx->downcount -= 3;
    // 800098F0: cmpwi   r26, 128
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(128);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800098F4:
    // 800098F4: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_800098F8:
    // 800098F8: bc    4, 2, 0x80009904
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80009904;
        }
    }

label_800098FC:
    ctx->downcount -= 2;
    // 800098FC: cmpwi   r25, 0
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

label_80009900:
    // 80009900: bc    12, 2, 0x8000991C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000991C;
        }
    }

label_80009904:
    ctx->downcount -= 5;
    // 80009904: or   r6, r25, r25
    {
        ctx->gpr[6] = ctx->gpr[25] | ctx->gpr[25];
    }

label_80009908:
    // 80009908: addi    r4, r31, 84
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(84);

label_8000990C:
    // 8000990C: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_80009910:
    // 80009910: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80009914:
    // 80009914: bl      0x8000CF98
    {
            ctx->lr = 0x80009918u;
            goto label_8000CF98;
    }

label_80009918:
    ctx->downcount -= 1;
    // 80009918: li      r24, 1
    ctx->gpr[24] = (u32)(s32)(1);

label_8000991C:
    ctx->downcount -= 2;
    // 8000991C: cmpwi   r30, 0
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

label_80009920:
    // 80009920: bc    4, 2, 0x8000992C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000992C;
        }
    }

label_80009924:
    ctx->downcount -= 2;
    // 80009924: cmpwi   r24, 0
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

label_80009928:
    // 80009928: bc    12, 2, 0x8000993C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000993C;
        }
    }

label_8000992C:
    ctx->pc = 0x8000992Cu;
    ctx->downcount -= 2;
    // 8000992C: lwz     r3, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80009930:
    // 80009930: bl      0x80007E38
    {
            ctx->lr = 0x80009934u;
            ctx->pc = 0x80007E38u;
            return;
    }

label_80009934:
    ctx->downcount -= 2;
    // 80009934: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_80009938:
    ctx->pc = 0x80009938u;
    // 80009938: stw     r0, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000993C:
    ctx->downcount -= 1;
    // 8000993C: addi    r27, r27, -1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(-1);

label_80009940:
    ctx->downcount -= 2;
    // 80009940: cmpwi   r27, 0
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

label_80009944:
    // 80009944: bc    12, 2, 0x8000995C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000995C;
        }
    }

label_80009948:
    ctx->pc = 0x80009948u;
    ctx->downcount -= 3;
    // 80009948: lwz     r0, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000994C:
    // 8000994C: cmpwi   r0, -1
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

label_80009950:
    // 80009950: bc    4, 2, 0x8000995C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000995C;
        }
    }

label_80009954:
    ctx->downcount -= 2;
    // 80009954: cmpwi   r30, 0
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

label_80009958:
    // 80009958: bc    12, 2, 0x800097E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800097E0u;
                return;
            }
            goto label_800097E0;
        }
    }

label_8000995C:
    ctx->pc = 0x8000995Cu;
    ctx->downcount -= 3;
    // 8000995C: lwz     r0, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80009960:
    ctx->pc = 0x80009960u;
    // 80009960: cmpwi   r0, -1
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

label_80009964:
    ctx->pc = 0x80009964u;
    // 80009964: bc    4, 2, 0x8000996C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000996C;
        }
    }

label_80009968:
    ctx->pc = 0x80009968u;
    ctx->downcount -= 1;
    // 80009968: li      r30, 2048
    ctx->gpr[30] = (u32)(s32)(2048);

label_8000996C:
    ctx->pc = 0x8000996Cu;
    ctx->downcount -= 17;
    // 8000996C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80009970:
    ctx->pc = 0x80009970u;
    // 80009970: lmw     r21, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 21; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80009974:
    ctx->pc = 0x80009974u;
    // 80009974: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80009978:
    ctx->pc = 0x80009978u;
    // 80009978: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000997C:
    ctx->pc = 0x8000997Cu;
    // 8000997C: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80009980:
    ctx->pc = 0x80009980u;
    // 80009980: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_80009984:
    ctx->pc = 0x80009984u;
    ctx->downcount -= 21;
    // 80009984: stwu     r1, -144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-144);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80009988:
    ctx->pc = 0x80009988u;
    // 80009988: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000998C:
    ctx->pc = 0x8000998Cu;
    // 8000998C: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80009990:
    ctx->pc = 0x80009990u;
    // 80009990: stmw     r19, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        for (u32 r = 19; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80009994:
    ctx->pc = 0x80009994u;
    // 80009994: or.   r24, r4, r4
    {
        ctx->gpr[24] = ctx->gpr[4] | ctx->gpr[4];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[24];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80009998:
    ctx->pc = 0x80009998u;
    // 80009998: or   r23, r3, r3
    {
        ctx->gpr[23] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000999C:
    ctx->pc = 0x8000999Cu;
    // 8000999C: or   r25, r5, r5
    {
        ctx->gpr[25] = ctx->gpr[5] | ctx->gpr[5];
    }

label_800099A0:
    ctx->pc = 0x800099A0u;
    // 800099A0: or   r26, r6, r6
    {
        ctx->gpr[26] = ctx->gpr[6] | ctx->gpr[6];
    }

label_800099A4:
    ctx->pc = 0x800099A4u;
    // 800099A4: or   r27, r7, r7
    {
        ctx->gpr[27] = ctx->gpr[7] | ctx->gpr[7];
    }

label_800099A8:
    ctx->pc = 0x800099A8u;
    // 800099A8: or   r28, r8, r8
    {
        ctx->gpr[28] = ctx->gpr[8] | ctx->gpr[8];
    }

label_800099AC:
    ctx->pc = 0x800099ACu;
    // 800099AC: bc    12, 2, 0x800099BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800099BC;
        }
    }

label_800099B0:
    ctx->pc = 0x800099B0u;
    ctx->downcount -= 3;
    // 800099B0: lwz     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800099B4:
    ctx->pc = 0x800099B4u;
    // 800099B4: cmplwi  r0, 0x0000
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

label_800099B8:
    ctx->pc = 0x800099B8u;
    // 800099B8: bc    4, 2, 0x800099C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800099C4;
        }
    }

label_800099BC:
    ctx->pc = 0x800099BCu;
    ctx->downcount -= 2;
    // 800099BC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_800099C0:
    ctx->pc = 0x800099C0u;
    // 800099C0: b       0x80009BB0
    {
            goto label_80009BB0;
    }

label_800099C4:
    ctx->pc = 0x800099C4u;
    ctx->downcount -= 6;
    // 800099C4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_800099C8:
    ctx->pc = 0x800099C8u;
    // 800099C8: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_800099CC:
    ctx->pc = 0x800099CCu;
    // 800099CC: stw     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800099D0:
    ctx->pc = 0x800099D0u;
    // 800099D0: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_800099D4:
    ctx->pc = 0x800099D4u;
    // 800099D4: li      r21, 0
    ctx->gpr[21] = (u32)(s32)(0);

label_800099D8:
    ctx->pc = 0x800099D8u;
    // 800099D8: b       0x80009B80
    {
            goto label_80009B80;
    }

label_800099DC:
    ctx->downcount -= 4;
    // 800099DC: addi    r3, r1, 20
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(20);

label_800099E0:
    // 800099E0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800099E4:
    // 800099E4: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_800099E8:
    // 800099E8: bl      0x800050B4
    {
            ctx->lr = 0x800099ECu;
            ctx->pc = 0x800050B4u;
            return;
    }

label_800099EC:
    ctx->pc = 0x800099ECu;
    ctx->downcount -= 5;
    // 800099EC: lwz     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800099F0:
    // 800099F0: li      r3, 2048
    ctx->gpr[3] = (u32)(s32)(2048);

label_800099F4:
    // 800099F4: subf   r0, r30, r0
    {
        u32 a = ~ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_800099F8:
    // 800099F8: cmplwi  r0, 0x0800
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0800u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800099FC:
    // 800099FC: bc    12, 1, 0x80009A04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80009A04;
        }
    }

label_80009A00:
    ctx->downcount -= 1;
    // 80009A00: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_80009A04:
    ctx->downcount -= 4;
    // 80009A04: cmpwi   r28, 0
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

label_80009A08:
    // 80009A08: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80009A0C:
    // 80009A0C: li      r0, 208
    ctx->gpr[0] = (u32)(s32)(208);

label_80009A10:
    // 80009A10: bc    12, 2, 0x80009A18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80009A18;
        }
    }

label_80009A14:
    ctx->downcount -= 1;
    // 80009A14: li      r0, 209
    ctx->gpr[0] = (u32)(s32)(209);

label_80009A18:
    ctx->downcount -= 4;
    // 80009A18: cmpwi   r28, 0
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

label_80009A1C:
    ctx->pc = 0x80009A1Cu;
    // 80009A1C: stb     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80009A20:
    // 80009A20: li      r0, 64
    ctx->gpr[0] = (u32)(s32)(64);

label_80009A24:
    // 80009A24: bc    4, 2, 0x80009A2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80009A2C;
        }
    }

label_80009A28:
    ctx->downcount -= 1;
    // 80009A28: addi    r0, r31, 64
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(64);

label_80009A2C:
    ctx->pc = 0x80009A2Cu;
    ctx->downcount -= 6;
    // 80009A2C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80009A30:
    // 80009A30: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_80009A34:
    // 80009A34: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80009A38:
    ctx->pc = 0x80009A38u;
    // 80009A38: stw     r23, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[23]);
    }

label_80009A3C:
    ctx->pc = 0x80009A3Cu;
    // 80009A3C: sth     r31, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_80009A40:
    // 80009A40: bl      0x80007EC8
    {
            ctx->lr = 0x80009A44u;
            ctx->pc = 0x80007EC8u;
            return;
    }

label_80009A44:
    ctx->pc = 0x80009A44u;
    ctx->downcount -= 4;
    // 80009A44: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80009A48:
    // 80009A48: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_80009A4C:
    // 80009A4C: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80009A50:
    // 80009A50: bl      0x80007B34
    {
            ctx->lr = 0x80009A54u;
            ctx->pc = 0x80007B34u;
            return;
    }

label_80009A54:
    ctx->downcount -= 3;
    // 80009A54: cmpwi   r28, 0
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

label_80009A58:
    // 80009A58: or   r21, r3, r3
    {
        ctx->gpr[21] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80009A5C:
    // 80009A5C: bc    4, 2, 0x80009A7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80009A7C;
        }
    }

label_80009A60:
    ctx->downcount -= 2;
    // 80009A60: cmpwi   r21, 0
    {
        s32 val_a = (s32)(ctx->gpr[21]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80009A64:
    // 80009A64: bc    4, 2, 0x80009A7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80009A7C;
        }
    }

label_80009A68:
    ctx->pc = 0x80009A68u;
    ctx->downcount -= 4;
    // 80009A68: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80009A6C:
    // 80009A6C: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80009A70:
    // 80009A70: add   r4, r24, r30
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80009A74:
    // 80009A74: bl      0x80007B34
    {
            ctx->lr = 0x80009A78u;
            ctx->pc = 0x80007B34u;
            return;
    }

label_80009A78:
    ctx->downcount -= 1;
    // 80009A78: or   r21, r3, r3
    {
        ctx->gpr[21] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80009A7C:
    ctx->downcount -= 2;
    // 80009A7C: cmpwi   r21, 0
    {
        s32 val_a = (s32)(ctx->gpr[21]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80009A80:
    // 80009A80: bc    4, 2, 0x80009B74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80009B74;
        }
    }

label_80009A84:
    ctx->downcount -= 2;
    // 80009A84: cmpwi   r27, 0
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

label_80009A88:
    // 80009A88: bc    12, 2, 0x80009B68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80009B68;
        }
    }

label_80009A8C:
    ctx->downcount -= 3;
    // 80009A8C: cmpwi   r28, 0
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

label_80009A90:
    // 80009A90: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80009A94:
    // 80009A94: bc    12, 2, 0x80009AA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80009AA4;
        }
    }

label_80009A98:
    ctx->downcount -= 2;
    // 80009A98: cmplwi  r23, 0x0000
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

label_80009A9C:
    // 80009A9C: bc    4, 2, 0x80009AA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80009AA4;
        }
    }

label_80009AA0:
    ctx->downcount -= 1;
    // 80009AA0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80009AA4:
    ctx->downcount -= 8;
    // 80009AA4: cmpwi   r28, 0
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

label_80009AA8:
    ctx->pc = 0x80009AA8u;
    // 80009AA8: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80009AAC:
    // 80009AAC: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_80009AB0:
    // 80009AB0: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_80009AB4:
    // 80009AB4: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_80009AB8:
    // 80009AB8: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_80009ABC:
    // 80009ABC: rlwinm r7, r0, 27, 5, 31
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_80009AC0:
    // 80009AC0: bl      0x800097A4
    {
            ctx->lr = 0x80009AC4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800097A4u;
                return;
            }
            goto label_800097A4;
    }

label_80009AC4:
    ctx->downcount -= 2;
    // 80009AC4: or.   r21, r3, r3
    {
        ctx->gpr[21] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[21];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80009AC8:
    // 80009AC8: bc    4, 2, 0x80009AD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80009AD8;
        }
    }

label_80009ACC:
    ctx->pc = 0x80009ACCu;
    ctx->downcount -= 2;
    // 80009ACC: lwz     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80009AD0:
    // 80009AD0: bl      0x80007E9C
    {
            ctx->lr = 0x80009AD4u;
            ctx->pc = 0x80007E9Cu;
            return;
    }

label_80009AD4:
    ctx->downcount -= 1;
    // 80009AD4: or   r22, r3, r3
    {
        ctx->gpr[22] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80009AD8:
    ctx->pc = 0x80009AD8u;
    ctx->downcount -= 5;
    // 80009AD8: lwz     r0, 32(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80009ADC:
    // 80009ADC: cmpwi   r28, 0
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

label_80009AE0:
    ctx->pc = 0x80009AE0u;
    // 80009AE0: lhz     r19, 36(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(36);
        ctx->gpr[19] = mem_read16(ctx, ea);
    }

label_80009AE4:
    // 80009AE4: rlwinm r20, r0, 0, 24, 31
    {
        ctx->gpr[20] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_80009AE8:
    // 80009AE8: bc    12, 2, 0x80009B28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80009B28;
        }
    }

label_80009AEC:
    ctx->downcount -= 2;
    // 80009AEC: cmpwi   r21, 0
    {
        s32 val_a = (s32)(ctx->gpr[21]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80009AF0:
    // 80009AF0: bc    4, 2, 0x80009B28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80009B28;
        }
    }

label_80009AF4:
    ctx->downcount -= 2;
    // 80009AF4: cmplw   r19, r31
    {
        u32 val_a = (u32)(ctx->gpr[19]);
        u32 val_b = (u32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80009AF8:
    // 80009AF8: bc    12, 1, 0x80009B28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80009B28;
        }
    }

label_80009AFC:
    ctx->downcount -= 3;
    // 80009AFC: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_80009B00:
    // 80009B00: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_80009B04:
    // 80009B04: bl      0x80007DC8
    {
            ctx->lr = 0x80009B08u;
            ctx->pc = 0x80007DC8u;
            return;
    }

label_80009B08:
    ctx->downcount -= 4;
    // 80009B08: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_80009B0C:
    // 80009B0C: or   r5, r19, r19
    {
        ctx->gpr[5] = ctx->gpr[19] | ctx->gpr[19];
    }

label_80009B10:
    // 80009B10: add   r4, r24, r30
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80009B14:
    // 80009B14: bl      0x800078B8
    {
            ctx->lr = 0x80009B18u;
            ctx->pc = 0x800078B8u;
            return;
    }

label_80009B18:
    ctx->downcount -= 3;
    // 80009B18: or   r21, r3, r3
    {
        ctx->gpr[21] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80009B1C:
    // 80009B1C: cmpwi   r21, 770
    {
        s32 val_a = (s32)(ctx->gpr[21]);
        s32 val_b = (s32)(770);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80009B20:
    // 80009B20: bc    4, 2, 0x80009B28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80009B28;
        }
    }

label_80009B24:
    ctx->downcount -= 1;
    // 80009B24: li      r21, 0
    ctx->gpr[21] = (u32)(s32)(0);

label_80009B28:
    ctx->downcount -= 2;
    // 80009B28: cmplw   r19, r31
    {
        u32 val_a = (u32)(ctx->gpr[19]);
        u32 val_b = (u32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80009B2C:
    // 80009B2C: bc    12, 2, 0x80009B54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80009B54;
        }
    }

label_80009B30:
    ctx->downcount -= 2;
    // 80009B30: cmpwi   r28, 0
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

label_80009B34:
    // 80009B34: bc    12, 2, 0x80009B40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80009B40;
        }
    }

label_80009B38:
    ctx->downcount -= 2;
    // 80009B38: cmplw   r19, r31
    {
        u32 val_a = (u32)(ctx->gpr[19]);
        u32 val_b = (u32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80009B3C:
    // 80009B3C: bc    12, 0, 0x80009B4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80009B4C;
        }
    }

label_80009B40:
    ctx->downcount -= 2;
    // 80009B40: cmplwi  r20, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[20]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80009B44:
    // 80009B44: bc    4, 2, 0x80009B4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80009B4C;
        }
    }

label_80009B48:
    ctx->downcount -= 1;
    // 80009B48: li      r20, 1
    ctx->gpr[20] = (u32)(s32)(1);

label_80009B4C:
    ctx->downcount -= 2;
    // 80009B4C: or   r31, r19, r19
    {
        ctx->gpr[31] = ctx->gpr[19] | ctx->gpr[19];
    }

label_80009B50:
    // 80009B50: li      r29, 1
    ctx->gpr[29] = (u32)(s32)(1);

label_80009B54:
    ctx->downcount -= 4;
    // 80009B54: rlwinm r0, r20, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[20], 0u) & 0x000000FFu;
    }

label_80009B58:
    ctx->pc = 0x80009B58u;
    // 80009B58: stw     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80009B5C:
    ctx->pc = 0x80009B5Cu;
    // 80009B5C: lwz     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80009B60:
    // 80009B60: bl      0x80007E38
    {
            ctx->lr = 0x80009B64u;
            ctx->pc = 0x80007E38u;
            return;
    }

label_80009B64:
    ctx->downcount -= 1;
    // 80009B64: b       0x80009B74
    {
            goto label_80009B74;
    }

label_80009B68:
    ctx->pc = 0x80009B68u;
    ctx->downcount -= 2;
    // 80009B68: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80009B6C:
    // 80009B6C: bl      0x80007784
    {
            ctx->lr = 0x80009B70u;
            ctx->pc = 0x80007784u;
            return;
    }

label_80009B70:
    ctx->downcount -= 1;
    // 80009B70: or   r21, r3, r3
    {
        ctx->gpr[21] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80009B74:
    ctx->pc = 0x80009B74u;
    ctx->downcount -= 2;
    // 80009B74: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80009B78:
    // 80009B78: bl      0x80007E38
    {
            ctx->lr = 0x80009B7Cu;
            ctx->pc = 0x80007E38u;
            return;
    }

label_80009B7C:
    ctx->downcount -= 1;
    // 80009B7C: add   r30, r30, r31
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_80009B80:
    ctx->downcount -= 2;
    // 80009B80: cmpwi   r29, 0
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

label_80009B84:
    // 80009B84: bc    4, 2, 0x80009BA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80009BA8;
        }
    }

label_80009B88:
    ctx->pc = 0x80009B88u;
    ctx->downcount -= 3;
    // 80009B88: lwz     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80009B8C:
    // 80009B8C: cmplw   r30, r0
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

label_80009B90:
    // 80009B90: bc    4, 0, 0x80009BA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80009BA8;
        }
    }

label_80009B94:
    ctx->downcount -= 2;
    // 80009B94: cmpwi   r21, 0
    {
        s32 val_a = (s32)(ctx->gpr[21]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80009B98:
    // 80009B98: bc    4, 2, 0x80009BA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80009BA8;
        }
    }

label_80009B9C:
    ctx->pc = 0x80009B9Cu;
    ctx->downcount -= 3;
    // 80009B9C: lwz     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80009BA0:
    // 80009BA0: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80009BA4:
    // 80009BA4: bc    12, 2, 0x800099DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800099DCu;
                return;
            }
            goto label_800099DC;
        }
    }

label_80009BA8:
    ctx->pc = 0x80009BA8u;
    ctx->downcount -= 2;
    // 80009BA8: stw     r30, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80009BAC:
    ctx->pc = 0x80009BACu;
    // 80009BAC: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_80009BB0:
    ctx->pc = 0x80009BB0u;
    ctx->downcount -= 16;
    // 80009BB0: lmw     r19, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        for (u32 r = 19; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80009BB4:
    ctx->pc = 0x80009BB4u;
    // 80009BB4: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80009BB8:
    ctx->pc = 0x80009BB8u;
    // 80009BB8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80009BBC:
    ctx->pc = 0x80009BBCu;
    // 80009BBC: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_80009BC0:
    ctx->pc = 0x80009BC0u;
    // 80009BC0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_80009BC4:
    ctx->pc = 0x80009BC4u;
    ctx->downcount -= 2;
    // 80009BC4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80009BC8:
    ctx->pc = 0x80009BC8u;
    // 80009BC8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_80009BCC:
    ctx->pc = 0x80009BCCu;
    ctx->downcount -= 2;
    // 80009BCC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80009BD0:
    ctx->pc = 0x80009BD0u;
    // 80009BD0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_80009BD4:
    ctx->pc = 0x80009BD4u;
    ctx->downcount -= 2;
    // 80009BD4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80009BD8:
    ctx->pc = 0x80009BD8u;
    // 80009BD8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_80009BDC:
    ctx->pc = 0x80009BDCu;
    ctx->downcount -= 9;
    // 80009BDC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80009BE0:
    ctx->pc = 0x80009BE0u;
    // 80009BE0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80009BE4:
    ctx->pc = 0x80009BE4u;
    // 80009BE4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80009BE8:
    ctx->pc = 0x80009BE8u;
    // 80009BE8: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80009BEC:
    ctx->pc = 0x80009BECu;
    // 80009BEC: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80009BF0:
    ctx->pc = 0x80009BF0u;
    // 80009BF0: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80009BF4:
    ctx->pc = 0x80009BF4u;
    // 80009BF4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80009BF8:
    ctx->pc = 0x80009BF8u;
    // 80009BF8: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_80009BFC:
    ctx->pc = 0x80009BFCu;
    // 80009BFC: bl      0x80007EC8
    {
            ctx->lr = 0x80009C00u;
            ctx->pc = 0x80007EC8u;
            return;
    }

label_80009C00:
    ctx->pc = 0x80009C00u;
    ctx->downcount -= 2;
    // 80009C00: or.   r31, r3, r3
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

label_80009C04:
    ctx->pc = 0x80009C04u;
    // 80009C04: bc    4, 2, 0x80009C58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80009C58;
        }
    }

label_80009C08:
    ctx->pc = 0x80009C08u;
    ctx->downcount -= 1;
    // 80009C08: bc    4, 2, 0x80009C28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80009C28;
        }
    }

label_80009C0C:
    ctx->pc = 0x80009C0Cu;
    ctx->downcount -= 2;
    // 80009C0C: cmpwi   r30, 144
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(144);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80009C10:
    ctx->pc = 0x80009C10u;
    // 80009C10: bc    4, 2, 0x80009C20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80009C20;
        }
    }

label_80009C14:
    ctx->pc = 0x80009C14u;
    ctx->downcount -= 2;
    // 80009C14: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80009C18:
    ctx->pc = 0x80009C18u;
    // 80009C18: bl      0x8000A538
    {
            ctx->lr = 0x80009C1Cu;
            goto label_8000A538;
    }

label_80009C1C:
    ctx->pc = 0x80009C1Cu;
    ctx->downcount -= 1;
    // 80009C1C: b       0x80009C28
    {
            goto label_80009C28;
    }

label_80009C20:
    ctx->pc = 0x80009C20u;
    ctx->downcount -= 2;
    // 80009C20: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80009C24:
    ctx->pc = 0x80009C24u;
    // 80009C24: bl      0x8000A4B4
    {
            ctx->lr = 0x80009C28u;
            goto label_8000A4B4;
    }

label_80009C28:
    ctx->pc = 0x80009C28u;
    ctx->downcount -= 6;
    // 80009C28: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80009C2C:
    ctx->pc = 0x80009C2Cu;
    // 80009C2C: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_80009C30:
    ctx->pc = 0x80009C30u;
    // 80009C30: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_80009C34:
    ctx->pc = 0x80009C34u;
    // 80009C34: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_80009C38:
    ctx->pc = 0x80009C38u;
    // 80009C38: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80009C3C:
    ctx->pc = 0x80009C3Cu;
    // 80009C3C: bl      0x800097A4
    {
            ctx->lr = 0x80009C40u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800097A4u;
                return;
            }
            goto label_800097A4;
    }

label_80009C40:
    ctx->pc = 0x80009C40u;
    ctx->downcount -= 2;
    // 80009C40: or.   r31, r3, r3
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

label_80009C44:
    ctx->pc = 0x80009C44u;
    // 80009C44: bc    4, 2, 0x80009C50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80009C50;
        }
    }

label_80009C48:
    ctx->pc = 0x80009C48u;
    ctx->downcount -= 2;
    // 80009C48: lwz     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80009C4C:
    ctx->pc = 0x80009C4Cu;
    // 80009C4C: bl      0x80007E38
    {
            ctx->lr = 0x80009C50u;
            ctx->pc = 0x80007E38u;
            return;
    }

label_80009C50:
    ctx->pc = 0x80009C50u;
    ctx->downcount -= 2;
    // 80009C50: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80009C54:
    ctx->pc = 0x80009C54u;
    // 80009C54: bl      0x80007E38
    {
            ctx->lr = 0x80009C58u;
            ctx->pc = 0x80007E38u;
            return;
    }

label_80009C58:
    ctx->pc = 0x80009C58u;
    ctx->downcount -= 8;
    // 80009C58: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80009C5C:
    ctx->pc = 0x80009C5Cu;
    // 80009C5C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80009C60:
    ctx->pc = 0x80009C60u;
    // 80009C60: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80009C64:
    ctx->pc = 0x80009C64u;
    // 80009C64: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80009C68:
    ctx->pc = 0x80009C68u;
    // 80009C68: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80009C6C:
    ctx->pc = 0x80009C6Cu;
    // 80009C6C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80009C70:
    ctx->pc = 0x80009C70u;
    // 80009C70: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_80009C74:
    ctx->pc = 0x80009C74u;
    ctx->downcount -= 5;
    // 80009C74: lis     r5, -1
    ctx->gpr[5] = ((u32)(s32)(-1) << 16);

label_80009C78:
    ctx->pc = 0x80009C78u;
    // 80009C78: ori     r5, r5, 0xFFF1
    ctx->gpr[5] = ctx->gpr[5] | 0xFFF1u;

label_80009C7C:
    ctx->pc = 0x80009C7Cu;
    // 80009C7C: and   r5, r5, r3
    {
        ctx->gpr[5] = ctx->gpr[5] & ctx->gpr[3];
    }

label_80009C80:
    ctx->pc = 0x80009C80u;
    // 80009C80: subf   r3, r5, r3
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_80009C84:
    ctx->pc = 0x80009C84u;
    // 80009C84: add   r4, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80009C88:
    ctx->pc = 0x80009C88u;
    // 80009C88: dcbst    0, r5
    ppc_fallback_instruction(ctx, 0x7C00286Cu, 0x80009C88u);
    return;

label_80009C8C:
    ctx->pc = 0x80009C8Cu;
    // 80009C8C: dcbf    0, r5
    ppc_fallback_instruction(ctx, 0x7C0028ACu, 0x80009C8Cu);
    return;

label_80009C90:
    ctx->pc = 0x80009C90u;
    ctx->downcount -= 3;
    // 80009C90: sync
    ppc_memory_fence();

label_80009C94:
    ctx->pc = 0x80009C94u;
    // 80009C94: icbi    0, r5
    ppc_fallback_instruction(ctx, 0x7C002FACu, 0x80009C94u);
    return;

label_80009C98:
    ctx->downcount -= 3;
    // 80009C98: addic   r5, r5, 8
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(8);
        u64 res = a + b;
        ctx->gpr[5] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80009C9C:
    // 80009C9C: addic.  r4, r4, -8
    {
        u64 a = ctx->gpr[4];
        u64 b = (u32)(s32)(-8);
        u64 res = a + b;
        ctx->gpr[4] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[4];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80009CA0:
    // 80009CA0: bc    4, 0, 0x80009C88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80009C88u;
                return;
            }
            goto label_80009C88;
        }
    }

label_80009CA4:
    ctx->pc = 0x80009CA4u;
    ctx->downcount -= 2;
    // 80009CA4: isync
    ppc_memory_fence();

label_80009CA8:
    ctx->pc = 0x80009CA8u;
    // 80009CA8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_80009CAC:
    ctx->pc = 0x80009CACu;
    ctx->downcount -= 5;
    // 80009CAC: cmplwi  r5, 0x0020
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(0x0020u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80009CB0:
    ctx->pc = 0x80009CB0u;
    // 80009CB0: rlwinm r4, r4, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x000000FFu;
    }

label_80009CB4:
    ctx->pc = 0x80009CB4u;
    // 80009CB4: addi    r6, r3, -1
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-1);

label_80009CB8:
    ctx->pc = 0x80009CB8u;
    // 80009CB8: or   r7, r4, r4
    {
        ctx->gpr[7] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80009CBC:
    ctx->pc = 0x80009CBCu;
    // 80009CBC: bc    12, 0, 0x80009D4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80009D4C;
        }
    }

label_80009CC0:
    ctx->pc = 0x80009CC0u;
    ctx->downcount -= 3;
    // 80009CC0: nor   r0, r6, r6
    {
        ctx->gpr[0] = ~(ctx->gpr[6] | ctx->gpr[6]);
    }

label_80009CC4:
    ctx->pc = 0x80009CC4u;
    // 80009CC4: rlwinm. r3, r0, 0, 30, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000003u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80009CC8:
    ctx->pc = 0x80009CC8u;
    // 80009CC8: bc    12, 2, 0x80009CDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80009CDC;
        }
    }

label_80009CCC:
    ctx->pc = 0x80009CCCu;
    ctx->downcount -= 1;
    // 80009CCC: subf   r5, r3, r5
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_80009CD0:
    loop_80009CD0(ctx);
    if (ctx->pc == 0x80009CDCu) goto label_80009CDC;
    return;
label_80009CD4:
    ctx->pc = 0x80009CD4u;
    // 80009CD4: stbu     r7, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
        ctx->gpr[6] = ea;
    }

label_80009CD8:
    // 80009CD8: bc    4, 2, 0x80009CD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80009CD0u;
                return;
            }
            goto label_80009CD0;
        }
    }

label_80009CDC:
    ctx->pc = 0x80009CDCu;
    ctx->downcount -= 2;
    // 80009CDC: cmplwi  r7, 0x0000
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

label_80009CE0:
    ctx->pc = 0x80009CE0u;
    // 80009CE0: bc    12, 2, 0x80009CFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80009CFC;
        }
    }

label_80009CE4:
    ctx->pc = 0x80009CE4u;
    ctx->downcount -= 6;
    // 80009CE4: rlwinm r3, r7, 24, 0, 7
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[7], 24u) & 0xFF000000u;
    }

label_80009CE8:
    ctx->pc = 0x80009CE8u;
    // 80009CE8: rlwinm r0, r7, 16, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[7], 16u) & 0xFFFF0000u;
    }

label_80009CEC:
    ctx->pc = 0x80009CECu;
    // 80009CEC: rlwinm r4, r7, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[7], 8u) & 0xFFFFFF00u;
    }

label_80009CF0:
    ctx->pc = 0x80009CF0u;
    // 80009CF0: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80009CF4:
    ctx->pc = 0x80009CF4u;
    // 80009CF4: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80009CF8:
    ctx->pc = 0x80009CF8u;
    // 80009CF8: or   r7, r7, r0
    {
        ctx->gpr[7] = ctx->gpr[7] | ctx->gpr[0];
    }

label_80009CFC:
    ctx->pc = 0x80009CFCu;
    ctx->downcount -= 3;
    // 80009CFC: rlwinm. r4, r5, 27, 5, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[5], 27u) & 0x07FFFFFFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[4];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80009D00:
    ctx->pc = 0x80009D00u;
    // 80009D00: addi    r3, r6, -3
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(-3);

label_80009D04:
    ctx->pc = 0x80009D04u;
    // 80009D04: bc    12, 2, 0x80009D30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80009D30;
        }
    }

label_80009D08:
    loop_80009D08(ctx);
    if (ctx->pc == 0x80009D30u) goto label_80009D30;
    return;
label_80009D0C:
    // 80009D0C: addic.  r4, r4, -1
    {
        u64 a = ctx->gpr[4];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[4] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[4];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80009D10:
    ctx->pc = 0x80009D10u;
    // 80009D10: stw     r7, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80009D14:
    ctx->pc = 0x80009D14u;
    // 80009D14: stw     r7, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80009D18:
    ctx->pc = 0x80009D18u;
    // 80009D18: stw     r7, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80009D1C:
    ctx->pc = 0x80009D1Cu;
    // 80009D1C: stw     r7, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80009D20:
    ctx->pc = 0x80009D20u;
    // 80009D20: stw     r7, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80009D24:
    ctx->pc = 0x80009D24u;
    // 80009D24: stw     r7, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80009D28:
    ctx->pc = 0x80009D28u;
    // 80009D28: stwu     r7, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
        ctx->gpr[3] = ea;
    }

label_80009D2C:
    // 80009D2C: bc    4, 2, 0x80009D08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80009D08u;
                return;
            }
            goto label_80009D08;
        }
    }

label_80009D30:
    ctx->pc = 0x80009D30u;
    ctx->downcount -= 2;
    // 80009D30: rlwinm. r4, r5, 30, 29, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[5], 30u) & 0x00000007u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[4];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80009D34:
    ctx->pc = 0x80009D34u;
    // 80009D34: bc    12, 2, 0x80009D44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80009D44;
        }
    }

label_80009D38:
    loop_80009D38(ctx);
    if (ctx->pc == 0x80009D44u) goto label_80009D44;
    return;
label_80009D3C:
    ctx->pc = 0x80009D3Cu;
    // 80009D3C: stwu     r7, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
        ctx->gpr[3] = ea;
    }

label_80009D40:
    // 80009D40: bc    4, 2, 0x80009D38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80009D38u;
                return;
            }
            goto label_80009D38;
        }
    }

label_80009D44:
    ctx->pc = 0x80009D44u;
    ctx->downcount -= 2;
    // 80009D44: addi    r6, r3, 3
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(3);

label_80009D48:
    ctx->pc = 0x80009D48u;
    // 80009D48: rlwinm r5, r5, 0, 30, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x00000003u;
    }

label_80009D4C:
    ctx->pc = 0x80009D4Cu;
    ctx->downcount -= 2;
    // 80009D4C: cmplwi  r5, 0x0000
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

label_80009D50:
    ctx->pc = 0x80009D50u;
    // 80009D50: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_80009D54:
    loop_80009D54(ctx);
    if (ctx->pc == 0x80009D60u) goto label_80009D60;
    return;
label_80009D58:
    ctx->pc = 0x80009D58u;
    // 80009D58: stbu     r7, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
        ctx->gpr[6] = ea;
    }

label_80009D5C:
    // 80009D5C: bc    4, 2, 0x80009D54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80009D54u;
                return;
            }
            goto label_80009D54;
        }
    }

label_80009D60:
    ctx->pc = 0x80009D60u;
    ctx->downcount -= 1;
    // 80009D60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_80009D64:
    ctx->pc = 0x80009D64u;
    ctx->downcount -= 2;
    // 80009D64: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_80009D68:
    ctx->pc = 0x80009D68u;
    // 80009D68: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_80009D6C:
    ctx->pc = 0x80009D6Cu;
    ctx->downcount -= 2;
    // 80009D6C: mtmsr   r3
    ctx->msr = ctx->gpr[3];

label_80009D70:
    ctx->pc = 0x80009D70u;
    // 80009D70: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_80009D74:
    ctx->pc = 0x80009D74u;
    ctx->downcount -= 2;
    // 80009D74: mfmsr   r8
    ctx->gpr[8] = ctx->msr;

label_80009D78:
    ctx->pc = 0x80009D78u;
    // 80009D78: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_80009D7C:
    ctx->downcount -= 2;
    // 80009D7C: cmpw    r10, r5
    {
        s32 val_a = (s32)(ctx->gpr[10]);
        s32 val_b = (s32)(ctx->gpr[5]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80009D80:
    // 80009D80: bc    12, 2, 0x80009DA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80009DA4;
        }
    }

label_80009D84:
    ctx->pc = 0x80009D84u;
    ctx->downcount -= 12;
    // 80009D84: mtmsr   r7
    ctx->msr = ctx->gpr[7];

label_80009D88:
    ctx->pc = 0x80009D88u;
    // 80009D88: sync
    ppc_memory_fence();

label_80009D8C:
    ctx->pc = 0x80009D8Cu;
    // 80009D8C: lbzx    r9, r10, r4
    {
        u32 ea = ctx->gpr[10] + ctx->gpr[4];
        ctx->gpr[9] = mem_read8(ctx, ea);
    }

label_80009D90:
    ctx->pc = 0x80009D90u;
    // 80009D90: mtmsr   r6
    ctx->msr = ctx->gpr[6];

label_80009D94:
    ctx->pc = 0x80009D94u;
    // 80009D94: sync
    ppc_memory_fence();

label_80009D98:
    ctx->pc = 0x80009D98u;
    // 80009D98: stbx    r9, r10, r3
    {
        u32 ea = ctx->gpr[10] + ctx->gpr[3];
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_80009D9C:
    // 80009D9C: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_80009DA0:
    // 80009DA0: b       0x80009D7C
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80009D7Cu;
                return;
            }
            goto label_80009D7C;
    }

label_80009DA4:
    ctx->pc = 0x80009DA4u;
    ctx->downcount -= 5;
    // 80009DA4: mtmsr   r8
    ctx->msr = ctx->gpr[8];

label_80009DA8:
    ctx->pc = 0x80009DA8u;
    // 80009DA8: sync
    ppc_memory_fence();

label_80009DAC:
    ctx->pc = 0x80009DACu;
    // 80009DAC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_80009DB0:
    ctx->pc = 0x80009DB0u;
    ctx->downcount -= 4;
    // 80009DB0: mtsrr0    r2
    ctx->srr0 = ctx->gpr[2];

label_80009DB4:
    ctx->pc = 0x80009DB4u;
    // 80009DB4: mtsrr1    r4
    ctx->srr1 = ctx->gpr[4];

label_80009DB8:
    ctx->pc = 0x80009DB8u;
    // 80009DB8: mfsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9342A6u, 0x80009DB8u);
    return;

label_80009DBC:
    ctx->pc = 0x80009DBCu;
    ctx->downcount -= 1;
    // 80009DBC: mfcr    r2
    ctx->gpr[2] = ctx->cr;

label_80009DC0:
    ctx->pc = 0x80009DC0u;
    // 80009DC0: mtsprg3    r2
    ppc_fallback_instruction(ctx, 0x7C5343A6u, 0x80009DC0u);
    return;

label_80009DC4:
    ctx->pc = 0x80009DC4u;
    ctx->downcount -= 17;
    // 80009DC4: lis     r2, -32738
    ctx->gpr[2] = ((u32)(s32)(-32738) << 16);

label_80009DC8:
    ctx->pc = 0x80009DC8u;
    // 80009DC8: ori     r2, r2, 0xADC4
    ctx->gpr[2] = ctx->gpr[2] | 0xADC4u;

label_80009DCC:
    ctx->pc = 0x80009DCCu;
    // 80009DCC: lwz     r2, 140(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(140);
        ctx->gpr[2] = mem_read32(ctx, ea);
    }

label_80009DD0:
    ctx->pc = 0x80009DD0u;
    // 80009DD0: ori     r2, r2, 0x8002
    ctx->gpr[2] = ctx->gpr[2] | 0x8002u;

label_80009DD4:
    ctx->pc = 0x80009DD4u;
    // 80009DD4: xori    r2, r2, 0x8002
    ctx->gpr[2] = ctx->gpr[2] ^ 0x8002u;

label_80009DD8:
    ctx->pc = 0x80009DD8u;
    // 80009DD8: sync
    ppc_memory_fence();

label_80009DDC:
    ctx->pc = 0x80009DDCu;
    // 80009DDC: mtmsr   r2
    ctx->msr = ctx->gpr[2];

label_80009DE0:
    ctx->pc = 0x80009DE0u;
    // 80009DE0: sync
    ppc_memory_fence();

label_80009DE4:
    ctx->pc = 0x80009DE4u;
    // 80009DE4: lis     r2, -32738
    ctx->gpr[2] = ((u32)(s32)(-32738) << 16);

label_80009DE8:
    ctx->pc = 0x80009DE8u;
    // 80009DE8: ori     r2, r2, 0xADC0
    ctx->gpr[2] = ctx->gpr[2] | 0xADC0u;

label_80009DEC:
    ctx->pc = 0x80009DECu;
    // 80009DEC: sth     r3, 0(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_80009DF0:
    ctx->pc = 0x80009DF0u;
    // 80009DF0: cmpwi   r3, 1280
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(1280);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80009DF4:
    ctx->pc = 0x80009DF4u;
    // 80009DF4: bc    4, 2, 0x80009E78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80009E78;
        }
    }

label_80009DF8:
    ctx->pc = 0x80009DF8u;
    ctx->downcount -= 5;
    // 80009DF8: lis     r2, -32738
    ctx->gpr[2] = ((u32)(s32)(-32738) << 16);

label_80009DFC:
    ctx->pc = 0x80009DFCu;
    // 80009DFC: ori     r2, r2, 0xAE68
    ctx->gpr[2] = ctx->gpr[2] | 0xAE68u;

label_80009E00:
    ctx->pc = 0x80009E00u;
    // 80009E00: mflr    r3
    ctx->gpr[3] = ctx->lr;

label_80009E04:
    ctx->pc = 0x80009E04u;
    // 80009E04: stw     r3, 1068(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(1068);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80009E08:
    ctx->pc = 0x80009E08u;
    // 80009E08: bl      0x8000BF3C
    {
            ctx->lr = 0x80009E0Cu;
            goto label_8000BF3C;
    }

label_80009E0C:
    ctx->pc = 0x80009E0Cu;
    ctx->downcount -= 11;
    // 80009E0C: lis     r2, -32738
    ctx->gpr[2] = ((u32)(s32)(-32738) << 16);

label_80009E10:
    ctx->pc = 0x80009E10u;
    // 80009E10: ori     r2, r2, 0xAE68
    ctx->gpr[2] = ctx->gpr[2] | 0xAE68u;

label_80009E14:
    ctx->pc = 0x80009E14u;
    // 80009E14: lwz     r3, 1068(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(1068);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80009E18:
    ctx->pc = 0x80009E18u;
    // 80009E18: mtlr    r3
    ctx->lr = ctx->gpr[3];

label_80009E1C:
    ctx->pc = 0x80009E1Cu;
    // 80009E1C: lis     r2, -32738
    ctx->gpr[2] = ((u32)(s32)(-32738) << 16);

label_80009E20:
    ctx->pc = 0x80009E20u;
    // 80009E20: ori     r2, r2, 0xADC4
    ctx->gpr[2] = ctx->gpr[2] | 0xADC4u;

label_80009E24:
    ctx->pc = 0x80009E24u;
    // 80009E24: lwz     r2, 160(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(160);
        ctx->gpr[2] = mem_read32(ctx, ea);
    }

label_80009E28:
    ctx->pc = 0x80009E28u;
    // 80009E28: lbz     r2, 0(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(0);
        ctx->gpr[2] = mem_read8(ctx, ea);
    }

label_80009E2C:
    ctx->pc = 0x80009E2Cu;
    // 80009E2C: cmpwi   r2, 0
    {
        s32 val_a = (s32)(ctx->gpr[2]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80009E30:
    ctx->pc = 0x80009E30u;
    // 80009E30: bc    12, 2, 0x80009E5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80009E5C;
        }
    }

label_80009E34:
    ctx->pc = 0x80009E34u;
    ctx->downcount -= 5;
    // 80009E34: lis     r2, -32739
    ctx->gpr[2] = ((u32)(s32)(-32739) << 16);

label_80009E38:
    ctx->pc = 0x80009E38u;
    // 80009E38: ori     r2, r2, 0xE8F4
    ctx->gpr[2] = ctx->gpr[2] | 0xE8F4u;

label_80009E3C:
    ctx->pc = 0x80009E3Cu;
    // 80009E3C: lbz     r2, 12(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(12);
        ctx->gpr[2] = mem_read8(ctx, ea);
    }

label_80009E40:
    ctx->pc = 0x80009E40u;
    // 80009E40: cmpwi   r2, 1
    {
        s32 val_a = (s32)(ctx->gpr[2]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80009E44:
    ctx->pc = 0x80009E44u;
    // 80009E44: bc    12, 2, 0x80009E5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80009E5C;
        }
    }

label_80009E48:
    ctx->pc = 0x80009E48u;
    ctx->downcount -= 5;
    // 80009E48: lis     r2, -32738
    ctx->gpr[2] = ((u32)(s32)(-32738) << 16);

label_80009E4C:
    ctx->pc = 0x80009E4Cu;
    // 80009E4C: ori     r2, r2, 0xADC4
    ctx->gpr[2] = ctx->gpr[2] | 0xADC4u;

label_80009E50:
    ctx->pc = 0x80009E50u;
    // 80009E50: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80009E54:
    ctx->pc = 0x80009E54u;
    // 80009E54: stb     r3, 156(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(156);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_80009E58:
    ctx->pc = 0x80009E58u;
    // 80009E58: b       0x80009E78
    {
            goto label_80009E78;
    }

label_80009E5C:
    ctx->pc = 0x80009E5Cu;
    ctx->downcount -= 8;
    // 80009E5C: lis     r2, -32738
    ctx->gpr[2] = ((u32)(s32)(-32738) << 16);

label_80009E60:
    ctx->pc = 0x80009E60u;
    // 80009E60: ori     r2, r2, 0xB298
    ctx->gpr[2] = ctx->gpr[2] | 0xB298u;

label_80009E64:
    ctx->pc = 0x80009E64u;
    // 80009E64: lwz     r3, 136(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(136);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80009E68:
    ctx->pc = 0x80009E68u;
    // 80009E68: mtcr    r3
    ctx->cr = (ctx->cr & ~0xFFFFFFFFu) | (ctx->gpr[3] & 0xFFFFFFFFu);

label_80009E6C:
    ctx->pc = 0x80009E6Cu;
    // 80009E6C: lwz     r3, 12(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80009E70:
    ctx->pc = 0x80009E70u;
    // 80009E70: lwz     r2, 8(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(8);
        ctx->gpr[2] = mem_read32(ctx, ea);
    }

label_80009E74:
    ctx->pc = 0x80009E74u;
    // 80009E74: rfi
    ppc_rfi(ctx, 0x80009E74u);
    return;

label_80009E78:
    ctx->pc = 0x80009E78u;
    ctx->downcount -= 8;
    // 80009E78: lis     r2, -32738
    ctx->gpr[2] = ((u32)(s32)(-32738) << 16);

label_80009E7C:
    ctx->pc = 0x80009E7Cu;
    // 80009E7C: ori     r2, r2, 0xADC0
    ctx->gpr[2] = ctx->gpr[2] | 0xADC0u;

label_80009E80:
    ctx->pc = 0x80009E80u;
    // 80009E80: lhz     r3, 0(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_80009E84:
    ctx->pc = 0x80009E84u;
    // 80009E84: lis     r2, -32739
    ctx->gpr[2] = ((u32)(s32)(-32739) << 16);

label_80009E88:
    ctx->pc = 0x80009E88u;
    // 80009E88: ori     r2, r2, 0xE8F4
    ctx->gpr[2] = ctx->gpr[2] | 0xE8F4u;

label_80009E8C:
    ctx->pc = 0x80009E8Cu;
    // 80009E8C: lbz     r2, 12(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(12);
        ctx->gpr[2] = mem_read8(ctx, ea);
    }

label_80009E90:
    ctx->pc = 0x80009E90u;
    // 80009E90: cmpwi   r2, 0
    {
        s32 val_a = (s32)(ctx->gpr[2]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80009E94:
    ctx->pc = 0x80009E94u;
    // 80009E94: bc    4, 2, 0x80009F44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80009F44;
        }
    }

label_80009E98:
    ctx->pc = 0x80009E98u;
    ctx->downcount -= 4;
    // 80009E98: lis     r2, -32738
    ctx->gpr[2] = ((u32)(s32)(-32738) << 16);

label_80009E9C:
    ctx->pc = 0x80009E9Cu;
    // 80009E9C: ori     r2, r2, 0xAE68
    ctx->gpr[2] = ctx->gpr[2] | 0xAE68u;

label_80009EA0:
    ctx->pc = 0x80009EA0u;
    // 80009EA0: stw     r0, 0(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80009EA4:
    ctx->pc = 0x80009EA4u;
    // 80009EA4: stw     r1, 4(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
    }

label_80009EA8:
    ctx->pc = 0x80009EA8u;
    // 80009EA8: mfsprg1    r0
    ppc_fallback_instruction(ctx, 0x7C1142A6u, 0x80009EA8u);
    return;

label_80009EAC:
    ctx->pc = 0x80009EACu;
    ctx->downcount -= 3;
    // 80009EAC: stw     r0, 8(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80009EB0:
    ctx->pc = 0x80009EB0u;
    // 80009EB0: sth     r3, 760(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(760);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_80009EB4:
    ctx->pc = 0x80009EB4u;
    // 80009EB4: sth     r3, 762(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(762);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_80009EB8:
    ctx->pc = 0x80009EB8u;
    // 80009EB8: mfsprg2    r0
    ppc_fallback_instruction(ctx, 0x7C1242A6u, 0x80009EB8u);
    return;

label_80009EBC:
    ctx->pc = 0x80009EBCu;
    ctx->downcount -= 14;
    // 80009EBC: stw     r0, 12(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80009EC0:
    ctx->pc = 0x80009EC0u;
    // 80009EC0: stmw     r4, 16(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(16);
        for (u32 r = 4; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80009EC4:
    ctx->pc = 0x80009EC4u;
    // 80009EC4: mfsrr0    r27
    ctx->gpr[27] = ctx->srr0;

label_80009EC8:
    ctx->pc = 0x80009EC8u;
    // 80009EC8: mflr    r28
    ctx->gpr[28] = ctx->lr;

label_80009ECC:
    ctx->pc = 0x80009ECCu;
    // 80009ECC: mfsprg3    r29
    ppc_fallback_instruction(ctx, 0x7FB342A6u, 0x80009ECCu);
    return;

label_80009ED0:
    ctx->pc = 0x80009ED0u;
    ctx->downcount -= 14;
    // 80009ED0: mfctr    r30
    ctx->gpr[30] = ctx->ctr;

label_80009ED4:
    ctx->pc = 0x80009ED4u;
    // 80009ED4: mfxer    r31
    ctx->gpr[31] = ctx->xer;

label_80009ED8:
    ctx->pc = 0x80009ED8u;
    // 80009ED8: stmw     r27, 128(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(128);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80009EDC:
    ctx->pc = 0x80009EDCu;
    // 80009EDC: bl      0x8000B7D0
    {
            ctx->lr = 0x80009EE0u;
            goto label_8000B7D0;
    }

label_80009EE0:
    ctx->pc = 0x80009EE0u;
    ctx->downcount -= 24;
    // 80009EE0: lis     r2, -32739
    ctx->gpr[2] = ((u32)(s32)(-32739) << 16);

label_80009EE4:
    ctx->pc = 0x80009EE4u;
    // 80009EE4: ori     r2, r2, 0xE8F4
    ctx->gpr[2] = ctx->gpr[2] | 0xE8F4u;

label_80009EE8:
    ctx->pc = 0x80009EE8u;
    // 80009EE8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80009EEC:
    ctx->pc = 0x80009EECu;
    // 80009EEC: stb     r3, 12(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_80009EF0:
    ctx->pc = 0x80009EF0u;
    // 80009EF0: lis     r2, -32738
    ctx->gpr[2] = ((u32)(s32)(-32738) << 16);

label_80009EF4:
    ctx->pc = 0x80009EF4u;
    // 80009EF4: ori     r2, r2, 0xADC4
    ctx->gpr[2] = ctx->gpr[2] | 0xADC4u;

label_80009EF8:
    ctx->pc = 0x80009EF8u;
    // 80009EF8: lwz     r0, 140(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(140);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80009EFC:
    ctx->pc = 0x80009EFCu;
    // 80009EFC: sync
    ppc_memory_fence();

label_80009F00:
    ctx->pc = 0x80009F00u;
    // 80009F00: mtmsr   r0
    ctx->msr = ctx->gpr[0];

label_80009F04:
    ctx->pc = 0x80009F04u;
    // 80009F04: sync
    ppc_memory_fence();

label_80009F08:
    ctx->pc = 0x80009F08u;
    // 80009F08: lwz     r0, 128(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(128);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80009F0C:
    ctx->pc = 0x80009F0Cu;
    // 80009F0C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80009F10:
    ctx->pc = 0x80009F10u;
    // 80009F10: lwz     r0, 132(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80009F14:
    ctx->pc = 0x80009F14u;
    // 80009F14: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80009F18:
    ctx->pc = 0x80009F18u;
    // 80009F18: lwz     r0, 136(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(136);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80009F1C:
    ctx->pc = 0x80009F1Cu;
    // 80009F1C: mtxer    r0
    ctx->xer = ctx->gpr[0];

label_80009F20:
    ctx->pc = 0x80009F20u;
    // 80009F20: lwz     r0, 148(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80009F24:
    ctx->pc = 0x80009F24u;
    // 80009F24: mtdsisr    r0
    ppc_fallback_instruction(ctx, 0x7C1203A6u, 0x80009F24u);
    return;

label_80009F28:
    ctx->pc = 0x80009F28u;
    ctx->downcount -= 1;
    // 80009F28: lwz     r0, 144(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(144);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80009F2C:
    ctx->pc = 0x80009F2Cu;
    // 80009F2C: mtdar    r0
    ppc_fallback_instruction(ctx, 0x7C1303A6u, 0x80009F2Cu);
    return;

label_80009F30:
    ctx->pc = 0x80009F30u;
    ctx->downcount -= 15;
    // 80009F30: lmw     r3, 12(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(12);
        for (u32 r = 3; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80009F34:
    ctx->pc = 0x80009F34u;
    // 80009F34: lwz     r0, 0(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80009F38:
    ctx->pc = 0x80009F38u;
    // 80009F38: lwz     r1, 4(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(4);
        ctx->gpr[1] = mem_read32(ctx, ea);
    }

label_80009F3C:
    ctx->pc = 0x80009F3Cu;
    // 80009F3C: lwz     r2, 8(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(8);
        ctx->gpr[2] = mem_read32(ctx, ea);
    }

label_80009F40:
    ctx->pc = 0x80009F40u;
    // 80009F40: b       0x8000A754
    {
            goto label_8000A754;
    }

label_80009F44:
    ctx->pc = 0x80009F44u;
    ctx->downcount -= 8;
    // 80009F44: lis     r2, -32739
    ctx->gpr[2] = ((u32)(s32)(-32739) << 16);

label_80009F48:
    ctx->pc = 0x80009F48u;
    // 80009F48: ori     r2, r2, 0xE8F4
    ctx->gpr[2] = ctx->gpr[2] | 0xE8F4u;

label_80009F4C:
    ctx->pc = 0x80009F4Cu;
    // 80009F4C: sth     r3, 8(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_80009F50:
    ctx->pc = 0x80009F50u;
    // 80009F50: mfsrr0    r3
    ctx->gpr[3] = ctx->srr0;

label_80009F54:
    ctx->pc = 0x80009F54u;
    // 80009F54: stw     r3, 0(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80009F58:
    ctx->pc = 0x80009F58u;
    // 80009F58: lhz     r3, 8(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_80009F5C:
    ctx->pc = 0x80009F5Cu;
    // 80009F5C: cmpwi   r3, 512
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(512);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80009F60:
    ctx->pc = 0x80009F60u;
    // 80009F60: bc    12, 2, 0x80009FB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80009FB0;
        }
    }

label_80009F64:
    ctx->pc = 0x80009F64u;
    ctx->downcount -= 2;
    // 80009F64: cmpwi   r3, 768
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(768);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80009F68:
    ctx->pc = 0x80009F68u;
    // 80009F68: bc    12, 2, 0x80009FB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80009FB0;
        }
    }

label_80009F6C:
    ctx->pc = 0x80009F6Cu;
    ctx->downcount -= 2;
    // 80009F6C: cmpwi   r3, 1024
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(1024);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80009F70:
    ctx->pc = 0x80009F70u;
    // 80009F70: bc    12, 2, 0x80009FB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80009FB0;
        }
    }

label_80009F74:
    ctx->pc = 0x80009F74u;
    ctx->downcount -= 2;
    // 80009F74: cmpwi   r3, 1536
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(1536);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80009F78:
    ctx->pc = 0x80009F78u;
    // 80009F78: bc    12, 2, 0x80009FB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80009FB0;
        }
    }

label_80009F7C:
    ctx->pc = 0x80009F7Cu;
    ctx->downcount -= 2;
    // 80009F7C: cmpwi   r3, 1792
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(1792);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80009F80:
    ctx->pc = 0x80009F80u;
    // 80009F80: bc    12, 2, 0x80009FB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80009FB0;
        }
    }

label_80009F84:
    ctx->pc = 0x80009F84u;
    ctx->downcount -= 2;
    // 80009F84: cmpwi   r3, 2048
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(2048);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80009F88:
    ctx->pc = 0x80009F88u;
    // 80009F88: bc    12, 2, 0x80009FB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80009FB0;
        }
    }

label_80009F8C:
    ctx->pc = 0x80009F8Cu;
    ctx->downcount -= 2;
    // 80009F8C: cmpwi   r3, 4096
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(4096);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80009F90:
    ctx->pc = 0x80009F90u;
    // 80009F90: bc    12, 2, 0x80009FB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80009FB0;
        }
    }

label_80009F94:
    ctx->pc = 0x80009F94u;
    ctx->downcount -= 2;
    // 80009F94: cmpwi   r3, 4352
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(4352);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80009F98:
    ctx->pc = 0x80009F98u;
    // 80009F98: bc    12, 2, 0x80009FB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80009FB0;
        }
    }

label_80009F9C:
    ctx->pc = 0x80009F9Cu;
    ctx->downcount -= 2;
    // 80009F9C: cmpwi   r3, 4608
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(4608);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80009FA0:
    ctx->pc = 0x80009FA0u;
    // 80009FA0: bc    12, 2, 0x80009FB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80009FB0;
        }
    }

label_80009FA4:
    ctx->pc = 0x80009FA4u;
    ctx->downcount -= 2;
    // 80009FA4: cmpwi   r3, 4864
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(4864);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80009FA8:
    ctx->pc = 0x80009FA8u;
    // 80009FA8: bc    12, 2, 0x80009FB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80009FB0;
        }
    }

label_80009FAC:
    ctx->pc = 0x80009FACu;
    ctx->downcount -= 1;
    // 80009FAC: b       0x80009FBC
    {
            goto label_80009FBC;
    }

label_80009FB0:
    ctx->pc = 0x80009FB0u;
    ctx->downcount -= 4;
    // 80009FB0: mfsrr0    r3
    ctx->gpr[3] = ctx->srr0;

label_80009FB4:
    ctx->pc = 0x80009FB4u;
    // 80009FB4: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_80009FB8:
    ctx->pc = 0x80009FB8u;
    // 80009FB8: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_80009FBC:
    ctx->pc = 0x80009FBCu;
    ctx->downcount -= 4;
    // 80009FBC: lis     r2, -32739
    ctx->gpr[2] = ((u32)(s32)(-32739) << 16);

label_80009FC0:
    ctx->pc = 0x80009FC0u;
    // 80009FC0: ori     r2, r2, 0xE8F4
    ctx->gpr[2] = ctx->gpr[2] | 0xE8F4u;

label_80009FC4:
    ctx->pc = 0x80009FC4u;
    // 80009FC4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80009FC8:
    ctx->pc = 0x80009FC8u;
    // 80009FC8: stb     r3, 13(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_80009FCC:
    ctx->pc = 0x80009FCCu;
    // 80009FCC: mfsprg3    r3
    ppc_fallback_instruction(ctx, 0x7C7342A6u, 0x80009FCCu);
    return;

label_80009FD0:
    ctx->pc = 0x80009FD0u;
    ctx->downcount -= 1;
    // 80009FD0: mtcr    r3
    ctx->cr = (ctx->cr & ~0xFFFFFFFFu) | (ctx->gpr[3] & 0xFFFFFFFFu);

label_80009FD4:
    ctx->pc = 0x80009FD4u;
    // 80009FD4: mfsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5142A6u, 0x80009FD4u);
    return;

label_80009FD8:
    ctx->pc = 0x80009FD8u;
    // 80009FD8: mfsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7242A6u, 0x80009FD8u);
    return;

label_80009FDC:
    ctx->pc = 0x80009FDCu;
    ctx->downcount -= 2;
    // 80009FDC: rfi
    ppc_rfi(ctx, 0x80009FDCu);
    return;

label_80009FE0:
    ctx->pc = 0x80009FE0u;
    ctx->downcount -= 21;
    // 80009FE0: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_80009FE4:
    ctx->pc = 0x80009FE4u;
    // 80009FE4: ori     r3, r3, 0xADC4
    ctx->gpr[3] = ctx->gpr[3] | 0xADC4u;

label_80009FE8:
    ctx->pc = 0x80009FE8u;
    // 80009FE8: stmw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        for (u32 r = 0; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80009FEC:
    ctx->pc = 0x80009FECu;
    // 80009FEC: mfmsr   r0
    ctx->gpr[0] = ctx->msr;

label_80009FF0:
    ctx->pc = 0x80009FF0u;
    // 80009FF0: stw     r0, 140(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80009FF4:
    ctx->pc = 0x80009FF4u;
    // 80009FF4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80009FF8:
    ctx->pc = 0x80009FF8u;
    // 80009FF8: stw     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80009FFC:
    ctx->pc = 0x80009FFCu;
    // 80009FFC: mfctr    r0
    ctx->gpr[0] = ctx->ctr;

label_8000A000:
    ctx->pc = 0x8000A000u;
    // 8000A000: stw     r0, 132(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A004:
    ctx->pc = 0x8000A004u;
    // 8000A004: mfxer    r0
    ctx->gpr[0] = ctx->xer;

label_8000A008:
    ctx->pc = 0x8000A008u;
    // 8000A008: stw     r0, 136(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A00C:
    ctx->pc = 0x8000A00Cu;
    // 8000A00C: mfdsisr    r0
    ppc_fallback_instruction(ctx, 0x7C1202A6u, 0x8000A00Cu);
    return;

label_8000A010:
    ctx->pc = 0x8000A010u;
    ctx->downcount -= 1;
    // 8000A010: stw     r0, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A014:
    ctx->pc = 0x8000A014u;
    // 8000A014: mfdar    r0
    ppc_fallback_instruction(ctx, 0x7C1302A6u, 0x8000A014u);
    return;

label_8000A018:
    ctx->pc = 0x8000A018u;
    ctx->downcount -= 12;
    // 8000A018: stw     r0, 144(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A01C:
    ctx->pc = 0x8000A01Cu;
    // 8000A01C: li      r1, -32766
    ctx->gpr[1] = (u32)(s32)(-32766);

label_8000A020:
    ctx->pc = 0x8000A020u;
    // 8000A020: nor   r1, r1, r1
    {
        ctx->gpr[1] = ~(ctx->gpr[1] | ctx->gpr[1]);
    }

label_8000A024:
    ctx->pc = 0x8000A024u;
    // 8000A024: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_8000A028:
    ctx->pc = 0x8000A028u;
    // 8000A028: and   r3, r3, r1
    {
        ctx->gpr[3] = ctx->gpr[3] & ctx->gpr[1];
    }

label_8000A02C:
    ctx->pc = 0x8000A02Cu;
    // 8000A02C: mtmsr   r3
    ctx->msr = ctx->gpr[3];

label_8000A030:
    ctx->pc = 0x8000A030u;
    // 8000A030: lis     r2, -32738
    ctx->gpr[2] = ((u32)(s32)(-32738) << 16);

label_8000A034:
    ctx->pc = 0x8000A034u;
    // 8000A034: ori     r2, r2, 0xADC4
    ctx->gpr[2] = ctx->gpr[2] | 0xADC4u;

label_8000A038:
    ctx->pc = 0x8000A038u;
    // 8000A038: lwz     r2, 160(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(160);
        ctx->gpr[2] = mem_read32(ctx, ea);
    }

label_8000A03C:
    ctx->pc = 0x8000A03Cu;
    // 8000A03C: lbz     r2, 0(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(0);
        ctx->gpr[2] = mem_read8(ctx, ea);
    }

label_8000A040:
    ctx->pc = 0x8000A040u;
    // 8000A040: cmpwi   r2, 0
    {
        s32 val_a = (s32)(ctx->gpr[2]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000A044:
    ctx->pc = 0x8000A044u;
    // 8000A044: bc    12, 2, 0x8000A05C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000A05C;
        }
    }

label_8000A048:
    ctx->pc = 0x8000A048u;
    ctx->downcount -= 5;
    // 8000A048: lis     r2, -32738
    ctx->gpr[2] = ((u32)(s32)(-32738) << 16);

label_8000A04C:
    ctx->pc = 0x8000A04Cu;
    // 8000A04C: ori     r2, r2, 0xADC4
    ctx->gpr[2] = ctx->gpr[2] | 0xADC4u;

label_8000A050:
    ctx->pc = 0x8000A050u;
    // 8000A050: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8000A054:
    ctx->pc = 0x8000A054u;
    // 8000A054: stb     r3, 156(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(156);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_8000A058:
    ctx->pc = 0x8000A058u;
    // 8000A058: b       0x8000A0A4
    {
            goto label_8000A0A4;
    }

label_8000A05C:
    ctx->pc = 0x8000A05Cu;
    ctx->downcount -= 5;
    // 8000A05C: lis     r2, -32739
    ctx->gpr[2] = ((u32)(s32)(-32739) << 16);

label_8000A060:
    ctx->pc = 0x8000A060u;
    // 8000A060: ori     r2, r2, 0xE8F4
    ctx->gpr[2] = ctx->gpr[2] | 0xE8F4u;

label_8000A064:
    ctx->pc = 0x8000A064u;
    // 8000A064: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000A068:
    ctx->pc = 0x8000A068u;
    // 8000A068: stb     r3, 12(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_8000A06C:
    ctx->pc = 0x8000A06Cu;
    // 8000A06C: bl      0x8000B988
    {
            ctx->lr = 0x8000A070u;
            goto label_8000B988;
    }

label_8000A070:
    ctx->pc = 0x8000A070u;
    ctx->downcount -= 38;
    // 8000A070: lis     r2, -32738
    ctx->gpr[2] = ((u32)(s32)(-32738) << 16);

label_8000A074:
    ctx->pc = 0x8000A074u;
    // 8000A074: ori     r2, r2, 0xAE68
    ctx->gpr[2] = ctx->gpr[2] | 0xAE68u;

label_8000A078:
    ctx->pc = 0x8000A078u;
    // 8000A078: lmw     r27, 128(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(128);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8000A07C:
    ctx->pc = 0x8000A07Cu;
    // 8000A07C: mtsrr0    r27
    ctx->srr0 = ctx->gpr[27];

label_8000A080:
    ctx->pc = 0x8000A080u;
    // 8000A080: mtlr    r28
    ctx->lr = ctx->gpr[28];

label_8000A084:
    ctx->pc = 0x8000A084u;
    // 8000A084: mtcr    r29
    ctx->cr = (ctx->cr & ~0xFFFFFFFFu) | (ctx->gpr[29] & 0xFFFFFFFFu);

label_8000A088:
    ctx->pc = 0x8000A088u;
    // 8000A088: mtctr    r30
    ctx->ctr = ctx->gpr[30];

label_8000A08C:
    ctx->pc = 0x8000A08Cu;
    // 8000A08C: mtxer    r31
    ctx->xer = ctx->gpr[31];

label_8000A090:
    ctx->pc = 0x8000A090u;
    // 8000A090: lmw     r3, 12(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(12);
        for (u32 r = 3; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8000A094:
    ctx->pc = 0x8000A094u;
    // 8000A094: lwz     r0, 0(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A098:
    ctx->pc = 0x8000A098u;
    // 8000A098: lwz     r1, 4(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(4);
        ctx->gpr[1] = mem_read32(ctx, ea);
    }

label_8000A09C:
    ctx->pc = 0x8000A09Cu;
    // 8000A09C: lwz     r2, 8(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(8);
        ctx->gpr[2] = mem_read32(ctx, ea);
    }

label_8000A0A0:
    ctx->pc = 0x8000A0A0u;
    // 8000A0A0: rfi
    ppc_rfi(ctx, 0x8000A0A0u);
    return;

label_8000A0A4:
    ctx->pc = 0x8000A0A4u;
    ctx->downcount -= 20;
    // 8000A0A4: lis     r2, -32738
    ctx->gpr[2] = ((u32)(s32)(-32738) << 16);

label_8000A0A8:
    ctx->pc = 0x8000A0A8u;
    // 8000A0A8: ori     r2, r2, 0xADC4
    ctx->gpr[2] = ctx->gpr[2] | 0xADC4u;

label_8000A0AC:
    ctx->pc = 0x8000A0ACu;
    // 8000A0AC: lwz     r0, 140(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(140);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A0B0:
    ctx->pc = 0x8000A0B0u;
    // 8000A0B0: sync
    ppc_memory_fence();

label_8000A0B4:
    ctx->pc = 0x8000A0B4u;
    // 8000A0B4: mtmsr   r0
    ctx->msr = ctx->gpr[0];

label_8000A0B8:
    ctx->pc = 0x8000A0B8u;
    // 8000A0B8: sync
    ppc_memory_fence();

label_8000A0BC:
    ctx->pc = 0x8000A0BCu;
    // 8000A0BC: lwz     r0, 128(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(128);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A0C0:
    ctx->pc = 0x8000A0C0u;
    // 8000A0C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000A0C4:
    ctx->pc = 0x8000A0C4u;
    // 8000A0C4: lwz     r0, 132(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A0C8:
    ctx->pc = 0x8000A0C8u;
    // 8000A0C8: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_8000A0CC:
    ctx->pc = 0x8000A0CCu;
    // 8000A0CC: lwz     r0, 136(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(136);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A0D0:
    ctx->pc = 0x8000A0D0u;
    // 8000A0D0: mtxer    r0
    ctx->xer = ctx->gpr[0];

label_8000A0D4:
    ctx->pc = 0x8000A0D4u;
    // 8000A0D4: lwz     r0, 148(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A0D8:
    ctx->pc = 0x8000A0D8u;
    // 8000A0D8: mtdsisr    r0
    ppc_fallback_instruction(ctx, 0x7C1203A6u, 0x8000A0D8u);
    return;

label_8000A0DC:
    ctx->pc = 0x8000A0DCu;
    ctx->downcount -= 1;
    // 8000A0DC: lwz     r0, 144(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(144);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A0E0:
    ctx->pc = 0x8000A0E0u;
    // 8000A0E0: mtdar    r0
    ppc_fallback_instruction(ctx, 0x7C1303A6u, 0x8000A0E0u);
    return;

label_8000A0E4:
    ctx->pc = 0x8000A0E4u;
    ctx->downcount -= 15;
    // 8000A0E4: lmw     r3, 12(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(12);
        for (u32 r = 3; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8000A0E8:
    ctx->pc = 0x8000A0E8u;
    // 8000A0E8: lwz     r0, 0(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A0EC:
    ctx->pc = 0x8000A0ECu;
    // 8000A0EC: lwz     r1, 4(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(4);
        ctx->gpr[1] = mem_read32(ctx, ea);
    }

label_8000A0F0:
    ctx->pc = 0x8000A0F0u;
    // 8000A0F0: lwz     r2, 8(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(8);
        ctx->gpr[2] = mem_read32(ctx, ea);
    }

label_8000A0F4:
    ctx->pc = 0x8000A0F4u;
    // 8000A0F4: b       0x8000A754
    {
            goto label_8000A754;
    }

label_8000A0F8:
    ctx->pc = 0x8000A0F8u;
    ctx->downcount -= 4;
    // 8000A0F8: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_8000A0FC:
    ctx->pc = 0x8000A0FCu;
    // 8000A0FC: addi    r4, r4, -21052
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-21052);

label_8000A100:
    ctx->pc = 0x8000A100u;
    // 8000A100: stw     r3, 160(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8000A104:
    ctx->pc = 0x8000A104u;
    // 8000A104: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000A108:
    ctx->pc = 0x8000A108u;
    ctx->downcount -= 6;
    // 8000A108: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000A10C:
    ctx->pc = 0x8000A10Cu;
    // 8000A10C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8000A110:
    ctx->pc = 0x8000A110u;
    // 8000A110: addi    r4, r3, -21052
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-21052);

label_8000A114:
    ctx->pc = 0x8000A114u;
    // 8000A114: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000A118:
    ctx->pc = 0x8000A118u;
    // 8000A118: stw     r0, 152(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A11C:
    ctx->pc = 0x8000A11Cu;
    // 8000A11C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000A120:
    ctx->pc = 0x8000A120u;
    ctx->downcount -= 4;
    // 8000A120: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_8000A124:
    ctx->pc = 0x8000A124u;
    // 8000A124: addi    r4, r4, -21052
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-21052);

label_8000A128:
    ctx->pc = 0x8000A128u;
    // 8000A128: stw     r3, 152(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8000A12C:
    ctx->pc = 0x8000A12Cu;
    // 8000A12C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000A130:
    ctx->pc = 0x8000A130u;
    ctx->downcount -= 4;
    // 8000A130: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000A134:
    ctx->pc = 0x8000A134u;
    // 8000A134: addi    r3, r3, -21052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-21052);

label_8000A138:
    ctx->pc = 0x8000A138u;
    // 8000A138: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000A13C:
    ctx->pc = 0x8000A13Cu;
    // 8000A13C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000A140:
    ctx->pc = 0x8000A140u;
    ctx->downcount -= 19;
    // 8000A140: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000A144:
    ctx->pc = 0x8000A144u;
    // 8000A144: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000A148:
    ctx->pc = 0x8000A148u;
    // 8000A148: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000A14C:
    ctx->pc = 0x8000A14Cu;
    // 8000A14C: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A150:
    ctx->pc = 0x8000A150u;
    // 8000A150: stmw     r27, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8000A154:
    ctx->pc = 0x8000A154u;
    // 8000A154: addi    r31, r3, -20888
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-20888);

label_8000A158:
    ctx->pc = 0x8000A158u;
    // 8000A158: lwz     r27, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_8000A15C:
    ctx->pc = 0x8000A15Cu;
    // 8000A15C: cmpwi   r27, 209
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(209);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000A160:
    ctx->pc = 0x8000A160u;
    // 8000A160: bc    12, 2, 0x8000A1A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000A1A0;
        }
    }

label_8000A164:
    ctx->pc = 0x8000A164u;
    ctx->downcount -= 2;
    // 8000A164: cmpwi   r27, 208
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(208);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000A168:
    ctx->pc = 0x8000A168u;
    // 8000A168: bc    12, 2, 0x8000A1A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000A1A0;
        }
    }

label_8000A16C:
    ctx->pc = 0x8000A16Cu;
    ctx->downcount -= 2;
    // 8000A16C: cmpwi   r27, 210
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(210);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000A170:
    ctx->pc = 0x8000A170u;
    // 8000A170: bc    12, 2, 0x8000A1A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000A1A0;
        }
    }

label_8000A174:
    ctx->pc = 0x8000A174u;
    ctx->downcount -= 2;
    // 8000A174: cmpwi   r27, 211
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(211);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000A178:
    ctx->pc = 0x8000A178u;
    // 8000A178: bc    12, 2, 0x8000A1A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000A1A0;
        }
    }

label_8000A17C:
    ctx->pc = 0x8000A17Cu;
    ctx->downcount -= 2;
    // 8000A17C: cmpwi   r27, 212
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(212);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000A180:
    ctx->pc = 0x8000A180u;
    // 8000A180: bc    12, 2, 0x8000A1A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000A1A0;
        }
    }

label_8000A184:
    ctx->pc = 0x8000A184u;
    ctx->downcount -= 3;
    // 8000A184: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_8000A188:
    ctx->pc = 0x8000A188u;
    // 8000A188: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8000A18C:
    ctx->pc = 0x8000A18Cu;
    // 8000A18C: bl      0x800073E8
    {
            ctx->lr = 0x8000A190u;
            ctx->pc = 0x800073E8u;
            return;
    }

label_8000A190:
    ctx->pc = 0x8000A190u;
    ctx->downcount -= 2;
    // 8000A190: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_8000A194:
    ctx->pc = 0x8000A194u;
    // 8000A194: bl      0x80007400
    {
            ctx->lr = 0x8000A198u;
            ctx->pc = 0x80007400u;
            return;
    }

label_8000A198:
    ctx->pc = 0x8000A198u;
    ctx->downcount -= 2;
    // 8000A198: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000A19C:
    ctx->pc = 0x8000A19Cu;
    // 8000A19C: b       0x8000A32C
    {
            goto label_8000A32C;
    }

label_8000A1A0:
    ctx->pc = 0x8000A1A0u;
    ctx->downcount -= 2;
    // 8000A1A0: cmpwi   r27, 210
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(210);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000A1A4:
    ctx->pc = 0x8000A1A4u;
    // 8000A1A4: bc    4, 2, 0x8000A1F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000A1F4;
        }
    }

label_8000A1A8:
    ctx->pc = 0x8000A1A8u;
    ctx->downcount -= 8;
    // 8000A1A8: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000A1AC:
    ctx->pc = 0x8000A1ACu;
    // 8000A1AC: addi    r6, r1, 12
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(12);

label_8000A1B0:
    ctx->pc = 0x8000A1B0u;
    // 8000A1B0: addi    r4, r3, -20888
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-20888);

label_8000A1B4:
    ctx->pc = 0x8000A1B4u;
    // 8000A1B4: lwz     r0, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A1B8:
    ctx->pc = 0x8000A1B8u;
    // 8000A1B8: lwz     r3, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000A1BC:
    ctx->pc = 0x8000A1BCu;
    // 8000A1BC: lwz     r5, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8000A1C0:
    ctx->pc = 0x8000A1C0u;
    // 8000A1C0: rlwinm r4, r0, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_8000A1C4:
    ctx->pc = 0x8000A1C4u;
    // 8000A1C4: bl      0x80009688
    {
            ctx->lr = 0x8000A1C8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80009688u;
                return;
            }
            goto label_80009688;
    }

label_8000A1C8:
    ctx->pc = 0x8000A1C8u;
    ctx->downcount -= 4;
    // 8000A1C8: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A1CC:
    ctx->pc = 0x8000A1CCu;
    // 8000A1CC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000A1D0:
    ctx->pc = 0x8000A1D0u;
    // 8000A1D0: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000A1D4:
    ctx->pc = 0x8000A1D4u;
    // 8000A1D4: bc    4, 2, 0x8000A1E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000A1E8;
        }
    }

label_8000A1D8:
    ctx->pc = 0x8000A1D8u;
    ctx->downcount -= 2;
    // 8000A1D8: cmpwi   r30, 0
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

label_8000A1DC:
    ctx->pc = 0x8000A1DCu;
    // 8000A1DC: bc    12, 2, 0x8000A1E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000A1E8;
        }
    }

label_8000A1E0:
    ctx->pc = 0x8000A1E0u;
    ctx->downcount -= 2;
    // 8000A1E0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8000A1E4:
    ctx->pc = 0x8000A1E4u;
    // 8000A1E4: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A1E8:
    ctx->pc = 0x8000A1E8u;
    ctx->downcount -= 3;
    // 8000A1E8: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A1EC:
    ctx->pc = 0x8000A1ECu;
    // 8000A1EC: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A1F0:
    ctx->pc = 0x8000A1F0u;
    // 8000A1F0: b       0x8000A314
    {
            goto label_8000A314;
    }

label_8000A1F4:
    ctx->pc = 0x8000A1F4u;
    ctx->downcount -= 2;
    // 8000A1F4: cmpwi   r27, 211
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(211);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000A1F8:
    ctx->pc = 0x8000A1F8u;
    // 8000A1F8: bc    4, 2, 0x8000A23C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000A23C;
        }
    }

label_8000A1FC:
    ctx->pc = 0x8000A1FCu;
    ctx->downcount -= 5;
    // 8000A1FC: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000A200:
    ctx->pc = 0x8000A200u;
    // 8000A200: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_8000A204:
    ctx->pc = 0x8000A204u;
    // 8000A204: addi    r3, r3, -20888
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20888);

label_8000A208:
    ctx->pc = 0x8000A208u;
    // 8000A208: lwz     r3, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000A20C:
    ctx->pc = 0x8000A20Cu;
    // 8000A20C: bl      0x800095A0
    {
            ctx->lr = 0x8000A210u;
            ctx->pc = 0x800095A0u;
            return;
    }

label_8000A210:
    ctx->pc = 0x8000A210u;
    ctx->downcount -= 4;
    // 8000A210: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A214:
    ctx->pc = 0x8000A214u;
    // 8000A214: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000A218:
    ctx->pc = 0x8000A218u;
    // 8000A218: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000A21C:
    ctx->pc = 0x8000A21Cu;
    // 8000A21C: bc    4, 2, 0x8000A230
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000A230;
        }
    }

label_8000A220:
    ctx->pc = 0x8000A220u;
    ctx->downcount -= 2;
    // 8000A220: cmpwi   r30, 0
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

label_8000A224:
    ctx->pc = 0x8000A224u;
    // 8000A224: bc    12, 2, 0x8000A230
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000A230;
        }
    }

label_8000A228:
    ctx->pc = 0x8000A228u;
    ctx->downcount -= 2;
    // 8000A228: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8000A22C:
    ctx->pc = 0x8000A22Cu;
    // 8000A22C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A230:
    ctx->pc = 0x8000A230u;
    ctx->downcount -= 3;
    // 8000A230: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A234:
    ctx->pc = 0x8000A234u;
    // 8000A234: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A238:
    ctx->pc = 0x8000A238u;
    // 8000A238: b       0x8000A314
    {
            goto label_8000A314;
    }

label_8000A23C:
    ctx->pc = 0x8000A23Cu;
    ctx->downcount -= 2;
    // 8000A23C: cmpwi   r27, 212
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(212);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000A240:
    ctx->pc = 0x8000A240u;
    // 8000A240: bc    4, 2, 0x8000A2A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000A2A8;
        }
    }

label_8000A244:
    ctx->pc = 0x8000A244u;
    ctx->downcount -= 11;
    // 8000A244: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000A248:
    ctx->pc = 0x8000A248u;
    // 8000A248: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_8000A24C:
    ctx->pc = 0x8000A24Cu;
    // 8000A24C: addi    r29, r3, -20888
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(-20888);

label_8000A250:
    ctx->pc = 0x8000A250u;
    // 8000A250: addi    r6, r1, 12
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(12);

label_8000A254:
    ctx->pc = 0x8000A254u;
    // 8000A254: lwz     r3, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000A258:
    ctx->pc = 0x8000A258u;
    // 8000A258: lwz     r0, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A25C:
    ctx->pc = 0x8000A25Cu;
    // 8000A25C: lwz     r7, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8000A260:
    ctx->pc = 0x8000A260u;
    // 8000A260: lwz     r3, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000A264:
    ctx->pc = 0x8000A264u;
    // 8000A264: rlwinm r5, r0, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_8000A268:
    ctx->pc = 0x8000A268u;
    // 8000A268: stw     r7, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8000A26C:
    ctx->pc = 0x8000A26Cu;
    // 8000A26C: bl      0x80009490
    {
            ctx->lr = 0x8000A270u;
            ctx->pc = 0x80009490u;
            return;
    }

label_8000A270:
    ctx->pc = 0x8000A270u;
    ctx->downcount -= 4;
    // 8000A270: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A274:
    ctx->pc = 0x8000A274u;
    // 8000A274: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000A278:
    ctx->pc = 0x8000A278u;
    // 8000A278: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000A27C:
    ctx->pc = 0x8000A27Cu;
    // 8000A27C: bc    4, 2, 0x8000A290
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000A290;
        }
    }

label_8000A280:
    ctx->pc = 0x8000A280u;
    ctx->downcount -= 2;
    // 8000A280: cmpwi   r30, 0
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

label_8000A284:
    ctx->pc = 0x8000A284u;
    // 8000A284: bc    12, 2, 0x8000A290
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000A290;
        }
    }

label_8000A288:
    ctx->pc = 0x8000A288u;
    ctx->downcount -= 2;
    // 8000A288: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8000A28C:
    ctx->pc = 0x8000A28Cu;
    // 8000A28C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A290:
    ctx->pc = 0x8000A290u;
    ctx->downcount -= 6;
    // 8000A290: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000A294:
    ctx->pc = 0x8000A294u;
    // 8000A294: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A298:
    ctx->pc = 0x8000A298u;
    // 8000A298: stw     r3, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8000A29C:
    ctx->pc = 0x8000A29Cu;
    // 8000A29C: lwz     r3, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000A2A0:
    ctx->pc = 0x8000A2A0u;
    // 8000A2A0: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A2A4:
    ctx->pc = 0x8000A2A4u;
    // 8000A2A4: b       0x8000A314
    {
            goto label_8000A314;
    }

label_8000A2A8:
    ctx->pc = 0x8000A2A8u;
    ctx->downcount -= 12;
    // 8000A2A8: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000A2AC:
    ctx->pc = 0x8000A2ACu;
    // 8000A2AC: subfic  r0, r27, 209
    {
        u64 res = (u64)(u32)(s32)(209) + (u64)(~ctx->gpr[27]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8000A2B0:
    ctx->pc = 0x8000A2B0u;
    // 8000A2B0: addi    r29, r3, -20888
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(-20888);

label_8000A2B4:
    ctx->pc = 0x8000A2B4u;
    // 8000A2B4: addi    r6, r1, 12
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(12);

label_8000A2B8:
    ctx->pc = 0x8000A2B8u;
    // 8000A2B8: lwz     r28, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_8000A2BC:
    ctx->pc = 0x8000A2BCu;
    // 8000A2BC: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_8000A2C0:
    ctx->pc = 0x8000A2C0u;
    // 8000A2C0: lwz     r3, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000A2C4:
    ctx->pc = 0x8000A2C4u;
    // 8000A2C4: rlwinm r8, r0, 27, 5, 31
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_8000A2C8:
    ctx->pc = 0x8000A2C8u;
    // 8000A2C8: lwz     r4, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000A2CC:
    ctx->pc = 0x8000A2CCu;
    // 8000A2CC: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8000A2D0:
    ctx->pc = 0x8000A2D0u;
    // 8000A2D0: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_8000A2D4:
    ctx->pc = 0x8000A2D4u;
    // 8000A2D4: bl      0x80009984
    {
            ctx->lr = 0x8000A2D8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80009984u;
                return;
            }
            goto label_80009984;
    }

label_8000A2D8:
    ctx->pc = 0x8000A2D8u;
    ctx->downcount -= 4;
    // 8000A2D8: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A2DC:
    ctx->pc = 0x8000A2DCu;
    // 8000A2DC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000A2E0:
    ctx->pc = 0x8000A2E0u;
    // 8000A2E0: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000A2E4:
    ctx->pc = 0x8000A2E4u;
    // 8000A2E4: bc    4, 2, 0x8000A2F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000A2F8;
        }
    }

label_8000A2E8:
    ctx->pc = 0x8000A2E8u;
    ctx->downcount -= 2;
    // 8000A2E8: cmpwi   r30, 0
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

label_8000A2EC:
    ctx->pc = 0x8000A2ECu;
    // 8000A2EC: bc    12, 2, 0x8000A2F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000A2F8;
        }
    }

label_8000A2F0:
    ctx->pc = 0x8000A2F0u;
    ctx->downcount -= 2;
    // 8000A2F0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8000A2F4:
    ctx->pc = 0x8000A2F4u;
    // 8000A2F4: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A2F8:
    ctx->pc = 0x8000A2F8u;
    ctx->downcount -= 4;
    // 8000A2F8: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A2FC:
    ctx->pc = 0x8000A2FCu;
    // 8000A2FC: cmpwi   r27, 209
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(209);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000A300:
    ctx->pc = 0x8000A300u;
    // 8000A300: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A304:
    ctx->pc = 0x8000A304u;
    // 8000A304: bc    4, 2, 0x8000A314
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000A314;
        }
    }

label_8000A308:
    ctx->pc = 0x8000A308u;
    ctx->downcount -= 3;
    // 8000A308: lwz     r3, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000A30C:
    ctx->pc = 0x8000A30Cu;
    // 8000A30C: lwz     r4, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000A310:
    ctx->pc = 0x8000A310u;
    // 8000A310: bl      0x80009C74
    {
            ctx->lr = 0x8000A314u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80009C74u;
                return;
            }
            goto label_80009C74;
    }

label_8000A314:
    ctx->pc = 0x8000A314u;
    ctx->downcount -= 6;
    // 8000A314: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_8000A318:
    ctx->pc = 0x8000A318u;
    // 8000A318: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8000A31C:
    ctx->pc = 0x8000A31Cu;
    // 8000A31C: addi    r5, r4, -20888
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-20888);

label_8000A320:
    ctx->pc = 0x8000A320u;
    // 8000A320: lwz     r4, 128(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(128);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000A324:
    ctx->pc = 0x8000A324u;
    // 8000A324: addi    r0, r4, 4
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(4);

label_8000A328:
    ctx->pc = 0x8000A328u;
    // 8000A328: stw     r0, 128(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A32C:
    ctx->pc = 0x8000A32Cu;
    ctx->downcount -= 16;
    // 8000A32C: lmw     r27, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8000A330:
    ctx->pc = 0x8000A330u;
    // 8000A330: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A334:
    ctx->pc = 0x8000A334u;
    // 8000A334: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000A338:
    ctx->pc = 0x8000A338u;
    // 8000A338: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_8000A33C:
    ctx->pc = 0x8000A33Cu;
    // 8000A33C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000A340:
    ctx->pc = 0x8000A340u;
    ctx->downcount -= 4;
    // 8000A340: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000A344:
    ctx->pc = 0x8000A344u;
    // 8000A344: addi    r3, r3, -20888
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20888);

label_8000A348:
    ctx->pc = 0x8000A348u;
    // 8000A348: lwz     r3, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000A34C:
    ctx->pc = 0x8000A34Cu;
    // 8000A34C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000A350:
    ctx->pc = 0x8000A350u;
    ctx->downcount -= 6;
    // 8000A350: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000A354:
    ctx->pc = 0x8000A354u;
    // 8000A354: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000A358:
    ctx->pc = 0x8000A358u;
    // 8000A358: cmpwi   r5, 0
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

label_8000A35C:
    ctx->pc = 0x8000A35Cu;
    // 8000A35C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A360:
    ctx->pc = 0x8000A360u;
    // 8000A360: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8000A364:
    ctx->pc = 0x8000A364u;
    // 8000A364: bc    12, 2, 0x8000A370
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000A370;
        }
    }

label_8000A368:
    ctx->pc = 0x8000A368u;
    ctx->downcount -= 2;
    // 8000A368: li      r3, 1795
    ctx->gpr[3] = (u32)(s32)(1795);

label_8000A36C:
    ctx->pc = 0x8000A36Cu;
    // 8000A36C: b       0x8000A3F4
    {
            goto label_8000A3F4;
    }

label_8000A370:
    ctx->pc = 0x8000A370u;
    ctx->downcount -= 13;
    // 8000A370: lis     r6, -32738
    ctx->gpr[6] = ((u32)(s32)(-32738) << 16);

label_8000A374:
    ctx->pc = 0x8000A374u;
    // 8000A374: lis     r5, -32762
    ctx->gpr[5] = ((u32)(s32)(-32762) << 16);

label_8000A378:
    ctx->pc = 0x8000A378u;
    // 8000A378: addi    r31, r6, -5884
    ctx->gpr[31] = ctx->gpr[6] + (u32)(s32)(-5884);

label_8000A37C:
    ctx->pc = 0x8000A37Cu;
    // 8000A37C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_8000A380:
    ctx->pc = 0x8000A380u;
    // 8000A380: stw     r3, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8000A384:
    ctx->pc = 0x8000A384u;
    // 8000A384: addi    r0, r5, 10456
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(10456);

label_8000A388:
    ctx->pc = 0x8000A388u;
    // 8000A388: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8000A38C:
    ctx->pc = 0x8000A38Cu;
    // 8000A38C: stw     r4, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000A390:
    ctx->pc = 0x8000A390u;
    // 8000A390: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_8000A394:
    ctx->pc = 0x8000A394u;
    // 8000A394: stw     r6, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8000A398:
    ctx->pc = 0x8000A398u;
    // 8000A398: stw     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8000A39C:
    ctx->pc = 0x8000A39Cu;
    // 8000A39C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8000A3A0:
    ctx->pc = 0x8000A3A0u;
    // 8000A3A0: bl      0x8000CF98
    {
            ctx->lr = 0x8000A3A4u;
            goto label_8000CF98;
    }

label_8000A3A4:
    ctx->pc = 0x8000A3A4u;
    ctx->downcount -= 8;
    // 8000A3A4: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000A3A8:
    ctx->pc = 0x8000A3A8u;
    // 8000A3A8: lwz     r4, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000A3AC:
    ctx->pc = 0x8000A3ACu;
    // 8000A3AC: addi    r3, r3, -20888
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20888);

label_8000A3B0:
    ctx->pc = 0x8000A3B0u;
    // 8000A3B0: lwz     r0, 504(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(504);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A3B4:
    ctx->pc = 0x8000A3B4u;
    // 8000A3B4: cmpwi   r4, 0
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

label_8000A3B8:
    ctx->pc = 0x8000A3B8u;
    // 8000A3B8: ori     r0, r0, 0x0400
    ctx->gpr[0] = ctx->gpr[0] | 0x0400u;

label_8000A3BC:
    ctx->pc = 0x8000A3BCu;
    // 8000A3BC: stw     r0, 504(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(504);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A3C0:
    ctx->pc = 0x8000A3C0u;
    // 8000A3C0: bc    12, 2, 0x8000A3CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000A3CC;
        }
    }

label_8000A3C4:
    ctx->pc = 0x8000A3C4u;
    ctx->downcount -= 2;
    // 8000A3C4: cmpwi   r4, 16
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000A3C8:
    ctx->pc = 0x8000A3C8u;
    // 8000A3C8: bc    4, 2, 0x8000A3E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000A3E0;
        }
    }

label_8000A3CC:
    ctx->pc = 0x8000A3CCu;
    ctx->downcount -= 5;
    // 8000A3CC: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8000A3D0:
    ctx->pc = 0x8000A3D0u;
    // 8000A3D0: addi    r4, r3, -5884
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-5884);

label_8000A3D4:
    ctx->pc = 0x8000A3D4u;
    // 8000A3D4: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000A3D8:
    ctx->pc = 0x8000A3D8u;
    // 8000A3D8: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_8000A3DC:
    ctx->pc = 0x8000A3DCu;
    // 8000A3DC: stw     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A3E0:
    ctx->pc = 0x8000A3E0u;
    ctx->downcount -= 5;
    // 8000A3E0: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000A3E4:
    ctx->pc = 0x8000A3E4u;
    // 8000A3E4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8000A3E8:
    ctx->pc = 0x8000A3E8u;
    // 8000A3E8: addi    r4, r3, -21052
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-21052);

label_8000A3EC:
    ctx->pc = 0x8000A3ECu;
    // 8000A3EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000A3F0:
    ctx->pc = 0x8000A3F0u;
    // 8000A3F0: stw     r0, 152(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A3F4:
    ctx->pc = 0x8000A3F4u;
    ctx->downcount -= 6;
    // 8000A3F4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A3F8:
    ctx->pc = 0x8000A3F8u;
    // 8000A3F8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8000A3FC:
    ctx->pc = 0x8000A3FCu;
    // 8000A3FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000A400:
    ctx->pc = 0x8000A400u;
    // 8000A400: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000A404:
    ctx->pc = 0x8000A404u;
    // 8000A404: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000A408:
    ctx->pc = 0x8000A408u;
    ctx->downcount -= 6;
    // 8000A408: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000A40C:
    ctx->pc = 0x8000A40Cu;
    // 8000A40C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000A410:
    ctx->pc = 0x8000A410u;
    // 8000A410: cmpwi   r4, 0
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

label_8000A414:
    ctx->pc = 0x8000A414u;
    // 8000A414: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A418:
    ctx->pc = 0x8000A418u;
    // 8000A418: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8000A41C:
    ctx->pc = 0x8000A41Cu;
    // 8000A41C: bc    12, 2, 0x8000A428
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000A428;
        }
    }

label_8000A420:
    ctx->pc = 0x8000A420u;
    ctx->downcount -= 2;
    // 8000A420: li      r3, 1795
    ctx->gpr[3] = (u32)(s32)(1795);

label_8000A424:
    ctx->pc = 0x8000A424u;
    // 8000A424: b       0x8000A4A0
    {
            goto label_8000A4A0;
    }

label_8000A428:
    ctx->pc = 0x8000A428u;
    ctx->downcount -= 12;
    // 8000A428: lis     r5, -32738
    ctx->gpr[5] = ((u32)(s32)(-32738) << 16);

label_8000A42C:
    ctx->pc = 0x8000A42Cu;
    // 8000A42C: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8000A430:
    ctx->pc = 0x8000A430u;
    // 8000A430: addi    r31, r5, -5884
    ctx->gpr[31] = ctx->gpr[5] + (u32)(s32)(-5884);

label_8000A434:
    ctx->pc = 0x8000A434u;
    // 8000A434: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8000A438:
    ctx->pc = 0x8000A438u;
    // 8000A438: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8000A43C:
    ctx->pc = 0x8000A43Cu;
    // 8000A43C: stw     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8000A440:
    ctx->pc = 0x8000A440u;
    // 8000A440: addi    r4, r4, 10456
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10456);

label_8000A444:
    ctx->pc = 0x8000A444u;
    // 8000A444: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8000A448:
    ctx->pc = 0x8000A448u;
    // 8000A448: stw     r5, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8000A44C:
    ctx->pc = 0x8000A44Cu;
    // 8000A44C: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A450:
    ctx->pc = 0x8000A450u;
    // 8000A450: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8000A454:
    ctx->pc = 0x8000A454u;
    // 8000A454: bl      0x8000CF98
    {
            ctx->lr = 0x8000A458u;
            goto label_8000CF98;
    }

label_8000A458:
    ctx->pc = 0x8000A458u;
    ctx->downcount -= 8;
    // 8000A458: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000A45C:
    ctx->pc = 0x8000A45Cu;
    // 8000A45C: lwz     r4, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000A460:
    ctx->pc = 0x8000A460u;
    // 8000A460: addi    r3, r3, -20888
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20888);

label_8000A464:
    ctx->pc = 0x8000A464u;
    // 8000A464: lwz     r0, 504(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(504);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A468:
    ctx->pc = 0x8000A468u;
    // 8000A468: cmpwi   r4, 0
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

label_8000A46C:
    ctx->pc = 0x8000A46Cu;
    // 8000A46C: ori     r0, r0, 0x0400
    ctx->gpr[0] = ctx->gpr[0] | 0x0400u;

label_8000A470:
    ctx->pc = 0x8000A470u;
    // 8000A470: stw     r0, 504(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(504);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A474:
    ctx->pc = 0x8000A474u;
    // 8000A474: bc    12, 2, 0x8000A480
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000A480;
        }
    }

label_8000A478:
    ctx->pc = 0x8000A478u;
    ctx->downcount -= 2;
    // 8000A478: cmpwi   r4, 16
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000A47C:
    ctx->pc = 0x8000A47Cu;
    // 8000A47C: bc    4, 2, 0x8000A48C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000A48C;
        }
    }

label_8000A480:
    ctx->pc = 0x8000A480u;
    ctx->downcount -= 3;
    // 8000A480: lwz     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000A484:
    ctx->pc = 0x8000A484u;
    // 8000A484: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_8000A488:
    ctx->pc = 0x8000A488u;
    // 8000A488: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A48C:
    ctx->pc = 0x8000A48Cu;
    ctx->downcount -= 5;
    // 8000A48C: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000A490:
    ctx->pc = 0x8000A490u;
    // 8000A490: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8000A494:
    ctx->pc = 0x8000A494u;
    // 8000A494: addi    r4, r3, -21052
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-21052);

label_8000A498:
    ctx->pc = 0x8000A498u;
    // 8000A498: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000A49C:
    ctx->pc = 0x8000A49Cu;
    // 8000A49C: stw     r0, 152(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A4A0:
    ctx->pc = 0x8000A4A0u;
    ctx->downcount -= 6;
    // 8000A4A0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A4A4:
    ctx->pc = 0x8000A4A4u;
    // 8000A4A4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8000A4A8:
    ctx->pc = 0x8000A4A8u;
    // 8000A4A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000A4AC:
    ctx->pc = 0x8000A4ACu;
    // 8000A4AC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000A4B0:
    ctx->pc = 0x8000A4B0u;
    // 8000A4B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000A4B4:
    ctx->pc = 0x8000A4B4u;
    ctx->downcount -= 9;
    // 8000A4B4: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000A4B8:
    ctx->pc = 0x8000A4B8u;
    // 8000A4B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000A4BC:
    ctx->pc = 0x8000A4BCu;
    // 8000A4BC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8000A4C0:
    ctx->pc = 0x8000A4C0u;
    // 8000A4C0: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_8000A4C4:
    ctx->pc = 0x8000A4C4u;
    // 8000A4C4: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A4C8:
    ctx->pc = 0x8000A4C8u;
    // 8000A4C8: stw     r31, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8000A4CC:
    ctx->pc = 0x8000A4CCu;
    // 8000A4CC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000A4D0:
    ctx->pc = 0x8000A4D0u;
    // 8000A4D0: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_8000A4D4:
    ctx->pc = 0x8000A4D4u;
    // 8000A4D4: bl      0x800050B4
    {
            ctx->lr = 0x8000A4D8u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8000A4D8:
    ctx->pc = 0x8000A4D8u;
    ctx->downcount -= 9;
    // 8000A4D8: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8000A4DC:
    ctx->pc = 0x8000A4DCu;
    // 8000A4DC: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_8000A4E0:
    ctx->pc = 0x8000A4E0u;
    // 8000A4E0: lwz     r4, -5900(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5900);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000A4E4:
    ctx->pc = 0x8000A4E4u;
    // 8000A4E4: li      r0, 145
    ctx->gpr[0] = (u32)(s32)(145);

label_8000A4E8:
    ctx->pc = 0x8000A4E8u;
    // 8000A4E8: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8000A4EC:
    ctx->pc = 0x8000A4ECu;
    // 8000A4EC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8000A4F0:
    ctx->pc = 0x8000A4F0u;
    // 8000A4F0: stb     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8000A4F4:
    ctx->pc = 0x8000A4F4u;
    // 8000A4F4: stw     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000A4F8:
    ctx->pc = 0x8000A4F8u;
    // 8000A4F8: bl      0x8000B368
    {
            ctx->lr = 0x8000A4FCu;
            goto label_8000B368;
    }

label_8000A4FC:
    ctx->pc = 0x8000A4FCu;
    ctx->downcount -= 10;
    // 8000A4FC: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8000A500:
    ctx->pc = 0x8000A500u;
    // 8000A500: lwz     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8000A504:
    ctx->pc = 0x8000A504u;
    // 8000A504: addi    r4, r3, -5900
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-5900);

label_8000A508:
    ctx->pc = 0x8000A508u;
    // 8000A508: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8000A50C:
    ctx->pc = 0x8000A50Cu;
    // 8000A50C: lhz     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8000A510:
    ctx->pc = 0x8000A510u;
    // 8000A510: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_8000A514:
    ctx->pc = 0x8000A514u;
    // 8000A514: stw     r5, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8000A518:
    ctx->pc = 0x8000A518u;
    // 8000A518: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_8000A51C:
    ctx->pc = 0x8000A51Cu;
    // 8000A51C: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A520:
    ctx->pc = 0x8000A520u;
    // 8000A520: bl      0x80007B34
    {
            ctx->lr = 0x8000A524u;
            ctx->pc = 0x80007B34u;
            return;
    }

label_8000A524:
    ctx->pc = 0x8000A524u;
    ctx->downcount -= 6;
    // 8000A524: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A528:
    ctx->pc = 0x8000A528u;
    // 8000A528: lwz     r31, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8000A52C:
    ctx->pc = 0x8000A52Cu;
    // 8000A52C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000A530:
    ctx->pc = 0x8000A530u;
    // 8000A530: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_8000A534:
    ctx->pc = 0x8000A534u;
    // 8000A534: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000A538:
    ctx->pc = 0x8000A538u;
    ctx->downcount -= 9;
    // 8000A538: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000A53C:
    ctx->pc = 0x8000A53Cu;
    // 8000A53C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000A540:
    ctx->pc = 0x8000A540u;
    // 8000A540: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8000A544:
    ctx->pc = 0x8000A544u;
    // 8000A544: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_8000A548:
    ctx->pc = 0x8000A548u;
    // 8000A548: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A54C:
    ctx->pc = 0x8000A54Cu;
    // 8000A54C: stw     r31, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8000A550:
    ctx->pc = 0x8000A550u;
    // 8000A550: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000A554:
    ctx->pc = 0x8000A554u;
    // 8000A554: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_8000A558:
    ctx->pc = 0x8000A558u;
    // 8000A558: bl      0x800050B4
    {
            ctx->lr = 0x8000A55Cu;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8000A55C:
    ctx->pc = 0x8000A55Cu;
    ctx->downcount -= 10;
    // 8000A55C: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000A560:
    ctx->pc = 0x8000A560u;
    // 8000A560: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_8000A564:
    ctx->pc = 0x8000A564u;
    // 8000A564: addi    r3, r3, -20888
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20888);

label_8000A568:
    ctx->pc = 0x8000A568u;
    // 8000A568: li      r0, 144
    ctx->gpr[0] = (u32)(s32)(144);

label_8000A56C:
    ctx->pc = 0x8000A56Cu;
    // 8000A56C: lwz     r4, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000A570:
    ctx->pc = 0x8000A570u;
    // 8000A570: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8000A574:
    ctx->pc = 0x8000A574u;
    // 8000A574: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8000A578:
    ctx->pc = 0x8000A578u;
    // 8000A578: stb     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8000A57C:
    ctx->pc = 0x8000A57Cu;
    // 8000A57C: stw     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000A580:
    ctx->pc = 0x8000A580u;
    // 8000A580: bl      0x8000B368
    {
            ctx->lr = 0x8000A584u;
            goto label_8000B368;
    }

label_8000A584:
    ctx->pc = 0x8000A584u;
    ctx->downcount -= 11;
    // 8000A584: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000A588:
    ctx->pc = 0x8000A588u;
    // 8000A588: lwz     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8000A58C:
    ctx->pc = 0x8000A58Cu;
    // 8000A58C: addi    r4, r3, -20888
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-20888);

label_8000A590:
    ctx->pc = 0x8000A590u;
    // 8000A590: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8000A594:
    ctx->pc = 0x8000A594u;
    // 8000A594: lwz     r0, 760(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(760);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A598:
    ctx->pc = 0x8000A598u;
    // 8000A598: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_8000A59C:
    ctx->pc = 0x8000A59Cu;
    // 8000A59C: stw     r5, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8000A5A0:
    ctx->pc = 0x8000A5A0u;
    // 8000A5A0: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_8000A5A4:
    ctx->pc = 0x8000A5A4u;
    // 8000A5A4: rlwinm r0, r0, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_8000A5A8:
    ctx->pc = 0x8000A5A8u;
    // 8000A5A8: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A5AC:
    ctx->pc = 0x8000A5ACu;
    // 8000A5AC: bl      0x80007B34
    {
            ctx->lr = 0x8000A5B0u;
            ctx->pc = 0x80007B34u;
            return;
    }

label_8000A5B0:
    ctx->pc = 0x8000A5B0u;
    ctx->downcount -= 6;
    // 8000A5B0: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A5B4:
    ctx->pc = 0x8000A5B4u;
    // 8000A5B4: lwz     r31, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8000A5B8:
    ctx->pc = 0x8000A5B8u;
    // 8000A5B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000A5BC:
    ctx->pc = 0x8000A5BCu;
    // 8000A5BC: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_8000A5C0:
    ctx->pc = 0x8000A5C0u;
    // 8000A5C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000A5C4:
    ctx->pc = 0x8000A5C4u;
    ctx->downcount -= 9;
    // 8000A5C4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000A5C8:
    ctx->pc = 0x8000A5C8u;
    // 8000A5C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000A5CC:
    ctx->pc = 0x8000A5CCu;
    // 8000A5CC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A5D0:
    ctx->pc = 0x8000A5D0u;
    // 8000A5D0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8000A5D4:
    ctx->pc = 0x8000A5D4u;
    // 8000A5D4: stw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8000A5D8:
    ctx->pc = 0x8000A5D8u;
    // 8000A5D8: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_8000A5DC:
    ctx->pc = 0x8000A5DCu;
    // 8000A5DC: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A5E0:
    ctx->pc = 0x8000A5E0u;
    // 8000A5E0: cmpwi   r0, 5
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

label_8000A5E4:
    ctx->pc = 0x8000A5E4u;
    // 8000A5E4: bc    4, 0, 0x8000A738
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000A738;
        }
    }

label_8000A5E8:
    ctx->pc = 0x8000A5E8u;
    ctx->downcount -= 2;
    // 8000A5E8: cmpwi   r0, 3
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

label_8000A5EC:
    ctx->pc = 0x8000A5ECu;
    // 8000A5EC: bc    4, 0, 0x8000A5F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000A5F4;
        }
    }

label_8000A5F0:
    ctx->pc = 0x8000A5F0u;
    ctx->downcount -= 1;
    // 8000A5F0: b       0x8000A738
    {
            goto label_8000A738;
    }

label_8000A5F4:
    ctx->pc = 0x8000A5F4u;
    ctx->downcount -= 5;
    // 8000A5F4: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8000A5F8:
    ctx->pc = 0x8000A5F8u;
    // 8000A5F8: addi    r4, r3, -5884
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-5884);

label_8000A5FC:
    ctx->pc = 0x8000A5FCu;
    // 8000A5FC: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A600:
    ctx->pc = 0x8000A600u;
    // 8000A600: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000A604:
    ctx->pc = 0x8000A604u;
    // 8000A604: bc    12, 2, 0x8000A70C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000A70C;
        }
    }

label_8000A608:
    ctx->pc = 0x8000A608u;
    ctx->downcount -= 7;
    // 8000A608: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000A60C:
    ctx->pc = 0x8000A60Cu;
    // 8000A60C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_8000A610:
    ctx->pc = 0x8000A610u;
    // 8000A610: addi    r31, r3, -20888
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-20888);

label_8000A614:
    ctx->pc = 0x8000A614u;
    // 8000A614: lwz     r0, 504(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(504);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A618:
    ctx->pc = 0x8000A618u;
    // 8000A618: rlwinm r0, r0, 0, 22, 20
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFBFFu;
    }

label_8000A61C:
    ctx->pc = 0x8000A61Cu;
    // 8000A61C: stw     r0, 504(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(504);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A620:
    ctx->pc = 0x8000A620u;
    // 8000A620: bc    12, 2, 0x8000A684
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000A684;
        }
    }

label_8000A624:
    ctx->pc = 0x8000A624u;
    ctx->downcount -= 4;
    // 8000A624: lwz     r0, 760(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(760);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A628:
    ctx->pc = 0x8000A628u;
    // 8000A628: rlwinm r0, r0, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_8000A62C:
    ctx->pc = 0x8000A62Cu;
    // 8000A62C: cmplwi  r0, 0x0D00
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0D00u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000A630:
    ctx->pc = 0x8000A630u;
    // 8000A630: bc    4, 2, 0x8000A684
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000A684;
        }
    }

label_8000A634:
    ctx->pc = 0x8000A634u;
    ctx->downcount -= 3;
    // 8000A634: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A638:
    ctx->pc = 0x8000A638u;
    // 8000A638: cmpwi   r0, 1
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

label_8000A63C:
    ctx->pc = 0x8000A63Cu;
    // 8000A63C: bc    12, 2, 0x8000A664
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000A664;
        }
    }

label_8000A640:
    ctx->pc = 0x8000A640u;
    ctx->downcount -= 1;
    // 8000A640: bc    4, 0, 0x8000A684
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000A684;
        }
    }

label_8000A644:
    ctx->pc = 0x8000A644u;
    ctx->downcount -= 2;
    // 8000A644: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000A648:
    ctx->pc = 0x8000A648u;
    // 8000A648: bc    4, 0, 0x8000A650
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000A650;
        }
    }

label_8000A64C:
    ctx->pc = 0x8000A64Cu;
    ctx->downcount -= 1;
    // 8000A64C: b       0x8000A684
    {
            goto label_8000A684;
    }

label_8000A650:
    ctx->pc = 0x8000A650u;
    ctx->downcount -= 3;
    // 8000A650: lwz     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A654:
    ctx->pc = 0x8000A654u;
    // 8000A654: cmplwi  r0, 0x0000
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

label_8000A658:
    ctx->pc = 0x8000A658u;
    // 8000A658: bc    12, 2, 0x8000A684
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000A684;
        }
    }

label_8000A65C:
    ctx->pc = 0x8000A65Cu;
    ctx->downcount -= 2;
    // 8000A65C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8000A660:
    ctx->pc = 0x8000A660u;
    // 8000A660: b       0x8000A684
    {
            goto label_8000A684;
    }

label_8000A664:
    ctx->pc = 0x8000A664u;
    ctx->downcount -= 4;
    // 8000A664: lwz     r3, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000A668:
    ctx->pc = 0x8000A668u;
    // 8000A668: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A66C:
    ctx->pc = 0x8000A66Cu;
    // 8000A66C: cmplw   r3, r0
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

label_8000A670:
    ctx->pc = 0x8000A670u;
    // 8000A670: bc    12, 0, 0x8000A684
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000A684;
        }
    }

label_8000A674:
    ctx->pc = 0x8000A674u;
    ctx->downcount -= 3;
    // 8000A674: lwz     r0, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A678:
    ctx->pc = 0x8000A678u;
    // 8000A678: cmplw   r3, r0
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

label_8000A67C:
    ctx->pc = 0x8000A67Cu;
    // 8000A67C: bc    12, 1, 0x8000A684
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000A684;
        }
    }

label_8000A680:
    ctx->pc = 0x8000A680u;
    ctx->downcount -= 1;
    // 8000A680: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8000A684:
    ctx->pc = 0x8000A684u;
    ctx->downcount -= 2;
    // 8000A684: cmpwi   r5, 0
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

label_8000A688:
    ctx->pc = 0x8000A688u;
    // 8000A688: bc    12, 2, 0x8000A69C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000A69C;
        }
    }

label_8000A68C:
    ctx->pc = 0x8000A68Cu;
    ctx->downcount -= 4;
    // 8000A68C: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8000A690:
    ctx->pc = 0x8000A690u;
    // 8000A690: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8000A694:
    ctx->pc = 0x8000A694u;
    // 8000A694: stw     r0, -5884(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5884);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A698:
    ctx->pc = 0x8000A698u;
    // 8000A698: b       0x8000A70C
    {
            goto label_8000A70C;
    }

label_8000A69C:
    ctx->pc = 0x8000A69Cu;
    ctx->downcount -= 9;
    // 8000A69C: lis     r4, -32738
    ctx->gpr[4] = ((u32)(s32)(-32738) << 16);

label_8000A6A0:
    ctx->pc = 0x8000A6A0u;
    // 8000A6A0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8000A6A4:
    ctx->pc = 0x8000A6A4u;
    // 8000A6A4: addi    r5, r4, -5884
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-5884);

label_8000A6A8:
    ctx->pc = 0x8000A6A8u;
    // 8000A6A8: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8000A6AC:
    ctx->pc = 0x8000A6ACu;
    // 8000A6AC: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A6B0:
    ctx->pc = 0x8000A6B0u;
    // 8000A6B0: addi    r4, r3, 10456
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(10456);

label_8000A6B4:
    ctx->pc = 0x8000A6B4u;
    // 8000A6B4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8000A6B8:
    ctx->pc = 0x8000A6B8u;
    // 8000A6B8: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8000A6BC:
    ctx->pc = 0x8000A6BCu;
    // 8000A6BC: bl      0x8000CF98
    {
            ctx->lr = 0x8000A6C0u;
            goto label_8000CF98;
    }

label_8000A6C0:
    ctx->pc = 0x8000A6C0u;
    ctx->downcount -= 8;
    // 8000A6C0: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8000A6C4:
    ctx->pc = 0x8000A6C4u;
    // 8000A6C4: lwz     r0, 504(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(504);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A6C8:
    ctx->pc = 0x8000A6C8u;
    // 8000A6C8: addi    r3, r3, -5884
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5884);

label_8000A6CC:
    ctx->pc = 0x8000A6CCu;
    // 8000A6CC: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000A6D0:
    ctx->pc = 0x8000A6D0u;
    // 8000A6D0: ori     r0, r0, 0x0400
    ctx->gpr[0] = ctx->gpr[0] | 0x0400u;

label_8000A6D4:
    ctx->pc = 0x8000A6D4u;
    // 8000A6D4: stw     r0, 504(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(504);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A6D8:
    ctx->pc = 0x8000A6D8u;
    // 8000A6D8: cmpwi   r3, 0
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

label_8000A6DC:
    ctx->pc = 0x8000A6DCu;
    // 8000A6DC: bc    12, 2, 0x8000A6E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000A6E8;
        }
    }

label_8000A6E0:
    ctx->pc = 0x8000A6E0u;
    ctx->downcount -= 2;
    // 8000A6E0: cmpwi   r3, 16
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000A6E4:
    ctx->pc = 0x8000A6E4u;
    // 8000A6E4: bc    4, 2, 0x8000A6FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000A6FC;
        }
    }

label_8000A6E8:
    ctx->pc = 0x8000A6E8u;
    ctx->downcount -= 5;
    // 8000A6E8: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8000A6EC:
    ctx->pc = 0x8000A6ECu;
    // 8000A6EC: addi    r4, r3, -5884
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-5884);

label_8000A6F0:
    ctx->pc = 0x8000A6F0u;
    // 8000A6F0: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000A6F4:
    ctx->pc = 0x8000A6F4u;
    // 8000A6F4: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_8000A6F8:
    ctx->pc = 0x8000A6F8u;
    // 8000A6F8: stw     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A6FC:
    ctx->pc = 0x8000A6FCu;
    ctx->downcount -= 4;
    // 8000A6FC: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000A700:
    ctx->pc = 0x8000A700u;
    // 8000A700: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8000A704:
    ctx->pc = 0x8000A704u;
    // 8000A704: addi    r3, r3, -21052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-21052);

label_8000A708:
    ctx->pc = 0x8000A708u;
    // 8000A708: stw     r0, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A70C:
    ctx->pc = 0x8000A70Cu;
    ctx->downcount -= 4;
    // 8000A70C: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8000A710:
    ctx->pc = 0x8000A710u;
    // 8000A710: lwz     r0, -5884(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5884);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A714:
    ctx->pc = 0x8000A714u;
    // 8000A714: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000A718:
    ctx->pc = 0x8000A718u;
    // 8000A718: bc    4, 2, 0x8000A738
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000A738;
        }
    }

label_8000A71C:
    ctx->pc = 0x8000A71Cu;
    ctx->downcount -= 6;
    // 8000A71C: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000A720:
    ctx->pc = 0x8000A720u;
    // 8000A720: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8000A724:
    ctx->pc = 0x8000A724u;
    // 8000A724: addi    r4, r3, -21052
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-21052);

label_8000A728:
    ctx->pc = 0x8000A728u;
    // 8000A728: li      r3, 144
    ctx->gpr[3] = (u32)(s32)(144);

label_8000A72C:
    ctx->pc = 0x8000A72Cu;
    // 8000A72C: stw     r0, 152(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A730:
    ctx->pc = 0x8000A730u;
    // 8000A730: bl      0x80009BDC
    {
            ctx->lr = 0x8000A734u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80009BDCu;
                return;
            }
            goto label_80009BDC;
    }

label_8000A734:
    ctx->pc = 0x8000A734u;
    ctx->downcount -= 1;
    // 8000A734: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000A738:
    ctx->pc = 0x8000A738u;
    ctx->downcount -= 8;
    // 8000A738: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A73C:
    ctx->pc = 0x8000A73Cu;
    // 8000A73C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8000A740:
    ctx->pc = 0x8000A740u;
    // 8000A740: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8000A744:
    ctx->pc = 0x8000A744u;
    // 8000A744: lwz     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8000A748:
    ctx->pc = 0x8000A748u;
    // 8000A748: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000A74C:
    ctx->pc = 0x8000A74Cu;
    // 8000A74C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000A750:
    ctx->pc = 0x8000A750u;
    // 8000A750: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000A754:
    ctx->pc = 0x8000A754u;
    ctx->downcount -= 8;
    // 8000A754: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000A758:
    ctx->pc = 0x8000A758u;
    // 8000A758: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000A75C:
    ctx->pc = 0x8000A75Cu;
    // 8000A75C: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000A760:
    ctx->pc = 0x8000A760u;
    // 8000A760: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A764:
    ctx->pc = 0x8000A764u;
    // 8000A764: addi    r3, r3, -21052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-21052);

label_8000A768:
    ctx->pc = 0x8000A768u;
    // 8000A768: lwz     r0, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A76C:
    ctx->pc = 0x8000A76Cu;
    // 8000A76C: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000A770:
    ctx->pc = 0x8000A770u;
    // 8000A770: bc    12, 2, 0x8000A780
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000A780;
        }
    }

label_8000A774:
    ctx->pc = 0x8000A774u;
    ctx->downcount -= 3;
    // 8000A774: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8000A778:
    ctx->pc = 0x8000A778u;
    // 8000A778: stw     r0, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A77C:
    ctx->pc = 0x8000A77Cu;
    // 8000A77C: b       0x8000A7F0
    {
            goto label_8000A7F0;
    }

label_8000A780:
    ctx->pc = 0x8000A780u;
    ctx->downcount -= 6;
    // 8000A780: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000A784:
    ctx->pc = 0x8000A784u;
    // 8000A784: addi    r3, r3, -20888
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20888);

label_8000A788:
    ctx->pc = 0x8000A788u;
    // 8000A788: lwz     r0, 760(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(760);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A78C:
    ctx->pc = 0x8000A78Cu;
    // 8000A78C: rlwinm r0, r0, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_8000A790:
    ctx->pc = 0x8000A790u;
    // 8000A790: cmpwi   r0, 3328
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(3328);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000A794:
    ctx->pc = 0x8000A794u;
    // 8000A794: bc    12, 2, 0x8000A7A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000A7A8;
        }
    }

label_8000A798:
    ctx->pc = 0x8000A798u;
    ctx->downcount -= 1;
    // 8000A798: bc    4, 0, 0x8000A7DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000A7DC;
        }
    }

label_8000A79C:
    ctx->pc = 0x8000A79Cu;
    ctx->downcount -= 2;
    // 8000A79C: cmpwi   r0, 1792
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(1792);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000A7A0:
    ctx->pc = 0x8000A7A0u;
    // 8000A7A0: bc    12, 2, 0x8000A7A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000A7A8;
        }
    }

label_8000A7A4:
    ctx->pc = 0x8000A7A4u;
    ctx->downcount -= 1;
    // 8000A7A4: b       0x8000A7DC
    {
            goto label_8000A7DC;
    }

label_8000A7A8:
    ctx->pc = 0x8000A7A8u;
    ctx->downcount -= 5;
    // 8000A7A8: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_8000A7AC:
    ctx->pc = 0x8000A7ACu;
    // 8000A7AC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8000A7B0:
    ctx->pc = 0x8000A7B0u;
    // 8000A7B0: addi    r4, r4, -20888
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-20888);

label_8000A7B4:
    ctx->pc = 0x8000A7B4u;
    // 8000A7B4: lwz     r4, 128(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(128);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000A7B8:
    ctx->pc = 0x8000A7B8u;
    // 8000A7B8: bl      0x8000B368
    {
            ctx->lr = 0x8000A7BCu;
            goto label_8000B368;
    }

label_8000A7BC:
    ctx->pc = 0x8000A7BCu;
    ctx->downcount -= 4;
    // 8000A7BC: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000A7C0:
    ctx->pc = 0x8000A7C0u;
    // 8000A7C0: addis   r0, r3, -4064
    ctx->gpr[0] = ctx->gpr[3] + ((u32)(s32)(-4064) << 16);

label_8000A7C4:
    ctx->pc = 0x8000A7C4u;
    // 8000A7C4: cmplwi  r0, 0x0000
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

label_8000A7C8:
    ctx->pc = 0x8000A7C8u;
    // 8000A7C8: bc    4, 2, 0x8000A7D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000A7D4;
        }
    }

label_8000A7CC:
    ctx->pc = 0x8000A7CCu;
    ctx->downcount -= 2;
    // 8000A7CC: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_8000A7D0:
    ctx->pc = 0x8000A7D0u;
    // 8000A7D0: b       0x8000A7E0
    {
            goto label_8000A7E0;
    }

label_8000A7D4:
    ctx->pc = 0x8000A7D4u;
    ctx->downcount -= 2;
    // 8000A7D4: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_8000A7D8:
    ctx->pc = 0x8000A7D8u;
    // 8000A7D8: b       0x8000A7E0
    {
            goto label_8000A7E0;
    }

label_8000A7DC:
    ctx->pc = 0x8000A7DCu;
    ctx->downcount -= 1;
    // 8000A7DC: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8000A7E0:
    ctx->pc = 0x8000A7E0u;
    ctx->downcount -= 2;
    // 8000A7E0: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_8000A7E4:
    ctx->pc = 0x8000A7E4u;
    // 8000A7E4: bl      0x800073E8
    {
            ctx->lr = 0x8000A7E8u;
            ctx->pc = 0x800073E8u;
            return;
    }

label_8000A7E8:
    ctx->pc = 0x8000A7E8u;
    ctx->downcount -= 2;
    // 8000A7E8: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_8000A7EC:
    ctx->pc = 0x8000A7ECu;
    // 8000A7EC: bl      0x80007400
    {
            ctx->lr = 0x8000A7F0u;
            ctx->pc = 0x80007400u;
            return;
    }

label_8000A7F0:
    ctx->pc = 0x8000A7F0u;
    ctx->downcount -= 5;
    // 8000A7F0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A7F4:
    ctx->pc = 0x8000A7F4u;
    // 8000A7F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000A7F8:
    ctx->pc = 0x8000A7F8u;
    // 8000A7F8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8000A7FC:
    ctx->pc = 0x8000A7FCu;
    // 8000A7FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000A800:
    ctx->pc = 0x8000A800u;
    ctx->downcount -= 21;
    // 8000A800: stwu     r1, -304(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-304);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000A804:
    ctx->pc = 0x8000A804u;
    // 8000A804: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000A808:
    ctx->pc = 0x8000A808u;
    // 8000A808: stw     r0, 308(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(308);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A80C:
    ctx->pc = 0x8000A80Cu;
    // 8000A80C: stmw     r19, 252(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(252);
        for (u32 r = 19; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8000A810:
    ctx->pc = 0x8000A810u;
    // 8000A810: or   r23, r4, r4
    {
        ctx->gpr[23] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8000A814:
    ctx->pc = 0x8000A814u;
    // 8000A814: cmplwi  r23, 0x001F
    {
        u32 val_a = (u32)(ctx->gpr[23]);
        u32 val_b = (u32)(0x001Fu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000A818:
    ctx->pc = 0x8000A818u;
    // 8000A818: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000A81C:
    ctx->pc = 0x8000A81Cu;
    // 8000A81C: or   r24, r5, r5
    {
        ctx->gpr[24] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8000A820:
    ctx->pc = 0x8000A820u;
    // 8000A820: or   r25, r6, r6
    {
        ctx->gpr[25] = ctx->gpr[6] | ctx->gpr[6];
    }

label_8000A824:
    ctx->pc = 0x8000A824u;
    // 8000A824: or   r26, r7, r7
    {
        ctx->gpr[26] = ctx->gpr[7] | ctx->gpr[7];
    }

label_8000A828:
    ctx->pc = 0x8000A828u;
    // 8000A828: bc    4, 1, 0x8000A834
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000A834;
        }
    }

label_8000A82C:
    ctx->pc = 0x8000A82Cu;
    ctx->downcount -= 2;
    // 8000A82C: li      r3, 1793
    ctx->gpr[3] = (u32)(s32)(1793);

label_8000A830:
    ctx->pc = 0x8000A830u;
    // 8000A830: b       0x8000AC24
    {
            goto label_8000AC24;
    }

label_8000A834:
    ctx->pc = 0x8000A834u;
    ctx->downcount -= 45;
    // 8000A834: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8000A838:
    ctx->pc = 0x8000A838u;
    // 8000A838: lis     r5, -32738
    ctx->gpr[5] = ((u32)(s32)(-32738) << 16);

label_8000A83C:
    ctx->pc = 0x8000A83Cu;
    // 8000A83C: addi    r29, r3, 10336
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(10336);

label_8000A840:
    ctx->pc = 0x8000A840u;
    // 8000A840: lis     r4, 31897
    ctx->gpr[4] = ((u32)(s32)(31897) << 16);

label_8000A844:
    ctx->pc = 0x8000A844u;
    // 8000A844: lwz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A848:
    ctx->pc = 0x8000A848u;
    // 8000A848: addi    r31, r5, -5900
    ctx->gpr[31] = ctx->gpr[5] + (u32)(s32)(-5900);

label_8000A84C:
    ctx->pc = 0x8000A84Cu;
    // 8000A84C: lwz     r8, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_8000A850:
    ctx->pc = 0x8000A850u;
    // 8000A850: lis     r3, 20096
    ctx->gpr[3] = ((u32)(s32)(20096) << 16);

label_8000A854:
    ctx->pc = 0x8000A854u;
    // 8000A854: lwz     r7, 36(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(36);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8000A858:
    ctx->pc = 0x8000A858u;
    // 8000A858: addi    r6, r4, -7514
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-7514);

label_8000A85C:
    ctx->pc = 0x8000A85Cu;
    // 8000A85C: stw     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A860:
    ctx->pc = 0x8000A860u;
    // 8000A860: addi    r0, r3, 32
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32);

label_8000A864:
    ctx->pc = 0x8000A864u;
    // 8000A864: lwz     r19, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[19] = mem_read32(ctx, ea);
    }

label_8000A868:
    ctx->pc = 0x8000A868u;
    // 8000A868: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_8000A86C:
    ctx->pc = 0x8000A86Cu;
    // 8000A86C: lwz     r22, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

label_8000A870:
    ctx->pc = 0x8000A870u;
    // 8000A870: lis     r5, -28541
    ctx->gpr[5] = ((u32)(s32)(-28541) << 16);

label_8000A874:
    ctx->pc = 0x8000A874u;
    // 8000A874: stw     r8, 200(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8000A878:
    ctx->pc = 0x8000A878u;
    // 8000A878: addi    r3, r1, 196
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(196);

label_8000A87C:
    ctx->pc = 0x8000A87Cu;
    // 8000A87C: lwz     r20, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[20] = mem_read32(ctx, ea);
    }

label_8000A880:
    ctx->pc = 0x8000A880u;
    // 8000A880: li      r4, 40
    ctx->gpr[4] = (u32)(s32)(40);

label_8000A884:
    ctx->pc = 0x8000A884u;
    // 8000A884: stw     r7, 232(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8000A888:
    ctx->pc = 0x8000A888u;
    // 8000A888: lwz     r21, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[21] = mem_read32(ctx, ea);
    }

label_8000A88C:
    ctx->pc = 0x8000A88Cu;
    // 8000A88C: lwz     r28, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_8000A890:
    ctx->pc = 0x8000A890u;
    // 8000A890: lwz     r12, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8000A894:
    ctx->pc = 0x8000A894u;
    // 8000A894: lwz     r11, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_8000A898:
    ctx->pc = 0x8000A898u;
    // 8000A898: lwz     r10, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_8000A89C:
    ctx->pc = 0x8000A89Cu;
    // 8000A89C: lwz     r9, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_8000A8A0:
    ctx->pc = 0x8000A8A0u;
    // 8000A8A0: lwz     r8, 28(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(28);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_8000A8A4:
    ctx->pc = 0x8000A8A4u;
    // 8000A8A4: lwz     r7, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8000A8A8:
    ctx->pc = 0x8000A8A8u;
    // 8000A8A8: stw     r19, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[19]);
    }

label_8000A8AC:
    ctx->pc = 0x8000A8ACu;
    // 8000A8AC: stw     r20, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[20]);
    }

label_8000A8B0:
    ctx->pc = 0x8000A8B0u;
    // 8000A8B0: stw     r21, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[21]);
    }

label_8000A8B4:
    ctx->pc = 0x8000A8B4u;
    // 8000A8B4: stw     r22, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

label_8000A8B8:
    ctx->pc = 0x8000A8B8u;
    // 8000A8B8: stb     r30, 13(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_8000A8BC:
    ctx->pc = 0x8000A8BCu;
    // 8000A8BC: stw     r28, 204(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8000A8C0:
    ctx->pc = 0x8000A8C0u;
    // 8000A8C0: stw     r12, 208(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_8000A8C4:
    ctx->pc = 0x8000A8C4u;
    // 8000A8C4: stw     r11, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_8000A8C8:
    ctx->pc = 0x8000A8C8u;
    // 8000A8C8: stw     r10, 216(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_8000A8CC:
    ctx->pc = 0x8000A8CCu;
    // 8000A8CC: stw     r9, 220(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_8000A8D0:
    ctx->pc = 0x8000A8D0u;
    // 8000A8D0: stw     r8, 224(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8000A8D4:
    ctx->pc = 0x8000A8D4u;
    // 8000A8D4: stw     r7, 228(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8000A8D8:
    ctx->pc = 0x8000A8D8u;
    // 8000A8D8: stw     r6, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8000A8DC:
    ctx->pc = 0x8000A8DCu;
    // 8000A8DC: stw     r5, 200(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8000A8E0:
    ctx->pc = 0x8000A8E0u;
    // 8000A8E0: stw     r0, 232(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A8E4:
    ctx->pc = 0x8000A8E4u;
    // 8000A8E4: bl      0x80009C74
    {
            ctx->lr = 0x8000A8E8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80009C74u;
                return;
            }
            goto label_80009C74;
    }

label_8000A8E8:
    ctx->pc = 0x8000A8E8u;
    ctx->downcount -= 7;
    // 8000A8E8: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000A8EC:
    ctx->pc = 0x8000A8ECu;
    // 8000A8EC: addi    r12, r1, 196
    ctx->gpr[12] = ctx->gpr[1] + (u32)(s32)(196);

label_8000A8F0:
    ctx->pc = 0x8000A8F0u;
    // 8000A8F0: addi    r4, r3, -19668
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-19668);

label_8000A8F4:
    ctx->pc = 0x8000A8F4u;
    // 8000A8F4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8000A8F8:
    ctx->pc = 0x8000A8F8u;
    // 8000A8F8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8000A8FC:
    ctx->pc = 0x8000A8FCu;
    // 8000A8FC: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8000A900u;
            ctx->pc = target;
            return;
        }
    }

label_8000A900:
    ctx->pc = 0x8000A900u;
    ctx->downcount -= 36;
    // 8000A900: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8000A904:
    ctx->pc = 0x8000A904u;
    // 8000A904: lwz     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8000A908:
    ctx->pc = 0x8000A908u;
    // 8000A908: addi    r29, r3, 10336
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(10336);

label_8000A90C:
    ctx->pc = 0x8000A90Cu;
    // 8000A90C: lis     r4, 31897
    ctx->gpr[4] = ((u32)(s32)(31897) << 16);

label_8000A910:
    ctx->pc = 0x8000A910u;
    // 8000A910: lwz     r8, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_8000A914:
    ctx->pc = 0x8000A914u;
    // 8000A914: lis     r3, 20096
    ctx->gpr[3] = ((u32)(s32)(20096) << 16);

label_8000A918:
    ctx->pc = 0x8000A918u;
    // 8000A918: lwz     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000A91C:
    ctx->pc = 0x8000A91Cu;
    // 8000A91C: oris    r30, r5, 0xA000
    ctx->gpr[30] = ctx->gpr[5] | (0xA000u << 16);

label_8000A920:
    ctx->pc = 0x8000A920u;
    // 8000A920: lwz     r7, 36(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(36);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8000A924:
    ctx->pc = 0x8000A924u;
    // 8000A924: addi    r5, r4, -7258
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-7258);

label_8000A928:
    ctx->pc = 0x8000A928u;
    // 8000A928: stw     r0, 160(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A92C:
    ctx->pc = 0x8000A92Cu;
    // 8000A92C: addi    r0, r3, 32
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32);

label_8000A930:
    ctx->pc = 0x8000A930u;
    // 8000A930: lwz     r28, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_8000A934:
    ctx->pc = 0x8000A934u;
    // 8000A934: lis     r6, -32637
    ctx->gpr[6] = ((u32)(s32)(-32637) << 16);

label_8000A938:
    ctx->pc = 0x8000A938u;
    // 8000A938: stw     r8, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8000A93C:
    ctx->pc = 0x8000A93Cu;
    // 8000A93C: addi    r3, r1, 156
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(156);

label_8000A940:
    ctx->pc = 0x8000A940u;
    // 8000A940: lwz     r12, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8000A944:
    ctx->pc = 0x8000A944u;
    // 8000A944: li      r4, 40
    ctx->gpr[4] = (u32)(s32)(40);

label_8000A948:
    ctx->pc = 0x8000A948u;
    // 8000A948: stw     r7, 192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8000A94C:
    ctx->pc = 0x8000A94Cu;
    // 8000A94C: lwz     r11, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_8000A950:
    ctx->pc = 0x8000A950u;
    // 8000A950: lwz     r10, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_8000A954:
    ctx->pc = 0x8000A954u;
    // 8000A954: lwz     r9, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_8000A958:
    ctx->pc = 0x8000A958u;
    // 8000A958: lwz     r8, 28(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(28);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_8000A95C:
    ctx->pc = 0x8000A95Cu;
    // 8000A95C: lwz     r7, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8000A960:
    ctx->pc = 0x8000A960u;
    // 8000A960: stw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8000A964:
    ctx->pc = 0x8000A964u;
    // 8000A964: stw     r28, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8000A968:
    ctx->pc = 0x8000A968u;
    // 8000A968: stw     r12, 168(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_8000A96C:
    ctx->pc = 0x8000A96Cu;
    // 8000A96C: stw     r11, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_8000A970:
    ctx->pc = 0x8000A970u;
    // 8000A970: stw     r10, 176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_8000A974:
    ctx->pc = 0x8000A974u;
    // 8000A974: stw     r9, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_8000A978:
    ctx->pc = 0x8000A978u;
    // 8000A978: stw     r8, 184(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8000A97C:
    ctx->pc = 0x8000A97Cu;
    // 8000A97C: stw     r7, 188(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8000A980:
    ctx->pc = 0x8000A980u;
    // 8000A980: stw     r6, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8000A984:
    ctx->pc = 0x8000A984u;
    // 8000A984: stw     r5, 160(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8000A988:
    ctx->pc = 0x8000A988u;
    // 8000A988: stw     r0, 192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000A98C:
    ctx->pc = 0x8000A98Cu;
    // 8000A98C: bl      0x80009C74
    {
            ctx->lr = 0x8000A990u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80009C74u;
                return;
            }
            goto label_80009C74;
    }

label_8000A990:
    ctx->pc = 0x8000A990u;
    ctx->downcount -= 7;
    // 8000A990: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000A994:
    ctx->pc = 0x8000A994u;
    // 8000A994: addi    r12, r1, 156
    ctx->gpr[12] = ctx->gpr[1] + (u32)(s32)(156);

label_8000A998:
    ctx->pc = 0x8000A998u;
    // 8000A998: addi    r4, r3, -19668
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-19668);

label_8000A99C:
    ctx->pc = 0x8000A99Cu;
    // 8000A99C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8000A9A0:
    ctx->pc = 0x8000A9A0u;
    // 8000A9A0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8000A9A4:
    ctx->pc = 0x8000A9A4u;
    // 8000A9A4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8000A9A8u;
            ctx->pc = target;
            return;
        }
    }

label_8000A9A8:
    ctx->pc = 0x8000A9A8u;
    ctx->downcount -= 35;
    // 8000A9A8: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8000A9AC:
    ctx->pc = 0x8000A9ACu;
    // 8000A9AC: lis     r4, 31889
    ctx->gpr[4] = ((u32)(s32)(31889) << 16);

label_8000A9B0:
    ctx->pc = 0x8000A9B0u;
    // 8000A9B0: addi    r29, r3, 10336
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(10336);

label_8000A9B4:
    ctx->pc = 0x8000A9B4u;
    // 8000A9B4: lis     r3, 20096
    ctx->gpr[3] = ((u32)(s32)(20096) << 16);

label_8000A9B8:
    ctx->pc = 0x8000A9B8u;
    // 8000A9B8: lwz     r8, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_8000A9BC:
    ctx->pc = 0x8000A9BCu;
    // 8000A9BC: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_8000A9C0:
    ctx->pc = 0x8000A9C0u;
    // 8000A9C0: lwz     r6, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8000A9C4:
    ctx->pc = 0x8000A9C4u;
    // 8000A9C4: addi    r5, r4, -7258
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-7258);

label_8000A9C8:
    ctx->pc = 0x8000A9C8u;
    // 8000A9C8: lwz     r7, 36(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(36);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8000A9CC:
    ctx->pc = 0x8000A9CCu;
    // 8000A9CC: addi    r0, r3, 32
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32);

label_8000A9D0:
    ctx->pc = 0x8000A9D0u;
    // 8000A9D0: stw     r6, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8000A9D4:
    ctx->pc = 0x8000A9D4u;
    // 8000A9D4: lis     r6, -32637
    ctx->gpr[6] = ((u32)(s32)(-32637) << 16);

label_8000A9D8:
    ctx->pc = 0x8000A9D8u;
    // 8000A9D8: lwz     r28, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_8000A9DC:
    ctx->pc = 0x8000A9DCu;
    // 8000A9DC: addi    r3, r1, 116
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(116);

label_8000A9E0:
    ctx->pc = 0x8000A9E0u;
    // 8000A9E0: stw     r8, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8000A9E4:
    ctx->pc = 0x8000A9E4u;
    // 8000A9E4: li      r4, 40
    ctx->gpr[4] = (u32)(s32)(40);

label_8000A9E8:
    ctx->pc = 0x8000A9E8u;
    // 8000A9E8: lwz     r12, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8000A9EC:
    ctx->pc = 0x8000A9ECu;
    // 8000A9EC: stw     r7, 152(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8000A9F0:
    ctx->pc = 0x8000A9F0u;
    // 8000A9F0: lwz     r11, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_8000A9F4:
    ctx->pc = 0x8000A9F4u;
    // 8000A9F4: lwz     r10, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_8000A9F8:
    ctx->pc = 0x8000A9F8u;
    // 8000A9F8: lwz     r9, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_8000A9FC:
    ctx->pc = 0x8000A9FCu;
    // 8000A9FC: lwz     r8, 28(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(28);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_8000AA00:
    ctx->pc = 0x8000AA00u;
    // 8000AA00: lwz     r7, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8000AA04:
    ctx->pc = 0x8000AA04u;
    // 8000AA04: stw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8000AA08:
    ctx->pc = 0x8000AA08u;
    // 8000AA08: stw     r28, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8000AA0C:
    ctx->pc = 0x8000AA0Cu;
    // 8000AA0C: stw     r12, 128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_8000AA10:
    ctx->pc = 0x8000AA10u;
    // 8000AA10: stw     r11, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_8000AA14:
    ctx->pc = 0x8000AA14u;
    // 8000AA14: stw     r10, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_8000AA18:
    ctx->pc = 0x8000AA18u;
    // 8000AA18: stw     r9, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_8000AA1C:
    ctx->pc = 0x8000AA1Cu;
    // 8000AA1C: stw     r8, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8000AA20:
    ctx->pc = 0x8000AA20u;
    // 8000AA20: stw     r7, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8000AA24:
    ctx->pc = 0x8000AA24u;
    // 8000AA24: stw     r6, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8000AA28:
    ctx->pc = 0x8000AA28u;
    // 8000AA28: stw     r5, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8000AA2C:
    ctx->pc = 0x8000AA2Cu;
    // 8000AA2C: stw     r0, 152(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000AA30:
    ctx->pc = 0x8000AA30u;
    // 8000AA30: bl      0x80009C74
    {
            ctx->lr = 0x8000AA34u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80009C74u;
                return;
            }
            goto label_80009C74;
    }

label_8000AA34:
    ctx->pc = 0x8000AA34u;
    ctx->downcount -= 7;
    // 8000AA34: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000AA38:
    ctx->pc = 0x8000AA38u;
    // 8000AA38: addi    r12, r1, 116
    ctx->gpr[12] = ctx->gpr[1] + (u32)(s32)(116);

label_8000AA3C:
    ctx->pc = 0x8000AA3Cu;
    // 8000AA3C: addi    r4, r3, -19668
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-19668);

label_8000AA40:
    ctx->pc = 0x8000AA40u;
    // 8000AA40: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8000AA44:
    ctx->pc = 0x8000AA44u;
    // 8000AA44: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8000AA48:
    ctx->pc = 0x8000AA48u;
    // 8000AA48: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8000AA4Cu;
            ctx->pc = target;
            return;
        }
    }

label_8000AA4C:
    ctx->pc = 0x8000AA4Cu;
    ctx->downcount -= 7;
    // 8000AA4C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8000AA50:
    ctx->pc = 0x8000AA50u;
    // 8000AA50: rlwinm r30, r27, 21, 0, 10
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[27], 21u) & 0xFFE00000u;
    }

label_8000AA54:
    ctx->pc = 0x8000AA54u;
    // 8000AA54: stw     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000AA58:
    ctx->pc = 0x8000AA58u;
    // 8000AA58: addi    r29, r1, 76
    ctx->gpr[29] = ctx->gpr[1] + (u32)(s32)(76);

label_8000AA5C:
    ctx->pc = 0x8000AA5Cu;
    // 8000AA5C: addi    r28, r1, 36
    ctx->gpr[28] = ctx->gpr[1] + (u32)(s32)(36);

label_8000AA60:
    ctx->pc = 0x8000AA60u;
    // 8000AA60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000AA64:
    ctx->pc = 0x8000AA64u;
    // 8000AA64: b       0x8000ABD4
    {
            goto label_8000ABD4;
    }

label_8000AA68:
    ctx->downcount -= 2;
    // 8000AA68: cmpwi   r26, 0
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

label_8000AA6C:
    // 8000AA6C: bc    12, 2, 0x8000AB18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000AB18;
        }
    }

label_8000AA70:
    ctx->downcount -= 23;
    // 8000AA70: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8000AA74:
    ctx->pc = 0x8000AA74u;
    // 8000AA74: lwzu     r12, 10376(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10376);
        ctx->gpr[12] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_8000AA78:
    // 8000AA78: oris    r0, r30, 0xE003
    ctx->gpr[0] = ctx->gpr[30] | (0xE003u << 16);

label_8000AA7C:
    ctx->pc = 0x8000AA7Cu;
    // 8000AA7C: lwz     r11, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_8000AA80:
    ctx->pc = 0x8000AA80u;
    // 8000AA80: lwz     r10, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_8000AA84:
    ctx->pc = 0x8000AA84u;
    // 8000AA84: lwz     r9, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_8000AA88:
    ctx->pc = 0x8000AA88u;
    // 8000AA88: lwz     r8, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_8000AA8C:
    ctx->pc = 0x8000AA8Cu;
    // 8000AA8C: lwz     r7, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8000AA90:
    ctx->pc = 0x8000AA90u;
    // 8000AA90: lwz     r6, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8000AA94:
    ctx->pc = 0x8000AA94u;
    // 8000AA94: lwz     r5, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8000AA98:
    ctx->pc = 0x8000AA98u;
    // 8000AA98: lwz     r4, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000AA9C:
    ctx->pc = 0x8000AA9Cu;
    // 8000AA9C: lwz     r3, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000AAA0:
    ctx->pc = 0x8000AAA0u;
    // 8000AAA0: stw     r12, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_8000AAA4:
    ctx->pc = 0x8000AAA4u;
    // 8000AAA4: stw     r11, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_8000AAA8:
    ctx->pc = 0x8000AAA8u;
    // 8000AAA8: stw     r10, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_8000AAAC:
    ctx->pc = 0x8000AAACu;
    // 8000AAAC: stw     r9, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_8000AAB0:
    ctx->pc = 0x8000AAB0u;
    // 8000AAB0: stw     r8, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8000AAB4:
    ctx->pc = 0x8000AAB4u;
    // 8000AAB4: stw     r7, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8000AAB8:
    ctx->pc = 0x8000AAB8u;
    // 8000AAB8: stw     r6, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8000AABC:
    ctx->pc = 0x8000AABCu;
    // 8000AABC: stw     r5, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8000AAC0:
    ctx->pc = 0x8000AAC0u;
    // 8000AAC0: stw     r4, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000AAC4:
    ctx->pc = 0x8000AAC4u;
    // 8000AAC4: stw     r3, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8000AAC8:
    // 8000AAC8: bc    12, 2, 0x8000AAD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000AAD0;
        }
    }

label_8000AACC:
    ctx->downcount -= 1;
    // 8000AACC: oris    r0, r30, 0xF003
    ctx->gpr[0] = ctx->gpr[30] | (0xF003u << 16);

label_8000AAD0:
    ctx->downcount -= 7;
    // 8000AAD0: lis     r3, 20096
    ctx->gpr[3] = ((u32)(s32)(20096) << 16);

label_8000AAD4:
    ctx->pc = 0x8000AAD4u;
    // 8000AAD4: stw     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000AAD8:
    // 8000AAD8: addi    r0, r3, 32
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32);

label_8000AADC:
    // 8000AADC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8000AAE0:
    ctx->pc = 0x8000AAE0u;
    // 8000AAE0: stw     r0, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000AAE4:
    // 8000AAE4: li      r4, 40
    ctx->gpr[4] = (u32)(s32)(40);

label_8000AAE8:
    // 8000AAE8: bl      0x80009C74
    {
            ctx->lr = 0x8000AAECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80009C74u;
                return;
            }
            goto label_80009C74;
    }

label_8000AAEC:
    ctx->downcount -= 7;
    // 8000AAEC: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000AAF0:
    // 8000AAF0: addi    r12, r1, 76
    ctx->gpr[12] = ctx->gpr[1] + (u32)(s32)(76);

label_8000AAF4:
    // 8000AAF4: addi    r4, r3, -19668
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-19668);

label_8000AAF8:
    // 8000AAF8: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_8000AAFC:
    ctx->pc = 0x8000AAFCu;
    // 8000AAFC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8000AB00:
    ctx->pc = 0x8000AB00u;
    // 8000AB00: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8000AB04u;
            ctx->pc = target;
            return;
        }
    }

label_8000AB04:
    ctx->pc = 0x8000AB04u;
    ctx->downcount -= 4;
    // 8000AB04: lwz     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8000AB08:
    // 8000AB08: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_8000AB0C:
    ctx->pc = 0x8000AB0Cu;
    // 8000AB0C: lwz     r6, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8000AB10:
    // 8000AB10: bl      0x80007B9C
    {
            ctx->lr = 0x8000AB14u;
            ctx->pc = 0x80007B9Cu;
            return;
    }

label_8000AB14:
    ctx->downcount -= 1;
    // 8000AB14: b       0x8000ABC0
    {
            goto label_8000ABC0;
    }

label_8000AB18:
    ctx->downcount -= 3;
    // 8000AB18: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_8000AB1C:
    // 8000AB1C: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_8000AB20:
    // 8000AB20: bl      0x80007950
    {
            ctx->lr = 0x8000AB24u;
            ctx->pc = 0x80007950u;
            return;
    }

label_8000AB24:
    ctx->downcount -= 24;
    // 8000AB24: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8000AB28:
    ctx->pc = 0x8000AB28u;
    // 8000AB28: lwzu     r12, 10376(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10376);
        ctx->gpr[12] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_8000AB2C:
    // 8000AB2C: cmpwi   r26, 0
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

label_8000AB30:
    // 8000AB30: oris    r0, r30, 0xE003
    ctx->gpr[0] = ctx->gpr[30] | (0xE003u << 16);

label_8000AB34:
    ctx->pc = 0x8000AB34u;
    // 8000AB34: lwz     r11, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_8000AB38:
    ctx->pc = 0x8000AB38u;
    // 8000AB38: lwz     r10, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_8000AB3C:
    ctx->pc = 0x8000AB3Cu;
    // 8000AB3C: lwz     r9, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_8000AB40:
    ctx->pc = 0x8000AB40u;
    // 8000AB40: lwz     r8, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_8000AB44:
    ctx->pc = 0x8000AB44u;
    // 8000AB44: lwz     r7, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8000AB48:
    ctx->pc = 0x8000AB48u;
    // 8000AB48: lwz     r6, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8000AB4C:
    ctx->pc = 0x8000AB4Cu;
    // 8000AB4C: lwz     r5, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8000AB50:
    ctx->pc = 0x8000AB50u;
    // 8000AB50: lwz     r4, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000AB54:
    ctx->pc = 0x8000AB54u;
    // 8000AB54: lwz     r3, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000AB58:
    ctx->pc = 0x8000AB58u;
    // 8000AB58: stw     r12, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_8000AB5C:
    ctx->pc = 0x8000AB5Cu;
    // 8000AB5C: stw     r11, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_8000AB60:
    ctx->pc = 0x8000AB60u;
    // 8000AB60: stw     r10, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_8000AB64:
    ctx->pc = 0x8000AB64u;
    // 8000AB64: stw     r9, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_8000AB68:
    ctx->pc = 0x8000AB68u;
    // 8000AB68: stw     r8, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8000AB6C:
    ctx->pc = 0x8000AB6Cu;
    // 8000AB6C: stw     r7, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8000AB70:
    ctx->pc = 0x8000AB70u;
    // 8000AB70: stw     r6, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8000AB74:
    ctx->pc = 0x8000AB74u;
    // 8000AB74: stw     r5, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8000AB78:
    ctx->pc = 0x8000AB78u;
    // 8000AB78: stw     r4, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000AB7C:
    ctx->pc = 0x8000AB7Cu;
    // 8000AB7C: stw     r3, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8000AB80:
    // 8000AB80: bc    12, 2, 0x8000AB88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000AB88;
        }
    }

label_8000AB84:
    ctx->downcount -= 1;
    // 8000AB84: oris    r0, r30, 0xF003
    ctx->gpr[0] = ctx->gpr[30] | (0xF003u << 16);

label_8000AB88:
    ctx->downcount -= 7;
    // 8000AB88: lis     r3, 20096
    ctx->gpr[3] = ((u32)(s32)(20096) << 16);

label_8000AB8C:
    ctx->pc = 0x8000AB8Cu;
    // 8000AB8C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000AB90:
    // 8000AB90: addi    r0, r3, 32
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32);

label_8000AB94:
    // 8000AB94: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8000AB98:
    ctx->pc = 0x8000AB98u;
    // 8000AB98: stw     r0, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000AB9C:
    // 8000AB9C: li      r4, 40
    ctx->gpr[4] = (u32)(s32)(40);

label_8000ABA0:
    // 8000ABA0: bl      0x80009C74
    {
            ctx->lr = 0x8000ABA4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80009C74u;
                return;
            }
            goto label_80009C74;
    }

label_8000ABA4:
    ctx->downcount -= 7;
    // 8000ABA4: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000ABA8:
    // 8000ABA8: addi    r12, r1, 36
    ctx->gpr[12] = ctx->gpr[1] + (u32)(s32)(36);

label_8000ABAC:
    // 8000ABAC: addi    r4, r3, -19668
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-19668);

label_8000ABB0:
    // 8000ABB0: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_8000ABB4:
    ctx->pc = 0x8000ABB4u;
    // 8000ABB4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8000ABB8:
    ctx->pc = 0x8000ABB8u;
    // 8000ABB8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8000ABBCu;
            ctx->pc = target;
            return;
        }
    }

label_8000ABBC:
    ctx->downcount -= 1;
    // 8000ABBC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000ABC0:
    ctx->pc = 0x8000ABC0u;
    ctx->downcount -= 5;
    // 8000ABC0: lwz     r4, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000ABC4:
    // 8000ABC4: addis   r30, r30, 32
    ctx->gpr[30] = ctx->gpr[30] + ((u32)(s32)(32) << 16);

label_8000ABC8:
    // 8000ABC8: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_8000ABCC:
    // 8000ABCC: addi    r0, r4, 8
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(8);

label_8000ABD0:
    ctx->pc = 0x8000ABD0u;
    // 8000ABD0: stw     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000ABD4:
    ctx->downcount -= 2;
    // 8000ABD4: cmplw   r27, r23
    {
        u32 val_a = (u32)(ctx->gpr[27]);
        u32 val_b = (u32)(ctx->gpr[23]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000ABD8:
    // 8000ABD8: bc    12, 1, 0x8000ABE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000ABE4;
        }
    }

label_8000ABDC:
    ctx->downcount -= 2;
    // 8000ABDC: cmpwi   r3, 0
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

label_8000ABE0:
    // 8000ABE0: bc    12, 2, 0x8000AA68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000AA68u;
                return;
            }
            goto label_8000AA68;
        }
    }

label_8000ABE4:
    ctx->pc = 0x8000ABE4u;
    ctx->downcount -= 3;
    // 8000ABE4: lbz     r0, 13(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(13);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8000ABE8:
    ctx->pc = 0x8000ABE8u;
    // 8000ABE8: cmplwi  r0, 0x0000
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

label_8000ABEC:
    ctx->pc = 0x8000ABECu;
    // 8000ABEC: bc    12, 2, 0x8000ABFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000ABFC;
        }
    }

label_8000ABF0:
    ctx->pc = 0x8000ABF0u;
    ctx->downcount -= 3;
    // 8000ABF0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8000ABF4:
    ctx->pc = 0x8000ABF4u;
    // 8000ABF4: li      r3, 1794
    ctx->gpr[3] = (u32)(s32)(1794);

label_8000ABF8:
    ctx->pc = 0x8000ABF8u;
    // 8000ABF8: stw     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000ABFC:
    ctx->pc = 0x8000ABFCu;
    ctx->downcount -= 10;
    // 8000ABFC: lis     r4, -32738
    ctx->gpr[4] = ((u32)(s32)(-32738) << 16);

label_8000AC00:
    ctx->pc = 0x8000AC00u;
    // 8000AC00: lwz     r6, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8000AC04:
    ctx->pc = 0x8000AC04u;
    // 8000AC04: addi    r7, r4, -5900
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(-5900);

label_8000AC08:
    ctx->pc = 0x8000AC08u;
    // 8000AC08: lwz     r5, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8000AC0C:
    ctx->pc = 0x8000AC0Cu;
    // 8000AC0C: lwz     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000AC10:
    ctx->pc = 0x8000AC10u;
    // 8000AC10: lwz     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000AC14:
    ctx->pc = 0x8000AC14u;
    // 8000AC14: stw     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8000AC18:
    ctx->pc = 0x8000AC18u;
    // 8000AC18: stw     r5, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8000AC1C:
    ctx->pc = 0x8000AC1Cu;
    // 8000AC1C: stw     r4, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000AC20:
    ctx->pc = 0x8000AC20u;
    // 8000AC20: stw     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000AC24:
    ctx->pc = 0x8000AC24u;
    ctx->downcount -= 16;
    // 8000AC24: lmw     r19, 252(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(252);
        for (u32 r = 19; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8000AC28:
    ctx->pc = 0x8000AC28u;
    // 8000AC28: lwz     r0, 308(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(308);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000AC2C:
    ctx->pc = 0x8000AC2Cu;
    // 8000AC2C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000AC30:
    ctx->pc = 0x8000AC30u;
    // 8000AC30: addi    r1, r1, 304
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(304);

label_8000AC34:
    ctx->pc = 0x8000AC34u;
    // 8000AC34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000AC38:
    ctx->pc = 0x8000AC38u;
    ctx->downcount -= 8;
    // 8000AC38: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000AC3C:
    ctx->pc = 0x8000AC3Cu;
    // 8000AC3C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000AC40:
    ctx->pc = 0x8000AC40u;
    // 8000AC40: cmplwi  r4, 0x0060
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x0060u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000AC44:
    ctx->pc = 0x8000AC44u;
    // 8000AC44: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000AC48:
    ctx->pc = 0x8000AC48u;
    // 8000AC48: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8000AC4C:
    ctx->pc = 0x8000AC4Cu;
    // 8000AC4C: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8000AC50:
    ctx->pc = 0x8000AC50u;
    // 8000AC50: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_8000AC54:
    ctx->pc = 0x8000AC54u;
    // 8000AC54: bc    4, 1, 0x8000AC60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000AC60;
        }
    }

label_8000AC58:
    ctx->pc = 0x8000AC58u;
    ctx->downcount -= 2;
    // 8000AC58: li      r3, 1793
    ctx->gpr[3] = (u32)(s32)(1793);

label_8000AC5C:
    ctx->pc = 0x8000AC5Cu;
    // 8000AC5C: b       0x8000AD90
    {
            goto label_8000AD90;
    }

label_8000AC60:
    ctx->pc = 0x8000AC60u;
    ctx->downcount -= 15;
    // 8000AC60: lis     r6, -32738
    ctx->gpr[6] = ((u32)(s32)(-32738) << 16);

label_8000AC64:
    ctx->pc = 0x8000AC64u;
    // 8000AC64: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8000AC68:
    ctx->pc = 0x8000AC68u;
    // 8000AC68: addi    r31, r6, -5900
    ctx->gpr[31] = ctx->gpr[6] + (u32)(s32)(-5900);

label_8000AC6C:
    ctx->pc = 0x8000AC6Cu;
    // 8000AC6C: cmplw   r3, r4
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(ctx->gpr[4]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000AC70:
    ctx->pc = 0x8000AC70u;
    // 8000AC70: lwz     r6, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8000AC74:
    ctx->pc = 0x8000AC74u;
    // 8000AC74: lwz     r10, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_8000AC78:
    ctx->pc = 0x8000AC78u;
    // 8000AC78: lwz     r9, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_8000AC7C:
    ctx->pc = 0x8000AC7Cu;
    // 8000AC7C: lwz     r8, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_8000AC80:
    ctx->pc = 0x8000AC80u;
    // 8000AC80: stb     r0, 13(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8000AC84:
    ctx->pc = 0x8000AC84u;
    // 8000AC84: stw     r10, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_8000AC88:
    ctx->pc = 0x8000AC88u;
    // 8000AC88: stw     r9, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_8000AC8C:
    ctx->pc = 0x8000AC8Cu;
    // 8000AC8C: stw     r8, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8000AC90:
    ctx->pc = 0x8000AC90u;
    // 8000AC90: stw     r6, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8000AC94:
    ctx->pc = 0x8000AC94u;
    // 8000AC94: stw     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000AC98:
    ctx->pc = 0x8000AC98u;
    // 8000AC98: bc    12, 1, 0x8000AD50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000AD50;
        }
    }

label_8000AC9C:
    ctx->pc = 0x8000AC9Cu;
    ctx->downcount -= 13;
    // 8000AC9C: subf   r4, r3, r4
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8000ACA0:
    ctx->pc = 0x8000ACA0u;
    // 8000ACA0: lis     r8, -32737
    ctx->gpr[8] = ((u32)(s32)(-32737) << 16);

label_8000ACA4:
    ctx->pc = 0x8000ACA4u;
    // 8000ACA4: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_8000ACA8:
    ctx->pc = 0x8000ACA8u;
    // 8000ACA8: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000ACAC:
    ctx->pc = 0x8000ACACu;
    // 8000ACAC: rlwinm r6, r0, 2, 0, 29
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8000ACB0:
    ctx->pc = 0x8000ACB0u;
    // 8000ACB0: cmpwi   r7, 0
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

label_8000ACB4:
    ctx->pc = 0x8000ACB4u;
    // 8000ACB4: add   r4, r4, r6
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8000ACB8:
    ctx->pc = 0x8000ACB8u;
    // 8000ACB8: addi    r7, r8, -20888
    ctx->gpr[7] = ctx->gpr[8] + (u32)(s32)(-20888);

label_8000ACBC:
    ctx->pc = 0x8000ACBCu;
    // 8000ACBC: rlwinm r3, r3, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_8000ACC0:
    ctx->pc = 0x8000ACC0u;
    // 8000ACC0: stw     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000ACC4:
    ctx->pc = 0x8000ACC4u;
    // 8000ACC4: add   r4, r7, r3
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8000ACC8:
    ctx->pc = 0x8000ACC8u;
    // 8000ACC8: addi    r4, r4, 424
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(424);

label_8000ACCC:
    ctx->pc = 0x8000ACCCu;
    // 8000ACCC: bc    12, 2, 0x8000ACE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000ACE0;
        }
    }

label_8000ACD0:
    ctx->pc = 0x8000ACD0u;
    ctx->downcount -= 3;
    // 8000ACD0: or   r3, r5, r5
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8000ACD4:
    ctx->pc = 0x8000ACD4u;
    // 8000ACD4: or   r5, r0, r0
    {
        ctx->gpr[5] = ctx->gpr[0] | ctx->gpr[0];
    }

label_8000ACD8:
    ctx->pc = 0x8000ACD8u;
    // 8000ACD8: bl      0x80007A38
    {
            ctx->lr = 0x8000ACDCu;
            ctx->pc = 0x80007A38u;
            return;
    }

label_8000ACDC:
    ctx->pc = 0x8000ACDCu;
    ctx->downcount -= 1;
    // 8000ACDC: b       0x8000AD50
    {
            goto label_8000AD50;
    }

label_8000ACE0:
    ctx->pc = 0x8000ACE0u;
    ctx->downcount -= 3;
    // 8000ACE0: addi    r3, r7, 492
    ctx->gpr[3] = ctx->gpr[7] + (u32)(s32)(492);

label_8000ACE4:
    ctx->pc = 0x8000ACE4u;
    // 8000ACE4: cmplw   r4, r3
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000ACE8:
    ctx->pc = 0x8000ACE8u;
    // 8000ACE8: bc    12, 1, 0x8000AD0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000AD0C;
        }
    }

label_8000ACEC:
    ctx->pc = 0x8000ACECu;
    ctx->downcount -= 5;
    // 8000ACEC: addi    r6, r6, -4
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-4);

label_8000ACF0:
    ctx->pc = 0x8000ACF0u;
    // 8000ACF0: addi    r3, r7, 488
    ctx->gpr[3] = ctx->gpr[7] + (u32)(s32)(488);

label_8000ACF4:
    ctx->pc = 0x8000ACF4u;
    // 8000ACF4: add   r6, r4, r6
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_8000ACF8:
    ctx->pc = 0x8000ACF8u;
    // 8000ACF8: cmplw   r6, r3
    {
        u32 val_a = (u32)(ctx->gpr[6]);
        u32 val_b = (u32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000ACFC:
    ctx->pc = 0x8000ACFCu;
    // 8000ACFC: bc    12, 0, 0x8000AD0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000AD0C;
        }
    }

label_8000AD00:
    ctx->pc = 0x8000AD00u;
    ctx->downcount -= 3;
    // 8000AD00: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8000AD04:
    ctx->pc = 0x8000AD04u;
    // 8000AD04: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_8000AD08:
    ctx->pc = 0x8000AD08u;
    // 8000AD08: stb     r6, -5912(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5912);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_8000AD0C:
    ctx->pc = 0x8000AD0Cu;
    ctx->downcount -= 5;
    // 8000AD0C: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000AD10:
    ctx->pc = 0x8000AD10u;
    // 8000AD10: addi    r3, r3, -20888
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20888);

label_8000AD14:
    ctx->pc = 0x8000AD14u;
    // 8000AD14: addi    r6, r3, 632
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(632);

label_8000AD18:
    ctx->pc = 0x8000AD18u;
    // 8000AD18: cmplw   r4, r6
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(ctx->gpr[6]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000AD1C:
    ctx->pc = 0x8000AD1Cu;
    // 8000AD1C: bc    12, 1, 0x8000AD44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000AD44;
        }
    }

label_8000AD20:
    ctx->pc = 0x8000AD20u;
    ctx->downcount -= 5;
    // 8000AD20: rlwinm r3, r0, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8000AD24:
    ctx->pc = 0x8000AD24u;
    // 8000AD24: addi    r3, r3, -4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4);

label_8000AD28:
    ctx->pc = 0x8000AD28u;
    // 8000AD28: add   r3, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8000AD2C:
    ctx->pc = 0x8000AD2Cu;
    // 8000AD2C: cmplw   r3, r6
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(ctx->gpr[6]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000AD30:
    ctx->pc = 0x8000AD30u;
    // 8000AD30: bc    12, 0, 0x8000AD44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000AD44;
        }
    }

label_8000AD34:
    ctx->pc = 0x8000AD34u;
    ctx->downcount -= 4;
    // 8000AD34: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8000AD38:
    ctx->pc = 0x8000AD38u;
    // 8000AD38: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_8000AD3C:
    ctx->pc = 0x8000AD3Cu;
    // 8000AD3C: addi    r3, r3, -5912
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5912);

label_8000AD40:
    ctx->pc = 0x8000AD40u;
    // 8000AD40: stb     r6, 1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_8000AD44:
    ctx->pc = 0x8000AD44u;
    ctx->downcount -= 3;
    // 8000AD44: or   r3, r5, r5
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8000AD48:
    ctx->pc = 0x8000AD48u;
    // 8000AD48: or   r5, r0, r0
    {
        ctx->gpr[5] = ctx->gpr[0] | ctx->gpr[0];
    }

label_8000AD4C:
    ctx->pc = 0x8000AD4Cu;
    // 8000AD4C: bl      0x800077C8
    {
            ctx->lr = 0x8000AD50u;
            ctx->pc = 0x800077C8u;
            return;
    }

label_8000AD50:
    ctx->pc = 0x8000AD50u;
    ctx->downcount -= 3;
    // 8000AD50: lbz     r0, 13(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(13);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8000AD54:
    ctx->pc = 0x8000AD54u;
    // 8000AD54: cmplwi  r0, 0x0000
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

label_8000AD58:
    ctx->pc = 0x8000AD58u;
    // 8000AD58: bc    12, 2, 0x8000AD68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000AD68;
        }
    }

label_8000AD5C:
    ctx->pc = 0x8000AD5Cu;
    ctx->downcount -= 3;
    // 8000AD5C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8000AD60:
    ctx->pc = 0x8000AD60u;
    // 8000AD60: li      r3, 1794
    ctx->gpr[3] = (u32)(s32)(1794);

label_8000AD64:
    ctx->pc = 0x8000AD64u;
    // 8000AD64: stw     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000AD68:
    ctx->pc = 0x8000AD68u;
    ctx->downcount -= 10;
    // 8000AD68: lis     r4, -32738
    ctx->gpr[4] = ((u32)(s32)(-32738) << 16);

label_8000AD6C:
    ctx->pc = 0x8000AD6Cu;
    // 8000AD6C: lwz     r6, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8000AD70:
    ctx->pc = 0x8000AD70u;
    // 8000AD70: addi    r7, r4, -5900
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(-5900);

label_8000AD74:
    ctx->pc = 0x8000AD74u;
    // 8000AD74: lwz     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8000AD78:
    ctx->pc = 0x8000AD78u;
    // 8000AD78: lwz     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000AD7C:
    ctx->pc = 0x8000AD7Cu;
    // 8000AD7C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000AD80:
    ctx->pc = 0x8000AD80u;
    // 8000AD80: stw     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8000AD84:
    ctx->pc = 0x8000AD84u;
    // 8000AD84: stw     r5, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8000AD88:
    ctx->pc = 0x8000AD88u;
    // 8000AD88: stw     r4, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000AD8C:
    ctx->pc = 0x8000AD8Cu;
    // 8000AD8C: stw     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000AD90:
    ctx->pc = 0x8000AD90u;
    ctx->downcount -= 7;
    // 8000AD90: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000AD94:
    ctx->pc = 0x8000AD94u;
    // 8000AD94: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8000AD98:
    ctx->pc = 0x8000AD98u;
    // 8000AD98: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8000AD9C:
    ctx->pc = 0x8000AD9Cu;
    // 8000AD9C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000ADA0:
    ctx->pc = 0x8000ADA0u;
    // 8000ADA0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8000ADA4:
    ctx->pc = 0x8000ADA4u;
    // 8000ADA4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000ADA8:
    ctx->pc = 0x8000ADA8u;
    ctx->downcount -= 21;
    // 8000ADA8: stwu     r1, -240(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-240);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000ADAC:
    ctx->pc = 0x8000ADACu;
    // 8000ADAC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000ADB0:
    ctx->pc = 0x8000ADB0u;
    // 8000ADB0: stw     r0, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000ADB4:
    ctx->pc = 0x8000ADB4u;
    // 8000ADB4: stmw     r20, 192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        for (u32 r = 20; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8000ADB8:
    ctx->pc = 0x8000ADB8u;
    // 8000ADB8: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8000ADBC:
    ctx->pc = 0x8000ADBCu;
    // 8000ADBC: cmplwi  r28, 0x0021
    {
        u32 val_a = (u32)(ctx->gpr[28]);
        u32 val_b = (u32)(0x0021u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000ADC0:
    ctx->pc = 0x8000ADC0u;
    // 8000ADC0: or   r20, r3, r3
    {
        ctx->gpr[20] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000ADC4:
    ctx->pc = 0x8000ADC4u;
    // 8000ADC4: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8000ADC8:
    ctx->pc = 0x8000ADC8u;
    // 8000ADC8: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_8000ADCC:
    ctx->pc = 0x8000ADCCu;
    // 8000ADCC: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_8000ADD0:
    ctx->pc = 0x8000ADD0u;
    // 8000ADD0: bc    4, 1, 0x8000ADDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000ADDC;
        }
    }

label_8000ADD4:
    ctx->pc = 0x8000ADD4u;
    ctx->downcount -= 2;
    // 8000ADD4: li      r3, 1793
    ctx->gpr[3] = (u32)(s32)(1793);

label_8000ADD8:
    ctx->pc = 0x8000ADD8u;
    // 8000ADD8: b       0x8000B260
    {
            goto label_8000B260;
    }

label_8000ADDC:
    ctx->pc = 0x8000ADDCu;
    ctx->downcount -= 13;
    // 8000ADDC: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8000ADE0:
    ctx->pc = 0x8000ADE0u;
    // 8000ADE0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8000ADE4:
    ctx->pc = 0x8000ADE4u;
    // 8000ADE4: addi    r27, r3, -5900
    ctx->gpr[27] = ctx->gpr[3] + (u32)(s32)(-5900);

label_8000ADE8:
    ctx->pc = 0x8000ADE8u;
    // 8000ADE8: lwz     r3, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000ADEC:
    ctx->pc = 0x8000ADECu;
    // 8000ADEC: lwz     r6, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8000ADF0:
    ctx->pc = 0x8000ADF0u;
    // 8000ADF0: lwz     r5, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8000ADF4:
    ctx->pc = 0x8000ADF4u;
    // 8000ADF4: lwz     r4, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000ADF8:
    ctx->pc = 0x8000ADF8u;
    // 8000ADF8: stw     r6, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8000ADFC:
    ctx->pc = 0x8000ADFCu;
    // 8000ADFC: stw     r5, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8000AE00:
    ctx->pc = 0x8000AE00u;
    // 8000AE00: stw     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000AE04:
    ctx->pc = 0x8000AE04u;
    // 8000AE04: stw     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8000AE08:
    ctx->pc = 0x8000AE08u;
    // 8000AE08: stb     r0, 13(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8000AE0C:
    ctx->pc = 0x8000AE0Cu;
    // 8000AE0C: bl      0x80009D64
    {
            ctx->lr = 0x8000AE10u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80009D64u;
                return;
            }
            goto label_80009D64;
    }

label_8000AE10:
    ctx->pc = 0x8000AE10u;
    ctx->downcount -= 2;
    // 8000AE10: ori     r3, r3, 0x2000
    ctx->gpr[3] = ctx->gpr[3] | 0x2000u;

label_8000AE14:
    ctx->pc = 0x8000AE14u;
    // 8000AE14: bl      0x80009D6C
    {
            ctx->lr = 0x8000AE18u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80009D6Cu;
                return;
            }
            goto label_80009D6C;
    }

label_8000AE18:
    ctx->pc = 0x8000AE18u;
    ctx->downcount -= 10;
    // 8000AE18: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8000AE1C:
    ctx->pc = 0x8000AE1Cu;
    // 8000AE1C: or   r22, r20, r20
    {
        ctx->gpr[22] = ctx->gpr[20] | ctx->gpr[20];
    }

label_8000AE20:
    ctx->pc = 0x8000AE20u;
    // 8000AE20: stw     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000AE24:
    ctx->pc = 0x8000AE24u;
    // 8000AE24: rlwinm r26, r20, 21, 0, 10
    {
        ctx->gpr[26] = dolrecomp_rotl32(ctx->gpr[20], 21u) & 0xFFE00000u;
    }

label_8000AE28:
    ctx->pc = 0x8000AE28u;
    // 8000AE28: addi    r21, r1, 152
    ctx->gpr[21] = ctx->gpr[1] + (u32)(s32)(152);

label_8000AE2C:
    ctx->pc = 0x8000AE2Cu;
    // 8000AE2C: addi    r25, r1, 72
    ctx->gpr[25] = ctx->gpr[1] + (u32)(s32)(72);

label_8000AE30:
    ctx->pc = 0x8000AE30u;
    // 8000AE30: addi    r24, r1, 112
    ctx->gpr[24] = ctx->gpr[1] + (u32)(s32)(112);

label_8000AE34:
    ctx->pc = 0x8000AE34u;
    // 8000AE34: addi    r23, r1, 32
    ctx->gpr[23] = ctx->gpr[1] + (u32)(s32)(32);

label_8000AE38:
    ctx->pc = 0x8000AE38u;
    // 8000AE38: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000AE3C:
    ctx->pc = 0x8000AE3Cu;
    // 8000AE3C: b       0x8000B210
    {
            goto label_8000B210;
    }

label_8000AE40:
    ctx->downcount -= 2;
    // 8000AE40: cmpwi   r31, 0
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

label_8000AE44:
    // 8000AE44: bc    12, 2, 0x8000B024
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000B024;
        }
    }

label_8000AE48:
    ctx->downcount -= 24;
    // 8000AE48: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8000AE4C:
    // 8000AE4C: cmplwi  r22, 0x0020
    {
        u32 val_a = (u32)(ctx->gpr[22]);
        u32 val_b = (u32)(0x0020u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000AE50:
    // 8000AE50: addi    r12, r3, 10416
    ctx->gpr[12] = ctx->gpr[3] + (u32)(s32)(10416);

label_8000AE54:
    ctx->pc = 0x8000AE54u;
    // 8000AE54: lwz     r11, 0(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_8000AE58:
    ctx->pc = 0x8000AE58u;
    // 8000AE58: lwz     r10, 4(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(4);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_8000AE5C:
    ctx->pc = 0x8000AE5Cu;
    // 8000AE5C: lwz     r9, 8(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(8);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_8000AE60:
    ctx->pc = 0x8000AE60u;
    // 8000AE60: lwz     r8, 12(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(12);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_8000AE64:
    ctx->pc = 0x8000AE64u;
    // 8000AE64: lwz     r7, 16(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(16);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8000AE68:
    ctx->pc = 0x8000AE68u;
    // 8000AE68: lwz     r6, 20(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(20);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8000AE6C:
    ctx->pc = 0x8000AE6Cu;
    // 8000AE6C: lwz     r5, 24(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8000AE70:
    ctx->pc = 0x8000AE70u;
    // 8000AE70: lwz     r4, 28(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000AE74:
    ctx->pc = 0x8000AE74u;
    // 8000AE74: lwz     r3, 32(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000AE78:
    ctx->pc = 0x8000AE78u;
    // 8000AE78: lwz     r0, 36(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000AE7C:
    ctx->pc = 0x8000AE7Cu;
    // 8000AE7C: stw     r11, 152(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_8000AE80:
    ctx->pc = 0x8000AE80u;
    // 8000AE80: stw     r10, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_8000AE84:
    ctx->pc = 0x8000AE84u;
    // 8000AE84: stw     r9, 160(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_8000AE88:
    ctx->pc = 0x8000AE88u;
    // 8000AE88: stw     r8, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8000AE8C:
    ctx->pc = 0x8000AE8Cu;
    // 8000AE8C: stw     r7, 168(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8000AE90:
    ctx->pc = 0x8000AE90u;
    // 8000AE90: stw     r6, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8000AE94:
    ctx->pc = 0x8000AE94u;
    // 8000AE94: stw     r5, 176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8000AE98:
    ctx->pc = 0x8000AE98u;
    // 8000AE98: stw     r4, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000AE9C:
    ctx->pc = 0x8000AE9Cu;
    // 8000AE9C: stw     r3, 184(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8000AEA0:
    ctx->pc = 0x8000AEA0u;
    // 8000AEA0: stw     r0, 188(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000AEA4:
    // 8000AEA4: bc    4, 0, 0x8000AEF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000AEF0;
        }
    }

label_8000AEA8:
    ctx->downcount -= 3;
    // 8000AEA8: cmpwi   r31, 0
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

label_8000AEAC:
    // 8000AEAC: oris    r0, r26, 0xC803
    ctx->gpr[0] = ctx->gpr[26] | (0xC803u << 16);

label_8000AEB0:
    // 8000AEB0: bc    12, 2, 0x8000AEB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000AEB8;
        }
    }

label_8000AEB4:
    ctx->downcount -= 1;
    // 8000AEB4: oris    r0, r26, 0xD803
    ctx->gpr[0] = ctx->gpr[26] | (0xD803u << 16);

label_8000AEB8:
    ctx->downcount -= 7;
    // 8000AEB8: lis     r3, 20096
    ctx->gpr[3] = ((u32)(s32)(20096) << 16);

label_8000AEBC:
    ctx->pc = 0x8000AEBCu;
    // 8000AEBC: stw     r0, 152(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000AEC0:
    // 8000AEC0: addi    r0, r3, 32
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32);

label_8000AEC4:
    // 8000AEC4: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_8000AEC8:
    ctx->pc = 0x8000AEC8u;
    // 8000AEC8: stw     r0, 188(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000AECC:
    // 8000AECC: li      r4, 40
    ctx->gpr[4] = (u32)(s32)(40);

label_8000AED0:
    // 8000AED0: bl      0x80009C74
    {
            ctx->lr = 0x8000AED4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80009C74u;
                return;
            }
            goto label_80009C74;
    }

label_8000AED4:
    ctx->downcount -= 7;
    // 8000AED4: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000AED8:
    // 8000AED8: addi    r12, r1, 152
    ctx->gpr[12] = ctx->gpr[1] + (u32)(s32)(152);

label_8000AEDC:
    // 8000AEDC: addi    r4, r3, -19668
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-19668);

label_8000AEE0:
    // 8000AEE0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8000AEE4:
    ctx->pc = 0x8000AEE4u;
    // 8000AEE4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8000AEE8:
    ctx->pc = 0x8000AEE8u;
    // 8000AEE8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8000AEECu;
            ctx->pc = target;
            return;
        }
    }

label_8000AEEC:
    ctx->downcount -= 1;
    // 8000AEEC: b       0x8000B010
    {
            goto label_8000B010;
    }

label_8000AEF0:
    ctx->downcount -= 1;
    // 8000AEF0: bc    4, 2, 0x8000AF18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000AF18;
        }
    }

label_8000AEF4:
    ctx->pc = 0x8000AEF4u;
    ctx->downcount -= 9;
    // 8000AEF4: lwz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000AEF8:
    // 8000AEF8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8000AEFC:
    ctx->pc = 0x8000AEFCu;
    // 8000AEFC: lwz     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8000AF00:
    // 8000AF00: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_8000AF04:
    // 8000AF04: and   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] & ctx->gpr[0];
    }

label_8000AF08:
    // 8000AF08: and   r3, r5, r3
    {
        ctx->gpr[3] = ctx->gpr[5] & ctx->gpr[3];
    }

label_8000AF0C:
    ctx->pc = 0x8000AF0Cu;
    // 8000AF0C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000AF10:
    ctx->pc = 0x8000AF10u;
    // 8000AF10: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8000AF14:
    // 8000AF14: b       0x8000B010
    {
            goto label_8000B010;
    }

label_8000AF18:
    ctx->downcount -= 2;
    // 8000AF18: cmplwi  r22, 0x0021
    {
        u32 val_a = (u32)(ctx->gpr[22]);
        u32 val_b = (u32)(0x0021u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000AF1C:
    // 8000AF1C: bc    4, 2, 0x8000B010
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000B010;
        }
    }

label_8000AF20:
    ctx->downcount -= 2;
    // 8000AF20: cmpwi   r31, 0
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

label_8000AF24:
    // 8000AF24: bc    4, 2, 0x8000AF30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000AF30;
        }
    }

label_8000AF28:
    ctx->pc = 0x8000AF28u;
    ctx->downcount -= 2;
    // 8000AF28: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000AF2C:
    ctx->pc = 0x8000AF2Cu;
    // 8000AF2C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000AF30:
    ctx->downcount -= 24;
    // 8000AF30: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8000AF34:
    // 8000AF34: cmpwi   r31, 0
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

label_8000AF38:
    // 8000AF38: addi    r12, r3, 10336
    ctx->gpr[12] = ctx->gpr[3] + (u32)(s32)(10336);

label_8000AF3C:
    ctx->pc = 0x8000AF3Cu;
    // 8000AF3C: lwz     r11, 0(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_8000AF40:
    ctx->pc = 0x8000AF40u;
    // 8000AF40: lwz     r10, 4(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(4);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_8000AF44:
    ctx->pc = 0x8000AF44u;
    // 8000AF44: lwz     r9, 8(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(8);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_8000AF48:
    ctx->pc = 0x8000AF48u;
    // 8000AF48: lwz     r8, 12(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(12);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_8000AF4C:
    ctx->pc = 0x8000AF4Cu;
    // 8000AF4C: lwz     r7, 16(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(16);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8000AF50:
    ctx->pc = 0x8000AF50u;
    // 8000AF50: lwz     r6, 20(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(20);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8000AF54:
    ctx->pc = 0x8000AF54u;
    // 8000AF54: lwz     r5, 24(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8000AF58:
    ctx->pc = 0x8000AF58u;
    // 8000AF58: lwz     r4, 28(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000AF5C:
    ctx->pc = 0x8000AF5Cu;
    // 8000AF5C: lwz     r3, 32(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000AF60:
    ctx->pc = 0x8000AF60u;
    // 8000AF60: lwz     r0, 36(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000AF64:
    ctx->pc = 0x8000AF64u;
    // 8000AF64: stw     r11, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_8000AF68:
    ctx->pc = 0x8000AF68u;
    // 8000AF68: stw     r10, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_8000AF6C:
    ctx->pc = 0x8000AF6Cu;
    // 8000AF6C: stw     r9, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_8000AF70:
    ctx->pc = 0x8000AF70u;
    // 8000AF70: stw     r8, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8000AF74:
    ctx->pc = 0x8000AF74u;
    // 8000AF74: stw     r7, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8000AF78:
    ctx->pc = 0x8000AF78u;
    // 8000AF78: stw     r6, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8000AF7C:
    ctx->pc = 0x8000AF7Cu;
    // 8000AF7C: stw     r5, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8000AF80:
    ctx->pc = 0x8000AF80u;
    // 8000AF80: stw     r4, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000AF84:
    ctx->pc = 0x8000AF84u;
    // 8000AF84: stw     r3, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8000AF88:
    ctx->pc = 0x8000AF88u;
    // 8000AF88: stw     r0, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000AF8C:
    // 8000AF8C: bc    12, 2, 0x8000AFA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000AFA8;
        }
    }

label_8000AF90:
    ctx->downcount -= 6;
    // 8000AF90: lis     r3, 31903
    ctx->gpr[3] = ((u32)(s32)(31903) << 16);

label_8000AF94:
    // 8000AF94: lis     r0, -28541
    ctx->gpr[0] = ((u32)(s32)(-28541) << 16);

label_8000AF98:
    // 8000AF98: addi    r3, r3, -1370
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1370);

label_8000AF9C:
    ctx->pc = 0x8000AF9Cu;
    // 8000AF9C: stw     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000AFA0:
    ctx->pc = 0x8000AFA0u;
    // 8000AFA0: stw     r3, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8000AFA4:
    // 8000AFA4: b       0x8000AFBC
    {
            goto label_8000AFBC;
    }

label_8000AFA8:
    ctx->downcount -= 5;
    // 8000AFA8: lis     r3, 31903
    ctx->gpr[3] = ((u32)(s32)(31903) << 16);

label_8000AFAC:
    // 8000AFAC: lis     r4, -32637
    ctx->gpr[4] = ((u32)(s32)(-32637) << 16);

label_8000AFB0:
    // 8000AFB0: addi    r0, r3, -1114
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1114);

label_8000AFB4:
    ctx->pc = 0x8000AFB4u;
    // 8000AFB4: stw     r4, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000AFB8:
    ctx->pc = 0x8000AFB8u;
    // 8000AFB8: stw     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000AFBC:
    ctx->downcount -= 6;
    // 8000AFBC: lis     r4, 20096
    ctx->gpr[4] = ((u32)(s32)(20096) << 16);

label_8000AFC0:
    // 8000AFC0: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_8000AFC4:
    // 8000AFC4: addi    r0, r4, 32
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32);

label_8000AFC8:
    // 8000AFC8: li      r4, 40
    ctx->gpr[4] = (u32)(s32)(40);

label_8000AFCC:
    ctx->pc = 0x8000AFCCu;
    // 8000AFCC: stw     r0, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000AFD0:
    // 8000AFD0: bl      0x80009C74
    {
            ctx->lr = 0x8000AFD4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80009C74u;
                return;
            }
            goto label_80009C74;
    }

label_8000AFD4:
    ctx->downcount -= 7;
    // 8000AFD4: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000AFD8:
    // 8000AFD8: addi    r12, r1, 72
    ctx->gpr[12] = ctx->gpr[1] + (u32)(s32)(72);

label_8000AFDC:
    // 8000AFDC: addi    r4, r3, -19668
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-19668);

label_8000AFE0:
    // 8000AFE0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8000AFE4:
    ctx->pc = 0x8000AFE4u;
    // 8000AFE4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8000AFE8:
    ctx->pc = 0x8000AFE8u;
    // 8000AFE8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8000AFECu;
            ctx->pc = target;
            return;
        }
    }

label_8000AFEC:
    ctx->downcount -= 2;
    // 8000AFEC: cmpwi   r31, 0
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

label_8000AFF0:
    // 8000AFF0: bc    12, 2, 0x8000B010
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000B010;
        }
    }

label_8000AFF4:
    ctx->pc = 0x8000AFF4u;
    ctx->downcount -= 7;
    // 8000AFF4: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000AFF8:
    // 8000AFF8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8000AFFC:
    // 8000AFFC: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_8000B000:
    // 8000B000: and   r3, r3, r0
    {
        ctx->gpr[3] = ctx->gpr[3] & ctx->gpr[0];
    }

label_8000B004:
    // 8000B004: and   r0, r4, r4
    {
        ctx->gpr[0] = ctx->gpr[4] & ctx->gpr[4];
    }

label_8000B008:
    ctx->pc = 0x8000B008u;
    // 8000B008: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8000B00C:
    ctx->pc = 0x8000B00Cu;
    // 8000B00C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000B010:
    ctx->pc = 0x8000B010u;
    ctx->downcount -= 4;
    // 8000B010: lwz     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8000B014:
    // 8000B014: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8000B018:
    ctx->pc = 0x8000B018u;
    // 8000B018: lwz     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8000B01C:
    // 8000B01C: bl      0x80007B9C
    {
            ctx->lr = 0x8000B020u;
            ctx->pc = 0x80007B9Cu;
            return;
    }

label_8000B020:
    ctx->downcount -= 1;
    // 8000B020: b       0x8000B1FC
    {
            goto label_8000B1FC;
    }

label_8000B024:
    ctx->downcount -= 3;
    // 8000B024: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8000B028:
    // 8000B028: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_8000B02C:
    // 8000B02C: bl      0x80007950
    {
            ctx->lr = 0x8000B030u;
            ctx->pc = 0x80007950u;
            return;
    }

label_8000B030:
    ctx->downcount -= 25;
    // 8000B030: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8000B034:
    // 8000B034: cmplwi  r22, 0x0020
    {
        u32 val_a = (u32)(ctx->gpr[22]);
        u32 val_b = (u32)(0x0020u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000B038:
    // 8000B038: addi    r20, r3, 10416
    ctx->gpr[20] = ctx->gpr[3] + (u32)(s32)(10416);

label_8000B03C:
    // 8000B03C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000B040:
    ctx->pc = 0x8000B040u;
    // 8000B040: lwz     r12, 0(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(0);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8000B044:
    ctx->pc = 0x8000B044u;
    // 8000B044: lwz     r11, 4(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(4);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_8000B048:
    ctx->pc = 0x8000B048u;
    // 8000B048: lwz     r10, 8(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(8);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_8000B04C:
    ctx->pc = 0x8000B04Cu;
    // 8000B04C: lwz     r9, 12(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(12);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_8000B050:
    ctx->pc = 0x8000B050u;
    // 8000B050: lwz     r8, 16(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(16);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_8000B054:
    ctx->pc = 0x8000B054u;
    // 8000B054: lwz     r7, 20(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(20);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8000B058:
    ctx->pc = 0x8000B058u;
    // 8000B058: lwz     r6, 24(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(24);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8000B05C:
    ctx->pc = 0x8000B05Cu;
    // 8000B05C: lwz     r5, 28(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(28);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8000B060:
    ctx->pc = 0x8000B060u;
    // 8000B060: lwz     r4, 32(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000B064:
    ctx->pc = 0x8000B064u;
    // 8000B064: lwz     r0, 36(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000B068:
    ctx->pc = 0x8000B068u;
    // 8000B068: stw     r12, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_8000B06C:
    ctx->pc = 0x8000B06Cu;
    // 8000B06C: stw     r11, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_8000B070:
    ctx->pc = 0x8000B070u;
    // 8000B070: stw     r10, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_8000B074:
    ctx->pc = 0x8000B074u;
    // 8000B074: stw     r9, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_8000B078:
    ctx->pc = 0x8000B078u;
    // 8000B078: stw     r8, 128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8000B07C:
    ctx->pc = 0x8000B07Cu;
    // 8000B07C: stw     r7, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8000B080:
    ctx->pc = 0x8000B080u;
    // 8000B080: stw     r6, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8000B084:
    ctx->pc = 0x8000B084u;
    // 8000B084: stw     r5, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8000B088:
    ctx->pc = 0x8000B088u;
    // 8000B088: stw     r4, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000B08C:
    ctx->pc = 0x8000B08Cu;
    // 8000B08C: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000B090:
    // 8000B090: bc    4, 0, 0x8000B0E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000B0E0;
        }
    }

label_8000B094:
    ctx->downcount -= 3;
    // 8000B094: cmpwi   r31, 0
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

label_8000B098:
    // 8000B098: oris    r0, r26, 0xC803
    ctx->gpr[0] = ctx->gpr[26] | (0xC803u << 16);

label_8000B09C:
    // 8000B09C: bc    12, 2, 0x8000B0A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000B0A4;
        }
    }

label_8000B0A0:
    ctx->downcount -= 1;
    // 8000B0A0: oris    r0, r26, 0xD803
    ctx->gpr[0] = ctx->gpr[26] | (0xD803u << 16);

label_8000B0A4:
    ctx->downcount -= 7;
    // 8000B0A4: lis     r3, 20096
    ctx->gpr[3] = ((u32)(s32)(20096) << 16);

label_8000B0A8:
    ctx->pc = 0x8000B0A8u;
    // 8000B0A8: stw     r0, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000B0AC:
    // 8000B0AC: addi    r0, r3, 32
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32);

label_8000B0B0:
    // 8000B0B0: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_8000B0B4:
    ctx->pc = 0x8000B0B4u;
    // 8000B0B4: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000B0B8:
    // 8000B0B8: li      r4, 40
    ctx->gpr[4] = (u32)(s32)(40);

label_8000B0BC:
    // 8000B0BC: bl      0x80009C74
    {
            ctx->lr = 0x8000B0C0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80009C74u;
                return;
            }
            goto label_80009C74;
    }

label_8000B0C0:
    ctx->downcount -= 7;
    // 8000B0C0: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000B0C4:
    // 8000B0C4: addi    r12, r1, 112
    ctx->gpr[12] = ctx->gpr[1] + (u32)(s32)(112);

label_8000B0C8:
    // 8000B0C8: addi    r4, r3, -19668
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-19668);

label_8000B0CC:
    // 8000B0CC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8000B0D0:
    ctx->pc = 0x8000B0D0u;
    // 8000B0D0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8000B0D4:
    ctx->pc = 0x8000B0D4u;
    // 8000B0D4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8000B0D8u;
            ctx->pc = target;
            return;
        }
    }

label_8000B0D8:
    ctx->downcount -= 2;
    // 8000B0D8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000B0DC:
    // 8000B0DC: b       0x8000B1FC
    {
            goto label_8000B1FC;
    }

label_8000B0E0:
    ctx->downcount -= 1;
    // 8000B0E0: bc    4, 2, 0x8000B104
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000B104;
        }
    }

label_8000B0E4:
    ctx->pc = 0x8000B0E4u;
    ctx->downcount -= 8;
    // 8000B0E4: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000B0E8:
    // 8000B0E8: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_8000B0EC:
    ctx->pc = 0x8000B0ECu;
    // 8000B0EC: lwz     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8000B0F0:
    // 8000B0F0: and   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[3];
    }

label_8000B0F4:
    // 8000B0F4: and   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] & ctx->gpr[4];
    }

label_8000B0F8:
    ctx->pc = 0x8000B0F8u;
    // 8000B0F8: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000B0FC:
    ctx->pc = 0x8000B0FCu;
    // 8000B0FC: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000B100:
    // 8000B100: b       0x8000B1FC
    {
            goto label_8000B1FC;
    }

label_8000B104:
    ctx->downcount -= 2;
    // 8000B104: cmplwi  r22, 0x0021
    {
        u32 val_a = (u32)(ctx->gpr[22]);
        u32 val_b = (u32)(0x0021u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000B108:
    // 8000B108: bc    4, 2, 0x8000B1FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000B1FC;
        }
    }

label_8000B10C:
    ctx->downcount -= 2;
    // 8000B10C: cmpwi   r31, 0
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

label_8000B110:
    // 8000B110: bc    4, 2, 0x8000B11C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000B11C;
        }
    }

label_8000B114:
    ctx->pc = 0x8000B114u;
    ctx->downcount -= 2;
    // 8000B114: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000B118:
    ctx->pc = 0x8000B118u;
    // 8000B118: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000B11C:
    ctx->downcount -= 24;
    // 8000B11C: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8000B120:
    // 8000B120: cmpwi   r31, 0
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

label_8000B124:
    // 8000B124: addi    r12, r3, 10336
    ctx->gpr[12] = ctx->gpr[3] + (u32)(s32)(10336);

label_8000B128:
    ctx->pc = 0x8000B128u;
    // 8000B128: lwz     r11, 0(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_8000B12C:
    ctx->pc = 0x8000B12Cu;
    // 8000B12C: lwz     r10, 4(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(4);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_8000B130:
    ctx->pc = 0x8000B130u;
    // 8000B130: lwz     r9, 8(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(8);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_8000B134:
    ctx->pc = 0x8000B134u;
    // 8000B134: lwz     r8, 12(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(12);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_8000B138:
    ctx->pc = 0x8000B138u;
    // 8000B138: lwz     r7, 16(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(16);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8000B13C:
    ctx->pc = 0x8000B13Cu;
    // 8000B13C: lwz     r6, 20(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(20);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8000B140:
    ctx->pc = 0x8000B140u;
    // 8000B140: lwz     r5, 24(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8000B144:
    ctx->pc = 0x8000B144u;
    // 8000B144: lwz     r4, 28(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000B148:
    ctx->pc = 0x8000B148u;
    // 8000B148: lwz     r3, 32(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000B14C:
    ctx->pc = 0x8000B14Cu;
    // 8000B14C: lwz     r0, 36(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000B150:
    ctx->pc = 0x8000B150u;
    // 8000B150: stw     r11, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_8000B154:
    ctx->pc = 0x8000B154u;
    // 8000B154: stw     r10, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_8000B158:
    ctx->pc = 0x8000B158u;
    // 8000B158: stw     r9, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_8000B15C:
    ctx->pc = 0x8000B15Cu;
    // 8000B15C: stw     r8, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8000B160:
    ctx->pc = 0x8000B160u;
    // 8000B160: stw     r7, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8000B164:
    ctx->pc = 0x8000B164u;
    // 8000B164: stw     r6, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8000B168:
    ctx->pc = 0x8000B168u;
    // 8000B168: stw     r5, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8000B16C:
    ctx->pc = 0x8000B16Cu;
    // 8000B16C: stw     r4, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000B170:
    ctx->pc = 0x8000B170u;
    // 8000B170: stw     r3, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8000B174:
    ctx->pc = 0x8000B174u;
    // 8000B174: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000B178:
    // 8000B178: bc    12, 2, 0x8000B194
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000B194;
        }
    }

label_8000B17C:
    ctx->downcount -= 6;
    // 8000B17C: lis     r3, 31903
    ctx->gpr[3] = ((u32)(s32)(31903) << 16);

label_8000B180:
    // 8000B180: lis     r0, -28541
    ctx->gpr[0] = ((u32)(s32)(-28541) << 16);

label_8000B184:
    // 8000B184: addi    r3, r3, -1370
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1370);

label_8000B188:
    ctx->pc = 0x8000B188u;
    // 8000B188: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000B18C:
    ctx->pc = 0x8000B18Cu;
    // 8000B18C: stw     r3, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8000B190:
    // 8000B190: b       0x8000B1A8
    {
            goto label_8000B1A8;
    }

label_8000B194:
    ctx->downcount -= 5;
    // 8000B194: lis     r3, 31903
    ctx->gpr[3] = ((u32)(s32)(31903) << 16);

label_8000B198:
    // 8000B198: lis     r4, -32637
    ctx->gpr[4] = ((u32)(s32)(-32637) << 16);

label_8000B19C:
    // 8000B19C: addi    r0, r3, -1114
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1114);

label_8000B1A0:
    ctx->pc = 0x8000B1A0u;
    // 8000B1A0: stw     r4, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000B1A4:
    ctx->pc = 0x8000B1A4u;
    // 8000B1A4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000B1A8:
    ctx->downcount -= 6;
    // 8000B1A8: lis     r4, 20096
    ctx->gpr[4] = ((u32)(s32)(20096) << 16);

label_8000B1AC:
    // 8000B1AC: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_8000B1B0:
    // 8000B1B0: addi    r0, r4, 32
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32);

label_8000B1B4:
    // 8000B1B4: li      r4, 40
    ctx->gpr[4] = (u32)(s32)(40);

label_8000B1B8:
    ctx->pc = 0x8000B1B8u;
    // 8000B1B8: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000B1BC:
    // 8000B1BC: bl      0x80009C74
    {
            ctx->lr = 0x8000B1C0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80009C74u;
                return;
            }
            goto label_80009C74;
    }

label_8000B1C0:
    ctx->downcount -= 7;
    // 8000B1C0: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000B1C4:
    // 8000B1C4: addi    r12, r1, 32
    ctx->gpr[12] = ctx->gpr[1] + (u32)(s32)(32);

label_8000B1C8:
    // 8000B1C8: addi    r4, r3, -19668
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-19668);

label_8000B1CC:
    // 8000B1CC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8000B1D0:
    ctx->pc = 0x8000B1D0u;
    // 8000B1D0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8000B1D4:
    ctx->pc = 0x8000B1D4u;
    // 8000B1D4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8000B1D8u;
            ctx->pc = target;
            return;
        }
    }

label_8000B1D8:
    ctx->downcount -= 3;
    // 8000B1D8: cmpwi   r31, 0
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

label_8000B1DC:
    // 8000B1DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000B1E0:
    // 8000B1E0: bc    12, 2, 0x8000B1FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000B1FC;
        }
    }

label_8000B1E4:
    ctx->pc = 0x8000B1E4u;
    ctx->downcount -= 6;
    // 8000B1E4: lwz     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8000B1E8:
    // 8000B1E8: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_8000B1EC:
    // 8000B1EC: and   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[3];
    }

label_8000B1F0:
    // 8000B1F0: and   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] & ctx->gpr[4];
    }

label_8000B1F4:
    ctx->pc = 0x8000B1F4u;
    // 8000B1F4: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000B1F8:
    ctx->pc = 0x8000B1F8u;
    // 8000B1F8: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000B1FC:
    ctx->pc = 0x8000B1FCu;
    ctx->downcount -= 5;
    // 8000B1FC: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000B200:
    // 8000B200: addis   r26, r26, 32
    ctx->gpr[26] = ctx->gpr[26] + ((u32)(s32)(32) << 16);

label_8000B204:
    // 8000B204: addi    r22, r22, 1
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(1);

label_8000B208:
    // 8000B208: addi    r0, r4, 8
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(8);

label_8000B20C:
    ctx->pc = 0x8000B20Cu;
    // 8000B20C: stw     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000B210:
    ctx->downcount -= 2;
    // 8000B210: cmplw   r22, r28
    {
        u32 val_a = (u32)(ctx->gpr[22]);
        u32 val_b = (u32)(ctx->gpr[28]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000B214:
    // 8000B214: bc    12, 1, 0x8000B220
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000B220;
        }
    }

label_8000B218:
    ctx->downcount -= 2;
    // 8000B218: cmpwi   r3, 0
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

label_8000B21C:
    // 8000B21C: bc    12, 2, 0x8000AE40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000AE40u;
                return;
            }
            goto label_8000AE40;
        }
    }

label_8000B220:
    ctx->pc = 0x8000B220u;
    ctx->downcount -= 3;
    // 8000B220: lbz     r0, 13(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(13);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8000B224:
    ctx->pc = 0x8000B224u;
    // 8000B224: cmplwi  r0, 0x0000
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

label_8000B228:
    ctx->pc = 0x8000B228u;
    // 8000B228: bc    12, 2, 0x8000B238
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000B238;
        }
    }

label_8000B22C:
    ctx->pc = 0x8000B22Cu;
    ctx->downcount -= 3;
    // 8000B22C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8000B230:
    ctx->pc = 0x8000B230u;
    // 8000B230: li      r3, 1794
    ctx->gpr[3] = (u32)(s32)(1794);

label_8000B234:
    ctx->pc = 0x8000B234u;
    // 8000B234: stw     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000B238:
    ctx->pc = 0x8000B238u;
    ctx->downcount -= 10;
    // 8000B238: lis     r4, -32738
    ctx->gpr[4] = ((u32)(s32)(-32738) << 16);

label_8000B23C:
    ctx->pc = 0x8000B23Cu;
    // 8000B23C: lwz     r6, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8000B240:
    ctx->pc = 0x8000B240u;
    // 8000B240: addi    r7, r4, -5900
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(-5900);

label_8000B244:
    ctx->pc = 0x8000B244u;
    // 8000B244: lwz     r5, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8000B248:
    ctx->pc = 0x8000B248u;
    // 8000B248: lwz     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000B24C:
    ctx->pc = 0x8000B24Cu;
    // 8000B24C: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000B250:
    ctx->pc = 0x8000B250u;
    // 8000B250: stw     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8000B254:
    ctx->pc = 0x8000B254u;
    // 8000B254: stw     r5, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8000B258:
    ctx->pc = 0x8000B258u;
    // 8000B258: stw     r4, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000B25C:
    ctx->pc = 0x8000B25Cu;
    // 8000B25C: stw     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000B260:
    ctx->pc = 0x8000B260u;
    ctx->downcount -= 16;
    // 8000B260: lmw     r20, 192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        for (u32 r = 20; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8000B264:
    ctx->pc = 0x8000B264u;
    // 8000B264: lwz     r0, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000B268:
    ctx->pc = 0x8000B268u;
    // 8000B268: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000B26C:
    ctx->pc = 0x8000B26Cu;
    // 8000B26C: addi    r1, r1, 240
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(240);

label_8000B270:
    ctx->pc = 0x8000B270u;
    // 8000B270: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000B274:
    ctx->pc = 0x8000B274u;
    ctx->downcount -= 8;
    // 8000B274: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000B278:
    ctx->pc = 0x8000B278u;
    // 8000B278: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000B27C:
    ctx->pc = 0x8000B27Cu;
    // 8000B27C: cmplwi  r4, 0x0024
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x0024u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000B280:
    ctx->pc = 0x8000B280u;
    // 8000B280: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000B284:
    ctx->pc = 0x8000B284u;
    // 8000B284: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8000B288:
    ctx->pc = 0x8000B288u;
    // 8000B288: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_8000B28C:
    ctx->pc = 0x8000B28Cu;
    // 8000B28C: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8000B290:
    ctx->pc = 0x8000B290u;
    // 8000B290: bc    4, 1, 0x8000B29C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000B29C;
        }
    }

label_8000B294:
    ctx->pc = 0x8000B294u;
    ctx->downcount -= 2;
    // 8000B294: li      r3, 1793
    ctx->gpr[3] = (u32)(s32)(1793);

label_8000B298:
    ctx->pc = 0x8000B298u;
    // 8000B298: b       0x8000B350
    {
            goto label_8000B350;
    }

label_8000B29C:
    ctx->pc = 0x8000B29Cu;
    ctx->downcount -= 22;
    // 8000B29C: lis     r6, -32738
    ctx->gpr[6] = ((u32)(s32)(-32738) << 16);

label_8000B2A0:
    ctx->pc = 0x8000B2A0u;
    // 8000B2A0: subf   r4, r3, r4
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8000B2A4:
    ctx->pc = 0x8000B2A4u;
    // 8000B2A4: addi    r30, r6, -5900
    ctx->gpr[30] = ctx->gpr[6] + (u32)(s32)(-5900);

label_8000B2A8:
    ctx->pc = 0x8000B2A8u;
    // 8000B2A8: lis     r6, -32737
    ctx->gpr[6] = ((u32)(s32)(-32737) << 16);

label_8000B2AC:
    ctx->pc = 0x8000B2ACu;
    // 8000B2AC: lwz     r9, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_8000B2B0:
    ctx->pc = 0x8000B2B0u;
    // 8000B2B0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8000B2B4:
    ctx->pc = 0x8000B2B4u;
    // 8000B2B4: addi    r12, r4, 1
    ctx->gpr[12] = ctx->gpr[4] + (u32)(s32)(1);

label_8000B2B8:
    ctx->pc = 0x8000B2B8u;
    // 8000B2B8: lwz     r11, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_8000B2BC:
    ctx->pc = 0x8000B2BCu;
    // 8000B2BC: lwz     r10, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_8000B2C0:
    ctx->pc = 0x8000B2C0u;
    // 8000B2C0: cmpwi   r7, 0
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

label_8000B2C4:
    ctx->pc = 0x8000B2C4u;
    // 8000B2C4: lwz     r7, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8000B2C8:
    ctx->pc = 0x8000B2C8u;
    // 8000B2C8: rlwinm r0, r12, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[12], 2u) & 0xFFFFFFFCu;
    }

label_8000B2CC:
    ctx->pc = 0x8000B2CCu;
    // 8000B2CC: stb     r8, 13(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_8000B2D0:
    ctx->pc = 0x8000B2D0u;
    // 8000B2D0: rlwinm r4, r3, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_8000B2D4:
    ctx->pc = 0x8000B2D4u;
    // 8000B2D4: addi    r3, r6, -20888
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(-20888);

label_8000B2D8:
    ctx->pc = 0x8000B2D8u;
    // 8000B2D8: stw     r11, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_8000B2DC:
    ctx->pc = 0x8000B2DCu;
    // 8000B2DC: add   r4, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8000B2E0:
    ctx->pc = 0x8000B2E0u;
    // 8000B2E0: stw     r10, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_8000B2E4:
    ctx->pc = 0x8000B2E4u;
    // 8000B2E4: stw     r7, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8000B2E8:
    ctx->pc = 0x8000B2E8u;
    // 8000B2E8: stw     r9, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_8000B2EC:
    ctx->pc = 0x8000B2ECu;
    // 8000B2EC: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000B2F0:
    ctx->pc = 0x8000B2F0u;
    // 8000B2F0: bc    12, 2, 0x8000B304
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000B304;
        }
    }

label_8000B2F4:
    ctx->pc = 0x8000B2F4u;
    ctx->downcount -= 3;
    // 8000B2F4: or   r3, r5, r5
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8000B2F8:
    ctx->pc = 0x8000B2F8u;
    // 8000B2F8: or   r5, r12, r12
    {
        ctx->gpr[5] = ctx->gpr[12] | ctx->gpr[12];
    }

label_8000B2FC:
    ctx->pc = 0x8000B2FCu;
    // 8000B2FC: bl      0x80007A38
    {
            ctx->lr = 0x8000B300u;
            ctx->pc = 0x80007A38u;
            return;
    }

label_8000B300:
    ctx->pc = 0x8000B300u;
    ctx->downcount -= 1;
    // 8000B300: b       0x8000B310
    {
            goto label_8000B310;
    }

label_8000B304:
    ctx->pc = 0x8000B304u;
    ctx->downcount -= 3;
    // 8000B304: or   r3, r5, r5
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8000B308:
    ctx->pc = 0x8000B308u;
    // 8000B308: or   r5, r12, r12
    {
        ctx->gpr[5] = ctx->gpr[12] | ctx->gpr[12];
    }

label_8000B30C:
    ctx->pc = 0x8000B30Cu;
    // 8000B30C: bl      0x800077C8
    {
            ctx->lr = 0x8000B310u;
            ctx->pc = 0x800077C8u;
            return;
    }

label_8000B310:
    ctx->pc = 0x8000B310u;
    ctx->downcount -= 3;
    // 8000B310: lbz     r0, 13(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(13);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8000B314:
    ctx->pc = 0x8000B314u;
    // 8000B314: cmplwi  r0, 0x0000
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

label_8000B318:
    ctx->pc = 0x8000B318u;
    // 8000B318: bc    12, 2, 0x8000B328
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000B328;
        }
    }

label_8000B31C:
    ctx->pc = 0x8000B31Cu;
    ctx->downcount -= 3;
    // 8000B31C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8000B320:
    ctx->pc = 0x8000B320u;
    // 8000B320: li      r3, 1794
    ctx->gpr[3] = (u32)(s32)(1794);

label_8000B324:
    ctx->pc = 0x8000B324u;
    // 8000B324: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000B328:
    ctx->pc = 0x8000B328u;
    ctx->downcount -= 10;
    // 8000B328: lis     r4, -32738
    ctx->gpr[4] = ((u32)(s32)(-32738) << 16);

label_8000B32C:
    ctx->pc = 0x8000B32Cu;
    // 8000B32C: lwz     r6, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8000B330:
    ctx->pc = 0x8000B330u;
    // 8000B330: addi    r7, r4, -5900
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(-5900);

label_8000B334:
    ctx->pc = 0x8000B334u;
    // 8000B334: lwz     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8000B338:
    ctx->pc = 0x8000B338u;
    // 8000B338: lwz     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000B33C:
    ctx->pc = 0x8000B33Cu;
    // 8000B33C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000B340:
    ctx->pc = 0x8000B340u;
    // 8000B340: stw     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8000B344:
    ctx->pc = 0x8000B344u;
    // 8000B344: stw     r5, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8000B348:
    ctx->pc = 0x8000B348u;
    // 8000B348: stw     r4, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000B34C:
    ctx->pc = 0x8000B34Cu;
    // 8000B34C: stw     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000B350:
    ctx->pc = 0x8000B350u;
    ctx->downcount -= 7;
    // 8000B350: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000B354:
    ctx->pc = 0x8000B354u;
    // 8000B354: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8000B358:
    ctx->pc = 0x8000B358u;
    // 8000B358: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8000B35C:
    ctx->pc = 0x8000B35Cu;
    // 8000B35C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000B360:
    ctx->pc = 0x8000B360u;
    // 8000B360: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8000B364:
    ctx->pc = 0x8000B364u;
    // 8000B364: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000B368:
    ctx->pc = 0x8000B368u;
    ctx->downcount -= 9;
    // 8000B368: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000B36C:
    ctx->pc = 0x8000B36Cu;
    // 8000B36C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000B370:
    ctx->pc = 0x8000B370u;
    // 8000B370: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8000B374:
    ctx->pc = 0x8000B374u;
    // 8000B374: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_8000B378:
    ctx->pc = 0x8000B378u;
    // 8000B378: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000B37C:
    ctx->pc = 0x8000B37Cu;
    // 8000B37C: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_8000B380:
    ctx->pc = 0x8000B380u;
    // 8000B380: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_8000B384:
    ctx->pc = 0x8000B384u;
    // 8000B384: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000B388:
    ctx->pc = 0x8000B388u;
    // 8000B388: bl      0x8000B3B4
    {
            ctx->lr = 0x8000B38Cu;
            goto label_8000B3B4;
    }

label_8000B38C:
    ctx->pc = 0x8000B38Cu;
    ctx->downcount -= 2;
    // 8000B38C: cmpwi   r3, 0
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

label_8000B390:
    ctx->pc = 0x8000B390u;
    // 8000B390: bc    4, 2, 0x8000B3A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000B3A4;
        }
    }

label_8000B394:
    ctx->pc = 0x8000B394u;
    ctx->downcount -= 3;
    // 8000B394: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000B398:
    ctx->pc = 0x8000B398u;
    // 8000B398: cmplwi  r0, 0x0004
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

label_8000B39C:
    ctx->pc = 0x8000B39Cu;
    // 8000B39C: bc    12, 2, 0x8000B3A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000B3A4;
        }
    }

label_8000B3A0:
    ctx->pc = 0x8000B3A0u;
    ctx->downcount -= 1;
    // 8000B3A0: li      r3, 1792
    ctx->gpr[3] = (u32)(s32)(1792);

label_8000B3A4:
    ctx->pc = 0x8000B3A4u;
    ctx->downcount -= 5;
    // 8000B3A4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000B3A8:
    ctx->pc = 0x8000B3A8u;
    // 8000B3A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000B3AC:
    ctx->pc = 0x8000B3ACu;
    // 8000B3AC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000B3B0:
    ctx->pc = 0x8000B3B0u;
    // 8000B3B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000B3B4:
    ctx->pc = 0x8000B3B4u;
    ctx->downcount -= 32;
    // 8000B3B4: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000B3B8:
    ctx->pc = 0x8000B3B8u;
    // 8000B3B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000B3BC:
    ctx->pc = 0x8000B3BCu;
    // 8000B3BC: lis     r6, -32738
    ctx->gpr[6] = ((u32)(s32)(-32738) << 16);

label_8000B3C0:
    ctx->pc = 0x8000B3C0u;
    // 8000B3C0: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000B3C4:
    ctx->pc = 0x8000B3C4u;
    // 8000B3C4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8000B3C8:
    ctx->pc = 0x8000B3C8u;
    // 8000B3C8: stmw     r25, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8000B3CC:
    ctx->pc = 0x8000B3CCu;
    // 8000B3CC: addi    r31, r6, -5900
    ctx->gpr[31] = ctx->gpr[6] + (u32)(s32)(-5900);

label_8000B3D0:
    ctx->pc = 0x8000B3D0u;
    // 8000B3D0: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8000B3D4:
    ctx->pc = 0x8000B3D4u;
    // 8000B3D4: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8000B3D8:
    ctx->pc = 0x8000B3D8u;
    // 8000B3D8: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000B3DC:
    ctx->pc = 0x8000B3DCu;
    // 8000B3DC: or   r29, r7, r7
    {
        ctx->gpr[29] = ctx->gpr[7] | ctx->gpr[7];
    }

label_8000B3E0:
    ctx->pc = 0x8000B3E0u;
    // 8000B3E0: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8000B3E4:
    ctx->pc = 0x8000B3E4u;
    // 8000B3E4: lwz     r4, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000B3E8:
    ctx->pc = 0x8000B3E8u;
    // 8000B3E8: lwz     r8, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_8000B3EC:
    ctx->pc = 0x8000B3ECu;
    // 8000B3EC: lwz     r6, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8000B3F0:
    ctx->pc = 0x8000B3F0u;
    // 8000B3F0: lwz     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8000B3F4:
    ctx->pc = 0x8000B3F4u;
    // 8000B3F4: stw     r8, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8000B3F8:
    ctx->pc = 0x8000B3F8u;
    // 8000B3F8: stw     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8000B3FC:
    ctx->pc = 0x8000B3FCu;
    // 8000B3FC: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8000B400:
    ctx->pc = 0x8000B400u;
    // 8000B400: stw     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000B404:
    ctx->pc = 0x8000B404u;
    // 8000B404: stb     r0, 13(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8000B408:
    ctx->pc = 0x8000B408u;
    // 8000B408: bl      0x8000BDE4
    {
            ctx->lr = 0x8000B40Cu;
            goto label_8000BDE4;
    }

label_8000B40C:
    ctx->pc = 0x8000B40Cu;
    ctx->downcount -= 5;
    // 8000B40C: cntlzw r0, r29
    {
        u32 v = ctx->gpr[29];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_8000B410:
    ctx->pc = 0x8000B410u;
    // 8000B410: lwz     r4, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000B414:
    ctx->pc = 0x8000B414u;
    // 8000B414: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000B418:
    ctx->pc = 0x8000B418u;
    // 8000B418: rlwinm r5, r0, 27, 5, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_8000B41C:
    ctx->pc = 0x8000B41Cu;
    // 8000B41C: bl      0x8000B500
    {
            ctx->lr = 0x8000B420u;
            goto label_8000B500;
    }

label_8000B420:
    ctx->pc = 0x8000B420u;
    ctx->downcount -= 2;
    // 8000B420: or.   r30, r3, r3
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

label_8000B424:
    ctx->pc = 0x8000B424u;
    // 8000B424: bc    12, 2, 0x8000B434
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000B434;
        }
    }

label_8000B428:
    ctx->pc = 0x8000B428u;
    ctx->downcount -= 3;
    // 8000B428: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8000B42C:
    ctx->pc = 0x8000B42Cu;
    // 8000B42C: stw     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000B430:
    ctx->pc = 0x8000B430u;
    // 8000B430: b       0x8000B4A8
    {
            goto label_8000B4A8;
    }

label_8000B434:
    ctx->pc = 0x8000B434u;
    ctx->downcount -= 1;
    // 8000B434: bl      0x80009D64
    {
            ctx->lr = 0x8000B438u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80009D64u;
                return;
            }
            goto label_80009D64;
    }

label_8000B438:
    ctx->pc = 0x8000B438u;
    ctx->downcount -= 8;
    // 8000B438: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_8000B43C:
    ctx->pc = 0x8000B43Cu;
    // 8000B43C: cmpwi   r29, 0
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

label_8000B440:
    ctx->pc = 0x8000B440u;
    // 8000B440: addi    r4, r4, -20888
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-20888);

label_8000B444:
    ctx->pc = 0x8000B444u;
    // 8000B444: or   r8, r3, r3
    {
        ctx->gpr[8] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000B448:
    ctx->pc = 0x8000B448u;
    // 8000B448: lwz     r0, 504(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(504);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000B44C:
    ctx->pc = 0x8000B44Cu;
    // 8000B44C: rlwinm r0, r0, 0, 27, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000010u;
    }

label_8000B450:
    ctx->pc = 0x8000B450u;
    // 8000B450: or   r7, r8, r0
    {
        ctx->gpr[7] = ctx->gpr[8] | ctx->gpr[0];
    }

label_8000B454:
    ctx->pc = 0x8000B454u;
    // 8000B454: bc    12, 2, 0x8000B470
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000B470;
        }
    }

label_8000B458:
    ctx->pc = 0x8000B458u;
    ctx->downcount -= 5;
    // 8000B458: lwz     r5, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8000B45C:
    ctx->pc = 0x8000B45Cu;
    // 8000B45C: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_8000B460:
    ctx->pc = 0x8000B460u;
    // 8000B460: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_8000B464:
    ctx->pc = 0x8000B464u;
    // 8000B464: or   r6, r8, r8
    {
        ctx->gpr[6] = ctx->gpr[8] | ctx->gpr[8];
    }

label_8000B468:
    ctx->pc = 0x8000B468u;
    // 8000B468: bl      0x80009D74
    {
            ctx->lr = 0x8000B46Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80009D74u;
                return;
            }
            goto label_80009D74;
    }

label_8000B46C:
    ctx->pc = 0x8000B46Cu;
    ctx->downcount -= 1;
    // 8000B46C: b       0x8000B4A8
    {
            goto label_8000B4A8;
    }

label_8000B470:
    ctx->pc = 0x8000B470u;
    ctx->downcount -= 6;
    // 8000B470: lwz     r5, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8000B474:
    ctx->pc = 0x8000B474u;
    // 8000B474: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_8000B478:
    ctx->pc = 0x8000B478u;
    // 8000B478: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_8000B47C:
    ctx->pc = 0x8000B47Cu;
    // 8000B47C: or   r6, r7, r7
    {
        ctx->gpr[6] = ctx->gpr[7] | ctx->gpr[7];
    }

label_8000B480:
    ctx->pc = 0x8000B480u;
    // 8000B480: or   r7, r8, r8
    {
        ctx->gpr[7] = ctx->gpr[8] | ctx->gpr[8];
    }

label_8000B484:
    ctx->pc = 0x8000B484u;
    // 8000B484: bl      0x80009D74
    {
            ctx->lr = 0x8000B488u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80009D74u;
                return;
            }
            goto label_80009D74;
    }

label_8000B488:
    ctx->pc = 0x8000B488u;
    ctx->downcount -= 3;
    // 8000B488: lwz     r4, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000B48C:
    ctx->pc = 0x8000B48Cu;
    // 8000B48C: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_8000B490:
    ctx->pc = 0x8000B490u;
    // 8000B490: bl      0x80009C74
    {
            ctx->lr = 0x8000B494u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80009C74u;
                return;
            }
            goto label_80009C74;
    }

label_8000B494:
    ctx->pc = 0x8000B494u;
    ctx->downcount -= 2;
    // 8000B494: cmplw   r27, r25
    {
        u32 val_a = (u32)(ctx->gpr[27]);
        u32 val_b = (u32)(ctx->gpr[25]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000B498:
    ctx->pc = 0x8000B498u;
    // 8000B498: bc    12, 2, 0x8000B4A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000B4A8;
        }
    }

label_8000B49C:
    ctx->pc = 0x8000B49Cu;
    ctx->downcount -= 3;
    // 8000B49C: lwz     r4, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000B4A0:
    ctx->pc = 0x8000B4A0u;
    // 8000B4A0: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8000B4A4:
    ctx->pc = 0x8000B4A4u;
    // 8000B4A4: bl      0x80009C74
    {
            ctx->lr = 0x8000B4A8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80009C74u;
                return;
            }
            goto label_80009C74;
    }

label_8000B4A8:
    ctx->pc = 0x8000B4A8u;
    ctx->downcount -= 3;
    // 8000B4A8: lbz     r0, 13(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(13);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8000B4AC:
    ctx->pc = 0x8000B4ACu;
    // 8000B4AC: cmplwi  r0, 0x0000
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

label_8000B4B0:
    ctx->pc = 0x8000B4B0u;
    // 8000B4B0: bc    12, 2, 0x8000B4C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000B4C0;
        }
    }

label_8000B4B4:
    ctx->pc = 0x8000B4B4u;
    ctx->downcount -= 3;
    // 8000B4B4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8000B4B8:
    ctx->pc = 0x8000B4B8u;
    // 8000B4B8: li      r30, 1794
    ctx->gpr[30] = (u32)(s32)(1794);

label_8000B4BC:
    ctx->pc = 0x8000B4BCu;
    // 8000B4BC: stw     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000B4C0:
    ctx->pc = 0x8000B4C0u;
    ctx->downcount -= 27;
    // 8000B4C0: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8000B4C4:
    ctx->pc = 0x8000B4C4u;
    // 8000B4C4: lwz     r6, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8000B4C8:
    ctx->pc = 0x8000B4C8u;
    // 8000B4C8: addi    r7, r3, -5900
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(-5900);

label_8000B4CC:
    ctx->pc = 0x8000B4CCu;
    // 8000B4CC: lwz     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8000B4D0:
    ctx->pc = 0x8000B4D0u;
    // 8000B4D0: lwz     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000B4D4:
    ctx->pc = 0x8000B4D4u;
    // 8000B4D4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8000B4D8:
    ctx->pc = 0x8000B4D8u;
    // 8000B4D8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000B4DC:
    ctx->pc = 0x8000B4DCu;
    // 8000B4DC: stw     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8000B4E0:
    ctx->pc = 0x8000B4E0u;
    // 8000B4E0: stw     r5, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8000B4E4:
    ctx->pc = 0x8000B4E4u;
    // 8000B4E4: stw     r4, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000B4E8:
    ctx->pc = 0x8000B4E8u;
    // 8000B4E8: stw     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000B4EC:
    ctx->pc = 0x8000B4ECu;
    // 8000B4EC: lmw     r25, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8000B4F0:
    ctx->pc = 0x8000B4F0u;
    // 8000B4F0: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000B4F4:
    ctx->pc = 0x8000B4F4u;
    // 8000B4F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000B4F8:
    ctx->pc = 0x8000B4F8u;
    // 8000B4F8: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_8000B4FC:
    ctx->pc = 0x8000B4FCu;
    // 8000B4FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000B500:
    ctx->pc = 0x8000B500u;
    ctx->downcount -= 20;
    // 8000B500: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000B504:
    ctx->pc = 0x8000B504u;
    // 8000B504: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000B508:
    ctx->pc = 0x8000B508u;
    // 8000B508: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000B50C:
    ctx->pc = 0x8000B50Cu;
    // 8000B50C: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8000B510:
    ctx->pc = 0x8000B510u;
    // 8000B510: add   r27, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_8000B514:
    ctx->pc = 0x8000B514u;
    // 8000B514: addi    r27, r27, -1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(-1);

label_8000B518:
    ctx->pc = 0x8000B518u;
    // 8000B518: or   r26, r5, r5
    {
        ctx->gpr[26] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8000B51C:
    ctx->pc = 0x8000B51Cu;
    // 8000B51C: cmplw   r27, r3
    {
        u32 val_a = (u32)(ctx->gpr[27]);
        u32 val_b = (u32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000B520:
    ctx->pc = 0x8000B520u;
    // 8000B520: li      r5, 1792
    ctx->gpr[5] = (u32)(s32)(1792);

label_8000B524:
    ctx->pc = 0x8000B524u;
    // 8000B524: bc    4, 0, 0x8000B530
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000B530;
        }
    }

label_8000B528:
    ctx->pc = 0x8000B528u;
    ctx->downcount -= 2;
    // 8000B528: li      r3, 1792
    ctx->gpr[3] = (u32)(s32)(1792);

label_8000B52C:
    ctx->pc = 0x8000B52Cu;
    // 8000B52C: b       0x8000B790
    {
            goto label_8000B790;
    }

label_8000B530:
    ctx->pc = 0x8000B530u;
    ctx->downcount -= 6;
    // 8000B530: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8000B534:
    ctx->pc = 0x8000B534u;
    // 8000B534: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8000B538:
    ctx->pc = 0x8000B538u;
    // 8000B538: addi    r31, r4, 10320
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(10320);

label_8000B53C:
    ctx->pc = 0x8000B53Cu;
    // 8000B53C: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000B540:
    ctx->pc = 0x8000B540u;
    // 8000B540: cmplw   r3, r0
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

label_8000B544:
    ctx->pc = 0x8000B544u;
    // 8000B544: bc    12, 1, 0x8000B78C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000B78C;
        }
    }

label_8000B548:
    ctx->pc = 0x8000B548u;
    ctx->downcount -= 3;
    // 8000B548: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000B54C:
    ctx->pc = 0x8000B54Cu;
    // 8000B54C: cmplw   r27, r0
    {
        u32 val_a = (u32)(ctx->gpr[27]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000B550:
    ctx->pc = 0x8000B550u;
    // 8000B550: bc    12, 0, 0x8000B78C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000B78C;
        }
    }

label_8000B554:
    ctx->pc = 0x8000B554u;
    ctx->downcount -= 2;
    // 8000B554: cmpwi   r26, 0
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

label_8000B558:
    ctx->pc = 0x8000B558u;
    // 8000B558: bc    4, 2, 0x8000B570
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000B570;
        }
    }

label_8000B55C:
    ctx->pc = 0x8000B55Cu;
    ctx->downcount -= 5;
    // 8000B55C: rlwinm r0, r6, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 4u) & 0xFFFFFFF0u;
    }

label_8000B560:
    ctx->pc = 0x8000B560u;
    // 8000B560: add   r4, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8000B564:
    ctx->pc = 0x8000B564u;
    // 8000B564: lwz     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000B568:
    ctx->pc = 0x8000B568u;
    // 8000B568: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000B56C:
    ctx->pc = 0x8000B56Cu;
    // 8000B56C: bc    12, 2, 0x8000B594
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000B594;
        }
    }

label_8000B570:
    ctx->pc = 0x8000B570u;
    ctx->downcount -= 2;
    // 8000B570: cmpwi   r26, 1
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000B574:
    ctx->pc = 0x8000B574u;
    // 8000B574: bc    4, 2, 0x8000B59C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000B59C;
        }
    }

label_8000B578:
    ctx->pc = 0x8000B578u;
    ctx->downcount -= 7;
    // 8000B578: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8000B57C:
    ctx->pc = 0x8000B57Cu;
    // 8000B57C: rlwinm r0, r6, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 4u) & 0xFFFFFFF0u;
    }

label_8000B580:
    ctx->pc = 0x8000B580u;
    // 8000B580: addi    r4, r4, 10320
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10320);

label_8000B584:
    ctx->pc = 0x8000B584u;
    // 8000B584: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8000B588:
    ctx->pc = 0x8000B588u;
    // 8000B588: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000B58C:
    ctx->pc = 0x8000B58Cu;
    // 8000B58C: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000B590:
    ctx->pc = 0x8000B590u;
    // 8000B590: bc    4, 2, 0x8000B59C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000B59C;
        }
    }

label_8000B594:
    ctx->pc = 0x8000B594u;
    ctx->downcount -= 2;
    // 8000B594: li      r5, 1792
    ctx->gpr[5] = (u32)(s32)(1792);

label_8000B598:
    ctx->pc = 0x8000B598u;
    // 8000B598: b       0x8000B78C
    {
            goto label_8000B78C;
    }

label_8000B59C:
    ctx->pc = 0x8000B59Cu;
    ctx->downcount -= 7;
    // 8000B59C: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8000B5A0:
    ctx->pc = 0x8000B5A0u;
    // 8000B5A0: rlwinm r29, r6, 4, 0, 27
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[6], 4u) & 0xFFFFFFF0u;
    }

label_8000B5A4:
    ctx->pc = 0x8000B5A4u;
    // 8000B5A4: addi    r4, r4, 10320
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10320);

label_8000B5A8:
    ctx->pc = 0x8000B5A8u;
    // 8000B5A8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8000B5AC:
    ctx->pc = 0x8000B5ACu;
    // 8000B5AC: lwzx    r0, r4, r29
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[29];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000B5B0:
    ctx->pc = 0x8000B5B0u;
    // 8000B5B0: cmplw   r3, r0
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

label_8000B5B4:
    ctx->pc = 0x8000B5B4u;
    // 8000B5B4: bc    4, 0, 0x8000B698
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000B698;
        }
    }

label_8000B5B8:
    ctx->pc = 0x8000B5B8u;
    ctx->downcount -= 6;
    // 8000B5B8: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8000B5BC:
    ctx->pc = 0x8000B5BCu;
    // 8000B5BC: li      r6, 1792
    ctx->gpr[6] = (u32)(s32)(1792);

label_8000B5C0:
    ctx->pc = 0x8000B5C0u;
    // 8000B5C0: add   r30, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_8000B5C4:
    ctx->pc = 0x8000B5C4u;
    // 8000B5C4: addi    r30, r30, -1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(-1);

label_8000B5C8:
    ctx->pc = 0x8000B5C8u;
    // 8000B5C8: cmplw   r30, r3
    {
        u32 val_a = (u32)(ctx->gpr[30]);
        u32 val_b = (u32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000B5CC:
    ctx->pc = 0x8000B5CCu;
    // 8000B5CC: bc    4, 0, 0x8000B5D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000B5D4;
        }
    }

label_8000B5D0:
    ctx->pc = 0x8000B5D0u;
    ctx->downcount -= 1;
    // 8000B5D0: b       0x8000B694
    {
            goto label_8000B694;
    }

label_8000B5D4:
    ctx->pc = 0x8000B5D4u;
    ctx->downcount -= 4;
    // 8000B5D4: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000B5D8:
    ctx->pc = 0x8000B5D8u;
    // 8000B5D8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8000B5DC:
    ctx->pc = 0x8000B5DCu;
    // 8000B5DC: cmplw   r3, r0
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

label_8000B5E0:
    ctx->pc = 0x8000B5E0u;
    // 8000B5E0: bc    12, 1, 0x8000B694
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000B694;
        }
    }

label_8000B5E4:
    ctx->pc = 0x8000B5E4u;
    ctx->downcount -= 3;
    // 8000B5E4: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000B5E8:
    ctx->pc = 0x8000B5E8u;
    // 8000B5E8: cmplw   r30, r0
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

label_8000B5EC:
    ctx->pc = 0x8000B5ECu;
    // 8000B5EC: bc    12, 0, 0x8000B694
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000B694;
        }
    }

label_8000B5F0:
    ctx->pc = 0x8000B5F0u;
    ctx->downcount -= 2;
    // 8000B5F0: cmpwi   r26, 0
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

label_8000B5F4:
    ctx->pc = 0x8000B5F4u;
    // 8000B5F4: bc    4, 2, 0x8000B60C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000B60C;
        }
    }

label_8000B5F8:
    ctx->pc = 0x8000B5F8u;
    ctx->downcount -= 5;
    // 8000B5F8: rlwinm r0, r5, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 4u) & 0xFFFFFFF0u;
    }

label_8000B5FC:
    ctx->pc = 0x8000B5FCu;
    // 8000B5FC: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8000B600:
    ctx->pc = 0x8000B600u;
    // 8000B600: lwz     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000B604:
    ctx->pc = 0x8000B604u;
    // 8000B604: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000B608:
    ctx->pc = 0x8000B608u;
    // 8000B608: bc    12, 2, 0x8000B630
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000B630;
        }
    }

label_8000B60C:
    ctx->pc = 0x8000B60Cu;
    ctx->downcount -= 2;
    // 8000B60C: cmpwi   r26, 1
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000B610:
    ctx->pc = 0x8000B610u;
    // 8000B610: bc    4, 2, 0x8000B638
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000B638;
        }
    }

label_8000B614:
    ctx->pc = 0x8000B614u;
    ctx->downcount -= 7;
    // 8000B614: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8000B618:
    ctx->pc = 0x8000B618u;
    // 8000B618: rlwinm r0, r5, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 4u) & 0xFFFFFFF0u;
    }

label_8000B61C:
    ctx->pc = 0x8000B61Cu;
    // 8000B61C: addi    r4, r4, 10320
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10320);

label_8000B620:
    ctx->pc = 0x8000B620u;
    // 8000B620: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8000B624:
    ctx->pc = 0x8000B624u;
    // 8000B624: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000B628:
    ctx->pc = 0x8000B628u;
    // 8000B628: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000B62C:
    ctx->pc = 0x8000B62Cu;
    // 8000B62C: bc    4, 2, 0x8000B638
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000B638;
        }
    }

label_8000B630:
    ctx->pc = 0x8000B630u;
    ctx->downcount -= 2;
    // 8000B630: li      r6, 1792
    ctx->gpr[6] = (u32)(s32)(1792);

label_8000B634:
    ctx->pc = 0x8000B634u;
    // 8000B634: b       0x8000B694
    {
            goto label_8000B694;
    }

label_8000B638:
    ctx->pc = 0x8000B638u;
    ctx->downcount -= 7;
    // 8000B638: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8000B63C:
    ctx->pc = 0x8000B63Cu;
    // 8000B63C: rlwinm r28, r5, 4, 0, 27
    {
        ctx->gpr[28] = dolrecomp_rotl32(ctx->gpr[5], 4u) & 0xFFFFFFF0u;
    }

label_8000B640:
    ctx->pc = 0x8000B640u;
    // 8000B640: addi    r4, r4, 10320
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10320);

label_8000B644:
    ctx->pc = 0x8000B644u;
    // 8000B644: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8000B648:
    ctx->pc = 0x8000B648u;
    // 8000B648: lwzx    r0, r4, r28
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[28];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000B64C:
    ctx->pc = 0x8000B64Cu;
    // 8000B64C: cmplw   r3, r0
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

label_8000B650:
    ctx->pc = 0x8000B650u;
    // 8000B650: bc    4, 0, 0x8000B664
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000B664;
        }
    }

label_8000B654:
    ctx->pc = 0x8000B654u;
    ctx->downcount -= 3;
    // 8000B654: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_8000B658:
    ctx->pc = 0x8000B658u;
    // 8000B658: subf   r4, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8000B65C:
    ctx->pc = 0x8000B65Cu;
    // 8000B65C: bl      0x8000B500
    {
            ctx->lr = 0x8000B660u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000B500u;
                return;
            }
            goto label_8000B500;
    }

label_8000B660:
    ctx->pc = 0x8000B660u;
    ctx->downcount -= 1;
    // 8000B660: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000B664:
    ctx->pc = 0x8000B664u;
    ctx->downcount -= 2;
    // 8000B664: cmpwi   r6, 0
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

label_8000B668:
    ctx->pc = 0x8000B668u;
    // 8000B668: bc    4, 2, 0x8000B694
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000B694;
        }
    }

label_8000B66C:
    ctx->pc = 0x8000B66Cu;
    ctx->downcount -= 6;
    // 8000B66C: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8000B670:
    ctx->pc = 0x8000B670u;
    // 8000B670: addi    r0, r3, 10320
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(10320);

label_8000B674:
    ctx->pc = 0x8000B674u;
    // 8000B674: add   r3, r0, r28
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8000B678:
    ctx->pc = 0x8000B678u;
    // 8000B678: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000B67C:
    ctx->pc = 0x8000B67Cu;
    // 8000B67C: cmplw   r30, r3
    {
        u32 val_a = (u32)(ctx->gpr[30]);
        u32 val_b = (u32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000B680:
    ctx->pc = 0x8000B680u;
    // 8000B680: bc    4, 1, 0x8000B694
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000B694;
        }
    }

label_8000B684:
    ctx->pc = 0x8000B684u;
    ctx->downcount -= 3;
    // 8000B684: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_8000B688:
    ctx->pc = 0x8000B688u;
    // 8000B688: subf   r4, r3, r30
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[30];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8000B68C:
    ctx->pc = 0x8000B68Cu;
    // 8000B68C: bl      0x8000B500
    {
            ctx->lr = 0x8000B690u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000B500u;
                return;
            }
            goto label_8000B500;
    }

label_8000B690:
    ctx->pc = 0x8000B690u;
    ctx->downcount -= 1;
    // 8000B690: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000B694:
    ctx->pc = 0x8000B694u;
    ctx->downcount -= 1;
    // 8000B694: or   r5, r6, r6
    {
        ctx->gpr[5] = ctx->gpr[6] | ctx->gpr[6];
    }

label_8000B698:
    ctx->pc = 0x8000B698u;
    ctx->downcount -= 2;
    // 8000B698: cmpwi   r5, 0
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

label_8000B69C:
    ctx->pc = 0x8000B69Cu;
    // 8000B69C: bc    4, 2, 0x8000B78C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000B78C;
        }
    }

label_8000B6A0:
    ctx->pc = 0x8000B6A0u;
    ctx->downcount -= 6;
    // 8000B6A0: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8000B6A4:
    ctx->pc = 0x8000B6A4u;
    // 8000B6A4: addi    r4, r3, 10320
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(10320);

label_8000B6A8:
    ctx->pc = 0x8000B6A8u;
    // 8000B6A8: addi    r28, r4, 4
    ctx->gpr[28] = ctx->gpr[4] + (u32)(s32)(4);

label_8000B6AC:
    ctx->pc = 0x8000B6ACu;
    // 8000B6AC: lwzx    r3, r28, r29
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[29];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000B6B0:
    ctx->pc = 0x8000B6B0u;
    // 8000B6B0: cmplw   r27, r3
    {
        u32 val_a = (u32)(ctx->gpr[27]);
        u32 val_b = (u32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000B6B4:
    ctx->pc = 0x8000B6B4u;
    // 8000B6B4: bc    4, 1, 0x8000B78C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000B78C;
        }
    }

label_8000B6B8:
    ctx->pc = 0x8000B6B8u;
    ctx->downcount -= 6;
    // 8000B6B8: subf   r0, r3, r27
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[27];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8000B6BC:
    ctx->pc = 0x8000B6BCu;
    // 8000B6BC: li      r6, 1792
    ctx->gpr[6] = (u32)(s32)(1792);

label_8000B6C0:
    ctx->pc = 0x8000B6C0u;
    // 8000B6C0: add   r30, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_8000B6C4:
    ctx->pc = 0x8000B6C4u;
    // 8000B6C4: addi    r30, r30, -1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(-1);

label_8000B6C8:
    ctx->pc = 0x8000B6C8u;
    // 8000B6C8: cmplw   r30, r3
    {
        u32 val_a = (u32)(ctx->gpr[30]);
        u32 val_b = (u32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000B6CC:
    ctx->pc = 0x8000B6CCu;
    // 8000B6CC: bc    4, 0, 0x8000B6D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000B6D4;
        }
    }

label_8000B6D0:
    ctx->pc = 0x8000B6D0u;
    ctx->downcount -= 1;
    // 8000B6D0: b       0x8000B788
    {
            goto label_8000B788;
    }

label_8000B6D4:
    ctx->pc = 0x8000B6D4u;
    ctx->downcount -= 4;
    // 8000B6D4: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000B6D8:
    ctx->pc = 0x8000B6D8u;
    // 8000B6D8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8000B6DC:
    ctx->pc = 0x8000B6DCu;
    // 8000B6DC: cmplw   r3, r0
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

label_8000B6E0:
    ctx->pc = 0x8000B6E0u;
    // 8000B6E0: bc    12, 1, 0x8000B788
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000B788;
        }
    }

label_8000B6E4:
    ctx->pc = 0x8000B6E4u;
    ctx->downcount -= 3;
    // 8000B6E4: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000B6E8:
    ctx->pc = 0x8000B6E8u;
    // 8000B6E8: cmplw   r30, r0
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

label_8000B6EC:
    ctx->pc = 0x8000B6ECu;
    // 8000B6EC: bc    12, 0, 0x8000B788
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000B788;
        }
    }

label_8000B6F0:
    ctx->pc = 0x8000B6F0u;
    ctx->downcount -= 2;
    // 8000B6F0: cmpwi   r26, 0
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

label_8000B6F4:
    ctx->pc = 0x8000B6F4u;
    // 8000B6F4: bc    4, 2, 0x8000B70C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000B70C;
        }
    }

label_8000B6F8:
    ctx->pc = 0x8000B6F8u;
    ctx->downcount -= 5;
    // 8000B6F8: rlwinm r0, r5, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 4u) & 0xFFFFFFF0u;
    }

label_8000B6FC:
    ctx->pc = 0x8000B6FCu;
    // 8000B6FC: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8000B700:
    ctx->pc = 0x8000B700u;
    // 8000B700: lwz     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000B704:
    ctx->pc = 0x8000B704u;
    // 8000B704: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000B708:
    ctx->pc = 0x8000B708u;
    // 8000B708: bc    12, 2, 0x8000B730
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000B730;
        }
    }

label_8000B70C:
    ctx->pc = 0x8000B70Cu;
    ctx->downcount -= 2;
    // 8000B70C: cmpwi   r26, 1
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000B710:
    ctx->pc = 0x8000B710u;
    // 8000B710: bc    4, 2, 0x8000B738
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000B738;
        }
    }

label_8000B714:
    ctx->pc = 0x8000B714u;
    ctx->downcount -= 7;
    // 8000B714: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8000B718:
    ctx->pc = 0x8000B718u;
    // 8000B718: rlwinm r0, r5, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 4u) & 0xFFFFFFF0u;
    }

label_8000B71C:
    ctx->pc = 0x8000B71Cu;
    // 8000B71C: addi    r4, r4, 10320
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10320);

label_8000B720:
    ctx->pc = 0x8000B720u;
    // 8000B720: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8000B724:
    ctx->pc = 0x8000B724u;
    // 8000B724: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000B728:
    ctx->pc = 0x8000B728u;
    // 8000B728: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000B72C:
    ctx->pc = 0x8000B72Cu;
    // 8000B72C: bc    4, 2, 0x8000B738
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000B738;
        }
    }

label_8000B730:
    ctx->pc = 0x8000B730u;
    ctx->downcount -= 2;
    // 8000B730: li      r6, 1792
    ctx->gpr[6] = (u32)(s32)(1792);

label_8000B734:
    ctx->pc = 0x8000B734u;
    // 8000B734: b       0x8000B788
    {
            goto label_8000B788;
    }

label_8000B738:
    ctx->pc = 0x8000B738u;
    ctx->downcount -= 7;
    // 8000B738: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8000B73C:
    ctx->pc = 0x8000B73Cu;
    // 8000B73C: rlwinm r27, r5, 4, 0, 27
    {
        ctx->gpr[27] = dolrecomp_rotl32(ctx->gpr[5], 4u) & 0xFFFFFFF0u;
    }

label_8000B740:
    ctx->pc = 0x8000B740u;
    // 8000B740: addi    r4, r4, 10320
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10320);

label_8000B744:
    ctx->pc = 0x8000B744u;
    // 8000B744: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8000B748:
    ctx->pc = 0x8000B748u;
    // 8000B748: lwzx    r0, r4, r27
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[27];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000B74C:
    ctx->pc = 0x8000B74Cu;
    // 8000B74C: cmplw   r3, r0
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

label_8000B750:
    ctx->pc = 0x8000B750u;
    // 8000B750: bc    4, 0, 0x8000B764
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000B764;
        }
    }

label_8000B754:
    ctx->pc = 0x8000B754u;
    ctx->downcount -= 3;
    // 8000B754: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_8000B758:
    ctx->pc = 0x8000B758u;
    // 8000B758: subf   r4, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8000B75C:
    ctx->pc = 0x8000B75Cu;
    // 8000B75C: bl      0x8000B500
    {
            ctx->lr = 0x8000B760u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000B500u;
                return;
            }
            goto label_8000B500;
    }

label_8000B760:
    ctx->pc = 0x8000B760u;
    ctx->downcount -= 1;
    // 8000B760: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000B764:
    ctx->pc = 0x8000B764u;
    ctx->downcount -= 2;
    // 8000B764: cmpwi   r6, 0
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

label_8000B768:
    ctx->pc = 0x8000B768u;
    // 8000B768: bc    4, 2, 0x8000B788
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000B788;
        }
    }

label_8000B76C:
    ctx->pc = 0x8000B76Cu;
    ctx->downcount -= 3;
    // 8000B76C: lwzx    r3, r28, r27
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[27];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000B770:
    ctx->pc = 0x8000B770u;
    // 8000B770: cmplw   r30, r3
    {
        u32 val_a = (u32)(ctx->gpr[30]);
        u32 val_b = (u32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000B774:
    ctx->pc = 0x8000B774u;
    // 8000B774: bc    4, 1, 0x8000B788
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000B788;
        }
    }

label_8000B778:
    ctx->pc = 0x8000B778u;
    ctx->downcount -= 3;
    // 8000B778: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_8000B77C:
    ctx->pc = 0x8000B77Cu;
    // 8000B77C: subf   r4, r3, r30
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[30];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8000B780:
    ctx->pc = 0x8000B780u;
    // 8000B780: bl      0x8000B500
    {
            ctx->lr = 0x8000B784u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000B500u;
                return;
            }
            goto label_8000B500;
    }

label_8000B784:
    ctx->pc = 0x8000B784u;
    ctx->downcount -= 1;
    // 8000B784: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000B788:
    ctx->pc = 0x8000B788u;
    ctx->downcount -= 1;
    // 8000B788: or   r5, r6, r6
    {
        ctx->gpr[5] = ctx->gpr[6] | ctx->gpr[6];
    }

label_8000B78C:
    ctx->pc = 0x8000B78Cu;
    ctx->downcount -= 1;
    // 8000B78C: or   r3, r5, r5
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8000B790:
    ctx->pc = 0x8000B790u;
    ctx->downcount -= 16;
    // 8000B790: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8000B794:
    ctx->pc = 0x8000B794u;
    // 8000B794: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000B798:
    ctx->pc = 0x8000B798u;
    // 8000B798: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000B79C:
    ctx->pc = 0x8000B79Cu;
    // 8000B79C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8000B7A0:
    ctx->pc = 0x8000B7A0u;
    // 8000B7A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000B7A4:
    ctx->pc = 0x8000B7A4u;
    // 8000B7A4: .long   0x00000000
    // embedded data

label_8000B7A8:
    ctx->pc = 0x8000B7A8u;
    // 8000B7A8: .long   0x00000000
    // embedded data

label_8000B7AC:
    ctx->pc = 0x8000B7ACu;
    // 8000B7AC: .long   0x00000000
    // embedded data

label_8000B7B0:
    ctx->pc = 0x8000B7B0u;
    ctx->downcount -= 2;
    // 8000B7B0: twi     31, r0, 0
    if (ppc_trap_condition(31u, ctx->gpr[0], (u32)(s32)0)) {
        ppc_program_exception(ctx, PPC_PROGRAM_TRAP, 0x8000B7B0u);
        return;
    }

label_8000B7B4:
    ctx->pc = 0x8000B7B4u;
    // 8000B7B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000B7B8:
    ctx->pc = 0x8000B7B8u;
    ctx->downcount -= 2;
    // 8000B7B8: twi     31, r0, 0
    if (ppc_trap_condition(31u, ctx->gpr[0], (u32)(s32)0)) {
        ppc_program_exception(ctx, PPC_PROGRAM_TRAP, 0x8000B7B8u);
        return;
    }

label_8000B7BC:
    ctx->pc = 0x8000B7BCu;
    // 8000B7BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000B7C0:
    ctx->pc = 0x8000B7C0u;
    ctx->downcount -= 2;
    // 8000B7C0: twi     31, r0, 0
    if (ppc_trap_condition(31u, ctx->gpr[0], (u32)(s32)0)) {
        ppc_program_exception(ctx, PPC_PROGRAM_TRAP, 0x8000B7C0u);
        return;
    }

label_8000B7C4:
    ctx->pc = 0x8000B7C4u;
    // 8000B7C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000B7C8:
    ctx->pc = 0x8000B7C8u;
    ctx->downcount -= 2;
    // 8000B7C8: twi     31, r0, 0
    if (ppc_trap_condition(31u, ctx->gpr[0], (u32)(s32)0)) {
        ppc_program_exception(ctx, PPC_PROGRAM_TRAP, 0x8000B7C8u);
        return;
    }

label_8000B7CC:
    ctx->pc = 0x8000B7CCu;
    // 8000B7CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000B7D0:
    ctx->pc = 0x8000B7D0u;
    ctx->downcount -= 63;
    // 8000B7D0: lis     r2, -32738
    ctx->gpr[2] = ((u32)(s32)(-32738) << 16);

label_8000B7D4:
    ctx->pc = 0x8000B7D4u;
    // 8000B7D4: ori     r2, r2, 0xAE68
    ctx->gpr[2] = ctx->gpr[2] | 0xAE68u;

label_8000B7D8:
    ctx->pc = 0x8000B7D8u;
    // 8000B7D8: mfsr    r16, 0
    ctx->gpr[16] = ctx->sr[0];

label_8000B7DC:
    ctx->pc = 0x8000B7DCu;
    // 8000B7DC: mfsr    r17, 1
    ctx->gpr[17] = ctx->sr[1];

label_8000B7E0:
    ctx->pc = 0x8000B7E0u;
    // 8000B7E0: mfsr    r18, 2
    ctx->gpr[18] = ctx->sr[2];

label_8000B7E4:
    ctx->pc = 0x8000B7E4u;
    // 8000B7E4: mfsr    r19, 3
    ctx->gpr[19] = ctx->sr[3];

label_8000B7E8:
    ctx->pc = 0x8000B7E8u;
    // 8000B7E8: mfsr    r20, 4
    ctx->gpr[20] = ctx->sr[4];

label_8000B7EC:
    ctx->pc = 0x8000B7ECu;
    // 8000B7EC: mfsr    r21, 5
    ctx->gpr[21] = ctx->sr[5];

label_8000B7F0:
    ctx->pc = 0x8000B7F0u;
    // 8000B7F0: mfsr    r22, 6
    ctx->gpr[22] = ctx->sr[6];

label_8000B7F4:
    ctx->pc = 0x8000B7F4u;
    // 8000B7F4: mfsr    r23, 7
    ctx->gpr[23] = ctx->sr[7];

label_8000B7F8:
    ctx->pc = 0x8000B7F8u;
    // 8000B7F8: mfsr    r24, 8
    ctx->gpr[24] = ctx->sr[8];

label_8000B7FC:
    ctx->pc = 0x8000B7FCu;
    // 8000B7FC: mfsr    r25, 9
    ctx->gpr[25] = ctx->sr[9];

label_8000B800:
    ctx->pc = 0x8000B800u;
    // 8000B800: mfsr    r26, 10
    ctx->gpr[26] = ctx->sr[10];

label_8000B804:
    ctx->pc = 0x8000B804u;
    // 8000B804: mfsr    r27, 11
    ctx->gpr[27] = ctx->sr[11];

label_8000B808:
    ctx->pc = 0x8000B808u;
    // 8000B808: mfsr    r28, 12
    ctx->gpr[28] = ctx->sr[12];

label_8000B80C:
    ctx->pc = 0x8000B80Cu;
    // 8000B80C: mfsr    r29, 13
    ctx->gpr[29] = ctx->sr[13];

label_8000B810:
    ctx->pc = 0x8000B810u;
    // 8000B810: mfsr    r30, 14
    ctx->gpr[30] = ctx->sr[14];

label_8000B814:
    ctx->pc = 0x8000B814u;
    // 8000B814: mfsr    r31, 15
    ctx->gpr[31] = ctx->sr[15];

label_8000B818:
    ctx->pc = 0x8000B818u;
    // 8000B818: stmw     r16, 424(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(424);
        for (u32 r = 16; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8000B81C:
    ctx->pc = 0x8000B81Cu;
    // 8000B81C: mftb    r10
    ctx->gpr[10] = ppc_mftb(ctx, 268u, 0x8000B81Cu);
    if (ctx->exception) return;

label_8000B820:
    ctx->pc = 0x8000B820u;
    // 8000B820: mftbu   r11
    ctx->gpr[11] = ppc_mftb(ctx, 269u, 0x8000B820u);
    if (ctx->exception) return;

label_8000B824:
    ctx->pc = 0x8000B824u;
    // 8000B824: mfhid0    r12
    ppc_fallback_instruction(ctx, 0x7D90FAA6u, 0x8000B824u);
    return;

label_8000B828:
    ctx->pc = 0x8000B828u;
    // 8000B828: mfhid1    r13
    ppc_fallback_instruction(ctx, 0x7DB1FAA6u, 0x8000B828u);
    return;

label_8000B82C:
    ctx->pc = 0x8000B82Cu;
    ctx->downcount -= 1;
    // 8000B82C: mfsrr1    r14
    ctx->gpr[14] = ctx->srr1;

label_8000B830:
    ctx->pc = 0x8000B830u;
    // 8000B830: mfpvr    r15
    ppc_fallback_instruction(ctx, 0x7DFF42A6u, 0x8000B830u);
    return;

label_8000B834:
    ctx->pc = 0x8000B834u;
    // 8000B834: mfibat0u    r16
    ppc_fallback_instruction(ctx, 0x7E1082A6u, 0x8000B834u);
    return;

label_8000B838:
    ctx->pc = 0x8000B838u;
    // 8000B838: mfibat0l    r17
    ppc_fallback_instruction(ctx, 0x7E3182A6u, 0x8000B838u);
    return;

label_8000B83C:
    ctx->pc = 0x8000B83Cu;
    // 8000B83C: mfibat1u    r18
    ppc_fallback_instruction(ctx, 0x7E5282A6u, 0x8000B83Cu);
    return;

label_8000B840:
    ctx->pc = 0x8000B840u;
    // 8000B840: mfibat1l    r19
    ppc_fallback_instruction(ctx, 0x7E7382A6u, 0x8000B840u);
    return;

label_8000B844:
    ctx->pc = 0x8000B844u;
    // 8000B844: mfibat2u    r20
    ppc_fallback_instruction(ctx, 0x7E9482A6u, 0x8000B844u);
    return;

label_8000B848:
    ctx->pc = 0x8000B848u;
    // 8000B848: mfibat2l    r21
    ppc_fallback_instruction(ctx, 0x7EB582A6u, 0x8000B848u);
    return;

label_8000B84C:
    ctx->pc = 0x8000B84Cu;
    // 8000B84C: mfibat3u    r22
    ppc_fallback_instruction(ctx, 0x7ED682A6u, 0x8000B84Cu);
    return;

label_8000B850:
    ctx->pc = 0x8000B850u;
    // 8000B850: mfibat3l    r23
    ppc_fallback_instruction(ctx, 0x7EF782A6u, 0x8000B850u);
    return;

label_8000B854:
    ctx->pc = 0x8000B854u;
    // 8000B854: mfdbat0u    r24
    ppc_fallback_instruction(ctx, 0x7F1882A6u, 0x8000B854u);
    return;

label_8000B858:
    ctx->pc = 0x8000B858u;
    // 8000B858: mfdbat0l    r25
    ppc_fallback_instruction(ctx, 0x7F3982A6u, 0x8000B858u);
    return;

label_8000B85C:
    ctx->pc = 0x8000B85Cu;
    // 8000B85C: mfdbat1u    r26
    ppc_fallback_instruction(ctx, 0x7F5A82A6u, 0x8000B85Cu);
    return;

label_8000B860:
    ctx->pc = 0x8000B860u;
    // 8000B860: mfdbat1l    r27
    ppc_fallback_instruction(ctx, 0x7F7B82A6u, 0x8000B860u);
    return;

label_8000B864:
    ctx->pc = 0x8000B864u;
    // 8000B864: mfdbat2u    r28
    ppc_fallback_instruction(ctx, 0x7F9C82A6u, 0x8000B864u);
    return;

label_8000B868:
    ctx->pc = 0x8000B868u;
    // 8000B868: mfdbat2l    r29
    ppc_fallback_instruction(ctx, 0x7FBD82A6u, 0x8000B868u);
    return;

label_8000B86C:
    ctx->pc = 0x8000B86Cu;
    // 8000B86C: mfdbat3u    r30
    ppc_fallback_instruction(ctx, 0x7FDE82A6u, 0x8000B86Cu);
    return;

label_8000B870:
    ctx->pc = 0x8000B870u;
    // 8000B870: mfdbat3l    r31
    ppc_fallback_instruction(ctx, 0x7FFF82A6u, 0x8000B870u);
    return;

label_8000B874:
    ctx->pc = 0x8000B874u;
    ctx->downcount -= 11;
    // 8000B874: stmw     r10, 488(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(488);
        for (u32 r = 10; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8000B878:
    ctx->pc = 0x8000B878u;
    // 8000B878: mfsdr1    r22
    ppc_fallback_instruction(ctx, 0x7ED902A6u, 0x8000B878u);
    return;

label_8000B87C:
    ctx->pc = 0x8000B87Cu;
    // 8000B87C: mfdar    r23
    ppc_fallback_instruction(ctx, 0x7EF302A6u, 0x8000B87Cu);
    return;

label_8000B880:
    ctx->pc = 0x8000B880u;
    // 8000B880: mfdsisr    r24
    ppc_fallback_instruction(ctx, 0x7F1202A6u, 0x8000B880u);
    return;

label_8000B884:
    ctx->pc = 0x8000B884u;
    // 8000B884: mfsprg0    r25
    ppc_fallback_instruction(ctx, 0x7F3042A6u, 0x8000B884u);
    return;

label_8000B888:
    ctx->pc = 0x8000B888u;
    // 8000B888: mfsprg1    r26
    ppc_fallback_instruction(ctx, 0x7F5142A6u, 0x8000B888u);
    return;

label_8000B88C:
    ctx->pc = 0x8000B88Cu;
    // 8000B88C: mfsprg2    r27
    ppc_fallback_instruction(ctx, 0x7F7242A6u, 0x8000B88Cu);
    return;

label_8000B890:
    ctx->pc = 0x8000B890u;
    // 8000B890: mfsprg3    r28
    ppc_fallback_instruction(ctx, 0x7F9342A6u, 0x8000B890u);
    return;

label_8000B894:
    ctx->pc = 0x8000B894u;
    ctx->downcount -= 1;
    // 8000B894: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_8000B898:
    ctx->pc = 0x8000B898u;
    // 8000B898: mfiabr    r30
    ppc_fallback_instruction(ctx, 0x7FD2FAA6u, 0x8000B898u);
    return;

label_8000B89C:
    ctx->pc = 0x8000B89Cu;
    ctx->downcount -= 21;
    // 8000B89C: mfear    r31
    ctx->gpr[31] = ctx->ear;

label_8000B8A0:
    ctx->pc = 0x8000B8A0u;
    // 8000B8A0: stmw     r22, 604(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(604);
        for (u32 r = 22; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8000B8A4:
    ctx->pc = 0x8000B8A4u;
    // 8000B8A4: mfgqr0    r20
    ctx->gpr[20] = ctx->gqr[0];

label_8000B8A8:
    ctx->pc = 0x8000B8A8u;
    // 8000B8A8: mfgqr1    r21
    ctx->gpr[21] = ctx->gqr[1];

label_8000B8AC:
    ctx->pc = 0x8000B8ACu;
    // 8000B8AC: mfgqr2    r22
    ctx->gpr[22] = ctx->gqr[2];

label_8000B8B0:
    ctx->pc = 0x8000B8B0u;
    // 8000B8B0: mfgqr3    r23
    ctx->gpr[23] = ctx->gqr[3];

label_8000B8B4:
    ctx->pc = 0x8000B8B4u;
    // 8000B8B4: mfgqr4    r24
    ctx->gpr[24] = ctx->gqr[4];

label_8000B8B8:
    ctx->pc = 0x8000B8B8u;
    // 8000B8B8: mfgqr5    r25
    ctx->gpr[25] = ctx->gqr[5];

label_8000B8BC:
    ctx->pc = 0x8000B8BCu;
    // 8000B8BC: mfgqr6    r26
    ctx->gpr[26] = ctx->gqr[6];

label_8000B8C0:
    ctx->pc = 0x8000B8C0u;
    // 8000B8C0: mfgqr7    r27
    ctx->gpr[27] = ctx->gqr[7];

label_8000B8C4:
    ctx->pc = 0x8000B8C4u;
    // 8000B8C4: mfhid2    r28
    ctx->gpr[28] = ctx->hid2;

label_8000B8C8:
    ctx->pc = 0x8000B8C8u;
    // 8000B8C8: mfwpar    r29
    ppc_fallback_instruction(ctx, 0x7FB9E2A6u, 0x8000B8C8u);
    return;

label_8000B8CC:
    ctx->pc = 0x8000B8CCu;
    // 8000B8CC: mfdmau    r30
    ppc_fallback_instruction(ctx, 0x7FDAE2A6u, 0x8000B8CCu);
    return;

label_8000B8D0:
    ctx->pc = 0x8000B8D0u;
    // 8000B8D0: mfdmal    r31
    ppc_fallback_instruction(ctx, 0x7FFBE2A6u, 0x8000B8D0u);
    return;

label_8000B8D4:
    ctx->pc = 0x8000B8D4u;
    ctx->downcount -= 12;
    // 8000B8D4: stmw     r20, 764(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(764);
        for (u32 r = 20; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8000B8D8:
    ctx->pc = 0x8000B8D8u;
    // 8000B8D8: b       0x8000B920
    {
            goto label_8000B920;
    }

label_8000B8DC:
    ctx->pc = 0x8000B8DCu;
    // 8000B8DC: mfspr   r16, 928
    ppc_fallback_instruction(ctx, 0x7E00EAA6u, 0x8000B8DCu);
    return;

label_8000B8E0:
    ctx->pc = 0x8000B8E0u;
    // 8000B8E0: mfspr   r17, 935
    ppc_fallback_instruction(ctx, 0x7E27EAA6u, 0x8000B8E0u);
    return;

label_8000B8E4:
    ctx->pc = 0x8000B8E4u;
    // 8000B8E4: mfummcr0    r18
    ppc_fallback_instruction(ctx, 0x7E48EAA6u, 0x8000B8E4u);
    return;

label_8000B8E8:
    ctx->pc = 0x8000B8E8u;
    // 8000B8E8: mfupmc1    r19
    ppc_fallback_instruction(ctx, 0x7E69EAA6u, 0x8000B8E8u);
    return;

label_8000B8EC:
    ctx->pc = 0x8000B8ECu;
    // 8000B8EC: mfupmc2    r20
    ppc_fallback_instruction(ctx, 0x7E8AEAA6u, 0x8000B8ECu);
    return;

label_8000B8F0:
    ctx->pc = 0x8000B8F0u;
    // 8000B8F0: mfusia    r21
    ppc_fallback_instruction(ctx, 0x7EABEAA6u, 0x8000B8F0u);
    return;

label_8000B8F4:
    ctx->pc = 0x8000B8F4u;
    // 8000B8F4: mfummcr1    r22
    ppc_fallback_instruction(ctx, 0x7ECCEAA6u, 0x8000B8F4u);
    return;

label_8000B8F8:
    ctx->pc = 0x8000B8F8u;
    // 8000B8F8: mfupmc3    r23
    ppc_fallback_instruction(ctx, 0x7EEDEAA6u, 0x8000B8F8u);
    return;

label_8000B8FC:
    ctx->pc = 0x8000B8FCu;
    // 8000B8FC: mfupmc4    r24
    ppc_fallback_instruction(ctx, 0x7F0EEAA6u, 0x8000B8FCu);
    return;

label_8000B900:
    ctx->pc = 0x8000B900u;
    // 8000B900: mfspr   r25, 943
    ppc_fallback_instruction(ctx, 0x7F2FEAA6u, 0x8000B900u);
    return;

label_8000B904:
    ctx->pc = 0x8000B904u;
    // 8000B904: mfspr   r26, 944
    ppc_fallback_instruction(ctx, 0x7F50EAA6u, 0x8000B904u);
    return;

label_8000B908:
    ctx->pc = 0x8000B908u;
    // 8000B908: mfspr   r27, 951
    ppc_fallback_instruction(ctx, 0x7F77EAA6u, 0x8000B908u);
    return;

label_8000B90C:
    ctx->pc = 0x8000B90Cu;
    // 8000B90C: mfspr   r28, 959
    ppc_fallback_instruction(ctx, 0x7F9FEAA6u, 0x8000B90Cu);
    return;

label_8000B910:
    ctx->pc = 0x8000B910u;
    // 8000B910: mfspr   r29, 1014
    ppc_fallback_instruction(ctx, 0x7FB6FAA6u, 0x8000B910u);
    return;

label_8000B914:
    ctx->pc = 0x8000B914u;
    // 8000B914: mfspr   r30, 1015
    ppc_fallback_instruction(ctx, 0x7FD7FAA6u, 0x8000B914u);
    return;

label_8000B918:
    ctx->pc = 0x8000B918u;
    // 8000B918: mfspr   r31, 1023
    ppc_fallback_instruction(ctx, 0x7FFFFAA6u, 0x8000B918u);
    return;

label_8000B91C:
    ctx->pc = 0x8000B91Cu;
    ctx->downcount -= 11;
    // 8000B91C: stmw     r16, 696(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(696);
        for (u32 r = 16; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8000B920:
    ctx->pc = 0x8000B920u;
    // 8000B920: mfdabr    r19
    ppc_fallback_instruction(ctx, 0x7E75FAA6u, 0x8000B920u);
    return;

label_8000B924:
    ctx->pc = 0x8000B924u;
    // 8000B924: mfpmc1    r20
    ppc_fallback_instruction(ctx, 0x7E99EAA6u, 0x8000B924u);
    return;

label_8000B928:
    ctx->pc = 0x8000B928u;
    // 8000B928: mfpmc2    r21
    ppc_fallback_instruction(ctx, 0x7EBAEAA6u, 0x8000B928u);
    return;

label_8000B92C:
    ctx->pc = 0x8000B92Cu;
    // 8000B92C: mfpmc3    r22
    ppc_fallback_instruction(ctx, 0x7EDDEAA6u, 0x8000B92Cu);
    return;

label_8000B930:
    ctx->pc = 0x8000B930u;
    // 8000B930: mfpmc4    r23
    ppc_fallback_instruction(ctx, 0x7EFEEAA6u, 0x8000B930u);
    return;

label_8000B934:
    ctx->pc = 0x8000B934u;
    // 8000B934: mfsia    r24
    ppc_fallback_instruction(ctx, 0x7F1BEAA6u, 0x8000B934u);
    return;

label_8000B938:
    ctx->pc = 0x8000B938u;
    // 8000B938: mfmmcr0    r25
    ppc_fallback_instruction(ctx, 0x7F38EAA6u, 0x8000B938u);
    return;

label_8000B93C:
    ctx->pc = 0x8000B93Cu;
    // 8000B93C: mfmmcr1    r26
    ppc_fallback_instruction(ctx, 0x7F5CEAA6u, 0x8000B93Cu);
    return;

label_8000B940:
    ctx->pc = 0x8000B940u;
    // 8000B940: mfthrm1    r27
    ppc_fallback_instruction(ctx, 0x7F7CFAA6u, 0x8000B940u);
    return;

label_8000B944:
    ctx->pc = 0x8000B944u;
    // 8000B944: mfthrm2    r28
    ppc_fallback_instruction(ctx, 0x7F9DFAA6u, 0x8000B944u);
    return;

label_8000B948:
    ctx->pc = 0x8000B948u;
    // 8000B948: mfthrm3    r29
    ppc_fallback_instruction(ctx, 0x7FBEFAA6u, 0x8000B948u);
    return;

label_8000B94C:
    ctx->pc = 0x8000B94Cu;
    // 8000B94C: mfictc    r30
    ppc_fallback_instruction(ctx, 0x7FDBFAA6u, 0x8000B94Cu);
    return;

label_8000B950:
    ctx->pc = 0x8000B950u;
    // 8000B950: mfl2cr    r31
    ppc_fallback_instruction(ctx, 0x7FF9FAA6u, 0x8000B950u);
    return;

label_8000B954:
    ctx->pc = 0x8000B954u;
    ctx->downcount -= 12;
    // 8000B954: stmw     r19, 644(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(644);
        for (u32 r = 19; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8000B958:
    ctx->pc = 0x8000B958u;
    // 8000B958: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000B95C:
    ctx->pc = 0x8000B95Cu;
    // 8000B95C: mfspr   r25, 976
    ppc_fallback_instruction(ctx, 0x7F30F2A6u, 0x8000B95Cu);
    return;

label_8000B960:
    ctx->pc = 0x8000B960u;
    // 8000B960: mfspr   r26, 977
    ppc_fallback_instruction(ctx, 0x7F51F2A6u, 0x8000B960u);
    return;

label_8000B964:
    ctx->pc = 0x8000B964u;
    // 8000B964: mfspr   r27, 978
    ppc_fallback_instruction(ctx, 0x7F72F2A6u, 0x8000B964u);
    return;

label_8000B968:
    ctx->pc = 0x8000B968u;
    // 8000B968: mfspr   r28, 979
    ppc_fallback_instruction(ctx, 0x7F93F2A6u, 0x8000B968u);
    return;

label_8000B96C:
    ctx->pc = 0x8000B96Cu;
    // 8000B96C: mfspr   r29, 980
    ppc_fallback_instruction(ctx, 0x7FB4F2A6u, 0x8000B96Cu);
    return;

label_8000B970:
    ctx->pc = 0x8000B970u;
    // 8000B970: mfspr   r30, 981
    ppc_fallback_instruction(ctx, 0x7FD5F2A6u, 0x8000B970u);
    return;

label_8000B974:
    ctx->pc = 0x8000B974u;
    // 8000B974: mfspr   r31, 982
    ppc_fallback_instruction(ctx, 0x7FF6F2A6u, 0x8000B974u);
    return;

label_8000B978:
    ctx->pc = 0x8000B978u;
    ctx->downcount -= 11;
    // 8000B978: stmw     r25, 576(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(576);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8000B97C:
    ctx->pc = 0x8000B97Cu;
    // 8000B97C: mfdec    r31
    ppc_fallback_instruction(ctx, 0x7FF602A6u, 0x8000B97Cu);
    return;

label_8000B980:
    ctx->pc = 0x8000B980u;
    ctx->downcount -= 2;
    // 8000B980: stw     r31, 632(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(632);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8000B984:
    ctx->pc = 0x8000B984u;
    // 8000B984: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000B988:
    ctx->pc = 0x8000B988u;
    ctx->downcount -= 11;
    // 8000B988: lis     r2, -32738
    ctx->gpr[2] = ((u32)(s32)(-32738) << 16);

label_8000B98C:
    ctx->pc = 0x8000B98Cu;
    // 8000B98C: ori     r2, r2, 0xAE68
    ctx->gpr[2] = ctx->gpr[2] | 0xAE68u;

label_8000B990:
    ctx->pc = 0x8000B990u;
    // 8000B990: lis     r5, -32739
    ctx->gpr[5] = ((u32)(s32)(-32739) << 16);

label_8000B994:
    ctx->pc = 0x8000B994u;
    // 8000B994: ori     r5, r5, 0xE8E8
    ctx->gpr[5] = ctx->gpr[5] | 0xE8E8u;

label_8000B998:
    ctx->pc = 0x8000B998u;
    // 8000B998: lbz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8000B99C:
    ctx->pc = 0x8000B99Cu;
    // 8000B99C: lbz     r6, 1(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8000B9A0:
    ctx->pc = 0x8000B9A0u;
    // 8000B9A0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8000B9A4:
    ctx->pc = 0x8000B9A4u;
    // 8000B9A4: stb     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8000B9A8:
    ctx->pc = 0x8000B9A8u;
    // 8000B9A8: stb     r0, 1(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8000B9AC:
    ctx->pc = 0x8000B9ACu;
    // 8000B9AC: cmpwi   r3, 0
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

label_8000B9B0:
    ctx->pc = 0x8000B9B0u;
    // 8000B9B0: bc    12, 2, 0x8000B9C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000B9C4;
        }
    }

label_8000B9B4:
    ctx->pc = 0x8000B9B4u;
    ctx->downcount -= 2;
    // 8000B9B4: lwz     r24, 488(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(488);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_8000B9B8:
    ctx->pc = 0x8000B9B8u;
    // 8000B9B8: lwz     r25, 492(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(492);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_8000B9BC:
    ctx->pc = 0x8000B9BCu;
    // 8000B9BC: mttbl    r24
    ppc_fallback_instruction(ctx, 0x7F1C43A6u, 0x8000B9BCu);
    return;

label_8000B9C0:
    ctx->pc = 0x8000B9C0u;
    // 8000B9C0: mttbu    r25
    ppc_fallback_instruction(ctx, 0x7F3D43A6u, 0x8000B9C0u);
    return;

label_8000B9C4:
    ctx->pc = 0x8000B9C4u;
    ctx->downcount -= 29;
    // 8000B9C4: lmw     r20, 764(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(764);
        for (u32 r = 20; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8000B9C8:
    ctx->pc = 0x8000B9C8u;
    // 8000B9C8: mtgqr0    r20
    ctx->gqr[0] = ctx->gpr[20];

label_8000B9CC:
    ctx->pc = 0x8000B9CCu;
    // 8000B9CC: mtgqr1    r21
    ctx->gqr[1] = ctx->gpr[21];

label_8000B9D0:
    ctx->pc = 0x8000B9D0u;
    // 8000B9D0: mtgqr2    r22
    ctx->gqr[2] = ctx->gpr[22];

label_8000B9D4:
    ctx->pc = 0x8000B9D4u;
    // 8000B9D4: mtgqr3    r23
    ctx->gqr[3] = ctx->gpr[23];

label_8000B9D8:
    ctx->pc = 0x8000B9D8u;
    // 8000B9D8: mtgqr4    r24
    ctx->gqr[4] = ctx->gpr[24];

label_8000B9DC:
    ctx->pc = 0x8000B9DCu;
    // 8000B9DC: mtgqr5    r25
    ctx->gqr[5] = ctx->gpr[25];

label_8000B9E0:
    ctx->pc = 0x8000B9E0u;
    // 8000B9E0: mtgqr6    r26
    ctx->gqr[6] = ctx->gpr[26];

label_8000B9E4:
    ctx->pc = 0x8000B9E4u;
    // 8000B9E4: mtgqr7    r27
    ctx->gqr[7] = ctx->gpr[27];

label_8000B9E8:
    ctx->pc = 0x8000B9E8u;
    // 8000B9E8: mthid2    r28
    ctx->hid2 = ctx->gpr[28];

label_8000B9EC:
    ctx->pc = 0x8000B9ECu;
    // 8000B9EC: mtdmau    r30
    ppc_fallback_instruction(ctx, 0x7FDAE3A6u, 0x8000B9ECu);
    return;

label_8000B9F0:
    ctx->pc = 0x8000B9F0u;
    // 8000B9F0: mtdmal    r31
    ppc_fallback_instruction(ctx, 0x7FFBE3A6u, 0x8000B9F0u);
    return;

label_8000B9F4:
    ctx->pc = 0x8000B9F4u;
    ctx->downcount -= 1;
    // 8000B9F4: b       0x8000BA10
    {
            goto label_8000BA10;
    }

label_8000B9F8:
    ctx->pc = 0x8000B9F8u;
    ctx->downcount -= 11;
    // 8000B9F8: lmw     r26, 736(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(736);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8000B9FC:
    ctx->pc = 0x8000B9FCu;
    // 8000B9FC: mtspr   944, r26
    ppc_fallback_instruction(ctx, 0x7F50EBA6u, 0x8000B9FCu);
    return;

label_8000BA00:
    ctx->pc = 0x8000BA00u;
    // 8000BA00: mtspr   951, r27
    ppc_fallback_instruction(ctx, 0x7F77EBA6u, 0x8000BA00u);
    return;

label_8000BA04:
    ctx->pc = 0x8000BA04u;
    // 8000BA04: mtspr   1014, r29
    ppc_fallback_instruction(ctx, 0x7FB6FBA6u, 0x8000BA04u);
    return;

label_8000BA08:
    ctx->pc = 0x8000BA08u;
    // 8000BA08: mtspr   1015, r30
    ppc_fallback_instruction(ctx, 0x7FD7FBA6u, 0x8000BA08u);
    return;

label_8000BA0C:
    ctx->pc = 0x8000BA0Cu;
    // 8000BA0C: mtspr   1023, r31
    ppc_fallback_instruction(ctx, 0x7FFFFBA6u, 0x8000BA0Cu);
    return;

label_8000BA10:
    ctx->pc = 0x8000BA10u;
    ctx->downcount -= 11;
    // 8000BA10: lmw     r19, 644(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(644);
        for (u32 r = 19; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8000BA14:
    ctx->pc = 0x8000BA14u;
    // 8000BA14: mtdabr    r19
    ppc_fallback_instruction(ctx, 0x7E75FBA6u, 0x8000BA14u);
    return;

label_8000BA18:
    ctx->pc = 0x8000BA18u;
    // 8000BA18: mtpmc1    r20
    ppc_fallback_instruction(ctx, 0x7E99EBA6u, 0x8000BA18u);
    return;

label_8000BA1C:
    ctx->pc = 0x8000BA1Cu;
    // 8000BA1C: mtpmc2    r21
    ppc_fallback_instruction(ctx, 0x7EBAEBA6u, 0x8000BA1Cu);
    return;

label_8000BA20:
    ctx->pc = 0x8000BA20u;
    // 8000BA20: mtpmc3    r22
    ppc_fallback_instruction(ctx, 0x7EDDEBA6u, 0x8000BA20u);
    return;

label_8000BA24:
    ctx->pc = 0x8000BA24u;
    // 8000BA24: mtpmc4    r23
    ppc_fallback_instruction(ctx, 0x7EFEEBA6u, 0x8000BA24u);
    return;

label_8000BA28:
    ctx->pc = 0x8000BA28u;
    // 8000BA28: mtsia    r24
    ppc_fallback_instruction(ctx, 0x7F1BEBA6u, 0x8000BA28u);
    return;

label_8000BA2C:
    ctx->pc = 0x8000BA2Cu;
    // 8000BA2C: mtmmcr0    r25
    ppc_fallback_instruction(ctx, 0x7F38EBA6u, 0x8000BA2Cu);
    return;

label_8000BA30:
    ctx->pc = 0x8000BA30u;
    // 8000BA30: mtmmcr1    r26
    ppc_fallback_instruction(ctx, 0x7F5CEBA6u, 0x8000BA30u);
    return;

label_8000BA34:
    ctx->pc = 0x8000BA34u;
    // 8000BA34: mtthrm1    r27
    ppc_fallback_instruction(ctx, 0x7F7CFBA6u, 0x8000BA34u);
    return;

label_8000BA38:
    ctx->pc = 0x8000BA38u;
    // 8000BA38: mtthrm2    r28
    ppc_fallback_instruction(ctx, 0x7F9DFBA6u, 0x8000BA38u);
    return;

label_8000BA3C:
    ctx->pc = 0x8000BA3Cu;
    // 8000BA3C: mtthrm3    r29
    ppc_fallback_instruction(ctx, 0x7FBEFBA6u, 0x8000BA3Cu);
    return;

label_8000BA40:
    ctx->pc = 0x8000BA40u;
    // 8000BA40: mtictc    r30
    ppc_fallback_instruction(ctx, 0x7FDBFBA6u, 0x8000BA40u);
    return;

label_8000BA44:
    ctx->pc = 0x8000BA44u;
    // 8000BA44: mtl2cr    r31
    ppc_fallback_instruction(ctx, 0x7FF9FBA6u, 0x8000BA44u);
    return;

label_8000BA48:
    ctx->pc = 0x8000BA48u;
    ctx->downcount -= 1;
    // 8000BA48: b       0x8000BA7C
    {
            goto label_8000BA7C;
    }

label_8000BA4C:
    ctx->pc = 0x8000BA4Cu;
    ctx->downcount -= 2;
    // 8000BA4C: cmpwi   r6, 0
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

label_8000BA50:
    ctx->pc = 0x8000BA50u;
    // 8000BA50: bc    12, 2, 0x8000BA5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000BA5C;
        }
    }

label_8000BA54:
    ctx->pc = 0x8000BA54u;
    ctx->downcount -= 1;
    // 8000BA54: lwz     r26, 632(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(632);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_8000BA58:
    ctx->pc = 0x8000BA58u;
    // 8000BA58: mtdec    r26
    ppc_fallback_instruction(ctx, 0x7F5603A6u, 0x8000BA58u);
    return;

label_8000BA5C:
    ctx->pc = 0x8000BA5Cu;
    ctx->downcount -= 11;
    // 8000BA5C: lmw     r25, 576(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(576);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8000BA60:
    ctx->pc = 0x8000BA60u;
    // 8000BA60: mtspr   976, r25
    ppc_fallback_instruction(ctx, 0x7F30F3A6u, 0x8000BA60u);
    return;

label_8000BA64:
    ctx->pc = 0x8000BA64u;
    // 8000BA64: mtspr   977, r26
    ppc_fallback_instruction(ctx, 0x7F51F3A6u, 0x8000BA64u);
    return;

label_8000BA68:
    ctx->pc = 0x8000BA68u;
    // 8000BA68: mtspr   978, r27
    ppc_fallback_instruction(ctx, 0x7F72F3A6u, 0x8000BA68u);
    return;

label_8000BA6C:
    ctx->pc = 0x8000BA6Cu;
    // 8000BA6C: mtspr   979, r28
    ppc_fallback_instruction(ctx, 0x7F93F3A6u, 0x8000BA6Cu);
    return;

label_8000BA70:
    ctx->pc = 0x8000BA70u;
    // 8000BA70: mtspr   980, r29
    ppc_fallback_instruction(ctx, 0x7FB4F3A6u, 0x8000BA70u);
    return;

label_8000BA74:
    ctx->pc = 0x8000BA74u;
    // 8000BA74: mtspr   981, r30
    ppc_fallback_instruction(ctx, 0x7FD5F3A6u, 0x8000BA74u);
    return;

label_8000BA78:
    ctx->pc = 0x8000BA78u;
    // 8000BA78: mtspr   982, r31
    ppc_fallback_instruction(ctx, 0x7FF6F3A6u, 0x8000BA78u);
    return;

label_8000BA7C:
    ctx->pc = 0x8000BA7Cu;
    ctx->downcount -= 38;
    // 8000BA7C: lmw     r16, 424(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(424);
        for (u32 r = 16; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8000BA80:
    ctx->pc = 0x8000BA80u;
    // 8000BA80: mtsr    0, r16
    ctx->sr[0] = ctx->gpr[16];

label_8000BA84:
    ctx->pc = 0x8000BA84u;
    // 8000BA84: mtsr    1, r17
    ctx->sr[1] = ctx->gpr[17];

label_8000BA88:
    ctx->pc = 0x8000BA88u;
    // 8000BA88: mtsr    2, r18
    ctx->sr[2] = ctx->gpr[18];

label_8000BA8C:
    ctx->pc = 0x8000BA8Cu;
    // 8000BA8C: mtsr    3, r19
    ctx->sr[3] = ctx->gpr[19];

label_8000BA90:
    ctx->pc = 0x8000BA90u;
    // 8000BA90: mtsr    4, r20
    ctx->sr[4] = ctx->gpr[20];

label_8000BA94:
    ctx->pc = 0x8000BA94u;
    // 8000BA94: mtsr    5, r21
    ctx->sr[5] = ctx->gpr[21];

label_8000BA98:
    ctx->pc = 0x8000BA98u;
    // 8000BA98: mtsr    6, r22
    ctx->sr[6] = ctx->gpr[22];

label_8000BA9C:
    ctx->pc = 0x8000BA9Cu;
    // 8000BA9C: mtsr    7, r23
    ctx->sr[7] = ctx->gpr[23];

label_8000BAA0:
    ctx->pc = 0x8000BAA0u;
    // 8000BAA0: mtsr    8, r24
    ctx->sr[8] = ctx->gpr[24];

label_8000BAA4:
    ctx->pc = 0x8000BAA4u;
    // 8000BAA4: mtsr    9, r25
    ctx->sr[9] = ctx->gpr[25];

label_8000BAA8:
    ctx->pc = 0x8000BAA8u;
    // 8000BAA8: mtsr    10, r26
    ctx->sr[10] = ctx->gpr[26];

label_8000BAAC:
    ctx->pc = 0x8000BAACu;
    // 8000BAAC: mtsr    11, r27
    ctx->sr[11] = ctx->gpr[27];

label_8000BAB0:
    ctx->pc = 0x8000BAB0u;
    // 8000BAB0: mtsr    12, r28
    ctx->sr[12] = ctx->gpr[28];

label_8000BAB4:
    ctx->pc = 0x8000BAB4u;
    // 8000BAB4: mtsr    13, r29
    ctx->sr[13] = ctx->gpr[29];

label_8000BAB8:
    ctx->pc = 0x8000BAB8u;
    // 8000BAB8: mtsr    14, r30
    ctx->sr[14] = ctx->gpr[30];

label_8000BABC:
    ctx->pc = 0x8000BABCu;
    // 8000BABC: mtsr    15, r31
    ctx->sr[15] = ctx->gpr[31];

label_8000BAC0:
    ctx->pc = 0x8000BAC0u;
    // 8000BAC0: lmw     r12, 496(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(496);
        for (u32 r = 12; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8000BAC4:
    ctx->pc = 0x8000BAC4u;
    // 8000BAC4: mthid0    r12
    ppc_fallback_instruction(ctx, 0x7D90FBA6u, 0x8000BAC4u);
    return;

label_8000BAC8:
    ctx->pc = 0x8000BAC8u;
    // 8000BAC8: mthid1    r13
    ppc_fallback_instruction(ctx, 0x7DB1FBA6u, 0x8000BAC8u);
    return;

label_8000BACC:
    ctx->pc = 0x8000BACCu;
    ctx->downcount -= 2;
    // 8000BACC: mtsrr1    r14
    ctx->srr1 = ctx->gpr[14];

label_8000BAD0:
    ctx->pc = 0x8000BAD0u;
    // 8000BAD0: mtspr   287, r15
    ppc_fallback_instruction(ctx, 0x7DFF43A6u, 0x8000BAD0u);
    return;

label_8000BAD4:
    ctx->pc = 0x8000BAD4u;
    // 8000BAD4: mtibat0u    r16
    ppc_fallback_instruction(ctx, 0x7E1083A6u, 0x8000BAD4u);
    return;

label_8000BAD8:
    ctx->pc = 0x8000BAD8u;
    // 8000BAD8: mtibat0l    r17
    ppc_fallback_instruction(ctx, 0x7E3183A6u, 0x8000BAD8u);
    return;

label_8000BADC:
    ctx->pc = 0x8000BADCu;
    // 8000BADC: mtibat1u    r18
    ppc_fallback_instruction(ctx, 0x7E5283A6u, 0x8000BADCu);
    return;

label_8000BAE0:
    ctx->pc = 0x8000BAE0u;
    // 8000BAE0: mtibat1l    r19
    ppc_fallback_instruction(ctx, 0x7E7383A6u, 0x8000BAE0u);
    return;

label_8000BAE4:
    ctx->pc = 0x8000BAE4u;
    // 8000BAE4: mtibat2u    r20
    ppc_fallback_instruction(ctx, 0x7E9483A6u, 0x8000BAE4u);
    return;

label_8000BAE8:
    ctx->pc = 0x8000BAE8u;
    // 8000BAE8: mtibat2l    r21
    ppc_fallback_instruction(ctx, 0x7EB583A6u, 0x8000BAE8u);
    return;

label_8000BAEC:
    ctx->pc = 0x8000BAECu;
    // 8000BAEC: mtibat3u    r22
    ppc_fallback_instruction(ctx, 0x7ED683A6u, 0x8000BAECu);
    return;

label_8000BAF0:
    ctx->pc = 0x8000BAF0u;
    // 8000BAF0: mtibat3l    r23
    ppc_fallback_instruction(ctx, 0x7EF783A6u, 0x8000BAF0u);
    return;

label_8000BAF4:
    ctx->pc = 0x8000BAF4u;
    // 8000BAF4: mtdbat0u    r24
    ppc_fallback_instruction(ctx, 0x7F1883A6u, 0x8000BAF4u);
    return;

label_8000BAF8:
    ctx->pc = 0x8000BAF8u;
    // 8000BAF8: mtdbat0l    r25
    ppc_fallback_instruction(ctx, 0x7F3983A6u, 0x8000BAF8u);
    return;

label_8000BAFC:
    ctx->pc = 0x8000BAFCu;
    // 8000BAFC: mtdbat1u    r26
    ppc_fallback_instruction(ctx, 0x7F5A83A6u, 0x8000BAFCu);
    return;

label_8000BB00:
    ctx->pc = 0x8000BB00u;
    // 8000BB00: mtdbat1l    r27
    ppc_fallback_instruction(ctx, 0x7F7B83A6u, 0x8000BB00u);
    return;

label_8000BB04:
    ctx->pc = 0x8000BB04u;
    // 8000BB04: mtdbat2u    r28
    ppc_fallback_instruction(ctx, 0x7F9C83A6u, 0x8000BB04u);
    return;

label_8000BB08:
    ctx->pc = 0x8000BB08u;
    // 8000BB08: mtdbat2l    r29
    ppc_fallback_instruction(ctx, 0x7FBD83A6u, 0x8000BB08u);
    return;

label_8000BB0C:
    ctx->pc = 0x8000BB0Cu;
    // 8000BB0C: mtdbat3u    r30
    ppc_fallback_instruction(ctx, 0x7FDE83A6u, 0x8000BB0Cu);
    return;

label_8000BB10:
    ctx->pc = 0x8000BB10u;
    // 8000BB10: mtdbat3l    r31
    ppc_fallback_instruction(ctx, 0x7FFF83A6u, 0x8000BB10u);
    return;

label_8000BB14:
    ctx->pc = 0x8000BB14u;
    ctx->downcount -= 11;
    // 8000BB14: lmw     r22, 604(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(604);
        for (u32 r = 22; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8000BB18:
    ctx->pc = 0x8000BB18u;
    // 8000BB18: mtsdr1    r22
    ppc_fallback_instruction(ctx, 0x7ED903A6u, 0x8000BB18u);
    return;

label_8000BB1C:
    ctx->pc = 0x8000BB1Cu;
    // 8000BB1C: mtdar    r23
    ppc_fallback_instruction(ctx, 0x7EF303A6u, 0x8000BB1Cu);
    return;

label_8000BB20:
    ctx->pc = 0x8000BB20u;
    // 8000BB20: mtdsisr    r24
    ppc_fallback_instruction(ctx, 0x7F1203A6u, 0x8000BB20u);
    return;

label_8000BB24:
    ctx->pc = 0x8000BB24u;
    // 8000BB24: mtsprg0    r25
    ppc_fallback_instruction(ctx, 0x7F3043A6u, 0x8000BB24u);
    return;

label_8000BB28:
    ctx->pc = 0x8000BB28u;
    // 8000BB28: mtsprg1    r26
    ppc_fallback_instruction(ctx, 0x7F5143A6u, 0x8000BB28u);
    return;

label_8000BB2C:
    ctx->pc = 0x8000BB2Cu;
    // 8000BB2C: mtsprg2    r27
    ppc_fallback_instruction(ctx, 0x7F7243A6u, 0x8000BB2Cu);
    return;

label_8000BB30:
    ctx->pc = 0x8000BB30u;
    // 8000BB30: mtsprg3    r28
    ppc_fallback_instruction(ctx, 0x7F9343A6u, 0x8000BB30u);
    return;

label_8000BB34:
    ctx->pc = 0x8000BB34u;
    // 8000BB34: mtiabr    r30
    ppc_fallback_instruction(ctx, 0x7FD2FBA6u, 0x8000BB34u);
    return;

label_8000BB38:
    ctx->pc = 0x8000BB38u;
    ctx->downcount -= 3;
    // 8000BB38: mtear    r31
    ctx->ear = ctx->gpr[31];

label_8000BB3C:
    ctx->pc = 0x8000BB3Cu;
    // 8000BB3C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000BB40:
    ctx->pc = 0x8000BB40u;
    ctx->downcount -= 31;
    // 8000BB40: addi    r1, r1, -4
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(-4);

label_8000BB44:
    ctx->pc = 0x8000BB44u;
    // 8000BB44: stw     r3, 0(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8000BB48:
    ctx->pc = 0x8000BB48u;
    // 8000BB48: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8000BB4C:
    ctx->pc = 0x8000BB4Cu;
    // 8000BB4C: ori     r3, r3, 0xAE68
    ctx->gpr[3] = ctx->gpr[3] | 0xAE68u;

label_8000BB50:
    ctx->pc = 0x8000BB50u;
    // 8000BB50: stmw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        for (u32 r = 0; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8000BB54:
    ctx->pc = 0x8000BB54u;
    // 8000BB54: lwz     r4, 0(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000BB58:
    ctx->pc = 0x8000BB58u;
    // 8000BB58: addi    r1, r1, 4
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(4);

label_8000BB5C:
    ctx->pc = 0x8000BB5Cu;
    // 8000BB5C: stw     r1, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
    }

label_8000BB60:
    ctx->pc = 0x8000BB60u;
    // 8000BB60: stw     r4, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000BB64:
    ctx->pc = 0x8000BB64u;
    // 8000BB64: mflr    r4
    ctx->gpr[4] = ctx->lr;

label_8000BB68:
    ctx->pc = 0x8000BB68u;
    // 8000BB68: stw     r4, 132(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000BB6C:
    ctx->pc = 0x8000BB6Cu;
    // 8000BB6C: stw     r4, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000BB70:
    ctx->pc = 0x8000BB70u;
    // 8000BB70: mfcr    r4
    ctx->gpr[4] = ctx->cr;

label_8000BB74:
    ctx->pc = 0x8000BB74u;
    // 8000BB74: stw     r4, 136(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000BB78:
    ctx->pc = 0x8000BB78u;
    // 8000BB78: mfmsr   r4
    ctx->gpr[4] = ctx->msr;

label_8000BB7C:
    ctx->pc = 0x8000BB7Cu;
    // 8000BB7C: ori     r3, r4, 0x8000
    ctx->gpr[3] = ctx->gpr[4] | 0x8000u;

label_8000BB80:
    ctx->pc = 0x8000BB80u;
    // 8000BB80: xori    r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ 0x8000u;

label_8000BB84:
    ctx->pc = 0x8000BB84u;
    // 8000BB84: mtmsr   r3
    ctx->msr = ctx->gpr[3];

label_8000BB88:
    ctx->pc = 0x8000BB88u;
    // 8000BB88: mtsrr1    r4
    ctx->srr1 = ctx->gpr[4];

label_8000BB8C:
    ctx->pc = 0x8000BB8Cu;
    // 8000BB8C: bl      0x8000B7D0
    {
            ctx->lr = 0x8000BB90u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000B7D0u;
                return;
            }
            goto label_8000B7D0;
    }

label_8000BB90:
    ctx->pc = 0x8000BB90u;
    ctx->downcount -= 14;
    // 8000BB90: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8000BB94:
    ctx->pc = 0x8000BB94u;
    // 8000BB94: ori     r3, r3, 0xAE68
    ctx->gpr[3] = ctx->gpr[3] | 0xAE68u;

label_8000BB98:
    ctx->pc = 0x8000BB98u;
    // 8000BB98: lmw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        for (u32 r = 0; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8000BB9C:
    ctx->pc = 0x8000BB9Cu;
    // 8000BB9C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8000BBA0:
    ctx->pc = 0x8000BBA0u;
    // 8000BBA0: mtiabr    r0
    ppc_fallback_instruction(ctx, 0x7C12FBA6u, 0x8000BBA0u);
    return;

label_8000BBA4:
    ctx->pc = 0x8000BBA4u;
    // 8000BBA4: mtdabr    r0
    ppc_fallback_instruction(ctx, 0x7C15FBA6u, 0x8000BBA4u);
    return;

label_8000BBA8:
    ctx->pc = 0x8000BBA8u;
    ctx->downcount -= 4;
    // 8000BBA8: lis     r1, -32727
    ctx->gpr[1] = ((u32)(s32)(-32727) << 16);

label_8000BBAC:
    ctx->pc = 0x8000BBACu;
    // 8000BBAC: ori     r1, r1, 0x0B38
    ctx->gpr[1] = ctx->gpr[1] | 0x0B38u;

label_8000BBB0:
    ctx->pc = 0x8000BBB0u;
    // 8000BBB0: or   r3, r5, r5
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8000BBB4:
    ctx->pc = 0x8000BBB4u;
    // 8000BBB4: bl      0x8000C168
    {
            ctx->lr = 0x8000BBB8u;
            goto label_8000C168;
    }

label_8000BBB8:
    ctx->pc = 0x8000BBB8u;
    ctx->downcount -= 2;
    // 8000BBB8: cmpwi   r3, 1
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

label_8000BBBC:
    ctx->pc = 0x8000BBBCu;
    // 8000BBBC: bc    4, 2, 0x8000BBD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000BBD0;
        }
    }

label_8000BBC0:
    ctx->pc = 0x8000BBC0u;
    ctx->downcount -= 15;
    // 8000BBC0: lwz     r4, 132(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(132);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000BBC4:
    ctx->pc = 0x8000BBC4u;
    // 8000BBC4: mtlr    r4
    ctx->lr = ctx->gpr[4];

label_8000BBC8:
    ctx->pc = 0x8000BBC8u;
    // 8000BBC8: lmw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        for (u32 r = 0; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8000BBCC:
    ctx->pc = 0x8000BBCCu;
    // 8000BBCC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000BBD0:
    ctx->pc = 0x8000BBD0u;
    ctx->downcount -= 1;
    // 8000BBD0: b       0x8000BE5C
    {
            goto label_8000BE5C;
    }

label_8000BBD4:
    ctx->pc = 0x8000BBD4u;
    ctx->downcount -= 1;
    // 8000BBD4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000BBD8:
    ctx->pc = 0x8000BBD8u;
    ctx->downcount -= 30;
    // 8000BBD8: addi    r1, r1, -4
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(-4);

label_8000BBDC:
    ctx->pc = 0x8000BBDCu;
    // 8000BBDC: stw     r3, 0(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8000BBE0:
    ctx->pc = 0x8000BBE0u;
    // 8000BBE0: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8000BBE4:
    ctx->pc = 0x8000BBE4u;
    // 8000BBE4: ori     r3, r3, 0xAE68
    ctx->gpr[3] = ctx->gpr[3] | 0xAE68u;

label_8000BBE8:
    ctx->pc = 0x8000BBE8u;
    // 8000BBE8: stmw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        for (u32 r = 0; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8000BBEC:
    ctx->pc = 0x8000BBECu;
    // 8000BBEC: lwz     r4, 0(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000BBF0:
    ctx->pc = 0x8000BBF0u;
    // 8000BBF0: addi    r1, r1, 4
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(4);

label_8000BBF4:
    ctx->pc = 0x8000BBF4u;
    // 8000BBF4: stw     r1, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
    }

label_8000BBF8:
    ctx->pc = 0x8000BBF8u;
    // 8000BBF8: stw     r4, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000BBFC:
    ctx->pc = 0x8000BBFCu;
    // 8000BBFC: mflr    r4
    ctx->gpr[4] = ctx->lr;

label_8000BC00:
    ctx->pc = 0x8000BC00u;
    // 8000BC00: stw     r4, 132(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000BC04:
    ctx->pc = 0x8000BC04u;
    // 8000BC04: stw     r4, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000BC08:
    ctx->pc = 0x8000BC08u;
    // 8000BC08: mfcr    r4
    ctx->gpr[4] = ctx->cr;

label_8000BC0C:
    ctx->pc = 0x8000BC0Cu;
    // 8000BC0C: stw     r4, 136(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000BC10:
    ctx->pc = 0x8000BC10u;
    // 8000BC10: mfmsr   r4
    ctx->gpr[4] = ctx->msr;

label_8000BC14:
    ctx->pc = 0x8000BC14u;
    // 8000BC14: ori     r3, r4, 0x8000
    ctx->gpr[3] = ctx->gpr[4] | 0x8000u;

label_8000BC18:
    ctx->pc = 0x8000BC18u;
    // 8000BC18: mtmsr   r3
    ctx->msr = ctx->gpr[3];

label_8000BC1C:
    ctx->pc = 0x8000BC1Cu;
    // 8000BC1C: mtsrr1    r4
    ctx->srr1 = ctx->gpr[4];

label_8000BC20:
    ctx->pc = 0x8000BC20u;
    // 8000BC20: bl      0x8000B7D0
    {
            ctx->lr = 0x8000BC24u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000B7D0u;
                return;
            }
            goto label_8000B7D0;
    }

label_8000BC24:
    ctx->pc = 0x8000BC24u;
    ctx->downcount -= 14;
    // 8000BC24: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8000BC28:
    ctx->pc = 0x8000BC28u;
    // 8000BC28: ori     r3, r3, 0xAE68
    ctx->gpr[3] = ctx->gpr[3] | 0xAE68u;

label_8000BC2C:
    ctx->pc = 0x8000BC2Cu;
    // 8000BC2C: lmw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        for (u32 r = 0; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8000BC30:
    ctx->pc = 0x8000BC30u;
    // 8000BC30: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8000BC34:
    ctx->pc = 0x8000BC34u;
    // 8000BC34: mtiabr    r0
    ppc_fallback_instruction(ctx, 0x7C12FBA6u, 0x8000BC34u);
    return;

label_8000BC38:
    ctx->pc = 0x8000BC38u;
    // 8000BC38: mtdabr    r0
    ppc_fallback_instruction(ctx, 0x7C15FBA6u, 0x8000BC38u);
    return;

label_8000BC3C:
    ctx->pc = 0x8000BC3Cu;
    ctx->downcount -= 4;
    // 8000BC3C: lis     r1, -32727
    ctx->gpr[1] = ((u32)(s32)(-32727) << 16);

label_8000BC40:
    ctx->pc = 0x8000BC40u;
    // 8000BC40: ori     r1, r1, 0x0B38
    ctx->gpr[1] = ctx->gpr[1] | 0x0B38u;

label_8000BC44:
    ctx->pc = 0x8000BC44u;
    // 8000BC44: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_8000BC48:
    ctx->pc = 0x8000BC48u;
    // 8000BC48: bl      0x8000C168
    {
            ctx->lr = 0x8000BC4Cu;
            goto label_8000C168;
    }

label_8000BC4C:
    ctx->pc = 0x8000BC4Cu;
    ctx->downcount -= 2;
    // 8000BC4C: cmpwi   r3, 1
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

label_8000BC50:
    ctx->pc = 0x8000BC50u;
    // 8000BC50: bc    4, 2, 0x8000BC64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000BC64;
        }
    }

label_8000BC54:
    ctx->pc = 0x8000BC54u;
    ctx->downcount -= 15;
    // 8000BC54: lwz     r4, 132(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(132);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000BC58:
    ctx->pc = 0x8000BC58u;
    // 8000BC58: mtlr    r4
    ctx->lr = ctx->gpr[4];

label_8000BC5C:
    ctx->pc = 0x8000BC5Cu;
    // 8000BC5C: lmw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        for (u32 r = 0; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8000BC60:
    ctx->pc = 0x8000BC60u;
    // 8000BC60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000BC64:
    ctx->pc = 0x8000BC64u;
    ctx->downcount -= 1;
    // 8000BC64: b       0x8000BE5C
    {
            goto label_8000BE5C;
    }

label_8000BC68:
    ctx->pc = 0x8000BC68u;
    ctx->downcount -= 1;
    // 8000BC68: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000BC6C:
    ctx->pc = 0x8000BC6Cu;
    ctx->downcount -= 8;
    // 8000BC6C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000BC70:
    ctx->pc = 0x8000BC70u;
    // 8000BC70: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000BC74:
    ctx->pc = 0x8000BC74u;
    // 8000BC74: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000BC78:
    ctx->pc = 0x8000BC78u;
    // 8000BC78: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000BC7C:
    ctx->pc = 0x8000BC7Cu;
    // 8000BC7C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8000BC80:
    ctx->pc = 0x8000BC80u;
    // 8000BC80: addi    r3, r3, -21052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-21052);

label_8000BC84:
    ctx->pc = 0x8000BC84u;
    // 8000BC84: stw     r0, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000BC88:
    ctx->pc = 0x8000BC88u;
    // 8000BC88: bl      0x80009D64
    {
            ctx->lr = 0x8000BC8Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80009D64u;
                return;
            }
            goto label_80009D64;
    }

label_8000BC8C:
    ctx->pc = 0x8000BC8Cu;
    ctx->downcount -= 12;
    // 8000BC8C: lis     r5, -32737
    ctx->gpr[5] = ((u32)(s32)(-32737) << 16);

label_8000BC90:
    ctx->pc = 0x8000BC90u;
    // 8000BC90: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_8000BC94:
    ctx->pc = 0x8000BC94u;
    // 8000BC94: addi    r5, r5, -21052
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-21052);

label_8000BC98:
    ctx->pc = 0x8000BC98u;
    // 8000BC98: lis     r0, -8192
    ctx->gpr[0] = ((u32)(s32)(-8192) << 16);

label_8000BC9C:
    ctx->pc = 0x8000BC9Cu;
    // 8000BC9C: stw     r3, 140(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8000BCA0:
    ctx->pc = 0x8000BCA0u;
    // 8000BCA0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000BCA4:
    ctx->pc = 0x8000BCA4u;
    // 8000BCA4: stw     r0, -19648(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000BCA8:
    ctx->pc = 0x8000BCA8u;
    // 8000BCA8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000BCAC:
    ctx->pc = 0x8000BCACu;
    // 8000BCAC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000BCB0:
    ctx->pc = 0x8000BCB0u;
    // 8000BCB0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000BCB4:
    ctx->pc = 0x8000BCB4u;
    // 8000BCB4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000BCB8:
    ctx->pc = 0x8000BCB8u;
    ctx->downcount -= 19;
    // 8000BCB8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000BCBC:
    ctx->pc = 0x8000BCBCu;
    // 8000BCBC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000BCC0:
    ctx->pc = 0x8000BCC0u;
    // 8000BCC0: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000BCC4:
    ctx->pc = 0x8000BCC4u;
    // 8000BCC4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000BCC8:
    ctx->pc = 0x8000BCC8u;
    // 8000BCC8: addi    r3, r3, -19648
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-19648);

label_8000BCCC:
    ctx->pc = 0x8000BCCCu;
    // 8000BCCC: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8000BCD0:
    ctx->pc = 0x8000BCD0u;
    // 8000BCD0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000BCD4:
    ctx->pc = 0x8000BCD4u;
    // 8000BCD4: cmplwi  r3, 0x0044
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0044u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000BCD8:
    ctx->pc = 0x8000BCD8u;
    // 8000BCD8: bc    12, 1, 0x8000BD04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000BD04;
        }
    }

label_8000BCDC:
    ctx->pc = 0x8000BCDCu;
    ctx->downcount -= 3;
    // 8000BCDC: addi    r0, r3, 16384
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16384);

label_8000BCE0:
    ctx->pc = 0x8000BCE0u;
    // 8000BCE0: cmplwi  r0, 0x0044
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0044u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000BCE4:
    ctx->pc = 0x8000BCE4u;
    // 8000BCE4: bc    4, 1, 0x8000BD04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000BD04;
        }
    }

label_8000BCE8:
    ctx->pc = 0x8000BCE8u;
    ctx->downcount -= 5;
    // 8000BCE8: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000BCEC:
    ctx->pc = 0x8000BCECu;
    // 8000BCEC: addi    r3, r3, -20888
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20888);

label_8000BCF0:
    ctx->pc = 0x8000BCF0u;
    // 8000BCF0: lwz     r0, 568(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(568);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000BCF4:
    ctx->pc = 0x8000BCF4u;
    // 8000BCF4: rlwinm. r0, r0, 0, 30, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000003u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8000BCF8:
    ctx->pc = 0x8000BCF8u;
    // 8000BCF8: bc    12, 2, 0x8000BD04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000BD04;
        }
    }

label_8000BCFC:
    ctx->pc = 0x8000BCFCu;
    ctx->downcount -= 2;
    // 8000BCFC: li      r5, 68
    ctx->gpr[5] = (u32)(s32)(68);

label_8000BD00:
    ctx->pc = 0x8000BD00u;
    // 8000BD00: b       0x8000BD0C
    {
            goto label_8000BD0C;
    }

label_8000BD04:
    ctx->pc = 0x8000BD04u;
    ctx->downcount -= 2;
    // 8000BD04: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_8000BD08:
    ctx->pc = 0x8000BD08u;
    // 8000BD08: addi    r5, r3, 68
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(68);

label_8000BD0C:
    ctx->pc = 0x8000BD0Cu;
    ctx->downcount -= 6;
    // 8000BD0C: lis     r4, -32738
    ctx->gpr[4] = ((u32)(s32)(-32738) << 16);

label_8000BD10:
    ctx->pc = 0x8000BD10u;
    // 8000BD10: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000BD14:
    ctx->pc = 0x8000BD14u;
    // 8000BD14: lwz     r29, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8000BD18:
    ctx->pc = 0x8000BD18u;
    // 8000BD18: addi    r31, r4, -5864
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(-5864);

label_8000BD1C:
    ctx->pc = 0x8000BD1Cu;
    // 8000BD1C: addi    r28, r3, -20888
    ctx->gpr[28] = ctx->gpr[3] + (u32)(s32)(-20888);

label_8000BD20:
    ctx->pc = 0x8000BD20u;
    // 8000BD20: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_8000BD24:
    ctx->downcount -= 4;
    // 8000BD24: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8000BD28:
    // 8000BD28: slw   r0, r0, r30
    {
        u32 sh = ctx->gpr[30] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_8000BD2C:
    // 8000BD2C: and.   r0, r29, r0
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

label_8000BD30:
    // 8000BD30: bc    12, 2, 0x8000BDC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000BDC0;
        }
    }

label_8000BD34:
    ctx->downcount -= 2;
    // 8000BD34: cmpwi   r30, 4
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

label_8000BD38:
    // 8000BD38: bc    12, 2, 0x8000BDC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000BDC0;
        }
    }

label_8000BD3C:
    ctx->downcount -= 6;
    // 8000BD3C: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000BD40:
    ctx->pc = 0x8000BD40u;
    // 8000BD40: lwz     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8000BD44:
    // 8000BD44: addi    r3, r3, -19648
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-19648);

label_8000BD48:
    ctx->pc = 0x8000BD48u;
    // 8000BD48: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000BD4C:
    // 8000BD4C: cmplw   r6, r3
    {
        u32 val_a = (u32)(ctx->gpr[6]);
        u32 val_b = (u32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000BD50:
    // 8000BD50: bc    12, 0, 0x8000BD74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000BD74;
        }
    }

label_8000BD54:
    ctx->downcount -= 3;
    // 8000BD54: addi    r0, r3, 16384
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16384);

label_8000BD58:
    // 8000BD58: cmplw   r6, r0
    {
        u32 val_a = (u32)(ctx->gpr[6]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000BD5C:
    // 8000BD5C: bc    4, 0, 0x8000BD74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000BD74;
        }
    }

label_8000BD60:
    ctx->pc = 0x8000BD60u;
    ctx->downcount -= 3;
    // 8000BD60: lwz     r0, 568(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(568);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000BD64:
    // 8000BD64: rlwinm. r0, r0, 0, 30, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000003u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8000BD68:
    // 8000BD68: bc    12, 2, 0x8000BD74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000BD74;
        }
    }

label_8000BD6C:
    ctx->downcount -= 2;
    // 8000BD6C: or   r27, r6, r6
    {
        ctx->gpr[27] = ctx->gpr[6] | ctx->gpr[6];
    }

label_8000BD70:
    // 8000BD70: b       0x8000BD9C
    {
            goto label_8000BD9C;
    }

label_8000BD74:
    ctx->downcount -= 3;
    // 8000BD74: lis     r0, 32256
    ctx->gpr[0] = ((u32)(s32)(32256) << 16);

label_8000BD78:
    // 8000BD78: cmplw   r6, r0
    {
        u32 val_a = (u32)(ctx->gpr[6]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000BD7C:
    // 8000BD7C: bc    12, 0, 0x8000BD94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000BD94;
        }
    }

label_8000BD80:
    ctx->downcount -= 3;
    // 8000BD80: lis     r0, -32768
    ctx->gpr[0] = ((u32)(s32)(-32768) << 16);

label_8000BD84:
    // 8000BD84: cmplw   r6, r0
    {
        u32 val_a = (u32)(ctx->gpr[6]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000BD88:
    // 8000BD88: bc    12, 1, 0x8000BD94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000BD94;
        }
    }

label_8000BD8C:
    ctx->downcount -= 2;
    // 8000BD8C: or   r27, r6, r6
    {
        ctx->gpr[27] = ctx->gpr[6] | ctx->gpr[6];
    }

label_8000BD90:
    // 8000BD90: b       0x8000BD9C
    {
            goto label_8000BD9C;
    }

label_8000BD94:
    ctx->downcount -= 2;
    // 8000BD94: rlwinm r0, r6, 0, 2, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x3FFFFFFFu;
    }

label_8000BD98:
    // 8000BD98: oris    r27, r0, 0x8000
    ctx->gpr[27] = ctx->gpr[0] | (0x8000u << 16);

label_8000BD9C:
    ctx->downcount -= 6;
    // 8000BD9C: lis     r4, -32768
    ctx->gpr[4] = ((u32)(s32)(-32768) << 16);

label_8000BDA0:
    // 8000BDA0: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8000BDA4:
    // 8000BDA4: addi    r0, r4, 12628
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(12628);

label_8000BDA8:
    // 8000BDA8: li      r5, 256
    ctx->gpr[5] = (u32)(s32)(256);

label_8000BDAC:
    // 8000BDAC: add   r4, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8000BDB0:
    // 8000BDB0: bl      0x80003130
    {
            ctx->lr = 0x8000BDB4u;
            ctx->pc = 0x80003130u;
            return;
    }

label_8000BDB4:
    ctx->downcount -= 3;
    // 8000BDB4: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8000BDB8:
    // 8000BDB8: li      r4, 256
    ctx->gpr[4] = (u32)(s32)(256);

label_8000BDBC:
    // 8000BDBC: bl      0x80009C74
    {
            ctx->lr = 0x8000BDC0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80009C74u;
                return;
            }
            goto label_80009C74;
    }

label_8000BDC0:
    ctx->downcount -= 4;
    // 8000BDC0: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_8000BDC4:
    // 8000BDC4: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_8000BDC8:
    // 8000BDC8: cmpwi   r30, 14
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(14);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000BDCC:
    // 8000BDCC: bc    4, 1, 0x8000BD24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000BD24u;
                return;
            }
            goto label_8000BD24;
        }
    }

label_8000BDD0:
    ctx->pc = 0x8000BDD0u;
    ctx->downcount -= 16;
    // 8000BDD0: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8000BDD4:
    ctx->pc = 0x8000BDD4u;
    // 8000BDD4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000BDD8:
    ctx->pc = 0x8000BDD8u;
    // 8000BDD8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000BDDC:
    ctx->pc = 0x8000BDDCu;
    // 8000BDDC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8000BDE0:
    ctx->pc = 0x8000BDE0u;
    // 8000BDE0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000BDE4:
    ctx->pc = 0x8000BDE4u;
    ctx->downcount -= 5;
    // 8000BDE4: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_8000BDE8:
    ctx->pc = 0x8000BDE8u;
    // 8000BDE8: addi    r4, r4, -19648
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-19648);

label_8000BDEC:
    ctx->pc = 0x8000BDECu;
    // 8000BDEC: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000BDF0:
    ctx->pc = 0x8000BDF0u;
    // 8000BDF0: cmplw   r3, r4
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(ctx->gpr[4]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000BDF4:
    ctx->pc = 0x8000BDF4u;
    // 8000BDF4: bc    12, 0, 0x8000BE18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000BE18;
        }
    }

label_8000BDF8:
    ctx->pc = 0x8000BDF8u;
    ctx->downcount -= 3;
    // 8000BDF8: addi    r0, r4, 16384
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(16384);

label_8000BDFC:
    ctx->pc = 0x8000BDFCu;
    // 8000BDFC: cmplw   r3, r0
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

label_8000BE00:
    ctx->pc = 0x8000BE00u;
    // 8000BE00: bc    4, 0, 0x8000BE18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000BE18;
        }
    }

label_8000BE04:
    ctx->pc = 0x8000BE04u;
    ctx->downcount -= 5;
    // 8000BE04: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_8000BE08:
    ctx->pc = 0x8000BE08u;
    // 8000BE08: addi    r4, r4, -20888
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-20888);

label_8000BE0C:
    ctx->pc = 0x8000BE0Cu;
    // 8000BE0C: lwz     r0, 568(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(568);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000BE10:
    ctx->pc = 0x8000BE10u;
    // 8000BE10: rlwinm. r0, r0, 0, 30, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000003u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8000BE14:
    ctx->pc = 0x8000BE14u;
    // 8000BE14: bclr  4, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000BE18:
    ctx->pc = 0x8000BE18u;
    ctx->downcount -= 3;
    // 8000BE18: lis     r0, 32256
    ctx->gpr[0] = ((u32)(s32)(32256) << 16);

label_8000BE1C:
    ctx->pc = 0x8000BE1Cu;
    // 8000BE1C: cmplw   r3, r0
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

label_8000BE20:
    ctx->pc = 0x8000BE20u;
    // 8000BE20: bc    12, 0, 0x8000BE30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000BE30;
        }
    }

label_8000BE24:
    ctx->pc = 0x8000BE24u;
    ctx->downcount -= 3;
    // 8000BE24: lis     r0, -32768
    ctx->gpr[0] = ((u32)(s32)(-32768) << 16);

label_8000BE28:
    ctx->pc = 0x8000BE28u;
    // 8000BE28: cmplw   r3, r0
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

label_8000BE2C:
    ctx->pc = 0x8000BE2Cu;
    // 8000BE2C: bclr  4, 1
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000BE30:
    ctx->pc = 0x8000BE30u;
    ctx->downcount -= 3;
    // 8000BE30: rlwinm r0, r3, 0, 2, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x3FFFFFFFu;
    }

label_8000BE34:
    ctx->pc = 0x8000BE34u;
    // 8000BE34: oris    r3, r0, 0x8000
    ctx->gpr[3] = ctx->gpr[0] | (0x8000u << 16);

label_8000BE38:
    ctx->pc = 0x8000BE38u;
    // 8000BE38: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000BE3C:
    ctx->pc = 0x8000BE3Cu;
    ctx->downcount -= 4;
    // 8000BE3C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000BE40:
    ctx->pc = 0x8000BE40u;
    // 8000BE40: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000BE44:
    ctx->pc = 0x8000BE44u;
    // 8000BE44: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000BE48:
    ctx->pc = 0x8000BE48u;
    // 8000BE48: bl      0x8000C0D0
    {
            ctx->lr = 0x8000BE4Cu;
            goto label_8000C0D0;
    }

label_8000BE4C:
    ctx->pc = 0x8000BE4Cu;
    ctx->downcount -= 5;
    // 8000BE4C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000BE50:
    ctx->pc = 0x8000BE50u;
    // 8000BE50: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000BE54:
    ctx->pc = 0x8000BE54u;
    // 8000BE54: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000BE58:
    ctx->pc = 0x8000BE58u;
    // 8000BE58: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000BE5C:
    ctx->pc = 0x8000BE5Cu;
    ctx->downcount -= 8;
    // 8000BE5C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000BE60:
    ctx->pc = 0x8000BE60u;
    // 8000BE60: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000BE64:
    ctx->pc = 0x8000BE64u;
    // 8000BE64: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8000BE68:
    ctx->pc = 0x8000BE68u;
    // 8000BE68: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8000BE6C:
    ctx->pc = 0x8000BE6Cu;
    // 8000BE6C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000BE70:
    ctx->pc = 0x8000BE70u;
    // 8000BE70: addi    r4, r4, 10472
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10472);

label_8000BE74:
    ctx->pc = 0x8000BE74u;
    // 8000BE74: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8000BE78:
    ctx->pc = 0x8000BE78u;
    // 8000BE78: bl      0x8000CF98
    {
            ctx->lr = 0x8000BE7Cu;
            goto label_8000CF98;
    }

label_8000BE7C:
    ctx->pc = 0x8000BE7Cu;
    ctx->downcount -= 1;
    // 8000BE7C: bl      0x80007638
    {
            ctx->lr = 0x8000BE80u;
            ctx->pc = 0x80007638u;
            return;
    }

label_8000BE80:
    ctx->pc = 0x8000BE80u;
    ctx->downcount -= 4;
    // 8000BE80: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_8000BE84:
    ctx->pc = 0x8000BE84u;
    // 8000BE84: cmpwi   r3, 0
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

label_8000BE88:
    ctx->pc = 0x8000BE88u;
    // 8000BE88: stw     r3, -19640(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19640);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8000BE8C:
    ctx->pc = 0x8000BE8Cu;
    // 8000BE8C: bc    4, 2, 0x8000BE98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000BE98;
        }
    }

label_8000BE90:
    ctx->pc = 0x8000BE90u;
    ctx->downcount -= 1;
    // 8000BE90: bl      0x800075EC
    {
            ctx->lr = 0x8000BE94u;
            ctx->pc = 0x800075ECu;
            return;
    }

label_8000BE94:
    ctx->pc = 0x8000BE94u;
    ctx->downcount -= 1;
    // 8000BE94: bl      0x800072CC
    {
            ctx->lr = 0x8000BE98u;
            ctx->pc = 0x800072CCu;
            return;
    }

label_8000BE98:
    ctx->pc = 0x8000BE98u;
    ctx->downcount -= 1;
    // 8000BE98: bl      0x80007614
    {
            ctx->lr = 0x8000BE9Cu;
            ctx->pc = 0x80007614u;
            return;
    }

label_8000BE9C:
    ctx->pc = 0x8000BE9Cu;
    ctx->downcount -= 7;
    // 8000BE9C: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_8000BEA0:
    ctx->pc = 0x8000BEA0u;
    // 8000BEA0: stw     r3, -19640(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19640);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8000BEA4:
    ctx->pc = 0x8000BEA4u;
    // 8000BEA4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000BEA8:
    ctx->pc = 0x8000BEA8u;
    // 8000BEA8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000BEAC:
    ctx->pc = 0x8000BEACu;
    // 8000BEAC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000BEB0:
    ctx->pc = 0x8000BEB0u;
    // 8000BEB0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000BEB4:
    ctx->pc = 0x8000BEB4u;
    ctx->downcount -= 6;
    // 8000BEB4: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000BEB8:
    ctx->pc = 0x8000BEB8u;
    // 8000BEB8: lwz     r1, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[1] = mem_read32(ctx, ea);
    }

label_8000BEBC:
    ctx->pc = 0x8000BEBCu;
    // 8000BEBC: lwz     r2, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[2] = mem_read32(ctx, ea);
    }

label_8000BEC0:
    ctx->pc = 0x8000BEC0u;
    // 8000BEC0: lhz     r5, 418(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(418);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_8000BEC4:
    ctx->pc = 0x8000BEC4u;
    // 8000BEC4: rlwinm. r6, r5, 0, 30, 30
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x00000002u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[6];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8000BEC8:
    ctx->pc = 0x8000BEC8u;
    // 8000BEC8: bc    12, 2, 0x8000BEDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000BEDC;
        }
    }

label_8000BECC:
    ctx->pc = 0x8000BECCu;
    ctx->downcount -= 14;
    // 8000BECC: rlwinm r5, r5, 0, 31, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0xFFFFFFFDu;
    }

label_8000BED0:
    ctx->pc = 0x8000BED0u;
    // 8000BED0: sth     r5, 418(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(418);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8000BED4:
    ctx->pc = 0x8000BED4u;
    // 8000BED4: lmw     r5, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        for (u32 r = 5; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8000BED8:
    ctx->pc = 0x8000BED8u;
    // 8000BED8: b       0x8000BEE0
    {
            goto label_8000BEE0;
    }

label_8000BEDC:
    ctx->pc = 0x8000BEDCu;
    ctx->downcount -= 11;
    // 8000BEDC: lmw     r13, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        for (u32 r = 13; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8000BEE0:
    ctx->pc = 0x8000BEE0u;
    ctx->downcount -= 17;
    // 8000BEE0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000BEE4:
    ctx->pc = 0x8000BEE4u;
    // 8000BEE4: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8000BEE8:
    ctx->pc = 0x8000BEE8u;
    // 8000BEE8: lwz     r4, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000BEEC:
    ctx->pc = 0x8000BEECu;
    // 8000BEEC: mtcr    r4
    ctx->cr = (ctx->cr & ~0xFFFFFFFFu) | (ctx->gpr[4] & 0xFFFFFFFFu);

label_8000BEF0:
    ctx->pc = 0x8000BEF0u;
    // 8000BEF0: lwz     r4, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000BEF4:
    ctx->pc = 0x8000BEF4u;
    // 8000BEF4: mtlr    r4
    ctx->lr = ctx->gpr[4];

label_8000BEF8:
    ctx->pc = 0x8000BEF8u;
    // 8000BEF8: lwz     r4, 136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000BEFC:
    ctx->pc = 0x8000BEFCu;
    // 8000BEFC: mtctr    r4
    ctx->ctr = ctx->gpr[4];

label_8000BF00:
    ctx->pc = 0x8000BF00u;
    // 8000BF00: lwz     r4, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000BF04:
    ctx->pc = 0x8000BF04u;
    // 8000BF04: mtxer    r4
    ctx->xer = ctx->gpr[4];

label_8000BF08:
    ctx->pc = 0x8000BF08u;
    // 8000BF08: mfmsr   r4
    ctx->gpr[4] = ctx->msr;

label_8000BF0C:
    ctx->pc = 0x8000BF0Cu;
    // 8000BF0C: rlwinm r4, r4, 0, 17, 15
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFF7FFFu;
    }

label_8000BF10:
    ctx->pc = 0x8000BF10u;
    // 8000BF10: rlwinm r4, r4, 0, 31, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFFFDu;
    }

label_8000BF14:
    ctx->pc = 0x8000BF14u;
    // 8000BF14: mtmsr   r4
    ctx->msr = ctx->gpr[4];

label_8000BF18:
    ctx->pc = 0x8000BF18u;
    // 8000BF18: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x8000BF18u);
    return;

label_8000BF1C:
    ctx->pc = 0x8000BF1Cu;
    ctx->downcount -= 1;
    // 8000BF1C: lwz     r4, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000BF20:
    ctx->pc = 0x8000BF20u;
    // 8000BF20: mtsprg2    r4
    ppc_fallback_instruction(ctx, 0x7C9243A6u, 0x8000BF20u);
    return;

label_8000BF24:
    ctx->pc = 0x8000BF24u;
    ctx->downcount -= 1;
    // 8000BF24: lwz     r4, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000BF28:
    ctx->pc = 0x8000BF28u;
    // 8000BF28: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x8000BF28u);
    return;

label_8000BF2C:
    ctx->pc = 0x8000BF2Cu;
    ctx->downcount -= 4;
    // 8000BF2C: lwz     r2, 408(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(408);
        ctx->gpr[2] = mem_read32(ctx, ea);
    }

label_8000BF30:
    ctx->pc = 0x8000BF30u;
    // 8000BF30: lwz     r4, 412(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(412);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000BF34:
    ctx->pc = 0x8000BF34u;
    // 8000BF34: lwz     r31, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8000BF38:
    ctx->pc = 0x8000BF38u;
    // 8000BF38: b       0x80009DB0
    {
            ctx->pc = 0x80009DB0u;
            return;
    }

label_8000BF3C:
    ctx->pc = 0x8000BF3Cu;
    ctx->downcount -= 1;
    // 8000BF3C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000BF40:
    ctx->pc = 0x8000BF40u;
    ctx->downcount -= 11;
    // 8000BF40: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000BF44:
    ctx->pc = 0x8000BF44u;
    // 8000BF44: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000BF48:
    ctx->pc = 0x8000BF48u;
    // 8000BF48: lis     r4, -32766
    ctx->gpr[4] = ((u32)(s32)(-32766) << 16);

label_8000BF4C:
    ctx->pc = 0x8000BF4Cu;
    // 8000BF4C: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8000BF50:
    ctx->pc = 0x8000BF50u;
    // 8000BF50: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000BF54:
    ctx->pc = 0x8000BF54u;
    // 8000BF54: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8000BF58:
    ctx->pc = 0x8000BF58u;
    // 8000BF58: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8000BF5C:
    ctx->pc = 0x8000BF5Cu;
    // 8000BF5C: addi    r31, r4, -16400
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(-16400);

label_8000BF60:
    ctx->pc = 0x8000BF60u;
    // 8000BF60: addi    r4, r3, 10488
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(10488);

label_8000BF64:
    ctx->pc = 0x8000BF64u;
    // 8000BF64: addi    r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4);

label_8000BF68:
    ctx->pc = 0x8000BF68u;
    // 8000BF68: bl      0x80003130
    {
            ctx->lr = 0x8000BF6Cu;
            ctx->pc = 0x80003130u;
            return;
    }

label_8000BF6C:
    ctx->pc = 0x8000BF6Cu;
    ctx->downcount -= 3;
    // 8000BF6C: addi    r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4);

label_8000BF70:
    ctx->pc = 0x8000BF70u;
    // 8000BF70: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8000BF74:
    ctx->pc = 0x8000BF74u;
    // 8000BF74: bl      0x8001DB04
    {
            ctx->lr = 0x8000BF78u;
            ctx->pc = 0x8001DB04u;
            return;
    }

label_8000BF78:
    ctx->pc = 0x8000BF78u;
    ctx->downcount -= 3;
    // 8000BF78: addi    r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4);

label_8000BF7C:
    ctx->pc = 0x8000BF7Cu;
    // 8000BF7C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8000BF80:
    ctx->pc = 0x8000BF80u;
    // 8000BF80: bl      0x8001DA4C
    {
            ctx->lr = 0x8000BF84u;
            ctx->pc = 0x8001DA4Cu;
            return;
    }

label_8000BF84:
    ctx->pc = 0x8000BF84u;
    ctx->downcount -= 6;
    // 8000BF84: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000BF88:
    ctx->pc = 0x8000BF88u;
    // 8000BF88: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8000BF8C:
    ctx->pc = 0x8000BF8Cu;
    // 8000BF8C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000BF90:
    ctx->pc = 0x8000BF90u;
    // 8000BF90: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000BF94:
    ctx->pc = 0x8000BF94u;
    // 8000BF94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000BF98:
    ctx->pc = 0x8000BF98u;
    ctx->downcount -= 8;
    // 8000BF98: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000BF9C:
    ctx->pc = 0x8000BF9Cu;
    // 8000BF9C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000BFA0:
    ctx->pc = 0x8000BFA0u;
    // 8000BFA0: lis     r5, -32762
    ctx->gpr[5] = ((u32)(s32)(-32762) << 16);

label_8000BFA4:
    ctx->pc = 0x8000BFA4u;
    // 8000BFA4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000BFA8:
    ctx->pc = 0x8000BFA8u;
    // 8000BFA8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000BFAC:
    ctx->pc = 0x8000BFACu;
    // 8000BFAC: addi    r3, r5, 10492
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(10492);

label_8000BFB0:
    ctx->pc = 0x8000BFB0u;
    // 8000BFB0: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8000BFB4:
    ctx->pc = 0x8000BFB4u;
    // 8000BFB4: bl      0x8001E8F8
    {
            ctx->lr = 0x8000BFB8u;
            ctx->pc = 0x8001E8F8u;
            return;
    }

label_8000BFB8:
    ctx->pc = 0x8000BFB8u;
    ctx->downcount -= 5;
    // 8000BFB8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000BFBC:
    ctx->pc = 0x8000BFBCu;
    // 8000BFBC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000BFC0:
    ctx->pc = 0x8000BFC0u;
    // 8000BFC0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000BFC4:
    ctx->pc = 0x8000BFC4u;
    // 8000BFC4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000BFC8:
    ctx->pc = 0x8000BFC8u;
    ctx->downcount -= 9;
    // 8000BFC8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000BFCC:
    ctx->pc = 0x8000BFCCu;
    // 8000BFCC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000BFD0:
    ctx->pc = 0x8000BFD0u;
    // 8000BFD0: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8000BFD4:
    ctx->pc = 0x8000BFD4u;
    // 8000BFD4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000BFD8:
    ctx->pc = 0x8000BFD8u;
    // 8000BFD8: addi    r3, r3, -5800
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5800);

label_8000BFDC:
    ctx->pc = 0x8000BFDCu;
    // 8000BFDC: lwz     r12, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8000BFE0:
    ctx->pc = 0x8000BFE0u;
    // 8000BFE0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8000BFE4:
    ctx->pc = 0x8000BFE4u;
    // 8000BFE4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8000BFE8u;
            ctx->pc = target;
            return;
        }
    }

label_8000BFE8:
    ctx->pc = 0x8000BFE8u;
    ctx->downcount -= 5;
    // 8000BFE8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000BFEC:
    ctx->pc = 0x8000BFECu;
    // 8000BFEC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000BFF0:
    ctx->pc = 0x8000BFF0u;
    // 8000BFF0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000BFF4:
    ctx->pc = 0x8000BFF4u;
    // 8000BFF4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000BFF8:
    ctx->pc = 0x8000BFF8u;
    ctx->downcount -= 9;
    // 8000BFF8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000BFFC:
    ctx->pc = 0x8000BFFCu;
    // 8000BFFC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000C000:
    ctx->pc = 0x8000C000u;
    // 8000C000: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8000C004:
    ctx->pc = 0x8000C004u;
    // 8000C004: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000C008:
    ctx->pc = 0x8000C008u;
    // 8000C008: addi    r3, r3, -5800
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5800);

label_8000C00C:
    ctx->pc = 0x8000C00Cu;
    // 8000C00C: lwz     r12, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8000C010:
    ctx->pc = 0x8000C010u;
    // 8000C010: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8000C014:
    ctx->pc = 0x8000C014u;
    // 8000C014: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8000C018u;
            ctx->pc = target;
            return;
        }
    }

label_8000C018:
    ctx->pc = 0x8000C018u;
    ctx->downcount -= 5;
    // 8000C018: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000C01C:
    ctx->pc = 0x8000C01Cu;
    // 8000C01C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000C020:
    ctx->pc = 0x8000C020u;
    // 8000C020: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000C024:
    ctx->pc = 0x8000C024u;
    // 8000C024: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000C028:
    ctx->pc = 0x8000C028u;
    ctx->downcount -= 9;
    // 8000C028: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000C02C:
    ctx->pc = 0x8000C02Cu;
    // 8000C02C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000C030:
    ctx->pc = 0x8000C030u;
    // 8000C030: lis     r5, -32738
    ctx->gpr[5] = ((u32)(s32)(-32738) << 16);

label_8000C034:
    ctx->pc = 0x8000C034u;
    // 8000C034: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000C038:
    ctx->pc = 0x8000C038u;
    // 8000C038: addi    r5, r5, -5800
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-5800);

label_8000C03C:
    ctx->pc = 0x8000C03Cu;
    // 8000C03C: lwz     r12, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8000C040:
    ctx->pc = 0x8000C040u;
    // 8000C040: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8000C044:
    ctx->pc = 0x8000C044u;
    // 8000C044: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8000C048u;
            ctx->pc = target;
            return;
        }
    }

label_8000C048:
    ctx->pc = 0x8000C048u;
    ctx->downcount -= 8;
    // 8000C048: neg  r0, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[0] = (~a) + 1u;
    }

label_8000C04C:
    ctx->pc = 0x8000C04Cu;
    // 8000C04C: or   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[3];
    }

label_8000C050:
    ctx->pc = 0x8000C050u;
    // 8000C050: srawi r3, r0, 31
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

label_8000C054:
    ctx->pc = 0x8000C054u;
    // 8000C054: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000C058:
    ctx->pc = 0x8000C058u;
    // 8000C058: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000C05C:
    ctx->pc = 0x8000C05Cu;
    // 8000C05C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000C060:
    ctx->pc = 0x8000C060u;
    // 8000C060: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000C064:
    ctx->pc = 0x8000C064u;
    ctx->downcount -= 9;
    // 8000C064: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000C068:
    ctx->pc = 0x8000C068u;
    // 8000C068: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000C06C:
    ctx->pc = 0x8000C06Cu;
    // 8000C06C: lis     r5, -32738
    ctx->gpr[5] = ((u32)(s32)(-32738) << 16);

label_8000C070:
    ctx->pc = 0x8000C070u;
    // 8000C070: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000C074:
    ctx->pc = 0x8000C074u;
    // 8000C074: addi    r5, r5, -5800
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-5800);

label_8000C078:
    ctx->pc = 0x8000C078u;
    // 8000C078: lwz     r12, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8000C07C:
    ctx->pc = 0x8000C07Cu;
    // 8000C07C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8000C080:
    ctx->pc = 0x8000C080u;
    // 8000C080: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8000C084u;
            ctx->pc = target;
            return;
        }
    }

label_8000C084:
    ctx->pc = 0x8000C084u;
    ctx->downcount -= 8;
    // 8000C084: neg  r0, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[0] = (~a) + 1u;
    }

label_8000C088:
    ctx->pc = 0x8000C088u;
    // 8000C088: or   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[3];
    }

label_8000C08C:
    ctx->pc = 0x8000C08Cu;
    // 8000C08C: srawi r3, r0, 31
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

label_8000C090:
    ctx->pc = 0x8000C090u;
    // 8000C090: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000C094:
    ctx->pc = 0x8000C094u;
    // 8000C094: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000C098:
    ctx->pc = 0x8000C098u;
    // 8000C098: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000C09C:
    ctx->pc = 0x8000C09Cu;
    // 8000C09C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000C0A0:
    ctx->pc = 0x8000C0A0u;
    ctx->downcount -= 9;
    // 8000C0A0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000C0A4:
    ctx->pc = 0x8000C0A4u;
    // 8000C0A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000C0A8:
    ctx->pc = 0x8000C0A8u;
    // 8000C0A8: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8000C0AC:
    ctx->pc = 0x8000C0ACu;
    // 8000C0AC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000C0B0:
    ctx->pc = 0x8000C0B0u;
    // 8000C0B0: addi    r3, r3, -5800
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5800);

label_8000C0B4:
    ctx->pc = 0x8000C0B4u;
    // 8000C0B4: lwz     r12, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8000C0B8:
    ctx->pc = 0x8000C0B8u;
    // 8000C0B8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8000C0BC:
    ctx->pc = 0x8000C0BCu;
    // 8000C0BC: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8000C0C0u;
            ctx->pc = target;
            return;
        }
    }

label_8000C0C0:
    ctx->pc = 0x8000C0C0u;
    ctx->downcount -= 5;
    // 8000C0C0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000C0C4:
    ctx->pc = 0x8000C0C4u;
    // 8000C0C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000C0C8:
    ctx->pc = 0x8000C0C8u;
    // 8000C0C8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000C0CC:
    ctx->pc = 0x8000C0CCu;
    // 8000C0CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000C0D0:
    ctx->pc = 0x8000C0D0u;
    ctx->downcount -= 7;
    // 8000C0D0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000C0D4:
    ctx->pc = 0x8000C0D4u;
    // 8000C0D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000C0D8:
    ctx->pc = 0x8000C0D8u;
    // 8000C0D8: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000C0DC:
    ctx->pc = 0x8000C0DCu;
    // 8000C0DC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000C0E0:
    ctx->pc = 0x8000C0E0u;
    // 8000C0E0: lbz     r0, -19632(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-19632);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8000C0E4:
    ctx->pc = 0x8000C0E4u;
    // 8000C0E4: cmplwi  r0, 0x0000
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

label_8000C0E8:
    ctx->pc = 0x8000C0E8u;
    // 8000C0E8: bc    4, 2, 0x8000C108
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000C108;
        }
    }

label_8000C0EC:
    ctx->pc = 0x8000C0ECu;
    ctx->downcount -= 5;
    // 8000C0EC: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8000C0F0:
    ctx->pc = 0x8000C0F0u;
    // 8000C0F0: addi    r3, r3, -5800
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5800);

label_8000C0F4:
    ctx->pc = 0x8000C0F4u;
    // 8000C0F4: lwz     r12, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8000C0F8:
    ctx->pc = 0x8000C0F8u;
    // 8000C0F8: cmplwi  r12, 0x0000
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

label_8000C0FC:
    ctx->pc = 0x8000C0FCu;
    // 8000C0FC: bc    12, 2, 0x8000C108
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000C108;
        }
    }

label_8000C100:
    ctx->pc = 0x8000C100u;
    ctx->downcount -= 3;
    // 8000C100: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8000C104:
    ctx->pc = 0x8000C104u;
    // 8000C104: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8000C108u;
            ctx->pc = target;
            return;
        }
    }

label_8000C108:
    ctx->pc = 0x8000C108u;
    ctx->downcount -= 5;
    // 8000C108: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000C10C:
    ctx->pc = 0x8000C10Cu;
    // 8000C10C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000C110:
    ctx->pc = 0x8000C110u;
    // 8000C110: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000C114:
    ctx->pc = 0x8000C114u;
    // 8000C114: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000C118:
    ctx->pc = 0x8000C118u;
    ctx->downcount -= 11;
    // 8000C118: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000C11C:
    ctx->pc = 0x8000C11Cu;
    // 8000C11C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000C120:
    ctx->pc = 0x8000C120u;
    // 8000C120: lis     r4, -32767
    ctx->gpr[4] = ((u32)(s32)(-32767) << 16);

label_8000C124:
    ctx->pc = 0x8000C124u;
    // 8000C124: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8000C128:
    ctx->pc = 0x8000C128u;
    // 8000C128: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000C12C:
    ctx->pc = 0x8000C12Cu;
    // 8000C12C: addi    r4, r4, -15404
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-15404);

label_8000C130:
    ctx->pc = 0x8000C130u;
    // 8000C130: lwz     r12, -5800(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5800);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8000C134:
    ctx->pc = 0x8000C134u;
    // 8000C134: or   r3, r6, r6
    {
        ctx->gpr[3] = ctx->gpr[6] | ctx->gpr[6];
    }

label_8000C138:
    ctx->pc = 0x8000C138u;
    // 8000C138: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8000C13C:
    ctx->pc = 0x8000C13Cu;
    // 8000C13C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8000C140u;
            ctx->pc = target;
            return;
        }
    }

label_8000C140:
    ctx->pc = 0x8000C140u;
    ctx->downcount -= 6;
    // 8000C140: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8000C144:
    ctx->pc = 0x8000C144u;
    // 8000C144: addi    r3, r3, -5800
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5800);

label_8000C148:
    ctx->pc = 0x8000C148u;
    // 8000C148: lwz     r12, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8000C14C:
    ctx->pc = 0x8000C14Cu;
    // 8000C14C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8000C150:
    ctx->pc = 0x8000C150u;
    // 8000C150: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8000C154u;
            ctx->pc = target;
            return;
        }
    }

label_8000C154:
    ctx->pc = 0x8000C154u;
    ctx->downcount -= 6;
    // 8000C154: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000C158:
    ctx->pc = 0x8000C158u;
    // 8000C158: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000C15C:
    ctx->pc = 0x8000C15Cu;
    // 8000C15C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000C160:
    ctx->pc = 0x8000C160u;
    // 8000C160: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000C164:
    ctx->pc = 0x8000C164u;
    // 8000C164: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000C168:
    ctx->pc = 0x8000C168u;
    ctx->downcount -= 14;
    // 8000C168: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000C16C:
    ctx->pc = 0x8000C16Cu;
    // 8000C16C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000C170:
    ctx->pc = 0x8000C170u;
    // 8000C170: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8000C174:
    ctx->pc = 0x8000C174u;
    // 8000C174: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000C178:
    ctx->pc = 0x8000C178u;
    // 8000C178: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8000C17C:
    ctx->pc = 0x8000C17Cu;
    // 8000C17C: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_8000C180:
    ctx->pc = 0x8000C180u;
    // 8000C180: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8000C184:
    ctx->pc = 0x8000C184u;
    // 8000C184: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000C188:
    ctx->pc = 0x8000C188u;
    // 8000C188: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8000C18C:
    ctx->pc = 0x8000C18Cu;
    // 8000C18C: addi    r29, r4, 10488
    ctx->gpr[29] = ctx->gpr[4] + (u32)(s32)(10488);

label_8000C190:
    ctx->pc = 0x8000C190u;
    // 8000C190: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8000C194:
    ctx->pc = 0x8000C194u;
    // 8000C194: addi    r3, r29, 8
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(8);

label_8000C198:
    ctx->pc = 0x8000C198u;
    // 8000C198: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8000C19C:
    ctx->pc = 0x8000C19Cu;
    // 8000C19C: bl      0x8001E8F8
    {
            ctx->lr = 0x8000C1A0u;
            ctx->pc = 0x8001E8F8u;
            return;
    }

label_8000C1A0:
    ctx->pc = 0x8000C1A0u;
    ctx->downcount -= 5;
    // 8000C1A0: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000C1A4:
    ctx->pc = 0x8000C1A4u;
    // 8000C1A4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8000C1A8:
    ctx->pc = 0x8000C1A8u;
    // 8000C1A8: cmpwi   r30, 2
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

label_8000C1AC:
    ctx->pc = 0x8000C1ACu;
    // 8000C1AC: stb     r0, -19632(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-19632);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8000C1B0:
    ctx->pc = 0x8000C1B0u;
    // 8000C1B0: bc    4, 2, 0x8000C254
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000C254;
        }
    }

label_8000C1B4:
    ctx->pc = 0x8000C1B4u;
    ctx->downcount -= 3;
    // 8000C1B4: addi    r3, r29, 32
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(32);

label_8000C1B8:
    ctx->pc = 0x8000C1B8u;
    // 8000C1B8: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8000C1BC:
    ctx->pc = 0x8000C1BCu;
    // 8000C1BC: bl      0x8001E8F8
    {
            ctx->lr = 0x8000C1C0u;
            ctx->pc = 0x8001E8F8u;
            return;
    }

label_8000C1C0:
    ctx->pc = 0x8000C1C0u;
    ctx->downcount -= 37;
    // 8000C1C0: lis     r30, -32737
    ctx->gpr[30] = ((u32)(s32)(-32737) << 16);

label_8000C1C4:
    ctx->pc = 0x8000C1C4u;
    // 8000C1C4: lis     r12, -32767
    ctx->gpr[12] = ((u32)(s32)(-32767) << 16);

label_8000C1C8:
    ctx->pc = 0x8000C1C8u;
    // 8000C1C8: lis     r11, -32738
    ctx->gpr[11] = ((u32)(s32)(-32738) << 16);

label_8000C1CC:
    ctx->pc = 0x8000C1CCu;
    // 8000C1CC: lis     r10, -32767
    ctx->gpr[10] = ((u32)(s32)(-32767) << 16);

label_8000C1D0:
    ctx->pc = 0x8000C1D0u;
    // 8000C1D0: lis     r9, -32767
    ctx->gpr[9] = ((u32)(s32)(-32767) << 16);

label_8000C1D4:
    ctx->pc = 0x8000C1D4u;
    // 8000C1D4: lis     r8, -32767
    ctx->gpr[8] = ((u32)(s32)(-32767) << 16);

label_8000C1D8:
    ctx->pc = 0x8000C1D8u;
    // 8000C1D8: lis     r7, -32767
    ctx->gpr[7] = ((u32)(s32)(-32767) << 16);

label_8000C1DC:
    ctx->pc = 0x8000C1DCu;
    // 8000C1DC: lis     r6, -32767
    ctx->gpr[6] = ((u32)(s32)(-32767) << 16);

label_8000C1E0:
    ctx->pc = 0x8000C1E0u;
    // 8000C1E0: lis     r5, -32767
    ctx->gpr[5] = ((u32)(s32)(-32767) << 16);

label_8000C1E4:
    ctx->pc = 0x8000C1E4u;
    // 8000C1E4: lis     r4, -32767
    ctx->gpr[4] = ((u32)(s32)(-32767) << 16);

label_8000C1E8:
    ctx->pc = 0x8000C1E8u;
    // 8000C1E8: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_8000C1EC:
    ctx->pc = 0x8000C1ECu;
    // 8000C1EC: addi    r31, r30, -19632
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(-19632);

label_8000C1F0:
    ctx->pc = 0x8000C1F0u;
    // 8000C1F0: li      r29, 1
    ctx->gpr[29] = (u32)(s32)(1);

label_8000C1F4:
    ctx->pc = 0x8000C1F4u;
    // 8000C1F4: addi    r30, r12, -14696
    ctx->gpr[30] = ctx->gpr[12] + (u32)(s32)(-14696);

label_8000C1F8:
    ctx->pc = 0x8000C1F8u;
    // 8000C1F8: addi    r12, r11, -5800
    ctx->gpr[12] = ctx->gpr[11] + (u32)(s32)(-5800);

label_8000C1FC:
    ctx->pc = 0x8000C1FCu;
    // 8000C1FC: addi    r11, r10, -14712
    ctx->gpr[11] = ctx->gpr[10] + (u32)(s32)(-14712);

label_8000C200:
    ctx->pc = 0x8000C200u;
    // 8000C200: addi    r10, r9, -14720
    ctx->gpr[10] = ctx->gpr[9] + (u32)(s32)(-14720);

label_8000C204:
    ctx->pc = 0x8000C204u;
    // 8000C204: addi    r9, r8, -14728
    ctx->gpr[9] = ctx->gpr[8] + (u32)(s32)(-14728);

label_8000C208:
    ctx->pc = 0x8000C208u;
    // 8000C208: addi    r8, r7, -14736
    ctx->gpr[8] = ctx->gpr[7] + (u32)(s32)(-14736);

label_8000C20C:
    ctx->pc = 0x8000C20Cu;
    // 8000C20C: addi    r7, r6, -14704
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(-14704);

label_8000C210:
    ctx->pc = 0x8000C210u;
    // 8000C210: addi    r6, r5, -14744
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-14744);

label_8000C214:
    ctx->pc = 0x8000C214u;
    // 8000C214: addi    r5, r4, -14752
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-14752);

label_8000C218:
    ctx->pc = 0x8000C218u;
    // 8000C218: addi    r4, r3, -14760
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-14760);

label_8000C21C:
    ctx->pc = 0x8000C21Cu;
    // 8000C21C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8000C220:
    ctx->pc = 0x8000C220u;
    // 8000C220: stb     r29, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[29]);
    }

label_8000C224:
    ctx->pc = 0x8000C224u;
    // 8000C224: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000C228:
    ctx->pc = 0x8000C228u;
    // 8000C228: stw     r30, 0(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8000C22C:
    ctx->pc = 0x8000C22Cu;
    // 8000C22C: stw     r11, 24(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_8000C230:
    ctx->pc = 0x8000C230u;
    // 8000C230: stw     r10, 28(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_8000C234:
    ctx->pc = 0x8000C234u;
    // 8000C234: stw     r9, 16(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_8000C238:
    ctx->pc = 0x8000C238u;
    // 8000C238: stw     r8, 20(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8000C23C:
    ctx->pc = 0x8000C23Cu;
    // 8000C23C: stw     r7, 8(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8000C240:
    ctx->pc = 0x8000C240u;
    // 8000C240: stw     r6, 12(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8000C244:
    ctx->pc = 0x8000C244u;
    // 8000C244: stw     r5, 32(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8000C248:
    ctx->pc = 0x8000C248u;
    // 8000C248: stw     r4, 36(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000C24C:
    ctx->pc = 0x8000C24Cu;
    // 8000C24C: stw     r0, 4(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000C250:
    ctx->pc = 0x8000C250u;
    // 8000C250: b       0x8000C3B8
    {
            goto label_8000C3B8;
    }

label_8000C254:
    ctx->pc = 0x8000C254u;
    ctx->downcount -= 2;
    // 8000C254: cmpwi   r30, 1
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000C258:
    ctx->pc = 0x8000C258u;
    // 8000C258: bc    4, 2, 0x8000C2F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000C2F0;
        }
    }

label_8000C25C:
    ctx->pc = 0x8000C25Cu;
    ctx->downcount -= 3;
    // 8000C25C: addi    r3, r29, 56
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(56);

label_8000C260:
    ctx->pc = 0x8000C260u;
    // 8000C260: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8000C264:
    ctx->pc = 0x8000C264u;
    // 8000C264: bl      0x8001E8F8
    {
            ctx->lr = 0x8000C268u;
            ctx->pc = 0x8001E8F8u;
            return;
    }

label_8000C268:
    ctx->pc = 0x8000C268u;
    ctx->downcount -= 1;
    // 8000C268: bl      0x80047F58
    {
            ctx->lr = 0x8000C26Cu;
            ctx->pc = 0x80047F58u;
            return;
    }

label_8000C26C:
    ctx->pc = 0x8000C26Cu;
    ctx->downcount -= 33;
    // 8000C26C: lis     r31, -32767
    ctx->gpr[31] = ((u32)(s32)(-32767) << 16);

label_8000C270:
    ctx->pc = 0x8000C270u;
    // 8000C270: lis     r12, -32767
    ctx->gpr[12] = ((u32)(s32)(-32767) << 16);

label_8000C274:
    ctx->pc = 0x8000C274u;
    // 8000C274: addi    r31, r31, -12528
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(-12528);

label_8000C278:
    ctx->pc = 0x8000C278u;
    // 8000C278: lis     r30, -32738
    ctx->gpr[30] = ((u32)(s32)(-32738) << 16);

label_8000C27C:
    ctx->pc = 0x8000C27Cu;
    // 8000C27C: lis     r11, -32767
    ctx->gpr[11] = ((u32)(s32)(-32767) << 16);

label_8000C280:
    ctx->pc = 0x8000C280u;
    // 8000C280: lis     r10, -32767
    ctx->gpr[10] = ((u32)(s32)(-32767) << 16);

label_8000C284:
    ctx->pc = 0x8000C284u;
    // 8000C284: lis     r9, -32767
    ctx->gpr[9] = ((u32)(s32)(-32767) << 16);

label_8000C288:
    ctx->pc = 0x8000C288u;
    // 8000C288: lis     r8, -32767
    ctx->gpr[8] = ((u32)(s32)(-32767) << 16);

label_8000C28C:
    ctx->pc = 0x8000C28Cu;
    // 8000C28C: lis     r7, -32767
    ctx->gpr[7] = ((u32)(s32)(-32767) << 16);

label_8000C290:
    ctx->pc = 0x8000C290u;
    // 8000C290: lis     r6, -32767
    ctx->gpr[6] = ((u32)(s32)(-32767) << 16);

label_8000C294:
    ctx->pc = 0x8000C294u;
    // 8000C294: lis     r5, -32767
    ctx->gpr[5] = ((u32)(s32)(-32767) << 16);

label_8000C298:
    ctx->pc = 0x8000C298u;
    // 8000C298: lis     r4, -32767
    ctx->gpr[4] = ((u32)(s32)(-32767) << 16);

label_8000C29C:
    ctx->pc = 0x8000C29Cu;
    // 8000C29C: stwu     r31, -5800(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(-5800);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
        ctx->gpr[30] = ea;
    }

label_8000C2A0:
    ctx->pc = 0x8000C2A0u;
    // 8000C2A0: addi    r12, r12, -12572
    ctx->gpr[12] = ctx->gpr[12] + (u32)(s32)(-12572);

label_8000C2A4:
    ctx->pc = 0x8000C2A4u;
    // 8000C2A4: addi    r11, r11, -12580
    ctx->gpr[11] = ctx->gpr[11] + (u32)(s32)(-12580);

label_8000C2A8:
    ctx->pc = 0x8000C2A8u;
    // 8000C2A8: addi    r10, r10, -12824
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(-12824);

label_8000C2AC:
    ctx->pc = 0x8000C2ACu;
    // 8000C2AC: addi    r9, r9, -13016
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(-13016);

label_8000C2B0:
    ctx->pc = 0x8000C2B0u;
    // 8000C2B0: addi    r8, r8, -12536
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(-12536);

label_8000C2B4:
    ctx->pc = 0x8000C2B4u;
    // 8000C2B4: addi    r7, r7, -13200
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-13200);

label_8000C2B8:
    ctx->pc = 0x8000C2B8u;
    // 8000C2B8: addi    r6, r6, -13052
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-13052);

label_8000C2BC:
    ctx->pc = 0x8000C2BCu;
    // 8000C2BC: addi    r5, r5, -13088
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13088);

label_8000C2C0:
    ctx->pc = 0x8000C2C0u;
    // 8000C2C0: addi    r0, r4, -13236
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-13236);

label_8000C2C4:
    ctx->pc = 0x8000C2C4u;
    // 8000C2C4: stw     r12, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_8000C2C8:
    ctx->pc = 0x8000C2C8u;
    // 8000C2C8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000C2CC:
    ctx->pc = 0x8000C2CCu;
    // 8000C2CC: stw     r11, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_8000C2D0:
    ctx->pc = 0x8000C2D0u;
    // 8000C2D0: stw     r10, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_8000C2D4:
    ctx->pc = 0x8000C2D4u;
    // 8000C2D4: stw     r9, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_8000C2D8:
    ctx->pc = 0x8000C2D8u;
    // 8000C2D8: stw     r8, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8000C2DC:
    ctx->pc = 0x8000C2DCu;
    // 8000C2DC: stw     r7, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8000C2E0:
    ctx->pc = 0x8000C2E0u;
    // 8000C2E0: stw     r6, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8000C2E4:
    ctx->pc = 0x8000C2E4u;
    // 8000C2E4: stw     r5, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8000C2E8:
    ctx->pc = 0x8000C2E8u;
    // 8000C2E8: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000C2EC:
    ctx->pc = 0x8000C2ECu;
    // 8000C2EC: b       0x8000C3B4
    {
            goto label_8000C3B4;
    }

label_8000C2F0:
    ctx->pc = 0x8000C2F0u;
    ctx->downcount -= 2;
    // 8000C2F0: cmpwi   r30, 0
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

label_8000C2F4:
    ctx->pc = 0x8000C2F4u;
    // 8000C2F4: bc    4, 2, 0x8000C38C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000C38C;
        }
    }

label_8000C2F8:
    ctx->pc = 0x8000C2F8u;
    ctx->downcount -= 3;
    // 8000C2F8: addi    r3, r29, 92
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(92);

label_8000C2FC:
    ctx->pc = 0x8000C2FCu;
    // 8000C2FC: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8000C300:
    ctx->pc = 0x8000C300u;
    // 8000C300: bl      0x8001E8F8
    {
            ctx->lr = 0x8000C304u;
            ctx->pc = 0x8001E8F8u;
            return;
    }

label_8000C304:
    ctx->pc = 0x8000C304u;
    ctx->downcount -= 1;
    // 8000C304: bl      0x80048A08
    {
            ctx->lr = 0x8000C308u;
            ctx->pc = 0x80048A08u;
            return;
    }

label_8000C308:
    ctx->pc = 0x8000C308u;
    ctx->downcount -= 33;
    // 8000C308: lis     r31, -32767
    ctx->gpr[31] = ((u32)(s32)(-32767) << 16);

label_8000C30C:
    ctx->pc = 0x8000C30Cu;
    // 8000C30C: lis     r12, -32767
    ctx->gpr[12] = ((u32)(s32)(-32767) << 16);

label_8000C310:
    ctx->pc = 0x8000C310u;
    // 8000C310: addi    r31, r31, -13988
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(-13988);

label_8000C314:
    ctx->pc = 0x8000C314u;
    // 8000C314: lis     r30, -32738
    ctx->gpr[30] = ((u32)(s32)(-32738) << 16);

label_8000C318:
    ctx->pc = 0x8000C318u;
    // 8000C318: lis     r11, -32767
    ctx->gpr[11] = ((u32)(s32)(-32767) << 16);

label_8000C31C:
    ctx->pc = 0x8000C31Cu;
    // 8000C31C: lis     r10, -32767
    ctx->gpr[10] = ((u32)(s32)(-32767) << 16);

label_8000C320:
    ctx->pc = 0x8000C320u;
    // 8000C320: lis     r9, -32767
    ctx->gpr[9] = ((u32)(s32)(-32767) << 16);

label_8000C324:
    ctx->pc = 0x8000C324u;
    // 8000C324: lis     r8, -32767
    ctx->gpr[8] = ((u32)(s32)(-32767) << 16);

label_8000C328:
    ctx->pc = 0x8000C328u;
    // 8000C328: lis     r7, -32767
    ctx->gpr[7] = ((u32)(s32)(-32767) << 16);

label_8000C32C:
    ctx->pc = 0x8000C32Cu;
    // 8000C32C: lis     r6, -32767
    ctx->gpr[6] = ((u32)(s32)(-32767) << 16);

label_8000C330:
    ctx->pc = 0x8000C330u;
    // 8000C330: lis     r5, -32767
    ctx->gpr[5] = ((u32)(s32)(-32767) << 16);

label_8000C334:
    ctx->pc = 0x8000C334u;
    // 8000C334: lis     r4, -32767
    ctx->gpr[4] = ((u32)(s32)(-32767) << 16);

label_8000C338:
    ctx->pc = 0x8000C338u;
    // 8000C338: stwu     r31, -5800(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(-5800);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
        ctx->gpr[30] = ea;
    }

label_8000C33C:
    ctx->pc = 0x8000C33Cu;
    // 8000C33C: addi    r12, r12, -14032
    ctx->gpr[12] = ctx->gpr[12] + (u32)(s32)(-14032);

label_8000C340:
    ctx->pc = 0x8000C340u;
    // 8000C340: addi    r11, r11, -14040
    ctx->gpr[11] = ctx->gpr[11] + (u32)(s32)(-14040);

label_8000C344:
    ctx->pc = 0x8000C344u;
    // 8000C344: addi    r10, r10, -14276
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(-14276);

label_8000C348:
    ctx->pc = 0x8000C348u;
    // 8000C348: addi    r9, r9, -14468
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(-14468);

label_8000C34C:
    ctx->pc = 0x8000C34Cu;
    // 8000C34C: addi    r8, r8, -13996
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(-13996);

label_8000C350:
    ctx->pc = 0x8000C350u;
    // 8000C350: addi    r7, r7, -14652
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-14652);

label_8000C354:
    ctx->pc = 0x8000C354u;
    // 8000C354: addi    r6, r6, -14504
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-14504);

label_8000C358:
    ctx->pc = 0x8000C358u;
    // 8000C358: addi    r5, r5, -14540
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-14540);

label_8000C35C:
    ctx->pc = 0x8000C35Cu;
    // 8000C35C: addi    r0, r4, -14688
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-14688);

label_8000C360:
    ctx->pc = 0x8000C360u;
    // 8000C360: stw     r12, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_8000C364:
    ctx->pc = 0x8000C364u;
    // 8000C364: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000C368:
    ctx->pc = 0x8000C368u;
    // 8000C368: stw     r11, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_8000C36C:
    ctx->pc = 0x8000C36Cu;
    // 8000C36C: stw     r10, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_8000C370:
    ctx->pc = 0x8000C370u;
    // 8000C370: stw     r9, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_8000C374:
    ctx->pc = 0x8000C374u;
    // 8000C374: stw     r8, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8000C378:
    ctx->pc = 0x8000C378u;
    // 8000C378: stw     r7, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8000C37C:
    ctx->pc = 0x8000C37Cu;
    // 8000C37C: stw     r6, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8000C380:
    ctx->pc = 0x8000C380u;
    // 8000C380: stw     r5, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8000C384:
    ctx->pc = 0x8000C384u;
    // 8000C384: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000C388:
    ctx->pc = 0x8000C388u;
    // 8000C388: b       0x8000C3B4
    {
            goto label_8000C3B4;
    }

label_8000C38C:
    ctx->pc = 0x8000C38Cu;
    ctx->downcount -= 4;
    // 8000C38C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8000C390:
    ctx->pc = 0x8000C390u;
    // 8000C390: addi    r3, r29, 128
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(128);

label_8000C394:
    ctx->pc = 0x8000C394u;
    // 8000C394: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8000C398:
    ctx->pc = 0x8000C398u;
    // 8000C398: bl      0x8001E8F8
    {
            ctx->lr = 0x8000C39Cu;
            ctx->pc = 0x8001E8F8u;
            return;
    }

label_8000C39C:
    ctx->pc = 0x8000C39Cu;
    ctx->downcount -= 3;
    // 8000C39C: addi    r3, r29, 172
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(172);

label_8000C3A0:
    ctx->pc = 0x8000C3A0u;
    // 8000C3A0: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8000C3A4:
    ctx->pc = 0x8000C3A4u;
    // 8000C3A4: bl      0x8001E8F8
    {
            ctx->lr = 0x8000C3A8u;
            ctx->pc = 0x8001E8F8u;
            return;
    }

label_8000C3A8:
    ctx->pc = 0x8000C3A8u;
    ctx->downcount -= 3;
    // 8000C3A8: addi    r3, r29, 220
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(220);

label_8000C3AC:
    ctx->pc = 0x8000C3ACu;
    // 8000C3AC: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8000C3B0:
    ctx->pc = 0x8000C3B0u;
    // 8000C3B0: bl      0x8001E8F8
    {
            ctx->lr = 0x8000C3B4u;
            ctx->pc = 0x8001E8F8u;
            return;
    }

label_8000C3B4:
    ctx->pc = 0x8000C3B4u;
    ctx->downcount -= 1;
    // 8000C3B4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8000C3B8:
    ctx->pc = 0x8000C3B8u;
    ctx->downcount -= 8;
    // 8000C3B8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000C3BC:
    ctx->pc = 0x8000C3BCu;
    // 8000C3BC: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8000C3C0:
    ctx->pc = 0x8000C3C0u;
    // 8000C3C0: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8000C3C4:
    ctx->pc = 0x8000C3C4u;
    // 8000C3C4: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8000C3C8:
    ctx->pc = 0x8000C3C8u;
    // 8000C3C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000C3CC:
    ctx->pc = 0x8000C3CCu;
    // 8000C3CC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8000C3D0:
    ctx->pc = 0x8000C3D0u;
    // 8000C3D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000C3D4:
    ctx->pc = 0x8000C3D4u;
    ctx->downcount -= 6;
    // 8000C3D4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000C3D8:
    ctx->pc = 0x8000C3D8u;
    // 8000C3D8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000C3DC:
    ctx->pc = 0x8000C3DCu;
    // 8000C3DC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000C3E0:
    ctx->pc = 0x8000C3E0u;
    // 8000C3E0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8000C3E4:
    ctx->pc = 0x8000C3E4u;
    // 8000C3E4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8000C3E8:
    ctx->pc = 0x8000C3E8u;
    // 8000C3E8: bl      0x800239E8
    {
            ctx->lr = 0x8000C3ECu;
            ctx->pc = 0x800239E8u;
            return;
    }

label_8000C3EC:
    ctx->pc = 0x8000C3ECu;
    ctx->downcount -= 3;
    // 8000C3EC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8000C3F0:
    ctx->pc = 0x8000C3F0u;
    // 8000C3F0: li      r4, 1280
    ctx->gpr[4] = (u32)(s32)(1280);

label_8000C3F4:
    ctx->pc = 0x8000C3F4u;
    // 8000C3F4: bl      0x8000BEB4
    {
            ctx->lr = 0x8000C3F8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000BEB4u;
                return;
            }
            goto label_8000BEB4;
    }

label_8000C3F8:
    ctx->pc = 0x8000C3F8u;
    ctx->downcount -= 6;
    // 8000C3F8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000C3FC:
    ctx->pc = 0x8000C3FCu;
    // 8000C3FC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8000C400:
    ctx->pc = 0x8000C400u;
    // 8000C400: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000C404:
    ctx->pc = 0x8000C404u;
    // 8000C404: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000C408:
    ctx->pc = 0x8000C408u;
    // 8000C408: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000C40C:
    ctx->pc = 0x8000C40Cu;
    ctx->downcount -= 5;
    // 8000C40C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000C410:
    ctx->pc = 0x8000C410u;
    // 8000C410: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000C414:
    ctx->pc = 0x8000C414u;
    // 8000C414: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000C418:
    ctx->pc = 0x8000C418u;
    // 8000C418: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000C41C:
    ctx->pc = 0x8000C41Cu;
    // 8000C41C: bl      0x8000A120
    {
            ctx->lr = 0x8000C420u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000A120u;
                return;
            }
            goto label_8000A120;
    }

label_8000C420:
    ctx->pc = 0x8000C420u;
    ctx->downcount -= 1;
    // 8000C420: bl      0x8000BFC8
    {
            ctx->lr = 0x8000C424u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000BFC8u;
                return;
            }
            goto label_8000BFC8;
    }

label_8000C424:
    ctx->pc = 0x8000C424u;
    ctx->downcount -= 1;
    // 8000C424: bl      0x80009FE0
    {
            ctx->lr = 0x8000C428u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80009FE0u;
                return;
            }
            goto label_80009FE0;
    }

label_8000C428:
    ctx->pc = 0x8000C428u;
    ctx->downcount -= 1;
    // 8000C428: bl      0x8000BFF8
    {
            ctx->lr = 0x8000C42Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000BFF8u;
                return;
            }
            goto label_8000BFF8;
    }

label_8000C42C:
    ctx->pc = 0x8000C42Cu;
    ctx->downcount -= 6;
    // 8000C42C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000C430:
    ctx->pc = 0x8000C430u;
    // 8000C430: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000C434:
    ctx->pc = 0x8000C434u;
    // 8000C434: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000C438:
    ctx->pc = 0x8000C438u;
    // 8000C438: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000C43C:
    ctx->pc = 0x8000C43Cu;
    // 8000C43C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000C440:
    ctx->pc = 0x8000C440u;
    ctx->downcount -= 4;
    // 8000C440: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000C444:
    ctx->pc = 0x8000C444u;
    // 8000C444: addi    r3, r3, -19624
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-19624);

label_8000C448:
    ctx->pc = 0x8000C448u;
    // 8000C448: lbz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8000C44C:
    ctx->pc = 0x8000C44Cu;
    // 8000C44C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000C450:
    ctx->pc = 0x8000C450u;
    ctx->downcount -= 3;
    // 8000C450: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_8000C454:
    ctx->pc = 0x8000C454u;
    // 8000C454: stb     r3, -19624(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19624);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_8000C458:
    ctx->pc = 0x8000C458u;
    // 8000C458: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000C45C:
    ctx->pc = 0x8000C45Cu;
    ctx->downcount -= 6;
    // 8000C45C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000C460:
    ctx->pc = 0x8000C460u;
    // 8000C460: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000C464:
    ctx->pc = 0x8000C464u;
    // 8000C464: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000C468:
    ctx->pc = 0x8000C468u;
    // 8000C468: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8000C46C:
    ctx->pc = 0x8000C46Cu;
    // 8000C46C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000C470:
    ctx->pc = 0x8000C470u;
    // 8000C470: bl      0x800093D8
    {
            ctx->lr = 0x8000C474u;
            ctx->pc = 0x800093D8u;
            return;
    }

label_8000C474:
    ctx->pc = 0x8000C474u;
    ctx->downcount -= 2;
    // 8000C474: cmpwi   r3, 0
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

label_8000C478:
    ctx->pc = 0x8000C478u;
    // 8000C478: bc    4, 2, 0x8000C484
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000C484;
        }
    }

label_8000C47C:
    ctx->pc = 0x8000C47Cu;
    ctx->downcount -= 2;
    // 8000C47C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8000C480:
    ctx->pc = 0x8000C480u;
    // 8000C480: b       0x8000C4CC
    {
            goto label_8000C4CC;
    }

label_8000C484:
    ctx->pc = 0x8000C484u;
    ctx->downcount -= 3;
    // 8000C484: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8000C488:
    ctx->pc = 0x8000C488u;
    // 8000C488: li      r3, 211
    ctx->gpr[3] = (u32)(s32)(211);

label_8000C48C:
    ctx->pc = 0x8000C48Cu;
    // 8000C48C: bl      0x8000B7C0
    {
            ctx->lr = 0x8000C490u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000B7C0u;
                return;
            }
            goto label_8000B7C0;
    }

label_8000C490:
    ctx->pc = 0x8000C490u;
    ctx->downcount -= 3;
    // 8000C490: rlwinm r0, r3, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_8000C494:
    ctx->pc = 0x8000C494u;
    // 8000C494: cmpwi   r0, 1
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

label_8000C498:
    ctx->pc = 0x8000C498u;
    // 8000C498: bc    12, 2, 0x8000C4C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000C4C8;
        }
    }

label_8000C49C:
    ctx->pc = 0x8000C49Cu;
    ctx->downcount -= 1;
    // 8000C49C: bc    4, 0, 0x8000C4AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000C4AC;
        }
    }

label_8000C4A0:
    ctx->pc = 0x8000C4A0u;
    ctx->downcount -= 2;
    // 8000C4A0: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000C4A4:
    ctx->pc = 0x8000C4A4u;
    // 8000C4A4: bc    4, 0, 0x8000C4B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000C4B8;
        }
    }

label_8000C4A8:
    ctx->pc = 0x8000C4A8u;
    ctx->downcount -= 1;
    // 8000C4A8: b       0x8000C4C8
    {
            goto label_8000C4C8;
    }

label_8000C4AC:
    ctx->pc = 0x8000C4ACu;
    ctx->downcount -= 2;
    // 8000C4AC: cmpwi   r0, 3
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

label_8000C4B0:
    ctx->pc = 0x8000C4B0u;
    // 8000C4B0: bc    4, 0, 0x8000C4C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000C4C8;
        }
    }

label_8000C4B4:
    ctx->pc = 0x8000C4B4u;
    ctx->downcount -= 1;
    // 8000C4B4: b       0x8000C4C0
    {
            goto label_8000C4C0;
    }

label_8000C4B8:
    ctx->pc = 0x8000C4B8u;
    ctx->downcount -= 2;
    // 8000C4B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000C4BC:
    ctx->pc = 0x8000C4BCu;
    // 8000C4BC: b       0x8000C4CC
    {
            goto label_8000C4CC;
    }

label_8000C4C0:
    ctx->pc = 0x8000C4C0u;
    ctx->downcount -= 2;
    // 8000C4C0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_8000C4C4:
    ctx->pc = 0x8000C4C4u;
    // 8000C4C4: b       0x8000C4CC
    {
            goto label_8000C4CC;
    }

label_8000C4C8:
    ctx->pc = 0x8000C4C8u;
    ctx->downcount -= 1;
    // 8000C4C8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8000C4CC:
    ctx->pc = 0x8000C4CCu;
    ctx->downcount -= 6;
    // 8000C4CC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000C4D0:
    ctx->pc = 0x8000C4D0u;
    // 8000C4D0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8000C4D4:
    ctx->pc = 0x8000C4D4u;
    // 8000C4D4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000C4D8:
    ctx->pc = 0x8000C4D8u;
    // 8000C4D8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000C4DC:
    ctx->pc = 0x8000C4DCu;
    // 8000C4DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000C4E0:
    ctx->pc = 0x8000C4E0u;
    ctx->downcount -= 8;
    // 8000C4E0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000C4E4:
    ctx->pc = 0x8000C4E4u;
    // 8000C4E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000C4E8:
    ctx->pc = 0x8000C4E8u;
    // 8000C4E8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000C4EC:
    ctx->pc = 0x8000C4ECu;
    // 8000C4EC: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8000C4F0:
    ctx->pc = 0x8000C4F0u;
    // 8000C4F0: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8000C4F4:
    ctx->pc = 0x8000C4F4u;
    // 8000C4F4: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8000C4F8:
    ctx->pc = 0x8000C4F8u;
    // 8000C4F8: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8000C4FC:
    ctx->pc = 0x8000C4FCu;
    // 8000C4FC: bl      0x8000C440
    {
            ctx->lr = 0x8000C500u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000C440u;
                return;
            }
            goto label_8000C440;
    }

label_8000C500:
    ctx->pc = 0x8000C500u;
    ctx->downcount -= 2;
    // 8000C500: rlwinm. r0, r3, 0, 24, 31
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

label_8000C504:
    ctx->pc = 0x8000C504u;
    // 8000C504: bc    4, 2, 0x8000C510
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000C510;
        }
    }

label_8000C508:
    ctx->pc = 0x8000C508u;
    ctx->downcount -= 2;
    // 8000C508: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8000C50C:
    ctx->pc = 0x8000C50Cu;
    // 8000C50C: b       0x8000C584
    {
            goto label_8000C584;
    }

label_8000C510:
    ctx->pc = 0x8000C510u;
    ctx->downcount -= 1;
    // 8000C510: bl      0x800093D8
    {
            ctx->lr = 0x8000C514u;
            ctx->pc = 0x800093D8u;
            return;
    }

label_8000C514:
    ctx->pc = 0x8000C514u;
    ctx->downcount -= 2;
    // 8000C514: cmpwi   r3, 0
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

label_8000C518:
    ctx->pc = 0x8000C518u;
    // 8000C518: bc    4, 2, 0x8000C524
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000C524;
        }
    }

label_8000C51C:
    ctx->pc = 0x8000C51Cu;
    ctx->downcount -= 2;
    // 8000C51C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8000C520:
    ctx->pc = 0x8000C520u;
    // 8000C520: b       0x8000C584
    {
            goto label_8000C584;
    }

label_8000C524:
    ctx->pc = 0x8000C524u;
    ctx->downcount -= 7;
    // 8000C524: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000C528:
    ctx->pc = 0x8000C528u;
    // 8000C528: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8000C52C:
    ctx->pc = 0x8000C52Cu;
    // 8000C52C: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_8000C530:
    ctx->pc = 0x8000C530u;
    // 8000C530: li      r3, 208
    ctx->gpr[3] = (u32)(s32)(208);

label_8000C534:
    ctx->pc = 0x8000C534u;
    // 8000C534: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000C538:
    ctx->pc = 0x8000C538u;
    // 8000C538: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8000C53C:
    ctx->pc = 0x8000C53Cu;
    // 8000C53C: bl      0x8000B7B0
    {
            ctx->lr = 0x8000C540u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000B7B0u;
                return;
            }
            goto label_8000B7B0;
    }

label_8000C540:
    ctx->pc = 0x8000C540u;
    ctx->downcount -= 5;
    // 8000C540: rlwinm r0, r3, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_8000C544:
    ctx->pc = 0x8000C544u;
    // 8000C544: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000C548:
    ctx->pc = 0x8000C548u;
    // 8000C548: cmpwi   r0, 1
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

label_8000C54C:
    ctx->pc = 0x8000C54Cu;
    // 8000C54C: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8000C550:
    ctx->pc = 0x8000C550u;
    // 8000C550: bc    12, 2, 0x8000C580
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000C580;
        }
    }

label_8000C554:
    ctx->pc = 0x8000C554u;
    ctx->downcount -= 1;
    // 8000C554: bc    4, 0, 0x8000C564
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000C564;
        }
    }

label_8000C558:
    ctx->pc = 0x8000C558u;
    ctx->downcount -= 2;
    // 8000C558: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000C55C:
    ctx->pc = 0x8000C55Cu;
    // 8000C55C: bc    4, 0, 0x8000C570
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000C570;
        }
    }

label_8000C560:
    ctx->pc = 0x8000C560u;
    ctx->downcount -= 1;
    // 8000C560: b       0x8000C580
    {
            goto label_8000C580;
    }

label_8000C564:
    ctx->pc = 0x8000C564u;
    ctx->downcount -= 2;
    // 8000C564: cmpwi   r0, 3
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

label_8000C568:
    ctx->pc = 0x8000C568u;
    // 8000C568: bc    4, 0, 0x8000C580
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000C580;
        }
    }

label_8000C56C:
    ctx->pc = 0x8000C56Cu;
    ctx->downcount -= 1;
    // 8000C56C: b       0x8000C578
    {
            goto label_8000C578;
    }

label_8000C570:
    ctx->pc = 0x8000C570u;
    ctx->downcount -= 2;
    // 8000C570: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000C574:
    ctx->pc = 0x8000C574u;
    // 8000C574: b       0x8000C584
    {
            goto label_8000C584;
    }

label_8000C578:
    ctx->pc = 0x8000C578u;
    ctx->downcount -= 2;
    // 8000C578: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_8000C57C:
    ctx->pc = 0x8000C57Cu;
    // 8000C57C: b       0x8000C584
    {
            goto label_8000C584;
    }

label_8000C580:
    ctx->pc = 0x8000C580u;
    ctx->downcount -= 1;
    // 8000C580: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8000C584:
    ctx->pc = 0x8000C584u;
    ctx->downcount -= 7;
    // 8000C584: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000C588:
    ctx->pc = 0x8000C588u;
    // 8000C588: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8000C58C:
    ctx->pc = 0x8000C58Cu;
    // 8000C58C: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8000C590:
    ctx->pc = 0x8000C590u;
    // 8000C590: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000C594:
    ctx->pc = 0x8000C594u;
    // 8000C594: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8000C598:
    ctx->pc = 0x8000C598u;
    // 8000C598: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000C59C:
    ctx->pc = 0x8000C59Cu;
    ctx->downcount -= 8;
    // 8000C59C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000C5A0:
    ctx->pc = 0x8000C5A0u;
    // 8000C5A0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000C5A4:
    ctx->pc = 0x8000C5A4u;
    // 8000C5A4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000C5A8:
    ctx->pc = 0x8000C5A8u;
    // 8000C5A8: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8000C5AC:
    ctx->pc = 0x8000C5ACu;
    // 8000C5AC: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8000C5B0:
    ctx->pc = 0x8000C5B0u;
    // 8000C5B0: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8000C5B4:
    ctx->pc = 0x8000C5B4u;
    // 8000C5B4: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8000C5B8:
    ctx->pc = 0x8000C5B8u;
    // 8000C5B8: bl      0x8000C440
    {
            ctx->lr = 0x8000C5BCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000C440u;
                return;
            }
            goto label_8000C440;
    }

label_8000C5BC:
    ctx->pc = 0x8000C5BCu;
    ctx->downcount -= 2;
    // 8000C5BC: rlwinm. r0, r3, 0, 24, 31
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

label_8000C5C0:
    ctx->pc = 0x8000C5C0u;
    // 8000C5C0: bc    4, 2, 0x8000C5CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000C5CC;
        }
    }

label_8000C5C4:
    ctx->pc = 0x8000C5C4u;
    ctx->downcount -= 2;
    // 8000C5C4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8000C5C8:
    ctx->pc = 0x8000C5C8u;
    // 8000C5C8: b       0x8000C640
    {
            goto label_8000C640;
    }

label_8000C5CC:
    ctx->pc = 0x8000C5CCu;
    ctx->downcount -= 1;
    // 8000C5CC: bl      0x800093D8
    {
            ctx->lr = 0x8000C5D0u;
            ctx->pc = 0x800093D8u;
            return;
    }

label_8000C5D0:
    ctx->pc = 0x8000C5D0u;
    ctx->downcount -= 2;
    // 8000C5D0: cmpwi   r3, 0
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

label_8000C5D4:
    ctx->pc = 0x8000C5D4u;
    // 8000C5D4: bc    4, 2, 0x8000C5E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000C5E0;
        }
    }

label_8000C5D8:
    ctx->pc = 0x8000C5D8u;
    ctx->downcount -= 2;
    // 8000C5D8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8000C5DC:
    ctx->pc = 0x8000C5DCu;
    // 8000C5DC: b       0x8000C640
    {
            goto label_8000C640;
    }

label_8000C5E0:
    ctx->pc = 0x8000C5E0u;
    ctx->downcount -= 7;
    // 8000C5E0: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000C5E4:
    ctx->pc = 0x8000C5E4u;
    // 8000C5E4: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8000C5E8:
    ctx->pc = 0x8000C5E8u;
    // 8000C5E8: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_8000C5EC:
    ctx->pc = 0x8000C5ECu;
    // 8000C5EC: li      r3, 209
    ctx->gpr[3] = (u32)(s32)(209);

label_8000C5F0:
    ctx->pc = 0x8000C5F0u;
    // 8000C5F0: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000C5F4:
    ctx->pc = 0x8000C5F4u;
    // 8000C5F4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8000C5F8:
    ctx->pc = 0x8000C5F8u;
    // 8000C5F8: bl      0x8000B7B0
    {
            ctx->lr = 0x8000C5FCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000B7B0u;
                return;
            }
            goto label_8000B7B0;
    }

label_8000C5FC:
    ctx->pc = 0x8000C5FCu;
    ctx->downcount -= 5;
    // 8000C5FC: rlwinm r0, r3, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_8000C600:
    ctx->pc = 0x8000C600u;
    // 8000C600: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000C604:
    ctx->pc = 0x8000C604u;
    // 8000C604: cmpwi   r0, 1
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

label_8000C608:
    ctx->pc = 0x8000C608u;
    // 8000C608: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8000C60C:
    ctx->pc = 0x8000C60Cu;
    // 8000C60C: bc    12, 2, 0x8000C63C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000C63C;
        }
    }

label_8000C610:
    ctx->pc = 0x8000C610u;
    ctx->downcount -= 1;
    // 8000C610: bc    4, 0, 0x8000C620
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000C620;
        }
    }

label_8000C614:
    ctx->pc = 0x8000C614u;
    ctx->downcount -= 2;
    // 8000C614: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000C618:
    ctx->pc = 0x8000C618u;
    // 8000C618: bc    4, 0, 0x8000C62C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000C62C;
        }
    }

label_8000C61C:
    ctx->pc = 0x8000C61Cu;
    ctx->downcount -= 1;
    // 8000C61C: b       0x8000C63C
    {
            goto label_8000C63C;
    }

label_8000C620:
    ctx->pc = 0x8000C620u;
    ctx->downcount -= 2;
    // 8000C620: cmpwi   r0, 3
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

label_8000C624:
    ctx->pc = 0x8000C624u;
    // 8000C624: bc    4, 0, 0x8000C63C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000C63C;
        }
    }

label_8000C628:
    ctx->pc = 0x8000C628u;
    ctx->downcount -= 1;
    // 8000C628: b       0x8000C634
    {
            goto label_8000C634;
    }

label_8000C62C:
    ctx->pc = 0x8000C62Cu;
    ctx->downcount -= 2;
    // 8000C62C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000C630:
    ctx->pc = 0x8000C630u;
    // 8000C630: b       0x8000C640
    {
            goto label_8000C640;
    }

label_8000C634:
    ctx->pc = 0x8000C634u;
    ctx->downcount -= 2;
    // 8000C634: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_8000C638:
    ctx->pc = 0x8000C638u;
    // 8000C638: b       0x8000C640
    {
            goto label_8000C640;
    }

label_8000C63C:
    ctx->pc = 0x8000C63Cu;
    ctx->downcount -= 1;
    // 8000C63C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8000C640:
    ctx->pc = 0x8000C640u;
    ctx->downcount -= 7;
    // 8000C640: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000C644:
    ctx->pc = 0x8000C644u;
    // 8000C644: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8000C648:
    ctx->pc = 0x8000C648u;
    // 8000C648: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8000C64C:
    ctx->pc = 0x8000C64Cu;
    // 8000C64C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000C650:
    ctx->pc = 0x8000C650u;
    // 8000C650: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8000C654:
    ctx->pc = 0x8000C654u;
    // 8000C654: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000C658:
    ctx->pc = 0x8000C658u;
    ctx->downcount -= 2;
    // 8000C658: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_8000C65C:
    ctx->pc = 0x8000C65Cu;
    // 8000C65C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000C660:
    ctx->pc = 0x8000C660u;
    ctx->downcount -= 2;
    // 8000C660: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_8000C664:
    ctx->pc = 0x8000C664u;
    // 8000C664: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000C668:
    ctx->pc = 0x8000C668u;
    ctx->downcount -= 2;
    // 8000C668: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000C66C:
    ctx->pc = 0x8000C66Cu;
    // 8000C66C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000C670:
    ctx->pc = 0x8000C670u;
    ctx->downcount -= 2;
    // 8000C670: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000C674:
    ctx->pc = 0x8000C674u;
    // 8000C674: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000C678:
    ctx->pc = 0x8000C678u;
    ctx->downcount -= 2;
    // 8000C678: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000C67C:
    ctx->pc = 0x8000C67Cu;
    // 8000C67C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000C680:
    ctx->pc = 0x8000C680u;
    ctx->downcount -= 2;
    // 8000C680: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_8000C684:
    ctx->pc = 0x8000C684u;
    // 8000C684: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000C688:
    ctx->pc = 0x8000C688u;
    ctx->downcount -= 2;
    // 8000C688: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_8000C68C:
    ctx->pc = 0x8000C68Cu;
    // 8000C68C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000C690:
    ctx->pc = 0x8000C690u;
    ctx->downcount -= 2;
    // 8000C690: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_8000C694:
    ctx->pc = 0x8000C694u;
    // 8000C694: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000C698:
    ctx->pc = 0x8000C698u;
    ctx->downcount -= 2;
    // 8000C698: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_8000C69C:
    ctx->pc = 0x8000C69Cu;
    // 8000C69C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000C6A0:
    ctx->pc = 0x8000C6A0u;
    ctx->downcount -= 4;
    // 8000C6A0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000C6A4:
    ctx->pc = 0x8000C6A4u;
    // 8000C6A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000C6A8:
    ctx->pc = 0x8000C6A8u;
    // 8000C6A8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000C6AC:
    ctx->pc = 0x8000C6ACu;
    // 8000C6AC: bl      0x800489E4
    {
            ctx->lr = 0x8000C6B0u;
            ctx->pc = 0x800489E4u;
            return;
    }

label_8000C6B0:
    ctx->pc = 0x8000C6B0u;
    ctx->downcount -= 6;
    // 8000C6B0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000C6B4:
    ctx->pc = 0x8000C6B4u;
    // 8000C6B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000C6B8:
    ctx->pc = 0x8000C6B8u;
    // 8000C6B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000C6BC:
    ctx->pc = 0x8000C6BCu;
    // 8000C6BC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000C6C0:
    ctx->pc = 0x8000C6C0u;
    // 8000C6C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000C6C4:
    ctx->pc = 0x8000C6C4u;
    ctx->downcount -= 5;
    // 8000C6C4: stwu     r1, -2064(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-2064);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000C6C8:
    ctx->pc = 0x8000C6C8u;
    // 8000C6C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000C6CC:
    ctx->pc = 0x8000C6CCu;
    // 8000C6CC: stw     r0, 2068(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(2068);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000C6D0:
    ctx->pc = 0x8000C6D0u;
    // 8000C6D0: stw     r31, 2060(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(2060);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8000C6D4:
    ctx->pc = 0x8000C6D4u;
    // 8000C6D4: bl      0x800489E8
    {
            ctx->lr = 0x8000C6D8u;
            ctx->pc = 0x800489E8u;
            return;
    }

label_8000C6D8:
    ctx->pc = 0x8000C6D8u;
    ctx->downcount -= 2;
    // 8000C6D8: or.   r31, r3, r3
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

label_8000C6DC:
    ctx->pc = 0x8000C6DCu;
    // 8000C6DC: bc    12, 1, 0x8000C6E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000C6E8;
        }
    }

label_8000C6E0:
    ctx->pc = 0x8000C6E0u;
    ctx->downcount -= 2;
    // 8000C6E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000C6E4:
    ctx->pc = 0x8000C6E4u;
    // 8000C6E4: b       0x8000C720
    {
            goto label_8000C720;
    }

label_8000C6E8:
    ctx->pc = 0x8000C6E8u;
    ctx->downcount -= 3;
    // 8000C6E8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8000C6EC:
    ctx->pc = 0x8000C6ECu;
    // 8000C6EC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8000C6F0:
    ctx->pc = 0x8000C6F0u;
    // 8000C6F0: bl      0x800489F0
    {
            ctx->lr = 0x8000C6F4u;
            ctx->pc = 0x800489F0u;
            return;
    }

label_8000C6F4:
    ctx->pc = 0x8000C6F4u;
    ctx->downcount -= 2;
    // 8000C6F4: cmpwi   r3, 0
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

label_8000C6F8:
    ctx->pc = 0x8000C6F8u;
    // 8000C6F8: bc    4, 2, 0x8000C714
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000C714;
        }
    }

label_8000C6FC:
    ctx->pc = 0x8000C6FCu;
    ctx->downcount -= 5;
    // 8000C6FC: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000C700:
    ctx->pc = 0x8000C700u;
    // 8000C700: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8000C704:
    ctx->pc = 0x8000C704u;
    // 8000C704: addi    r3, r3, -17568
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17568);

label_8000C708:
    ctx->pc = 0x8000C708u;
    // 8000C708: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_8000C70C:
    ctx->pc = 0x8000C70Cu;
    // 8000C70C: bl      0x8000CAEC
    {
            ctx->lr = 0x8000C710u;
            goto label_8000CAEC;
    }

label_8000C710:
    ctx->pc = 0x8000C710u;
    ctx->downcount -= 1;
    // 8000C710: b       0x8000C71C
    {
            goto label_8000C71C;
    }

label_8000C714:
    ctx->pc = 0x8000C714u;
    ctx->downcount -= 2;
    // 8000C714: li      r3, -10009
    ctx->gpr[3] = (u32)(s32)(-10009);

label_8000C718:
    ctx->pc = 0x8000C718u;
    // 8000C718: b       0x8000C720
    {
            goto label_8000C720;
    }

label_8000C71C:
    ctx->pc = 0x8000C71Cu;
    ctx->downcount -= 1;
    // 8000C71C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8000C720:
    ctx->pc = 0x8000C720u;
    ctx->downcount -= 6;
    // 8000C720: lwz     r0, 2068(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(2068);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000C724:
    ctx->pc = 0x8000C724u;
    // 8000C724: lwz     r31, 2060(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(2060);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8000C728:
    ctx->pc = 0x8000C728u;
    // 8000C728: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000C72C:
    ctx->pc = 0x8000C72Cu;
    // 8000C72C: addi    r1, r1, 2064
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(2064);

label_8000C730:
    ctx->pc = 0x8000C730u;
    // 8000C730: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000C734:
    ctx->pc = 0x8000C734u;
    ctx->downcount -= 4;
    // 8000C734: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000C738:
    ctx->pc = 0x8000C738u;
    // 8000C738: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000C73C:
    ctx->pc = 0x8000C73Cu;
    // 8000C73C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000C740:
    ctx->pc = 0x8000C740u;
    // 8000C740: bl      0x80048A00
    {
            ctx->lr = 0x8000C744u;
            ctx->pc = 0x80048A00u;
            return;
    }

label_8000C744:
    ctx->pc = 0x8000C744u;
    ctx->downcount -= 6;
    // 8000C744: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000C748:
    ctx->pc = 0x8000C748u;
    // 8000C748: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000C74C:
    ctx->pc = 0x8000C74Cu;
    // 8000C74C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000C750:
    ctx->pc = 0x8000C750u;
    // 8000C750: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000C754:
    ctx->pc = 0x8000C754u;
    // 8000C754: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000C758:
    ctx->pc = 0x8000C758u;
    ctx->downcount -= 4;
    // 8000C758: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000C75C:
    ctx->pc = 0x8000C75Cu;
    // 8000C75C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000C760:
    ctx->pc = 0x8000C760u;
    // 8000C760: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000C764:
    ctx->pc = 0x8000C764u;
    // 8000C764: bl      0x80048A04
    {
            ctx->lr = 0x8000C768u;
            ctx->pc = 0x80048A04u;
            return;
    }

label_8000C768:
    ctx->pc = 0x8000C768u;
    ctx->downcount -= 6;
    // 8000C768: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000C76C:
    ctx->pc = 0x8000C76Cu;
    // 8000C76C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000C770:
    ctx->pc = 0x8000C770u;
    // 8000C770: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000C774:
    ctx->pc = 0x8000C774u;
    // 8000C774: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000C778:
    ctx->pc = 0x8000C778u;
    // 8000C778: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000C77C:
    ctx->pc = 0x8000C77Cu;
    ctx->downcount -= 13;
    // 8000C77C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000C780:
    ctx->pc = 0x8000C780u;
    // 8000C780: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000C784:
    ctx->pc = 0x8000C784u;
    // 8000C784: lis     r5, -32762
    ctx->gpr[5] = ((u32)(s32)(-32762) << 16);

label_8000C788:
    ctx->pc = 0x8000C788u;
    // 8000C788: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000C78C:
    ctx->pc = 0x8000C78Cu;
    // 8000C78C: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8000C790:
    ctx->pc = 0x8000C790u;
    // 8000C790: addi    r31, r5, 10752
    ctx->gpr[31] = ctx->gpr[5] + (u32)(s32)(10752);

label_8000C794:
    ctx->pc = 0x8000C794u;
    // 8000C794: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8000C798:
    ctx->pc = 0x8000C798u;
    // 8000C798: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8000C79C:
    ctx->pc = 0x8000C79Cu;
    // 8000C79C: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8000C7A0:
    ctx->pc = 0x8000C7A0u;
    // 8000C7A0: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000C7A4:
    ctx->pc = 0x8000C7A4u;
    // 8000C7A4: lwz     r0, -32312(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32312);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000C7A8:
    ctx->pc = 0x8000C7A8u;
    // 8000C7A8: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000C7AC:
    ctx->pc = 0x8000C7ACu;
    // 8000C7AC: bc    4, 2, 0x8000C7C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000C7C8;
        }
    }

label_8000C7B0:
    ctx->pc = 0x8000C7B0u;
    ctx->downcount -= 4;
    // 8000C7B0: addi    r4, r31, 0
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(0);

label_8000C7B4:
    ctx->pc = 0x8000C7B4u;
    // 8000C7B4: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_8000C7B8:
    ctx->pc = 0x8000C7B8u;
    // 8000C7B8: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8000C7BC:
    ctx->pc = 0x8000C7BCu;
    // 8000C7BC: bl      0x8000CF98
    {
            ctx->lr = 0x8000C7C0u;
            goto label_8000CF98;
    }

label_8000C7C0:
    ctx->pc = 0x8000C7C0u;
    ctx->downcount -= 2;
    // 8000C7C0: li      r3, -10001
    ctx->gpr[3] = (u32)(s32)(-10001);

label_8000C7C4:
    ctx->pc = 0x8000C7C4u;
    // 8000C7C4: b       0x8000C820
    {
            goto label_8000C820;
    }

label_8000C7C8:
    ctx->pc = 0x8000C7C8u;
    ctx->downcount -= 6;
    // 8000C7C8: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000C7CC:
    ctx->pc = 0x8000C7CCu;
    // 8000C7CC: or   r6, r4, r4
    {
        ctx->gpr[6] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8000C7D0:
    ctx->pc = 0x8000C7D0u;
    // 8000C7D0: addi    r4, r31, 20
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(20);

label_8000C7D4:
    ctx->pc = 0x8000C7D4u;
    // 8000C7D4: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_8000C7D8:
    ctx->pc = 0x8000C7D8u;
    // 8000C7D8: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8000C7DC:
    ctx->pc = 0x8000C7DCu;
    // 8000C7DC: bl      0x8000CF98
    {
            ctx->lr = 0x8000C7E0u;
            goto label_8000CF98;
    }

label_8000C7E0:
    ctx->pc = 0x8000C7E0u;
    ctx->downcount -= 1;
    // 8000C7E0: b       0x8000C814
    {
            goto label_8000C814;
    }

label_8000C7E4:
    ctx->downcount -= 5;
    // 8000C7E4: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8000C7E8:
    // 8000C7E8: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_8000C7EC:
    // 8000C7EC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8000C7F0:
    // 8000C7F0: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8000C7F4:
    // 8000C7F4: bl      0x8000CF98
    {
            ctx->lr = 0x8000C7F8u;
            goto label_8000CF98;
    }

label_8000C7F8:
    ctx->downcount -= 3;
    // 8000C7F8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8000C7FC:
    // 8000C7FC: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8000C800:
    // 8000C800: bl      0x800489F8
    {
            ctx->lr = 0x8000C804u;
            ctx->pc = 0x800489F8u;
            return;
    }

label_8000C804:
    ctx->downcount -= 2;
    // 8000C804: cmpwi   r3, 0
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

label_8000C808:
    // 8000C808: bc    12, 2, 0x8000C81C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000C81C;
        }
    }

label_8000C80C:
    ctx->downcount -= 2;
    // 8000C80C: add   r29, r29, r3
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_8000C810:
    // 8000C810: subf   r30, r3, r30
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[30];
        u32 res = a + b + 1u;
        ctx->gpr[30] = res;
    }

label_8000C814:
    ctx->downcount -= 2;
    // 8000C814: cmpwi   r30, 0
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

label_8000C818:
    // 8000C818: bc    12, 1, 0x8000C7E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000C7E4u;
                return;
            }
            goto label_8000C7E4;
        }
    }

label_8000C81C:
    ctx->pc = 0x8000C81Cu;
    ctx->downcount -= 1;
    // 8000C81C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000C820:
    ctx->pc = 0x8000C820u;
    ctx->downcount -= 8;
    // 8000C820: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000C824:
    ctx->pc = 0x8000C824u;
    // 8000C824: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8000C828:
    ctx->pc = 0x8000C828u;
    // 8000C828: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8000C82C:
    ctx->pc = 0x8000C82Cu;
    // 8000C82C: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8000C830:
    ctx->pc = 0x8000C830u;
    // 8000C830: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000C834:
    ctx->pc = 0x8000C834u;
    // 8000C834: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8000C838:
    ctx->pc = 0x8000C838u;
    // 8000C838: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000C83C:
    ctx->pc = 0x8000C83Cu;
    ctx->downcount -= 20;
    // 8000C83C: stwu     r1, -2080(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-2080);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000C840:
    ctx->pc = 0x8000C840u;
    // 8000C840: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000C844:
    ctx->pc = 0x8000C844u;
    // 8000C844: stw     r0, 2084(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(2084);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000C848:
    ctx->pc = 0x8000C848u;
    // 8000C848: stmw     r27, 2060(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(2060);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8000C84C:
    ctx->pc = 0x8000C84Cu;
    // 8000C84C: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000C850:
    ctx->pc = 0x8000C850u;
    // 8000C850: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8000C854:
    ctx->pc = 0x8000C854u;
    // 8000C854: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_8000C858:
    ctx->pc = 0x8000C858u;
    // 8000C858: lwz     r0, -32312(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32312);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000C85C:
    ctx->pc = 0x8000C85Cu;
    // 8000C85C: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000C860:
    ctx->pc = 0x8000C860u;
    // 8000C860: bc    4, 2, 0x8000C86C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000C86C;
        }
    }

label_8000C864:
    ctx->pc = 0x8000C864u;
    ctx->downcount -= 2;
    // 8000C864: li      r3, -10001
    ctx->gpr[3] = (u32)(s32)(-10001);

label_8000C868:
    ctx->pc = 0x8000C868u;
    // 8000C868: b       0x8000C914
    {
            goto label_8000C914;
    }

label_8000C86C:
    ctx->pc = 0x8000C86Cu;
    ctx->downcount -= 7;
    // 8000C86C: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8000C870:
    ctx->pc = 0x8000C870u;
    // 8000C870: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8000C874:
    ctx->pc = 0x8000C874u;
    // 8000C874: addi    r4, r3, 10844
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(10844);

label_8000C878:
    ctx->pc = 0x8000C878u;
    // 8000C878: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8000C87C:
    ctx->pc = 0x8000C87Cu;
    // 8000C87C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8000C880:
    ctx->pc = 0x8000C880u;
    // 8000C880: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8000C884:
    ctx->pc = 0x8000C884u;
    // 8000C884: bl      0x8000CF98
    {
            ctx->lr = 0x8000C888u;
            goto label_8000CF98;
    }

label_8000C888:
    ctx->pc = 0x8000C888u;
    ctx->downcount -= 3;
    // 8000C888: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000C88C:
    ctx->pc = 0x8000C88Cu;
    // 8000C88C: addi    r31, r3, -17568
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-17568);

label_8000C890:
    ctx->pc = 0x8000C890u;
    // 8000C890: b       0x8000C8C8
    {
            goto label_8000C8C8;
    }

label_8000C894:
    ctx->downcount -= 2;
    // 8000C894: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_8000C898:
    // 8000C898: bl      0x800489E8
    {
            ctx->lr = 0x8000C89Cu;
            ctx->pc = 0x800489E8u;
            return;
    }

label_8000C89C:
    ctx->downcount -= 2;
    // 8000C89C: or.   r28, r3, r3
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

label_8000C8A0:
    // 8000C8A0: bc    12, 2, 0x8000C8C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000C8C8;
        }
    }

label_8000C8A4:
    ctx->downcount -= 3;
    // 8000C8A4: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8000C8A8:
    // 8000C8A8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8000C8AC:
    // 8000C8AC: bl      0x800489F0
    {
            ctx->lr = 0x8000C8B0u;
            ctx->pc = 0x800489F0u;
            return;
    }

label_8000C8B0:
    ctx->downcount -= 2;
    // 8000C8B0: or.   r29, r3, r3
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

label_8000C8B4:
    // 8000C8B4: bc    4, 2, 0x8000C8C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000C8C8;
        }
    }

label_8000C8B8:
    ctx->downcount -= 4;
    // 8000C8B8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8000C8BC:
    // 8000C8BC: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8000C8C0:
    // 8000C8C0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_8000C8C4:
    // 8000C8C4: bl      0x8000CAEC
    {
            ctx->lr = 0x8000C8C8u;
            goto label_8000CAEC;
    }

label_8000C8C8:
    ctx->downcount -= 2;
    // 8000C8C8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8000C8CC:
    // 8000C8CC: bl      0x8000CC44
    {
            ctx->lr = 0x8000C8D0u;
            goto label_8000CC44;
    }

label_8000C8D0:
    ctx->downcount -= 2;
    // 8000C8D0: cmplw   r3, r30
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(ctx->gpr[30]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000C8D4:
    // 8000C8D4: bc    12, 0, 0x8000C894
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000C894u;
                return;
            }
            goto label_8000C894;
        }
    }

label_8000C8D8:
    ctx->pc = 0x8000C8D8u;
    ctx->downcount -= 2;
    // 8000C8D8: cmplwi  r29, 0x0000
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

label_8000C8DC:
    ctx->pc = 0x8000C8DCu;
    // 8000C8DC: bc    4, 2, 0x8000C8F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000C8F8;
        }
    }

label_8000C8E0:
    ctx->pc = 0x8000C8E0u;
    ctx->downcount -= 5;
    // 8000C8E0: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000C8E4:
    ctx->pc = 0x8000C8E4u;
    // 8000C8E4: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8000C8E8:
    ctx->pc = 0x8000C8E8u;
    // 8000C8E8: addi    r3, r3, -17568
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17568);

label_8000C8EC:
    ctx->pc = 0x8000C8ECu;
    // 8000C8EC: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8000C8F0:
    ctx->pc = 0x8000C8F0u;
    // 8000C8F0: bl      0x8000C9E4
    {
            ctx->lr = 0x8000C8F4u;
            goto label_8000C9E4;
    }

label_8000C8F4:
    ctx->pc = 0x8000C8F4u;
    ctx->downcount -= 1;
    // 8000C8F4: b       0x8000C910
    {
            goto label_8000C910;
    }

label_8000C8F8:
    ctx->pc = 0x8000C8F8u;
    ctx->downcount -= 6;
    // 8000C8F8: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8000C8FC:
    ctx->pc = 0x8000C8FCu;
    // 8000C8FC: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8000C900:
    ctx->pc = 0x8000C900u;
    // 8000C900: addi    r4, r3, 10884
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(10884);

label_8000C904:
    ctx->pc = 0x8000C904u;
    // 8000C904: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_8000C908:
    ctx->pc = 0x8000C908u;
    // 8000C908: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8000C90C:
    ctx->pc = 0x8000C90Cu;
    // 8000C90C: bl      0x8000CF98
    {
            ctx->lr = 0x8000C910u;
            goto label_8000CF98;
    }

label_8000C910:
    ctx->pc = 0x8000C910u;
    ctx->downcount -= 1;
    // 8000C910: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8000C914:
    ctx->pc = 0x8000C914u;
    ctx->downcount -= 16;
    // 8000C914: lmw     r27, 2060(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(2060);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8000C918:
    ctx->pc = 0x8000C918u;
    // 8000C918: lwz     r0, 2084(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(2084);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000C91C:
    ctx->pc = 0x8000C91Cu;
    // 8000C91C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000C920:
    ctx->pc = 0x8000C920u;
    // 8000C920: addi    r1, r1, 2080
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(2080);

label_8000C924:
    ctx->pc = 0x8000C924u;
    // 8000C924: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000C928:
    ctx->pc = 0x8000C928u;
    ctx->downcount -= 2;
    // 8000C928: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000C92C:
    ctx->pc = 0x8000C92Cu;
    // 8000C92C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000C930:
    ctx->pc = 0x8000C930u;
    ctx->downcount -= 3;
    // 8000C930: lwz     r0, -32312(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32312);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000C934:
    ctx->pc = 0x8000C934u;
    // 8000C934: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000C938:
    ctx->pc = 0x8000C938u;
    // 8000C938: bc    12, 2, 0x8000C944
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000C944;
        }
    }

label_8000C93C:
    ctx->pc = 0x8000C93Cu;
    ctx->downcount -= 2;
    // 8000C93C: li      r3, -10005
    ctx->gpr[3] = (u32)(s32)(-10005);

label_8000C940:
    ctx->pc = 0x8000C940u;
    // 8000C940: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000C944:
    ctx->pc = 0x8000C944u;
    ctx->downcount -= 4;
    // 8000C944: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8000C948:
    ctx->pc = 0x8000C948u;
    // 8000C948: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000C94C:
    ctx->pc = 0x8000C94Cu;
    // 8000C94C: stw     r0, -32312(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32312);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000C950:
    ctx->pc = 0x8000C950u;
    // 8000C950: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000C954:
    ctx->pc = 0x8000C954u;
    ctx->downcount -= 2;
    // 8000C954: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000C958:
    ctx->pc = 0x8000C958u;
    // 8000C958: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000C95C:
    ctx->pc = 0x8000C95Cu;
    ctx->downcount -= 13;
    // 8000C95C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000C960:
    ctx->pc = 0x8000C960u;
    // 8000C960: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000C964:
    ctx->pc = 0x8000C964u;
    // 8000C964: lis     r5, -32762
    ctx->gpr[5] = ((u32)(s32)(-32762) << 16);

label_8000C968:
    ctx->pc = 0x8000C968u;
    // 8000C968: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000C96C:
    ctx->pc = 0x8000C96Cu;
    // 8000C96C: addi    r0, r5, 10932
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(10932);

label_8000C970:
    ctx->pc = 0x8000C970u;
    // 8000C970: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8000C974:
    ctx->pc = 0x8000C974u;
    // 8000C974: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8000C978:
    ctx->pc = 0x8000C978u;
    // 8000C978: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_8000C97C:
    ctx->pc = 0x8000C97Cu;
    // 8000C97C: stw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8000C980:
    ctx->pc = 0x8000C980u;
    // 8000C980: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000C984:
    ctx->pc = 0x8000C984u;
    // 8000C984: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8000C988:
    ctx->pc = 0x8000C988u;
    // 8000C988: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8000C98C:
    ctx->pc = 0x8000C98Cu;
    // 8000C98C: bl      0x8000CF98
    {
            ctx->lr = 0x8000C990u;
            goto label_8000CF98;
    }

label_8000C990:
    ctx->pc = 0x8000C990u;
    ctx->downcount -= 3;
    // 8000C990: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8000C994:
    ctx->pc = 0x8000C994u;
    // 8000C994: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8000C998:
    ctx->pc = 0x8000C998u;
    // 8000C998: bl      0x800489E0
    {
            ctx->lr = 0x8000C99Cu;
            ctx->pc = 0x800489E0u;
            return;
    }

label_8000C99C:
    ctx->pc = 0x8000C99Cu;
    ctx->downcount -= 5;
    // 8000C99C: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8000C9A0:
    ctx->pc = 0x8000C9A0u;
    // 8000C9A0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8000C9A4:
    ctx->pc = 0x8000C9A4u;
    // 8000C9A4: addi    r4, r4, 10952
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10952);

label_8000C9A8:
    ctx->pc = 0x8000C9A8u;
    // 8000C9A8: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8000C9AC:
    ctx->pc = 0x8000C9ACu;
    // 8000C9AC: bl      0x8000CF98
    {
            ctx->lr = 0x8000C9B0u;
            goto label_8000CF98;
    }

label_8000C9B0:
    ctx->pc = 0x8000C9B0u;
    ctx->downcount -= 6;
    // 8000C9B0: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000C9B4:
    ctx->pc = 0x8000C9B4u;
    // 8000C9B4: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_8000C9B8:
    ctx->pc = 0x8000C9B8u;
    // 8000C9B8: addi    r3, r3, -17568
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17568);

label_8000C9BC:
    ctx->pc = 0x8000C9BCu;
    // 8000C9BC: li      r5, 2048
    ctx->gpr[5] = (u32)(s32)(2048);

label_8000C9C0:
    ctx->pc = 0x8000C9C0u;
    // 8000C9C0: addi    r4, r4, -19616
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-19616);

label_8000C9C4:
    ctx->pc = 0x8000C9C4u;
    // 8000C9C4: bl      0x8000CBF4
    {
            ctx->lr = 0x8000C9C8u;
            goto label_8000CBF4;
    }

label_8000C9C8:
    ctx->pc = 0x8000C9C8u;
    ctx->downcount -= 8;
    // 8000C9C8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000C9CC:
    ctx->pc = 0x8000C9CCu;
    // 8000C9CC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000C9D0:
    ctx->pc = 0x8000C9D0u;
    // 8000C9D0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8000C9D4:
    ctx->pc = 0x8000C9D4u;
    // 8000C9D4: lwz     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8000C9D8:
    ctx->pc = 0x8000C9D8u;
    // 8000C9D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000C9DC:
    ctx->pc = 0x8000C9DCu;
    // 8000C9DC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000C9E0:
    ctx->pc = 0x8000C9E0u;
    // 8000C9E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000C9E4:
    ctx->pc = 0x8000C9E4u;
    ctx->downcount -= 13;
    // 8000C9E4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000C9E8:
    ctx->pc = 0x8000C9E8u;
    // 8000C9E8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000C9EC:
    ctx->pc = 0x8000C9ECu;
    // 8000C9EC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000C9F0:
    ctx->pc = 0x8000C9F0u;
    // 8000C9F0: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8000C9F4:
    ctx->pc = 0x8000C9F4u;
    // 8000C9F4: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8000C9F8:
    ctx->pc = 0x8000C9F8u;
    // 8000C9F8: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8000C9FC:
    ctx->pc = 0x8000C9FCu;
    // 8000C9FC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000CA00:
    ctx->pc = 0x8000CA00u;
    // 8000CA00: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8000CA04:
    ctx->pc = 0x8000CA04u;
    // 8000CA04: stw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8000CA08:
    ctx->pc = 0x8000CA08u;
    // 8000CA08: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8000CA0C:
    ctx->pc = 0x8000CA0Cu;
    // 8000CA0C: lwz     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000CA10:
    ctx->pc = 0x8000CA10u;
    // 8000CA10: cmplw   r31, r0
    {
        u32 val_a = (u32)(ctx->gpr[31]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000CA14:
    ctx->pc = 0x8000CA14u;
    // 8000CA14: bc    4, 1, 0x8000CA20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000CA20;
        }
    }

label_8000CA18:
    ctx->pc = 0x8000CA18u;
    ctx->downcount -= 2;
    // 8000CA18: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_8000CA1C:
    ctx->pc = 0x8000CA1Cu;
    // 8000CA1C: b       0x8000CACC
    {
            goto label_8000CACC;
    }

label_8000CA20:
    ctx->pc = 0x8000CA20u;
    ctx->downcount -= 2;
    // 8000CA20: addi    r3, r30, 24
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(24);

label_8000CA24:
    ctx->pc = 0x8000CA24u;
    // 8000CA24: bl      0x8000D00C
    {
            ctx->lr = 0x8000CA28u;
            goto label_8000D00C;
    }

label_8000CA28:
    ctx->pc = 0x8000CA28u;
    ctx->downcount -= 7;
    // 8000CA28: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000CA2C:
    ctx->pc = 0x8000CA2Cu;
    // 8000CA2C: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000CA30:
    ctx->pc = 0x8000CA30u;
    // 8000CA30: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000CA34:
    ctx->pc = 0x8000CA34u;
    // 8000CA34: subf   r3, r3, r4
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_8000CA38:
    ctx->pc = 0x8000CA38u;
    // 8000CA38: subf   r29, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[29] = res;
    }

label_8000CA3C:
    ctx->pc = 0x8000CA3Cu;
    // 8000CA3C: cmplw   r31, r29
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

label_8000CA40:
    ctx->pc = 0x8000CA40u;
    // 8000CA40: bc    4, 0, 0x8000CA60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000CA60;
        }
    }

label_8000CA44:
    ctx->pc = 0x8000CA44u;
    ctx->downcount -= 3;
    // 8000CA44: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8000CA48:
    ctx->pc = 0x8000CA48u;
    // 8000CA48: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8000CA4C:
    ctx->pc = 0x8000CA4Cu;
    // 8000CA4C: bl      0x8000519C
    {
            ctx->lr = 0x8000CA50u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_8000CA50:
    ctx->pc = 0x8000CA50u;
    ctx->downcount -= 4;
    // 8000CA50: lwz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000CA54:
    ctx->pc = 0x8000CA54u;
    // 8000CA54: add   r0, r0, r31
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8000CA58:
    ctx->pc = 0x8000CA58u;
    // 8000CA58: stw     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000CA5C:
    ctx->pc = 0x8000CA5Cu;
    // 8000CA5C: b       0x8000CA8C
    {
            goto label_8000CA8C;
    }

label_8000CA60:
    ctx->pc = 0x8000CA60u;
    ctx->downcount -= 3;
    // 8000CA60: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8000CA64:
    ctx->pc = 0x8000CA64u;
    // 8000CA64: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8000CA68:
    ctx->pc = 0x8000CA68u;
    // 8000CA68: bl      0x8000519C
    {
            ctx->lr = 0x8000CA6Cu;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_8000CA6C:
    ctx->pc = 0x8000CA6Cu;
    ctx->downcount -= 4;
    // 8000CA6C: lwz     r4, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000CA70:
    ctx->pc = 0x8000CA70u;
    // 8000CA70: add   r3, r28, r29
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8000CA74:
    ctx->pc = 0x8000CA74u;
    // 8000CA74: subf   r5, r29, r31
    {
        u32 a = ~ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_8000CA78:
    ctx->pc = 0x8000CA78u;
    // 8000CA78: bl      0x8000519C
    {
            ctx->lr = 0x8000CA7Cu;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_8000CA7C:
    ctx->pc = 0x8000CA7Cu;
    ctx->downcount -= 4;
    // 8000CA7C: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000CA80:
    ctx->pc = 0x8000CA80u;
    // 8000CA80: add   r0, r0, r31
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8000CA84:
    ctx->pc = 0x8000CA84u;
    // 8000CA84: subf   r0, r29, r0
    {
        u32 a = ~ctx->gpr[29];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8000CA88:
    ctx->pc = 0x8000CA88u;
    // 8000CA88: stw     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000CA8C:
    ctx->pc = 0x8000CA8Cu;
    ctx->downcount -= 6;
    // 8000CA8C: lwz     r4, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000CA90:
    ctx->pc = 0x8000CA90u;
    // 8000CA90: lwz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000CA94:
    ctx->pc = 0x8000CA94u;
    // 8000CA94: lwz     r3, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000CA98:
    ctx->pc = 0x8000CA98u;
    // 8000CA98: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8000CA9C:
    ctx->pc = 0x8000CA9Cu;
    // 8000CA9C: cmplw   r3, r0
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

label_8000CAA0:
    ctx->pc = 0x8000CAA0u;
    // 8000CAA0: bc    4, 2, 0x8000CAA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000CAA8;
        }
    }

label_8000CAA4:
    ctx->pc = 0x8000CAA4u;
    ctx->downcount -= 1;
    // 8000CAA4: stw     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000CAA8:
    ctx->pc = 0x8000CAA8u;
    ctx->downcount -= 8;
    // 8000CAA8: lwz     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000CAAC:
    ctx->pc = 0x8000CAACu;
    // 8000CAAC: addi    r3, r30, 24
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(24);

label_8000CAB0:
    ctx->pc = 0x8000CAB0u;
    // 8000CAB0: add   r0, r0, r31
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8000CAB4:
    ctx->pc = 0x8000CAB4u;
    // 8000CAB4: stw     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000CAB8:
    ctx->pc = 0x8000CAB8u;
    // 8000CAB8: lwz     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000CABC:
    ctx->pc = 0x8000CABCu;
    // 8000CABC: subf   r0, r31, r0
    {
        u32 a = ~ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8000CAC0:
    ctx->pc = 0x8000CAC0u;
    // 8000CAC0: stw     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000CAC4:
    ctx->pc = 0x8000CAC4u;
    // 8000CAC4: bl      0x8000CFE8
    {
            ctx->lr = 0x8000CAC8u;
            goto label_8000CFE8;
    }

label_8000CAC8:
    ctx->pc = 0x8000CAC8u;
    ctx->downcount -= 1;
    // 8000CAC8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000CACC:
    ctx->pc = 0x8000CACCu;
    ctx->downcount -= 9;
    // 8000CACC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000CAD0:
    ctx->pc = 0x8000CAD0u;
    // 8000CAD0: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8000CAD4:
    ctx->pc = 0x8000CAD4u;
    // 8000CAD4: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8000CAD8:
    ctx->pc = 0x8000CAD8u;
    // 8000CAD8: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8000CADC:
    ctx->pc = 0x8000CADCu;
    // 8000CADC: lwz     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_8000CAE0:
    ctx->pc = 0x8000CAE0u;
    // 8000CAE0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000CAE4:
    ctx->pc = 0x8000CAE4u;
    // 8000CAE4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8000CAE8:
    ctx->pc = 0x8000CAE8u;
    // 8000CAE8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000CAEC:
    ctx->pc = 0x8000CAECu;
    ctx->downcount -= 13;
    // 8000CAEC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000CAF0:
    ctx->pc = 0x8000CAF0u;
    // 8000CAF0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000CAF4:
    ctx->pc = 0x8000CAF4u;
    // 8000CAF4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000CAF8:
    ctx->pc = 0x8000CAF8u;
    // 8000CAF8: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8000CAFC:
    ctx->pc = 0x8000CAFCu;
    // 8000CAFC: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8000CB00:
    ctx->pc = 0x8000CB00u;
    // 8000CB00: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8000CB04:
    ctx->pc = 0x8000CB04u;
    // 8000CB04: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000CB08:
    ctx->pc = 0x8000CB08u;
    // 8000CB08: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8000CB0C:
    ctx->pc = 0x8000CB0Cu;
    // 8000CB0C: stw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8000CB10:
    ctx->pc = 0x8000CB10u;
    // 8000CB10: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8000CB14:
    ctx->pc = 0x8000CB14u;
    // 8000CB14: lwz     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000CB18:
    ctx->pc = 0x8000CB18u;
    // 8000CB18: cmplw   r31, r0
    {
        u32 val_a = (u32)(ctx->gpr[31]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000CB1C:
    ctx->pc = 0x8000CB1Cu;
    // 8000CB1C: bc    4, 1, 0x8000CB28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000CB28;
        }
    }

label_8000CB20:
    ctx->pc = 0x8000CB20u;
    ctx->downcount -= 2;
    // 8000CB20: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_8000CB24:
    ctx->pc = 0x8000CB24u;
    // 8000CB24: b       0x8000CBD4
    {
            goto label_8000CBD4;
    }

label_8000CB28:
    ctx->pc = 0x8000CB28u;
    ctx->downcount -= 2;
    // 8000CB28: addi    r3, r30, 24
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(24);

label_8000CB2C:
    ctx->pc = 0x8000CB2Cu;
    // 8000CB2C: bl      0x8000D00C
    {
            ctx->lr = 0x8000CB30u;
            goto label_8000D00C;
    }

label_8000CB30:
    ctx->pc = 0x8000CB30u;
    ctx->downcount -= 7;
    // 8000CB30: lwz     r4, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000CB34:
    ctx->pc = 0x8000CB34u;
    // 8000CB34: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000CB38:
    ctx->pc = 0x8000CB38u;
    // 8000CB38: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000CB3C:
    ctx->pc = 0x8000CB3Cu;
    // 8000CB3C: subf   r4, r4, r3
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8000CB40:
    ctx->pc = 0x8000CB40u;
    // 8000CB40: subf   r29, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[29] = res;
    }

label_8000CB44:
    ctx->pc = 0x8000CB44u;
    // 8000CB44: cmplw   r29, r31
    {
        u32 val_a = (u32)(ctx->gpr[29]);
        u32 val_b = (u32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000CB48:
    ctx->pc = 0x8000CB48u;
    // 8000CB48: bc    12, 0, 0x8000CB68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000CB68;
        }
    }

label_8000CB4C:
    ctx->pc = 0x8000CB4Cu;
    ctx->downcount -= 3;
    // 8000CB4C: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8000CB50:
    ctx->pc = 0x8000CB50u;
    // 8000CB50: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8000CB54:
    ctx->pc = 0x8000CB54u;
    // 8000CB54: bl      0x8000519C
    {
            ctx->lr = 0x8000CB58u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_8000CB58:
    ctx->pc = 0x8000CB58u;
    ctx->downcount -= 4;
    // 8000CB58: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000CB5C:
    ctx->pc = 0x8000CB5Cu;
    // 8000CB5C: add   r0, r0, r31
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8000CB60:
    ctx->pc = 0x8000CB60u;
    // 8000CB60: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000CB64:
    ctx->pc = 0x8000CB64u;
    // 8000CB64: b       0x8000CB94
    {
            goto label_8000CB94;
    }

label_8000CB68:
    ctx->pc = 0x8000CB68u;
    ctx->downcount -= 3;
    // 8000CB68: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8000CB6C:
    ctx->pc = 0x8000CB6Cu;
    // 8000CB6C: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8000CB70:
    ctx->pc = 0x8000CB70u;
    // 8000CB70: bl      0x8000519C
    {
            ctx->lr = 0x8000CB74u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_8000CB74:
    ctx->pc = 0x8000CB74u;
    ctx->downcount -= 4;
    // 8000CB74: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000CB78:
    ctx->pc = 0x8000CB78u;
    // 8000CB78: add   r4, r28, r29
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8000CB7C:
    ctx->pc = 0x8000CB7Cu;
    // 8000CB7C: subf   r5, r29, r31
    {
        u32 a = ~ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_8000CB80:
    ctx->pc = 0x8000CB80u;
    // 8000CB80: bl      0x8000519C
    {
            ctx->lr = 0x8000CB84u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_8000CB84:
    ctx->pc = 0x8000CB84u;
    ctx->downcount -= 4;
    // 8000CB84: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000CB88:
    ctx->pc = 0x8000CB88u;
    // 8000CB88: add   r0, r0, r31
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8000CB8C:
    ctx->pc = 0x8000CB8Cu;
    // 8000CB8C: subf   r0, r29, r0
    {
        u32 a = ~ctx->gpr[29];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8000CB90:
    ctx->pc = 0x8000CB90u;
    // 8000CB90: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000CB94:
    ctx->pc = 0x8000CB94u;
    ctx->downcount -= 6;
    // 8000CB94: lwz     r4, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000CB98:
    ctx->pc = 0x8000CB98u;
    // 8000CB98: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000CB9C:
    ctx->pc = 0x8000CB9Cu;
    // 8000CB9C: lwz     r3, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000CBA0:
    ctx->pc = 0x8000CBA0u;
    // 8000CBA0: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8000CBA4:
    ctx->pc = 0x8000CBA4u;
    // 8000CBA4: cmplw   r3, r0
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

label_8000CBA8:
    ctx->pc = 0x8000CBA8u;
    // 8000CBA8: bc    4, 2, 0x8000CBB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000CBB0;
        }
    }

label_8000CBAC:
    ctx->pc = 0x8000CBACu;
    ctx->downcount -= 1;
    // 8000CBAC: stw     r4, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000CBB0:
    ctx->pc = 0x8000CBB0u;
    ctx->downcount -= 8;
    // 8000CBB0: lwz     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000CBB4:
    ctx->pc = 0x8000CBB4u;
    // 8000CBB4: addi    r3, r30, 24
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(24);

label_8000CBB8:
    ctx->pc = 0x8000CBB8u;
    // 8000CBB8: subf   r0, r31, r0
    {
        u32 a = ~ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8000CBBC:
    ctx->pc = 0x8000CBBCu;
    // 8000CBBC: stw     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000CBC0:
    ctx->pc = 0x8000CBC0u;
    // 8000CBC0: lwz     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000CBC4:
    ctx->pc = 0x8000CBC4u;
    // 8000CBC4: add   r0, r0, r31
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8000CBC8:
    ctx->pc = 0x8000CBC8u;
    // 8000CBC8: stw     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000CBCC:
    ctx->pc = 0x8000CBCCu;
    // 8000CBCC: bl      0x8000CFE8
    {
            ctx->lr = 0x8000CBD0u;
            goto label_8000CFE8;
    }

label_8000CBD0:
    ctx->pc = 0x8000CBD0u;
    ctx->downcount -= 1;
    // 8000CBD0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000CBD4:
    ctx->pc = 0x8000CBD4u;
    ctx->downcount -= 9;
    // 8000CBD4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000CBD8:
    ctx->pc = 0x8000CBD8u;
    // 8000CBD8: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8000CBDC:
    ctx->pc = 0x8000CBDCu;
    // 8000CBDC: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8000CBE0:
    ctx->pc = 0x8000CBE0u;
    // 8000CBE0: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8000CBE4:
    ctx->pc = 0x8000CBE4u;
    // 8000CBE4: lwz     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_8000CBE8:
    ctx->pc = 0x8000CBE8u;
    // 8000CBE8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000CBEC:
    ctx->pc = 0x8000CBECu;
    // 8000CBEC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8000CBF0:
    ctx->pc = 0x8000CBF0u;
    // 8000CBF0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000CBF4:
    ctx->pc = 0x8000CBF4u;
    ctx->downcount -= 16;
    // 8000CBF4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000CBF8:
    ctx->pc = 0x8000CBF8u;
    // 8000CBF8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000CBFC:
    ctx->pc = 0x8000CBFCu;
    // 8000CBFC: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000CC00:
    ctx->pc = 0x8000CC00u;
    // 8000CC00: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000CC04:
    ctx->pc = 0x8000CC04u;
    // 8000CC04: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8000CC08:
    ctx->pc = 0x8000CC08u;
    // 8000CC08: stw     r4, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000CC0C:
    ctx->pc = 0x8000CC0Cu;
    // 8000CC0C: addi    r3, r6, 24
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(24);

label_8000CC10:
    ctx->pc = 0x8000CC10u;
    // 8000CC10: stw     r5, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8000CC14:
    ctx->pc = 0x8000CC14u;
    // 8000CC14: lwz     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000CC18:
    ctx->pc = 0x8000CC18u;
    // 8000CC18: stw     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000CC1C:
    ctx->pc = 0x8000CC1Cu;
    // 8000CC1C: lwz     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000CC20:
    ctx->pc = 0x8000CC20u;
    // 8000CC20: stw     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000CC24:
    ctx->pc = 0x8000CC24u;
    // 8000CC24: stw     r0, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000CC28:
    ctx->pc = 0x8000CC28u;
    // 8000CC28: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000CC2C:
    ctx->pc = 0x8000CC2Cu;
    // 8000CC2C: stw     r0, 20(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000CC30:
    ctx->pc = 0x8000CC30u;
    // 8000CC30: bl      0x8000D03C
    {
            ctx->lr = 0x8000CC34u;
            goto label_8000D03C;
    }

label_8000CC34:
    ctx->pc = 0x8000CC34u;
    ctx->downcount -= 5;
    // 8000CC34: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000CC38:
    ctx->pc = 0x8000CC38u;
    // 8000CC38: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000CC3C:
    ctx->pc = 0x8000CC3Cu;
    // 8000CC3C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000CC40:
    ctx->pc = 0x8000CC40u;
    // 8000CC40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000CC44:
    ctx->pc = 0x8000CC44u;
    ctx->downcount -= 2;
    // 8000CC44: lwz     r3, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000CC48:
    ctx->pc = 0x8000CC48u;
    // 8000CC48: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000CC4C:
    ctx->pc = 0x8000CC4Cu;
    ctx->downcount -= 4;
    // 8000CC4C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000CC50:
    ctx->pc = 0x8000CC50u;
    // 8000CC50: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000CC54:
    ctx->pc = 0x8000CC54u;
    // 8000CC54: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000CC58:
    ctx->pc = 0x8000CC58u;
    // 8000CC58: bl      0x800482F0
    {
            ctx->lr = 0x8000CC5Cu;
            ctx->pc = 0x800482F0u;
            return;
    }

label_8000CC5C:
    ctx->pc = 0x8000CC5Cu;
    ctx->downcount -= 6;
    // 8000CC5C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000CC60:
    ctx->pc = 0x8000CC60u;
    // 8000CC60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000CC64:
    ctx->pc = 0x8000CC64u;
    // 8000CC64: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000CC68:
    ctx->pc = 0x8000CC68u;
    // 8000CC68: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000CC6C:
    ctx->pc = 0x8000CC6Cu;
    // 8000CC6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000CC70:
    ctx->pc = 0x8000CC70u;
    ctx->downcount -= 5;
    // 8000CC70: stwu     r1, -1296(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-1296);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000CC74:
    ctx->pc = 0x8000CC74u;
    // 8000CC74: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000CC78:
    ctx->pc = 0x8000CC78u;
    // 8000CC78: stw     r0, 1300(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1300);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000CC7C:
    ctx->pc = 0x8000CC7Cu;
    // 8000CC7C: stw     r31, 1292(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1292);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8000CC80:
    ctx->pc = 0x8000CC80u;
    // 8000CC80: bl      0x80048254
    {
            ctx->lr = 0x8000CC84u;
            ctx->pc = 0x80048254u;
            return;
    }

label_8000CC84:
    ctx->pc = 0x8000CC84u;
    ctx->downcount -= 2;
    // 8000CC84: or.   r31, r3, r3
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

label_8000CC88:
    ctx->pc = 0x8000CC88u;
    // 8000CC88: bc    12, 1, 0x8000CC94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000CC94;
        }
    }

label_8000CC8C:
    ctx->pc = 0x8000CC8Cu;
    ctx->downcount -= 2;
    // 8000CC8C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000CC90:
    ctx->pc = 0x8000CC90u;
    // 8000CC90: b       0x8000CCCC
    {
            goto label_8000CCCC;
    }

label_8000CC94:
    ctx->pc = 0x8000CC94u;
    ctx->downcount -= 3;
    // 8000CC94: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8000CC98:
    ctx->pc = 0x8000CC98u;
    // 8000CC98: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8000CC9C:
    ctx->pc = 0x8000CC9Cu;
    // 8000CC9C: bl      0x800481C8
    {
            ctx->lr = 0x8000CCA0u;
            ctx->pc = 0x800481C8u;
            return;
    }

label_8000CCA0:
    ctx->pc = 0x8000CCA0u;
    ctx->downcount -= 2;
    // 8000CCA0: cmpwi   r3, 0
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

label_8000CCA4:
    ctx->pc = 0x8000CCA4u;
    // 8000CCA4: bc    4, 2, 0x8000CCC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000CCC0;
        }
    }

label_8000CCA8:
    ctx->pc = 0x8000CCA8u;
    ctx->downcount -= 5;
    // 8000CCA8: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000CCAC:
    ctx->pc = 0x8000CCACu;
    // 8000CCAC: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8000CCB0:
    ctx->pc = 0x8000CCB0u;
    // 8000CCB0: addi    r3, r3, -16256
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16256);

label_8000CCB4:
    ctx->pc = 0x8000CCB4u;
    // 8000CCB4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_8000CCB8:
    ctx->pc = 0x8000CCB8u;
    // 8000CCB8: bl      0x8000CAEC
    {
            ctx->lr = 0x8000CCBCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000CAECu;
                return;
            }
            goto label_8000CAEC;
    }

label_8000CCBC:
    ctx->pc = 0x8000CCBCu;
    ctx->downcount -= 1;
    // 8000CCBC: b       0x8000CCC8
    {
            goto label_8000CCC8;
    }

label_8000CCC0:
    ctx->pc = 0x8000CCC0u;
    ctx->downcount -= 2;
    // 8000CCC0: li      r3, -10009
    ctx->gpr[3] = (u32)(s32)(-10009);

label_8000CCC4:
    ctx->pc = 0x8000CCC4u;
    // 8000CCC4: b       0x8000CCCC
    {
            goto label_8000CCCC;
    }

label_8000CCC8:
    ctx->pc = 0x8000CCC8u;
    ctx->downcount -= 1;
    // 8000CCC8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8000CCCC:
    ctx->pc = 0x8000CCCCu;
    ctx->downcount -= 6;
    // 8000CCCC: lwz     r0, 1300(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1300);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000CCD0:
    ctx->pc = 0x8000CCD0u;
    // 8000CCD0: lwz     r31, 1292(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1292);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8000CCD4:
    ctx->pc = 0x8000CCD4u;
    // 8000CCD4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000CCD8:
    ctx->pc = 0x8000CCD8u;
    // 8000CCD8: addi    r1, r1, 1296
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(1296);

label_8000CCDC:
    ctx->pc = 0x8000CCDCu;
    // 8000CCDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000CCE0:
    ctx->pc = 0x8000CCE0u;
    ctx->downcount -= 4;
    // 8000CCE0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000CCE4:
    ctx->pc = 0x8000CCE4u;
    // 8000CCE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000CCE8:
    ctx->pc = 0x8000CCE8u;
    // 8000CCE8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000CCEC:
    ctx->pc = 0x8000CCECu;
    // 8000CCEC: bl      0x80047F64
    {
            ctx->lr = 0x8000CCF0u;
            ctx->pc = 0x80047F64u;
            return;
    }

label_8000CCF0:
    ctx->pc = 0x8000CCF0u;
    ctx->downcount -= 6;
    // 8000CCF0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000CCF4:
    ctx->pc = 0x8000CCF4u;
    // 8000CCF4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000CCF8:
    ctx->pc = 0x8000CCF8u;
    // 8000CCF8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000CCFC:
    ctx->pc = 0x8000CCFCu;
    // 8000CCFC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000CD00:
    ctx->pc = 0x8000CD00u;
    // 8000CD00: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000CD04:
    ctx->pc = 0x8000CD04u;
    ctx->downcount -= 4;
    // 8000CD04: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000CD08:
    ctx->pc = 0x8000CD08u;
    // 8000CD08: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000CD0C:
    ctx->pc = 0x8000CD0Cu;
    // 8000CD0C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000CD10:
    ctx->pc = 0x8000CD10u;
    // 8000CD10: bl      0x80047F60
    {
            ctx->lr = 0x8000CD14u;
            ctx->pc = 0x80047F60u;
            return;
    }

label_8000CD14:
    ctx->pc = 0x8000CD14u;
    ctx->downcount -= 6;
    // 8000CD14: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000CD18:
    ctx->pc = 0x8000CD18u;
    // 8000CD18: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000CD1C:
    ctx->pc = 0x8000CD1Cu;
    // 8000CD1C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000CD20:
    ctx->pc = 0x8000CD20u;
    // 8000CD20: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000CD24:
    ctx->pc = 0x8000CD24u;
    // 8000CD24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000CD28:
    ctx->pc = 0x8000CD28u;
    ctx->downcount -= 13;
    // 8000CD28: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000CD2C:
    ctx->pc = 0x8000CD2Cu;
    // 8000CD2C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000CD30:
    ctx->pc = 0x8000CD30u;
    // 8000CD30: lis     r5, -32762
    ctx->gpr[5] = ((u32)(s32)(-32762) << 16);

label_8000CD34:
    ctx->pc = 0x8000CD34u;
    // 8000CD34: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000CD38:
    ctx->pc = 0x8000CD38u;
    // 8000CD38: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8000CD3C:
    ctx->pc = 0x8000CD3Cu;
    // 8000CD3C: addi    r31, r5, 10976
    ctx->gpr[31] = ctx->gpr[5] + (u32)(s32)(10976);

label_8000CD40:
    ctx->pc = 0x8000CD40u;
    // 8000CD40: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8000CD44:
    ctx->pc = 0x8000CD44u;
    // 8000CD44: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8000CD48:
    ctx->pc = 0x8000CD48u;
    // 8000CD48: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8000CD4C:
    ctx->pc = 0x8000CD4Cu;
    // 8000CD4C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000CD50:
    ctx->pc = 0x8000CD50u;
    // 8000CD50: lwz     r0, -32304(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32304);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000CD54:
    ctx->pc = 0x8000CD54u;
    // 8000CD54: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000CD58:
    ctx->pc = 0x8000CD58u;
    // 8000CD58: bc    4, 2, 0x8000CD74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000CD74;
        }
    }

label_8000CD5C:
    ctx->pc = 0x8000CD5Cu;
    ctx->downcount -= 4;
    // 8000CD5C: addi    r4, r31, 0
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(0);

label_8000CD60:
    ctx->pc = 0x8000CD60u;
    // 8000CD60: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_8000CD64:
    ctx->pc = 0x8000CD64u;
    // 8000CD64: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8000CD68:
    ctx->pc = 0x8000CD68u;
    // 8000CD68: bl      0x8000CF98
    {
            ctx->lr = 0x8000CD6Cu;
            goto label_8000CF98;
    }

label_8000CD6C:
    ctx->pc = 0x8000CD6Cu;
    ctx->downcount -= 2;
    // 8000CD6C: li      r3, -10001
    ctx->gpr[3] = (u32)(s32)(-10001);

label_8000CD70:
    ctx->pc = 0x8000CD70u;
    // 8000CD70: b       0x8000CDCC
    {
            goto label_8000CDCC;
    }

label_8000CD74:
    ctx->pc = 0x8000CD74u;
    ctx->downcount -= 6;
    // 8000CD74: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000CD78:
    ctx->pc = 0x8000CD78u;
    // 8000CD78: or   r6, r4, r4
    {
        ctx->gpr[6] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8000CD7C:
    ctx->pc = 0x8000CD7Cu;
    // 8000CD7C: addi    r4, r31, 20
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(20);

label_8000CD80:
    ctx->pc = 0x8000CD80u;
    // 8000CD80: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_8000CD84:
    ctx->pc = 0x8000CD84u;
    // 8000CD84: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8000CD88:
    ctx->pc = 0x8000CD88u;
    // 8000CD88: bl      0x8000CF98
    {
            ctx->lr = 0x8000CD8Cu;
            goto label_8000CF98;
    }

label_8000CD8C:
    ctx->pc = 0x8000CD8Cu;
    ctx->downcount -= 1;
    // 8000CD8C: b       0x8000CDC0
    {
            goto label_8000CDC0;
    }

label_8000CD90:
    ctx->downcount -= 5;
    // 8000CD90: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8000CD94:
    // 8000CD94: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_8000CD98:
    // 8000CD98: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8000CD9C:
    // 8000CD9C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8000CDA0:
    // 8000CDA0: bl      0x8000CF98
    {
            ctx->lr = 0x8000CDA4u;
            goto label_8000CF98;
    }

label_8000CDA4:
    ctx->downcount -= 3;
    // 8000CDA4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8000CDA8:
    // 8000CDA8: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8000CDAC:
    // 8000CDAC: bl      0x80047F68
    {
            ctx->lr = 0x8000CDB0u;
            ctx->pc = 0x80047F68u;
            return;
    }

label_8000CDB0:
    ctx->downcount -= 2;
    // 8000CDB0: cmpwi   r3, 0
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

label_8000CDB4:
    // 8000CDB4: bc    12, 2, 0x8000CDC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000CDC8;
        }
    }

label_8000CDB8:
    ctx->downcount -= 2;
    // 8000CDB8: add   r29, r29, r3
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_8000CDBC:
    // 8000CDBC: subf   r30, r3, r30
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[30];
        u32 res = a + b + 1u;
        ctx->gpr[30] = res;
    }

label_8000CDC0:
    ctx->downcount -= 2;
    // 8000CDC0: cmpwi   r30, 0
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

label_8000CDC4:
    // 8000CDC4: bc    12, 1, 0x8000CD90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000CD90u;
                return;
            }
            goto label_8000CD90;
        }
    }

label_8000CDC8:
    ctx->pc = 0x8000CDC8u;
    ctx->downcount -= 1;
    // 8000CDC8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000CDCC:
    ctx->pc = 0x8000CDCCu;
    ctx->downcount -= 8;
    // 8000CDCC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000CDD0:
    ctx->pc = 0x8000CDD0u;
    // 8000CDD0: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8000CDD4:
    ctx->pc = 0x8000CDD4u;
    // 8000CDD4: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8000CDD8:
    ctx->pc = 0x8000CDD8u;
    // 8000CDD8: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8000CDDC:
    ctx->pc = 0x8000CDDCu;
    // 8000CDDC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000CDE0:
    ctx->pc = 0x8000CDE0u;
    // 8000CDE0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8000CDE4:
    ctx->pc = 0x8000CDE4u;
    // 8000CDE4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000CDE8:
    ctx->pc = 0x8000CDE8u;
    ctx->downcount -= 20;
    // 8000CDE8: stwu     r1, -1312(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-1312);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000CDEC:
    ctx->pc = 0x8000CDECu;
    // 8000CDEC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000CDF0:
    ctx->pc = 0x8000CDF0u;
    // 8000CDF0: stw     r0, 1316(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1316);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000CDF4:
    ctx->pc = 0x8000CDF4u;
    // 8000CDF4: stmw     r26, 1288(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1288);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8000CDF8:
    ctx->pc = 0x8000CDF8u;
    // 8000CDF8: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000CDFC:
    ctx->pc = 0x8000CDFCu;
    // 8000CDFC: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8000CE00:
    ctx->pc = 0x8000CE00u;
    // 8000CE00: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_8000CE04:
    ctx->pc = 0x8000CE04u;
    // 8000CE04: lwz     r0, -32304(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32304);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000CE08:
    ctx->pc = 0x8000CE08u;
    // 8000CE08: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000CE0C:
    ctx->pc = 0x8000CE0Cu;
    // 8000CE0C: bc    4, 2, 0x8000CE18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000CE18;
        }
    }

label_8000CE10:
    ctx->pc = 0x8000CE10u;
    ctx->downcount -= 2;
    // 8000CE10: li      r3, -10001
    ctx->gpr[3] = (u32)(s32)(-10001);

label_8000CE14:
    ctx->pc = 0x8000CE14u;
    // 8000CE14: b       0x8000CEC8
    {
            goto label_8000CEC8;
    }

label_8000CE18:
    ctx->pc = 0x8000CE18u;
    ctx->downcount -= 7;
    // 8000CE18: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8000CE1C:
    ctx->pc = 0x8000CE1Cu;
    // 8000CE1C: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8000CE20:
    ctx->pc = 0x8000CE20u;
    // 8000CE20: addi    r4, r3, 11068
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(11068);

label_8000CE24:
    ctx->pc = 0x8000CE24u;
    // 8000CE24: or   r6, r27, r27
    {
        ctx->gpr[6] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8000CE28:
    ctx->pc = 0x8000CE28u;
    // 8000CE28: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8000CE2C:
    ctx->pc = 0x8000CE2Cu;
    // 8000CE2C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8000CE30:
    ctx->pc = 0x8000CE30u;
    // 8000CE30: bl      0x8000CF98
    {
            ctx->lr = 0x8000CE34u;
            goto label_8000CF98;
    }

label_8000CE34:
    ctx->pc = 0x8000CE34u;
    ctx->downcount -= 5;
    // 8000CE34: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000CE38:
    ctx->pc = 0x8000CE38u;
    // 8000CE38: or   r29, r27, r27
    {
        ctx->gpr[29] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8000CE3C:
    ctx->pc = 0x8000CE3Cu;
    // 8000CE3C: addi    r31, r3, -16256
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-16256);

label_8000CE40:
    ctx->pc = 0x8000CE40u;
    // 8000CE40: or   r30, r27, r27
    {
        ctx->gpr[30] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8000CE44:
    ctx->pc = 0x8000CE44u;
    // 8000CE44: b       0x8000CE7C
    {
            goto label_8000CE7C;
    }

label_8000CE48:
    ctx->downcount -= 2;
    // 8000CE48: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_8000CE4C:
    // 8000CE4C: bl      0x80048254
    {
            ctx->lr = 0x8000CE50u;
            ctx->pc = 0x80048254u;
            return;
    }

label_8000CE50:
    ctx->downcount -= 2;
    // 8000CE50: or.   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[27];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8000CE54:
    // 8000CE54: bc    12, 2, 0x8000CE7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000CE7C;
        }
    }

label_8000CE58:
    ctx->downcount -= 3;
    // 8000CE58: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8000CE5C:
    // 8000CE5C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8000CE60:
    // 8000CE60: bl      0x800481C8
    {
            ctx->lr = 0x8000CE64u;
            ctx->pc = 0x800481C8u;
            return;
    }

label_8000CE64:
    ctx->downcount -= 2;
    // 8000CE64: or.   r28, r3, r3
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

label_8000CE68:
    // 8000CE68: bc    4, 2, 0x8000CE7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000CE7C;
        }
    }

label_8000CE6C:
    ctx->downcount -= 4;
    // 8000CE6C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8000CE70:
    // 8000CE70: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8000CE74:
    // 8000CE74: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_8000CE78:
    // 8000CE78: bl      0x8000CAEC
    {
            ctx->lr = 0x8000CE7Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000CAECu;
                return;
            }
            goto label_8000CAEC;
    }

label_8000CE7C:
    ctx->downcount -= 2;
    // 8000CE7C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8000CE80:
    // 8000CE80: bl      0x8000CC44
    {
            ctx->lr = 0x8000CE84u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000CC44u;
                return;
            }
            goto label_8000CC44;
    }

label_8000CE84:
    ctx->downcount -= 2;
    // 8000CE84: cmplw   r3, r30
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(ctx->gpr[30]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000CE88:
    // 8000CE88: bc    12, 0, 0x8000CE48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000CE48u;
                return;
            }
            goto label_8000CE48;
        }
    }

label_8000CE8C:
    ctx->pc = 0x8000CE8Cu;
    ctx->downcount -= 2;
    // 8000CE8C: cmplwi  r28, 0x0000
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

label_8000CE90:
    ctx->pc = 0x8000CE90u;
    // 8000CE90: bc    4, 2, 0x8000CEAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000CEAC;
        }
    }

label_8000CE94:
    ctx->pc = 0x8000CE94u;
    ctx->downcount -= 5;
    // 8000CE94: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000CE98:
    ctx->pc = 0x8000CE98u;
    // 8000CE98: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_8000CE9C:
    ctx->pc = 0x8000CE9Cu;
    // 8000CE9C: addi    r3, r3, -16256
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16256);

label_8000CEA0:
    ctx->pc = 0x8000CEA0u;
    // 8000CEA0: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8000CEA4:
    ctx->pc = 0x8000CEA4u;
    // 8000CEA4: bl      0x8000C9E4
    {
            ctx->lr = 0x8000CEA8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000C9E4u;
                return;
            }
            goto label_8000C9E4;
    }

label_8000CEA8:
    ctx->pc = 0x8000CEA8u;
    ctx->downcount -= 1;
    // 8000CEA8: b       0x8000CEC4
    {
            goto label_8000CEC4;
    }

label_8000CEAC:
    ctx->pc = 0x8000CEACu;
    ctx->downcount -= 6;
    // 8000CEAC: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8000CEB0:
    ctx->pc = 0x8000CEB0u;
    // 8000CEB0: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8000CEB4:
    ctx->pc = 0x8000CEB4u;
    // 8000CEB4: addi    r4, r3, 11108
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(11108);

label_8000CEB8:
    ctx->pc = 0x8000CEB8u;
    // 8000CEB8: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_8000CEBC:
    ctx->pc = 0x8000CEBCu;
    // 8000CEBC: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8000CEC0:
    ctx->pc = 0x8000CEC0u;
    // 8000CEC0: bl      0x8000CF98
    {
            ctx->lr = 0x8000CEC4u;
            goto label_8000CF98;
    }

label_8000CEC4:
    ctx->pc = 0x8000CEC4u;
    ctx->downcount -= 1;
    // 8000CEC4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8000CEC8:
    ctx->pc = 0x8000CEC8u;
    ctx->downcount -= 16;
    // 8000CEC8: lmw     r26, 1288(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1288);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8000CECC:
    ctx->pc = 0x8000CECCu;
    // 8000CECC: lwz     r0, 1316(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1316);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000CED0:
    ctx->pc = 0x8000CED0u;
    // 8000CED0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000CED4:
    ctx->pc = 0x8000CED4u;
    // 8000CED4: addi    r1, r1, 1312
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(1312);

label_8000CED8:
    ctx->pc = 0x8000CED8u;
    // 8000CED8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000CEDC:
    ctx->pc = 0x8000CEDCu;
    ctx->downcount -= 2;
    // 8000CEDC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000CEE0:
    ctx->pc = 0x8000CEE0u;
    // 8000CEE0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000CEE4:
    ctx->pc = 0x8000CEE4u;
    ctx->downcount -= 3;
    // 8000CEE4: lwz     r0, -32304(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32304);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000CEE8:
    ctx->pc = 0x8000CEE8u;
    // 8000CEE8: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000CEEC:
    ctx->pc = 0x8000CEECu;
    // 8000CEEC: bc    12, 2, 0x8000CEF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000CEF8;
        }
    }

label_8000CEF0:
    ctx->pc = 0x8000CEF0u;
    ctx->downcount -= 2;
    // 8000CEF0: li      r3, -10005
    ctx->gpr[3] = (u32)(s32)(-10005);

label_8000CEF4:
    ctx->pc = 0x8000CEF4u;
    // 8000CEF4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000CEF8:
    ctx->pc = 0x8000CEF8u;
    ctx->downcount -= 4;
    // 8000CEF8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8000CEFC:
    ctx->pc = 0x8000CEFCu;
    // 8000CEFC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000CF00:
    ctx->pc = 0x8000CF00u;
    // 8000CF00: stw     r0, -32304(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000CF04:
    ctx->pc = 0x8000CF04u;
    // 8000CF04: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000CF08:
    ctx->pc = 0x8000CF08u;
    ctx->downcount -= 2;
    // 8000CF08: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000CF0C:
    ctx->pc = 0x8000CF0Cu;
    // 8000CF0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000CF10:
    ctx->pc = 0x8000CF10u;
    ctx->downcount -= 13;
    // 8000CF10: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000CF14:
    ctx->pc = 0x8000CF14u;
    // 8000CF14: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000CF18:
    ctx->pc = 0x8000CF18u;
    // 8000CF18: lis     r5, -32762
    ctx->gpr[5] = ((u32)(s32)(-32762) << 16);

label_8000CF1C:
    ctx->pc = 0x8000CF1Cu;
    // 8000CF1C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000CF20:
    ctx->pc = 0x8000CF20u;
    // 8000CF20: addi    r0, r5, 11156
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(11156);

label_8000CF24:
    ctx->pc = 0x8000CF24u;
    // 8000CF24: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8000CF28:
    ctx->pc = 0x8000CF28u;
    // 8000CF28: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8000CF2C:
    ctx->pc = 0x8000CF2Cu;
    // 8000CF2C: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_8000CF30:
    ctx->pc = 0x8000CF30u;
    // 8000CF30: stw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8000CF34:
    ctx->pc = 0x8000CF34u;
    // 8000CF34: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000CF38:
    ctx->pc = 0x8000CF38u;
    // 8000CF38: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8000CF3C:
    ctx->pc = 0x8000CF3Cu;
    // 8000CF3C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8000CF40:
    ctx->pc = 0x8000CF40u;
    // 8000CF40: bl      0x8000CF98
    {
            ctx->lr = 0x8000CF44u;
            goto label_8000CF98;
    }

label_8000CF44:
    ctx->pc = 0x8000CF44u;
    ctx->downcount -= 3;
    // 8000CF44: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8000CF48:
    ctx->pc = 0x8000CF48u;
    // 8000CF48: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8000CF4C:
    ctx->pc = 0x8000CF4Cu;
    // 8000CF4C: bl      0x80048344
    {
            ctx->lr = 0x8000CF50u;
            ctx->pc = 0x80048344u;
            return;
    }

label_8000CF50:
    ctx->pc = 0x8000CF50u;
    ctx->downcount -= 5;
    // 8000CF50: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8000CF54:
    ctx->pc = 0x8000CF54u;
    // 8000CF54: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8000CF58:
    ctx->pc = 0x8000CF58u;
    // 8000CF58: addi    r4, r4, 11176
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(11176);

label_8000CF5C:
    ctx->pc = 0x8000CF5Cu;
    // 8000CF5C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8000CF60:
    ctx->pc = 0x8000CF60u;
    // 8000CF60: bl      0x8000CF98
    {
            ctx->lr = 0x8000CF64u;
            goto label_8000CF98;
    }

label_8000CF64:
    ctx->pc = 0x8000CF64u;
    ctx->downcount -= 6;
    // 8000CF64: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000CF68:
    ctx->pc = 0x8000CF68u;
    // 8000CF68: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_8000CF6C:
    ctx->pc = 0x8000CF6Cu;
    // 8000CF6C: addi    r3, r3, -16256
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16256);

label_8000CF70:
    ctx->pc = 0x8000CF70u;
    // 8000CF70: li      r5, 1280
    ctx->gpr[5] = (u32)(s32)(1280);

label_8000CF74:
    ctx->pc = 0x8000CF74u;
    // 8000CF74: addi    r4, r4, -17536
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17536);

label_8000CF78:
    ctx->pc = 0x8000CF78u;
    // 8000CF78: bl      0x8000CBF4
    {
            ctx->lr = 0x8000CF7Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000CBF4u;
                return;
            }
            goto label_8000CBF4;
    }

label_8000CF7C:
    ctx->pc = 0x8000CF7Cu;
    ctx->downcount -= 8;
    // 8000CF7C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000CF80:
    ctx->pc = 0x8000CF80u;
    // 8000CF80: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000CF84:
    ctx->pc = 0x8000CF84u;
    // 8000CF84: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8000CF88:
    ctx->pc = 0x8000CF88u;
    // 8000CF88: lwz     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8000CF8C:
    ctx->pc = 0x8000CF8Cu;
    // 8000CF8C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000CF90:
    ctx->pc = 0x8000CF90u;
    // 8000CF90: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000CF94:
    ctx->pc = 0x8000CF94u;
    // 8000CF94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000CF98:
    ctx->pc = 0x8000CF98u;
    ctx->downcount -= 2;
    // 8000CF98: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000CF9C:
    ctx->pc = 0x8000CF9Cu;
    // 8000CF9C: bc    4, 6, 0x8000CFC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x02000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000CFC0;
        }
    }

label_8000CFA0:
    ctx->pc = 0x8000CFA0u;
    ctx->downcount -= 8;
    // 8000CFA0: stfd     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x8000CFA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_8000CFA4:
    ctx->pc = 0x8000CFA4u;
    // 8000CFA4: stfd     f2, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x8000CFA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[2]));
    }

label_8000CFA8:
    ctx->pc = 0x8000CFA8u;
    // 8000CFA8: stfd     f3, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x8000CFA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[3]));
    }

label_8000CFAC:
    ctx->pc = 0x8000CFACu;
    // 8000CFAC: stfd     f4, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x8000CFACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[4]));
    }

label_8000CFB0:
    ctx->pc = 0x8000CFB0u;
    // 8000CFB0: stfd     f5, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x8000CFB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[5]));
    }

label_8000CFB4:
    ctx->pc = 0x8000CFB4u;
    // 8000CFB4: stfd     f6, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x8000CFB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[6]));
    }

label_8000CFB8:
    ctx->pc = 0x8000CFB8u;
    // 8000CFB8: stfd     f7, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x8000CFB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[7]));
    }

label_8000CFBC:
    ctx->pc = 0x8000CFBCu;
    // 8000CFBC: stfd     f8, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x8000CFBCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[8]));
    }

label_8000CFC0:
    ctx->pc = 0x8000CFC0u;
    ctx->downcount -= 10;
    // 8000CFC0: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8000CFC4:
    ctx->pc = 0x8000CFC4u;
    // 8000CFC4: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000CFC8:
    ctx->pc = 0x8000CFC8u;
    // 8000CFC8: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8000CFCC:
    ctx->pc = 0x8000CFCCu;
    // 8000CFCC: stw     r6, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8000CFD0:
    ctx->pc = 0x8000CFD0u;
    // 8000CFD0: stw     r7, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8000CFD4:
    ctx->pc = 0x8000CFD4u;
    // 8000CFD4: stw     r8, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8000CFD8:
    ctx->pc = 0x8000CFD8u;
    // 8000CFD8: stw     r9, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_8000CFDC:
    ctx->pc = 0x8000CFDCu;
    // 8000CFDC: stw     r10, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_8000CFE0:
    ctx->pc = 0x8000CFE0u;
    // 8000CFE0: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_8000CFE4:
    ctx->pc = 0x8000CFE4u;
    // 8000CFE4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000CFE8:
    ctx->pc = 0x8000CFE8u;
    ctx->downcount -= 5;
    // 8000CFE8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000CFEC:
    ctx->pc = 0x8000CFECu;
    // 8000CFEC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000CFF0:
    ctx->pc = 0x8000CFF0u;
    // 8000CFF0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000CFF4:
    ctx->pc = 0x8000CFF4u;
    // 8000CFF4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000CFF8:
    ctx->pc = 0x8000CFF8u;
    // 8000CFF8: bl      0x800206A8
    {
            ctx->lr = 0x8000CFFCu;
            ctx->pc = 0x800206A8u;
            return;
    }

label_8000CFFC:
    ctx->pc = 0x8000CFFCu;
    ctx->downcount -= 5;
    // 8000CFFC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000D000:
    ctx->pc = 0x8000D000u;
    // 8000D000: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000D004:
    ctx->pc = 0x8000D004u;
    // 8000D004: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000D008:
    ctx->pc = 0x8000D008u;
    // 8000D008: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000D00C:
    ctx->pc = 0x8000D00Cu;
    ctx->downcount -= 6;
    // 8000D00C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000D010:
    ctx->pc = 0x8000D010u;
    // 8000D010: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000D014:
    ctx->pc = 0x8000D014u;
    // 8000D014: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000D018:
    ctx->pc = 0x8000D018u;
    // 8000D018: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8000D01C:
    ctx->pc = 0x8000D01Cu;
    // 8000D01C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000D020:
    ctx->pc = 0x8000D020u;
    // 8000D020: bl      0x80020680
    {
            ctx->lr = 0x8000D024u;
            ctx->pc = 0x80020680u;
            return;
    }

label_8000D024:
    ctx->pc = 0x8000D024u;
    ctx->downcount -= 7;
    // 8000D024: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8000D028:
    ctx->pc = 0x8000D028u;
    // 8000D028: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000D02C:
    ctx->pc = 0x8000D02Cu;
    // 8000D02C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8000D030:
    ctx->pc = 0x8000D030u;
    // 8000D030: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000D034:
    ctx->pc = 0x8000D034u;
    // 8000D034: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000D038:
    ctx->pc = 0x8000D038u;
    // 8000D038: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000D03C:
    ctx->pc = 0x8000D03Cu;
    ctx->downcount -= 1;
    // 8000D03C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000D040:
    ctx->pc = 0x8000D040u;
    ctx->downcount -= 20;
    // 8000D040: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_8000D044:
    ctx->pc = 0x8000D044u;
    // 8000D044: lis     r5, -32738
    ctx->gpr[5] = ((u32)(s32)(-32738) << 16);

label_8000D048:
    ctx->pc = 0x8000D048u;
    // 8000D048: addi    r8, r4, -16220
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(-16220);

label_8000D04C:
    ctx->pc = 0x8000D04Cu;
    // 8000D04C: lis     r6, -32738
    ctx->gpr[6] = ((u32)(s32)(-32738) << 16);

label_8000D050:
    ctx->pc = 0x8000D050u;
    // 8000D050: lwz     r7, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8000D054:
    ctx->pc = 0x8000D054u;
    // 8000D054: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_8000D058:
    ctx->pc = 0x8000D058u;
    // 8000D058: lwz     r9, -5692(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-5692);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_8000D05C:
    ctx->pc = 0x8000D05Cu;
    // 8000D05C: addi    r6, r6, -5756
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-5756);

label_8000D060:
    ctx->pc = 0x8000D060u;
    // 8000D060: addi    r5, r7, 1
    ctx->gpr[5] = ctx->gpr[7] + (u32)(s32)(1);

label_8000D064:
    ctx->pc = 0x8000D064u;
    // 8000D064: rlwinm r7, r7, 2, 0, 29
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[7], 2u) & 0xFFFFFFFCu;
    }

label_8000D068:
    ctx->pc = 0x8000D068u;
    // 8000D068: rlwinm r0, r5, 28, 0, 3
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 28u) & 0xF0000000u;
    }

label_8000D06C:
    ctx->pc = 0x8000D06Cu;
    // 8000D06C: stwx    r9, r6, r7
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[7];
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_8000D070:
    ctx->pc = 0x8000D070u;
    // 8000D070: rlwinm r5, r5, 1, 31, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 1u) & 0x00000001u;
    }

label_8000D074:
    ctx->pc = 0x8000D074u;
    // 8000D074: addi    r4, r4, -16212
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16212);

label_8000D078:
    ctx->pc = 0x8000D078u;
    // 8000D078: subf   r0, r5, r0
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8000D07C:
    ctx->pc = 0x8000D07Cu;
    // 8000D07C: or   r6, r9, r9
    {
        ctx->gpr[6] = ctx->gpr[9] | ctx->gpr[9];
    }

label_8000D080:
    ctx->pc = 0x8000D080u;
    // 8000D080: rlwinm r0, r0, 4, 0, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFFFu;
    }

label_8000D084:
    ctx->pc = 0x8000D084u;
    // 8000D084: add   r0, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8000D088:
    ctx->pc = 0x8000D088u;
    // 8000D088: addi    r5, r4, 512
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(512);

label_8000D08C:
    ctx->pc = 0x8000D08Cu;
    // 8000D08C: stw     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000D090:
    ctx->pc = 0x8000D090u;
    ctx->downcount -= 5;
    // 8000D090: lbz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8000D094:
    ctx->pc = 0x8000D094u;
    // 8000D094: stb     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8000D098:
    // 8000D098: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_8000D09C:
    // 8000D09C: cmplw   r6, r5
    {
        u32 val_a = (u32)(ctx->gpr[6]);
        u32 val_b = (u32)(ctx->gpr[5]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000D0A0:
    // 8000D0A0: bc    4, 2, 0x8000D0A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000D0A8;
        }
    }

label_8000D0A4:
    ctx->downcount -= 1;
    // 8000D0A4: or   r6, r4, r4
    {
        ctx->gpr[6] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8000D0A8:
    ctx->pc = 0x8000D0A8u;
    ctx->downcount -= 3;
    // 8000D0A8: lbz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8000D0AC:
    // 8000D0AC: extsb. r0, r0
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

label_8000D0B0:
    // 8000D0B0: bc    12, 2, 0x8000D0BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000D0BC;
        }
    }

label_8000D0B4:
    ctx->downcount -= 2;
    // 8000D0B4: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_8000D0B8:
    // 8000D0B8: b       0x8000D090
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000D090u;
                return;
            }
            goto label_8000D090;
    }

label_8000D0BC:
    ctx->pc = 0x8000D0BCu;
    ctx->downcount -= 3;
    // 8000D0BC: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8000D0C0:
    ctx->pc = 0x8000D0C0u;
    // 8000D0C0: stw     r6, -5692(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5692);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8000D0C4:
    ctx->pc = 0x8000D0C4u;
    // 8000D0C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000D0C8:
    ctx->pc = 0x8000D0C8u;
    ctx->downcount -= 3;
    // 8000D0C8: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_8000D0CC:
    ctx->pc = 0x8000D0CCu;
    // 8000D0CC: stw     r3, -16216(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-16216);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8000D0D0:
    ctx->pc = 0x8000D0D0u;
    // 8000D0D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000D0D4:
    ctx->pc = 0x8000D0D4u;
    ctx->downcount -= 1;
    // 8000D0D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000D0D8:
    ctx->pc = 0x8000D0D8u;
    ctx->downcount -= 8;
    // 8000D0D8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000D0DC:
    ctx->pc = 0x8000D0DCu;
    // 8000D0DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000D0E0:
    ctx->pc = 0x8000D0E0u;
    // 8000D0E0: lis     r5, -32738
    ctx->gpr[5] = ((u32)(s32)(-32738) << 16);

label_8000D0E4:
    ctx->pc = 0x8000D0E4u;
    // 8000D0E4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000D0E8:
    ctx->pc = 0x8000D0E8u;
    // 8000D0E8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000D0EC:
    ctx->pc = 0x8000D0ECu;
    // 8000D0EC: addi    r3, r5, -5760
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-5760);

label_8000D0F0:
    ctx->pc = 0x8000D0F0u;
    // 8000D0F0: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8000D0F4:
    ctx->pc = 0x8000D0F4u;
    // 8000D0F4: bl      0x800065BC
    {
            ctx->lr = 0x8000D0F8u;
            ctx->pc = 0x800065BCu;
            return;
    }

label_8000D0F8:
    ctx->pc = 0x8000D0F8u;
    ctx->downcount -= 5;
    // 8000D0F8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000D0FC:
    ctx->pc = 0x8000D0FCu;
    // 8000D0FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000D100:
    ctx->pc = 0x8000D100u;
    // 8000D100: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000D104:
    ctx->pc = 0x8000D104u;
    // 8000D104: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000D108:
    ctx->pc = 0x8000D108u;
    ctx->downcount -= 4;
    // 8000D108: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000D10C:
    ctx->pc = 0x8000D10Cu;
    // 8000D10C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000D110:
    ctx->pc = 0x8000D110u;
    // 8000D110: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000D114:
    ctx->pc = 0x8000D114u;
    // 8000D114: bl      0x8000D0D8
    {
            ctx->lr = 0x8000D118u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000D0D8u;
                return;
            }
            goto label_8000D0D8;
    }

label_8000D118:
    ctx->pc = 0x8000D118u;
    ctx->downcount -= 5;
    // 8000D118: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000D11C:
    ctx->pc = 0x8000D11Cu;
    // 8000D11C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000D120:
    ctx->pc = 0x8000D120u;
    // 8000D120: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000D124:
    ctx->pc = 0x8000D124u;
    // 8000D124: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000D128:
    ctx->pc = 0x8000D128u;
    ctx->downcount -= 16;
    // 8000D128: stwu     r1, -256(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-256);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000D12C:
    ctx->pc = 0x8000D12Cu;
    // 8000D12C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000D130:
    ctx->pc = 0x8000D130u;
    // 8000D130: stw     r0, 260(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(260);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000D134:
    ctx->pc = 0x8000D134u;
    // 8000D134: stmw     r30, 248(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8000D138:
    ctx->pc = 0x8000D138u;
    // 8000D138: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000D13C:
    ctx->pc = 0x8000D13Cu;
    // 8000D13C: bc    4, 6, 0x8000D160
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x02000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000D160;
        }
    }

label_8000D140:
    ctx->pc = 0x8000D140u;
    ctx->downcount -= 8;
    // 8000D140: stfd     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x8000D140u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_8000D144:
    ctx->pc = 0x8000D144u;
    // 8000D144: stfd     f2, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x8000D144u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[2]));
    }

label_8000D148:
    ctx->pc = 0x8000D148u;
    // 8000D148: stfd     f3, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x8000D148u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[3]));
    }

label_8000D14C:
    ctx->pc = 0x8000D14Cu;
    // 8000D14C: stfd     f4, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x8000D14Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[4]));
    }

label_8000D150:
    ctx->pc = 0x8000D150u;
    // 8000D150: stfd     f5, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x8000D150u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[5]));
    }

label_8000D154:
    ctx->pc = 0x8000D154u;
    // 8000D154: stfd     f6, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x8000D154u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[6]));
    }

label_8000D158:
    ctx->pc = 0x8000D158u;
    // 8000D158: stfd     f7, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x8000D158u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[7]));
    }

label_8000D15C:
    ctx->pc = 0x8000D15Cu;
    // 8000D15C: stfd     f8, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x8000D15Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[8]));
    }

label_8000D160:
    ctx->pc = 0x8000D160u;
    ctx->downcount -= 19;
    // 8000D160: addi    r11, r1, 264
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(264);

label_8000D164:
    ctx->pc = 0x8000D164u;
    // 8000D164: addi    r0, r1, 8
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(8);

label_8000D168:
    ctx->pc = 0x8000D168u;
    // 8000D168: lis     r12, 256
    ctx->gpr[12] = ((u32)(s32)(256) << 16);

label_8000D16C:
    ctx->pc = 0x8000D16Cu;
    // 8000D16C: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8000D170:
    ctx->pc = 0x8000D170u;
    // 8000D170: addi    r31, r1, 104
    ctx->gpr[31] = ctx->gpr[1] + (u32)(s32)(104);

label_8000D174:
    ctx->pc = 0x8000D174u;
    // 8000D174: addi    r3, r1, 116
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(116);

label_8000D178:
    ctx->pc = 0x8000D178u;
    // 8000D178: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000D17C:
    ctx->pc = 0x8000D17Cu;
    // 8000D17C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8000D180:
    ctx->pc = 0x8000D180u;
    // 8000D180: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8000D184:
    ctx->pc = 0x8000D184u;
    // 8000D184: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8000D188:
    ctx->pc = 0x8000D188u;
    // 8000D188: stw     r6, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8000D18C:
    ctx->pc = 0x8000D18Cu;
    // 8000D18C: stw     r7, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8000D190:
    ctx->pc = 0x8000D190u;
    // 8000D190: stw     r8, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8000D194:
    ctx->pc = 0x8000D194u;
    // 8000D194: stw     r9, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_8000D198:
    ctx->pc = 0x8000D198u;
    // 8000D198: stw     r10, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_8000D19C:
    ctx->pc = 0x8000D19Cu;
    // 8000D19C: stw     r12, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_8000D1A0:
    ctx->pc = 0x8000D1A0u;
    // 8000D1A0: stw     r11, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_8000D1A4:
    ctx->pc = 0x8000D1A4u;
    // 8000D1A4: stw     r0, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000D1A8:
    ctx->pc = 0x8000D1A8u;
    // 8000D1A8: bl      0x8001266C
    {
            ctx->lr = 0x8000D1ACu;
            ctx->pc = 0x8001266Cu;
            return;
    }

label_8000D1AC:
    ctx->pc = 0x8000D1ACu;
    ctx->downcount -= 2;
    // 8000D1AC: addi    r3, r1, 116
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(116);

label_8000D1B0:
    ctx->pc = 0x8000D1B0u;
    // 8000D1B0: bl      0x80014B68
    {
            ctx->lr = 0x8000D1B4u;
            ctx->pc = 0x80014B68u;
            return;
    }

label_8000D1B4:
    ctx->pc = 0x8000D1B4u;
    ctx->downcount -= 2;
    // 8000D1B4: cmplwi  r3, 0x0080
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0080u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000D1B8:
    ctx->pc = 0x8000D1B8u;
    // 8000D1B8: bc    12, 0, 0x8000D1D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000D1D8;
        }
    }

label_8000D1BC:
    ctx->pc = 0x8000D1BCu;
    ctx->downcount -= 5;
    // 8000D1BC: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8000D1C0:
    ctx->pc = 0x8000D1C0u;
    // 8000D1C0: addi    r4, r1, 116
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(116);

label_8000D1C4:
    ctx->pc = 0x8000D1C4u;
    // 8000D1C4: addi    r3, r3, -5684
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5684);

label_8000D1C8:
    ctx->pc = 0x8000D1C8u;
    // 8000D1C8: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8000D1CC:
    ctx->pc = 0x8000D1CCu;
    // 8000D1CC: bl      0x8000D128
    {
            ctx->lr = 0x8000D1D0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000D128u;
                return;
            }
            goto label_8000D128;
    }

label_8000D1D0:
    ctx->pc = 0x8000D1D0u;
    ctx->downcount -= 2;
    // 8000D1D0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8000D1D4:
    ctx->pc = 0x8000D1D4u;
    // 8000D1D4: stw     r0, 1(r0)
    {
        u32 ea = (u32)(s32)(1);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000D1D8:
    ctx->pc = 0x8000D1D8u;
    ctx->downcount -= 4;
    // 8000D1D8: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000D1DC:
    ctx->pc = 0x8000D1DCu;
    // 8000D1DC: lwz     r0, -16224(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-16224);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000D1E0:
    ctx->pc = 0x8000D1E0u;
    // 8000D1E0: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000D1E4:
    ctx->pc = 0x8000D1E4u;
    // 8000D1E4: bc    4, 2, 0x8000D1FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000D1FC;
        }
    }

label_8000D1E8:
    ctx->pc = 0x8000D1E8u;
    ctx->downcount -= 6;
    // 8000D1E8: lis     r4, -32738
    ctx->gpr[4] = ((u32)(s32)(-32738) << 16);

label_8000D1EC:
    ctx->pc = 0x8000D1ECu;
    // 8000D1EC: addi    r3, r1, 116
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(116);

label_8000D1F0:
    ctx->pc = 0x8000D1F0u;
    // 8000D1F0: lwz     r12, -5688(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5688);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8000D1F4:
    ctx->pc = 0x8000D1F4u;
    // 8000D1F4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8000D1F8:
    ctx->pc = 0x8000D1F8u;
    // 8000D1F8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8000D1FCu;
            ctx->pc = target;
            return;
        }
    }

label_8000D1FC:
    ctx->pc = 0x8000D1FCu;
    ctx->downcount -= 17;
    // 8000D1FC: lmw     r30, 248(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8000D200:
    ctx->pc = 0x8000D200u;
    // 8000D200: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000D204:
    ctx->pc = 0x8000D204u;
    // 8000D204: lwz     r0, 260(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(260);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000D208:
    ctx->pc = 0x8000D208u;
    // 8000D208: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000D20C:
    ctx->pc = 0x8000D20Cu;
    // 8000D20C: addi    r1, r1, 256
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(256);

label_8000D210:
    ctx->pc = 0x8000D210u;
    // 8000D210: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000D214:
    ctx->pc = 0x8000D214u;
    ctx->downcount -= 16;
    // 8000D214: stwu     r1, -256(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-256);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000D218:
    ctx->pc = 0x8000D218u;
    // 8000D218: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000D21C:
    ctx->pc = 0x8000D21Cu;
    // 8000D21C: stw     r0, 260(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(260);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000D220:
    ctx->pc = 0x8000D220u;
    // 8000D220: stmw     r30, 248(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8000D224:
    ctx->pc = 0x8000D224u;
    // 8000D224: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000D228:
    ctx->pc = 0x8000D228u;
    // 8000D228: bc    4, 6, 0x8000D24C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x02000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000D24C;
        }
    }

label_8000D22C:
    ctx->pc = 0x8000D22Cu;
    ctx->downcount -= 8;
    // 8000D22C: stfd     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x8000D22Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_8000D230:
    ctx->pc = 0x8000D230u;
    // 8000D230: stfd     f2, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x8000D230u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[2]));
    }

label_8000D234:
    ctx->pc = 0x8000D234u;
    // 8000D234: stfd     f3, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x8000D234u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[3]));
    }

label_8000D238:
    ctx->pc = 0x8000D238u;
    // 8000D238: stfd     f4, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x8000D238u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[4]));
    }

label_8000D23C:
    ctx->pc = 0x8000D23Cu;
    // 8000D23C: stfd     f5, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x8000D23Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[5]));
    }

label_8000D240:
    ctx->pc = 0x8000D240u;
    // 8000D240: stfd     f6, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x8000D240u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[6]));
    }

label_8000D244:
    ctx->pc = 0x8000D244u;
    // 8000D244: stfd     f7, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x8000D244u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[7]));
    }

label_8000D248:
    ctx->pc = 0x8000D248u;
    // 8000D248: stfd     f8, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x8000D248u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[8]));
    }

label_8000D24C:
    ctx->pc = 0x8000D24Cu;
    ctx->downcount -= 19;
    // 8000D24C: addi    r11, r1, 264
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(264);

label_8000D250:
    ctx->pc = 0x8000D250u;
    // 8000D250: addi    r0, r1, 8
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(8);

label_8000D254:
    ctx->pc = 0x8000D254u;
    // 8000D254: lis     r12, 256
    ctx->gpr[12] = ((u32)(s32)(256) << 16);

label_8000D258:
    ctx->pc = 0x8000D258u;
    // 8000D258: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8000D25C:
    ctx->pc = 0x8000D25Cu;
    // 8000D25C: addi    r31, r1, 104
    ctx->gpr[31] = ctx->gpr[1] + (u32)(s32)(104);

label_8000D260:
    ctx->pc = 0x8000D260u;
    // 8000D260: addi    r3, r1, 116
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(116);

label_8000D264:
    ctx->pc = 0x8000D264u;
    // 8000D264: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000D268:
    ctx->pc = 0x8000D268u;
    // 8000D268: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8000D26C:
    ctx->pc = 0x8000D26Cu;
    // 8000D26C: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8000D270:
    ctx->pc = 0x8000D270u;
    // 8000D270: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8000D274:
    ctx->pc = 0x8000D274u;
    // 8000D274: stw     r6, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8000D278:
    ctx->pc = 0x8000D278u;
    // 8000D278: stw     r7, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8000D27C:
    ctx->pc = 0x8000D27Cu;
    // 8000D27C: stw     r8, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8000D280:
    ctx->pc = 0x8000D280u;
    // 8000D280: stw     r9, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_8000D284:
    ctx->pc = 0x8000D284u;
    // 8000D284: stw     r10, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_8000D288:
    ctx->pc = 0x8000D288u;
    // 8000D288: stw     r12, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_8000D28C:
    ctx->pc = 0x8000D28Cu;
    // 8000D28C: stw     r11, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_8000D290:
    ctx->pc = 0x8000D290u;
    // 8000D290: stw     r0, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000D294:
    ctx->pc = 0x8000D294u;
    // 8000D294: bl      0x8001266C
    {
            ctx->lr = 0x8000D298u;
            ctx->pc = 0x8001266Cu;
            return;
    }

label_8000D298:
    ctx->pc = 0x8000D298u;
    ctx->downcount -= 2;
    // 8000D298: addi    r3, r1, 116
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(116);

label_8000D29C:
    ctx->pc = 0x8000D29Cu;
    // 8000D29C: bl      0x80014B68
    {
            ctx->lr = 0x8000D2A0u;
            ctx->pc = 0x80014B68u;
            return;
    }

label_8000D2A0:
    ctx->pc = 0x8000D2A0u;
    ctx->downcount -= 2;
    // 8000D2A0: cmplwi  r3, 0x0080
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0080u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000D2A4:
    ctx->pc = 0x8000D2A4u;
    // 8000D2A4: bc    12, 0, 0x8000D2D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000D2D8;
        }
    }

label_8000D2A8:
    ctx->pc = 0x8000D2A8u;
    ctx->downcount -= 5;
    // 8000D2A8: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8000D2AC:
    ctx->pc = 0x8000D2ACu;
    // 8000D2AC: addi    r4, r1, 116
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(116);

label_8000D2B0:
    ctx->pc = 0x8000D2B0u;
    // 8000D2B0: addi    r3, r3, -5684
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5684);

label_8000D2B4:
    ctx->pc = 0x8000D2B4u;
    // 8000D2B4: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8000D2B8:
    ctx->pc = 0x8000D2B8u;
    // 8000D2B8: bl      0x8001E8F8
    {
            ctx->lr = 0x8000D2BCu;
            ctx->pc = 0x8001E8F8u;
            return;
    }

label_8000D2BC:
    ctx->pc = 0x8000D2BCu;
    ctx->downcount -= 5;
    // 8000D2BC: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8000D2C0:
    ctx->pc = 0x8000D2C0u;
    // 8000D2C0: addi    r4, r1, 116
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(116);

label_8000D2C4:
    ctx->pc = 0x8000D2C4u;
    // 8000D2C4: addi    r3, r3, -5684
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5684);

label_8000D2C8:
    ctx->pc = 0x8000D2C8u;
    // 8000D2C8: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8000D2CC:
    ctx->pc = 0x8000D2CCu;
    // 8000D2CC: bl      0x8000D128
    {
            ctx->lr = 0x8000D2D0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000D128u;
                return;
            }
            goto label_8000D128;
    }

label_8000D2D0:
    ctx->pc = 0x8000D2D0u;
    ctx->downcount -= 2;
    // 8000D2D0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8000D2D4:
    ctx->pc = 0x8000D2D4u;
    // 8000D2D4: stw     r0, 1(r0)
    {
        u32 ea = (u32)(s32)(1);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000D2D8:
    ctx->pc = 0x8000D2D8u;
    ctx->downcount -= 2;
    // 8000D2D8: addi    r3, r1, 116
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(116);

label_8000D2DC:
    ctx->pc = 0x8000D2DCu;
    // 8000D2DC: bl      0x8000D040
    {
            ctx->lr = 0x8000D2E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000D040u;
                return;
            }
            goto label_8000D040;
    }

label_8000D2E0:
    ctx->pc = 0x8000D2E0u;
    ctx->downcount -= 4;
    // 8000D2E0: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000D2E4:
    ctx->pc = 0x8000D2E4u;
    // 8000D2E4: lwz     r0, -16224(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-16224);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000D2E8:
    ctx->pc = 0x8000D2E8u;
    // 8000D2E8: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000D2EC:
    ctx->pc = 0x8000D2ECu;
    // 8000D2EC: bc    4, 2, 0x8000D304
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000D304;
        }
    }

label_8000D2F0:
    ctx->pc = 0x8000D2F0u;
    ctx->downcount -= 6;
    // 8000D2F0: lis     r4, -32738
    ctx->gpr[4] = ((u32)(s32)(-32738) << 16);

label_8000D2F4:
    ctx->pc = 0x8000D2F4u;
    // 8000D2F4: addi    r3, r1, 116
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(116);

label_8000D2F8:
    ctx->pc = 0x8000D2F8u;
    // 8000D2F8: lwz     r12, -5688(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5688);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8000D2FC:
    ctx->pc = 0x8000D2FCu;
    // 8000D2FC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8000D300:
    ctx->pc = 0x8000D300u;
    // 8000D300: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8000D304u;
            ctx->pc = target;
            return;
        }
    }

label_8000D304:
    ctx->pc = 0x8000D304u;
    ctx->downcount -= 17;
    // 8000D304: lmw     r30, 248(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8000D308:
    ctx->pc = 0x8000D308u;
    // 8000D308: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000D30C:
    ctx->pc = 0x8000D30Cu;
    // 8000D30C: lwz     r0, 260(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(260);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000D310:
    ctx->pc = 0x8000D310u;
    // 8000D310: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000D314:
    ctx->pc = 0x8000D314u;
    // 8000D314: addi    r1, r1, 256
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(256);

label_8000D318:
    ctx->pc = 0x8000D318u;
    // 8000D318: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000D31C:
    ctx->pc = 0x8000D31Cu;
    ctx->downcount -= 2;
    // 8000D31C: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000D320:
    ctx->pc = 0x8000D320u;
    // 8000D320: bc    4, 6, 0x8000D344
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x02000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000D344;
        }
    }

label_8000D324:
    ctx->pc = 0x8000D324u;
    ctx->downcount -= 8;
    // 8000D324: stfd     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x8000D324u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_8000D328:
    ctx->pc = 0x8000D328u;
    // 8000D328: stfd     f2, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x8000D328u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[2]));
    }

label_8000D32C:
    ctx->pc = 0x8000D32Cu;
    // 8000D32C: stfd     f3, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x8000D32Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[3]));
    }

label_8000D330:
    ctx->pc = 0x8000D330u;
    // 8000D330: stfd     f4, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x8000D330u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[4]));
    }

label_8000D334:
    ctx->pc = 0x8000D334u;
    // 8000D334: stfd     f5, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x8000D334u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[5]));
    }

label_8000D338:
    ctx->pc = 0x8000D338u;
    // 8000D338: stfd     f6, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x8000D338u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[6]));
    }

label_8000D33C:
    ctx->pc = 0x8000D33Cu;
    // 8000D33C: stfd     f7, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x8000D33Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[7]));
    }

label_8000D340:
    ctx->pc = 0x8000D340u;
    // 8000D340: stfd     f8, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x8000D340u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[8]));
    }

label_8000D344:
    ctx->pc = 0x8000D344u;
    ctx->downcount -= 16;
    // 8000D344: addi    r11, r1, 136
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(136);

label_8000D348:
    ctx->pc = 0x8000D348u;
    // 8000D348: addi    r0, r1, 8
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(8);

label_8000D34C:
    ctx->pc = 0x8000D34Cu;
    // 8000D34C: lis     r12, 256
    ctx->gpr[12] = ((u32)(s32)(256) << 16);

label_8000D350:
    ctx->pc = 0x8000D350u;
    // 8000D350: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8000D354:
    ctx->pc = 0x8000D354u;
    // 8000D354: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000D358:
    ctx->pc = 0x8000D358u;
    // 8000D358: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8000D35C:
    ctx->pc = 0x8000D35Cu;
    // 8000D35C: stw     r6, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8000D360:
    ctx->pc = 0x8000D360u;
    // 8000D360: stw     r7, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8000D364:
    ctx->pc = 0x8000D364u;
    // 8000D364: stw     r8, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8000D368:
    ctx->pc = 0x8000D368u;
    // 8000D368: stw     r9, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_8000D36C:
    ctx->pc = 0x8000D36Cu;
    // 8000D36C: stw     r10, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_8000D370:
    ctx->pc = 0x8000D370u;
    // 8000D370: stw     r12, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_8000D374:
    ctx->pc = 0x8000D374u;
    // 8000D374: stw     r11, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_8000D378:
    ctx->pc = 0x8000D378u;
    // 8000D378: stw     r0, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000D37C:
    ctx->pc = 0x8000D37Cu;
    // 8000D37C: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_8000D380:
    ctx->pc = 0x8000D380u;
    // 8000D380: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000D384:
    ctx->pc = 0x8000D384u;
    ctx->downcount -= 4;
    // 8000D384: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000D388:
    ctx->pc = 0x8000D388u;
    // 8000D388: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000D38C:
    ctx->pc = 0x8000D38Cu;
    // 8000D38C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000D390:
    ctx->pc = 0x8000D390u;
    // 8000D390: bl      0x800219DC
    {
            ctx->lr = 0x8000D394u;
            ctx->pc = 0x800219DCu;
            return;
    }

label_8000D394:
    ctx->pc = 0x8000D394u;
    ctx->downcount -= 5;
    // 8000D394: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000D398:
    ctx->pc = 0x8000D398u;
    // 8000D398: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000D39C:
    ctx->pc = 0x8000D39Cu;
    // 8000D39C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000D3A0:
    ctx->pc = 0x8000D3A0u;
    // 8000D3A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000D3A4:
    ctx->pc = 0x8000D3A4u;
    ctx->downcount -= 4;
    // 8000D3A4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000D3A8:
    ctx->pc = 0x8000D3A8u;
    // 8000D3A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000D3AC:
    ctx->pc = 0x8000D3ACu;
    // 8000D3AC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000D3B0:
    ctx->pc = 0x8000D3B0u;
    // 8000D3B0: bl      0x800219A4
    {
            ctx->lr = 0x8000D3B4u;
            ctx->pc = 0x800219A4u;
            return;
    }

label_8000D3B4:
    ctx->pc = 0x8000D3B4u;
    ctx->downcount -= 5;
    // 8000D3B4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000D3B8:
    ctx->pc = 0x8000D3B8u;
    // 8000D3B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000D3BC:
    ctx->pc = 0x8000D3BCu;
    // 8000D3BC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000D3C0:
    ctx->pc = 0x8000D3C0u;
    // 8000D3C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000D3C4:
    ctx->pc = 0x8000D3C4u;
    ctx->downcount -= 4;
    // 8000D3C4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000D3C8:
    ctx->pc = 0x8000D3C8u;
    // 8000D3C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000D3CC:
    ctx->pc = 0x8000D3CCu;
    // 8000D3CC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000D3D0:
    ctx->pc = 0x8000D3D0u;
    // 8000D3D0: bl      0x80021AB8
    {
            ctx->lr = 0x8000D3D4u;
            ctx->pc = 0x80021AB8u;
            return;
    }

label_8000D3D4:
    ctx->pc = 0x8000D3D4u;
    ctx->downcount -= 5;
    // 8000D3D4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000D3D8:
    ctx->pc = 0x8000D3D8u;
    // 8000D3D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000D3DC:
    ctx->pc = 0x8000D3DCu;
    // 8000D3DC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000D3E0:
    ctx->pc = 0x8000D3E0u;
    // 8000D3E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000D3E4:
    ctx->pc = 0x8000D3E4u;
    ctx->downcount -= 6;
    // 8000D3E4: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_8000D3E8:
    ctx->pc = 0x8000D3E8u;
    // 8000D3E8: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_8000D3EC:
    ctx->pc = 0x8000D3ECu;
    // 8000D3EC: addi    r5, r4, -15448
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-15448);

label_8000D3F0:
    ctx->pc = 0x8000D3F0u;
    // 8000D3F0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8000D3F4:
    ctx->pc = 0x8000D3F4u;
    // 8000D3F4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_8000D3F8:
    ctx->downcount -= 4;
    // 8000D3F8: add   r6, r5, r4
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_8000D3FC:
    ctx->pc = 0x8000D3FCu;
    // 8000D3FC: lwz     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000D400:
    // 8000D400: cmpw    r3, r0
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

label_8000D404:
    // 8000D404: bc    4, 2, 0x8000D410
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000D410;
        }
    }

label_8000D408:
    ctx->downcount -= 2;
    // 8000D408: or   r3, r6, r6
    {
        ctx->gpr[3] = ctx->gpr[6] | ctx->gpr[6];
    }

label_8000D40C:
    ctx->pc = 0x8000D40Cu;
    // 8000D40C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000D410:
    ctx->downcount -= 2;
    // 8000D410: addi    r4, r4, 824
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(824);

label_8000D414:
    // 8000D414: bc    16, 0, 0x8000D3F8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000D3F8u;
                return;
            }
            goto label_8000D3F8;
        }
    }

label_8000D418:
    ctx->pc = 0x8000D418u;
    ctx->downcount -= 2;
    // 8000D418: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000D41C:
    ctx->pc = 0x8000D41Cu;
    // 8000D41C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000D420:
    ctx->pc = 0x8000D420u;
    ctx->downcount -= 4;
    // 8000D420: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000D424:
    ctx->pc = 0x8000D424u;
    // 8000D424: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000D428:
    ctx->pc = 0x8000D428u;
    // 8000D428: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000D42C:
    ctx->pc = 0x8000D42Cu;
    // 8000D42C: bl      0x8002399C
    {
            ctx->lr = 0x8000D430u;
            ctx->pc = 0x8002399Cu;
            return;
    }

label_8000D430:
    ctx->pc = 0x8000D430u;
    ctx->downcount -= 6;
    // 8000D430: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_8000D434:
    ctx->pc = 0x8000D434u;
    // 8000D434: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_8000D438:
    ctx->pc = 0x8000D438u;
    // 8000D438: addi    r5, r4, -15448
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-15448);

label_8000D43C:
    ctx->pc = 0x8000D43Cu;
    // 8000D43C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8000D440:
    ctx->pc = 0x8000D440u;
    // 8000D440: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_8000D444:
    ctx->downcount -= 4;
    // 8000D444: add   r6, r5, r4
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_8000D448:
    // 8000D448: addi    r0, r6, 16
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(16);

label_8000D44C:
    // 8000D44C: cmplw   r3, r0
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

label_8000D450:
    // 8000D450: bc    4, 2, 0x8000D45C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000D45C;
        }
    }

label_8000D454:
    ctx->downcount -= 2;
    // 8000D454: or   r3, r6, r6
    {
        ctx->gpr[3] = ctx->gpr[6] | ctx->gpr[6];
    }

label_8000D458:
    // 8000D458: b       0x8000D468
    {
            goto label_8000D468;
    }

label_8000D45C:
    ctx->downcount -= 2;
    // 8000D45C: addi    r4, r4, 824
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(824);

label_8000D460:
    // 8000D460: bc    16, 0, 0x8000D444
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000D444u;
                return;
            }
            goto label_8000D444;
        }
    }

label_8000D464:
    ctx->pc = 0x8000D464u;
    ctx->downcount -= 1;
    // 8000D464: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000D468:
    ctx->pc = 0x8000D468u;
    ctx->downcount -= 5;
    // 8000D468: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000D46C:
    ctx->pc = 0x8000D46Cu;
    // 8000D46C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000D470:
    ctx->pc = 0x8000D470u;
    // 8000D470: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000D474:
    ctx->pc = 0x8000D474u;
    // 8000D474: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000D478:
    ctx->pc = 0x8000D478u;
    ctx->downcount -= 5;
    // 8000D478: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000D47C:
    ctx->pc = 0x8000D47Cu;
    // 8000D47C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000D480:
    ctx->pc = 0x8000D480u;
    // 8000D480: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000D484:
    ctx->pc = 0x8000D484u;
    // 8000D484: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8000D488:
    ctx->pc = 0x8000D488u;
    // 8000D488: bl      0x8000D420
    {
            ctx->lr = 0x8000D48Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000D420u;
                return;
            }
            goto label_8000D420;
    }

label_8000D48C:
    ctx->pc = 0x8000D48Cu;
    ctx->downcount -= 6;
    // 8000D48C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000D490:
    ctx->pc = 0x8000D490u;
    // 8000D490: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8000D494:
    ctx->pc = 0x8000D494u;
    // 8000D494: lwz     r4, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000D498:
    ctx->pc = 0x8000D498u;
    // 8000D498: addi    r3, r3, -5656
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5656);

label_8000D49C:
    ctx->pc = 0x8000D49Cu;
    // 8000D49C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8000D4A0:
    ctx->pc = 0x8000D4A0u;
    // 8000D4A0: bl      0x800065BC
    {
            ctx->lr = 0x8000D4A4u;
            ctx->pc = 0x800065BCu;
            return;
    }

label_8000D4A4:
    ctx->pc = 0x8000D4A4u;
    ctx->downcount -= 2;
    // 8000D4A4: addi    r3, r31, 808
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(808);

label_8000D4A8:
    ctx->pc = 0x8000D4A8u;
    // 8000D4A8: bl      0x80023508
    {
            ctx->lr = 0x8000D4ACu;
            ctx->pc = 0x80023508u;
            return;
    }

label_8000D4AC:
    ctx->pc = 0x8000D4ACu;
    ctx->downcount -= 6;
    // 8000D4AC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000D4B0:
    ctx->pc = 0x8000D4B0u;
    // 8000D4B0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8000D4B4:
    ctx->pc = 0x8000D4B4u;
    // 8000D4B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000D4B8:
    ctx->pc = 0x8000D4B8u;
    // 8000D4B8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000D4BC:
    ctx->pc = 0x8000D4BCu;
    // 8000D4BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000D4C0:
    ctx->pc = 0x8000D4C0u;
    ctx->downcount -= 5;
    // 8000D4C0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000D4C4:
    ctx->pc = 0x8000D4C4u;
    // 8000D4C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000D4C8:
    ctx->pc = 0x8000D4C8u;
    // 8000D4C8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000D4CC:
    ctx->pc = 0x8000D4CCu;
    // 8000D4CC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8000D4D0:
    ctx->pc = 0x8000D4D0u;
    // 8000D4D0: bl      0x8000D3E4
    {
            ctx->lr = 0x8000D4D4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000D3E4u;
                return;
            }
            goto label_8000D3E4;
    }

label_8000D4D4:
    ctx->pc = 0x8000D4D4u;
    ctx->downcount -= 6;
    // 8000D4D4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000D4D8:
    ctx->pc = 0x8000D4D8u;
    // 8000D4D8: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8000D4DC:
    ctx->pc = 0x8000D4DCu;
    // 8000D4DC: lwz     r4, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8000D4E0:
    ctx->pc = 0x8000D4E0u;
    // 8000D4E0: addi    r3, r3, -5632
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5632);

label_8000D4E4:
    ctx->pc = 0x8000D4E4u;
    // 8000D4E4: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8000D4E8:
    ctx->pc = 0x8000D4E8u;
    // 8000D4E8: bl      0x800065BC
    {
            ctx->lr = 0x8000D4ECu;
            ctx->pc = 0x800065BCu;
            return;
    }

label_8000D4EC:
    ctx->pc = 0x8000D4ECu;
    ctx->downcount -= 2;
    // 8000D4EC: addi    r3, r31, 808
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(808);

label_8000D4F0:
    ctx->pc = 0x8000D4F0u;
    // 8000D4F0: bl      0x80023578
    {
            ctx->lr = 0x8000D4F4u;
            ctx->pc = 0x80023578u;
            return;
    }

label_8000D4F4:
    ctx->pc = 0x8000D4F4u;
    ctx->downcount -= 6;
    // 8000D4F4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000D4F8:
    ctx->pc = 0x8000D4F8u;
    // 8000D4F8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8000D4FC:
    ctx->pc = 0x8000D4FCu;
    // 8000D4FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8000D500:
    ctx->pc = 0x8000D500u;
    // 8000D500: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000D504:
    ctx->pc = 0x8000D504u;
    // 8000D504: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000D508:
    ctx->pc = 0x8000D508u;
    ctx->downcount -= 5;
    // 8000D508: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000D50C:
    ctx->pc = 0x8000D50Cu;
    // 8000D50C: addi    r6, r3, -15692
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-15692);

label_8000D510:
    ctx->pc = 0x8000D510u;
    // 8000D510: lwz     r0, 208(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000D514:
    ctx->pc = 0x8000D514u;
    // 8000D514: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000D518:
    ctx->pc = 0x8000D518u;
    // 8000D518: bclr  4, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000D51C:
    ctx->pc = 0x8000D51Cu;
    ctx->downcount -= 9;
    // 8000D51C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8000D520:
    ctx->pc = 0x8000D520u;
    // 8000D520: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8000D524:
    ctx->pc = 0x8000D524u;
    // 8000D524: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_8000D528:
    ctx->pc = 0x8000D528u;
    // 8000D528: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_8000D52C:
    ctx->pc = 0x8000D52Cu;
    // 8000D52C: stw     r3, 208(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8000D530:
    ctx->pc = 0x8000D530u;
    // 8000D530: sth     r5, 202(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(202);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8000D534:
    ctx->pc = 0x8000D534u;
    // 8000D534: stw     r4, 204(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8000D538:
    ctx->pc = 0x8000D538u;
    // 8000D538: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_8000D53C:
    loop_8000D53C(ctx);
    if (ctx->pc == 0x8000D54Cu) goto label_8000D54C;
    return;
label_8000D540:
    // 8000D540: addi    r4, r4, 20
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20);

label_8000D544:
    ctx->pc = 0x8000D544u;
    // 8000D544: stw     r5, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8000D548:
    // 8000D548: bc    16, 0, 0x8000D53C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000D53Cu;
                return;
            }
            goto label_8000D53C;
        }
    }

label_8000D54C:
    ctx->pc = 0x8000D54Cu;
    ctx->downcount -= 1;
    // 8000D54C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000D550:
    ctx->pc = 0x8000D550u;
    ctx->downcount -= 7;
    // 8000D550: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_8000D554:
    ctx->pc = 0x8000D554u;
    // 8000D554: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_8000D558:
    ctx->pc = 0x8000D558u;
    // 8000D558: addi    r5, r4, -15692
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-15692);

label_8000D55C:
    ctx->pc = 0x8000D55Cu;
    // 8000D55C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8000D560:
    ctx->pc = 0x8000D560u;
    // 8000D560: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8000D564:
    ctx->pc = 0x8000D564u;
    // 8000D564: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_8000D568:
    ctx->downcount -= 4;
    // 8000D568: add   r7, r5, r4
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_8000D56C:
    ctx->pc = 0x8000D56Cu;
    // 8000D56C: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000D570:
    // 8000D570: cmpw    r0, r3
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

label_8000D574:
    // 8000D574: bc    4, 2, 0x8000D580
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000D580;
        }
    }

label_8000D578:
    ctx->downcount -= 2;
    // 8000D578: or   r6, r7, r7
    {
        ctx->gpr[6] = ctx->gpr[7] | ctx->gpr[7];
    }

label_8000D57C:
    // 8000D57C: b       0x8000D588
    {
            goto label_8000D588;
    }

label_8000D580:
    ctx->downcount -= 2;
    // 8000D580: addi    r4, r4, 20
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20);

label_8000D584:
    // 8000D584: bc    16, 0, 0x8000D568
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000D568u;
                return;
            }
            goto label_8000D568;
        }
    }

label_8000D588:
    ctx->pc = 0x8000D588u;
    ctx->downcount -= 2;
    // 8000D588: or   r3, r6, r6
    {
        ctx->gpr[3] = ctx->gpr[6] | ctx->gpr[6];
    }

label_8000D58C:
    ctx->pc = 0x8000D58Cu;
    // 8000D58C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800095E0;
        }
    }

label_8000D590:
    ctx->pc = 0x8000D590u;
    ctx->downcount -= 6;
    // 8000D590: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000D594:
    ctx->pc = 0x8000D594u;
    // 8000D594: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8000D598:
    ctx->pc = 0x8000D598u;
    // 8000D598: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000D59C:
    ctx->pc = 0x8000D59Cu;
    // 8000D59C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8000D5A0:
    ctx->pc = 0x8000D5A0u;
    // 8000D5A0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8000D5A4:
    ctx->pc = 0x8000D5A4u;
    // 8000D5A4: bl      0x8000D508
    {
            ctx->lr = 0x8000D5A8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000D508u;
                return;
            }
            goto label_8000D508;
    }

label_8000D5A8:
    ctx->pc = 0x8000D5A8u;
    ctx->downcount -= 10;
    // 8000D5A8: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000D5AC:
    ctx->pc = 0x8000D5ACu;
    // 8000D5AC: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_8000D5B0:
    ctx->pc = 0x8000D5B0u;
    // 8000D5B0: addi    r4, r3, -15692
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-15692);

label_8000D5B4:
    ctx->pc = 0x8000D5B4u;
    // 8000D5B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000D5B8:
    ctx->pc = 0x8000D5B8u;
    // 8000D5B8: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_8000D5BC:
    ctx->pc = 0x8000D5BCu;
    // 8000D5BC: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8000D5C0:
    ctx->pc = 0x8000D5C0u;
    // 8000D5C0: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000D5C4:
    ctx->pc = 0x8000D5C4u;
    // 8000D5C4: cmpwi   r0, -1
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

label_8000D5C8:
    ctx->pc = 0x8000D5C8u;
    // 8000D5C8: bc    4, 2, 0x8000D5EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x8000D5ECu;
            return;
        }
    }

label_8000D5CC:
    ctx->pc = 0x8000D5CCu;
    ctx->downcount -= 5;
    // 8000D5CC: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8000D5D0:
    ctx->pc = 0x8000D5D0u;
    // 8000D5D0: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8000D5D4:
    ctx->pc = 0x8000D5D4u;
    // 8000D5D4: addi    r4, r3, -15692
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-15692);

label_8000D5D8:
    ctx->pc = 0x8000D5D8u;
    // 8000D5D8: lwz     r3, 204(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(204);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000D5DC:
    ctx->pc = 0x8000D5DCu;
    // 8000D5DC: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

    ctx->pc = 0x8000D5E0u;
    return;
return_dispatch_800095E0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x800095F0u: goto label_800095F0;
    case 0x80009608u: goto label_80009608;
    case 0x80009634u: goto label_80009634;
    case 0x80009644u: goto label_80009644;
    case 0x80009660u: goto label_80009660;
    case 0x80009668u: goto label_80009668;
    case 0x800096B8u: goto label_800096B8;
    case 0x800096D0u: goto label_800096D0;
    case 0x800096E4u: goto label_800096E4;
    case 0x800096F8u: goto label_800096F8;
    case 0x80009708u: goto label_80009708;
    case 0x80009718u: goto label_80009718;
    case 0x8000972Cu: goto label_8000972C;
    case 0x80009758u: goto label_80009758;
    case 0x80009768u: goto label_80009768;
    case 0x80009784u: goto label_80009784;
    case 0x8000978Cu: goto label_8000978C;
    case 0x800097F0u: goto label_800097F0;
    case 0x800097F8u: goto label_800097F8;
    case 0x80009810u: goto label_80009810;
    case 0x8000984Cu: goto label_8000984C;
    case 0x80009858u: goto label_80009858;
    case 0x80009864u: goto label_80009864;
    case 0x80009880u: goto label_80009880;
    case 0x80009890u: goto label_80009890;
    case 0x800098E0u: goto label_800098E0;
    case 0x80009918u: goto label_80009918;
    case 0x80009934u: goto label_80009934;
    case 0x800099ECu: goto label_800099EC;
    case 0x80009A44u: goto label_80009A44;
    case 0x80009A54u: goto label_80009A54;
    case 0x80009A78u: goto label_80009A78;
    case 0x80009AC4u: goto label_80009AC4;
    case 0x80009AD4u: goto label_80009AD4;
    case 0x80009B08u: goto label_80009B08;
    case 0x80009B18u: goto label_80009B18;
    case 0x80009B64u: goto label_80009B64;
    case 0x80009B70u: goto label_80009B70;
    case 0x80009B7Cu: goto label_80009B7C;
    case 0x80009C00u: goto label_80009C00;
    case 0x80009C1Cu: goto label_80009C1C;
    case 0x80009C28u: goto label_80009C28;
    case 0x80009C40u: goto label_80009C40;
    case 0x80009C50u: goto label_80009C50;
    case 0x80009C58u: goto label_80009C58;
    case 0x80009E0Cu: goto label_80009E0C;
    case 0x80009EE0u: goto label_80009EE0;
    case 0x8000A070u: goto label_8000A070;
    case 0x8000A190u: goto label_8000A190;
    case 0x8000A198u: goto label_8000A198;
    case 0x8000A1C8u: goto label_8000A1C8;
    case 0x8000A210u: goto label_8000A210;
    case 0x8000A270u: goto label_8000A270;
    case 0x8000A2D8u: goto label_8000A2D8;
    case 0x8000A314u: goto label_8000A314;
    case 0x8000A3A4u: goto label_8000A3A4;
    case 0x8000A458u: goto label_8000A458;
    case 0x8000A4D8u: goto label_8000A4D8;
    case 0x8000A4FCu: goto label_8000A4FC;
    case 0x8000A524u: goto label_8000A524;
    case 0x8000A55Cu: goto label_8000A55C;
    case 0x8000A584u: goto label_8000A584;
    case 0x8000A5B0u: goto label_8000A5B0;
    case 0x8000A6C0u: goto label_8000A6C0;
    case 0x8000A734u: goto label_8000A734;
    case 0x8000A7BCu: goto label_8000A7BC;
    case 0x8000A7E8u: goto label_8000A7E8;
    case 0x8000A7F0u: goto label_8000A7F0;
    case 0x8000A8E8u: goto label_8000A8E8;
    case 0x8000A900u: goto label_8000A900;
    case 0x8000A990u: goto label_8000A990;
    case 0x8000A9A8u: goto label_8000A9A8;
    case 0x8000AA34u: goto label_8000AA34;
    case 0x8000AA4Cu: goto label_8000AA4C;
    case 0x8000AAECu: goto label_8000AAEC;
    case 0x8000AB04u: goto label_8000AB04;
    case 0x8000AB14u: goto label_8000AB14;
    case 0x8000AB24u: goto label_8000AB24;
    case 0x8000ABA4u: goto label_8000ABA4;
    case 0x8000ABBCu: goto label_8000ABBC;
    case 0x8000ACDCu: goto label_8000ACDC;
    case 0x8000AD50u: goto label_8000AD50;
    case 0x8000AE10u: goto label_8000AE10;
    case 0x8000AE18u: goto label_8000AE18;
    case 0x8000AED4u: goto label_8000AED4;
    case 0x8000AEECu: goto label_8000AEEC;
    case 0x8000AFD4u: goto label_8000AFD4;
    case 0x8000AFECu: goto label_8000AFEC;
    case 0x8000B020u: goto label_8000B020;
    case 0x8000B030u: goto label_8000B030;
    case 0x8000B0C0u: goto label_8000B0C0;
    case 0x8000B0D8u: goto label_8000B0D8;
    case 0x8000B1C0u: goto label_8000B1C0;
    case 0x8000B1D8u: goto label_8000B1D8;
    case 0x8000B300u: goto label_8000B300;
    case 0x8000B310u: goto label_8000B310;
    case 0x8000B38Cu: goto label_8000B38C;
    case 0x8000B40Cu: goto label_8000B40C;
    case 0x8000B420u: goto label_8000B420;
    case 0x8000B438u: goto label_8000B438;
    case 0x8000B46Cu: goto label_8000B46C;
    case 0x8000B488u: goto label_8000B488;
    case 0x8000B494u: goto label_8000B494;
    case 0x8000B4A8u: goto label_8000B4A8;
    case 0x8000B660u: goto label_8000B660;
    case 0x8000B690u: goto label_8000B690;
    case 0x8000B760u: goto label_8000B760;
    case 0x8000B784u: goto label_8000B784;
    case 0x8000BB90u: goto label_8000BB90;
    case 0x8000BBB8u: goto label_8000BBB8;
    case 0x8000BC24u: goto label_8000BC24;
    case 0x8000BC4Cu: goto label_8000BC4C;
    case 0x8000BC8Cu: goto label_8000BC8C;
    case 0x8000BDB4u: goto label_8000BDB4;
    case 0x8000BDC0u: goto label_8000BDC0;
    case 0x8000BE4Cu: goto label_8000BE4C;
    case 0x8000BE7Cu: goto label_8000BE7C;
    case 0x8000BE80u: goto label_8000BE80;
    case 0x8000BE94u: goto label_8000BE94;
    case 0x8000BE98u: goto label_8000BE98;
    case 0x8000BE9Cu: goto label_8000BE9C;
    case 0x8000BF6Cu: goto label_8000BF6C;
    case 0x8000BF78u: goto label_8000BF78;
    case 0x8000BF84u: goto label_8000BF84;
    case 0x8000BFB8u: goto label_8000BFB8;
    case 0x8000BFE8u: goto label_8000BFE8;
    case 0x8000C018u: goto label_8000C018;
    case 0x8000C048u: goto label_8000C048;
    case 0x8000C084u: goto label_8000C084;
    case 0x8000C0C0u: goto label_8000C0C0;
    case 0x8000C108u: goto label_8000C108;
    case 0x8000C140u: goto label_8000C140;
    case 0x8000C154u: goto label_8000C154;
    case 0x8000C1A0u: goto label_8000C1A0;
    case 0x8000C1C0u: goto label_8000C1C0;
    case 0x8000C268u: goto label_8000C268;
    case 0x8000C26Cu: goto label_8000C26C;
    case 0x8000C304u: goto label_8000C304;
    case 0x8000C308u: goto label_8000C308;
    case 0x8000C39Cu: goto label_8000C39C;
    case 0x8000C3A8u: goto label_8000C3A8;
    case 0x8000C3B4u: goto label_8000C3B4;
    case 0x8000C3ECu: goto label_8000C3EC;
    case 0x8000C3F8u: goto label_8000C3F8;
    case 0x8000C420u: goto label_8000C420;
    case 0x8000C424u: goto label_8000C424;
    case 0x8000C428u: goto label_8000C428;
    case 0x8000C42Cu: goto label_8000C42C;
    case 0x8000C474u: goto label_8000C474;
    case 0x8000C490u: goto label_8000C490;
    case 0x8000C500u: goto label_8000C500;
    case 0x8000C514u: goto label_8000C514;
    case 0x8000C540u: goto label_8000C540;
    case 0x8000C5BCu: goto label_8000C5BC;
    case 0x8000C5D0u: goto label_8000C5D0;
    case 0x8000C5FCu: goto label_8000C5FC;
    case 0x8000C6B0u: goto label_8000C6B0;
    case 0x8000C6D8u: goto label_8000C6D8;
    case 0x8000C6F4u: goto label_8000C6F4;
    case 0x8000C710u: goto label_8000C710;
    case 0x8000C744u: goto label_8000C744;
    case 0x8000C768u: goto label_8000C768;
    case 0x8000C7C0u: goto label_8000C7C0;
    case 0x8000C7E0u: goto label_8000C7E0;
    case 0x8000C7F8u: goto label_8000C7F8;
    case 0x8000C804u: goto label_8000C804;
    case 0x8000C888u: goto label_8000C888;
    case 0x8000C89Cu: goto label_8000C89C;
    case 0x8000C8B0u: goto label_8000C8B0;
    case 0x8000C8C8u: goto label_8000C8C8;
    case 0x8000C8D0u: goto label_8000C8D0;
    case 0x8000C8F4u: goto label_8000C8F4;
    case 0x8000C910u: goto label_8000C910;
    case 0x8000C990u: goto label_8000C990;
    case 0x8000C99Cu: goto label_8000C99C;
    case 0x8000C9B0u: goto label_8000C9B0;
    case 0x8000C9C8u: goto label_8000C9C8;
    case 0x8000CA28u: goto label_8000CA28;
    case 0x8000CA50u: goto label_8000CA50;
    case 0x8000CA6Cu: goto label_8000CA6C;
    case 0x8000CA7Cu: goto label_8000CA7C;
    case 0x8000CAC8u: goto label_8000CAC8;
    case 0x8000CB30u: goto label_8000CB30;
    case 0x8000CB58u: goto label_8000CB58;
    case 0x8000CB74u: goto label_8000CB74;
    case 0x8000CB84u: goto label_8000CB84;
    case 0x8000CBD0u: goto label_8000CBD0;
    case 0x8000CC34u: goto label_8000CC34;
    case 0x8000CC5Cu: goto label_8000CC5C;
    case 0x8000CC84u: goto label_8000CC84;
    case 0x8000CCA0u: goto label_8000CCA0;
    case 0x8000CCBCu: goto label_8000CCBC;
    case 0x8000CCF0u: goto label_8000CCF0;
    case 0x8000CD14u: goto label_8000CD14;
    case 0x8000CD6Cu: goto label_8000CD6C;
    case 0x8000CD8Cu: goto label_8000CD8C;
    case 0x8000CDA4u: goto label_8000CDA4;
    case 0x8000CDB0u: goto label_8000CDB0;
    case 0x8000CE34u: goto label_8000CE34;
    case 0x8000CE50u: goto label_8000CE50;
    case 0x8000CE64u: goto label_8000CE64;
    case 0x8000CE7Cu: goto label_8000CE7C;
    case 0x8000CE84u: goto label_8000CE84;
    case 0x8000CEA8u: goto label_8000CEA8;
    case 0x8000CEC4u: goto label_8000CEC4;
    case 0x8000CF44u: goto label_8000CF44;
    case 0x8000CF50u: goto label_8000CF50;
    case 0x8000CF64u: goto label_8000CF64;
    case 0x8000CF7Cu: goto label_8000CF7C;
    case 0x8000CFFCu: goto label_8000CFFC;
    case 0x8000D024u: goto label_8000D024;
    case 0x8000D0F8u: goto label_8000D0F8;
    case 0x8000D118u: goto label_8000D118;
    case 0x8000D1ACu: goto label_8000D1AC;
    case 0x8000D1B4u: goto label_8000D1B4;
    case 0x8000D1D0u: goto label_8000D1D0;
    case 0x8000D1FCu: goto label_8000D1FC;
    case 0x8000D298u: goto label_8000D298;
    case 0x8000D2A0u: goto label_8000D2A0;
    case 0x8000D2BCu: goto label_8000D2BC;
    case 0x8000D2D0u: goto label_8000D2D0;
    case 0x8000D2E0u: goto label_8000D2E0;
    case 0x8000D304u: goto label_8000D304;
    case 0x8000D394u: goto label_8000D394;
    case 0x8000D3B4u: goto label_8000D3B4;
    case 0x8000D3D4u: goto label_8000D3D4;
    case 0x8000D430u: goto label_8000D430;
    case 0x8000D48Cu: goto label_8000D48C;
    case 0x8000D4A4u: goto label_8000D4A4;
    case 0x8000D4ACu: goto label_8000D4AC;
    case 0x8000D4D4u: goto label_8000D4D4;
    case 0x8000D4ECu: goto label_8000D4EC;
    case 0x8000D4F4u: goto label_8000D4F4;
    case 0x8000D5A8u: goto label_8000D5A8;
    default: return;
    }
}

